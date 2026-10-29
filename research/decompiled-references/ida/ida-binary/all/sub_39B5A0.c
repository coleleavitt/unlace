unsigned __int64 __fastcall sub_39B5A0(
        __int64 a1,
        QT::QPainter *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        __int64 a7)
{
  __m128i v12; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  QT::QPainter::save(a2);
  QT::QBrush::QBrush(&v12, a7, 1);
  QT::QPainter::setBrush(a2, (const QT::QBrush *)&v12);
  QT::QBrush::~QBrush((QT::QBrush *)&v12);
  sub_1C7B60((QT::QPen *)&v12, a2, a7, 1);
  QT::QPen::~QPen((QT::QPen *)&v12);
  v12 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a5 - 1), _mm_cvtsi32_si128(a6 - 1)));
  QT::QPainter::fillRect(a2, &v12, a7);
  QT::QPainter::restore(a2);
  return v13 - __readfsqword(0x28u);
}
