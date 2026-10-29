__m128i *__fastcall sub_3B9690(__int64 *a1, __int64 *a2, const __m128i **a3)
{
  const __m128i **v3; // r13
  __m128i *v6; // rbp
  const __m128i *v7; // rax
  __m128i *v8; // rcx
  __m128i v9; // xmm0
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 *v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  _BOOL8 v16; // rdi
  __m128i *v17; // r12
  bool v18; // zf
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  void **v24; // rbp
  void **v25; // r13
  void *v26; // rdi
  __int64 v27; // rax
  void **v28; // rsi
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+0h] [rbp-48h]

  v3 = a3;
  v6 = (__m128i *)a1[3];
  ++a1[6];
  if ( v6 )
  {
    a1[3] = v6->m128i_i64[0];
  }
  else
  {
    v6 = (__m128i *)a1[4];
    if ( v6 == (__m128i *)a1[5] )
    {
      v27 = qalloc_or_throw(&loc_3FFFF0);
      v28 = (void **)*a1;
      a1[4] = v27;
      v29 = v27;
      a1[5] = (__int64)&loc_3FFFF0 + v27;
      v30 = a1[1];
      a3 = (const __m128i **)(v30 + 1);
      if ( a1[2] < (unsigned __int64)(v30 + 1) )
      {
        v31 = qvector_reserve(a1, v28, a3, 8);
        *a1 = v31;
        v28 = (void **)v31;
        v30 = a1[1];
      }
      v28[v30] = (void *)v29;
      v6 = (__m128i *)a1[4];
      ++a1[1];
    }
    a1[4] = (__int64)&v6[3].m128i_i64[1];
  }
  v7 = *v3;
  v6[3].m128i_i8[0] = 0;
  v8 = (__m128i *)a2;
  v9 = _mm_loadu_si128(v7);
  v6[2] = v9;
  v10 = v6[2].m128i_u64[1];
  if ( a1 + 8 == a2 )
  {
    if ( a1[12] )
    {
      v13 = (__int64 *)a1[11];
      v8 = nullptr;
      v23 = v13[4];
      if ( v23 < v9.m128i_i64[0] || v9.m128i_i64[0] >= v23 && v13[5] < v10 )
      {
LABEL_13:
        if ( v13 )
        {
          if ( a1 + 8 == v13 || v8 )
          {
            v16 = 1;
LABEL_17:
            v17 = v6;
            std::_Rb_tree_insert_and_rebalance(v16, v6, v13, a1 + 8);
            ++a1[12];
            return v17;
          }
          goto LABEL_36;
        }
        goto LABEL_19;
      }
    }
LABEL_34:
    v8 = (__m128i *)sub_3B8FA0((__int64)a1, v9.m128i_u64[0], v10);
    goto LABEL_13;
  }
  v11 = a2[4];
  if ( v9.m128i_i64[0] < v11 )
  {
LABEL_7:
    v13 = a2;
    if ( (__int64 *)a1[10] == a2 )
      goto LABEL_13;
    v14 = std::_Rb_tree_decrement(a2);
    v8 = (__m128i *)a2;
    v13 = (__int64 *)v14;
    v15 = *(_QWORD *)(v14 + 32);
    if ( v15 < v9.m128i_i64[0] || v9.m128i_i64[0] >= v15 && v13[5] < v10 )
    {
      if ( v13[3] )
        v13 = a2;
      else
        v8 = nullptr;
      goto LABEL_13;
    }
    goto LABEL_34;
  }
  if ( v11 >= v9.m128i_i64[0] )
  {
    v12 = a2[5];
    if ( v10 < v12 )
      goto LABEL_7;
    if ( v12 >= v10 )
      goto LABEL_19;
  }
  v32 = a2[4];
  if ( (__int64 *)a1[11] != a2 )
  {
    v20 = std::_Rb_tree_increment(a2, v11, a3, a2);
    v8 = (__m128i *)a2;
    v21 = v32;
    v13 = (__int64 *)v20;
    v22 = *(_QWORD *)(v20 + 32);
    if ( v9.m128i_i64[0] < v22 || v22 >= v9.m128i_i64[0] && v10 < v13[5] )
    {
      if ( !a2[3] )
      {
        v13 = a2;
        if ( a2 )
          goto LABEL_37;
        goto LABEL_19;
      }
      v8 = (__m128i *)v13;
      goto LABEL_13;
    }
    goto LABEL_34;
  }
  v13 = a2;
  if ( a2 )
  {
LABEL_36:
    v21 = v13[4];
    v16 = 1;
    if ( v9.m128i_i64[0] < v21 )
      goto LABEL_17;
LABEL_37:
    v16 = 0;
    if ( v21 >= v9.m128i_i64[0] )
      v16 = v10 < v13[5];
    goto LABEL_17;
  }
LABEL_19:
  v17 = v8;
  if ( v6 )
  {
    v6->m128i_i64[0] = a1[3];
    v18 = a1[6]-- == 1;
    a1[3] = (__int64)v6;
    if ( v18 )
    {
      v24 = (void **)*a1;
      v25 = (void **)(*a1 + 8 * a1[1]);
      if ( (void **)*a1 != v25 )
      {
        do
        {
          v26 = *v24++;
          qfree(v26);
        }
        while ( v25 != v24 );
        v25 = (void **)*a1;
      }
      if ( v25 )
      {
        a1[1] = 0;
        qfree(v25);
        *a1 = 0;
        a1[2] = 0;
      }
      a1[5] = 0;
      *(_OWORD *)(a1 + 3) = 0;
    }
  }
  return v17;
}
