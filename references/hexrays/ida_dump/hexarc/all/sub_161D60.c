_DWORD *__fastcall sub_161D60(__int64 a1, __int64 a2, __int64 a3)
{
  char *v5; // rdi
  char *v6; // rdx
  char *v7; // rdi
  __int64 v8; // rcx
  char *v9; // rdx
  _DWORD *v11; // rsi
  __int64 v12; // rdx
  int v13; // r12d
  _DWORD *v14; // rcx
  _DWORD *v15; // rax
  unsigned __int64 v16; // rdx
  _DWORD *v17; // rsi
  __int64 v18; // rdx
  int v19; // ebp
  _DWORD *result; // rax
  _DWORD *v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx

  v5 = *(char **)(a1 + 368);
  v6 = &v5[4 * *(_QWORD *)(a1 + 376)];
  if ( v5 == v6 )
    goto LABEL_36;
  while ( *(_DWORD *)(a2 + 72) != *(_DWORD *)v5 )
  {
    v5 += 4;
    if ( v6 == v5 )
      goto LABEL_36;
  }
  if ( v6 == v5 )
  {
LABEL_36:
    if ( !under_debugger )
      sub_37B760(52593);
LABEL_39:
    BUG();
  }
  memmove(v5, v5 + 4, v6 - v5 - 4);
  --*(_QWORD *)(a1 + 376);
  v7 = *(char **)(a2 + 344);
  v8 = *(_QWORD *)(a2 + 352);
  v9 = &v7[4 * v8];
  if ( v7 == v9 )
    goto LABEL_32;
  while ( *(_DWORD *)(a1 + 72) != *(_DWORD *)v7 )
  {
    v7 += 4;
    if ( v9 == v7 )
      goto LABEL_32;
  }
  if ( v9 == v7 )
  {
LABEL_32:
    if ( !v8 )
      **(_DWORD **)(a2 + 64) |= 0x400u;
    if ( !under_debugger )
      sub_37B760(52594);
    goto LABEL_39;
  }
  memmove(v7, v7 + 4, v9 - v7 - 4);
  if ( (*(_QWORD *)(a2 + 352))-- == 1 )
    **(_DWORD **)(a2 + 64) |= 0x400u;
  v11 = *(_DWORD **)(a1 + 368);
  v12 = *(_QWORD *)(a1 + 376);
  v13 = *(_DWORD *)(a3 + 72);
  v14 = &v11[v12];
  if ( v11 != v14 )
  {
    v15 = *(_DWORD **)(a1 + 368);
    while ( v13 != *v15 )
    {
      if ( v14 == ++v15 )
        goto LABEL_20;
    }
    if ( v14 != v15 )
    {
      if ( !under_debugger )
        sub_37B760(52595);
      goto LABEL_39;
    }
  }
LABEL_20:
  v16 = v12 + 1;
  if ( *(_QWORD *)(a1 + 384) < v16 )
  {
    v24 = qvector_reserve(a1 + 368, v11, v16, 4);
    v25 = *(_QWORD *)(a1 + 376);
    *(_QWORD *)(a1 + 368) = v24;
    v14 = (_DWORD *)(v24 + 4 * v25);
  }
  *v14 = v13;
  ++*(_QWORD *)(a1 + 376);
  v17 = *(_DWORD **)(a3 + 344);
  v18 = *(_QWORD *)(a3 + 352);
  v19 = *(_DWORD *)(a1 + 72);
  result = v17;
  v21 = &v17[v18];
  if ( v17 != v21 )
  {
    while ( v19 != *result )
    {
      if ( v21 == ++result )
        goto LABEL_29;
    }
    if ( result != v21 )
    {
      if ( !under_debugger )
        sub_37B760(52596);
      goto LABEL_39;
    }
  }
LABEL_29:
  v22 = v18 + 1;
  if ( *(_QWORD *)(a3 + 360) < v22 )
  {
    result = (_DWORD *)qvector_reserve(a3 + 344, v17, v22, 4);
    v23 = *(_QWORD *)(a3 + 352);
    *(_QWORD *)(a3 + 344) = result;
    result[v23] = v19;
  }
  else
  {
    *v21 = v19;
  }
  ++*(_QWORD *)(a3 + 352);
  return result;
}
