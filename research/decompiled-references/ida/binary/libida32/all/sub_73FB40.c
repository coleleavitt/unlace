__int64 __fastcall sub_73FB40(int a1)
{
  char v1; // r13
  char *v3; // rbx
  char *v4; // r14
  unsigned __int64 v5; // rsi
  char *v6; // rdi
  char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  char v12; // r15
  unsigned int v13; // r14d
  unsigned int v14; // r15d
  char *v15; // rbp
  int v16; // eax
  char v17; // al
  char v18; // dl
  int v19; // eax
  bool v20; // zf
  int v21; // eax
  __int16 v22; // ax
  __int16 v23; // dx
  char *v24; // rax
  char *v25; // rax
  char v26; // r12
  const unsigned __int16 **v27; // rax
  const unsigned __int16 *v28; // rdi
  unsigned int v29; // r8d
  char v30; // al
  char *v31; // rbp
  unsigned int v32; // r13d
  char v33; // r12
  unsigned int v34; // eax
  char **v35; // rbx
  int v36; // eax
  __int16 v37; // ax
  unsigned __int8 v38; // al
  char v39; // al
  __int64 v40; // rbp
  char *v41; // rbp
  int v42; // eax
  char *v43; // rax
  const char *v44; // rsi
  unsigned int *v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  char *v49; // rax
  char v50; // al
  char *v51; // rsi
  char v52; // al
  char v53; // al
  char v54; // al
  char v55; // al
  char v56; // al
  char v57; // al
  char v58; // al
  char v59; // al
  char v60; // al
  char v61; // al
  char v62; // al
  char v63; // al
  char v64; // al
  __int16 v65; // ax
  int v66; // [rsp+0h] [rbp-68h]
  unsigned int v67; // [rsp+1Ch] [rbp-4Ch] BYREF
  int v68; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v69; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v70; // [rsp+28h] [rbp-40h]

  v1 = byte_2CA2EA8;
  v70 = __readfsqword(0x28u);
  v67 = 0;
  v3 = qword_2CAA5C0;
  if ( byte_2CA2EA8 )
  {
    if ( *qword_2CAA5C0 == 95 && qword_2CAA5C0[1] == 95 && qword_2CAA5C0[2] == 115 && qword_2CAA5C0[3] == 116 )
    {
      v18 = qword_2CAA5C0[4];
      if ( (v18 == 105 || v18 == 100) && qword_2CAA5C0[5] == 95 && qword_2CAA5C0[6] == 95 )
      {
        v3 = qword_2CAA5C0 + 7;
        qword_2CAA5C0 += 7;
        byte_2CAA5A0 = v18 == 100;
      }
    }
  }
  v4 = v3;
  do
  {
    v5 = 95;
    v6 = v4;
    v7 = strchr(v4, 95);
    if ( !v7 )
    {
      if ( a1 != -1 )
        goto LABEL_7;
LABEL_10:
      sub_74EA60(&v67);
      return v67;
    }
    v4 = v7 + 1;
  }
  while ( v7[1] != 95 );
  do
    v12 = *++v4;
  while ( v12 == 95 );
  if ( a1 == -1 )
    goto LABEL_27;
  if ( v4 != v3 + 2 )
  {
    if ( !v1 || v12 != 112 )
    {
      if ( v12 )
        goto LABEL_18;
LABEL_7:
      if ( v1 )
      {
        if ( (unsigned __int8)byte_2CAA5A0 <= 1u )
          goto LABEL_10;
      }
      else
      {
LABEL_8:
        if ( byte_2CAA5A1 )
        {
          byte_2CAA5A1 = 2;
          goto LABEL_10;
        }
      }
LABEL_227:
      sub_74E200(v6, v5, v8, v9);
    }
    if ( v4[1] == 116 )
    {
      v69 = sub_741330((unsigned int)(qword_2CAA5B8 - (_DWORD)v3), 0);
      sub_7506B0(&v67, &v69);
      return v67;
    }
LABEL_18:
    if ( a1 )
    {
      while ( (unsigned int)v12 > 0x7F || (unsigned int)(v12 - 48) > 9 && v12 != 70 )
      {
        if ( !v4[1] )
          break;
        v6 = v4 + 2;
        v5 = (unsigned __int64)"__";
        v24 = strstr(v4 + 2, "__");
        if ( !v24 || !v24[2] )
          break;
        v12 = *v24;
        v4 = v24;
      }
      if ( v12 == 95 )
      {
        do
          ++v4;
        while ( *v4 == 95 );
      }
      if ( v4 - v3 > 2 && *v3 == 95 )
        qword_2CAA5C0 = ++v3;
    }
LABEL_27:
    v68 = 0;
    if ( *(_WORD *)v3 == 24415 && v3[3] == 116 )
    {
      v19 = (unsigned __int8)v3[2];
      v8 = (unsigned int)(v19 - 99);
      if ( (unsigned __int8)(v19 - 99) <= 1u )
      {
        v20 = (_BYTE)v19 == 99;
        v21 = 3145728;
        qword_2CAA5C0 = v4;
        if ( v20 )
          v21 = 0x200000;
        dword_2CAA5C8 |= v21;
        v22 = 0;
        v23 = 0;
        goto LABEL_61;
      }
    }
    v13 = (_DWORD)v4 - (_DWORD)v3;
    if ( v13 <= 2 )
      goto LABEL_227;
    v14 = v13 - 2;
    v6 = (char *)&v68;
    sub_74EA60(&v68);
    v5 = (unsigned __int8)byte_2CA2EA8;
    v9 = 0;
    v15 = qword_2CAA5C0 + 2;
    qword_2CAA5C0 += 2;
    if ( byte_2CA2EA8 && v14 > 2 )
    {
      v6 = (char *)*(unsigned __int16 *)v3;
      if ( (_WORD)v6 == 28783 )
      {
        v39 = v3[2];
        if ( v39 == 36 || v39 == 46 )
        {
          v31 = v3 + 3;
          v32 = v13 - 5;
          if ( v13 == 5 )
          {
            LOBYTE(v9) = 61;
            v38 = 0;
LABEL_138:
            v68 = sub_752400((unsigned int)v9, v31, v38);
            dword_2CAA5C8 |= 0x100000u;
            goto LABEL_60;
          }
          if ( v13 == 6 )
            goto LABEL_227;
          if ( v32 <= 8 )
          {
            v33 = 0;
            if ( v13 == 7 )
            {
LABEL_110:
              switch ( *v31 )
              {
                case 'a':
                  v54 = v31[1];
                  v51 = v31 + 1;
                  switch ( v54 )
                  {
                    case 'd':
                      LOBYTE(v9) = 38;
                      goto LABEL_180;
                    case 's':
                      goto LABEL_149;
                    case 'a':
                      LOWORD(v9) = 9766;
                      ++v31;
                      v38 = 0;
                      goto LABEL_150;
                  }
                  break;
                case 'c':
                  v62 = v31[1];
                  v51 = v31 + 1;
                  if ( v62 == 110 )
                  {
                    v65 = 14911;
                    goto LABEL_224;
                  }
                  if ( v62 > 110 )
                  {
                    LOBYTE(v9) = 126;
                    if ( v62 == 111 )
                      goto LABEL_196;
                  }
                  else
                  {
                    if ( v62 == 108 )
                    {
                      LOWORD(v9) = 10536;
                      goto LABEL_196;
                    }
                    LOWORD(v9) = 8236;
                    if ( v62 == 109 )
                      goto LABEL_196;
                  }
                  break;
                case 'd':
                  v61 = v31[1];
                  if ( v61 == 108 )
                    goto LABEL_177;
                  if ( v61 == 118 )
                  {
                    v51 = v31 + 1;
                    LOBYTE(v9) = 47;
                    goto LABEL_180;
                  }
                  break;
                case 'e':
                  v59 = v31[1];
                  v51 = v31 + 1;
                  if ( v59 == 113 )
                  {
                    LOWORD(v9) = 15677;
                    ++v31;
                    v38 = 0;
                    goto LABEL_150;
                  }
                  LOBYTE(v9) = 94;
                  if ( v59 == 114 )
                    goto LABEL_180;
                  break;
                case 'g':
                  v58 = v31[1];
                  if ( v58 == 101 )
                  {
                    LOWORD(v9) = 15678;
                    goto LABEL_185;
                  }
                  if ( v58 == 116 )
                  {
                    LOBYTE(v9) = 62;
                    goto LABEL_185;
                  }
                  break;
                case 'l':
                  v64 = v31[1];
                  v51 = v31 + 1;
                  switch ( v64 )
                  {
                    case 's':
                      LOWORD(v9) = 15420;
                      goto LABEL_180;
                    case 't':
                      LOBYTE(v9) = 60;
                      goto LABEL_196;
                    case 'e':
                      LOWORD(v9) = 15676;
                      goto LABEL_196;
                  }
                  break;
                case 'm':
                  v51 = v31 + 1;
                  switch ( v31[1] )
                  {
                    case 'd':
                      LOBYTE(v9) = 37;
                      goto LABEL_180;
                    case 'i':
                      LOBYTE(v9) = 45;
                      goto LABEL_180;
                    case 'l':
                      goto LABEL_236;
                    case 'm':
                      LOWORD(v9) = 11565;
                      goto LABEL_196;
                    case 'n':
                      LOWORD(v9) = 16188;
                      goto LABEL_196;
                    case 'u':
                      if ( !v33 )
                        goto LABEL_60;
LABEL_236:
                      LOBYTE(v9) = 42;
                      break;
                    case 'x':
                      LOWORD(v9) = 16190;
                      goto LABEL_196;
                    default:
                      goto LABEL_60;
                  }
                  goto LABEL_180;
                case 'n':
                  v57 = v31[1];
                  if ( v57 == 116 )
                  {
                    LOBYTE(v9) = 33;
                  }
                  else if ( v57 == 119 )
                  {
                    LODWORD(v9) = 2003136032;
                  }
                  else
                  {
                    LOWORD(v9) = 15649;
                    if ( v57 != 101 )
                      break;
                  }
LABEL_185:
                  ++v31;
                  v38 = 0;
                  goto LABEL_150;
                case 'o':
                  v56 = v31[1];
                  v51 = v31 + 1;
                  if ( v56 == 111 )
                  {
                    LOWORD(v9) = 31868;
                    ++v31;
                    v38 = 0;
                    goto LABEL_150;
                  }
                  LOBYTE(v9) = 124;
                  if ( v56 != 114 )
                    break;
                  goto LABEL_180;
                case 'p':
                  v63 = v31[1];
                  v51 = v31 + 1;
                  if ( v63 == 112 )
                  {
                    LOWORD(v9) = 11051;
                    ++v31;
                    v38 = 0;
                    goto LABEL_150;
                  }
                  if ( v63 == 116 )
                  {
                    v65 = 15917;
LABEL_224:
                    LOWORD(v9) = v65;
                    goto LABEL_196;
                  }
                  LOBYTE(v9) = 43;
                  if ( v63 == 108 )
                    goto LABEL_180;
                  break;
                case 'r':
                  v60 = v31[1];
                  v51 = v31 + 1;
                  if ( v60 == 109 )
                  {
                    LODWORD(v9) = 2768429;
LABEL_196:
                    v31 = v51;
                    v38 = 0;
                    goto LABEL_150;
                  }
                  if ( v60 != 115 )
                  {
                    if ( v60 != 102 )
                      break;
                    LOWORD(v9) = 15917;
                    goto LABEL_196;
                  }
                  LOWORD(v9) = 15934;
LABEL_180:
                  v68 = sub_752400((unsigned int)v9, v51, 0);
                  dword_2CAA5C8 |= 0x100000u;
                  if ( v33 )
                    sub_74F860(&v68, 61);
                  break;
                case 'v':
                  v55 = v31[1];
                  switch ( v55 )
                  {
                    case 'd':
                      v38 = 9;
                      v31 = " delete[]";
                      break;
                    case 'n':
                      v38 = 6;
                      v31 = " new[]";
                      break;
                    case 'c':
                      ++v31;
                      LOWORD(v9) = 23899;
                      v38 = 0;
                      break;
                    default:
                      goto LABEL_60;
                  }
                  goto LABEL_150;
                default:
                  break;
              }
LABEL_60:
              v23 = v68;
              v22 = HIWORD(v68);
LABEL_61:
              LOWORD(v69) = v23;
              HIWORD(v69) = v22;
              sub_7506B0(&v67, &v69);
              return v67;
            }
            if ( v13 == 8 )
            {
              v50 = v3[3];
              goto LABEL_133;
            }
LABEL_83:
            v34 = 13;
            v35 = &off_2B0ECC0;
            while ( 1 )
            {
              if ( v34 == v32 )
              {
                v66 = v9;
                v36 = memcmp(v31, *v35, v34);
                LODWORD(v9) = v66;
                if ( !v36 )
                  break;
              }
              v34 = *((unsigned __int8 *)v35 + 24);
              v35 += 2;
              if ( v34 < v32 )
                goto LABEL_60;
            }
            v37 = *((_WORD *)v35 + 5);
            LOWORD(v9) = v37;
            if ( v37 )
            {
              if ( v37 == 1 )
                LODWORD(v9) = 690503213;
              v38 = 0;
            }
            else
            {
LABEL_177:
              v38 = 7;
              v31 = " delete";
            }
            goto LABEL_150;
          }
          if ( *(_DWORD *)(v3 + 3) == 1769173857 && *(_DWORD *)(v3 + 6) == 1601070953 )
          {
            v32 = v13 - 12;
            v31 = v3 + 10;
            v33 = 1;
            if ( v13 == 14 )
              goto LABEL_110;
            if ( v13 == 15 )
            {
              v50 = v3[10];
LABEL_133:
              if ( v50 != 109 )
              {
                if ( v50 != 110 )
                {
                  ++v33;
                  ++v31;
                  if ( v50 != 97 )
                    goto LABEL_60;
                  goto LABEL_110;
                }
                v53 = v31[1];
                if ( v53 != 101 )
                {
                  if ( v53 != 111 )
                    goto LABEL_60;
                  goto LABEL_148;
                }
LABEL_165:
                if ( v31[2] != 119 )
                  goto LABEL_60;
                v31 += 2;
                LODWORD(v9) = 2003136032;
LABEL_157:
                if ( !(_BYTE)v5 )
                  goto LABEL_60;
                v38 = 0;
LABEL_150:
                if ( v33 )
                  goto LABEL_60;
                goto LABEL_138;
              }
              goto LABEL_153;
            }
            goto LABEL_82;
          }
LABEL_81:
          v33 = 0;
LABEL_82:
          if ( v32 > 0xD )
            goto LABEL_60;
          goto LABEL_83;
        }
      }
      v16 = *(_DWORD *)v3;
      if ( v14 > 4 && v16 == 1701869940 )
      {
        v17 = v3[4];
        if ( v17 == 36 || v17 == 46 )
        {
          ++v3;
LABEL_37:
          qword_2CAA5C0 = v3 + 4;
          v68 = sub_752280(v6, (unsigned __int8)byte_2CA2EA8, v8, 0);
          if ( (_WORD)v68 )
            sub_74F860(&v68, 32);
          v6 = (char *)&v68;
          v5 = (unsigned __int64)&v69;
          v69 = sub_740E40();
          sub_7506B0(&v68, &v69);
          qword_2CAA5C0 += 2;
          if ( v15 != qword_2CAA5C0 )
            goto LABEL_227;
          dword_2CAA5C8 |= 0x400000u;
          goto LABEL_60;
        }
LABEL_59:
        if ( (_WORD)v6 != 24415 )
          goto LABEL_60;
        v26 = v3[2];
        if ( (unsigned int)v26 > 0x7F )
          goto LABEL_60;
        v27 = __ctype_b_loc();
        v28 = *v27;
        if ( ((*v27)[v26] & 0x200) == 0 )
          goto LABEL_60;
        v29 = v3[3];
        v30 = v3[3];
        if ( v29 > 0x7F )
          goto LABEL_60;
        if ( (v28[(char)v29] & 0x200) == 0 )
          goto LABEL_60;
        v31 = v3 + 2;
        if ( v13 == 6 )
          goto LABEL_60;
        LODWORD(v9) = 0;
        if ( v13 == 7 )
        {
          if ( v26 == 97 )
            goto LABEL_60;
          if ( v26 != 109 )
          {
            if ( v26 != 110 )
              goto LABEL_60;
            if ( v30 != 101 )
            {
              if ( v30 != 111 || !(_BYTE)v5 )
                goto LABEL_60;
              v33 = 0;
LABEL_148:
              v51 = v31 + 2;
              if ( v31[2] != 112 )
                goto LABEL_60;
LABEL_149:
              LOBYTE(v9) = 61;
              v31 = v51;
              v38 = 0;
              goto LABEL_150;
            }
            v33 = 0;
            goto LABEL_165;
          }
          v33 = 0;
LABEL_153:
          v52 = v31[1];
          if ( v52 == 97 )
          {
            if ( v31[2] != 120 )
              goto LABEL_60;
            v31 += 2;
            LOWORD(v9) = 16190;
          }
          else
          {
            if ( v52 != 105 || v31[2] != 110 )
              goto LABEL_60;
            v31 += 2;
            LOWORD(v9) = 16188;
          }
          goto LABEL_157;
        }
        if ( !(_BYTE)v5 )
          goto LABEL_60;
        v32 = v13 - 4;
        goto LABEL_81;
      }
    }
    else
    {
      v16 = *(_DWORD *)v3;
    }
    if ( v16 == 1886347103 )
      goto LABEL_37;
    LOWORD(v6) = *(_WORD *)v3;
    goto LABEL_59;
  }
  if ( (unsigned int)v12 > 0x7F )
  {
    if ( v1 )
      goto LABEL_68;
LABEL_100:
    v5 = (unsigned __int64)"__";
    v6 = v4;
    v25 = strstr(v4, "__");
    if ( !v25 )
      goto LABEL_8;
    goto LABEL_71;
  }
  if ( (unsigned int)(v12 - 48) <= 9 )
  {
    if ( !v1 )
    {
      qword_2CAA5C0 = v4;
      sub_74E4D0(v6, 95, v8, v9, v10);
      goto LABEL_10;
    }
    goto LABEL_95;
  }
  if ( !v1 )
    goto LABEL_100;
  if ( v12 == 116 || v12 == 81 )
  {
LABEL_95:
    qword_2CAA5C0 = v4;
    dword_2CAA5C8 |= 0x200000u;
    return v67;
  }
LABEL_68:
  if ( *(_DWORD *)v4 != 1111577686 )
  {
    if ( *(_DWORD *)v4 == 1818391670 )
    {
      v40 = 6;
      if ( *((_WORD *)v4 + 2) == 24415 )
        goto LABEL_114;
    }
LABEL_70:
    v5 = (unsigned __int64)"__";
    v6 = v4;
    v25 = strstr(v4, "__");
    if ( !v25 )
    {
LABEL_111:
      v1 = byte_2CA2EA8;
      goto LABEL_7;
    }
LABEL_71:
    if ( v25[2] )
    {
      v3 = qword_2CAA5C0;
      v4 = v25 + 2;
      goto LABEL_27;
    }
    goto LABEL_111;
  }
  if ( *((_DWORD *)v4 + 1) != 1600079180 )
    goto LABEL_70;
  v40 = 8;
LABEL_114:
  v41 = &v4[v40];
  qword_2CAA5C0 = v41;
  if ( !*v41 )
    goto LABEL_118;
  while ( 1 )
  {
    v42 = sub_74E4D0(v6, 95, v8, v9, v10);
    if ( !v42 )
      break;
    v43 = &qword_2CAA5C0[v42];
    qword_2CAA5C0 = v43;
    v8 = (unsigned __int8)*v43;
    if ( (_BYTE)v8 == 95 )
    {
      if ( v43[1] == 95 )
      {
        qword_2CAA5C0 = v43 + 2;
        v8 = (unsigned __int8)v43[2];
        goto LABEL_117;
      }
    }
    else
    {
LABEL_117:
      if ( !(_BYTE)v8 )
        goto LABEL_118;
    }
  }
  if ( *qword_2CAA5C0 )
  {
    qword_2CAA5C0 = v3;
    goto LABEL_70;
  }
LABEL_118:
  v44 = "`vtbl'";
  qword_2CAA5C0 = v41;
  v45 = &v69;
  sub_74F560(&v69, "`vtbl'", 6);
  v67 = v69;
  dword_2CAA5C8 |= 0xA0u;
  if ( *qword_2CAA5C0 )
  {
    do
    {
      while ( 2 )
      {
        sub_74E4D0(v45, v44, v46, v47, v48);
        v69 = 0;
        sub_74EA60(&v69);
        if ( byte_2CAA5A1 > 0 )
          sub_750840(&v69);
        v44 = (const char *)&v69;
        v45 = &v67;
        sub_750B70(&v67, &v69);
        v49 = qword_2CAA5C0;
        v46 = (unsigned __int8)*qword_2CAA5C0;
        if ( (_BYTE)v46 == 95 )
        {
          if ( qword_2CAA5C0[1] != 95 )
            continue;
          qword_2CAA5C0 += 2;
          v46 = (unsigned __int8)v49[2];
        }
        break;
      }
    }
    while ( (_BYTE)v46 );
  }
  return v67;
}

