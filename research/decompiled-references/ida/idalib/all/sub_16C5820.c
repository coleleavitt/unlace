char *__fastcall sub_16C5820(__int64 a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0LL:
      j__strlen("scanf");
      result = "scanf";
      break;
    case 1LL:
      j__strlen("printf");
      result = "printf";
      break;
    case 2LL:
      j__strlen("NSString");
      result = "NSString";
      break;
    case 3LL:
      j__strlen("strftime");
      result = "strftime";
      break;
    case 4LL:
      j__strlen("strfmon");
      result = "strfmon";
      break;
    case 5LL:
      j__strlen("kprintf");
      result = (char *)"kprintf";
      break;
    case 6LL:
      j__strlen("freebsd_kprintf");
      result = "freebsd_kprintf";
      break;
    case 8LL:
      j__strlen("os_log");
      result = "os_log";
      break;
    default:
      j__strlen("<unknown>");
      result = "<unknown>";
      break;
  }
  return result;
}
