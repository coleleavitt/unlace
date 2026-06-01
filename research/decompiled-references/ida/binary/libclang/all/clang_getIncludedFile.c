__int64 __fastcall clang_getIncludedFile(int a1, int a2, int a3, int a4, int a5, int a6, __int128 a7)
{
  __int64 result; // rax
  __m128i v8; // [rsp+0h] [rbp-28h]

  result = 0;
  if ( (_DWORD)a7 == 503 )
  {
    v8 = _mm_loadu_si128((const __m128i *)&a7);
    return *(_QWORD *)(sub_63A110(a1, a2, a3, a4, a5, a6, v8.m128i_i32[0], v8.m128i_i64[1]) + 40);
  }
  return result;
}

