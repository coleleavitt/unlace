__int64 __fastcall sub_FC9040(char a1, _DWORD *a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0:
    case 2:
    case 3:
    case 12:
      result = 40;
      break;
    case 1:
    case 4:
      result = 8;
      if ( a2[8] == 38 && a2[10] == 3 )
        result = 4 * (unsigned int)(a2[11] != 24) + 4;
      break;
    case 5:
    case 7:
    case 10:
    case 11:
      result = 20;
      break;
    case 6:
      result = 6;
      break;
    case 8:
      result = 29;
      break;
    case 9:
      result = 32;
      break;
  }
  return result;
}

