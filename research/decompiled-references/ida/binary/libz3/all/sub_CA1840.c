void __fastcall sub_CA1840(int *a1, int *a2)
{
  __int64 v2; // r12

  if ( (char *)a2 - (char *)a1 <= 560 )
  {
    sub_C9FA70(a1, a2);
  }
  else
  {
    v2 = 10 * ((__int64)(0xCCCCCCCCCCCCCCCDLL * (((char *)a2 - (char *)a1) >> 3)) >> 1);
    sub_CA1840(a1, &a1[v2]);
    sub_CA1840(&a1[v2], a2);
    sub_CA0BA0(
      (__int64)a1,
      (__int64)&a1[v2],
      (__int64)a2,
      0xCCCCCCCCCCCCCCCDLL * ((v2 * 4) >> 3),
      0xCCCCCCCCCCCCCCCDLL * (((char *)a2 - (char *)&a1[v2]) >> 3));
  }
}

