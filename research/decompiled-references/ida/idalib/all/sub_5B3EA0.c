_BOOL8 __fastcall sub_5B3EA0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v20; // rax
  const char *v21; // rsi
  const char *v22; // rdi
  const char *v23; // rsi
  const char *v24; // rdi

  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 )
    goto LABEL_33;
  v6 = a1 + 48;
  do
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v3 + 16);
      v8 = *(_QWORD *)(v3 + 24);
      if ( *(_QWORD *)(v3 + 32) >= a3 )
        break;
      v3 = *(_QWORD *)(v3 + 24);
      if ( !v8 )
        goto LABEL_6;
    }
    v6 = v3;
    v3 = *(_QWORD *)(v3 + 16);
  }
  while ( v7 );
LABEL_6:
  if ( v6 == a1 + 48 || a3 < *(_QWORD *)(v6 + 32) )
    goto LABEL_33;
  v9 = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(a1 + 136) = v9;
  if ( v9 != -1 )
  {
    v3 = a1 + 88;
    v10 = switch_dbctx(*(int *)(a1 + 8));
    *(_QWORD *)(a1 + 96) = 0;
    v11 = v10;
    *(_QWORD *)(a1 + 120) = 0;
    sub_7BEA80(*(_QWORD *)(v10 + 1672) + 2456LL, **(_QWORD **)(v10 + 1672), a1 + 88, a3, 83);
    sub_7BEA80(*(_QWORD *)(v11 + 1672) + 2456LL, **(_QWORD **)(v11 + 1672), a1 + 112, a3, 70);
  }
  v12 = *(_QWORD **)(a2 + 56);
  if ( !v12 )
    goto LABEL_33;
  v13 = (_QWORD *)(a2 + 48);
  do
  {
    while ( 1 )
    {
      v14 = v12[2];
      v15 = v12[3];
      if ( v12[4] >= a3 )
        break;
      v12 = (_QWORD *)v12[3];
      if ( !v15 )
        goto LABEL_15;
    }
    v13 = v12;
    v12 = (_QWORD *)v12[2];
  }
  while ( v14 );
LABEL_15:
  if ( (_QWORD *)(a2 + 48) == v13 || a3 < v13[4] )
  {
LABEL_33:
    if ( !under_debugger )
      interr(2451);
    BUG();
  }
  v16 = v13[5];
  *(_QWORD *)(a2 + 136) = v16;
  if ( v16 == -1 )
    return 1;
  v17 = switch_dbctx(*(int *)(a2 + 8));
  *(_QWORD *)(a2 + 96) = 0;
  *(_QWORD *)(a2 + 120) = 0;
  v18 = v17;
  sub_7BEA80(*(_QWORD *)(v17 + 1672) + 2456LL, **(_QWORD **)(v17 + 1672), a2 + 88, a3, 83);
  sub_7BEA80(*(_QWORD *)(v18 + 1672) + 2456LL, **(_QWORD **)(v18 + 1672), a2 + 112, a3, 70);
  if ( !v3 )
    return 0;
  if ( *(_QWORD *)(v3 + 48) != *(_QWORD *)(a2 + 136) )
    return 1;
  v20 = *(_QWORD *)(v3 + 8);
  if ( *(_QWORD *)(a2 + 96) )
  {
    v21 = *(const char **)(a2 + 88);
    v22 = haystack;
    if ( !v20 )
      goto LABEL_24;
    goto LABEL_23;
  }
  v21 = haystack;
  if ( v20 )
  {
LABEL_23:
    v22 = *(const char **)v3;
LABEL_24:
    if ( strcmp(v22, v21) )
      return 1;
  }
  v23 = haystack;
  if ( *(_QWORD *)(a2 + 120) )
    v23 = *(const char **)(a2 + 112);
  v24 = haystack;
  if ( *(_QWORD *)(v3 + 32) )
    v24 = *(const char **)(v3 + 24);
  return strcmp(v24, v23) != 0;
}
