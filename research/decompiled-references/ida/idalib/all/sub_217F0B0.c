__int64 __fastcall sub_217F0B0(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int16 v2; // dx
  __int64 result; // rax
  char v4; // al
  char v5; // al
  char v6; // al
  int v7; // edx

  v1 = *(_QWORD *)(a1 + 56);
  v2 = *(_WORD *)(v1 + 18);
  if ( v2 == 83 )
    return 7;
  if ( v2 <= 0x53u )
  {
    if ( v2 == 18 )
      return 31;
    if ( v2 > 0x12u )
    {
      if ( v2 == 22 )
        return 32;
      if ( v2 <= 0x16u )
      {
        result = 22;
        if ( v2 != 20 )
        {
          result = 24;
          if ( v2 != 21 )
            return 0;
        }
      }
      else
      {
        result = 30;
        if ( v2 != 43 )
        {
          result = 38;
          if ( v2 != 62 )
            return v2 == 40;
        }
      }
      return result;
    }
    if ( v2 == 4 )
      return 15;
    if ( v2 <= 4u )
    {
      result = 31;
      if ( v2 != 2 )
      {
        result = 37;
        if ( v2 != 3 )
          return 0;
      }
      return result;
    }
    if ( v2 == 6 )
      return 37;
    if ( v2 == 8 )
    {
      v5 = *(_BYTE *)(v1 + 4);
      if ( v5 == 1 )
        return 17;
      if ( v5 == 2 )
        return 19;
      goto LABEL_68;
    }
    return 0;
  }
  if ( v2 == 224 )
  {
    v7 = *(unsigned __int8 *)(v1 + 36);
    result = 25;
    if ( (unsigned int)(v7 - 1) > 0xF )
      return (unsigned int)(v7 - 32) < 0x40 ? 0x1A : 0;
    return result;
  }
  if ( v2 <= 0xE0u )
  {
    if ( v2 == 164 )
      return 12;
    if ( v2 <= 0xA4u )
    {
      result = 40;
      if ( v2 != 94 )
      {
        result = 20;
        if ( v2 != 105 )
          return 0;
      }
      return result;
    }
    result = 3;
    if ( v2 == 183 )
      return result;
    if ( v2 == 190 )
      return (unsigned int)(*(_BYTE *)(v1 + 4) != 1) + 41;
    return 0;
  }
  if ( v2 == 247 )
    return 8;
  if ( v2 > 0xF7u )
  {
    if ( v2 == 252 )
      return 10;
    if ( v2 != 258 )
    {
      result = 59;
      if ( v2 != 251 )
        return 0;
      return result;
    }
    v4 = *(_BYTE *)(v1 + 4);
    if ( v4 == 1 )
      return 13;
    if ( v4 == 2 )
      return 14;
LABEL_68:
    sub_2221C70("Invalid ELFCLASS!", 1);
  }
  if ( v2 == 243 )
  {
    v6 = *(_BYTE *)(v1 + 4);
    if ( v6 == 1 )
      return 27;
    if ( v6 == 2 )
      return 28;
    goto LABEL_68;
  }
  result = 54;
  if ( v2 != 244 )
    return 0;
  return result;
}
