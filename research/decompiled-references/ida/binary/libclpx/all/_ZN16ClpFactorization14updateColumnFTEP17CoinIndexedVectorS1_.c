__int64 __fastcall ClpFactorization::updateColumnFT(
        ClpFactorization *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    result = *(unsigned int *)(v3 + 32);
  else
    result = *(unsigned int *)(*((_QWORD *)this + 2) + 36LL);
  if ( (_DWORD)result )
  {
    if ( *(_QWORD *)this )
    {
      ClpNetworkBasis::updateColumn(*(ClpNetworkBasis **)this, a2, a3, -1);
      return 1;
    }
    else if ( v3 )
    {
      return CoinFactorization::updateColumnFT(*((CoinFactorization **)this + 1), a2, a3);
    }
    else
    {
      return (*(__int64 (__fastcall **)(_QWORD, CoinIndexedVector *, CoinIndexedVector *, _QWORD))(**((_QWORD **)this + 2)
                                                                                                 + 192LL))(
               *((_QWORD *)this + 2),
               a2,
               a3,
               0);
    }
  }
  return result;
}

