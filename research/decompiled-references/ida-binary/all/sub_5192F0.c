unsigned __int64 __fastcall sub_5192F0(QT::QWidget *a1)
{
  QT::QScreen *v1; // rax
  __int64 v2; // rax
  __int64 v3; // rdx
  __m128i v4; // xmm1
  unsigned __int64 v6; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  if ( a1 )
  {
    v1 = (QT::QScreen *)QT::QWidget::screen(a1);
    v2 = QT::QScreen::geometry(v1);
    v4 = _mm_sub_epi32(
           _mm_loadl_epi64((const __m128i *)(*((_QWORD *)a1 + 4) + 28LL)),
           _mm_loadl_epi64((const __m128i *)(*((_QWORD *)a1 + 4) + 20LL)));
    v6 = _mm_sub_epi32(
           _mm_unpacklo_epi32(
             (__m128i)(unsigned __int64)(((int)v3 + (__int64)(int)v2) / 2),
             _mm_cvtsi32_si128(((v3 >> 32) + (v2 >> 32)) / 2)),
           _mm_srai_epi32(_mm_sub_epi32(v4, _mm_cmpgt_epi32((__m128i)0LL, v4)), 1u)).m128i_u64[0];
    QT::QWidget::move(a1, &v6);
  }
  return v7 - __readfsqword(0x28u);
}
