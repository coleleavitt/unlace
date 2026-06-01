void __fastcall sub_226EEF0(__int64 ***a1, const __m128i *a2, __int64 a3, int a4)
{
  __m128i v4; // [rsp+0h] [rbp-18h] BYREF

  if ( a2 )
    v4 = _mm_loadu_si128(a2 + 1);
  else
    v4 = 0;
  sub_223BFB0(**a1, (char *)v4.m128i_i64[0], a4, a3, (__int64)&v4, 1, nullptr, 0, *((_BYTE *)*a1 + 76));
}
