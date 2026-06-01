char *__fastcall sub_C79C70(__int64 a1)
{
  char *result; // rax

  switch ( *(_DWORD *)(a1 + 8) )
  {
    case 0:
      result = (char *)&byte_22CD811;
      break;
    case 1:
      result = "hh";
      break;
    case 2:
      result = "h";
      break;
    case 3:
      result = (char *)"hl";
      break;
    case 4:
      result = (char *)"l";
      break;
    case 5:
      result = "ll";
      break;
    case 6:
      result = "q";
      break;
    case 7:
      result = "j";
      break;
    case 8:
      result = "z";
      break;
    case 9:
      result = (char *)"t";
      break;
    case 0xA:
      result = "I32";
      break;
    case 0xB:
      result = "I";
      break;
    case 0xC:
      result = "I64";
      break;
    case 0xD:
      result = (char *)"L";
      break;
    case 0xE:
      result = (char *)"a";
      break;
    case 0xF:
      result = "m";
      break;
    case 0x10:
      result = "w";
      break;
    default:
      result = nullptr;
      break;
  }
  return result;
}

