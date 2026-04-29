__int64 __fastcall sub_71FC0(int a1, char a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    if ( a1 == 22 )
      return 2;
    if ( a1 > 22 )
    {
      result = 3;
      if ( a1 == 23 )
        return result;
    }
    else
    {
      result = 0;
      if ( a1 == 20 )
        return result;
      result = 1;
      if ( a1 == 21 )
        return result;
    }
  }
  switch ( a1 )
  {
    case 16:
      result = 0;
      break;
    case 17:
      result = 1;
      break;
    case 18:
      return 2;
    case 19:
      result = 3;
      break;
    case 24:
      result = 4;
      break;
    case 25:
      result = 5;
      break;
    case 26:
      result = 6;
      break;
    case 27:
      result = 7;
      break;
    default:
      if ( a1 <= 44 )
      {
        result = 44;
        if ( a1 < 35 )
          result = (unsigned int)a1;
      }
      else
      {
        switch ( a1 )
        {
          case 56:
          case 57:
          case 58:
          case 59:
          case 60:
          case 61:
          case 62:
          case 63:
            result = (unsigned int)(a1 + 77);
            break;
          case 64:
          case 65:
          case 66:
          case 67:
          case 68:
          case 69:
          case 70:
          case 71:
          case 72:
          case 73:
          case 74:
          case 75:
          case 76:
          case 77:
          case 78:
          case 79:
            result = (unsigned int)(a1 + 69);
            break;
          case 81:
          case 82:
          case 83:
          case 84:
          case 85:
          case 86:
          case 87:
          case 88:
          case 89:
          case 90:
          case 91:
          case 92:
          case 93:
          case 94:
          case 95:
          case 96:
            result = (unsigned int)(a1 + 52);
            break;
          case 101:
          case 102:
          case 103:
          case 104:
          case 105:
          case 106:
          case 107:
          case 108:
          case 109:
          case 110:
          case 111:
          case 112:
          case 113:
          case 114:
          case 115:
          case 116:
            result = (unsigned int)(a1 + 48);
            break;
          case 117:
          case 118:
          case 119:
          case 120:
          case 121:
          case 122:
          case 123:
          case 124:
          case 125:
          case 126:
          case 127:
          case 128:
          case 129:
          case 130:
          case 131:
          case 132:
            result = (unsigned int)(a1 + 32);
            break;
          default:
            result = (unsigned int)a1;
            break;
        }
      }
      break;
  }
  return result;
}
