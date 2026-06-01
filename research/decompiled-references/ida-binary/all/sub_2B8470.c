unsigned __int64 __fastcall sub_2B8470(__int64 a1, QT::QPainter *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  double v9; // xmm1_8
  signed int v10; // eax
  signed int v11; // edx
  int v13; // ecx
  __m128i v14; // xmm2
  _BYTE v15[8]; // [rsp+8h] [rbp-70h] BYREF
  __m128i v16; // [rsp+10h] [rbp-68h] BYREF
  __m128i v17; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v7 = *(unsigned __int8 *)(a4 + 70);
  v18 = __readfsqword(0x28u);
  v17 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a3 + 288) + 16 * v7));
  QT::QPen::QPen((QT::QPen *)v15, (const QT::QColor *)&v17);
  v9 = *(double *)(a3 + 368);
  if ( v9 < 0.5 )
    QT::QPen::setWidthF((QT::QPen *)v15, 0.5 / v9);
  QT::QPainter::setPen(a2, (const QT::QPen *)v15);
  QT::QPainter::setBrush(a2, 0);
  sub_2B8260(a1, (__int64)a2, a4, a5);
  if ( *(_BYTE *)(a3 + 284) )
  {
    v10 = *(_DWORD *)(a4 + 88);
    v11 = *(_DWORD *)(a4 + 96);
    if ( v10 < v11 )
    {
      v13 = *(_DWORD *)(a4 + 100);
      if ( *(_DWORD *)(a4 + 92) < v13 )
      {
        v14 = _mm_cvtsi32_si128(v13 - 1);
        v16 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), v14),
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11 - 1), v14));
        QT::QPainter::drawLines(a2, &v16, 1);
      }
    }
  }
  QT::QPen::~QPen((QT::QPen *)v15);
  return v18 - __readfsqword(0x28u);
}
