unsigned __int64 __fastcall sub_4D3510(__int64 **this, __int64 a2)
{
  int v3; // r12d
  __int64 v5; // rax
  QT::QEventPoint *v6; // rdi
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __m128d v10; // xmm2
  __m128i v11; // xmm0
  __int64 v12; // rdi
  __m128d v13; // xmm2
  __int64 v14; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v15[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  QT::QTabBar::mouseMoveEvent((QT::QTabBar *)this, (QT::QMouseEvent *)a2);
  v3 = *((_DWORD *)this + 10);
  if ( v3 == -1 || (*(_BYTE *)(a2 + 68) & 1) == 0 )
    return v16 - __readfsqword(0x28u);
  v5 = (__int64)*(this + 4);
  v6 = *(QT::QEventPoint **)(a2 + 48);
  v7 = _mm_loadl_epi64((const __m128i *)(v5 + 20));
  v8 = _mm_loadl_epi64((const __m128i *)(v5 + 28));
  v15[0] = 0;
  v9 = _mm_sub_epi32(v8, v7);
  v15[1] = v9.m128i_i64[0];
  QT::QEventPoint::position(v6);
  v10 = (__m128d)_mm_unpacklo_epi64(v9, v7);
  v11 = _mm_cvttpd_epi32(_mm_add_pd(_mm_or_pd(_mm_and_pd((__m128d)xmmword_5DC630, v10), (__m128d)xmmword_5DC620), v10));
  v14 = v11.m128i_i64[0];
  if ( (unsigned __int8)QT::QRect::contains(v15, &v14, 0) )
  {
    QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
    v13 = (__m128d)_mm_unpacklo_epi64(v11, v7);
    v15[0] = _mm_cvttpd_epi32(_mm_add_pd(_mm_or_pd(_mm_and_pd((__m128d)xmmword_5DC630, v13), (__m128d)xmmword_5DC620), v13)).m128i_u64[0];
    sub_4CDCD0((QT::QTabBar *)this);
    return v16 - __readfsqword(0x28u);
  }
  v12 = (__int64)*(this + 7);
  *((_DWORD *)this + 10) = -1;
  *((_DWORD *)this + 17) = -1;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 104LL))(v12, 0);
  return sub_4CEF80(*(this + 6), v3);
}
