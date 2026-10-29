char *__fastcall sub_23880(__int64 a1, unsigned int *a2, char *a3)
{
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  char *result; // rax

  v3 = *a2;
  if ( *(_BYTE *)(a1 + 350) )
  {
    v4 = v3 & 0xFFF00000;
    result = "V850E1";
    if ( v4 != 0x10000000 )
    {
      if ( v4 > 0x10000000 )
      {
        result = "rh850";
        if ( v4 == 0x20000000 )
          return "V850";
      }
      else if ( v4 != 0x4000000 )
      {
        if ( v4 > 0x4000000 )
        {
          result = "rh850";
          if ( v4 == 100663296 )
            return "V850e2m";
        }
        else
        {
          result = "V850e2m";
          if ( ((v4 - 0x400000) & 0xFFB00000) != 0 && v4 != 0x2000000 )
            return "rh850";
        }
      }
    }
  }
  else
  {
    result = "V850E1";
    if ( v3 <= 0xFFFFFFF )
      result = a3;
    *a2 = v3 & 0xFFFFFFF;
  }
  return result;
}

