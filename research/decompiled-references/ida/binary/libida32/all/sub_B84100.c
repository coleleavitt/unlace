__int64 __fastcall sub_B84100(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v7; // rax
  __int64 *v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 *i; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v7 = sub_B68690(a1, a2, a3, a4, a5, a6);
  v8 = (__int64 *)*v7;
  v9 = *v7 + 8LL * *((unsigned int *)v7 + 2);
  if ( *v7 < v9 )
  {
    v12 = *v7;
    while ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 428 )
    {
      v12 += 8LL;
      if ( v9 == v12 )
        return 0;
    }
    if ( v9 == v12 )
      return 0;
    return (unsigned int)~*(unsigned __int8 *)(*(_QWORD *)(sub_B685F0(a1) + 2320) + 107LL) >> 7;
  }
  if ( v8 != (__int64 *)v9 )
  {
    if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 428 )
    {
      for ( i = (__int64 *)(v9 + 8); v8 != i; ++i )
      {
        v11 = *i;
        if ( *(_WORD *)(v11 + 36) == 428 )
          return (unsigned int)~*(unsigned __int8 *)(*(_QWORD *)(sub_B685F0(a1) + 2320) + 107LL) >> 7;
      }
      return 0;
    }
    return (unsigned int)~*(unsigned __int8 *)(*(_QWORD *)(sub_B685F0(a1) + 2320) + 107LL) >> 7;
  }
  return 0;
}

