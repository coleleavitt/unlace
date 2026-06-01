__int64 __fastcall sub_2B8260(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __m128i v6; // xmm1
  _OWORD v7[2]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  v4 = *(_DWORD *)(a3 + 64);
  v8 = __readfsqword(0x28u);
  if ( (v4 & 0x20) != 0 )
  {
    v6 = _mm_loadl_epi64((const __m128i *)a4);
    v7[0] = _mm_cvtepi32_pd(v6);
    v7[1] = _mm_cvtepi32_pd(
              _mm_sub_epi32(
                _mm_add_epi32(
                  _mm_loadl_epi64((const __m128i *)(a4 + 8)),
                  _mm_loadl_epi64((const __m128i *)&xmmword_5DCCE0)),
                v6));
    ((void (__fastcall *)(__int64, _OWORD *, __int64, double, double))QT::QPainter::drawRoundedRect)(
      a2,
      v7,
      1,
      25.0,
      25.0);
    return v8 - __readfsqword(0x28u);
  }
  else if ( (v4 & 0x40) != 0 )
  {
    return QT::QPainter::drawEllipse(a2, a4);
  }
  else
  {
    return QT::QPainter::drawRects(a2, a4, 1);
  }
}
