__int64 __fastcall sub_EB5210(__int64 a1)
{
  __int64 result; // rax

  switch ( *(_DWORD *)(a1 + 8) )
  {
    case 0x1A:
    case 0x1C:
    case 0x28:
    case 0x2C:
    case 0x46:
    case 0x51:
    case 0x5A:
      result = a1 + 16;
      break;
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x2D:
    case 0x34:
    case 0x35:
    case 0x42:
    case 0x45:
    case 0x47:
    case 0x48:
    case 0x4B:
    case 0x55:
    case 0x62:
    case 0x63:
      result = a1 + 24;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
