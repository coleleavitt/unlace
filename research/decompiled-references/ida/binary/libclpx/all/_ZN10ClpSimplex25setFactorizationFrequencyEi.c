__int64 __fastcall ClpSimplex::setFactorizationFrequency(ClpSimplex *this, int a2)
{
  __int64 result; // rax
  CoinFactorization *v3; // rdi

  result = *((_QWORD *)this + 158);
  if ( result )
  {
    v3 = *(CoinFactorization **)(result + 8);
    if ( v3 )
      return CoinFactorization::maximumPivots(v3, a2);
    else
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(result + 16) + 24LL))(*(_QWORD *)(result + 16));
  }
  return result;
}

