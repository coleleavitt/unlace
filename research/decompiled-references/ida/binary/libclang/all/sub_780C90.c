unsigned __int64 __fastcall sub_780C90(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 152);
  if ( !v1 )
    return 0;
  v2 = *(_QWORD *)(a1 + 152) & 6LL;
  if ( v2 == 2 )
    return v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v2 != 4 )
    return 0;
  v4 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v4 || (*(_BYTE *)(v4 + 8) & 4) == 0 )
    return 0;
  return *(_QWORD *)(v4 + 48);
}

