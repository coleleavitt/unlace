__int64 __fastcall sub_40B90(__int64 a1, double a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0LL:
    case 1LL:
      return 1;
    case 2LL:
      return 2;
    case 3LL:
    case 5LL:
    case 6LL:
    case 7LL:
    case 9LL:
    case 10LL:
    case 11LL:
    case 12LL:
    case 13LL:
    case 14LL:
    case 15LL:
    case 17LL:
    case 18LL:
    case 19LL:
    case 20LL:
    case 21LL:
    case 22LL:
    case 23LL:
    case 24LL:
    case 25LL:
    case 26LL:
    case 27LL:
    case 28LL:
    case 29LL:
    case 30LL:
    case 31LL:
      goto LABEL_6;
    case 4LL:
      return 5;
    case 8LL:
      return 10;
    case 16LL:
      return 3;
    case 32LL:
      return 8;
    default:
      result = 4;
      if ( a1 == 256 )
        return result;
      result = 6;
      if ( a1 == 4096 )
        return result;
      result = 9;
      if ( a1 == 64 )
        return result;
LABEL_6:
      if ( (debug & 0x10) == 0 )
        return 1;
      sub_E950((__int64)"Unsupported alignment 0x%a\n", a2);
      return 1;
  }
}
