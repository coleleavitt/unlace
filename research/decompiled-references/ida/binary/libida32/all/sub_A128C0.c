void __fastcall sub_A128C0(__m128i *a1, __m128i *a2)
{
  _BYTE v2[176]; // [rsp+0h] [rbp-158h] BYREF
  __m128i v3[10]; // [rsp+B0h] [rbp-A8h] BYREF

  sub_9E6510((__int64)v2, (__int64)a1);
  sub_9FD280(v3, a1 + 11);
  sub_9F9310((__int64)a1, (__int64)a2);
  sub_A08F80(a1 + 11, a2 + 11);
  sub_9F9310((__int64)a2, (__int64)v2);
  sub_A08F80(a2 + 11, v3);
  sub_9FC080((__int64)v2);
}

