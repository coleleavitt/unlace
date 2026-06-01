bool __fastcall sub_12CCC10(unsigned int a1)
{
  bool result; // al

  result = 0;
  if ( a1 <= 0x24 )
    return ((1LL << a1) & 0x1E1FDFFFFELL) != 0;
  return result;
}
