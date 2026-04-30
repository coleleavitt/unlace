unsigned __int64 __fastcall sub_2F7270(__int64 a1)
{
  __int64 v1; // rax
  QT::QWidget *v3; // rdi
  QT::QScreen *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm1
  unsigned __int64 v9; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 8);
  v10 = __readfsqword(0x28u);
  v3 = *(QT::QWidget **)(v1 + 16);
  if ( v3 )
    v4 = (QT::QScreen *)QT::QWidget::screen(v3);
  else
    v4 = (QT::QScreen *)QT::QGuiApplication::primaryScreen(nullptr);
  if ( v4 )
  {
    v5 = QT::QScreen::geometry(v4);
    v7 = _mm_sub_epi32(
           _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(a1 + 32) + 28LL)),
           _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(a1 + 32) + 20LL)));
    v9 = _mm_sub_epi32(
           _mm_unpacklo_epi32(
             (__m128i)(unsigned __int64)(((int)v6 + (__int64)(int)v5) / 2),
             _mm_cvtsi32_si128(((v6 >> 32) + (v5 >> 32)) / 2)),
           _mm_srai_epi32(_mm_sub_epi32(v7, _mm_cmpgt_epi32((__m128i)0LL, v7)), 1u)).m128i_u64[0];
    QT::QWidget::move(a1, &v9);
  }
  return v10 - __readfsqword(0x28u);
}
