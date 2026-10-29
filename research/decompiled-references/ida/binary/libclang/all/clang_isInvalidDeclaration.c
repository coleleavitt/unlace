__int64 __fastcall clang_isInvalidDeclaration(int a1, int a2, __int64 a3, int a4, int a5, int a6, __int128 a7)
{
  __int64 v8; // rax
  __m128i v9; // [rsp+0h] [rbp-28h]

  if ( ((unsigned int)(a7 - 1) <= 0x26 || (unsigned int)(a7 - 600) <= 4)
    && (v9 = _mm_loadu_si128((const __m128i *)&a7),
        (v8 = sub_63A250(a1, a2, (int)a7 - 1, a4, a5, a6, v9.m128i_i32[0], v9.m128i_i64[1])) != 0) )
  {
    return (unsigned int)*(char *)(v8 + 28) >> 31;
  }
  else
  {
    return 0;
  }
}

