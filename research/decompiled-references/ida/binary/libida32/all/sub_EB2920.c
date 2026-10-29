__int64 __fastcall sub_EB2920(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 *i; // rax
  __int64 v13; // rcx
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 *v18; // rax

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v7 = sub_B68690(a1, a2, a3, a4, a5, a6);
  v10 = *v7;
  v11 = *v7 + 8LL * *((unsigned int *)v7 + 2);
  if ( *v7 >= v11 )
  {
    if ( v10 == v11 )
      goto LABEL_9;
    if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 205 )
    {
      for ( i = (__int64 *)(v11 + 8); ; ++i )
      {
        v11 = (unsigned __int64)i;
        if ( (__int64 *)v10 == i )
          break;
        v13 = *i;
        if ( *(_WORD *)(v13 + 36) == 205 )
          return 1;
      }
      goto LABEL_9;
    }
    return 1;
  }
  v18 = (__int64 *)*v7;
  while ( 1 )
  {
    v10 = *v18;
    if ( *(_WORD *)(*v18 + 36) == 205 )
      break;
    if ( (__int64 *)v11 == ++v18 )
      goto LABEL_9;
  }
  if ( (__int64 *)v11 != v18 )
    return 1;
LABEL_9:
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v14 = sub_B68690(a1, a2, v10, v11, v8, v9);
  v15 = *v14;
  v16 = *v14 + 8LL * *((unsigned int *)v14 + 2);
  if ( v15 >= v16 )
  {
    if ( v15 != v16 )
    {
      while ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 240 )
      {
        v16 += 8LL;
        if ( v15 == v16 )
          return 0;
      }
      goto LABEL_23;
    }
    return 0;
  }
  v17 = v15;
  while ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 240 )
  {
    v17 += 8LL;
    if ( v16 == v17 )
      return 0;
  }
  if ( v16 == v17 )
    return 0;
LABEL_23:
  while ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 240 )
    v15 += 8LL;
  return 0;
}

