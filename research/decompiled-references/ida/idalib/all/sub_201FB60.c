char *__fastcall sub_201FB60(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "CUSTOM";
      break;
    case 1:
      result = "TYPE";
      break;
    case 2:
      result = "IMPORT";
      break;
    case 3:
      result = "FUNCTION";
      break;
    case 4:
      result = "TABLE";
      break;
    case 5:
      result = "MEMORY";
      break;
    case 6:
      result = "GLOBAL";
      break;
    case 7:
      result = "EXPORT";
      break;
    case 8:
      result = "START";
      break;
    case 9:
      result = "ELEM";
      break;
    case 10:
      result = "CODE";
      break;
    case 11:
      result = "DATA";
      break;
    case 12:
      result = "DATACOUNT";
      break;
    case 13:
      result = "TAG";
      break;
  }
  return result;
}
