unsigned __int64 __fastcall sub_391B10(
        __int64 a1,
        QT::QTreeWidgetItem *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  double v10; // xmm4_8
  double v11; // xmm5_8
  unsigned __int64 result; // rax

  if ( a2 )
  {
    sub_391910(a1, (__int64)a2);
    return sub_390F70(a1, a2, a3, a4, a5, a6, v10, v11, a9, a10);
  }
  return result;
}
