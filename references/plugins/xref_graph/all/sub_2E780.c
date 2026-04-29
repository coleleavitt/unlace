unsigned __int64 __fastcall sub_2E780(__int64 a1, QT::QPainter *a2, const QT::QRectF *a3)
{
  __m128i v4[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v5; // [rsp+38h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v4[0] = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 40) + 384LL));
  QT::QPainter::fillRect(a2, a3, (const QT::QColor *)v4);
  return v5 - __readfsqword(0x28u);
}
