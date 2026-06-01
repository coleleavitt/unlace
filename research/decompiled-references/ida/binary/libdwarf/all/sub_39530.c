__int64 __fastcall sub_39530(int a1, int a2, int a3)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 3:
    case 4:
    case 9:
    case 10:
    case 24:
      result = 0;
      break;
    case 6:
    case 7:
      result = (unsigned int)(a1 - 2) < 2 ? 1 : 99;
      break;
    case 23:
      if ( a1 == 5 )
        result = 5;
      else
        result = (unsigned int)(a1 == 4 && a3 != 0) + 1;
      break;
    case 34:
      result = 5;
      if ( a1 != 5 )
        result = 99;
      break;
    default:
      result = 99;
      break;
  }
  return result;
}

