char *__fastcall sub_20F3F70(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "invalid";
      break;
    case 1:
      result = "construct";
      break;
    case 2:
      result = "device";
      break;
    case 3:
      result = "target_device";
      break;
    case 4:
      result = "implementation";
      break;
    case 5:
      result = "user";
      break;
  }
  return result;
}
