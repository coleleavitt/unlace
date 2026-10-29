_QWORD *__fastcall sub_DEF00(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // r14
  __int64 v4; // rbp
  const char *v5; // rsi
  _QWORD *v6; // r15
  const char *v7; // rdi
  int v8; // eax
  int v9; // eax
  __int64 v10; // r13
  __int64 v11; // rax
  const char *v12; // rsi
  const char *v13; // rdi
  __int64 v14; // rax
  __m128i v15; // xmm0
  const char *v16; // rax
  const char *v18; // rsi
  const char *v19; // rdi
  _QWORD *v20; // [rsp+0h] [rbp-48h]

  v3 = (_QWORD *)a1[2];
  v20 = a1 + 1;
  if ( v3 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    while ( 1 )
    {
      v10 = v3[5];
      if ( !v10 )
        break;
      v5 = (const char *)v3[4];
      v6 = v3;
      v7 = s1;
      if ( v4 )
        goto LABEL_4;
LABEL_5:
      v8 = strcmp(v7, v5);
      v3 = (_QWORD *)v6[3];
      if ( v8 < 0 )
        v3 = (_QWORD *)v6[2];
      v9 = (v8 >> 31) & 1;
      if ( !v3 )
      {
        if ( (_BYTE)v9 )
        {
          if ( (_QWORD *)a1[3] != v6 )
            goto LABEL_18;
          v3 = v6;
          if ( v20 != v6 )
          {
LABEL_30:
            v18 = s1;
            if ( v3[5] )
              v18 = (const char *)v3[4];
            v19 = s1;
            if ( *(_QWORD *)(a2 + 8) )
              v19 = *(const char **)a2;
            strcmp(v19, v18);
          }
LABEL_23:
          v14 = operator new(0x38u);
          v15 = _mm_loadu_si128((const __m128i *)(a2 + 8));
          v6 = (_QWORD *)v14;
          v16 = *(const char **)a2;
          *(_QWORD *)a2 = 0;
          *(__m128i *)(v6 + 5) = v15;
          v6[4] = v16;
          *(_OWORD *)(a2 + 8) = 0;
          std::_Rb_tree_insert_and_rebalance();
          ++a1[5];
          return v6;
        }
        v3 = v6;
        if ( *(_QWORD *)(a2 + 8) )
          goto LABEL_19;
LABEL_26:
        if ( !v10 )
          return v6;
        v12 = s1;
        goto LABEL_20;
      }
    }
    v5 = s1;
    if ( !v4 )
    {
      v6 = (_QWORD *)v3[3];
      if ( !v6 )
      {
LABEL_14:
        if ( !*(_QWORD *)(a2 + 8) )
          return v3;
        v12 = *(const char **)a2;
        v6 = v3;
        v13 = s1;
        goto LABEL_21;
      }
      while ( 1 )
      {
        v10 = v6[5];
        if ( v10 )
          break;
        v3 = v6;
        v6 = (_QWORD *)v6[3];
        if ( !v6 )
          goto LABEL_14;
      }
      v5 = (const char *)v6[4];
      v7 = s1;
      goto LABEL_5;
    }
LABEL_4:
    v7 = *(const char **)a2;
    v6 = v3;
    goto LABEL_5;
  }
  v6 = a1 + 1;
  if ( v20 == (_QWORD *)a1[3] )
    goto LABEL_23;
LABEL_18:
  v3 = v6;
  v11 = std::_Rb_tree_decrement();
  v10 = *(_QWORD *)(v11 + 40);
  v6 = (_QWORD *)v11;
  if ( !*(_QWORD *)(a2 + 8) )
    goto LABEL_26;
LABEL_19:
  v12 = *(const char **)a2;
  v13 = s1;
  if ( v10 )
LABEL_20:
    v13 = (const char *)v6[4];
LABEL_21:
  if ( strcmp(v13, v12) < 0 )
  {
    if ( v20 != v3 )
      goto LABEL_30;
    goto LABEL_23;
  }
  return v6;
}

