__int64 __fastcall sub_823800(__m128i *a1, __int64 a2)
{
  __m128i v2; // xmm0
  __int64 result; // rax
  __m128i v4; // [rsp+0h] [rbp-88h] BYREF
  __m128i v5[7]; // [rsp+10h] [rbp-78h] BYREF

  sub_69F1F0((__int64)&v4, a2, 0, 0);
  v2 = _mm_load_si128(&v4);
  a1[8].m128i_i8[0] &= ~2u;
  a1[1].m128i_i64[0] = 0;
  *a1 = v2;
  v5[0] = v2;
  result = sub_69F240(v5[0].m128i_i64);
  a1[1].m128i_i32[2] = 0;
  a1[8].m128i_i16[0] &= 0xFEu;
  a1[2].m128i_i64[0] = 0;
  a1[2].m128i_i64[1] = result;
  a1[3].m128i_i32[2] = 0;
  return result;
}

