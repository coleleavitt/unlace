bool __fastcall sub_67D8C0(int a1)
{
  bool result; // al

  result = 0;
  if ( (a1 & 0x600) == 0x400 )
    return (a1 & 0xF0000000) == 1610612736;
  return result;
}
