_BYTE *__fastcall sub_F55640(__int64 a1, const __m128i *a2, unsigned __int64 a3, const __m128i *a4, __int64 a5)
{
  __m128i v6; // [rsp+0h] [rbp-18h] BYREF

  v6 = _mm_loadu_si128(a4);
  v6.m128i_i8[1] &= ~8u;
  return sub_F548D0(a1, a2, a3, &v6, a5);
}

