double __fastcall CoinFactorization::adjustedAreaFactor(CoinFactorization *this)
{
  int v1; // eax
  double result; // xmm0_8

  v1 = *((_DWORD *)this + 216);
  result = *((double *)this + 2);
  if ( v1 )
  {
    if ( result > 1.0 )
      return result * ((double)v1 * (double)v1 / ((double)*((int *)this + 18) - (double)v1 * (double)v1 + 1.0) + 1.0);
  }
  return result;
}

