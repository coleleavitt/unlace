char *__fastcall sub_FBBBC0(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
    case 46:
      result = nullptr;
      break;
    case 1:
      result = (char *)"new";
      break;
    case 2:
      result = "delete";
      break;
    case 3:
      result = "new[]";
      break;
    case 4:
      result = "delete[]";
      break;
    case 5:
      result = "+";
      break;
    case 6:
      result = "-";
      break;
    case 7:
      result = (char *)"*";
      break;
    case 8:
      result = "/";
      break;
    case 9:
      result = "%";
      break;
    case 10:
      result = "^";
      break;
    case 11:
      result = "&";
      break;
    case 12:
      result = "|";
      break;
    case 13:
      result = "~";
      break;
    case 14:
      result = "!";
      break;
    case 15:
      result = "=";
      break;
    case 16:
      result = "<";
      break;
    case 17:
      result = ">";
      break;
    case 18:
      result = "+=";
      break;
    case 19:
      result = "-=";
      break;
    case 20:
      result = "*=";
      break;
    case 21:
      result = "/=";
      break;
    case 22:
      result = "%=";
      break;
    case 23:
      result = "^=";
      break;
    case 24:
      result = "&=";
      break;
    case 25:
      result = "|=";
      break;
    case 26:
      result = "<<";
      break;
    case 27:
      result = ">>";
      break;
    case 28:
      result = "<<=";
      break;
    case 29:
      result = ">>=";
      break;
    case 30:
      result = "==";
      break;
    case 31:
      result = "!=";
      break;
    case 32:
      result = "<=";
      break;
    case 33:
      result = ">=";
      break;
    case 34:
      result = "<=>";
      break;
    case 35:
      result = (char *)"&&";
      break;
    case 36:
      result = "||";
      break;
    case 37:
      result = "++";
      break;
    case 38:
      result = "--";
      break;
    case 39:
      result = ",";
      break;
    case 40:
      result = "->*";
      break;
    case 41:
      result = (char *)"->";
      break;
    case 42:
      result = "()";
      break;
    case 43:
      result = "[]";
      break;
    case 44:
      result = "?";
      break;
    case 45:
      result = "co_await";
      break;
  }
  return result;
}

