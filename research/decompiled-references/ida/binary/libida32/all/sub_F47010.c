bool __fastcall sub_F47010(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 i; // rax
  unsigned __int64 v16; // rax

  v5 = sub_F46D10(a1, a2, a3, a4, a5);
  if ( !v5 )
    return 0;
  v10 = *(_QWORD *)(v5 + 32);
  if ( (*(_BYTE *)(v10 + 29) & 1) == 0 )
    return 0;
  v12 = sub_B68690(v10, a2, v6, v7, v8, v9);
  v13 = *v12;
  v14 = *v12 + 8LL * *((unsigned int *)v12 + 2);
  if ( *v12 < v14 )
  {
    v16 = *v12;
    while ( 1 )
    {
      v13 = v16;
      if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) == 309 )
        break;
      v16 += 8LL;
      if ( v14 == v16 )
        return 0;
    }
  }
  else
  {
    if ( v13 == v14 )
      return 0;
    if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 309 )
    {
      for ( i = v14 + 8; ; i += 8LL )
      {
        v14 = i;
        if ( v13 == i )
          break;
        if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) == 309 )
          return v13 != v14;
      }
      return 0;
    }
  }
  return v13 != v14;
}

