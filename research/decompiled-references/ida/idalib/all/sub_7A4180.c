__int64 __fastcall sub_7A4180(__int64 a1, __int64 a2, int a3, char *a4, __int64 a5, __int64 a6)
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
  int v40; // eax
  char *v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  int v47; // r14d
  __int64 v48; // r11
  unsigned int v49; // edi
  unsigned __int64 v50; // r15
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // r8
  char v54; // dl
  bool v55; // r13
  char v56; // r14
  __int64 v57; // rax
  char v58; // al
  bool v59; // cc
  char *v60; // rbx
  char m; // al
  __int64 v62; // r13
  __int64 v63; // r15
  unsigned __int64 v64; // r14
  char v65; // r15
  __int64 v66; // rbx
  unsigned __int64 v67; // r13
  __int64 v68; // r14
  __int64 v69; // rax
  char v70; // al
  __int64 v71; // rbx
  char v72; // r14
  unsigned __int64 v73; // r13
  __int64 v74; // r15
  __int64 v75; // rax
  int v76; // ebx
  unsigned __int8 *v77; // rax
  unsigned __int8 v78; // al
  _BYTE *v79; // rax
  __int64 v80; // rax
  char v81; // bl
  unsigned __int8 v82; // bl
  char v83; // al
  unsigned int v84; // edi
  int v85; // eax
  unsigned __int64 v86; // rax
  unsigned __int8 *v87; // rbx
  char v88; // al
  int v89; // edx
  __int64 v90; // rax
  __int64 v91; // rbx
  size_t v92; // rbx
  __int64 v93; // rax
  int v94; // eax
  int v95; // eax
  __int16 v96; // ax
  unsigned __int8 v97; // al
  char v98; // r14
  __int64 v99; // rax
  __int64 v100; // rax
  unsigned int v101; // edi
  char v102; // r14
  int v103; // eax
  int v104; // eax
  int v105[2]; // [rsp+8h] [rbp-70h]
  int v106; // [rsp+8h] [rbp-70h]
  unsigned int cd; // [rsp+10h] [rbp-68h]
  unsigned int c; // [rsp+10h] [rbp-68h]
  int ca[2]; // [rsp+10h] [rbp-68h]
  unsigned __int8 *cb; // [rsp+10h] [rbp-68h]
  int cc[2]; // [rsp+10h] [rbp-68h]
  unsigned int v112; // [rsp+18h] [rbp-60h]
  char *v113; // [rsp+18h] [rbp-60h]
  int v114; // [rsp+18h] [rbp-60h]
  char *v115; // [rsp+18h] [rbp-60h]
  unsigned int v116; // [rsp+18h] [rbp-60h]
  unsigned __int8 *v117; // [rsp+18h] [rbp-60h]
  char *v118; // [rsp+20h] [rbp-58h]
  char *v119; // [rsp+20h] [rbp-58h]
  unsigned __int64 v120; // [rsp+20h] [rbp-58h]
  unsigned __int64 v121; // [rsp+28h] [rbp-50h]
  char *v122; // [rsp+28h] [rbp-50h]
  unsigned __int8 v124; // [rsp+30h] [rbp-48h]
  __int64 v125; // [rsp+38h] [rbp-40h]

  v6 = a4;
  v7 = (_QWORD *)a2;
  j = *(char **)(a1 + 8);
  v10 = *(_BYTE *)(a1 + 144) == 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = j;
  if ( v10 )
    goto LABEL_2;
  while ( 2 )
  {
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
        if ( (_BYTE)v12 != 47 )
          break;
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
LABEL_70:
        if ( a3 == *(_QWORD *)(a1 + 64) )
        {
          v100 = *(_QWORD *)(a1 + 8);
          if ( !*(_BYTE *)(v100 - 1) )
            *(_QWORD *)(a1 + 8) = v100 - 1;
          *((_WORD *)v7 + 12) = 1;
          return 0;
        }
        sub_79F2A0(a1);
        j = *(char **)(a1 + 8);
      }
      if ( (_BYTE)v12 == 59 )
      {
        if ( (*(_BYTE *)(a1 + 652) & 8) == 0 )
        {
          v17 = *(char **)(a1 + 8);
          v19 = 59;
          LODWORD(a2) = 59;
          v18 = v17 - 1;
LABEL_19:
          *(_QWORD *)(a1 + 24) = v18;
          v112 = v19;
          *(_QWORD *)v105 = v18;
          if ( !isalpha((char)v12) )
          {
            v20 = strchr("?(),.[\\]`{};~@", a2);
            a2 = (unsigned int)a2;
            a5 = v112;
            a4 = *(char **)v105;
            if ( v20 )
            {
              *((_WORD *)v7 + 12) = (unsigned __int8)v12;
              goto LABEL_22;
            }
            goto LABEL_72;
          }
          goto LABEL_39;
        }
        goto LABEL_70;
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
            sub_79F1E0((__int64 *)a1, 0, nullptr);
            v40 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 56LL * *(int *)(a1 + 80) + 48);
            *(_QWORD *)a1 = j;
            *(_DWORD *)(a1 + 80) = v40;
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
      if ( !isalpha((char)v12) )
      {
        v25 = (char)v12;
        v24 = v17 - 1;
        goto LABEL_37;
      }
      if ( (_BYTE)v12 != 76 )
      {
LABEL_39:
        a2 = 0;
        v26 = sub_7A3DC0((__m128i *)a1, 0, (__int64)v7);
        if ( !v26 )
          return 0;
        if ( v26 != 1 )
          return get_qerrno(a1);
        goto LABEL_15;
      }
      if ( *v17 != 34 )
      {
        if ( *v17 != 39 )
          goto LABEL_39;
        *(_QWORD *)(a1 + 8) = v17 + 1;
        *((_BYTE *)v7 + 40) = 1;
LABEL_153:
        v7[4] = 0;
        v76 = 0;
        *((_WORD *)v7 + 12) = 5;
        while ( 1 )
        {
          v77 = *(unsigned __int8 **)(a1 + 8);
          if ( *v77 == 39 )
            break;
          if ( !*v77 )
            return set_qerrno(26);
          *(_QWORD *)(a1 + 8) = v77 + 1;
          v78 = *v77;
          if ( v78 == 92 )
            v78 = back_char(a1 + 8, a2);
          ++v76;
          v7[4] = (v7[4] << 8) | v78;
          if ( v76 == 4 )
          {
            v79 = *(_BYTE **)(a1 + 8);
            if ( *v79 == 39 )
            {
              *(_QWORD *)(a1 + 8) = v79 + 1;
              return 0;
            }
            return set_qerrno(26);
          }
        }
        if ( v76 )
        {
          ++*(_QWORD *)(a1 + 8);
          if ( v76 == 1 )
            v7[4] = *((char *)v7 + 32);
          return 0;
        }
        return set_qerrno(26);
      }
      v13 = 1;
      *(_QWORD *)(a1 + 8) = v17 + 1;
LABEL_123:
      *((_BYTE *)v7 + 40) = v13;
      v59 = v7[2] <= 0x3FFu;
      *((_WORD *)v7 + 12) = 4;
      v7[1] = 0;
      if ( v59 )
      {
        a2 = *v7;
        *v7 = qvector_reserve(v7, *v7, 1024, 1);
      }
      v60 = *(char **)(a1 + 8);
      for ( m = *v60; *v60 != 34; m = *v60 )
      {
        if ( !m )
          return set_qerrno(24);
        if ( m == 92 )
        {
          if ( (*(_BYTE *)(a1 + 356) & 0x10) != 0 )
          {
            if ( !v60[1] )
              return set_qerrno(24);
            v62 = v7[1];
            if ( v62 )
            {
              v63 = v62 + 1;
              v64 = v62 + 2;
              --v62;
            }
            else
            {
              v64 = 3;
              v63 = 2;
            }
            a2 = *v7;
            if ( v7[2] < v64 )
            {
              v75 = qvector_reserve(v7, a2, v64, 1);
              *v7 = v75;
              a2 = v75;
            }
            v7[1] = v64;
            *(_BYTE *)(a2 + v63) = 0;
            *(_WORD *)(*v7 + v62) = *(_WORD *)v60;
            v60 = (char *)(*(_QWORD *)(a1 + 8) + 2LL);
            *(_QWORD *)(a1 + 8) = v60;
          }
          else
          {
            *(_QWORD *)(a1 + 8) = v60 + 1;
            v70 = back_char(a1 + 8, a2);
            v71 = v7[1];
            v72 = v70;
            if ( v71 )
            {
              v73 = v71 + 1;
              v74 = v7[1];
              --v71;
            }
            else
            {
              v74 = 1;
              v73 = 2;
            }
            a2 = *v7;
            if ( v7[2] < v73 )
            {
              v80 = qvector_reserve(v7, a2, v73, 1);
              *v7 = v80;
              a2 = v80;
            }
            v7[1] = v73;
            *(_BYTE *)(a2 + v71) = v72;
            *(_BYTE *)(*v7 + v74) = 0;
            v60 = *(char **)(a1 + 8);
          }
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v60 + 1;
          v65 = *v60;
          v66 = v7[1];
          if ( v66 )
          {
            v67 = v66 + 1;
            v68 = v7[1];
            --v66;
          }
          else
          {
            v68 = 1;
            v67 = 2;
          }
          a2 = *v7;
          if ( v7[2] < v67 )
          {
            v69 = qvector_reserve(v7, a2, v67, 1);
            *v7 = v69;
            a2 = v69;
          }
          v7[1] = v67;
          *(_BYTE *)(a2 + v66) = v65;
          *(_BYTE *)(*v7 + v68) = 0;
          v60 = *(char **)(a1 + 8);
        }
      }
      *(_QWORD *)(a1 + 8) = v60 + 1;
      return 0;
    }
    v25 = -1;
LABEL_37:
    if ( (_BYTE)v12 == 95 || (_BYTE)v12 == 36 )
      goto LABEL_39;
    LODWORD(a2) = (unsigned __int8)v12;
LABEL_51:
    v113 = v24;
    cd = v25;
    v28 = strchr("?(),.[\\]`{};~@", a2);
    a2 = (unsigned int)a2;
    a5 = cd;
    a4 = v113;
    if ( v28 )
    {
      *((_WORD *)v7 + 12) = (unsigned __int8)v12;
      if ( (_BYTE)v12 == 46 )
      {
        v17 = *(char **)(a1 + 8);
        LODWORD(v14) = *(_DWORD *)(a1 + 356);
        v29 = *v17;
        if ( (v14 & 1) == 0 )
          goto LABEL_187;
        if ( (unsigned int)v29 > 0x7F )
          return 0;
        if ( (unsigned int)(v29 - 48) > 9
          || (a4 = v17 - 1, *(_QWORD *)a1 < (unsigned __int64)(v17 - 1))
          && (v114 = *(_DWORD *)(a1 + 356),
              v30 = sub_79F1A0(*(v17 - 2), (unsigned int)a2, v14),
              a2 = (unsigned int)a2,
              a4 = v17 - 1,
              LODWORD(v14) = v114,
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
        LOBYTE(v106) = v14;
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
        v122 = a4;
        v119 = v31;
        v116 = v33;
        *(_QWORD *)ca = v31 + 1;
        v83 = toupper(v36);
        a5 = v116;
        a2 = (unsigned int)a2;
        a4 = v122;
        if ( v83 != 69 )
        {
          if ( !v116 )
          {
            v31 = v122;
            goto LABEL_100;
          }
          if ( v83 == 76 || v83 == 70 )
          {
            v84 = v119[1];
            if ( v84 <= 0x7F )
            {
              v85 = isalnum(v84);
              a4 = v122;
              if ( v85
                || (unsigned __int8)(v84 - 36) <= 0x3Bu
                && (v86 = 0xF7FFFFFFFFFFFBFELL, !_bittest64((const __int64 *)&v86, v84 - 36)) )
              {
LABEL_64:
                for ( n = (unsigned __int8 *)a4; ; v32 = n )
                {
                  *(_QWORD *)(a1 + 8) = v32;
                  v38 = *n++;
                  v39 = sub_79F1A0(v38, a2, v14);
                  if ( v38 != 46 && !v39 )
                    break;
                }
                return set_qerrno(21);
              }
            }
          }
          *(_QWORD *)(a1 + 8) = a4;
          a2 = (__int64)(v7 + 6);
          v44 = 22;
          if ( (unsigned int)asctoreal(a1 + 8, v7 + 6) != 1 )
            return set_qerrno(v44);
          *((_WORD *)v7 + 12) = 7;
          v87 = *(unsigned __int8 **)(a1 + 8);
          v50 = *v87;
          v88 = toupper(*v87);
          if ( v88 == 70 || v88 == 76 )
          {
            *(_QWORD *)(a1 + 8) = v87 + 1;
            v50 = v87[1];
          }
LABEL_199:
          if ( (*(_BYTE *)(a1 + 356) & 2) != 0 )
          {
            if ( (unsigned __int8)sub_79F1A0(v50, a2, v89) )
              return set_qerrno(23);
            if ( (unsigned __int8)v50 <= 0x2Eu )
            {
              v90 = 0x408400000000LL;
              if ( _bittest64(&v90, v50) )
                return set_qerrno(23);
            }
          }
          v91 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)(a1 + 40) = 0;
          v92 = v91 - (_QWORD)v32;
          if ( *(_QWORD *)(a1 + 48) < v92 + 1 )
            *(_QWORD *)(a1 + 32) = qvector_reserve(a1 + 32, *(_QWORD *)(a1 + 32), v92 + 1, 1);
          v93 = *(_QWORD *)(a1 + 32);
          *(_QWORD *)(a1 + 40) = v92 + 1;
          *(_BYTE *)(v93 + v92) = 0;
          memmove(*(void **)(a1 + 32), v32, v92);
          return 0;
        }
        if ( (v116 & 2) != 0 )
          goto LABEL_64;
        v33 = v116 | 2;
        v35 = *(char **)ca;
        if ( ((v119[1] - 43) & 0xFD) == 0 )
          v35 = v119 + 2;
        goto LABEL_185;
      }
LABEL_22:
      if ( (_BYTE)v12 != 40 )
        return 0;
      v21 = *(_BYTE **)(a1 + 8);
      if ( *v21 != 42 || (*(_BYTE *)(a1 + 652) & 2) == 0 )
        return 0;
LABEL_25:
      j = v21 + 1;
      *(_BYTE *)(a1 + 144) = 1;
      *(_QWORD *)(a1 + 8) = v21 + 1;
      *(_QWORD *)(a1 + 16) = v21 + 1;
      *(_QWORD *)(a1 + 24) = 0;
      continue;
    }
    break;
  }
LABEL_72:
  v115 = a4;
  c = a5;
  v41 = strchr("!%&*+-/<=>^|:", a2);
  a2 = (unsigned int)a2;
  a5 = c;
  a4 = v115;
  if ( v41 )
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
      if ( (_DWORD)a2 == (_DWORD)a4 )
      {
        *((_WORD *)v7 + 12) = 257 * (unsigned __int8)v12;
        v45 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = v45 + 1;
        goto LABEL_93;
      }
    }
    else
    {
      if ( (char)v12 <= 37 )
        return 0;
      v42 = 0x1400284000000000LL;
      if ( !_bittest64(&v42, v12) )
      {
        if ( (_BYTE)v12 != 47 || *v21 != 42 || (*(_BYTE *)(a1 + 652) & 1) == 0 )
          return 0;
        goto LABEL_25;
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
      v45 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v45 + 1;
      if ( (v12 & 0xFD) == 0x3C )
      {
LABEL_93:
        if ( *(_BYTE *)(v45 + 1) == 61 )
        {
          *((_WORD *)v7 + 12) += 61;
          ++*(_QWORD *)(a1 + 8);
        }
      }
    }
    return 0;
  }
  a5 = c - 48;
  if ( (unsigned int)a5 > 9 )
  {
    if ( (_BYTE)v12 != 34 )
    {
      if ( (_BYTE)v12 != 39 )
      {
        if ( (_BYTE)v12 == 35 && *v17 < -1 )
        {
          if ( *(_QWORD *)(a1 + 64) )
          {
            *(_QWORD *)(a1 + 8) = v17 + 1;
            v81 = *v17;
            *((_WORD *)v7 + 12) = 4;
            v82 = v81 + 0x80;
            *((_BYTE *)v7 + 40) = 0;
            v59 = v7[2] <= 0x3FFu;
            v7[1] = 0;
            if ( v59 )
              *v7 = qvector_reserve(v7, *v7, 1024, 1);
            sub_79F5B0(a1, v7, v82, *(_DWORD *)(a1 + 80));
            return 0;
          }
          v43 = *v17;
        }
        else
        {
LABEL_81:
          v43 = (char)v12;
        }
        set_error_data(0, v43, v14, a4, a5, a6);
        v44 = 27;
        return set_qerrno(v44);
      }
      goto LABEL_153;
    }
    goto LABEL_123;
  }
  v31 = v115;
  v106 = *(_DWORD *)(a1 + 356);
  if ( (v106 & 1) != 0 )
  {
    v32 = (unsigned __int8 *)v115;
    goto LABEL_59;
  }
LABEL_100:
  v46 = (int)a2 - 48;
  if ( (_BYTE)v12 != 48 )
  {
    v47 = 10;
LABEL_102:
    v48 = v47;
    while ( 1 )
    {
      v49 = *v17;
      v125 = v48;
      v50 = v49;
      if ( v49 > 0x7F )
        break;
      v121 = v46;
      v118 = v31;
      v51 = isxdigit(v49);
      v31 = v118;
      v46 = v121;
      a2 = (char)v49;
      v48 = v125;
      if ( !v51 )
        break;
      *(_QWORD *)(a1 + 8) = ++v17;
      if ( (unsigned __int8)v49 > 0x39u && v47 == 10
        || (unsigned __int8)v49 > 0x37u && v47 == 8
        || (unsigned __int8)v49 > 0x31u && v47 == 2 )
      {
        set_error_data(0, (char)v49, v52, v121, v53, v118);
        return set_qerrno(20);
      }
      if ( (unsigned __int8)v49 > 0x39u )
      {
        if ( (unsigned __int8)v49 > 0x60u )
          a2 = (unsigned int)((char)v49 - 32);
        LOBYTE(v50) = a2 - 7;
      }
      v46 = (unsigned __int8)v50 - 48 + v125 * v121;
    }
    v54 = 1;
    v55 = v47 != 10;
    v56 = 0;
    while ( 1 )
    {
      while ( (v50 & 0xDF) == 0x55 )
      {
        v99 = *(_QWORD *)(a1 + 8);
        v55 = 1;
        *(_QWORD *)(a1 + 8) = v99 + 1;
        v54 = 0;
        v50 = *(unsigned __int8 *)(v99 + 1);
      }
      if ( (v50 & 0xDF) != 0x4C )
        break;
      if ( v56 )
        return set_qerrno(23);
      v57 = *(_QWORD *)(a1 + 8);
      a2 = v57 + 1;
      *(_QWORD *)(a1 + 8) = v57 + 1;
      v50 = *(unsigned __int8 *)(v57 + 1);
      if ( (*(_BYTE *)(v57 + 1) & 0xDF) == 0x4C )
      {
        a2 = v57 + 2;
        v56 = 1;
        *(_QWORD *)(a1 + 8) = v57 + 2;
        v50 = *(unsigned __int8 *)(v57 + 2);
      }
    }
    v120 = v46;
    v124 = v54;
    v117 = (unsigned __int8 *)v31;
    cb = *(unsigned __int8 **)(a1 + 8);
    v94 = tolower(*cb);
    v89 = v124;
    if ( v94 == 105 )
    {
      v97 = cb[1];
      if ( v97 == 51 )
      {
        if ( cb[2] != 50 )
          goto LABEL_211;
        v98 = 1;
      }
      else
      {
        if ( v97 != 54 || cb[2] != 52 )
          goto LABEL_211;
        v98 = 0;
      }
      v56 = v98 ^ 1;
      *(_QWORD *)(a1 + 8) = cb + 3;
      v50 = cb[3];
    }
LABEL_211:
    if ( (v106 & 8) != 0 )
    {
      if ( v56 )
        goto LABEL_228;
      v56 = v124 & (v120 <= 0x7FFFFFFF);
      if ( v56 )
      {
        v56 = 0;
        v95 = -1;
        goto LABEL_216;
      }
      if ( v120 > 0xFFFFFFFF || (v95 = 1, !v55) )
      {
LABEL_228:
        v95 = -1;
        v56 = v124 & ((v120 & 0x8000000000000000LL) == 0LL);
        if ( !v56 )
        {
          v95 = v55;
          v56 = 1;
        }
      }
LABEL_216:
      v13 = v95 != -1;
    }
    *((_BYTE *)v7 + 40) = v13;
    if ( v56 )
    {
      v7[6] = v120;
      v96 = 8;
    }
    else
    {
      v7[4] = v120;
      v96 = 3;
    }
    *((_WORD *)v7 + 12) = v96;
    v32 = v117;
    goto LABEL_199;
  }
  v58 = *v17;
  if ( *v17 == 98 )
    goto LABEL_243;
  if ( v58 > 98 )
  {
    if ( v58 != 120 )
      goto LABEL_115;
    goto LABEL_240;
  }
  if ( v58 == 66 )
  {
LABEL_243:
    a2 = (__int64)(v17 + 1);
    *(_QWORD *)(a1 + 8) = v17 + 1;
    v104 = (unsigned __int8)v17[1];
    if ( (unsigned __int8)(v104 - 48) <= 1u )
    {
      ++v17;
      v47 = 2;
      goto LABEL_102;
    }
    set_error_data(0, (char)v104, (unsigned int)(v104 - 48), v46, a5, v31);
    return set_qerrno(20);
  }
  else
  {
    if ( v58 != 88 )
    {
LABEL_115:
      v47 = 8;
      goto LABEL_102;
    }
LABEL_240:
    *(_QWORD *)(a1 + 8) = v17 + 1;
    v101 = v17[1];
    *(_QWORD *)cc = v31;
    v102 = v17[1];
    if ( v101 <= 0x7F )
    {
      v103 = isxdigit(v101);
      v31 = *(char **)cc;
      v46 = (int)a2 - 48;
      if ( v103 )
      {
        ++v17;
        v47 = 16;
        goto LABEL_102;
      }
    }
    set_error_data(0, v102, v14, v46, a5, v31);
    ++*(_QWORD *)(a1 + 8);
    return set_qerrno(20);
  }
}
