__int64 __fastcall ClpFactorization::goSparse(ClpFactorization *this)
{
  CoinFactorization *v1; // rdi
  __int64 result; // rax

  if ( !*(_QWORD *)this )
  {
    v1 = *((CoinFactorization **)this + 1);
    if ( v1 )
      return CoinFactorization::goSparse(v1);
  }
  return result;
}

