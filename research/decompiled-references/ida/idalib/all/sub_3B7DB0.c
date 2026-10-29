bool __fastcall sub_3B7DB0(__int16 a1)
{
  bool result; // al

  result = 1;
  if ( (a1 & 0x400) == 0 )
    return (a1 & 0xC000) == 0x4000;
  return result;
}
