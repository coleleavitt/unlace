__int64 __fastcall clang_InlineCommandComment_getNumArgs(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 12) == 3 )
      return *(unsigned int *)(a1 + 24);
  }
  return result;
}

