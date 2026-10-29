unsigned __int64 __fastcall sub_1E5DCD0(
        const __m128i *a1,
        const __m128i *a2,
        const __m128i *a3,
        const __m128i *a4,
        unsigned __int64 a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  double v11; // rax
  double v12; // r9
  __int64 v13; // rsi
  unsigned __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  __m128i si128; // xmm3
  __m128i v18; // xmm2
  __m128i v19; // xmm0
  __m128i v20; // xmm6
  __m128i v21; // xmm1
  __m128 v22; // xmm1
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rax
  const __m128i *v25; // rdi
  __m128i *v26; // r8
  __int64 v27; // rcx
  unsigned __int64 v28; // r8
  __int64 v29; // rdi
  __int64 v30; // rax
  __m128i v31; // xmm3
  __m128i v32; // xmm2
  __m128i v33; // xmm1
  __m128i v34; // xmm7
  __m128i v35; // xmm0
  __m128 v36; // xmm0
  unsigned __int64 result; // rax
  unsigned __int64 v38; // rcx
  const __m128i *v39; // rdx
  __m128i *v40; // rsi
  __m128i v41; // xmm6
  __m128i v42; // xmm7
  double v43[2]; // [rsp+0h] [rbp-10h] BYREF

  if ( a4 != a3 && a2 != a1 )
  {
    do
    {
      if ( a3->m128i_i64[0] < (unsigned __int64)a1->m128i_i64[0] )
      {
        v11 = *(double *)&a3->m128i_i64[1];
        ++a3;
        v43[0] = v11;
      }
      else
      {
        v12 = *(double *)&a1->m128i_i64[1];
        ++a1;
        v43[0] = v12;
      }
      a5 += 16LL;
      *(__m128 *)(a5 - 16) = _mm_loadh_ps(v43);
    }
    while ( a2 != a1 && a4 != a3 );
  }
  v13 = (char *)a2 - (char *)a1;
  v14 = v13 >> 4;
  v15 = v13 >> 4;
  if ( v13 <= 0 )
  {
    v23 = a5;
  }
  else if ( ((unsigned __int64)a1 >= a5 + 32 || a5 >= (unsigned __int64)&a1[2]) && v13 > 48 )
  {
    *(_QWORD *)&v43[0] = a5 + 16;
    v16 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    v18 = _mm_load_si128((const __m128i *)&xmmword_23AABC0);
    v19 = (__m128i)_mm_loadh_ps(v43);
    do
    {
      v20 = _mm_loadu_si128(&a1[v16]);
      *(__m128i *)(a5 + v16 * 16 + 16) = _mm_loadu_si128(&a1[v16 + 1]);
      v21 = v19;
      v19 = _mm_add_epi64(v19, si128);
      *(__m128i *)(a5 + v16 * 16) = v20;
      v16 += 2;
      v22 = (__m128)_mm_add_epi64(v21, v18);
    }
    while ( 2 * (v14 >> 1) != v16 );
    v23 = _mm_movehl_ps(a10, v22).m128_u64[0];
    v24 = v14 & 0xFFFFFFFFFFFFFFFELL;
    v25 = &a1[v24];
    v26 = (__m128i *)(v24 * 16 + a5);
    if ( v14 != (v14 & 0xFFFFFFFFFFFFFFFELL) )
    {
      v23 = (unsigned __int64)&v26[1];
      *v26 = _mm_loadu_si128(v25);
    }
  }
  else
  {
    v23 = a5;
    do
    {
      v41 = _mm_loadu_si128(a1);
      v23 += 16LL;
      ++a1;
      *(__m128i *)(v23 - 16) = v41;
      --v15;
    }
    while ( v15 );
  }
  v27 = (char *)a4 - (char *)a3;
  v28 = v27 >> 4;
  v29 = v27 >> 4;
  if ( v27 <= 0 )
    return v23;
  if ( (v23 >= (unsigned __int64)&a3[2] || (unsigned __int64)a3 >= v23 + 32) && v27 > 48 )
  {
    *(_QWORD *)&v43[0] = v23 + 16;
    v30 = 0;
    v31 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    v32 = _mm_load_si128((const __m128i *)&xmmword_23AABC0);
    v33 = (__m128i)_mm_loadh_ps(v43);
    do
    {
      v34 = _mm_loadu_si128(&a3[v30]);
      *(__m128i *)(v23 + v30 * 16 + 16) = _mm_loadu_si128(&a3[v30 + 1]);
      v35 = v33;
      v33 = _mm_add_epi64(v33, v31);
      *(__m128i *)(v23 + v30 * 16) = v34;
      v30 += 2;
      v36 = (__m128)_mm_add_epi64(v35, v32);
    }
    while ( v30 != 2 * (v28 >> 1) );
    result = _mm_movehl_ps(a11, v36).m128_u64[0];
    v38 = v28 & 0xFFFFFFFFFFFFFFFELL;
    v39 = &a3[v38];
    v40 = (__m128i *)(v38 * 16 + v23);
    if ( v28 != (v28 & 0xFFFFFFFFFFFFFFFELL) )
    {
      *v40 = _mm_loadu_si128(v39);
      return (unsigned __int64)&v40[1];
    }
  }
  else
  {
    result = v23;
    do
    {
      v42 = _mm_loadu_si128(a3);
      result += 16LL;
      ++a3;
      *(__m128i *)(result - 16) = v42;
      --v29;
    }
    while ( v29 );
  }
  return result;
}
