char *__fastcall sub_9E1490(char a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "+";
      break;
    case 1:
      result = "-";
      break;
    case 2:
      result = (char *)"*";
      break;
    case 3:
      result = "/";
      break;
    case 4:
      result = "%";
      break;
    case 5:
      result = "<<";
      break;
    case 6:
      result = ">>";
      break;
    case 7:
      result = "&";
      break;
    case 8:
      result = "^";
      break;
    case 9:
      result = "|";
      break;
    case 10:
      result = "==";
      break;
    case 11:
      result = "!=";
      break;
    case 12:
      result = "<";
      break;
    case 13:
      result = "<=";
      break;
    case 14:
      result = "<=>";
      break;
    case 15:
      result = (char *)"&&";
      break;
    case 16:
      result = "||";
      break;
    default:
      result = nullptr;
      break;
  }
  return result;
}
