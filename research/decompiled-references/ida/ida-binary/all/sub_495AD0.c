__int64 __fastcall sub_495AD0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  QT::QAbstractItemView *v9; // rbx
  __int64 result; // rax
  __int64 *v11; // rax
  double v12; // xmm4_8
  double v13; // xmm5_8

  v9 = *(QT::QAbstractItemView **)(a1 + 328);
  result = 0;
  if ( v9 )
  {
    v11 = (__int64 *)QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a1 + 328));
    return (unsigned __int8)sub_495880(v11, v9, a2, a3, a4, a5, v12, v13, a8, a9);
  }
  return result;
}
