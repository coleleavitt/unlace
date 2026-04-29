__int64 __fastcall sub_12830(int a1, unsigned int *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbp
  unsigned __int64 v4; // rcx
  __int64 v5; // r12
  __int64 v6; // r8
  __int64 result; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rsi
  int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  int v15; // r8d
  __int16 v16; // r14
  int v17; // r13d
  int dword; // eax
  __int64 v19; // r13
  int v20; // r14d
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+8h] [rbp-30h]
  unsigned __int64 v23; // [rsp+8h] [rbp-30h]
  __int64 v24; // [rsp+8h] [rbp-30h]
  int v25; // [rsp+8h] [rbp-30h]
  unsigned __int64 v26; // [rsp+8h] [rbp-30h]

  v2 = *a2;
  v3 = *(_QWORD *)(a2 + 1);
  v4 = *(_QWORD *)(a2 + 5);
  v5 = *(_QWORD *)(a2 + 3);
  v6 = (unsigned __int8)v2;
  switch ( (char)v2 )
  {
    case 1:
    case 61:
    case 63:
      switch ( (char)v2 )
      {
        case 1:
        case 24:
        case 63:
          v10 = 4;
          v15 = v4 - v5;
          goto LABEL_8;
        case 17:
        case 59:
        case 60:
          v17 = v4 - v5;
          if ( (_BYTE)v2 != 17 && v4 > 0xFFFF )
            goto LABEL_38;
          goto LABEL_29;
        case 31:
          v19 = v4 - 2 - v3;
          v20 = v4 - v5;
          LODWORD(v21) = (__int16)v19;
          if ( (__int16)v19 == v19 )
            goto LABEL_36;
          goto LABEL_34;
        case 32:
          LODWORD(v19) = v4 - v3;
          v20 = v4 - v5;
          v21 = (char)(v4 - v3);
          if ( v21 == v4 - v3 )
          {
LABEL_36:
            v15 = v20;
            LODWORD(v4) = v21;
            v10 = 4;
          }
          else
          {
LABEL_34:
            sub_40E00(v3, *(_QWORD *)(a2 + 5), v2, v4, (unsigned __int8)v2);
            LODWORD(v4) = v19;
            v15 = v20;
            v10 = 4;
          }
          break;
        case 61:
          if ( v4 > 0xFFFFFF )
          {
            a2 = *(unsigned int **)(a2 + 5);
            LODWORD(v24) = v4;
            sub_40E00(v3, a2, v2, v4, (unsigned __int8)v2);
          }
          else
          {
            v24 = *(_QWORD *)(a2 + 5);
          }
          v10 = 4;
          dword = get_dword(v3, a2, v2, v4, v6);
          v15 = v24 - v5;
          LODWORD(v4) = v24 | dword & 0xFF000000;
          break;
        case 62:
          v17 = v4 - v5;
          if ( v4 <= 0xFFFFFF )
          {
LABEL_29:
            v15 = v17;
            v10 = 4;
          }
          else
          {
LABEL_38:
            v25 = *(_QWORD *)(a2 + 5);
            sub_40E00(v3, *(_QWORD *)(a2 + 5), v2, v4, (unsigned __int8)v2);
            v15 = v17;
            LODWORD(v4) = v25;
            v10 = 4;
          }
          break;
        default:
          v10 = 4;
          v15 = v4 - v5;
          LODWORD(v4) = 0;
          break;
      }
      goto LABEL_8;
    case 17:
    case 31:
    case 59:
    case 60:
      switch ( (char)v2 )
      {
        case 17:
        case 59:
        case 60:
          if ( v4 > 0xFFFF && (_BYTE)v2 != 17 )
          {
            v23 = *(_QWORD *)(a2 + 5);
            sub_40E00(v3, v23, v2, v4, (unsigned __int8)v2);
            v4 = v23;
          }
          goto LABEL_18;
        case 24:
LABEL_18:
          v8 = v4;
          goto LABEL_19;
        case 31:
          v8 = v4 - 2 - v3;
          if ( v8 == (__int16)v8 )
            goto LABEL_19;
          v16 = 1;
          goto LABEL_22;
        case 32:
          v8 = v4 - v3;
          if ( v4 - v3 != (char)(v4 - v3) )
            sub_40E00(v3, *(_QWORD *)(a2 + 5), v2, v4, (unsigned __int8)v2);
          goto LABEL_19;
        default:
          v8 = 0;
          goto LABEL_19;
      }
    case 24:
    case 32:
      switch ( (char)v2 )
      {
        case 24:
          v8 = *(_QWORD *)(a2 + 5);
          goto LABEL_6;
        case 31:
          v8 = v4 - 2 - v3;
          if ( v8 == (__int16)v8 )
            goto LABEL_6;
          v16 = 13;
LABEL_22:
          sub_40E00(v3, *(_QWORD *)(a2 + 5), v2, v4, (unsigned __int8)v2);
          if ( v16 == 13 )
            goto LABEL_6;
LABEL_19:
          v9 = v8;
          v10 = 1;
          put_word(v3, v9);
          break;
        case 32:
          LODWORD(v8) = v4 - v3;
          if ( v4 - v3 != (char)(v4 - v3) )
            sub_40E00(v3, *(_QWORD *)(a2 + 5), v2, v4, (unsigned __int8)v2);
          goto LABEL_6;
        default:
          LODWORD(v8) = 0;
LABEL_6:
          v9 = (unsigned int)v8;
          v10 = 13;
          put_byte(v3, v9);
          break;
      }
      goto LABEL_7;
    case 62:
      if ( v4 > 0xFFFFFF )
      {
        v26 = *(_QWORD *)(a2 + 5);
        sub_40E00(v3, v26, v2, v4, (unsigned __int8)v2);
        v4 = v26;
      }
      v22 = v4;
      v10 = 4;
      put_byte(v3, (unsigned int)(v4 >> 16));
      v9 = v22;
      put_word(v3 + 1, v22);
LABEL_7:
      v14 = get_dword(v3, v9, v11, v12, v13);
      v15 = 0;
      LODWORD(v4) = v14;
LABEL_8:
      sub_42050(a1, v3, v5, v4, v15, v10, 0, 0, 0);
      result = 0;
      break;
    default:
      result = 2;
      break;
  }
  return result;
}
