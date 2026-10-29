unsigned __int64 __fastcall sub_80FCA0(__m128i *a1, unsigned __int64 a2)
{
  __m128i *v2; // rbx
  unsigned __int64 result; // rax
  __m128i *v4; // kr00_8
  __m128i *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 *v10; // rax
  unsigned __int64 i; // rdi
  unsigned __int16 v12; // dx
  unsigned __int64 j; // rdi
  unsigned __int16 v14; // dx
  unsigned __int64 m; // rdi
  unsigned __int16 v16; // dx
  unsigned __int64 n; // rdi
  unsigned __int16 v18; // dx
  unsigned __int64 k; // rdi
  unsigned __int16 v20; // dx
  _QWORD *v21; // rbp
  __int64 v22; // r12
  __m128i v23; // [rsp+10h] [rbp-68h] BYREF
  __int64 v24; // [rsp+20h] [rbp-58h]
  __m128i v25; // [rsp+30h] [rbp-48h] BYREF
  __int64 v26; // [rsp+40h] [rbp-38h]

  v2 = a1;
  while ( 2 )
  {
    LOWORD(result) = *(_WORD *)a2 & 0x1FF;
    if ( (unsigned __int16)result > 0x76u )
    {
      if ( (unsigned __int16)result <= 0x78u )
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
            goto LABEL_9;
          default:
            a1 = v4;
            goto LABEL_8;
        }
      }
      goto LABEL_8;
    }
    if ( (_WORD)result != 4 )
    {
LABEL_8:
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
        case 27:
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
        case 46:
        case 48:
        case 49:
        case 50:
        case 51:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 59:
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
        case 65:
        case 67:
        case 68:
        case 70:
        case 71:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
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
        case 89:
        case 96:
        case 98:
        case 99:
        case 100:
        case 101:
        case 102:
        case 103:
        case 104:
        case 105:
        case 107:
        case 108:
        case 109:
        case 110:
        case 111:
        case 112:
        case 113:
        case 119:
        case 120:
          return sub_811540(v2);
        case 5:
        case 28:
        case 66:
        case 72:
        case 95:
        case 106:
        case 118:
          return result;
        case 47:
          a2 = *(_QWORD *)(a2 + 16);
          continue;
        case 52:
          v21 = (_QWORD *)(a2 + 32);
          result = 8LL * *(unsigned __int16 *)(a2 + 4);
          v22 = a2 + result + 32;
          if ( result )
          {
            do
            {
              if ( *v21 )
                result = sub_80FCA0(v2);
              ++v21;
            }
            while ( (_QWORD *)v22 != v21 );
          }
          return result;
        case 58:
          result = (unsigned int)~*(_DWORD *)(a2 + 16);
          if ( (result & 0x3FFF8000) == 0 )
            return result;
          a2 = *(_QWORD *)(a2
                         + 8LL
                         * (((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                         + 32);
          continue;
        case 69:
          a1 = &v25;
          sub_AC4830(&v25);
          v23 = _mm_load_si128(&v25);
          v24 = v26;
          if ( (v23.m128i_i8[8] & 3) != 0 )
          {
            a1 = &v23;
            v10 = (unsigned __int64 *)sub_ACE280(&v23, a2, v6, v7, v8, v9);
          }
          else
          {
            v10 = (unsigned __int64 *)v23.m128i_i64[0];
          }
          a2 = *v10;
          continue;
        case 78:
          result = **(unsigned int **)(a2 + 16);
          if ( (result & 0x20000) != 0 )
            return result;
          if ( *(_BYTE *)(a2 + 48) )
            a2 = *(_QWORD *)(a2 + 24);
          else
            a2 = *(_QWORD *)(a2 + 32);
          continue;
        case 90:
          for ( i = *(_QWORD *)(a2 + *(unsigned __int8 *)(a2 + 3)); ; i = *(_QWORD *)(result + 16) )
          {
            result = sub_80F310(i);
            v12 = *(_WORD *)result & 0x1FF;
            if ( v12 != 9 )
              break;
          }
          while ( 2 )
          {
            if ( v12 > 0x76u )
            {
              if ( v12 <= 0x78u && ((*(_WORD *)(result + 2) >> 3) & 0x3Fu) <= 1 )
              {
                result = sub_80F310(*(_QWORD *)(result + 24));
LABEL_65:
                v12 = *(_WORD *)result & 0x1FF;
                continue;
              }
              goto LABEL_12;
            }
            break;
          }
          switch ( v12 )
          {
            case 4u:
              if ( (((*(_BYTE *)(result + 2) >> 3) + 28) & 0x1Fu) <= 2 )
              {
                result = sub_80F310(*(_QWORD *)(result + 16));
                goto LABEL_65;
              }
              goto LABEL_12;
            case 0x48u:
              goto LABEL_87;
            case 0x2Fu:
              result = *(_QWORD *)(result + 24);
              break;
            case 0x76u:
LABEL_87:
              result = *(_QWORD *)(result + 16);
              break;
            default:
              goto LABEL_12;
          }
          if ( !result || (*(_BYTE *)(result + 28) & 0x7Fu) - 33 > 3 || *(char *)(result + 82) >= 0 )
            goto LABEL_12;
          return sub_811540(v2);
        case 91:
          for ( j = *(_QWORD *)(a2 + *(unsigned __int8 *)(a2 + 3)); ; j = *(_QWORD *)(result + 16) )
          {
            result = sub_80F310(j);
            v14 = *(_WORD *)result & 0x1FF;
            if ( v14 != 9 )
              break;
          }
          while ( 2 )
          {
            if ( v14 > 0x76u )
            {
              if ( v14 <= 0x78u && ((*(_WORD *)(result + 2) >> 3) & 0x3Fu) <= 1 )
              {
                result = sub_80F310(*(_QWORD *)(result + 24));
LABEL_55:
                v14 = *(_WORD *)result & 0x1FF;
                continue;
              }
              goto LABEL_12;
            }
            break;
          }
          switch ( v14 )
          {
            case 4u:
              if ( (((*(_BYTE *)(result + 2) >> 3) + 28) & 0x1Fu) <= 2 )
              {
                result = sub_80F310(*(_QWORD *)(result + 16));
                goto LABEL_55;
              }
              goto LABEL_12;
            case 0x48u:
              goto LABEL_111;
            case 0x2Fu:
              result = *(_QWORD *)(result + 24);
              break;
            case 0x76u:
LABEL_111:
              result = *(_QWORD *)(result + 16);
              break;
            default:
              goto LABEL_12;
          }
          if ( !result || (*(_BYTE *)(result + 28) & 0x7Fu) - 33 > 3 || *(char *)(result + 82) >= 0 )
            goto LABEL_12;
          return sub_811540(v2);
        case 92:
          for ( k = *(_QWORD *)(a2 + *(unsigned __int8 *)(a2 + 3)); ; k = *(_QWORD *)(result + 16) )
          {
            result = sub_80F310(k);
            v20 = *(_WORD *)result & 0x1FF;
            if ( v20 != 9 )
              break;
          }
          while ( 2 )
          {
            if ( v20 > 0x76u )
            {
              if ( v20 <= 0x78u && ((*(_WORD *)(result + 2) >> 3) & 0x3Fu) <= 1 )
              {
                result = sub_80F310(*(_QWORD *)(result + 24));
LABEL_75:
                v20 = *(_WORD *)result & 0x1FF;
                continue;
              }
              goto LABEL_12;
            }
            break;
          }
          switch ( v20 )
          {
            case 4u:
              if ( (((*(_BYTE *)(result + 2) >> 3) + 28) & 0x1Fu) <= 2 )
              {
                result = sub_80F310(*(_QWORD *)(result + 16));
                goto LABEL_75;
              }
              goto LABEL_12;
            case 0x48u:
              goto LABEL_117;
            case 0x2Fu:
              result = *(_QWORD *)(result + 24);
              break;
            case 0x76u:
LABEL_117:
              result = *(_QWORD *)(result + 16);
              break;
            default:
              goto LABEL_12;
          }
          if ( !result || (*(_BYTE *)(result + 28) & 0x7Fu) - 33 > 3 || *(char *)(result + 82) >= 0 )
            goto LABEL_12;
          return sub_811540(v2);
        case 93:
          for ( m = *(_QWORD *)(a2 + *(unsigned __int8 *)(a2 + 3)); ; m = *(_QWORD *)(result + 16) )
          {
            result = sub_80F310(m);
            v16 = *(_WORD *)result & 0x1FF;
            if ( v16 != 9 )
              break;
          }
          while ( 2 )
          {
            if ( v16 > 0x76u )
            {
              if ( v16 <= 0x78u && ((*(_WORD *)(result + 2) >> 3) & 0x3Fu) <= 1 )
              {
                result = sub_80F310(*(_QWORD *)(result + 24));
LABEL_70:
                v16 = *(_WORD *)result & 0x1FF;
                continue;
              }
              goto LABEL_12;
            }
            break;
          }
          switch ( v16 )
          {
            case 4u:
              if ( (((*(_BYTE *)(result + 2) >> 3) + 28) & 0x1Fu) <= 2 )
              {
                result = sub_80F310(*(_QWORD *)(result + 16));
                goto LABEL_70;
              }
              goto LABEL_12;
            case 0x48u:
              goto LABEL_99;
            case 0x2Fu:
              result = *(_QWORD *)(result + 24);
              break;
            case 0x76u:
LABEL_99:
              result = *(_QWORD *)(result + 16);
              break;
            default:
              goto LABEL_12;
          }
          if ( !result || (*(_BYTE *)(result + 28) & 0x7Fu) - 33 > 3 || *(char *)(result + 82) >= 0 )
            goto LABEL_12;
          return sub_811540(v2);
        case 94:
          for ( n = *(_QWORD *)(a2 + *(unsigned __int8 *)(a2 + 3)); ; n = *(_QWORD *)(result + 16) )
          {
            result = sub_80F310(n);
            v18 = *(_WORD *)result & 0x1FF;
            if ( v18 != 9 )
              break;
          }
          while ( 2 )
          {
            if ( v18 > 0x76u )
            {
              if ( v18 <= 0x78u && ((*(_WORD *)(result + 2) >> 3) & 0x3Fu) <= 1 )
              {
                result = sub_80F310(*(_QWORD *)(result + 24));
LABEL_60:
                v18 = *(_WORD *)result & 0x1FF;
                continue;
              }
              goto LABEL_12;
            }
            break;
          }
          switch ( v18 )
          {
            case 4u:
              if ( (((*(_BYTE *)(result + 2) >> 3) + 28) & 0x1Fu) <= 2 )
              {
                result = sub_80F310(*(_QWORD *)(result + 16));
                goto LABEL_60;
              }
              goto LABEL_12;
            case 0x48u:
              goto LABEL_93;
            case 0x2Fu:
              result = *(_QWORD *)(result + 24);
              break;
            case 0x76u:
LABEL_93:
              result = *(_QWORD *)(result + 16);
              break;
            default:
              goto LABEL_12;
          }
          if ( result && (*(_BYTE *)(result + 28) & 0x7Fu) - 33 <= 3 && *(char *)(result + 82) < 0 )
            return sub_811540(v2);
LABEL_12:
          v2->m128i_i8[8] = 1;
          return result;
        case 97:
          a1 = (__m128i *)a2;
          result = sub_8C13F0(a2);
          if ( !(_BYTE)result )
            return result;
          a2 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          continue;
        case 114:
          result = *(_QWORD *)(a2 + 16);
          if ( *(char *)(result + 82) < 0 )
            return sub_811540(v2);
          goto LABEL_12;
        case 115:
          result = *(_QWORD *)(a2 + 16);
          if ( *(char *)(result + 82) < 0 )
            return sub_811540(v2);
          goto LABEL_12;
        case 116:
          return sub_811540(v2);
        case 117:
          result = **(_QWORD **)(a2 + 16);
          if ( result && *(char *)(result + 82) < 0 )
            return sub_811540(v2);
          goto LABEL_12;
        default:
          goto LABEL_8;
      }
    }
    break;
  }
  if ( *(_BYTE *)(a2 + 2) > 0x6Fu )
    return sub_811540(v2);
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
LABEL_9:
      result = sub_811540(v5);
      break;
  }
  return result;
}

