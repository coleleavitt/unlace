__int64 __fastcall sub_1DBADC0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  __int64 v3; // rdx

  if ( *(_BYTE *)(a1 + 12592) )
    return 0;
  v2 = *(_QWORD *)(a1 + 11312);
  v3 = v2 + ((unsigned __int64)*(unsigned int *)(a1 + 11320) << 6);
  if ( v2 != v3 )
  {
    while ( 2 )
    {
      switch ( *(_DWORD *)(v3 - 64) )
      {
        case 0:
        case 2:
        case 5:
        case 9:
        case 0xB:
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
        case 0x11:
        case 0x13:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x19:
          return result;
        case 3:
        case 4:
        case 0xA:
        case 0x10:
        case 0x12:
          result = *(_QWORD *)(v3 - 16);
          break;
        case 0x1A:
          if ( (*(_BYTE *)(*(_QWORD *)(v3 - 48) + 28LL) & 0x7F) == 0x46 )
            goto LABEL_6;
          break;
        default:
LABEL_6:
          if ( *(_BYTE *)(v3 - 60) )
          {
            result = 0;
          }
          else
          {
            v3 -= 64;
            if ( v2 != v3 )
              continue;
          }
          break;
      }
      break;
    }
  }
  return result;
}
