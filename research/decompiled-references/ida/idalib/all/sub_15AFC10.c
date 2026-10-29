char *__fastcall sub_15AFC10(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
    case 3:
    case 5:
    case 6:
    case 7:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
      result = "abstract";
      break;
    case 1:
      result = "override";
      break;
    case 2:
      result = "final";
      break;
    case 4:
      result = (char *)"sealed";
      break;
    case 8:
      result = "__final";
      break;
  }
  return result;
}
