__int64 __fastcall ___ZNK5dyld39MachOFile13enforceFormatENS0_9MalformedE_block_invoke(
        __int64 result,
        int a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v4; // t1
  char v5; // w8
  unsigned int v6; // w8
  int v7; // w8
  unsigned int v8; // w8
  int v9; // w8

  if ( (unsigned int)(a2 - 1) <= 0xB )
  {
    switch ( a2 )
    {
      case 1:
        if ( *(_DWORD *)(result + 40) <= 0x10u )
        {
          switch ( *(_DWORD *)(result + 40) )
          {
            case 0:
            case 1:
            case 3:
              if ( a4 >> 9 >= 0x507 )
                goto LABEL_25;
              break;
            case 2:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
              v8 = 659199;
              goto LABEL_24;
            case 9:
              v8 = 659455;
              goto LABEL_24;
            case 0xA:
            case 0xB:
            case 0xC:
            case 0xE:
            case 0xF:
              goto LABEL_17;
            case 0xD:
            case 0x10:
              goto LABEL_22;
            default:
              return result;
          }
        }
        return result;
      case 2:
      case 3:
      case 6:
        if ( *(_DWORD *)(result + 40) <= 0x10u )
        {
          switch ( *(_DWORD *)(result + 40) )
          {
            case 0:
            case 3:
            case 5:
            case 6:
            case 7:
              goto LABEL_25;
            case 1:
            case 2:
            case 4:
            case 8:
LABEL_17:
              if ( a4 >= 0xD0000 )
                goto LABEL_25;
              break;
            case 9:
LABEL_22:
              v9 = 851967;
              goto LABEL_23;
            case 0xA:
            case 0xB:
            case 0xC:
            case 0xE:
            case 0xF:
              if ( a4 >= 0x100000 )
                goto LABEL_25;
              break;
            case 0xD:
            case 0x10:
              v8 = 1114111;
              goto LABEL_24;
            default:
              return result;
          }
        }
        return result;
      case 4:
        v6 = *(_DWORD *)(result + 40);
        if ( v6 > 0x10 )
          return result;
        v7 = 1 << v6;
        if ( (v7 & 0xDF16) != 0 )
        {
          if ( a4 < 0x90000 )
            return result;
        }
        else if ( (v7 & 0xE9) == 0 )
        {
          v9 = 589823;
LABEL_23:
          v8 = v9 | 0x10000;
LABEL_24:
          if ( a4 <= v8 )
            return result;
        }
        break;
      case 11:
      case 12:
        v4 = *(_QWORD *)(result + 32);
        result += 32;
        *(_BYTE *)(*(_QWORD *)(v4 + 8) + 24LL) = 1;
        if ( a4 >> 17 || *(_DWORD *)(result + 8) != 16 )
          return result;
        v5 = 0;
        goto LABEL_26;
      default:
        break;
    }
  }
LABEL_25:
  result += 32;
  v5 = 1;
LABEL_26:
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)result + 8LL) + 24LL) = v5;
  return result;
}
