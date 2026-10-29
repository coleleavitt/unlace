__int64 __fastcall sub_BD81C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // kr00_8
  __int64 v5; // rdi
  __int64 v6; // kr10_8
  __int64 v7; // rsi
  _QWORD *v8; // rbp
  __int64 v9; // r12
  _QWORD *v10; // rax
  __m128i v11; // [rsp+10h] [rbp-68h] BYREF
  __int64 v12; // [rsp+20h] [rbp-58h]
  __m128i v13; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-38h]

  v2 = a1;
  while ( 2 )
  {
    LOWORD(result) = *(_WORD *)a2 & 0x1FF;
    if ( (unsigned __int16)result > 0x75u )
    {
      if ( (unsigned __int16)result <= 0x77u )
      {
        v4 = a1;
        v5 = v2;
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
            goto LABEL_13;
          default:
            a1 = v4;
            goto LABEL_7;
        }
      }
      goto LABEL_7;
    }
    if ( (_WORD)result != 4 )
    {
LABEL_7:
      result = (unsigned __int16)result;
      switch ( (__int16)result )
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
        case 115:
        case 118:
        case 119:
          goto LABEL_14;
        case 5:
        case 27:
        case 65:
        case 71:
        case 94:
        case 105:
        case 117:
          return result;
        case 46:
          a2 = *(_QWORD *)(a2 + 16);
          continue;
        case 51:
          result = *(unsigned __int16 *)(a2 + 4);
          v8 = (_QWORD *)(a2 + 32);
          v9 = a2 + 8 * result + 32;
          if ( a2 + 32 != v9 )
          {
            do
            {
              if ( *v8 )
                result = sub_BD81C0(v2, *v8);
              ++v8;
            }
            while ( (_QWORD *)v9 != v8 );
          }
          return result;
        case 57:
          result = *(_DWORD *)(a2 + 16) & 0x3FFF8000;
          if ( (_DWORD)result != 1073709056 )
            return sub_BD81C0(
                     v2,
                     *(_QWORD *)(a2
                               + 8LL
                               * (((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF)
                                + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                               + 32));
          return result;
        case 68:
          sub_EC6110(&v13, a2);
          v11 = _mm_load_si128(&v13);
          v12 = v14;
          if ( (v11.m128i_i8[8] & 3) != 0 )
            v10 = (_QWORD *)sub_ECEDF0(&v11);
          else
            v10 = (_QWORD *)v11.m128i_i64[0];
          return sub_BD81C0(v2, *v10);
        case 77:
          result = **(unsigned int **)(a2 + 16);
          if ( (result & 0x20000) == 0 )
          {
            if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
              v7 = *(_QWORD *)(a2 + 24);
            else
              v7 = *(_QWORD *)(a2 + 32);
            return sub_BD81C0(v2, v7);
          }
          return result;
        case 89:
        case 90:
        case 91:
        case 92:
        case 93:
          return sub_BD8170(v2, a2);
        case 96:
          result = sub_C72370(a2);
          if ( (_BYTE)result )
            return sub_BD81C0(v2, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          return result;
        case 113:
          result = *(_QWORD *)(a2 + 16);
          if ( *(char *)(result + 82) < 0 )
            goto LABEL_14;
          *(_BYTE *)(v2 + 8) = 1;
          break;
        case 114:
          result = *(_QWORD *)(a2 + 16);
          if ( *(char *)(result + 82) < 0 )
            goto LABEL_14;
          *(_BYTE *)(v2 + 8) = 1;
          break;
        case 116:
          result = **(_QWORD **)(a2 + 16);
          if ( result && *(char *)(result + 82) < 0 )
LABEL_14:
            result = sub_BD9250(v2, a2);
          else
            *(_BYTE *)(v2 + 8) = 1;
          break;
        default:
          goto LABEL_7;
      }
      return result;
    }
    break;
  }
  v6 = a1;
  v5 = v2;
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
LABEL_13:
      result = sub_BD9250(v5, a2);
      break;
    default:
      a1 = v6;
      goto LABEL_7;
  }
  return result;
}

