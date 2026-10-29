unsigned __int64 __fastcall sub_1FE4540(__int64 a1, unsigned __int8 *a2)
{
  int v2; // ebx
  int v3; // ebp
  int v4; // r10d
  int v5; // r11d
  int v6; // r12d
  int v7; // r13d
  int v8; // r14d
  int v9; // r15d
  __int64 v10; // r8
  unsigned __int8 *v11; // r9
  unsigned __int64 result; // rax
  bool v13; // zf
  int v14; // ecx
  int v15; // ecx
  unsigned __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  char v24; // dl
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  char v29; // dl
  unsigned int v30; // eax
  int v31; // ecx
  bool v32; // sf
  int v33; // ecx
  char v34; // al
  unsigned int v35; // edx
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  char v39; // dl
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx

  v10 = a1;
  v11 = a2;
  result = *a2;
  switch ( *a2 )
  {
    case 0u:
LABEL_3:
      *(_BYTE *)(v10 + 1) = 10;
      return result;
    case 1u:
      v13 = *(_BYTE *)(a1 + 20) == 0;
      *(_DWORD *)(a1 + 16) = 0;
      if ( v13 )
        *(_BYTE *)(a1 + 20) = 1;
      goto LABEL_7;
    case 2u:
      v16 = sub_1FE44B0((int *)(a1 + 4), *(_DWORD *)(a1 + 12));
      *(_QWORD *)(v10 + 16) = v16;
      goto LABEL_7;
    case 3u:
      *(_BYTE *)(a1 + 1) = 0;
      goto LABEL_34;
    case 4u:
      *(_BYTE *)(a1 + 1) = 1;
      goto LABEL_34;
    case 5u:
      *(_BYTE *)(a1 + 1) = 2;
      goto LABEL_34;
    case 6u:
      *(_BYTE *)(a1 + 1) = 3;
      goto LABEL_34;
    case 7u:
      *(_BYTE *)(a1 + 1) = 4;
      goto LABEL_34;
    case 8u:
      *(_DWORD *)(a1 + 12) = 32;
      *(_BYTE *)(a1 + 1) = 8;
LABEL_34:
      result = a2[1];
      switch ( (char)result )
      {
        case 1:
LABEL_45:
          v17 = *(_DWORD *)(v10 + 12);
          ++*(_DWORD *)(v10 + 4);
          *(_DWORD *)(v10 + 12) = 2 * v17;
          result = sub_1FE44B0((int *)(v10 + 4), 2 * v17);
          *(_QWORD *)(v10 + 16) = result;
          goto LABEL_12;
        case 2:
LABEL_46:
          v18 = *(_DWORD *)(v10 + 12);
          *(_DWORD *)(v10 + 4) += 2;
          *(_DWORD *)(v10 + 12) = 4 * v18;
          result = sub_1FE44B0((int *)(v10 + 4), 4 * v18);
          *(_QWORD *)(v10 + 16) = result;
          goto LABEL_12;
        case 3:
LABEL_47:
          v19 = *(_DWORD *)(v10 + 12);
          *(_DWORD *)(v10 + 4) += 3;
          *(_DWORD *)(v10 + 12) = 8 * v19;
          result = sub_1FE44B0((int *)(v10 + 4), 8 * v19);
          *(_QWORD *)(v10 + 16) = result;
          goto LABEL_12;
        case 4:
LABEL_48:
          *(_BYTE *)(v10 + 1) = 5;
          result = sub_1FE44B0((int *)(v10 + 4), *(_DWORD *)(v10 + 12));
          *(_QWORD *)(v10 + 16) = result;
          *(_DWORD *)(v10 + 12) = 1;
          goto LABEL_12;
        case 5:
LABEL_49:
          v20 = *(_DWORD *)(v10 + 12);
          v21 = 4;
          if ( v20 )
          {
            _BitScanReverse(&v22, v20);
            v21 = (v22 ^ 0x1F) - 28;
          }
          v23 = *(_DWORD *)(v10 + 4) + v21;
          v24 = 0;
          *(_BYTE *)(v10 + 1) = 6;
          *(_DWORD *)(v10 + 4) = v23;
          *(_DWORD *)(v10 + 12) = 8;
          if ( (int)(v23 + 3) >= 0 )
          {
            v24 = 1;
            v4 = 1 << (v23 + 3);
          }
          *(_DWORD *)(v10 + 16) = v4;
          *(_BYTE *)(v10 + 20) = v24;
          goto LABEL_13;
        case 6:
LABEL_54:
          v25 = *(_DWORD *)(v10 + 12);
          v26 = 5;
          if ( v25 )
          {
            _BitScanReverse(&v27, v25);
            v26 = (v27 ^ 0x1F) - 27;
          }
          v28 = *(_DWORD *)(v10 + 4) + v26;
          v29 = 0;
          *(_BYTE *)(v10 + 1) = 6;
          *(_DWORD *)(v10 + 4) = v28;
          *(_DWORD *)(v10 + 12) = 16;
          if ( (int)(v28 + 2) >= 0 )
          {
            v29 = 1;
            v3 = 1 << (v28 + 2);
          }
          *(_DWORD *)(v10 + 16) = v3;
          *(_BYTE *)(v10 + 20) = v29;
          goto LABEL_13;
        case 7:
LABEL_64:
          v35 = *(_DWORD *)(v10 + 12);
          v36 = 6;
          if ( v35 )
          {
            _BitScanReverse(&v37, v35);
            v36 = (v37 ^ 0x1F) - 26;
          }
          v38 = *(_DWORD *)(v10 + 4) + v36;
          v39 = 0;
          *(_BYTE *)(v10 + 1) = 6;
          *(_DWORD *)(v10 + 4) = v38;
          *(_DWORD *)(v10 + 12) = 32;
          if ( (int)(v38 + 1) >= 0 )
          {
            v39 = 1;
            v2 = 1 << (v38 + 1);
          }
          *(_DWORD *)(v10 + 16) = v2;
          *(_BYTE *)(v10 + 20) = v39;
          goto LABEL_13;
        case 8:
LABEL_59:
          v30 = *(_DWORD *)(v10 + 12);
          v31 = 7;
          if ( v30 )
          {
            _BitScanReverse(&v30, v30);
            v31 = (v30 ^ 0x1F) - 25;
          }
          v32 = *(_DWORD *)(v10 + 4) + v31 < 0;
          v33 = *(_DWORD *)(v10 + 4) + v31;
          *(_BYTE *)(v10 + 1) = 6;
          v34 = 0;
          *(_DWORD *)(v10 + 4) = v33;
          *(_DWORD *)(v10 + 12) = 64;
          if ( !v32 )
          {
            v34 = 1;
            v5 = 1 << v33;
          }
          *(_DWORD *)(v10 + 16) = v5;
          *(_BYTE *)(v10 + 20) = v34;
          goto LABEL_13;
        case 9:
LABEL_8:
          if ( *(_DWORD *)(v10 + 12) == 8 )
            goto LABEL_3;
          v14 = *(_DWORD *)(v10 + 4);
          *(_DWORD *)(v10 + 12) = 8;
          result = 0;
          v15 = v14 + 3;
          if ( v15 >= 0 )
          {
            result = 1;
            v6 = 1 << v15;
          }
          *(_DWORD *)(v10 + 16) = v6;
          *(_BYTE *)(v10 + 20) = result;
          goto LABEL_12;
        case 10:
LABEL_69:
          if ( *(_DWORD *)(v10 + 12) == 16 )
            goto LABEL_3;
          v40 = *(_DWORD *)(v10 + 4);
          *(_DWORD *)(v10 + 12) = 16;
          result = 0;
          v41 = v40 + 2;
          if ( v41 >= 0 )
          {
            result = 1;
            v7 = 1 << v41;
          }
          *(_DWORD *)(v10 + 16) = v7;
          *(_BYTE *)(v10 + 20) = result;
          goto LABEL_12;
        case 11:
LABEL_73:
          if ( *(_DWORD *)(v10 + 12) == 32 )
            goto LABEL_3;
          v42 = *(_DWORD *)(v10 + 4);
          *(_DWORD *)(v10 + 12) = 32;
          result = 0;
          v43 = v42 + 1;
          if ( v43 >= 0 )
          {
            result = 1;
            v8 = 1 << v43;
          }
          *(_DWORD *)(v10 + 16) = v8;
          *(_BYTE *)(v10 + 20) = result;
          goto LABEL_12;
        case 12:
LABEL_77:
          if ( *(_DWORD *)(v10 + 12) == 64 )
            goto LABEL_3;
          v44 = *(_DWORD *)(v10 + 4);
          *(_DWORD *)(v10 + 12) = 64;
          result = 0;
          if ( v44 >= 0 )
          {
            result = 1;
            v9 = 1 << v44;
          }
          *(_DWORD *)(v10 + 16) = v9;
          *(_BYTE *)(v10 + 20) = result;
          goto LABEL_12;
        case 13:
LABEL_81:
          if ( *(int *)(v10 + 4) >= -3 )
            goto LABEL_3;
          goto LABEL_82;
        case 14:
LABEL_83:
          if ( *(int *)(v10 + 4) >= -2 )
            goto LABEL_3;
          goto LABEL_84;
        case 15:
LABEL_87:
          if ( *(int *)(v10 + 4) >= -1 )
            goto LABEL_3;
          goto LABEL_88;
        case 16:
LABEL_85:
          if ( *(int *)(v10 + 4) >= 0 )
            goto LABEL_3;
          goto LABEL_86;
        case 17:
LABEL_89:
          if ( *(int *)(v10 + 4) > 0 )
            goto LABEL_3;
          goto LABEL_90;
        case 18:
LABEL_2:
          if ( *(int *)(v10 + 4) > 1 )
            goto LABEL_3;
          goto LABEL_44;
        case 19:
LABEL_91:
          if ( *(int *)(v10 + 4) > 2 )
            goto LABEL_3;
          goto LABEL_92;
        case 20:
LABEL_93:
          if ( *(int *)(v10 + 4) < -2 )
            goto LABEL_3;
          goto LABEL_82;
        case 21:
LABEL_97:
          if ( *(int *)(v10 + 4) < -1 )
            goto LABEL_3;
          goto LABEL_84;
        case 22:
LABEL_99:
          if ( *(int *)(v10 + 4) < 0 )
            goto LABEL_3;
          goto LABEL_88;
        case 23:
LABEL_101:
          if ( *(int *)(v10 + 4) <= 0 )
            goto LABEL_3;
          goto LABEL_86;
        case 24:
LABEL_95:
          if ( *(int *)(v10 + 4) <= 1 )
            goto LABEL_3;
          goto LABEL_90;
        case 25:
LABEL_103:
          if ( *(int *)(v10 + 4) <= 2 )
            goto LABEL_3;
          goto LABEL_44;
        case 26:
LABEL_105:
          if ( *(int *)(v10 + 4) <= 3 )
            goto LABEL_3;
          goto LABEL_92;
        case 27:
LABEL_107:
          if ( *(int *)(v10 + 4) < -3 )
            goto LABEL_3;
LABEL_82:
          *(_DWORD *)(v10 + 4) = -3;
          result = sub_1FE44B0((int *)(v10 + 4), *(_DWORD *)(v10 + 12));
          *(_QWORD *)(v10 + 16) = result;
          goto LABEL_12;
        case 28:
LABEL_109:
          if ( *(int *)(v10 + 4) < -2 )
            goto LABEL_3;
LABEL_84:
          *(_DWORD *)(v10 + 4) = -2;
          result = sub_1FE44B0((int *)(v10 + 4), *(_DWORD *)(v10 + 12));
          *(_QWORD *)(v10 + 16) = result;
          goto LABEL_12;
        case 29:
LABEL_111:
          if ( *(int *)(v10 + 4) < -1 )
            goto LABEL_3;
LABEL_88:
          *(_DWORD *)(v10 + 4) = -1;
          result = sub_1FE44B0((int *)(v10 + 4), *(_DWORD *)(v10 + 12));
          *(_QWORD *)(v10 + 16) = result;
          goto LABEL_12;
        case 30:
LABEL_113:
          if ( *(int *)(v10 + 4) < 0 )
            goto LABEL_3;
LABEL_86:
          *(_DWORD *)(v10 + 4) = 0;
          result = sub_1FE44B0((int *)(v10 + 4), *(_DWORD *)(v10 + 12));
          *(_QWORD *)(v10 + 16) = result;
          goto LABEL_12;
        case 31:
LABEL_115:
          if ( *(int *)(v10 + 4) <= 0 )
            goto LABEL_3;
LABEL_90:
          *(_DWORD *)(v10 + 4) = 1;
          result = sub_1FE44B0((int *)(v10 + 4), *(_DWORD *)(v10 + 12));
          *(_QWORD *)(v10 + 16) = result;
          goto LABEL_12;
        case 32:
LABEL_43:
          if ( *(int *)(v10 + 4) <= 1 )
            goto LABEL_3;
LABEL_44:
          *(_DWORD *)(v10 + 4) = 2;
          result = sub_1FE44B0((int *)(v10 + 4), *(_DWORD *)(v10 + 12));
          *(_QWORD *)(v10 + 16) = result;
          goto LABEL_12;
        case 33:
LABEL_118:
          if ( *(int *)(v10 + 4) <= 2 )
            goto LABEL_3;
LABEL_92:
          *(_DWORD *)(v10 + 4) = 3;
          result = sub_1FE44B0((int *)(v10 + 4), *(_DWORD *)(v10 + 12));
          *(_QWORD *)(v10 + 16) = result;
          goto LABEL_12;
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
LABEL_117:
          result = (unsigned int)(result - 32);
          *(_BYTE *)(v10 + 25) = 1;
          *(_DWORD *)(v10 + 28) = result;
LABEL_12:
          if ( *(_BYTE *)(v10 + 1) != 10 )
            goto LABEL_13;
          return result;
        default:
LABEL_13:
          result = v11[2];
          if ( (result & 1) != 0 )
            *(_BYTE *)(v10 + 8) = 1;
          if ( (result & 2) != 0 )
            *(_BYTE *)(v10 + 10) = 1;
          if ( (result & 4) != 0 )
            *(_WORD *)(v10 + 9) = 257;
          if ( (result & 8) != 0 )
            *(_BYTE *)(v10 + 1) = 7;
          if ( (result & 0x10) != 0 )
            *(_BYTE *)(v10 + 1) = 6;
          if ( (result & 0x20) != 0 )
            *(_BYTE *)(v10 + 1) = 8;
          if ( (result & 0x40) != 0 )
            *(_BYTE *)(v10 + 1) = 9;
          if ( (result & 0x80u) != 0LL )
          {
            result = *(unsigned int *)(v10 + 12);
            *(_DWORD *)(v10 + 4) = 0;
            if ( (_DWORD)result == 16 )
            {
              result = 4;
            }
            else if ( (_DWORD)result == 32 )
            {
              result = 2;
            }
            else if ( (_DWORD)result != 8 )
            {
              result = 1;
            }
            *(_DWORD *)(v10 + 16) = result;
            *(_BYTE *)(v10 + 20) = 1;
          }
          break;
      }
      return result;
    default:
LABEL_7:
      result = v11[1];
      switch ( (char)result )
      {
        case 1:
          goto LABEL_45;
        case 2:
          goto LABEL_46;
        case 3:
          goto LABEL_47;
        case 4:
          goto LABEL_48;
        case 5:
          goto LABEL_49;
        case 6:
          goto LABEL_54;
        case 7:
          goto LABEL_64;
        case 8:
          goto LABEL_59;
        case 9:
          goto LABEL_8;
        case 10:
          goto LABEL_69;
        case 11:
          goto LABEL_73;
        case 12:
          goto LABEL_77;
        case 13:
          goto LABEL_81;
        case 14:
          goto LABEL_83;
        case 15:
          goto LABEL_87;
        case 16:
          goto LABEL_85;
        case 17:
          goto LABEL_89;
        case 18:
          goto LABEL_2;
        case 19:
          goto LABEL_91;
        case 20:
          goto LABEL_93;
        case 21:
          goto LABEL_97;
        case 22:
          goto LABEL_99;
        case 23:
          goto LABEL_101;
        case 24:
          goto LABEL_95;
        case 25:
          goto LABEL_103;
        case 26:
          goto LABEL_105;
        case 27:
          goto LABEL_107;
        case 28:
          goto LABEL_109;
        case 29:
          goto LABEL_111;
        case 30:
          goto LABEL_113;
        case 31:
          goto LABEL_115;
        case 32:
          goto LABEL_43;
        case 33:
          goto LABEL_118;
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
          goto LABEL_117;
        default:
          goto LABEL_12;
      }
  }
}
