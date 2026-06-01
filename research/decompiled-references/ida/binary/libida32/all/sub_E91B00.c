unsigned __int64 *__fastcall sub_E91B00(unsigned __int64 *a1, _DWORD *a2)
{
  unsigned __int64 *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx

  result = a1;
  switch ( a2[2] )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
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
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x36:
    case 0x38:
    case 0x39:
    case 0x3A:
    case 0x3B:
    case 0x3C:
    case 0x3D:
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x41:
    case 0x43:
    case 0x44:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4A:
    case 0x4B:
    case 0x4C:
    case 0x4D:
    case 0x4E:
    case 0x4F:
    case 0x50:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5A:
    case 0x5B:
    case 0x5C:
    case 0x5D:
    case 0x5E:
    case 0x5F:
    case 0x60:
    case 0x61:
    case 0x62:
    case 0x63:
    case 0x64:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6A:
    case 0x6B:
    case 0x6C:
    case 0x6D:
    case 0x6E:
    case 0x6F:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
      goto LABEL_2;
    case 0x23:
      sub_E916F0(a1, (__int64)a2);
      result = a1;
      break;
    case 0x24:
      v3 = (unsigned int)a2[4];
      a1[1] = 0;
      a1[4] = 0;
      *a1 = (unsigned __int64)(a2 + 10);
      a1[3] = (unsigned __int64)&a2[2 * v3 + 10];
      break;
    case 0x28:
      sub_E915D0(a1, (__int64)a2);
      result = a1;
      break;
    case 0x2C:
      sub_E91540(a1, (__int64)a2);
      result = a1;
      break;
    case 0x35:
      sub_E91990(a1, (__int64)a2);
      result = a1;
      break;
    case 0x37:
      if ( (a2[34] & 0xFFFFFFFD) == 1 )
      {
        v4 = (unsigned int)a2[4];
        a1[1] = 0;
        a1[4] = 0;
        *a1 = (unsigned __int64)(a2 + 38);
        a1[3] = (unsigned __int64)&a2[2 * v4 + 38];
      }
      else
      {
LABEL_2:
        *a1 = 0;
        a1[1] = 0;
        a1[2] = 0;
        a1[3] = 0;
        a1[4] = 0;
        a1[5] = 0;
      }
      break;
    case 0x42:
      sub_E918A0(a1, (__int64)a2);
      result = a1;
      break;
    case 0x45:
      sub_E91810(a1, (__int64)a2);
      result = a1;
      break;
    case 0x46:
      sub_E91660(a1, (__int64)a2);
      result = a1;
      break;
    case 0x51:
      sub_E91780(a1, (__int64)a2);
      result = a1;
      break;
    case 0x55:
      v5 = (unsigned int)a2[4];
      a1[1] = 0;
      a1[4] = 0;
      *a1 = (unsigned __int64)(a2 + 26);
      a1[3] = (unsigned __int64)&a2[2 * v5 + 26];
      break;
  }
  return result;
}

