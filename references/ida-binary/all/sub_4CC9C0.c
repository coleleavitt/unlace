__int64 __fastcall sub_4CC9C0(QT::QWidget *this, __m128d *a2)
{
  __m128d v2; // xmm2
  unsigned int v3; // eax
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = a2[1];
  v5[1] = __readfsqword(0x28u);
  v5[0] = _mm_cvttpd_epi32(
            _mm_add_pd(
              _mm_or_pd(
                _mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL),
                _mm_and_pd(_mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL), v2)),
              v2)).m128i_u64[0];
  v3 = sub_4CC8E0((__int64)this, (__int64)v5);
  if ( v3 )
  {
    *((_DWORD *)this + 38) = v3;
    sub_4C65E0(*((_QWORD *)this + 5), v3);
  }
  else
  {
    if ( *((_DWORD *)this + 38) )
      sub_4C6A50(*((_QWORD *)this + 5));
    *((_DWORD *)this + 38) = 0;
  }
  return QT::QWidget::raise(this);
}
