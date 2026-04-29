_QWORD *__fastcall sub_3A170(_QWORD *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  const char *v5; // r12
  _QWORD *v6; // rbx
  __int64 v7; // r13
  _QWORD *v8; // rbp
  const char *v9; // rdi
  int v10; // eax
  _QWORD *v11; // rdx
  int v12; // eax
  __int64 v13; // r15
  __int64 v14; // rax
  const char *v15; // rsi
  const char *v16; // rdi
  bool v17; // r14
  __int64 v18; // rax
  size_t v19; // r13
  void *v21; // rax
  const char *v22; // rsi
  const char *v23; // rsi
  const char *v24; // rdi
  _QWORD *v25; // [rsp+0h] [rbp-48h]

  v5 = a2;
  v6 = (_QWORD *)a1[2];
  v25 = a1 + 1;
  if ( v6 )
  {
    v7 = *((_QWORD *)a2 + 1);
    while ( 1 )
    {
      v13 = v6[5];
      if ( !v13 )
        break;
      a2 = (const char *)v6[4];
      v8 = v6;
      v9 = s1;
      if ( v7 )
        goto LABEL_4;
LABEL_5:
      v10 = strcmp(v9, a2);
      v6 = (_QWORD *)v8[3];
      if ( v10 < 0 )
        v6 = (_QWORD *)v8[2];
      v12 = (v10 >> 31) & 1;
      if ( !v6 )
      {
        if ( (_BYTE)v12 )
        {
          if ( (_QWORD *)a1[3] != v8 )
            goto LABEL_19;
          v6 = v8;
          v17 = 1;
          if ( v25 != v8 )
          {
LABEL_33:
            v23 = s1;
            if ( v6[5] )
              v23 = (const char *)v6[4];
            v24 = s1;
            if ( *((_QWORD *)v5 + 1) )
              v24 = *(const char **)v5;
            v17 = strcmp(v24, v23) < 0;
          }
LABEL_24:
          v18 = operator new(0x38u);
          v19 = *((_QWORD *)v5 + 1);
          *(_QWORD *)(v18 + 32) = 0;
          v8 = (_QWORD *)v18;
          *(_OWORD *)(v18 + 40) = 0;
          if ( v19 )
          {
            v21 = (void *)qalloc_or_throw(v19);
            v8[4] = v21;
            v22 = *(const char **)v5;
            v8[6] = v19;
            memcpy(v21, v22, v19);
            v8[5] = v19;
          }
          std::_Rb_tree_insert_and_rebalance(v17, v8, v6, v25);
          ++a1[5];
          return v8;
        }
        v6 = v8;
        if ( *((_QWORD *)v5 + 1) )
          goto LABEL_20;
LABEL_29:
        v15 = s1;
        if ( !v13 )
          return v8;
        goto LABEL_21;
      }
    }
    a2 = s1;
    if ( !v7 )
    {
      v8 = (_QWORD *)v6[3];
      if ( !v8 )
      {
LABEL_14:
        if ( !*((_QWORD *)v5 + 1) )
          return v6;
        v15 = *(const char **)v5;
        v8 = v6;
        v16 = s1;
        goto LABEL_22;
      }
      while ( 1 )
      {
        v13 = v8[5];
        if ( v13 )
          break;
        v6 = v8;
        v8 = (_QWORD *)v8[3];
        if ( !v8 )
          goto LABEL_14;
      }
      a2 = (const char *)v8[4];
      v9 = s1;
      goto LABEL_5;
    }
LABEL_4:
    v9 = *(const char **)v5;
    v8 = v6;
    goto LABEL_5;
  }
  v11 = a1;
  v8 = a1 + 1;
  if ( v25 == (_QWORD *)a1[3] )
  {
    v6 = a1 + 1;
    v17 = 1;
    goto LABEL_24;
  }
LABEL_19:
  v6 = v8;
  v14 = std::_Rb_tree_decrement(v8, a2, v11, a4, a5);
  v13 = *(_QWORD *)(v14 + 40);
  v8 = (_QWORD *)v14;
  if ( !*((_QWORD *)v5 + 1) )
    goto LABEL_29;
LABEL_20:
  v15 = *(const char **)v5;
  v16 = s1;
  if ( v13 )
LABEL_21:
    v16 = (const char *)v8[4];
LABEL_22:
  if ( strcmp(v16, v15) < 0 )
  {
    v17 = 1;
    if ( v25 != v6 )
      goto LABEL_33;
    goto LABEL_24;
  }
  return v8;
}
