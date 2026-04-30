char __fastcall sub_17A860(__int64 a1, int a2)
{
  char result; // al

  result = sub_52F7D0();
  if ( !result )
  {
    result = a2 == 67 || a2 == 64;
    if ( !result )
      return (unsigned int)(a2 - 68) <= 4;
  }
  return result;
}
