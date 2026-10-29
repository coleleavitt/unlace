__int64 __fastcall sub_20B49F0(__int64 a1, int *a2, int *a3, __int64 a4)
{
  __int64 v6; // r15

  v6 = 16 * (((((__int64)a2 - a1) >> 4) + 1) / 2);
  if ( ((((__int64)a2 - a1) >> 4) + 1) / 2 <= a4 )
  {
    sub_20B1F80(a1, (int *)(a1 + v6), a3);
    sub_20B1F80(a1 + v6, a2, a3);
  }
  else
  {
    sub_20B49F0(a1, a1 + v6, a3);
    sub_20B49F0(a1 + v6, a2, a3);
  }
  return sub_20B45A0(a1, (char *)(a1 + v6), (__int64)a2, v6 >> 4, ((__int64)a2 - a1 - v6) >> 4, (char *)a3, a4);
}
