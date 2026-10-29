unsigned __int64 __fastcall sub_39B470(
        __int64 a1,
        QT::QPainter *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        __int64 a6)
{
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  unsigned int v13; // edx
  __int64 v15; // [rsp+0h] [rbp-68h]
  __int64 v16; // [rsp+8h] [rbp-60h] BYREF
  __m128i v17; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v18; // [rsp+20h] [rbp-48h]
  unsigned int v19; // [rsp+24h] [rbp-44h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  QT::QBrush::QBrush(&v16, a6, 1);
  QT::QPainter::setBrush(a2, (const QT::QBrush *)&v16);
  QT::QBrush::~QBrush((QT::QBrush *)&v16);
  sub_1C7B60((QT::QPen *)&v16, a2, a6, 1);
  QT::QPen::~QPen((QT::QPen *)&v16);
  v12 = a3 - 4;
  if ( !a5 )
  {
    v13 = a4 + 4;
    v17 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(a4 + 4)),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)));
LABEL_3:
    v12 = a3 + 4;
    goto LABEL_4;
  }
  v13 = a4 - 4;
  v17 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(a4 - 4)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)));
  if ( a5 == 1 )
    goto LABEL_3;
  v13 = a4 + 4;
  if ( a5 != 2 )
    goto LABEL_3;
LABEL_4:
  v19 = v13;
  v18 = v12;
  QT::QPainter::drawPolygon(a2, &v17, 3, 0, v10, v11, v15, v16);
  return v20 - __readfsqword(0x28u);
}
