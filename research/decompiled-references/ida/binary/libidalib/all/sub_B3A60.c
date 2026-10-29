__m128 *__fastcall sub_B3A60(
        __m128 *a1,
        const __m128i *a2,
        __int64 a3,
        __int64 *a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128i a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v15; // rcx
  __int64 v16; // rdi
  __m128i v17; // xmm1
  __m128i v18; // xmm2
  __m128i v20; // xmm0
  __int64 *v21; // r15
  __m128i v22; // xmm3
  __int64 *v23; // r8
  __int64 *v24; // r11
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // r14
  unsigned __int64 v28; // r12
  __m128 v29; // xmm2
  __m128i v30; // xmm1
  __m128i v31; // xmm0
  unsigned __int64 v32; // xmm6_8
  void **v33; // rbp
  __m128 v34; // xmm2
  __m128 v35; // xmm3
  void *v36; // rdi
  __int64 v38; // rsi
  __m128i v39; // xmm2
  __m128i v40; // xmm5
  __m128i v41; // xmm4
  unsigned __int64 v42; // r14
  void **v43; // rbp
  void *v44; // rdi
  __m128i v45; // xmm6
  __m128i v46; // xmm3
  __m128 v47; // xmm0
  __m128 v48; // xmm1
  unsigned __int64 v49; // r12
  void **v50; // rbp
  void *v51; // rdi
  __m128 v52; // xmm0
  __m128i v53; // [rsp+0h] [rbp-128h] BYREF
  __m128i v54; // [rsp+10h] [rbp-118h] BYREF
  __m128i v55; // [rsp+20h] [rbp-108h] BYREF
  __m128i v56; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v57; // [rsp+48h] [rbp-E0h]
  __int64 v58; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v59; // [rsp+58h] [rbp-D0h]
  __m128i v60; // [rsp+60h] [rbp-C8h] BYREF
  __m128i v61; // [rsp+70h] [rbp-B8h] BYREF
  __m128i v62; // [rsp+80h] [rbp-A8h] BYREF
  __m128i v63; // [rsp+90h] [rbp-98h] BYREF
  __m128i v64; // [rsp+A0h] [rbp-88h] BYREF
  __m128i v65; // [rsp+B0h] [rbp-78h]
  __m128i v66; // [rsp+C0h] [rbp-68h] BYREF
  __m128i v67; // [rsp+D0h] [rbp-58h]
  unsigned __int64 v68; // [rsp+E8h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  v15 = *(_QWORD *)a3;
  v16 = *a4;
  if ( *(_QWORD *)a3 == *a4 )
  {
    v52 = _mm_loadh_ps((const double *)(a3 + 24));
    *a1 = _mm_loadh_ps((const double *)(a3 + 8));
    a1[1] = v52;
  }
  else
  {
    v17 = _mm_loadu_si128(a2 + 1);
    v18 = _mm_loadu_si128(a2 + 3);
    v20 = _mm_loadu_si128(a2 + 2);
    v21 = (__int64 *)a2[4].m128i_i64[1];
    v22 = v18;
    _mm_storeh_ps((double *)&v58, (__m128)v18);
    _mm_storeh_ps((double *)v53.m128i_i64, (__m128)v20);
    v59 = v20.m128i_i64[0];
    if ( v15 == v17.m128i_i64[0] && v16 == v18.m128i_i64[0] )
    {
      v46 = _mm_loadl_epi64(a2 + 4);
      v66 = v17;
      v55 = v17;
      v67 = v20;
      v54 = v20;
      v64 = v18;
      v65 = _mm_unpacklo_epi64(v46, (__m128i)(unsigned __int64)v21);
      sub_9F130(v66.m128i_i64, v64.m128i_i64);
      v47 = (__m128)_mm_load_si128(&v54);
      v48 = (__m128)_mm_load_si128(&v55);
      v49 = a2[4].m128i_i64[1] + 8;
      v50 = (void **)(v53.m128i_i64[0] + 8);
      if ( v53.m128i_i64[0] + 8 < v49 )
      {
        v53 = (__m128i)v47;
        v54 = (__m128i)v48;
        do
        {
          v51 = *v50++;
          operator delete(v51, 0x200u);
        }
        while ( (unsigned __int64)v50 < v49 );
        v47 = (__m128)_mm_load_si128(&v53);
        v48 = (__m128)_mm_load_si128(&v54);
      }
      a2[3] = (const __m128i)v48;
      a2[4] = (const __m128i)v47;
      *a1 = v48;
      a1[1] = v47;
    }
    else
    {
      v23 = (__int64 *)a4[3];
      v24 = *(__int64 **)(a3 + 24);
      v25 = *(_QWORD *)(a3 + 16);
      v56.m128i_i64[0] = a4[1];
      v57 = v25;
      v26 = *(_QWORD *)(a3 + 8);
      v54.m128i_i64[0] = ((v25 - v15) >> 5) + ((v16 - v56.m128i_i64[0]) >> 5) + 16 * ((v23 == nullptr) + v23 - v24 - 1);
      v55.m128i_i64[0] = v26;
      v27 = (v20.m128i_i64[0] - v17.m128i_i64[0]) >> 5;
      v28 = v27 + ((v15 - v26) >> 5) + 16 * ((v24 == nullptr) + (((__int64)v24 - v53.m128i_i64[0]) >> 3) - 1);
      if ( (v27
          + ((v18.m128i_i64[0] - v58) >> 5)
          + 16 * ((unsigned __int64)(v21 == nullptr) + (((__int64)v21 - v53.m128i_i64[0]) >> 3) - 1)
          - v54.m128i_i64[0]) >> 1 < v28 )
      {
        v38 = a2[4].m128i_i64[0];
        if ( v16 == v18.m128i_i64[0] )
        {
          v39 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v38, (__m128i)(unsigned __int64)v21);
        }
        else
        {
          sub_B3910(&v66, v16, v56.m128i_i64[0], a4[2], v23, v18.m128i_i64[0], v58, v38, v21, (__m128)v20, v17);
          v22 = _mm_loadu_si128(a2 + 3);
          v39 = _mm_loadu_si128(a2 + 4);
        }
        v62 = v22;
        v63 = v39;
        sub_9BD90(&v62, -v54.m128i_i64[0]);
        v40 = _mm_load_si128(&v62);
        v41 = _mm_load_si128(&v63);
        v64 = v22;
        v54 = v40;
        v65 = v39;
        v66 = v40;
        v53 = v41;
        v67 = v41;
        sub_9F130(v66.m128i_i64, v64.m128i_i64);
        v42 = a2[4].m128i_i64[1] + 8;
        v43 = (void **)(v53.m128i_i64[1] + 8);
        if ( v53.m128i_i64[1] + 8 < v42 )
        {
          do
          {
            v44 = *v43++;
            operator delete(v44, 0x200u);
          }
          while ( (unsigned __int64)v43 < v42 );
        }
        v45 = _mm_load_si128(&v53);
        v35 = (__m128)_mm_loadu_si128(a2 + 1);
        v34 = (__m128)_mm_loadu_si128(a2 + 2);
        a2[3] = _mm_load_si128(&v54);
        a2[4] = v45;
      }
      else
      {
        if ( v15 != v17.m128i_i64[0] )
        {
          sub_B3650(
            &v66,
            v17.m128i_i64[0],
            v20,
            v17,
            (__m128)v18,
            _mm_movehl_ps(a12, (__m128)v17).m128_i64[0],
            v59,
            (__int64 *)v53.m128i_i64[0],
            v15,
            v55.m128i_i64[0],
            v57,
            v24,
            v18,
            a9);
          v17 = _mm_loadu_si128(a2 + 1);
          v20 = _mm_loadu_si128(a2 + 2);
        }
        v60 = v17;
        v56 = v17;
        v61 = v20;
        v55 = v20;
        sub_9BD90(&v60, v54.m128i_i64[0]);
        v29 = (__m128)_mm_load_si128(&v61);
        v30 = _mm_load_si128(&v56);
        v31 = _mm_load_si128(&v55);
        v32 = _mm_movehl_ps(a11, v29).m128_u64[0];
        v64 = _mm_load_si128(&v60);
        v54 = v64;
        v65 = (__m128i)v29;
        v53 = (__m128i)v29;
        v66 = v30;
        v67 = v31;
        sub_9F130(v66.m128i_i64, v64.m128i_i64);
        v33 = (void **)a2[2].m128i_i64[1];
        v34 = (__m128)_mm_load_si128(&v53);
        v35 = (__m128)_mm_load_si128(&v54);
        if ( (unsigned __int64)v33 < v32 )
        {
          v53 = (__m128i)v35;
          v54 = (__m128i)v34;
          do
          {
            v36 = *v33++;
            operator delete(v36, 0x200u);
          }
          while ( (unsigned __int64)v33 < v32 );
          v35 = (__m128)_mm_load_si128(&v53);
          v34 = (__m128)_mm_load_si128(&v54);
        }
        a2[1] = (const __m128i)v35;
        a2[2] = (const __m128i)v34;
      }
      *a1 = v35;
      a1[1] = v34;
      sub_9BD90(a1, v28);
    }
  }
  return a1;
}

