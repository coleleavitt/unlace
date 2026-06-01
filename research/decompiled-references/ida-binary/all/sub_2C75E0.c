unsigned __int64 __fastcall sub_2C75E0(
        int *a1,
        QT::QPainter *a2,
        __int64 a3,
        char a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v15; // r14
  __m128 v17; // xmm3
  __m128 v18; // xmm2
  __m128i v19; // xmm1
  __int64 v20; // rcx
  __m128i v22; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v12 = *(_QWORD *)(a3 + 320);
  v13 = *(_QWORD *)(a3 + 312);
  v23 = __readfsqword(0x28u);
  v15 = v13 + 152 * v12;
  while ( v13 != v15 )
  {
    while ( (*(_BYTE *)(v13 + 64) & 1) != a4 )
    {
      v13 += 152;
      if ( v13 == v15 )
        return v23 - __readfsqword(0x28u);
    }
    v17 = (__m128)_mm_cvtsi32_si128(*(_DWORD *)(v13 + 76));
    v18 = (__m128)_mm_cvtsi32_si128(*(_DWORD *)(v13 + 84) - 2);
    v19 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v13 + 80) - 2), (__m128i)v18);
    v22 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v13 + 72)), (__m128i)v17), v19);
    sub_2C6E20(a1, a2, a3, (int *)v13, &v22, *(double *)v22.m128i_i64, v19, v18, v17, a9, a10, a11, a12);
    v20 = v13;
    v13 += 152;
    sub_2B8470((__int64)a1, a2, a3, v20, (__int64)&v22);
  }
  return v23 - __readfsqword(0x28u);
}
