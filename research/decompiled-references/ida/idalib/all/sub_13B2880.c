void __fastcall sub_13B2880(char **a1, __int64 a2, _DWORD *a3, __m128i *a4)
{
  char *v7; // rbp
  char *v8; // rbx
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rax
  char *v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rax
  __m128i *v16; // rsi
  __int64 v17; // rsi
  const __m128i *v18; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  const __m128i *v21; // rcx
  const __m128i *v22; // rax
  unsigned __int64 v23; // r14
  const __m128i *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  char *i; // r15
  char *v28; // rdi
  __m128i v29; // xmm2
  __int64 v30; // rdx
  unsigned __int64 v31; // [rsp+8h] [rbp-50h] BYREF
  __int64 v32; // [rsp+10h] [rbp-48h]
  __m128i *v33; // [rsp+18h] [rbp-40h]

  v7 = a1[1];
  v8 = *a1;
  v9 = a2 - (_QWORD)*a1;
  if ( !(0xCCCCCCCCCCCCCCCDLL * ((v7 - *a1) >> 3)) )
  {
    v10 = 1;
    goto LABEL_31;
  }
  v10 = 0x999999999999999ALL * ((a1[1] - *a1) >> 3);
  v11 = -16;
  if ( 0xCCCCCCCCCCCCCCCDLL * ((v7 - *a1) >> 3) > 0x999999999999999ALL * ((v7 - *a1) >> 3) || v10 > 0x666666666666666LL )
    goto LABEL_3;
  if ( v10 )
  {
LABEL_31:
    v11 = 40 * v10;
LABEL_3:
    v33 = a4;
    v32 = v9;
    v12 = operator new(v11);
    v9 = v32;
    a4 = v33;
    v31 = v12;
    v13 = (char *)(v12 + v11);
    v14 = v12 + 40;
    goto LABEL_4;
  }
  v31 = 0;
  v14 = 40;
  v13 = nullptr;
  v12 = 0;
LABEL_4:
  v15 = v9 + v12;
  v16 = (__m128i *)a4->m128i_i64[0];
  *(_DWORD *)v15 = *a3;
  *(_QWORD *)(v15 + 8) = v15 + 24;
  if ( v16 == &a4[1] )
  {
    *(__m128i *)(v15 + 24) = _mm_loadu_si128(a4 + 1);
  }
  else
  {
    *(_QWORD *)(v15 + 8) = v16;
    *(_QWORD *)(v15 + 24) = a4[1].m128i_i64[0];
  }
  v17 = a4->m128i_i64[1];
  a4->m128i_i64[0] = (__int64)a4[1].m128i_i64;
  a4->m128i_i64[1] = 0;
  *(_QWORD *)(v15 + 16) = v17;
  a4[1].m128i_i8[0] = 0;
  if ( (char *)a2 != v8 )
  {
    v18 = (const __m128i *)(v8 + 24);
    v19 = v31 + 8 * ((unsigned __int64)(a2 - 40 - (_QWORD)v8) >> 3) + 40;
    v20 = v31;
    do
    {
      while ( 1 )
      {
        *(_DWORD *)v20 = v18[-2].m128i_i32[2];
        *(_QWORD *)(v20 + 8) = v20 + 24;
        v21 = (const __m128i *)v18[-1].m128i_i64[0];
        if ( v18 == v21 )
          break;
        *(_QWORD *)(v20 + 8) = v21;
        v20 += 40LL;
        *(_QWORD *)(v20 - 16) = v18->m128i_i64[0];
        *(_QWORD *)(v20 - 24) = v18[-1].m128i_i64[1];
        v18[-1].m128i_i64[0] = (__int64)v18;
        v18 = (const __m128i *)((char *)v18 + 40);
        v18[-3].m128i_i64[0] = 0;
        v18[-3].m128i_i8[8] = 0;
        if ( v20 == v19 )
          goto LABEL_10;
      }
      v20 += 40LL;
      *(__m128i *)(v20 - 16) = _mm_loadu_si128(v18);
      *(_QWORD *)(v20 - 24) = v18[-1].m128i_i64[1];
      v18[-1].m128i_i64[0] = (__int64)v18;
      v18 = (const __m128i *)((char *)v18 + 40);
      v18[-3].m128i_i64[0] = 0;
      v18[-3].m128i_i8[8] = 0;
    }
    while ( v19 != v20 );
LABEL_10:
    v14 = v19 + 40;
  }
  if ( (char *)a2 == v7 )
  {
    v23 = v14;
  }
  else
  {
    v22 = (const __m128i *)(a2 + 24);
    v23 = v14 + 8 * ((unsigned __int64)&v7[-a2 - 40] >> 3) + 40;
    do
    {
      while ( 1 )
      {
        *(_DWORD *)v14 = v22[-2].m128i_i32[2];
        *(_QWORD *)(v14 + 8) = v14 + 24;
        v24 = (const __m128i *)v22[-1].m128i_i64[0];
        if ( v24 == v22 )
          break;
        *(_QWORD *)(v14 + 8) = v24;
        v25 = v22->m128i_i64[0];
        v14 += 40;
        v22[-1].m128i_i64[0] = (__int64)v22;
        v22 = (const __m128i *)((char *)v22 + 40);
        *(_QWORD *)(v14 - 16) = v25;
        v26 = v22[-3].m128i_i64[0];
        v22[-3].m128i_i8[8] = 0;
        *(_QWORD *)(v14 - 24) = v26;
        v22[-3].m128i_i64[0] = 0;
        if ( v14 == v23 )
          goto LABEL_15;
      }
      v29 = _mm_loadu_si128(v22);
      v30 = v22[-1].m128i_i64[1];
      v14 += 40;
      v22->m128i_i8[0] = 0;
      v22[-1].m128i_i64[1] = 0;
      v22 = (const __m128i *)((char *)v22 + 40);
      *(__m128i *)(v14 - 16) = v29;
      *(_QWORD *)(v14 - 24) = v30;
    }
    while ( v23 != v14 );
  }
LABEL_15:
  for ( i = v8; i != v7; i += 40 )
  {
    while ( 1 )
    {
      v28 = *((char **)i + 1);
      if ( v28 == i + 24 )
        break;
      operator delete(v28);
      i += 40;
      if ( v7 == i )
        goto LABEL_18;
    }
  }
LABEL_18:
  if ( v8 )
    operator delete(v8);
  v31 = v23;
  a1[2] = v13;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v31);
}
