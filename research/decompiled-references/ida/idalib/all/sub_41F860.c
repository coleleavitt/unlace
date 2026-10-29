_QWORD *__fastcall sub_41F860(_QWORD *a1, __int64 a2)
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
  char *v17; // r13
  __m128i v18; // xmm0
  _QWORD *v19; // rbp
  _QWORD *v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // xmm0_8
  const char *v23; // rsi
  unsigned int v24; // eax
  __int64 v25; // rdi
  _QWORD *v26; // [rsp+0h] [rbp-58h]
  __m128i v28[4]; // [rsp+10h] [rbp-48h] BYREF

  v3 = a1 + 1;
  v4 = (_QWORD *)a1[2];
  v26 = a1 + 1;
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
  if ( v26 == v3 )
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
    v17 = *(char **)a2;
    v18 = _mm_loadu_si128((const __m128i *)(a2 + 8));
    *(_QWORD *)a2 = 0;
    v19 = (_QWORD *)v16;
    *(_QWORD *)(v16 + 32) = v17;
    *(_DWORD *)(v16 + 56) = 0;
    *(__m128i *)(v16 + 40) = v18;
    *(_OWORD *)(a2 + 8) = 0;
    v28[0] = v18;
    v20 = sub_3DE2D0(a1, v3, v16 + 32);
    v3 = v20;
    if ( v21 )
    {
      if ( v20 || (v22 = _mm_load_si128(v28).m128i_u64[0], v26 == (_QWORD *)v21) )
      {
        v25 = 1;
      }
      else
      {
        v23 = haystack;
        if ( *(_QWORD *)(v21 + 40) )
          v23 = *(const char **)(v21 + 32);
        v28[0].m128i_i64[0] = v21;
        if ( !v22 )
          v17 = (char *)haystack;
        v24 = strcmp(v17, v23);
        v21 = v28[0].m128i_i64[0];
        v25 = v24 >> 31;
      }
      v3 = v19;
      std::_Rb_tree_insert_and_rebalance(v25, v19, v21, v26);
      ++a1[5];
    }
    else if ( v19 )
    {
      if ( v17 )
      {
        v19[5] = 0;
        qfree(v17);
      }
      operator delete(v19, 0x40u);
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
