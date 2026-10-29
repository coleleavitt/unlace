__int64 __fastcall sub_10272E0(
        __m128 *a1,
        __int64 a2,
        __int64 a3,
        __int32 a4,
        __int32 a5,
        __int32 a6,
        unsigned __int64 a7)
{
  __m128 v8; // xmm0
  double v9[3]; // [rsp+0h] [rbp-18h] BYREF

  *(_QWORD *)&v9[0] = a3;
  *(_QWORD *)&v9[1] = a2;
  a1[1].m128_i32[0] = a4;
  v8 = _mm_loadh_ps(v9);
  a1[1].m128_i32[1] = a5;
  *a1 = v8;
  a1[1].m128_i32[2] = a6;
  a1[2].m128_u64[0] = a7;
  a1[2].m128_u64[1] = 0;
  a1[3].m128_u64[0] = 0;
  a1[3].m128_i32[2] = 0;
  return a7;
}
