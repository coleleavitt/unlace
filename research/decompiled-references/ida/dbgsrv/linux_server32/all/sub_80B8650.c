/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B8650
// Address: 0x080B8650

//----- (080B8650) --------------------------------------------------------
void *__cdecl sub_80B8650(char **a1, char *s)
{
  size_t v2; // eax
  size_t v3; // eax
  unsigned int v4; // edx
  __m128i v5; // xmm0
  size_t v6; // eax
  char *v7; // eax
  unsigned __int64 v9; // [esp+4h] [ebp-3Ch]
  _BYTE v10[5]; // [esp+16h] [ebp-2Ah] BYREF
  _BYTE v11[5]; // [esp+1Bh] [ebp-25h] BYREF
  unsigned int v12[8]; // [esp+20h] [ebp-20h] BYREF

  v12[0] = __readgsdword(0x14u);
  v2 = sub_80CDC90(v10, (unsigned int)v11, *(_DWORD *)s) - v10;
  if ( v2 )
    sub_80B7DF0(v2, a1, v10);
  v3 = sub_80CDC90(v10, (unsigned int)v11, (unsigned __int8)s[4]) - v10;
  if ( v3 )
    sub_80B7DF0(v3, a1, v10);
  v4 = *((_DWORD *)s + 2);
  v5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v4), _mm_cvtsi32_si128(0));
  v9 = 0;
  if ( v4 != -1 )
    v9 = _mm_add_epi64(v5, _mm_load_si128((const __m128i *)&xmmword_80DE200)).m128i_u64[0];
  v6 = sub_80CDDF0(v10, (unsigned int)v12, v9, HIDWORD(v9)) - v10;
  if ( v6 )
    sub_80B7DF0(v6, a1, v10);
  v7 = (char *)&dword_80DDFD8;
  if ( *((_DWORD *)s + 4) )
    v7 = *((char **)s + 3);
  if ( v12[0] != __readgsdword(0x14u) )
    sub_80D7AB0();
  return sub_80A6780(a1, v7);
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 80DE200: using guessed type __int128 xmmword_80DE200;
