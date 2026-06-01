__int64 __fastcall sub_1009DF0(unsigned __int8 *a1, int a2)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 0:
    case 9:
    case 10:
      result = a1[32];
      break;
    case 1:
    case 2:
      result = 8;
      break;
    case 3:
    case 4:
      result = a1[12];
      break;
    case 5:
    case 6:
      result = a1[14];
      break;
    case 7:
    case 8:
      result = a1[30];
      break;
  }
  return result;
}

