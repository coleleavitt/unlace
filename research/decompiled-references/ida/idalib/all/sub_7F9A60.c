void __fastcall sub_7F9A60(__m128i *dest, __m128i *a2, __m128i *a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r15
  __m128i *desta; // [rsp+8h] [rbp-40h]

  v5 = (__int64)(0xCCCCCCCCCCCCCCCDLL * (((char *)a2 - (char *)dest) >> 3) + 1) / 2;
  v6 = 40 * v5;
  if ( v5 <= a4 )
  {
    sub_7F7B50(dest, (__m128i *)((char *)dest + 40 * v5), a2, a3);
  }
  else
  {
    desta = (__m128i *)((char *)dest + 40 * v5);
    sub_7F9A60(dest);
    sub_7F9A60(desta);
    sub_7F9560(
      dest,
      desta,
      (__int64)a2,
      0xCCCCCCCCCCCCCCCDLL * (v6 >> 3),
      0xCCCCCCCCCCCCCCCDLL * (((char *)a2 - (char *)desta) >> 3),
      a3,
      a4);
  }
}
