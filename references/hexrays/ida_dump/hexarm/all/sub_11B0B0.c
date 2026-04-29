bool __fastcall sub_11B0B0(__int16 a1)
{
  bool result; // al

  result = 1;
  if ( (a1 & 0xC000) != 0x4000 )
    return (~a1 & 0x600) == 0;
  return result;
}
