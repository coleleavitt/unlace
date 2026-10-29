unsigned __int64 __fastcall sub_A5EC30(void ***a1, const __m128i *a2, __m128i *a3)
{
  void **v4; // r13
  void **v5; // rbx
  char *v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  __m128i *v11; // rbp
  __int64 m128i_i64; // r14
  __m128i *v13; // rax
  __m128i *v14; // rsi
  __int64 v15; // rsi
  const __m128i *v16; // rax
  __m128i *v17; // rdx
  unsigned __int64 v18; // r14
  __m128i *v19; // rsi
  const __m128i *v20; // rcx
  const __m128i *v21; // rax
  __m128i *v22; // rdx
  __m128i *v23; // rsi
  const __m128i *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  void **i; // r15
  unsigned __int64 result; // rax
  __m128i v29; // xmm2
  __int64 v30; // rcx
  __int64 v31; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+10h] [rbp-48h]
  __m128i *v33; // [rsp+18h] [rbp-40h]

  v4 = a1[1];
  v5 = *a1;
  v6 = (char *)((char *)a2 - (char *)*a1);
  v7 = ((char *)v4 - (char *)*a1) >> 5;
  if ( !v7 )
  {
    v8 = 1;
    goto LABEL_32;
  }
  v8 = 2 * v7;
  v9 = -32;
  if ( v7 > 2 * v7 || v8 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v8 )
  {
LABEL_32:
    v9 = 32 * v8;
LABEL_3:
    v33 = a3;
    v31 = (__int64)v6;
    v10 = operator new(v9);
    v6 = (char *)v31;
    a3 = v33;
    v11 = (__m128i *)v10;
    v32 = v10 + v9;
    m128i_i64 = v10 + 32;
    goto LABEL_4;
  }
  m128i_i64 = 32;
  v11 = nullptr;
  v32 = 0;
LABEL_4:
  v13 = (__m128i *)&v6[(_QWORD)v11];
  v14 = (__m128i *)a3->m128i_i64[0];
  *(_QWORD *)&v6[(_QWORD)v11] = &v6[(_QWORD)v11 + 16];
  if ( v14 == &a3[1] )
  {
    v13[1] = _mm_loadu_si128(a3 + 1);
  }
  else
  {
    v13->m128i_i64[0] = (__int64)v14;
    v13[1].m128i_i64[0] = a3[1].m128i_i64[0];
  }
  v15 = a3->m128i_i64[1];
  a3->m128i_i64[0] = (__int64)a3[1].m128i_i64;
  a3->m128i_i64[1] = 0;
  v13->m128i_i64[1] = v15;
  a3[1].m128i_i8[0] = 0;
  if ( a2 != (const __m128i *)v5 )
  {
    v16 = (const __m128i *)(v5 + 2);
    v17 = v11;
    v18 = (unsigned __int64)((char *)&a2[-2] - (char *)v5) >> 5;
    v19 = &v11[2 * v18 + 2];
    do
    {
      while ( 1 )
      {
        v17->m128i_i64[0] = (__int64)v17[1].m128i_i64;
        v20 = (const __m128i *)v16[-1].m128i_i64[0];
        if ( v20 == v16 )
          break;
        v17->m128i_i64[0] = (__int64)v20;
        v17 += 2;
        v17[-1].m128i_i64[0] = v16->m128i_i64[0];
        v17[-2].m128i_i64[1] = v16[-1].m128i_i64[1];
        v16[-1].m128i_i64[0] = (__int64)v16;
        v16 += 2;
        v16[-3].m128i_i64[1] = 0;
        v16[-2].m128i_i8[0] = 0;
        if ( v17 == v19 )
          goto LABEL_10;
      }
      v17 += 2;
      v17[-1] = _mm_loadu_si128(v16);
      v17[-2].m128i_i64[1] = v16[-1].m128i_i64[1];
      v16[-1].m128i_i64[0] = (__int64)v16;
      v16 += 2;
      v16[-3].m128i_i64[1] = 0;
      v16[-2].m128i_i8[0] = 0;
    }
    while ( v19 != v17 );
LABEL_10:
    m128i_i64 = (__int64)v11[2 * v18 + 4].m128i_i64;
  }
  if ( a2 != (const __m128i *)v4 )
  {
    v21 = a2 + 1;
    v22 = (__m128i *)m128i_i64;
    v23 = (__m128i *)(m128i_i64 + 32 * (((unsigned __int64)((char *)v4 - (char *)a2 - 32) >> 5) + 1));
    do
    {
      while ( 1 )
      {
        v22->m128i_i64[0] = (__int64)v22[1].m128i_i64;
        v24 = (const __m128i *)v21[-1].m128i_i64[0];
        if ( v24 == v21 )
          break;
        v22->m128i_i64[0] = (__int64)v24;
        v25 = v21->m128i_i64[0];
        v22 += 2;
        v21[-1].m128i_i64[0] = (__int64)v21;
        v21 += 2;
        v22[-1].m128i_i64[0] = v25;
        v26 = v21[-3].m128i_i64[1];
        v21[-2].m128i_i8[0] = 0;
        v22[-2].m128i_i64[1] = v26;
        v21[-3].m128i_i64[1] = 0;
        if ( v22 == v23 )
          goto LABEL_15;
      }
      v29 = _mm_loadu_si128(v21);
      v30 = v21[-1].m128i_i64[1];
      v22 += 2;
      v21->m128i_i8[0] = 0;
      v21[-1].m128i_i64[1] = 0;
      v21 += 2;
      v22[-1] = v29;
      v22[-2].m128i_i64[1] = v30;
    }
    while ( v23 != v22 );
LABEL_15:
    m128i_i64 += 32 * (((unsigned __int64)((char *)v4 - (char *)a2 - 32) >> 5) + 1);
  }
  for ( i = v5; i != v4; i += 4 )
  {
    while ( *i != i + 2 )
    {
      operator delete(*i);
      i += 4;
      if ( v4 == i )
        goto LABEL_19;
    }
  }
LABEL_19:
  if ( v5 )
    operator delete(v5);
  v31 = m128i_i64;
  result = v32;
  a1[2] = (void **)v32;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v31);
  return result;
}

