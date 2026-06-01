double __fastcall sqrt_wrapper(double a1)
{
  double v1; // xmm1_8

  v1 = sqrt(a1);
  if ( a1 < 0.0 )
    sqrt(a1);
  return v1;
}

