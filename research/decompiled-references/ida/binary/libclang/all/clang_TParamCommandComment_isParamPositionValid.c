_BOOL8 __fastcall clang_TParamCommandComment_isParamPositionValid(__int64 a1)
{
  _BOOL8 result; // rax

  result = 0;
  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 12) == 11 )
      return *(_QWORD *)(a1 + 48) != 0;
  }
  return result;
}

