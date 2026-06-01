__int64 __fastcall clang_getCanonicalType(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __m128i v8; // xmm0

  if ( (_DWORD)a7 )
  {
    if ( (*((_QWORD *)&a7 + 1) & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
      sub_690DD0(a1, *(_QWORD *)&byte_8[*((_QWORD *)&a7 + 1) & 0xFFFFFFFFFFFFFFF0LL] | BYTE8(a7) & 7, a8);
    else
      sub_690DD0(a1, 0, a8);
    return a1;
  }
  else
  {
    v8 = _mm_loadu_si128((const __m128i *)&a7);
    *(_QWORD *)(a1 + 16) = a8;
    *(__m128i *)a1 = v8;
    return a1;
  }
}

