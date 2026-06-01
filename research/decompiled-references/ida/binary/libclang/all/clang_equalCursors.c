__int64 __fastcall clang_equalCursors(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8,
        __int128 a9,
        __int128 a10)
{
  __int64 v10; // rdx
  __int64 v11; // rax
  __m128i v12; // xmm0
  __m128i v14; // [rsp+0h] [rbp-48h]
  __m128i v15; // [rsp+20h] [rbp-28h]
  __m128i v16; // [rsp+30h] [rbp-18h]

  if ( (unsigned int)(a7 - 1) <= 0x26 || (unsigned int)(a7 - 600) <= 4 )
    v10 = 0;
  else
    v10 = a8;
  if ( (unsigned int)(a9 - 1) <= 0x26 || (unsigned int)(a9 - 600) <= 4 )
    v11 = 0;
  else
    v11 = a10;
  *(_QWORD *)&a8 = v10;
  *(_QWORD *)&a10 = v11;
  v15 = _mm_loadu_si128((const __m128i *)&a9);
  v16 = _mm_loadu_si128((const __m128i *)&a10);
  v14 = _mm_loadu_si128((const __m128i *)&a7);
  v12 = _mm_loadu_si128((const __m128i *)&a8);
  return (unsigned __int8)sub_63A900(
                            a1,
                            a2,
                            v10,
                            (int)a9 - 1,
                            a5,
                            a6,
                            v14.m128i_i32[0],
                            v14.m128i_i64[1],
                            v12.m128i_i64[0],
                            v12.m128i_i64[1],
                            v15.m128i_i32[0],
                            v15.m128i_i64[1],
                            v16.m128i_i64[0],
                            v16.m128i_i64[1]);
}

