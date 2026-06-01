_QWORD *__fastcall sub_732C30(_QWORD *a1, const char **a2, const __m128i *a3)
{
  __int64 v4; // rax
  const char *v5; // r14
  __int64 v6; // rbx
  size_t v7; // rax
  size_t v8; // r15
  size_t v9; // r12
  void *v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  _QWORD *v13; // r15
  _QWORD *v14; // r14
  __int64 v15; // rbp
  const char *v16; // rsi
  const char *v17; // rdi
  int v18; // eax
  int v19; // eax
  __int64 v20; // r13
  __int64 v21; // rax
  const char *v22; // rsi
  const char *v23; // rdi
  _QWORD *v24; // r12
  void *v25; // rdi
  __int64 v26; // rdi
  const char *v28; // rsi
  const char *v29; // rdi
  _QWORD *v31; // [rsp+8h] [rbp-40h]

  v4 = operator new(0x58u);
  v5 = *a2;
  *(_QWORD *)(v4 + 32) = 0;
  v6 = v4;
  *(_OWORD *)(v4 + 40) = 0;
  if ( v5 )
  {
    v7 = strlen(v5);
    v8 = v7 + 1;
    v9 = v7;
    v10 = (void *)qvector_reserve(v6 + 32, 0, v7 + 1, 1);
    *(_QWORD *)(v6 + 32) = v10;
    *(_QWORD *)(v6 + 40) = v8;
    memmove(v10, v5, v9);
    *(_BYTE *)(*(_QWORD *)(v6 + 32) + v9) = 0;
  }
  v11 = _mm_loadu_si128(a3 + 1);
  *(_QWORD *)(v6 + 56) = a3->m128i_i64[0];
  v12 = a3->m128i_i64[1];
  *(__m128i *)(v6 + 72) = v11;
  *(_QWORD *)(v6 + 64) = v12;
  v13 = (_QWORD *)a1[2];
  v31 = a1 + 1;
  v14 = a1 + 1;
  if ( !v13 )
  {
LABEL_19:
    v13 = (_QWORD *)a1[3];
    if ( v14 == v13 )
      goto LABEL_28;
    v13 = v14;
    v21 = std::_Rb_tree_decrement(v14);
    v20 = *(_QWORD *)(v21 + 40);
    v14 = (_QWORD *)v21;
    if ( !*(_QWORD *)(v6 + 40) )
      goto LABEL_32;
LABEL_21:
    v22 = *(const char **)(v6 + 32);
    v23 = haystack;
    if ( v20 )
      goto LABEL_22;
    goto LABEL_23;
  }
  v15 = *(_QWORD *)(v6 + 40);
  do
  {
    v20 = v13[5];
    if ( v20 )
    {
      v16 = (const char *)v13[4];
      v14 = v13;
      v17 = haystack;
      if ( !v15 )
        goto LABEL_7;
LABEL_6:
      v17 = *(const char **)(v6 + 32);
      v14 = v13;
      goto LABEL_7;
    }
    v16 = haystack;
    if ( v15 )
      goto LABEL_6;
    v14 = (_QWORD *)v13[3];
    if ( !v14 )
    {
LABEL_16:
      if ( !*(_QWORD *)(v6 + 40) )
      {
        v14 = v13;
        goto LABEL_24;
      }
      v22 = *(const char **)(v6 + 32);
      v14 = v13;
      v23 = haystack;
      goto LABEL_23;
    }
    while ( 1 )
    {
      v20 = v14[5];
      if ( v20 )
        break;
      v13 = v14;
      v14 = (_QWORD *)v14[3];
      if ( !v14 )
        goto LABEL_16;
    }
    v16 = (const char *)v14[4];
    v17 = haystack;
LABEL_7:
    v18 = strcmp(v17, v16);
    v13 = (_QWORD *)v14[3];
    if ( v18 < 0 )
      v13 = (_QWORD *)v14[2];
    v19 = (v18 >> 31) & 1;
  }
  while ( v13 );
  if ( (_BYTE)v19 )
    goto LABEL_19;
  v13 = v14;
  if ( *(_QWORD *)(v6 + 40) )
    goto LABEL_21;
LABEL_32:
  v22 = haystack;
  if ( !v20 )
    goto LABEL_24;
LABEL_22:
  v23 = (const char *)v14[4];
LABEL_23:
  if ( strcmp(v23, v22) >= 0 )
  {
LABEL_24:
    v24 = v14;
    if ( v6 )
    {
      v25 = *(void **)(v6 + 32);
      if ( v25 )
      {
        *(_QWORD *)(v6 + 40) = 0;
        qfree(v25);
      }
      operator delete((void *)v6, 0x58u);
    }
    return v24;
  }
LABEL_28:
  v26 = 1;
  if ( v13 != v31 )
  {
    v28 = haystack;
    if ( v13[5] )
      v28 = (const char *)v13[4];
    v29 = haystack;
    if ( *(_QWORD *)(v6 + 40) )
      v29 = *(const char **)(v6 + 32);
    v26 = (unsigned int)strcmp(v29, v28) >> 31;
  }
  v24 = (_QWORD *)v6;
  std::_Rb_tree_insert_and_rebalance(v26, v6, v13, v31);
  ++a1[5];
  return v24;
}
