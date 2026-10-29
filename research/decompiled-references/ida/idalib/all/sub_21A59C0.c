char *__fastcall sub_21A59C0(char **a1, __int64 a2, __int64 a3)
{
  char *v5; // rbx
  char *v6; // rbp
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  const __m128i *v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
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
    v11 = v10;
    v29 = (char *)(v10 + v9);
    v12 = v10 + 40;
    goto LABEL_4;
  }
  v12 = 40;
  v11 = 0;
  v29 = nullptr;
LABEL_4:
  v13 = v11 + v7;
  *(_BYTE *)v13 = *(_BYTE *)a3;
  *(_QWORD *)(v13 + 8) = v11 + v7 + 24;
  sub_21A32A0((_QWORD *)(v11 + v7 + 8), *(_BYTE **)(a3 + 8), *(_QWORD *)(a3 + 8) + *(_QWORD *)(a3 + 16));
  if ( (char *)a2 != v6 )
  {
    v14 = (const __m128i *)(v6 + 24);
    v15 = v11 + 8 * ((unsigned __int64)(a2 - 40 - (_QWORD)v6) >> 3) + 40;
    v16 = v11;
    do
    {
      while ( 1 )
      {
        *(_BYTE *)v16 = v14[-2].m128i_i8[8];
        *(_QWORD *)(v16 + 8) = v16 + 24;
        v17 = (const __m128i *)v14[-1].m128i_i64[0];
        if ( v17 == v14 )
          break;
        *(_QWORD *)(v16 + 8) = v17;
        v16 += 40;
        *(_QWORD *)(v16 - 16) = v14->m128i_i64[0];
        *(_QWORD *)(v16 - 24) = v14[-1].m128i_i64[1];
        v14[-1].m128i_i64[0] = (__int64)v14;
        v14 = (const __m128i *)((char *)v14 + 40);
        v14[-3].m128i_i64[0] = 0;
        v14[-3].m128i_i8[8] = 0;
        if ( v16 == v15 )
          goto LABEL_8;
      }
      v16 += 40;
      *(__m128i *)(v16 - 16) = _mm_loadu_si128(v14);
      *(_QWORD *)(v16 - 24) = v14[-1].m128i_i64[1];
      v14[-1].m128i_i64[0] = (__int64)v14;
      v14 = (const __m128i *)((char *)v14 + 40);
      v14[-3].m128i_i64[0] = 0;
      v14[-3].m128i_i8[8] = 0;
    }
    while ( v15 != v16 );
LABEL_8:
    v12 = v11 + 8 * ((unsigned __int64)(a2 - 40 - (_QWORD)v6) >> 3) + 80;
  }
  if ( (char *)a2 == v5 )
  {
    v19 = v12;
  }
  else
  {
    v18 = (const __m128i *)(a2 + 24);
    v19 = v12 + 8 * ((unsigned __int64)&v5[-a2 - 40] >> 3) + 40;
    do
    {
      while ( 1 )
      {
        *(_BYTE *)v12 = v18[-2].m128i_i8[8];
        *(_QWORD *)(v12 + 8) = v12 + 24;
        v20 = (const __m128i *)v18[-1].m128i_i64[0];
        if ( v20 == v18 )
          break;
        *(_QWORD *)(v12 + 8) = v20;
        v21 = v18->m128i_i64[0];
        v12 += 40LL;
        v18[-1].m128i_i64[0] = (__int64)v18;
        v18 = (const __m128i *)((char *)v18 + 40);
        *(_QWORD *)(v12 - 16) = v21;
        v22 = v18[-3].m128i_i64[0];
        v18[-3].m128i_i8[8] = 0;
        *(_QWORD *)(v12 - 24) = v22;
        v18[-3].m128i_i64[0] = 0;
        if ( v12 == v19 )
          goto LABEL_13;
      }
      v26 = _mm_loadu_si128(v18);
      v27 = v18[-1].m128i_i64[1];
      v12 += 40LL;
      v18->m128i_i8[0] = 0;
      v18[-1].m128i_i64[1] = 0;
      v18 = (const __m128i *)((char *)v18 + 40);
      *(__m128i *)(v12 - 16) = v26;
      *(_QWORD *)(v12 - 24) = v27;
    }
    while ( v19 != v12 );
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
