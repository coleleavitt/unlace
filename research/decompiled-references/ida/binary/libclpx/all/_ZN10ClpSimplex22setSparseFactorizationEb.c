__int64 __fastcall ClpSimplex::setSparseFactorization(ClpSimplex *this, char a2)
{
  CoinFactorization **v2; // rdi
  __int64 result; // rax

  v2 = *((CoinFactorization ***)this + 158);
  result = (__int64)v2[1];
  if ( a2 )
  {
    if ( !result )
      return ClpFactorization::goSparse((ClpFactorization *)v2);
    result = *(unsigned int *)(result + 1048);
    if ( !(_DWORD)result )
      return ClpFactorization::goSparse((ClpFactorization *)v2);
  }
  else if ( result )
  {
    return CoinFactorization::sparseThreshold(v2[1], 0);
  }
  return result;
}

