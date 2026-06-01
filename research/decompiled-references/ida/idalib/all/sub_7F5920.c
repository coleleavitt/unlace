void __fastcall sub_7F5920(char *src, char *a2)
{
  __int64 v2; // r12

  if ( a2 - src <= 560 )
  {
    sub_7F5780(src, a2);
  }
  else
  {
    v2 = 40 * ((__int64)(0xCCCCCCCCCCCCCCCDLL * ((a2 - src) >> 3)) >> 1);
    sub_7F5920(src);
    sub_7F5920(&src[v2]);
    sub_7F4DD0(
      (unsigned int *)src,
      (__m128i *)&src[v2],
      (__int64)a2,
      0xCCCCCCCCCCCCCCCDLL * (v2 >> 3),
      0xCCCCCCCCCCCCCCCDLL * ((a2 - &src[v2]) >> 3));
  }
}
