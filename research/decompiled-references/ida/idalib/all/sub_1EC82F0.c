void __fastcall sub_1EC82F0(void ***a1, const __m128i *a2, __m128i *a3)
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
  __m128i v16; // xmm5
  __int64 v17; // rcx
  const __m128i *v18; // rdx
  __m128i *v19; // rax
  __m128i *v20; // rsi
  __m128i v21; // xmm1
  const __m128i *v22; // rcx
  const __m128i *v23; // rdx
  __m128i *v24; // rbx
  __int64 v25; // rcx
  __m128i v26; // xmm2
  const __m128i *v27; // rcx
  void **i; // r15
  __m128i *v29; // [rsp+0h] [rbp-48h] BYREF
  char *v30; // [rsp+8h] [rbp-40h]

  v5 = a1[1];
  v6 = *a1;
  v7 = (char *)((char *)a2 - (char *)*a1);
  if ( !(0x6DB6DB6DB6DB6DB7LL * (v5 - *a1)) )
  {
    v8 = 1;
    goto LABEL_32;
  }
  v8 = 0xDB6DB6DB6DB6DB6ELL * (a1[1] - *a1);
  v9 = -16;
  if ( 0x6DB6DB6DB6DB6DB7LL * (v5 - *a1) > 0xDB6DB6DB6DB6DB6ELL * (v5 - *a1) || v8 > 0x492492492492492LL )
    goto LABEL_3;
  if ( v8 )
  {
LABEL_32:
    v9 = 56 * v8;
LABEL_3:
    v30 = (char *)((char *)a2 - (char *)*a1);
    v10 = operator new(v9);
    v7 = v30;
    v29 = (__m128i *)v10;
    v11 = (void **)(v10 + v9);
    v12 = (__m128i *)(v10 + 56);
    goto LABEL_4;
  }
  v12 = (__m128i *)&word_38;
  v11 = nullptr;
  v29 = nullptr;
LABEL_4:
  v13 = (__m128i *)&v7[(_QWORD)v29];
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
  v16 = _mm_loadu_si128(a3 + 2);
  a3->m128i_i64[0] = (__int64)a3[1].m128i_i64;
  v17 = a3[3].m128i_i64[0];
  a3->m128i_i64[1] = 0;
  v13->m128i_i64[1] = v15;
  a3[1].m128i_i8[0] = 0;
  v13[2] = v16;
  v13[3].m128i_i64[0] = v17;
  if ( a2 != (const __m128i *)v6 )
  {
    v18 = (const __m128i *)(v6 + 2);
    v19 = v29;
    v20 = (__m128i *)((char *)v29
                    + 56
                    * ((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)((char *)&a2[-4].m128i_u64[1] - (char *)v6) >> 3))
                     & 0x1FFFFFFFFFFFFFFFLL)
                    + 56);
    do
    {
      v19->m128i_i64[0] = (__int64)v19[1].m128i_i64;
      v22 = (const __m128i *)v18[-1].m128i_i64[0];
      if ( v22 == v18 )
      {
        v19[1] = _mm_loadu_si128(v18);
      }
      else
      {
        v19->m128i_i64[0] = (__int64)v22;
        v19[1].m128i_i64[0] = v18->m128i_i64[0];
      }
      v19 = (__m128i *)((char *)v19 + 56);
      v19[-3].m128i_i64[0] = v18[-1].m128i_i64[1];
      v21 = _mm_loadu_si128(v18 + 1);
      v18[-1].m128i_i64[0] = (__int64)v18;
      v18 = (const __m128i *)((char *)v18 + 56);
      v18[-4].m128i_i64[0] = 0;
      v18[-4].m128i_i8[8] = 0;
      *(__m128i *)((char *)v19 - 24) = v21;
      v19[-1].m128i_i32[2] = v18[-2].m128i_i32[2];
      v19[-1].m128i_i32[3] = v18[-2].m128i_i32[3];
    }
    while ( v19 != v20 );
    v12 = (__m128i *)((char *)v19 + 56);
  }
  if ( a2 == (const __m128i *)v5 )
  {
    v24 = v12;
  }
  else
  {
    v23 = a2 + 1;
    v24 = (__m128i *)((char *)v12
                    + 56
                    * ((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)((char *)v5 - (char *)a2 - 56) >> 3))
                     & 0x1FFFFFFFFFFFFFFFLL)
                    + 56);
    do
    {
      v12->m128i_i64[0] = (__int64)v12[1].m128i_i64;
      v27 = (const __m128i *)v23[-1].m128i_i64[0];
      if ( v23 == v27 )
      {
        v12[1] = _mm_loadu_si128(v23);
      }
      else
      {
        v12->m128i_i64[0] = (__int64)v27;
        v12[1].m128i_i64[0] = v23->m128i_i64[0];
      }
      v25 = v23[-1].m128i_i64[1];
      v26 = _mm_loadu_si128(v23 + 1);
      v12 = (__m128i *)((char *)v12 + 56);
      v23->m128i_i8[0] = 0;
      v23[-1].m128i_i64[0] = (__int64)v23;
      v23 = (const __m128i *)((char *)v23 + 56);
      v12[-3].m128i_i64[0] = v25;
      LODWORD(v25) = v23[-2].m128i_i32[2];
      *(__m128i *)((char *)v12 - 24) = v26;
      v12[-1].m128i_i32[2] = v25;
      LODWORD(v25) = v23[-2].m128i_i32[3];
      v23[-4].m128i_i64[0] = 0;
      v12[-1].m128i_i32[3] = v25;
    }
    while ( v12 != v24 );
  }
  for ( i = v6; i != v5; i += 7 )
  {
    while ( *i != i + 2 )
    {
      operator delete(*i);
      i += 7;
      if ( v5 == i )
        goto LABEL_23;
    }
  }
LABEL_23:
  if ( v6 )
    operator delete(v6);
  v29 = v24;
  a1[2] = v11;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v29);
}
