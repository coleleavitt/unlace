const char *__fastcall sub_5670(char a1)
{
  const char *result; // rax

  switch ( a1 )
  {
    case 'B':
      result = "byte";
      break;
    case 'C':
      result = "char";
      break;
    case 'D':
      result = "double";
      break;
    case 'F':
      result = "float";
      break;
    case 'I':
      result = "int";
      break;
    case 'J':
      result = "long";
      break;
    case 'L':
      result = "ref";
      break;
    case 'S':
      result = "short";
      break;
    case 'V':
      result = "void";
      break;
    case 'Z':
      result = "boolean";
      break;
    default:
      result = "UNKNOWN";
      break;
  }
  return result;
}

