void __fastcall sub_1ECAAD0(void ***a1, const __m128i *a2, __m128i *a3)
{
  void **v5; // r12
  void **v6; // rbp
  char *v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  void **v11; // r14
  __m128i *v12; // rax
  __m128i *v13; // rdx
  __m128i *v14; // rsi
  __int64 v15; // rsi
  __int8 v16; // cl
  const __m128i *v17; // rdx
  unsigned __int64 v18; // rsi
  __m128i *v19; // rax
  __int8 v20; // cl
  const __m128i *v21; // rcx
  const __m128i *v22; // rdx
  unsigned __int64 v23; // rbx
  __int64 v24; // rcx
  const __m128i *v25; // rcx
  void **i; // r15
  __m128i *v27; // [rsp+0h] [rbp-48h] BYREF
  char *v28; // [rsp+8h] [rbp-40h]

  v5 = a1[1];
  v6 = *a1;
  v7 = (char *)((char *)a2 - (char *)*a1);
  if ( !(0xCCCCCCCCCCCCCCCDLL * (v5 - *a1)) )
  {
    v8 = 1;
    goto LABEL_32;
  }
  v8 = 0x999999999999999ALL * (a1[1] - *a1);
  v9 = -16;
  if ( 0xCCCCCCCCCCCCCCCDLL * (v5 - *a1) > 0x999999999999999ALL * (v5 - *a1) || v8 > 0x666666666666666LL )
    goto LABEL_3;
  if ( v8 )
  {
LABEL_32:
    v9 = 40 * v8;
LABEL_3:
    v28 = (char *)((char *)a2 - (char *)*a1);
    v10 = operator new(v9);
    v7 = v28;
    v27 = (__m128i *)v10;
    v11 = (void **)(v10 + v9);
    v12 = (__m128i *)(v10 + 40);
    goto LABEL_4;
  }
  v12 = (__m128i *)&qword_28;
  v11 = nullptr;
  v27 = nullptr;
LABEL_4:
  v13 = (__m128i *)&v7[(_QWORD)v27];
  v14 = (__m128i *)a3->m128i_i64[0];
  v13->m128i_i64[0] = (__int64)v13[1].m128i_i64;
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
  v16 = a3[2].m128i_i8[0];
  a3->m128i_i64[1] = 0;
  v13->m128i_i64[1] = v15;
  a3[1].m128i_i8[0] = 0;
  v13[2].m128i_i8[0] = v16;
  if ( a2 != (const __m128i *)v6 )
  {
    v17 = (const __m128i *)(v6 + 2);
    v18 = (unsigned __int64)&v27[2].m128i_u64[((unsigned __int64)((char *)&a2[-3].m128i_u64[1] - (char *)v6) >> 3) + 1];
    v19 = v27;
    do
    {
      v19->m128i_i64[0] = (__int64)v19[1].m128i_i64;
      v21 = (const __m128i *)v17[-1].m128i_i64[0];
      if ( v17 == v21 )
      {
        v19[1] = _mm_loadu_si128(v17);
      }
      else
      {
        v19->m128i_i64[0] = (__int64)v21;
        v19[1].m128i_i64[0] = v17->m128i_i64[0];
      }
      v19 = (__m128i *)((char *)v19 + 40);
      v19[-2].m128i_i64[0] = v17[-1].m128i_i64[1];
      v20 = v17[1].m128i_i8[0];
      v17[-1].m128i_i64[0] = (__int64)v17;
      v17 = (const __m128i *)((char *)v17 + 40);
      v17[-3].m128i_i64[0] = 0;
      v17[-3].m128i_i8[8] = 0;
      v19[-1].m128i_i8[8] = v20;
    }
    while ( v19 != (__m128i *)v18 );
    v12 = (__m128i *)((char *)v19 + 40);
  }
  if ( a2 == (const __m128i *)v5 )
  {
    v23 = (unsigned __int64)v12;
  }
  else
  {
    v22 = a2 + 1;
    v23 = (unsigned __int64)&v12[2].m128i_u64[((unsigned __int64)((char *)v5 - (char *)a2 - 40) >> 3) + 1];
    do
    {
      v12->m128i_i64[0] = (__int64)v12[1].m128i_i64;
      v25 = (const __m128i *)v22[-1].m128i_i64[0];
      if ( v25 == v22 )
      {
        v12[1] = _mm_loadu_si128(v22);
      }
      else
      {
        v12->m128i_i64[0] = (__int64)v25;
        v12[1].m128i_i64[0] = v22->m128i_i64[0];
      }
      v24 = v22[-1].m128i_i64[1];
      v12 = (__m128i *)((char *)v12 + 40);
      v22[-1].m128i_i64[0] = (__int64)v22;
      v22 = (const __m128i *)((char *)v22 + 40);
      v22[-3].m128i_i64[0] = 0;
      v12[-2].m128i_i64[0] = v24;
      LOBYTE(v24) = v22[-2].m128i_i8[8];
      v22[-3].m128i_i8[8] = 0;
      v12[-1].m128i_i8[8] = v24;
    }
    while ( v12 != (__m128i *)v23 );
  }
  for ( i = v6; i != v5; i += 5 )
  {
    while ( *i != i + 2 )
    {
      operator delete(*i);
      i += 5;
      if ( v5 == i )
        goto LABEL_23;
    }
  }
LABEL_23:
  if ( v6 )
    operator delete(v6);
  v27 = (__m128i *)v23;
  a1[2] = v11;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v27);
}
