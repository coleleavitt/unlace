__int64 __fastcall sub_F3F130(__int64 a1)
{
  __int64 v3; // rax
  __int64 *v4; // rax

  while ( 2 )
  {
    switch ( *(_BYTE *)(a1 + 16) )
    {
      case 0:
      case 1:
      case 0x18:
        goto LABEL_4;
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 0xA:
      case 0xB:
      case 0xD:
      case 0xE:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x19:
      case 0x1A:
      case 0x1B:
      case 0x1C:
      case 0x1D:
      case 0x1F:
      case 0x20:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x26:
      case 0x29:
      case 0x2A:
      case 0x2B:
      case 0x2C:
      case 0x2D:
      case 0x2F:
      case 0x30:
      case 0x32:
      case 0x37:
      case 0x39:
      case 0x3A:
        return a1;
      case 8:
        a1 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 9:
      case 0xC:
      case 0x28:
        a1 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 0xF:
        if ( (BYTE1(**(_DWORD **)(a1 + 24)) & 0x80u) != 0 )
          return a1;
        a1 = *(_QWORD *)(sub_F32940(a1) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 0x10:
      case 0x11:
        v4 = (__int64 *)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL);
        if ( !v4 )
          return a1;
        goto LABEL_6;
      case 0x1E:
        a1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 0x21:
        if ( !sub_F3F090(a1) )
          return a1;
        a1 = *(_QWORD *)(sub_F3F110(a1) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 0x25:
        a1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 0x27:
        if ( (*(_BYTE *)(a1 + 17) & 2) != 0 || !(unsigned int)sub_F329D0(a1) )
          return a1;
        a1 = *(_QWORD *)(sub_F32BF0(a1) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 0x2E:
        if ( (*(_BYTE *)(a1 + 18) & 8) != 0 )
          v3 = *(_QWORD *)(a1 + 48);
        else
          v3 = *(_QWORD *)(a1 + 8);
        goto LABEL_5;
      case 0x31:
        if ( (*(_BYTE *)(a1 + 17) & 4) != 0 && !sub_F32950(a1) )
          return a1;
        a1 = *(_QWORD *)(sub_F32C40(a1) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 0x33:
        if ( (**(_DWORD **)(a1 + 24) & 0x10000) != 0 )
          return a1;
        a1 = *(_QWORD *)(sub_F41160(a1) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 0x34:
        a1 = *(_QWORD *)(sub_F41040(a1) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 0x35:
        a1 = *(_QWORD *)(sub_F39D80(a1) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 0x36:
        if ( (*(_BYTE *)(a1 + 17) & 4) == 0 )
        {
LABEL_4:
          v3 = *(_QWORD *)(a1 + 40);
LABEL_5:
          v4 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_6:
          a1 = *v4;
          continue;
        }
        return a1;
      case 0x38:
        a1 = *(_QWORD *)(sub_F39EB0(a1) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      default:
        continue;
    }
  }
}

