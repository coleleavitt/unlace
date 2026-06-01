__int64 __fastcall sub_7813B0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 152);
  if ( !v1 )
    return 0;
  v2 = *(_QWORD *)(a1 + 152) & 6LL;
  if ( v2 == 4 )
  {
    v4 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v4 )
      return *(unsigned int *)(v4 + 40);
    return 0;
  }
  if ( v2 != 2 )
    return 0;
  v5 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v5 )
    return 0;
  return *(unsigned int *)(v5 + 8);
}

