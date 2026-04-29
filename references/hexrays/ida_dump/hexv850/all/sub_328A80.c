bool __fastcall sub_328A80(char a1)
{
  bool result; // al

  result = 1;
  if ( a1 != 95 )
  {
    result = 0;
    if ( (unsigned int)a1 <= 0x7F )
      return isalpha(a1) != 0;
  }
  return result;
}
