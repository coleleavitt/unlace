_QWORD *__fastcall sub_656410(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  const char *v3; // r14
  __int64 v4; // rbx
  size_t v5; // rax
  size_t v6; // r15
  size_t v7; // r12
  void *v8; // rax
  _QWORD *v9; // r15
  __int64 v10; // rbp
  const char *v11; // rsi
  _QWORD *v12; // r14
  const char *v13; // rdi
  int v14; // eax
  int v15; // eax
  __int64 v16; // r13
  _QWORD *v17; // r12
  void *v18; // rdi
  __int64 v19; // rax
  const char *v20; // rsi
  const char *v21; // rdi
  __int64 v22; // rdi
  const char *v24; // rsi
  const char *v25; // rdi
  _QWORD *v27; // [rsp+8h] [rbp-40h]

  v2 = operator new(0x40u);
  v3 = *(const char **)a2;
  *(_QWORD *)(v2 + 32) = 0;
  v4 = v2;
  *(_OWORD *)(v2 + 40) = 0;
  if ( v3 )
  {
    v5 = strlen(v3);
    v6 = v5 + 1;
    v7 = v5;
    v8 = (void *)qvector_reserve(v4 + 32, 0, v5 + 1, 1);
    *(_QWORD *)(v4 + 32) = v8;
    *(_QWORD *)(v4 + 40) = v6;
    memmove(v8, v3, v7);
    *(_BYTE *)(*(_QWORD *)(v4 + 32) + v7) = 0;
  }
  *(_DWORD *)(v4 + 56) = *(_DWORD *)(a2 + 8);
  v9 = (_QWORD *)a1[2];
  v27 = a1 + 1;
  if ( !v9 )
  {
    v12 = a1 + 1;
    if ( v27 == (_QWORD *)a1[3] )
    {
      v9 = a1 + 1;
      v22 = 1;
      goto LABEL_29;
    }
LABEL_24:
    v9 = v12;
    v19 = std::_Rb_tree_decrement(v12);
    v16 = *(_QWORD *)(v19 + 40);
    v12 = (_QWORD *)v19;
    if ( *(_QWORD *)(v4 + 40) )
    {
LABEL_25:
      v20 = *(const char **)(v4 + 32);
      v21 = haystack;
      if ( !v16 )
        goto LABEL_27;
      goto LABEL_26;
    }
LABEL_32:
    v20 = haystack;
    if ( !v16 )
    {
LABEL_18:
      v17 = v12;
      if ( v4 )
      {
        v18 = *(void **)(v4 + 32);
        if ( v18 )
        {
          *(_QWORD *)(v4 + 40) = 0;
          qfree(v18);
        }
        operator delete((void *)v4, 0x40u);
      }
      return v17;
    }
LABEL_26:
    v21 = (const char *)v12[4];
LABEL_27:
    if ( strcmp(v21, v20) < 0 )
    {
      v22 = 1;
      if ( v9 != v27 )
        goto LABEL_36;
      goto LABEL_29;
    }
    goto LABEL_18;
  }
  v10 = *(_QWORD *)(v4 + 40);
  do
  {
    v16 = v9[5];
    if ( v16 )
    {
      v11 = (const char *)v9[4];
      v12 = v9;
      v13 = haystack;
      if ( !v10 )
        goto LABEL_7;
LABEL_6:
      v13 = *(const char **)(v4 + 32);
      v12 = v9;
      goto LABEL_7;
    }
    v11 = haystack;
    if ( v10 )
      goto LABEL_6;
    v12 = (_QWORD *)v9[3];
    if ( !v12 )
    {
LABEL_16:
      if ( !*(_QWORD *)(v4 + 40) )
      {
        v12 = v9;
        goto LABEL_18;
      }
      v20 = *(const char **)(v4 + 32);
      v12 = v9;
      v21 = haystack;
      goto LABEL_27;
    }
    while ( 1 )
    {
      v16 = v12[5];
      if ( v16 )
        break;
      v9 = v12;
      v12 = (_QWORD *)v12[3];
      if ( !v12 )
        goto LABEL_16;
    }
    v11 = (const char *)v12[4];
    v13 = haystack;
LABEL_7:
    v14 = strcmp(v13, v11);
    v9 = (_QWORD *)v12[3];
    if ( v14 < 0 )
      v9 = (_QWORD *)v12[2];
    v15 = (v14 >> 31) & 1;
  }
  while ( v9 );
  if ( !(_BYTE)v15 )
  {
    v9 = v12;
    if ( *(_QWORD *)(v4 + 40) )
      goto LABEL_25;
    goto LABEL_32;
  }
  if ( (_QWORD *)a1[3] != v12 )
    goto LABEL_24;
  v9 = v12;
  v22 = 1;
  if ( v12 != v27 )
  {
LABEL_36:
    v24 = haystack;
    if ( v9[5] )
      v24 = (const char *)v9[4];
    v25 = haystack;
    if ( *(_QWORD *)(v4 + 40) )
      v25 = *(const char **)(v4 + 32);
    v22 = (unsigned int)strcmp(v25, v24) >> 31;
  }
LABEL_29:
  v17 = (_QWORD *)v4;
  std::_Rb_tree_insert_and_rebalance(v22, v4, v9, v27);
  ++a1[5];
  return v17;
}
