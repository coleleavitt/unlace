char *__fastcall sub_F70F40(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
    case 6:
      result = "inout";
      break;
    case 1:
      result = "swift_indirect_result";
      break;
    case 2:
      result = "swift_error_result";
      break;
    case 3:
      result = "swift_context";
      break;
    case 4:
      result = "swift_async_context";
      break;
    case 5:
      result = "out";
      break;
  }
  return result;
}
