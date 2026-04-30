unsigned __int64 __fastcall sub_39F050(
        __int64 a1,
        QT::QPainter *a2,
        unsigned int *a3,
        unsigned int *a4,
        __int64 a5,
        char a6)
{
  int v6; // r15d
  double v10; // xmm0_8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int **v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int *v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // [rsp+8h] [rbp-90h]
  int v23; // [rsp+1Ch] [rbp-7Ch]
  _BYTE v24[8]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v25; // [rsp+30h] [rbp-68h] BYREF
  __int64 v26; // [rsp+38h] [rbp-60h] BYREF
  __m128i v27; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v6 = a6 & 2;
  v10 = 1.0;
  v28 = __readfsqword(0x28u);
  v23 = a6 & 1;
  if ( (a6 & 1) != 0 )
    v10 = 3.0;
  QT::QBrush::QBrush(&v27, a5, 1);
  QT::QPen::QPen(v24, &v27, v6 == 0 ? 1 : 6, 0, 64, v10);
  QT::QBrush::~QBrush((QT::QBrush *)&v27);
  if ( v6 )
  {
    if ( v23 )
    {
      v14 = (int **)&unk_8CF440;
      v22 = 0x3FFAAAAAAAAAAAAALL;
      if ( !qword_8CF450 )
      {
LABEL_7:
        v25 = v22;
        sub_39ED50(v14, nullptr, &v25, v11, v12, v13);
        if ( !*v14 || **v14 > 1 )
          sub_39E970((__int64)v14, 0, 0, 0, v16, v17);
        v18 = v14[2];
        v26 = v22;
        sub_39ED50(v14, v18, &v26, v15, v16, v17);
        if ( !*v14 || **v14 > 1 )
          sub_39E970((__int64)v14, 0, 0, 0, v19, v20);
      }
    }
    else
    {
      if ( !qword_8CF470 )
      {
        v14 = (int **)&unk_8CF460;
        v22 = 0x4014000000000000LL;
        goto LABEL_7;
      }
      v14 = (int **)&unk_8CF460;
    }
    QT::QPen::setDashPattern(v24, v14);
  }
  QT::QPainter::setPen(a2, (const QT::QPen *)v24);
  v27 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(*a3), _mm_cvtsi32_si128(a3[1])),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(*a4), _mm_cvtsi32_si128(a4[1])));
  QT::QPainter::drawLines(a2, &v27, 1);
  QT::QPen::~QPen((QT::QPen *)v24);
  return v28 - __readfsqword(0x28u);
}
