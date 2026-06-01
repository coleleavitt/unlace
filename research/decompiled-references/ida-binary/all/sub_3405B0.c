unsigned __int64 __fastcall sub_3405B0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  int v3; // r13d
  __int64 v4; // rbp
  unsigned int v5; // r13d
  __int64 i; // r15
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // r12
  unsigned int v11; // edx
  unsigned int v12; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  __m128i v16; // rax
  QT::QPaintDevice *v17; // [rsp+0h] [rbp-108h]
  _BYTE v19[8]; // [rsp+10h] [rbp-F8h] BYREF
  _BYTE v20[8]; // [rsp+18h] [rbp-F0h] BYREF
  __m128i si128; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v22; // [rsp+30h] [rbp-D8h]
  __m128d v23; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B8h]
  __m128i v25; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v26; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+C8h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v17 = (QT::QPaintDevice *)(a1 + 312);
  if ( (unsigned __int8)QT::QPixmap::isNull((QT::QPixmap *)(a1 + 312)) )
  {
    QT::QPixmap::QPixmap((QT::QPixmap *)&si128, 10, 10);
    QT::QPaintDevice::QPaintDevice((QT::QPaintDevice *)&v23);
    v14 = v22;
    v22 = 0;
    *(_QWORD *)&v23.m128d_f64[0] = (char *)&`vtable for'QT::QPixmap + 16;
    v15 = *(_QWORD *)(a1 + 328);
    *(_QWORD *)(a1 + 328) = v14;
    v24 = v15;
    QT::QPixmap::~QPixmap((QT::QPixmap *)&v23);
    QT::QPixmap::~QPixmap((QT::QPixmap *)&si128);
    QT::QColor::QColor(&v26, 19);
    QT::QPixmap::fill(v17, (const QT::QColor *)&v26);
    QT::QPainter::QPainter((QT::QPainter *)v19, v17);
    QT::QPainter::setRenderHint(v19, 1, 1);
    v16.m128i_i64[0] = sub_524FA0(a1 + 40, 2165563919LL, 0);
    v25 = v16;
    QT::QPainter::setPen((QT::QPainter *)v19, (const QT::QColor *)&v25);
    QT::QBrush::QBrush(&v23, &v25, 1);
    QT::QPainter::setBrush((QT::QPainter *)v19, (const QT::QBrush *)&v23);
    QT::QBrush::~QBrush((QT::QBrush *)&v23);
    QT::QRadialGradient::QRadialGradient((QT::QRadialGradient *)&v23, 5.0, 5.0, 5.0);
    QT::QGradient::setColorAt((QT::QGradient *)&v23, 0.0, (const QT::QColor *)&v25);
    QT::QGradient::setColorAt((QT::QGradient *)&v23, 0.5, (const QT::QColor *)&v25);
    v26 = _mm_load_si128(&v25);
    QT::QColor::setAlpha((QT::QColor *)&v26, 128);
    QT::QGradient::setColorAt((QT::QGradient *)&v23, 0.75, (const QT::QColor *)&v26);
    v26 = _mm_load_si128(&v25);
    QT::QColor::setAlpha((QT::QColor *)&v26, 0);
    QT::QGradient::setColorAt((QT::QGradient *)&v23, 1.0, (const QT::QColor *)&v26);
    QT::QBrush::QBrush((QT::QBrush *)v20, (const QT::QGradient *)&v23);
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DD0D0);
    QT::QPainter::fillRect(v19, &si128, v20);
    QT::QBrush::~QBrush((QT::QBrush *)v20);
    QT::QPainter::end((QT::QPainter *)v19);
    QT::QRadialGradient::~QRadialGradient((QT::QRadialGradient *)&v23);
    QT::QPainter::~QPainter((QT::QPainter *)v19);
  }
  v2 = *(_DWORD **)(a1 + 32);
  if ( *(_BYTE *)(a1 + 345) )
    v3 = v2[7] + 1 - v2[5];
  else
    v3 = v2[8] + 1 - v2[6];
  v4 = *(_QWORD *)(a1 + 376);
  v5 = v3 - 8;
  for ( i = -1; v4 != a1 + 360; v4 = std::_Rb_tree_increment(v4) )
  {
    v7 = *(_QWORD *)(v4 + 32);
    if ( v7 >= *(_QWORD *)(a1 + 184) && v7 < *(_QWORD *)(a1 + 192) )
    {
      v8 = sub_33FA20(a1, v7);
      if ( v8 != -1 )
      {
        v9 = v8 - *(_QWORD *)(a1 + 200);
        v10 = v9;
        if ( i != v9 && v9 != -1 )
        {
          v11 = v9;
          v12 = v5;
          i = v10;
          if ( !*(_BYTE *)(a1 + 345) )
          {
            v11 = v5;
            v12 = v10;
          }
          v23 = _mm_cvtepi32_pd(
                  _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(v11)),
                    _mm_loadl_epi64((const __m128i *)&qword_5DC040)));
          QT::QPainter::drawPixmap(a2, &v23, v17);
        }
      }
    }
  }
  return v27 - __readfsqword(0x28u);
}
