__m128i *__fastcall sub_1E7B320(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        __m128 a14,
        __int64 a15)
{
  const __m128i *v16; // rbp
  __m128i *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __m128i v23; // xmm2
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __m128i v26; // xmm1
  __m128i v27; // xmm3
  __m128i v28; // xmm5
  __m128i v29; // xmm0
  __m128 v30; // xmm0
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  const __m128i *v33; // rdi
  __m128i *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __m128i v37; // xmm2
  __m128i v38; // xmm1
  __int64 v39; // rax
  __m128i v40; // xmm3
  __m128i v41; // xmm6
  __m128i v42; // xmm0
  __m128 v43; // xmm0
  __m128i *result; // rax
  unsigned __int64 v45; // rdx
  const __m128i *v46; // r9
  __m128i *v47; // r12
  __int64 v48; // rdx
  __int64 v49; // rdi
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  __m128i si128; // xmm2
  __m128i v54; // xmm1
  __m128i v55; // xmm0
  __m128i v56; // xmm4
  __m128i v57; // xmm3
  __m128 v58; // xmm3
  const __m128i *v59; // rdx
  unsigned __int64 v60; // rax
  const __m128i *v61; // rcx
  __m128i *v62; // rax
  __int64 v63; // r8
  __int64 v64; // rcx
  bool v65; // sf
  unsigned __int64 v66; // rdi
  __int64 v67; // rax
  unsigned __int64 v68; // rsi
  const __m128i *v69; // rdi
  __m128i v70; // xmm2
  __m128i v71; // xmm2
  const __m128i *v72; // rcx
  __m128i v73; // xmm7
  double v74[4]; // [rsp+8h] [rbp-20h] BYREF

  v16 = (const __m128i *)a2;
  v17 = (__m128i *)a3;
  if ( a4 <= a5 || a5 > a15 )
  {
    if ( a4 > a15 )
    {
      sub_1E5DF40(a1, a2, a3);
      return (__m128i *)((char *)v17 + a1 - a2);
    }
    if ( !a4 )
      return v17;
    v48 = a2 - a1;
    v49 = (__int64)v17->m128i_i64 - a2;
    v50 = (__int64)(a2 - a1) >> 4;
    v51 = v50;
    if ( (__int64)(a2 - a1) <= 0 )
    {
      if ( v49 <= 0 )
        return v17;
      v59 = a6;
      v64 = 0;
      v63 = 0;
    }
    else
    {
      if ( ((unsigned __int64)a6 >= a1 + 32 || a1 >= (unsigned __int64)&a6[2]) && v48 > 48 )
      {
        *(_QWORD *)&v74[0] = a6[1].m128i_i64;
        v52 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v54 = _mm_load_si128((const __m128i *)&xmmword_23AABC0);
        v55 = (__m128i)_mm_loadh_ps(v74);
        do
        {
          v56 = _mm_loadu_si128((const __m128i *)(a1 + v52 * 16));
          a6[v52 + 1] = _mm_loadu_si128((const __m128i *)(a1 + v52 * 16 + 16));
          v57 = v55;
          v55 = _mm_add_epi64(v55, si128);
          a6[v52] = v56;
          v52 += 2;
          v58 = (__m128)_mm_add_epi64(v57, v54);
        }
        while ( 2 * (v50 >> 1) != v52 );
        v59 = (const __m128i *)_mm_movehl_ps((__m128)v54, v58).m128_u64[0];
        v60 = v50 & 0xFFFFFFFFFFFFFFFELL;
        v61 = (const __m128i *)(a1 + v60 * 16);
        v62 = (__m128i *)&a6[v60];
        if ( v50 != (v50 & 0xFFFFFFFFFFFFFFFELL) )
        {
          v59 = v62 + 1;
          *v62 = _mm_loadu_si128(v61);
        }
      }
      else
      {
        v59 = a6;
        v72 = (const __m128i *)a1;
        do
        {
          v73 = _mm_loadu_si128(v72);
          ++v59;
          ++v72;
          v59[-1] = v73;
          --v51;
        }
        while ( v51 );
      }
      v63 = (char *)v59 - (char *)a6;
      v64 = v59 - a6;
      if ( v49 <= 0 )
      {
LABEL_35:
        if ( v63 > 0 )
        {
          result = v17;
          do
          {
            *--result = _mm_loadu_si128(--v59);
            --v64;
          }
          while ( v64 );
          return result;
        }
        return v17;
      }
    }
    v65 = v49 < 0;
    v66 = 1;
    if ( !v65 && v17 != (__m128i *)a2 )
      v66 = (__int64)((__int64)v17->m128i_i64 - a2) >> 4;
    v67 = 0;
    v68 = 0;
    do
    {
      ++v68;
      *(__m128i *)(a1 + v67 * 16) = _mm_loadu_si128(&v16[v67]);
      ++v67;
    }
    while ( v66 > v68 );
    goto LABEL_35;
  }
  if ( !a5 )
    return (__m128i *)a1;
  v18 = a3 - a2;
  v19 = a2 - a1;
  v20 = v18 >> 4;
  v21 = v19 >> 4;
  v22 = v18 >> 4;
  if ( v18 <= 0 )
  {
    if ( v19 <= 0 )
      return (__m128i *)a1;
    v36 = 0;
    v35 = 0;
    goto LABEL_12;
  }
  if ( (v16 >= &a6[2] || a6 >= &v16[2]) && v18 > 48 )
  {
    *(_QWORD *)&v74[0] = a6[1].m128i_i64;
    v23 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    v24 = 32 * (v22 >> 1);
    v25 = 0;
    v26 = _mm_load_si128((const __m128i *)&xmmword_23AABC0);
    v27 = (__m128i)_mm_loadh_ps(v74);
    do
    {
      v28 = _mm_loadu_si128(&v16[v25 / 0x10]);
      a6[v25 / 0x10 + 1] = _mm_loadu_si128(&v16[v25 / 0x10 + 1]);
      v29 = v27;
      v27 = _mm_add_epi64(v27, v23);
      a6[v25 / 0x10] = v28;
      v25 += 32LL;
      v30 = (__m128)_mm_add_epi64(v29, v26);
    }
    while ( v24 != v25 );
    v31 = _mm_movehl_ps(a14, v30).m128_u64[0];
    v32 = v20 & 0xFFFFFFFFFFFFFFFELL;
    v33 = &v16[v32];
    v34 = (__m128i *)&a6[v32];
    if ( v20 != (v20 & 0xFFFFFFFFFFFFFFFELL) )
    {
      v31 = (unsigned __int64)&v34[1];
      *v34 = _mm_loadu_si128(v33);
    }
  }
  else
  {
    v31 = (unsigned __int64)a6;
    v69 = v16;
    do
    {
      v70 = _mm_loadu_si128(v69);
      v31 += 16LL;
      ++v69;
      *(__m128i *)(v31 - 16) = v70;
      --v22;
    }
    while ( v22 );
  }
  v35 = v31 - (_QWORD)a6;
  v36 = v35 >> 4;
  if ( v19 > 0 )
  {
    do
    {
LABEL_12:
      *--v17 = _mm_loadu_si128(--v16);
      --v21;
    }
    while ( v21 );
  }
  if ( v35 <= 0 )
    return (__m128i *)a1;
  if ( ((unsigned __int64)a6 >= a1 + 32 || a1 >= (unsigned __int64)&a6[2]) && v36 > 3 )
  {
    v37 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    v38 = _mm_load_si128((const __m128i *)&xmmword_23AABC0);
    *(_QWORD *)&v74[0] = a1 + 16;
    v39 = 0;
    v40 = (__m128i)_mm_loadh_ps(v74);
    do
    {
      v41 = _mm_loadu_si128(&a6[v39]);
      *(__m128i *)(a1 + v39 * 16 + 16) = _mm_loadu_si128(&a6[v39 + 1]);
      v42 = v40;
      v40 = _mm_add_epi64(v40, v37);
      *(__m128i *)(a1 + v39 * 16) = v41;
      v39 += 2;
      v43 = (__m128)_mm_add_epi64(v42, v38);
    }
    while ( v39 != 2 * ((unsigned __int64)v36 >> 1) );
    result = (__m128i *)_mm_movehl_ps((__m128)v37, v43).m128_u64[0];
    v45 = v36 & 0xFFFFFFFFFFFFFFFELL;
    v46 = &a6[v45];
    v47 = (__m128i *)(v45 * 16 + a1);
    if ( (v36 & 0xFFFFFFFFFFFFFFFELL) != v36 )
    {
      result = v47 + 1;
      *v47 = _mm_loadu_si128(v46);
    }
  }
  else
  {
    result = (__m128i *)a1;
    do
    {
      v71 = _mm_loadu_si128(a6);
      ++result;
      ++a6;
      result[-1] = v71;
      --v36;
    }
    while ( v36 );
  }
  return result;
}
