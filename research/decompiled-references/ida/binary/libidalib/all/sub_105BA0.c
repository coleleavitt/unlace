char __fastcall sub_105BA0(__int64 a1, int a2)
{
  char result; // al

  result = sub_199E20();
  if ( !result )
  {
    result = a2 == 67 || a2 == 64;
    if ( !result )
      return (unsigned int)(a2 - 68) <= 4;
  }
  return result;
}

