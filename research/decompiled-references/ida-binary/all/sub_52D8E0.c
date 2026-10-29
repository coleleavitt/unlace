char *__fastcall sub_52D8E0(_QWORD *a1, __int64 a2)
{
  char *v3; // rbx
  char *v4; // r15
  __int64 v5; // r13
  const char *v6; // rsi
  char *v7; // rbp
  const char *v8; // rdi
  int v9; // eax
  char *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  const char *v13; // rsi
  const char *v14; // rdi
  __int64 v16; // rax
  size_t v17; // r13
  __int64 v18; // rbp
  const char *v19; // rsi
  char *v20; // rax
  __int64 v21; // rdx
  const char *v22; // rsi
  const char *v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rdi
  void *v27; // rax
  const char *v28; // rsi
  char *v29; // [rsp+8h] [rbp-50h]
  __int64 v31; // [rsp+18h] [rbp-40h]

  v3 = (char *)(a1 + 1);
  v4 = (char *)a1[2];
  v29 = (char *)(a1 + 1);
  if ( !v4 )
  {
    v3 = (char *)(a1 + 1);
    goto LABEL_21;
  }
  v5 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v11 = *((_QWORD *)v4 + 5);
    if ( !v5 )
      break;
    v6 = *(const char **)a2;
    v7 = v4;
    v8 = &s1;
    if ( v11 )
      goto LABEL_4;
LABEL_5:
    v9 = strcmp(v8, v6);
    v10 = *((char **)v4 + 2);
    v4 = *((char **)v4 + 3);
    if ( v9 >= 0 )
    {
      v3 = v7;
      v4 = v10;
    }
    if ( !v4 )
      goto LABEL_14;
  }
  if ( v11 )
  {
LABEL_12:
    v6 = &s1;
LABEL_4:
    v8 = *((const char **)v4 + 4);
    v7 = v4;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v12 = *((_QWORD *)v4 + 2);
    if ( !v12 )
      break;
    v3 = v4;
    v4 = *((char **)v4 + 2);
    if ( *(_QWORD *)(v12 + 40) )
      goto LABEL_12;
  }
  v3 = v4;
LABEL_14:
  if ( v29 == v3 )
    goto LABEL_21;
  if ( *((_QWORD *)v3 + 5) )
  {
    v13 = *((const char **)v3 + 4);
    v14 = &s1;
    if ( v5 )
      goto LABEL_17;
LABEL_18:
    if ( strcmp(v14, v13) >= 0 )
      return v3 + 56;
LABEL_21:
    v16 = operator new(0x50u);
    v17 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(v16 + 32) = 0;
    v18 = v16;
    *(_OWORD *)(v16 + 40) = 0;
    if ( v17 )
    {
      v27 = (void *)qalloc_or_throw(v17);
      *(_QWORD *)(v18 + 32) = v27;
      v28 = *(const char **)a2;
      *(_QWORD *)(v18 + 48) = v17;
      memcpy(v27, v28, v17);
      *(_QWORD *)(v18 + 40) = v17;
    }
    v19 = v3;
    *(_QWORD *)(v18 + 56) = 0;
    *(_OWORD *)(v18 + 64) = 0;
    v20 = (char *)sub_258240(a1, v3, v18 + 32);
    v3 = v20;
    if ( v21 )
    {
      if ( v20 || v29 == (char *)v21 )
      {
        v25 = 1;
      }
      else
      {
        v22 = &s1;
        if ( *(_QWORD *)(v21 + 40) )
          v22 = *(const char **)(v21 + 32);
        v23 = &s1;
        if ( *(_QWORD *)(v18 + 40) )
          v23 = *(const char **)(v18 + 32);
        v31 = v21;
        v24 = strcmp(v23, v22);
        v21 = v31;
        v25 = v24 >> 31;
      }
      v3 = (char *)v18;
      std::_Rb_tree_insert_and_rebalance(v25, v18, v21, v29);
      ++a1[5];
    }
    else if ( v18 )
    {
      v26 = *(_QWORD *)(v18 + 32);
      if ( v26 )
      {
        *(_QWORD *)(v18 + 40) = 0;
        qfree(v26, v19);
      }
      operator delete((void *)v18, 0x50u);
    }
    return v3 + 56;
  }
  v13 = &s1;
  if ( v5 )
  {
LABEL_17:
    v14 = *(const char **)a2;
    goto LABEL_18;
  }
  return v3 + 56;
}
