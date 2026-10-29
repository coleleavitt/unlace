char __fastcall sub_102B960(_DWORD *a1)
{
  int v1; // edx
  char result; // al
  int v3; // ecx
  bool v4; // cl

  v1 = a1[65];
  if ( v1 == 15 )
  {
    v3 = a1[66];
    result = 1;
    if ( (unsigned int)(v3 - 27) > 1 && v3 )
    {
      if ( a1[62] != 38 )
        return 0;
      v4 = a1[64] == 3;
      return v4 && v1 == 25;
    }
  }
  else
  {
    result = 0;
    if ( a1[62] == 38 )
    {
      v4 = a1[64] == 3;
      result = v4 && v1 == 24;
      if ( !result )
        return v4 && v1 == 25;
    }
  }
  return result;
}
