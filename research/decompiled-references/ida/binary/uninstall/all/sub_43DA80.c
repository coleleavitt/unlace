__int64 __fastcall sub_43DA80(__int64 a1)
{
  char *v2; // r15
  unsigned __int64 *v3; // r9
  __int64 v4; // rbp
  __int64 v5; // rax
  __int16 *v6; // rax
  __int16 *v7; // rbx
  size_t v8; // r14
  size_t v9; // r12
  size_t v10; // rbp
  char *v11; // rbx
  char *v12; // rbx
  __int64 v13; // r14
  int v14; // r12d
  int v15; // ecx
  signed int v16; // r12d
  __int64 v17; // rdx
  int v18; // r12d
  unsigned __int64 v19; // r10
  __int64 v20; // rsi
  __int64 v21; // kr00_8
  __int64 v22; // rax
  int v23; // r12d
  signed int v24; // r12d
  __int64 v25; // rax
  int v26; // r12d
  __int16 *v27; // r15
  __int64 v28; // rax
  int v29; // r12d
  int v30; // edx
  signed int v31; // eax
  unsigned int v32; // ebx
  __int16 *n; // r15
  unsigned __int8 *v35; // rbx
  int v36; // eax
  const unsigned __int16 **v37; // rax
  const unsigned __int16 **v38; // r13
  char *v39; // rbx
  char v40; // cl
  unsigned __int16 v41; // ax
  unsigned __int8 *v42; // rdx
  int v43; // ebp
  unsigned __int8 *v44; // rax
  char v45; // cl
  int v46; // r12d
  int v47; // eax
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rdi
  int v51; // ebp
  __int64 v52; // rdi
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  __int64 v60; // rcx
  int v61; // ebp
  unsigned __int8 *v62; // rsi
  unsigned __int8 v63; // cl
  int v64; // eax
  unsigned __int8 *v65; // rbp
  unsigned __int8 *v66; // rsi
  unsigned __int8 v67; // cl
  int v68; // eax
  int v69; // eax
  bool v70; // cc
  unsigned __int64 v71; // rax
  int v72; // eax
  int v73; // ebp
  size_t v74; // rax
  bool v75; // zf
  char **v76; // rbx
  int v77; // eax
  int v78; // eax
  bool i; // zf
  int v80; // eax
  bool j; // zf
  int v82; // eax
  int v83; // eax
  bool v84; // zf
  int v85; // eax
  bool k; // zf
  int v87; // eax
  unsigned __int8 v88; // bp
  const unsigned __int16 **v89; // rax
  bool v90; // zf
  int v91; // eax
  unsigned __int8 *v92; // rsi
  int v93; // eax
  unsigned __int8 *v94; // rcx
  unsigned __int8 v95; // dl
  bool m; // zf
  int v97; // eax
  unsigned __int64 *v98; // [rsp+0h] [rbp-1568h]
  unsigned __int64 *v99; // [rsp+0h] [rbp-1568h]
  unsigned __int64 *v100; // [rsp+0h] [rbp-1568h]
  unsigned __int64 *v101; // [rsp+0h] [rbp-1568h]
  unsigned __int64 *v102; // [rsp+0h] [rbp-1568h]
  unsigned __int64 *v103; // [rsp+0h] [rbp-1568h]
  unsigned __int64 *v104; // [rsp+0h] [rbp-1568h]
  unsigned __int64 *v105; // [rsp+0h] [rbp-1568h]
  unsigned __int64 *v106; // [rsp+0h] [rbp-1568h]
  unsigned __int64 *v107; // [rsp+0h] [rbp-1568h]
  unsigned __int64 *v108; // [rsp+0h] [rbp-1568h]
  unsigned __int64 *v109; // [rsp+0h] [rbp-1568h]
  __int64 v110; // [rsp+8h] [rbp-1560h]
  __int64 v111; // [rsp+8h] [rbp-1560h]
  __int64 v112; // [rsp+8h] [rbp-1560h]
  __int64 v113; // [rsp+8h] [rbp-1560h]
  __int64 v114; // [rsp+8h] [rbp-1560h]
  __int64 v115; // [rsp+8h] [rbp-1560h]
  __int64 v116; // [rsp+8h] [rbp-1560h]
  __int64 v117; // [rsp+8h] [rbp-1560h]
  __int64 v118; // [rsp+8h] [rbp-1560h]
  __int64 v119; // [rsp+8h] [rbp-1560h]
  __int64 v120; // [rsp+8h] [rbp-1560h]
  __int64 v121; // [rsp+8h] [rbp-1560h]
  __int64 v122; // [rsp+8h] [rbp-1560h]
  __int16 *v123; // [rsp+38h] [rbp-1530h]
  unsigned __int64 v124; // [rsp+40h] [rbp-1528h]
  char *v125; // [rsp+48h] [rbp-1520h]
  char *v126; // [rsp+50h] [rbp-1518h]
  _BYTE *v127; // [rsp+58h] [rbp-1510h]
  __int16 *src; // [rsp+60h] [rbp-1508h]
  int v129; // [rsp+6Ch] [rbp-14FCh]
  int v130; // [rsp+70h] [rbp-14F8h]
  int v131; // [rsp+74h] [rbp-14F4h]
  __int64 v132; // [rsp+78h] [rbp-14F0h]
  unsigned __int8 v133; // [rsp+80h] [rbp-14E8h] BYREF
  unsigned __int8 v134; // [rsp+81h] [rbp-14E7h]
  unsigned __int8 v135; // [rsp+82h] [rbp-14E6h]
  char v136; // [rsp+83h] [rbp-14E5h]
  _BYTE v137[5]; // [rsp+93h] [rbp-14D5h] BYREF
  __int64 v138; // [rsp+A0h] [rbp-14C8h]
  __int64 v139; // [rsp+A8h] [rbp-14C0h]
  __int64 v140; // [rsp+B0h] [rbp-14B8h]
  __int64 v141; // [rsp+B8h] [rbp-14B0h]
  __int64 v142; // [rsp+C0h] [rbp-14A8h]
  __int64 v143; // [rsp+C8h] [rbp-14A0h]
  _BYTE v144[3200]; // [rsp+D0h] [rbp-1498h] BYREF
  _BYTE v145[1600]; // [rsp+D50h] [rbp-818h] BYREF
  _BYTE v146[400]; // [rsp+1390h] [rbp-1D8h] BYREF
  __int64 v147; // [rsp+1520h] [rbp-48h] BYREF
  __int64 v148; // [rsp+1528h] [rbp-40h]

  v124 = 200;
  v130 = 0;
  src = (__int16 *)v146;
  v2 = v146;
  v127 = v145;
  v126 = v144;
  v3 = (unsigned __int64 *)v145;
  v129 = 0;
  v131 = -2;
  v125 = v144;
  v148 = 1;
  v147 = 1;
  while ( 1 )
  {
    *(_WORD *)v2 = v130;
    if ( &src[v124 - 1] <= (__int16 *)v2 )
    {
      v4 = ((v2 - (char *)src) >> 1) + 1;
      if ( v124 > 0x270F )
        goto LABEL_147;
      v5 = 10000;
      if ( 2 * v124 < 0x2711 )
        v5 = 2 * v124;
      v110 = a1;
      v123 = src;
      v124 = v5;
      v6 = (__int16 *)sub_40FB00(26 * (int)v5 + 30);
      v7 = v6;
      a1 = v110;
      if ( !v6 )
      {
LABEL_147:
        v32 = 2;
        sub_43D990((__int64)&v147, (_QWORD *)a1, (__int64)"memory exhausted");
        v20 = 0;
        goto LABEL_43;
      }
      v8 = v4;
      v9 = 8 * v4;
      v10 = 16 * v4;
      memcpy(v6, src, v8 * 2);
      src = v7;
      v11 = (char *)v7 + ((2 * v124 + 15) & 0xFFFFFFFFFFFFFFF0LL);
      memcpy(v11, v127, v9);
      v127 = v11;
      v12 = &v11[8 * v124];
      memcpy(v12, v126, v10);
      v126 = v12;
      a1 = v110;
      if ( v146 != (_BYTE *)v123 )
      {
        Tcl_Free((__int64)v123);
        a1 = v110;
      }
      v2 = (char *)&src[v8 - 1];
      v3 = (unsigned __int64 *)&v127[v9 - 8];
      v125 = &v12[v10 - 16];
      if ( &src[v124 - 1] <= (__int16 *)v2 )
        break;
    }
    v13 = v130;
    v14 = *((char *)qword_5094C0 + v130);
    if ( v14 == -22 )
      goto LABEL_17;
    if ( v131 == -2 )
    {
      v35 = *(unsigned __int8 **)(a1 + 176);
      HIDWORD(v147) = (_DWORD)v35 - *(_DWORD *)(a1 + 168);
LABEL_50:
      while ( 1 )
      {
        v111 = a1;
        v98 = v3;
        v36 = sub_47D8A0((unsigned int)(char)*v35);
        a1 = v111;
        v3 = v98;
        if ( !v36 )
          break;
        v35 = (unsigned __int8 *)(*(_QWORD *)(v111 + 176) + 1LL);
        *(_QWORD *)(v111 + 176) = v35;
      }
      v37 = __ctype_b_loc();
      a1 = v111;
      v38 = v37;
      v3 = v98;
      v39 = *(char **)(v111 + 176);
      v40 = *v39;
      v41 = (*v37)[(unsigned __int8)*v39];
      if ( (v41 & 0x800) != 0 )
      {
        v61 = 0;
        v132 = 0;
        __ctype_b_loc();
        a1 = v111;
        v3 = v98;
        while ( 1 )
        {
          v62 = (unsigned __int8 *)(v39 + 1);
          *(_QWORD *)(v111 + 176) = v39 + 1;
          v63 = *v39++;
          if ( ((*v38)[v63] & 0x800) == 0 )
            break;
          ++v61;
          v132 = (char)v63 + 10 * v132 - 48;
        }
        *(_DWORD *)(v111 + 192) = v61;
        *(_QWORD *)(v111 + 176) = v62 - 1;
        HIDWORD(v148) = (_DWORD)v62 - 1 - *(_DWORD *)(v111 + 168) - 1;
        if ( v61 > 5 )
          v131 = 272;
        else
          v131 = 268;
      }
      else if ( v40 >= 0 && (v41 & 0x400) != 0 )
      {
        v65 = &v133;
        __ctype_b_loc();
        while ( 1 )
        {
          v66 = (unsigned __int8 *)(v39 + 1);
          *(_QWORD *)(v111 + 176) = v39 + 1;
          v67 = *v39++;
          if ( ((*v38)[v67] & 0x400) == 0 && v67 != 46 )
            break;
          if ( v137 > v65 )
            *v65++ = v67;
        }
        *v65 = 0;
        v68 = (_DWORD)v66 - 1 - *(_DWORD *)(v111 + 168);
        *(_QWORD *)(v111 + 176) = v66 - 1;
        HIDWORD(v148) = v68 - 1;
        sub_49C1C0(&v133);
        a1 = v111;
        v3 = v98;
        v69 = v133 - 97;
        if ( v133 == 97 )
        {
          v69 = v134 - 109;
          if ( v134 == 109 )
            v69 = v135;
        }
        if ( v69 && strcmp((const char *)&v133, "a.m.") )
        {
          v72 = v133 - 112;
          if ( v133 == 112 )
          {
            v72 = v134 - 109;
            if ( v134 == 109 )
              v72 = v135;
          }
          if ( v72 && strcmp((const char *)&v133, "p.m.") )
          {
            v73 = 1;
            v74 = strlen((const char *)&v133);
            a1 = v111;
            v3 = v98;
            if ( v74 != 3 )
            {
              if ( v74 == 4 && v136 == 46 )
                v136 = 0;
              else
                v73 = 0;
            }
            v75 = "january" == nullptr;
            v76 = &off_64EBC0;
            while ( !v75 )
            {
              if ( v73 )
              {
                v113 = a1;
                v100 = v3;
                v77 = strncmp((const char *)&v133, *v76, 3u);
                a1 = v113;
                v3 = v100;
                if ( !v77 )
                {
LABEL_210:
                  v132 = (__int64)v76[2];
                  goto LABEL_182;
                }
              }
              else
              {
                v114 = a1;
                v101 = v3;
                v78 = strcmp((const char *)&v133, *v76);
                a1 = v114;
                v3 = v101;
                if ( !v78 )
                {
LABEL_181:
                  v132 = (__int64)v76[2];
LABEL_182:
                  v131 = *((_DWORD *)v76 + 2);
                  goto LABEL_12;
                }
              }
              v76 += 3;
              v75 = *v76 == nullptr;
            }
            v76 = (char **)&off_64E5C0;
            for ( i = "gmt" == nullptr; !i; i = *v76 == nullptr )
            {
              v115 = a1;
              v102 = v3;
              v80 = strcmp((const char *)&v133, *v76);
              a1 = v115;
              v3 = v102;
              if ( !v80 )
                goto LABEL_210;
              v76 += 3;
            }
            v76 = &off_64E4A0;
            for ( j = "year" == nullptr; !j; j = *v76 == nullptr )
            {
              v116 = a1;
              v103 = v3;
              v82 = strcmp((const char *)&v133, *v76);
              a1 = v116;
              v3 = v103;
              if ( !v82 )
                goto LABEL_181;
              v76 += 3;
            }
            v117 = a1;
            v104 = v3;
            v83 = strlen((const char *)&v133) - 1;
            a1 = v117;
            v3 = v104;
            if ( v83 > 0 && *(&v133 + v83) == 115 )
            {
              v76 = &off_64E4A0;
              *(&v133 + v83) = 0;
              for ( k = "year" == nullptr; !k; k = *v76 == nullptr )
              {
                v119 = a1;
                v106 = v3;
                v87 = strcmp((const char *)&v133, *v76);
                a1 = v119;
                v3 = v106;
                if ( !v87 )
                  goto LABEL_210;
                v76 += 3;
              }
            }
            v84 = "tomorrow" == nullptr;
            v76 = &off_64E380;
            while ( !v84 )
            {
              v118 = a1;
              v105 = v3;
              v85 = strcmp((const char *)&v133, *v76);
              a1 = v118;
              v3 = v105;
              if ( !v85 )
                goto LABEL_181;
              v76 += 3;
              v84 = *v76 == nullptr;
            }
            if ( v134 )
            {
              v88 = v133;
            }
            else
            {
              v88 = v133;
              if ( (v133 & 0x80u) == 0 )
              {
                v120 = a1;
                v107 = v3;
                v89 = __ctype_b_loc();
                a1 = v120;
                v3 = v107;
                if ( ((*v89)[v88] & 0x400) != 0 )
                {
                  v90 = "a" == nullptr;
                  v76 = (char **)&off_64E100;
                  while ( !v90 )
                  {
                    v121 = a1;
                    v108 = v3;
                    v91 = strcmp((const char *)&v133, *v76);
                    a1 = v121;
                    v3 = v108;
                    if ( !v91 )
                      goto LABEL_210;
                    v76 += 3;
                    v90 = *v76 == nullptr;
                  }
                }
              }
            }
            v92 = &v133;
            v93 = 0;
            v94 = &v133;
            if ( v88 )
            {
              v95 = v133;
              do
              {
                if ( v95 == 46 )
                  ++v93;
                else
                  *v94++ = v95;
                v95 = *++v92;
              }
              while ( *v92 );
            }
            *v94 = 0;
            if ( v93 )
            {
              v76 = (char **)&off_64E5C0;
              for ( m = "gmt" == nullptr; !m; m = *v76 == nullptr )
              {
                v122 = a1;
                v109 = v3;
                v97 = strcmp((const char *)&v133, *v76);
                a1 = v122;
                v3 = v109;
                if ( !v97 )
                  goto LABEL_181;
                v76 += 3;
              }
            }
            v131 = 261;
            goto LABEL_12;
          }
          LODWORD(v132) = 1;
        }
        else
        {
          LODWORD(v132) = 0;
        }
        v131 = 262;
      }
      else if ( v40 == 40 )
      {
        v42 = (unsigned __int8 *)(v39 + 1);
        v43 = 0;
        while ( 1 )
        {
          v44 = v42;
          v35 = v42++;
          *(_QWORD *)(v111 + 176) = v44;
          v45 = *(v42 - 2);
          if ( !v45 )
            break;
          if ( v45 == 40 )
            ++v43;
          else
            v43 -= v45 == 41;
          if ( v43 <= 0 )
            goto LABEL_50;
        }
        HIDWORD(v148) = (_DWORD)v44 - *(_DWORD *)(v111 + 168) - 1;
        v131 = 0;
      }
      else
      {
        HIDWORD(v148) = (_DWORD)v39 - *(_DWORD *)(v111 + 168);
        v64 = *v39;
        *(_QWORD *)(v111 + 176) = v39 + 1;
        v131 = v64;
      }
    }
LABEL_12:
    if ( v131 <= 0 )
    {
      v15 = 0;
      v131 = 0;
    }
    else
    {
      v15 = 2;
      if ( (unsigned int)v131 <= 0x112 )
        v15 = *((unsigned __int8 *)qword_5093A0 + v131);
    }
    v16 = v15 + v14;
    if ( (unsigned int)v16 <= 0x4F && (v17 = v16, *((unsigned __int8 *)qword_509340 + v16) == v15) )
    {
      v46 = *((unsigned __int8 *)&unk_5092E0 + v16);
      if ( *((_BYTE *)&unk_5092E0 + v17) )
      {
        if ( v46 == 2 )
          goto LABEL_171;
        v47 = -2;
        v129 = (v129 == 0) + v129 - 1;
        v130 = v46;
        if ( !v131 )
          v47 = 0;
        ++v3;
        v125 += 16;
        v2 += 2;
        v131 = v47;
        *v3 = v132;
        *(_QWORD *)v125 = v147;
        *((_QWORD *)v125 + 1) = v148;
      }
      else
      {
        if ( (unsigned int)(v46 + 1) <= 1 )
          goto LABEL_22;
        v18 = -v46;
LABEL_18:
        v19 = v3[1 - *((unsigned __int8 *)qword_509240 + v18)];
        if ( *((_BYTE *)qword_509240 + v18) )
        {
          v20 = *((unsigned __int8 *)qword_509240 + v18);
          v138 = *(_QWORD *)&v125[-16 * v20 + 16];
          v139 = *((_QWORD *)v125 + 1);
          v21 = (unsigned int)(v18 - 4);
        }
        else
        {
          v20 = 0;
          LODWORD(v139) = *((_DWORD *)v125 + 2);
          LODWORD(v138) = v139;
          HIDWORD(v139) = *((_DWORD *)v125 + 3);
          HIDWORD(v138) = HIDWORD(v139);
          v21 = (unsigned int)(v18 - 4);
          if ( (unsigned int)(v18 - 4) > 0x34 )
            goto LABEL_37;
        }
        switch ( v21 )
        {
          case 0LL:
            ++*(_DWORD *)(a1 + 76);
            break;
          case 1LL:
            goto LABEL_75;
          case 2LL:
            goto LABEL_79;
          case 3LL:
            ++*(_DWORD *)(a1 + 136);
            break;
          case 4LL:
            ++*(_DWORD *)(a1 + 160);
            break;
          case 5LL:
            goto LABEL_77;
          case 6LL:
            ++*(_DWORD *)(a1 + 76);
LABEL_79:
            ++*(_DWORD *)(a1 + 40);
            break;
          case 7LL:
            ++*(_DWORD *)(a1 + 76);
            ++*(_DWORD *)(a1 + 40);
LABEL_77:
            ++*(_DWORD *)(a1 + 120);
            break;
          case 9LL:
            v57 = *(v3 - 1);
            *(_QWORD *)(a1 + 56) = 0;
            *(_QWORD *)(a1 + 48) = v57;
            goto LABEL_110;
          case 10LL:
            *(_QWORD *)(a1 + 48) = *(v3 - 3);
            *(_QWORD *)(a1 + 56) = *(v3 - 1);
LABEL_110:
            *(_QWORD *)(a1 + 64) = 0;
            goto LABEL_99;
          case 11LL:
            *(_QWORD *)(a1 + 48) = *(v3 - 4);
            *(_QWORD *)(a1 + 56) = *(v3 - 2);
            goto LABEL_74;
          case 12LL:
            *(_QWORD *)(a1 + 48) = *(v3 - 5);
            *(_QWORD *)(a1 + 56) = *(v3 - 3);
            *(_QWORD *)(a1 + 64) = *(v3 - 1);
LABEL_99:
            *(_DWORD *)(a1 + 72) = *(_DWORD *)v3;
            break;
          case 13LL:
            *(_QWORD *)(a1 + 48) = *(v3 - 6);
            *(_QWORD *)(a1 + 56) = *(v3 - 4);
            *(_QWORD *)(a1 + 64) = *(v3 - 2);
LABEL_74:
            *(_DWORD *)(a1 + 72) = 2;
            *(_DWORD *)(a1 + 88) = 1;
            *(_QWORD *)(a1 + 80) = (__int64)*v3 % 100 + 60 * ((__int64)*v3 / 100);
LABEL_75:
            ++*(_DWORD *)(a1 + 92);
            break;
          case 14LL:
            v58 = *(v3 - 1);
            goto LABEL_121;
          case 15LL:
            v59 = *v3;
            *(_DWORD *)(a1 + 88) = 1;
            *(_QWORD *)(a1 + 80) = v59;
            break;
          case 16LL:
            v58 = *v3;
LABEL_121:
            *(_QWORD *)(a1 + 80) = v58;
            *(_DWORD *)(a1 + 88) = 0;
            break;
          case 17LL:
            *(_QWORD *)(a1 + 144) = 1;
            goto LABEL_102;
          case 18LL:
            *(_QWORD *)(a1 + 144) = 1;
            v54 = *(v3 - 1);
            goto LABEL_103;
          case 19LL:
            v53 = *(v3 - 1);
            goto LABEL_101;
          case 20LL:
            v53 = *(v3 - 2) * *(v3 - 1);
LABEL_101:
            *(_QWORD *)(a1 + 144) = v53;
            goto LABEL_102;
          case 21LL:
            *(_QWORD *)(a1 + 144) = 2;
LABEL_102:
            v54 = *v3;
LABEL_103:
            *(_QWORD *)(a1 + 152) = v54;
            break;
          case 22LL:
            v56 = *(v3 - 2);
            goto LABEL_116;
          case 23LL:
            v55 = *(v3 - 4);
            goto LABEL_114;
          case 24LL:
            *(_QWORD *)(a1 + 16) = (__int64)*v3 / 10000;
            *(_QWORD *)(a1 + 24) = (__int64)*v3 % 10000 / 100;
            *(_QWORD *)(a1 + 32) = (__int64)*v3 % 100;
            break;
          case 25LL:
            *(_QWORD *)(a1 + 32) = *(v3 - 4);
            *(_QWORD *)(a1 + 24) = *(v3 - 2);
            goto LABEL_84;
          case 26LL:
            *(_QWORD *)(a1 + 24) = *(v3 - 2);
            *(_QWORD *)(a1 + 32) = *v3;
            *(_QWORD *)(a1 + 16) = *(v3 - 4);
            break;
          case 27LL:
            v56 = *(v3 - 1);
LABEL_116:
            *(_QWORD *)(a1 + 24) = v56;
            *(_QWORD *)(a1 + 32) = *v3;
            break;
          case 28LL:
            v55 = *(v3 - 3);
            goto LABEL_114;
          case 29LL:
            *(_QWORD *)(a1 + 24) = *v3;
            *(_QWORD *)(a1 + 32) = *(v3 - 1);
            break;
          case 30LL:
            *(_QWORD *)(a1 + 24) = 1;
            *(_QWORD *)(a1 + 32) = 1;
            *(_QWORD *)(a1 + 16) = 1970;
            break;
          case 31LL:
            v55 = *(v3 - 1);
LABEL_114:
            *(_QWORD *)(a1 + 24) = v55;
            *(_QWORD *)(a1 + 32) = *(v3 - 2);
            goto LABEL_84;
          case 32LL:
            *(_QWORD *)(a1 + 128) = 1;
            goto LABEL_132;
          case 33LL:
            *(_QWORD *)(a1 + 128) = *(v3 - 1);
LABEL_132:
            *(_QWORD *)(a1 + 24) = *v3;
            break;
          case 34LL:
            if ( *(v3 - 1) != 420 )
              goto LABEL_42;
            *(_QWORD *)(a1 + 16) = (__int64)*(v3 - 2) / 10000;
            *(_QWORD *)(a1 + 24) = (__int64)*(v3 - 2) % 10000 / 100;
            v60 = *(v3 - 2);
            goto LABEL_126;
          case 35LL:
            if ( *(v3 - 5) != 420 )
              goto LABEL_42;
            *(_QWORD *)(a1 + 16) = (__int64)*(v3 - 6) / 10000;
            *(_QWORD *)(a1 + 24) = (__int64)*(v3 - 6) % 10000 / 100;
            *(_QWORD *)(a1 + 32) = (__int64)*(v3 - 6) % 100;
            *(_QWORD *)(a1 + 48) = *(v3 - 4);
            *(_QWORD *)(a1 + 56) = *(v3 - 2);
            *(_QWORD *)(a1 + 64) = *v3;
            break;
          case 36LL:
            *(_QWORD *)(a1 + 16) = (__int64)*(v3 - 1) / 10000;
            *(_QWORD *)(a1 + 24) = (__int64)*(v3 - 1) % 10000 / 100;
            v60 = *(v3 - 1);
LABEL_126:
            *(_QWORD *)(a1 + 32) = v60 % 100;
            *(_QWORD *)(a1 + 48) = (__int64)*v3 / 10000;
            *(_QWORD *)(a1 + 56) = (__int64)*v3 % 10000 / 100;
            *(_QWORD *)(a1 + 64) = (__int64)*v3 % 100;
            break;
          case 37LL:
            v50 = *(v3 - 2);
            *(_QWORD *)(a1 + 32) = 1;
            *(_QWORD *)(a1 + 24) = 1;
            v51 = 0;
            v52 = v50 / 1000 + 1946;
            *(_QWORD *)(a1 + 16) = v52;
            if ( (v52 & 3) == 0 && (v52 != 100 * (v52 / 100) || v52 == 400 * (v52 / 400)) )
              v51 = 1;
            *(_QWORD *)(a1 + 104) += (__int64)*(v3 - 2) % 1000 * (v51 + 365) / 1000;
            *(_QWORD *)(a1 + 112) += 8640 * *v3;
            break;
          case 38LL:
            *(_QWORD *)(a1 + 112) = -*(_QWORD *)(a1 + 112);
            *(_QWORD *)(a1 + 96) = -*(_QWORD *)(a1 + 96);
            *(_QWORD *)(a1 + 104) = -*(_QWORD *)(a1 + 104);
            break;
          case 40LL:
            **(_QWORD **)(a1 + 184) += *v3 * *(v3 - 2) * *(v3 - 1);
            break;
          case 41LL:
          case 43LL:
            **(_QWORD **)(a1 + 184) += *(v3 - 1) * *v3;
            break;
          case 42LL:
          case 44LL:
            **(_QWORD **)(a1 + 184) += *v3;
            break;
          case 45LL:
            v19 = -1;
            break;
          case 46LL:
            v19 = 1;
            break;
          case 47LL:
            v19 = *v3;
            v49 = a1 + 112;
            goto LABEL_86;
          case 48LL:
            v19 = *v3;
            v49 = a1 + 104;
            goto LABEL_86;
          case 49LL:
            v19 = *v3;
            v49 = a1 + 96;
LABEL_86:
            *(_QWORD *)(a1 + 184) = v49;
            break;
          case 50LL:
            v48 = *(_DWORD *)(a1 + 76);
            if ( v48 && *(_DWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 120) )
            {
LABEL_84:
              *(_QWORD *)(a1 + 16) = *v3;
            }
            else
            {
              v70 = *(_DWORD *)(a1 + 192) <= 2;
              *(_DWORD *)(a1 + 76) = v48 + 1;
              if ( v70 )
              {
                v71 = *v3;
                *(_QWORD *)(a1 + 56) = 0;
                *(_QWORD *)(a1 + 48) = v71;
              }
              else
              {
                *(_QWORD *)(a1 + 48) = (__int64)*v3 / 100;
                *(_QWORD *)(a1 + 56) = (__int64)*v3 % 100;
              }
              *(_QWORD *)(a1 + 64) = 0;
              *(_DWORD *)(a1 + 72) = 2;
            }
            break;
          case 51LL:
            v19 = v19 & 0xFFFFFFFF00000000LL | 2;
            break;
          case 52LL:
            v19 = *(unsigned int *)v3 | v19 & 0xFFFFFFFF00000000LL;
            break;
          default:
            break;
        }
LABEL_37:
        v3 = &v3[-v20 + 1];
        v125 = &v125[-16 * v20 + 16];
        v27 = (__int16 *)&v2[-2 * v20];
        v28 = v138;
        *v3 = v19;
        *(_QWORD *)v125 = v28;
        *((_QWORD *)v125 + 1) = v139;
        v29 = *((unsigned __int8 *)qword_509200 + v18);
        v30 = *v27;
        v31 = v30 + *((char *)&qword_5091F0[-3] + v29 - 2);
        if ( (unsigned int)v31 <= 0x4F && *((unsigned __int8 *)qword_509340 + v31) == v30 )
        {
          v2 = (char *)(v27 + 1);
          v130 = *((unsigned __int8 *)&unk_5092E0 + v31);
        }
        else
        {
          v2 = (char *)(v27 + 1);
          v130 = *((char *)&qword_5091E0[-3] + v29 - 2);
        }
      }
    }
    else
    {
LABEL_17:
      v18 = *((unsigned __int8 *)qword_509280 + v130);
      if ( *((_BYTE *)qword_509280 + v130) )
        goto LABEL_18;
LABEL_22:
      if ( !v129 )
      {
        v112 = a1;
        v99 = v3;
        sub_43D990((__int64)&v147, (_QWORD *)a1, (__int64)"syntax error");
        v3 = v99;
        a1 = v112;
      }
      v140 = v147;
      v141 = v148;
      if ( v129 == 3 )
      {
        if ( v131 <= 0 )
        {
          if ( !v131 )
            break;
        }
        else
        {
          v131 = -2;
        }
      }
      v129 = 3;
      while ( 1 )
      {
        v23 = *((char *)qword_5094C0 + v13);
        if ( v23 != -22 )
        {
          v24 = v23 + 1;
          if ( (unsigned int)v24 <= 0x4F )
          {
            v25 = v24;
            if ( *((_BYTE *)qword_509340 + v24) == 1 )
            {
              v26 = *((unsigned __int8 *)&unk_5092E0 + v24);
              if ( *((_BYTE *)&unk_5092E0 + v25) )
                break;
            }
          }
        }
        if ( v2 == (char *)src )
          goto LABEL_41;
        v2 -= 2;
        --v3;
        v13 = *(__int16 *)v2;
        v140 = *(_QWORD *)v125;
        v22 = *((_QWORD *)v125 + 1);
        v125 -= 16;
        v141 = v22;
      }
      if ( v26 == 2 )
      {
LABEL_171:
        v32 = 0;
        v20 = 0;
        goto LABEL_43;
      }
      ++v3;
      v143 = v148;
      v125 += 16;
      v142 = v147;
      v2 += 2;
      v130 = v26;
      *v3 = v132;
      v138 = v140;
      v139 = v143;
      *(_QWORD *)v125 = v140;
      *((_QWORD *)v125 + 1) = v139;
    }
  }
LABEL_41:
  v20 = 0;
LABEL_42:
  v32 = 1;
LABEL_43:
  for ( n = (__int16 *)&v2[-2 * v20]; n != src; --n )
    ;
  if ( v146 != (_BYTE *)src )
    Tcl_Free((__int64)src);
  return v32;
}

