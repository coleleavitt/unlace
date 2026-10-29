__int64 __fastcall CoinFactorization::updateColumnL(CoinFactorization *this, CoinIndexedVector *a2, int *a3)
{
  __int64 result; // rax
  int v4; // r8d
  double v5; // xmm1_8
  int v6; // ecx
  int v7; // ecx

  result = *((unsigned int *)this + 174);
  if ( !(_DWORD)result )
    return result;
  v4 = *((_DWORD *)this + 262);
  if ( v4 <= 0 )
    return CoinFactorization::updateColumnLDensish(this, a2, a3);
  v5 = *((double *)this + 125);
  v6 = *((_DWORD *)a2 + 4);
  if ( v5 == 0.0 )
  {
    if ( v4 <= v6 || 4 * (int)result <= v6 )
      return CoinFactorization::updateColumnLDensish(this, a2, a3);
    return CoinFactorization::updateColumnLSparse(this, a2, a3);
  }
  v7 = (int)((double)v6 * v5);
  if ( v4 > v7 && 4 * (int)result > v7 )
    return CoinFactorization::updateColumnLSparse(this, a2, a3);
  if ( *((_DWORD *)this + 263) <= v7 || 2 * (int)result <= v7 )
    return CoinFactorization::updateColumnLDensish(this, a2, a3);
  return CoinFactorization::updateColumnLSparsish(this, a2, a3);
}

