__int64 __fastcall sub_327720(unsigned int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case '"':
      result = 36;
      break;
    case '%':
      result = 35;
      break;
    case '\'':
      result = 38;
      break;
    case ')':
      result = 40;
      break;
    case '-':
      result = 47;
      break;
    case '0':
      result = 46;
      break;
    case '2':
      result = 49;
      break;
    case '4':
      result = 51;
      break;
    default:
      result = a1;
      break;
  }
  return result;
}
