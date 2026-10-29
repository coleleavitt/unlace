void __fastcall getNorms(double *a1, int a2, double *a3, double *a4)
{
  double v4; // xmm1_8
  const double *v5; // rax
  double v6; // xmm0_8

  *a3 = 0.0;
  *a4 = 0.0;
  if ( a2 > 0 )
  {
    v4 = 0.0;
    v5 = &a1[(unsigned int)(a2 - 1) + 1];
    while ( 1 )
    {
      *a4 = *a1 * *a1 + v4;
      v6 = fabs(*a1);
      if ( *a3 <= v6 )
      {
        ++a1;
        *a3 = v6;
        if ( a1 == v5 )
          return;
      }
      else if ( ++a1 == v5 )
      {
        return;
      }
      v4 = *a4;
    }
  }
}

