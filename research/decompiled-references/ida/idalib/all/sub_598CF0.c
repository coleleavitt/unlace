bool __fastcall sub_598CF0(__int16 a1)
{
  bool result; // al

  result = 1;
  if ( (a1 & 0xD400) == 0 )
  {
    result = 0;
    if ( (a1 & 0x100) != 0 )
      return (_BYTE)a1 != 0;
  }
  return result;
}
