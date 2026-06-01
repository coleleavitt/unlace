bool __fastcall CoinPackedVectorBase::isExistingIndex(CoinPackedVectorBase *this, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx

  if ( !*((_BYTE *)this + 25) )
    CoinPackedVectorBase::duplicateIndex(this, "indexExists", "CoinPackedVectorBase");
  v2 = CoinPackedVectorBase::indexSet(this, "indexExists", "CoinPackedVectorBase");
  v3 = v2 + 8;
  v4 = *(_QWORD *)(v2 + 16);
  if ( !v4 )
    return 0;
  v5 = v3;
  do
  {
    while ( *(_DWORD *)(v4 + 32) >= a2 )
    {
      v5 = v4;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v4 )
        return v5 != v3 && *(_DWORD *)(v5 + 32) <= a2;
    }
    v4 = *(_QWORD *)(v4 + 24);
  }
  while ( v4 );
  return v5 != v3 && *(_DWORD *)(v5 + 32) <= a2;
}

