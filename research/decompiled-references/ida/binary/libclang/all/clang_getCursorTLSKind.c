__int64 __fastcall clang_getCursorTLSKind(int a1, __int64 a2, int a3, int a4, int a5, int a6, __int128 a7)
{
  __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rdx
  int v10; // eax
  __m128i v12; // [rsp+0h] [rbp-28h]

  v12 = _mm_loadu_si128((const __m128i *)&a7);
  v7 = sub_63A250(a1, a2, a3, a4, a5, a6, v12.m128i_i32[0], v12.m128i_i64[1]);
  v8 = 0;
  v9 = (*(_BYTE *)(v7 + 28) & 0x7Fu) - 38;
  if ( (unsigned int)v9 <= 6 )
  {
    v10 = sub_77B3E0(v7, a2, v9, 0);
    v8 = 2;
    if ( v10 != 1 )
      return v10 == 2;
  }
  return v8;
}

