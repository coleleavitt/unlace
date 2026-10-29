char *__fastcall sub_15ACE60(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "unspecified";
      break;
    case 1:
      result = (char *)"const";
      break;
    case 2:
      result = (char *)"restrict";
      break;
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
      result = (char *)"_Atomic";
      break;
    case 4:
      result = (char *)"volatile";
      break;
    case 8:
      result = "__unaligned";
      break;
  }
  return result;
}
