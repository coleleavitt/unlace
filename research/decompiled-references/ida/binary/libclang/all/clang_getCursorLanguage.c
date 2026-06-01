__int64 __fastcall clang_getCursorLanguage(int a1, int a2, __int64 a3, int a4, int a5, int a6, __int128 a7)
{
  unsigned int v7; // edx
  __int64 v9; // rax
  unsigned __int8 v10; // cl
  __int64 v11; // rax
  __m128i v12; // [rsp+0h] [rbp-28h]

  v7 = a7 - 1;
  if ( (unsigned int)(a7 - 1) <= 0x26 || (v7 = 0, (unsigned int)(a7 - 600) <= 4) )
  {
    v12 = _mm_loadu_si128((const __m128i *)&a7);
    v9 = sub_63A250(a1, a2, v7, a4, a5, a6, v12.m128i_i32[0], v12.m128i_i64[1]);
    if ( v9 && (v10 = *(_BYTE *)(v9 + 28) & 0x7F, v10 <= 0x53u) )
    {
      if ( v10 <= 0x15u )
      {
        if ( v10 == 12 )
        {
          return 2;
        }
        else if ( v10 <= 0xCu )
        {
          v7 = 3;
          if ( v10 != 4 )
            return 2 * (unsigned int)(v10 == 9) + 1;
        }
        else
        {
          return (unsigned int)(((v10 + 112) & 0x7Fu) < 6) + 1;
        }
      }
      else
      {
        v7 = 3;
        v11 = 1LL << (v10 + 106);
        if ( (v11 & 0x312198B920807811LL) == 0 )
          return (unsigned int)((v11 & 0x1804000C200000LL) != 0) + 1;
      }
    }
    else
    {
      return 1;
    }
  }
  return v7;
}

