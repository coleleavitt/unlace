void __fastcall sub_F712D0(__int64 a1, const __m128i *a2, unsigned __int64 a3, const __m128i *a4, __int64 a5)
{
  __m128i v5; // [rsp+0h] [rbp-18h] BYREF

  v5 = _mm_loadu_si128(a4);
  v5.m128i_i8[1] &= ~8u;
  sub_F6F5F0(a1, a2, a3, &v5, a5, 0, 0);
}
