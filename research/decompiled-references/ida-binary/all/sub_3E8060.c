unsigned __int64 __fastcall sub_3E8060(
        QT::QAbstractItemView *this,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  unsigned __int64 result; // rax
  double v12; // xmm4_8
  double v13; // xmm5_8

  v10 = sub_3839F0(a2);
  result = sub_3E1B10(this, v10);
  if ( (_BYTE)result )
    return sub_3E7CB0(this, a3, a4, a5, a6, v12, v13, a9, a10);
  return result;
}
