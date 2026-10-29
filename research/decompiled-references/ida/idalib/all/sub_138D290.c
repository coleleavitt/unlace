char *__fastcall sub_138D290(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "ignored";
      break;
    case 1:
      result = "note";
      break;
    case 2:
      result = "remark";
      break;
    case 3:
      result = "warning";
      break;
    case 4:
      result = "error";
      break;
    case 5:
      result = "fatal error";
      break;
  }
  return result;
}
