__int64 __fastcall sub_18E4C90(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  unsigned __int16 v7; // ax
  __int64 v8; // rdi
  __int64 result; // rax
  unsigned __int8 v10; // kr10_1
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rax

  v7 = *(_WORD *)a2 & 0x1FF;
  if ( v7 > 0x75u )
  {
    if ( v7 <= 0x77u )
    {
      a3 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
      v8 = *a1;
      switch ( (char)a3 )
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
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
          return sub_18E4600(v8, a2, a3, a4, a5, a6);
        default:
          a3 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
          goto LABEL_4;
      }
    }
    goto LABEL_4;
  }
  if ( v7 != 4 )
  {
LABEL_4:
    switch ( (v7 + 509) & 0x1FF )
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
      case 0x12:
      case 0x13:
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
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2A:
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
      case 0x3B:
      case 0x3C:
      case 0x3D:
      case 0x3E:
      case 0x3F:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4A:
      case 0x4B:
      case 0x56:
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
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7A:
      case 0x7B:
      case 0x7C:
        return sub_18E4600(*a1, a2, a3, a4, a5, a6);
      case 0x11:
        result = sub_18E4C90(a1, *(_QWORD *)(a2 + 24));
        if ( result == 1 )
          return result;
        v13 = result & 0xFFFFFFFFFFFFFFFELL;
        *(_QWORD *)(a2 + 24) = v13;
        break;
      case 0x14:
      case 0x15:
      case 0x39:
      case 0x3A:
      case 0x45:
      case 0x46:
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
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
      case 0x6F:
      case 0x74:
      case 0x7D:
      case 0x7E:
        goto LABEL_5;
      case 0x2B:
        return sub_18E4C00(a1, a2, *(_QWORD *)(a2 + 24), a6, a4, a5);
      case 0x44:
        return sub_18E4C00(a1, a2, *(_QWORD *)(a2 + 16), a6, a4, a5);
    }
    goto LABEL_14;
  }
  v10 = *(_BYTE *)(a2 + 2) >> 3;
  a3 = v10;
  switch ( v10 )
  {
    case 0u:
    case 1u:
    case 2u:
    case 3u:
    case 5u:
    case 6u:
    case 7u:
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xDu:
LABEL_5:
      v8 = *a1;
      return sub_18E4600(v8, a2, a3, a4, a5, a6);
    case 4u:
      result = sub_18E4C90(a1, *(_QWORD *)(a2 + 16));
      if ( result != 1 )
      {
        v11 = result & 0xFFFFFFFFFFFFFFFELL;
        v12 = *a1;
        *(_QWORD *)(a2 + 16) = v11;
        *(_QWORD *)(a2 + 8) = sub_A70010(*(_QWORD *)(v12 + 248), *(_QWORD *)(v11 + 8));
        return a2;
      }
      return result;
    case 0xCu:
      result = sub_18E4C90(a1, *(_QWORD *)(a2 + 16));
      if ( result == 1 )
        return result;
      v13 = result & 0xFFFFFFFFFFFFFFFELL;
      *(_QWORD *)(a2 + 16) = v13;
      break;
    default:
      a3 = *(_BYTE *)(a2 + 2) >> 3;
      goto LABEL_4;
  }
LABEL_14:
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(v13 + 8);
  *(_BYTE *)(a2 + 1) = *(_BYTE *)(v13 + 1) & 6 | *(_BYTE *)(a2 + 1) & 0xF9;
  return a2;
}
