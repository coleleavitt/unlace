void **__fastcall sub_E709F0(void ***a1, const __m128i *a2, __int64 a3)
{
  const __m128i *v3; // r8
  void **v4; // rbx
  void **v5; // rbp
  const __m128i *v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r14
  __m128i *v10; // rax
  __m128i *v11; // r12
  __int64 m128i_i64; // r15
  _BYTE *v13; // rsi
  const __m128i *v14; // r8
  const __m128i *v15; // rax
  __m128i *v16; // rdx
  unsigned __int64 v17; // r15
  __m128i *v18; // rsi
  const __m128i *v19; // rcx
  const __m128i *v20; // rax
  __m128i *v21; // rdx
  __m128i *v22; // rsi
  const __m128i *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  void **i; // r14
  void **result; // rax
  __m128i v28; // xmm2
  __int64 v29; // rcx
  const __m128i *v30; // [rsp+0h] [rbp-58h] BYREF
  void **v31; // [rsp+8h] [rbp-50h]
  const __m128i *v32; // [rsp+10h] [rbp-48h]
  __int64 v33; // [rsp+18h] [rbp-40h]

  v3 = a2;
  v4 = a1[1];
  v5 = *a1;
  v6 = (const __m128i *)((char *)a2 - (char *)*a1);
  v7 = ((char *)v4 - (char *)*a1) >> 5;
  if ( !v7 )
  {
    v8 = 1;
    goto LABEL_30;
  }
  v8 = 2 * v7;
  v9 = 0xFFFFFFFFFFFFFFELL;
  if ( v7 > 2 * v7 || v8 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v8 )
  {
LABEL_30:
    v9 = 2 * v8;
LABEL_3:
    v33 = a3;
    v32 = v3;
    v30 = v6;
    v10 = (__m128i *)operator new(v9 * 16);
    v6 = v30;
    v3 = v32;
    v11 = v10;
    a3 = v33;
    v31 = (void **)&v10[v9];
    m128i_i64 = (__int64)v10[2].m128i_i64;
    goto LABEL_4;
  }
  m128i_i64 = 32;
  v11 = nullptr;
  v31 = nullptr;
LABEL_4:
  v13 = *(_BYTE **)a3;
  v30 = v3;
  *(__int64 *)((char *)v6->m128i_i64 + (_QWORD)v11) = (__int64)v6[1].m128i_i64 + (_QWORD)v11;
  sub_E6ECE0((__int64 *)((char *)v6->m128i_i64 + (_QWORD)v11), v13, (__int64)&v13[*(_QWORD *)(a3 + 8)]);
  v14 = v30;
  if ( v30 != (const __m128i *)v5 )
  {
    v15 = (const __m128i *)(v5 + 2);
    v16 = v11;
    v17 = (unsigned __int64)((char *)&v30[-2] - (char *)v5) >> 5;
    v18 = &v11[2 * v17 + 2];
    do
    {
      while ( 1 )
      {
        v16->m128i_i64[0] = (__int64)v16[1].m128i_i64;
        v19 = (const __m128i *)v15[-1].m128i_i64[0];
        if ( v19 == v15 )
          break;
        v16->m128i_i64[0] = (__int64)v19;
        v16 += 2;
        v16[-1].m128i_i64[0] = v15->m128i_i64[0];
        v16[-2].m128i_i64[1] = v15[-1].m128i_i64[1];
        v15[-1].m128i_i64[0] = (__int64)v15;
        v15 += 2;
        v15[-3].m128i_i64[1] = 0;
        v15[-2].m128i_i8[0] = 0;
        if ( v16 == v18 )
          goto LABEL_8;
      }
      v16 += 2;
      v16[-1] = _mm_loadu_si128(v15);
      v16[-2].m128i_i64[1] = v15[-1].m128i_i64[1];
      v15[-1].m128i_i64[0] = (__int64)v15;
      v15 += 2;
      v15[-3].m128i_i64[1] = 0;
      v15[-2].m128i_i8[0] = 0;
    }
    while ( v18 != v16 );
LABEL_8:
    m128i_i64 = (__int64)v11[2 * v17 + 4].m128i_i64;
  }
  if ( v14 != (const __m128i *)v4 )
  {
    v20 = v14 + 1;
    v21 = (__m128i *)m128i_i64;
    v22 = (__m128i *)(m128i_i64 + 32 * (((unsigned __int64)((char *)v4 - (char *)v14 - 32) >> 5) + 1));
    do
    {
      while ( 1 )
      {
        v21->m128i_i64[0] = (__int64)v21[1].m128i_i64;
        v23 = (const __m128i *)v20[-1].m128i_i64[0];
        if ( v23 == v20 )
          break;
        v21->m128i_i64[0] = (__int64)v23;
        v24 = v20->m128i_i64[0];
        v21 += 2;
        v20[-1].m128i_i64[0] = (__int64)v20;
        v20 += 2;
        v21[-1].m128i_i64[0] = v24;
        v25 = v20[-3].m128i_i64[1];
        v20[-2].m128i_i8[0] = 0;
        v21[-2].m128i_i64[1] = v25;
        v20[-3].m128i_i64[1] = 0;
        if ( v21 == v22 )
          goto LABEL_13;
      }
      v28 = _mm_loadu_si128(v20);
      v29 = v20[-1].m128i_i64[1];
      v21 += 2;
      v20->m128i_i8[0] = 0;
      v20[-1].m128i_i64[1] = 0;
      v20 += 2;
      v21[-1] = v28;
      v21[-2].m128i_i64[1] = v29;
    }
    while ( v22 != v21 );
LABEL_13:
    m128i_i64 += 32 * (((unsigned __int64)((char *)v4 - (char *)v14 - 32) >> 5) + 1);
  }
  for ( i = v5; i != v4; i += 4 )
  {
    while ( *i != i + 2 )
    {
      operator delete(*i);
      i += 4;
      if ( v4 == i )
        goto LABEL_17;
    }
  }
LABEL_17:
  if ( v5 )
    operator delete(v5);
  v30 = (const __m128i *)m128i_i64;
  result = v31;
  a1[2] = v31;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v30);
  return result;
}
