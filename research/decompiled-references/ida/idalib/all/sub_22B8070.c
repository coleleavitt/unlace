unsigned __int64 __fastcall sub_22B8070(_DWORD *a1)
{
  unsigned __int64 result; // rax

  if ( a1[10] != 1 || a1[8] != 3 )
    return 0;
  switch ( a1[11] )
  {
    case 5:
      if ( (unsigned int)(a1[12] - 31) > 1 && a1[9] != 35 )
        return 0;
      goto LABEL_10;
    case 9:
      return 0x800000000000000BLL;
    case 0x1B:
      if ( a1[12] != 31 )
        return 0;
LABEL_10:
      result = 0x800000000000000ELL;
      break;
    case 0x1C:
      result = 0x800000000000001ALL;
      if ( a1[12] == 31 )
        result = 0x8000000000000007LL;
      break;
    case 0x1E:
      result = 0x8000000000000014LL;
      break;
    default:
      return 0;
  }
  return result;
}
