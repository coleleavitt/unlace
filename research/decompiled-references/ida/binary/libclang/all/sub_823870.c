__int64 __fastcall sub_823870(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax
  __m128i v7[8]; // [rsp+0h] [rbp-88h] BYREF

  sub_69F1C0((__int64)v7, 0, 0, 0);
  *a1 = _mm_load_si128(v7);
  v4 = sub_6D4B20(a2, a3);
  a1[8].m128i_i8[0] &= ~2u;
  a1[1].m128i_i64[0] = v4;
  v5 = sub_B167E0(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), a3);
  a1[1].m128i_i32[2] = 0;
  a1[2].m128i_i64[1] = v5;
  LODWORD(v5) = a1[8].m128i_u16[0];
  a1[2].m128i_i64[0] = 0;
  LOWORD(v5) = v5 & 0xFE;
  a1[3].m128i_i32[2] = 0;
  result = (unsigned int)v5 | 1;
  a1[8].m128i_i16[0] = result;
  return result;
}

