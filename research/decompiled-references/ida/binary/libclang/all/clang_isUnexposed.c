_BOOL8 __fastcall clang_isUnexposed(unsigned int a1)
{
  _BOOL8 result; // rax

  if ( a1 == 200 )
    return 1;
  if ( a1 > 0xC8 )
    return a1 == 400;
  result = 1;
  if ( a1 != 1 )
    return a1 == 100;
  return result;
}

