__int64 __fastcall sub_1009F50(unsigned __int8 *a1, int a2)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 0:
    case 9:
    case 10:
      result = a1[33];
      break;
    case 1:
    case 2:
      result = 8;
      break;
    case 3:
    case 4:
      result = a1[13];
      break;
    case 5:
    case 6:
      result = a1[15];
      break;
    case 7:
    case 8:
      result = a1[31];
      break;
  }
  return result;
}

