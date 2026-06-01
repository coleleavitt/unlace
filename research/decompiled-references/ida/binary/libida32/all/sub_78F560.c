__int64 __fastcall sub_78F560(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 *v5; // r12
  const char **v8; // rax
  unsigned __int64 v9; // r15
  __int64 v10; // r15
  __int64 v11; // r12
  const char *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  size_t v20; // r8
  const char *v21; // r9
  void *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-50h]
  void *v25; // [rsp+10h] [rbp-48h]
  const char *v26; // [rsp+10h] [rbp-48h]

  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 5896)
    || (v4 = 24LL * a2, v5 = (__int64 *)(v4 + *(_QWORD *)(a1 + 5888)), (unsigned __int64)v5[1] > 1) )
  {
    if ( !under_debugger )
      interr(1227);
    BUG();
  }
  v8 = (const char **)a3;
  if ( v5 != (__int64 *)a3 )
  {
    v9 = *(_QWORD *)(a3 + 8);
    if ( !v9 || (v20 = v9 - 1, v9 == 1) )
    {
      v5[1] = 0;
      v8 = (const char **)(v4 + *(_QWORD *)(a1 + 5888));
    }
    else
    {
      v21 = *(const char **)a3;
      v22 = (void *)*v5;
      if ( v5[2] < v9 )
      {
        v26 = *(const char **)a3;
        v23 = qvector_reserve(v5, *v5, *(_QWORD *)(a3 + 8), 1);
        v21 = v26;
        v20 = v9 - 1;
        *v5 = v23;
        v22 = (void *)v23;
      }
      v5[1] = v9;
      memmove(v22, v21, v20);
      *(_BYTE *)(*v5 + v9 - 1) = 0;
      v8 = (const char **)(v4 + *(_QWORD *)(a1 + 5888));
    }
  }
  v10 = *(_QWORD *)(a1 + 5928);
  v11 = a1 + 5920;
  v12 = *v8;
  v24 = a1 + 5920;
  if ( !v10 )
  {
    v11 = a1 + 5920;
LABEL_14:
    v17 = operator new(0x30u);
    *(_QWORD *)(v17 + 32) = v12;
    *(_DWORD *)(v17 + 40) = a2;
    v25 = (void *)v17;
    v18 = sub_78DB50((_QWORD *)(a1 + 5912), v11, v12);
    if ( v19 )
    {
      if ( !v18 && v24 != v19 )
        strcmp(v12, *(const char **)(v19 + 32));
      std::_Rb_tree_insert_and_rebalance();
      ++*(_QWORD *)(a1 + 5952);
    }
    else if ( v25 )
    {
      operator delete(v25, 0x30u);
    }
    return netnode_setblob(
             *(unsigned int *)(a1 + 5876),
             v12,
             (*(_QWORD *)(a3 + 8) == 0) + *(_QWORD *)(a3 + 8) - 1LL,
             a2 << 8,
             83);
  }
  do
  {
    while ( 1 )
    {
      v13 = strcmp(*(const char **)(v10 + 32), v12);
      v14 = *(_QWORD *)(v10 + 16);
      v15 = *(_QWORD *)(v10 + 24);
      if ( v13 < 0 )
        break;
      v11 = v10;
      v10 = *(_QWORD *)(v10 + 16);
      if ( !v14 )
        goto LABEL_11;
    }
    v10 = *(_QWORD *)(v10 + 24);
  }
  while ( v15 );
LABEL_11:
  if ( v11 == v24 || strcmp(v12, *(const char **)(v11 + 32)) < 0 )
    goto LABEL_14;
  return netnode_setblob(
           *(unsigned int *)(a1 + 5876),
           v12,
           (*(_QWORD *)(a3 + 8) == 0) + *(_QWORD *)(a3 + 8) - 1LL,
           a2 << 8,
           83);
}

