_BYTE *__fastcall clang_PrintingPolicy_setProperty(_BYTE *a1, __int64 a2, char a3)
{
  _BYTE *result; // rax

  result = a1;
  if ( a1 )
  {
    switch ( a2 )
    {
      case 0LL:
        *a1 = a3;
        break;
      case 1LL:
        a1[1] = a1[1] & 0xFE | a3 & 1;
        break;
      case 2LL:
        a1[1] = a1[1] & 0xFD | (2 * (a3 & 1));
        break;
      case 3LL:
        a1[1] = a1[1] & 0xFB | (4 * (a3 & 1));
        break;
      case 4LL:
        a1[1] = a1[1] & 0xF7 | (8 * (a3 & 1));
        break;
      case 5LL:
        a1[1] = a1[1] & 0xEF | (16 * (a3 & 1));
        break;
      case 6LL:
        a1[2] = a1[2] & 0xFE | a3 & 1;
        break;
      case 7LL:
        a1[2] = a1[2] & 0xFD | (2 * (a3 & 1));
        break;
      case 8LL:
        a1[2] = a1[2] & 0xFB | (4 * (a3 & 1));
        break;
      case 9LL:
        a1[2] = a1[2] & 0xF7 | (8 * (a3 & 1));
        break;
      case 10LL:
        a1[2] = a1[2] & 0xEF | (16 * (a3 & 1));
        break;
      case 11LL:
        a1[2] = a1[2] & 0xDF | (32 * (a3 & 1));
        break;
      case 12LL:
        a1[2] = a1[2] & 0x7F | (a3 << 7);
        break;
      case 13LL:
        a1[3] = a1[3] & 0xFB | (4 * (a3 & 1));
        break;
      case 14LL:
        a1[3] = a1[3] & 0xF7 | (8 * (a3 & 1));
        break;
      case 15LL:
        a1[3] = a1[3] & 0xEF | (16 * (a3 & 1));
        break;
      case 16LL:
        a1[3] = a1[3] & 0xDF | (32 * (a3 & 1));
        break;
      case 17LL:
        a1[3] = a1[3] & 0x7F | (a3 << 7);
        break;
      case 18LL:
        a1[4] = a1[4] & 0xFE | a3 & 1;
        break;
      case 19LL:
        a1[4] = a1[4] & 0xFD | (2 * (a3 & 1));
        break;
      case 20LL:
        a1[4] = a1[4] & 0xFB | (4 * (a3 & 1));
        break;
      case 21LL:
        a1[4] = a1[4] & 0xF7 | (8 * (a3 & 1));
        break;
      case 22LL:
        a1[4] = a1[4] & 0xEF | (16 * (a3 & 1));
        break;
      case 23LL:
        a1[4] = a1[4] & 0xDF | (32 * (a3 & 1));
        break;
      case 24LL:
        a1[4] = a1[4] & 0xBF | ((a3 & 1) << 6);
        break;
      case 25LL:
        a1[4] = a1[4] & 0x7F | (a3 << 7);
        break;
      default:
        return result;
    }
  }
  return result;
}

