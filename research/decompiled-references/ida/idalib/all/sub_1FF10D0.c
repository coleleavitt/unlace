__m128 *__fastcall sub_1FF10D0(__m128 *a1)
{
  __int64 (__fastcall *v2[2])(); // [rsp+0h] [rbp-10h] BYREF

  v2[0] = sub_1FF1850;
  a1[1] = _mm_loadh_ps((const double *)v2);
  return a1;
}
