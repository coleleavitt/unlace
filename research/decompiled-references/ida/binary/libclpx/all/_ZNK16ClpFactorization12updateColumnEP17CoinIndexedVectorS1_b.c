__int64 __fastcall ClpFactorization::updateColumn(
        ClpFactorization *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        bool a4)
{
  __int64 v4; // r8
  __int64 result; // rax

  v4 = *((_QWORD *)this + 1);
  if ( v4 )
    result = *(unsigned int *)(v4 + 32);
  else
    result = *(unsigned int *)(*((_QWORD *)this + 2) + 36LL);
  if ( (_DWORD)result )
  {
    if ( *(_QWORD *)this )
    {
      ClpNetworkBasis::updateColumn(*(ClpNetworkBasis **)this, a2, a3, -1);
      return 1;
    }
    else if ( v4 )
    {
      return CoinFactorization::updateColumn(*((CoinFactorization **)this + 1), a2, a3, a4);
    }
    else
    {
      return (*(__int64 (__fastcall **)(_QWORD, CoinIndexedVector *, CoinIndexedVector *, bool))(**((_QWORD **)this + 2)
                                                                                               + 200LL))(
               *((_QWORD *)this + 2),
               a2,
               a3,
               a4);
    }
  }
  return result;
}

