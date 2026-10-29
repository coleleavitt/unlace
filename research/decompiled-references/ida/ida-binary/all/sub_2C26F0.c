bool __fastcall sub_2C26F0(
        QT::QCoreApplication *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // rax
  double v13; // xmm4_8
  double v14; // xmm5_8
  bool result; // al
  bool v16; // [rsp+Fh] [rbp-9h]

  v12 = sub_1EA680(*((_QWORD *)this + 2) + 384LL, a2, a3, a4, a5);
  result = (unsigned int)sub_2C23F0((__m128i *)this, v12, 0x704u, a5, a6, a7, a8, v13, v14, a11, a12) == 4;
  if ( result )
  {
    v16 = result;
    sub_1F4880(*((QT::QAbstractScrollArea **)this + 2), 0);
    return v16;
  }
  return result;
}
