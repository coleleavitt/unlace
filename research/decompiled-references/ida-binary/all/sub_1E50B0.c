__int64 __fastcall sub_1E50B0(__int64 a1, __int64 a2, __m128i a3, __m128i a4)
{
  __m128d v4; // xmm2
  __int128 *v5; // rax
  __int64 v6; // rdx
  __int128 *v7; // r12
  __int64 (__fastcall *v8)(_QWORD, _QWORD, _QWORD, __int64, __int64); // r13
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v12; // rax
  unsigned int v13; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned __int64 v14; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 40) + 192LL) )
    return v15 - __readfsqword(0x28u);
  QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
  v4 = (__m128d)_mm_unpacklo_epi64(a3, a4);
  v14 = _mm_cvttpd_epi32(
          _mm_add_pd(
            _mm_or_pd(
              _mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL),
              _mm_and_pd(_mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL), v4)),
            v4)).m128i_u64[0];
  v5 = sub_1E4F70(a1, (int *)&v14, (int *)&v13);
  v6 = *(_QWORD *)(a1 + 40);
  v7 = v5;
  v8 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(v6 + 192);
  if ( *(_BYTE *)(v6 + 244) )
  {
    v9 = *(_QWORD *)(v6 + 248);
  }
  else
  {
    v12 = 0;
    if ( !*(_BYTE *)(v6 + 64) )
      v12 = *(_QWORD *)(v6 + 56);
    v9 = *(_QWORD *)(v12 + 728);
  }
  v10 = (unsigned int)sub_47B6A0(QT::QCoreApplication::self, a2);
  return v8(*(_QWORD *)(a1 + 40), *(_QWORD *)v7, v13, v10, v9);
}
