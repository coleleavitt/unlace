/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B8A50
// Address: 0x080B8A50

//----- (080B8A50) --------------------------------------------------------
void *__cdecl sub_80B8A50(char **a1, char *s)
{
  size_t v2; // eax
  size_t v3; // eax
  size_t v4; // eax
  unsigned int v5; // edx
  __m128i v6; // xmm0
  size_t v7; // eax
  size_t v8; // eax
  size_t v9; // eax
  void *result; // eax
  char *v11; // eax
  unsigned int v12; // edx
  __m128i v13; // xmm0
  size_t v14; // eax
  unsigned int v15; // edx
  __m128i v16; // xmm0
  unsigned __int64 v17; // [esp+4h] [ebp-4Ch]
  unsigned __int64 v18; // [esp+14h] [ebp-3Ch]
  unsigned __int64 v19; // [esp+14h] [ebp-3Ch]
  _BYTE v20[5]; // [esp+26h] [ebp-2Ah] BYREF
  _BYTE v21[5]; // [esp+2Bh] [ebp-25h] BYREF
  _DWORD v22[8]; // [esp+30h] [ebp-20h] BYREF

  v22[0] = __readgsdword(0x14u);
  v2 = sub_80CDC90(v20, (unsigned int)v21, *((_DWORD *)s + 4) & 0xFFFFFFF) - v20;
  if ( v2 )
    sub_80B7DF0(v2, a1, v20);
  v3 = sub_80CDC90(v20, (unsigned int)v21, *(_DWORD *)s) - v20;
  if ( v3 )
    sub_80B7DF0(v3, a1, v20);
  v4 = sub_80CDC90(v20, (unsigned int)v21, *((_DWORD *)s + 1)) - v20;
  if ( v4 )
    sub_80B7DF0(v4, a1, v20);
  v5 = *((_DWORD *)s + 2);
  v6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(0));
  v17 = 0;
  if ( v5 != -1 )
    v17 = _mm_add_epi64(v6, _mm_load_si128((const __m128i *)&xmmword_80DE200)).m128i_u64[0];
  v7 = sub_80CDDF0(v20, (unsigned int)v22, v17, HIDWORD(v17)) - v20;
  if ( v7 )
    sub_80B7DF0(v7, a1, v20);
  v8 = sub_80CDC90(v20, (unsigned int)v21, (unsigned __int8)s[12]) - v20;
  if ( v8 )
    sub_80B7DF0(v8, a1, v20);
  switch ( *((_DWORD *)s + 4) & 0xFFFFFFF )
  {
    case 1:
    case 8:
    case 0xB:
      if ( v22[0] != __readgsdword(0x14u) )
        goto LABEL_34;
      return (void *)sub_80B83D0(a1, (int)(s + 20));
    case 2:
    case 4:
      v9 = sub_80CDC90(v20, (unsigned int)v21, *((_DWORD *)s + 5)) - v20;
      if ( v9 )
        goto LABEL_15;
      goto LABEL_16;
    case 3:
    case 9:
    case 0xA:
      v11 = (char *)&dword_80DDFD8;
      if ( *((_DWORD *)s + 6) )
        v11 = *((char **)s + 5);
      if ( v22[0] != __readgsdword(0x14u) )
        goto LABEL_34;
      return sub_80A6780(a1, v11);
    case 5:
      v12 = *((_DWORD *)s + 5);
      v13 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(0));
      v18 = 0;
      if ( v12 != -1 )
        v18 = _mm_add_epi64(v13, _mm_load_si128((const __m128i *)&xmmword_80DE200)).m128i_u64[0];
      v14 = sub_80CDDF0(v20, (unsigned int)v22, v18, HIDWORD(v18)) - v20;
      if ( v14 )
        sub_80B7DF0(v14, a1, v20);
      v15 = *((_DWORD *)s + 6);
      v16 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(0));
      v19 = 0;
      if ( v15 != -1 )
        v19 = _mm_add_epi64(v16, _mm_load_si128((const __m128i *)&xmmword_80DE200)).m128i_u64[0];
      v9 = sub_80CDDF0(v20, (unsigned int)v22, v19, HIDWORD(v19)) - v20;
      if ( v9 )
LABEL_15:
        sub_80B7DF0(v9, a1, v20);
      goto LABEL_16;
    case 7:
      if ( v22[0] != __readgsdword(0x14u) )
        goto LABEL_34;
      result = sub_80B8650(a1, s + 20);
      break;
    default:
LABEL_16:
      result = (void *)(v22[0] - __readgsdword(0x14u));
      if ( result )
LABEL_34:
        sub_80D7AB0();
      return result;
  }
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 80DE200: using guessed type __int128 xmmword_80DE200;
