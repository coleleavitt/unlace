__int64 __fastcall sub_2C5480(
        __int64 a1,
        __int64 a2,
        __m128i a3,
        __m128d a4,
        __m128d a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  char v10; // r12
  QT::QWidget *v11; // rax
  double v12; // xmm4_8
  double v13; // xmm5_8
  unsigned __int64 v15; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 384) )
    return v16 - __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 64) > 7u )
    return sub_176330(a1, a2, a3, a4);
  v10 = 0;
  v11 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(*(QT::QAbstractScrollArea **)(a1 + 16));
  if ( !(unsigned __int8)QT::QWidget::hasFocus(v11) )
  {
    v10 = 1;
    sub_176330(a1, a2, a3, a4);
  }
  if ( *(_DWORD *)(a2 + 64) == 1 )
  {
    QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
    a5 = (__m128d)_mm_unpacklo_epi64(a3, (__m128i)a4);
    a4 = _mm_and_pd(_mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL), a5);
    a3 = _mm_cvttpd_epi32(
           _mm_add_pd(
             _mm_or_pd(_mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL), a4),
             a5));
    v15 = a3.m128i_i64[0];
    sub_175D90((_QWORD *)(a1 + 72), &v15);
  }
  if ( (*(_BYTE *)(a2 + 35) & 2) != 0
    || (unsigned __int8)sub_2BC920(a1, a2, a3, (__m128i)a4, a5.m128d_f64[0], a6, v12, v13, a9, a10) )
  {
    return v16 - __readfsqword(0x28u);
  }
  if ( !v10 )
    sub_176330(a1, a2, a3, a4);
  if ( *(_DWORD *)(a2 + 64) != 4 )
    return v16 - __readfsqword(0x28u);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 256LL))(a1);
}
