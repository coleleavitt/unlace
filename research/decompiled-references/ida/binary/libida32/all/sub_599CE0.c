_BOOL8 __fastcall sub_599CE0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r15
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v21; // rax
  const char *v22; // rsi
  const char *v23; // rdi
  const char *v24; // rsi
  const char *v25; // rdi

  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 )
    goto LABEL_33;
  v6 = a3;
  v7 = a1 + 48;
  do
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v3 + 16);
      v9 = *(_QWORD *)(v3 + 24);
      if ( *(_QWORD *)(v3 + 32) >= v6 )
        break;
      v3 = *(_QWORD *)(v3 + 24);
      if ( !v9 )
        goto LABEL_6;
    }
    v7 = v3;
    v3 = *(_QWORD *)(v3 + 16);
  }
  while ( v8 );
LABEL_6:
  if ( v7 == a1 + 48 || v6 < *(_QWORD *)(v7 + 32) )
    goto LABEL_33;
  v10 = *(_DWORD *)(v7 + 40);
  *(_DWORD *)(a1 + 136) = v10;
  if ( v10 != -1 )
  {
    v3 = a1 + 88;
    v11 = switch_dbctx(*(int *)(a1 + 8));
    *(_QWORD *)(a1 + 96) = 0;
    *(_QWORD *)(a1 + 120) = 0;
    v12 = v11;
    sub_79B6F0(*(_QWORD *)(v11 + 1480) + 2352LL, **(_QWORD **)(v11 + 1480), a1 + 88, a3, 83);
    sub_79B6F0(*(_QWORD *)(v12 + 1480) + 2352LL, **(_QWORD **)(v12 + 1480), a1 + 112, a3, 70);
  }
  v13 = *(_QWORD **)(a2 + 56);
  if ( !v13 )
    goto LABEL_33;
  v14 = (_QWORD *)(a2 + 48);
  do
  {
    while ( 1 )
    {
      v15 = v13[2];
      v16 = v13[3];
      if ( v13[4] >= v6 )
        break;
      v13 = (_QWORD *)v13[3];
      if ( !v16 )
        goto LABEL_15;
    }
    v14 = v13;
    v13 = (_QWORD *)v13[2];
  }
  while ( v15 );
LABEL_15:
  if ( (_QWORD *)(a2 + 48) == v14 || v6 < v14[4] )
  {
LABEL_33:
    if ( !under_debugger )
      interr(2451);
    BUG();
  }
  v17 = *((_DWORD *)v14 + 10);
  *(_DWORD *)(a2 + 136) = v17;
  if ( v17 == -1 )
    return 1;
  v18 = switch_dbctx(*(int *)(a2 + 8));
  *(_QWORD *)(a2 + 96) = 0;
  *(_QWORD *)(a2 + 120) = 0;
  v19 = v18;
  sub_79B6F0(*(_QWORD *)(v18 + 1480) + 2352LL, **(_QWORD **)(v18 + 1480), a2 + 88, a3, 83);
  sub_79B6F0(*(_QWORD *)(v19 + 1480) + 2352LL, **(_QWORD **)(v19 + 1480), a2 + 112, a3, 70);
  if ( !v3 )
    return 0;
  if ( *(_DWORD *)(v3 + 48) != *(_DWORD *)(a2 + 136) )
    return 1;
  v21 = *(_QWORD *)(v3 + 8);
  if ( *(_QWORD *)(a2 + 96) )
  {
    v22 = *(const char **)(a2 + 88);
    v23 = haystack;
    if ( !v21 )
      goto LABEL_24;
    goto LABEL_23;
  }
  v22 = haystack;
  if ( v21 )
  {
LABEL_23:
    v23 = *(const char **)v3;
LABEL_24:
    if ( strcmp(v23, v22) )
      return 1;
  }
  v24 = haystack;
  if ( *(_QWORD *)(a2 + 120) )
    v24 = *(const char **)(a2 + 112);
  v25 = haystack;
  if ( *(_QWORD *)(v3 + 32) )
    v25 = *(const char **)(v3 + 24);
  return strcmp(v25, v24) != 0;
}

