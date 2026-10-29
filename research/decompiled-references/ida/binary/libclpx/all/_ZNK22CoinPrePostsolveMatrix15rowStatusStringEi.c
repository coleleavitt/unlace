char *__fastcall CoinPrePostsolveMatrix::rowStatusString(CoinPrePostsolveMatrix *this, int a2)
{
  char *result; // rax

  result = "INVALID!";
  switch ( *(_BYTE *)(*((_QWORD *)this + 25) + a2) & 7 )
  {
    case 0:
      result = "NBFR";
      break;
    case 1:
      result = "B";
      break;
    case 2:
      result = "NBUB";
      break;
    case 3:
      result = "NBLB";
      break;
    case 4:
      result = "SB";
      break;
    default:
      return result;
  }
  return result;
}

