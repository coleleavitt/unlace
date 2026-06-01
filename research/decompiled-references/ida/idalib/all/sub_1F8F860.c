__int64 __fastcall sub_1F8F860(char *a1, int *a2, int *a3, __int64 a4)
{
  __int64 v6; // r15

  v6 = 16 * (((((char *)a2 - a1) >> 4) + 1) / 2);
  if ( ((((char *)a2 - a1) >> 4) + 1) / 2 <= a4 )
  {
    sub_1F6B9D0((__int64)a1, (int *)&a1[v6], a3);
    sub_1F6B9D0((__int64)&a1[v6], a2, a3);
  }
  else
  {
    sub_1F8F860(a1, &a1[v6], a3);
    sub_1F8F860(&a1[v6], a2, a3);
  }
  return sub_1F8F400(a1, &a1[v6], (__int64)a2, v6 >> 4, ((char *)a2 - &a1[v6]) >> 4, (__int64)a3, a4);
}
