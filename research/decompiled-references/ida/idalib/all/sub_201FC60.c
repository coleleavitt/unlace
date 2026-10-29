char *__fastcall sub_201FC60(char a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "PR";
      break;
    case 1:
      result = "RO";
      break;
    case 2:
      result = "DB";
      break;
    case 3:
      result = "TC";
      break;
    case 4:
      result = "UA";
      break;
    case 5:
      result = "RW";
      break;
    case 6:
      result = "GL";
      break;
    case 7:
      result = "XO";
      break;
    case 8:
      result = (char *)"SV";
      break;
    case 9:
      result = (char *)"BS";
      break;
    case 10:
      result = "DS";
      break;
    case 11:
      result = (char *)"UC";
      break;
    case 12:
      result = "TI";
      break;
    case 13:
      result = "TB";
      break;
    case 15:
      result = "TC0";
      break;
    case 16:
      result = (char *)"TD";
      break;
    case 17:
      result = "SV64";
      break;
    case 18:
      result = "SV3264";
      break;
    case 20:
      result = "TL";
      break;
    case 21:
      result = "UL";
      break;
    case 22:
      result = "TE";
      break;
    default:
      result = "Unknown";
      break;
  }
  return result;
}
