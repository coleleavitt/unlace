__int64 __fastcall sub_4FF210(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r13d
  unsigned int *v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rbx
  int v8; // r13d
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // r12
  __int64 v12; // r12
  __int64 v13; // r12
  unsigned int *v14; // rdx
  __int64 v15; // r9
  bool v16; // r10
  __int64 v17; // rdi
  unsigned int v18; // ecx
  bool v19; // al

  v3 = *(_DWORD *)(a2 + 72);
  v4 = (unsigned int *)(**(_QWORD **)(a1 + 40) + 8 * a3);
  v5 = *(_QWORD *)(switch_dbctx(*(int *)(a2 + 8)) + 1576);
  if ( !*(_BYTE *)(v5 + 144) )
    goto LABEL_20;
  v6 = v3 - *(_DWORD *)(*(_QWORD *)(v5 + 8) + 68LL);
  if ( v6 >= *(_QWORD *)(v5 + 40) )
    goto LABEL_22;
  v7 = v6 << 6;
  *(_DWORD *)(*(_QWORD *)(v5 + 32) + v7 + 56) = v3;
  v8 = *(_DWORD *)(a1 + 72);
  v9 = *(_QWORD *)(v5 + 32) + v7;
  v10 = *(_QWORD *)(switch_dbctx(*(int *)(a1 + 8)) + 1576);
  if ( !*(_BYTE *)(v10 + 144) )
  {
LABEL_20:
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v11 = v8 - *(_DWORD *)(*(_QWORD *)(v10 + 8) + 68LL);
  if ( v11 >= *(_QWORD *)(v10 + 40) )
LABEL_22:
    sub_4FC970();
  v12 = v11 << 6;
  *(_DWORD *)(*(_QWORD *)(v10 + 32) + v12 + 56) = v8;
  v13 = *(_QWORD *)(v10 + 32) + v12;
  sub_4FED00((unsigned int **)v13, *v4);
  v14 = sub_4FED00((unsigned int **)v9, *v4);
  v17 = v15 + *(_QWORD *)v9 + 17LL * *(_QWORD *)(v9 + 8) - (_QWORD)v14;
  while ( v15 != *(_QWORD *)v13 + 17LL * *(_QWORD *)(v13 + 8) )
  {
    v18 = v4[1];
    v19 = *(_DWORD *)v15 >= v18;
    if ( v15 == v17 || *v14 >= v18 )
      return !v19;
    if ( *(_DWORD *)v15 >= v18
      || *v14 != *(_DWORD *)v15
      || *(_DWORD *)(v15 + 4) != v14[1]
      || *(_DWORD *)(v15 + 8) != v14[2]
      || *(_BYTE *)(v15 + 12) != *((_BYTE *)v14 + 12) )
    {
      return 1;
    }
    v15 += 17;
    v14 = (unsigned int *)((char *)v14 + 17);
  }
  if ( v15 != v17 && *v14 < v4[1] )
    return 1;
  v19 = v16;
  return !v19;
}

