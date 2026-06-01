__int64 __fastcall sub_781270(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  __int64 v3; // rcx
  unsigned __int64 v5; // rax
  __int64 *v6; // rdx
  __int64 *v7; // rax

  v1 = *(_QWORD *)(a1 + 152);
  v2 = 0;
  if ( !v1 )
    return v2;
  v3 = *(_QWORD *)(a1 + 152) & 6LL;
  if ( v3 == 4 )
  {
    v5 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v5 )
    {
      if ( (*(_BYTE *)(v5 + 8) & 4) != 0 && (v6 = *(__int64 **)(v5 + 48)) != nullptr )
        return ((unsigned int)(*v6 >> 1) & 3) + 1;
      else
        return ((unsigned int)(*(__int64 *)(v5 + 16) >> 1) & 3) + 1;
    }
    return v2;
  }
  if ( v3 != 2 )
  {
    if ( v3 == 6 )
      return 2 * (unsigned int)((*(_WORD *)(a1 + 30) & 0x180) == 0);
    return v2;
  }
  v7 = (__int64 *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
  if ( !v7 )
    return v2;
  return ((unsigned int)(*v7 >> 1) & 3) + 1;
}

