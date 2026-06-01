__int64 __fastcall clang_getCursorUnaryOperatorKind(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v9; // rax
  __m128i v10; // [rsp+0h] [rbp-28h]

  if ( (unsigned int)(a7 - 100) <= 0x38
    && (v10 = _mm_loadu_si128((const __m128i *)&a7),
        v9 = sub_63A260(
               a1,
               a2,
               a3,
               a4,
               a5,
               a6,
               v10.m128i_i32[0],
               v10.m128i_i32[2],
               _mm_loadu_si128((const __m128i *)&a8).m128i_i64[0]),
        (*(_WORD *)v9 & 0x1FF) == 4) )
  {
    return (unsigned int)(*(_BYTE *)(v9 + 2) >> 3) + 1;
  }
  else
  {
    return 0;
  }
}

