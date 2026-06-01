__m128i *__fastcall sub_1CD8F00(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        double a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        unsigned int a11,
        int a12,
        __int64 a13,
        int a14,
        int a15,
        __int64 a16)
{
  unsigned int v19; // eax
  _QWORD *v20; // r13
  int v21; // r14d
  __int64 v22; // rsi
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // r8
  _DWORD *v28; // rax
  __m128i *v29; // r14
  __int64 v31; // rsi
  __int64 *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 *v35; // rax
  __int64 v36; // rdi
  __int64 **v37; // rax
  __int64 *v38; // rdx
  unsigned __int64 v39; // rax
  __int64 *v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // r9
  __int64 v44; // r8
  _BOOL8 v45; // rcx
  int v46; // eax
  char *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  _QWORD *v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  unsigned __int64 *v58; // rax
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rcx
  int v62; // r13d
  __int64 v63; // rax
  __int64 v64; // rbp
  int v65; // eax
  __int64 v66; // rdi
  unsigned __int64 *v67; // rax
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rcx
  char v73; // si
  int v74; // edx
  __int64 *v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  void *v82; // rax
  _QWORD *v83; // rax
  _QWORD *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  unsigned __int64 v89; // rax
  __int64 v90; // rdx
  _QWORD *v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rsi
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rax
  __int64 v114; // r13
  __int64 v115; // r13
  unsigned __int64 v116; // rdx
  unsigned __int64 *v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  int v120; // r15d
  int v121; // eax
  __int64 v122; // rax
  __int64 v123; // rsi
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // r15
  void *v133; // rax
  _QWORD *v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // r13
  void *v140; // rax
  _QWORD *v141; // rax
  unsigned __int64 *v142; // rax
  unsigned __int64 v143; // rcx
  unsigned __int64 v144; // rdx
  unsigned __int64 v145; // rax
  __int64 v146; // rax
  int v147; // eax
  unsigned __int64 *v148; // rax
  __int64 v149; // r8
  __int64 v150; // r9
  unsigned __int64 v151; // rdx
  unsigned __int64 *v152; // rcx
  unsigned __int64 *v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // r9
  unsigned __int64 v164; // rdx
  _WORD *v165; // rcx
  __int64 v166; // r8
  __int64 v167; // r9
  unsigned __int64 v168; // rax
  __m128i *v169; // rax
  const __m128i *v170; // rdi
  const __m128i **v171; // rax
  __m128i *v172; // rax
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // r9
  __int64 v177; // rdi
  void (*v178)(); // rax
  __int64 *v179; // rax
  __int64 v180; // rcx
  unsigned __int64 *v181; // rax
  unsigned __int64 *v182; // rax
  _DWORD *v183; // rdi
  unsigned __int8 (*v184)(void); // rax
  int v185; // eax
  int v186; // eax
  unsigned __int64 **v187; // rax
  __int64 v188; // rax
  __int64 v189; // [rsp+0h] [rbp-338h]
  unsigned int v190; // [rsp+8h] [rbp-330h]
  char v194; // [rsp+20h] [rbp-318h]
  __int64 v195; // [rsp+20h] [rbp-318h]
  __int64 v196; // [rsp+20h] [rbp-318h]
  __int64 v197; // [rsp+28h] [rbp-310h]
  __int64 v198; // [rsp+30h] [rbp-308h]
  char v199; // [rsp+3Ah] [rbp-2FEh]
  char v200; // [rsp+3Bh] [rbp-2FDh]
  unsigned int v201; // [rsp+3Ch] [rbp-2FCh]
  char v202; // [rsp+47h] [rbp-2F1h] BYREF
  void *v203; // [rsp+48h] [rbp-2F0h] BYREF
  unsigned __int64 v204; // [rsp+50h] [rbp-2E8h] BYREF
  __int64 v205; // [rsp+58h] [rbp-2E0h] BYREF
  void *v206[2]; // [rsp+60h] [rbp-2D8h] BYREF
  _QWORD v207[16]; // [rsp+70h] [rbp-2C8h] BYREF
  void *v208; // [rsp+F0h] [rbp-248h] BYREF
  _BYTE v209[12]; // [rsp+F8h] [rbp-240h] BYREF
  char v210; // [rsp+104h] [rbp-234h]
  void *v211[2]; // [rsp+108h] [rbp-230h] BYREF
  _BYTE v212[72]; // [rsp+118h] [rbp-220h] BYREF
  void *ptr; // [rsp+160h] [rbp-1D8h]
  __int64 v214; // [rsp+168h] [rbp-1D0h]
  _WORD v215[49]; // [rsp+170h] [rbp-1C8h] BYREF
  unsigned __int8 v216; // [rsp+1D2h] [rbp-166h]
  void *v217[2]; // [rsp+1E0h] [rbp-158h] BYREF
  _QWORD v218[2]; // [rsp+1F0h] [rbp-148h] BYREF
  unsigned __int8 *v219; // [rsp+200h] [rbp-138h] BYREF
  char v220; // [rsp+258h] [rbp-E0h]
  unsigned int v221; // [rsp+260h] [rbp-D8h]
  char v222; // [rsp+264h] [rbp-D4h]
  int v223; // [rsp+2F0h] [rbp-48h]
  int v224; // [rsp+2F4h] [rbp-44h]

  sub_F22A90(v217, a10);
  v203 = v217[0];
  v204 = sub_F22BD0((__int64 *)&v203, 0);
  v19 = sub_F58610(a5);
  v20 = (_QWORD *)v204;
  v21 = v19;
  if ( (*(_BYTE *)(v204 + 28) & 0x7F) != 0x48 )
  {
    v62 = sub_17A62A0((__int64)a1, v204, v19);
    sub_168B9F0((__int64)v217, a1 + 1, a11, 0x13D4u, 0);
    v63 = sub_1CBDAC0((__int64)v217, (__int64 *)&v204);
    v64 = v63;
    if ( *(_BYTE *)(v63 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v63 + 32), v62, 2u);
    }
    else
    {
      if ( !*(_BYTE *)(v63 + 132) )
      {
LABEL_63:
        v29 = nullptr;
        sub_15F7200(v217);
        sub_168B9F0((__int64)v217, a1 + 1, *(_DWORD *)(v204 + 24), 0x73u, 0);
        sub_15F7200(v217);
        return v29;
      }
      v132 = sub_168B9E0((_QWORD *)v63);
      v133 = *(void **)(v64 + 16);
      if ( v133 )
        v133 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v133 + 32LL))(*(_QWORD *)(v64 + 16));
      v208 = v133;
      v134 = sub_1587BC0(v132, (__int64 *)&v208, v128, v129, v130, v131);
      sub_AE9DF0((unsigned __int8 **)(*v134 + 32LL * *(unsigned int *)(v64 + 128) + 8), v62, 2u);
    }
    if ( *(_BYTE *)(v64 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v64 + 32), v21, 2u);
    }
    else if ( *(_BYTE *)(v64 + 132) )
    {
      v139 = sub_168B9E0((_QWORD *)v64);
      v140 = *(void **)(v64 + 16);
      if ( v140 )
        v140 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v140 + 32LL))(*(_QWORD *)(v64 + 16));
      v208 = v140;
      v141 = sub_1587BC0(v139, (__int64 *)&v208, v135, v136, v137, v138);
      sub_AE9DF0((unsigned __int8 **)(*v141 + 32LL * *(unsigned int *)(v64 + 128) + 8), v21, 2u);
    }
    goto LABEL_63;
  }
  v22 = *(_QWORD *)(v204 + 48);
  v23 = *(_QWORD *)(v204 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v204 + 40) & 7) != 0 )
    v23 = 0;
  if ( !sub_17B1BF0((__int64)a1, v22, v19, 0, a6, v23) )
  {
    sub_168B9F0((__int64)v217, a1 + 1, a6, 0x150Du, 0);
    if ( v220 )
    {
      sub_AE9DF0(&v219, (__int64)v20, 0xAu);
    }
    else if ( v222 )
    {
      v78 = sub_168B9E0(v217);
      v82 = (void *)v218[0];
      if ( v218[0] )
      {
        v189 = v78;
        v82 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v218[0] + 32LL))(v218[0]);
        v78 = v189;
      }
      v208 = v82;
      v83 = sub_1587BC0(v78, (__int64 *)&v208, v78, v79, v80, v81);
      sub_AE9DF0((unsigned __int8 **)(*v83 + 32LL * v221 + 8), (__int64)v20, 0xAu);
    }
    v46 = sub_F58620(*(_BYTE *)(v20[6] + 73LL) >> 5);
    v47 = sub_F58640(v46);
    *(_QWORD *)&v209[4] = 0;
    v211[0] = v212;
    v206[0] = v207;
    v210 = 0;
    v211[1] = nullptr;
    v212[0] = 0;
    v212[16] = 0;
    LODWORD(v208) = a6;
    HIDWORD(v208) = a6;
    v209[0] = 1;
    sub_1CB0A40(v206, v47, (__int64)&v47[v48]);
    sub_A0AAD0((__int64)v211, v206);
    if ( v206[0] != v207 )
      operator delete(v206[0]);
    sub_1589170((__int64)v217, &v208);
    if ( v211[0] != v212 )
      operator delete(v211[0]);
    sub_15F7200(v217);
    v22 = (__int64)(a1 + 1);
    sub_168B9F0((__int64)v217, a1 + 1, *(_DWORD *)(v20[6] + 24LL), 0x73u, 0);
    sub_15F7200(v217);
    v21 = *(_BYTE *)(v20[6] + 73LL) >> 5;
  }
  v27 = a3;
  v28 = *(_DWORD **)(a1[31] + 17448);
  if ( a3 )
  {
    if ( v28[65] == 15 )
    {
      v65 = v28[66];
      if ( v65 == 29 || v65 == 1 )
        goto LABEL_28;
    }
    v31 = a16;
    v32 = *(__int64 **)(a16 + 8);
    v33 = *(unsigned int *)(a16 + 16);
    v34 = (__int64)&v32[v33];
    if ( v32 != (__int64 *)v34 )
    {
      v26 = *v32;
      v35 = v32 + 1;
      v33 = *(_QWORD *)(v26 + 72);
      if ( *(_WORD *)(v33 + 8) == 111 )
      {
LABEL_64:
        v195 = v26;
        sub_168B9F0((__int64)v217, a1 + 1, a3, 0x19A0u, 0);
        sub_15F7200(v217);
        v31 = (__int64)(a1 + 1);
        sub_168B9F0((__int64)v217, a1 + 1, *(_DWORD *)(v195 + 24), 0x16A6u, 0);
        sub_15F7200(v217);
        v36 = v20[6];
        if ( (*(_BYTE *)(v36 + 29) & 1) == 0 )
          goto LABEL_28;
LABEL_24:
        v37 = (__int64 **)sub_B8C3D0(v36, v31, v33, v34, v27, v26);
        v38 = *v37;
        v39 = (unsigned __int64)&(*v37)[*((unsigned int *)v37 + 2)];
        if ( (unsigned __int64)v38 < v39 )
        {
          v40 = v38;
          while ( *(_WORD *)(*v40 + 36) != 195 )
          {
            if ( (__int64 *)v39 == ++v40 )
              goto LABEL_28;
          }
          if ( (__int64 *)v39 == v40 )
            goto LABEL_28;
          goto LABEL_72;
        }
        if ( v38 != (__int64 *)v39 )
        {
          if ( *(_WORD *)(*(_QWORD *)v39 + 36LL) != 195 )
          {
            v75 = (__int64 *)(v39 + 8);
            while ( v38 != v75 )
            {
              v76 = *v75++;
              if ( *(_WORD *)(v76 + 36) == 195 )
                goto LABEL_72;
            }
            goto LABEL_28;
          }
LABEL_72:
          while ( *(_WORD *)(*v38 + 36) != 195 )
            ++v38;
          v196 = *v38;
          sub_168B9F0((__int64)v217, a1 + 1, a3, 0x19A0u, 0);
          sub_15F7200(v217);
          sub_168B9F0((__int64)v217, a1 + 1, *(_DWORD *)(v196 + 24), 0x16A6u, 0);
          sub_15F7200(v217);
        }
LABEL_28:
        v200 = 0;
        v199 = 0;
        v190 = 3;
        goto LABEL_8;
      }
      while ( (__int64 *)v34 != v35 )
      {
        v26 = *v35++;
        v33 = *(_QWORD *)(v26 + 72);
        if ( *(_WORD *)(v33 + 8) == 111 )
          goto LABEL_64;
      }
    }
    v36 = v20[6];
    if ( (*(_BYTE *)(v36 + 29) & 1) == 0 )
      goto LABEL_28;
    goto LABEL_24;
  }
  if ( v28[85] != 10 )
  {
LABEL_7:
    v200 = 1;
    v199 = 0;
    v190 = 4;
    goto LABEL_8;
  }
  v66 = v20[6];
  if ( (*(_BYTE *)(v66 + 29) & 1) == 0 )
    goto LABEL_79;
  v67 = sub_B8C3D0(v66, v22, v24, v25, a3, v26);
  v68 = *v67;
  v69 = *v67 + 8LL * *((unsigned int *)v67 + 2);
  if ( v68 < v69 )
  {
    v70 = v68;
    while ( *(_WORD *)(*(_QWORD *)v70 + 36LL) != 197 )
    {
      v70 += 8LL;
      if ( v69 == v70 )
        goto LABEL_79;
    }
    if ( v69 == v70 )
      goto LABEL_79;
    goto LABEL_121;
  }
  if ( v68 == v69 )
  {
LABEL_79:
    v71 = *(_QWORD *)(a16 + 8);
    v72 = v71 + 8LL * *(unsigned int *)(a16 + 16);
    if ( v72 != v71 )
    {
      v73 = 0;
      goto LABEL_83;
    }
    goto LABEL_7;
  }
  while ( *(_WORD *)(*(_QWORD *)v69 + 36LL) != 197 )
  {
    v69 += 8LL;
    if ( v68 == v69 )
      goto LABEL_79;
  }
LABEL_121:
  while ( *(_WORD *)(*(_QWORD *)v68 + 36LL) != 197 )
    v68 += 8LL;
  v71 = *(_QWORD *)(a16 + 8);
  v73 = 1;
  v72 = v71 + 8LL * *(unsigned int *)(a16 + 16);
  if ( v71 != v72 )
  {
    do
    {
LABEL_83:
      v74 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v71 + 72LL) + 8LL);
      if ( v74 == 113 )
      {
        v73 = 1;
      }
      else if ( v74 == 111 )
      {
        goto LABEL_7;
      }
      v71 += 8;
    }
    while ( v72 != v71 );
    if ( !v73 )
      goto LABEL_7;
  }
  v200 = 1;
  v199 = 1;
  v190 = 3;
LABEL_8:
  v217[0] = v218;
  v217[1] = (void *)0x800000000LL;
  v223 = a12;
  v224 = a15;
  sub_1CB4530((__int64)a1, &a13, (__int64 *)v217);
  v208 = &v209[8];
  v215[48] = 0;
  *(_QWORD *)v209 = 0x400000000LL;
  ptr = v215;
  v214 = 0x400000000LL;
  v216 = 0;
  *(_OWORD *)v206 = 0;
  v207[0] = 0;
  v194 = sub_1CCEE60(
           (unsigned __int64)a1,
           (__int64)v20,
           a11,
           (__int64)v217,
           (__int64)v206,
           0,
           (__m128)0LL,
           a8,
           (__int64)&v208,
           1,
           nullptr);
  if ( !v194 )
  {
    v205 = 0;
    v41 = sub_BC4EE0(v20, (__int64)ptr, (unsigned int)v214, (__int64)&v205);
    v197 = v41;
    if ( v41 )
    {
      v198 = v41;
      v201 = sub_B97260(v41);
      if ( v190 == 4 )
      {
        v77 = *(_QWORD *)(a1[31] + 17448);
        if ( *(_DWORD *)(v77 + 260) == 15 )
        {
          v121 = *(_DWORD *)(v77 + 264);
          if ( v121 == 29 || v121 == 1 )
          {
            v122 = *(_QWORD *)(a16 + 8);
            v123 = v122 + 8LL * *(unsigned int *)(a16 + 16);
            if ( v123 != v122 )
            {
              while ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)v122 + 72LL) + 8LL) != 111 )
              {
                v122 += 8;
                if ( v123 == v122 )
                  goto LABEL_92;
              }
              sub_168B9F0((__int64)v206, a1 + 1, *(_DWORD *)(*(_QWORD *)v122 + 24LL), 0x19A1u, 0);
              sub_15F7200(v206);
            }
          }
        }
LABEL_92:
        v44 = 4;
        v45 = *(_QWORD *)(a9 + 8) != 0;
      }
      else
      {
        v44 = 3;
        v45 = *(_QWORD *)(a9 + 8) != 0;
      }
      if ( (unsigned __int8)sub_1CD8AB0(a1, v20, a11, v45, v44, v43) )
        goto LABEL_9;
      v202 = 0;
      if ( (unsigned __int8)sub_1CBF140((__int64)a1, a11, v190, v197, v201, *(unsigned int *)(v197 + 176), &v202) )
      {
        v29 = (__m128i *)v197;
        goto LABEL_10;
      }
      if ( v201 <= 1 )
      {
        v169 = (__m128i *)v197;
        v197 = 0;
        v169[1].m128i_i32[2] = a11;
        v29 = v169;
        goto LABEL_102;
      }
      if ( v201 == 3 && v199 )
        v202 = 0;
    }
    else
    {
      v49 = 3;
      if ( v190 == 4 )
        v49 = 4;
      if ( (unsigned __int8)sub_1CD8AB0(a1, v20, a11, *(_QWORD *)(a9 + 8) != 0, v49, v42) )
        goto LABEL_9;
      v202 = 0;
      v201 = 0;
    }
    v50 = (_QWORD *)(v20[2] & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v20[2] & 4) != 0 )
      v50 = (_QWORD *)*v50;
    v51 = (__int64)v50;
    v52 = (unsigned int)v21;
    v29 = (__m128i *)sub_BC2FB0(
                       (_QWORD *)a1[31],
                       v21,
                       v51,
                       a6,
                       a11,
                       (__int64)v20,
                       (const __m128i *)ptr,
                       (unsigned int)v214,
                       v216,
                       v197);
    if ( *(_QWORD *)(a9 + 8) )
    {
      v52 = sub_15AB9E0(a9, (_QWORD *)a1[31], v53, v54, v55, v56);
      sub_B7C4C0((__int64)v29, v52, v57);
    }
    v198 = (__int64)v29;
    if ( v197 )
    {
      if ( (*(_BYTE *)(v197 + 29) & 1) == 0 )
        goto LABEL_102;
      v58 = sub_B8C3D0(v197, v52, v53, v54, v55, v56);
      v59 = *v58;
      v60 = *v58 + 8LL * *((unsigned int *)v58 + 2);
      if ( v59 >= v60 )
      {
        if ( v59 == v60 )
          goto LABEL_102;
        if ( *(_WORD *)(*(_QWORD *)v60 + 36LL) == 248 )
          goto LABEL_177;
        v179 = (__int64 *)(v60 + 8);
        while ( (__int64 *)v59 != v179 )
        {
          v180 = *v179++;
          if ( *(_WORD *)(v180 + 36) == 248 )
            goto LABEL_177;
        }
      }
      else
      {
        v61 = v59;
        while ( *(_WORD *)(*(_QWORD *)v61 + 36LL) != 248 )
        {
          v61 += 8LL;
          if ( v60 == v61 )
            goto LABEL_102;
        }
        if ( v60 != v61 )
        {
LABEL_177:
          v170 = *(const __m128i **)v59;
          if ( *(_WORD *)(*(_QWORD *)v59 + 36LL) != 248 )
          {
            v171 = (const __m128i **)(v59 + 8);
            do
              v170 = *v171++;
            while ( v170[2].m128i_i16[2] != 248 );
          }
          v172 = sub_B272A0(v170, a1[31]);
          v172[2].m128i_i8[6] |= 1u;
          sub_B8CC60((__int64)v29, (__int64)v172, v173, v174, v175, v176);
          v177 = a1[32];
          v178 = *(void (**)())(*(_QWORD *)v177 + 112LL);
          if ( v178 != nullsub_155 )
            ((void (__fastcall *)(__int64, __m128i *))v178)(v177, v29);
        }
      }
    }
    else if ( !v202 )
    {
      sub_BC3800(v20, (__int64)v29, v205);
    }
LABEL_102:
    v84 = (_QWORD *)sub_B8C330(v198);
    v89 = sub_F1ED40(v84, (__int64 *)v217, v85, v86, v87, v88);
    v90 = v29[10].m128i_i64[0];
    if ( v90 && (v90 & 4) != 0 && (v91 = (_QWORD *)(v90 & 0xFFFFFFFFFFFFFFF8LL)) != nullptr )
      *v91 = v89;
    else
      v29[10].m128i_i64[0] = v89 & 0xFFFFFFFFFFFFFFFBLL;
    sub_BC13A0((__int64)v29, a3);
    sub_BC1440((__int64)v29, a4);
    v29[7].m128i_i64[0] = 0;
    if ( (v29[1].m128i_i8[13] & 1) == 0 )
      goto LABEL_107;
    v142 = sub_B8C3D0(v198, a4, v92, v93, v94, v95);
    v143 = *v142;
    v144 = *v142 + 8LL * *((unsigned int *)v142 + 2);
    if ( *v142 >= v144 )
    {
      if ( v143 == v144 )
        goto LABEL_107;
      if ( *(_WORD *)(*(_QWORD *)v144 + 36LL) != 195 )
      {
        v168 = v144 + 8;
        while ( 1 )
        {
          v144 = v168;
          if ( v143 == v168 )
            break;
          v168 += 8LL;
          if ( *(_WORD *)(*(_QWORD *)v144 + 36LL) == 195 )
            goto LABEL_151;
        }
LABEL_107:
        LOWORD(v206[0]) = 1;
        sub_1836B60(a1, a2, v29, a16, v206, (__m128)0LL, (__m128i)a8);
        sub_167AF90((__int64)a1, (__int64)v29, v96, v97, v98, v99, (__m128i)0LL, *(double *)a8.m128_u64);
        sub_B90130(v198, a1[68], v100, v101, v102, v103);
        v104 = (__int64)v29;
        sub_B94AD0((__m128i *)a1[68], (__int64)v29, v105, v106, v107, v108);
        if ( v202 )
          goto LABEL_137;
        v113 = v29[8].m128i_i64[0];
        if ( (v113
           || (v104 = v29[6].m128i_i64[1],
               sub_7052B0((__int64 *)(v104 + 96), v104, v109, v110, v111, v112),
               (v113 = v29[8].m128i_i64[0]) != 0))
          && (v114 = *(_QWORD *)(v113 + 88)) != 0 )
        {
          if ( v190 != 4 )
          {
LABEL_111:
            v115 = *(_QWORD *)(v113 + 88);
            if ( v115 )
            {
              v120 = sub_B97260(*(_QWORD *)(v113 + 88));
              if ( v120 == 3 )
              {
                if ( v200 )
                {
                  v104 = v190;
                  sub_B972B0(v115, v190);
                  if ( !sub_17A23E0(v115, v190, v154, v155, v156, v157)
                    && sub_17A23E0((__int64)v29, v190, v116, (__int64)v117, v118, v119)
                    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1[31] + 17448) + 416LL))(*(_QWORD *)(a1[31] + 17448)) )
                  {
                    v158 = sub_17A23E0((__int64)v29, v190, v116, (__int64)v117, v118, v119);
                    v159 = sub_B395B0(v158, a1[31]);
                    *(_BYTE *)(v159 + 38) |= 1u;
                    sub_B8CC60(v115, v159, v160, v161, v162, v163);
                    v104 = v115;
                    sub_1CB6E70((__int64)a1, v115, v164, v165, v166, v167);
                  }
                }
              }
              if ( v194 || (v29[1].m128i_i8[13] & 1) == 0 )
                goto LABEL_115;
              v181 = sub_B8C3D0(v198, v104, v116, (__int64)v117, v118, v119);
              v116 = *v181;
              v117 = (unsigned __int64 *)(*v181 + 8LL * *((unsigned int *)v181 + 2));
              if ( *v181 >= (unsigned __int64)v117 )
              {
                if ( (unsigned __int64 *)v116 == v117 )
                  goto LABEL_115;
                if ( *(_WORD *)(*v117 + 36) == 195 )
                {
LABEL_194:
                  if ( v120 != 1 )
                    goto LABEL_115;
                  v116 = (unsigned __int64)sub_102B960;
                  v183 = *(_DWORD **)(a1[31] + 17448);
                  v184 = *(unsigned __int8 (**)(void))(*(_QWORD *)v183 + 416LL);
                  if ( (char *)v184 == (char *)sub_102B960 )
                  {
                    v185 = v183[65];
                    if ( v185 == 15 )
                    {
                      v186 = v183[66];
                      v116 = (unsigned int)(v186 - 27);
                      if ( (unsigned int)v116 > 1 && v186 )
                        goto LABEL_115;
                    }
                    else
                    {
                      if ( v183[62] != 38 )
                        goto LABEL_115;
                      LOBYTE(v116) = v183[64] == 3;
                      if ( (v185 != 24 || v183[64] != 3) && (v185 != 25 || v183[64] != 3) )
                        goto LABEL_115;
                    }
                  }
                  else if ( !v184() )
                  {
                    goto LABEL_115;
                  }
                  v104 = v115;
                  sub_1CB6E70((__int64)a1, v115, v116, v117, v118, v119);
                  goto LABEL_115;
                }
                v187 = (unsigned __int64 **)(v117 + 1);
                while ( 1 )
                {
                  v117 = (unsigned __int64 *)v187;
                  if ( (unsigned __int64 **)v116 == v187 )
                    break;
                  v117 = *v187++;
                  if ( *((_WORD *)v117 + 18) == 195 )
                    goto LABEL_194;
                }
              }
              else
              {
                v182 = (unsigned __int64 *)*v181;
                while ( 1 )
                {
                  v116 = *v182;
                  if ( *(_WORD *)(*v182 + 36) == 195 )
                    break;
                  if ( v117 == ++v182 )
                    goto LABEL_115;
                }
                if ( v117 != v182 )
                  goto LABEL_194;
              }
LABEL_115:
              if ( v201 != 3 )
                goto LABEL_116;
              v146 = *(_QWORD *)(a1[31] + 17448);
              if ( *(_DWORD *)(v146 + 260) != 15 )
                goto LABEL_116;
              v147 = *(_DWORD *)(v146 + 264);
              if ( v147 != 29 && v147 != 1 )
                goto LABEL_116;
              if ( (*(_BYTE *)(v197 + 29) & 1) == 0 )
                goto LABEL_116;
              v148 = sub_B8C3D0(v197, v104, v116, (__int64)v117, v118, v119);
              v151 = *v148;
              v152 = (unsigned __int64 *)(*v148 + 8LL * *((unsigned int *)v148 + 2));
              if ( *v148 >= (unsigned __int64)v152 )
              {
                if ( (unsigned __int64 *)v151 == v152 )
                  goto LABEL_116;
                if ( *(_WORD *)(*v152 + 36) != 195 )
                {
                  ++v152;
                  while ( (unsigned __int64 *)v151 != v152 )
                  {
                    v188 = *v152++;
                    if ( *(_WORD *)(v188 + 36) == 195 )
                      goto LABEL_163;
                  }
                  goto LABEL_116;
                }
              }
              else
              {
                v153 = (unsigned __int64 *)*v148;
                while ( 1 )
                {
                  v151 = *v153;
                  if ( *(_WORD *)(*v153 + 36) == 195 )
                    break;
                  if ( v152 == ++v153 )
                    goto LABEL_116;
                }
                if ( v152 == v153 )
                  goto LABEL_116;
              }
LABEL_163:
              sub_1CB6E70((__int64)a1, v115, v151, v152, v149, v150);
LABEL_116:
              sub_B972B0(v198, v190);
              sub_1DDDEA0(a1, a11, v115, v190);
              goto LABEL_10;
            }
LABEL_137:
            sub_B972B0(v198, v190);
            goto LABEL_10;
          }
          v104 = a11;
          sub_1884910((__int64)a1, a11, v29->m128i_i64, 1, v111, v112);
          v29[11].m128i_i32[0] = *(_DWORD *)(v114 + 176);
          v113 = v29[8].m128i_i64[0];
        }
        else
        {
          v104 = a11;
          sub_1DFD9C0(a1, a11, v29, v190, 1, v216);
          v113 = v29[8].m128i_i64[0];
        }
        if ( !v113 )
        {
          v104 = v29[6].m128i_i64[1];
          sub_7052B0((__int64 *)(v104 + 96), v104, v124, v125, v126, v127);
          v113 = v29[8].m128i_i64[0];
          if ( !v113 )
            goto LABEL_137;
        }
        goto LABEL_111;
      }
    }
    else
    {
      v145 = *v142;
      while ( 1 )
      {
        v143 = v145;
        if ( *(_WORD *)(*(_QWORD *)v145 + 36LL) == 195 )
          break;
        v145 += 8LL;
        if ( v144 == v145 )
          goto LABEL_107;
      }
    }
LABEL_151:
    v194 = v143 != v144;
    goto LABEL_107;
  }
LABEL_9:
  v29 = nullptr;
LABEL_10:
  if ( ptr != v215 )
    free(ptr);
  if ( v208 != &v209[8] )
    free(v208);
  if ( v217[0] != v218 )
    free(v217[0]);
  return v29;
}
