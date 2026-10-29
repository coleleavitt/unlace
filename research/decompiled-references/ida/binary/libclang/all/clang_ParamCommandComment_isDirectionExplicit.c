__int64 __fastcall clang_ParamCommandComment_isDirectionExplicit(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 12) == 12 )
      return (unsigned int)*(char *)(a1 + 15) >> 31;
  }
  return result;
}

