void __fastcall sub_1E62450(
        __m128 *a1,
        __m128 *a2,
        const __m128i *a3,
        __m128i a4,
        __m128 a5,
        __m128i a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __m128 *v12; // rbp
  __int64 v13; // r11
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  __int64 v16; // r13
  const __m128i *v17; // rbx
  __m128i si128; // xmm8
  __m128i v19; // xmm10
  __int64 v20; // r12
  __int64 v21; // r15
  const __m128i *v22; // r9
  unsigned __int64 v23; // r8
  const __m128i *v24; // rdx
  const __m128i *v25; // rdi
  const __m128i *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rsi
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // rcx
  __int64 v32; // r10
  __m128i v33; // xmm6
  __m128i v34; // xmm1
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // rcx
  const __m128i *v37; // rdx
  __m128 *v38; // r8
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  __m128i v42; // xmm6
  __m128i v43; // xmm1
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  const __m128i *v46; // rax
  __m128 *v47; // r8
  __int64 v48; // rsi
  __int64 v49; // r14
  __m128 v50; // xmm4
  __m128 v51; // xmm5
  const __m128i *v52; // r9
  unsigned __int64 v53; // r8
  const __m128i *v54; // rdx
  const __m128i *v55; // rdi
  const __m128i *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rsi
  unsigned __int64 v60; // r10
  unsigned __int64 v61; // rcx
  __int64 v62; // r10
  __m128i v63; // xmm6
  __m128i v64; // xmm3
  unsigned __int64 v65; // r10
  unsigned __int64 v66; // rcx
  const __m128i *v67; // rdx
  __m128i *v68; // r8
  unsigned __int64 v69; // rsi
  unsigned __int64 v70; // rcx
  __int64 v71; // rdx
  __m128i v72; // xmm6
  __m128i v73; // xmm3
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rdx
  const __m128i *v76; // rax
  __m128i *v77; // r8
  __int64 v78; // rsi
  __int64 v79; // rsi
  __int64 v80; // rsi
  const __m128i *v81; // [rsp+8h] [rbp-60h]
  unsigned __int64 v82; // [rsp+10h] [rbp-58h] BYREF
  __int64 v83; // [rsp+18h] [rbp-50h]
  __m128 *v84; // [rsp+20h] [rbp-48h]
  __int64 v85; // [rsp+28h] [rbp-40h]

  v83 = a2 - a1;
  v81 = (const __m128i *)((char *)a3 + (char *)a2 - (char *)a1);
  if ( (char *)a2 - (char *)a1 <= 96 )
  {
    sub_1E5DC00(a1, a2);
  }
  else
  {
    v12 = a1;
    do
    {
      sub_1E5DC00(a1, a1 + 7);
      a1 += 7;
    }
    while ( (char *)a2 - (char *)a1 > 96 );
    sub_1E5DC00(a1, a2);
    if ( v13 > 112 )
    {
      v84 = a2;
      v16 = 7;
      v17 = a3;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
      v85 = v13 >> 4;
      v19 = _mm_load_si128((const __m128i *)&xmmword_23AABC0);
      while ( 1 )
      {
        v20 = 2 * v16;
        v21 = 2 * v16;
        if ( v83 >= 2 * v16 )
        {
          v22 = (const __m128i *)&v12[v16];
          v23 = (unsigned __int64)v17;
          v24 = (const __m128i *)v12;
          a6 = _mm_load_si128((const __m128i *)&xmmword_23AABC0);
          while ( 1 )
          {
            v25 = &v24[v21];
            v26 = v22;
            if ( &v24[v21] != v22 )
              break;
            v28 = v22 - v24;
            if ( (char *)v22 - (char *)v24 > 0 )
            {
              v26 = v22;
              goto LABEL_13;
            }
LABEL_28:
            v22 = (const __m128i *)((char *)v22 + v21 * 16);
            v24 = v25;
            v48 = ((char *)v84 - (char *)v25) >> 4;
            if ( v20 > v48 )
              goto LABEL_29;
          }
          do
          {
            while ( v26->m128i_i64[0] < (unsigned __int64)v24->m128i_i64[0] )
            {
              v27 = v26->m128i_i64[1];
              ++v26;
              v23 += 16LL;
              v82 = v27;
              a4 = (__m128i)_mm_loadh_ps((const double *)&v82);
              *(__m128i *)(v23 - 16) = a4;
              if ( v25 == v26 || v24 == v22 )
                goto LABEL_12;
            }
            v80 = v24->m128i_i64[1];
            ++v24;
            v23 += 16LL;
            v82 = v80;
            a4 = (__m128i)_mm_loadh_ps((const double *)&v82);
            *(__m128i *)(v23 - 16) = a4;
          }
          while ( v24 != v22 && v25 != v26 );
LABEL_12:
          v28 = v22 - v24;
          if ( (char *)v22 - (char *)v24 > 0 )
          {
LABEL_13:
            if ( (v23 >= (unsigned __int64)&v24[2] || (unsigned __int64)v24 >= v23 + 32) && v28 > 3 )
            {
              v29 = v28;
              v82 = v23 + 16;
              v30 = v28;
              v31 = 0;
              v32 = 32 * (v30 >> 1);
              a4 = (__m128i)_mm_loadh_ps((const double *)&v82);
              do
              {
                v33 = _mm_loadu_si128(&v24[v31 / 0x10]);
                *(__m128i *)(v23 + v31 + 16) = _mm_loadu_si128(&v24[v31 / 0x10 + 1]);
                v34 = a4;
                a4 = _mm_add_epi64(a4, si128);
                *(__m128i *)(v23 + v31) = v33;
                v31 += 32LL;
                a5 = (__m128)_mm_add_epi64(v34, a6);
              }
              while ( v32 != v31 );
              a11 = _mm_movehl_ps(a11, a5);
              v35 = a11.m128_u64[0];
              v36 = v29 & 0xFFFFFFFFFFFFFFFELL;
              v37 = &v24[v36];
              v38 = (__m128 *)(v36 * 16 + v23);
              if ( v29 != (v29 & 0xFFFFFFFFFFFFFFFELL) )
              {
                v14 = (__m128)_mm_loadu_si128(v37);
                v35 = (unsigned __int64)&v38[1];
                *v38 = v14;
              }
              v23 = v35;
            }
            else
            {
              do
              {
                v15 = (__m128)_mm_loadu_si128(v24);
                v23 += 16LL;
                ++v24;
                *(__m128 *)(v23 - 16) = v15;
                --v28;
              }
              while ( v28 );
            }
          }
          v39 = v25 - v26;
          v40 = v39;
          if ( (char *)v25 - (char *)v26 > 0 )
          {
            if ( ((unsigned __int64)v26 >= v23 + 32 || v23 >= (unsigned __int64)&v26[2])
              && (char *)v25 - (char *)v26 > 48 )
            {
              v82 = v23 + 16;
              v41 = 0;
              a4 = (__m128i)_mm_loadh_ps((const double *)&v82);
              do
              {
                v42 = _mm_loadu_si128(&v26[v41]);
                *(__m128i *)(v23 + v41 * 16 + 16) = _mm_loadu_si128(&v26[v41 + 1]);
                v43 = a4;
                a4 = _mm_add_epi64(a4, si128);
                *(__m128i *)(v23 + v41 * 16) = v42;
                v41 += 2;
                a5 = (__m128)_mm_add_epi64(v43, v19);
              }
              while ( v41 != 2 * (v39 >> 1) );
              a11 = _mm_movehl_ps(a11, a5);
              v44 = a11.m128_u64[0];
              v45 = v39 & 0xFFFFFFFFFFFFFFFELL;
              v46 = &v26[v45];
              v47 = (__m128 *)(v45 * 16 + v23);
              if ( v39 != (v39 & 0xFFFFFFFFFFFFFFFELL) )
              {
                v14 = (__m128)_mm_loadu_si128(v46);
                v44 = (unsigned __int64)&v47[1];
                *v47 = v14;
              }
              v23 = v44;
            }
            else
            {
              do
              {
                v15 = (__m128)_mm_loadu_si128(v26);
                v23 += 16LL;
                ++v26;
                *(__m128 *)(v23 - 16) = v15;
                --v40;
              }
              while ( v40 );
            }
          }
          goto LABEL_28;
        }
        v23 = (unsigned __int64)v17;
        v48 = v83;
        v25 = (const __m128i *)v12;
LABEL_29:
        if ( v16 <= v48 )
          v48 = v16;
        v16 *= 4;
        v49 = v16;
        sub_1E5DCD0(
          v25,
          &v25[v48],
          &v25[v48],
          (const __m128i *)v84,
          v23,
          *(double *)a4.m128i_i64,
          *(double *)a5.m128_u64,
          *(double *)a6.m128i_i64,
          *(double *)a7.m128_u64,
          v14,
          v15);
        if ( v16 <= v85 )
          break;
        v53 = (unsigned __int64)v12;
        v78 = v85;
        v55 = v17;
LABEL_54:
        if ( v20 <= v78 )
          v78 = v20;
        sub_1E5DCD0(
          v55,
          &v55[v78],
          &v55[v78],
          v81,
          v53,
          *(double *)a4.m128i_i64,
          *(double *)a5.m128_u64,
          *(double *)a6.m128i_i64,
          *(double *)a7.m128_u64,
          v50,
          v51);
        if ( v83 <= v16 )
          return;
      }
      a6 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
      v52 = &v17[v21];
      v53 = (unsigned __int64)v12;
      v54 = v17;
      a5 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AABC0);
      v51 = (__m128)a6;
      v50 = a5;
      while ( 1 )
      {
        v55 = &v54[v49];
        v56 = v52;
        if ( &v54[v49] != v52 )
          break;
        v58 = v52 - v54;
        if ( (char *)v52 - (char *)v54 > 0 )
        {
          v56 = v52;
          goto LABEL_38;
        }
LABEL_53:
        v52 = (const __m128i *)((char *)v52 + v49 * 16);
        v54 = v55;
        v78 = v81 - v55;
        if ( v16 > v78 )
          goto LABEL_54;
      }
      do
      {
        while ( v56->m128i_i64[0] < (unsigned __int64)v54->m128i_i64[0] )
        {
          v57 = v56->m128i_i64[1];
          ++v56;
          v53 += 16LL;
          v82 = v57;
          a4 = (__m128i)_mm_loadh_ps((const double *)&v82);
          *(__m128i *)(v53 - 16) = a4;
          if ( v55 == v56 || v54 == v52 )
            goto LABEL_37;
        }
        v79 = v54->m128i_i64[1];
        ++v54;
        v53 += 16LL;
        v82 = v79;
        a4 = (__m128i)_mm_loadh_ps((const double *)&v82);
        *(__m128i *)(v53 - 16) = a4;
      }
      while ( v54 != v52 && v55 != v56 );
LABEL_37:
      v58 = v52 - v54;
      if ( (char *)v52 - (char *)v54 > 0 )
      {
LABEL_38:
        if ( (v53 >= (unsigned __int64)&v54[2] || (unsigned __int64)v54 >= v53 + 32) && v58 > 3 )
        {
          v59 = v58;
          v82 = v53 + 16;
          v60 = v58;
          v61 = 0;
          v62 = 32 * (v60 >> 1);
          a4 = (__m128i)_mm_loadh_ps((const double *)&v82);
          do
          {
            v63 = _mm_loadu_si128(&v54[v61 / 0x10]);
            *(__m128i *)(v53 + v61 + 16) = _mm_loadu_si128(&v54[v61 / 0x10 + 1]);
            v64 = a4;
            a4 = _mm_add_epi64(a4, a6);
            *(__m128i *)(v53 + v61) = v63;
            v61 += 32LL;
            a7 = (__m128)_mm_add_epi64(v64, (__m128i)a5);
          }
          while ( v61 != v62 );
          a11 = _mm_movehl_ps(a11, a7);
          v65 = a11.m128_u64[0];
          v66 = v59 & 0xFFFFFFFFFFFFFFFELL;
          v67 = &v54[v66];
          v68 = (__m128i *)(v66 * 16 + v53);
          if ( v59 != (v59 & 0xFFFFFFFFFFFFFFFELL) )
          {
            v65 = (unsigned __int64)&v68[1];
            *v68 = _mm_loadu_si128(v67);
          }
          v53 = v65;
        }
        else
        {
          do
          {
            a11 = (__m128)_mm_loadu_si128(v54);
            v53 += 16LL;
            ++v54;
            *(__m128 *)(v53 - 16) = a11;
            --v58;
          }
          while ( v58 );
        }
      }
      v69 = v55 - v56;
      v70 = v69;
      if ( (char *)v55 - (char *)v56 > 0 )
      {
        if ( ((unsigned __int64)v56 >= v53 + 32 || v53 >= (unsigned __int64)&v56[2]) && (char *)v55 - (char *)v56 > 48 )
        {
          v82 = v53 + 16;
          v71 = 0;
          a4 = (__m128i)_mm_loadh_ps((const double *)&v82);
          do
          {
            v72 = _mm_loadu_si128(&v56[v71]);
            *(__m128i *)(v53 + v71 * 16 + 16) = _mm_loadu_si128(&v56[v71 + 1]);
            v73 = a4;
            a4 = _mm_add_epi64(a4, a6);
            *(__m128i *)(v53 + v71 * 16) = v72;
            v71 += 2;
            a7 = (__m128)_mm_add_epi64(v73, (__m128i)a5);
          }
          while ( 2 * (v69 >> 1) != v71 );
          a11 = _mm_movehl_ps(a11, a7);
          v74 = a11.m128_u64[0];
          v75 = v69 & 0xFFFFFFFFFFFFFFFELL;
          v76 = &v56[v75];
          v77 = (__m128i *)(v75 * 16 + v53);
          if ( (v69 & 0xFFFFFFFFFFFFFFFELL) != v69 )
          {
            v74 = (unsigned __int64)&v77[1];
            *v77 = _mm_loadu_si128(v76);
          }
          v53 = v74;
        }
        else
        {
          do
          {
            a11 = (__m128)_mm_loadu_si128(v56);
            v53 += 16LL;
            ++v56;
            *(__m128 *)(v53 - 16) = a11;
            --v70;
          }
          while ( v70 );
        }
      }
      goto LABEL_53;
    }
  }
}
