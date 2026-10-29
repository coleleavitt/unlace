void __fastcall sub_A36600(__m128i *a1, __m128i *a2)
{
  _BYTE v2[176]; // [rsp+0h] [rbp-158h] BYREF
  __m128i v3[10]; // [rsp+B0h] [rbp-A8h] BYREF

  sub_A0A250((__int64)v2, (__int64)a1);
  sub_A20FC0(v3, a1 + 11);
  sub_A1D050((__int64)a1, (__int64)a2);
  sub_A2CCC0(a1 + 11, a2 + 11);
  sub_A1D050((__int64)a2, (__int64)v2);
  sub_A2CCC0(a2 + 11, v3);
  sub_A1FDC0((__int64)v2);
}
