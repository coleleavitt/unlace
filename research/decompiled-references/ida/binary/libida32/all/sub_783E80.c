__int64 __fastcall sub_783E80(__int64 a1, __int64 a2, int a3, char *a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // r14
  _QWORD *v7; // r12
  char *j; // rbx
  bool v10; // zf
  _BYTE *k; // rax
  unsigned __int64 v12; // r15
  bool v13; // bl
  __int64 v14; // rdx
  unsigned __int8 v15; // al
  char *v16; // rdx
  char *v17; // r13
  char *v18; // rcx
  int v19; // r8d
  char *v20; // rax
  _BYTE *v21; // rax
  char v22; // dl
  char *i; // rax
  char *v24; // rcx
  int v25; // r8d
  int v26; // eax
  char *v28; // rax
  char v29; // r14
  char v30; // al
  char *v31; // r9
  unsigned __int8 *v32; // r14
  int v33; // r8d
  unsigned int v34; // edi
  char *v35; // r10
  unsigned __int8 v36; // al
  unsigned __int8 *n; // rbx
  unsigned __int8 v38; // di
  char v39; // al
  __int64 v40; // rdi
  int v41; // eax
  char *v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  int v46; // r14d
  __int64 v47; // r11
  unsigned int v48; // edi
  unsigned __int64 v49; // r15
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // r8
  char v53; // dl
  bool v54; // r13
  char v55; // r14
  __int64 v56; // rax
  char v57; // al
  bool v58; // cc
  char *v59; // rbx
  char m; // al
  __int64 v61; // r13
  __int64 v62; // r15
  unsigned __int64 v63; // r14
  char v64; // r15
  __int64 v65; // rbx
  unsigned __int64 v66; // r13
  __int64 v67; // r14
  __int64 v68; // rax
  char v69; // al
  __int64 v70; // rbx
  char v71; // r14
  unsigned __int64 v72; // r13
  __int64 v73; // r15
  __int64 v74; // rax
  int v75; // ebx
  unsigned __int8 *v76; // rax
  unsigned __int8 v77; // al
  _BYTE *v78; // rax
  __int64 v79; // rax
  char v80; // bl
  unsigned __int8 v81; // bl
  char v82; // al
  unsigned int v83; // edi
  int v84; // eax
  unsigned __int64 v85; // rax
  unsigned __int8 *v86; // rbx
  char v87; // al
  int v88; // edx
  __int64 v89; // rax
  __int64 v90; // rbx
  size_t v91; // rbx
  __int64 v92; // rax
  int v93; // eax
  int v94; // eax
  __int16 v95; // ax
  __int64 v96; // rax
  unsigned __int8 v97; // al
  char v98; // r14
  unsigned int v99; // edi
  char v100; // r14
  int v101; // eax
  int v102; // eax
  __int64 v103; // rax
  int v104[2]; // [rsp+8h] [rbp-70h]
  int v105; // [rsp+8h] [rbp-70h]
  unsigned int cc; // [rsp+10h] [rbp-68h]
  unsigned int c; // [rsp+10h] [rbp-68h]
  unsigned __int8 *ca; // [rsp+10h] [rbp-68h]
  int cb[2]; // [rsp+10h] [rbp-68h]
  unsigned int v110; // [rsp+18h] [rbp-60h]
  char *v111; // [rsp+18h] [rbp-60h]
  int v112; // [rsp+18h] [rbp-60h]
  char *v113; // [rsp+18h] [rbp-60h]
  char *v114; // [rsp+18h] [rbp-60h]
  unsigned __int8 *v115; // [rsp+18h] [rbp-60h]
  char *v116; // [rsp+20h] [rbp-58h]
  char *v117; // [rsp+20h] [rbp-58h]
  unsigned __int64 v118; // [rsp+20h] [rbp-58h]
  unsigned __int64 v119; // [rsp+28h] [rbp-50h]
  char *v120; // [rsp+28h] [rbp-50h]
  unsigned int v122; // [rsp+30h] [rbp-48h]
  unsigned __int8 v123; // [rsp+30h] [rbp-48h]
  __int64 v124; // [rsp+38h] [rbp-40h]

  v6 = a4;
  v7 = (_QWORD *)a2;
  j = *(char **)(a1 + 8);
  v10 = *(_BYTE *)(a1 + 144) == 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = j;
  if ( v10 )
    goto LABEL_2;
LABEL_26:
  v22 = *j;
  for ( i = j + 1; ; ++i )
  {
    if ( v22 != 42 )
    {
      if ( !v22 )
        goto LABEL_70;
      goto LABEL_28;
    }
    *(_QWORD *)(a1 + 8) = i;
    v22 = *i;
    if ( *i == 47 )
      break;
    if ( v22 == 41 )
    {
      if ( (*(_BYTE *)(a1 + 652) & 2) != 0 )
        goto LABEL_34;
LABEL_45:
      ++i;
LABEL_28:
      *(_QWORD *)(a1 + 8) = i;
      v22 = *i;
      continue;
    }
  }
  if ( (*(_BYTE *)(a1 + 652) & 1) == 0 )
    goto LABEL_45;
LABEL_34:
  *(_BYTE *)(a1 + 144) = 0;
  for ( j = i + 1; ; j = *(char **)(a1 + 8) )
  {
    while ( 1 )
    {
LABEL_2:
      for ( k = j + 1; ; ++k )
      {
        *(_QWORD *)(a1 + 8) = k;
        v12 = (unsigned __int8)*(k - 1);
        v13 = (_BYTE)v12 == 9 || (_BYTE)v12 == 32;
        if ( !v13 )
        {
          v14 = (unsigned int)(v12 - 10);
          if ( (unsigned __int8)(v12 - 10) > 3u )
            break;
        }
      }
      if ( v6 )
        *v6 = *(_DWORD *)(a1 + 304);
      if ( !(_BYTE)v12 )
        goto LABEL_70;
      if ( (_BYTE)v12 == 47 )
      {
        v17 = *(char **)(a1 + 8);
        if ( *v17 != 47 )
        {
          v18 = v17 - 1;
          v19 = 47;
          LODWORD(a2) = 47;
          goto LABEL_19;
        }
        if ( (*(_BYTE *)(a1 + 652) & 4) == 0 )
        {
          *(_QWORD *)(a1 + 24) = v17 - 1;
          if ( !isalpha(47) )
          {
            v24 = v17 - 1;
            v25 = 47;
            LODWORD(a2) = 47;
            goto LABEL_51;
          }
          goto LABEL_39;
        }
        goto LABEL_70;
      }
      if ( (_BYTE)v12 != 59 )
        break;
      if ( (*(_BYTE *)(a1 + 652) & 8) == 0 )
      {
        v17 = *(char **)(a1 + 8);
        v19 = 59;
        LODWORD(a2) = 59;
        v18 = v17 - 1;
LABEL_19:
        *(_QWORD *)(a1 + 24) = v18;
        v110 = v19;
        *(_QWORD *)v104 = v18;
        if ( !isalpha((char)v12) )
        {
          v20 = strchr("?(),.[\\]`{};~@", a2);
          a2 = (unsigned int)a2;
          a5 = v110;
          a4 = *(char **)v104;
          if ( v20 )
          {
            *((_WORD *)v7 + 12) = (unsigned __int8)v12;
LABEL_22:
            if ( (_BYTE)v12 != 40 )
              return 0;
            v21 = *(_BYTE **)(a1 + 8);
            if ( *v21 != 42 || (*(_BYTE *)(a1 + 652) & 2) == 0 )
              return 0;
            goto LABEL_25;
          }
LABEL_72:
          v113 = a4;
          c = a5;
          v42 = strchr("!%&*+-/<=>^|:", a2);
          a2 = (unsigned int)a2;
          a5 = c;
          a4 = v113;
          if ( v42 )
          {
            *((_WORD *)v7 + 12) = (unsigned __int8)v12;
            v21 = *(_BYTE **)(a1 + 8);
            a4 = (char *)(unsigned int)(char)*v21;
            if ( *v21 == 61 )
            {
              *((_WORD *)v7 + 12) = ((unsigned __int8)v12 << 8) + 61;
              ++*(_QWORD *)(a1 + 8);
              return 0;
            }
            if ( (char)v12 > 60 )
            {
              if ( (_BYTE)v12 != 62 )
              {
                if ( (_BYTE)v12 == 124 && (_DWORD)a2 == (_DWORD)a4 )
                {
                  *((_WORD *)v7 + 12) = 257 * (unsigned __int8)v12;
                  ++*(_QWORD *)(a1 + 8);
                }
                return 0;
              }
              if ( (_DWORD)a2 != (_DWORD)a4 )
                return 0;
              *((_WORD *)v7 + 12) = 257 * (unsigned __int8)v12;
              v44 = *(_QWORD *)(a1 + 8);
              *(_QWORD *)(a1 + 8) = v44 + 1;
            }
            else
            {
              if ( (char)v12 <= 37 )
                return 0;
              v43 = 0x1400284000000000LL;
              if ( !_bittest64(&v43, v12) )
              {
                if ( (_BYTE)v12 != 47 || *v21 != 42 || (*(_BYTE *)(a1 + 652) & 1) == 0 )
                  return 0;
LABEL_25:
                j = v21 + 1;
                *(_BYTE *)(a1 + 144) = 1;
                *(_QWORD *)(a1 + 8) = v21 + 1;
                *(_QWORD *)(a1 + 16) = v21 + 1;
                *(_QWORD *)(a1 + 24) = 0;
                goto LABEL_26;
              }
              if ( (_DWORD)a2 != (char)*v21 )
              {
                if ( (_BYTE)v12 == 45 && *v21 == 62 )
                {
                  *((_WORD *)v7 + 12) = 11582;
                  ++*(_QWORD *)(a1 + 8);
                }
                return 0;
              }
              *((_WORD *)v7 + 12) = 257 * (unsigned __int8)v12;
              v44 = *(_QWORD *)(a1 + 8);
              *(_QWORD *)(a1 + 8) = v44 + 1;
              if ( (v12 & 0xFD) != 0x3C )
                return 0;
            }
            if ( *(_BYTE *)(v44 + 1) == 61 )
            {
              *((_WORD *)v7 + 12) += 61;
              ++*(_QWORD *)(a1 + 8);
            }
            return 0;
          }
          a5 = c - 48;
          if ( (unsigned int)a5 <= 9 )
          {
            v31 = v113;
            v105 = *(_DWORD *)(a1 + 356);
            if ( (v105 & 1) != 0 )
            {
              v32 = (unsigned __int8 *)v113;
              goto LABEL_59;
            }
LABEL_100:
            v45 = (int)a2 - 48;
            if ( (_BYTE)v12 != 48 )
            {
              v46 = 10;
LABEL_102:
              v47 = v46;
              while ( 1 )
              {
                v48 = *v17;
                v124 = v47;
                v49 = v48;
                if ( v48 > 0x7F )
                  break;
                v119 = v45;
                v116 = v31;
                v50 = isxdigit(v48);
                v31 = v116;
                v45 = v119;
                a2 = (char)v48;
                v47 = v124;
                if ( !v50 )
                  break;
                *(_QWORD *)(a1 + 8) = ++v17;
                if ( (unsigned __int8)v48 > 0x39u && v46 == 10
                  || (unsigned __int8)v48 > 0x37u && v46 == 8
                  || (unsigned __int8)v48 > 0x31u && v46 == 2 )
                {
                  set_error_data(0, (char)v48, v51, v119, v52, v116);
                  v40 = 20;
                  return set_qerrno(v40, a2);
                }
                if ( (unsigned __int8)v48 > 0x39u )
                {
                  if ( (unsigned __int8)v48 > 0x60u )
                    a2 = (unsigned int)((char)v48 - 32);
                  LOBYTE(v49) = a2 - 7;
                }
                v45 = (unsigned __int8)v49 - 48 + v124 * v119;
              }
              v53 = 1;
              v54 = v46 != 10;
              v55 = 0;
              while ( 1 )
              {
                while ( (v49 & 0xDF) == 0x55 )
                {
                  v96 = *(_QWORD *)(a1 + 8);
                  v54 = 1;
                  *(_QWORD *)(a1 + 8) = v96 + 1;
                  v53 = 0;
                  v49 = *(unsigned __int8 *)(v96 + 1);
                }
                if ( (v49 & 0xDF) != 0x4C )
                  break;
                if ( v55 )
                  goto LABEL_203;
                v56 = *(_QWORD *)(a1 + 8);
                a2 = v56 + 1;
                *(_QWORD *)(a1 + 8) = v56 + 1;
                v49 = *(unsigned __int8 *)(v56 + 1);
                if ( (*(_BYTE *)(v56 + 1) & 0xDF) == 0x4C )
                {
                  a2 = v56 + 2;
                  v55 = 1;
                  *(_QWORD *)(a1 + 8) = v56 + 2;
                  v49 = *(unsigned __int8 *)(v56 + 2);
                }
              }
              v118 = v45;
              v123 = v53;
              v115 = (unsigned __int8 *)v31;
              ca = *(unsigned __int8 **)(a1 + 8);
              v93 = tolower(*ca);
              v88 = v123;
              if ( v93 == 105 )
              {
                v97 = ca[1];
                if ( v97 == 51 )
                {
                  if ( ca[2] != 50 )
                    goto LABEL_211;
                  v98 = 1;
                }
                else
                {
                  if ( v97 != 54 || ca[2] != 52 )
                    goto LABEL_211;
                  v98 = 0;
                }
                v55 = v98 ^ 1;
                *(_QWORD *)(a1 + 8) = ca + 3;
                v49 = ca[3];
              }
LABEL_211:
              if ( (v105 & 8) != 0 )
              {
                if ( v55 )
                  goto LABEL_225;
                v55 = v123 & (v118 <= 0x7FFFFFFF);
                if ( v55 )
                {
                  v55 = 0;
                  v94 = -1;
                  goto LABEL_216;
                }
                if ( v118 > 0xFFFFFFFF || (v94 = 1, !v54) )
                {
LABEL_225:
                  v94 = -1;
                  v55 = v123 & ((v118 & 0x8000000000000000LL) == 0LL);
                  if ( !v55 )
                  {
                    v94 = v54;
                    v55 = 1;
                  }
                }
LABEL_216:
                v13 = v94 != -1;
LABEL_217:
                *((_BYTE *)v7 + 32) = v13;
                if ( !v55 )
                {
                  *((_DWORD *)v7 + 7) = v118;
                  v95 = 3;
LABEL_219:
                  *((_WORD *)v7 + 12) = v95;
                  v32 = v115;
                  goto LABEL_199;
                }
              }
              else
              {
                if ( v118 <= 0xFFFFFFFF )
                  goto LABEL_217;
                *((_BYTE *)v7 + 32) = 0;
              }
              v7[5] = v118;
              v95 = 8;
              goto LABEL_219;
            }
            v57 = *v17;
            if ( *v17 == 98 )
              goto LABEL_237;
            if ( v57 > 98 )
            {
              if ( v57 != 120 )
                goto LABEL_115;
              goto LABEL_234;
            }
            if ( v57 == 66 )
            {
LABEL_237:
              a2 = (__int64)(v17 + 1);
              *(_QWORD *)(a1 + 8) = v17 + 1;
              v102 = (unsigned __int8)v17[1];
              if ( (unsigned __int8)(v102 - 48) <= 1u )
              {
                ++v17;
                v46 = 2;
                goto LABEL_102;
              }
              a2 = (char)v102;
              set_error_data(0, (char)v102, (unsigned int)(v102 - 48), v45, a5, v31);
              v40 = 20;
            }
            else
            {
              if ( v57 != 88 )
              {
LABEL_115:
                v46 = 8;
                goto LABEL_102;
              }
LABEL_234:
              *(_QWORD *)(a1 + 8) = v17 + 1;
              v99 = v17[1];
              *(_QWORD *)cb = v31;
              v100 = v17[1];
              if ( v99 <= 0x7F )
              {
                v101 = isxdigit(v99);
                v31 = *(char **)cb;
                v45 = (int)a2 - 48;
                if ( v101 )
                {
                  ++v17;
                  v46 = 16;
                  goto LABEL_102;
                }
              }
              a2 = v100;
              set_error_data(0, v100, v14, v45, a5, v31);
              ++*(_QWORD *)(a1 + 8);
              v40 = 20;
            }
            return set_qerrno(v40, a2);
          }
          if ( (_BYTE)v12 != 34 )
          {
            if ( (_BYTE)v12 != 39 )
            {
              if ( (_BYTE)v12 == 35 && *v17 < -1 )
              {
                if ( *(_QWORD *)(a1 + 64) )
                {
                  *(_QWORD *)(a1 + 8) = v17 + 1;
                  v80 = *v17;
                  *((_WORD *)v7 + 12) = 4;
                  v81 = v80 + 0x80;
                  *((_BYTE *)v7 + 32) = 0;
                  v58 = v7[2] <= 0x3FFu;
                  v7[1] = 0;
                  if ( v58 )
                    *v7 = qvector_reserve(v7, *v7, 1024, 1);
                  sub_77F2B0(a1, v7, v81, *(_DWORD *)(a1 + 80));
                  return 0;
                }
                a2 = *v17;
              }
              else
              {
LABEL_81:
                a2 = (char)v12;
              }
              set_error_data(0, a2, v14, a4, a5, a6);
              v40 = 27;
              return set_qerrno(v40, a2);
            }
LABEL_153:
            *((_DWORD *)v7 + 7) = 0;
            v75 = 0;
            *((_WORD *)v7 + 12) = 5;
            while ( 1 )
            {
              v76 = *(unsigned __int8 **)(a1 + 8);
              if ( *v76 == 39 )
                break;
              if ( !*v76 )
                goto LABEL_160;
              *(_QWORD *)(a1 + 8) = v76 + 1;
              v77 = *v76;
              if ( v77 == 92 )
                v77 = back_char(a1 + 8, a2);
              ++v75;
              *((_DWORD *)v7 + 7) = (*((_DWORD *)v7 + 7) << 8) | v77;
              if ( v75 == 4 )
              {
                v78 = *(_BYTE **)(a1 + 8);
                if ( *v78 == 39 )
                {
                  *(_QWORD *)(a1 + 8) = v78 + 1;
                  return 0;
                }
                goto LABEL_160;
              }
            }
            if ( v75 )
            {
              ++*(_QWORD *)(a1 + 8);
              if ( v75 == 1 )
                *((_DWORD *)v7 + 7) = *((char *)v7 + 28);
              return 0;
            }
LABEL_160:
            v40 = 26;
            return set_qerrno(v40, a2);
          }
LABEL_123:
          *((_BYTE *)v7 + 32) = v13;
          v58 = v7[2] <= 0x3FFu;
          *((_WORD *)v7 + 12) = 4;
          v7[1] = 0;
          if ( v58 )
          {
            a2 = *v7;
            *v7 = qvector_reserve(v7, *v7, 1024, 1);
          }
          v59 = *(char **)(a1 + 8);
          for ( m = *v59; *v59 != 34; m = *v59 )
          {
            if ( !m )
            {
LABEL_162:
              v40 = 24;
              return set_qerrno(v40, a2);
            }
            if ( m == 92 )
            {
              if ( (*(_BYTE *)(a1 + 356) & 0x10) != 0 )
              {
                if ( !v59[1] )
                  goto LABEL_162;
                v61 = v7[1];
                if ( v61 )
                {
                  v62 = v61 + 1;
                  v63 = v61 + 2;
                  --v61;
                }
                else
                {
                  v63 = 3;
                  v62 = 2;
                }
                a2 = *v7;
                if ( v7[2] < v63 )
                {
                  v74 = qvector_reserve(v7, a2, v63, 1);
                  *v7 = v74;
                  a2 = v74;
                }
                v7[1] = v63;
                *(_BYTE *)(a2 + v62) = 0;
                *(_WORD *)(*v7 + v61) = *(_WORD *)v59;
                v59 = (char *)(*(_QWORD *)(a1 + 8) + 2LL);
                *(_QWORD *)(a1 + 8) = v59;
              }
              else
              {
                *(_QWORD *)(a1 + 8) = v59 + 1;
                v69 = back_char(a1 + 8, a2);
                v70 = v7[1];
                v71 = v69;
                if ( v70 )
                {
                  v72 = v70 + 1;
                  v73 = v7[1];
                  --v70;
                }
                else
                {
                  v73 = 1;
                  v72 = 2;
                }
                a2 = *v7;
                if ( v7[2] < v72 )
                {
                  v79 = qvector_reserve(v7, a2, v72, 1);
                  *v7 = v79;
                  a2 = v79;
                }
                v7[1] = v72;
                *(_BYTE *)(a2 + v70) = v71;
                *(_BYTE *)(*v7 + v73) = 0;
                v59 = *(char **)(a1 + 8);
              }
            }
            else
            {
              *(_QWORD *)(a1 + 8) = v59 + 1;
              v64 = *v59;
              v65 = v7[1];
              if ( v65 )
              {
                v66 = v65 + 1;
                v67 = v7[1];
                --v65;
              }
              else
              {
                v67 = 1;
                v66 = 2;
              }
              a2 = *v7;
              if ( v7[2] < v66 )
              {
                v68 = qvector_reserve(v7, a2, v66, 1);
                *v7 = v68;
                a2 = v68;
              }
              v7[1] = v66;
              *(_BYTE *)(a2 + v65) = v64;
              *(_BYTE *)(*v7 + v67) = 0;
              v59 = *(char **)(a1 + 8);
            }
          }
          *(_QWORD *)(a1 + 8) = v59 + 1;
          return 0;
        }
LABEL_39:
        a2 = 0;
        v26 = sub_783AC0((__m128i *)a1, 0, (__int64)v7);
        if ( !v26 )
          return 0;
        if ( v26 != 1 )
          return get_qerrno(a1);
        goto LABEL_15;
      }
LABEL_70:
      if ( a3 == *(_QWORD *)(a1 + 64) )
      {
        v103 = *(_QWORD *)(a1 + 8);
        if ( !*(_BYTE *)(v103 - 1) )
          *(_QWORD *)(a1 + 8) = v103 - 1;
        *((_WORD *)v7 + 12) = 1;
        return 0;
      }
      sub_77EF90(a1);
      j = *(char **)(a1 + 8);
    }
    v15 = v12 + 0x80;
    if ( (unsigned __int8)(v12 + 0x80) > 0x7Eu )
      break;
    if ( !*(_QWORD *)(a1 + 64) )
      goto LABEL_81;
    a4 = *(char **)(a1 + 56);
    v16 = &a4[56 * *(int *)(a1 + 80)];
    if ( (unsigned __int64)v15 < *((_QWORD *)v16 + 1) )
    {
      a5 = *(_QWORD *)v16;
      j = *(char **)(*(_QWORD *)v16 + 24LL * v15);
      if ( j )
      {
        if ( *j )
        {
          a2 = 0;
          sub_77EED0((__int64 *)a1, 0, nullptr);
          v41 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 56LL * *(int *)(a1 + 80) + 48);
          *(_QWORD *)a1 = j;
          *(_DWORD *)(a1 + 80) = v41;
          goto LABEL_2;
        }
      }
    }
LABEL_15:
    ;
  }
  v17 = *(char **)(a1 + 8);
  v24 = v17 - 1;
  *(_QWORD *)(a1 + 24) = v17 - 1;
  if ( (unsigned int)(char)v12 <= 0x7F )
  {
    if ( isalpha((char)v12) )
    {
      if ( (_BYTE)v12 == 76 )
      {
        if ( *v17 == 34 )
        {
          v13 = 1;
          *(_QWORD *)(a1 + 8) = v17 + 1;
          goto LABEL_123;
        }
        if ( *v17 == 39 )
        {
          *(_QWORD *)(a1 + 8) = v17 + 1;
          *((_BYTE *)v7 + 32) = 1;
          goto LABEL_153;
        }
      }
      goto LABEL_39;
    }
    v25 = (char)v12;
    v24 = v17 - 1;
  }
  else
  {
    v25 = -1;
  }
  if ( (_BYTE)v12 == 95 || (_BYTE)v12 == 36 )
    goto LABEL_39;
  LODWORD(a2) = (unsigned __int8)v12;
LABEL_51:
  v111 = v24;
  cc = v25;
  v28 = strchr("?(),.[\\]`{};~@", a2);
  a2 = (unsigned int)a2;
  a5 = cc;
  a4 = v111;
  if ( !v28 )
    goto LABEL_72;
  *((_WORD *)v7 + 12) = (unsigned __int8)v12;
  if ( (_BYTE)v12 != 46 )
    goto LABEL_22;
  v17 = *(char **)(a1 + 8);
  LODWORD(v14) = *(_DWORD *)(a1 + 356);
  v29 = *v17;
  if ( (v14 & 1) == 0 )
    goto LABEL_187;
  if ( (unsigned int)v29 > 0x7F )
    return 0;
  if ( (unsigned int)(v29 - 48) > 9
    || (a4 = v17 - 1, *(_QWORD *)a1 < (unsigned __int64)(v17 - 1))
    && (v112 = *(_DWORD *)(a1 + 356),
        v30 = sub_77EE90(*(v17 - 2), (unsigned int)a2, v14),
        a2 = (unsigned int)a2,
        a4 = v17 - 1,
        LODWORD(v14) = v112,
        v30) )
  {
LABEL_187:
    if ( v29 == 46 && v17[1] == 46 )
    {
      *(_QWORD *)(a1 + 8) = v17 + 2;
      *((_WORD *)v7 + 12) = 11868;
    }
    return 0;
  }
  LOBYTE(v105) = v14;
  v31 = a4;
  v32 = (unsigned __int8 *)a4;
LABEL_59:
  v33 = 0;
  while ( 2 )
  {
    v34 = *v31;
    v35 = v31 + 1;
    v36 = *v31;
    if ( v34 <= 0x7F )
    {
      if ( v34 - 48 <= 9 )
      {
LABEL_185:
        v31 = v35;
        continue;
      }
      if ( v36 == 46 )
      {
        if ( v33 )
          goto LABEL_64;
        v33 = 1;
        goto LABEL_185;
      }
    }
    break;
  }
  v120 = a4;
  v122 = v33;
  v114 = v31;
  v117 = v31 + 1;
  v82 = toupper(v36);
  a2 = (unsigned int)a2;
  a5 = v122;
  a4 = v120;
  if ( v82 == 69 )
  {
    if ( (v122 & 2) != 0 )
      goto LABEL_64;
    v33 = v122 | 2;
    v35 = v117;
    if ( ((v114[1] - 43) & 0xFD) == 0 )
      v35 = v114 + 2;
    goto LABEL_185;
  }
  if ( !v122 )
  {
    v31 = v120;
    goto LABEL_100;
  }
  if ( v82 == 76 || v82 == 70 )
  {
    v83 = v114[1];
    if ( v83 <= 0x7F )
    {
      v84 = isalnum(v83);
      a4 = v120;
      if ( v84
        || (unsigned __int8)(v83 - 36) <= 0x3Bu
        && (v85 = 0xF7FFFFFFFFFFFBFELL, !_bittest64((const __int64 *)&v85, v83 - 36)) )
      {
LABEL_64:
        for ( n = (unsigned __int8 *)a4; ; v32 = n )
        {
          *(_QWORD *)(a1 + 8) = v32;
          v38 = *n++;
          v39 = sub_77EE90(v38, a2, v14);
          if ( v38 != 46 && !v39 )
            break;
        }
        v40 = 21;
        return set_qerrno(v40, a2);
      }
    }
  }
  *(_QWORD *)(a1 + 8) = a4;
  a2 = (__int64)(v7 + 5);
  v40 = 22;
  if ( (unsigned int)asctoreal(a1 + 8, v7 + 5) != 1 )
    return set_qerrno(v40, a2);
  *((_WORD *)v7 + 12) = 7;
  v86 = *(unsigned __int8 **)(a1 + 8);
  v49 = *v86;
  v87 = toupper(*v86);
  if ( v87 == 70 || v87 == 76 )
  {
    *(_QWORD *)(a1 + 8) = v86 + 1;
    v49 = v86[1];
  }
LABEL_199:
  if ( (*(_BYTE *)(a1 + 356) & 2) != 0 )
  {
    if ( (unsigned __int8)sub_77EE90(v49, a2, v88)
      || (unsigned __int8)v49 <= 0x2Eu && (v89 = 0x408400000000LL, _bittest64(&v89, v49)) )
    {
LABEL_203:
      v40 = 23;
      return set_qerrno(v40, a2);
    }
  }
  v90 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 40) = 0;
  v91 = v90 - (_QWORD)v32;
  if ( *(_QWORD *)(a1 + 48) < v91 + 1 )
    *(_QWORD *)(a1 + 32) = qvector_reserve(a1 + 32, *(_QWORD *)(a1 + 32), v91 + 1, 1);
  v92 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 40) = v91 + 1;
  *(_BYTE *)(v92 + v91) = 0;
  memmove(*(void **)(a1 + 32), v32, v91);
  return 0;
}

