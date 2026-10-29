bool __fastcall sub_12CCB60(int a1)
{
  bool result; // al

  result = 1;
  if ( (a1 & 0xFFFFFFFB) != 0x39 )
    return (unsigned int)(a1 - 63) <= 1;
  return result;
}
