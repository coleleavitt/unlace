void __fastcall sub_BBE5F0(__m128 *a1, __int64 a2, __int64 a3, __int32 a4)
{
  __m128 v4; // xmm0
  double v5[3]; // [rsp+0h] [rbp-18h] BYREF

  *(_QWORD *)&v5[0] = a2;
  *(_QWORD *)&v5[1] = a3;
  a1[6].m128_i32[0] = a4;
  v4 = _mm_loadh_ps(v5);
  a1[3].m128_i8[12] |= 4u;
  a1[5] = v4;
}
