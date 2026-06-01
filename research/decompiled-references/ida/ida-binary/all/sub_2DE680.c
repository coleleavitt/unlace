QT::QString *__fastcall sub_2DE680(QT::QString *this, QT::QWidget *a2, const __m128i *a3, double a4)
{
  __int64 v4; // rax
  QT::QWidget *v6; // rax
  QT::QWidget *v7; // r14
  QT::QScreen *v8; // rax
  int v9; // eax
  int v10; // edx
  int v11; // r12d
  float v12; // xmm0_4
  __int64 v13; // rsi
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  _QWORD v17[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = a3[1].m128i_i64[0];
  v17[1] = __readfsqword(0x28u);
  if ( !v4 )
    goto LABEL_10;
  v6 = a2;
  do
  {
    v7 = v6;
    v6 = (QT::QWidget *)QT::QMetaObject::cast(
                          (QT::QMetaObject *)&QT::QMenu::staticMetaObject,
                          *(const QT::QObject **)(*((_QWORD *)v6 + 1) + 16LL));
  }
  while ( v6 );
  v8 = (QT::QScreen *)QT::QWidget::screen(v7);
  v9 = QT::QScreen::geometry(v8);
  v11 = v10 + 1 - v9;
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v17, (const QT::QFont *)(*((_QWORD *)a2 + 4) + 56LL));
  QT::QFontMetricsF::horizontalAdvance((QT::QFontMetricsF *)v17, (const QT::QString *)a3, -1);
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v17);
  v4 = a3[1].m128i_i64[0];
  if ( v11 > 0
    && (v12 = a4, v12 > 0.0)
    && (v13 = (int)(float)((float)((float)((float)v11 / v12) * 0.89999998) * (float)(int)v4) - 20, v13 < v4) )
  {
    v14 = _mm_loadu_si128(a3);
    *((_QWORD *)this + 2) = v4;
    *(__m128i *)this = v14;
    if ( v14.m128i_i64[0] )
      _InterlockedAdd((volatile signed __int32 *)v14.m128i_i64[0], 1u);
    QT::QString::truncate(this, v13);
    QT::QString::append(this, "(...)", 5);
  }
  else
  {
LABEL_10:
    v15 = _mm_loadu_si128(a3);
    *((_QWORD *)this + 2) = v4;
    *(__m128i *)this = v15;
    if ( v15.m128i_i64[0] )
      _InterlockedAdd((volatile signed __int32 *)v15.m128i_i64[0], 1u);
  }
  return this;
}
