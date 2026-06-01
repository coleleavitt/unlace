__int64 __fastcall sub_1664C90(int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 5:
      result = 0x100000004LL;
      break;
    case 11:
      result = 0x10000000ALL;
      break;
    case 15:
      result = 0x10000000ELL;
      break;
    case 17:
      result = 0x100000010LL;
      break;
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
      result = 0x100000013LL;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
