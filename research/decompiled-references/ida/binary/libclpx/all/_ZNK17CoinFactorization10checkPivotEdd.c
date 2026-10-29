__int64 __fastcall CoinFactorization::checkPivot(CoinFactorization *this, double a2, double a3)
{
  double v3; // xmm4_8
  double v4; // xmm0_8
  int v5; // eax
  int v6; // edx
  double v7; // xmm2_8
  __int64 result; // rax

  v3 = fabs(a2);
  v4 = fabs(1.0 - fabs(a2 / a3));
  if ( v3 <= 0.000000001 )
    return 2 * (unsigned int)(v4 >= 1.0e-10);
  v5 = *((_DWORD *)this + 8);
  v6 = *((_DWORD *)this + 9);
  v7 = 0.00001;
  if ( v5 + 1 < v6 )
  {
    v7 = 0.000001;
    if ( v6 > v5 + 9 )
    {
      v7 = 1.0e-10;
      if ( v6 <= v5 + 49 )
        v7 = 0.00000001;
    }
  }
  result = 0;
  if ( v7 * *((double *)this + 3) <= v4 )
  {
    result = 1;
    if ( fabs(fabs(a3) - v3) >= 1.0e-12 )
      return (unsigned int)(v4 >= 0.00000001) + 1;
  }
  return result;
}

