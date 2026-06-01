const char *__fastcall sub_BF81C0(int a1)
{
  const char *result; // rax

  switch ( a1 )
  {
    case 0:
      j__strlen("__func__");
      result = "__func__";
      break;
    case 1:
      j__strlen("__FUNCTION__");
      result = "__FUNCTION__";
      break;
    case 2:
      j__strlen("L__FUNCTION__");
      result = "L__FUNCTION__";
      break;
    case 3:
      j__strlen("__FUNCDNAME__");
      result = "__FUNCDNAME__";
      break;
    case 4:
      j__strlen("__FUNCSIG__");
      result = "__FUNCSIG__";
      break;
    case 5:
      j__strlen("L__FUNCSIG__");
      result = "L__FUNCSIG__";
      break;
    case 6:
      j__strlen("__PRETTY_FUNCTION__");
      result = "__PRETTY_FUNCTION__";
      break;
  }
  return result;
}
