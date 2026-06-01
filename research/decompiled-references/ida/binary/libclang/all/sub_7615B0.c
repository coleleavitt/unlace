char *__fastcall sub_7615B0(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "skip";
      break;
    case 1:
      result = "used-gpr-arg";
      break;
    case 2:
      result = "used-gpr";
      break;
    case 3:
      result = "used-arg";
      break;
    case 4:
      result = "used";
      break;
    case 5:
      result = "all-gpr-arg";
      break;
    case 6:
      result = "all-gpr";
      break;
    case 7:
      result = "all-arg";
      break;
    case 8:
      result = "all";
      break;
  }
  return result;
}

