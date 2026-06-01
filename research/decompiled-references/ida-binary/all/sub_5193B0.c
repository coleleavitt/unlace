unsigned __int64 __fastcall sub_5193B0(QT::QWidget *this, QT::QWidget *a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  QT::QScreen *v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v8; // xmm1
  __m128i v9; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+28h] [rbp-40h]
  unsigned __int64 v13; // [rsp+38h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( this )
    {
      v2 = _mm_sub_epi32(
             _mm_loadl_epi64((const __m128i *)(*((_QWORD *)a2 + 4) + 28LL)),
             _mm_loadl_epi64((const __m128i *)(*((_QWORD *)a2 + 4) + 20LL)));
      v3 = _mm_sub_epi32(
             _mm_loadl_epi64((const __m128i *)(*((_QWORD *)this + 4) + 28LL)),
             _mm_loadl_epi64((const __m128i *)(*((_QWORD *)this + 4) + 20LL)));
      v10 = 0;
      v9.m128i_i64[0] = _mm_sub_epi32(
                          _mm_srai_epi32(_mm_sub_epi32(v2, _mm_cmpgt_epi32((__m128i)0LL, v2)), 1u),
                          _mm_srai_epi32(_mm_sub_epi32(v3, _mm_cmpgt_epi32((__m128i)0LL, v3)), 1u)).m128i_u64[0];
      v11 = _mm_add_epi32(_mm_loadl_epi64(&v9), (__m128i)(unsigned __int64)QT::QWidget::mapToGlobal(a2, &v10)).m128i_u64[0];
      QT::QWidget::move(this, &v11);
      v4 = (QT::QScreen *)QT::QWidget::screen(a2);
      v5 = QT::QScreen::geometry(v4);
      v12 = v6;
      v11 = v5;
      v10 = QT::QWidget::pos(this);
      if ( !(unsigned __int8)QT::QRect::contains(&v11, &v10, 0) )
      {
        v8 = _mm_sub_epi32(
               _mm_loadl_epi64((const __m128i *)(*((_QWORD *)this + 4) + 28LL)),
               _mm_loadl_epi64((const __m128i *)(*((_QWORD *)this + 4) + 20LL)));
        v10 = _mm_sub_epi32(
                _mm_unpacklo_epi32(
                  (__m128i)(unsigned __int64)(((int)v12 + (__int64)(int)v11) / 2),
                  _mm_cvtsi32_si128((SHIDWORD(v12) + (__int64)SHIDWORD(v11)) / 2)),
                _mm_srai_epi32(_mm_sub_epi32(v8, _mm_cmpgt_epi32((__m128i)0LL, v8)), 1u)).m128i_u64[0];
        QT::QWidget::move(this, &v10);
      }
    }
  }
  return v13 - __readfsqword(0x28u);
}
