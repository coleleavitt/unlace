__int64 __fastcall sub_4D32F0(QT::QTabBar *this, QT::QMouseEvent *a2, __m128i a3, __m128i a4)
{
  int v4; // eax
  bool v5; // zf
  __m128d v7; // xmm2
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v4 = -1;
  v5 = *((_DWORD *)a2 + 16) == 1;
  v8[1] = __readfsqword(0x28u);
  if ( v5 )
  {
    QT::QEventPoint::position(*((QT::QEventPoint **)a2 + 6));
    v7 = (__m128d)_mm_unpacklo_epi64(a3, a4);
    v8[0] = _mm_cvttpd_epi32(
              _mm_add_pd(
                _mm_or_pd(
                  _mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL),
                  _mm_and_pd(_mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL), v7)),
                v7)).m128i_u64[0];
    v4 = QT::QTabBar::tabAt(this, v8);
  }
  *((_DWORD *)this + 10) = v4;
  return QT::QTabBar::mousePressEvent(this, a2);
}
