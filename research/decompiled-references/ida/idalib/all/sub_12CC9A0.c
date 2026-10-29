bool __fastcall sub_12CC9A0(int a1)
{
  bool result; // al

  result = 0;
  if ( (*((_BYTE *)&unk_2BAF294 + 24 * (unsigned int)(a1 - 1)) & 2) != 0 )
    return (unsigned int)(a1 - 35) > 1;
  return result;
}
