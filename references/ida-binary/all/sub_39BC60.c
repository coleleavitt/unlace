__int64 __fastcall sub_39BC60(
        _QWORD *a1,
        __int64 a2,
        __m128i a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  QT::QAbstractScrollArea *v11; // rdi
  __int64 v13; // rax
  QT::QEventPoint *v14; // rdi
  __m128 v15; // xmm2
  __m128d v16; // xmm1
  __m128 v17; // xmm0
  double v18; // xmm4_8
  double v19; // xmm5_8
  int v20; // eax
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 *v25; // [rsp+8h] [rbp-30h] BYREF
  __m128i v26[2]; // [rsp+10h] [rbp-28h] BYREF

  v26[0].m128i_i64[1] = __readfsqword(0x28u);
  v11 = (QT::QAbstractScrollArea *)a1[84];
  if ( !v11 || *(_DWORD *)(a2 + 64) != 1 )
    return v26[0].m128i_i64[1] - __readfsqword(0x28u);
  v13 = QT::QAbstractScrollArea::viewport(v11);
  QT::QWidget::setFocus(v13, 7);
  v14 = *(QT::QEventPoint **)(a2 + 48);
  v25 = nullptr;
  QT::QEventPoint::position(v14);
  v15 = (__m128)_mm_unpacklo_epi64(a3, a4);
  v16 = _mm_and_pd(_mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL), (__m128d)v15);
  v17 = (__m128)_mm_cvttpd_epi32(
                  _mm_add_pd(
                    _mm_or_pd(_mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL), v16),
                    (__m128d)v15));
  v26[0].m128i_i64[0] = v17.m128_u64[0];
  v20 = sub_39B950(a1, v26, &v25, *(double *)v17.m128_u64, (__m128)v16, v15, a6, v18, v19, a9, a10);
  if ( v20 == 1 )
  {
    sub_1E96C0(v26, a1[84]);
    if ( *((_DWORD *)v25 + 3) == -1 )
      v24 = sub_5313F0(unk_8C9F28);
    else
      v24 = sub_5313F0(unk_8C9F38);
    if ( v24 )
      sub_5314B0(v24);
    sub_1EAD80(1);
    sub_1E96D0(v26[0].m128i_i64);
    return v26[0].m128i_i64[1] - __readfsqword(0x28u);
  }
  if ( v20 != 2 )
    return v26[0].m128i_i64[1] - __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 35) & 4) == 0 )
  {
    if ( get_debugger_plugins(0) )
    {
      v23 = sub_5313F0(unk_8CA298);
      if ( v23 )
        return sub_5314B0(v23);
    }
    return v26[0].m128i_i64[1] - __readfsqword(0x28u);
  }
  return sub_260A60(*v25, nullptr, v17, (__m128)v16, v15, a6, v21, v22, a9, a10);
}
