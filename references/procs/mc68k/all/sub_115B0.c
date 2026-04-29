_BOOL8 __fastcall sub_115B0(_BYTE *a1)
{
  _BOOL8 result; // rax
  char *v2; // rdx
  char v3; // al
  unsigned __int8 v4; // dl

  result = 0;
  if ( (*a1 & 0x30) == 0 && !a1[2] && a1[3] <= 9u )
  {
    v2 = a1 + 4;
    do
    {
      v3 = *v2;
      if ( (unsigned __int8)*v2 <= 0x9Fu )
      {
        ++v2;
        if ( (v3 & 0xFu) <= 9 )
          continue;
      }
      return 0;
    }
    while ( v2 != a1 + 12 );
    if ( (*a1 & 0xF) != 0 )
    {
      result = 0;
      if ( (*a1 & 0xFu) > 9 )
        return result;
      v4 = a1[1];
    }
    else
    {
      v4 = a1[1];
      if ( !v4 )
        return 1;
    }
    result = 0;
    if ( v4 <= 0x9Fu )
      return (v4 & 0xFu) <= 9;
  }
  return result;
}
