__int64 __fastcall sub_F6C560(__int64 a1)
{
  __int64 v1; // r12
  int v2; // r9d
  unsigned int v3; // r10d

  if ( a1 )
  {
    while ( 1 )
    {
      if ( (a1 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        if ( (a1 & 7) == 0 )
        {
          v1 = a1 & 8;
          goto LABEL_5;
        }
      }
      else if ( (a1 & 7) == 0 )
      {
        v1 = a1 & 8;
LABEL_5:
        if ( !v1 )
        {
          switch ( *(_BYTE *)(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) )
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
              break;
            default:
              BUG();
          }
        }
      }
      a1 = sub_F6B390(a1);
      if ( !a1 )
        return v3 * ((v2 != 0) + (v2 - (unsigned int)(v2 != 0)) / v3);
    }
  }
  return 0;
}
