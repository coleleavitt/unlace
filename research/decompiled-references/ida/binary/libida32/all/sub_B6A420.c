bool __fastcall sub_B6A420(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( (*(_BYTE *)(a1 + 8) & 0x7F) == 0x18 )
    return (*(_BYTE *)(a1 + 9) & 0x20) != 0;
  return result;
}

