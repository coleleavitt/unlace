__int64 __fastcall clang_getCXXAccessSpecifier(int a1, int a2, int a3, int a4, int a5, int a6, __int128 a7)
{
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // edx
  unsigned __int8 v11; // dl
  __m128i v12; // [rsp+0h] [rbp-28h]
  __m128i v13; // [rsp+0h] [rbp-28h]

  v7 = a7;
  if ( (_DWORD)a7 == 39 || (a1 = a7, (unsigned int)clang_isDeclaration((unsigned int)a7)) )
  {
    v12 = _mm_loadu_si128((const __m128i *)&a7);
    v8 = (*(_BYTE *)(sub_63A250(a1, a2, a3, a4, a5, a6, v12.m128i_i32[0], v12.m128i_i64[1]) + 29) >> 5) & 3;
  }
  else
  {
    if ( v7 != 44 )
      return 0;
    v13 = _mm_loadu_si128((const __m128i *)&a7);
    v11 = *(_BYTE *)(sub_639EB0(a1, a2, a3, a4, a5, a6, v13.m128i_i32[0], v13.m128i_i64[1]) + 12);
    v8 = (v11 >> 2) & 3;
    if ( (~v11 & 0xC) == 0 )
    {
      if ( (v11 & 2) == 0 )
        return 1;
      return 3;
    }
  }
  if ( v8 == 2 )
    return 3;
  if ( v8 == 3 )
    return 0;
  v9 = 2;
  if ( v8 != 1 )
    return 1;
  return v9;
}

