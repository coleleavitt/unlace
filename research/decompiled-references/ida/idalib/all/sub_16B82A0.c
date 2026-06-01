void __fastcall sub_16B82A0(__m128i *a1, __m128i *a2)
{
  __int64 v2; // rbx

  if ( (char *)a2 - (char *)a1 <= 1120 )
  {
    sub_16B62A0(a1, a2);
  }
  else
  {
    v2 = 5 * ((__int64)(0xCCCCCCCCCCCCCCCDLL * (a2 - a1)) >> 1);
    sub_16B82A0(a1, &a1[v2]);
    sub_16B82A0(&a1[v2], a2);
    sub_16B7FA0(
      a1,
      &a1[v2],
      (__int64)a2,
      0xCCCCCCCCCCCCCCCDLL * ((v2 * 16) >> 4),
      0xCCCCCCCCCCCCCCCDLL * (a2 - &a1[v2]));
  }
}
