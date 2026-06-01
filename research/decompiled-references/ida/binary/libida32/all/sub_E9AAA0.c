unsigned __int64 __fastcall sub_E9AAA0(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10)
{
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r13
  _QWORD v18[9]; // [rsp+20h] [rbp-48h] BYREF

  v11 = sub_E99B50((__int64 *)(a1 + 2352), 8 * (a10 + a9 + 1) + 40, 3u);
  *(_DWORD *)v11 = a2;
  v12 = v11;
  *(_DWORD *)(v11 + 4) = a4;
  *(_DWORD *)(v11 + 8) = 22;
  *(_DWORD *)(v11 + 36) = a10;
  *(_QWORD *)(v11 + 28) = a6;
  v13 = v11 + 40;
  *(__m128i *)(v11 + 12) = _mm_unpacklo_epi64(
                             _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a9)),
                             _mm_unpacklo_epi32(_mm_cvtsi32_si128(a5), _mm_cvtsi32_si128(HIDWORD(a5))));
  *(_QWORD *)(v11 + 40 + 8LL * (unsigned int)a9) = a7;
  v18[0] = a8;
  v18[1] = a9;
  sub_E942E0((__int64)v18, (char *)(v11 + 40));
  if ( a10 )
    memset((void *)(v13 + 8LL * *(unsigned int *)(v12 + 16) + 8), 0, 8LL * (a10 - 1) + 8);
  return v12;
}

