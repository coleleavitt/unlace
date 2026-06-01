/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B8F60
// Address: 0x080B8F60

//----- (080B8F60) --------------------------------------------------------
unsigned int __cdecl sub_80B8F60(char **a1, _DWORD *a2)
{
  unsigned int v2; // edx
  size_t v3; // eax
  int v4; // ebp
  int v5; // edi
  __m128i v6; // xmm0
  size_t v7; // eax
  unsigned int v8; // edx
  __m128i v9; // xmm0
  size_t v10; // eax
  unsigned int v11; // edx
  __m128i v12; // xmm0
  size_t v13; // eax
  size_t v14; // eax
  unsigned int result; // eax
  unsigned __int64 v16; // [esp+4h] [ebp-4Ch]
  unsigned __int64 v17; // [esp+4h] [ebp-4Ch]
  unsigned __int64 v18; // [esp+4h] [ebp-4Ch]
  int v19; // [esp+18h] [ebp-38h]
  _BYTE v20[5]; // [esp+26h] [ebp-2Ah] BYREF
  _BYTE v21[5]; // [esp+2Bh] [ebp-25h] BYREF
  _DWORD v22[8]; // [esp+30h] [ebp-20h] BYREF

  v2 = a2[1];
  v22[0] = __readgsdword(0x14u);
  v19 = v2;
  v3 = sub_80CDC90(v20, (unsigned int)v21, v2) - v20;
  if ( v3 )
    sub_80B7DF0(v3, a1, v20);
  v4 = 0;
  if ( v19 > 0 )
  {
    do
    {
      v5 = *a2 + 16 * v4;
      v6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)v5), _mm_cvtsi32_si128(0));
      v16 = 0;
      if ( *(_DWORD *)v5 != -1 )
        v16 = _mm_add_epi64(v6, _mm_load_si128((const __m128i *)&xmmword_80DE200)).m128i_u64[0];
      v7 = sub_80CDDF0(v20, (unsigned int)v22, v16, HIDWORD(v16)) - v20;
      if ( v7 )
        sub_80B7DF0(v7, a1, v20);
      v8 = *(_DWORD *)(v5 + 4);
      v9 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v8), _mm_cvtsi32_si128(0));
      v17 = 0;
      if ( v8 != -1 )
        v17 = _mm_add_epi64(v9, _mm_load_si128((const __m128i *)&xmmword_80DE200)).m128i_u64[0];
      v10 = sub_80CDDF0(v20, (unsigned int)v22, v17, HIDWORD(v17)) - v20;
      if ( v10 )
        sub_80B7DF0(v10, a1, v20);
      v11 = *(_DWORD *)(v5 + 8);
      v12 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(0));
      v18 = 0;
      if ( v11 != -1 )
        v18 = _mm_add_epi64(v12, _mm_load_si128((const __m128i *)&xmmword_80DE200)).m128i_u64[0];
      v13 = sub_80CDDF0(v20, (unsigned int)v22, v18, HIDWORD(v18)) - v20;
      if ( v13 )
        sub_80B7DF0(v13, a1, v20);
      v14 = sub_80CDC90(v20, (unsigned int)v21, *(unsigned __int8 *)(v5 + 12)) - v20;
      if ( v14 )
        sub_80B7DF0(v14, a1, v20);
      ++v4;
    }
    while ( v19 != v4 );
  }
  result = v22[0] - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 80DE200: using guessed type __int128 xmmword_80DE200;
