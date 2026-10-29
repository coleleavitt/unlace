void __fastcall sub_A0AF70(const __m128i *a1, __int64 a2, __m128i *a3)
{
  __int64 m128i_i64; // r14
  __m128i v5; // [rsp+0h] [rbp-328h] BYREF
  _BYTE v6[368]; // [rsp+10h] [rbp-318h] BYREF
  __m128i v7; // [rsp+180h] [rbp-1A8h] BYREF
  _BYTE v8[408]; // [rsp+190h] [rbp-198h] BYREF

  m128i_i64 = (__int64)a3[1].m128i_i64;
  v5 = _mm_loadu_si128(a3);
  sub_9E6760((__int64)v6, (__int64)a3[1].m128i_i64);
  *a3 = _mm_loadu_si128(a1);
  sub_A0AAC0(m128i_i64, (__int64)a1[1].m128i_i64);
  v7 = _mm_load_si128(&v5);
  sub_9E6760((__int64)v8, (__int64)v6);
  sub_A0ABD0((__int64)a1, 0, 0xAAAAAAAAAAAAAAABLL * ((a2 - (__int64)a1) >> 7), &v7);
  sub_9E66A0((__int64)v8);
  sub_9E66A0((__int64)v6);
}

