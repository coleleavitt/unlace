/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B83D0
// Address: 0x080B83D0

//----- (080B83D0) --------------------------------------------------------
unsigned int __cdecl sub_80B83D0(char **a1, int a2)
{
  char *v2; // eax
  unsigned int v3; // edx
  __m128i v4; // xmm0
  size_t v5; // eax
  unsigned int v6; // edx
  __m128i v7; // xmm0
  size_t v8; // eax
  unsigned int v9; // edx
  __m128i v10; // xmm0
  size_t v11; // eax
  unsigned int result; // eax
  unsigned __int64 v13; // [esp+4h] [ebp-3Ch]
  unsigned __int64 v14; // [esp+4h] [ebp-3Ch]
  unsigned __int64 v15; // [esp+4h] [ebp-3Ch]
  _BYTE v16[10]; // [esp+16h] [ebp-2Ah] BYREF
  _DWORD v17[8]; // [esp+20h] [ebp-20h] BYREF

  v17[0] = __readgsdword(0x14u);
  if ( *(_DWORD *)(a2 + 4) )
    v2 = *(char **)a2;
  else
    v2 = (char *)&dword_80DDFD8;
  sub_80A6780(a1, v2);
  v3 = *(_DWORD *)(a2 + 12);
  v4 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), _mm_cvtsi32_si128(0));
  v13 = 0;
  if ( v3 != -1 )
    v13 = _mm_add_epi64(v4, _mm_load_si128((const __m128i *)&xmmword_80DE200)).m128i_u64[0];
  v5 = sub_80CDDF0(v16, (unsigned int)v17, v13, HIDWORD(v13)) - v16;
  if ( v5 )
    sub_80B7DF0(v5, a1, v16);
  v6 = *(_DWORD *)(a2 + 16);
  v7 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v6), _mm_cvtsi32_si128(0));
  v14 = 0;
  if ( v6 != -1 )
    v14 = _mm_add_epi64(v7, _mm_load_si128((const __m128i *)&xmmword_80DE200)).m128i_u64[0];
  v8 = sub_80CDDF0(v16, (unsigned int)v17, v14, HIDWORD(v14)) - v16;
  if ( v8 )
    sub_80B7DF0(v8, a1, v16);
  v9 = *(_DWORD *)(a2 + 20);
  v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v9), _mm_cvtsi32_si128(0));
  v15 = 0;
  if ( v9 != -1 )
    v15 = _mm_add_epi64(v10, _mm_load_si128((const __m128i *)&xmmword_80DE200)).m128i_u64[0];
  v11 = sub_80CDDF0(v16, (unsigned int)v17, v15, HIDWORD(v15)) - v16;
  if ( v11 )
    sub_80B7DF0(v11, a1, v16);
  result = v17[0] - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 80DE200: using guessed type __int128 xmmword_80DE200;
