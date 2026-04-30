__int64 __fastcall sub_1E52E0(__int64 a1, __int64 a2, __m128i a3, __m128i a4)
{
  __int64 v4; // rax
  __m128d v5; // xmm4
  __m128i v6; // xmm0
  __m128d v7; // xmm0
  __int128 *v8; // r12
  int v9; // eax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(_QWORD, _QWORD, _QWORD, __int64, __int64); // r13
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // rcx
  unsigned int v16; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned __int64 v17; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 40);
  v18 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(v4 + 176) && !*(_QWORD *)(v4 + 184) )
    return v18 - __readfsqword(0x28u);
  QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
  v5 = (__m128d)_mm_unpacklo_epi64(a3, a4);
  v6 = _mm_cvttpd_epi32(
         _mm_add_pd(
           _mm_or_pd(
             _mm_and_pd(_mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL), v5),
             _mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL)),
           v5));
  v17 = v6.m128i_i64[0];
  sub_1E51E0(a1, (int *)&v17);
  QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
  v7 = (__m128d)_mm_unpacklo_epi64(v6, a4);
  v17 = _mm_cvttpd_epi32(_mm_add_pd(_mm_or_pd((__m128d)xmmword_5DC620, _mm_and_pd((__m128d)xmmword_5DC630, v7)), v7)).m128i_u64[0];
  v8 = sub_1E4F70(a1, (int *)&v17, (int *)&v16);
  v9 = *(_DWORD *)(a2 + 64);
  if ( v9 == 1 )
  {
    v11 = *(_QWORD *)(a1 + 40);
    v12 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(v11 + 176);
    if ( v12 )
    {
      if ( !*(_BYTE *)(v11 + 244) )
        goto LABEL_7;
      goto LABEL_15;
    }
    return v18 - __readfsqword(0x28u);
  }
  if ( v9 != 2 )
    return v18 - __readfsqword(0x28u);
  v11 = *(_QWORD *)(a1 + 40);
  v12 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(v11 + 184);
  if ( !v12 )
    return v18 - __readfsqword(0x28u);
  if ( !*(_BYTE *)(v11 + 244) )
  {
LABEL_7:
    v13 = 0;
    if ( !*(_BYTE *)(v11 + 64) )
      v13 = *(_QWORD *)(v11 + 56);
    v14 = *(_QWORD *)(v13 + 728);
    goto LABEL_10;
  }
LABEL_15:
  v14 = *(_QWORD *)(v11 + 248);
LABEL_10:
  v15 = (unsigned int)sub_47B6A0(QT::QCoreApplication::self, a2);
  return v12(*(_QWORD *)(a1 + 40), *(_QWORD *)v8, v16, v15, v14);
}
