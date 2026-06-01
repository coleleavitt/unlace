__int64 __fastcall sub_217F8A0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int16 v2; // dx
  __int64 result; // rax
  char v4; // al
  char v5; // al
  char v6; // al

  v1 = *(_QWORD *)(a1 + 56);
  v2 = __ROL2__(*(_WORD *)(v1 + 18), 8);
  if ( v2 == 62 )
    return 38;
  if ( v2 <= 0x3Eu )
  {
    if ( v2 == 18 )
      return 29;
    if ( v2 <= 0x12u )
    {
      if ( v2 == 4 )
        return 15;
      if ( v2 > 4u )
      {
        if ( v2 == 6 )
          return 37;
        if ( v2 != 8 )
          return 0;
        v5 = *(_BYTE *)(v1 + 4);
        if ( v5 == 1 )
          return 16;
        if ( v5 == 2 )
          return 18;
        goto LABEL_67;
      }
      result = 29;
      if ( v2 != 2 )
      {
        result = 37;
        if ( v2 != 3 )
          return 0;
      }
    }
    else if ( v2 == 22 )
    {
      return 32;
    }
    else if ( v2 <= 0x16u )
    {
      result = 21;
      if ( v2 != 20 )
      {
        result = 23;
        if ( v2 != 21 )
          return 0;
      }
    }
    else
    {
      result = 1;
      if ( v2 != 40 )
      {
        result = 30;
        if ( v2 != 43 )
          return 0;
      }
    }
  }
  else
  {
    if ( v2 == 190 )
      return (unsigned int)(*(_BYTE *)(v1 + 4) != 1) + 41;
    if ( v2 <= 0xBEu )
    {
      if ( v2 == 105 )
      {
        return 20;
      }
      else if ( v2 <= 0x69u )
      {
        result = 7;
        if ( v2 != 83 )
        {
          result = 40;
          if ( v2 != 94 )
            return 0;
        }
      }
      else
      {
        result = 12;
        if ( v2 != 164 )
          return 4 * (unsigned int)(v2 == 183);
      }
    }
    else
    {
      if ( v2 == 247 )
        return 9;
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
LABEL_67:
        sub_2221C70("Invalid ELFCLASS!", 1);
      }
      if ( v2 == 243 )
      {
        v6 = *(_BYTE *)(v1 + 4);
        if ( v6 == 1 )
          return 27;
        if ( v6 == 2 )
          return 28;
        goto LABEL_67;
      }
      result = 54;
      if ( v2 != 244 )
        return 0;
    }
  }
  return result;
}
