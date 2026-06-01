char *__fastcall sub_13F7E70(char **a1, __int64 a2, __int64 a3)
{
  char *v5; // rbx
  char *v6; // rbp
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  __m128i *v11; // r12
  __m128i *v12; // r14
  _QWORD *v13; // rax
  const __m128i *v14; // rax
  unsigned __int64 v15; // rcx
  __m128i *v16; // rdx
  const __m128i *v17; // rsi
  const __m128i *v18; // rax
  unsigned __int64 v19; // r15
  const __m128i *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  char *i; // r14
  char *v24; // rdi
  char *result; // rax
  __m128i v26; // xmm2
  __int64 v27; // rdx
  unsigned __int64 v28; // [rsp+8h] [rbp-50h] BYREF
  char *v29; // [rsp+10h] [rbp-48h]
  __int64 v30; // [rsp+18h] [rbp-40h]

  v5 = a1[1];
  v6 = *a1;
  v7 = a2 - (_QWORD)*a1;
  if ( !(0xCCCCCCCCCCCCCCCDLL * ((v5 - *a1) >> 3)) )
  {
    v8 = 1;
    goto LABEL_29;
  }
  v8 = 0x999999999999999ALL * ((a1[1] - *a1) >> 3);
  v9 = -16;
  if ( 0xCCCCCCCCCCCCCCCDLL * ((v5 - *a1) >> 3) > 0x999999999999999ALL * ((v5 - *a1) >> 3) || v8 > 0x666666666666666LL )
    goto LABEL_3;
  if ( v8 )
  {
LABEL_29:
    v9 = 40 * v8;
LABEL_3:
    v30 = a3;
    v28 = v7;
    v10 = operator new(v9);
    a3 = v30;
    v11 = (__m128i *)v10;
    v29 = (char *)(v10 + v9);
    v12 = (__m128i *)(v10 + 40);
    goto LABEL_4;
  }
  v12 = (__m128i *)&qword_28;
  v11 = nullptr;
  v29 = nullptr;
LABEL_4:
  v13 = (__int64 *)((char *)v11->m128i_i64 + v7);
  *v13 = *(_QWORD *)a3;
  v13[1] = (char *)v11 + v7 + 24;
  sub_13F27F0(
    (__int64 *)((char *)&v11->m128i_i64[1] + v7),
    *(_BYTE **)(a3 + 8),
    *(_QWORD *)(a3 + 8) + *(_QWORD *)(a3 + 16));
  if ( (char *)a2 != v6 )
  {
    v14 = (const __m128i *)(v6 + 24);
    v15 = (unsigned __int64)&v11[2].m128i_u64[((unsigned __int64)(a2 - 40 - (_QWORD)v6) >> 3) + 1];
    v16 = v11;
    do
    {
      while ( 1 )
      {
        v16->m128i_i64[0] = v14[-2].m128i_i64[1];
        v16->m128i_i64[1] = (__int64)&v16[1].m128i_i64[1];
        v17 = (const __m128i *)v14[-1].m128i_i64[0];
        if ( v17 == v14 )
          break;
        v16->m128i_i64[1] = (__int64)v17;
        v16 = (__m128i *)((char *)v16 + 40);
        v16[-1].m128i_i64[0] = v14->m128i_i64[0];
        v16[-2].m128i_i64[1] = v14[-1].m128i_i64[1];
        v14[-1].m128i_i64[0] = (__int64)v14;
        v14 = (const __m128i *)((char *)v14 + 40);
        v14[-3].m128i_i64[0] = 0;
        v14[-3].m128i_i8[8] = 0;
        if ( v16 == (__m128i *)v15 )
          goto LABEL_8;
      }
      v16 = (__m128i *)((char *)v16 + 40);
      v16[-1] = _mm_loadu_si128(v14);
      v16[-2].m128i_i64[1] = v14[-1].m128i_i64[1];
      v14[-1].m128i_i64[0] = (__int64)v14;
      v14 = (const __m128i *)((char *)v14 + 40);
      v14[-3].m128i_i64[0] = 0;
      v14[-3].m128i_i8[8] = 0;
    }
    while ( (__m128i *)v15 != v16 );
LABEL_8:
    v12 = (__m128i *)((char *)v11 + 8 * ((unsigned __int64)(a2 - 40 - (_QWORD)v6) >> 3) + 80);
  }
  if ( (char *)a2 == v5 )
  {
    v19 = (unsigned __int64)v12;
  }
  else
  {
    v18 = (const __m128i *)(a2 + 24);
    v19 = (unsigned __int64)&v12[2].m128i_u64[((unsigned __int64)&v5[-a2 - 40] >> 3) + 1];
    do
    {
      while ( 1 )
      {
        v12->m128i_i64[0] = v18[-2].m128i_i64[1];
        v12->m128i_i64[1] = (__int64)&v12[1].m128i_i64[1];
        v20 = (const __m128i *)v18[-1].m128i_i64[0];
        if ( v20 == v18 )
          break;
        v12->m128i_i64[1] = (__int64)v20;
        v21 = v18->m128i_i64[0];
        v12 = (__m128i *)((char *)v12 + 40);
        v18[-1].m128i_i64[0] = (__int64)v18;
        v18 = (const __m128i *)((char *)v18 + 40);
        v12[-1].m128i_i64[0] = v21;
        v22 = v18[-3].m128i_i64[0];
        v18[-3].m128i_i8[8] = 0;
        v12[-2].m128i_i64[1] = v22;
        v18[-3].m128i_i64[0] = 0;
        if ( v12 == (__m128i *)v19 )
          goto LABEL_13;
      }
      v26 = _mm_loadu_si128(v18);
      v27 = v18[-1].m128i_i64[1];
      v12 = (__m128i *)((char *)v12 + 40);
      v18->m128i_i8[0] = 0;
      v18[-1].m128i_i64[1] = 0;
      v18 = (const __m128i *)((char *)v18 + 40);
      v12[-1] = v26;
      v12[-2].m128i_i64[1] = v27;
    }
    while ( (__m128i *)v19 != v12 );
  }
LABEL_13:
  for ( i = v6; i != v5; i += 40 )
  {
    while ( 1 )
    {
      v24 = *((char **)i + 1);
      if ( v24 == i + 24 )
        break;
      operator delete(v24);
      i += 40;
      if ( v5 == i )
        goto LABEL_16;
    }
  }
LABEL_16:
  if ( v6 )
    operator delete(v6);
  v28 = v19;
  result = v29;
  a1[2] = v29;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v28);
  return result;
}
