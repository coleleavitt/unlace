bool __fastcall sub_64450(char *a1)
{
  unsigned int v2; // edi
  bool result; // al
  int v4; // edx

  v2 = *a1;
  if ( (_BYTE)v2 == 47 )
  {
    result = 1;
    v2 = 47;
    if ( !a1[1] )
      return result;
  }
  else
  {
    result = 0;
    if ( v2 > 0x7F )
      return result;
  }
  v4 = isalpha(v2);
  result = 0;
  if ( v4 && a1[1] == 58 && a1[2] == 47 )
    return a1[3] == 0;
  return result;
}

