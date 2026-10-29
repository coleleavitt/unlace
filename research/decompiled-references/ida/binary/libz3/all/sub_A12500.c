__int64 __fastcall sub_A12500(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  _QWORD *v8; // rdx
  unsigned int v9; // ebp
  unsigned int v10; // r14d
  __int64 **v11; // rcx
  int v12; // eax
  __int64 v13; // rsi
  int v14; // eax
  _QWORD *v15; // r15
  int v16; // r12d
  __int64 v17; // rax
  _QWORD *v18; // rax
  _DWORD *v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  _DWORD *v23; // rdx
  __int64 v24; // rdx
  unsigned int v25; // eax
  int v26; // esi
  int v27; // ecx
  _QWORD *v28; // r15
  __int64 v29; // rdx
  unsigned int v30; // esi
  unsigned int v31; // eax
  unsigned int v32; // esi
  size_t v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rax
  _QWORD *v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // r8
  int v42; // ecx
  char v43; // r9
  __int64 v44; // rcx
  char v45; // r9
  __int64 v46; // rcx
  char v47; // r9
  __int64 v48; // rcx
  char v49; // r9
  __int64 v50; // rcx
  char v51; // r9
  __int64 v52; // rcx
  char v53; // r9
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // r12
  _QWORD *v57; // rax
  _QWORD *v58; // r15
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rdx
  unsigned __int64 v67; // r15
  unsigned int v68; // eax
  __int64 v69; // rdx
  int v70; // eax
  _QWORD *v71; // rdx
  __int64 v72; // rax
  signed int v73; // eax
  unsigned int v75; // r15d
  size_t v76; // rsi
  unsigned int *v77; // rax
  __int64 v78; // rdx
  size_t v79; // rdi
  __int64 v80; // rax
  __int64 *v81; // rdx
  __int64 *v82; // rsi
  __int64 v83; // r9
  __int64 v84; // rax
  __int64 *v85; // r10
  unsigned __int64 v86; // rdi
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rdi
  __m128i v89; // xmm0
  unsigned __int64 v90; // rdi
  __int64 *v91; // rax
  __int64 v92; // r10
  unsigned int v93; // esi
  unsigned int v94; // edi
  unsigned int v95; // esi
  size_t v96; // rdi
  __int64 v97; // rax
  __int64 v98; // rdi
  __int64 v99; // rsi
  __int64 v100; // rax
  _QWORD *v101; // rdx
  __int64 v102; // r8
  __int64 v103; // rax
  __int64 v104; // r8
  int v105; // ecx
  char v106; // r9
  __int64 v107; // rcx
  char v108; // r9
  __int64 v109; // rcx
  char v110; // r9
  __int64 v111; // rcx
  char v112; // r9
  __int64 v113; // rcx
  char v114; // r9
  __int64 v115; // rcx
  char v116; // r9
  __int64 v117; // rcx
  __int64 v118; // rax
  size_t v119; // rdi
  __int64 v120; // rax
  _QWORD *v121; // rcx
  __int64 v122; // r8
  __int64 v123; // rdx
  _QWORD *v124; // rax
  _QWORD *v125; // r8
  __int64 v126; // rdi
  __int64 v127; // rdx
  _QWORD *v128; // rax
  unsigned int v129; // r12d
  size_t v130; // rsi
  unsigned int *v131; // rax
  __int64 v132; // rcx
  __int64 *v133; // rax
  unsigned __int64 v134; // rdi
  __int64 v135; // r11
  unsigned int v136; // esi
  unsigned int v137; // eax
  unsigned int v138; // esi
  size_t v139; // rdi
  __int64 v140; // rax
  __int64 v141; // rdi
  __int64 v142; // rax
  _QWORD *v143; // rdx
  __int64 v144; // r8
  __int64 v145; // rax
  __int64 v146; // r8
  int v147; // ecx
  char v148; // r9
  __int64 v149; // rcx
  char v150; // r9
  __int64 v151; // rcx
  char v152; // r9
  __int64 v153; // rcx
  char v154; // r9
  __int64 v155; // rcx
  char v156; // r9
  __int64 v157; // rcx
  char v158; // r9
  __int64 v159; // rcx
  __int64 v160; // rax
  __int64 v161; // r12
  _QWORD *v162; // rax
  _QWORD *v163; // rax
  _QWORD *v164; // rax
  _QWORD *v165; // rax
  _QWORD *v166; // rax
  _QWORD *v167; // rax
  char **v168; // rbp
  char **exception; // rbx
  char **v170; // rbp
  char **v171; // rbp
  int v172; // [rsp+0h] [rbp-E8h]
  __int64 *v173; // [rsp+0h] [rbp-E8h]
  _QWORD *v174; // [rsp+0h] [rbp-E8h]
  int v175; // [rsp+8h] [rbp-E0h]
  _DWORD *v176; // [rsp+8h] [rbp-E0h]
  __int64 *v177; // [rsp+8h] [rbp-E0h]
  __int64 v178; // [rsp+8h] [rbp-E0h]
  _QWORD *v179; // [rsp+8h] [rbp-E0h]
  int v180; // [rsp+10h] [rbp-D8h]
  unsigned int v181; // [rsp+10h] [rbp-D8h]
  _DWORD *v182; // [rsp+10h] [rbp-D8h]
  _DWORD *v183; // [rsp+10h] [rbp-D8h]
  void *v184; // [rsp+18h] [rbp-D0h]
  unsigned int v185; // [rsp+1Ch] [rbp-CCh]
  unsigned int v186; // [rsp+1Ch] [rbp-CCh]
  unsigned int v187; // [rsp+1Ch] [rbp-CCh]
  unsigned int v188; // [rsp+2Ch] [rbp-BCh] BYREF
  __int64 v189[4]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v190; // [rsp+50h] [rbp-98h] BYREF
  __int64 v191; // [rsp+58h] [rbp-90h]
  __int64 v192; // [rsp+60h] [rbp-88h]
  __int64 v193; // [rsp+68h] [rbp-80h]
  __int64 v194; // [rsp+70h] [rbp-78h]
  __int64 v195; // [rsp+78h] [rbp-70h]
  __int64 v196; // [rsp+80h] [rbp-68h] BYREF
  __int64 v197; // [rsp+88h] [rbp-60h]
  __int64 v198; // [rsp+90h] [rbp-58h]
  __int64 v199; // [rsp+98h] [rbp-50h]
  __int64 v200; // [rsp+A0h] [rbp-48h]
  __int64 v201; // [rsp+A8h] [rbp-40h]

  v8 = *(_QWORD **)(a1 + 32);
  if ( v8 )
  {
    v9 = *((_DWORD *)v8 - 1);
    v10 = v9;
    if ( v9 == *((_DWORD *)v8 - 2) )
    {
      v129 = (3 * v9 + 1) >> 1;
      v130 = 8 * v129 + 8;
      if ( 8 * v9 + 8 >= (unsigned int)v130 || v9 >= v129 )
        goto LABEL_120;
      v131 = (unsigned int *)sub_186B300(v8 - 1, v130);
      v132 = v131[1];
      v8 = v131 + 2;
      *v131 = v129;
      *(_QWORD *)(a1 + 32) = v131 + 2;
      LODWORD(v131) = v132;
      v11 = (__int64 **)&v8[v132];
      v12 = (_DWORD)v131 + 1;
    }
    else
    {
      v11 = (__int64 **)&v8[v9];
      v12 = v9 + 1;
    }
  }
  else
  {
    v9 = 0;
    v10 = 0;
    v162 = (_QWORD *)sub_186B270(0x18u);
    v8 = v162 + 1;
    *v162 = 2;
    v12 = 1;
    *(_QWORD *)(a1 + 32) = v8;
    v11 = (__int64 **)v8;
  }
  *v11 = a2;
  v13 = *a2;
  *((_DWORD *)v8 - 1) = v12;
  v188 = v10;
  v14 = sub_16666A0((int)a1 + 472, v13, (int)v8, (int)v11, a5, a6, v172, v175, v180, v184);
  v15 = *(_QWORD **)(a1 + 712);
  v16 = v14;
  if ( v15 )
  {
    v17 = *((unsigned int *)v15 - 1);
    if ( (_DWORD)v17 == *((_DWORD *)v15 - 2) )
    {
      v187 = (unsigned int)(3 * v17 + 1) >> 1;
      v119 = 16 * v187 + 8;
      if ( 16 * (int)v17 + 8 >= (unsigned int)v119 || (unsigned int)v17 >= (unsigned int)(3 * v17 + 1) >> 1 )
        goto LABEL_120;
      v120 = sub_186B270(v119);
      v121 = *(_QWORD **)(a1 + 712);
      v183 = (_DWORD *)v120;
      v15 = (_QWORD *)(v120 + 8);
      if ( v121 )
      {
        v122 = *((unsigned int *)v121 - 1);
        v123 = v120 + 8;
        *(_DWORD *)(v120 + 4) = v122;
        v124 = v121;
        v125 = &v121[2 * v122];
        if ( v121 != v125 )
        {
          do
          {
            v126 = *v124;
            *v124 = 0;
            v124 += 2;
            v123 += 16;
            *(_QWORD *)(v123 - 16) = v126;
            *(_DWORD *)(v123 - 8) = *((_DWORD *)v124 - 2);
            *(_DWORD *)(v123 - 4) = *((_DWORD *)v124 - 1);
          }
          while ( v124 != v125 );
        }
        v127 = *((unsigned int *)v121 - 1);
        v128 = &v121[2 * v127];
        if ( (_DWORD)v127 )
        {
          do
          {
            while ( *v121 )
            {
              v179 = v128;
              v174 = v121;
              sub_186B220((void *)(*v121 - 8LL));
              v128 = v179;
              v121 = v174 + 2;
              if ( v174 + 2 == v179 )
                goto LABEL_82;
            }
            v121 += 2;
          }
          while ( v121 != v128 );
LABEL_82:
          v121 = *(_QWORD **)(a1 + 712);
        }
        sub_186B220(v121 - 1);
        v18 = &v15[2 * (unsigned int)v183[1]];
      }
      else
      {
        *(_DWORD *)(v120 + 4) = 0;
        v18 = (_QWORD *)(v120 + 8);
      }
      *(_QWORD *)(a1 + 712) = v15;
      *v183 = v187;
    }
    else
    {
      v18 = &v15[2 * v17];
    }
  }
  else
  {
    v163 = (_QWORD *)sub_186B270(0x28u);
    v15 = v163 + 1;
    *v163 = 2;
    *(_QWORD *)(a1 + 712) = v163 + 1;
    v18 = v163 + 1;
  }
  *v18 = 0;
  v18[1] = 0xFFFFFFFF00000000LL;
  v19 = *(_DWORD **)(a1 + 720);
  ++*((_DWORD *)v15 - 1);
  if ( v19 )
  {
    v20 = *(v19 - 1);
    if ( v20 != *(v19 - 2) )
    {
      v21 = v20;
      v22 = v20 + 1;
      v23 = &v19[v21];
      goto LABEL_10;
    }
    v75 = (3 * v20 + 1) >> 1;
    v76 = 4 * v75 + 8;
    if ( 4 * v20 + 8 < (unsigned int)v76 && v20 < v75 )
    {
      v77 = (unsigned int *)sub_186B300(v19 - 2, v76);
      v78 = v77[1];
      v19 = v77 + 2;
      *v77 = v75;
      *(_QWORD *)(a1 + 720) = v77 + 2;
      LODWORD(v77) = v78;
      v23 = &v19[v78];
      v22 = (_DWORD)v77 + 1;
      goto LABEL_10;
    }
LABEL_120:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_98B3B0(&v190, "Overflow encountered when expanding vector");
LABEL_118:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v190);
    sub_233E40((__int64)&v190);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v164 = (_QWORD *)sub_186B270(0x10u);
  v19 = v164 + 1;
  *v164 = 2;
  v22 = 1;
  *(_QWORD *)(a1 + 720) = v19;
  v23 = v19;
LABEL_10:
  *v23 = v16 << 30;
  v24 = *(_QWORD *)(a1 + 464);
  *(v19 - 1) = v22;
  if ( *(_BYTE *)(v24 + 48) )
  {
    v25 = 214013 * *(_DWORD *)(a1 + 1112);
    v26 = *(_DWORD *)(v24 + 52);
    v27 = *(_DWORD *)(v24 + 56);
    HIDWORD(v194) = 0;
    v190 = 0;
    v191 = 0;
    v25 += 2531011;
    *(_DWORD *)(a1 + 1112) = v25;
    v192 = 1;
    v193 = 0;
    v195 = 0;
    v196 = 1;
    v197 = 0;
    LODWORD(v194) = v26 + (int)(HIWORD(v25) & 0x7FFF) % (v27 - v26);
    sub_182CBA0(qword_1C7F2C0, &v196);
    v28 = *(_QWORD **)(a1 + 728);
    BYTE4(v196) &= ~1u;
    LODWORD(v196) = 1;
    v198 = 0;
    v199 = 0;
    v200 = 1;
    v201 = 0;
    if ( v28 )
    {
      v29 = *((unsigned int *)v28 - 1);
      if ( (_DWORD)v29 == *((_DWORD *)v28 - 2) )
      {
        v30 = 3 * v29 + 1;
        v31 = v30 & 0xFFFFFFFE;
        v32 = v30 >> 1;
        v181 = v32;
        v33 = 32 * (v31 + v32) + 8;
        if ( 96 * (int)v29 + 8 >= (unsigned int)v33 || (unsigned int)v29 >= v32 )
        {
          v170 = (char **)__cxa_allocate_exception(0x28u);
          sub_98B3B0(v189, "Overflow encountered when expanding vector");
          *v170 = (char *)off_1C63128;
          sub_2333C0(v170 + 1, v189);
          sub_233E40((__int64)v189);
          __cxa_throw(v170, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v34 = sub_186B270(v33);
        v35 = *(_QWORD *)(a1 + 728);
        v176 = (_DWORD *)v34;
        v36 = v34;
        v28 = (_QWORD *)(v34 + 8);
        if ( v35 )
        {
          v37 = *(unsigned int *)(v35 - 4);
          v38 = v28;
          v39 = 3 * v37;
          *(_DWORD *)(v36 + 4) = v37;
          v40 = v35;
          v41 = v35 + 32 * v39;
          if ( v35 != v41 )
          {
            do
            {
              v42 = *(_DWORD *)v40;
              v43 = *(_BYTE *)(v40 + 4);
              v40 += 96;
              v38 += 12;
              *((_DWORD *)v38 - 24) = v42;
              *((_BYTE *)v38 - 92) = v43 & 3 | *((_BYTE *)v38 - 92) & 0xFC;
              v44 = *(_QWORD *)(v40 - 88);
              *(_QWORD *)(v40 - 88) = 0;
              *(v38 - 11) = v44;
              v45 = *(_BYTE *)(v40 - 76);
              *((_DWORD *)v38 - 20) = *(_DWORD *)(v40 - 80);
              *((_BYTE *)v38 - 76) = v45 & 3 | *((_BYTE *)v38 - 76) & 0xFC;
              v46 = *(_QWORD *)(v40 - 72);
              *(_QWORD *)(v40 - 72) = 0;
              *(v38 - 9) = v46;
              v47 = *(_BYTE *)(v40 - 60);
              *((_DWORD *)v38 - 16) = *(_DWORD *)(v40 - 64);
              *((_BYTE *)v38 - 60) = v47 & 3 | *((_BYTE *)v38 - 60) & 0xFC;
              v48 = *(_QWORD *)(v40 - 56);
              *(_QWORD *)(v40 - 56) = 0;
              *(v38 - 7) = v48;
              v49 = *(_BYTE *)(v40 - 44);
              *((_DWORD *)v38 - 12) = *(_DWORD *)(v40 - 48);
              *((_BYTE *)v38 - 44) = v49 & 3 | *((_BYTE *)v38 - 44) & 0xFC;
              v50 = *(_QWORD *)(v40 - 40);
              *(_QWORD *)(v40 - 40) = 0;
              *(v38 - 5) = v50;
              v51 = *(_BYTE *)(v40 - 28);
              *((_DWORD *)v38 - 8) = *(_DWORD *)(v40 - 32);
              *((_BYTE *)v38 - 28) = v51 & 3 | *((_BYTE *)v38 - 28) & 0xFC;
              v52 = *(_QWORD *)(v40 - 24);
              *(_QWORD *)(v40 - 24) = 0;
              *(v38 - 3) = v52;
              v53 = *(_BYTE *)(v40 - 12);
              *((_DWORD *)v38 - 4) = *(_DWORD *)(v40 - 16);
              *((_BYTE *)v38 - 12) = v53 & 3 | *((_BYTE *)v38 - 12) & 0xFC;
              v54 = *(_QWORD *)(v40 - 8);
              *(_QWORD *)(v40 - 8) = 0;
              *(v38 - 1) = v54;
            }
            while ( v41 != v40 );
          }
          v55 = *(unsigned int *)(v35 - 4);
          if ( (_DWORD)v55 )
          {
            v56 = v35 + 96 * v55;
            do
            {
              sub_2A6060(v35);
              v35 += 96;
            }
            while ( v35 != v56 );
            v35 = *(_QWORD *)(a1 + 728);
          }
          sub_186B220((void *)(v35 - 8));
LABEL_23:
          v57 = &v28[12 * (unsigned int)v176[1]];
LABEL_24:
          *(_QWORD *)(a1 + 728) = v28;
          *v176 = v181;
          goto LABEL_28;
        }
        goto LABEL_110;
      }
LABEL_27:
      v57 = &v28[12 * v29];
      goto LABEL_28;
    }
    v167 = (_QWORD *)sub_186B270(0xC8u);
  }
  else
  {
    v190 = 0;
    v28 = *(_QWORD **)(a1 + 728);
    v191 = 0;
    v192 = 1;
    v193 = 0;
    v194 = 0;
    v195 = 0;
    v196 = 1;
    v197 = 0;
    v198 = 0;
    v199 = 0;
    v200 = 1;
    v201 = 0;
    if ( v28 )
    {
      v29 = *((unsigned int *)v28 - 1);
      if ( (_DWORD)v29 == *((_DWORD *)v28 - 2) )
      {
        v136 = 3 * v29 + 1;
        v137 = v136 & 0xFFFFFFFE;
        v138 = v136 >> 1;
        v181 = v138;
        v139 = 32 * (v137 + v138) + 8;
        if ( 96 * (int)v29 + 8 >= (unsigned int)v139 || (unsigned int)v29 >= v138 )
        {
          v168 = (char **)__cxa_allocate_exception(0x28u);
          sub_98B3B0(v189, "Overflow encountered when expanding vector");
          *v168 = (char *)off_1C63128;
          sub_2333C0(v168 + 1, v189);
          sub_233E40((__int64)v189);
          __cxa_throw(v168, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v140 = sub_186B270(v139);
        v141 = *(_QWORD *)(a1 + 728);
        v176 = (_DWORD *)v140;
        v36 = v140;
        v28 = (_QWORD *)(v140 + 8);
        if ( v141 )
        {
          v142 = *(unsigned int *)(v141 - 4);
          v143 = v28;
          v144 = 3 * v142;
          *(_DWORD *)(v36 + 4) = v142;
          v145 = v141;
          v146 = v141 + 32 * v144;
          if ( v146 != v141 )
          {
            do
            {
              v147 = *(_DWORD *)v145;
              v148 = *(_BYTE *)(v145 + 4);
              v145 += 96;
              v143 += 12;
              *((_DWORD *)v143 - 24) = v147;
              *((_BYTE *)v143 - 92) = v148 & 3 | *((_BYTE *)v143 - 92) & 0xFC;
              v149 = *(_QWORD *)(v145 - 88);
              *(_QWORD *)(v145 - 88) = 0;
              *(v143 - 11) = v149;
              v150 = *(_BYTE *)(v145 - 76);
              *((_DWORD *)v143 - 20) = *(_DWORD *)(v145 - 80);
              *((_BYTE *)v143 - 76) = v150 & 3 | *((_BYTE *)v143 - 76) & 0xFC;
              v151 = *(_QWORD *)(v145 - 72);
              *(_QWORD *)(v145 - 72) = 0;
              *(v143 - 9) = v151;
              v152 = *(_BYTE *)(v145 - 60);
              *((_DWORD *)v143 - 16) = *(_DWORD *)(v145 - 64);
              *((_BYTE *)v143 - 60) = v152 & 3 | *((_BYTE *)v143 - 60) & 0xFC;
              v153 = *(_QWORD *)(v145 - 56);
              *(_QWORD *)(v145 - 56) = 0;
              *(v143 - 7) = v153;
              v154 = *(_BYTE *)(v145 - 44);
              *((_DWORD *)v143 - 12) = *(_DWORD *)(v145 - 48);
              *((_BYTE *)v143 - 44) = v154 & 3 | *((_BYTE *)v143 - 44) & 0xFC;
              v155 = *(_QWORD *)(v145 - 40);
              *(_QWORD *)(v145 - 40) = 0;
              *(v143 - 5) = v155;
              v156 = *(_BYTE *)(v145 - 28);
              *((_DWORD *)v143 - 8) = *(_DWORD *)(v145 - 32);
              *((_BYTE *)v143 - 28) = v156 & 3 | *((_BYTE *)v143 - 28) & 0xFC;
              v157 = *(_QWORD *)(v145 - 24);
              *(_QWORD *)(v145 - 24) = 0;
              *(v143 - 3) = v157;
              v158 = *(_BYTE *)(v145 - 12);
              *((_DWORD *)v143 - 4) = *(_DWORD *)(v145 - 16);
              *((_BYTE *)v143 - 12) = v158 & 3 | *((_BYTE *)v143 - 12) & 0xFC;
              v159 = *(_QWORD *)(v145 - 8);
              *(_QWORD *)(v145 - 8) = 0;
              *(v143 - 1) = v159;
            }
            while ( v146 != v145 );
          }
          v160 = *(unsigned int *)(v141 - 4);
          if ( (_DWORD)v160 )
          {
            v161 = v141 + 96 * v160;
            do
            {
              sub_2A6060(v141);
              v141 += 96;
            }
            while ( v141 != v161 );
            v141 = *(_QWORD *)(a1 + 728);
          }
          sub_186B220((void *)(v141 - 8));
          goto LABEL_23;
        }
LABEL_110:
        *(_DWORD *)(v36 + 4) = 0;
        v57 = v28;
        goto LABEL_24;
      }
      goto LABEL_27;
    }
    v167 = (_QWORD *)sub_186B270(0xC8u);
  }
  v28 = v167 + 1;
  *v167 = 2;
  *(_QWORD *)(a1 + 728) = v167 + 1;
  v57 = v167 + 1;
LABEL_28:
  *(_DWORD *)v57 = v190;
  *((_BYTE *)v57 + 4) = BYTE4(v190) & 3 | *((_BYTE *)v57 + 4) & 0xFC;
  v57[1] = v191;
  v191 = 0;
  *((_DWORD *)v57 + 4) = v192;
  *((_BYTE *)v57 + 20) = BYTE4(v192) & 3 | *((_BYTE *)v57 + 20) & 0xFC;
  v57[3] = v193;
  v193 = 0;
  *((_DWORD *)v57 + 8) = v194;
  *((_BYTE *)v57 + 36) = BYTE4(v194) & 3 | *((_BYTE *)v57 + 36) & 0xFC;
  v57[5] = v195;
  v195 = 0;
  *((_DWORD *)v57 + 12) = v196;
  *((_BYTE *)v57 + 52) = BYTE4(v196) & 3 | *((_BYTE *)v57 + 52) & 0xFC;
  v57[7] = v197;
  v197 = 0;
  *((_DWORD *)v57 + 16) = v198;
  *((_BYTE *)v57 + 68) = BYTE4(v198) & 3 | *((_BYTE *)v57 + 68) & 0xFC;
  v57[9] = v199;
  v199 = 0;
  *((_DWORD *)v57 + 20) = v200;
  *((_BYTE *)v57 + 84) = BYTE4(v200) & 3 | *((_BYTE *)v57 + 84) & 0xFC;
  v57[11] = v201;
  v201 = 0;
  ++*((_DWORD *)v28 - 1);
  sub_2A6060((__int64)&v190);
  v58 = *(_QWORD **)(a1 + 736);
  v190 = 0;
  v191 = 0;
  v192 = 1;
  v193 = 0;
  v194 = 0;
  v195 = 0;
  v196 = 1;
  v197 = 0;
  v198 = 0;
  v199 = 0;
  v200 = 1;
  v201 = 0;
  if ( v58 )
  {
    v59 = *((unsigned int *)v58 - 1);
    if ( (_DWORD)v59 == *((_DWORD *)v58 - 2) )
    {
      v93 = 3 * v59 + 1;
      v94 = v93 & 0xFFFFFFFE;
      v95 = v93 >> 1;
      v186 = v95;
      v96 = 32 * (v95 + v94) + 8;
      if ( 96 * (int)v59 + 8 >= (unsigned int)v96 || (unsigned int)v59 >= v95 )
      {
        v171 = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v189, "Overflow encountered when expanding vector");
        *v171 = (char *)off_1C63128;
        sub_2333C0(v171 + 1, v189);
        sub_233E40((__int64)v189);
        __cxa_throw(v171, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v97 = sub_186B270(v96);
      v98 = *(_QWORD *)(a1 + 736);
      v182 = (_DWORD *)v97;
      v99 = v97;
      v58 = (_QWORD *)(v97 + 8);
      if ( v98 )
      {
        v100 = *(unsigned int *)(v98 - 4);
        v101 = v58;
        v102 = 3 * v100;
        *(_DWORD *)(v99 + 4) = v100;
        v103 = v98;
        v104 = v98 + 32 * v102;
        if ( v98 != v104 )
        {
          do
          {
            v105 = *(_DWORD *)v103;
            v106 = *(_BYTE *)(v103 + 4);
            v103 += 96;
            v101 += 12;
            *((_DWORD *)v101 - 24) = v105;
            *((_BYTE *)v101 - 92) = v106 & 3 | *((_BYTE *)v101 - 92) & 0xFC;
            v107 = *(_QWORD *)(v103 - 88);
            *(_QWORD *)(v103 - 88) = 0;
            *(v101 - 11) = v107;
            v108 = *(_BYTE *)(v103 - 76);
            *((_DWORD *)v101 - 20) = *(_DWORD *)(v103 - 80);
            *((_BYTE *)v101 - 76) = v108 & 3 | *((_BYTE *)v101 - 76) & 0xFC;
            v109 = *(_QWORD *)(v103 - 72);
            *(_QWORD *)(v103 - 72) = 0;
            *(v101 - 9) = v109;
            v110 = *(_BYTE *)(v103 - 60);
            *((_DWORD *)v101 - 16) = *(_DWORD *)(v103 - 64);
            *((_BYTE *)v101 - 60) = v110 & 3 | *((_BYTE *)v101 - 60) & 0xFC;
            v111 = *(_QWORD *)(v103 - 56);
            *(_QWORD *)(v103 - 56) = 0;
            *(v101 - 7) = v111;
            v112 = *(_BYTE *)(v103 - 44);
            *((_DWORD *)v101 - 12) = *(_DWORD *)(v103 - 48);
            *((_BYTE *)v101 - 44) = v112 & 3 | *((_BYTE *)v101 - 44) & 0xFC;
            v113 = *(_QWORD *)(v103 - 40);
            *(_QWORD *)(v103 - 40) = 0;
            *(v101 - 5) = v113;
            v114 = *(_BYTE *)(v103 - 28);
            *((_DWORD *)v101 - 8) = *(_DWORD *)(v103 - 32);
            *((_BYTE *)v101 - 28) = v114 & 3 | *((_BYTE *)v101 - 28) & 0xFC;
            v115 = *(_QWORD *)(v103 - 24);
            *(_QWORD *)(v103 - 24) = 0;
            *(v101 - 3) = v115;
            v116 = *(_BYTE *)(v103 - 12);
            *((_DWORD *)v101 - 4) = *(_DWORD *)(v103 - 16);
            *((_BYTE *)v101 - 12) = v116 & 3 | *((_BYTE *)v101 - 12) & 0xFC;
            v117 = *(_QWORD *)(v103 - 8);
            *(_QWORD *)(v103 - 8) = 0;
            *(v101 - 1) = v117;
          }
          while ( v104 != v103 );
        }
        v118 = *(unsigned int *)(v98 - 4);
        if ( (_DWORD)v118 )
        {
          v178 = v98 + 96 * v118;
          do
          {
            sub_2A6060(v98);
            v98 += 96;
          }
          while ( v98 != v178 );
          v98 = *(_QWORD *)(a1 + 736);
        }
        sub_186B220((void *)(v98 - 8));
        v60 = &v58[12 * (unsigned int)v182[1]];
      }
      else
      {
        *(_DWORD *)(v97 + 4) = 0;
        v60 = (_QWORD *)(v97 + 8);
      }
      *(_QWORD *)(a1 + 736) = v58;
      *v182 = v186;
    }
    else
    {
      v60 = &v58[12 * v59];
    }
  }
  else
  {
    v165 = (_QWORD *)sub_186B270(0xC8u);
    v58 = v165 + 1;
    *v165 = 2;
    *(_QWORD *)(a1 + 736) = v165 + 1;
    v60 = v165 + 1;
  }
  *(_DWORD *)v60 = v190;
  *((_BYTE *)v60 + 4) = BYTE4(v190) & 3 | *((_BYTE *)v60 + 4) & 0xFC;
  v61 = v191;
  v191 = 0;
  v60[1] = v61;
  *((_DWORD *)v60 + 4) = v192;
  *((_BYTE *)v60 + 20) = BYTE4(v192) & 3 | *((_BYTE *)v60 + 20) & 0xFC;
  v62 = v193;
  v193 = 0;
  v60[3] = v62;
  *((_DWORD *)v60 + 8) = v194;
  *((_BYTE *)v60 + 36) = BYTE4(v194) & 3 | *((_BYTE *)v60 + 36) & 0xFC;
  v63 = v195;
  v195 = 0;
  v60[5] = v63;
  *((_DWORD *)v60 + 12) = v196;
  *((_BYTE *)v60 + 52) = BYTE4(v196) & 3 | *((_BYTE *)v60 + 52) & 0xFC;
  v64 = v197;
  v197 = 0;
  v60[7] = v64;
  *((_DWORD *)v60 + 16) = v198;
  *((_BYTE *)v60 + 68) = BYTE4(v198) & 3 | *((_BYTE *)v60 + 68) & 0xFC;
  v65 = v199;
  v199 = 0;
  v60[9] = v65;
  *((_DWORD *)v60 + 20) = v200;
  *((_BYTE *)v60 + 84) = BYTE4(v200) & 3 | *((_BYTE *)v60 + 84) & 0xFC;
  v66 = v201;
  v201 = 0;
  v60[11] = v66;
  ++*((_DWORD *)v58 - 1);
  sub_2A6060((__int64)&v190);
  v67 = *(_QWORD *)(a1 + 760);
  if ( !v67 )
  {
    v166 = (_QWORD *)sub_186B270(0x18u);
    v67 = (unsigned __int64)(v166 + 1);
    *v166 = 2;
    v70 = 1;
    *(_QWORD *)(a1 + 760) = v67;
    v71 = (_QWORD *)v67;
    goto LABEL_34;
  }
  v68 = *(_DWORD *)(v67 - 4);
  if ( v68 != *(_DWORD *)(v67 - 8) )
  {
    v69 = v68;
    v70 = v68 + 1;
    v71 = (_QWORD *)(v67 + 8 * v69);
    goto LABEL_34;
  }
  v185 = (3 * v68 + 1) >> 1;
  v79 = 8 * v185 + 8;
  if ( 8 * v68 + 8 >= (unsigned int)v79 || v68 >= (3 * v68 + 1) >> 1 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_98B3B0(&v190, "Overflow encountered when expanding vector");
    goto LABEL_118;
  }
  v80 = sub_186B270(v79);
  v81 = *(__int64 **)(a1 + 760);
  v82 = (__int64 *)v80;
  v67 = v80 + 8;
  if ( v81 )
  {
    v83 = *((unsigned int *)v81 - 1);
    *(_DWORD *)(v80 + 4) = v83;
    v84 = 8 * v83;
    v85 = &v81[v83];
    if ( v85 != v81 )
    {
      v86 = v84 - 8;
      if ( (unsigned __int64)(v84 - 8) <= 8 || v81 < v82 + 3 && v67 < (unsigned __int64)(v81 + 2) )
      {
        v133 = v81;
        v134 = v67;
        do
        {
          v135 = *v133;
          *v133++ = 0;
          v134 += 8LL;
          *(_QWORD *)(v134 - 8) = v135;
        }
        while ( v85 != v133 );
      }
      else
      {
        v87 = 0;
        v88 = (v86 >> 3) + 1;
        do
        {
          v89 = _mm_loadu_si128((const __m128i *)&v81[v87]);
          *(_OWORD *)&v81[v87] = 0;
          *(__m128i *)&v82[v87 + 1] = v89;
          v87 += 2LL;
        }
        while ( 2 * (v88 >> 1) != v87 );
        if ( (v88 & 1) != 0 )
        {
          v90 = v88 & 0xFFFFFFFFFFFFFFFELL;
          v91 = &v81[v90];
          v92 = *v91;
          *v91 = 0;
          *(_QWORD *)(v67 + 8 * v90) = v92;
        }
      }
    }
    v173 = &v81[v83];
    if ( (_DWORD)v83 )
    {
      do
      {
        while ( *v81 )
        {
          v177 = v81;
          sub_186B220((void *)(*v81 - 8));
          v81 = v177 + 1;
          if ( v173 == v177 + 1 )
            goto LABEL_58;
        }
        ++v81;
      }
      while ( v173 != v81 );
LABEL_58:
      v81 = *(__int64 **)(a1 + 760);
    }
    sub_186B220(v81 - 1);
    v71 = (_QWORD *)(v67 + 8LL * *((unsigned int *)v82 + 1));
    v70 = *((_DWORD *)v82 + 1) + 1;
  }
  else
  {
    *(_DWORD *)(v80 + 4) = 0;
    v71 = (_QWORD *)(v80 + 8);
    v70 = 1;
  }
  *(_QWORD *)(a1 + 760) = v67;
  *(_DWORD *)v82 = v185;
LABEL_34:
  *v71 = 0;
  *(_DWORD *)(v67 - 4) = v70;
  LODWORD(v190) = 0;
  sub_98D1A0((_QWORD *)(a1 + 768), (unsigned int *)&v190);
  LODWORD(v190) = -1;
  sub_98D060((_QWORD *)(a1 + 784), (unsigned int *)&v190);
  v190 = 0;
  sub_98CC00((_QWORD *)(a1 + 744), &v190);
  v190 = 0;
  sub_98CC00((_QWORD *)(a1 + 752), &v190);
  v72 = *(_QWORD *)(a1 + 936);
  if ( v72 )
    v73 = *(_DWORD *)(v72 - 4);
  else
    v73 = 0;
  if ( (int)v10 >= v73 )
    sub_8C3430((_QWORD *)(a1 + 936), v10 + 1, 0);
  sub_9CB4A0(a1 + 976, v9);
  sub_9CB4A0(a1 + 944, v9);
  sub_9CB4A0(a1 + 1000, v9);
  if ( (unsigned __int8)sub_98ACD0(*a2) )
    sub_98D100((_QWORD *)(a1 + 824), &v188);
  sub_B66EF0(*(_QWORD *)(a1 + 16), a2, a1, v10);
  return v10;
}

