__int64 __fastcall clang_Cursor_getObjCPropertyAttributes(int a1, int a2, int a3, int a4, int a5, int a6, __int128 a7)
{
  __int64 result; // rax
  __int16 v8; // dx
  unsigned int v9; // ecx
  __m128i v10; // [rsp+0h] [rbp-28h]

  result = 0;
  if ( (_DWORD)a7 == 14 )
  {
    v10 = _mm_loadu_si128((const __m128i *)&a7);
    v8 = *(_WORD *)(sub_63A250(a1, a2, a3, a4, a5, a6, v10.m128i_i32[0], v10.m128i_i64[1]) + 74);
    result = v8 & 0xFFF;
    v9 = v8 & 0xFFF;
    if ( (v8 & 0x4000) != 0 )
    {
      BYTE1(v9) = BYTE1(result) | 0x10;
      return v9;
    }
  }
  return result;
}

