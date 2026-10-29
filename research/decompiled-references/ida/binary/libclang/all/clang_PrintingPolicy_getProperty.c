__int64 __fastcall clang_PrintingPolicy_getProperty(unsigned __int8 *a1, __int64 a2)
{
  __int64 result; // rax

  if ( !a1 )
    return 0;
  switch ( a2 )
  {
    case 0LL:
      result = *a1;
      break;
    case 1LL:
      result = a1[1] & 1;
      break;
    case 2LL:
      result = (a1[1] & 2) != 0;
      break;
    case 3LL:
      result = (a1[1] & 4) != 0;
      break;
    case 4LL:
      result = (a1[1] & 8) != 0;
      break;
    case 5LL:
      result = (a1[1] & 0x10) != 0;
      break;
    case 6LL:
      result = a1[2] & 1;
      break;
    case 7LL:
      result = (a1[2] & 2) != 0;
      break;
    case 8LL:
      result = (a1[2] & 4) != 0;
      break;
    case 9LL:
      result = (a1[2] & 8) != 0;
      break;
    case 10LL:
      result = (a1[2] & 0x10) != 0;
      break;
    case 11LL:
      result = (a1[2] & 0x20) != 0;
      break;
    case 12LL:
      result = a1[2] >> 7;
      break;
    case 13LL:
      result = (a1[3] & 4) != 0;
      break;
    case 14LL:
      result = (a1[3] & 8) != 0;
      break;
    case 15LL:
      result = (a1[3] & 0x10) != 0;
      break;
    case 16LL:
      result = (a1[3] & 0x20) != 0;
      break;
    case 17LL:
      result = a1[3] >> 7;
      break;
    case 18LL:
      result = a1[4] & 1;
      break;
    case 19LL:
      result = (a1[4] & 2) != 0;
      break;
    case 20LL:
      result = (a1[4] & 4) != 0;
      break;
    case 21LL:
      result = (a1[4] & 8) != 0;
      break;
    case 22LL:
      result = (a1[4] & 0x10) != 0;
      break;
    case 23LL:
      result = (a1[4] & 0x20) != 0;
      break;
    case 24LL:
      result = (a1[4] & 0x40) != 0;
      break;
    case 25LL:
      result = a1[4] >> 7;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

