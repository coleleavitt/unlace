double __fastcall CoinPackedVectorBase::operator[](CoinPackedVectorBase *this, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12

  if ( !*((_BYTE *)this + 25) )
    CoinPackedVectorBase::duplicateIndex(this, "operator[]", "CoinPackedVectorBase");
  v2 = CoinPackedVectorBase::indexSet(this, "operator[]", "CoinPackedVectorBase");
  v3 = v2 + 8;
  v4 = *(_QWORD *)(v2 + 16);
  if ( !v4 )
    return 0.0;
  v5 = v3;
  do
  {
    while ( *(_DWORD *)(v4 + 32) >= a2 )
    {
      v5 = v4;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v4 )
        goto LABEL_8;
    }
    v4 = *(_QWORD *)(v4 + 24);
  }
  while ( v4 );
LABEL_8:
  if ( v5 == v3 || *(_DWORD *)(v5 + 32) > a2 )
    return 0.0;
  v6 = (*(__int64 (__fastcall **)(CoinPackedVectorBase *))(*(_QWORD *)this + 16LL))(this);
  return *(double *)(v6 + 8LL * (int)CoinPackedVectorBase::findIndex(this, a2));
}

