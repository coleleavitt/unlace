__int64 __fastcall ClpFactorization::updateColumnTranspose(
        ClpFactorization *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3)
{
  __int64 v3; // rax
  int v4; // ecx

  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 32);
  else
    v4 = *(_DWORD *)(*((_QWORD *)this + 2) + 36LL);
  if ( !v4 )
    return 0;
  if ( *(_QWORD *)this )
    return ClpNetworkBasis::updateColumnTranspose(*(ClpNetworkBasis **)this, a2, a3);
  if ( v3 )
    return CoinFactorization::updateColumnTranspose(*((CoinFactorization **)this + 1), a2, a3);
  return (*(__int64 (__fastcall **)(_QWORD, CoinIndexedVector *, CoinIndexedVector *))(**((_QWORD **)this + 2) + 216LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
}

