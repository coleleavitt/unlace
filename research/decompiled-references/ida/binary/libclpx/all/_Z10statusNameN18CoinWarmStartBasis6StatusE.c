char *__fastcall statusName(__int64 a1)
{
  char *result; // rax

  result = "INVALID!";
  switch ( a1 )
  {
    case 0LL:
      result = "NBFR";
      break;
    case 1LL:
      result = "B";
      break;
    case 2LL:
      result = "NBUB";
      break;
    case 3LL:
      result = "NBLB";
      break;
    case 4LL:
      result = "SB";
      break;
    default:
      return result;
  }
  return result;
}

