_QWORD *__fastcall sub_4C0420(_QWORD *a1, const char *a2)
{
  const char *v2; // r12
  _QWORD *v3; // rbx
  _QWORD *v4; // r15
  __int64 v5; // r13
  _QWORD *v6; // rbp
  const char *v7; // rdi
  int v8; // eax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  const char *v12; // rdi
  __int64 v14; // rax
  size_t v15; // r13
  __int64 v16; // rbp
  _QWORD *v17; // rax
  __int64 v18; // rdx
  const char *v19; // rsi
  const char *v20; // rdi
  void *v21; // rdi
  void *v22; // rax
  const char *v23; // rsi
  _QWORD *v24; // [rsp+8h] [rbp-50h]

  v2 = a2;
  v3 = a1 + 1;
  v4 = (_QWORD *)a1[2];
  v24 = a1 + 1;
  if ( !v4 )
  {
    v3 = a1 + 1;
    goto LABEL_21;
  }
  v5 = *((_QWORD *)a2 + 1);
  while ( 1 )
  {
    v10 = v4[5];
    if ( !v5 )
      break;
    a2 = *(const char **)v2;
    v6 = v4;
    v7 = haystack;
    if ( v10 )
      goto LABEL_4;
LABEL_5:
    v8 = strcmp(v7, a2);
    v9 = (_QWORD *)v4[2];
    v4 = (_QWORD *)v4[3];
    if ( v8 >= 0 )
    {
      v3 = v6;
      v4 = v9;
    }
    if ( !v4 )
      goto LABEL_14;
  }
  if ( v10 )
  {
LABEL_12:
    a2 = haystack;
LABEL_4:
    v7 = (const char *)v4[4];
    v6 = v4;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v11 = v4[2];
    if ( !v11 )
      break;
    v3 = v4;
    v4 = (_QWORD *)v4[2];
    if ( *(_QWORD *)(v11 + 40) )
      goto LABEL_12;
  }
  v3 = v4;
LABEL_14:
  if ( v24 == v3 )
    goto LABEL_21;
  if ( v3[5] )
  {
    a2 = (const char *)v3[4];
    v12 = haystack;
    if ( v5 )
      goto LABEL_17;
LABEL_18:
    if ( strcmp(v12, a2) >= 0 )
      return v3 + 7;
LABEL_21:
    v14 = operator new(0x40u);
    v15 = *((_QWORD *)v2 + 1);
    *(_QWORD *)(v14 + 32) = 0;
    v16 = v14;
    *(_OWORD *)(v14 + 40) = 0;
    if ( v15 )
    {
      v22 = (void *)qalloc_or_throw(v15, a2);
      *(_QWORD *)(v16 + 32) = v22;
      v23 = *(const char **)v2;
      *(_QWORD *)(v16 + 48) = v15;
      memcpy(v22, v23, v15);
      *(_QWORD *)(v16 + 40) = v15;
    }
    *(_DWORD *)(v16 + 56) = 0;
    v17 = sub_4C0260(a1, v3, v16 + 32);
    v3 = v17;
    if ( v18 )
    {
      if ( !v17 && v24 != (_QWORD *)v18 )
      {
        v19 = haystack;
        if ( *(_QWORD *)(v18 + 40) )
          v19 = *(const char **)(v18 + 32);
        v20 = haystack;
        if ( *(_QWORD *)(v16 + 40) )
          v20 = *(const char **)(v16 + 32);
        strcmp(v20, v19);
      }
      v3 = (_QWORD *)v16;
      std::_Rb_tree_insert_and_rebalance();
      ++a1[5];
    }
    else if ( v16 )
    {
      v21 = *(void **)(v16 + 32);
      if ( v21 )
      {
        *(_QWORD *)(v16 + 40) = 0;
        qfree(v21);
      }
      operator delete((void *)v16, 0x40u);
    }
    return v3 + 7;
  }
  a2 = haystack;
  if ( v5 )
  {
LABEL_17:
    v12 = *(const char **)v2;
    goto LABEL_18;
  }
  return v3 + 7;
}

