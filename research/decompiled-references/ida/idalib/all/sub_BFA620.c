_WORD *__fastcall sub_BFA620(_WORD *a1)
{
  _WORD *result; // rax

  switch ( (*a1 + 433) & 0x1FF )
  {
    case 0:
      result = a1 + 12;
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      result = a1 + 24;
      break;
    case 7:
    case 8:
    case 9:
      result = a1 + 20;
      break;
  }
  return result;
}
