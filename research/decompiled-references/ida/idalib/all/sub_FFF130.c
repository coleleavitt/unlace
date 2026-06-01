bool __fastcall sub_FFF130(int a1)
{
  bool result; // al
  int v2; // eax

  result = 0;
  if ( a1 != 35 )
  {
    v2 = sub_20ED490();
    result = v2 == 1 || v2 == 4;
    if ( result )
    {
      switch ( a1 )
      {
        case 2:
        case 4:
        case 5:
        case 9:
        case 10:
        case 11:
        case 17:
        case 36:
        case 42:
        case 65:
        case 92:
        case 93:
        case 109:
          goto LABEL_10;
        default:
          if ( ((a1 - 102) & 0xFFFFFFFD) != 0 )
          {
            if ( (unsigned int)(a1 - 39) <= 0x1E )
              result = ((0x40800001uLL >> ((unsigned __int8)a1 - 39)) & 1) == 0;
          }
          else
          {
LABEL_10:
            result = 0;
          }
          break;
      }
    }
    else
    {
      return (unsigned int)(a1 - 45) <= 1;
    }
  }
  return result;
}
