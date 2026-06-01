char *__fastcall sub_806550(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "__func__";
      break;
    case 1:
      result = "__FUNCTION__";
      break;
    case 2:
      result = "L__FUNCTION__";
      break;
    case 3:
      result = "__FUNCDNAME__";
      break;
    case 4:
      result = "__FUNCSIG__";
      break;
    case 5:
      result = "L__FUNCSIG__";
      break;
    case 6:
      result = "__PRETTY_FUNCTION__";
      break;
  }
  return result;
}

