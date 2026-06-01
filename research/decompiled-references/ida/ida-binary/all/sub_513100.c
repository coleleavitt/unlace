__int64 __fastcall sub_513100(
        QT::QAbstractScrollArea *this,
        __int64 *a2,
        unsigned int *a3,
        char a4,
        double a5,
        double a6)
{
  unsigned int v8; // ebp
  unsigned int v9; // edx
  __int64 v10; // r15
  __m128d v11; // xmm0
  double v12; // xmm1_8
  __m128d v14; // xmm1
  QT::QAbstractSlider *v15; // rax
  int v16; // r14d
  QT::QAbstractSlider *v17; // rax
  int v18; // [rsp+Ch] [rbp-5Ch]
  __int64 v19; // [rsp+18h] [rbp-50h] BYREF
  double v20[9]; // [rsp+20h] [rbp-48h] BYREF

  *(_QWORD *)&v20[1] = __readfsqword(0x28u);
  v19 = 0;
  v8 = sub_512C90((__int64)this, &v19, (__int64)this + 112, v20, a5, a6);
  if ( (_BYTE)v8 )
  {
    v9 = v19;
    v10 = HIDWORD(v19);
    if ( a4 )
    {
      v18 = v19;
      v15 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::verticalScrollBar(this);
      v16 = QT::QAbstractSlider::value(v15);
      v17 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::horizontalScrollBar(this);
      v10 = (unsigned int)(v10 - v16);
      v9 = v18 - QT::QAbstractSlider::value(v17);
    }
    v11 = (__m128d)*(unsigned __int64 *)&v20[0];
    v12 = fabs(v20[0]);
    *a2 = (v10 << 32) | v9;
    if ( v12 < 4.503599627370496e15 )
    {
      v14.m128d_f64[0] = (double)(int)v11.m128d_f64[0];
      *(_QWORD *)&v11.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                       v14.m128d_f64[0]
                                     + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v11, v14).m128d_f64[0] & 0x3FF0000000000000LL))
                                   | *(_QWORD *)&v11.m128d_f64[0] & 0x8000000000000000LL;
    }
    *a3 = v9;
    a3[1] = v10 + (int)v11.m128d_f64[0];
  }
  return v8;
}
