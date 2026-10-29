__int64 __fastcall clang_Cursor_isNull(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __m128i v13; // [rsp+40h] [rbp-28h] BYREF
  __m128i v14; // [rsp+50h] [rbp-18h] BYREF

  clang_getNullCursor(&v13);
  return clang_equalCursors(
           (int)&v13,
           a2,
           v8,
           v9,
           v10,
           v11,
           (__int128)_mm_loadu_si128((const __m128i *)&a7),
           (__int128)_mm_loadu_si128((const __m128i *)&a8),
           (__int128)_mm_load_si128(&v13),
           (__int128)_mm_load_si128(&v14));
}

