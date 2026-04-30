unsigned __int64 __fastcall sub_2C76F0(
        int *a1,
        QT::QPainter *a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 v14; // rbx
  unsigned __int64 result; // rax
  __int64 i; // r14

  sub_2C75E0(a1, a2, a3, 0, a4, a5, a6, a7, a8, a9, a10, a11);
  sub_2C75E0(a1, a2, a3, 1, a4, a5, a6, a7, v12, v13, a10, a11);
  v14 = *(_QWORD *)(a3 + 336);
  result = 3LL * *(_QWORD *)(a3 + 344);
  for ( i = v14 + 24LL * *(_QWORD *)(a3 + 344); i != v14; v14 += 24 )
    result = sub_2B87C0((__int64)a1, a2, a3, v14);
  return result;
}
