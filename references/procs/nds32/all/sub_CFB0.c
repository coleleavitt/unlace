char __fastcall sub_CFB0(unsigned __int16 a1)
{
  char result; // al

  if ( a1 > 0x14u )
    return 2;
  result = 0;
  if ( ((1LL << a1) & 0x70706) == 0 )
    return (((1LL << a1) & 0x181818) == 0) + 1;
  return result;
}
