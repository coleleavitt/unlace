unsigned __int64 __fastcall sub_2B6340(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        int *a4,
        __int64 *a5,
        __int64 *a6,
        int *a7)
{
  __int64 v10; // rsi
  __int64 v11; // rax
  double v12; // xmm5_8
  __int64 v13; // r15
  double v14; // xmm3_8
  int v15; // r12d
  __int32 v16; // ecx
  __int32 v17; // r13d
  __int64 v18; // r8
  __int64 v19; // rbx
  int v20; // r14d
  __m128i v21; // xmm4
  __int64 v22; // xmm0_8
  __int64 v23; // xmm2_8
  double v24; // xmm0_8
  bool v25; // cc
  double v26; // xmm0_8
  __m128i v27; // xmm1
  __m128i v28; // xmm0
  int v29; // edx
  int v30; // eax
  int v31; // esi
  int v32; // eax
  int v33; // edx
  int v34; // esi
  __m128d v35; // xmm4
  __int32 v36; // eax
  __int32 v37; // esi
  __m128i v38; // xmm1
  __m128i v39; // xmm0
  __int32 v40; // ecx
  __m128d v42; // xmm2
  __m128i v43; // xmm2
  __int64 v44; // xmm1_8
  __int64 v45; // xmm0_8
  __int32 v46; // [rsp+0h] [rbp-A8h]
  __int64 v47; // [rsp+10h] [rbp-98h]
  double v48; // [rsp+18h] [rbp-90h]
  __int32 v49; // [rsp+24h] [rbp-84h]
  __m128d v50; // [rsp+30h] [rbp-78h]
  __m128i v52; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v53; // [rsp+68h] [rbp-40h]

  v10 = *a6;
  v53 = __readfsqword(0x28u);
  v52 = 0u;
  v11 = sub_298C80(a2, v10, (unsigned __int64 *)&v52, &v52.m128i_u64[1]);
  v12 = *(double *)a3;
  v13 = *(_QWORD *)(v11 + 24);
  v14 = 10000.0 * *(double *)a3;
  v15 = *a4;
  v16 = a4[2];
  v46 = a4[1];
  v17 = a4[3];
  v50 = _mm_unpacklo_pd((__m128d)*a3, (__m128d)*a3);
  if ( v13 )
  {
    v18 = *(_QWORD *)(v11 + 16);
    v19 = 0;
    v20 = -1;
    do
    {
      v27 = _mm_loadl_epi64((const __m128i *)(v18 + 8 * v19));
      v28 = _mm_loadl_epi64(&v52);
      v29 = _mm_cvtsi128_si32(v27);
      v30 = _mm_cvtsi128_si32(v28);
      v31 = v29;
      if ( v30 <= v29 )
        v31 = v30;
      if ( v16 >= v31 )
      {
        if ( v30 < v29 )
          v30 = v29;
        if ( v15 <= v30 )
        {
          v32 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v28, 229));
          v33 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v27, 229));
          v34 = v33;
          if ( v32 >= v33 )
            v34 = v32;
          if ( v46 <= v34 && (v32 <= v17 || v33 <= v17) )
          {
            v35 = *(__m128d *)(a3 + 1);
            if ( v12 == 1.0 )
            {
              v21 = _mm_cvttpd_epi32(v35);
              v22 = _mm_sub_epi32(v28, v21).m128i_u64[0];
              v23 = _mm_sub_epi32(v27, v21).m128i_u64[0];
            }
            else
            {
              v22 = _mm_cvttpd_epi32(_mm_mul_pd(_mm_sub_pd(_mm_cvtepi32_pd(v28), v35), v50)).m128i_u64[0];
              v23 = _mm_cvttpd_epi32(_mm_mul_pd(_mm_sub_pd(_mm_cvtepi32_pd(v27), v35), v50)).m128i_u64[0];
            }
            v49 = v16;
            v47 = v18;
            v48 = v12;
            v24 = sub_2B6210(v22, v23, *a5);
            v16 = v49;
            v12 = v48;
            v25 = v14 <= v24;
            v26 = fmin(v24, v14);
            v18 = v47;
            if ( !v25 )
              v20 = v19;
            v14 = v26;
          }
        }
      }
      ++v19;
      v52.m128i_i64[0] = v27.m128i_i64[0];
    }
    while ( v19 != v13 );
  }
  else
  {
    v20 = -1;
  }
  v36 = v52.m128i_i32[2];
  v37 = v52.m128i_i32[0];
  if ( v52.m128i_i32[2] <= v52.m128i_i32[0] )
    v37 = v52.m128i_i32[2];
  if ( v16 >= v37 )
  {
    if ( v52.m128i_i32[2] < v52.m128i_i32[0] )
      v36 = v52.m128i_i32[0];
    if ( v15 <= v36 )
    {
      v38 = _mm_loadl_epi64(&v52);
      v39 = _mm_loadl_epi64((const __m128i *)&v52.m128i_u64[1]);
      v40 = v52.m128i_i32[3];
      if ( v52.m128i_i32[1] >= v52.m128i_i32[3] )
        v40 = v52.m128i_i32[1];
      if ( v46 <= v40 && (v52.m128i_i32[1] <= v17 || v52.m128i_i32[3] <= v17) )
      {
        v42 = *(__m128d *)(a3 + 1);
        if ( v12 == 1.0 )
        {
          v43 = _mm_cvttpd_epi32(v42);
          v44 = _mm_sub_epi32(v38, v43).m128i_u64[0];
          v45 = _mm_sub_epi32(v39, v43).m128i_u64[0];
        }
        else
        {
          v44 = _mm_cvttpd_epi32(_mm_mul_pd(_mm_sub_pd(_mm_cvtepi32_pd(v38), v42), v50)).m128i_u64[0];
          v45 = _mm_cvttpd_epi32(_mm_mul_pd(_mm_sub_pd(_mm_cvtepi32_pd(v39), v42), v50)).m128i_u64[0];
        }
        if ( v14 > sub_2B6210(v44, v45, *a5) )
          v20 = v13;
      }
    }
  }
  if ( a7 )
    *a7 = v20;
  return v53 - __readfsqword(0x28u);
}
