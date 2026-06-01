bool __fastcall sub_12CCC80(unsigned int a1)
{
  bool result; // al

  result = 0;
  if ( a1 <= 0x33 )
    return ((1LL << a1) & 0x8001FF81F1FC0LL) != 0;
  return result;
}
