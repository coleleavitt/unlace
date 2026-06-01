char *__fastcall sub_B3C530(char a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "equal";
      break;
    case 1:
      result = "equivalent";
      break;
    case 2:
      result = (char *)"less";
      break;
    case 3:
      result = "greater";
      break;
    case 4:
      result = "unordered";
      break;
  }
  return result;
}

