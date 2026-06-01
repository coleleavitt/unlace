__int64 __fastcall clang_getCursorVisibility(int a1, int a2, __int64 a3, int a4, int a5, int a6, __int128 a7)
{
  __int64 v8; // rax
  unsigned __int8 v9; // al
  __m128i v10; // [rsp+0h] [rbp-28h]

  if ( (unsigned int)(a7 - 1) > 0x26 && (unsigned int)(a7 - 600) > 4 )
    return 0;
  v10 = _mm_loadu_si128((const __m128i *)&a7);
  v8 = sub_63A250(a1, a2, (int)a7 - 1, a4, a5, a6, v10.m128i_i32[0], v10.m128i_i64[1]);
  if ( !v8 )
    return 0;
  if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 16 > 0x3E )
    return 0;
  v9 = ((unsigned __int8)sub_790090(v8) >> 3) & 3;
  if ( v9 == 3 )
    return 0;
  else
    return (unsigned int)v9 + 1;
}

