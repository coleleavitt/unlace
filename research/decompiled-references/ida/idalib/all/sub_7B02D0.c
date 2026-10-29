__int64 __fastcall sub_7B02D0(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 *v6; // r13
  const char **v8; // rax
  unsigned __int64 v9; // r15
  __int64 v10; // r15
  __int64 v11; // r13
  const char *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  const char **v19; // rdx
  void *v20; // r8
  unsigned int v21; // eax
  __int64 v22; // rdi
  size_t v23; // r8
  const char *v24; // r9
  void *v25; // rdi
  __int64 v26; // rax
  const char **v27; // [rsp+8h] [rbp-50h]
  void *v28; // [rsp+10h] [rbp-48h]
  const char **v29; // [rsp+10h] [rbp-48h]
  const char *v30; // [rsp+10h] [rbp-48h]
  void *v31; // [rsp+18h] [rbp-40h]

  if ( a2 >= a1[741] || (v5 = 24 * a2, v6 = (__int64 *)(24 * a2 + a1[740]), (unsigned __int64)v6[1] > 1) )
  {
    if ( !under_debugger )
      interr(1227);
    BUG();
  }
  v8 = (const char **)a3;
  if ( v6 != (__int64 *)a3 )
  {
    v9 = *(_QWORD *)(a3 + 8);
    if ( !v9 || (v23 = v9 - 1, v9 == 1) )
    {
      v6[1] = 0;
      v8 = (const char **)(v5 + a1[740]);
    }
    else
    {
      v24 = *(const char **)a3;
      v25 = (void *)*v6;
      if ( v6[2] < v9 )
      {
        v30 = *(const char **)a3;
        v26 = qvector_reserve(v6, *v6, *(_QWORD *)(a3 + 8), 1);
        v24 = v30;
        v23 = v9 - 1;
        *v6 = v26;
        v25 = (void *)v26;
      }
      v6[1] = v9;
      memmove(v25, v24, v23);
      *(_BYTE *)(*v6 + v9 - 1) = 0;
      v8 = (const char **)(v5 + a1[740]);
    }
  }
  v10 = a1[745];
  v11 = (__int64)(a1 + 744);
  v12 = *v8;
  v27 = (const char **)(a1 + 744);
  if ( !v10 )
  {
    v11 = (__int64)(a1 + 744);
LABEL_14:
    v17 = operator new(0x30u);
    *(_QWORD *)(v17 + 32) = v12;
    *(_DWORD *)(v17 + 40) = a2;
    v28 = (void *)v17;
    v18 = sub_7AE1F0(a1 + 743, v11, v12);
    v20 = v28;
    if ( v19 )
    {
      if ( v18 || v27 == v19 )
      {
        v22 = 1;
      }
      else
      {
        v31 = v28;
        v29 = v19;
        v21 = strcmp(v12, v19[4]);
        v19 = v29;
        v20 = v31;
        v22 = v21 >> 31;
      }
      std::_Rb_tree_insert_and_rebalance(v22, v20, v19, v27);
      ++a1[748];
    }
    else if ( v28 )
    {
      operator delete(v28, 0x30u);
    }
    return netnode_setblob(a1[737], v12, (*(_QWORD *)(a3 + 8) == 0) + *(_QWORD *)(a3 + 8) - 1LL, a2 << 8, 83);
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
  if ( (const char **)v11 == v27 || strcmp(v12, *(const char **)(v11 + 32)) < 0 )
    goto LABEL_14;
  return netnode_setblob(a1[737], v12, (*(_QWORD *)(a3 + 8) == 0) + *(_QWORD *)(a3 + 8) - 1LL, a2 << 8, 83);
}
