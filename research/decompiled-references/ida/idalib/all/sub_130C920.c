void **__fastcall sub_130C920(void ***a1, const __m128i *a2, __int64 a3)
{
  void **v6; // rbx
  void **v7; // r12
  __m128i *v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  __m128i *v12; // r15
  _BYTE *v13; // rsi
  __m128i *v14; // rdi
  __m128i *v15; // r8
  __int64 v16; // rdx
  const __m128i *v17; // rdx
  __m128i *v18; // rax
  __m128i *v19; // rsi
  __m128i v20; // xmm1
  const __m128i *v21; // rcx
  const __m128i *v22; // rdx
  __m128i *v23; // rbp
  __int64 v24; // rcx
  __m128i v25; // xmm2
  const __m128i *v26; // rcx
  void **i; // r15
  void **result; // rax
  __m128 v29; // xmm0
  __m128i *v30; // [rsp+8h] [rbp-50h] BYREF
  __m128i *v31; // [rsp+10h] [rbp-48h]
  void **v32; // [rsp+18h] [rbp-40h]

  v6 = a1[1];
  v7 = *a1;
  v8 = (__m128i *)((char *)a2 - (char *)*a1);
  if ( !(0x6DB6DB6DB6DB6DB7LL * (v6 - *a1)) )
  {
    v9 = 1;
    goto LABEL_30;
  }
  v9 = 0xDB6DB6DB6DB6DB6ELL * (a1[1] - *a1);
  v10 = -16;
  if ( 0x6DB6DB6DB6DB6DB7LL * (v6 - *a1) > 0xDB6DB6DB6DB6DB6ELL * (v6 - *a1) || v9 > 0x492492492492492LL )
    goto LABEL_3;
  if ( v9 )
  {
LABEL_30:
    v10 = 56 * v9;
LABEL_3:
    v31 = (__m128i *)((char *)a2 - (char *)*a1);
    v11 = operator new(v10);
    v8 = v31;
    v30 = (__m128i *)v11;
    v32 = (void **)(v11 + v10);
    v12 = (__m128i *)(v11 + 56);
    goto LABEL_4;
  }
  v32 = nullptr;
  v12 = (__m128i *)&word_38;
  v30 = nullptr;
LABEL_4:
  v13 = *(_BYTE **)a3;
  v14 = (__m128i *)((char *)v8 + (_QWORD)v30);
  v31 = v14;
  v14->m128i_i64[0] = (__int64)v14[1].m128i_i64;
  sub_12FAA20(v14, v13, (__int64)&v13[*(_QWORD *)(a3 + 8)]);
  v15 = v31;
  v16 = *(_QWORD *)(a3 + 48);
  v31[2] = _mm_loadu_si128((const __m128i *)(a3 + 32));
  v15[3].m128i_i64[0] = v16;
  if ( a2 != (const __m128i *)v7 )
  {
    v17 = (const __m128i *)(v7 + 2);
    v18 = v30;
    v19 = (__m128i *)((char *)v30
                    + 56
                    * ((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)((char *)&a2[-4].m128i_u64[1] - (char *)v7) >> 3))
                     & 0x1FFFFFFFFFFFFFFFLL)
                    + 56);
    do
    {
      v18->m128i_i64[0] = (__int64)v18[1].m128i_i64;
      v21 = (const __m128i *)v17[-1].m128i_i64[0];
      if ( v21 == v17 )
      {
        v18[1] = _mm_loadu_si128(v17);
      }
      else
      {
        v18->m128i_i64[0] = (__int64)v21;
        v18[1].m128i_i64[0] = v17->m128i_i64[0];
      }
      v18 = (__m128i *)((char *)v18 + 56);
      v18[-3].m128i_i64[0] = v17[-1].m128i_i64[1];
      v20 = _mm_loadu_si128(v17 + 1);
      v17[-1].m128i_i64[0] = (__int64)v17;
      v17 = (const __m128i *)((char *)v17 + 56);
      v17[-4].m128i_i64[0] = 0;
      v17[-4].m128i_i8[8] = 0;
      *(__m128i *)((char *)v18 - 24) = v20;
      v18[-1].m128i_i32[2] = v17[-2].m128i_i32[2];
      v18[-1].m128i_i32[3] = v17[-2].m128i_i32[3];
    }
    while ( v18 != v19 );
    v12 = (__m128i *)((char *)v18 + 56);
  }
  if ( a2 == (const __m128i *)v6 )
  {
    v23 = v12;
  }
  else
  {
    v22 = a2 + 1;
    v23 = (__m128i *)((char *)v12
                    + 56
                    * ((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)((char *)v6 - (char *)a2 - 56) >> 3))
                     & 0x1FFFFFFFFFFFFFFFLL)
                    + 56);
    do
    {
      v12->m128i_i64[0] = (__int64)v12[1].m128i_i64;
      v26 = (const __m128i *)v22[-1].m128i_i64[0];
      if ( v26 == v22 )
      {
        v12[1] = _mm_loadu_si128(v22);
      }
      else
      {
        v12->m128i_i64[0] = (__int64)v26;
        v12[1].m128i_i64[0] = v22->m128i_i64[0];
      }
      v24 = v22[-1].m128i_i64[1];
      v25 = _mm_loadu_si128(v22 + 1);
      v12 = (__m128i *)((char *)v12 + 56);
      v22->m128i_i8[0] = 0;
      v22[-1].m128i_i64[0] = (__int64)v22;
      v22 = (const __m128i *)((char *)v22 + 56);
      v12[-3].m128i_i64[0] = v24;
      LODWORD(v24) = v22[-2].m128i_i32[2];
      *(__m128i *)((char *)v12 - 24) = v25;
      v12[-1].m128i_i32[2] = v24;
      LODWORD(v24) = v22[-2].m128i_i32[3];
      v22[-4].m128i_i64[0] = 0;
      v12[-1].m128i_i32[3] = v24;
    }
    while ( v12 != v23 );
  }
  for ( i = v7; i != v6; i += 7 )
  {
    while ( *i != i + 2 )
    {
      operator delete(*i);
      i += 7;
      if ( v6 == i )
        goto LABEL_21;
    }
  }
LABEL_21:
  if ( v7 )
    operator delete(v7);
  v30 = v23;
  result = v32;
  v29 = _mm_loadh_ps((const double *)&v30);
  a1[2] = v32;
  *(__m128 *)a1 = v29;
  return result;
}
