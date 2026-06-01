__int64 __fastcall sub_8AAAE0(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r10
  __int64 v10; // rdx
  unsigned int v11; // ebx
  void *v12; // rax
  char v13; // cl
  int v14; // r14d
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  __int64 v17; // r12
  int *v18; // rbx
  __int64 v19; // rbp
  __int64 *v20; // rbx
  int v21; // r13d
  __int64 v22; // r12
  _QWORD *v23; // rax
  __int64 *v24; // rcx
  _QWORD *v25; // rdx
  _QWORD *v26; // rbp
  _QWORD *v27; // rax
  __int64 *v28; // r12
  __int64 v29; // rsi
  __int64 v30; // rdi
  unsigned int v31; // r12d
  __int64 *v32; // rbp
  __int64 *v33; // rbx
  __int64 v35; // rbp
  char v36; // al
  __int64 v37; // r14
  __int64 v38; // rsi
  __int64 v39; // rdx
  void *v40; // rbp
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  void *v45; // r14
  __int64 v46; // rax
  __int64 v47; // r14
  unsigned __int64 v48; // rdx
  __int64 v49; // rdx
  char v50; // al
  unsigned int v51; // ebp
  __int64 *v52; // rdx
  __int64 v53; // r13
  __int64 v54; // rax
  unsigned __int64 v55; // rdx
  __int64 *v56; // r15
  int *v57; // rbp
  __int64 v58; // r14
  int *v59; // rsi
  __int64 v60; // rdi
  __int64 *v61; // r14
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // rbp
  char v65; // al
  unsigned int v66; // eax
  char v67; // r13
  void *v68; // r14
  _QWORD *v69; // rdi
  __int64 v70; // r13
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r13
  __int64 *v76; // rdi
  __int64 *v77; // r14
  __int64 *v78; // r13
  __int64 v79; // rsi
  __int64 *v80; // r13
  __int64 *v81; // rbp
  __int64 v82; // rsi
  __int64 *v83; // r14
  __int64 *v84; // r13
  __int64 v85; // rsi
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 *v90; // rdi
  __int64 *v91; // r13
  __int64 *v92; // r15
  __int64 v93; // rsi
  __int64 v94; // r15
  __int64 *v95; // r14
  int *v96; // rbp
  __int64 v97; // rbx
  int *v98; // rsi
  __int64 v99; // rdi
  __int64 *v100; // rbp
  int v101; // eax
  __int64 *v102; // rax
  __int64 *v103; // r14
  __int64 *v104; // r13
  __int64 v105; // rsi
  char v106; // r15
  __int64 *v107; // r13
  __int64 v108; // rbx
  int *v109; // rbp
  int *v110; // rsi
  __int64 v111; // rdi
  __int64 *v112; // rbx
  int v113; // eax
  __int64 *v114; // rdx
  __int64 *v115; // r15
  __int64 *v116; // rbx
  __int64 *v117; // rbp
  __int64 *v118; // r12
  __int64 v119; // rdx
  __int64 v120; // rax
  __int64 *v121; // r15
  void **v122; // rbx
  __int64 *v123; // rbp
  __int64 *v124; // r13
  __int64 v125; // rcx
  __int64 v126; // rdx
  _QWORD *v127; // rax
  __int64 v128; // [rsp+0h] [rbp-238h]
  char v129; // [rsp+0h] [rbp-238h]
  unsigned int v130; // [rsp+8h] [rbp-230h]
  unsigned int v131; // [rsp+Ch] [rbp-22Ch]
  unsigned int v132; // [rsp+10h] [rbp-228h]
  int v133; // [rsp+10h] [rbp-228h]
  unsigned int v134; // [rsp+10h] [rbp-228h]
  int v135; // [rsp+10h] [rbp-228h]
  unsigned int v136; // [rsp+10h] [rbp-228h]
  __int64 v138; // [rsp+20h] [rbp-218h]
  __int64 v139; // [rsp+28h] [rbp-210h]
  unsigned int v140; // [rsp+38h] [rbp-200h]
  void *v141; // [rsp+38h] [rbp-200h]
  int v142; // [rsp+40h] [rbp-1F8h]
  void *v143; // [rsp+40h] [rbp-1F8h]
  __int64 v144; // [rsp+48h] [rbp-1F0h]
  unsigned int v145; // [rsp+48h] [rbp-1F0h]
  char v146; // [rsp+50h] [rbp-1E8h]
  void *v147; // [rsp+50h] [rbp-1E8h]
  __int64 v148; // [rsp+58h] [rbp-1E0h]
  unsigned int v149; // [rsp+60h] [rbp-1D8h]
  char v150; // [rsp+67h] [rbp-1D1h]
  int v151; // [rsp+68h] [rbp-1D0h]
  void *v152; // [rsp+70h] [rbp-1C8h] BYREF
  __int64 *v153; // [rsp+78h] [rbp-1C0h]
  void *v154; // [rsp+90h] [rbp-1A8h] BYREF
  __int64 *v155; // [rsp+98h] [rbp-1A0h]
  void *v156; // [rsp+B0h] [rbp-188h] BYREF
  __int64 *v157; // [rsp+B8h] [rbp-180h]
  void *v158; // [rsp+D0h] [rbp-168h] BYREF
  __int64 *v159; // [rsp+D8h] [rbp-160h] BYREF
  __int64 *v160; // [rsp+E0h] [rbp-158h]
  __int64 *v161; // [rsp+110h] [rbp-128h] BYREF
  __int64 v162; // [rsp+118h] [rbp-120h]
  _BYTE v163[280]; // [rsp+120h] [rbp-118h] BYREF

  v6 = *(__int64 **)(a2[1] & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*((unsigned __int8 *)v6 + 16) - 56 > 1 )
    v6 = (__int64 *)sub_B0D320(v6);
  v7 = *((unsigned int *)v6 + 5);
  v8 = a2[3] - a2[2];
  v9 = v6[4];
  v161 = (__int64 *)v163;
  v10 = v8 >> 3;
  v131 = v10;
  v162 = 0x400000000LL;
  if ( !(_DWORD)v7 )
  {
    BYTE4(v158) &= ~1u;
    v159 = nullptr;
    LODWORD(v160) = 0;
    LODWORD(v158) = 8;
    v127 = (_QWORD *)operator new[](8u);
    *v127 = 0;
    v24 = v127 + 1;
LABEL_223:
    v159 = v24;
    LODWORD(v160) = 0;
    goto LABEL_21;
  }
  v130 = 0;
  v11 = 0;
  v149 = v7;
  v139 = v9;
  v138 = (__int64)a2;
  do
  {
    if ( v11 >= v131
      || (v10 = *(_QWORD *)(v138 + 16) + 8LL * v11,
          (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 8LL)
                                                                               & 0xFFFFFFFFFFFFFFF0LL)
                                                                   + 8LL)
                                                       & 0xFFFFFFFFFFFFFFF0LL)
                                           + 16LL)
        - 56 > 1) )
    {
      v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v139 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v36 = *(_BYTE *)(v35 + 16);
      switch ( v36 )
      {
        case 13:
          if ( (((*(_WORD *)(v35 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
            goto LABEL_34;
          break;
        case 46:
          v6 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(v139 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          v63 = sub_B14A40(v6);
          if ( (*(_BYTE *)(v63 + 74) & 1) == 0 && *(_QWORD *)(v63 + 128) <= 7u
            || (v6 = (__int64 *)v35, *(char *)(sub_B14A40(v35) + 76) < 0) )
          {
LABEL_34:
            v37 = sub_2575D00(v6, a2, v10);
            sub_2580BE0(&v158, 0.0);
            sub_257EDC0(&v152, &v158, v37);
            sub_25769A0(&v158);
            if ( v11 < v131 )
            {
              v38 = *(_QWORD *)(*(_QWORD *)(v138 + 16) + 8LL * v11);
              v158 = (void *)*a1;
              v159 = (__int64 *)&v152;
              if ( !(unsigned __int8)sub_883160((__int64 *)&v158, v38) )
              {
                sub_5FF3B0((__int64 *)&v152);
LABEL_184:
                v31 = 0;
                goto LABEL_24;
              }
              v40 = (void *)sub_2575D20(&v158, v38, v39);
LABEL_37:
              if ( v152 == v40 )
                sub_257CF50(&v154, &v152);
              else
                sub_25768A0(&v154, &v152);
              BYTE4(v158) &= ~1u;
              LODWORD(v158) = 0;
              sub_2580BE0(&v156, 0.0);
              sub_257EDC0(&v159, &v156, v37);
              sub_25769A0(&v156);
              LODWORD(v158) = 3;
              if ( v154 == v40 )
                sub_257D000(&v156, &v154, v41, v42);
              else
                sub_2576960(&v156, &v154);
              v45 = v156;
              if ( v159 == v40 )
              {
                v102 = v160;
                if ( v40 == v156 )
                {
                  if ( v160 )
                  {
                    if ( &v160[3 * *(v160 - 1)] == v160 )
                    {
                      v126 = 0;
                    }
                    else
                    {
                      v145 = v11;
                      v121 = v160;
                      v122 = (void **)&v160[3 * *(v160 - 1)];
                      v147 = v40;
                      do
                      {
                        v122 -= 3;
                        if ( *v122 == v45 )
                        {
                          v123 = (__int64 *)v122[1];
                          if ( v123 )
                          {
                            v124 = &v123[3 * *(v123 - 1)];
                            if ( v123 == v124 )
                            {
                              v125 = 0;
                            }
                            else
                            {
                              do
                              {
                                v124 -= 3;
                                sub_5FF3B0(v124);
                              }
                              while ( v123 != v124 );
                              v125 = 24 * *(v123 - 1);
                            }
                            operator delete[](v123 - 1, v125 + 8);
                          }
                          v122[1] = nullptr;
                        }
                        else
                        {
                          sub_25769A0(v122);
                        }
                      }
                      while ( v122 != (void **)v121 );
                      v11 = v145;
                      v102 = v121;
                      v40 = v147;
                      v126 = 24 * *(v121 - 1);
                    }
                    operator delete[](v102 - 1, v126 + 8);
                  }
                  v160 = nullptr;
                  sub_257D000(&v159, &v156, v43, v44);
                  goto LABEL_44;
                }
                if ( !v160 )
                  goto LABEL_126;
                v103 = &v160[3 * *(v160 - 1)];
                if ( v103 == v160 )
                {
                  v105 = 0;
                }
                else
                {
                  v104 = v160;
                  do
                  {
                    v103 -= 3;
                    sub_5FF3B0(v103);
                  }
                  while ( v103 != v104 );
                  v102 = v104;
                  v105 = 24 * *(v104 - 1);
                }
                operator delete[](v102 - 1, v105 + 8);
                v160 = nullptr;
                if ( v40 != v156 )
                  goto LABEL_126;
              }
              else
              {
                if ( v40 != v156 )
                {
                  sub_2576350(&v159, &v156, v43, v44);
LABEL_44:
                  if ( v156 == v40 )
                  {
                    v76 = v157;
                    if ( v157 )
                    {
                      v77 = &v157[3 * *(v157 - 1)];
                      if ( v157 == v77 )
                      {
                        v79 = 0;
                      }
                      else
                      {
                        v78 = v157;
                        do
                        {
                          v77 -= 3;
                          sub_5FF3B0(v77);
                        }
                        while ( v78 != v77 );
                        v76 = v78;
                        v79 = 24 * *(v78 - 1);
                      }
                      operator delete[](v76 - 1, v79 + 8);
                    }
                  }
                  else
                  {
                    sub_25769A0(&v156);
                  }
                  v46 = (unsigned int)v162;
                  a2 = (__int64 *)&v158;
                  v47 = (__int64)v161;
                  v48 = (unsigned int)v162 + 1LL;
                  if ( HIDWORD(v162) < v48 )
                  {
                    if ( &v158 >= (void **)v161 && &v158 < (void **)&v161[7 * (unsigned int)v162] )
                    {
                      v106 = 1;
                      v144 = 0x6DB6DB6DB6DB6DB7LL * (((char *)&v158 - (char *)v161) >> 3);
                    }
                    else
                    {
                      v144 = -1;
                      v106 = 0;
                    }
                    v47 = sub_25D5F70(&v161, v163, v48, 56, &v156);
                    v107 = &v161[7 * (unsigned int)v162];
                    if ( v161 != v107 )
                    {
                      v134 = v11;
                      v108 = v47;
                      v143 = v40;
                      v109 = (int *)v161;
                      do
                      {
                        v110 = v109;
                        v111 = v108;
                        v109 += 14;
                        v108 += 56;
                        sub_69F700(v111, v110);
                      }
                      while ( v107 != (__int64 *)v109 );
                      v11 = v134;
                      v40 = v143;
                      v107 = &v161[7 * (unsigned int)v162];
                      if ( v161 != v107 )
                      {
                        v112 = v161;
                        do
                        {
                          v107 -= 7;
                          if ( *(_DWORD *)v107 > 1u )
                            sub_69F740((__int64)v107);
                        }
                        while ( v112 != v107 );
                        v11 = v134;
                        v107 = v161;
                      }
                    }
                    v113 = (int)v156;
                    if ( v107 != (__int64 *)v163 )
                    {
                      v135 = (int)v156;
                      free(v107);
                      v113 = v135;
                    }
                    HIDWORD(v162) = v113;
                    a2 = (__int64 *)&v158;
                    v46 = (unsigned int)v162;
                    v161 = (__int64 *)v47;
                    if ( v106 )
                      a2 = (__int64 *)(v47 + 56 * v144);
                  }
                  v6 = (__int64 *)(v47 + 56 * v46);
                  sub_69F700((__int64)v6, (int *)a2);
                  LODWORD(v162) = v162 + 1;
                  if ( (unsigned int)v158 > 1 )
                  {
                    v6 = (__int64 *)&v158;
                    sub_69F740((__int64)&v158);
                  }
                  if ( v154 == v40 )
                  {
                    v83 = v155;
                    if ( v155 )
                    {
                      v84 = &v155[3 * *(v155 - 1)];
                      if ( v155 == v84 )
                      {
                        v85 = 0;
                      }
                      else
                      {
                        do
                        {
                          v84 -= 3;
                          sub_5FF3B0(v84);
                        }
                        while ( v83 != v84 );
                        v85 = 24 * *(v83 - 1);
                      }
                      a2 = (__int64 *)(v85 + 8);
                      v6 = v83 - 1;
                      operator delete[](v83 - 1, (unsigned __int64)a2);
                    }
                  }
                  else
                  {
                    v6 = (__int64 *)&v154;
                    sub_25769A0(&v154);
                  }
                  ++v130;
                  if ( v152 == v40 )
                  {
                    v80 = v153;
                    if ( v153 )
                    {
                      v81 = &v153[3 * *(v153 - 1)];
                      if ( v153 == v81 )
                      {
                        v82 = 0;
                      }
                      else
                      {
                        do
                        {
                          v81 -= 3;
                          sub_5FF3B0(v81);
                        }
                        while ( v80 != v81 );
                        v82 = 24 * *(v80 - 1);
                      }
                      a2 = (__int64 *)(v82 + 8);
                      v6 = v80 - 1;
                      operator delete[](v80 - 1, (unsigned __int64)a2);
                    }
                  }
                  else
                  {
                    v6 = (__int64 *)&v152;
                    sub_25769A0(&v152);
                  }
                  goto LABEL_15;
                }
                sub_25769A0(&v159);
                if ( v40 != v156 )
                {
LABEL_126:
                  sub_2576960(&v159, &v156);
                  goto LABEL_44;
                }
              }
              sub_257D000(&v159, &v156, v86, v87);
              goto LABEL_44;
            }
            v69 = *(_QWORD **)(*a1 + 16);
            v70 = sub_6BF060(v69, v139);
            v72 = sub_2575D20(v69, v139, v71);
            v40 = (void *)v72;
            if ( v70 == v72 )
              sub_257CE40(&v158, v72, 0);
            else
              sub_2579AA0(&v158, v70, 0);
            if ( v158 == v40 )
              sub_257D590(&v158, 0);
            else
              sub_25795C0(&v158, 0);
            v75 = (__int64)v158;
            if ( v152 == v40 )
            {
              if ( v40 != v158 )
                goto LABEL_129;
              v114 = v153;
              if ( v153 )
              {
                if ( v153 == &v153[3 * *(v153 - 1)] )
                {
                  v120 = 0;
                }
                else
                {
                  v136 = v11;
                  v115 = v153;
                  v116 = &v153[3 * *(v153 - 1)];
                  v141 = v40;
                  do
                  {
                    v116 -= 3;
                    if ( *v116 == v75 )
                    {
                      v117 = (__int64 *)v116[1];
                      if ( v117 )
                      {
                        v118 = &v117[3 * *(v117 - 1)];
                        if ( v117 == v118 )
                        {
                          v119 = 0;
                        }
                        else
                        {
                          do
                          {
                            v118 -= 3;
                            sub_5FF3B0(v118);
                          }
                          while ( v117 != v118 );
                          v119 = 24 * *(v117 - 1);
                        }
                        operator delete[](v117 - 1, v119 + 8);
                      }
                      v116[1] = 0;
                    }
                    else
                    {
                      sub_25769A0(v116);
                    }
                  }
                  while ( v115 != v116 );
                  v11 = v136;
                  v114 = v115;
                  v40 = v141;
                  v120 = 24 * *(v115 - 1);
                }
                operator delete[](v114 - 1, v120 + 8);
              }
              v153 = nullptr;
              sub_257D000(&v152, &v158, v114, v74);
            }
            else
            {
              if ( v40 != v158 )
              {
                sub_2576350(&v152, &v158, v73, v74);
                goto LABEL_107;
              }
LABEL_129:
              sub_5FF3B0((__int64 *)&v152);
              if ( v40 != v158 )
              {
                sub_2576960(&v152, &v158);
                if ( v158 == v40 )
                {
LABEL_131:
                  v90 = v159;
                  if ( v159 )
                  {
                    v91 = &v159[3 * *(v159 - 1)];
                    if ( v159 == v91 )
                    {
                      v93 = 0;
                    }
                    else
                    {
                      v92 = v159;
                      do
                      {
                        v91 -= 3;
                        sub_5FF3B0(v91);
                      }
                      while ( v92 != v91 );
                      v90 = v92;
                      v93 = 24 * *(v92 - 1);
                    }
                    operator delete[](v90 - 1, v93 + 8);
                  }
                  goto LABEL_37;
                }
LABEL_108:
                sub_25769A0(&v158);
                goto LABEL_37;
              }
              sub_257D000(&v152, &v158, v88, v89);
            }
LABEL_107:
            if ( v158 == v40 )
              goto LABEL_131;
            goto LABEL_108;
          }
          break;
        case 10:
          break;
        default:
          goto LABEL_34;
      }
      BYTE4(v155) = 1;
      LODWORD(v155) = 32;
      v154 = nullptr;
      v49 = *a1;
      if ( v11 >= v131 )
      {
        v64 = *(_QWORD *)(v49 + 16);
        v65 = sub_B10310(*(_QWORD *)(v139 & 0xFFFFFFFFFFFFFFF0LL));
        LODWORD(v157) = 64;
        v156 = nullptr;
        BYTE4(v157) = v65 ^ 1;
        v66 = sub_70B280(v64, v139);
        v51 = (unsigned int)v157;
        v67 = BYTE4(v157);
        if ( v66 == (_DWORD)v157 )
        {
          v68 = v156;
        }
        else
        {
          if ( BYTE4(v157) )
            sub_2587E20(&v158, &v156, v66);
          else
            sub_2587E80(&v158, &v156, v66);
          v51 = (unsigned int)v159;
          v68 = v158;
          if ( (unsigned int)v157 > 0x40 && v156 )
            operator delete[](v156);
        }
        if ( (unsigned int)v155 > 0x40 && v154 )
          operator delete[](v154);
        v154 = v68;
        LODWORD(v155) = v51;
        BYTE4(v155) = v67;
        LODWORD(v157) = v51;
        if ( v51 <= 0x40 )
        {
LABEL_57:
          v52 = (__int64 *)v154;
          v156 = v154;
LABEL_58:
          v159 = v52;
          a2 = (__int64 *)&v158;
          BYTE4(v158) &= ~1u;
          v53 = (__int64)v161;
          BYTE4(v157) = BYTE4(v155);
          BYTE4(v160) = BYTE4(v155);
          v54 = (unsigned int)v162;
          LODWORD(v158) = 2;
          v55 = (unsigned int)v162 + 1LL;
          LODWORD(v160) = v51;
          LODWORD(v157) = 0;
          if ( HIDWORD(v162) < v55 )
          {
            if ( &v158 < (void **)v161 || &v158 >= (void **)&v161[7 * (unsigned int)v162] )
            {
              v129 = 0;
              v94 = -1;
            }
            else
            {
              v129 = 1;
              v94 = 0x6DB6DB6DB6DB6DB7LL * (((char *)&v158 - (char *)v161) >> 3);
            }
            v53 = sub_25D5F70(&v161, v163, v55, 56, &v152);
            v95 = &v161[7 * (unsigned int)v162];
            if ( v161 != v95 )
            {
              v132 = v11;
              v96 = (int *)v161;
              v97 = v53;
              do
              {
                v98 = v96;
                v99 = v97;
                v96 += 14;
                v97 += 56;
                sub_69F700(v99, v98);
              }
              while ( v95 != (__int64 *)v96 );
              v100 = v161;
              v11 = v132;
              v95 = &v161[7 * (unsigned int)v162];
              if ( v161 != v95 )
              {
                do
                {
                  v95 -= 7;
                  if ( *(_DWORD *)v95 > 1u )
                    sub_69F740((__int64)v95);
                }
                while ( v100 != v95 );
                v95 = v161;
              }
            }
            v101 = (int)v152;
            if ( v95 != (__int64 *)v163 )
            {
              v133 = (int)v152;
              free(v95);
              v101 = v133;
            }
            HIDWORD(v162) = v101;
            a2 = (__int64 *)&v158;
            v161 = (__int64 *)v53;
            v54 = (unsigned int)v162;
            if ( v129 )
              a2 = (__int64 *)(v53 + 56 * v94);
          }
          v6 = (__int64 *)(v53 + 56 * v54);
          sub_69F700((__int64)v6, (int *)a2);
          LODWORD(v162) = v162 + 1;
          if ( (unsigned int)v158 > 1 )
          {
            v6 = (__int64 *)&v158;
            sub_69F740((__int64)&v158);
          }
          if ( (unsigned int)v157 > 0x40 )
          {
            v6 = (__int64 *)v156;
            if ( v156 )
              operator delete[](v156);
          }
          ++v130;
          if ( (unsigned int)v155 > 0x40 )
          {
            v6 = (__int64 *)v154;
            if ( v154 )
              operator delete[](v154);
          }
          goto LABEL_15;
        }
      }
      else
      {
        v50 = sub_87D880(
                *(_QWORD *)(*(_QWORD *)(v138 + 16) + 8LL * v11),
                (__int64)&v154,
                v49,
                *(_QWORD *)(v138 + 16),
                v7,
                a6);
        v51 = (unsigned int)v155;
        if ( !v50 )
        {
          if ( (unsigned int)v155 > 0x40 && v154 )
            operator delete[](v154);
          goto LABEL_184;
        }
        LODWORD(v157) = (_DWORD)v155;
        if ( (unsigned int)v155 <= 0x40 )
          goto LABEL_57;
      }
      sub_2585B30(&v156);
      v51 = (unsigned int)v157;
      v52 = (__int64 *)v156;
      goto LABEL_58;
    }
    BYTE4(v158) &= ~1u;
    LODWORD(v158) = 0;
    a2 = *(__int64 **)v10;
    v12 = (void *)*a1;
    v157 = (__int64 *)&v158;
    v156 = v12;
    v6 = (__int64 *)&v156;
    v13 = sub_8A87B0((__int64 *)&v156, (__int64)a2);
    if ( !v13 )
    {
      sub_8272B0(*a1, v138, 110);
      if ( (unsigned int)v158 > 1 )
        sub_69F740((__int64)&v158);
      goto LABEL_184;
    }
    v14 = (int)v160;
    if ( (_DWORD)v160 )
    {
      v140 = v11;
      v15 = (unsigned int)v162;
      v16 = 0;
      v142 = (int)v160;
      v150 = v13;
      v128 = 56LL * (unsigned int)v160;
      do
      {
        v17 = (__int64)v161;
        v18 = (int *)&v159[v16 / 8];
        if ( HIDWORD(v162) < (unsigned __int64)(v15 + 1) )
        {
          if ( v18 < (int *)v161 || v18 >= (int *)&v161[7 * v15] )
          {
            v148 = -1;
            v146 = 0;
          }
          else
          {
            v146 = v150;
            v148 = 0x6DB6DB6DB6DB6DB7LL * (((char *)v18 - (char *)v161) >> 3);
          }
          v17 = sub_25D5F70(&v161, v163, v15 + 1, 56, &v156);
          v56 = &v161[7 * (unsigned int)v162];
          if ( v161 != v56 )
          {
            v57 = (int *)v161;
            v58 = v17;
            do
            {
              v59 = v57;
              v60 = v58;
              v57 += 14;
              v58 += 56;
              sub_69F700(v60, v59);
            }
            while ( v56 != (__int64 *)v57 );
            v61 = v161;
            v56 = &v161[7 * (unsigned int)v162];
            if ( v161 != v56 )
            {
              do
              {
                v56 -= 7;
                if ( *(_DWORD *)v56 > 1u )
                  sub_69F740((__int64)v56);
              }
              while ( v61 != v56 );
              v56 = v161;
            }
          }
          v62 = (int)v156;
          if ( v56 != (__int64 *)v163 )
          {
            v151 = (int)v156;
            free(v56);
            v62 = v151;
          }
          HIDWORD(v162) = v62;
          v161 = (__int64 *)v17;
          v15 = (unsigned int)v162;
          if ( v146 )
            v18 = (int *)(v17 + 56 * v148);
        }
        a2 = (__int64 *)v18;
        v16 += 56LL;
        v6 = (__int64 *)(v17 + 56 * v15);
        sub_6A4260((__int64)v6, v18);
        v15 = (unsigned int)(v162 + 1);
        LODWORD(v162) = v162 + 1;
      }
      while ( v128 != v16 );
      v11 = v140;
      v14 = v142;
    }
    v130 += v14;
    if ( (unsigned int)v158 > 1 )
    {
      v6 = (__int64 *)&v158;
      sub_69F740((__int64)&v158);
    }
LABEL_15:
    ++v11;
  }
  while ( v130 < v149 );
  v19 = (unsigned int)v162;
  BYTE4(v158) &= ~1u;
  v159 = nullptr;
  v20 = v161;
  v21 = v162;
  LODWORD(v160) = 0;
  LODWORD(v158) = 8;
  v22 = 7LL * (unsigned int)v162;
  v23 = (_QWORD *)operator new[](v22 * 8 + 8);
  *v23 = v19;
  v24 = v23 + 1;
  if ( !v19 )
    goto LABEL_223;
  v25 = &v23[v22 + 1];
  v26 = v23 + 1;
  v27 = v23 + 1;
  do
  {
    *((_BYTE *)v27 + 4) &= ~1u;
    v27 += 7;
    *((_DWORD *)v27 - 14) = 0;
  }
  while ( v27 != v25 );
  v159 = v24;
  v28 = &v20[v22];
  LODWORD(v160) = v21;
  do
  {
    v29 = (__int64)v20;
    v30 = (__int64)v26;
    v20 += 7;
    v26 += 7;
    sub_6A63E0(v30, v29);
  }
  while ( v20 != v28 );
LABEL_21:
  sub_6A01B0(a1[1], (__int64)&v158);
  if ( (unsigned int)v158 > 1 )
    sub_69F740((__int64)&v158);
  v31 = 1;
LABEL_24:
  v32 = v161;
  v33 = &v161[7 * (unsigned int)v162];
  if ( v161 != v33 )
  {
    do
    {
      v33 -= 7;
      if ( *(_DWORD *)v33 > 1u )
        sub_69F740((__int64)v33);
    }
    while ( v32 != v33 );
    v33 = v161;
  }
  if ( v33 != (__int64 *)v163 )
    free(v33);
  return v31;
}

