__int64 __fastcall CoinFactorization::factorSparse(CoinFactorization *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 11);
  if ( *((_DWORD *)this + 8) >= v1 )
    v1 = *((_DWORD *)this + 8);
  if ( v1 <= 65529 )
    return CoinFactorization::factorSparseSmall(this);
  else
    return CoinFactorization::factorSparseLarge(this);
}

