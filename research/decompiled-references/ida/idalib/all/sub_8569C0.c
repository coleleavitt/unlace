unsigned __int8 *__fastcall sub_8569C0(unsigned __int8 *a1, int a2)
{
  unsigned __int8 *result; // rax
  __int64 v3; // rdx
  char v4; // cl
  __int64 v5; // rdx
  int v6; // ecx

  result = a1;
LABEL_2:
  while ( 2 )
  {
    v3 = *result;
    if ( (unsigned __int8)v3 > 0x98u )
    {
      while ( 1 )
      {
        v4 = v3 + 100;
        if ( (unsigned __int8)(v3 + 100) > 0x10u )
          break;
        if ( ((1LL << v4) & 0x155) != 0 )
        {
          result += result[1] + byte_23C3B20[v3];
          goto LABEL_2;
        }
        if ( ((1LL << v4) & 0x18000) == 0 )
        {
          if ( (_BYTE)v3 != 0xA9 )
            return result;
          result += (unsigned __int16)__ROL2__(*((_WORD *)result + 1), 8) + 4;
          goto LABEL_2;
        }
LABEL_7:
        if ( !a2 )
          return result;
LABEL_8:
        result += byte_23C3B20[v3];
LABEL_9:
        v3 = *result;
        if ( (unsigned __int8)v3 <= 0x98u )
          goto LABEL_3;
      }
    }
    else
    {
LABEL_3:
      if ( (unsigned __int8)v3 > 0x76u )
      {
        switch ( (char)v3 )
        {
          case 119:
          case -109:
          case -108:
          case -107:
          case -106:
          case -105:
          case -104:
            goto LABEL_8;
          case 120:
            result += (unsigned __int16)__ROL2__(*(_WORD *)(result + 5), 8);
            continue;
          case -127:
          case -126:
          case -125:
          case -123:
            if ( !a2 )
              return result;
            do
            {
              result += (unsigned __int16)__ROL2__(*(_WORD *)(result + 1), 8);
              v5 = *result;
            }
            while ( (_BYTE)v5 == 121 );
            result += byte_23C3B20[v5];
            goto LABEL_9;
          case -115:
          case -110:
            if ( result[3] != 0x97 )
              return result;
            v6 = (unsigned __int16)__ROL2__(*(_WORD *)(result + 1), 8);
            if ( result[(unsigned __int16)v6] != 122 )
              return result;
            result += (unsigned int)(v6 + 3);
            continue;
          default:
            return result;
        }
      }
      if ( (unsigned __int8)(v3 - 4) <= 1u )
        goto LABEL_7;
    }
    return result;
  }
}
