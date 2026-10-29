unsigned __int64 *__fastcall sub_F80C60(_QWORD *a1, const __m128i *a2)
{
  unsigned __int64 *v2; // r13
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // rbx
  bool v6; // cf
  __int64 v7; // rcx
  __m128i *v11; // rax
  __m128i v12; // xmm0
  unsigned __int64 *v13; // rsi
  __m128i v14; // xmm1
  __m128i *v15; // rbp
  __int64 m128i_i64; // r14
  unsigned __int64 *v17; // rax
  unsigned __int64 *v18; // rdx
  unsigned __int64 *v19; // r15
  __int64 v20; // rdi
  __int64 v21; // rax
  __m128i *v22; // rdi
  unsigned __int64 *v23; // rdi
  unsigned __int64 v24; // rax
  bool v25; // al
  unsigned __int64 *v26; // [rsp+8h] [rbp-40h]

  v2 = a1 + 1;
  v3 = (unsigned __int64 *)a1[2];
  if ( !v3 )
  {
    v5 = a1 + 1;
    goto LABEL_16;
  }
  v4 = a2->m128i_i64[0];
  v5 = a1 + 1;
  do
  {
    v6 = v3[4] < v4;
    if ( v3[4] == v4 )
    {
      v7 = a2[1].m128i_i64[0];
      if ( (__int64)v3[6] < v7 )
        goto LABEL_14;
      if ( v3[6] != v7 )
        goto LABEL_8;
      v6 = v3[7] < a2[1].m128i_i64[1];
    }
    if ( !v6 )
    {
LABEL_8:
      v5 = v3;
      v3 = (unsigned __int64 *)v3[2];
      continue;
    }
LABEL_14:
    v3 = (unsigned __int64 *)v3[3];
  }
  while ( v3 );
  if ( v2 == v5 )
    goto LABEL_16;
  if ( v5[4] == v4 )
  {
    v21 = v5[6];
    if ( a2[1].m128i_i64[0] < v21 || a2[1].m128i_i64[0] == v21 && a2[1].m128i_i64[1] < v5[7] )
      goto LABEL_16;
  }
  else
  {
    if ( v5[4] <= v4 )
      return v5 + 8;
LABEL_16:
    v11 = (__m128i *)operator new(0x60u);
    v12 = _mm_loadu_si128(a2);
    v13 = v5;
    v14 = _mm_loadu_si128(a2 + 1);
    v15 = v11 + 5;
    v11[5].m128i_i8[0] = 0;
    v5 = (unsigned __int64 *)v11;
    v11[4].m128i_i64[0] = (__int64)v11[5].m128i_i64;
    m128i_i64 = (__int64)v11[2].m128i_i64;
    v11[4].m128i_i64[1] = 0;
    v11[2] = v12;
    v11[3] = v14;
    v17 = sub_F80AD0(a1, v13, (unsigned __int64 *)&v11[2]);
    v19 = v17;
    if ( v18 )
    {
      if ( v17 || v2 == v18 )
      {
        v20 = 1;
      }
      else
      {
        v24 = v18[4];
        if ( v5[4] == v24 )
        {
          v26 = v18;
          v25 = sub_F79B80(m128i_i64, (__int64)(v18 + 4));
          v18 = v26;
        }
        else
        {
          v25 = v5[4] < v24;
        }
        v20 = v25;
      }
      std::_Rb_tree_insert_and_rebalance(v20, v5, v18, v2);
      ++a1[5];
    }
    else
    {
      v22 = (__m128i *)v5[8];
      if ( v15 != v22 )
        operator delete(v22);
      v23 = v5;
      v5 = v19;
      operator delete(v23);
    }
  }
  return v5 + 8;
}
