void __fastcall sub_A2D300(const __m128i *a1)
{
  __m128i *v1; // rbx
  const __m128i *v2; // rsi
  __m128i *v3; // rdi
  __m128i v4; // [rsp+0h] [rbp-168h] BYREF
  _BYTE v5[176]; // [rsp+10h] [rbp-158h] BYREF
  __m128i v6[10]; // [rsp+C0h] [rbp-A8h] BYREF

  v1 = (__m128i *)&a1[1];
  v4 = _mm_loadu_si128(a1);
  sub_A0A250((__int64)v5, (__int64)a1[1].m128i_i64);
  sub_A20FC0(v6, a1 + 12);
  while ( (unsigned __int8)sub_A09E20((unsigned int *)&v4, (unsigned int *)&v1[-21]) )
  {
    v1[-1] = _mm_loadu_si128(v1 - 21);
    sub_A1D050((__int64)v1, (__int64)v1[-20].m128i_i64);
    v2 = v1 - 9;
    v3 = v1 + 11;
    v1 -= 20;
    sub_A2CCC0(v3, v2);
  }
  v1[-1] = _mm_load_si128(&v4);
  sub_A1D050((__int64)v1, (__int64)v5);
  sub_A2CCC0(v1 + 11, v6);
  sub_A1FDC0((__int64)v5);
}
