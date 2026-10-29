unsigned __int64 __fastcall sub_1934300(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  unsigned __int64 result; // rax

  result = sub_1907C70(a1, a2, a7, a8, a3, a4, a5, a6);
  if ( result != 1 )
  {
    result &= ~1uLL;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8) != 0 )
      return sub_1934250(a1, result, *(double *)a7.m128i_i64, a8);
  }
  return result;
}
