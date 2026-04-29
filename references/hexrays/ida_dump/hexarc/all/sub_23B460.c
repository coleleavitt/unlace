bool __fastcall sub_23B460(_BYTE *a1)
{
  bool result; // al
  char v2; // dl
  _BYTE *v3; // rcx
  char v4; // dl

  result = 0;
  if ( *a1 == 95 && a1[1] == 95 )
  {
    v2 = a1[2];
    v3 = a1 + 2;
    if ( v2 == 83 )
    {
      v2 = a1[3];
      v3 = a1 + 3;
    }
    result = 0;
    if ( v2 == 80 && v3[1] == 65 && v3[2] == 73 && v3[3] == 82 )
    {
      v4 = v3[4];
      if ( v4 == 49 )
      {
        if ( v3[5] != 54 )
          return result;
        goto LABEL_14;
      }
      if ( v4 == 51 )
      {
        if ( v3[5] != 50 )
          return result;
        goto LABEL_14;
      }
      if ( v4 == 54 && v3[5] == 52 )
      {
LABEL_14:
        result = 0;
        if ( v3[6] == 95 )
          return v3[7] == 95;
      }
    }
  }
  return result;
}
