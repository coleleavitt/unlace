bool __fastcall sub_6782A0(int a1)
{
  bool result; // al

  result = 1;
  if ( (a1 & 0x10000) != 0 )
    return (a1 & 0x600) == 0;
  return result;
}

