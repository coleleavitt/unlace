char *__fastcall sub_22CA240(__int64 a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 1LL:
    case 35LL:
      result = (char *)"arm";
      break;
    case 3LL:
      result = "arm64";
      break;
    case 37LL:
      result = "x86";
      break;
    case 38LL:
      result = "x64";
      break;
    default:
      result = (char *)&byte_22F0C30;
      break;
  }
  return result;
}
