__int64 __fastcall sub_40B380(char a1)
{
  __int16 v1; // cx
  __int64 v3; // [rsp+10h] [rbp-28h]

  switch ( a1 )
  {
    case 6:
    case 7:
    case 37:
      v1 = 0;
      break;
    case 9:
    case 32:
    case 33:
      v1 = 0;
      break;
    case 11:
      v1 = 0;
      break;
    case 12:
    case 14:
    case 25:
    case 29:
      v1 = 0;
      break;
    case 15:
    case 24:
      v1 = -32640;
      break;
    case 19:
      v1 = -16192;
      break;
    case 31:
      v1 = 0;
      break;
    case 34:
      v1 = -1;
      break;
    default:
      v1 = -32640;
      break;
  }
  LODWORD(v3) = 1;
  WORD2(v3) = -1;
  HIWORD(v3) = v1;
  return v3;
}
