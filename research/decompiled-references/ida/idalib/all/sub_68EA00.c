bool __fastcall sub_68EA00(int a1)
{
  bool result; // al

  result = 1;
  if ( (a1 & 0x600) != 0 )
  {
    result = 0;
    if ( (a1 & 0x600) == 0x400 )
      return (((a1 & 0xF0000000) - 1342177280LL) & 0xFFFFFFFFE0000000LL) == 0;
  }
  return result;
}
