void **__fastcall sub_1245DD0(void ***a1, const __m128i *a2, char **a3)
{
  void **v4; // rbx
  void **v5; // rbp
  char *v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  __m128i *v10; // rax
  __m128i *v11; // r12
  __int64 m128i_i64; // r15
  char **v13; // rcx
  char *v14; // rsi
  __int64 v15; // rdx
  size_t v16; // rax
  const __m128i *v17; // rax
  __m128i *v18; // rdx
  unsigned __int64 v19; // r15
  __m128i *v20; // rsi
  const __m128i *v21; // rcx
  const __m128i *v22; // rax
  __m128i *v23; // rdx
  __m128i *v24; // rsi
  const __m128i *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  void **i; // r14
  void **result; // rax
  __m128i v30; // xmm2
  __int64 v31; // [rsp+8h] [rbp-50h] BYREF
  void **v32; // [rsp+10h] [rbp-48h]
  char **v33; // [rsp+18h] [rbp-40h]

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
  v9 = 0xFFFFFFFFFFFFFFELL;
  if ( v7 > 2 * v7 || v8 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v8 )
  {
LABEL_32:
    v9 = 2 * v8;
LABEL_3:
    v33 = a3;
    v31 = (__int64)v6;
    v10 = (__m128i *)operator new(v9 * 16);
    v6 = (char *)v31;
    a3 = v33;
    v11 = v10;
    v32 = (void **)&v10[v9];
    m128i_i64 = (__int64)v10[2].m128i_i64;
    goto LABEL_4;
  }
  m128i_i64 = 32;
  v11 = nullptr;
  v32 = nullptr;
LABEL_4:
  v13 = (char **)&v6[(_QWORD)v11];
  v14 = *a3;
  v15 = -1;
  *v13 = (char *)(v13 + 2);
  if ( v14 )
  {
    v33 = v13;
    v31 = (__int64)v14;
    v16 = strlen(v14);
    v13 = v33;
    v15 = (__int64)&v14[v16];
  }
  sub_1244700(v13, v14, v15);
  if ( a2 != (const __m128i *)v5 )
  {
    v17 = (const __m128i *)(v5 + 2);
    v18 = v11;
    v19 = (unsigned __int64)((char *)&a2[-2] - (char *)v5) >> 5;
    v20 = &v11[2 * v19 + 2];
    do
    {
      while ( 1 )
      {
        v18->m128i_i64[0] = (__int64)v18[1].m128i_i64;
        v21 = (const __m128i *)v17[-1].m128i_i64[0];
        if ( v21 == v17 )
          break;
        v18->m128i_i64[0] = (__int64)v21;
        v18 += 2;
        v18[-1].m128i_i64[0] = v17->m128i_i64[0];
        v18[-2].m128i_i64[1] = v17[-1].m128i_i64[1];
        v17[-1].m128i_i64[0] = (__int64)v17;
        v17 += 2;
        v17[-3].m128i_i64[1] = 0;
        v17[-2].m128i_i8[0] = 0;
        if ( v18 == v20 )
          goto LABEL_10;
      }
      v18 += 2;
      v18[-1] = _mm_loadu_si128(v17);
      v18[-2].m128i_i64[1] = v17[-1].m128i_i64[1];
      v17[-1].m128i_i64[0] = (__int64)v17;
      v17 += 2;
      v17[-3].m128i_i64[1] = 0;
      v17[-2].m128i_i8[0] = 0;
    }
    while ( v20 != v18 );
LABEL_10:
    m128i_i64 = (__int64)v11[2 * v19 + 4].m128i_i64;
  }
  if ( a2 != (const __m128i *)v4 )
  {
    v22 = a2 + 1;
    v23 = (__m128i *)m128i_i64;
    v24 = (__m128i *)(m128i_i64 + 32 * (((unsigned __int64)((char *)v4 - (char *)a2 - 32) >> 5) + 1));
    do
    {
      while ( 1 )
      {
        v23->m128i_i64[0] = (__int64)v23[1].m128i_i64;
        v25 = (const __m128i *)v22[-1].m128i_i64[0];
        if ( v22 == v25 )
          break;
        v23->m128i_i64[0] = (__int64)v25;
        v26 = v22->m128i_i64[0];
        v23 += 2;
        v22[-1].m128i_i64[0] = (__int64)v22;
        v22 += 2;
        v23[-1].m128i_i64[0] = v26;
        v27 = v22[-3].m128i_i64[1];
        v22[-2].m128i_i8[0] = 0;
        v23[-2].m128i_i64[1] = v27;
        v22[-3].m128i_i64[1] = 0;
        if ( v23 == v24 )
          goto LABEL_15;
      }
      v30 = _mm_loadu_si128(v22);
      v23 += 2;
      v22 += 2;
      v23[-1] = v30;
      v23[-2].m128i_i64[1] = v22[-3].m128i_i64[1];
      v22[-3].m128i_i64[1] = 0;
      v22[-2].m128i_i8[0] = 0;
    }
    while ( v24 != v23 );
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
  a1[2] = v32;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v31);
  return result;
}
