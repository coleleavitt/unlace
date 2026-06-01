__int64 __fastcall sub_C7A4C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  switch ( *(_DWORD *)(a1 + 64) )
  {
    case 0:
    case 3:
    case 8:
    case 0xA:
    case 0x1C:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
      result = 0;
      break;
    case 1:
    case 2:
    case 4:
    case 5:
    case 6:
    case 7:
    case 9:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1B:
    case 0x21:
    case 0x27:
      result = 1;
      break;
    case 0x19:
    case 0x1A:
      result = (*(_BYTE *)(a2 + 2) & 4) != 0;
      break;
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
      result = *(_BYTE *)(a2 + 164) & 1;
      break;
  }
  return result;
}

