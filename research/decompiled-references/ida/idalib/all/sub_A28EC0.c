void __fastcall sub_A28EC0(const __m128i *a1, __int64 a2, __m128i *a3)
{
  __int64 m128i_i64; // r14
  __int64 v5; // rax
  __m128i v6; // xmm2
  __m128i v7; // [rsp+0h] [rbp-188h] BYREF
  _BYTE v8[152]; // [rsp+10h] [rbp-178h] BYREF
  __int64 v9; // [rsp+A8h] [rbp-E0h]
  __m128i v10; // [rsp+B0h] [rbp-D8h] BYREF
  _BYTE v11[152]; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+158h] [rbp-30h]

  m128i_i64 = (__int64)a3[1].m128i_i64;
  v7 = _mm_loadu_si128(a3);
  sub_A0A000((__int64)v8, (__int64)a3[1].m128i_i64);
  v5 = a3[10].m128i_i64[1];
  *a3 = _mm_loadu_si128(a1);
  v9 = v5;
  sub_A28A10(m128i_i64, (__int64)a1[1].m128i_i64);
  v6 = _mm_load_si128(&v7);
  a3[10].m128i_i64[1] = a1[10].m128i_i64[1];
  v10 = v6;
  sub_A0A000((__int64)v11, (__int64)v8);
  v12 = v9;
  sub_A28A50((__int64)a1, 0, 0x2E8BA2E8BA2E8BA3LL * ((a2 - (__int64)a1) >> 4), &v10);
  sub_A09C70((__int64)v11);
  sub_A09C70((__int64)v8);
}
