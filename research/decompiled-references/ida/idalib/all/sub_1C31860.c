char __fastcall sub_1C31860(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  _QWORD *v4; // rbp
  __int64 v5; // r12
  _QWORD *v6; // rax
  __m128i si128; // [rsp+10h] [rbp-68h] BYREF
  __int64 v9; // [rsp+20h] [rbp-58h]
  __m128 v10; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+40h] [rbp-38h]

  while ( 2 )
  {
    LOWORD(v2) = *(_WORD *)a2 & 0x1FF;
    if ( (unsigned __int16)v2 > 0x75u )
    {
      if ( (unsigned __int16)v2 <= 0x77u )
      {
        switch ( (*(_WORD *)(a2 + 2) >> 3) & 0x3F )
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
LABEL_13:
            LOBYTE(v2) = sub_1C329E0(a1);
            break;
          default:
            goto LABEL_6;
        }
        return v2;
      }
LABEL_6:
      switch ( (__int16)v2 )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
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
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
        case 47:
        case 48:
        case 49:
        case 50:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 58:
        case 59:
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
        case 66:
        case 67:
        case 69:
        case 70:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 78:
        case 79:
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        case 95:
        case 97:
        case 98:
        case 99:
        case 100:
        case 101:
        case 102:
        case 103:
        case 104:
        case 106:
        case 107:
        case 108:
        case 109:
        case 110:
        case 111:
        case 112:
        case 113:
        case 114:
        case 115:
        case 116:
          goto LABEL_12;
        case 5:
        case 27:
        case 65:
        case 71:
        case 94:
        case 105:
        case 117:
          return v2;
        case 46:
          a2 = *(_QWORD *)(a2 + 16);
          continue;
        case 51:
          v2 = *(unsigned __int16 *)(a2 + 4);
          v4 = (_QWORD *)(a2 + 32);
          v5 = a2 + 8 * v2 + 32;
          if ( a2 + 32 != v5 )
          {
            do
            {
              if ( *v4 )
                LOBYTE(v2) = sub_1C31860(a1, *v4);
              ++v4;
            }
            while ( (_QWORD *)v5 != v4 );
          }
          break;
        case 57:
          LODWORD(v2) = *(_DWORD *)(a2 + 16) & 0x3FFF8000;
          if ( (_DWORD)v2 != 1073709056 )
            LOBYTE(v2) = sub_1C31860(
                           a1,
                           *(_QWORD *)(a2
                                     + 8LL
                                     * (((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF)
                                      + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                                     + 32));
          break;
        case 68:
          sub_EE9E50(&v10, a2);
          si128 = _mm_load_si128((const __m128i *)&v10);
          v9 = v11;
          if ( (si128.m128i_i8[8] & 3) != 0 )
            v6 = (_QWORD *)sub_EF2B30((__int64)&si128);
          else
            v6 = (_QWORD *)si128.m128i_i64[0];
          LOBYTE(v2) = sub_1C31860(a1, *v6);
          break;
        case 77:
          LODWORD(v2) = **(_DWORD **)(a2 + 16);
          if ( (v2 & 0x20000) == 0 )
          {
            if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
              v3 = *(_QWORD *)(a2 + 24);
            else
              v3 = *(_QWORD *)(a2 + 32);
            LOBYTE(v2) = sub_1C31860(a1, v3);
          }
          break;
        case 89:
        case 90:
        case 91:
        case 92:
        case 93:
          LOBYTE(v2) = sub_1C329A0(a1);
          break;
        case 96:
          LOBYTE(v2) = sub_C960B0(a2);
          if ( (_BYTE)v2 )
            LOBYTE(v2) = sub_1C31860(a1, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          break;
        case 118:
        case 119:
          goto LABEL_13;
        default:
          goto LABEL_6;
      }
      return v2;
    }
    break;
  }
  if ( (_WORD)v2 != 4 )
    goto LABEL_6;
  switch ( *(_BYTE *)(a2 + 2) >> 3 )
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
LABEL_12:
      LOBYTE(v2) = sub_1C328B0(a1);
      break;
    default:
      goto LABEL_6;
  }
  return v2;
}
