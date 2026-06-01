_BOOL8 __fastcall clang_ParamCommandComment_isParamIndexValid(__int64 a1)
{
  _BOOL8 result; // rax

  result = 0;
  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 12) == 12 )
      return *(_DWORD *)(a1 + 40) != -1;
  }
  return result;
}

