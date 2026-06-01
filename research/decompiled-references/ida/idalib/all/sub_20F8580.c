bool __fastcall sub_20F8580(int a1, int a2, bool *a3, _BYTE *a4)
{
  bool result; // al

  *a3 = (unsigned int)(a2 - 1) > 2;
  switch ( a1 )
  {
    case 0:
      *a4 = 0;
      result = a2 == 0;
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 14:
      *a4 = 0;
      result = a2 == 1;
      break;
    case 6:
    case 7:
    case 15:
      *a4 = 1;
      result = a2 == 2;
      break;
    case 8:
    case 9:
    case 10:
    case 16:
      *a4 = 1;
      result = a2 == 3;
      break;
    case 11:
    case 12:
      *a4 = 1;
      result = a2 == 4;
      break;
    case 13:
      *a4 = 1;
      result = a2 == 5;
      break;
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
      *a4 = 0;
      result = a2 == 4;
      break;
  }
  return result;
}
