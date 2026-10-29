char *__fastcall sub_102DAD0(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
    case 9:
    case 10:
      result = "ll";
      break;
    case 1:
    case 2:
      result = "hh";
      break;
    case 3:
    case 4:
      result = "h";
      break;
    case 5:
    case 6:
      result = (char *)&byte_22F0C30;
      break;
    case 7:
    case 8:
      result = (char *)"l";
      break;
  }
  return result;
}
