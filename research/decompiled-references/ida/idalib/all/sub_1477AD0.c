bool __fastcall sub_1477AD0(_BYTE *a1)
{
  bool result; // al
  char v2; // dl

  result = 1;
  if ( !(*a1 >> 6) )
  {
    v2 = a1[1];
    if ( (v2 & 3) == 0 )
      return (v2 & 0xC) != 0;
  }
  return result;
}
