unsigned __int64 __fastcall sub_4E9B80(
        char *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  __int64 v10; // rbx
  double v11; // xmm0_8
  __int64 v12; // r9

  if ( a2 - a1 <= 112 )
    return sub_4E6F70(a1, a2, a3, a4, a5, a6, a7, a8);
  v10 = 8 * ((a2 - a1) >> 4);
  sub_4E9B80(a1, &a1[v10], a3, a4);
  v11 = sub_4E9B80(&a1[v10], a2, a3, a4);
  return sub_4E9920(a1, &a1[v10], (__int64)a2, v10 >> 3, (a2 - &a1[v10]) >> 3, v11, a6, a7, a8, v12, a3, a4);
}
