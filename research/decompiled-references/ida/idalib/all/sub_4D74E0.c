_QWORD *__fastcall sub_4D74E0(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // r15
  __int64 v5; // r13
  const char *v6; // rsi
  _QWORD *v7; // rbp
  const char *v8; // rdi
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  const char *v13; // rsi
  const char *v14; // rdi
  __int64 v16; // rax
  size_t v17; // r13
  __int64 v18; // rbp
  _QWORD *v19; // rax
  __int64 v20; // rdx
  const char *v21; // rsi
  const char *v22; // rdi
  unsigned int v23; // eax
  __int64 v24; // rdi
  void *v25; // rdi
  void *v26; // rax
  const char *v27; // rsi
  _QWORD *v28; // [rsp+8h] [rbp-50h]
  __int64 v30; // [rsp+18h] [rbp-40h]

  v3 = a1 + 1;
  v4 = (_QWORD *)a1[2];
  v28 = a1 + 1;
  if ( !v4 )
  {
    v3 = a1 + 1;
    goto LABEL_21;
  }
  v5 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v11 = v4[5];
    if ( !v5 )
      break;
    v6 = *(const char **)a2;
    v7 = v4;
    v8 = haystack;
    if ( v11 )
      goto LABEL_4;
LABEL_5:
    v9 = strcmp(v8, v6);
    v10 = (_QWORD *)v4[2];
    v4 = (_QWORD *)v4[3];
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
    v6 = haystack;
LABEL_4:
    v8 = (const char *)v4[4];
    v7 = v4;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v12 = v4[2];
    if ( !v12 )
      break;
    v3 = v4;
    v4 = (_QWORD *)v4[2];
    if ( *(_QWORD *)(v12 + 40) )
      goto LABEL_12;
  }
  v3 = v4;
LABEL_14:
  if ( v28 == v3 )
    goto LABEL_21;
  if ( v3[5] )
  {
    v13 = (const char *)v3[4];
    v14 = haystack;
    if ( v5 )
      goto LABEL_17;
LABEL_18:
    if ( strcmp(v14, v13) >= 0 )
      return v3 + 7;
LABEL_21:
    v16 = operator new(0x40u);
    v17 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(v16 + 32) = 0;
    v18 = v16;
    *(_OWORD *)(v16 + 40) = 0;
    if ( v17 )
    {
      v26 = (void *)qalloc_or_throw(v17);
      *(_QWORD *)(v18 + 32) = v26;
      v27 = *(const char **)a2;
      *(_QWORD *)(v18 + 48) = v17;
      memcpy(v26, v27, v17);
      *(_QWORD *)(v18 + 40) = v17;
    }
    *(_DWORD *)(v18 + 56) = 0;
    v19 = sub_4D7320(a1, v3, v18 + 32);
    v3 = v19;
    if ( v20 )
    {
      if ( v19 || v28 == (_QWORD *)v20 )
      {
        v24 = 1;
      }
      else
      {
        v21 = haystack;
        if ( *(_QWORD *)(v20 + 40) )
          v21 = *(const char **)(v20 + 32);
        v22 = haystack;
        if ( *(_QWORD *)(v18 + 40) )
          v22 = *(const char **)(v18 + 32);
        v30 = v20;
        v23 = strcmp(v22, v21);
        v20 = v30;
        v24 = v23 >> 31;
      }
      v3 = (_QWORD *)v18;
      std::_Rb_tree_insert_and_rebalance(v24, v18, v20, v28);
      ++a1[5];
    }
    else if ( v18 )
    {
      v25 = *(void **)(v18 + 32);
      if ( v25 )
      {
        *(_QWORD *)(v18 + 40) = 0;
        qfree(v25);
      }
      operator delete((void *)v18, 0x40u);
    }
    return v3 + 7;
  }
  v13 = haystack;
  if ( v5 )
  {
LABEL_17:
    v14 = *(const char **)a2;
    goto LABEL_18;
  }
  return v3 + 7;
}
