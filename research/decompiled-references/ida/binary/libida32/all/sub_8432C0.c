unsigned __int8 *__fastcall sub_8432C0(unsigned __int8 *a1, __int64 a2, int a3)
{
  unsigned __int8 *result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8

  result = a1;
  while ( 2 )
  {
    v5 = *result;
    if ( (_BYTE)v5 )
    {
LABEL_3:
      switch ( (char)v5 )
      {
        case 112:
        case 113:
          result += (unsigned __int16)__ROL2__(*(_WORD *)(result + 1), 8);
          continue;
        case 120:
          result += (unsigned __int16)__ROL2__(*(_WORD *)(result + 5), 8);
          continue;
        case 126:
        case 127:
          if ( a3 < 0 )
            return result;
          goto LABEL_12;
        case -117:
        case -116:
        case -112:
        case -111:
          if ( (unsigned __int16)__ROL2__(*(_WORD *)(result + 3), 8) != a3 )
            goto LABEL_12;
          return result;
        default:
          if ( (unsigned __int8)v5 <= 0x60u )
          {
            if ( (unsigned __int8)v5 > 0x5Du )
              goto LABEL_8;
            if ( (unsigned __int8)v5 <= 0x5Au )
            {
              if ( (unsigned __int8)v5 <= 0x54u )
                goto LABEL_12;
LABEL_8:
              if ( (unsigned __int8)(result[1] - 15) < 2u )
                result += 2;
              goto LABEL_12;
            }
LABEL_23:
            if ( (unsigned __int8)(result[3] - 15) < 2u )
              result += 2;
            goto LABEL_12;
          }
          if ( (_BYTE)v5 == 97 )
            goto LABEL_23;
          if ( (unsigned __int8)(v5 + 100) <= 8u )
          {
            v6 = 341;
            if ( _bittest64(&v6, (unsigned int)(v5 + 100)) )
              result += result[1];
          }
LABEL_12:
          result += byte_239F9C0[v5];
          v5 = *result;
          if ( !(_BYTE)v5 )
            return nullptr;
          goto LABEL_3;
      }
    }
    return nullptr;
  }
}

