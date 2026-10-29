char *__fastcall sub_11BB370(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "static";
      break;
    case 1:
      result = "pic";
      break;
    case 2:
      result = "dynamic-no-pic";
      break;
    case 3:
      result = "ropi";
      break;
    case 4:
      result = "rwpi";
      break;
    case 5:
      result = "ropi-rwpi";
      break;
  }
  return result;
}
