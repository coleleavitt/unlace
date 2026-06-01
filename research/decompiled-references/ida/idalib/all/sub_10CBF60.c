char *__fastcall sub_10CBF60(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 20:
      result = "[";
      break;
    case 21:
      result = "]";
      break;
    case 22:
      result = "(";
      break;
    case 23:
      result = ")";
      break;
    case 24:
      result = "{";
      break;
    case 25:
      result = "}";
      break;
    case 26:
      result = ".";
      break;
    case 27:
      result = "...";
      break;
    case 28:
      result = "&";
      break;
    case 29:
      result = (char *)"&&";
      break;
    case 30:
      result = "&=";
      break;
    case 31:
      result = (char *)"*";
      break;
    case 32:
      result = "*=";
      break;
    case 33:
      result = "+";
      break;
    case 34:
      result = "++";
      break;
    case 35:
      result = "+=";
      break;
    case 36:
      result = "-";
      break;
    case 37:
      result = (char *)"->";
      break;
    case 38:
      result = "--";
      break;
    case 39:
      result = "-=";
      break;
    case 40:
      result = "~";
      break;
    case 41:
      result = "!";
      break;
    case 42:
      result = "!=";
      break;
    case 43:
      result = "/";
      break;
    case 44:
      result = "/=";
      break;
    case 45:
      result = "%";
      break;
    case 46:
      result = "%=";
      break;
    case 47:
      result = "<";
      break;
    case 48:
      result = "<<";
      break;
    case 49:
      result = "<=";
      break;
    case 50:
      result = "<<=";
      break;
    case 51:
      result = "<=>";
      break;
    case 52:
      result = ">";
      break;
    case 53:
      result = ">>";
      break;
    case 54:
      result = ">=";
      break;
    case 55:
      result = ">>=";
      break;
    case 56:
      result = "^";
      break;
    case 57:
      result = "^=";
      break;
    case 58:
      result = "|";
      break;
    case 59:
      result = "||";
      break;
    case 60:
      result = "|=";
      break;
    case 61:
      result = "?";
      break;
    case 62:
      result = ":";
      break;
    case 63:
      result = ";";
      break;
    case 64:
      result = "=";
      break;
    case 65:
      result = "==";
      break;
    case 66:
      result = ",";
      break;
    case 67:
      result = "#";
      break;
    case 68:
      result = "##";
      break;
    case 69:
      result = (char *)"#@";
      break;
    case 70:
      result = ".*";
      break;
    case 71:
      result = "->*";
      break;
    case 72:
      result = "::";
      break;
    case 73:
      result = "@";
      break;
    case 74:
      result = "<<<";
      break;
    case 75:
      result = ">>>";
      break;
    default:
      result = nullptr;
      break;
  }
  return result;
}
