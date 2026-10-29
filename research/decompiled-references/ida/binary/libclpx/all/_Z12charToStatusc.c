__int64 __fastcall charToStatus(char a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 'B':
      result = 1;
      break;
    case 'F':
      result = 0;
      break;
    case 'L':
    case 'X':
      result = 3;
      break;
    case 'S':
      result = 4;
      break;
    case 'U':
      result = 2;
      break;
    default:
      abort();
  }
  return result;
}

