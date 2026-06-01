char *__fastcall sub_201FDE0(char a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "R_POS";
      break;
    case 1:
      result = "R_NEG";
      break;
    case 2:
      result = "R_REL";
      break;
    case 3:
      result = "R_TOC";
      break;
    case 5:
      result = "R_GL";
      break;
    case 6:
      result = "R_TCL";
      break;
    case 8:
      result = "R_BA";
      break;
    case 10:
      result = "R_BR";
      break;
    case 12:
      result = "R_RL";
      break;
    case 13:
      result = "R_RLA";
      break;
    case 15:
      result = "R_REF";
      break;
    case 18:
      result = "R_TRL";
      break;
    case 19:
      result = "R_TRLA";
      break;
    case 24:
      result = "R_RBA";
      break;
    case 26:
      result = "R_RBR";
      break;
    case 32:
      result = "R_TLS";
      break;
    case 33:
      result = "R_TLS_IE";
      break;
    case 34:
      result = "R_TLS_LD";
      break;
    case 35:
      result = "R_TLS_LE";
      break;
    case 36:
      result = "R_TLSM";
      break;
    case 37:
      result = "R_TLSML";
      break;
    case 48:
      result = "R_TOCU";
      break;
    case 49:
      result = "R_TOCL";
      break;
    default:
      result = "Unknown";
      break;
  }
  return result;
}
