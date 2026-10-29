__int64 __fastcall clang_Cursor_isFunctionInlined(int a1, int a2, int a3, int a4, int a5, int a6, __int128 a7)
{
  __int64 v7; // rax
  unsigned int v8; // ecx
  __m128i v10; // [rsp+0h] [rbp-28h]

  v10 = _mm_loadu_si128((const __m128i *)&a7);
  v7 = sub_63A250(a1, a2, a3, a4, a5, a6, v10.m128i_i32[0], v10.m128i_i64[1]);
  if ( !v7 )
    return 0;
  v8 = 0;
  if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 32 <= 5 )
    return *(_BYTE *)(v7 + 82) & 1;
  return v8;
}

