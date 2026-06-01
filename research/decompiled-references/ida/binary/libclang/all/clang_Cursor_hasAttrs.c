__int64 __fastcall clang_Cursor_hasAttrs(int a1, int a2, int a3, int a4, int a5, int a6, __int128 a7)
{
  __int64 v7; // rax
  __m128i v9; // [rsp+0h] [rbp-28h]

  v9 = _mm_loadu_si128((const __m128i *)&a7);
  v7 = sub_63A250(a1, a2, a3, a4, a5, a6, v9.m128i_i32[0], v9.m128i_i64[1]);
  if ( v7 )
    return *(_BYTE *)(v7 + 29) & 1;
  else
    return 0;
}

