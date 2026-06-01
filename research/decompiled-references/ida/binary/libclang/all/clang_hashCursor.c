__int64 __fastcall clang_hashCursor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  _BOOL8 v8; // rax
  unsigned __int64 v9; // rax

  v8 = 1;
  if ( (unsigned int)(a7 - 100) > 0x38 )
    v8 = (unsigned int)(a7 - 200) <= 0x83;
  v9 = 0xBF58476D1CE4E5B9LL
     * (((unsigned __int64)(unsigned int)(37 * a7) << 32)
      | ((unsigned int)*(&a8 + v8) >> 9) ^ ((unsigned int)*(&a8 + v8) >> 4));
  return (unsigned int)(v9 >> 31) ^ (unsigned int)v9;
}

