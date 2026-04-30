unsigned __int64 __fastcall sub_341DF0(QT::QWidget *this, __int64 a2, __m128i a3, __m128i a4)
{
  QT::QEventPoint *v5; // rdi
  __m128d v6; // xmm2
  __m128d v7; // xmm1
  __m128i v8; // xmm0
  int v10; // eax
  int v11; // esi
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-20h]

  v5 = *(QT::QEventPoint **)(a2 + 48);
  v15 = __readfsqword(0x28u);
  QT::QEventPoint::position(v5);
  v6 = (__m128d)_mm_unpacklo_epi64(a3, a4);
  v7 = _mm_and_pd(_mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL), v6);
  v8 = _mm_cvttpd_epi32(_mm_add_pd(_mm_or_pd(_mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL), v7), v6));
  v14 = v8.m128i_i64[0];
  if ( (*(_BYTE *)(a2 + 68) & 1) != 0 && *((_QWORD *)this + 21) )
  {
    v10 = _mm_cvtsi128_si32(v8);
    v11 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v8, 229));
    v12 = v10;
    if ( !*((_BYTE *)this + 345) )
    {
      v12 = v11;
      v11 = v10;
    }
    v13 = sub_3417A0((__int64)this, v11, v12, nullptr);
    if ( (unsigned __int8)sub_3412C0(this, v13, 1, 0) )
      QT::QWidget::update(this);
  }
  sub_341C30(this, (int *)&v14, *(double *)v8.m128i_i64, (__m128)v7);
  return v15 - __readfsqword(0x28u);
}
