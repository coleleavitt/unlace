__int64 __fastcall sub_42B180(__int64 a1)
{
  if ( (a1 & 0x400) == 0 )
    return 0;
  if ( (a1 & 0x600) == 0x400 && (a1 & 0xF0000000) == 0x60000000 )
    return 1;
  return is_enum(a1, 15);
}
