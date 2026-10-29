bool __fastcall sub_C11880(unsigned int a1)
{
  bool result; // al

  result = a1 == 10 || a1 <= 1;
  if ( result || ((1LL << a1) & 0x4E3) == 0 )
    return a1 - 8 > 2;
  return result;
}
