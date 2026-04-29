__int64 __fastcall sub_F130(__int64 a1, int a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 2LL:
    case 3LL:
    case 4LL:
    case 5LL:
      result = 1;
      break;
    case 6LL:
    case 7LL:
      result = 2;
      break;
    case 8LL:
    case 9LL:
    case 12LL:
      result = 4;
      break;
    case 10LL:
    case 11LL:
    case 13LL:
      result = 8;
      break;
    case 14LL:
      result = (unsigned int)(2 * a2);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
