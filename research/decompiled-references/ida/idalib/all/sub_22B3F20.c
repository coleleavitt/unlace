__int64 __fastcall sub_22B3F20(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ecx

  switch ( *(_DWORD *)(a1 + 32) )
  {
    case 0:
    case 1:
    case 3:
    case 5:
    case 0x23:
    case 0x25:
    case 0x26:
      v2 = *(_DWORD *)(a1 + 44);
      result = 1;
      if ( v2 - 14 > 1 )
        goto LABEL_5;
      break;
    case 2:
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x16:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x21:
    case 0x22:
    case 0x24:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x39:
    case 0x3A:
    case 0x3B:
      result = 3;
      break;
    case 0xB:
      result = 2;
      break;
    case 0x11:
      result = 2 * (unsigned int)(*(_DWORD *)(a1 + 44) != 15) + 1;
      break;
    case 0x15:
    case 0x17:
      v2 = *(_DWORD *)(a1 + 44);
      if ( v2 == 20 )
      {
        result = 8;
      }
      else
      {
LABEL_5:
        result = 3;
        if ( v2 <= 0x1F )
          result = ((0xF8000222uLL >> v2) & 1) != 0 ? 5 : 3;
      }
      break;
    case 0x20:
      result = (unsigned int)(*(_DWORD *)(a1 + 44) == 16) + 3;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
      result = 6;
      break;
    case 0x37:
    case 0x38:
      result = 7;
      break;
  }
  return result;
}
