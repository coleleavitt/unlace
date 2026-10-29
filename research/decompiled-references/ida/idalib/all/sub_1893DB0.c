__m128i **__fastcall sub_1893DB0(__m128i **a1, const __m128i *a2)
{
  __m128i *v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int32 v7; // edx

  v3 = (__m128i *)operator new(0x30u);
  v4 = _mm_loadu_si128(a2 + 1);
  v5 = a2[2].m128i_i64[0];
  v3->m128i_i64[0] = (__int64)&off_2BC6D88;
  v6 = a2->m128i_i64[1];
  v7 = a2[2].m128i_i32[2];
  v3[1] = v4;
  v3->m128i_i64[1] = v6;
  v3[2].m128i_i64[0] = v5;
  v3[2].m128i_i32[2] = v7;
  *a1 = v3;
  return a1;
}
