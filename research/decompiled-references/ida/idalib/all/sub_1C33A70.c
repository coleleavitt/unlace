char __fastcall sub_1C33A70(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // kr00_8
  __int64 v5; // rdi
  __int64 v6; // kr10_8
  __int64 v7; // rdx
  __int64 *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rsi
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rbp
  __int64 v17; // r12
  _WORD *v18; // rsi
  _QWORD *v19; // rbp
  __int64 v20; // r12
  _QWORD *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // r8
  int v24; // eax
  int v25; // esi
  unsigned int i; // ecx
  __int64 v27; // rdi
  unsigned int v28; // ecx
  __m128i si128; // [rsp+10h] [rbp-68h] BYREF
  __int64 v31; // [rsp+20h] [rbp-58h]
  __m128 v32; // [rsp+30h] [rbp-48h] BYREF
  __int64 v33; // [rsp+40h] [rbp-38h]

  v2 = a1;
  while ( 2 )
  {
    LOWORD(v3) = *(_WORD *)a2 & 0x1FF;
    if ( (unsigned __int16)v3 <= 0x75u )
    {
      if ( (_WORD)v3 == 4 )
      {
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
LABEL_30:
            LOBYTE(v3) = sub_1C34C80(v5);
            return v3;
          default:
            a1 = v6;
            break;
        }
      }
    }
    else if ( (unsigned __int16)v3 <= 0x77u )
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
          goto LABEL_30;
        default:
          a1 = v4;
          break;
      }
    }
LABEL_7:
    switch ( (__int16)v3 )
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
      case 118:
      case 119:
        LOBYTE(v3) = sub_1C34C80(v2);
        return v3;
      case 5:
      case 27:
      case 65:
      case 94:
      case 105:
      case 117:
        return v3;
      case 17:
        v3 = *(unsigned __int16 *)(a2 + 4);
        v16 = (_QWORD *)(a2 + 24);
        v17 = a2 + 24 + 8 * v3 - 8;
        if ( a2 + 24 != v17 )
        {
          do
          {
            v18 = (_WORD *)*v16;
            if ( (*(_WORD *)*v16 & 0x1FF) == 0x1A )
              LOBYTE(v3) = sub_1C33A70(v2, *((_QWORD *)v18 + 2));
            else
              LOBYTE(v3) = sub_1C33A70(v2, v18);
            ++v16;
          }
          while ( (_QWORD *)v17 != v16 );
        }
        return v3;
      case 46:
        a2 = *(_QWORD *)(a2 + 16);
        continue;
      case 51:
        v3 = *(unsigned __int16 *)(a2 + 4);
        v19 = (_QWORD *)(a2 + 32);
        v20 = a2 + 8 * v3 + 32;
        if ( a2 + 32 != v20 )
        {
          do
          {
            if ( *v19 )
              LOBYTE(v3) = sub_1C33A70(v2, *v19);
            ++v19;
          }
          while ( (_QWORD *)v20 != v19 );
        }
        return v3;
      case 57:
        LODWORD(v3) = *(_DWORD *)(a2 + 16) & 0x3FFF8000;
        if ( (_DWORD)v3 != 1073709056 )
          LOBYTE(v3) = sub_1C33A70(
                         v2,
                         *(_QWORD *)(a2
                                   + 8LL
                                   * (((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF)
                                    + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                                   + 32));
        return v3;
      case 68:
        sub_EE9E50(&v32, a2);
        si128 = _mm_load_si128((const __m128i *)&v32);
        v31 = v33;
        if ( (si128.m128i_i8[8] & 3) != 0 )
          v21 = (_QWORD *)sub_EF2B30((__int64)&si128);
        else
          v21 = (_QWORD *)si128.m128i_i64[0];
        LOBYTE(v3) = sub_1C33A70(v2, *v21);
        return v3;
      case 71:
        v7 = *(_QWORD *)(a2 + 16);
        LODWORD(v3) = (*(_BYTE *)(v7 + 28) & 0x7F) - 40;
        if ( (unsigned int)v3 > 6 )
          return v3;
        v8 = *(__int64 **)(v2 + 8);
        if ( !*((_DWORD *)v8 + 2) )
        {
          v9 = (_QWORD *)v8[3];
          v10 = *((unsigned int *)v8 + 8);
          v11 = &v9[v10];
          v12 = (v10 * 8) >> 5;
          if ( v12 )
          {
            if ( *v9 != v7 )
            {
              if ( v9[1] == v7 )
              {
                ++v9;
                goto LABEL_26;
              }
              if ( v9[2] == v7 )
              {
                v9 += 2;
                goto LABEL_26;
              }
              if ( v9[3] == v7 )
              {
                v9 += 3;
                goto LABEL_26;
              }
              v13 = v9;
              v14 = &v9[4 * v12];
              while ( 1 )
              {
                v9 += 4;
                if ( v14 == v9 )
                  goto LABEL_22;
                if ( v7 == *v9 )
                  goto LABEL_26;
                if ( v7 == v9[1] )
                {
                  v9 = v13 + 5;
                  goto LABEL_26;
                }
                if ( v7 == v9[2] )
                {
                  v9 = v13 + 6;
                  goto LABEL_26;
                }
                if ( v7 == v9[3] )
                  break;
                v13 = v9;
              }
              v9 = v13 + 7;
            }
LABEL_26:
            v3 = v11 != v9;
            goto LABEL_27;
          }
LABEL_22:
          v15 = v11 - v9;
          if ( v15 != 2 )
          {
            if ( v15 != 3 )
            {
              if ( v15 != 1 )
              {
LABEL_25:
                v9 = v11;
                goto LABEL_26;
              }
LABEL_68:
              if ( v7 == *v9 )
                goto LABEL_26;
              goto LABEL_25;
            }
            if ( v7 == *v9 )
              goto LABEL_26;
            ++v9;
          }
          if ( v7 == *v9 )
            goto LABEL_26;
          ++v9;
          goto LABEL_68;
        }
        v3 = *((unsigned int *)v8 + 4);
        v23 = *v8;
        if ( (_DWORD)v3 )
        {
          v24 = v3 - 1;
          v25 = 1;
          for ( i = v24 & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4)); ; i = v24 & v28 )
          {
            v27 = *(_QWORD *)(v23 + 8LL * i);
            if ( v7 == v27 )
            {
              v3 = 1;
              goto LABEL_27;
            }
            if ( v27 == -4096 )
              break;
            v28 = v25 + i;
            ++v25;
          }
          v3 = 0;
        }
LABEL_27:
        if ( v3 )
          *(_BYTE *)(v2 + 16) = 1;
        return v3;
      case 77:
        LODWORD(v3) = **(_DWORD **)(a2 + 16);
        if ( (v3 & 0x20000) == 0 )
        {
          if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
            v22 = *(_QWORD *)(a2 + 24);
          else
            v22 = *(_QWORD *)(a2 + 32);
          LOBYTE(v3) = sub_1C33A70(v2, v22);
        }
        return v3;
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
        LOBYTE(v3) = sub_1C33870(v2, a2);
        return v3;
      case 89:
      case 90:
      case 91:
      case 92:
      case 93:
        LOBYTE(v3) = sub_1C34D70(v2);
        return v3;
      case 96:
        LOBYTE(v3) = sub_C960B0(a2);
        if ( (_BYTE)v3 )
          LOBYTE(v3) = sub_1C33A70(v2, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        return v3;
      default:
        goto LABEL_7;
    }
  }
}
