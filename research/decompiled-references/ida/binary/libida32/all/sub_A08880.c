void __fastcall sub_A08880(const __m128i *a1, __int64 a2, __m128i *a3)
{
  __int64 m128i_i64; // r14
  __m128i v5; // [rsp+0h] [rbp-1A8h] BYREF
  _BYTE v6[176]; // [rsp+10h] [rbp-198h] BYREF
  __m128i v7; // [rsp+C0h] [rbp-E8h] BYREF
  _BYTE v8[216]; // [rsp+D0h] [rbp-D8h] BYREF

  m128i_i64 = (__int64)a3[1].m128i_i64;
  v5 = _mm_loadu_si128(a3);
  sub_9E6510((__int64)v6, (__int64)a3[1].m128i_i64);
  *a3 = _mm_loadu_si128(a1);
  sub_9F9310(m128i_i64, (__int64)a1[1].m128i_i64);
  v7 = _mm_load_si128(&v5);
  sub_9E6510((__int64)v8, (__int64)v6);
  sub_A084E0((__int64)a1, 0, 0xAAAAAAAAAAAAAAABLL * ((a2 - (__int64)a1) >> 6), &v7);
  sub_9E5FF0((__int64)v8);
  sub_9E5FF0((__int64)v6);
}

