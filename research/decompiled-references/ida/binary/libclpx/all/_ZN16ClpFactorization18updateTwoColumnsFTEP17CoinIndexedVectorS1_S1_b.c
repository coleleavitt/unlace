__int64 __fastcall ClpFactorization::updateTwoColumnsFT(
        ClpFactorization *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        bool a5)
{
  __int64 v5; // rax
  unsigned int updated; // r12d
  __int64 v11; // rsi
  unsigned int v12; // r12d

  v5 = *((_QWORD *)this + 1);
  if ( v5 )
    updated = *(_DWORD *)(v5 + 32);
  else
    updated = *(_DWORD *)(*((_QWORD *)this + 2) + 36LL);
  if ( !updated )
    return updated;
  if ( *(_QWORD *)this )
  {
    updated = ClpFactorization::updateColumnFT(this, a2, a3);
    ClpFactorization::updateColumn(this, a2, a4, a5);
    return updated;
  }
  if ( !v5 )
    return (*(__int64 (__fastcall **)(_QWORD, CoinIndexedVector *, CoinIndexedVector *, CoinIndexedVector *, bool))(**((_QWORD **)this + 2) + 208LL))(
             *((_QWORD *)this + 2),
             a2,
             a3,
             a4,
             a5);
  v11 = *(_QWORD *)(v5 + 648);
  if ( *(int *)(v5 + 656) <= -2 )
    v11 = 0;
  if ( *(_DWORD *)(v5 + 592) - (*(_DWORD *)(v11 + 4LL * *(int *)(v5 + 52)) + *(_DWORD *)(v5 + 36)) >= 0
    && *(_BYTE *)(v5 + 784) )
  {
    return CoinFactorization::updateTwoColumnsFT(*((CoinFactorization **)this + 1), a2, a3, a4, a5);
  }
  v12 = CoinFactorization::updateColumnFT(*((CoinFactorization **)this + 1), a2, a3);
  CoinFactorization::updateColumn(*((CoinFactorization **)this + 1), a2, a4, a5);
  return v12;
}

