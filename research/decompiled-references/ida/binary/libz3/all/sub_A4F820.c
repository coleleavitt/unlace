__int64 __fastcall sub_A4F820(__int64 a1)
{
  char *v2; // rax
  char *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 *v6; // rax
  unsigned int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rax
  int *v12; // rbx
  char v13; // r14
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  unsigned int *v18; // r14
  unsigned int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  unsigned int *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rbx
  unsigned int v26; // r14d
  bool v27; // al
  void *v28; // rdi
  __int64 v29; // r15
  int v30; // eax
  bool v31; // al
  __int64 v32; // rdx
  __int64 v33; // rax
  char *v34; // rdi
  char *v35; // rsi
  char *i; // rax
  int v37; // edx
  __int64 v38; // rax
  void *v39; // rdi
  __int64 v40; // rax
  int v41; // edx
  __int64 v42; // rdx
  char v43; // si
  __int64 v44; // rdx
  void *v45; // r14
  char v46; // si
  void *v47; // rdi
  int v48; // edx
  __int64 v49; // rdx
  char v50; // cl
  __int64 v51; // rax
  bool v52; // r15
  _DWORD *v53; // rax
  int v54; // edx
  __int64 v55; // rdx
  char v56; // bl
  __int64 v57; // rdx
  char v58; // bl
  int v59; // edx
  __int64 v60; // rdx
  char v61; // cl
  __int64 v62; // rdx
  char v63; // dl
  __int64 v64; // rbx
  void *v65; // rdi
  __int64 v66; // r15
  void *v67; // r15
  void *v68; // r15
  unsigned int *v69; // rax
  unsigned int v70; // ebx
  int **v71; // rdi
  int v72; // eax
  __int64 v73; // rdx
  unsigned int v74; // r14d
  __int64 v75; // rax
  char *v76; // rcx
  char *v77; // rax
  int v78; // edx
  int v79; // r12d
  __int64 v80; // rdx
  char *v81; // r8
  char *v82; // rdx
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // r12
  unsigned int v88; // r14d
  _QWORD *v89; // rax
  __m128i v90; // xmm0
  __int64 v91; // r15
  __int64 v92; // r14
  unsigned int v93; // ebx
  unsigned int v94; // r12d
  int *v95; // rbx
  int *v96; // r13
  void *v97; // r12
  int *v98; // rsi
  bool v99; // al
  unsigned int *v100; // r15
  __int64 v101; // rax
  unsigned int *v102; // r13
  __int64 v103; // rbx
  __int64 v104; // rax
  __int64 v105; // r12
  void *v106; // rbp
  __int64 v107; // rsi
  int v109; // edx
  _DWORD *v110; // rdx
  __int64 v111; // rax
  _DWORD *v112; // rax
  __int64 v113; // rsi
  __int64 v114; // rsi
  __int64 v115; // rax
  int *v116; // r15
  char v117; // bl
  unsigned int v118; // r15d
  unsigned int v119; // edx
  unsigned int *v120; // r15
  unsigned int *v121; // rsi
  __int64 v122; // r9
  __int64 v123; // rax
  unsigned int *v124; // r10
  unsigned __int64 v125; // rdi
  __int64 v126; // rax
  unsigned __int64 v127; // rdi
  __m128i v128; // xmm0
  unsigned __int64 v129; // rax
  __int64 v130; // r10
  __int64 *v131; // rbx
  unsigned int *v132; // r15
  __int64 *v133; // rdi
  __int64 v134; // rdx
  int v135; // edx
  __int64 v136; // rax
  __int64 v137; // rbx
  __int64 v138; // rbp
  unsigned int v139; // r12d
  char *v140; // rdi
  char v141; // dl
  __int64 v142; // rax
  char v143; // dl
  __int64 v144; // rax
  unsigned int *v145; // rax
  _DWORD *v146; // rdi
  __int64 v147; // rdx
  _QWORD *v148; // rax
  char **exception; // r13
  unsigned int v150; // [rsp+10h] [rbp-468h]
  __int64 v151; // [rsp+10h] [rbp-468h]
  unsigned int v152; // [rsp+18h] [rbp-460h]
  __int64 *v153; // [rsp+20h] [rbp-458h]
  __int64 *v154; // [rsp+28h] [rbp-450h]
  _QWORD *v155; // [rsp+28h] [rbp-450h]
  __int64 v156; // [rsp+30h] [rbp-448h]
  int v157; // [rsp+30h] [rbp-448h]
  char *v158; // [rsp+40h] [rbp-438h]
  char *v159; // [rsp+40h] [rbp-438h]
  char *v160; // [rsp+48h] [rbp-430h]
  unsigned int v161; // [rsp+54h] [rbp-424h]
  void *v162; // [rsp+60h] [rbp-418h]
  void *v163; // [rsp+60h] [rbp-418h]
  void *v164; // [rsp+60h] [rbp-418h]
  void *v165; // [rsp+60h] [rbp-418h]
  void *v166; // [rsp+60h] [rbp-418h]
  bool v167; // [rsp+60h] [rbp-418h]
  unsigned int v168; // [rsp+60h] [rbp-418h]
  bool v169; // [rsp+68h] [rbp-410h]
  unsigned int v170; // [rsp+68h] [rbp-410h]
  unsigned int v171; // [rsp+6Ch] [rbp-40Ch]
  char *v172; // [rsp+78h] [rbp-400h]
  __int64 *v173; // [rsp+88h] [rbp-3F0h]
  unsigned int v174; // [rsp+98h] [rbp-3E0h]
  unsigned __int8 v175; // [rsp+9Fh] [rbp-3D9h]
  int v176[2]; // [rsp+A0h] [rbp-3D8h]
  __int64 v177; // [rsp+A8h] [rbp-3D0h]
  unsigned int *v178; // [rsp+B8h] [rbp-3C0h] BYREF
  __int64 v179; // [rsp+C0h] [rbp-3B8h] BYREF
  __int64 v180; // [rsp+C8h] [rbp-3B0h] BYREF
  __int64 v181; // [rsp+D0h] [rbp-3A8h] BYREF
  __int64 v182; // [rsp+D8h] [rbp-3A0h]
  char *v183; // [rsp+E0h] [rbp-398h] BYREF
  unsigned int v184; // [rsp+E8h] [rbp-390h]
  __int64 v185; // [rsp+ECh] [rbp-38Ch]
  char *v186; // [rsp+100h] [rbp-378h] BYREF
  unsigned int v187; // [rsp+108h] [rbp-370h]
  __int64 v188; // [rsp+10Ch] [rbp-36Ch]
  __int64 v189; // [rsp+120h] [rbp-358h] BYREF
  __int64 v190; // [rsp+128h] [rbp-350h]
  _QWORD v191[2]; // [rsp+130h] [rbp-348h] BYREF
  __int64 v192; // [rsp+140h] [rbp-338h] BYREF
  __int64 v193; // [rsp+148h] [rbp-330h]
  __int64 v194; // [rsp+150h] [rbp-328h] BYREF
  __int64 v195; // [rsp+158h] [rbp-320h]
  __int64 v196; // [rsp+160h] [rbp-318h] BYREF
  __int64 v197; // [rsp+168h] [rbp-310h]
  __int64 v198; // [rsp+170h] [rbp-308h] BYREF
  __int64 v199; // [rsp+178h] [rbp-300h]
  __int128 v200; // [rsp+180h] [rbp-2F8h] BYREF
  __m128i v201; // [rsp+190h] [rbp-2E8h] BYREF
  int v202; // [rsp+1A0h] [rbp-2D8h]
  int v203; // [rsp+1A4h] [rbp-2D4h]
  void *ptr; // [rsp+1B0h] [rbp-2C8h] BYREF
  __int64 v205; // [rsp+1B8h] [rbp-2C0h]
  int v206; // [rsp+1C0h] [rbp-2B8h] BYREF
  char v207; // [rsp+1C4h] [rbp-2B4h]
  __int64 v208; // [rsp+1C8h] [rbp-2B0h]

  v178 = nullptr;
  v2 = (char *)sub_186B270(0x80u);
  *(_QWORD *)v2 = 0;
  *((_QWORD *)v2 + 2) = 0;
  *((_QWORD *)v2 + 4) = 0;
  *((_QWORD *)v2 + 6) = 0;
  *((_QWORD *)v2 + 8) = 0;
  *((_QWORD *)v2 + 10) = 0;
  *((_QWORD *)v2 + 12) = 0;
  *((_QWORD *)v2 + 14) = 0;
  v160 = v2;
  v185 = 0;
  v3 = (char *)sub_186B270(0x80u);
  *(_QWORD *)v3 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  *((_QWORD *)v3 + 2) = 0;
  *((_QWORD *)v3 + 4) = 0;
  *((_QWORD *)v3 + 6) = 0;
  *((_QWORD *)v3 + 8) = 0;
  *((_QWORD *)v3 + 10) = 0;
  *((_QWORD *)v3 + 12) = 0;
  *((_QWORD *)v3 + 14) = 0;
  v172 = v3;
  v5 = *(_QWORD *)(a1 + 24);
  v188 = 0;
  *(_QWORD *)v176 = v4;
  v177 = v5;
  v175 = sub_8E6FA0(v4);
  if ( v175 )
  {
    sub_186B220(v172);
    v175 = 0;
LABEL_96:
    sub_186B220(v160);
    goto LABEL_97;
  }
  v6 = *(__int64 **)(a1 + 568);
  if ( v6 )
  {
    v173 = &v6[3 * *((unsigned int *)v6 - 1)];
    if ( v6 != v173 )
    {
      v153 = *(__int64 **)(a1 + 568);
      v174 = 8;
      v171 = 8;
      v161 = 1;
      while ( 1 )
      {
        v7 = *((_DWORD *)v153 + 3);
        v150 = v7;
        if ( v7 == -1 )
          goto LABEL_57;
        v189 = 0;
        v190 = 0;
        v191[0] = 1;
        v191[1] = 0;
        sub_182CBA0(qword_1C7F2C0, v191);
        v8 = *(_QWORD *)(a1 + 616);
        BYTE4(v191[0]) &= ~1u;
        LODWORD(v191[0]) = 1;
        v9 = *(_QWORD *)(v8 + 8LL * v7);
        v10 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL * v7);
        if ( v9
          && (v200 = 1u,
              v201 = (__m128i)1uLL,
              sub_182CBA0(qword_1C7F2C0, &v201),
              v201.m128i_i8[4] &= ~1u,
              v201.m128i_i32[0] = 1,
              v11 = sub_999800(a1, v7),
              sub_3EBB80((__int64)&ptr, v11, (__int64)&v200),
              v12 = (int *)(v9 + 16),
              v13 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)&ptr, (__int64)v12),
              sub_25A130((char *)&ptr),
              sub_25A130((char *)&v200),
              v13) )
        {
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v189, v12);
        }
        else
        {
          if ( !v10
            || (v200 = 1u,
                v201 = (__m128i)1uLL,
                sub_182CBA0(qword_1C7F2C0, &v201),
                v201.m128i_i8[4] &= ~1u,
                v201.m128i_i32[0] = 1,
                v115 = sub_999800(a1, v150),
                sub_27B340((__int64)&ptr, v115, (int *)&v200),
                v116 = (int *)(v10 + 16),
                v117 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)v116, (__int64)&ptr),
                sub_25A130((char *)&ptr),
                sub_25A130((char *)&v200),
                !v117) )
          {
            sub_25A130((char *)&v189);
            goto LABEL_57;
          }
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v189, v116);
        }
        v14 = nullptr;
        if ( v161 )
        {
          v15 = (_QWORD *)sub_186B270(32LL * v161 + 8);
          v14 = v15 + 1;
          v16 = (__int64)&v15[4 * v161 + 1];
          *v15 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v161), 224).m128i_u64[0];
          v17 = v15 + 1;
          do
          {
            *((_OWORD *)v17 + 1) = 0;
            v17 += 4;
            *((_OWORD *)v17 - 2) = 0;
            *((_DWORD *)v17 - 4) = 1;
            *((_BYTE *)v17 - 28) = 0;
            *((_BYTE *)v17 - 12) = 0;
          }
          while ( v17 != (_QWORD *)v16 );
        }
        v18 = v178;
        if ( v178 )
        {
          v19 = *(v178 - 1);
          if ( v19 == *(v178 - 2) )
          {
            v118 = (3 * v19 + 1) >> 1;
            v119 = 8 * v118 + 8;
            v152 = v118;
            if ( 8 * v19 + 8 >= v119 || v19 >= v118 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_98B3B0((__int64 *)&ptr, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &ptr);
              sub_233E40((__int64)&ptr);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v120 = v178;
            v121 = (unsigned int *)sub_186B270(v119);
            v18 = v121 + 2;
            v122 = *(v178 - 1);
            v121[1] = v122;
            v123 = 8 * v122;
            v124 = &v120[2 * v122];
            if ( v120 != v124 )
            {
              v125 = v123 - 8;
              if ( (unsigned __int64)(v123 - 8) <= 8 || v18 < v120 + 4 && v120 < v121 + 6 )
              {
                v145 = v120;
                v146 = v121 + 2;
                do
                {
                  v147 = *(_QWORD *)v145;
                  *(_QWORD *)v145 = 0;
                  v145 += 2;
                  v146 += 2;
                  *((_QWORD *)v146 - 1) = v147;
                }
                while ( v124 != v145 );
              }
              else
              {
                v126 = 0;
                v127 = (v125 >> 3) + 1;
                do
                {
                  v128 = _mm_loadu_si128((const __m128i *)&v120[v126]);
                  *(_OWORD *)&v120[v126] = 0;
                  *(__m128i *)&v121[v126 + 2] = v128;
                  v126 += 4;
                }
                while ( 4 * (v127 >> 1) != v126 );
                if ( (v127 & 1) != 0 )
                {
                  v129 = 2 * (v127 & 0xFFFFFFFFFFFFFFFELL);
                  v130 = *(_QWORD *)&v120[v129];
                  *(_QWORD *)&v120[v129] = 0;
                  *(_QWORD *)&v121[v129 + 2] = v130;
                }
              }
            }
            if ( (_DWORD)v122 )
            {
              v155 = v14;
              v131 = (__int64 *)v120;
              v132 = &v120[2 * v122];
              do
              {
                v133 = v131++;
                sub_27FC20(v133);
              }
              while ( v131 != (__int64 *)v132 );
              v14 = v155;
              v120 = v178;
            }
            sub_186B220(v120 - 2);
            v22 = &v18[2 * v121[1]];
            v21 = v121[1] + 1;
            v178 = v121 + 2;
            *v121 = v152;
          }
          else
          {
            v20 = v19;
            v21 = v19 + 1;
            v22 = &v178[2 * v20];
          }
        }
        else
        {
          v148 = (_QWORD *)sub_186B270(0x18u);
          v18 = (unsigned int *)(v148 + 1);
          *v148 = 2;
          v21 = 1;
          v178 = v18;
          v22 = v18;
        }
        *(_QWORD *)v22 = v14;
        *(v18 - 1) = v21;
        v179 = 0;
        sub_27FC20(&v179);
        v23 = 0x1FFFFFFFELL;
        if ( v178 )
          v23 = 2LL * (*(v178 - 1) - 1);
        v192 = 1;
        v154 = (__int64 *)&v178[v23];
        v193 = 0;
        v194 = 1;
        v195 = 0;
        sub_182CBA0(qword_1C7F2C0, &v194);
        BYTE4(v194) &= ~1u;
        LODWORD(v194) = 1;
        v24 = *v153;
        if ( *v153 )
        {
          v156 = v24 + 40LL * *(unsigned int *)(v24 - 4);
          if ( v156 != v24 )
            break;
        }
LABEL_41:
        LODWORD(ptr) = 0;
        BYTE4(ptr) &= 0xFCu;
        v207 &= 0xFCu;
        v205 = 0;
        v206 = 1;
        v208 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&ptr, (int *)&v189);
        v53 = (_DWORD *)*v154;
        v54 = *(_DWORD *)*v154;
        *v53 = (_DWORD)ptr;
        LODWORD(ptr) = v54;
        v55 = *((_QWORD *)v53 + 1);
        *((_QWORD *)v53 + 1) = v205;
        v205 = v55;
        LOBYTE(v55) = *((_BYTE *)v53 + 4);
        *((_BYTE *)v53 + 4) = BYTE4(ptr) & 2 | v55 & 0xFD;
        BYTE4(ptr) = v55 & 2 | BYTE4(ptr) & 0xFD;
        v56 = *((_BYTE *)v53 + 4);
        *((_BYTE *)v53 + 4) = BYTE4(ptr) & 1 | v56 & 0xFE;
        BYTE4(ptr) = v56 & 1 | BYTE4(ptr) & 0xFE;
        LODWORD(v55) = v53[4];
        v53[4] = v206;
        v206 = v55;
        v57 = *((_QWORD *)v53 + 3);
        *((_QWORD *)v53 + 3) = v208;
        v208 = v57;
        LOBYTE(v57) = *((_BYTE *)v53 + 20);
        *((_BYTE *)v53 + 20) = v207 & 2 | v57 & 0xFD;
        v207 = v57 & 2 | v207 & 0xFD;
        v58 = v53[5] & 1;
        *((_BYTE *)v53 + 20) = v207 & 1 | v53[5] & 0xFE;
        v207 = v58 | v207 & 0xFE;
        sub_25A130((char *)&ptr);
        sub_992B90((__int64)&v200, (__int64)&v189);
        sub_992D20((__int64)&ptr, (__int64)&v200, (__int64)&v192);
        v59 = (int)ptr;
        LODWORD(ptr) = v192;
        LODWORD(v192) = v59;
        v60 = v205;
        v205 = v193;
        v193 = v60;
        v61 = BYTE4(ptr) & 1;
        LOBYTE(v60) = BYTE4(v192) & 0xFC | BYTE4(ptr) & 2;
        BYTE4(ptr) = BYTE4(v192) & 1 | BYTE4(ptr) & 0xFC | BYTE4(v192) & 2;
        BYTE4(v192) = v61 | v60;
        LODWORD(v60) = v206;
        v206 = v194;
        LODWORD(v194) = v60;
        v62 = v208;
        v208 = v195;
        v195 = v62;
        LOBYTE(v62) = v207 & 1 | BYTE4(v194) & 0xFC | v207 & 2;
        v207 = BYTE4(v194) & 1 | v207 & 0xFC | BYTE4(v194) & 2;
        BYTE4(v194) = v62;
        sub_25A130((char *)&ptr);
        v63 = ~BYTE4(v192);
        if ( ((v192 & 0x100000000LL) != 0 || (_DWORD)v192 != 1 || (v194 & 0x100000000LL) != 0 || (_DWORD)v194 != 1)
          && v161 )
        {
          v64 = 0;
          while ( 1 )
          {
            BYTE4(ptr) &= 0xFCu;
            v68 = qword_1C7F2C0;
            v207 &= 0xFCu;
            LODWORD(ptr) = 0;
            v205 = 0;
            v206 = 1;
            v208 = 0;
            if ( (v63 & 1) != 0 )
            {
              LODWORD(ptr) = v192;
              if ( (v194 & 0x100000000LL) != 0 )
                goto LABEL_54;
            }
            else
            {
              sub_182C690(qword_1C7F2C0, &ptr, &v192);
              if ( (v194 & 0x100000000LL) != 0 )
              {
LABEL_54:
                sub_182C690(v68, &v206, &v194);
                goto LABEL_47;
              }
            }
            v207 &= ~1u;
            v206 = v194;
LABEL_47:
            v65 = qword_1C7F2C0;
            v66 = v64 + *v154;
            if ( (*(_BYTE *)(v66 + 20) & 1) != 0 || *(_DWORD *)(v66 + 16) != 1 || (v207 & 1) != 0 || v206 != 1 )
            {
              sub_1848FF0(qword_1C7F2C0, v64 + *v154, &ptr);
            }
            else
            {
              sub_1831650(qword_1C7F2C0, v66, &ptr);
              sub_182CBA0(v65, v66 + 16);
              *(_BYTE *)(v66 + 20) &= ~1u;
              *(_DWORD *)(v66 + 16) = 1;
            }
            v67 = qword_1C7F2C0;
            v64 += 32;
            sub_182CBA0(qword_1C7F2C0, &ptr);
            sub_182CBA0(v67, &v206);
            if ( 32LL * v161 == v64 )
              break;
            v63 = ~BYTE4(v192);
          }
        }
        sub_25A130((char *)&v200);
        sub_25A130((char *)&v192);
        sub_25A130((char *)&v189);
LABEL_57:
        v153 += 3;
        if ( v173 == v153 )
          goto LABEL_58;
      }
      v25 = v24 + 40;
      while ( 1 )
      {
        v26 = *(_DWORD *)(v25 - 8);
        v27 = v26 == -1 || v150 == v26;
        if ( v27 )
        {
          v52 = v156 != v25;
          goto LABEL_39;
        }
        v196 = 0;
        v28 = qword_1C7F2C0;
        v29 = v25 - 40;
        v197 = 0;
        v198 = 1;
        v199 = 0;
        if ( (*(_BYTE *)(v25 - 36) & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, &v196, v25 - 40);
          if ( (*(_BYTE *)(v29 + 20) & 1) != 0 )
          {
LABEL_111:
            sub_182C690(v28, &v198, v25 - 24);
            goto LABEL_24;
          }
        }
        else
        {
          LODWORD(v196) = *(_DWORD *)(v25 - 40);
          if ( (*(_BYTE *)(v29 + 20) & 1) != 0 )
            goto LABEL_111;
        }
        v30 = *(_DWORD *)(v25 - 24);
        BYTE4(v198) &= ~1u;
        LODWORD(v198) = v30;
LABEL_24:
        v31 = sub_99A460(a1, v26);
        if ( v31 )
        {
          v167 = v31;
          sub_3EBE30((__int64)&ptr, (__int64)&v196, *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8LL * v26) + 16LL);
          sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v189, (__int64)&ptr, (__int64)&v189);
          sub_25A130((char *)&ptr);
          v31 = v167;
          v52 = v156 != v25;
        }
        else
        {
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 4LL * v26 + 3) & 0x40) != 0 )
          {
            v32 = 16LL * v171;
            v33 = 16LL * (v26 & (v171 - 1));
            v34 = &v160[v33];
            v35 = &v160[v32];
            if ( v33 != v32 )
            {
              for ( i = &v160[v33]; v35 != i; i += 16 )
              {
                v37 = *((_DWORD *)i + 1);
                if ( v37 == 2 )
                {
                  if ( *(_DWORD *)i == v26 && *((_DWORD *)i + 2) == v26 )
                  {
LABEL_33:
                    v38 = *((unsigned int *)i + 3);
                    v39 = qword_1C7F2C0;
                    LODWORD(ptr) = 0;
                    BYTE4(ptr) &= 0xFCu;
                    v207 &= 0xFCu;
                    v205 = 0;
                    v206 = 1;
                    v208 = 0;
                    if ( (v196 & 0x100000000LL) != 0 )
                    {
                      v170 = v38;
                      sub_182C690(qword_1C7F2C0, &ptr, &v196);
                      v38 = v170;
                    }
                    else
                    {
                      LODWORD(ptr) = v196;
                    }
                    if ( (v198 & 0x100000000LL) != 0 )
                    {
                      v168 = v38;
                      sub_182C690(v39, &v206, &v198);
                      v38 = v168;
                    }
                    else
                    {
                      v207 &= ~1u;
                      v206 = v198;
                    }
                    v40 = *v154 + 32 * v38;
                    v41 = *(_DWORD *)v40;
                    *(_DWORD *)v40 = (_DWORD)ptr;
                    LODWORD(ptr) = v41;
                    v42 = *(_QWORD *)(v40 + 8);
                    *(_QWORD *)(v40 + 8) = v205;
                    v205 = v42;
                    LOBYTE(v42) = *(_BYTE *)(v40 + 4);
                    *(_BYTE *)(v40 + 4) = BYTE4(ptr) & 2 | v42 & 0xFD;
                    BYTE4(ptr) = v42 & 2 | BYTE4(ptr) & 0xFD;
                    v43 = *(_BYTE *)(v40 + 4);
                    *(_BYTE *)(v40 + 4) = BYTE4(ptr) & 1 | v43 & 0xFE;
                    BYTE4(ptr) = v43 & 1 | BYTE4(ptr) & 0xFE;
                    LODWORD(v42) = *(_DWORD *)(v40 + 16);
                    *(_DWORD *)(v40 + 16) = v206;
                    v206 = v42;
                    v44 = *(_QWORD *)(v40 + 24);
                    *(_QWORD *)(v40 + 24) = v208;
                    v208 = v44;
                    LOBYTE(v44) = *(_BYTE *)(v40 + 20);
                    *(_BYTE *)(v40 + 20) = v207 & 2 | v44 & 0xFD;
                    v207 = v44 & 2 | v207 & 0xFD;
                    v45 = qword_1C7F2C0;
                    v46 = *(_BYTE *)(v40 + 20) & 1;
                    v47 = qword_1C7F2C0;
                    *(_BYTE *)(v40 + 20) = v207 & 1 | *(_BYTE *)(v40 + 20) & 0xFE;
                    v207 = v46 | v207 & 0xFE;
                    sub_182CBA0(v47, &ptr);
                    sub_182CBA0(v45, &v206);
                    goto LABEL_38;
                  }
                }
                else if ( !v37 )
                {
                  goto LABEL_120;
                }
              }
            }
            i = v160;
            if ( v34 == v160 )
            {
LABEL_120:
              BYTE4(ptr) &= 0xFCu;
              v207 &= 0xFCu;
              LODWORD(ptr) = 0;
              v205 = 0;
              v206 = 1;
              v208 = 0;
              sub_27B950((__int64)qword_1C7F2C0, (__int64)&ptr, (int *)&v196);
              v110 = (_DWORD *)*v154;
              if ( !*v154 || (v111 = (unsigned int)*(v110 - 1), (_DWORD)v111 == *(v110 - 2)) )
              {
                sub_53D790(v154);
                v110 = (_DWORD *)*v154;
                v111 = *(unsigned int *)(*v154 - 4);
              }
              v112 = &v110[8 * v111];
              *v112 = (_DWORD)ptr;
              *((_BYTE *)v112 + 4) = BYTE4(ptr) & 3 | v112[1] & 0xFC;
              v113 = v205;
              v205 = 0;
              *((_QWORD *)v112 + 1) = v113;
              v112[4] = v206;
              *((_BYTE *)v112 + 20) = v207 & 3 | v112[5] & 0xFC;
              v114 = v208;
              v208 = 0;
              *((_QWORD *)v112 + 3) = v114;
              ++*(v110 - 1);
              sub_25A130((char *)&ptr);
              v183 = v160;
              v181 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v26), _mm_cvtsi32_si128(v161)).m128i_u64[0];
              v184 = v171;
              sub_83C760((__int64)&v183, (__int32 *)&v181);
              v160 = v183;
              v171 = v184;
              ptr = (void *)__PAIR64__(v26, v161);
              v186 = v172;
              v187 = v174;
              sub_A2A440((__int64)&v186, (__int32 *)&ptr);
              ++v161;
              v172 = v186;
              v174 = v187;
LABEL_38:
              sub_992B90((__int64)&v200, (__int64)&v196);
              BYTE4(ptr) &= 0xFCu;
              v207 &= 0xFCu;
              LODWORD(ptr) = 0;
              v205 = 0;
              v206 = 1;
              v208 = 0;
              v162 = qword_1C7F2C0;
              sub_1836B00(qword_1C7F2C0, &v200, &v192, &ptr);
              sub_182CBA0(v162, &v206);
              v48 = (int)ptr;
              LODWORD(ptr) = v192;
              LODWORD(v192) = v48;
              v49 = v205;
              v205 = v193;
              v193 = v49;
              v50 = BYTE4(ptr) & 1;
              LOBYTE(v49) = BYTE4(v192) & 0xFC | BYTE4(ptr) & 2;
              v163 = qword_1C7F2C0;
              BYTE4(ptr) = BYTE4(v192) & 1 | BYTE4(ptr) & 0xFC | BYTE4(v192) & 2;
              BYTE4(v192) = v50 | v49;
              v206 = v194;
              v51 = v195;
              v195 = v208;
              v208 = v51;
              LODWORD(v194) = 1;
              LOBYTE(v49) = BYTE4(v194) & 0xFC | v207 & 2;
              v207 = BYTE4(v194) & 1 | BYTE4(v194) & 2 | v207 & 0xFC;
              BYTE4(v194) = v49;
              sub_182CBA0(qword_1C7F2C0, &ptr);
              sub_182CBA0(v163, &v206);
              v164 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v200);
              sub_182CBA0(v164, &v201);
              v165 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v196);
              sub_182CBA0(v165, &v198);
              v27 = 1;
              v52 = v156 != v25;
              goto LABEL_39;
            }
            while ( 2 )
            {
              while ( 1 )
              {
                v109 = *((_DWORD *)i + 1);
                if ( v109 != 2 )
                  break;
                if ( *(_DWORD *)i != v26 )
                  goto LABEL_115;
                if ( *((_DWORD *)i + 2) == v26 )
                  goto LABEL_33;
                i += 16;
                if ( v34 == i )
                  goto LABEL_120;
              }
              if ( !v109 )
                goto LABEL_120;
LABEL_115:
              i += 16;
              if ( v34 == i )
                goto LABEL_120;
              continue;
            }
          }
          v52 = 0;
        }
        v169 = v31;
        v166 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v196);
        sub_182CBA0(v166, &v198);
        v27 = v169;
LABEL_39:
        v25 += 40;
        if ( !v52 )
        {
          if ( !v27 )
          {
            v134 = 0x1FFFFFFFELL;
            if ( v178 )
              v134 = 2LL * (*(v178 - 1) - 1);
            sub_27FC20((__int64 *)&v178[v134]);
            --*(v178 - 1);
            sub_25A130((char *)&v192);
            sub_25A130((char *)&v189);
            goto LABEL_57;
          }
          goto LABEL_41;
        }
      }
    }
  }
  v174 = 8;
  v161 = 1;
LABEL_58:
  v69 = v178;
  v70 = 0;
  if ( v178 )
  {
    while ( v70 < *(v69 - 1) )
    {
      v71 = (int **)&v69[2 * v70];
      v72 = *v71 ? *(*v71 - 1) : 0;
      if ( v72 == v161 )
        break;
      sub_9E8400(v71, v161);
      v69 = v178;
      ++v70;
    }
  }
  v180 = 0;
  if ( !(unsigned __int8)sub_950E30(a1 + 360, &v178, &v180) )
  {
    v73 = v180;
    ptr = &v206;
    v205 = 0x1000000000LL;
    if ( !v180 )
    {
      v175 = 0;
      goto LABEL_93;
    }
    v74 = 1;
    v151 = 16LL * v174;
    while ( 1 )
    {
      if ( v74 >= *(_DWORD *)(v73 - 4) )
        goto LABEL_80;
      v196 = 0;
      v197 = 0;
      v198 = 1;
      v199 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v196, (int *)(32LL * v74 + v73));
      if ( !(_DWORD)v196 )
        goto LABEL_79;
      v75 = 16LL * (v74 & (v174 - 1));
      v76 = &v172[v75];
      if ( v75 == v151 )
      {
LABEL_156:
        v77 = v172;
        if ( v172 == v76 )
        {
LABEL_164:
          sub_1872CE0("");
          sub_1873130(114, 365);
        }
        while ( 2 )
        {
          while ( 1 )
          {
            v135 = *((_DWORD *)v77 + 1);
            if ( v135 != 2 )
              break;
            if ( *(_DWORD *)v77 != v74 )
              goto LABEL_159;
            if ( *((_DWORD *)v77 + 2) == v74 )
              goto LABEL_76;
            v77 += 16;
            if ( v76 == v77 )
              goto LABEL_164;
          }
          if ( !v135 )
            goto LABEL_164;
LABEL_159:
          v77 += 16;
          if ( v76 == v77 )
            goto LABEL_164;
          continue;
        }
      }
      v77 = &v172[v75];
      while ( 1 )
      {
        v78 = *((_DWORD *)v77 + 1);
        if ( v78 != 2 )
        {
          if ( !v78 )
            goto LABEL_164;
          goto LABEL_72;
        }
        if ( *(_DWORD *)v77 == v74 && *((_DWORD *)v77 + 2) == v74 )
          break;
LABEL_72:
        v77 += 16;
        if ( &v172[v151] == v77 )
          goto LABEL_156;
      }
LABEL_76:
      v79 = *((_DWORD *)v77 + 3);
      v200 = 0u;
      v201 = (__m128i)1uLL;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v200, (int *)&v196);
      v80 = (unsigned int)v205;
      v202 = v79;
      v203 = 0;
      if ( (unsigned int)v205 >= HIDWORD(v205) )
      {
        v157 = 2 * HIDWORD(v205);
        v136 = sub_186B270(40LL * (unsigned int)(2 * HIDWORD(v205)));
        v80 = (unsigned int)v205;
        v81 = (char *)v136;
        if ( (_DWORD)v205 )
        {
          v158 = (char *)v136;
          v137 = v136;
          v138 = 0;
          v139 = 0;
          do
          {
            ++v139;
            v137 += 40;
            v140 = (char *)ptr + v138;
            v138 += 40;
            v141 = v140[4];
            *(_DWORD *)(v137 - 40) = *(_DWORD *)v140;
            *(_BYTE *)(v137 - 36) = v141 & 3 | *(_BYTE *)(v137 - 36) & 0xFC;
            v142 = *((_QWORD *)v140 + 1);
            *((_QWORD *)v140 + 1) = 0;
            *(_QWORD *)(v137 - 32) = v142;
            v143 = v140[20];
            *(_DWORD *)(v137 - 24) = *((_DWORD *)v140 + 4);
            *(_BYTE *)(v137 - 20) = v143 & 3 | *(_BYTE *)(v137 - 20) & 0xFC;
            v144 = *((_QWORD *)v140 + 3);
            *((_QWORD *)v140 + 3) = 0;
            *(_QWORD *)(v137 - 16) = v144;
            *(_DWORD *)(v137 - 8) = *((_DWORD *)v140 + 8);
            *(_DWORD *)(v137 - 4) = *((_DWORD *)v140 + 9);
            sub_25A130(v140);
            v80 = (unsigned int)v205;
          }
          while ( v139 < (unsigned int)v205 );
          v81 = v158;
        }
        if ( ptr && ptr != &v206 )
        {
          v159 = v81;
          sub_186B220(ptr);
          v80 = (unsigned int)v205;
          v81 = v159;
        }
        ptr = v81;
        v79 = v202;
        HIDWORD(v205) = v157;
      }
      else
      {
        v81 = (char *)ptr;
      }
      v82 = &v81[40 * v80];
      v83 = v203;
      *(_DWORD *)v82 = v200;
      v82[4] = BYTE4(v200) & 3 | v82[4] & 0xFC;
      v84 = *((_QWORD *)&v200 + 1);
      *((_QWORD *)&v200 + 1) = 0;
      *((_QWORD *)v82 + 1) = v84;
      *((_DWORD *)v82 + 4) = v201.m128i_i32[0];
      v82[20] = v201.m128i_i8[4] & 3 | v82[20] & 0xFC;
      v85 = v201.m128i_i64[1];
      v201.m128i_i64[1] = 0;
      *((_QWORD *)v82 + 3) = v85;
      *((_DWORD *)v82 + 8) = v79;
      *((_DWORD *)v82 + 9) = v83;
      LODWORD(v205) = v205 + 1;
      sub_25A130((char *)&v200);
LABEL_79:
      ++v74;
      sub_25A130((char *)&v196);
      v73 = v180;
      if ( !v180 )
      {
LABEL_80:
        if ( (_DWORD)v205 )
        {
          v86 = *(_QWORD *)(a1 + 24);
          v181 = 0;
          v189 = 0;
          v182 = v86;
          v190 = v86;
          v196 = 1;
          v197 = 0;
          v198 = 1;
          v199 = 0;
          sub_182CBA0(qword_1C7F2C0, &v198);
          BYTE4(v198) &= ~1u;
          LODWORD(v198) = 1;
          sub_3EBD70((__int64)&v192, v180);
          sub_27B340((__int64)&v200, (__int64)&v192, (int *)&v196);
          sub_9D0A80((_QWORD *)a1, v205, (int *)ptr, (int)&v200, &v181);
          v87 = 0;
          sub_25A130((char *)&v200);
          v88 = 0;
          sub_25A130((char *)&v192);
          sub_25A130((char *)&v196);
          if ( (_DWORD)v205 )
          {
            do
            {
              sub_1831620(qword_1C7F2C0, (char *)ptr + v87);
              ++v88;
              v87 += 40;
            }
            while ( v88 < (unsigned int)v205 );
          }
          v196 = 1;
          v197 = 0;
          v198 = 1;
          v199 = 0;
          sub_182CBA0(qword_1C7F2C0, &v198);
          LODWORD(v198) = 1;
          BYTE4(v198) &= ~1u;
          sub_27B340((__int64)&v200, v180, (int *)&v196);
          sub_9D0A80((_QWORD *)a1, v205, (int *)ptr, (int)&v200, &v189);
          sub_25A130((char *)&v200);
          sub_25A130((char *)&v196);
          v201 = 0u;
          v200 = 0;
          v89 = (_QWORD *)operator new(0x18u);
          v89[1] = &v181;
          v89[2] = &v189;
          *(_QWORD *)&v200 = v89;
          v90 = _mm_loadl_epi64((const __m128i *)off_1C56550);
          *v89 = v177;
          v196 = 0;
          v201 = _mm_unpacklo_epi64(v90, (__m128i)(unsigned __int64)sub_98DFA0);
          sub_9935A0(&v196, a1, (__int64)&v200);
          v91 = *(_QWORD *)v176;
          v92 = v196;
          sub_B6F780(v176[0]);
          sub_B6F780(v176[0]);
          v93 = sub_B645B0(*(_QWORD *)v176, v181);
          v94 = sub_B645B0(*(_QWORD *)v176, v189);
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v91 + 7488) + 48LL))(*(_QWORD *)(v91 + 7488), v181);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v91 + 7488) + 64LL))(*(_QWORD *)(v91 + 7488));
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v91 + 7488) + 48LL))(*(_QWORD *)(v91 + 7488), v189);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v91 + 7488) + 64LL))(*(_QWORD *)(v91 + 7488));
          sub_B6A470(*(_QWORD *)v176, *(unsigned int *)(a1 + 8), v93, v94, 0, 0);
          if ( *(_QWORD *)(v92 + 912) )
            std::operator<<<std::char_traits<char>>();
          if ( v201.m128i_i64[0] )
            ((void (__fastcall *)(__int128 *, __int128 *, __int64))v201.m128i_i64[0])(&v200, &v200, 3);
          sub_98B270(v189, v190);
          sub_98B270(v181, v182);
          v95 = (int *)ptr;
          v96 = (int *)((char *)ptr + 40 * (unsigned int)v205);
          if ( ptr != v96 )
          {
            do
            {
              v97 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v95);
              v98 = v95 + 4;
              v95 += 10;
              sub_182CBA0(v97, v98);
            }
            while ( v96 != v95 );
            v95 = (int *)ptr;
          }
          v175 = 1;
          v99 = v95 == &v206 || v95 == nullptr;
        }
        else
        {
          v95 = (int *)ptr;
          v175 = 0;
          v99 = ptr == &v206 || ptr == nullptr;
        }
        if ( !v99 )
          sub_186B220(v95);
        break;
      }
    }
  }
LABEL_93:
  sub_27FC20(&v180);
  if ( v172 )
    sub_186B220(v172);
  if ( v160 )
    goto LABEL_96;
LABEL_97:
  v100 = v178;
  if ( v178 )
  {
    v101 = *(v178 - 1);
    if ( (_DWORD)v101 )
    {
      v102 = &v178[2 * v101];
      do
      {
        v103 = *(_QWORD *)v100;
        if ( *(_QWORD *)v100 )
        {
          v104 = *(unsigned int *)(v103 - 4);
          if ( (_DWORD)v104 )
          {
            v105 = v103 + 32 * v104;
            do
            {
              v106 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v103);
              v107 = v103 + 16;
              v103 += 32;
              sub_182CBA0(v106, v107);
            }
            while ( v105 != v103 );
            v103 = *(_QWORD *)v100;
          }
          sub_186B220((void *)(v103 - 8));
        }
        v100 += 2;
      }
      while ( v102 != v100 );
      v100 = v178;
    }
    sub_186B220(v100 - 2);
  }
  return v175;
}

