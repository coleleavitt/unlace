__int64 __fastcall sub_B55030(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 *i; // rax
  __int64 v7; // rcx
  __int64 *v8; // rax

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return (*(_BYTE *)(*(_QWORD *)(a2 + 2320) + 14LL) & 0x20) != 0;
  v3 = sub_B68690(a1);
  v4 = *(__int64 **)v3;
  v5 = *(_QWORD *)v3 + 8LL * *(unsigned int *)(v3 + 8);
  if ( *(_QWORD *)v3 < v5 )
  {
    v8 = *(__int64 **)v3;
    while ( *(_WORD *)(*v8 + 36) != 251 )
    {
      if ( (__int64 *)v5 == ++v8 )
        return (*(_BYTE *)(*(_QWORD *)(a2 + 2320) + 14LL) & 0x20) != 0;
    }
    if ( (__int64 *)v5 == v8 )
      return (*(_BYTE *)(*(_QWORD *)(a2 + 2320) + 14LL) & 0x20) != 0;
  }
  else
  {
    if ( v4 == (__int64 *)v5 )
      return (*(_BYTE *)(*(_QWORD *)(a2 + 2320) + 14LL) & 0x20) != 0;
    if ( *(_WORD *)(*(_QWORD *)v5 + 36LL) != 251 )
    {
      for ( i = (__int64 *)(v5 + 8); v4 != i; ++i )
      {
        v7 = *i;
        if ( *(_WORD *)(v7 + 36) == 251 )
          return 1;
      }
      return (*(_BYTE *)(*(_QWORD *)(a2 + 2320) + 14LL) & 0x20) != 0;
    }
  }
  return 1;
}

