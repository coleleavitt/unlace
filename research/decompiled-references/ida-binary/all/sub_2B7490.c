unsigned __int64 __fastcall sub_2B7490(unsigned int *a1, QT::QPainter *a2)
{
  const QT::QPen *v3; // rax
  const QT::QBrush *v4; // rax
  __int64 v5; // [rsp+0h] [rbp-68h] BYREF
  _BYTE v6[8]; // [rsp+8h] [rbp-60h] BYREF
  __m128i v7; // [rsp+10h] [rbp-58h] BYREF
  int v8; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+24h] [rbp-44h]
  __int16 v10; // [rsp+2Ch] [rbp-3Ch]
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( a1[56] != -1 )
  {
    QT::QPainter::save(a2);
    v3 = (const QT::QPen *)QT::QPainter::pen(a2);
    QT::QPen::QPen((QT::QPen *)&v5, v3);
    QT::QPen::setStyle(&v5, 3);
    QT::QColor::QColor(&v8, 2);
    QT::QPen::setColor((QT::QPen *)&v5, (const QT::QColor *)&v8);
    QT::QPen::setCapStyle(&v5, 0);
    QT::QPen::setWidth((QT::QPen *)&v5, 1);
    QT::QPainter::setPen(a2, (const QT::QPen *)&v5);
    v4 = (const QT::QBrush *)QT::QPainter::brush(a2);
    QT::QBrush::QBrush((QT::QBrush *)v6, v4);
    QT::QBrush::setStyle(v6, 1);
    v8 = 1;
    v9 = 0xF9F9F9F9B1B16464LL;
    v10 = 0;
    QT::QBrush::setColor((QT::QBrush *)v6, (const QT::QColor *)&v8);
    QT::QPainter::setBrush(a2, (const QT::QBrush *)v6);
    v7 = _mm_unpacklo_epi64(
           _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[56]), _mm_cvtsi32_si128(a1[57])),
           _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[58] - 2), _mm_cvtsi32_si128(a1[59] - 2)));
    QT::QPainter::drawRects(a2, &v7, 1);
    QT::QBrush::~QBrush((QT::QBrush *)v6);
    QT::QPen::~QPen((QT::QPen *)&v5);
    QT::QPainter::restore(a2);
  }
  return v11 - __readfsqword(0x28u);
}
