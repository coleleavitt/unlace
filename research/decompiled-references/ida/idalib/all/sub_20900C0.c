char *__fastcall sub_20900C0(__int64 a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 1LL:
      result = "ret";
      break;
    case 2LL:
      result = "br";
      break;
    case 3LL:
      result = "switch";
      break;
    case 4LL:
      result = "indirectbr";
      break;
    case 5LL:
      result = (char *)"invoke";
      break;
    case 6LL:
      result = (char *)"resume";
      break;
    case 7LL:
      result = "unreachable";
      break;
    case 8LL:
      result = "cleanupret";
      break;
    case 9LL:
      result = "catchret";
      break;
    case 10LL:
      result = "catchswitch";
      break;
    case 11LL:
      result = "callbr";
      break;
    case 12LL:
      result = "fneg";
      break;
    case 13LL:
      result = (char *)"add";
      break;
    case 14LL:
      result = "fadd";
      break;
    case 15LL:
      result = "sub";
      break;
    case 16LL:
      result = "fsub";
      break;
    case 17LL:
      result = (char *)"mul";
      break;
    case 18LL:
      result = "fmul";
      break;
    case 19LL:
      result = "udiv";
      break;
    case 20LL:
      result = "sdiv";
      break;
    case 21LL:
      result = "fdiv";
      break;
    case 22LL:
      result = "urem";
      break;
    case 23LL:
      result = "srem";
      break;
    case 24LL:
      result = "frem";
      break;
    case 25LL:
      result = (char *)"shl";
      break;
    case 26LL:
      result = "lshr";
      break;
    case 27LL:
      result = "ashr";
      break;
    case 28LL:
      result = (char *)"and";
      break;
    case 29LL:
      result = (char *)"or";
      break;
    case 30LL:
      result = (char *)"xor";
      break;
    case 31LL:
      result = "alloca";
      break;
    case 32LL:
      result = "load";
      break;
    case 33LL:
      result = "store";
      break;
    case 34LL:
      result = "getelementptr";
      break;
    case 35LL:
      result = "fence";
      break;
    case 36LL:
      result = "cmpxchg";
      break;
    case 37LL:
      result = "atomicrmw";
      break;
    case 38LL:
      result = "trunc";
      break;
    case 39LL:
      result = (char *)"zext";
      break;
    case 40LL:
      result = (char *)"sext";
      break;
    case 41LL:
      result = "fptoui";
      break;
    case 42LL:
      result = "fptosi";
      break;
    case 43LL:
      result = "uitofp";
      break;
    case 44LL:
      result = "sitofp";
      break;
    case 45LL:
      result = "fptrunc";
      break;
    case 46LL:
      result = "fpext";
      break;
    case 47LL:
      result = "ptrtoint";
      break;
    case 48LL:
      result = "inttoptr";
      break;
    case 49LL:
      result = "bitcast";
      break;
    case 50LL:
      result = "addrspacecast";
      break;
    case 51LL:
      result = "cleanuppad";
      break;
    case 52LL:
      result = "catchpad";
      break;
    case 53LL:
      result = "icmp";
      break;
    case 54LL:
      result = "fcmp";
      break;
    case 55LL:
      result = (char *)"phi";
      break;
    case 56LL:
      result = "call";
      break;
    case 57LL:
      result = "select";
      break;
    case 60LL:
      result = (char *)"va_arg";
      break;
    case 61LL:
      result = "extractelement";
      break;
    case 62LL:
      result = "insertelement";
      break;
    case 63LL:
      result = "shufflevector";
      break;
    case 64LL:
      result = "extractvalue";
      break;
    case 65LL:
      result = "insertvalue";
      break;
    case 66LL:
      result = "landingpad";
      break;
    case 67LL:
      result = "freeze";
      break;
    default:
      result = "<Invalid operator> ";
      break;
  }
  return result;
}
