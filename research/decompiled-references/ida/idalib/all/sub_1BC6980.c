__int64 __fastcall sub_1BC6980(_BYTE *a1)
{
  __int64 result; // rax

  switch ( *a1 )
  {
    case 0:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
      result = 3;
      break;
    case 1:
    case 3:
    case 4:
      result = 1;
      break;
    case 2:
      result = 4;
      break;
    case 5:
    case 6:
      result = 2;
      break;
    case 0xB:
    case 0xC:
      result = 6;
      break;
    case 0xD:
      result = 5;
      break;
  }
  return result;
}
