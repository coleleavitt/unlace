unsigned __int64 __fastcall sub_223580(
        const __m128i *a1,
        unsigned __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __m128i v13; // xmm1
  __int64 v14; // r8
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rbp
  __m128i v22; // xmm2
  double v23; // xmm3_8
  __m128i v24; // xmm2
  const double *v25; // r8
  __int64 v26; // rdi
  __m128i v27; // xmm0
  __int64 v28; // rdi
  __m128i v29; // xmm5
  __m128i v30; // xmm4
  __m128i v31; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v32; // [rsp+10h] [rbp-98h]
  __m128 v33[2]; // [rsp+20h] [rbp-88h] BYREF
  _OWORD v34[2]; // [rsp+40h] [rbp-68h] BYREF
  __m128 v35; // [rsp+60h] [rbp-48h] BYREF
  __m128i v36; // [rsp+70h] [rbp-38h]
  unsigned __int64 v37; // [rsp+88h] [rbp-20h]

  v13 = _mm_loadu_si128(a1 + 6);
  v14 = a1[7].m128i_i64[1];
  v37 = __readfsqword(0x28u);
  v16 = a1[8].m128i_u64[0];
  v17 = ((a1[5].m128i_i64[0] - a1[4].m128i_i64[0]) >> 5)
      + (_mm_sub_epi64(v13, _mm_srli_si128(v13, 8)).m128i_i64[0] >> 5)
      + 16 * ((v14 == 0) + ((v14 - a1[5].m128i_i64[1]) >> 3) - 1);
  if ( v16 >= a2 + v17 )
    return v37 - __readfsqword(0x28u);
  v19 = a2 % v16;
  v20 = v16 - a2 % v16;
  if ( v20 < v17 )
  {
    v22 = _mm_loadl_epi64(a1 + 7);
    v23 = *(double *)a1[6].m128i_i64;
    v31 = v13;
    v24 = _mm_unpacklo_epi64(v22, (__m128i)(unsigned __int64)v14);
    v32 = v24;
    sub_20AD50(&v31, v16 - v19 - v17);
    v26 = *(_QWORD *)v25 + 512LL;
    v34[0] = _mm_loadh_ps(v25);
    v27 = (__m128i)(unsigned __int64)v26;
    v28 = *(_QWORD *)v32.m128i_i64[1];
    v34[1] = _mm_unpacklo_epi64(v27, v29);
    v35 = _mm_loadh_ps((const double *)v32.m128i_i64[1]);
    v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v28 + 512), (__m128i)v32.m128i_u64[1]);
    sub_2230A0(
      v33,
      a1 + 3,
      (__int64)&v35,
      (__int64)v34,
      *(double *)v36.m128i_i64,
      *(double *)v13.m128i_i64,
      *(double *)v24.m128i_i64,
      v23,
      v30,
      *(double *)v29.m128i_i64,
      a9,
      (__m128)v32.m128i_u64[1]);
    if ( a1[8].m128i_i32[2] >= v20 )
      a1[8].m128i_i32[2] = v20 - 1;
    return v37 - __readfsqword(0x28u);
  }
  if ( v17 >= v20 )
    return v37 - __readfsqword(0x28u);
  return sub_21E120((__m128 *)&a1[3], v20 - v17, v19, v17, v14, a13);
}
