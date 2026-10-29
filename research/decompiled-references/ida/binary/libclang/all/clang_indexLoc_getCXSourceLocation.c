__m128i *__fastcall clang_indexLoc_getCXSourceLocation(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int32 a9)
{
  __int64 v9; // rdx

  if ( a9 && a7 )
  {
    v9 = *(_QWORD *)(a7 + 8);
    a1[1].m128i_i32[0] = a9;
    *a1 = _mm_loadu_si128((const __m128i *)(v9 + 2152));
    return a1;
  }
  else
  {
    clang_getNullLocation(a1);
    return a1;
  }
}

