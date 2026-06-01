__int64 __fastcall sub_13B38A0(__m128 *a1, __int64 a2, __int64 a3, char a4)
{
  __m128 v4; // xmm0
  __int8 v6; // cl
  __int64 result; // rax
  double v8[3]; // [rsp+0h] [rbp-18h] BYREF

  *(_QWORD *)&v8[0] = a3;
  *(_QWORD *)&v8[1] = a2;
  a1->m128_u64[1] = 0;
  a1->m128_u64[0] = (unsigned __int64)&off_2C443D8;
  v4 = _mm_loadh_ps(v8);
  a1[2].m128_u64[1] = (unsigned __int64)&a1[3].m128_u64[1];
  v6 = a1[4].m128_i8[8];
  result = a4 & 1;
  a1[1] = v4;
  a1[2].m128_u64[0] = 0;
  a1[3].m128_u64[0] = 0;
  a1[3].m128_i8[8] = 0;
  a1[4].m128_i8[8] = result | v6 & 0xFE;
  return result;
}
