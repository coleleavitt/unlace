__m128i *__fastcall ZSTD_createDDict_advanced(
        const void *a1,
        unsigned __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __m128i *v10; // rbx
  __m128i v11; // xmm0

  if ( ((_QWORD)a7 == 0) == (*((_QWORD *)&a7 + 1) == 0) )
  {
    v10 = (_QWORD)a7 ? (__m128i *)((__int64 (__fastcall *)(__int64, __int64))a7)(a8, 27352) : (__m128i *)malloc(0x6AD8u);
    if ( v10 )
    {
      v11 = _mm_loadu_si128((const __m128i *)&a7);
      v10[1709].m128i_i64[0] = a8;
      v10[1708] = v11;
      if ( (unsigned __int64)sub_7CDD0((__int64)v10, a1, a2, a3, a4) <= 0xFFFFFFFFFFFFFF88LL )
        return v10;
      ZSTD_freeDDict(v10);
    }
  }
  return nullptr;
}

