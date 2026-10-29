unsigned __int64 __fastcall sub_1E7B790(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __m128i *a3,
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
  __int64 v15; // rax
  __m128i *v16; // r13
  const __m128i *v17; // rbp
  __int64 v18; // r14
  __int64 v19; // r10
  __m128i *v20; // r11
  __int64 v21; // r15
  __int64 v22; // r13
  __int64 v23; // rax
  __m128i *v24; // rbp
  const __m128i *v25; // rbx
  __int64 v26; // rcx
  const __m128i *v27; // rdx
  __int64 v28; // r12
  __int64 v29; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // r8
  __int64 v33; // rdx
  __m128i v34; // xmm2
  __m128i v35; // xmm1
  __m128 i; // xmm0
  __m128i v37; // xmm3
  __m128 v38; // xmm4
  __m128 v39; // xmm5
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // xmm0_8
  const __m128i *v42; // rsi
  unsigned __int64 v43; // rdx
  const __m128i *v44; // rdi
  __m128i *v45; // rdx
  unsigned __int64 *v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __m128i *v50; // rdx
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // rdx
  __int64 v53; // rdx
  __m128i si128; // xmm2
  __m128i v55; // xmm1
  __m128i v56; // xmm0
  __m128 v57; // xmm7
  __m128i v58; // xmm3
  __m128 v59; // xmm3
  unsigned __int64 v60; // rsi
  unsigned __int64 v61; // rdx
  __m128i *v62; // rcx
  const __m128i *v63; // rdx
  const __m128i *v64; // rdx
  const __m128i *v65; // rcx
  __int64 v66; // rdx
  unsigned __int64 v67; // rsi
  __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  const __m128i *v70; // rdx
  const __m128i *v71; // rcx
  __m128i v72; // xmm2
  const __m128i *v73; // rdi
  __m128i v74; // xmm5
  const __m128i *v75; // [rsp+10h] [rbp-58h] BYREF
  __m128i *v76; // [rsp+18h] [rbp-50h]
  __m128i *v77; // [rsp+20h] [rbp-48h]
  __m128i *v78; // [rsp+28h] [rbp-40h]
  __int64 v79; // [rsp+70h] [rbp+8h]

  v15 = a5;
  v16 = a3;
  v17 = a6;
  if ( a15 <= a5 )
    v15 = a15;
  if ( a4 <= v15 )
  {
    v25 = (const __m128i *)a2;
    result = a1;
LABEL_47:
    v51 = (__int64)((__int64)v25->m128i_i64 - result) >> 4;
    v52 = v51;
    if ( (__int64)((__int64)v25->m128i_i64 - result) <= 0 )
      return result;
    if ( (result >= (unsigned __int64)&v17[2] || (unsigned __int64)v17 >= result + 32)
      && (__int64)((__int64)v25->m128i_i64 - result) > 48 )
    {
      v75 = v17 + 1;
      v53 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
      v55 = _mm_load_si128((const __m128i *)&xmmword_23AABC0);
      v56 = (__m128i)_mm_loadh_ps((const double *)&v75);
      do
      {
        v57 = (__m128)_mm_loadu_si128((const __m128i *)(result + v53 * 16));
        v17[v53 + 1] = _mm_loadu_si128((const __m128i *)(result + v53 * 16 + 16));
        v58 = v56;
        v56 = _mm_add_epi64(v56, si128);
        v17[v53] = (const __m128i)v57;
        v53 += 2;
        v59 = (__m128)_mm_add_epi64(v58, v55);
      }
      while ( 2 * (v51 >> 1) != v53 );
      v60 = _mm_movehl_ps(v57, v59).m128_u64[0];
      v61 = v51 & 0xFFFFFFFFFFFFFFFELL;
      v62 = (__m128i *)&v17[v61];
      v63 = (const __m128i *)(result + v61 * 16);
      if ( (v51 & 0xFFFFFFFFFFFFFFFELL) != v51 )
      {
        v60 = (unsigned __int64)&v62[1];
        *v62 = _mm_loadu_si128(v63);
      }
    }
    else
    {
      v71 = (const __m128i *)result;
      v60 = (unsigned __int64)v17;
      do
      {
        v72 = _mm_loadu_si128(v71);
        v60 += 16LL;
        ++v71;
        *(__m128i *)(v60 - 16) = v72;
        --v52;
      }
      while ( v52 );
    }
    while ( v16 != v25 && v17 != (const __m128i *)v60 )
    {
      while ( v25->m128i_i64[0] >= (unsigned __int64)v17->m128i_i64[0] )
      {
        v65 = (const __m128i *)v17->m128i_i64[1];
        ++v17;
        result += 16LL;
        v75 = v65;
        *(__m128 *)(result - 16) = _mm_loadh_ps((const double *)&v75);
        if ( v17 == (const __m128i *)v60 || v16 == v25 )
          goto LABEL_60;
      }
      v64 = (const __m128i *)v25->m128i_i64[1];
      ++v25;
      result += 16LL;
      v75 = v64;
      *(__m128 *)(result - 16) = _mm_loadh_ps((const double *)&v75);
    }
LABEL_60:
    if ( v17 != (const __m128i *)v60 )
    {
      v66 = v60 - (_QWORD)v17;
      v67 = (__int64)(v60 - (_QWORD)v17) >> 4;
      if ( v66 > 0 )
      {
        v68 = 0;
        v69 = 0;
        do
        {
          ++v69;
          *(__m128i *)(result + v68 * 16) = _mm_loadu_si128(&v17[v68]);
          ++v68;
        }
        while ( v67 > v69 );
      }
    }
    return result;
  }
  v18 = a5;
  if ( a15 < a5 )
  {
    v78 = a3;
    v19 = a15;
    v20 = (__m128i *)a1;
    v21 = a4;
    v75 = a6;
    while ( 1 )
    {
      if ( v21 <= v18 )
      {
        v28 = v18 / 2;
        v48 = (__int64)(a2 - (_QWORD)v20) >> 4;
        v25 = (const __m128i *)(a2 + 16 * (v18 / 2));
        if ( (__int64)(a2 - (_QWORD)v20) <= 0 )
        {
          v24 = v20;
          v22 = 0;
        }
        else
        {
          v24 = v20;
          do
          {
            while ( 1 )
            {
              v49 = v48 >> 1;
              v50 = &v24[v48 >> 1];
              if ( v50->m128i_i64[0] > (unsigned __int64)v25->m128i_i64[0] )
                break;
              v24 = v50 + 1;
              v48 = v48 - v49 - 1;
              if ( v48 <= 0 )
              {
                v22 = v24 - v20;
                goto LABEL_12;
              }
            }
            v48 >>= 1;
          }
          while ( v49 );
          v22 = v24 - v20;
        }
      }
      else
      {
        v22 = v21 / 2;
        v23 = (__int64)((__int64)v78->m128i_i64 - a2) >> 4;
        v24 = &v20[v21 / 2];
        if ( (__int64)((__int64)v78->m128i_i64 - a2) <= 0 )
        {
          v25 = (const __m128i *)a2;
        }
        else
        {
          v25 = (const __m128i *)a2;
          do
          {
            while ( 1 )
            {
              v26 = v23 >> 1;
              v27 = &v25[v23 >> 1];
              if ( v27->m128i_i64[0] >= (unsigned __int64)v24->m128i_i64[0] )
                break;
              v25 = v27 + 1;
              v23 = v23 - v26 - 1;
              if ( v23 <= 0 )
                goto LABEL_11;
            }
            v23 >>= 1;
          }
          while ( v26 );
        }
LABEL_11:
        v28 = (__int64)((__int64)v25->m128i_i64 - a2) >> 4;
      }
LABEL_12:
      v77 = v20;
      v21 -= v22;
      v18 -= v28;
      v79 = v19;
      v76 = sub_1E7B320(
              (unsigned __int64)v24,
              a2,
              (__int64)v25,
              v21,
              v28,
              v75,
              a7,
              a8,
              a9,
              a10,
              a11,
              a12,
              a13,
              a14,
              v19);
      sub_1E7B790((_DWORD)v77, (_DWORD)v24, (_DWORD)v76, v22, v28, (_DWORD)v75, v79);
      v29 = v18;
      v19 = v79;
      result = (unsigned __int64)v76;
      if ( v79 <= v18 )
        v29 = v79;
      if ( v21 <= v29 )
        break;
      v20 = v76;
      a2 = (unsigned __int64)v25;
      if ( v79 >= v18 )
      {
        v16 = v78;
        v17 = v75;
        goto LABEL_17;
      }
    }
    v16 = v78;
    v17 = v75;
    goto LABEL_47;
  }
  v25 = (const __m128i *)a2;
  result = a1;
LABEL_17:
  v31 = v16 - v25;
  v32 = v31;
  if ( (char *)v16 - (char *)v25 <= 0 )
    return result;
  if ( (v25 >= &v17[2] || v17 >= &v25[2]) && (char *)v16 - (char *)v25 > 48 )
  {
    v75 = v17 + 1;
    v33 = 0;
    v34 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    v35 = _mm_load_si128((const __m128i *)&xmmword_23AABC0);
    for ( i = _mm_loadh_ps((const double *)&v75); ; i = v38 )
    {
      v37 = _mm_loadu_si128(&v25[v33 + 1]);
      v38 = (__m128)_mm_add_epi64((__m128i)i, v34);
      v39 = (__m128)_mm_add_epi64((__m128i)i, v35);
      v17[v33] = _mm_loadu_si128(&v25[v33]);
      v17[v33 + 1] = v37;
      v33 += 2;
      if ( 2 * (v31 >> 1) == v33 )
        break;
    }
    v40 = v37.m128i_i64[0];
    v41 = _mm_srli_si128((__m128i)i, 8).m128i_u64[0];
    v42 = (const __m128i *)_mm_movehl_ps((__m128)v34, v39).m128_u64[0];
    v43 = v31 & 0xFFFFFFFFFFFFFFFELL;
    v44 = &v25[v43];
    v45 = (__m128i *)&v17[v43];
    if ( v31 == (v31 & 0xFFFFFFFFFFFFFFFELL) )
    {
      v45 = (__m128i *)v41;
    }
    else
    {
      v40 = v44->m128i_i64[0];
      v42 = v45 + 1;
      *v45 = _mm_loadu_si128(v44);
    }
  }
  else
  {
    v45 = (__m128i *)v17;
    v73 = v25;
    while ( 1 )
    {
      v74 = _mm_loadu_si128(v73);
      v40 = v73->m128i_i64[0];
      v42 = v45 + 1;
      ++v73;
      *v45 = v74;
      if ( !--v32 )
        break;
      ++v45;
    }
  }
  if ( (const __m128i *)result != v25 )
  {
    if ( v17 == v42 )
      return result;
    v46 = (unsigned __int64 *)&v25[-1];
    while ( 1 )
    {
      --v16;
      if ( v40 < *v46 )
      {
        v47 = v46[1];
        v16->m128i_i64[0] = *v46;
        v16->m128i_i64[1] = v47;
        if ( v46 == (unsigned __int64 *)result )
        {
          v70 = v45 + 1;
          result = v70 - v17;
          if ( (char *)v70 - (char *)v17 > 0 )
          {
            do
            {
              *--v16 = _mm_loadu_si128(--v70);
              --result;
            }
            while ( result );
          }
          return result;
        }
        v46 -= 2;
      }
      else
      {
        v16->m128i_i64[0] = v40;
        v16->m128i_i64[1] = v45->m128i_i64[1];
        if ( v17 == v45 )
          return result;
        --v45;
      }
      v40 = v45->m128i_i64[0];
    }
  }
  result = v42 - v17;
  if ( (char *)v42 - (char *)v17 > 0 )
  {
    do
    {
      *--v16 = _mm_loadu_si128(--v42);
      --result;
    }
    while ( result );
  }
  return result;
}
