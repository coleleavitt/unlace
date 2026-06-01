__m128i *__fastcall clang_getCursorPrintingPolicy(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  __m128i *v8; // rbx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __m128i v14; // [rsp+0h] [rbp-28h]
  __m128i v15; // [rsp+10h] [rbp-18h]

  v8 = nullptr;
  if ( !(unsigned int)clang_Cursor_isNull(
                        a1,
                        a2,
                        a3,
                        a4,
                        a5,
                        a6,
                        (__int128)_mm_loadu_si128((const __m128i *)&a7),
                        (__int128)_mm_loadu_si128((const __m128i *)&a8)) )
  {
    v8 = (__m128i *)operator new(0x10u);
    v14 = _mm_loadu_si128((const __m128i *)&a7);
    v15 = _mm_loadu_si128((const __m128i *)&a8);
    *v8 = _mm_loadu_si128((const __m128i *)(sub_63A2D0(
                                              16,
                                              a2,
                                              v9,
                                              v10,
                                              v11,
                                              v12,
                                              v14.m128i_i32[0],
                                              v14.m128i_i32[2],
                                              v15.m128i_i32[0],
                                              v15.m128i_i64[1])
                                          + 17304));
  }
  return v8;
}

