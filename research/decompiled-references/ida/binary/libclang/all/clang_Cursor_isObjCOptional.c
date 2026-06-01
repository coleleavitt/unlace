_BOOL8 __fastcall clang_Cursor_isObjCOptional(int a1, int a2, __int64 a3, int a4, int a5, int a6, __int128 a7)
{
  _BYTE *v8; // rax
  char v9; // dl
  __m128i v10; // [rsp+0h] [rbp-28h]

  if ( (unsigned int)(a7 - 600) > 4 && (unsigned int)(a7 - 1) > 0x26 )
    return 0;
  v10 = _mm_loadu_si128((const __m128i *)&a7);
  v8 = (_BYTE *)sub_63A250(a1, a2, (int)a7 - 600, a4, a5, a6, v10.m128i_i32[0], v10.m128i_i64[1]);
  v9 = v8[28] & 0x7F;
  if ( v9 == 73 )
    return (v8[76] & 3) == 2;
  if ( v9 != 16 )
    return 0;
  return (v8[59] & 3) == 2;
}

