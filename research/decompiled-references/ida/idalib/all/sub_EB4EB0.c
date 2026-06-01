_QWORD *__fastcall sub_EB4EB0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0x10:
    case 0x11:
    case 0x14:
    case 0x15:
    case 0x1B:
    case 0x1E:
    case 0x1F:
    case 0x21:
    case 0x27:
    case 0x2E:
    case 0x30:
    case 0x32:
    case 0x36:
    case 0x38:
    case 0x39:
    case 0x3A:
    case 0x3C:
    case 0x3D:
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x41:
    case 0x44:
    case 0x49:
    case 0x4A:
    case 0x4C:
    case 0x4E:
    case 0x53:
    case 0x54:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x5B:
    case 0x5C:
    case 0x5D:
    case 0x5F:
    case 0x64:
    case 0x65:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6A:
    case 0x6B:
    case 0x6C:
    case 0x71:
    case 0x72:
    case 0x73:
      goto LABEL_3;
    case 4:
      v3 = a2
         + 8LL * *(unsigned int *)(a2 + 16)
         + 8LL * (*(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 24) != 0)
         + 24;
      goto LABEL_7;
    case 5:
    case 8:
    case 0xF:
    case 0x17:
    case 0x19:
    case 0x22:
    case 0x23:
    case 0x2A:
    case 0x2B:
    case 0x3B:
    case 0x42:
    case 0x45:
    case 0x48:
    case 0x4B:
    case 0x4D:
    case 0x4F:
    case 0x59:
    case 0x60:
      a1[1] = 0;
      *a1 = a2 + 16;
      a1[3] = a2 + 24;
      a1[4] = 0;
      return a1;
    case 6:
    case 0x12:
    case 0x13:
    case 0x20:
    case 0x25:
    case 0x2F:
    case 0x43:
    case 0x52:
    case 0x5E:
      v3 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
LABEL_7:
      a1[3] = v3;
      *a1 = a2 + 24;
      a1[1] = 0;
      a1[4] = 0;
      return a1;
    case 7:
      v13 = *(unsigned int *)(a2 + 16);
      a1[1] = 0;
      a1[4] = 0;
      *a1 = a2 + 72;
      a1[3] = a2 + 8 * v13 + 72;
      return a1;
    case 0x16:
    case 0x1D:
    case 0x24:
    case 0x47:
    case 0x63:
      v4 = *(unsigned int *)(a2 + 16);
      a1[1] = 0;
      a1[4] = 0;
      *a1 = a2 + 40;
      a1[3] = a2 + 8 * v4 + 40;
      return a1;
    case 0x18:
      if ( *(_QWORD *)(a2 + 24) )
        goto LABEL_16;
LABEL_3:
      *a1 = 0;
      a1[1] = 0;
      a1[2] = 0;
      a1[3] = 0;
      a1[4] = 0;
      a1[5] = 0;
      break;
    case 0x1A:
    case 0x28:
    case 0x46:
      a1[1] = 0;
      *a1 = a2 + 40;
      a1[3] = a2 + 48;
      a1[4] = 0;
      return a1;
    case 0x1C:
      a1[1] = 0;
      *a1 = a2 + 48;
      a1[3] = a2 + 56;
      a1[4] = 0;
      return a1;
    case 0x26:
    case 0x55:
    case 0x66:
      v6 = *(unsigned int *)(a2 + 16);
      a1[1] = 0;
      a1[4] = 0;
      *a1 = a2 + 104;
      a1[3] = a2 + 8 * v6 + 104;
      return a1;
    case 0x29:
    case 0x33:
    case 0x6E:
    case 0x6F:
      v5 = *(unsigned int *)(a2 + 16);
      a1[1] = 0;
      a1[4] = 0;
      *a1 = a2 + 80;
      a1[3] = a2 + 8 * v5 + 80;
      return a1;
    case 0x2C:
    case 0x51:
      a1[1] = 0;
      *a1 = a2 + 32;
      a1[3] = a2 + 40;
      a1[4] = 0;
      return a1;
    case 0x2D:
    case 0x62:
      v8 = *(unsigned int *)(a2 + 16);
      a1[1] = 0;
      a1[4] = 0;
      *a1 = a2 + 96;
      a1[3] = a2 + 8 * v8 + 96;
      return a1;
    case 0x31:
      v12 = *(unsigned int *)(a2 + 16);
      a1[1] = 0;
      a1[4] = 0;
      *a1 = a2 + 32;
      a1[3] = a2 + 8 * v12 + 32;
      return a1;
    case 0x34:
    case 0x35:
      v7 = *(unsigned int *)(a2 + 16);
      a1[1] = 0;
      a1[4] = 0;
      *a1 = a2 + 64;
      a1[3] = a2 + 8 * v7 + 64;
      return a1;
    case 0x37:
      v11 = *(unsigned int *)(a2 + 16);
      a1[1] = 0;
      a1[4] = 0;
      *a1 = a2 + 152;
      a1[3] = a2 + 8 * v11 + 152;
      return a1;
    case 0x50:
    case 0x61:
      v9 = *(unsigned int *)(a2 + 16);
      a1[1] = 0;
      *a1 = a2 + 24;
      a1[4] = 0;
      a1[3] = a2 + 24 + 8 * v9;
      return a1;
    case 0x5A:
      a1[1] = 0;
      *a1 = a2 + 64;
      a1[3] = a2 + 72;
      a1[4] = 0;
      return a1;
    case 0x6D:
LABEL_16:
      a1[1] = 0;
      *a1 = a2 + 24;
      a1[3] = a2 + 32;
      a1[4] = 0;
      break;
    case 0x70:
      v10 = *(_DWORD *)(a2 + 16);
      a1[1] = 0;
      *a1 = a2 + 24;
      a1[4] = 0;
      a1[3] = a2 + 24 + 8LL * (unsigned int)(2 * v10);
      break;
  }
  return a1;
}
