__int64 __fastcall clang_Cursor_isVariadic(int a1, int a2, __int64 a3, int a4, int a5, int a6, __int128 a7)
{
  __int64 v8; // rdi
  __m128i v9; // [rsp+0h] [rbp-28h]

  if ( (unsigned int)(a7 - 600) > 4 && (unsigned int)(a7 - 1) > 0x26 )
    return 0;
  v9 = _mm_loadu_si128((const __m128i *)&a7);
  v8 = sub_63A250(a1, a2, (int)a7 - 600, a4, a5, a6, v9.m128i_i32[0], v9.m128i_i64[1]);
  if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 32 <= 5 )
    return (unsigned __int8)sub_77D8C0(v8);
  if ( (*(_BYTE *)(v8 + 28) & 0x7F) != 0x10 )
    return 0;
  return (*(_BYTE *)(v8 + 58) & 4) != 0;
}

