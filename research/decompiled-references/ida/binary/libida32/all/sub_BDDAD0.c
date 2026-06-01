__int16 __fastcall sub_BDDAD0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  unsigned __int8 v7; // kr18_1
  __int64 v8; // rsi
  _QWORD *v9; // r12
  __int64 i; // rbx
  _QWORD *v11; // rax
  __m128i v13; // [rsp+0h] [rbp-78h] BYREF
  __int64 v14; // [rsp+10h] [rbp-68h]
  __m128i v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]

  while ( 2 )
  {
    LOWORD(v6) = *(_WORD *)a2 & 0x1FF;
    if ( (unsigned __int16)v6 > 0x75u )
    {
      if ( (unsigned __int16)v6 <= 0x77u )
      {
        a3 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
        switch ( (char)a3 )
        {
          case 0:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 1:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 2:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 3:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 4:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 5:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 6:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 7:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 8:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 9:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 10:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 11:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 12:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 13:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 14:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 15:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 16:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 17:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 18:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 19:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 20:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 21:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 22:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 23:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 24:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 25:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 26:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 27:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 28:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 29:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 30:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 31:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
            break;
          case 32:
            if ( !*(_BYTE *)(a1 + 9) )
              goto LABEL_318;
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
          LOWORD(v6) = sub_BDF4C0(a1, a2);
          break;
        case 3:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 4:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 5:
        case 27:
        case 65:
        case 71:
        case 94:
        case 105:
        case 117:
          return v6;
        case 6:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 7:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 8:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 9:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 10:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 11:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 12:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 13:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 14:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 15:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 16:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 17:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 18:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 19:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 20:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 21:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 22:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 23:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 24:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 25:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 26:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 28:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 29:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 30:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 31:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 32:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 33:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 34:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 35:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 36:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 37:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 38:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 39:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 40:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 41:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 42:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 43:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 44:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 45:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 46:
          a2 = *(_QWORD *)(a2 + 16);
          continue;
        case 47:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 48:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 49:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 50:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 51:
          v6 = *(unsigned __int16 *)(a2 + 4);
          v9 = (_QWORD *)(a2 + 32);
          for ( i = a2 + 8 * v6 + 32; (_QWORD *)i != v9; ++v9 )
          {
            if ( *v9 )
              LOWORD(v6) = sub_BDDAD0(a1, *v9);
          }
          break;
        case 52:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 53:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 54:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 55:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 56:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 57:
          LODWORD(v6) = *(_DWORD *)(a2 + 16) & 0x3FFF8000;
          if ( (_DWORD)v6 != 1073709056 )
            LOWORD(v6) = sub_BDDAD0(
                           a1,
                           *(_QWORD *)(a2
                                     + 8LL
                                     * (((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF)
                                      + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                                     + 32));
          break;
        case 58:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 59:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 60:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 61:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 62:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 63:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 64:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 66:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 67:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 68:
          sub_EC6110(&v15, a2);
          v14 = v16;
          v13 = _mm_load_si128(&v15);
          v11 = (_QWORD *)v13.m128i_i64[0];
          if ( (v13.m128i_i8[8] & 3) != 0 )
            v11 = (_QWORD *)sub_ECEDF0(&v13);
          LOWORD(v6) = sub_BDDAD0(a1, *v11);
          break;
        case 69:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 70:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 72:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 73:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 74:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 75:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 76:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 77:
          LODWORD(v6) = **(_DWORD **)(a2 + 16);
          if ( (v6 & 0x20000) == 0 )
          {
            if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
              v8 = *(_QWORD *)(a2 + 24);
            else
              v8 = *(_QWORD *)(a2 + 32);
            LOWORD(v6) = sub_BDDAD0(a1, v8);
          }
          break;
        case 78:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 79:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 80:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 81:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 82:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 83:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 84:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 85:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 86:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 87:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 88:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 89:
        case 90:
        case 91:
        case 92:
        case 93:
          LOWORD(v6) = sub_BDDA50(a1, a2);
          break;
        case 95:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 96:
          LOWORD(v6) = sub_C72370(a2);
          if ( (_BYTE)v6 )
            LOWORD(v6) = sub_BDDAD0(a1, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          break;
        case 97:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 98:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 99:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 100:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 101:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 102:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 103:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 104:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 106:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 107:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 108:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 109:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 110:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 111:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 112:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 113:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 114:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 115:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 116:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 118:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        case 119:
          if ( !*(_BYTE *)(a1 + 9) )
            goto LABEL_318;
          break;
        default:
          goto LABEL_6;
      }
      return v6;
    }
    break;
  }
  if ( (_WORD)v6 != 4 )
    goto LABEL_6;
  v7 = *(_BYTE *)(a2 + 2) >> 3;
  a3 = v7;
  switch ( v7 )
  {
    case 0u:
      if ( !*(_BYTE *)(a1 + 9) )
        goto LABEL_318;
      return v6;
    case 1u:
      if ( !*(_BYTE *)(a1 + 9) )
        goto LABEL_318;
      return v6;
    case 2u:
      if ( !*(_BYTE *)(a1 + 9) )
        goto LABEL_318;
      return v6;
    case 3u:
      if ( !*(_BYTE *)(a1 + 9) )
        goto LABEL_318;
      return v6;
    case 4u:
      if ( !*(_BYTE *)(a1 + 9) )
        goto LABEL_318;
      return v6;
    case 5u:
      if ( !*(_BYTE *)(a1 + 9) )
        goto LABEL_318;
      return v6;
    case 6u:
      if ( !*(_BYTE *)(a1 + 9) )
        goto LABEL_318;
      return v6;
    case 7u:
      if ( !*(_BYTE *)(a1 + 9) )
        goto LABEL_318;
      return v6;
    case 8u:
      if ( !*(_BYTE *)(a1 + 9) )
        goto LABEL_318;
      return v6;
    case 9u:
      if ( !*(_BYTE *)(a1 + 9) )
        goto LABEL_318;
      return v6;
    case 0xAu:
      if ( !*(_BYTE *)(a1 + 9) )
        goto LABEL_318;
      return v6;
    case 0xBu:
      if ( !*(_BYTE *)(a1 + 9) )
        goto LABEL_318;
      return v6;
    case 0xCu:
      if ( !*(_BYTE *)(a1 + 9) )
        goto LABEL_318;
      return v6;
    case 0xDu:
      if ( !*(_BYTE *)(a1 + 9) )
LABEL_318:
        LOWORD(v6) = sub_BDDA30(a1, a2, a3, a4, a5);
      break;
    default:
      a3 = *(_BYTE *)(a2 + 2) >> 3;
      goto LABEL_6;
  }
  return v6;
}

