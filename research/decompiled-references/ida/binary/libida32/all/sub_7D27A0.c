void __fastcall sub_7D27A0(char *src, char *a2)
{
  __int64 v2; // r12

  if ( a2 - src <= 560 )
  {
    sub_7D2600(src, a2);
  }
  else
  {
    v2 = 40 * ((__int64)(0xCCCCCCCCCCCCCCCDLL * ((a2 - src) >> 3)) >> 1);
    sub_7D27A0(src);
    sub_7D27A0(&src[v2]);
    sub_7D1C50(
      (unsigned int *)src,
      (__m128i *)&src[v2],
      (__int64)a2,
      0xCCCCCCCCCCCCCCCDLL * (v2 >> 3),
      0xCCCCCCCCCCCCCCCDLL * ((a2 - &src[v2]) >> 3));
  }
}

