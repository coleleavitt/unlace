unsigned __int64 __fastcall sub_2A7E10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5, __m128i a6)
{
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __m128d v11; // xmm2
  unsigned __int64 v12; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 168);
  if ( v6 )
  {
    if ( !*(_BYTE *)(v6 + 48) )
    {
      v7 = *(_QWORD *)(v6 + 40);
      if ( v7 )
      {
        if ( ((unsigned int)sub_1EB590(*(_QWORD *)(v6 + 40), a2, a3, a4, *(double *)a5.m128i_i64) == 2
           && *(_QWORD *)(v7 + 896)
           || (unsigned int)sub_1EB590(v7, a2, v8, v9, *(double *)a5.m128i_i64) == 3 && *(_QWORD *)(v7 + 904))
          && (*(_BYTE *)(a2 + 68) & 1) != 0 )
        {
          QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
          v11 = (__m128d)_mm_unpacklo_epi64(a5, a6);
          v12 = _mm_cvttpd_epi32(
                  _mm_add_pd(
                    _mm_or_pd(
                      _mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL),
                      _mm_and_pd(_mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL), v11)),
                    v11)).m128i_u64[0];
          sub_2A7370(a1, &v12);
        }
      }
    }
  }
  return v13 - __readfsqword(0x28u);
}
