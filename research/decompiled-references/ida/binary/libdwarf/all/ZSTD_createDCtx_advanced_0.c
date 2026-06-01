__m128i *__fastcall ZSTD_createDCtx_advanced_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __m128i *v8; // rsi
  __m128i v9; // xmm0

  v8 = nullptr;
  if ( ((_QWORD)a7 == 0) == (*((_QWORD *)&a7 + 1) == 0) )
  {
    if ( (_QWORD)a7 )
      v8 = (__m128i *)((__int64 (__fastcall *)(__int64, void *))a7)(a8, &loc_176E8);
    else
      v8 = (__m128i *)malloc((size_t)&loc_176E8);
    if ( v8 )
    {
      v9 = _mm_loadu_si128((const __m128i *)&a7);
      v8[1884].m128i_i64[0] = a8;
      v8[1883] = v9;
      sub_616F0((__int64)v8);
    }
  }
  return v8;
}

