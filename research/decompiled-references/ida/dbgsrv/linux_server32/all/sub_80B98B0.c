/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B98B0
// Address: 0x080B98B0

//----- (080B98B0) --------------------------------------------------------
unsigned int __cdecl sub_80B98B0(char **a1, int a2, int a3, int a4)
{
  unsigned int i; // esi
  int v6; // edx
  unsigned int result; // eax
  size_t v8; // eax
  size_t v9; // eax
  size_t v10; // ecx
  size_t v11; // eax
  unsigned __int64 v12; // [esp+Ch] [ebp-3Ch]
  _BYTE v13[5]; // [esp+1Eh] [ebp-2Ah] BYREF
  _BYTE v14[5]; // [esp+23h] [ebp-25h] BYREF
  unsigned int v15[8]; // [esp+28h] [ebp-20h] BYREF

  v15[0] = __readgsdword(0x14u);
  if ( a3 > 0 )
  {
    for ( i = 0; i != a3; ++i )
    {
      if ( a4 )
      {
        while ( 1 )
        {
          v6 = *(unsigned __int8 *)(a4 + (i >> 3));
          if ( _bittest(&v6, i & 7) )
            break;
          ++i;
          a2 += 16;
          if ( a3 == i )
            goto LABEL_6;
        }
      }
      v8 = sub_80CDC90(v13, (unsigned int)v14, *(_DWORD *)a2 + 3) - v13;
      if ( v8 )
        sub_80B7DF0(v8, a1, v13);
      if ( *(_DWORD *)a2 == -2 )
      {
        v12 = _mm_add_epi64(
                _mm_loadl_epi64((const __m128i *)(a2 + 4)),
                _mm_load_si128((const __m128i *)&xmmword_80DE200)).m128i_u64[0];
        v11 = sub_80CDDF0(v13, (unsigned int)v15, v12, HIDWORD(v12)) - v13;
        if ( v11 )
          sub_80B7DF0(v11, a1, v13);
      }
      else if ( *(_DWORD *)a2 != -3 )
      {
        v9 = sub_80CDC90(v13, (unsigned int)v14, *(_DWORD *)(a2 + 8)) - v13;
        if ( v9 )
          sub_80B7DF0(v9, a1, v13);
        v10 = *(_DWORD *)(a2 + 8);
        if ( v10 )
          sub_80B7DF0(v10, a1, *(const void **)(a2 + 4));
      }
      a2 += 16;
    }
  }
LABEL_6:
  result = v15[0] - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 80DE200: using guessed type __int128 xmmword_80DE200;
