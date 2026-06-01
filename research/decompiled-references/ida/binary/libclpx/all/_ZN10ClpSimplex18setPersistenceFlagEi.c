__int64 __fastcall ClpSimplex::setPersistenceFlag(ClpSimplex *this, int a2)
{
  __int64 result; // rax
  CoinFactorization *v3; // rdi

  if ( a2 )
    ClpSimplex::startPermanentArrays(this);
  else
    *((_DWORD *)this + 84) &= ~0x10000u;
  result = *((_QWORD *)this + 158);
  if ( result )
  {
    v3 = *(CoinFactorization **)(result + 8);
    if ( v3 )
      return CoinFactorization::setPersistenceFlag(v3, a2);
  }
  return result;
}

