bool __fastcall sub_11EBA0(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( (*(_BYTE *)(a1 + 4) & 0x10) != 0 )
  {
    if ( *(_BYTE *)(a1 + 48) )
      return (unsigned int)(*(_DWORD *)a1 - 1) > 1;
  }
  return result;
}
