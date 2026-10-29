void __fastcall sub_A2D200(const __m128i *a1, __int64 a2, __m128i *a3)
{
  __m128i *v4; // r15
  __int64 m128i_i64; // rbx
  __m128i v6; // [rsp+10h] [rbp-2B8h] BYREF
  _BYTE v7[176]; // [rsp+20h] [rbp-2A8h] BYREF
  __m128i v8[8]; // [rsp+D0h] [rbp-1F8h] BYREF
  __m128i v9; // [rsp+150h] [rbp-178h] BYREF
  _BYTE v10[176]; // [rsp+160h] [rbp-168h] BYREF
  __m128i v11[11]; // [rsp+210h] [rbp-B8h] BYREF

  v4 = a3 + 12;
  m128i_i64 = (__int64)a3[1].m128i_i64;
  v6 = _mm_loadu_si128(a3);
  sub_A0A250((__int64)v7, (__int64)a3[1].m128i_i64);
  sub_A20FC0(v8, v4);
  *a3 = _mm_loadu_si128(a1);
  sub_A1D050(m128i_i64, (__int64)a1[1].m128i_i64);
  sub_A2CCC0(v4, a1 + 12);
  v9 = _mm_load_si128(&v6);
  sub_A0A250((__int64)v10, (__int64)v7);
  sub_A20FC0(v11, v8);
  sub_A2CDD0((__int64)a1, 0, 0xCCCCCCCCCCCCCCCDLL * ((a2 - (__int64)a1) >> 6), &v9);
  sub_A1FDC0((__int64)v10);
  sub_A1FDC0((__int64)v7);
}
