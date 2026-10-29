__int64 __fastcall clang_Cursor_getModule(int a1, int a2, int a3, int a4, int a5, int a6, __int128 a7)
{
  __int64 v8; // rax
  __m128i v9; // [rsp+0h] [rbp-28h]

  if ( (_DWORD)a7 == 600
    && (v9 = _mm_loadu_si128((const __m128i *)&a7),
        (v8 = sub_63A250(a1, a2, a3, a4, a5, a6, v9.m128i_i32[0], v9.m128i_i64[1])) != 0)
    && (*(_BYTE *)(v8 + 28) & 0x7F) == 0x50 )
  {
    return *(_QWORD *)(v8 + 40);
  }
  else
  {
    return 0;
  }
}

