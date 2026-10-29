__int64 __fastcall sub_F32A60(_BYTE *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rax

  while ( 2 )
  {
    switch ( *(_BYTE *)(a2 + 16) )
    {
      case 0:
      case 1:
      case 0xB:
      case 0x1F:
      case 0x20:
      case 0x21:
      case 0x26:
      case 0x28:
      case 0x2A:
      case 0x2B:
      case 0x2C:
      case 0x39:
      case 0x3A:
        v2 = *(_QWORD *)(a2 + 32);
        goto LABEL_3;
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
        if ( (*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          a2 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          continue;
        }
        return 0;
      case 7:
      case 9:
      case 0xA:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x16:
      case 0x17:
      case 0x1B:
      case 0x1C:
      case 0x1D:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x27:
      case 0x29:
      case 0x2D:
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
      case 8:
      case 0x15:
      case 0x18:
        v3 = (__int64 *)(*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF0LL);
        if ( !v3 )
          return 0;
        goto LABEL_4;
      case 0x10:
      case 0x11:
        return a2;
      case 0x19:
      case 0x1E:
        goto LABEL_9;
      case 0x1A:
        if ( *a1 && (*(_BYTE *)(a2 + 20) & 1) != 0 )
          return a2;
LABEL_9:
        v2 = *(_QWORD *)(a2 + 24);
LABEL_3:
        v3 = (__int64 *)(v2 & 0xFFFFFFFFFFFFFFF0LL);
        if ( !v3 )
          return 0;
LABEL_4:
        a2 = *v3;
        continue;
      case 0x2E:
        if ( (*(_BYTE *)(a2 + 18) & 8) != 0 )
          v2 = *(_QWORD *)(a2 + 48);
        else
          v2 = *(_QWORD *)(a2 + 8);
        goto LABEL_3;
    }
  }
}

