/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B7EC0
// Address: 0x080B7EC0

//----- (080B7EC0) --------------------------------------------------------
void *__cdecl sub_80B7EC0(char **a1, char *s)
{
  unsigned int v2; // edx
  __m128i v3; // xmm0
  size_t v4; // eax
  unsigned int v5; // ecx
  __m128i v6; // xmm0
  size_t v7; // eax
  unsigned int v8; // ecx
  __m128i v9; // xmm0
  size_t v10; // eax
  size_t v11; // eax
  char *v12; // eax
  char *v13; // eax
  unsigned __int64 v15; // [esp+0h] [ebp-4Ch]
  unsigned __int64 v16; // [esp+10h] [ebp-3Ch]
  unsigned __int64 v17; // [esp+10h] [ebp-3Ch]
  _BYTE v18[5]; // [esp+22h] [ebp-2Ah] BYREF
  _BYTE v19[5]; // [esp+27h] [ebp-25h] BYREF
  _DWORD v20[8]; // [esp+2Ch] [ebp-20h] BYREF

  v20[0] = __readgsdword(0x14u);
  v2 = *((_DWORD *)s + 8);
  v3 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v2), _mm_cvtsi32_si128(0));
  v15 = 0;
  if ( v2 != -1 )
    v15 = _mm_add_epi64(v3, _mm_load_si128((const __m128i *)&xmmword_80DE200)).m128i_u64[0];
  v4 = sub_80CDDF0(v18, (unsigned int)v20, v15, HIDWORD(v15)) - v18;
  if ( v4 )
    sub_80B7DF0(v4, a1, v18);
  v5 = *(_DWORD *)s - 16 * *((_DWORD *)s + 8);
  v6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(0));
  v16 = 0;
  if ( v5 != -1 )
    v16 = _mm_add_epi64(v6, _mm_load_si128((const __m128i *)&xmmword_80DE200)).m128i_u64[0];
  v7 = sub_80CDDF0(v18, (unsigned int)v20, v16, HIDWORD(v16)) - v18;
  if ( v7 )
    sub_80B7DF0(v7, a1, v18);
  v8 = *((_DWORD *)s + 1) - *(_DWORD *)s;
  v9 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v8), _mm_cvtsi32_si128(0));
  v17 = 0;
  if ( v8 != -1 )
    v17 = _mm_add_epi64(v9, _mm_load_si128((const __m128i *)&xmmword_80DE200)).m128i_u64[0];
  v10 = sub_80CDDF0(v18, (unsigned int)v20, v17, HIDWORD(v17)) - v18;
  if ( v10 )
    sub_80B7DF0(v10, a1, v18);
  v11 = sub_80CDC90(v18, (unsigned int)v19, (unsigned __int8)s[37] | (16 * (unsigned __int8)s[36])) - v18;
  if ( v11 )
    sub_80B7DF0(v11, a1, v18);
  v12 = (char *)&dword_80DDFD8;
  if ( *((_DWORD *)s + 3) )
    v12 = *((char **)s + 2);
  sub_80A6780(a1, v12);
  v13 = (char *)&dword_80DDFD8;
  if ( *((_DWORD *)s + 6) )
    v13 = *((char **)s + 5);
  if ( v20[0] != __readgsdword(0x14u) )
    sub_80D7AB0();
  return sub_80A6780(a1, v13);
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 80DE200: using guessed type __int128 xmmword_80DE200;
