_QWORD *__fastcall sub_E170(_QWORD *a1, const char *a2)
{
  const char *v2; // r12
  _QWORD *v3; // rbx
  __int64 v4; // r13
  _QWORD *v5; // rbp
  const char *v6; // rdi
  int v7; // eax
  int v8; // eax
  __int64 v9; // r15
  __int64 v10; // rax
  const char *v11; // rsi
  const char *v12; // rdi
  bool v13; // r14
  __int64 v14; // rax
  size_t v15; // r13
  __int64 v16; // rax
  void *v18; // rax
  const char *v19; // rsi
  const char *v20; // rsi
  const char *v21; // rdi
  _QWORD *v22; // [rsp+0h] [rbp-48h]

  v2 = a2;
  v3 = (_QWORD *)a1[2];
  v22 = a1 + 1;
  if ( !v3 )
  {
    v5 = a1 + 1;
    v3 = (_QWORD *)a1[3];
    if ( v22 != v3 )
      goto LABEL_19;
    goto LABEL_23;
  }
  v4 = *((_QWORD *)a2 + 1);
  do
  {
    v9 = v3[5];
    if ( v9 )
    {
      a2 = (const char *)v3[4];
      v5 = v3;
      v6 = s1;
      if ( !v4 )
        goto LABEL_5;
LABEL_4:
      v6 = *(const char **)v2;
      v5 = v3;
      goto LABEL_5;
    }
    a2 = s1;
    if ( v4 )
      goto LABEL_4;
    v5 = (_QWORD *)v3[3];
    if ( !v5 )
    {
LABEL_14:
      if ( !*((_QWORD *)v2 + 1) )
        return v3;
      v11 = *(const char **)v2;
      v5 = v3;
      v12 = s1;
      goto LABEL_22;
    }
    while ( 1 )
    {
      v9 = v5[5];
      if ( v9 )
        break;
      v3 = v5;
      v5 = (_QWORD *)v5[3];
      if ( !v5 )
        goto LABEL_14;
    }
    a2 = (const char *)v5[4];
    v6 = s1;
LABEL_5:
    v7 = strcmp(v6, a2);
    v3 = (_QWORD *)v5[3];
    if ( v7 < 0 )
      v3 = (_QWORD *)v5[2];
    v8 = (v7 >> 31) & 1;
  }
  while ( v3 );
  if ( !(_BYTE)v8 )
  {
    v3 = v5;
    if ( *((_QWORD *)v2 + 1) )
      goto LABEL_20;
    goto LABEL_30;
  }
  v3 = (_QWORD *)a1[3];
  if ( v5 == v3 )
    goto LABEL_23;
LABEL_19:
  v3 = v5;
  v10 = std::_Rb_tree_decrement(v5, a2);
  v9 = *(_QWORD *)(v10 + 40);
  v5 = (_QWORD *)v10;
  if ( !*((_QWORD *)v2 + 1) )
  {
LABEL_30:
    v11 = s1;
    if ( v9 )
    {
LABEL_21:
      v12 = (const char *)v5[4];
      goto LABEL_22;
    }
    return v5;
  }
LABEL_20:
  v11 = *(const char **)v2;
  v12 = s1;
  if ( v9 )
    goto LABEL_21;
LABEL_22:
  if ( strcmp(v12, v11) < 0 )
  {
LABEL_23:
    v13 = 1;
    if ( v22 != v3 )
    {
      v20 = s1;
      if ( v3[5] )
        v20 = (const char *)v3[4];
      v21 = s1;
      if ( *((_QWORD *)v2 + 1) )
        v21 = *(const char **)v2;
      v13 = strcmp(v21, v20) < 0;
    }
    v14 = operator new(0x40u);
    v15 = *((_QWORD *)v2 + 1);
    *(_QWORD *)(v14 + 32) = 0;
    v5 = (_QWORD *)v14;
    *(_OWORD *)(v14 + 40) = 0;
    if ( v15 )
    {
      v18 = (void *)qalloc_or_throw(v15);
      v5[4] = v18;
      v19 = *(const char **)v2;
      v5[6] = v15;
      memcpy(v18, v19, v15);
      v16 = *((_QWORD *)v2 + 3);
      v5[5] = v15;
      v5[7] = v16;
      if ( v16 )
LABEL_26:
        ++*(_DWORD *)(v16 + 8);
    }
    else
    {
      v16 = *((_QWORD *)v2 + 3);
      v5[7] = v16;
      if ( v16 )
        goto LABEL_26;
    }
    std::_Rb_tree_insert_and_rebalance(v13, v5, v3, v22);
    ++a1[5];
  }
  return v5;
}
