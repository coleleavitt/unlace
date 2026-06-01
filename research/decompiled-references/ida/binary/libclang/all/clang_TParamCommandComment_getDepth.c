__int64 __fastcall clang_TParamCommandComment_getDepth(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 12) == 11 )
      return *(unsigned int *)(a1 + 48);
  }
  return result;
}

