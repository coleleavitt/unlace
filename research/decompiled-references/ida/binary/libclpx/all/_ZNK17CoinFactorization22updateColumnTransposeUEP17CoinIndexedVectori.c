__int64 __fastcall CoinFactorization::updateColumnTransposeU(CoinFactorization *this, CoinIndexedVector *a2, int a3)
{
  int v3; // ecx
  double v4; // xmm1_8
  int v5; // eax
  int v6; // eax

  v3 = *((_DWORD *)this + 262);
  if ( v3 <= 0 )
    return CoinFactorization::updateColumnTransposeUDensish(this, a2, a3);
  v4 = *((double *)this + 128);
  v5 = *((_DWORD *)a2 + 4);
  if ( v4 == 0.0 )
  {
    if ( v3 <= v5 )
      return CoinFactorization::updateColumnTransposeUDensish(this, a2, a3);
    return CoinFactorization::updateColumnTransposeUSparse(this, a2);
  }
  v6 = (int)((double)v5 * v4);
  if ( v3 > v6 )
    return CoinFactorization::updateColumnTransposeUSparse(this, a2);
  if ( *((_DWORD *)this + 263) <= v6 )
    return CoinFactorization::updateColumnTransposeUDensish(this, a2, a3);
  return CoinFactorization::updateColumnTransposeUSparsish(this, a2, a3);
}

