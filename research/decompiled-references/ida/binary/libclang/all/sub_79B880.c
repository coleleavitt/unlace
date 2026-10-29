_BOOL8 __fastcall sub_79B880(__int64 a1)
{
  _BOOL8 result; // rax

  result = 0;
  if ( (*(_BYTE *)(a1 + 8) & 0x7F) == 0x16 )
    return (*(_BYTE *)(a1 + 9) & 0x20) != 0;
  return result;
}

