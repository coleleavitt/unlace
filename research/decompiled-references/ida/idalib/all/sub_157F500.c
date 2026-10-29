char __fastcall sub_157F500(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD *v8; // rbp
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128i si128; // [rsp+10h] [rbp-68h] BYREF
  __int64 v21; // [rsp+20h] [rbp-58h]
  __m128 v22; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23; // [rsp+40h] [rbp-38h]

  while ( 2 )
  {
    LOWORD(v6) = *(_WORD *)a2 & 0x1FF;
    if ( (unsigned __int16)v6 > 0x75u )
    {
      if ( (unsigned __int16)v6 <= 0x77u )
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
          case 0x20:
LABEL_13:
            LOBYTE(v6) = sub_157F4C0(a1, a2);
            break;
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
LABEL_14:
            LOBYTE(v6) = sub_157F4E0(a1, a2);
            break;
          default:
            a3 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
            goto LABEL_6;
        }
        return v6;
      }
LABEL_6:
      switch ( (__int16)v6 )
      {
        case 0:
        case 1:
        case 2:
          goto LABEL_222;
        case 3:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 4:
          goto LABEL_12;
        case 5:
        case 27:
        case 65:
        case 94:
        case 105:
        case 117:
          return v6;
        case 6:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 7:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 8:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 9:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 10:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 11:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 12:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 13:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 14:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 15:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 16:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 17:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 18:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 19:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 20:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 21:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 22:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 23:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 24:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 25:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 26:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 28:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 29:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 30:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 31:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 32:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 33:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 34:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 35:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 36:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 37:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 38:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 39:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 40:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 41:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 42:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 43:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 44:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 45:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 46:
          a2 = *(_QWORD *)(a2 + 16);
          continue;
        case 47:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 48:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 49:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 50:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 51:
          v6 = *(unsigned __int16 *)(a2 + 4);
          v8 = (_QWORD *)(a2 + 32);
          v9 = a2 + 8 * v6 + 32;
          if ( a2 + 32 != v9 )
          {
            do
            {
              if ( *v8 )
                LOBYTE(v6) = sub_157F500(a1, *v8, a3, a4, a5, a6);
              ++v8;
            }
            while ( (_QWORD *)v9 != v8 );
          }
          return v6;
        case 52:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 53:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 54:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 55:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 56:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 57:
          LODWORD(v6) = *(_DWORD *)(a2 + 16) & 0x3FFF8000;
          if ( (_DWORD)v6 != 1073709056 )
            LOBYTE(v6) = sub_157F500(
                           a1,
                           *(_QWORD *)(a2
                                     + 8LL
                                     * (((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF)
                                      + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                                     + 32),
                           (*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF,
                           a4,
                           a5,
                           a6);
          return v6;
        case 58:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 59:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 60:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 61:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 62:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 63:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 64:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 66:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 67:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 68:
          sub_EE9E50(&v22, a2);
          si128 = _mm_load_si128((const __m128i *)&v22);
          v21 = v23;
          if ( (si128.m128i_i8[8] & 3) != 0 )
            v14 = (_QWORD *)sub_EF2B30((__int64)&si128);
          else
            v14 = (_QWORD *)si128.m128i_i64[0];
          LOBYTE(v6) = sub_157F500(a1, *v14, v10, v11, v12, v13);
          return v6;
        case 69:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 70:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 71:
          if ( a2 == *(_QWORD *)(a1 + 16) )
            *(_BYTE *)(a1 + 8) = 1;
          return v6;
        case 72:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 73:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 74:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 75:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 76:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 77:
          LODWORD(v6) = **(_DWORD **)(a2 + 16);
          if ( (v6 & 0x20000) == 0 )
          {
            if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
              v7 = *(_QWORD *)(a2 + 24);
            else
              v7 = *(_QWORD *)(a2 + 32);
            LOBYTE(v6) = sub_157F500(a1, v7, a3, a4, a5, a6);
          }
          return v6;
        case 78:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 79:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 80:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 81:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 82:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 83:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 84:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 85:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 86:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 87:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 88:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 89:
        case 90:
        case 91:
        case 92:
        case 93:
          LOBYTE(v6) = sub_157F480(a1, a2);
          return v6;
        case 95:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 96:
          LOBYTE(v6) = sub_C960B0(a2);
          if ( (_BYTE)v6 )
            LOBYTE(v6) = sub_157F500(a1, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL, v15, v16, v17, v18);
          return v6;
        case 97:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 98:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 99:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 100:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 101:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 102:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 103:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 104:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 106:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 107:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 108:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 109:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 110:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 111:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 112:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 113:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 114:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 115:
          if ( !*(_BYTE *)(a1 + 8) )
            goto LABEL_222;
          return v6;
        case 116:
          if ( !*(_BYTE *)(a1 + 8) )
LABEL_222:
            LOBYTE(v6) = sub_157F2D0(a1, a2);
          break;
        case 118:
          goto LABEL_13;
        case 119:
          goto LABEL_14;
        default:
          goto LABEL_6;
      }
      return v6;
    }
    break;
  }
  if ( (_WORD)v6 != 4 )
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
      LOBYTE(v6) = sub_157F460(a1, a2);
      break;
    default:
      a3 = *(_BYTE *)(a2 + 2) >> 3;
      goto LABEL_6;
  }
  return v6;
}
