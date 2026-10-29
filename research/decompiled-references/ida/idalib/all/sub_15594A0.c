__int64 __fastcall sub_15594A0(__int64 a1, int a2, int a3, __m128i a4, __m128 a5)
{
  int *v5; // r15
  size_t v6; // rbx
  int v7; // eax
  __int16 v8; // dx
  bool v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int8 *v13; // rbp
  _BOOL8 v14; // r12
  _QWORD *v15; // rdx
  __int64 v16; // rax
  void **v17; // rbp
  unsigned __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // r14
  void *v21; // rdi
  void **v22; // rdi
  void **v23; // rdi
  void **v24; // r14
  void **v25; // r12
  unsigned int v26; // ebp
  unsigned int v27; // r12d
  __int16 v28; // ax
  __int64 *v29; // r14
  void **v30; // rbp
  unsigned __int64 v31; // rax
  void **v32; // r14
  void **v33; // r13
  void **v34; // rdi
  void **v35; // rdi
  void **v36; // r14
  void **v37; // r13
  __int64 *v38; // rdi
  __int64 v39; // r14
  __int64 *v40; // rdi
  char v41; // cl
  __int64 *v42; // rdi
  int v43; // r13d
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  int v46; // edx
  void **v47; // r9
  __int64 v48; // r15
  __m128i v49; // xmm1
  __int64 v50; // rbx
  __int64 *v52; // rdi
  __int64 v53; // rbp
  __int64 v54; // rax
  size_t v55; // r9
  void **v56; // rbp
  unsigned __int64 v57; // rax
  void **v58; // r14
  void **v59; // r12
  void **v60; // rdi
  void **v61; // rdi
  void **v62; // r14
  void **v63; // r12
  __int64 v64; // rcx
  unsigned __int8 *v65; // rbp
  _BOOL8 v66; // r12
  _QWORD *v67; // rdx
  _DWORD *v68; // rbp
  __int64 v69; // rax
  int v70; // eax
  size_t v71; // r9
  unsigned int *v72; // r12
  __int64 v73; // rcx
  char *v74; // rax
  unsigned __int64 v75; // rsi
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // rcx
  _DWORD *v78; // r14
  _BYTE *v79; // rax
  _BYTE *v80; // rsi
  __int64 v81; // r8
  unsigned __int8 *v82; // rbx
  _QWORD *v83; // rdx
  __int64 v84; // rax
  void **v85; // rbp
  unsigned __int64 v86; // rax
  void **v87; // r12
  void **v88; // rbx
  void **v89; // rdi
  void **v90; // rdi
  void **v91; // rbx
  void **v92; // r12
  _DWORD *v93; // rdi
  void **v94; // r14
  void **v95; // r12
  void **v96; // rdi
  void **v97; // rdi
  void **v98; // r14
  void **v99; // r12
  void *v100; // rdi
  __int64 *v101; // rdi
  __int64 *v102; // r15
  __m128i v103; // xmm2
  __int64 v104; // rdi
  unsigned __int64 v105; // rax
  int v106; // eax
  _DWORD *v107; // r10
  unsigned int *v108; // rbp
  __int64 v109; // r12
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // rcx
  unsigned __int64 v112; // rdx
  unsigned __int64 v113; // r12
  size_t v114; // r14
  _BYTE *v115; // rax
  _BYTE *v116; // rsi
  __int64 v117; // rcx
  _DWORD *v118; // rdi
  __int64 v119; // rdx
  unsigned __int64 v120; // rdx
  int v121; // eax
  __int64 v122; // rdx
  __int64 v123; // rax
  __int64 v124; // r14
  __int64 v125; // rdx
  __int64 v126; // r14
  __int64 v127; // rbx
  void *v128; // rdi
  unsigned __int64 v129; // rdx
  int v130; // eax
  __int64 v131; // rdx
  unsigned __int64 v132; // rdx
  int v133; // eax
  __int64 *v134; // r15
  _DWORD *v135; // r9
  char *v136; // rax
  unsigned __int64 v137; // rdx
  __int64 v138; // rdx
  __int64 v139; // r15
  unsigned int v140; // r13d
  char *v141; // r12
  __int64 v142; // rbx
  void *v143; // rdi
  char *v144; // rdi
  char *v145; // rdi
  void **v146; // r15
  unsigned int v147; // r13d
  void *v148; // r12
  void **v149; // rbx
  void *v150; // rdi
  void *v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rax
  __int64 v154; // rbp
  __int64 v155; // r12
  __int64 v156; // rbp
  void *v157; // rdi
  unsigned __int64 v158; // rdx
  int v159; // eax
  unsigned __int64 v160; // rdx
  int v161; // eax
  unsigned int *v162; // rax
  __int64 v163; // rax
  unsigned int *v164; // rdi
  unsigned int v165; // r14d
  __int64 v166; // rcx
  __int64 v167; // rax
  __int64 v168; // r14
  char *v169; // r14
  size_t v170; // rbp
  char *v171; // rbx
  char *v172; // rdi
  size_t v173; // rax
  unsigned int *v174; // rdi
  unsigned int v175; // r14d
  __int64 v176; // rcx
  char *v177; // r12
  size_t v178; // rax
  unsigned int *v179; // rdi
  unsigned int v180; // r14d
  __int64 v181; // rax
  __int64 v182; // r14
  __int64 v183; // rdx
  __int64 v184; // r14
  __int64 v185; // rbx
  void *v186; // rdi
  __int64 v187; // rcx
  __int64 v188; // rax
  __int64 v189; // r12
  unsigned __int64 v190; // r14
  unsigned __int64 v191; // r12
  void *v192; // rdi
  __int64 v193; // r12
  unsigned int *v194; // rdi
  unsigned int v195; // r14d
  __int64 v196; // rax
  __int64 *v197; // [rsp+8h] [rbp-200h]
  int v198; // [rsp+14h] [rbp-1F4h]
  void **p_ptr; // [rsp+18h] [rbp-1F0h]
  unsigned __int64 v200; // [rsp+20h] [rbp-1E8h]
  int v201; // [rsp+28h] [rbp-1E0h]
  int v202; // [rsp+2Ch] [rbp-1DCh]
  size_t n; // [rsp+30h] [rbp-1D8h]
  _DWORD *v204; // [rsp+38h] [rbp-1D0h]
  void *src; // [rsp+40h] [rbp-1C8h]
  void *v206; // [rsp+48h] [rbp-1C0h]
  int v207; // [rsp+58h] [rbp-1B0h] BYREF
  int v208; // [rsp+5Ch] [rbp-1ACh] BYREF
  _DWORD v209[2]; // [rsp+60h] [rbp-1A8h] BYREF
  char v210; // [rsp+68h] [rbp-1A0h]
  __int64 v211; // [rsp+6Ch] [rbp-19Ch]
  char v212; // [rsp+74h] [rbp-194h]
  void *v213; // [rsp+78h] [rbp-190h]
  __int64 v214; // [rsp+80h] [rbp-188h]
  _BYTE v215[24]; // [rsp+88h] [rbp-180h] BYREF
  _DWORD v216[2]; // [rsp+A0h] [rbp-168h] BYREF
  char v217; // [rsp+A8h] [rbp-160h]
  __int64 v218; // [rsp+ACh] [rbp-15Ch]
  char v219; // [rsp+B4h] [rbp-154h]
  void *v220; // [rsp+B8h] [rbp-150h]
  __int64 v221; // [rsp+C0h] [rbp-148h]
  char v222[24]; // [rsp+C8h] [rbp-140h] BYREF
  void *v223; // [rsp+E0h] [rbp-128h] BYREF
  unsigned __int64 v224; // [rsp+E8h] [rbp-120h]
  __int64 v225; // [rsp+F0h] [rbp-118h] BYREF
  void *v226[2]; // [rsp+F8h] [rbp-110h] BYREF
  __int64 v227; // [rsp+108h] [rbp-100h]
  __m128i v228; // [rsp+110h] [rbp-F8h] BYREF
  __int64 v229; // [rsp+120h] [rbp-E8h]
  void *v230; // [rsp+130h] [rbp-D8h] BYREF
  unsigned __int64 v231; // [rsp+138h] [rbp-D0h]
  __int64 v232; // [rsp+140h] [rbp-C8h]
  void *v233; // [rsp+150h] [rbp-B8h]
  int v234; // [rsp+15Ch] [rbp-ACh]
  __m128i v235; // [rsp+160h] [rbp-A8h] BYREF
  __int64 v236; // [rsp+170h] [rbp-98h]
  void *ptr; // [rsp+180h] [rbp-88h] BYREF
  __int64 v238; // [rsp+188h] [rbp-80h]
  __int64 v239; // [rsp+190h] [rbp-78h] BYREF

  v5 = (int *)(a1 + 16);
  v6 = a1;
  v201 = a2;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  v202 = a3;
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v7 = *(_DWORD *)(a1 + 40);
  v207 = 0;
  v198 = v7;
  ptr = &v239;
  v238 = 0x800000000LL;
  p_ptr = &ptr;
  v208 = 0;
  v230 = (void *)a1;
  LODWORD(v231) = 0;
  v197 = (__int64 *)&v230;
  if ( (unsigned __int8)sub_1558C40(a1, (__int64)&v230, a2 + 1, (__int64)&ptr, &v207, &v208, a4, a5) )
  {
LABEL_70:
    while ( (_DWORD)v231 )
    {
      sub_1564F70(v230);
      LODWORD(v231) = v231 - 1;
    }
LABEL_72:
    v50 = 0;
    goto LABEL_65;
  }
  v200 = 0;
  if ( *(_WORD *)(a1 + 32) == 176 )
  {
    v52 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(v6 + 40) = *(_DWORD *)(v6 + 16);
    sub_14634E0(v52, v5);
    v53 = *(_QWORD *)(v6 + 96);
    v54 = sub_14C51E0(v6, 0, a4, *(double *)a5.m128_u64);
    v200 = sub_183C1F0(v53, v54);
    if ( v200 <= 1 )
    {
      WORD2(v223) = 53;
      LODWORD(v223) = 3407938;
      sub_15680D0(v6, &v223, 3, 3);
      goto LABEL_70;
    }
  }
  for ( ; (_DWORD)v231; LODWORD(v231) = v231 - 1 )
    sub_1564F70(v230);
  v8 = *(_WORD *)(v6 + 32);
  if ( v8 == 129 )
  {
    v42 = *(__int64 **)(v6 + 8);
    *(_DWORD *)(v6 + 40) = *(_DWORD *)(v6 + 16);
    sub_14634E0(v42, v5);
    LODWORD(n) = 0;
    v26 = *(_DWORD *)(v6 + 16);
    goto LABEL_56;
  }
  v9 = v8 == 103 || v8 == 151;
  v10 = (__int64)v5;
  if ( v8 == 103 )
  {
    v104 = *(_QWORD *)(v6 + 8);
    v105 = *(_QWORD *)(v104 + 2944);
    if ( v105 < *(unsigned int *)(v104 + 2912) )
    {
      v10 = *(_QWORD *)(v104 + 2904) + 24 * v105;
LABEL_8:
      v11 = *(unsigned int *)(v6 + 16);
      v12 = (unsigned int)*(unsigned __int16 *)(v10 + 16) - 5;
      if ( (unsigned __int16)v12 > 0x3Du || (v64 = 0x2001800000400001LL, !_bittest64(&v64, v12)) )
      {
        sub_1564820(v197, v6, v11, 1575);
        v13 = (unsigned __int8 *)v230;
        v14 = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 56LL) + 1LL) & 0x40) != 0;
        if ( !v230 )
        {
          v158 = v231;
          v159 = *(_DWORD *)(v231 + 14976);
          if ( v159 )
          {
            v181 = (unsigned int)(v159 - 1);
            *(_DWORD *)(v231 + 14976) = v181;
            v13 = *(unsigned __int8 **)(v158 + 8 * v181 + 14848);
            v182 = *((unsigned int *)v13 + 134);
            *v13 = 0;
            v183 = *((_QWORD *)v13 + 66);
            *((_DWORD *)v13 + 106) = 0;
            v184 = v183 + (v182 << 6);
            if ( v183 != v184 )
            {
              n = v6;
              v185 = v183;
              do
              {
                while ( 1 )
                {
                  v184 -= 64;
                  v186 = *(void **)(v184 + 24);
                  if ( v186 == (void *)(v184 + 40) )
                    break;
                  operator delete(v186);
                  if ( v185 == v184 )
                    goto LABEL_284;
                }
              }
              while ( v185 != v184 );
LABEL_284:
              v6 = n;
            }
            *((_DWORD *)v13 + 134) = 0;
          }
          else
          {
            v13 = (unsigned __int8 *)operator new(0x3A0u);
            *v13 = 0;
            *((_QWORD *)v13 + 12) = v13 + 112;
            *((_QWORD *)v13 + 16) = v13 + 144;
            *((_QWORD *)v13 + 20) = v13 + 176;
            *((_QWORD *)v13 + 24) = v13 + 208;
            *((_QWORD *)v13 + 28) = v13 + 240;
            *((_QWORD *)v13 + 32) = v13 + 272;
            *((_QWORD *)v13 + 36) = v13 + 304;
            *((_QWORD *)v13 + 40) = v13 + 336;
            *((_QWORD *)v13 + 44) = v13 + 368;
            *((_QWORD *)v13 + 48) = v13 + 400;
            *((_QWORD *)v13 + 52) = v13 + 432;
            *((_QWORD *)v13 + 13) = 0;
            v13[112] = 0;
            *((_QWORD *)v13 + 17) = 0;
            v13[144] = 0;
            *((_QWORD *)v13 + 21) = 0;
            v13[176] = 0;
            *((_QWORD *)v13 + 25) = 0;
            v13[208] = 0;
            *((_QWORD *)v13 + 29) = 0;
            v13[240] = 0;
            *((_QWORD *)v13 + 33) = 0;
            v13[272] = 0;
            *((_QWORD *)v13 + 37) = 0;
            v13[304] = 0;
            *((_QWORD *)v13 + 41) = 0;
            v13[336] = 0;
            *((_QWORD *)v13 + 45) = 0;
            v13[368] = 0;
            *((_QWORD *)v13 + 49) = 0;
            v13[400] = 0;
            *((_QWORD *)v13 + 53) = 0x800000000LL;
            *((_QWORD *)v13 + 66) = v13 + 544;
            *((_QWORD *)v13 + 67) = 0x600000000LL;
          }
          v230 = v13;
        }
        v13[*v13 + 1] = 3;
        v15 = v230;
        v16 = *(unsigned __int8 *)v230;
        *(_BYTE *)v230 = v16 + 1;
        v15[v16 + 2] = v14;
        if ( (_BYTE)v236 )
        {
          sub_FC7790(v232, v197, SBYTE1(v236));
          v232 = 0;
          LOWORD(v236) = 0;
        }
        if ( v233 != v197 + 6 )
          operator delete(v233);
        v17 = (void **)v230;
        if ( !v230 )
          goto LABEL_29;
        v18 = v231;
        if ( !v231 )
          goto LABEL_29;
        if ( (unsigned __int64)v230 >= v231 && (unsigned __int64)v230 <= v231 + 14848 )
        {
LABEL_175:
          v119 = *(unsigned int *)(v18 + 14976);
          *(_DWORD *)(v18 + 14976) = v119 + 1;
          *(_QWORD *)(v18 + 8 * v119 + 14848) = v17;
          goto LABEL_29;
        }
        v19 = *((_QWORD *)v230 + 66);
        v20 = v19 + ((unsigned __int64)*((unsigned int *)v230 + 134) << 6);
        while ( v19 != v20 )
        {
          while ( 1 )
          {
            v20 -= 64;
            v21 = *(void **)(v20 + 24);
            if ( v21 == (void *)(v20 + 40) )
              break;
            operator delete(v21);
            if ( v19 == v20 )
              goto LABEL_21;
          }
        }
LABEL_21:
        v22 = (void **)v17[66];
        if ( v22 != v17 + 68 )
          free(v22);
        v23 = (void **)v17[52];
        if ( v23 != v17 + 54 )
          free(v23);
        v24 = v17 + 48;
        v25 = v17 + 8;
        do
        {
          while ( *v24 != v24 + 2 )
          {
            operator delete(*v24);
            v24 -= 4;
            if ( v25 == v24 )
              goto LABEL_28;
          }
          v24 -= 4;
        }
        while ( v24 != v25 );
LABEL_28:
        operator delete(v17, 0x3A0u);
LABEL_29:
        LODWORD(n) = 0;
        goto LABEL_30;
      }
      sub_1564820(v197, v6, v11, 1575);
      v65 = (unsigned __int8 *)v230;
      v66 = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 56LL) + 1LL) & 0x40) != 0;
      if ( !v230 )
      {
        v120 = v231;
        v121 = *(_DWORD *)(v231 + 14976);
        if ( v121 )
        {
          v123 = (unsigned int)(v121 - 1);
          *(_DWORD *)(v231 + 14976) = v123;
          v65 = *(unsigned __int8 **)(v120 + 8 * v123 + 14848);
          v124 = *((unsigned int *)v65 + 134);
          *v65 = 0;
          v125 = *((_QWORD *)v65 + 66);
          *((_DWORD *)v65 + 106) = 0;
          v126 = v125 + (v124 << 6);
          if ( v125 != v126 )
          {
            n = v6;
            v127 = v125;
            do
            {
              while ( 1 )
              {
                v126 -= 64;
                v128 = *(void **)(v126 + 24);
                if ( v128 == (void *)(v126 + 40) )
                  break;
                operator delete(v128);
                if ( v127 == v126 )
                  goto LABEL_203;
              }
            }
            while ( v127 != v126 );
LABEL_203:
            v6 = n;
          }
          *((_DWORD *)v65 + 134) = 0;
        }
        else
        {
          v65 = (unsigned __int8 *)operator new(0x3A0u);
          *v65 = 0;
          *((_QWORD *)v65 + 12) = v65 + 112;
          *((_QWORD *)v65 + 16) = v65 + 144;
          *((_QWORD *)v65 + 20) = v65 + 176;
          *((_QWORD *)v65 + 24) = v65 + 208;
          *((_QWORD *)v65 + 28) = v65 + 240;
          *((_QWORD *)v65 + 32) = v65 + 272;
          *((_QWORD *)v65 + 36) = v65 + 304;
          *((_QWORD *)v65 + 40) = v65 + 336;
          *((_QWORD *)v65 + 44) = v65 + 368;
          *((_QWORD *)v65 + 48) = v65 + 400;
          *((_QWORD *)v65 + 52) = v65 + 432;
          *((_QWORD *)v65 + 13) = 0;
          v65[112] = 0;
          *((_QWORD *)v65 + 17) = 0;
          v65[144] = 0;
          *((_QWORD *)v65 + 21) = 0;
          v65[176] = 0;
          *((_QWORD *)v65 + 25) = 0;
          v65[208] = 0;
          *((_QWORD *)v65 + 29) = 0;
          v65[240] = 0;
          *((_QWORD *)v65 + 33) = 0;
          v65[272] = 0;
          *((_QWORD *)v65 + 37) = 0;
          v65[304] = 0;
          *((_QWORD *)v65 + 41) = 0;
          v65[336] = 0;
          *((_QWORD *)v65 + 45) = 0;
          v65[368] = 0;
          *((_QWORD *)v65 + 49) = 0;
          v65[400] = 0;
          *((_QWORD *)v65 + 53) = 0x800000000LL;
          *((_QWORD *)v65 + 66) = v65 + 544;
          *((_QWORD *)v65 + 67) = 0x600000000LL;
        }
        v230 = v65;
      }
      v65[*v65 + 1] = 3;
      v67 = v230;
      v68 = v216;
      v69 = *(unsigned __int8 *)v230;
      *(_BYTE *)v230 = v69 + 1;
      v67[v69 + 2] = v66;
      v70 = *(_DWORD *)(v6 + 16);
      v218 = 0;
      v219 = 0;
      v220 = v222;
      v222[16] = 0;
      v216[0] = v70;
      v216[1] = v70;
      v71 = (size_t)&v223;
      if ( v9 )
      {
        v217 = 1;
        qmemcpy(&v225, "class", 5);
        strcpy(v222, "class");
        v221 = 5;
      }
      else
      {
        qmemcpy(&v225, "class ", 6);
        strcpy(v222, "class ");
        v217 = 0;
        v221 = 6;
      }
      if ( !v70 )
      {
LABEL_131:
        if ( (_BYTE)v236 )
        {
          sub_FC7790(v232, v197, SBYTE1(v236));
          v232 = 0;
          LOWORD(v236) = 0;
        }
        if ( v233 != v197 + 6 )
          operator delete(v233);
        v17 = (void **)v230;
        if ( !v230 )
          goto LABEL_29;
        v18 = v231;
        if ( !v231 )
          goto LABEL_29;
        if ( (unsigned __int64)v230 >= v231 && (unsigned __int64)v230 <= v231 + 14848 )
          goto LABEL_175;
        v94 = *((void ***)v230 + 66);
        v95 = &v94[8 * (unsigned __int64)*((unsigned int *)v230 + 134)];
        if ( v94 != v95 )
        {
          do
          {
            while ( 1 )
            {
              v95 -= 8;
              v96 = (void **)v95[3];
              if ( v96 == v95 + 5 )
                break;
              operator delete(v96);
              if ( v94 == v95 )
                goto LABEL_141;
            }
          }
          while ( v94 != v95 );
LABEL_141:
          v95 = (void **)v17[66];
        }
        if ( v95 != v17 + 68 )
          free(v95);
        v97 = (void **)v17[52];
        if ( v97 != v17 + 54 )
          free(v97);
        v98 = v17 + 48;
        v99 = v17 + 8;
        while ( 1 )
        {
          v100 = *v98;
          if ( *v98 != v98 + 2 )
            break;
LABEL_150:
          v98 -= 4;
          if ( v98 == v99 )
            goto LABEL_28;
        }
        while ( 1 )
        {
          operator delete(v100);
          v98 -= 4;
          if ( v98 == v99 )
            goto LABEL_28;
          v100 = *v98;
          if ( *v98 == v98 + 2 )
            goto LABEL_150;
        }
      }
      v72 = (unsigned int *)v230;
      if ( v230 )
      {
        v73 = *((unsigned int *)v230 + 134);
        v74 = *((char **)v230 + 66);
        v75 = *((unsigned int *)v230 + 135);
        v76 = v73 + 1;
        v77 = (unsigned __int64)&v74[64 * v73];
      }
      else
      {
        v132 = v231;
        v133 = *(_DWORD *)(v231 + 14976);
        if ( v133 )
        {
          v167 = (unsigned int)(v133 - 1);
          *(_DWORD *)(v231 + 14976) = v167;
          v72 = *(unsigned int **)(v132 + 8 * v167 + 14848);
          v168 = v72[134];
          v74 = *((char **)v72 + 66);
          *(_BYTE *)v72 = 0;
          v72[106] = 0;
          v169 = &v74[64 * v168];
          if ( v74 != v169 )
          {
            v204 = v216;
            v170 = v6;
            v171 = v74;
            do
            {
              while ( 1 )
              {
                v169 -= 64;
                v172 = *((char **)v169 + 3);
                if ( v172 == v169 + 40 )
                  break;
                n = v71;
                operator delete(v172);
                v71 = n;
                if ( v171 == v169 )
                  goto LABEL_268;
              }
            }
            while ( v171 != v169 );
LABEL_268:
            v6 = v170;
            v74 = *((char **)v72 + 66);
            v68 = v204;
          }
          v72[134] = 0;
          v75 = v72[135];
        }
        else
        {
          n = (size_t)&v223;
          v72 = (unsigned int *)operator new(0x3A0u);
          *(_BYTE *)v72 = 0;
          *((_QWORD *)v72 + 12) = v72 + 28;
          *((_QWORD *)v72 + 16) = v72 + 36;
          *((_QWORD *)v72 + 20) = v72 + 44;
          *((_QWORD *)v72 + 24) = v72 + 52;
          *((_QWORD *)v72 + 28) = v72 + 60;
          *((_QWORD *)v72 + 32) = v72 + 68;
          *((_QWORD *)v72 + 36) = v72 + 76;
          *((_QWORD *)v72 + 40) = v72 + 84;
          *((_QWORD *)v72 + 44) = v72 + 92;
          *((_QWORD *)v72 + 48) = v72 + 100;
          *((_QWORD *)v72 + 52) = v72 + 108;
          *((_QWORD *)v72 + 13) = 0;
          *((_BYTE *)v72 + 112) = 0;
          *((_QWORD *)v72 + 17) = 0;
          *((_BYTE *)v72 + 144) = 0;
          *((_QWORD *)v72 + 21) = 0;
          *((_BYTE *)v72 + 176) = 0;
          *((_QWORD *)v72 + 25) = 0;
          *((_BYTE *)v72 + 208) = 0;
          *((_QWORD *)v72 + 29) = 0;
          *((_BYTE *)v72 + 240) = 0;
          *((_QWORD *)v72 + 33) = 0;
          *((_BYTE *)v72 + 272) = 0;
          *((_QWORD *)v72 + 37) = 0;
          *((_BYTE *)v72 + 304) = 0;
          *((_QWORD *)v72 + 41) = 0;
          *((_BYTE *)v72 + 336) = 0;
          *((_QWORD *)v72 + 45) = 0;
          *((_BYTE *)v72 + 368) = 0;
          *((_QWORD *)v72 + 49) = 0;
          *((_BYTE *)v72 + 400) = 0;
          *((_QWORD *)v72 + 53) = 0x800000000LL;
          v74 = (char *)(v72 + 136);
          v71 = n;
          *((_QWORD *)v72 + 66) = v72 + 136;
          *((_QWORD *)v72 + 67) = 0x600000000LL;
          v75 = 6;
        }
        v230 = v72;
        v77 = (unsigned __int64)v74;
        v76 = 1;
      }
      v78 = v68;
      if ( v76 > v75 )
      {
        if ( v74 > (char *)v68 || v77 <= (unsigned __int64)v68 )
        {
          v204 = v72 + 136;
          n = sub_2237400(v72 + 132, v72 + 136, v76, 64, v71);
          sub_9EF810((__int64 *)v72 + 66, n);
          v173 = n;
          v174 = *((unsigned int **)v72 + 66);
          v175 = (unsigned int)v223;
          if ( v174 != v72 + 136 )
          {
            free(v174);
            v173 = n;
          }
          v176 = v72[134];
          v72[135] = v175;
          v78 = v68;
          *((_QWORD *)v72 + 66) = v173;
          v77 = v173 + (v176 << 6);
        }
        else
        {
          src = v72 + 136;
          n = (char *)v68 - v74;
          v204 = (_DWORD *)sub_2237400(v72 + 132, v72 + 136, v76, 64, v71);
          sub_9EF810((__int64 *)v72 + 66, (__int64)v204);
          v163 = (__int64)v204;
          v164 = *((unsigned int **)v72 + 66);
          v165 = (unsigned int)v223;
          if ( v164 != v72 + 136 )
          {
            free(v164);
            v163 = (__int64)v204;
          }
          v166 = v72[134];
          v72[135] = v165;
          *((_QWORD *)v72 + 66) = v163;
          v78 = (_DWORD *)(v163 + n);
          v77 = v163 + (v166 << 6);
        }
      }
      *(_QWORD *)v77 = *(_QWORD *)v78;
      *(_DWORD *)(v77 + 8) = v78[2];
      *(_QWORD *)(v77 + 12) = *(_QWORD *)(v78 + 3);
      *(_DWORD *)(v77 + 20) = v78[5];
      v79 = (_BYTE *)(v77 + 40);
      *(_QWORD *)(v77 + 24) = v77 + 40;
      v80 = *((_BYTE **)v78 + 3);
      v81 = *((_QWORD *)v78 + 4);
      if ( &v80[v81] && !v80 )
        goto LABEL_105;
      if ( (unsigned __int64)v81 <= 0xF )
      {
        if ( v81 == 1 )
        {
          *(_BYTE *)(v77 + 40) = *v80;
          goto LABEL_129;
        }
        if ( !v81 )
        {
LABEL_129:
          *(_QWORD *)(v77 + 32) = v81;
          v79[v81] = 0;
          v93 = v220;
          *(_BYTE *)(v77 + 56) = *((_BYTE *)v78 + 56);
          ++v72[134];
          if ( v93 != v68 + 10 )
            operator delete(v93);
          goto LABEL_131;
        }
LABEL_178:
        v204 = (_DWORD *)v77;
        n = v81;
        memcpy(v79, v80, v81);
        v77 = (unsigned __int64)v204;
        v81 = n;
        v79 = *((_BYTE **)v204 + 3);
        goto LABEL_129;
      }
      src = *((void **)v78 + 3);
      v204 = (_DWORD *)v77;
      if ( v81 >= 0 )
      {
        n = v81;
        v79 = (_BYTE *)operator new(v81 + 1);
        v77 = (unsigned __int64)v204;
        v81 = n;
        v80 = src;
        *((_QWORD *)v204 + 3) = v79;
        *((_QWORD *)v204 + 5) = n;
        goto LABEL_178;
      }
LABEL_302:
      std::__throw_length_error("basic_string::_M_create");
    }
    v10 = sub_14180A0(v104, 1u);
    v8 = *(_WORD *)(v6 + 32);
  }
  if ( v8 != 151 )
    goto LABEL_8;
  n = (size_t)&v223;
  sub_1564820(
    &v223,
    v6,
    *(unsigned int *)(v6 + 16),
    (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 56LL) + 1LL) & 0x40) == 0 ? 2020 : 2088);
  v55 = (size_t)&v223;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 56LL) + 1LL) & 0x40) == 0 )
  {
    v106 = *(_DWORD *)(v6 + 16);
    v107 = v209;
    LODWORD(v232) = 1935764579;
    v212 = 0;
    qmemcpy(v215, "class", 5);
    v211 = 0;
    v213 = v215;
    v215[16] = 0;
    v209[0] = v106;
    v209[1] = v106;
    v210 = 1;
    *((_BYTE *)v197 + 20) = 115;
    v214 = 5;
    v215[5] = 0;
    if ( v106 )
    {
      v108 = (unsigned int *)v223;
      if ( v223 )
      {
        v109 = *((unsigned int *)v223 + 134);
        v110 = *((_QWORD *)v223 + 66);
        v111 = *((unsigned int *)v223 + 135);
        v112 = v109 + 1;
        v113 = v110 + (v109 << 6);
      }
      else
      {
        v160 = v224;
        v161 = *(_DWORD *)(v224 + 14976);
        if ( v161 )
        {
          v188 = (unsigned int)(v161 - 1);
          *(_DWORD *)(v224 + 14976) = v188;
          v108 = *(unsigned int **)(v160 + 8 * v188 + 14848);
          v189 = v108[134];
          *(_BYTE *)v108 = 0;
          v190 = *((_QWORD *)v108 + 66);
          v108[106] = 0;
          v191 = v190 + (v189 << 6);
          if ( v190 != v191 )
          {
            do
            {
              while ( 1 )
              {
                v191 -= 64LL;
                v192 = *(void **)(v191 + 24);
                if ( v192 == (void *)(v191 + 40) )
                  break;
                v204 = (_DWORD *)v55;
                n = (size_t)v107;
                operator delete(v192);
                v107 = (_DWORD *)n;
                v55 = (size_t)v204;
                if ( v190 == v191 )
                  goto LABEL_293;
              }
            }
            while ( v190 != v191 );
LABEL_293:
            v190 = *((_QWORD *)v108 + 66);
          }
          v108[134] = 0;
          v111 = v108[135];
          v110 = v190;
        }
        else
        {
          v204 = &v223;
          n = (size_t)v209;
          v162 = (unsigned int *)operator new(0x3A0u);
          v111 = 6;
          v108 = v162;
          *(_BYTE *)v162 = 0;
          *((_QWORD *)v162 + 12) = v162 + 28;
          *((_QWORD *)v162 + 16) = v162 + 36;
          *((_QWORD *)v162 + 20) = v162 + 44;
          *((_QWORD *)v162 + 24) = v162 + 52;
          *((_QWORD *)v162 + 28) = v162 + 60;
          *((_QWORD *)v162 + 32) = v162 + 68;
          *((_QWORD *)v162 + 36) = v162 + 76;
          *((_QWORD *)v162 + 40) = v162 + 84;
          *((_QWORD *)v162 + 44) = v162 + 92;
          *((_QWORD *)v162 + 48) = v162 + 100;
          *((_QWORD *)v162 + 52) = v162 + 108;
          *((_QWORD *)v162 + 13) = 0;
          *((_BYTE *)v162 + 112) = 0;
          *((_QWORD *)v162 + 17) = 0;
          *((_BYTE *)v162 + 144) = 0;
          *((_QWORD *)v162 + 21) = 0;
          *((_BYTE *)v162 + 176) = 0;
          *((_QWORD *)v162 + 25) = 0;
          *((_BYTE *)v162 + 208) = 0;
          *((_QWORD *)v162 + 29) = 0;
          *((_BYTE *)v162 + 240) = 0;
          *((_QWORD *)v162 + 33) = 0;
          *((_BYTE *)v162 + 272) = 0;
          *((_QWORD *)v162 + 37) = 0;
          *((_BYTE *)v162 + 304) = 0;
          *((_QWORD *)v162 + 41) = 0;
          *((_BYTE *)v162 + 336) = 0;
          *((_QWORD *)v162 + 45) = 0;
          *((_BYTE *)v162 + 368) = 0;
          *((_QWORD *)v162 + 49) = 0;
          *((_BYTE *)v162 + 400) = 0;
          *((_QWORD *)v162 + 53) = 0x800000000LL;
          v110 = (unsigned __int64)(v162 + 136);
          v107 = (_DWORD *)n;
          *((_QWORD *)v108 + 66) = v110;
          v55 = (size_t)v204;
          *((_QWORD *)v108 + 67) = 0x600000000LL;
        }
        v223 = v108;
        v113 = v110;
        v112 = 1;
      }
      v114 = (size_t)v107;
      if ( v112 > v111 )
      {
        if ( v110 > (unsigned __int64)v107 || v113 <= (unsigned __int64)v107 )
        {
          src = (void *)v55;
          v204 = v107;
          n = (size_t)(v108 + 136);
          v193 = sub_2237400(v108 + 132, v108 + 136, v112, 64, v197);
          sub_9EF810((__int64 *)v108 + 66, v193);
          v107 = v204;
          v194 = *((unsigned int **)v108 + 66);
          v195 = (unsigned int)v230;
          v55 = (size_t)src;
          if ( v194 == v108 + 136 )
          {
            v196 = v108[134];
            *((_QWORD *)v108 + 66) = v193;
            v108[135] = v195;
            v114 = (size_t)v107;
          }
          else
          {
            v204 = src;
            n = (size_t)v107;
            free(v194);
            v196 = v108[134];
            v107 = (_DWORD *)n;
            *((_QWORD *)v108 + 66) = v193;
            v108[135] = v195;
            v55 = (size_t)v204;
            v114 = n;
          }
          v113 = (v196 << 6) + v193;
        }
        else
        {
          v206 = (void *)v55;
          v177 = (char *)v107 - v110;
          src = v107;
          v204 = v108 + 136;
          n = sub_2237400(v108 + 132, v108 + 136, v112, 64, v197);
          sub_9EF810((__int64 *)v108 + 66, n);
          v178 = n;
          v179 = *((unsigned int **)v108 + 66);
          v180 = (unsigned int)v230;
          v107 = src;
          v55 = (size_t)v206;
          if ( v179 == v108 + 136 )
          {
            *((_QWORD *)v108 + 66) = n;
            v108[135] = v180;
          }
          else
          {
            src = v206;
            v204 = v107;
            free(v179);
            v178 = n;
            v107 = v204;
            v108[135] = v180;
            v55 = (size_t)src;
            *((_QWORD *)v108 + 66) = n;
          }
          v114 = (size_t)&v177[v178];
          v113 = v178 + ((unsigned __int64)v108[134] << 6);
        }
      }
      *(_QWORD *)v113 = *(_QWORD *)v114;
      *(_DWORD *)(v113 + 8) = *(_DWORD *)(v114 + 8);
      *(_QWORD *)(v113 + 12) = *(_QWORD *)(v114 + 12);
      *(_DWORD *)(v113 + 20) = *(_DWORD *)(v114 + 20);
      v115 = (_BYTE *)(v113 + 40);
      *(_QWORD *)(v113 + 24) = v113 + 40;
      v116 = *(_BYTE **)(v114 + 24);
      v117 = *(_QWORD *)(v114 + 32);
      if ( &v116[v117] && !v116 )
LABEL_105:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v117 > 0xF )
      {
        if ( v117 < 0 )
          goto LABEL_302;
        v206 = (void *)v55;
        src = v107;
        v204 = v116;
        n = v117;
        v115 = (_BYTE *)operator new(v117 + 1);
        v117 = n;
        v116 = v204;
        v107 = src;
        v55 = (size_t)v206;
        *(_QWORD *)(v113 + 24) = v115;
        *(_QWORD *)(v113 + 40) = n;
      }
      else
      {
        if ( v117 == 1 )
        {
          *(_BYTE *)(v113 + 40) = *v116;
          goto LABEL_172;
        }
        if ( !v117 )
        {
LABEL_172:
          *(_QWORD *)(v113 + 32) = v117;
          v115[v117] = 0;
          v118 = v213;
          *(_BYTE *)(v113 + 56) = *(_BYTE *)(v114 + 56);
          ++v108[134];
          if ( v118 != v107 + 10 )
          {
            n = v55;
            operator delete(v118);
            v55 = n;
          }
          goto LABEL_74;
        }
      }
      src = (void *)v55;
      v204 = v107;
      n = v117;
      memcpy(v115, v116, v117);
      v115 = *(_BYTE **)(v113 + 24);
      v55 = (size_t)src;
      v107 = v204;
      v117 = n;
      goto LABEL_172;
    }
  }
LABEL_74:
  if ( (_BYTE)v229 )
  {
    n = v55;
    sub_FC7790(v225, (__int64 *)v55, SBYTE1(v229));
    v55 = n;
    v225 = 0;
    LOWORD(v229) = 0;
  }
  if ( v226[1] != (void *)(v55 + 48) )
    operator delete(v226[1]);
  v56 = (void **)v223;
  if ( v223 )
  {
    v57 = v224;
    if ( v224 )
    {
      if ( (unsigned __int64)v223 >= v224 && (unsigned __int64)v223 <= v224 + 14848 )
      {
        v131 = *(unsigned int *)(v224 + 14976);
        *(_DWORD *)(v224 + 14976) = v131 + 1;
        *(_QWORD *)(v57 + 8 * v131 + 14848) = v56;
      }
      else
      {
        v58 = *((void ***)v223 + 66);
        v59 = &v58[8 * (unsigned __int64)*((unsigned int *)v223 + 134)];
        if ( v58 != v59 )
        {
          do
          {
            while ( 1 )
            {
              v59 -= 8;
              v60 = (void **)v59[3];
              if ( v60 == v59 + 5 )
                break;
              operator delete(v60);
              if ( v58 == v59 )
                goto LABEL_85;
            }
          }
          while ( v58 != v59 );
LABEL_85:
          v59 = (void **)v56[66];
        }
        if ( v59 != v56 + 68 )
          free(v59);
        v61 = (void **)v56[52];
        if ( v61 != v56 + 54 )
          free(v61);
        v62 = v56 + 48;
        v63 = v56 + 8;
        do
        {
          while ( *v62 != v62 + 2 )
          {
            operator delete(*v62);
            v62 -= 4;
            if ( v63 == v62 )
              goto LABEL_93;
          }
          v62 -= 4;
        }
        while ( v63 != v62 );
LABEL_93:
        operator delete(v56, 0x3A0u);
      }
    }
  }
  LODWORD(n) = 1;
LABEL_30:
  v26 = *(_DWORD *)(v6 + 16);
  if ( v9 )
  {
    *(_DWORD *)(v6 + 40) = v26;
    v27 = 0;
    sub_14634E0(*(__int64 **)(v6 + 8), v5);
    v28 = *(_WORD *)(v6 + 32);
    v26 = *(_DWORD *)(v6 + 16);
    if ( v28 == 27 )
      goto LABEL_32;
LABEL_57:
    if ( v28 == 5 )
      goto LABEL_53;
LABEL_58:
    if ( (v28 & 0xFFFD) != 0x40 && (unsigned __int16)(v28 - 52) > 1u )
    {
      sub_1564820(v197, v6, v26, 14);
      v82 = (unsigned __int8 *)v230;
      if ( !v230 )
      {
        v129 = v231;
        v130 = *(_DWORD *)(v231 + 14976);
        if ( v130 )
        {
          v153 = (unsigned int)(v130 - 1);
          *(_DWORD *)(v231 + 14976) = v153;
          v82 = *(unsigned __int8 **)(v129 + 8 * v153 + 14848);
          v154 = *((unsigned int *)v82 + 134);
          *v82 = 0;
          v155 = *((_QWORD *)v82 + 66);
          *((_DWORD *)v82 + 106) = 0;
          v156 = v155 + (v154 << 6);
          while ( v155 != v156 )
          {
            while ( 1 )
            {
              v156 -= 64;
              v157 = *(void **)(v156 + 24);
              if ( v157 == (void *)(v156 + 40) )
                break;
              operator delete(v157);
              if ( v155 == v156 )
                goto LABEL_252;
            }
          }
LABEL_252:
          *((_DWORD *)v82 + 134) = 0;
        }
        else
        {
          v82 = (unsigned __int8 *)operator new(0x3A0u);
          *v82 = 0;
          *((_QWORD *)v82 + 12) = v82 + 112;
          *((_QWORD *)v82 + 16) = v82 + 144;
          *((_QWORD *)v82 + 20) = v82 + 176;
          *((_QWORD *)v82 + 24) = v82 + 208;
          *((_QWORD *)v82 + 28) = v82 + 240;
          *((_QWORD *)v82 + 32) = v82 + 272;
          *((_QWORD *)v82 + 36) = v82 + 304;
          *((_QWORD *)v82 + 40) = v82 + 336;
          *((_QWORD *)v82 + 44) = v82 + 368;
          *((_QWORD *)v82 + 48) = v82 + 400;
          *((_QWORD *)v82 + 52) = v82 + 432;
          *((_QWORD *)v82 + 13) = 0;
          v82[112] = 0;
          *((_QWORD *)v82 + 17) = 0;
          v82[144] = 0;
          *((_QWORD *)v82 + 21) = 0;
          v82[176] = 0;
          *((_QWORD *)v82 + 25) = 0;
          v82[208] = 0;
          *((_QWORD *)v82 + 29) = 0;
          v82[240] = 0;
          *((_QWORD *)v82 + 33) = 0;
          v82[272] = 0;
          *((_QWORD *)v82 + 37) = 0;
          v82[304] = 0;
          *((_QWORD *)v82 + 41) = 0;
          v82[336] = 0;
          *((_QWORD *)v82 + 45) = 0;
          v82[368] = 0;
          *((_QWORD *)v82 + 49) = 0;
          v82[400] = 0;
          *((_QWORD *)v82 + 53) = 0x800000000LL;
          *((_QWORD *)v82 + 66) = v82 + 544;
          *((_QWORD *)v82 + 67) = 0x600000000LL;
        }
        v230 = v82;
      }
      v82[*v82 + 1] = 4;
      v83 = v230;
      v84 = *(unsigned __int8 *)v230;
      *(_BYTE *)v230 = v84 + 1;
      v83[v84 + 2] = 5;
      if ( (_BYTE)v236 )
      {
        sub_FC7790(v232, v197, SBYTE1(v236));
        v232 = 0;
        LOWORD(v236) = 0;
      }
      if ( v233 != v197 + 6 )
        operator delete(v233);
      v85 = (void **)v230;
      if ( !v230 )
        goto LABEL_72;
      v86 = v231;
      if ( !v231 )
        goto LABEL_72;
      if ( (unsigned __int64)v230 < v231 || (unsigned __int64)v230 > v231 + 14848 )
      {
        v87 = *((void ***)v230 + 66);
        v88 = &v87[8 * (unsigned __int64)*((unsigned int *)v230 + 134)];
        if ( v87 != v88 )
        {
          do
          {
            while ( 1 )
            {
              v88 -= 8;
              v89 = (void **)v88[3];
              if ( v89 == v88 + 5 )
                break;
              operator delete(v89);
              if ( v87 == v88 )
                goto LABEL_117;
            }
          }
          while ( v87 != v88 );
LABEL_117:
          v88 = (void **)v85[66];
        }
        if ( v88 != v85 + 68 )
          free(v88);
        v90 = (void **)v85[52];
        if ( v90 != v85 + 54 )
          free(v90);
        v91 = v85 + 48;
        v92 = v85 + 8;
        do
        {
          while ( *v91 != v91 + 2 )
          {
            operator delete(*v91);
            v91 -= 4;
            if ( v91 == v92 )
              goto LABEL_125;
          }
          v91 -= 4;
        }
        while ( v91 != v92 );
LABEL_125:
        v50 = 0;
        operator delete(v85, 0x3A0u);
      }
      else
      {
        v122 = *(unsigned int *)(v231 + 14976);
        v50 = 0;
        *(_DWORD *)(v231 + 14976) = v122 + 1;
        *(_QWORD *)(v86 + 8 * v122 + 14848) = v85;
      }
      goto LABEL_65;
    }
    v39 = 0;
    if ( v28 == 27 )
      goto LABEL_54;
    goto LABEL_61;
  }
LABEL_56:
  v28 = *(_WORD *)(v6 + 32);
  v27 = 0;
  if ( v28 != 27 )
    goto LABEL_57;
LABEL_32:
  *(_DWORD *)(v6 + 40) = v26;
  sub_14634E0(*(__int64 **)(v6 + 8), v5);
  v27 = *(_DWORD *)(v6 + 40);
  v29 = v197;
  sub_1564820(v197, v6, v27, (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 56LL) + 1LL) & 0x10) == 0 ? 96 : 135);
  if ( (_BYTE)v236 )
  {
    sub_FC7790(v232, v29, SBYTE1(v236));
    v232 = 0;
    LOWORD(v236) = 0;
  }
  if ( v233 != v197 + 6 )
    operator delete(v233);
  v30 = (void **)v230;
  if ( v230 )
  {
    v31 = v231;
    if ( v231 )
    {
      if ( (unsigned __int64)v230 >= v231 && (unsigned __int64)v230 <= v231 + 14848 )
      {
        v152 = *(unsigned int *)(v231 + 14976);
        *(_DWORD *)(v231 + 14976) = v152 + 1;
        *(_QWORD *)(v31 + 8 * v152 + 14848) = v30;
      }
      else
      {
        v32 = *((void ***)v230 + 66);
        v33 = &v32[8 * (unsigned __int64)*((unsigned int *)v230 + 134)];
        if ( v32 != v33 )
        {
          do
          {
            while ( 1 )
            {
              v33 -= 8;
              v34 = (void **)v33[3];
              if ( v34 == v33 + 5 )
                break;
              operator delete(v34);
              if ( v32 == v33 )
                goto LABEL_43;
            }
          }
          while ( v32 != v33 );
LABEL_43:
          v33 = (void **)v30[66];
        }
        if ( v33 != v30 + 68 )
          free(v33);
        v35 = (void **)v30[52];
        if ( v35 != v30 + 54 )
          free(v35);
        v36 = v30 + 48;
        v37 = v30 + 8;
        do
        {
          while ( *v36 != v36 + 2 )
          {
            operator delete(*v36);
            v36 -= 4;
            if ( v37 == v36 )
              goto LABEL_51;
          }
          v36 -= 4;
        }
        while ( v36 != v37 );
LABEL_51:
        operator delete(v30, 0x3A0u);
      }
    }
  }
  v28 = *(_WORD *)(v6 + 32);
  v26 = *(_DWORD *)(v6 + 16);
  if ( v28 != 5 )
    goto LABEL_58;
LABEL_53:
  v38 = *(__int64 **)(v6 + 8);
  v39 = *(_QWORD *)(v6 + 24);
  *(_DWORD *)(v6 + 40) = v26;
  sub_14634E0(v38, v5);
  if ( *(_WORD *)(v6 + 32) == 27 )
  {
LABEL_54:
    v40 = *(__int64 **)(v6 + 8);
    *(_DWORD *)(v6 + 40) = *(_DWORD *)(v6 + 16);
    sub_14634E0(v40, v5);
    v41 = v27 != 0;
    v27 = *(_DWORD *)(v6 + 40);
    sub_154FF40(v6, v27, v26, v41, 1u);
  }
LABEL_61:
  v43 = 0;
  v44 = sub_1CB4650(
          *(_QWORD *)(v6 + 96),
          v201,
          0,
          v198,
          v207,
          v208,
          (__int64)ptr,
          (unsigned int)v238,
          v200 & 0xFFFFFFFFFFFFFFFELL);
  LODWORD(v223) = 0;
  v200 = v44;
  v224 = 0;
  v225 = 0;
  *(_OWORD *)v226 = 0;
  v227 = 0;
  v228 = 0u;
  v229 = 0;
  if ( *(_WORD *)(v6 + 32) == 64 )
  {
    v101 = *(__int64 **)(v6 + 8);
    *(_DWORD *)(v6 + 40) = *(_DWORD *)(v6 + 16);
    sub_14634E0(v101, v5);
    v102 = v197;
    v43 = *(_DWORD *)(v6 + 40);
    sub_154E6D0((__int64)v197, (const __m128i *)v6);
    v204 = &v223;
    LODWORD(v223) = (_DWORD)v230;
    v224 = v231;
    v225 = v232;
    sub_E907B0((__int64)v226, (__int64)(v102 + 3));
    v47 = (void **)v204;
    v103 = _mm_load_si128(&v235);
    v229 = v236;
    v228 = v103;
    if ( v234 )
    {
      free(v233);
      v47 = (void **)v204;
    }
    v45 = v224;
    if ( v224 )
    {
      v46 = (int)v223;
    }
    else
    {
      v134 = v197;
      v204 = v47;
      sub_1564820(v197, v6, *(unsigned int *)(v6 + 16), 1586);
      v135 = v204;
      if ( (_BYTE)v236 )
      {
        sub_FC7790(v232, v134, SBYTE1(v236));
        v135 = v204;
        v232 = 0;
        LOWORD(v236) = 0;
      }
      if ( v233 != v197 + 6 )
      {
        v204 = v135;
        operator delete(v233);
        v135 = v204;
      }
      v136 = (char *)v230;
      if ( v230 )
      {
        v137 = v231;
        if ( v231 )
        {
          if ( (unsigned __int64)v230 < v231 || (unsigned __int64)v230 > v231 + 14848 )
          {
            v138 = *((_QWORD *)v230 + 66);
            v139 = v138 + ((unsigned __int64)*((unsigned int *)v230 + 134) << 6);
            if ( v138 != v139 )
            {
              LODWORD(src) = v43;
              v140 = v27;
              v141 = (char *)v230;
              v206 = (void *)v6;
              v142 = v138;
              do
              {
                while ( 1 )
                {
                  v139 -= 64;
                  v143 = *(void **)(v139 + 24);
                  if ( v143 == (void *)(v139 + 40) )
                    break;
                  v204 = v135;
                  operator delete(v143);
                  v135 = v204;
                  if ( v142 == v139 )
                    goto LABEL_231;
                }
              }
              while ( v142 != v139 );
LABEL_231:
              v136 = v141;
              v6 = (size_t)v206;
              v27 = v140;
              v43 = (int)src;
            }
            v144 = *((char **)v136 + 66);
            if ( v144 != v136 + 544 )
            {
              src = v135;
              v204 = v136;
              free(v144);
              v135 = src;
              v136 = (char *)v204;
            }
            v145 = *((char **)v136 + 52);
            if ( v145 != v136 + 432 )
            {
              src = v135;
              v204 = v136;
              free(v145);
              v135 = src;
              v136 = (char *)v204;
            }
            LODWORD(src) = v43;
            v146 = (void **)(v136 + 384);
            v147 = v27;
            v206 = (void *)v6;
            v148 = v136;
            v149 = (void **)(v136 + 64);
            do
            {
              while ( 1 )
              {
                v150 = *v146;
                if ( *v146 == v146 + 2 )
                  break;
                v146 -= 4;
                v204 = v135;
                operator delete(v150);
                v135 = v204;
                if ( v149 == v146 )
                  goto LABEL_239;
              }
              v146 -= 4;
            }
            while ( v146 != v149 );
LABEL_239:
            v151 = v148;
            v204 = v135;
            v27 = v147;
            v43 = (int)src;
            v6 = (size_t)v206;
            operator delete(v151, 0x3A0u);
            v135 = v204;
          }
          else
          {
            v187 = *(unsigned int *)(v231 + 14976);
            *(_DWORD *)(v231 + 14976) = v187 + 1;
            *(_QWORD *)(v137 + 8 * v187 + 14848) = v136;
          }
        }
      }
      WORD2(v230) = 53;
      v204 = v135;
      LODWORD(v230) = 3407938;
      sub_15680D0(v6, v197, 3, 3);
      v46 = (int)v223;
      v47 = (void **)v204;
      v45 = v224;
    }
  }
  else
  {
    v45 = 0;
    v46 = 0;
    v47 = &v223;
  }
  v231 = v45;
  LODWORD(v230) = v46;
  v48 = *(_QWORD *)(v6 + 96);
  v232 = v225;
  sub_E90750((__int64)(v197 + 3), (__int64 *)v47 + 3);
  v49 = _mm_load_si128(&v228);
  v236 = v229;
  v235 = v49;
  v50 = sub_1CCC450(
          v48,
          *(_QWORD *)(*(_QWORD *)(v6 + 96) + 608LL),
          v198,
          v200,
          n,
          v27,
          v39,
          v26,
          v201,
          v202,
          v43,
          (__int64)v197);
  if ( v234 )
  {
    free(v233);
    if ( !HIDWORD(v227) )
      goto LABEL_65;
  }
  else if ( !HIDWORD(v227) )
  {
    goto LABEL_65;
  }
  free(v226[1]);
LABEL_65:
  if ( ptr != p_ptr + 2 )
    free(ptr);
  return v50;
}
