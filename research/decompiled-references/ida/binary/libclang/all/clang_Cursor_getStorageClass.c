__int64 __fastcall clang_Cursor_getStorageClass(int a1, int a2, int a3, int a4, int a5, int a6, __int128 a7)
{
  _BYTE *v7; // rax
  int v8; // edx
  __int64 v9; // rax
  unsigned int v10; // ecx
  __m128i v12; // [rsp+0h] [rbp-28h]

  v12 = _mm_loadu_si128((const __m128i *)&a7);
  v7 = (_BYTE *)sub_63A250(a1, a2, a3, a4, a5, a6, v12.m128i_i32[0], v12.m128i_i64[1]);
  if ( v7 )
  {
    v8 = v7[28] & 0x7F;
    if ( (unsigned int)(v8 - 32) > 5 )
    {
      v10 = 0;
      if ( (unsigned int)(v8 - 38) > 6 )
        return v10;
      v9 = v7[96] & 7;
    }
    else
    {
      v9 = v7[81] >> 5;
    }
    return *((unsigned int *)qword_3C89DE0 + v9);
  }
  return 0;
}

