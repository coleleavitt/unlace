unsigned __int64 __fastcall sub_B3F40(
        __int64 a1,
        unsigned __int64 a2,
        double a3,
        double a4,
        __m128 a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const double *v10; // rbp
  __m128 v11; // xmm0
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r12
  double v15; // xmm2_8
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rax
  __m128i v21; // xmm0
  __m128 v22; // xmm1
  __m128i v23; // xmm6
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  unsigned __int64 v26; // r12
  void **v27; // rbp
  void *v28; // rdi
  __m128i v29; // xmm6
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  __int64 v33; // rdi
  __m128i v34; // xmm0
  __int64 v35; // rdi
  __m128i v36; // xmm4
  __m128i v37; // [rsp+0h] [rbp-E8h] BYREF
  __m128 si128; // [rsp+10h] [rbp-D8h] BYREF
  __m128 v39; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v40; // [rsp+30h] [rbp-B8h]
  __m128 v41; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v42; // [rsp+50h] [rbp-98h] BYREF
  __m128 v43; // [rsp+60h] [rbp-88h] BYREF
  __m128i v44; // [rsp+70h] [rbp-78h]
  __m128 v45; // [rsp+80h] [rbp-68h] BYREF
  __m128i v46; // [rsp+90h] [rbp-58h]
  unsigned __int64 v47; // [rsp+A8h] [rbp-40h]

  v10 = *(const double **)(a1 + 120);
  v11 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 96));
  v47 = __readfsqword(0x28u);
  v13 = *(_QWORD *)(a1 + 88);
  v14 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)&v15 = _mm_movehl_ps(a5, v11).m128_u64[0];
  v16 = *(_QWORD *)(a1 + 128);
  v17 = ((__int64)(v14 - *(_QWORD *)(a1 + 64)) >> 5)
      + ((__int64)(v11.m128_u64[0] - *(_QWORD *)&v15) >> 5)
      + 16 * ((v10 == nullptr) + ((__int64)((__int64)v10 - v13) >> 3) - 1);
  if ( v16 >= a2 + v17 )
    return v47 - __readfsqword(0x28u);
  v19 = v16 - a2 % v16;
  if ( v19 < v17 )
  {
    v31 = _mm_loadl_epi64((const __m128i *)(a1 + 112));
    v39 = v11;
    v32 = _mm_unpacklo_epi64(v31, (__m128i)(unsigned __int64)v10);
    v40 = v32;
    sub_9BD90(&v39, v16 - a2 % v16 - v17);
    v33 = *(_QWORD *)v10 + 512LL;
    v43 = _mm_loadh_ps(v10);
    v34 = (__m128i)(unsigned __int64)v33;
    v35 = *(_QWORD *)v40.m128i_i64[1];
    v44 = _mm_unpacklo_epi64(v34, (__m128i)(unsigned __int64)v10);
    v45 = _mm_loadh_ps((const double *)v40.m128i_i64[1]);
    v46 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v35 + 512), (__m128i)v40.m128i_u64[1]);
    sub_B3A60(
      &v41,
      (const __m128i *)(a1 + 48),
      (__int64)&v45,
      (__int64 *)&v43,
      *(double *)v46.m128i_i64,
      *(double *)v32.m128i_i64,
      v15,
      *(double *)&v10,
      v36,
      *(double *)&v40.m128i_i64[1],
      a9,
      a10);
    if ( *(int *)(a1 + 136) >= v19 )
      *(_DWORD *)(a1 + 136) = v19 - 1;
    return v47 - __readfsqword(0x28u);
  }
  v37 = (__m128i)v11;
  si128.m128_u64[0] = a1 + 48;
  v20 = sub_AC580((_QWORD *)(a1 + 96), (_QWORD *)(a1 + 64));
  v21 = _mm_load_si128(&v37);
  if ( v20 >= v19 )
  {
    if ( v19 < v20 )
    {
      v22 = _mm_loadh_ps((const double *)(a1 + 72));
      v37 = v21;
      v41 = v22;
      v42 = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v13);
      sub_9BD90(&v41, v19);
      v23 = _mm_load_si128(&v42);
      v24 = _mm_load_si128(&v37);
      v25 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 112)), (__m128i)(unsigned __int64)v10);
      si128 = (__m128)_mm_load_si128((const __m128i *)&v41);
      v43 = (__m128)v24;
      v44 = v25;
      v45 = si128;
      v37 = v23;
      v46 = v23;
      sub_9F130((__int64 *)&v45, (__int64 *)&v43);
      v26 = *(_QWORD *)(a1 + 120) + 8LL;
      v27 = (void **)(v37.m128i_i64[1] + 8);
      if ( v37.m128i_i64[1] + 8 < v26 )
      {
        do
        {
          v28 = *v27++;
          operator delete(v28, 0x200u);
        }
        while ( (unsigned __int64)v27 < v26 );
      }
      v29 = _mm_load_si128(&v37);
      *(__m128i *)(a1 + 96) = _mm_load_si128((const __m128i *)&si128);
      *(__m128i *)(a1 + 112) = v29;
    }
    return v47 - __readfsqword(0x28u);
  }
  return sub_AEB60((__m128 *)si128.m128_u64[0], v19 - v20);
}

