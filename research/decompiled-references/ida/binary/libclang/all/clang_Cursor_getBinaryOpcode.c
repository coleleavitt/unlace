__int64 __fastcall clang_Cursor_getBinaryOpcode(
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
  __int16 v10; // ax
  __m128i v11; // [rsp+0h] [rbp-28h]

  if ( (unsigned int)(a7 - 114) > 1 )
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
  if ( ((*v9 + 393) & 0x1FFu) > 1 )
    return 0;
  v10 = (v9[1] >> 3) & 0x3F;
  if ( (unsigned __int8)v10 > 0x20u )
    return 0;
  else
    return (unsigned int)(unsigned __int8)v10 + 1;
}

