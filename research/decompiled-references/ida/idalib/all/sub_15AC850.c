char *__fastcall sub_15AC850(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "unspecified";
      break;
    case 1:
      result = (char *)"typedef";
      break;
    case 2:
      result = "extern";
      break;
    case 3:
      result = "static";
      break;
    case 4:
      result = "auto";
      break;
    case 5:
      result = "register";
      break;
    case 6:
      result = "__private_extern__";
      break;
    case 7:
      result = "mutable";
      break;
  }
  return result;
}
