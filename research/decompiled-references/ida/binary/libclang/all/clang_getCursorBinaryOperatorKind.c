__int64 __fastcall clang_getCursorBinaryOperatorKind(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  _WORD *v9; // rax
  unsigned __int16 v10; // dx
  __m128i v11; // [rsp+0h] [rbp-48h]
  _DWORD v12[10]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)(a7 - 100) > 0x38 )
    return 0;
  v11 = _mm_loadu_si128((const __m128i *)&a7);
  v9 = (_WORD *)sub_63A260(
                  a1,
                  a2,
                  a3,
                  a4,
                  a5,
                  a6,
                  v11.m128i_i32[0],
                  v11.m128i_i32[2],
                  _mm_loadu_si128((const __m128i *)&a8).m128i_i64[0]);
  v10 = *v9 & 0x1FF;
  if ( v10 > 0x76u )
  {
    if ( v10 <= 0x78u )
      return ((v9[1] >> 3) & 0x3Fu) + 1;
    return 0;
  }
  if ( v10 != 102 )
    return 0;
  sub_8C11F0(v12, v9);
  return (unsigned int)(v12[0] + 1);
}

