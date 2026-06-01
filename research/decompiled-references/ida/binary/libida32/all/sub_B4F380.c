char *__fastcall sub_B4F380(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
    case 5:
      result = "register";
      break;
    case 1:
      result = "extern";
      break;
    case 2:
      result = "static";
      break;
    case 3:
      result = "__private_extern__";
      break;
    case 4:
      result = "auto";
      break;
  }
  return result;
}

