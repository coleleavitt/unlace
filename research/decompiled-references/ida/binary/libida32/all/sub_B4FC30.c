_BOOL8 __fastcall sub_B4FC30(__int64 a1)
{
  __int64 v2; // rax
  __int64 *v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 *i; // rax
  __int64 v6; // rcx
  __int64 *v7; // rax

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v2 = sub_B68690(a1);
  v3 = *(__int64 **)v2;
  v4 = *(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 8);
  if ( *(_QWORD *)v2 < v4 )
  {
    v7 = *(__int64 **)v2;
    while ( *(_WORD *)(*v7 + 36) != 148 )
    {
      if ( (__int64 *)v4 == ++v7 )
        return 0;
    }
    if ( (__int64 *)v4 == v7 )
      return 0;
    return (*(_BYTE *)(a1 + 98) & 0x20) != 0;
  }
  if ( v3 != (__int64 *)v4 )
  {
    if ( *(_WORD *)(*(_QWORD *)v4 + 36LL) != 148 )
    {
      for ( i = (__int64 *)(v4 + 8); v3 != i; ++i )
      {
        v6 = *i;
        if ( *(_WORD *)(v6 + 36) == 148 )
          return (*(_BYTE *)(a1 + 98) & 0x20) != 0;
      }
      return 0;
    }
    return (*(_BYTE *)(a1 + 98) & 0x20) != 0;
  }
  return 0;
}

