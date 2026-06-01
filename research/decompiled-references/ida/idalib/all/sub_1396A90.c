__int8 *__fastcall sub_1396A90(__m128 *a1, __int64 a2, __int64 a3)
{
  double v4[3]; // [rsp+0h] [rbp-18h] BYREF

  *(_QWORD *)&v4[0] = a3;
  *(_QWORD *)&v4[1] = a2;
  a1->m128_u64[1] = 0;
  a1->m128_u64[0] = (unsigned __int64)&off_2C44180;
  a1[1] = _mm_loadh_ps(v4);
  a1[2].m128_u64[0] = 0;
  a1[2].m128_u64[1] = (unsigned __int64)&a1[3].m128_u64[1];
  a1[3].m128_u64[0] = 0;
  a1[3].m128_i8[8] = 0;
  a1[4].m128_u64[1] = 0;
  return &a1[3].m128_i8[8];
}
