__int64 __fastcall sub_747AD0(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char *v5; // rdx
  char *v6; // rcx
  char v7; // r15
  char v8; // bp
  __int64 v9; // rax
  char v11; // r14
  unsigned int v12; // r13d
  unsigned int *v13; // rsi
  const char *v14; // rcx
  __int64 v15; // r8
  char v16; // r13
  int v17; // eax
  char v18; // al
  __int16 v19; // ax
  char v20; // al
  int v21; // eax
  __int64 v22; // rax
  char v23; // bl
  unsigned __int64 v24; // rax
  char *v25; // rax
  char v26; // al
  __int64 v27; // rdx
  const char *v28; // rsi
  char v29; // r13
  char *v30; // rax
  unsigned int v31; // r14d
  char v32; // al
  char *v33; // rax
  char v34; // al
  __int64 v35; // rdx
  char *v36; // rsi
  char *v37; // rax
  char *v38; // rax
  unsigned int v39; // r12d
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  char *v43; // rax
  char v44; // al
  char *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdx
  const char *v50; // rsi
  char v51; // bl
  int v52; // edx
  unsigned int v53; // eax
  int v54; // eax
  char *v55; // rax
  char *v56; // rax
  char v57; // al
  unsigned int v58; // [rsp+18h] [rbp-A0h] BYREF
  unsigned int v59; // [rsp+1Ch] [rbp-9Ch] BYREF
  unsigned int v60; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v61; // [rsp+24h] [rbp-94h] BYREF
  unsigned int v62; // [rsp+28h] [rbp-90h] BYREF
  unsigned int v63; // [rsp+2Ch] [rbp-8Ch] BYREF
  char v64[72]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v65; // [rsp+78h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  v58 = 0;
  v5 = qword_2CAA5C0;
  v59 = 0;
  v6 = ++qword_2CAA5C0;
  v7 = *v5;
  v8 = (char)a1;
  switch ( *v5 )
  {
    case 'B':
      qword_2CAA5C0 = v5 + 2;
      switch ( v5[1] )
      {
        case 'B':
          v49 = 17;
          v50 = "UnsafeValueBuffer";
          goto LABEL_110;
        case 'O':
          sub_74F560(&v63, "Unknown", 7);
          v58 = v63;
          goto LABEL_112;
        case 'b':
          sub_74F560(&v63, "Bridge", 6);
          v58 = v63;
          goto LABEL_112;
        case 'f':
          goto LABEL_107;
        case 'i':
          goto LABEL_117;
        case 'o':
          sub_74F560(&v63, "Native", 6);
          v58 = v63;
LABEL_112:
          sub_74F560(&v63, "Object", 6);
          sub_7506B0(&v58, &v63);
          goto LABEL_102;
        case 'p':
          goto LABEL_116;
        case 't':
          v49 = 8;
          v50 = "SILToken";
LABEL_110:
          sub_74F560(&v63, v50, v49);
          v58 = v63;
          goto LABEL_102;
        case 'v':
          sub_74F810(&v63, &loc_636556, 3);
          v59 = v63;
          v63 = sub_747080(66, (char *)&loc_636556, v40, v41, v42);
          sub_7506B0(&v59, &v63);
          a2 = 120;
          a1 = &v59;
          sub_74F860(&v59, 120);
          v43 = qword_2CAA5C0;
          v5 = ++qword_2CAA5C0;
          v44 = *v43;
          switch ( v44 )
          {
            case 'i':
LABEL_117:
              v45 = (_BYTE *)(&loc_746E48 + 1);
              sub_74F810(&v63, 7630409, 3);
              v58 = v63;
              goto LABEL_108;
            case 'p':
LABEL_116:
              sub_74F560(&v63, "RawPointer", 10);
              v58 = v63;
LABEL_102:
              v58 = sub_750E60(&v59, &v58);
              if ( (dword_2CAA5CC & 8) == 0 )
              {
                sub_74F560(&v63, "Builtin.", 8);
                v58 = sub_750E60(&v63, &v58);
              }
              goto LABEL_4;
            case 'f':
LABEL_107:
              v45 = "Float";
              sub_74F560(&v63, "Float", 5);
              v58 = v63;
LABEL_108:
              v63 = sub_747080(95, v45, v46, v47, v48);
              sub_7506B0(&v58, &v63);
              goto LABEL_102;
          }
          break;
        case 'w':
          sub_74F810(&v63, 1685221207, 4);
          v58 = v63;
          goto LABEL_102;
        default:
          goto LABEL_2;
      }
      goto LABEL_2;
    case 'C':
    case 'O':
    case 'V':
      v9 = sub_749930(32 * (unsigned int)(v7 == 67));
      LOWORD(v58) = v9;
      HIBYTE(v58) = BYTE3(v9);
      goto LABEL_4;
    case 'D':
      if ( (_BYTE)a1 )
        goto LABEL_2;
      sub_747AD0(1);
      sub_74F810(&v63, 1718379859, 4);
      v58 = v63;
      goto LABEL_4;
    case 'E':
      qword_2CAA5C0 = v5 + 2;
      if ( v5[1] != 82 )
        goto LABEL_2;
      qword_2CAA5C0 = v5 + 3;
      if ( v5[2] != 82 )
        goto LABEL_2;
      sub_74F560(&v63, "<ERROR TYPE>", 12);
      v58 = v63;
      goto LABEL_4;
    case 'F':
    case 'f':
      goto LABEL_14;
    case 'G':
      v58 = sub_74A250();
      goto LABEL_4;
    case 'K':
      sub_74F560(&v63, "@autoclosure ", 13);
      v6 = qword_2CAA5C0;
      v58 = v63;
      goto LABEL_14;
    case 'M':
      if ( (_BYTE)a1 )
        goto LABEL_2;
      v23 = v5[1];
      v58 = sub_747AD0(0);
      if ( (dword_2CAA5CC & 8) != 0 )
        goto LABEL_4;
      if ( v23 != 80 )
        goto LABEL_35;
      sub_74F560(&v63, ".Protocol", 9);
      sub_7506B0(&v58, &v63);
      goto LABEL_4;
    case 'P':
      v20 = v5[1];
      if ( v20 == 77 )
      {
        v5 += 2;
        v7 = 0;
        qword_2CAA5C0 = v5;
        goto LABEL_32;
      }
LABEL_38:
      if ( v20 == 95 )
      {
        qword_2CAA5C0 = v6 + 1;
LABEL_133:
        sub_74F810(&v63, 7958081, 3);
        sub_7506B0(&v58, &v63);
        goto LABEL_4;
      }
      while ( 1 )
      {
        v63 = sub_74A310();
        sub_7506B0(&v58, &v63);
        if ( *qword_2CAA5C0 == 95 )
          break;
        if ( (_WORD)v58 )
        {
          sub_74F810(&v63, 2106912, 3);
          sub_7506B0(&v58, &v63);
        }
      }
      ++qword_2CAA5C0;
      if ( !(_WORD)v58 )
        goto LABEL_133;
LABEL_4:
      BYTE2(v58) = -64;
      return v58;
    case 'Q':
      v58 = sub_74A620(0);
      goto LABEL_4;
    case 'R':
      v18 = dword_2CAA5CC;
      if ( (dword_2CAA5CC & 0x4000) == 0 )
      {
        a1 = &v63;
        a2 = (__int64)"inout";
        sub_74F560(&v63, "inout", 5);
        v58 = v63;
        v18 = dword_2CAA5CC;
      }
      goto LABEL_28;
    case 'S':
      v58 = sub_7471D0((__int64)a1, a2, (__int64)v5, v6, a5);
      goto LABEL_4;
    case 'T':
    case 't':
      v11 = v5[1];
      v12 = 0;
      if ( v11 != 95 )
      {
        while ( 1 )
        {
          if ( v11 == 111 || (unsigned __int8)(v11 - 48) <= 9u )
          {
            if ( (dword_2CAA5CC & 0x400000) != 0 )
            {
              v13 = (_DWORD *)(&stru_203A10 + 16);
              sub_74F810(&v63, 2112032, 3);
            }
            else
            {
              v13 = (_DWORD *)&word_3A;
              sub_74F400(&v63, 58);
            }
            v62 = v63;
            v61 = sub_747580((_BYTE *)&off_F8 + 7, v13, (unsigned __int16)v63, v14, v15);
            v63 = sub_750E60(&v61, &v62);
            sub_7506B0(&v58, &v63);
          }
          ++v12;
          v63 = sub_747AD0(0);
          sub_7506B0(&v58, &v63);
          v6 = qword_2CAA5C0;
          v11 = *qword_2CAA5C0;
          if ( *qword_2CAA5C0 == 95 )
            break;
          if ( v12 )
            sub_750750(&v58);
        }
        if ( v12 > 0xFF )
          v12 = 255;
        v12 <<= 8;
      }
      qword_2CAA5C0 = v6 + 1;
      if ( v7 == 116 )
      {
        sub_750340(&v58, 1);
        v52 = dword_2CAA5C8 | 0x10000;
      }
      else
      {
        v52 = dword_2CAA5C8;
      }
      dword_2CAA5C8 = v52 | v12 | 1;
      sub_752830(&v58);
      goto LABEL_4;
    case 'W':
      v58 = sub_74A5B0();
      goto LABEL_4;
    case 'X':
      v6 = v5 + 2;
      qword_2CAA5C0 = v5 + 2;
      switch ( v5[1] )
      {
        case 'B':
          v29 = v5[2];
          if ( v29 != 71 )
          {
            a2 = 123;
            a1 = &v58;
            sub_74F860(&v58, 123);
            v30 = qword_2CAA5C0;
            if ( *qword_2CAA5C0 != 95 )
              goto LABEL_82;
            ++qword_2CAA5C0;
            sub_74F860(&v58, 125);
            goto LABEL_4;
          }
          qword_2CAA5C0 = v5 + 3;
          a2 = 123;
          a1 = &v58;
          v58 = sub_749030();
          sub_74F860(&v58, 123);
          v30 = qword_2CAA5C0;
          if ( *qword_2CAA5C0 == 95 )
          {
            ++qword_2CAA5C0;
            sub_74F860(&v58, 125);
          }
          else
          {
            while ( 1 )
            {
LABEL_82:
              v5 = v30 + 1;
              qword_2CAA5C0 = v30 + 1;
              v32 = *v30;
              if ( v32 == 105 )
              {
                v31 = 544499052;
              }
              else
              {
                if ( v32 != 109 )
                  goto LABEL_2;
                v31 = 544366966;
              }
              v62 = sub_747AD0(0);
              sub_74F810(&v61, v31, 4);
              a2 = (__int64)&v63;
              v63 = sub_750E60(&v61, &v62);
              sub_7506B0(&v58, &v63);
              if ( *qword_2CAA5C0 == 95 )
                break;
              a1 = &v58;
              sub_750750(&v58);
              v30 = qword_2CAA5C0;
            }
            ++qword_2CAA5C0;
            sub_74F860(&v58, 125);
            if ( v29 != 71 )
              goto LABEL_4;
          }
          sub_74F860(&v58, 60);
          v56 = qword_2CAA5C0;
          if ( *qword_2CAA5C0 != 95 )
          {
            while ( 1 )
            {
              v63 = sub_747AD0(0);
              sub_7506B0(&v58, &v63);
              v56 = qword_2CAA5C0;
              if ( *qword_2CAA5C0 == 95 )
                break;
              sub_750750(&v58);
            }
          }
          qword_2CAA5C0 = v56 + 1;
          sub_74F860(&v58, 62);
          goto LABEL_4;
        case 'F':
          a2 = (__int64)"@callee_";
          v60 = 0;
          a1 = &v61;
          sub_74F560(&v61, "@callee_", 8);
          v33 = qword_2CAA5C0;
          v5 = ++qword_2CAA5C0;
          v34 = *v33;
          if ( v34 == 111 )
            goto LABEL_155;
          if ( v34 > 111 )
          {
            if ( v34 != 116 )
              goto LABEL_2;
            sub_74F810(&v63, 1852401780, 4);
            v60 = v63;
            goto LABEL_166;
          }
          if ( v34 == 100 )
          {
            sub_750270(&v61, 28277);
LABEL_155:
            v35 = 5;
            v36 = "owned";
          }
          else
          {
            if ( v34 != 103 )
              goto LABEL_2;
            v35 = 10;
            v36 = "guaranteed";
          }
          sub_74F560(&v63, v36, v35);
          a2 = (__int64)&v63;
          a1 = &v61;
          sub_7506B0(&v61, &v63);
          v37 = qword_2CAA5C0;
          if ( *qword_2CAA5C0 != 67 )
            goto LABEL_91;
          v5 = qword_2CAA5C0 + 2;
          qword_2CAA5C0 += 2;
          v57 = v37[1];
          if ( v57 == 99 )
          {
            sub_74F400(&v63, 99);
            v60 = v63;
            goto LABEL_166;
          }
          if ( v57 > 99 )
          {
            if ( v57 == 109 )
            {
LABEL_182:
              sub_74F560(&v63, "method", 6);
              sub_7506B0(&v60, &v63);
LABEL_166:
              sub_74F560(&v62, "@convention(", 12);
              a2 = 41;
              a1 = &v63;
              v63 = sub_750E60(&v62, &v60);
              v60 = sub_750D90(&v63, 41);
LABEL_91:
              if ( (dword_2CAA5CC & 0x120) == 0 )
              {
                if ( (_WORD)v60 && (_WORD)v61 )
                  sub_74F860(&v61, 32);
                a1 = &v61;
                a2 = (__int64)&v60;
                v60 = sub_750E60(&v61, &v60);
              }
              v5 = qword_2CAA5C0;
              if ( ((unsigned __int8)*qword_2CAA5C0 | 0x20) == 0x67 )
              {
                v63 = sub_749030();
                if ( (_WORD)v63 && (_WORD)v60 )
                  sub_74F860(&v60, 32);
                a2 = (__int64)&v63;
                a1 = &v60;
                sub_7506B0(&v60, &v63);
                v5 = qword_2CAA5C0;
              }
              v38 = v5 + 1;
              qword_2CAA5C0 = v5 + 1;
              if ( *v5 == 95 )
              {
                v61 = 0;
                v39 = 0;
                if ( v5[1] != 95 )
                {
                  while ( 1 )
                  {
                    ++v39;
                    v63 = sub_748D40(0);
                    sub_7506B0(&v61, &v63);
                    v38 = qword_2CAA5C0;
                    if ( *qword_2CAA5C0 == 95 )
                      break;
                    if ( v39 )
                      sub_750750(&v61);
                  }
                }
                qword_2CAA5C0 = v38 + 1;
                v63 = sub_752830(&v61);
                sub_7506B0(&v60, &v63);
                v54 = 255;
                v61 = 0;
                if ( v39 <= 0xFF )
                  v54 = v39;
                dword_2CAA5C8 |= (v54 << 8) | 1;
                v55 = qword_2CAA5C0;
                if ( *qword_2CAA5C0 != 95 )
                {
                  while ( 1 )
                  {
                    v63 = sub_748D40(1);
                    sub_7506B0(&v61, &v63);
                    v55 = qword_2CAA5C0;
                    if ( *qword_2CAA5C0 == 95 )
                      break;
                    if ( (_WORD)v61 )
                      sub_750750(&v61);
                  }
                }
                qword_2CAA5C0 = v55 + 1;
                if ( (dword_2CAA5CC & 0x40) == 0 )
                {
                  if ( (dword_2CAA5CC & 0x400000) != 0 )
                    sub_74F810(&v63, 540945696, 4);
                  else
                    sub_74F460(&v63, 15917);
                  sub_7506B0(&v60, &v63);
                  v63 = sub_752830(&v61);
                  sub_7506B0(&v60, &v63);
                }
                LOWORD(v58) = v60;
                HIBYTE(v58) = HIBYTE(v60);
                goto LABEL_4;
              }
              goto LABEL_2;
            }
            if ( v57 != 119 )
              goto LABEL_2;
            sub_74F560(&v63, "witness", 7);
            v60 = v63;
          }
          else
          {
            if ( v57 != 79 )
            {
              if ( v57 != 98 )
                goto LABEL_2;
              sub_74F560(&v63, "block", 5);
              v60 = v63;
              goto LABEL_166;
            }
            sub_74F810(&v63, 1667916399, 4);
            v60 = v63;
          }
          sub_74F860(&v60, 95);
          goto LABEL_182;
        case 'M':
          goto LABEL_66;
        case 'P':
          v20 = v5[2];
          if ( v20 != 77 )
            goto LABEL_38;
          qword_2CAA5C0 = v5 + 3;
LABEL_66:
          a2 = 64;
          a1 = &v62;
          sub_74F400(&v62, 64);
          v25 = qword_2CAA5C0;
          v5 = ++qword_2CAA5C0;
          v26 = *v25;
          switch ( v26 )
          {
            case 'o':
              v27 = 13;
              v28 = "objc_metatype";
              break;
            case 't':
              sub_74F810(&v63, 1852401780, 4);
              a2 = (__int64)&v63;
              a1 = &v62;
              sub_7506B0(&v62, &v63);
LABEL_71:
              v19 = v62;
              v7 = 0;
              v58 = v62;
              v5 = (char *)&dword_2CAA5CC;
              if ( (dword_2CAA5CC & 8) != 0 )
              {
LABEL_72:
                v58 = 0;
              }
              else
              {
LABEL_30:
                if ( v19 )
                {
                  a1 = &v58;
                  a2 = 32;
                  sub_74F860(&v58, 32);
                }
              }
LABEL_32:
              if ( !v8 )
              {
                v63 = sub_747AD0(1);
                sub_7506B0(&v58, &v63);
                if ( (dword_2CAA5CC & 8) == 0 && !v7 )
                {
LABEL_35:
                  sub_74F560(&v63, ".Type", 5);
                  sub_7506B0(&v58, &v63);
                }
                goto LABEL_4;
              }
LABEL_2:
              sub_74E200(a1, a2, v5, v6);
            case 'T':
              v27 = 5;
              v28 = "thick";
              break;
            default:
              goto LABEL_2;
          }
          sub_74F560(&v63, v28, v27);
          a2 = (__int64)&v63;
          a1 = &v62;
          sub_7506B0(&v62, &v63);
          goto LABEL_71;
        case 'b':
          a1 = &v63;
          a2 = 2020565568;
          goto LABEL_74;
        case 'f':
          sub_74F810(&v63, 1852401780, 4);
          v58 = v63;
          goto LABEL_23;
        case 'o':
        case 'u':
          a2 = (__int64)"unowned";
          a1 = &v63;
          sub_74F560(&v63, "unowned", 7);
          v58 = v63;
          if ( *(qword_2CAA5C0 - 1) != 117 )
            goto LABEL_63;
          sub_74F560(&v63, "(unsafe)", 8);
          a1 = &v58;
          a2 = (__int64)&v63;
          sub_7506B0(&v58, &v63);
          v18 = dword_2CAA5CC;
          goto LABEL_28;
        case 'w':
          a1 = &v63;
          a2 = 1801545079;
LABEL_74:
          sub_74F810(&v63, a2, 4);
          v58 = v63;
LABEL_63:
          v18 = dword_2CAA5CC;
          goto LABEL_28;
        default:
          goto LABEL_2;
      }
    case 'a':
      v58 = sub_749930(0);
      goto LABEL_4;
    case 'b':
      sub_74F560(&v63, "block", 5);
      v58 = v63;
      goto LABEL_23;
    case 'c':
      sub_74F400(&v63, 99);
      v58 = v63;
LABEL_23:
      sub_74F560(&v63, "@convention(", 12);
      v58 = sub_750E60(&v63, &v58);
      sub_750270(&v58, 8233);
      v6 = qword_2CAA5C0;
LABEL_14:
      if ( (dword_2CAA5CC & 8) != 0 )
        v58 = 0;
      v16 = *v6;
      if ( *v6 == 122 )
      {
        qword_2CAA5C0 = v6 + 1;
        v51 = v6[1];
        v61 = sub_747AD0(0);
        v62 = sub_747AD0(0);
        if ( ((unsigned __int8)v51 | 0x20) != 0x74 )
          sub_752830(&v61);
        v17 = dword_2CAA5CC;
        if ( (dword_2CAA5CC & 0x800) != 0 )
        {
LABEL_19:
          if ( (v17 & 0x40) == 0 )
          {
            if ( (v17 & 0x400000) != 0 )
              sub_74F810(&v63, 540945696, 4);
            else
              sub_74F460(&v63, 15917);
            sub_7506B0(&v61, &v63);
            sub_7506B0(&v61, &v62);
          }
          v63 = v61;
          sub_7506B0(&v58, &v63);
          dword_2CAA5C8 |= 1u;
          goto LABEL_4;
        }
        sub_74F560(&v63, "throws", 6);
        sub_7506B0(&v61, &v63);
      }
      else
      {
        v61 = sub_747AD0(0);
        v62 = sub_747AD0(0);
        if ( ((unsigned __int8)v16 | 0x20) != 0x74 )
        {
          sub_752830(&v61);
          v17 = dword_2CAA5CC;
          goto LABEL_19;
        }
      }
      v17 = dword_2CAA5CC;
      goto LABEL_19;
    case 'q':
      v24 = (unsigned int)(unsigned __int8)v5[1] - 48;
      if ( (unsigned __int8)(v5[1] - 48) <= 0x34u )
      {
        v5 = (char *)0xFFEF7FFFFFFFFC00LL;
        if ( !_bittest64((const __int64 *)&v5, v24) )
        {
          v58 = sub_747A20((__int64)a1, a2, 0xFFEF7FFFFFFFFC00LL, v6, a5);
          goto LABEL_4;
        }
      }
      if ( !(_BYTE)a1 )
      {
        v53 = sub_747AD0(1);
        v58 = sub_74A4A0(v53);
        goto LABEL_4;
      }
      goto LABEL_2;
    case 'u':
      v58 = sub_749030();
      v18 = dword_2CAA5CC;
LABEL_28:
      if ( (v18 & 8) != 0 )
        goto LABEL_72;
      v19 = v58;
      goto LABEL_30;
    case 'w':
      v21 = sub_747A20((__int64)a1, a2, (__int64)v5, v6, a5);
      v22 = sub_74A4A0(v21 & 0xFF00FFFF | 0xC00000);
      LOWORD(v58) = v22;
      HIBYTE(v58) = BYTE3(v22);
      goto LABEL_4;
    case 'x':
      v64[0] = 65;
      sub_74F740(&v63, v64, 1);
      LOWORD(v58) = v63;
      HIBYTE(v58) = HIBYTE(v63);
      goto LABEL_4;
    default:
      goto LABEL_2;
  }
}

