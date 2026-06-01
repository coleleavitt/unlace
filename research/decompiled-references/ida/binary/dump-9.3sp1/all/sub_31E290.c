unsigned __int64 __fastcall sub_31E290(
        unsigned int *a1,
        _QWORD *a2,
        char a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v10; // rdi
  _DWORD *v11; // r15
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  char v17; // r13
  char v18; // r12
  unsigned int v19; // eax
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r9d
  char v28; // r14
  char v29; // r13
  __int64 v30; // rax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned __int8 v33; // al
  __int64 v34; // rsi
  __int64 (__fastcall *v35)(); // rax
  int v36; // eax
  __int64 v37; // rcx
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  _BYTE *v42; // rdx
  int v43; // ecx
  __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // r14
  _QWORD *v47; // rdx
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx

  v10 = a2[1];
  v11 = *(_DWORD **)(v10 + 1504);
  a2[4] = a1;
  if ( (*(_BYTE *)v10 & 4) == 0 )
  {
    if ( *((_QWORD *)a1 + 3) == -1 )
      sub_31B3B0((__int64)a2, 0xC66Bu, *(double *)a4.m128_u64);
    sub_330F80(v10);
    v12 = a2[1];
    v13 = sub_330F80(v12);
    if ( !(unsigned __int8)sub_332920(v12 + 8, v13) )
      sub_31B3B0((__int64)a2, 0xC6AFu, *(double *)a4.m128_u64);
  }
  v14 = *((_QWORD *)a1 + 1);
  if ( v14 )
  {
    if ( *(unsigned int **)(v14 + 16) != a1 )
      sub_31B3B0((__int64)a2, 0xC66Du, *(double *)a4.m128_u64);
    v15 = *((_QWORD *)a1 + 2);
    if ( !v15 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v15 = *((_QWORD *)a1 + 2);
  if ( v15 )
  {
LABEL_7:
    if ( *(unsigned int **)(v15 + 8) != a1 )
      sub_31B3B0((__int64)a2, 0xC66Eu, *(double *)a4.m128_u64);
LABEL_8:
    if ( !a3 )
      sub_31B3B0((__int64)a2, 0xC66Fu, *(double *)a4.m128_u64);
    v16 = *a1;
    goto LABEL_10;
  }
  v16 = *a1;
  v17 = *((_BYTE *)a1 + 64) != 0;
  if ( a3 )
  {
LABEL_10:
    v17 = *((_BYTE *)a1 + 64) != 0;
    v18 = 0;
    goto LABEL_11;
  }
  if ( !(unsigned __int8)sub_32ED70(v16) )
    sub_31B3B0((__int64)a2, 0xC670u, *(double *)a4.m128_u64);
  v16 = *a1;
  v18 = 2;
LABEL_11:
  v19 = a1[1];
  v20 = v16;
  if ( (unsigned int)v16 <= 0x3E )
  {
    v21 = 0x4001F83F80000016LL;
    if ( _bittest64(&v21, v16) )
    {
      if ( (v19 & 0x1000) != 0 )
      {
        if ( (_DWORD)v16 == 62 )
        {
          if ( a3 )
          {
LABEL_16:
            v18 |= 4u;
            if ( !sub_31B590((__int64)(a1 + 8), (__int64)v11, *((_QWORD *)a1 + 3), v21, a6, a7) )
              sub_31B3B0((__int64)a2, 0xC677u, *(double *)a4.m128_u64);
            if ( !sub_31B590((__int64)(a1 + 12), (__int64)v11, *((_QWORD *)a1 + 3), v22, v23, v24) )
              sub_31B3B0((__int64)a2, 0xC678u, *(double *)a4.m128_u64);
            if ( !sub_31B590((__int64)(a1 + 16), (__int64)v11, *((_QWORD *)a1 + 3), v25, v26, v27) )
              sub_31B3B0((__int64)a2, 0xC679u, *(double *)a4.m128_u64);
            LODWORD(v16) = *a1;
            v28 = 4;
            v29 = 4;
            v20 = *a1;
            goto LABEL_44;
          }
LABEL_172:
          sub_31B3B0((__int64)a2, 0xC672u, *(double *)a4.m128_u64);
        }
LABEL_22:
        sub_31B3B0((__int64)a2, 0xCDF3u, *(double *)a4.m128_u64);
      }
      if ( (unsigned int)v16 > 0x12 )
        goto LABEL_67;
      goto LABEL_33;
    }
  }
  v21 = (v19 >> 4) & 1;
  if ( ((a1[1] & 0x10) != 0) != (int)v16 > 62 )
    sub_31B3B0((__int64)a2, 0xC671u, *(double *)a4.m128_u64);
  if ( (v19 & 0x1000) != 0 )
    goto LABEL_22;
  if ( (unsigned int)v16 <= 0x12 )
  {
LABEL_33:
    v30 = 1LL << v16;
    if ( ((1LL << v16) & 0x7FE8) != 0 )
    {
      if ( a3 != v17 )
LABEL_74:
        sub_31B3B0((__int64)a2, 0xC673u, *(double *)a4.m128_u64);
      goto LABEL_37;
    }
    if ( (v30 & 0x78014) != 0 )
    {
      if ( !*((_BYTE *)a1 + 64) )
        v18 = 2;
      goto LABEL_37;
    }
    if ( (v30 & 3) != 0 )
    {
      if ( !a3 )
        goto LABEL_172;
LABEL_37:
      if ( (_DWORD)v16 )
      {
LABEL_38:
        if ( ((1LL << v16) & 0x3FFDFFFF006LL) != 0 )
        {
          if ( !*((_BYTE *)a1 + 32) || !*((_BYTE *)a1 + 48) )
LABEL_193:
            sub_31B3B0((__int64)a2, 0xC67Fu, *(double *)a4.m128_u64);
          goto LABEL_43;
        }
        if ( ((1LL << v16) & 0x20000FF8) != 0 )
        {
LABEL_64:
          if ( !*((_BYTE *)a1 + 32) || *((_BYTE *)a1 + 48) )
            sub_31B3B0((__int64)a2, 0xC681u, *(double *)a4.m128_u64);
LABEL_43:
          v28 = 0;
          v29 = 0;
          goto LABEL_44;
        }
      }
LABEL_40:
      if ( *((_BYTE *)a1 + 32) || *((_BYTE *)a1 + 48) || *((_BYTE *)a1 + 64) )
        sub_31B3B0((__int64)a2, 0xC676u, *(double *)a4.m128_u64);
      goto LABEL_43;
    }
LABEL_63:
    sub_31B3B0((__int64)a2, 0xC674u, *(double *)a4.m128_u64);
  }
  if ( (unsigned int)(v16 - 19) > 0x35 )
    goto LABEL_63;
LABEL_67:
  switch ( (int)v16 )
  {
    case '*':
    case '+':
    case ',':
    case '-':
    case '.':
    case '/':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case ':':
    case ';':
    case '<':
    case '=':
    case '>':
      if ( !a3 )
        goto LABEL_172;
      if ( (_DWORD)v16 != 42 )
        break;
      if ( !*((_BYTE *)a1 + 32) || *((_BYTE *)a1 + 48) || (unsigned __int8)(*((_BYTE *)a1 + 64) - 6) > 1u )
        sub_31B3B0((__int64)a2, 0xC683u, *(double *)a4.m128_u64);
      v18 = 17;
      v28 = 0;
      v29 = 0;
LABEL_51:
      if ( (v20 & 0xFFFFFFF7) == 0x36 || v20 == 1 )
        goto LABEL_53;
LABEL_90:
      v33 = *((_BYTE *)a1 + 64);
      if ( v33 != 4 )
        goto LABEL_115;
      if ( v20 != 61 || **((_DWORD **)a1 + 9) != 2 )
        goto LABEL_61;
      v32 = a1[1];
      if ( (v32 & 0x10) != 0 )
        goto LABEL_94;
      goto LABEL_54;
    case '8':
    case '9':
      break;
    default:
      if ( a3 != v17 )
        goto LABEL_74;
      if ( (unsigned int)v16 <= 0x2A )
        goto LABEL_38;
      break;
  }
  switch ( (int)v16 )
  {
    case '+':
    case ',':
    case '-':
    case '.':
    case '/':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
      if ( !*((_BYTE *)a1 + 32) || !*((_BYTE *)a1 + 48) || (unsigned __int8)(*((_BYTE *)a1 + 64) - 6) > 1u )
        sub_31B3B0((__int64)a2, 0xC684u, *(double *)a4.m128_u64);
      v31 = a1[13];
      v18 = 17;
      v28 = 0;
      v29 = 0;
      goto LABEL_49;
    case '5':
      if ( !*((_BYTE *)a1 + 32) || *((_BYTE *)a1 + 48) != 12 || *((_BYTE *)a1 + 64) )
        sub_31B3B0((__int64)a2, 0xC685u, *(double *)a4.m128_u64);
      v33 = 0;
      v28 = 32;
      v29 = 0;
      goto LABEL_137;
    case '6':
      if ( *((_BYTE *)a1 + 32) || !*((_BYTE *)a1 + 48) || !*((_BYTE *)a1 + 64) )
        sub_31B3B0((__int64)a2, 0xC67Du, *(double *)a4.m128_u64);
      v28 = 0;
      v29 = 0;
LABEL_127:
      v43 = v11[21];
LABEL_128:
      sub_31B410((__int64)a2, (__int64)(a1 + 12), (__int64)(a1 + 16), v43, *(double *)a4.m128_u64);
      v20 = *a1;
      goto LABEL_51;
    case '7':
      if ( (unsigned __int8)(*((_BYTE *)a1 + 32) - 6) > 1u || *((_BYTE *)a1 + 48) || *((_BYTE *)a1 + 64) )
        sub_31B3B0((__int64)a2, 0xC67Cu, *(double *)a4.m128_u64);
      v33 = 0;
      v28 = 0;
      v29 = 17;
      goto LABEL_137;
    case '8':
      if ( *((_BYTE *)a1 + 48) )
        sub_31B3B0((__int64)a2, 0xC686u, *(double *)a4.m128_u64);
      v29 = 1;
      goto LABEL_106;
    case '9':
      v29 = 0;
LABEL_106:
      v39 = *((unsigned __int8 *)a1 + 32);
      if ( (unsigned __int8)v39 <= 0xAu )
      {
        v40 = 1409;
        if ( _bittest64(&v40, v39) )
          sub_31B3B0((__int64)a2, 0xC687u, *(double *)a4.m128_u64);
      }
      v41 = a2[2];
      if ( v41 && (*(_BYTE *)(v41 + 25) & 8) != 0 && *((_BYTE *)a1 + 64) != 8 )
        sub_31B3B0((__int64)a2, 0xC688u, *(double *)a4.m128_u64);
      v42 = (_BYTE *)a2[1];
      if ( (char)v42[4] < 0 && (_BYTE)v39 != 11 && (*v42 & 4) == 0 )
      {
        v44 = a2[5];
        v45 = a2[6];
        v46 = *((_QWORD *)a1 + 3);
        v47 = (_QWORD *)(v44 + 8 * v45);
        if ( (_QWORD *)v44 != v47 )
        {
          v48 = (_QWORD *)a2[5];
          while ( v46 != *v48 )
          {
            if ( v47 == ++v48 )
              goto LABEL_173;
          }
          if ( v48 != v47 )
            sub_31B3B0((__int64)a2, 0xC840u, *(double *)a4.m128_u64);
        }
LABEL_173:
        if ( a2[7] < (unsigned __int64)(v45 + 1) )
        {
          v49 = qvector_reserve((__int64)(a2 + 5), v44, v45 + 1, 8);
          v50 = a2[6];
          a2[5] = v49;
          v47 = (_QWORD *)(v49 + 8 * v50);
        }
        *v47 = v46;
        v28 = 0;
        ++a2[6];
        LODWORD(v16) = *a1;
        v20 = *a1;
LABEL_44:
        switch ( (int)v16 )
        {
          case 1:
            v43 = a1[9];
            goto LABEL_128;
          case 2:
            sub_31B410((__int64)a2, (__int64)(a1 + 8), (__int64)(a1 + 12), a1[17], *(double *)a4.m128_u64);
            v20 = *a1;
            goto LABEL_51;
          case 3:
          case 4:
          case 5:
          case 7:
          case 68:
            goto LABEL_75;
          case 6:
            if ( a1[9] != 1 || a1[17] != 1 )
              sub_31B3B0((__int64)a2, 0xCC72u, *(double *)a4.m128_u64);
            goto LABEL_141;
          case 8:
          case 9:
            if ( (int)a1[9] >= (int)a1[17] )
              sub_31B3B0((__int64)a2, 0xC695u, *(double *)a4.m128_u64);
            goto LABEL_90;
          case 10:
          case 11:
            if ( (int)a1[9] <= (int)a1[17] )
              sub_31B3B0((__int64)a2, 0xC696u, *(double *)a4.m128_u64);
            if ( *((_BYTE *)a1 + 32) != 4 )
              goto LABEL_90;
            v37 = *((_QWORD *)a1 + 5);
            if ( (unsigned int)(*(_DWORD *)v37 - 10) > 1 || (*(_BYTE *)(v37 + 33) & 2) == 0 )
              goto LABEL_90;
            v29 = 4;
LABEL_60:
            v33 = *((_BYTE *)a1 + 64);
            if ( v33 == 4 )
              goto LABEL_61;
            goto LABEL_115;
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
          case 69:
          case 70:
          case 71:
          case 72:
            goto LABEL_71;
          case 22:
          case 23:
          case 24:
            if ( a1[13] != 1 )
              sub_31B3B0((__int64)a2, 0xC693u, *(double *)a4.m128_u64);
            v34 = a1[9];
            if ( *((_BYTE *)a1 + 48) != 2 )
              goto LABEL_76;
            v35 = *(__int64 (__fastcall **)())(*(_QWORD *)v11 + 328LL);
            if ( v35 == sub_14DA60 )
              goto LABEL_76;
            v36 = ((__int64 (__fastcall *)(_DWORD *, __int64))v35)(v11, v34);
            if ( v36 && *(unsigned __int8 *)(*((_QWORD *)a1 + 7) + 16LL) > v36 )
              sub_31B3B0((__int64)a2, 0xCB96u, *(double *)a4.m128_u64);
LABEL_75:
            LODWORD(v34) = a1[9];
LABEL_76:
            if ( a1[17] != (_DWORD)v34 )
              sub_31B3B0((__int64)a2, 0xC694u, *(double *)a4.m128_u64);
            v20 = *a1;
            goto LABEL_51;
          case 25:
          case 26:
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
            if ( a1[9] != a1[13] )
              sub_31B3B0((__int64)a2, 0xC690u, *(double *)a4.m128_u64);
            if ( a1[17] == 1 )
              goto LABEL_60;
            goto LABEL_166;
          case 27:
          case 28:
            if ( a1[13] != 1 || a1[17] != 1 )
              sub_31B3B0((__int64)a2, 0xC692u, *(double *)a4.m128_u64);
            goto LABEL_60;
          case 29:
            if ( a1[17] != 1 )
LABEL_166:
              sub_31B3B0((__int64)a2, 0xC691u, *(double *)a4.m128_u64);
LABEL_141:
            v33 = *((_BYTE *)a1 + 64);
            if ( v33 == 4 )
              goto LABEL_61;
            goto LABEL_115;
          case 43:
          case 44:
          case 45:
          case 46:
          case 47:
          case 48:
          case 49:
          case 50:
          case 51:
          case 52:
            v31 = a1[13];
            goto LABEL_49;
          case 54:
            goto LABEL_127;
          default:
            goto LABEL_51;
        }
      }
      v33 = *((_BYTE *)a1 + 64);
      v28 = 0;
      if ( v33 == 4 )
LABEL_61:
        sub_31B3B0((__int64)a2, 0xC697u, *(double *)a4.m128_u64);
LABEL_115:
      if ( v33 <= 4u )
      {
LABEL_137:
        if ( (unsigned __int8)(v33 - 2) > 1u )
          goto LABEL_53;
        goto LABEL_118;
      }
      if ( v33 <= 0xBu )
      {
        if ( v33 <= 9u )
          goto LABEL_53;
LABEL_118:
        sub_31B3B0((__int64)a2, 0xC9C4u, *(double *)a4.m128_u64);
      }
      if ( v33 == 13 )
        goto LABEL_118;
LABEL_53:
      v32 = a1[1];
      if ( (v32 & 0x10) != 0 )
      {
LABEL_94:
        v29 |= 8 * sub_1225C0((__int64)a1);
        v28 |= 8 * sub_1225E0((__int64)a1);
        v18 |= 8 * sub_122600(a1);
        if ( (a1[1] & 0x80u) == 0 )
          goto LABEL_95;
      }
      else
      {
LABEL_54:
        if ( (v32 & 0x80u) == 0 )
          goto LABEL_95;
      }
      if ( *a1 != 4 && (*a1 != 67 || a1[9] != a1[17]) )
        sub_31B3B0((__int64)a2, 0xCB9Bu, *(double *)a4.m128_u64);
LABEL_95:
      sub_31CCB0((unsigned __int8 *)a1 + 32, (__int64)a2, v29, a4);
      sub_31CCB0((unsigned __int8 *)a1 + 48, (__int64)a2, v28, a4);
      return sub_31CCB0((unsigned __int8 *)a1 + 64, (__int64)a2, v18, a4);
    case ';':
      if ( !*((_BYTE *)a1 + 32) || *((_BYTE *)a1 + 48) || *((_BYTE *)a1 + 64) )
        sub_31B3B0((__int64)a2, 0xC67Bu, *(double *)a4.m128_u64);
      v33 = 0;
      v28 = 0;
      v29 = 0;
      goto LABEL_137;
    case '<':
      goto LABEL_100;
    case '=':
      v18 |= 4u;
LABEL_100:
      if ( *((_BYTE *)a1 + 32) || *((_BYTE *)a1 + 48) || !*((_BYTE *)a1 + 64) )
        sub_31B3B0((__int64)a2, 0xC682u, *(double *)a4.m128_u64);
      v28 = 0;
      v29 = 0;
      goto LABEL_90;
    case '>':
      goto LABEL_16;
    case '?':
    case '@':
    case 'A':
    case 'B':
    case 'C':
    case 'D':
      goto LABEL_64;
    case 'E':
    case 'F':
    case 'G':
    case 'H':
      if ( !*((_BYTE *)a1 + 32) || !*((_BYTE *)a1 + 48) )
        goto LABEL_193;
      v28 = 0;
      v29 = 0;
LABEL_71:
      v31 = a1[17];
      if ( a1[13] != v31 )
        sub_31B3B0((__int64)a2, 0xC68Eu, *(double *)a4.m128_u64);
LABEL_49:
      if ( a1[9] != v31 )
        sub_31B3B0((__int64)a2, 0xC68Fu, *(double *)a4.m128_u64);
      v20 = v16;
      goto LABEL_51;
    default:
      goto LABEL_40;
  }
}
