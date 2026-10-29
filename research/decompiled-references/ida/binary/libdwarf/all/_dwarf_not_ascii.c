__int64 __fastcall dwarf_not_ascii(_BYTE *a1)
{
  while ( 1 )
  {
    if ( !*a1 )
      return 0;
    if ( (unsigned __int8)(*a1 - 32) > 0x5Eu )
      break;
    ++a1;
  }
  return 1;
}

