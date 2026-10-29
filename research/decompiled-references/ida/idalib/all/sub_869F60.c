void __fastcall sub_869F60(__int64 a1, int *a2, unsigned __int64 a3)
{
  int *v3; // rbx
  unsigned __int8 *v4; // r13
  int v5; // r8d
  int v6; // ecx
  __int64 v7; // r11
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r10
  __int64 v10; // rdx
  unsigned __int8 *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  size_t v14; // r14
  int v15; // r12d
  char *i; // rbx
  char *v17; // r13
  unsigned __int8 *v18; // rbp
  unsigned __int8 v19; // al
  unsigned __int8 *v20; // r10
  __int64 v21; // rdx
  unsigned __int8 *v22; // r10
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  unsigned __int8 *v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rcx
  unsigned __int8 *v32; // rax
  int v33; // ebp
  int v34; // esi
  unsigned __int8 *v35; // r12
  unsigned __int8 *v36; // r14
  char v37; // bp
  int v38; // ebx
  unsigned __int8 *v39; // r13
  int v40; // eax
  unsigned __int8 *v41; // rdx
  _BYTE *v42; // rbp
  int v43; // eax
  unsigned __int8 v44; // [rsp+7h] [rbp-A1h]
  unsigned __int8 *s1; // [rsp+8h] [rbp-A0h]
  unsigned __int8 *s1a; // [rsp+8h] [rbp-A0h]
  size_t n; // [rsp+10h] [rbp-98h]
  unsigned __int64 v48; // [rsp+18h] [rbp-90h]
  __int64 v49; // [rsp+20h] [rbp-88h]
  char v50; // [rsp+30h] [rbp-78h]
  int v51; // [rsp+30h] [rbp-78h]
  int v52; // [rsp+34h] [rbp-74h]
  int v53; // [rsp+38h] [rbp-70h]
  unsigned __int64 v54; // [rsp+38h] [rbp-70h]
  __int64 v55; // [rsp+40h] [rbp-68h]
  int *v56; // [rsp+48h] [rbp-60h]
  int v57; // [rsp+48h] [rbp-60h]
  unsigned __int64 v58; // [rsp+50h] [rbp-58h]
  __int64 v59; // [rsp+50h] [rbp-58h]
  unsigned __int8 *v60; // [rsp+58h] [rbp-50h]
  int *v61; // [rsp+60h] [rbp-48h]
  unsigned __int64 v62; // [rsp+68h] [rbp-40h]

  v3 = a2;
  v4 = *(unsigned __int8 **)(a1 + 16);
  v5 = *a2;
  if ( (unsigned __int64)v4 >= a3 || v5 > 0x100000 )
    goto LABEL_42;
  v6 = *v4;
  v7 = a1;
  v8 = a3;
  v9 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (unsigned __int8)(v6 + 121) > 6u )
          goto LABEL_22;
        v10 = 85;
        if ( !_bittest64(&v10, (unsigned int)(v6 + 121)) )
          goto LABEL_24;
        v11 = v4;
        do
          v11 += (unsigned __int16)__ROL2__(*(_WORD *)(v11 + 1), 8);
        while ( *v11 == 121 );
        if ( *v11 != 122
          || (v12 = *(_QWORD *)(v7 + 16),
              v13 = *(_QWORD *)(v7 + 24),
              v49 = v13,
              *(_DWORD *)(v13 + 4LL * (_QWORD)&v4[-v12])) )
        {
LABEL_24:
          switch ( (char)v6 )
          {
            case 78:
            case 79:
              goto LABEL_47;
            case 85:
            case 87:
              goto LABEL_67;
            case 86:
            case 88:
            case 89:
            case 90:
              goto LABEL_63;
            case 91:
              goto LABEL_31;
            case 92:
              goto LABEL_32;
            case 110:
            case 111:
              goto LABEL_71;
            case 122:
              goto LABEL_88;
            case -128:
            case -127:
            case -126:
            case -125:
            case -124:
            case -121:
            case -120:
            case -118:
            case -114:
            case -113:
            case -110:
              goto LABEL_59;
            case -123:
              goto LABEL_74;
            case -122:
              goto LABEL_80;
            case -119:
              goto LABEL_36;
            case -117:
            case -112:
              goto LABEL_26;
            case -116:
            case -111:
              goto LABEL_25;
            case -115:
              goto LABEL_78;
            case -103:
            case -102:
            case -101:
              goto LABEL_65;
            default:
              goto LABEL_57;
          }
        }
        if ( !*(_DWORD *)(v13 + 4LL * (_QWORD)&v11[-v12 + 1]) )
          break;
        if ( (unsigned __int64)v4 >= v9 )
          goto LABEL_19;
LABEL_99:
        switch ( (char)v6 )
        {
          case 78:
          case 79:
            goto LABEL_47;
          case 85:
          case 87:
LABEL_67:
            if ( v4[1] == 22 )
            {
              if ( (unsigned __int64)++v4 >= v8 )
                goto LABEL_42;
LABEL_86:
              v6 = 22;
            }
            else
            {
              if ( (unsigned __int64)v4 >= v9 )
              {
                *(_DWORD *)(*(_QWORD *)(v7 + 24) + 4LL * (_QWORD)&v4[-*(_QWORD *)(v7 + 16)]) = v5;
                v5 += 16;
                v25 = 1;
                goto LABEL_50;
              }
LABEL_69:
              if ( (unsigned __int64)(v4 + 1) >= v8 )
                goto LABEL_42;
              v6 = *++v4;
            }
            continue;
          case 86:
          case 88:
          case 89:
          case 90:
LABEL_63:
            if ( (unsigned __int64)v4 < v9 )
              goto LABEL_69;
            *(_DWORD *)(*(_QWORD *)(v7 + 24) + 4LL * (_QWORD)&v4[-*(_QWORD *)(v7 + 16)]) = v5;
            v5 += 8;
            v25 = 1;
            goto LABEL_50;
          case 91:
LABEL_31:
            if ( v4[3] != 22 )
              goto LABEL_32;
            v4 += 3;
            if ( (unsigned __int64)v4 < v8 )
              goto LABEL_86;
            goto LABEL_42;
          case 92:
LABEL_32:
            if ( (unsigned __int64)v4 >= v9 )
            {
              *(_DWORD *)(*(_QWORD *)(v7 + 24) + 4LL * (_QWORD)&v4[-*(_QWORD *)(v7 + 16)]) = v5;
              v5 += 16;
              v25 = 3;
              goto LABEL_50;
            }
            if ( (unsigned __int64)(v4 + 3) >= v8 )
              goto LABEL_42;
            v6 = v4[3];
            v4 += 3;
            continue;
          case 110:
          case 111:
LABEL_71:
            v28 = sub_867680((char *)v4 + 33);
            if ( v28 && (unsigned __int64)v4 >= v9 )
            {
              *(_DWORD *)(*(_QWORD *)(v7 + 24) + 4LL * (_QWORD)&v4[-*(_QWORD *)(v7 + 16)]) = v5;
              v5 += 8 * v28;
              v25 = 33;
              goto LABEL_50;
            }
            if ( (unsigned __int64)(v4 + 33) >= v8 )
              goto LABEL_42;
            v6 = v4[33];
            v4 += 33;
            break;
          case 122:
LABEL_88:
            v30 = *(_QWORD *)(v7 + 16);
            v31 = *(_QWORD *)(v7 + 24);
            v32 = v4;
            if ( *(_DWORD *)(v31 + 4LL * (_QWORD)&v4[-v30 + 1]) )
            {
              *(_DWORD *)(v31 + 4LL * (_QWORD)&v4[-v30]) = v5;
              v5 += 8;
              v32 = &v4[*(int *)(*(_QWORD *)(v7 + 24) + 4LL * (_QWORD)&v4[-*(_QWORD *)(v7 + 16) + 1])];
            }
            v4 = v32 + 3;
            if ( (unsigned __int64)(v32 + 3) >= v8 || v5 > 0x100000 )
              goto LABEL_42;
            v6 = v32[3];
            continue;
          case -128:
          case -127:
          case -126:
          case -125:
          case -124:
          case -121:
          case -120:
          case -118:
          case -114:
          case -113:
          case -110:
LABEL_59:
            *(_DWORD *)(*(_QWORD *)(v7 + 24) + 4LL * (_QWORD)&v4[-*(_QWORD *)(v7 + 16)]) = v5;
            v5 += 8;
            v21 = 3;
            goto LABEL_27;
          case -123:
LABEL_74:
            *(_DWORD *)(*(_QWORD *)(v7 + 24) + 4LL * (_QWORD)&v4[-*(_QWORD *)(v7 + 16)]) = v5;
            v29 = v4;
            do
            {
              if ( v29[3] == 127 )
              {
                v5 += 16;
                *(_DWORD *)(*(_QWORD *)(v7 + 24) + 4LL * (_QWORD)&v4[-*(_QWORD *)(v7 + 16) + 1]) = 1;
                v21 = 3;
LABEL_27:
                if ( (unsigned __int64)v4 < v9 )
                  goto LABEL_28;
LABEL_37:
                v22 = v4;
                do
                {
                  v22 += (unsigned __int16)__ROL2__(*(_WORD *)(v22 + 1), 8);
                  v23 = *v22;
                }
                while ( *v22 == 121 );
                v9 = (unsigned __int64)(v22 + 3);
                if ( v23 == 122 )
                  v9 = 0;
                v4 += v21;
                if ( (unsigned __int64)v4 < v8 )
                  goto LABEL_29;
                goto LABEL_42;
              }
              v29 += (unsigned __int16)__ROL2__(*(_WORD *)(v29 + 1), 8);
            }
            while ( *v29 == 121 );
            v5 += 8;
LABEL_36:
            v21 = 3;
            if ( (unsigned __int64)v4 >= v9 )
              goto LABEL_37;
LABEL_28:
            v4 += v21;
            if ( (unsigned __int64)v4 < v8 )
            {
LABEL_29:
              if ( v5 <= 0x100000 )
                goto LABEL_30;
            }
            goto LABEL_42;
          case -122:
LABEL_80:
            *(_DWORD *)(*(_QWORD *)(v7 + 24) + 4LL * (_QWORD)&v4[-*(_QWORD *)(v7 + 16)]) = v5;
            v5 += 16;
            v21 = 3;
            goto LABEL_27;
          case -119:
            goto LABEL_36;
          case -117:
          case -112:
            goto LABEL_26;
          case -116:
          case -111:
LABEL_25:
            *(_DWORD *)(*(_QWORD *)(v7 + 24) + 4LL * (_QWORD)&v4[-*(_QWORD *)(v7 + 16)]) = v5;
            v5 += 8;
LABEL_26:
            v21 = 5;
            goto LABEL_27;
          case -115:
LABEL_78:
            *(_DWORD *)(*(_QWORD *)(v7 + 24) + 4LL * (_QWORD)&v4[-*(_QWORD *)(v7 + 16)]) = 0;
            v21 = 3;
            if ( (unsigned __int8)(v4[(unsigned __int16)__ROL2__(*(_WORD *)(v4 + 1), 8)] - 123) <= 1u )
            {
              *(_DWORD *)(*(_QWORD *)(v7 + 24) + 4LL * (_QWORD)&v4[-*(_QWORD *)(v7 + 16)]) = v5;
              v5 += 8;
            }
            goto LABEL_27;
          case -103:
          case -102:
          case -101:
LABEL_65:
            if ( (unsigned __int64)(v4 + 1) >= v8 )
              goto LABEL_42;
            LOBYTE(v6) = *++v4;
            goto LABEL_22;
          default:
            goto LABEL_57;
        }
      }
      v60 = v11 + 3;
      v14 = v11 + 3 - v4;
      v44 = v11[3];
      n = v14;
      if ( (_BYTE)v6 == v44 )
        break;
      if ( (unsigned __int8)(v44 + 103) > 1u )
        goto LABEL_24;
      v51 = 1;
      v35 = v11 + 3;
LABEL_103:
      v54 = v9;
      v36 = v35;
      v37 = v6;
      s1a = v4;
      v57 = v5;
      v59 = v7;
      v62 = v8;
      v61 = v3;
      v38 = 0;
      while ( v36[1] == 0x89 )
      {
        if ( v37 != v36[4] )
          break;
        v39 = v36 + 4;
        do
          v39 += (unsigned __int16)__ROL2__(*(_WORD *)(v39 + 1), 8);
        while ( *v39 == 121 );
        if ( v39 + 3 - v36 != n + 4 || memcmp(s1a, v36 + 4, n) )
          break;
        ++v38;
        if ( v39[3] != v44 )
        {
          v9 = v54;
          v4 = s1a;
          v5 = v57;
          v7 = v59;
          v3 = v61;
          v8 = v62;
          goto LABEL_119;
        }
        v36 = v39 + 3;
      }
      v40 = v38;
      v9 = v54;
      v52 = v38;
      v4 = s1a;
      v5 = v57;
      v7 = v59;
      v3 = v61;
      v8 = v62;
      if ( v36[1] != v37 )
        goto LABEL_119;
      if ( v40 <= 0 )
        goto LABEL_119;
      v41 = v36 + 1;
      do
        v41 += (unsigned __int16)__ROL2__(*(_WORD *)(v41 + 1), 8);
      while ( *v41 == 121 );
      v42 = v41 + 3;
      if ( v41 + 3 - v36 != n + 1 )
        goto LABEL_119;
      v43 = memcmp(s1a, v36 + 1, n);
      v9 = v54;
      v5 = v57;
      v7 = v59;
      v8 = v62;
      if ( v43 )
        goto LABEL_119;
      do
      {
        if ( *v42 != 122 )
          break;
        ++v43;
        v42 += 3;
      }
      while ( v43 < v52 );
      if ( v43 == v52 )
      {
        *(_DWORD *)(v49 + 4LL * (_QWORD)&v35[-v12] - 8) = (_DWORD)v42 - (_DWORD)v35;
        *(_DWORD *)(*(_QWORD *)(v59 + 24) + 4LL * (_QWORD)&v35[-*(_QWORD *)(v59 + 16)] - 4) = v44 - 114;
        *(_DWORD *)(*(_QWORD *)(v59 + 24) + 4LL * (_QWORD)&v35[-*(_QWORD *)(v59 + 16)]) = v43 + 2;
        if ( v51 == 1 )
          goto LABEL_113;
        --v51;
        v33 = (_DWORD)v35 - ((*(v35 - 1) | (*(v35 - 2) << 8)) + 3);
      }
      else
      {
LABEL_119:
        v33 = (int)v35;
      }
LABEL_94:
      if ( v51 <= 2 )
      {
        LOBYTE(v6) = *v4;
        goto LABEL_22;
      }
      *(_DWORD *)(*(_QWORD *)(v7 + 24) + 4LL * (_QWORD)&v60[-*(_QWORD *)(v7 + 16)] - 8) = v33 - (_DWORD)v60;
      *(_DWORD *)(*(_QWORD *)(v7 + 24) + 4LL * (_QWORD)&v60[-*(_QWORD *)(v7 + 16)] - 4) = 41;
      *(_DWORD *)(*(_QWORD *)(v7 + 24) + 4LL * (_QWORD)&v60[-*(_QWORD *)(v7 + 16)]) = v51;
LABEL_113:
      LOBYTE(v6) = *v4;
      if ( (unsigned __int64)v4 >= v9 )
      {
LABEL_19:
        v20 = v4;
        do
          v20 += (unsigned __int16)__ROL2__(*(_WORD *)(v20 + 1), 8);
        while ( *v20 == 121 );
        v9 = (unsigned __int64)(v20 + 3);
        goto LABEL_22;
      }
      if ( (unsigned __int8)v6 > 0x4Du )
      {
        if ( (unsigned __int8)(v6 - 78) > 0x4Du )
          goto LABEL_57;
        goto LABEL_99;
      }
      if ( (unsigned __int8)v6 <= 0x20u )
        goto LABEL_57;
      v27 = 1LL << ((unsigned __int8)v6 - 33);
      if ( (v27 & 0x1D00E807403ALL) != 0 )
      {
LABEL_81:
        v25 = 2;
        if ( (unsigned __int64)v4 < v9 )
          goto LABEL_50;
        *(_DWORD *)(*(_QWORD *)(v7 + 24) + 4LL * (_QWORD)&v4[-*(_QWORD *)(v7 + 16)]) = v5;
        v5 += 8;
        v26 = -2;
        goto LABEL_49;
      }
      if ( (v27 & 0x2801400A005LL) == 0 )
      {
        if ( (v27 & 0x3001800C0LL) == 0 )
          goto LABEL_57;
        goto LABEL_47;
      }
LABEL_83:
      if ( (unsigned __int64)(v4 + 2) >= v8 )
        goto LABEL_42;
      v6 = v4[2];
      v4 += 2;
    }
    v50 = v6;
    v15 = 1;
    v48 = v9;
    s1 = v4;
    v53 = v5;
    v55 = v7;
    v58 = v8;
    v56 = v3;
    for ( i = (char *)(v11 + 3); ; i = v17 + 3 )
    {
      v17 = i;
      do
        v17 += (unsigned __int16)__ROL2__(*(_WORD *)(v17 + 1), 8);
      while ( *v17 == 121 );
      v18 = (unsigned __int8 *)(v17 + 3);
      if ( v14 != v17 + 3 - i || memcmp(s1, i, v14) )
      {
        v33 = (int)i;
        v51 = v15;
        v9 = v48;
        v4 = s1;
        v5 = v53;
        v7 = v55;
        v3 = v56;
        v8 = v58;
        if ( v15 == 2 )
        {
          LOBYTE(v6) = v44;
          goto LABEL_24;
        }
        goto LABEL_94;
      }
      v19 = v17[3];
      ++v15;
      if ( v19 != v44 )
        break;
    }
    v34 = v15;
    LOBYTE(v6) = v50;
    v9 = v48;
    v51 = v15;
    v4 = s1;
    v5 = v53;
    v35 = v18;
    v7 = v55;
    v3 = v56;
    v8 = v58;
    if ( v34 != 2 )
    {
      if ( (unsigned __int8)(v19 + 103) > 1u )
        goto LABEL_119;
      v44 = v19;
      goto LABEL_103;
    }
    LOBYTE(v6) = v44;
LABEL_22:
    if ( (unsigned __int8)v6 > 0x4Du )
      break;
    if ( (unsigned __int8)v6 <= 0x20u )
      goto LABEL_57;
    v24 = 1LL << ((unsigned __int8)v6 - 33);
    if ( (v24 & 0x1D00E807403ALL) != 0 )
      goto LABEL_81;
    if ( (v24 & 0x2801400A005LL) != 0 )
    {
      if ( (unsigned __int64)v4 < v9 )
        goto LABEL_83;
      *(_DWORD *)(*(_QWORD *)(v7 + 24) + 4LL * (_QWORD)&v4[-*(_QWORD *)(v7 + 16)]) = v5;
      v5 += 16;
      v26 = -2;
      goto LABEL_49;
    }
    if ( (v24 & 0x3001800C0LL) == 0 )
      goto LABEL_57;
LABEL_47:
    v25 = 4;
    if ( (unsigned __int64)v4 >= v9 )
    {
      *(_DWORD *)(*(_QWORD *)(v7 + 24) + 4LL * (_QWORD)&v4[-*(_QWORD *)(v7 + 16)]) = v5;
      v5 += 16;
      v26 = -4;
LABEL_49:
      v25 = -v26;
    }
LABEL_50:
    v4 += v25;
    if ( v5 > 0x100000 || (unsigned __int64)v4 >= v8 )
      goto LABEL_42;
LABEL_30:
    v6 = *v4;
  }
  if ( (unsigned __int8)(v6 - 78) <= 0x4Du )
    goto LABEL_24;
LABEL_57:
  v4 = (unsigned __int8 *)sub_868FC0(v4);
  if ( (unsigned __int64)v4 < v8 )
    goto LABEL_30;
LABEL_42:
  *v3 = v5;
}
