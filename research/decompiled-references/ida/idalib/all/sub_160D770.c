char __fastcall sub_160D770(__int64 a1, __int64 a2, double a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // r12
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // r12
  __int64 v24; // rax
  __m128i si128; // [rsp+0h] [rbp-78h] BYREF
  __int64 v27; // [rsp+10h] [rbp-68h]
  __m128 v28; // [rsp+20h] [rbp-58h] BYREF
  __int64 v29; // [rsp+30h] [rbp-48h]

  v5 = a2;
  LOWORD(v6) = *(_WORD *)a2 & 0x1FF;
  if ( (unsigned __int16)v6 > 0x75u || (_WORD)v6 == 4 )
  {
LABEL_2:
    LOBYTE(v6) = sub_160DC40(a1, v5);
  }
  else
  {
    while ( 2 )
    {
      switch ( (__int16)v6 )
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
        case 107:
        case 108:
        case 109:
        case 115:
        case 118:
        case 119:
          goto LABEL_2;
        case 5:
        case 27:
        case 65:
        case 94:
        case 105:
        case 117:
          return v6;
        case 46:
          if ( ((*(_BYTE *)(*(_QWORD *)(a2 + 24) + 28LL) + 94) & 0x7Fu) <= 0xC )
            sub_160E870(a1, *(unsigned int *)(a2 + 40));
          goto LABEL_20;
        case 51:
          v6 = *(unsigned __int16 *)(a2 + 4);
          v7 = (_QWORD *)(a2 + 32);
          v8 = a2 + 8 * v6 + 32;
          if ( a2 + 32 != v8 )
          {
            do
            {
              if ( *v7 )
                LOBYTE(v6) = sub_160D770(a1);
              ++v7;
            }
            while ( (_QWORD *)v8 != v7 );
          }
          return v6;
        case 53:
          v10 = *(_QWORD *)(a2 + 56);
          if ( v10 && (v10 & 2) == 0 && (v10 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            sub_160D770(a1);
          goto LABEL_2;
        case 57:
          LODWORD(v6) = *(_DWORD *)(a2 + 16) & 0x3FFF8000;
          if ( (_DWORD)v6 != 1073709056 )
            goto LABEL_20;
          return v6;
        case 68:
          sub_EE9E50(&v28, a2);
          v27 = v29;
          si128 = _mm_load_si128((const __m128i *)&v28);
          if ( (si128.m128i_i8[8] & 3) != 0 )
            sub_EF2B30((__int64)&si128);
          LOBYTE(v6) = sub_160D770(a1);
          return v6;
        case 71:
          LOBYTE(v6) = (*(_BYTE *)(*(_QWORD *)(a2 + 16) + 28LL) + 94) & 0x7F;
          if ( (unsigned __int8)v6 <= 0xCu )
            LOBYTE(v6) = sub_160E870(a1, *(unsigned int *)(a2 + 4));
          return v6;
        case 77:
          LODWORD(v6) = **(_DWORD **)(a2 + 16);
          if ( (v6 & 0x20000) == 0 )
            goto LABEL_20;
          return v6;
        case 89:
        case 90:
        case 91:
        case 92:
        case 93:
          LOBYTE(v6) = sub_160DD30(a1, a2);
          return v6;
        case 96:
          LOBYTE(v6) = sub_C960B0(a2);
          if ( (_BYTE)v6 )
LABEL_20:
            LOBYTE(v6) = sub_160D770(a1);
          return v6;
        case 106:
          if ( *(_QWORD *)(a2 + 16) )
            sub_160E870(a1, *(unsigned int *)(a2 + 40));
          if ( *(_QWORD *)(a2 + 24) )
            sub_160E870(a1, *(unsigned int *)(a2 + 40));
          goto LABEL_2;
        case 110:
          v11 = *(_QWORD *)(a2 + 16);
          if ( v11 )
          {
            a2 = *(unsigned int *)(a2 + 4);
            sub_160E870(a1, a2);
          }
          v12 = sub_C93F60(v5, a2, v11, a5);
          if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
            v13 = v12;
            v14 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_A71450(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL), v12)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(*v14 + 16) == 48 )
            {
              v23 = sub_F60F10(*v14, v13, v15, v16, v17, v18);
              v24 = v23[16];
              if ( v24 || (sub_7052B0((__int64 *)(v23[13] + 96LL), v23[13], v19, v20, v21, v22), (v24 = v23[16]) != 0) )
              {
                if ( *(_QWORD *)(v24 + 88) )
                {
                  sub_1A69EF0(*(_QWORD *)(a1 + 8), v23);
                  sub_160E870(a1, *(unsigned int *)(v5 + 4));
                }
              }
            }
          }
          goto LABEL_2;
        case 111:
          sub_C94CC0((_QWORD *)a2);
          goto LABEL_31;
        case 112:
          sub_C94C80(a2);
LABEL_31:
          sub_160D770(a1);
          LOBYTE(v6) = sub_160DC40(a1, a2);
          break;
        case 113:
        case 114:
          LOBYTE(v6) = sub_160D640(a1, a2);
          break;
        case 116:
          v9 = sub_EEB7E0(*(_QWORD *)(a2 + 24), a2, a3);
          sub_160E870(a1, v9);
          LOBYTE(v6) = sub_160D770(a1);
          break;
        default:
          continue;
      }
      break;
    }
  }
  return v6;
}
