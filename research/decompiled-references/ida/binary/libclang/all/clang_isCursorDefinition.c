__int64 __fastcall clang_isCursorDefinition(
        double a1,
        __m128i a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        __int128 a9,
        __int128 a10)
{
  int v10; // edx
  __m128i v12; // xmm0
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __m128i v17; // [rsp+0h] [rbp-68h]
  __m128i v18; // [rsp+20h] [rbp-48h]
  __m128i v19; // [rsp+30h] [rbp-38h]
  __m128i v20; // [rsp+40h] [rbp-28h] BYREF
  __m128i v21; // [rsp+50h] [rbp-18h] BYREF

  v10 = a9 - 1;
  if ( (unsigned int)(a9 - 1) > 0x26 )
  {
    v10 = 0;
    if ( (unsigned int)(a9 - 600) > 4 )
      return 0;
  }
  clang_getCursorDefinition(&v20, a4, v10, a6, a7, a8, _mm_loadu_si128((const __m128i *)&a10), a2);
  v18 = _mm_loadu_si128((const __m128i *)&a9);
  v19 = _mm_loadu_si128((const __m128i *)&a10);
  v17 = _mm_load_si128(&v20);
  v12 = _mm_load_si128(&v21);
  return (unsigned __int8)sub_63A900(
                            (unsigned int)&v20,
                            a4,
                            v13,
                            v14,
                            v15,
                            v16,
                            v17.m128i_i32[0],
                            v17.m128i_i64[1],
                            v12.m128i_i64[0],
                            v12.m128i_i64[1],
                            v18.m128i_i32[0],
                            v18.m128i_i64[1],
                            v19.m128i_i64[0],
                            v19.m128i_i64[1]);
}

