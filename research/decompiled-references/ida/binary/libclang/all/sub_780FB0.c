__int64 __fastcall sub_780FB0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax

  v1 = *(_QWORD *)(a1 + 152);
  v2 = 0;
  if ( !v1 )
    return v2;
  v3 = *(_QWORD *)(a1 + 152) & 6LL;
  if ( v3 == 4 )
  {
    v5 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v5 )
      return *(_QWORD *)(v5 + 32);
    return v2;
  }
  if ( v3 != 6 )
    return v2;
  v6 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v6 )
    return v2;
  return *(_QWORD *)(v6 + 8);
}

