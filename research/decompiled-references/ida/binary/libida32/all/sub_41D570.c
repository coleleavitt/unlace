_QWORD *__fastcall sub_41D570(_QWORD *a1, const char *a2)
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
  const char *v11; // rdi
  __int64 v12; // rax
  size_t v13; // r13
  void *v15; // rax
  const char *v16; // rsi
  const char *v17; // rdi
  _QWORD *v18; // [rsp+0h] [rbp-48h]

  v2 = a2;
  v3 = (_QWORD *)a1[2];
  v18 = a1 + 1;
  if ( v3 )
  {
    v4 = *((_QWORD *)a2 + 1);
    while ( 1 )
    {
      v9 = v3[5];
      if ( !v9 )
        break;
      a2 = (const char *)v3[4];
      v5 = v3;
      v6 = haystack;
      if ( v4 )
        goto LABEL_4;
LABEL_5:
      v7 = strcmp(v6, a2);
      v3 = (_QWORD *)v5[3];
      if ( v7 < 0 )
        v3 = (_QWORD *)v5[2];
      v8 = (v7 >> 31) & 1;
      if ( !v3 )
      {
        if ( (_BYTE)v8 )
        {
          if ( (_QWORD *)a1[3] != v5 )
            goto LABEL_19;
          v3 = v5;
          if ( v18 != v5 )
          {
LABEL_33:
            a2 = haystack;
            if ( v3[5] )
              a2 = (const char *)v3[4];
            v17 = haystack;
            if ( *((_QWORD *)v2 + 1) )
              v17 = *(const char **)v2;
            strcmp(v17, a2);
          }
LABEL_24:
          v12 = operator new(0x38u);
          v13 = *((_QWORD *)v2 + 1);
          *(_QWORD *)(v12 + 32) = 0;
          v5 = (_QWORD *)v12;
          *(_OWORD *)(v12 + 40) = 0;
          if ( v13 )
          {
            v15 = (void *)qalloc_or_throw(v13, a2);
            v5[4] = v15;
            v16 = *(const char **)v2;
            v5[6] = v13;
            memcpy(v15, v16, v13);
            v5[5] = v13;
          }
          std::_Rb_tree_insert_and_rebalance();
          ++a1[5];
          return v5;
        }
        v3 = v5;
        if ( *((_QWORD *)v2 + 1) )
          goto LABEL_20;
LABEL_29:
        a2 = haystack;
        if ( !v9 )
          return v5;
        goto LABEL_21;
      }
    }
    a2 = haystack;
    if ( !v4 )
    {
      v5 = (_QWORD *)v3[3];
      if ( !v5 )
      {
LABEL_14:
        if ( !*((_QWORD *)v2 + 1) )
          return v3;
        a2 = *(const char **)v2;
        v5 = v3;
        v11 = haystack;
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
      v6 = haystack;
      goto LABEL_5;
    }
LABEL_4:
    v6 = *(const char **)v2;
    v5 = v3;
    goto LABEL_5;
  }
  v5 = a1 + 1;
  if ( v18 == (_QWORD *)a1[3] )
    goto LABEL_24;
LABEL_19:
  v3 = v5;
  v10 = std::_Rb_tree_decrement();
  v9 = *(_QWORD *)(v10 + 40);
  v5 = (_QWORD *)v10;
  if ( !*((_QWORD *)v2 + 1) )
    goto LABEL_29;
LABEL_20:
  a2 = *(const char **)v2;
  v11 = haystack;
  if ( v9 )
LABEL_21:
    v11 = (const char *)v5[4];
LABEL_22:
  if ( strcmp(v11, a2) < 0 )
  {
    if ( v18 != v3 )
      goto LABEL_33;
    goto LABEL_24;
  }
  return v5;
}

