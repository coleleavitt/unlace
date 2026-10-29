char *__fastcall sub_C79DB0(__int64 a1)
{
  char *result; // rax

  switch ( *(_DWORD *)(a1 + 24) )
  {
    case 1:
      result = "c";
      break;
    case 2:
      result = (char *)"d";
      break;
    case 3:
    case 0x23:
      result = "D";
      break;
    case 4:
      result = "i";
      break;
    case 5:
    case 0x22:
      result = (char *)"b";
      break;
    case 6:
      result = "B";
      break;
    case 7:
      result = "o";
      break;
    case 8:
      result = "O";
      break;
    case 9:
      result = "u";
      break;
    case 0xA:
      result = "U";
      break;
    case 0xB:
      result = (char *)"x";
      break;
    case 0xC:
      result = "X";
      break;
    case 0xD:
      result = "f";
      break;
    case 0xE:
      result = (char *)"F";
      break;
    case 0xF:
      result = "e";
      break;
    case 0x10:
      result = "E";
      break;
    case 0x11:
      result = "g";
      break;
    case 0x12:
      result = "G";
      break;
    case 0x13:
      result = (char *)"a";
      break;
    case 0x14:
      result = "A";
      break;
    case 0x15:
      result = (char *)"s";
      break;
    case 0x16:
      result = (char *)"p";
      break;
    case 0x17:
      result = "n";
      break;
    case 0x18:
      result = "%";
      break;
    case 0x19:
      result = (char *)"C";
      break;
    case 0x1A:
      result = "S";
      break;
    case 0x1B:
      result = "P";
      break;
    case 0x1C:
      result = "Z";
      break;
    case 0x1D:
      result = "k";
      break;
    case 0x1E:
      result = "K";
      break;
    case 0x1F:
    case 0x24:
      result = "r";
      break;
    case 0x20:
      result = "R";
      break;
    case 0x21:
      result = "@";
      break;
    case 0x25:
      result = "y";
      break;
    case 0x26:
      result = "m";
      break;
    case 0x27:
      result = "[";
      break;
    default:
      result = nullptr;
      break;
  }
  return result;
}

