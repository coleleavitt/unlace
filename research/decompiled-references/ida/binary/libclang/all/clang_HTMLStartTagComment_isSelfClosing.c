_BOOL8 __fastcall clang_HTMLStartTagComment_isSelfClosing(__int64 a1)
{
  _BOOL8 result; // rax

  result = 0;
  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 12) == 4 )
      return (*(_BYTE *)(a1 + 13) & 4) != 0;
  }
  return result;
}

