__int64 __fastcall sub_80AE90(int a1, unsigned __int8 a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 5:
      result = 6;
      break;
    case 6:
      result = 7;
      break;
    case 7:
      result = 5;
      break;
    case 8:
    case 9:
    case 10:
    case 12:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
      result = 13;
      break;
    case 11:
      result = 4;
      break;
    case 13:
      result = 8;
      break;
    case 14:
      result = 9;
      break;
    case 37:
      result = 2 * (a2 ^ 1u);
      break;
    case 38:
      result = a2 == 0 ? 3 : 1;
      break;
  }
  return result;
}

