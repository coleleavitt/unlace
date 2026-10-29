bool __fastcall sub_12CCBE0(unsigned int a1)
{
  bool result; // al

  result = 0;
  if ( a1 <= 0x2C )
    return ((1LL << a1) & 0x1B0000000180LL) != 0;
  return result;
}
