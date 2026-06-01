unsigned __int64 __fastcall sub_5156D0(QT::QAbstractScrollArea *this, char a2)
{
  unsigned __int64 v2; // rax
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rbp
  int v9; // eax
  double v10; // rdx
  unsigned int v11; // eax
  int v13; // eax
  unsigned int v14; // [rsp+8h] [rbp-50h]
  double v15[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v2 = *((unsigned int *)this + 29);
  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 28));
  v16 = __readfsqword(0x28u);
  v4 = (__m128i)v2;
  if ( v2 < *((_QWORD *)this + 8) )
  {
    v5 = 48 * v2;
    v6 = *((_QWORD *)this + 7) + v5 == 0;
    v7 = *((_QWORD *)this + 7) + v5;
    v8 = v7;
    if ( !v6 )
    {
      v9 = QT::QTextLayout::lineForTextPosition(*(QT::QTextLayout **)(v7 + 24), _mm_cvtsi128_si32(v3));
      v3 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v3));
      v4 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v4));
      LODWORD(v15[0]) = v9;
      v15[1] = v10;
      if ( v10 != 0.0 )
      {
        v11 = QT::QTextLine::textStart((QT::QTextLine *)v15);
        v4 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v4));
        v3 = _mm_cvtsi32_si128(v11);
        if ( !a2 )
        {
          v14 = v11;
          v13 = QT::QTextLine::textLength((QT::QTextLine *)v15);
          v4 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v4));
          v3 = _mm_cvtsi32_si128(
                 _mm_cvtsi128_si32(_mm_cvtsi32_si128(v13 + _mm_cvtsi128_si32(_mm_cvtsi32_si128(v14))))
               - (unsigned int)((int)(QT::QTextLayout::lineCount(*(QT::QTextLayout **)(v8 + 24)) - 1) > SLODWORD(v15[0])));
        }
      }
    }
  }
  *(_QWORD *)&v15[0] = _mm_unpacklo_epi32(v3, v4).m128i_u64[0];
  sub_514C10(this, (int *)v15, 2, 1, v15[0], *(double *)v4.m128i_i64);
  return v16 - __readfsqword(0x28u);
}
