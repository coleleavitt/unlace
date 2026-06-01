__int64 __fastcall sub_FFF790(int a1, char a2, char a3)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 28:
      result = 8;
      break;
    case 29:
      result = 5;
      break;
    case 30:
    case 32:
    case 35:
    case 39:
    case 44:
    case 46:
    case 50:
    case 55:
    case 57:
    case 60:
    case 64:
      result = 2;
      break;
    case 31:
    case 43:
    case 45:
      result = 14;
      break;
    case 33:
    case 36:
      result = 13;
      break;
    case 42:
    case 65:
      result = 9;
      break;
    case 47:
    case 49:
    case 54:
      result = 10;
      break;
    case 48:
      goto LABEL_4;
    case 51:
      result = 11;
      break;
    case 52:
      result = a2 != 0 ? 0xA : 0;
      break;
    case 53:
      if ( a3 != 1 || (result = 0, a2) )
LABEL_4:
        result = 12;
      break;
    case 56:
      result = 7;
      break;
    case 58:
      result = 6;
      break;
    case 59:
      result = 4;
      break;
    case 61:
      result = 3;
      break;
    case 66:
      result = 1;
      break;
    case 70:
    case 71:
      result = 15;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
