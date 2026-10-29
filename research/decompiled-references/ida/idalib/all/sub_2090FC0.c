char *__fastcall sub_2090FC0(__int64 a1)
{
  char *v1; // rcx

  switch ( a1 )
  {
    case 0LL:
      j__strlen("false");
      v1 = "false";
      break;
    case 1LL:
      j__strlen("oeq");
      v1 = "oeq";
      break;
    case 2LL:
      j__strlen("ogt");
      v1 = "ogt";
      break;
    case 3LL:
      j__strlen("oge");
      v1 = "oge";
      break;
    case 4LL:
      j__strlen("olt");
      v1 = "olt";
      break;
    case 5LL:
      j__strlen("ole");
      v1 = "ole";
      break;
    case 6LL:
      j__strlen("one");
      v1 = "one";
      break;
    case 7LL:
      j__strlen("ord");
      v1 = "ord";
      break;
    case 8LL:
      j__strlen("uno");
      v1 = "uno";
      break;
    case 9LL:
      j__strlen("ueq");
      v1 = "ueq";
      break;
    case 10LL:
    case 34LL:
      j__strlen("ugt");
      v1 = "ugt";
      break;
    case 11LL:
    case 35LL:
      j__strlen("uge");
      v1 = "uge";
      break;
    case 12LL:
    case 36LL:
      j__strlen("ult");
      v1 = "ult";
      break;
    case 13LL:
    case 37LL:
      j__strlen("ule");
      v1 = (char *)"ule";
      break;
    case 14LL:
      j__strlen("une");
      v1 = "une";
      break;
    case 15LL:
      j__strlen("true");
      v1 = "true";
      break;
    case 32LL:
      j__strlen("eq");
      v1 = (char *)"eq";
      break;
    case 33LL:
      j__strlen("ne");
      v1 = (char *)"ne";
      break;
    case 38LL:
      j__strlen("sgt");
      v1 = "sgt";
      break;
    case 39LL:
      j__strlen("sge");
      v1 = "sge";
      break;
    case 40LL:
      j__strlen("slt");
      v1 = "slt";
      break;
    case 41LL:
      j__strlen("sle");
      v1 = "sle";
      break;
    default:
      j__strlen("unknown");
      v1 = "unknown";
      break;
  }
  return v1;
}
