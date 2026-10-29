__int64 __fastcall sub_8A6220(const __m128i *a1, __int64 a2)
{
  unsigned int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r12
  unsigned __int64 v7; // rcx
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  char v19; // dl
  __int64 *v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // r15
  __int64 v25; // rax
  char v26; // al
  __int64 v27; // rcx
  __int64 v28; // r11
  int v29; // eax
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // edx
  __int64 v34; // r15
  char v35; // al
  __int64 v36; // rcx
  unsigned __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // r15
  char v40; // al
  __int64 v41; // rcx
  int v42; // r8d
  int v43; // r9d
  __int64 v44; // r11
  char v45; // al
  char v46; // al
  char v47; // al
  __int64 v48; // r11
  __int64 v49; // rdi
  unsigned int v50; // eax
  unsigned int v51; // r12d
  __int64 v52; // rax
  __int64 v54; // rax
  unsigned int v55; // eax
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rdx
  _BOOL8 v59; // rax
  __int64 v60; // rdx
  _BOOL8 v61; // rax
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdi
  unsigned __int16 v66; // ax
  bool v67; // r10
  __int64 v68; // rax
  __int64 v69; // rdx
  unsigned int v70; // ecx
  __int64 v71; // r12
  unsigned __int64 v72; // rsi
  unsigned __int64 v73; // rax
  void *v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  _BOOL8 v78; // rax
  __int64 v79; // rsi
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 *v82; // rbp
  __int64 *v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rsi
  _QWORD *v86; // rdi
  __int64 v87; // r12
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rbp
  __int64 v91; // rdx
  __int64 v92; // rdx
  _BOOL8 v93; // rax
  __int64 v94; // rdx
  _BOOL8 v95; // rax
  __int64 v96; // rsi
  __int64 v97; // rdx
  __int64 v98; // rbx
  __int64 v99; // rbp
  __int64 v100; // rdx
  _BOOL8 v101; // rax
  __int64 v102; // rsi
  __int64 v103; // rdx
  __int64 v104; // rax
  __int64 *v105; // rdx
  char v106; // cl
  __int64 v107; // rdx
  _BOOL8 v108; // rax
  char v109; // al
  __int64 v110; // rdx
  __int64 v111; // rsi
  __int64 v112; // rdx
  __int64 v113; // rax
  __int64 *v114; // rbx
  __int64 v115; // r13
  __int64 *v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  char v119; // al
  __m128i *v120; // rsi
  __int8 v121; // cl
  __m128i *v122; // rsi
  __m128i *v123; // rdi
  int v124; // eax
  __m128i *v125; // rsi
  __int64 v126; // rdx
  __int64 v127; // rdx
  _BOOL8 v128; // rax
  char v129; // al
  __int64 v130; // rdx
  __int64 v131; // rsi
  __int64 v132; // rdx
  __int64 v133; // rax
  __int64 *v134; // rax
  char v135; // al
  __m128i *v136; // rsi
  __int8 v137; // cl
  unsigned __int64 v138; // rax
  char v139; // al
  char v140; // al
  __int64 v141; // rcx
  int v142; // r8d
  int v143; // r9d
  __int64 v144; // rax
  __int64 v145; // rax
  unsigned __int16 *v146; // r12
  unsigned int v147; // eax
  unsigned int v148; // eax
  unsigned int v149; // eax
  __m128i *v150; // rax
  __m128i *v151; // rdx
  __int8 v152; // al
  __int64 v153; // rdi
  __m128i *v154; // rdi
  bool v155; // zf
  __m128i *v156; // rax
  __int64 v157; // rax
  unsigned __int64 v158; // r15
  __int64 v159; // r12
  bool v160; // al
  unsigned __int8 v161; // al
  unsigned int v162; // eax
  unsigned int *v163; // r15
  __int64 v164; // rax
  _QWORD *v165; // rax
  char v166; // al
  unsigned int v167; // [rsp+4h] [rbp-284h]
  __int64 v168; // [rsp+8h] [rbp-280h]
  unsigned __int64 v169; // [rsp+8h] [rbp-280h]
  __int64 v170; // [rsp+8h] [rbp-280h]
  char *v171; // [rsp+8h] [rbp-280h]
  __int64 v172; // [rsp+8h] [rbp-280h]
  __int64 v173; // [rsp+18h] [rbp-270h]
  __int64 v174; // [rsp+20h] [rbp-268h]
  __int64 v175; // [rsp+20h] [rbp-268h]
  bool v176; // [rsp+20h] [rbp-268h]
  __int64 v177; // [rsp+20h] [rbp-268h]
  __int64 *v178; // [rsp+28h] [rbp-260h]
  unsigned __int64 v179; // [rsp+30h] [rbp-258h]
  bool v180; // [rsp+30h] [rbp-258h]
  _QWORD *v181; // [rsp+38h] [rbp-250h]
  __int64 v182; // [rsp+38h] [rbp-250h]
  _QWORD *v183; // [rsp+38h] [rbp-250h]
  __m128i *v184; // [rsp+38h] [rbp-250h]
  char *v185; // [rsp+38h] [rbp-250h]
  __int64 v186; // [rsp+40h] [rbp-248h]
  __int64 v187; // [rsp+48h] [rbp-240h]
  __int64 v188; // [rsp+48h] [rbp-240h]
  unsigned __int64 v189; // [rsp+50h] [rbp-238h]
  char *v190; // [rsp+58h] [rbp-230h]
  unsigned int v191; // [rsp+60h] [rbp-228h] BYREF
  char v192; // [rsp+64h] [rbp-224h]
  __int64 v193[7]; // [rsp+68h] [rbp-220h] BYREF
  __m128i v194; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v195; // [rsp+B0h] [rbp-1D8h]
  char v196; // [rsp+B8h] [rbp-1D0h]
  __int64 v197; // [rsp+C8h] [rbp-1C0h]
  void *ptr; // [rsp+D0h] [rbp-1B8h]
  __int64 v199; // [rsp+D8h] [rbp-1B0h]
  _BYTE v200[80]; // [rsp+E0h] [rbp-1A8h] BYREF
  __m128i v201; // [rsp+130h] [rbp-158h] BYREF
  __int64 v202; // [rsp+140h] [rbp-148h]
  char v203; // [rsp+148h] [rbp-140h]
  __int64 v204; // [rsp+158h] [rbp-130h]
  void *v205; // [rsp+160h] [rbp-128h]
  __int64 v206; // [rsp+168h] [rbp-120h]
  _BYTE v207[80]; // [rsp+170h] [rbp-118h] BYREF
  __m128i v208; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v209; // [rsp+1D0h] [rbp-B8h] BYREF
  char v210; // [rsp+1D8h] [rbp-B0h]
  __int64 v211; // [rsp+1E8h] [rbp-A0h]
  void *v212; // [rsp+1F0h] [rbp-98h]
  __int64 v213; // [rsp+1F8h] [rbp-90h]
  _BYTE v214[136]; // [rsp+200h] [rbp-88h] BYREF

  v4 = sub_80FBD0(a2);
  if ( v4 )
  {
    v54 = sub_C63970(*(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 16) + 17360LL), v4);
    if ( strchr(*(const char **)(v54 + 24), 69) )
    {
      v55 = sub_80FBD0(a2);
      if ( v55 <= 0x26D )
      {
        if ( v55 <= 0x255 )
        {
          if ( v55 <= 0x22A )
          {
            if ( v55 == 133 )
            {
              v92 = *(unsigned __int8 *)(a2 + 3);
              v93 = (*(_BYTE *)(a2 + 2) & 8) != 0;
              v208 = _mm_loadu_si128(a1);
              return (unsigned int)sub_883160(v208.m128i_i64, *(_QWORD *)(a2 + 8 * v93 + 8 + v92));
            }
            v56 = v55 - 355;
            if ( (unsigned int)v56 <= 7 )
            {
              v57 = 149;
              if ( _bittest64(&v57, v56) )
              {
                sub_8203A0((__int64)&v208);
                v58 = *(unsigned __int8 *)(a2 + 3);
                v59 = (*(_BYTE *)(a2 + 2) & 8) != 0;
                v201 = _mm_loadu_si128(a1);
                if ( (unsigned __int8)sub_883160(v201.m128i_i64, *(_QWORD *)(a2 + 8 * v59 + 8 + v58)) )
                {
                  v60 = *(unsigned __int8 *)(a2 + 3);
                  v61 = (*(_BYTE *)(a2 + 2) & 8) != 0;
                  v201.m128i_i64[1] = (__int64)&v208;
                  v62 = *(_QWORD *)(v60 + a2 + 8 * v61 + 8 + 8);
                  v201.m128i_i64[0] = a1->m128i_i64[0];
                  v51 = sub_883160(v201.m128i_i64, v62);
                  if ( (_BYTE)v51 )
                  {
                    sub_835270((_QWORD *)a1->m128i_i64[1], &v208, v63);
LABEL_58:
                    sub_5FF3B0(v208.m128i_i64);
                    return v51;
                  }
                }
LABEL_107:
                v51 = 0;
                goto LABEL_58;
              }
            }
            return 0;
          }
          v64 = 1LL << ((unsigned __int8)v55 - 43);
          if ( (v64 & 0x6A800000000LL) == 0 )
          {
            if ( (v64 & 0x95) == 0 )
              return 0;
            v94 = *(unsigned __int8 *)(a2 + 3);
            v95 = (*(_BYTE *)(a2 + 2) & 8) != 0;
            v208 = _mm_loadu_si128(a1);
            v96 = *(_QWORD *)(a2 + 8 * v95 + 8 + v94);
            if ( !(unsigned __int8)sub_883160(v208.m128i_i64, v96) )
              return 0;
            v98 = a1->m128i_i64[1];
            v99 = *(_QWORD *)v98;
            if ( v99 == sub_2575D20(&v208, v96, v97) )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(v98 + 8) + 20LL) & 8) != 0 )
                sub_257D180(v98);
            }
            else if ( (*(_BYTE *)(v98 + 20) & 8) != 0 )
            {
              sub_2577530(v98);
            }
            return 1;
          }
          sub_8203A0((__int64)&v208);
          v100 = *(unsigned __int8 *)(a2 + 3);
          v101 = (*(_BYTE *)(a2 + 2) & 8) != 0;
          v201 = _mm_loadu_si128(a1);
          if ( !(unsigned __int8)sub_883160(v201.m128i_i64, *(_QWORD *)(a2 + 8 * v101 + 8 + v100)) )
            goto LABEL_107;
          v102 = *(_QWORD *)(*(unsigned __int8 *)(a2 + 3) + a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + 8);
          v201.m128i_i64[0] = a1->m128i_i64[0];
          v201.m128i_i64[1] = (__int64)&v208;
          v51 = sub_883160(v201.m128i_i64, v102);
          if ( !(_BYTE)v51 )
            goto LABEL_107;
          v104 = sub_2575D20(&v201, v102, v103);
          v82 = (__int64 *)a1->m128i_i64[1];
          v105 = v82;
          if ( *v82 == v104 )
            v105 = (__int64 *)v82[1];
          v106 = *((_BYTE *)v105 + 20);
          v84 = v106 & 7;
          if ( (_BYTE)v84 == 3 )
          {
            v84 = (__int64)&v208;
            if ( v104 == v208.m128i_i64[0] )
              v84 = v208.m128i_i64[1];
            if ( (*(_BYTE *)(v84 + 20) & 7) == 3 && (v106 & 8) != 0 )
              goto LABEL_97;
          }
          else if ( (_BYTE)v84 == 1 )
          {
            goto LABEL_97;
          }
          if ( (unsigned int)sub_8352E0(v208.m128i_i64, a1->m128i_i64[1], v84) != 2 )
            goto LABEL_58;
          goto LABEL_96;
        }
        v76 = 1LL << ((unsigned __int8)v55 - 86);
        if ( (v76 & 0xD50000) != 0 )
        {
          sub_8203A0((__int64)&v201);
          v127 = *(unsigned __int8 *)(a2 + 3);
          v128 = (*(_BYTE *)(a2 + 2) & 8) != 0;
          v208 = _mm_loadu_si128(a1);
          if ( (unsigned __int8)sub_883160(v208.m128i_i64, *(_QWORD *)(a2 + 8 * v128 + 8 + v127)) )
          {
            v129 = *(_BYTE *)(a2 + 2);
            v130 = *(unsigned __int8 *)(a2 + 3);
            v208.m128i_i64[1] = (__int64)&v201;
            v131 = *(_QWORD *)(v130 + a2 + 8LL * ((v129 & 8) != 0) + 8 + 8);
            v208.m128i_i64[0] = a1->m128i_i64[0];
            v51 = sub_883160(v208.m128i_i64, v131);
            if ( (_BYTE)v51 )
            {
              v133 = sub_2575D20(&v208, v131, v132);
              v114 = (__int64 *)a1->m128i_i64[1];
              v115 = v133;
              v134 = v114;
              if ( *v114 == v115 )
                v134 = (__int64 *)v114[1];
              v135 = *((_BYTE *)v134 + 20);
              v118 = v201.m128i_i64[0];
              v117 = v135 & 7;
              if ( (_BYTE)v117 != 1 )
              {
                v136 = &v201;
                if ( v115 == v201.m128i_i64[0] )
                  v136 = (__m128i *)v201.m128i_i64[1];
                v137 = v136[1].m128i_i8[4];
                if ( (v137 & 7) != 1 )
                {
                  if ( (v137 & 7) == 3 && (_BYTE)v117 == 3 )
                  {
                    v161 = v135 & 8;
                    v117 = (v137 & 8) != 0;
                    if ( v161 >> 3 != (_BYTE)v117 )
                    {
                      v125 = (__m128i *)a1->m128i_i64[1];
                      if ( !v161 )
                        v125 = &v201;
                      goto LABEL_136;
                    }
                  }
                  v122 = (__m128i *)a1->m128i_i64[1];
                  v123 = &v201;
                  goto LABEL_134;
                }
LABEL_197:
                sub_835150((__int64)&v208, v114, v117);
                goto LABEL_137;
              }
LABEL_179:
              v150 = &v201;
              if ( v115 == v118 )
                v150 = (__m128i *)v201.m128i_i64[1];
              v125 = &v201;
              if ( (v150[1].m128i_i8[4] & 7) == 1 )
              {
                sub_835150((__int64)&v208, v201.m128i_i64, v117);
                v154 = &v208;
                if ( v115 == v208.m128i_i64[0] )
                  v154 = (__m128i *)v208.m128i_i64[1];
                sub_2579BF0(v154);
                goto LABEL_137;
              }
              goto LABEL_136;
            }
          }
        }
        else
        {
          if ( (v76 & 0xD5) == 0 )
          {
            if ( (v76 & 0xD500) == 0 )
              return 0;
            sub_8203A0((__int64)&v208);
            v77 = *(unsigned __int8 *)(a2 + 3);
            v78 = (*(_BYTE *)(a2 + 2) & 8) != 0;
            v201 = _mm_loadu_si128(a1);
            if ( !(unsigned __int8)sub_883160(v201.m128i_i64, *(_QWORD *)(a2 + 8 * v78 + 8 + v77)) )
              goto LABEL_107;
            v79 = *(_QWORD *)(*(unsigned __int8 *)(a2 + 3) + a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + 8);
            v201.m128i_i64[0] = a1->m128i_i64[0];
            v201.m128i_i64[1] = (__int64)&v208;
            v51 = sub_883160(v201.m128i_i64, v79);
            if ( !(_BYTE)v51 )
              goto LABEL_107;
            v81 = sub_2575D20(&v201, v79, v80);
            v82 = (__int64 *)a1->m128i_i64[1];
            v83 = v82;
            if ( *v82 == v81 )
              v83 = (__int64 *)v82[1];
            v84 = *((_BYTE *)v83 + 20) & 7;
            if ( (_BYTE)v84 == 3 )
            {
              v151 = &v208;
              if ( v81 == v208.m128i_i64[0] )
                v151 = (__m128i *)v208.m128i_i64[1];
              v152 = v151[1].m128i_i8[4];
              v84 = v152 & 7;
              if ( (_BYTE)v84 == 3 && (v152 & 8) != 0 )
                goto LABEL_97;
            }
            else if ( (_BYTE)v84 == 1 )
            {
LABEL_97:
              sub_834130(v82, v208.m128i_i64, v84);
              goto LABEL_58;
            }
            if ( (unsigned int)sub_8352E0(v208.m128i_i64, a1->m128i_i64[1], v84) )
              goto LABEL_58;
LABEL_96:
            v82 = (__int64 *)a1->m128i_i64[1];
            goto LABEL_97;
          }
          sub_8203A0((__int64)&v201);
          v107 = *(unsigned __int8 *)(a2 + 3);
          v108 = (*(_BYTE *)(a2 + 2) & 8) != 0;
          v208 = _mm_loadu_si128(a1);
          if ( (unsigned __int8)sub_883160(v208.m128i_i64, *(_QWORD *)(a2 + 8 * v108 + 8 + v107)) )
          {
            v109 = *(_BYTE *)(a2 + 2);
            v110 = *(unsigned __int8 *)(a2 + 3);
            v208.m128i_i64[1] = (__int64)&v201;
            v111 = *(_QWORD *)(v110 + a2 + 8LL * ((v109 & 8) != 0) + 8 + 8);
            v208.m128i_i64[0] = a1->m128i_i64[0];
            v51 = sub_883160(v208.m128i_i64, v111);
            if ( (_BYTE)v51 )
            {
              v113 = sub_2575D20(&v208, v111, v112);
              v114 = (__int64 *)a1->m128i_i64[1];
              v115 = v113;
              v116 = v114;
              if ( *v114 == v115 )
                v116 = (__int64 *)v114[1];
              v117 = *((unsigned __int8 *)v116 + 20);
              v118 = v201.m128i_i64[0];
              v119 = *((_BYTE *)v116 + 20) & 7;
              if ( v119 != 1 )
              {
                v120 = &v201;
                if ( v115 == v201.m128i_i64[0] )
                  v120 = (__m128i *)v201.m128i_i64[1];
                v121 = v120[1].m128i_i8[4];
                if ( (v121 & 7) != 1 )
                {
                  if ( v119 == 3 && (v121 & 7) == 3 )
                  {
                    v117 &= 8u;
                    if ( (unsigned __int8)v117 >> 3 != ((v121 & 8) != 0) )
                    {
                      v125 = &v201;
                      if ( !(_BYTE)v117 )
                        v125 = (__m128i *)a1->m128i_i64[1];
LABEL_136:
                      sub_835150((__int64)&v208, v125->m128i_i64, v117);
LABEL_137:
                      sub_834250(v114, v208.m128i_i64, v126);
                      sub_5FF3B0(v208.m128i_i64);
LABEL_138:
                      sub_5FF3B0(v201.m128i_i64);
                      return v51;
                    }
                  }
                  v122 = &v201;
                  v123 = (__m128i *)a1->m128i_i64[1];
LABEL_134:
                  v124 = sub_8352E0(v123->m128i_i64, (__int64)v122, v117);
                  v125 = &v201;
                  if ( v124 )
                    v125 = (__m128i *)v114;
                  goto LABEL_136;
                }
                goto LABEL_197;
              }
              goto LABEL_179;
            }
          }
        }
        v51 = 0;
        goto LABEL_138;
      }
      if ( v55 > 0x3B5 )
        return 0;
      if ( v55 > 0x3A8 )
      {
        v75 = 1LL << ((unsigned __int8)v55 + 87);
        if ( (v75 & 0xD5) != 0 )
        {
          if ( (unsigned __int8)sub_834450(
                                  *(_QWORD **)(a1->m128i_i64[0] + 16),
                                  *(_QWORD *)(a2 + 8),
                                  *(_QWORD *)(a2
                                            + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0)
                                            + 8
                                            + *(unsigned __int8 *)(a2 + 3)),
                                  0,
                                  (__int64 *)a1->m128i_i64[1]) )
            return 1;
        }
        else
        {
          if ( (v75 & 0x1F00) == 0 )
            return 0;
          if ( (unsigned __int8)sub_834450(
                                  *(_QWORD **)(a1->m128i_i64[0] + 16),
                                  *(_QWORD *)(a2 + 8),
                                  *(_QWORD *)(a2
                                            + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0)
                                            + 8
                                            + *(unsigned __int8 *)(a2 + 3)),
                                  1,
                                  (__int64 *)a1->m128i_i64[1]) )
            return 1;
        }
        sub_826A70(a1->m128i_i64[0], a2, 110);
        return 0;
      }
      if ( v55 <= 0x2BD )
      {
        if ( v55 <= 0x2B8 )
          return 0;
      }
      else if ( v55 - 718 > 4 )
      {
        return 0;
      }
      v85 = *(_QWORD *)(a2 + 8);
      v86 = *(_QWORD **)(a1->m128i_i64[0] + 16);
      v87 = sub_6BF060(v86, v85);
      v89 = sub_2575D20(v86, v85, v88);
      v90 = v89;
      if ( v87 == v89 )
        sub_257CE40(&v208, v89, 0);
      else
        sub_2579AA0(&v208, v87, 0);
      if ( v208.m128i_i64[0] == v90 )
        sub_257D420(&v208, 0);
      else
        sub_2579170(&v208, 0);
      sub_834250((__int64 *)a1->m128i_i64[1], v208.m128i_i64, v91);
      sub_5FF3B0(v208.m128i_i64);
      return 1;
    }
  }
  v5 = a1->m128i_i64[0];
  v192 &= ~1u;
  v191 = 0;
  v6 = *(_QWORD *)(v5 + 32);
  v167 = *(_DWORD *)(v5 + 320);
  v7 = *(unsigned int *)(v6 + 196);
  v8 = *(_DWORD *)(v6 + 208) + 1;
  v9 = *(unsigned int *)(v6 + 192);
  *(_DWORD *)(v6 + 208) = v8;
  if ( v7 < v9 + 1 )
  {
    sub_25D6060(v6 + 184, v6 + 200, v9 + 1, 4);
    v9 = *(unsigned int *)(v6 + 192);
  }
  *(_DWORD *)(*(_QWORD *)(v6 + 184) + 4 * v9) = v8;
  ++*(_DWORD *)(v6 + 192);
  v168 = *(unsigned __int8 *)(a2 + 3);
  v10 = sub_80F230(*(_QWORD *)(a2 + v168));
  v194 = 0u;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = v10;
  v15 = *(unsigned int *)(a2 + 16);
  v16 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  v196 |= 1u;
  v179 = v15;
  LOBYTE(v15) = *(_BYTE *)(a2 + 2);
  v195 = 0;
  ptr = v200;
  v199 = 0x800000000LL;
  v200[65] = 0;
  v197 = 0;
  v17 = *(_QWORD *)v16;
  v178 = (__int64 *)(a2 + v168 + 8LL * ((v15 & 8) != 0) + 8);
  v173 = 0;
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v19 = *(_BYTE *)(v18 + 16);
  if ( v19 != 13 )
  {
    if ( *(_BYTE *)(v17 + 16) != 41 )
    {
      v169 = v16;
      if ( v19 != 41 )
        goto LABEL_37;
      v52 = sub_B0D320(v17);
      v16 = v169;
      v17 = v52;
      if ( !v52 )
        goto LABEL_37;
    }
    goto LABEL_7;
  }
  if ( ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) == 0x1F2 )
  {
    v65 = a1->m128i_i64[0];
    v66 = *(_WORD *)v14 & 0x1FF;
    if ( v66 == 47 )
    {
      if ( !(unsigned __int8)sub_89DEE0(v65, *(_QWORD *)(v14 + 16), (__int64)&v194, v16, v11, v12) )
        goto LABEL_38;
      v48 = *(_QWORD *)(v14 + 24);
      if ( (*(_BYTE *)(v48 + 28) & 0x7Fu) - 33 <= 3 )
      {
        v67 = (*(_BYTE *)(v14 + 2) & 0x10) != 0;
        v184 = &v194;
LABEL_66:
        v176 = v67;
        v68 = *(_QWORD *)(a1->m128i_i64[0] + 32);
        v170 = v48;
        v69 = (unsigned int)(*(_DWORD *)(v68 + 208) + 1);
        v70 = *(_DWORD *)(v68 + 176);
        *(_DWORD *)(v68 + 208) = v69;
        v173 = (v69 << 32) | v70;
        if ( (unsigned __int8)sub_899300((__int64)v178, v179, v69, a1->m128i_i64[0], v48, 0) )
        {
          v48 = v170;
          v67 = v176;
          v188 = v170;
          goto LABEL_68;
        }
LABEL_38:
        v51 = 0;
        goto LABEL_39;
      }
    }
    else
    {
      if ( v66 <= 0x76u )
      {
        if ( v66 == 103 )
        {
          if ( *(char *)(sub_A2CB40(v65) + 1) >= 0 )
            sub_A2E240(a1->m128i_i64[0], v14, 2278, 0);
          if ( (unsigned __int8)sub_89DEE0(a1->m128i_i64[0], *(_QWORD *)(v14 + 16), (__int64)&v194, v141, v142, v143) )
          {
            v144 = sub_8C1F60(v14);
            v51 = sub_8926A0(a1->m128i_i64[0], (_DWORD *)v14, &v194, v144);
            goto LABEL_39;
          }
          goto LABEL_38;
        }
        goto LABEL_156;
      }
      if ( v66 > 0x78u )
      {
LABEL_156:
        sub_826A70(v65, v14, 110);
        goto LABEL_38;
      }
      v138 = sub_89E210(v65, v14, (__int64)&v194, 0, v11, v12);
      v48 = v138;
      if ( !v138 )
        goto LABEL_38;
      v184 = &v194;
      v67 = 0;
      if ( (*(_BYTE *)(v138 + 28) & 0x7Fu) - 33 <= 3 )
        goto LABEL_66;
    }
    v65 = a1->m128i_i64[0];
    goto LABEL_156;
  }
  if ( *(_BYTE *)(v17 + 16) != 41 )
  {
LABEL_37:
    sub_826A70(a1->m128i_i64[0], a2, 110);
    goto LABEL_38;
  }
LABEL_7:
  v181 = (_QWORD *)v16;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 32)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 > 1 )
    goto LABEL_37;
  v20 = (__int64 *)a1->m128i_i64[0];
  v21 = v14;
  v208.m128i_i64[1] = (__int64)&v201;
  v203 |= 1u;
  v201 = 0u;
  v202 = 0;
  v204 = 0;
  v205 = v207;
  v206 = 0x800000000LL;
  v207[65] = 0;
  v208.m128i_i64[0] = (__int64)v20;
  LOBYTE(v209) = 0;
  if ( !(unsigned __int8)sub_871080((__int64)&v208, v14, v20, (__int64)v207, v11, v12) )
    goto LABEL_77;
  v23 = a1->m128i_i64[0];
  if ( v202 )
    goto LABEL_76;
  if ( (v207[64] & 1) != 0 )
  {
    v145 = sub_A2E130(v23, v14, 2258, 0);
    if ( v145 )
    {
      v208.m128i_i32[0] = 8;
      v208.m128i_i64[1] = v14;
      sub_B029C0(v145, &v208);
    }
    goto LABEL_77;
  }
  if ( !v201.m128i_i64[0]
    || (v201.m128i_i8[0] & 3) != 0
    || (*(_BYTE *)((v201.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7Fu) - 32 > 5 )
  {
LABEL_76:
    sub_826A70(v23, v14, 110);
    goto LABEL_77;
  }
  v24 = *(_QWORD *)(v23 + 16);
  v189 = v201.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  v187 = *(_QWORD *)((v201.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) + 48);
  v25 = sub_B167E0(*v181, v21);
  v26 = sub_6DC9E0(v24, v25, v187);
  v28 = v189;
  if ( !v26 )
  {
    sub_826A70(a1->m128i_i64[0], a2, 110);
    goto LABEL_77;
  }
  if ( (*(_WORD *)a2 & 0x1FF) == 0x5C )
  {
    v29 = *(_BYTE *)(a2 + 4) & 0x3F;
    v30 = *(_BYTE *)(a2 + 4) & 0x3F;
    if ( v29 == 15 || v29 == 20 || (unsigned __int8)v30 <= 0x1Du && (v31 = 871104512, _bittest64(&v31, v30)) )
    {
      v32 = *(_QWORD *)(a1->m128i_i64[0] + 32);
      v33 = *(_DWORD *)(v32 + 176);
      v34 = (unsigned int)(*(_DWORD *)(v32 + 208) + 1);
      *(_DWORD *)(v32 + 208) = v34;
      v173 = (v34 << 32) | v33;
      if ( (*(_BYTE *)(v189 + 28) & 0x7Fu) - 33 > 3 )
      {
        v36 = a1->m128i_i64[0];
        v37 = v179;
        v38 = (__int64)v178;
      }
      else
      {
        v35 = sub_7A5610((_DWORD *)v189);
        v36 = a1->m128i_i64[0];
        v28 = v189;
        if ( v35 )
        {
          v37 = v179 - 1;
          v38 = (__int64)(v178 + 1);
        }
        else
        {
          v37 = v179;
          v38 = (__int64)v178;
        }
      }
      v182 = v28;
      if ( !(unsigned __int8)sub_899300(v38, v37, v34, v36, v28, 1u) )
        goto LABEL_77;
      v28 = v182;
      v39 = a2;
      v188 = v182;
    }
    else
    {
      v188 = 0;
      v39 = a2;
    }
  }
  else
  {
    v188 = 0;
    v39 = 0;
  }
  if ( (*(_BYTE *)(v28 + 28) & 0x7Fu) - 33 > 3 )
    goto LABEL_30;
  v183 = (_QWORD *)v28;
  v40 = sub_7A5610((_DWORD *)v28);
  v44 = (__int64)v183;
  if ( v40 || v39 && (v45 = sub_7A4F00(v183), v44 = (__int64)v183, v45) )
  {
    v153 = a1->m128i_i64[0];
    if ( v179 )
    {
      v185 = (char *)v44;
      if ( (unsigned __int8)sub_89DEE0(v153, *v178, (__int64)&v194, v41, v42, v43) )
      {
        v190 = v185;
        v155 = (unsigned __int8)sub_7A4F00(v185) == 0;
        v156 = nullptr;
        if ( v155 )
          v156 = &v194;
        v184 = v156;
        v157 = sub_A2CB40(a1->m128i_i64[0]);
        v48 = (__int64)v190;
        v67 = 0;
        if ( *(char *)(v157 + 1) >= 0
          || !v39
          || (*(_BYTE *)(v39 + 4) & 0x3F) != 0xF
          || v190[82] >= 0
          || (v200[64] & 2) == 0
          && (v196 & 1) == 0
          && (v166 = sub_84FB20(a1->m128i_i64[0], (_DWORD *)*v178, &v194), v67 = 0, v48 = (__int64)v190, v166) )
        {
          --v179;
          ++v178;
          goto LABEL_199;
        }
      }
    }
    else
    {
      sub_826A70(v153, a2, 110);
    }
LABEL_77:
    v51 = 0;
    goto LABEL_78;
  }
  v174 = v44;
  v46 = sub_7A5D20(v44);
  v28 = v174;
  if ( v46 )
  {
    v158 = sub_79A330(v174 + 72);
    if ( v158 )
      v158 -= 64LL;
    v159 = sub_7A3750(v158);
    v160 = sub_7A3730(v158);
    v67 = 0;
    if ( v160 )
    {
      v163 = (unsigned int *)sub_780F80(v174);
      v164 = sub_780E20(v159);
      v208.m128i_i64[0] = 0;
      v165 = sub_7DA670(v164, (__int64)(v163 + 2), *v163, (__int64)&v208);
      v67 = 0;
      v184 = nullptr;
      v48 = (__int64)v165;
    }
    else
    {
      v48 = v159;
      v184 = nullptr;
    }
LABEL_199:
    if ( v205 != v207 )
    {
      v186 = v48;
      free(v205);
      v48 = v186;
      v67 = 0;
    }
    if ( v188 )
    {
LABEL_68:
      v208.m128i_i64[0] = (__int64)&v209;
      v208.m128i_i64[1] = 0x400000000LL;
      if ( v184 )
      {
        v180 = v67;
        if ( (*(_BYTE *)(v48 + 28) & 0x7Fu) - 33 > 3 )
        {
LABEL_170:
          v171 = (char *)v48;
          v201.m128i_i64[0] = 0;
          v146 = (unsigned __int16 *)sub_78BC30((_QWORD *)v48, (unsigned __int64 *)&v201);
          v147 = sub_8124E0(a2);
          if ( (unsigned __int8)sub_837DA0(a1->m128i_i64[0], v147, v171, v201.m128i_i64[0], (__int64)v146) )
          {
            v172 = a1->m128i_i64[0];
            v148 = sub_8124E0(a2);
            if ( (unsigned __int8)sub_895450(
                                    v148,
                                    v201.m128i_i64[0],
                                    v184,
                                    a2,
                                    (_DWORD **)v178,
                                    v146,
                                    v188,
                                    v173,
                                    v172,
                                    (__int64)&v191,
                                    0) )
            {
              if ( !v208.m128i_i32[2]
                || (unsigned __int8)sub_82E940(
                                      a1->m128i_i64[0],
                                      a2,
                                      (__int64)&v191,
                                      v208.m128i_i64[0],
                                      v208.m128i_u32[2]) )
              {
                goto LABEL_174;
              }
            }
          }
LABEL_73:
          v51 = 0;
          goto LABEL_74;
        }
        v177 = v48;
        if ( sub_83DE60(v48) && !v180 )
        {
          v48 = sub_84F640(a1->m128i_i64[0], a2, v184, v177, (__int64)&v208);
          if ( !v48 )
            goto LABEL_73;
        }
        else
        {
          v139 = sub_7A5610((_DWORD *)v177);
          v48 = v177;
          if ( v139 )
          {
            v140 = sub_84E640(
                     a1->m128i_i64[0],
                     (_DWORD *)a2,
                     v184,
                     4 * (unsigned int)((*(_BYTE *)(v177 + 28) & 0x7F) == 34) + 5,
                     0);
            v48 = v177;
            if ( !v140 )
              goto LABEL_73;
          }
        }
      }
      if ( (*(_BYTE *)(v48 + 28) & 0x7F) == 0x22 )
      {
        v71 = *(_QWORD *)(a1->m128i_i64[0] + 16);
        v72 = sub_79A330(v48 + 72);
        if ( v72 )
          v72 -= 64LL;
        v73 = sub_6E8B00(v71, v72);
        if ( !(unsigned __int8)sub_8926A0(a1->m128i_i64[0], (_DWORD *)a2, v184, v73) )
          goto LABEL_73;
LABEL_174:
        v149 = sub_8934C0(v5, 1, v167);
        v167 = -1;
        v51 = v149;
LABEL_74:
        v74 = (void *)v208.m128i_i64[0];
        if ( (__int64 *)v208.m128i_i64[0] == &v209 )
          goto LABEL_39;
        goto LABEL_79;
      }
      goto LABEL_170;
    }
    goto LABEL_66;
  }
LABEL_30:
  v175 = v28;
  v47 = sub_77DE60((_QWORD *)v28, 0, nullptr, v27);
  v48 = v175;
  if ( !v47 )
  {
    v184 = nullptr;
    v67 = 0;
    goto LABEL_199;
  }
  v49 = a1->m128i_i64[0];
  if ( (*(_DWORD *)(v175 + 40) & 7) != 6
    || (*(_DWORD *)(*(_QWORD *)(v175 + 40) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFD) != 1 )
  {
    if ( (unsigned __int8)sub_873630(v49, a2) )
    {
      v50 = sub_8934C0(v5, 1, v167);
      v167 = -1;
      v51 = v50;
      goto LABEL_78;
    }
    goto LABEL_77;
  }
  v208 = 0u;
  v209 = 0;
  v213 = 0x800000000LL;
  v210 |= 1u;
  v211 = 0;
  v212 = v214;
  v214[65] = 0;
  v51 = sub_87DD20(v49, a2, &v208);
  if ( (_BYTE)v51 )
  {
    sub_81F730((__int64)&v208, (__int64)&v191);
    v162 = sub_8934C0(v5, 1, v167);
    v167 = -1;
    v51 = v162;
  }
  if ( v212 != v214 )
    free(v212);
LABEL_78:
  v74 = v205;
  if ( v205 != v207 )
LABEL_79:
    free(v74);
LABEL_39:
  if ( ptr != v200 )
    free(ptr);
  if ( v167 != -1 )
    sub_8934C0(v5, 0, v167);
  --*(_DWORD *)(*(_QWORD *)(v5 + 32) + 192LL);
  if ( (_BYTE)v51 )
    sub_834130((__int64 *)a1->m128i_i64[1], v193, v22);
  if ( v191 > 1 )
    sub_69F740((__int64)&v191);
  return v51;
}

