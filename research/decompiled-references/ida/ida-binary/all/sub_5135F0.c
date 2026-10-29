unsigned __int64 __fastcall sub_5135F0(QT::QAbstractScrollArea *this, unsigned int a2, unsigned int a3, __m128d a4)
{
  __int64 v4; // r15
  __m128d v5; // xmm1
  unsigned int v6; // ebx
  QT::QAbstractSlider *v7; // r12
  __m128d v8; // xmm2
  unsigned int v9; // ebx
  QT::QAbstractSlider *v10; // rbp
  _BYTE v13[8]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v13, (const QT::QFont *)(*((_QWORD *)this + 4) + 56LL));
  v4 = QT::QAbstractScrollArea::viewport(this);
  QT::QFontMetricsF::height((QT::QFontMetricsF *)v13);
  if ( fabs(a4.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v5 = 0;
    v5.m128d_f64[0] = (double)(int)a4.m128d_f64[0];
    v5.m128d_f64[0] = v5.m128d_f64[0]
                    + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(a4, v5).m128d_f64[0] & 0x3FF0000000000000LL);
    a4 = _mm_or_pd(v5, _mm_andn_pd((__m128d)0x7FFFFFFFFFFFFFFFuLL, a4));
  }
  v6 = *(_DWORD *)(*(_QWORD *)(v4 + 32) + 32LL) + 1 - *(_DWORD *)(*(_QWORD *)(v4 + 32) + 24LL);
  v7 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::verticalScrollBar(this);
  QT::QAbstractSlider::setPageStep(v7, v6);
  QT::QAbstractSlider::setSingleStep(v7, (int)a4.m128d_f64[0]);
  QT::QAbstractSlider::setMinimum(v7, 0);
  if ( v6 >= a2 )
    QT::QAbstractSlider::setMaximum(v7, 0);
  else
    QT::QAbstractSlider::setMaximum(v7, a2 - v6);
  QT::QFontMetricsF::averageCharWidth((QT::QFontMetricsF *)v13);
  if ( fabs(a4.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v8.m128d_f64[0] = (double)(int)a4.m128d_f64[0];
    *(_QWORD *)&a4.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                    v8.m128d_f64[0]
                                  + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(a4, v8).m128d_f64[0] & 0x3FF0000000000000LL))
                                | *(_QWORD *)&a4.m128d_f64[0] & 0x8000000000000000LL;
  }
  v9 = *(_DWORD *)(*(_QWORD *)(v4 + 32) + 28LL) + 1 - *(_DWORD *)(*(_QWORD *)(v4 + 32) + 20LL);
  v10 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::horizontalScrollBar(this);
  QT::QAbstractSlider::setPageStep(v10, v9);
  QT::QAbstractSlider::setSingleStep(v10, (int)a4.m128d_f64[0]);
  QT::QAbstractSlider::setMinimum(v10, 0);
  if ( v9 >= a3 )
    QT::QAbstractSlider::setMaximum(v10, 0);
  else
    QT::QAbstractSlider::setMaximum(v10, a3 - v9);
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v13);
  return v14 - __readfsqword(0x28u);
}
