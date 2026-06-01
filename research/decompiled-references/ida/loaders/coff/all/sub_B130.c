char *__fastcall sub_B130(__int64 a1, __int64 a2)
{
  char *result; // rax
  int v3; // edx

  if ( (unsigned __int16)a2 > 0x200u )
  {
    result = "h8300a";
    if ( (_WORD)a2 == 0x8301 )
      return result;
    if ( (unsigned __int16)a2 > 0x8301u )
    {
      result = "h8500";
      if ( (_WORD)a2 == 0x8500 )
        return result;
      if ( (unsigned __int16)a2 <= 0x8500u )
      {
        result = "h8s300a";
        if ( (_WORD)a2 != 0x8302 )
        {
          result = "z380";
          if ( (_WORD)a2 != 0x8380 )
            return nullptr;
        }
      }
      else
      {
        result = "tms320c2";
        if ( (_WORD)a2 == 0x8C25 )
          return result;
        if ( (unsigned __int16)a2 <= 0x8C25u )
        {
          result = "metapc";
          if ( (_WORD)a2 != 0x8664 )
            return nullptr;
        }
        else
        {
          result = "tms320c5";
          if ( (_WORD)a2 == 0x8C50 )
            return result;
          if ( (unsigned __int16)a2 <= 0x8C4Fu )
            return nullptr;
          result = "arm";
          if ( (_WORD)a2 != 0xA641 && (_WORD)a2 != 0xAA64 )
            return nullptr;
        }
      }
    }
    else
    {
      result = "ad2106x";
      if ( (_WORD)a2 != 21020 )
      {
        if ( (unsigned __int16)a2 <= 0x521Cu )
        {
          result = "sh4";
          if ( (_WORD)a2 != 1360 )
          {
            if ( (unsigned __int16)a2 <= 0x550u )
            {
              result = "sh4b";
              if ( (_WORD)a2 != 1280 )
                return nullptr;
            }
            else
            {
              result = "arm";
              if ( (_WORD)a2 != 2560 )
              {
                result = "ebc";
                if ( (_WORD)a2 != 3772 )
                  return nullptr;
              }
            }
          }
        }
        else
        {
          result = "z180";
          if ( (_WORD)a2 != 0x8180 )
          {
            result = "h8300";
            if ( (_WORD)a2 != 0x8300 )
            {
              result = "z8";
              if ( (_WORD)a2 != 0x8000 )
                return nullptr;
            }
          }
        }
      }
    }
  }
  else
  {
    if ( (unsigned __int16)a2 <= 0x1D7u )
    {
      if ( (unsigned __int16)a2 <= 0x1C4u )
      {
        if ( (unsigned __int16)a2 > 0x13Fu )
        {
          LOWORD(a2) = a2 - 320;
          switch ( a2 )
          {
            case 0LL:
            case 35LL:
              return "mipsb";
            case 2LL:
            case 34LL:
            case 38LL:
              return "mipsl";
            case 12LL:
              return "metapc";
            case 13LL:
              return "860xp";
            case 16LL:
              return "68040";
            case 32LL:
              result = "mipsb";
              if ( !*(_BYTE *)(a1 + 382) )
                goto LABEL_54;
              return result;
            case 33LL:
LABEL_54:
              result = "i960l";
              break;
            case 67LL:
            case 68LL:
            case 69LL:
              result = "alphal";
              break;
            case 98LL:
              result = "sh3";
              break;
            case 102LL:
              result = "sh4";
              break;
            case 128LL:
            case 130LL:
              result = "arm";
              break;
            case 132LL:
              result = "arm:armv7";
              break;
            default:
              return nullptr;
          }
          return result;
        }
        if ( (_WORD)a2 == 147 || (unsigned __int16)(a2 - 193) <= 1u )
        {
          v3 = *(_DWORD *)(a1 + 24);
          result = "tms320c6";
          if ( v3 != 6 )
          {
            result = "tms32055";
            if ( v3 != 55 )
            {
              result = "ARM";
              if ( v3 != 470 )
              {
                result = "msp430";
                if ( v3 != 430 )
                {
                  result = "tms32054";
                  if ( v3 != 54 )
                  {
                    result = "tms320c3";
                    if ( v3 != 3 )
                    {
                      result = "tms32028";
                      if ( v3 != 28 )
                        return nullptr;
                    }
                  }
                }
              }
            }
          }
          return result;
        }
      }
      return nullptr;
    }
    result = "ppc";
    if ( ((1LL << ((unsigned __int8)a2 + 40)) & 0x838080A1) == 0 )
    {
      result = "ppc:vmx128";
      if ( (_WORD)a2 != 498 )
      {
        result = "ia64l";
        if ( (_WORD)a2 != 512 )
          return (char *)((1LL << ((unsigned __int8)a2 + 40)) & 0x838080A1LL);
      }
    }
  }
  return result;
}

