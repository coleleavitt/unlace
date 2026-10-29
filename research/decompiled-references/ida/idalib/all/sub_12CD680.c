__int64 __fastcall sub_12CD680(unsigned int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 2u:
      result = 23;
      break;
    case 3u:
    case 5u:
      result = 24;
      break;
    case 0xFu:
      result = 26;
      break;
    case 0x11u:
    case 0x23u:
      result = 28;
      break;
    case 0x14u:
      result = 34;
      break;
    default:
      result = a1;
      break;
  }
  return result;
}
