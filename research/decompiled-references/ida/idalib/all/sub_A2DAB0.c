void __fastcall sub_A2DAB0(const __m128i *a1, __int64 a2, __m128i *a3)
{
  __int64 m128i_i64; // r14
  __m128i v5; // [rsp+0h] [rbp-2C8h] BYREF
  _BYTE v6[320]; // [rsp+10h] [rbp-2B8h] BYREF
  __m128i v7; // [rsp+150h] [rbp-178h] BYREF
  _BYTE v8[360]; // [rsp+160h] [rbp-168h] BYREF

  m128i_i64 = (__int64)a3[1].m128i_i64;
  v5 = _mm_loadu_si128(a3);
  sub_A21040((__int64)v6, (__int64)a3[1].m128i_i64);
  *a3 = _mm_loadu_si128(a1);
  sub_A2D550(m128i_i64, (__int64)a1[1].m128i_i64);
  v7 = _mm_load_si128(&v5);
  sub_A21040((__int64)v8, (__int64)v6);
  sub_A2D5B0((__int64)a1, 0, 0x8F9C18F9C18F9C19LL * ((a2 - (__int64)a1) >> 3), &v7);
  sub_A1FD80((__int64)v8);
  sub_A1FD80((__int64)v6);
}
