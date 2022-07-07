#include <stdio.h>
#include <math.h>
int main()
{
  int h, b, B;
  printf("Enter the h value :",h); scanf("%d",&h);
  printf("Enter the b value :",b); scanf("%d",&b);
  printf("Enter the B value :",B); scanf("%d",&B);
  float s;
  s = (b+B)*h/2;
printf("The area of this Trapezoid :%.2f",s);
return 0;
}
