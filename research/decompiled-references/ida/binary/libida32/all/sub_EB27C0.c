__int64 __fastcall sub_EB27C0(__int64 a1, __int64 a2, int a3)
{
  const char *v5; // [rsp+8h] [rbp-40h] BYREF
  __m128 v6; // [rsp+10h] [rbp-38h] BYREF
  __int64 v7; // [rsp+20h] [rbp-28h]

  v7 = a2;
  v5 = "%10ld | ";
  v6 = _mm_loadh_ps((const double *)&v5);
  sub_2258820(a1, &v6);
  return sub_2259350(a1, (unsigned int)(2 * a3));
}

