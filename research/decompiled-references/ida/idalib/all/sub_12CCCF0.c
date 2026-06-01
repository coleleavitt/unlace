bool __fastcall sub_12CCCF0(int a1)
{
  bool result; // al

  result = 0;
  if ( a1 != 58 )
    return *((_DWORD *)&off_2BAF280 + 6 * (unsigned int)(a1 - 1) + 4) != 0;
  return result;
}
