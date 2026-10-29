void __fastcall sub_20CC2D0(char **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v7; // rdi
  char *v8; // rdi
  char *v9; // rdi

  switch ( *(_BYTE *)a1 )
  {
    case 0x16:
      sub_20CC0C0((__int64)a1, a2, a3, a4, a5, a6);
      operator delete(a1, 0x28u);
      break;
    case 0x17:
      sub_204BEA0((__int64)a1);
      operator delete(a1, 0x50u);
      break;
    case 0x18:
      sub_20A0920((__int64)a1);
      operator delete(a1, 0x20u);
      break;
    case 0x19:
      v8 = a1[7];
      if ( v8 != (char *)(a1 + 9) )
        operator delete(v8);
      v9 = a1[3];
      if ( v9 != (char *)(a1 + 5) )
        operator delete(v9);
      sub_20CC0C0((__int64)a1, a2, a3, a4, a5, a6);
      operator delete(a1, 0x70u);
      break;
    case 0x1A:
    case 0x1B:
    case 0x1C:
      ((void (*)(void))a1[3])();
      break;
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
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
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
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
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
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
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5A:
    case 0x5B:
    case 0x5F:
    case 0x60:
      goto LABEL_4;
    case 0x5C:
    case 0x5D:
    case 0x5E:
      v7 = a1[9];
      if ( v7 != (char *)(a1 + 11) )
        free(v7);
LABEL_4:
      sub_2090030((__int64)a1, a2, a3, a4, a5, a6);
      sub_20C9BF0((__int64)a1);
      break;
  }
}
