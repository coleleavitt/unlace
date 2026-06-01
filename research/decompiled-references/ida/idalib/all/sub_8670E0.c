__int64 __fastcall sub_8670E0(__int64 a1, unsigned __int64 a2, int *a3, int a4, int a5)
{
  int v5; // r14d
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rbx
  int v8; // r10d
  int v9; // r11d
  __int64 v10; // rcx
  _BYTE *v13; // rbx
  int v14; // r8d
  char v15; // al
  int v16; // ecx
  _BYTE *v17; // rbp
  char v18; // cl
  int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // rax
  _BYTE *v22; // rcx
  _BYTE *v23; // rsi
  __int64 v24; // rax
  _DWORD *v25; // rdi
  int v26; // eax
  _BYTE *v27; // rcx
  _BYTE *v28; // rsi
  unsigned __int64 v29; // rax
  int v30; // eax
  unsigned __int16 v32; // cx
  int v35; // [rsp+Ch] [rbp-4Ch]
  int *v36; // [rsp+10h] [rbp-48h]
  int v37; // [rsp+18h] [rbp-40h]
  int v38; // [rsp+1Ch] [rbp-3Ch]

  v5 = a5;
  v6 = a2 + (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 1), 8);
  if ( *(_BYTE *)v6 == 121 && a5 <= 0 )
    v5 = 1;
  v7 = a2;
  v8 = v5;
  v9 = 0;
  v10 = 2LL * (*(_BYTE *)a2 == 0x8B) + 3;
LABEL_5:
  v13 = (_BYTE *)(v10 + v7);
  v14 = v8;
  v15 = *v13;
  while ( 2 )
  {
    switch ( v15 )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
      case -85:
      case -84:
        goto LABEL_33;
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 18:
      case 19:
      case 20:
      case 21:
        if ( v14 <= 0 )
          v14 = 1;
LABEL_33:
        v15 = *++v13;
        continue;
      case 15:
      case 16:
      case 93:
        if ( v14 <= 0 )
          v14 = 1;
        v15 = v13[3];
        v13 += 3;
        continue;
      case 17:
      case 22:
        if ( v14 < 3 )
          v14 = 3;
        v15 = *++v13;
        continue;
      case 29:
      case 30:
      case 31:
      case 32:
        if ( v14 <= 0 )
          v14 = 1;
        v15 = v13[2];
        v13 += 2;
        continue;
      case 33:
      case 35:
      case 42:
      case 43:
      case 46:
      case 48:
      case 55:
      case 56:
      case 59:
      case 61:
      case 68:
      case 69:
      case 72:
      case 74:
      case 81:
      case 82:
        goto LABEL_23;
      case 34:
      case 36:
      case 47:
      case 49:
      case 60:
      case 62:
      case 73:
      case 75:
        if ( v14 != 2 )
        {
LABEL_23:
          v22 = v13 + 2;
          v23 = v13 + 1;
          goto LABEL_24;
        }
        v24 = *(_QWORD *)(a1 + 24);
        v23 = v13 + 1;
        v14 = 3;
        v13 += 2;
        goto LABEL_47;
      case 37:
      case 38:
      case 44:
      case 50:
      case 51:
      case 57:
      case 63:
      case 64:
      case 70:
      case 76:
      case 77:
      case 83:
        goto LABEL_28;
      case 39:
      case 40:
      case 45:
      case 52:
      case 53:
      case 54:
      case 58:
      case 65:
      case 66:
      case 67:
      case 71:
      case 78:
      case 79:
      case 80:
      case 84:
        v13 += 2;
LABEL_28:
        if ( v14 < 3 )
          v14 = 3;
        v15 = v13[2];
        v13 += 2;
        continue;
      case 41:
        if ( v14 <= 0 )
          v14 = 1;
        v15 = v13[4];
        v13 += 4;
        continue;
      case 85:
      case 87:
      case 94:
      case 95:
        goto LABEL_35;
      case 86:
      case 88:
        if ( v14 == 2 )
        {
          v15 = v13[1];
          v23 = v13 + 1;
          if ( v15 == 17 || v15 == 22 )
          {
            v22 = v13 + 1;
            v14 = 3;
            goto LABEL_39;
          }
          v24 = *(_QWORD *)(a1 + 24);
          ++v13;
          v14 = 3;
LABEL_47:
          *(_DWORD *)(v24 + 4LL * (_QWORD)&v23[-*(_QWORD *)(a1 + 16)]) = 8 * *a3 + 2;
          if ( !*(_DWORD *)(a1 + 128) )
            *(_DWORD *)(a1 + 128) = *a3;
          v26 = *a3 + 16;
          *a3 = v26;
          *(_DWORD *)(a1 + 132) = v26;
          if ( v26 > 0x100000 )
            return 6;
          ++v14;
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * (a2 - *(_QWORD *)(a1 + 16))) = 1;
          v15 = *v13;
          if ( v14 > 5 )
            goto LABEL_20;
          continue;
        }
LABEL_35:
        v15 = v13[1];
        v22 = v13 + 1;
        if ( v15 != 17 )
        {
          v23 = v13 + 1;
          if ( v15 != 22 )
          {
LABEL_24:
            v24 = *(_QWORD *)(a1 + 24);
            v25 = (_DWORD *)(v24 + 4LL * (_QWORD)&v23[-*(_QWORD *)(a1 + 16)]);
            if ( !v14 )
            {
              *(_QWORD *)(a1 + 120) = v13;
              *v25 = 8 * *a3;
              *a3 += 8;
LABEL_26:
              v13 = v22;
              v14 = 4;
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * (a2 - *(_QWORD *)(a1 + 16))) = 1;
              v15 = *v22;
              continue;
            }
            if ( v14 <= 2 )
            {
              *v25 = 8 * *a3 + 1;
              if ( !*(_DWORD *)(a1 + 128) )
                *(_DWORD *)(a1 + 128) = *a3;
              v30 = *a3 + 8;
              *a3 = v30;
              *(_DWORD *)(a1 + 132) = v30;
              if ( v30 > 0x100000 )
                return 6;
              goto LABEL_26;
            }
            v13 = v22;
            goto LABEL_47;
          }
        }
        if ( v14 < 3 )
          v14 = 3;
LABEL_39:
        v13 = v22;
        continue;
      case 89:
      case 90:
      case 96:
        v27 = v13;
        goto LABEL_53;
      case 91:
      case 92:
      case 97:
        v27 = v13 + 2;
LABEL_53:
        v13 = v27 + 1;
        if ( v14 < 3 )
          v14 = 3;
        v15 = v27[1];
        continue;
      case 110:
      case 111:
        v15 = v13[33];
        v28 = v13 + 33;
        switch ( v15 )
        {
          case 'b':
          case 'd':
          case 'j':
          case 'k':
            goto LABEL_59;
          case 'c':
          case 'e':
            if ( v14 != 2 )
            {
LABEL_59:
              v22 = v13 + 34;
              v23 = v13 + 1;
              goto LABEL_24;
            }
            v23 = v13 + 1;
            v24 = *(_QWORD *)(a1 + 24);
            v13 += 34;
            v14 = 3;
            break;
          case 'f':
          case 'g':
          case 'l':
            goto LABEL_61;
          case 'h':
          case 'i':
          case 'm':
            v28 = v13 + 37;
            if ( *((_WORD *)v13 + 18) == *((_WORD *)v13 + 17) )
            {
              v15 = v13[38];
              v13 += 38;
              if ( v14 <= 0 )
                v14 = 1;
            }
            else
            {
LABEL_61:
              v13 = v28 + 1;
              if ( v14 < 3 )
                v14 = 3;
              v15 = v28[1];
            }
            continue;
          default:
            v13 += 33;
            if ( v14 <= 0 )
              v14 = 1;
            continue;
        }
        goto LABEL_47;
      case 122:
        if ( (unsigned __int64)v13 >= v6 )
          goto LABEL_74;
        v15 = v13[3];
        v13 += 3;
        continue;
      case -119:
      case -117:
        v16 = 1;
        if ( v14 > 0 )
          v16 = v14;
        v35 = v16;
        if ( a4 == 4 )
          goto LABEL_21;
        v17 = &v13[(unsigned __int16)__ROL2__(*(_WORD *)(v13 + 1), 8)];
        v18 = *v17;
        if ( v14 > 2 )
          goto LABEL_80;
        if ( v18 == 121 )
        {
          v35 = 3;
          do
          {
            v17 += (unsigned __int16)__ROL2__(*(_WORD *)(v17 + 1), 8);
            v18 = *v17;
LABEL_80:
            ;
          }
          while ( v18 == 121 );
        }
        if ( v18 != 122 )
          goto LABEL_21;
        if ( v15 == -117 )
        {
          v32 = __ROL2__(*(_WORD *)(v13 + 3), 8);
          if ( ((unsigned __int8)(1 << (v32 & 7)) & *(_BYTE *)(*(_QWORD *)(a1 + 40) + ((unsigned __int64)v32 >> 3))) == 0 )
            goto LABEL_21;
        }
        v38 = v8;
        v37 = v9;
        v36 = a3;
        v19 = sub_8670E0(a1, v13, a3, (unsigned int)(a4 + 1));
        v20 = *(_QWORD *)(a1 + 16);
        a3 = v36;
        v9 = v37;
        v14 = v35;
        v8 = v38;
        if ( v19 >= v35 )
          v14 = v19;
        v21 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)(v21 + 4LL * (_QWORD)&v13[-v20]) )
          *(_DWORD *)(v21 + 4 * (a2 - v20)) = 1;
        if ( v14 <= 5 )
        {
          v15 = v17[3];
          v13 = v17 + 3;
          continue;
        }
        v15 = *v13;
LABEL_20:
        if ( (unsigned __int8)(v15 - 121) <= 1u )
        {
LABEL_74:
          if ( v9 < v14 )
            v9 = v14;
        }
        else
        {
LABEL_21:
          v9 = 6;
        }
        v10 = 3;
        v7 = v6;
        v29 = v6 + (unsigned __int16)__ROL2__(*(_WORD *)(v6 + 1), 8);
        if ( *(_BYTE *)v6 == 121 )
        {
          v6 = v29;
          goto LABEL_5;
        }
        return (unsigned int)v9;
      default:
        goto LABEL_20;
    }
  }
}
