__int64 __fastcall sub_F47650(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  if ( a1 & 7 | (a1 >> 3) & 1 )
    return v1;
  switch ( *(_BYTE *)(v1 + 16) )
  {
    case 0:
    case 1:
    case 0xC:
      return *(_QWORD *)(a1 + 32);
    case 2:
    case 3:
      v3 = *(_QWORD *)(a1 + 32);
      goto LABEL_6;
    case 4:
    case 5:
    case 6:
    case 7:
    case 9:
    case 0xB:
    case 0x17:
      return *(_QWORD *)(a1 + 32);
    case 8:
      v3 = *(_QWORD *)(a1 + 40);
      goto LABEL_6;
    case 0xA:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x13:
    case 0x14:
    case 0x16:
    case 0x1C:
    case 0x1D:
    case 0x1F:
    case 0x20:
    case 0x24:
    case 0x25:
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
      return 0;
    case 0x12:
      v3 = *(_QWORD *)(a1 + 40);
      goto LABEL_6;
    case 0x15:
      v3 = *(_QWORD *)(a1 + 40);
      goto LABEL_6;
    case 0x18:
      v3 = *(_QWORD *)(a1 + 40);
      goto LABEL_6;
    case 0x19:
    case 0x1A:
      v3 = *(_QWORD *)(a1 + 24);
      goto LABEL_6;
    case 0x1B:
    case 0x21:
      v3 = *(_QWORD *)(a1 + 32);
      goto LABEL_6;
    case 0x1E:
      v3 = *(_QWORD *)(a1 + 24);
      goto LABEL_6;
    case 0x22:
    case 0x26:
    case 0x27:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x39:
    case 0x3A:
      v3 = *(_QWORD *)(a1 + 32);
      goto LABEL_6;
    case 0x23:
      v3 = *(_QWORD *)(a1 + 24);
      goto LABEL_6;
    case 0x28:
      v3 = *(_QWORD *)(a1 + 32);
LABEL_6:
      result = v3;
      break;
    case 0x3B:
      return v1;
  }
  return result;
}

