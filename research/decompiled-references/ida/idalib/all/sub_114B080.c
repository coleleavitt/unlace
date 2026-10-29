const char *__fastcall sub_114B080(__int64 *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r13
  void **v4; // rbx
  int v5; // eax
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r12
  _QWORD *v9; // r14
  _QWORD **v10; // rbp
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  const char ****v13; // r14
  const char ****v14; // r15
  char v15; // al
  unsigned __int64 v16; // rax
  char *v17; // rcx
  void **v18; // r15
  void **v19; // rbp
  void **v20; // r12
  void *v21; // rbx
  void **v22; // r14
  __int64 v23; // rsi
  const char *result; // rax
  __int64 v25; // rax
  void *v26; // rax
  const char ***v27; // r12
  const char ***v28; // rax
  const char **v29; // rax
  const char *v30; // r15
  size_t v31; // rax
  size_t v32; // r14
  unsigned __int8 *v33; // r12
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rax
  void **v38; // r15
  _BYTE *v39; // rdi
  __int64 v40; // rax
  void **v41; // r14
  unsigned __int64 v42; // rax
  void **v43; // r12
  void **v44; // r15
  void **v45; // rdi
  void **v46; // rdi
  void **v47; // r12
  void **v48; // r15
  unsigned __int64 v49; // rdx
  int v50; // eax
  void **v51; // rbx
  void **v52; // r12
  void *v53; // rbp
  void **v54; // rdx
  void *v55; // r14
  _BYTE *v56; // rax
  void **v57; // r15
  unsigned int *v58; // rbx
  void **v59; // r13
  __int64 v60; // rsi
  void *v61; // rbx
  const char *v62; // r15
  size_t v63; // r13
  void **v64; // r12
  _BYTE *v65; // rsi
  __int64 v66; // rcx
  unsigned __int8 *v67; // rbp
  _QWORD *v68; // rax
  _QWORD *v69; // rdx
  __int64 v70; // r8
  __int64 v71; // rax
  void **v72; // rcx
  _BYTE *v73; // rdi
  __int64 v74; // rax
  char *v75; // rbp
  unsigned __int8 *v76; // rax
  _BYTE *v77; // rsi
  __int64 v78; // r8
  char *v79; // rcx
  _QWORD *v80; // rax
  _QWORD *v81; // rdx
  __int64 v82; // r9
  __int64 v83; // rax
  char *v84; // r8
  _BYTE *v85; // rdi
  __int64 v86; // rax
  unsigned __int8 *v87; // rax
  char *v88; // rcx
  _QWORD *v89; // rdx
  __int64 v90; // r9
  __int64 v91; // rax
  void **v92; // r8
  _BYTE *v93; // rdi
  __int64 v94; // rax
  void **v95; // rbp
  unsigned __int64 v96; // rax
  void **v97; // rdx
  void **v98; // r12
  void **v99; // rbx
  void **v100; // rdi
  void **v101; // rdi
  void **v102; // r12
  unsigned int v103; // eax
  unsigned __int8 *v104; // r12
  _BYTE *v105; // rsi
  __int64 v106; // rcx
  _QWORD *v107; // rax
  _QWORD *v108; // rdx
  __int64 v109; // r8
  __int64 v110; // rax
  void **v111; // rcx
  _BYTE *v112; // rdi
  __int64 v113; // rax
  unsigned __int8 *v114; // rbx
  _BYTE *v115; // rsi
  signed __int64 v116; // r14
  _QWORD *v117; // rax
  _QWORD *v118; // rdx
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rax
  void **v122; // r14
  _BYTE *v123; // rdi
  __int64 v124; // rax
  unsigned __int8 *v125; // rbx
  void *v126; // rcx
  _QWORD *v127; // rdx
  __int64 v128; // rax
  __int64 *v129; // rdi
  void **v130; // rbp
  _QWORD *v131; // rax
  void **v132; // r12
  void **v133; // rbx
  void **v134; // rdi
  void **v135; // rdi
  void **v136; // rbx
  void **v137; // r12
  unsigned int v138; // eax
  __int64 v139; // rdx
  size_t v140; // rdx
  size_t v141; // rdx
  size_t v142; // rdx
  __int64 v143; // rdx
  size_t v144; // rdx
  size_t v145; // rdx
  size_t v146; // rdx
  __int64 v147; // rdx
  unsigned __int64 v148; // rdx
  int v149; // eax
  unsigned __int64 v150; // rdx
  int v151; // eax
  unsigned __int64 v152; // rdx
  int v153; // eax
  _QWORD *v154; // rdx
  int v155; // eax
  _QWORD *v156; // rdx
  int v157; // eax
  _QWORD *v158; // rdx
  int v159; // eax
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rsi
  __int64 v163; // rdx
  __int64 v164; // rbx
  unsigned __int8 *v165; // r12
  void *v166; // rdi
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rax
  __int64 v171; // r14
  __int64 v172; // rbp
  __int64 v173; // rbx
  void *v174; // rdi
  __int64 v175; // rax
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // rdx
  __int64 v179; // r14
  __int64 v180; // rbx
  __int64 v181; // rbp
  void *v182; // rdi
  __int64 v183; // rdx
  __int64 v184; // rax
  __int64 v185; // r14
  __int64 v186; // rdx
  __int64 v187; // r14
  void *v188; // rbp
  unsigned __int8 *v189; // r12
  __int64 v190; // rbx
  void *v191; // rdi
  __int64 v192; // rax
  __int64 v193; // rax
  __int64 v194; // rdx
  __int64 v195; // rax
  __int64 v196; // r14
  __int64 v197; // rbx
  __int64 v198; // rbp
  void *v199; // rdi
  __int64 v200; // rax
  __int64 v201; // rax
  __int64 v202; // rdx
  __int64 v203; // rax
  __int64 v204; // rbx
  __int64 v205; // rbp
  void *v206; // rdi
  __int64 v207; // rax
  __int64 v208; // rdx
  __int64 v209; // rcx
  __int64 v210; // rdx
  __int64 v211; // rbx
  unsigned __int8 *v212; // r13
  _QWORD **v213; // r12
  __int64 v214; // rbp
  void *v215; // rdi
  char v216; // [rsp+8h] [rbp-2C0h]
  void *v217; // [rsp+8h] [rbp-2C0h]
  void *v218; // [rsp+8h] [rbp-2C0h]
  void **v219; // [rsp+8h] [rbp-2C0h]
  _BYTE *v220; // [rsp+8h] [rbp-2C0h]
  _BYTE *v221; // [rsp+8h] [rbp-2C0h]
  void *v222; // [rsp+8h] [rbp-2C0h]
  unsigned __int8 *v223; // [rsp+8h] [rbp-2C0h]
  const char ***v224; // [rsp+10h] [rbp-2B8h]
  void *v225; // [rsp+10h] [rbp-2B8h]
  void *v226; // [rsp+10h] [rbp-2B8h]
  size_t v227; // [rsp+18h] [rbp-2B0h]
  void *v228; // [rsp+18h] [rbp-2B0h]
  void **v229; // [rsp+18h] [rbp-2B0h]
  void *v230; // [rsp+18h] [rbp-2B0h]
  int v231; // [rsp+20h] [rbp-2A8h]
  __int64 v232; // [rsp+20h] [rbp-2A8h]
  __int64 v233; // [rsp+20h] [rbp-2A8h]
  __int64 v234; // [rsp+20h] [rbp-2A8h]
  __int64 v235; // [rsp+20h] [rbp-2A8h]
  void **v236; // [rsp+20h] [rbp-2A8h]
  char *v237; // [rsp+20h] [rbp-2A8h]
  void **v238; // [rsp+20h] [rbp-2A8h]
  _BYTE *v239; // [rsp+20h] [rbp-2A8h]
  _BYTE *v240; // [rsp+20h] [rbp-2A8h]
  void *v241; // [rsp+20h] [rbp-2A8h]
  void *v242; // [rsp+20h] [rbp-2A8h]
  unsigned __int8 *v243; // [rsp+20h] [rbp-2A8h]
  void **v244; // [rsp+28h] [rbp-2A0h] BYREF
  void *src; // [rsp+30h] [rbp-298h]
  __int64 *v246; // [rsp+38h] [rbp-290h]
  void *s2; // [rsp+40h] [rbp-288h]
  void **v248; // [rsp+48h] [rbp-280h]
  void **v249; // [rsp+50h] [rbp-278h]
  char v250; // [rsp+5Bh] [rbp-26Dh]
  int v251; // [rsp+5Ch] [rbp-26Ch]
  void *v252; // [rsp+60h] [rbp-268h] BYREF
  size_t n; // [rsp+68h] [rbp-260h]
  __int64 v254; // [rsp+70h] [rbp-258h] BYREF
  void *v255; // [rsp+80h] [rbp-248h] BYREF
  size_t v256; // [rsp+88h] [rbp-240h]
  void *v257; // [rsp+A0h] [rbp-228h] BYREF
  size_t v258; // [rsp+A8h] [rbp-220h]
  __int64 v259; // [rsp+B0h] [rbp-218h] BYREF
  void *v260[2]; // [rsp+C0h] [rbp-208h] BYREF
  __int64 v261; // [rsp+D0h] [rbp-1F8h] BYREF
  void *v262; // [rsp+E0h] [rbp-1E8h] BYREF
  size_t v263; // [rsp+E8h] [rbp-1E0h]
  _QWORD v264[2]; // [rsp+F0h] [rbp-1D8h] BYREF
  void *v265; // [rsp+100h] [rbp-1C8h] BYREF
  size_t v266; // [rsp+108h] [rbp-1C0h]
  _QWORD v267[2]; // [rsp+110h] [rbp-1B8h] BYREF
  void *v268; // [rsp+120h] [rbp-1A8h] BYREF
  size_t v269; // [rsp+128h] [rbp-1A0h]
  _QWORD v270[2]; // [rsp+130h] [rbp-198h] BYREF
  void *v271; // [rsp+140h] [rbp-188h]
  size_t v272; // [rsp+148h] [rbp-180h]
  _QWORD v273[2]; // [rsp+150h] [rbp-178h] BYREF
  void *v274; // [rsp+160h] [rbp-168h]
  size_t v275; // [rsp+168h] [rbp-160h]
  _QWORD v276[2]; // [rsp+170h] [rbp-158h] BYREF
  void *v277; // [rsp+180h] [rbp-148h]
  size_t v278; // [rsp+188h] [rbp-140h]
  _QWORD v279[2]; // [rsp+190h] [rbp-138h] BYREF
  void *v280; // [rsp+1A0h] [rbp-128h] BYREF
  unsigned __int64 v281; // [rsp+1A8h] [rbp-120h]
  __int64 v282; // [rsp+1B0h] [rbp-118h]
  void *v283; // [rsp+1C0h] [rbp-108h]
  __int64 v284; // [rsp+1D0h] [rbp-F8h] BYREF
  __int16 v285; // [rsp+1E0h] [rbp-E8h]
  void *v286; // [rsp+1F0h] [rbp-D8h] BYREF
  unsigned __int64 v287; // [rsp+1F8h] [rbp-D0h]
  __int64 v288; // [rsp+200h] [rbp-C8h]
  void *v289; // [rsp+210h] [rbp-B8h]
  __int16 v290; // [rsp+230h] [rbp-98h]
  void *v291[2]; // [rsp+240h] [rbp-88h] BYREF
  __int64 v292; // [rsp+250h] [rbp-78h]
  int v293; // [rsp+258h] [rbp-70h]
  void *v294; // [rsp+260h] [rbp-68h]
  __int64 v295; // [rsp+270h] [rbp-58h] BYREF
  __int16 v296; // [rsp+280h] [rbp-48h]

  v3 = a3;
  v4 = (void **)a2;
  v5 = a3[8];
  v246 = a1;
  v231 = v5;
  LODWORD(v291[0]) = 2222;
  v6 = sub_21B6DA0(a2, v291, 1);
  v7 = *(_QWORD *)(a2 + 8);
  v8 = (_QWORD *)(v7 + 8LL * (unsigned int)v6);
  v9 = (_QWORD *)(v7 + 8 * HIDWORD(v6));
  if ( v8 == v9 )
    goto LABEL_5;
  while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 2222) )
  {
    if ( v9 == ++v8 )
      goto LABEL_5;
  }
  if ( v8 == v9 )
  {
LABEL_5:
    v227 = 0;
    v10 = nullptr;
    s2 = nullptr;
  }
  else
  {
    do
    {
      v10 = (_QWORD **)*v8;
      v25 = *(_QWORD *)(*v8 + 16LL);
      if ( !v25 )
        v25 = *v8;
      ++v8;
      *(_BYTE *)(v25 + 44) |= 1u;
      if ( v8 == v9 )
        break;
      while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 2222) )
      {
        if ( v9 == ++v8 )
          goto LABEL_28;
      }
    }
    while ( v9 != v8 );
LABEL_28:
    v227 = 0;
    v26 = (void *)*v10[6];
    s2 = v26;
    if ( v26 )
      v227 = strlen((const char *)v26);
  }
  LODWORD(v291[0]) = 2382;
  v11 = sub_21B6DA0(a2, v291, 1);
  v12 = *(_QWORD *)(a2 + 8);
  v13 = (const char ****)(v12 + 8LL * (unsigned int)v11);
  v14 = (const char ****)(v12 + 8 * HIDWORD(v11));
  if ( v13 != v14 )
  {
    while ( 1 )
    {
      if ( *v13 )
      {
        v15 = sub_21B9810(*v13, 2382);
        if ( v15 )
          break;
      }
      if ( v14 == ++v13 )
        goto LABEL_10;
    }
    v216 = v15;
    if ( v14 != v13 )
    {
      do
      {
        v27 = *v13;
        v28 = (const char ***)(*v13)[2];
        if ( !v28 )
          v28 = *v13;
        ++v13;
        *((_BYTE *)v28 + 44) |= 1u;
        if ( v13 == v14 )
          break;
        while ( !*v13 || !(unsigned __int8)sub_21B9810(*v13, 2382) )
        {
          if ( v14 == ++v13 )
            goto LABEL_39;
        }
      }
      while ( v14 != v13 );
LABEL_39:
      v29 = v27[6];
      v224 = v27;
      v30 = *v29;
      if ( !*v29 )
      {
        v32 = 0;
        goto LABEL_50;
      }
      v31 = strlen(*v29);
      v32 = v31;
      switch ( v31 )
      {
        case 2uLL:
          if ( *(_WORD *)v30 == 13366 )
          {
            LOBYTE(v248) = 0;
            v251 = 64;
            v250 = v216;
            LOBYTE(v249) = v216;
            goto LABEL_12;
          }
          if ( *(_WORD *)v30 == 12851 )
          {
            v250 = 0;
            v251 = 32;
            LOBYTE(v248) = v216;
            LOBYTE(v249) = v216;
            goto LABEL_12;
          }
LABEL_50:
          sub_FC70B0((__int64)&v280, *v246, 0, 405);
          v33 = (unsigned __int8 *)v280;
          if ( v280 )
            goto LABEL_51;
          goto LABEL_85;
        case 1uLL:
          if ( *v30 != 48 )
            goto LABEL_50;
          break;
        case 4uLL:
          if ( *(_DWORD *)v30 != 1701736302 )
          {
            sub_FC70B0((__int64)&v280, *v246, 0, 405);
            if ( v280 )
            {
              *((_BYTE *)v280 + *(unsigned __int8 *)v280 + 1) = 0;
              v34 = v264;
              v262 = v264;
              goto LABEL_296;
            }
LABEL_85:
            v49 = v281;
            v50 = *(_DWORD *)(v281 + 14976);
            if ( v50 )
            {
              v207 = (unsigned int)(v50 - 1);
              *(_DWORD *)(v281 + 14976) = v207;
              v33 = *(unsigned __int8 **)(v49 + 8 * v207 + 14848);
              v208 = *((unsigned int *)v33 + 134);
              v209 = *((_QWORD *)v33 + 66);
              *v33 = 0;
              *((_DWORD *)v33 + 106) = 0;
              v210 = v209 + (v208 << 6);
              if ( v209 != v210 )
              {
                v244 = (void **)a2;
                v211 = v210;
                src = v3;
                v212 = v33;
                v213 = v10;
                v214 = v209;
                do
                {
                  while ( 1 )
                  {
                    v211 -= 64;
                    v215 = *(void **)(v211 + 24);
                    if ( v215 == (void *)(v211 + 40) )
                      break;
                    operator delete(v215);
                    if ( v214 == v211 )
                      goto LABEL_398;
                  }
                }
                while ( v214 != v211 );
LABEL_398:
                v10 = v213;
                v4 = v244;
                v33 = v212;
                v3 = src;
              }
              *((_DWORD *)v33 + 134) = 0;
            }
            else
            {
              v33 = (unsigned __int8 *)operator new(0x3A0u);
              *v33 = 0;
              *((_QWORD *)v33 + 12) = v33 + 112;
              *((_QWORD *)v33 + 16) = v33 + 144;
              *((_QWORD *)v33 + 20) = v33 + 176;
              *((_QWORD *)v33 + 24) = v33 + 208;
              *((_QWORD *)v33 + 28) = v33 + 240;
              *((_QWORD *)v33 + 32) = v33 + 272;
              *((_QWORD *)v33 + 36) = v33 + 304;
              *((_QWORD *)v33 + 40) = v33 + 336;
              *((_QWORD *)v33 + 44) = v33 + 368;
              *((_QWORD *)v33 + 48) = v33 + 400;
              *((_QWORD *)v33 + 52) = v33 + 432;
              *((_QWORD *)v33 + 13) = 0;
              v33[112] = 0;
              *((_QWORD *)v33 + 17) = 0;
              v33[144] = 0;
              *((_QWORD *)v33 + 21) = 0;
              v33[176] = 0;
              *((_QWORD *)v33 + 25) = 0;
              v33[208] = 0;
              *((_QWORD *)v33 + 29) = 0;
              v33[240] = 0;
              *((_QWORD *)v33 + 33) = 0;
              v33[272] = 0;
              *((_QWORD *)v33 + 37) = 0;
              v33[304] = 0;
              *((_QWORD *)v33 + 41) = 0;
              v33[336] = 0;
              *((_QWORD *)v33 + 45) = 0;
              v33[368] = 0;
              *((_QWORD *)v33 + 49) = 0;
              v33[400] = 0;
              *((_QWORD *)v33 + 53) = 0x800000000LL;
              *((_QWORD *)v33 + 66) = v33 + 544;
              *((_QWORD *)v33 + 67) = 0x600000000LL;
            }
            v280 = v33;
LABEL_51:
            v33[*v33 + 1] = 0;
            v262 = v264;
            if ( &v30[v32] && !v30 )
              goto LABEL_408;
            if ( v32 > 0xF )
            {
              v34 = (_QWORD *)operator new(v32 + 1);
              v264[0] = v32;
              v262 = v34;
            }
            else
            {
              if ( v32 == 1 )
              {
                LOBYTE(v264[0]) = *v30;
                v34 = v264;
                goto LABEL_56;
              }
              v34 = v264;
              if ( !v32 )
              {
LABEL_56:
                v263 = v32;
                *((_BYTE *)v34 + v32) = 0;
                v35 = v280;
                v36 = *(unsigned __int8 *)v280;
                *(_BYTE *)v280 = v36 + 1;
                v37 = 4 * (v36 + 3);
                v38 = (void **)&v35[v37];
                v39 = (_BYTE *)v35[v37];
                if ( v262 == v264 )
                {
                  v146 = v263;
                  if ( v263 )
                  {
                    if ( v263 == 1 )
                    {
                      *v39 = v264[0];
                    }
                    else
                    {
                      v244 = &v262;
                      memcpy(v39, v262, v263);
                    }
                    v146 = v263;
                    v39 = *v38;
                  }
                  v38[1] = (void *)v146;
                  v39[v146] = 0;
                  v39 = v262;
                }
                else
                {
                  if ( v39 == (_BYTE *)&v35[v37 + 2] )
                  {
                    *v38 = v262;
                    v38[1] = (void *)v263;
                    v38[2] = (void *)v264[0];
                  }
                  else
                  {
                    v40 = v35[4 * (int)v36 + 14];
                    *v38 = v262;
                    v38[1] = (void *)v263;
                    v38[2] = (void *)v264[0];
                    if ( v39 )
                    {
                      v262 = v39;
                      v264[0] = v40;
                      goto LABEL_60;
                    }
                  }
                  v39 = v264;
                  v262 = v264;
                }
LABEL_60:
                v263 = 0;
                *v39 = 0;
                if ( v262 != v264 )
                  operator delete(v262);
                if ( (_BYTE)v285 )
                {
                  sub_FC7790(v282, (__int64 *)&v280, SHIBYTE(v285));
                  v282 = 0;
                  v285 = 0;
                }
                if ( v283 != &v284 )
                  operator delete(v283);
                v41 = (void **)v280;
                if ( v280 )
                {
                  v42 = v281;
                  if ( v281 )
                  {
                    if ( (unsigned __int64)v280 < v281 || (unsigned __int64)v280 > v281 + 14848 )
                    {
                      v43 = *((void ***)v280 + 66);
                      v44 = &v43[8 * (unsigned __int64)*((unsigned int *)v280 + 134)];
                      if ( v43 != v44 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v44 -= 8;
                            v45 = (void **)v44[3];
                            if ( v45 == v44 + 5 )
                              break;
                            operator delete(v45);
                            if ( v43 == v44 )
                              goto LABEL_72;
                          }
                        }
                        while ( v43 != v44 );
LABEL_72:
                        v44 = (void **)v41[66];
                      }
                      if ( v44 != v41 + 68 )
                        free(v44);
                      v46 = (void **)v41[52];
                      if ( v46 != v41 + 54 )
                        free(v46);
                      v47 = v41 + 48;
                      v48 = v41 + 8;
                      do
                      {
                        while ( *v47 != v47 + 2 )
                        {
                          operator delete(*v47);
                          v47 -= 4;
                          if ( v47 == v48 )
                            goto LABEL_80;
                        }
                        v47 -= 4;
                      }
                      while ( v47 != v48 );
LABEL_80:
                      operator delete(v41, 0x3A0u);
                    }
                    else
                    {
                      v147 = *(unsigned int *)(v281 + 14976);
                      *(_DWORD *)(v281 + 14976) = v147 + 1;
                      *(_QWORD *)(v42 + 8 * v147 + 14848) = v41;
                    }
                  }
                }
                goto LABEL_11;
              }
            }
LABEL_296:
            v244 = &v262;
            memcpy(v34, v30, v32);
            v34 = v262;
            goto LABEL_56;
          }
          break;
        default:
          goto LABEL_50;
      }
      LOBYTE(v249) = 0;
      v251 = 0;
      LOBYTE(v248) = v216;
      v250 = v216;
      goto LABEL_12;
    }
  }
LABEL_10:
  v224 = nullptr;
LABEL_11:
  v216 = 0;
  LOBYTE(v248) = 0;
  v250 = 0;
  LOBYTE(v249) = 0;
  v251 = -1;
LABEL_12:
  v291[0] = (void *)0xB3300000922LL;
  LODWORD(v291[1]) = 2874;
  v16 = sub_21B6DA0(v4, v291, 3);
  v17 = (char *)v4[1];
  v292 = 0xB3300000922LL;
  v293 = 2874;
  v18 = (void **)&v17[8 * (unsigned int)v16];
  v244 = (void **)&v17[8 * HIDWORD(v16)];
  *(__m128 *)v291 = _mm_loadh_ps((const double *)&v244);
  if ( v18 != v244 )
  {
    src = v10;
    v19 = (void **)&v17[8 * HIDWORD(v16)];
    v20 = v4;
    v244 = (void **)((char *)&v291[1] + 4);
    while ( 1 )
    {
      v21 = *v18;
      v22 = v291;
      if ( *v18 )
        break;
LABEL_18:
      v291[0] = ++v18;
      if ( v19 == v18 )
        goto LABEL_19;
    }
    while ( 1 )
    {
      v23 = *((unsigned int *)v22 + 4);
      if ( !(_DWORD)v23 )
        goto LABEL_18;
      if ( (unsigned __int8)sub_21B9810(v21, v23) )
        break;
      v22 = (void **)((char *)v22 + 4);
      if ( v22 == v244 )
        goto LABEL_18;
    }
    v51 = v20;
    v52 = v19;
    v244 = v19;
    v53 = src;
    v292 = 0xB3300000922LL;
    v293 = 2874;
    *(__m128 *)v291 = _mm_loadh_ps((const double *)&v244);
    if ( v244 != v18 )
    {
      v54 = v51;
      src = (char *)&v291[1] + 4;
      do
      {
        v55 = *v18;
        v56 = *((_BYTE **)*v18 + 2);
        if ( !v56 )
          v56 = *v18;
        v57 = v18 + 1;
        v56[44] |= 1u;
        v291[0] = v57;
        if ( v57 == v52 )
          break;
        while ( 1 )
        {
          v58 = (unsigned int *)v291;
          if ( *v57 )
            break;
LABEL_99:
          v291[0] = ++v57;
          if ( v52 == v57 )
            goto LABEL_100;
        }
        v244 = (void **)*v57;
        v59 = v54;
        while ( 1 )
        {
          v60 = v58[4];
          if ( !(_DWORD)v60 )
          {
LABEL_98:
            v54 = v59;
            goto LABEL_99;
          }
          if ( (unsigned __int8)sub_21B9810(v244, v60) )
            break;
          if ( ++v58 == src )
            goto LABEL_98;
        }
        v18 = (void **)v291[0];
        v54 = v59;
      }
      while ( v52 != v291[0] );
LABEL_100:
      v61 = v54;
      if ( (unsigned __int8)sub_21B9810(v55, 2338) )
      {
        v62 = "lp64d";
        LODWORD(v244) = 64;
        v63 = (v231 == 13) + 5LL;
        if ( v231 == 13 )
          v62 = "ilp32d";
        v216 = (char)v248;
      }
      else
      {
        v63 = 0;
        v62 = nullptr;
        LODWORD(v244) = -1;
      }
      if ( (unsigned __int8)sub_21B9810(v55, 2867) )
      {
        v62 = "lp64f";
        LODWORD(v244) = 32;
        v63 = (v231 == 13) + 5LL;
        if ( v231 == 13 )
          v62 = "ilp32f";
        v216 = v250;
      }
      if ( (unsigned __int8)sub_21B9810(v55, 2874) )
      {
        v62 = "lp64s";
        LODWORD(v244) = 0;
        v63 = (v231 == 13) + 5LL;
        if ( v231 == 13 )
          v62 = "ilp32s";
        v216 = (char)v249;
      }
      if ( !v227 || v63 == v227 && !memcmp(v62, s2, v63) )
      {
LABEL_174:
        if ( !v216 )
          return v62;
        sub_FC70B0((__int64)v291, *v246, 0, 565);
        sub_21B5FF0(&v257, v224, v61);
        v104 = (unsigned __int8 *)v291[0];
        v105 = v257;
        v106 = v258;
        if ( !v291[0] )
        {
          v154 = v291[1];
          v155 = *((_DWORD *)v291[1] + 3744);
          if ( v155 )
          {
            v192 = (unsigned int)(v155 - 1);
            *((_DWORD *)v291[1] + 3744) = v192;
            v104 = (unsigned __int8 *)v154[v192 + 1856];
            v193 = *((unsigned int *)v104 + 134);
            v194 = *((_QWORD *)v104 + 66);
            *v104 = 0;
            *((_DWORD *)v104 + 106) = 0;
            v195 = v194 + (v193 << 6);
            if ( v194 != v195 )
            {
              v226 = v55;
              v196 = v106;
              v230 = v61;
              v197 = v195;
              v198 = v194;
              do
              {
                while ( 1 )
                {
                  v197 -= 64;
                  v199 = *(void **)(v197 + 24);
                  if ( v199 == (void *)(v197 + 40) )
                    break;
                  operator delete(v199);
                  if ( v198 == v197 )
                    goto LABEL_382;
                }
              }
              while ( v198 != v197 );
LABEL_382:
              v106 = v196;
              v55 = v226;
              v61 = v230;
            }
            *((_DWORD *)v104 + 134) = 0;
          }
          else
          {
            v225 = (void *)v258;
            v220 = v257;
            v104 = (unsigned __int8 *)operator new(0x3A0u);
            *v104 = 0;
            *((_QWORD *)v104 + 12) = v104 + 112;
            *((_QWORD *)v104 + 16) = v104 + 144;
            *((_QWORD *)v104 + 20) = v104 + 176;
            *((_QWORD *)v104 + 24) = v104 + 208;
            *((_QWORD *)v104 + 28) = v104 + 240;
            *((_QWORD *)v104 + 32) = v104 + 272;
            *((_QWORD *)v104 + 36) = v104 + 304;
            *((_QWORD *)v104 + 40) = v104 + 336;
            *((_QWORD *)v104 + 44) = v104 + 368;
            *((_QWORD *)v104 + 48) = v104 + 400;
            *((_QWORD *)v104 + 52) = v104 + 432;
            *((_QWORD *)v104 + 13) = 0;
            v104[112] = 0;
            *((_QWORD *)v104 + 17) = 0;
            v104[144] = 0;
            *((_QWORD *)v104 + 21) = 0;
            v104[176] = 0;
            *((_QWORD *)v104 + 25) = 0;
            v104[208] = 0;
            *((_QWORD *)v104 + 29) = 0;
            v104[240] = 0;
            *((_QWORD *)v104 + 33) = 0;
            v104[272] = 0;
            *((_QWORD *)v104 + 37) = 0;
            v104[304] = 0;
            *((_QWORD *)v104 + 41) = 0;
            v104[336] = 0;
            *((_QWORD *)v104 + 45) = 0;
            v104[368] = 0;
            *((_QWORD *)v104 + 49) = 0;
            v104[400] = 0;
            *((_QWORD *)v104 + 53) = 0x800000000LL;
            v105 = v220;
            *((_QWORD *)v104 + 66) = v104 + 544;
            v106 = (__int64)v225;
            *((_QWORD *)v104 + 67) = 0x600000000LL;
          }
          v291[0] = v104;
        }
        v104[*v104 + 1] = 0;
        v277 = v279;
        if ( &v105[v106] && !v105 )
          goto LABEL_408;
        if ( (unsigned __int64)v106 > 0xF )
        {
          if ( v106 < 0 )
            goto LABEL_409;
          v217 = (void *)v106;
          v107 = (_QWORD *)operator new(v106 + 1);
          v106 = (__int64)v217;
          v277 = v107;
          v279[0] = v217;
        }
        else
        {
          if ( v106 == 1 )
          {
            LOBYTE(v279[0]) = *v105;
            v107 = v279;
            goto LABEL_204;
          }
          v107 = v279;
          if ( !v106 )
          {
LABEL_204:
            v278 = v106;
            *((_BYTE *)v107 + v106) = 0;
            v108 = v291[0];
            v109 = *(unsigned __int8 *)v291[0];
            *(_BYTE *)v291[0] = v109 + 1;
            v110 = 4 * (v109 + 3);
            v111 = (void **)&v108[v110];
            v112 = (_BYTE *)v108[v110];
            if ( v277 == v279 )
            {
              v144 = v278;
              if ( v278 )
              {
                if ( v278 == 1 )
                {
                  *v112 = v279[0];
                  v144 = v278;
                  v112 = *v111;
                }
                else
                {
                  v219 = v111;
                  memcpy(v112, v277, v278);
                  v111 = v219;
                  v144 = v278;
                  v112 = *v219;
                }
              }
              v111[1] = (void *)v144;
              v112[v144] = 0;
              v112 = v277;
            }
            else
            {
              if ( v112 == (_BYTE *)&v108[v110 + 2] )
              {
                *v111 = v277;
                v111[1] = (void *)v278;
                v111[2] = (void *)v279[0];
              }
              else
              {
                v113 = v108[4 * (int)v109 + 14];
                *v111 = v277;
                v111[1] = (void *)v278;
                v111[2] = (void *)v279[0];
                if ( v112 )
                {
                  v277 = v112;
                  v279[0] = v113;
                  goto LABEL_208;
                }
              }
              v112 = v279;
              v277 = v279;
            }
LABEL_208:
            v278 = 0;
            *v112 = 0;
            if ( v277 != v279 )
              operator delete(v277);
            sub_21B5FF0(v260, v55, v61);
            v114 = (unsigned __int8 *)v291[0];
            v115 = v260[0];
            v116 = (signed __int64)v260[1];
            if ( !v291[0] )
            {
              v156 = v291[1];
              v157 = *((_DWORD *)v291[1] + 3744);
              if ( v157 )
              {
                v200 = (unsigned int)(v157 - 1);
                *((_DWORD *)v291[1] + 3744) = v200;
                v114 = (unsigned __int8 *)v156[v200 + 1856];
                v201 = *((unsigned int *)v114 + 134);
                *v114 = 0;
                v202 = *((_QWORD *)v114 + 66);
                *((_DWORD *)v114 + 106) = 0;
                v203 = v202 + (v201 << 6);
                if ( v202 != v203 )
                {
                  v223 = v114;
                  v204 = v203;
                  v205 = v202;
                  do
                  {
                    while ( 1 )
                    {
                      v204 -= 64;
                      v206 = *(void **)(v204 + 24);
                      if ( v206 == (void *)(v204 + 40) )
                        break;
                      operator delete(v206);
                      if ( v205 == v204 )
                        goto LABEL_390;
                    }
                  }
                  while ( v205 != v204 );
LABEL_390:
                  v114 = v223;
                }
                *((_DWORD *)v114 + 134) = 0;
              }
              else
              {
                v221 = v260[0];
                v114 = (unsigned __int8 *)operator new(0x3A0u);
                *v114 = 0;
                *((_QWORD *)v114 + 12) = v114 + 112;
                *((_QWORD *)v114 + 16) = v114 + 144;
                *((_QWORD *)v114 + 20) = v114 + 176;
                *((_QWORD *)v114 + 24) = v114 + 208;
                *((_QWORD *)v114 + 28) = v114 + 240;
                *((_QWORD *)v114 + 32) = v114 + 272;
                *((_QWORD *)v114 + 36) = v114 + 304;
                *((_QWORD *)v114 + 40) = v114 + 336;
                *((_QWORD *)v114 + 44) = v114 + 368;
                *((_QWORD *)v114 + 48) = v114 + 400;
                *((_QWORD *)v114 + 52) = v114 + 432;
                *((_QWORD *)v114 + 13) = 0;
                v114[112] = 0;
                *((_QWORD *)v114 + 17) = 0;
                v114[144] = 0;
                *((_QWORD *)v114 + 21) = 0;
                v114[176] = 0;
                *((_QWORD *)v114 + 25) = 0;
                v114[208] = 0;
                *((_QWORD *)v114 + 29) = 0;
                v114[240] = 0;
                *((_QWORD *)v114 + 33) = 0;
                v114[272] = 0;
                *((_QWORD *)v114 + 37) = 0;
                v114[304] = 0;
                *((_QWORD *)v114 + 41) = 0;
                v114[336] = 0;
                *((_QWORD *)v114 + 45) = 0;
                v114[368] = 0;
                *((_QWORD *)v114 + 49) = 0;
                v114[400] = 0;
                *((_QWORD *)v114 + 53) = 0x800000000LL;
                v115 = v221;
                *((_QWORD *)v114 + 66) = v114 + 544;
                *((_QWORD *)v114 + 67) = 0x600000000LL;
              }
              v291[0] = v114;
            }
            v114[*v114 + 1] = 0;
            v274 = v276;
            if ( !&v115[v116] || v115 )
            {
              if ( (unsigned __int64)v116 <= 0xF )
              {
                if ( v116 == 1 )
                {
                  LOBYTE(v276[0]) = *v115;
                  v117 = v276;
                  goto LABEL_216;
                }
                v117 = v276;
                if ( !v116 )
                {
LABEL_216:
                  v275 = v116;
                  *((_BYTE *)v117 + v116) = 0;
                  v118 = v291[0];
                  v119 = *(unsigned __int8 *)v291[0];
                  *(_BYTE *)v291[0] = v119 + 1;
                  v120 = (unsigned __int8)v119;
                  v121 = 4 * (v119 + 3);
                  v122 = (void **)&v118[v121];
                  v123 = (_BYTE *)v118[v121];
                  if ( v274 == v276 )
                  {
                    v145 = v275;
                    if ( v275 )
                    {
                      if ( v275 == 1 )
                        *v123 = v276[0];
                      else
                        memcpy(v123, v274, v275);
                      v145 = v275;
                      v123 = *v122;
                    }
                    v122[1] = (void *)v145;
                    v123[v145] = 0;
                    v123 = v274;
                    goto LABEL_220;
                  }
                  if ( v123 == (_BYTE *)&v118[v121 + 2] )
                  {
                    *v122 = v274;
                    v122[1] = (void *)v275;
                    v122[2] = (void *)v276[0];
                  }
                  else
                  {
                    v124 = v118[4 * v120 + 14];
                    *v122 = v274;
                    v122[1] = (void *)v275;
                    v122[2] = (void *)v276[0];
                    if ( v123 )
                    {
                      v274 = v123;
                      v276[0] = v124;
LABEL_220:
                      v275 = 0;
                      *v123 = 0;
                      if ( v274 != v276 )
                        operator delete(v274);
                      v125 = (unsigned __int8 *)v291[0];
                      v126 = (void *)(int)v244;
                      if ( !v291[0] )
                      {
                        v158 = v291[1];
                        v159 = *((_DWORD *)v291[1] + 3744);
                        if ( v159 )
                        {
                          v184 = (unsigned int)(v159 - 1);
                          *((_DWORD *)v291[1] + 3744) = v184;
                          v125 = (unsigned __int8 *)v158[v184 + 1856];
                          v185 = *((unsigned int *)v125 + 134);
                          *v125 = 0;
                          v186 = *((_QWORD *)v125 + 66);
                          *((_DWORD *)v125 + 106) = 0;
                          v187 = v186 + (v185 << 6);
                          if ( v186 != v187 )
                          {
                            v188 = v126;
                            v189 = v125;
                            v190 = v186;
                            do
                            {
                              while ( 1 )
                              {
                                v187 -= 64;
                                v191 = *(void **)(v187 + 24);
                                if ( v191 == (void *)(v187 + 40) )
                                  break;
                                operator delete(v191);
                                if ( v190 == v187 )
                                  goto LABEL_374;
                              }
                            }
                            while ( v190 != v187 );
LABEL_374:
                            v126 = v188;
                            v125 = v189;
                          }
                          *((_DWORD *)v125 + 134) = 0;
                        }
                        else
                        {
                          v222 = (void *)(int)v244;
                          v125 = (unsigned __int8 *)operator new(0x3A0u);
                          *v125 = 0;
                          *((_QWORD *)v125 + 12) = v125 + 112;
                          *((_QWORD *)v125 + 16) = v125 + 144;
                          *((_QWORD *)v125 + 20) = v125 + 176;
                          *((_QWORD *)v125 + 24) = v125 + 208;
                          *((_QWORD *)v125 + 28) = v125 + 240;
                          *((_QWORD *)v125 + 32) = v125 + 272;
                          *((_QWORD *)v125 + 36) = v125 + 304;
                          *((_QWORD *)v125 + 40) = v125 + 336;
                          *((_QWORD *)v125 + 44) = v125 + 368;
                          *((_QWORD *)v125 + 48) = v125 + 400;
                          *((_QWORD *)v125 + 52) = v125 + 432;
                          *((_QWORD *)v125 + 13) = 0;
                          v125[112] = 0;
                          *((_QWORD *)v125 + 17) = 0;
                          v125[144] = 0;
                          *((_QWORD *)v125 + 21) = 0;
                          v125[176] = 0;
                          *((_QWORD *)v125 + 25) = 0;
                          v125[208] = 0;
                          *((_QWORD *)v125 + 29) = 0;
                          v125[240] = 0;
                          *((_QWORD *)v125 + 33) = 0;
                          v125[272] = 0;
                          *((_QWORD *)v125 + 37) = 0;
                          v125[304] = 0;
                          *((_QWORD *)v125 + 41) = 0;
                          v125[336] = 0;
                          *((_QWORD *)v125 + 45) = 0;
                          v125[368] = 0;
                          *((_QWORD *)v125 + 49) = 0;
                          v125[400] = 0;
                          *((_QWORD *)v125 + 53) = 0x800000000LL;
                          v126 = v222;
                          *((_QWORD *)v125 + 66) = v125 + 544;
                          *((_QWORD *)v125 + 67) = 0x600000000LL;
                        }
                        v291[0] = v125;
                      }
                      v125[*v125 + 1] = 2;
                      v127 = v291[0];
                      v128 = *(unsigned __int8 *)v291[0];
                      *(_BYTE *)v291[0] = v128 + 1;
                      v129 = (__int64 *)v260[0];
                      v127[v128 + 2] = v126;
                      if ( v129 != &v261 )
                        operator delete(v129);
                      if ( v257 != &v259 )
                        operator delete(v257);
                      if ( (_BYTE)v296 )
                      {
                        sub_FC7790(v292, (__int64 *)v291, SHIBYTE(v296));
                        v292 = 0;
                        v296 = 0;
                      }
                      if ( v294 != &v295 )
                        operator delete(v294);
                      v130 = (void **)v291[0];
                      if ( v291[0] )
                      {
                        v131 = v291[1];
                        if ( v291[1] )
                        {
                          if ( v291[0] >= v291[1] && v291[0] <= (char *)v291[1] + 14848 )
                          {
                            v183 = *((unsigned int *)v291[1] + 3744);
                            *((_DWORD *)v291[1] + 3744) = v183 + 1;
                            v131[v183 + 1856] = v130;
                          }
                          else
                          {
                            v132 = *((void ***)v291[0] + 66);
                            v133 = &v132[8 * (unsigned __int64)*((unsigned int *)v291[0] + 134)];
                            if ( v132 != v133 )
                            {
                              do
                              {
                                while ( 1 )
                                {
                                  v133 -= 8;
                                  v134 = (void **)v133[3];
                                  if ( v134 == v133 + 5 )
                                    break;
                                  operator delete(v134);
                                  if ( v132 == v133 )
                                    goto LABEL_238;
                                }
                              }
                              while ( v132 != v133 );
LABEL_238:
                              v133 = (void **)v130[66];
                            }
                            if ( v133 != v130 + 68 )
                              free(v133);
                            v135 = (void **)v130[52];
                            v136 = v130 + 52;
                            if ( v135 != v130 + 54 )
                              free(v135);
                            v137 = v130 + 12;
                            do
                            {
                              while ( 1 )
                              {
                                v136 -= 4;
                                if ( *v136 == v136 + 2 )
                                  break;
                                operator delete(*v136);
                                if ( v136 == v137 )
                                  goto LABEL_246;
                              }
                            }
                            while ( v136 != v137 );
LABEL_246:
                            operator delete(v130, 0x3A0u);
                          }
                        }
                      }
                      return v62;
                    }
                  }
                  v123 = v276;
                  v274 = v276;
                  goto LABEL_220;
                }
LABEL_283:
                memcpy(v117, v115, v116);
                v117 = v274;
                goto LABEL_216;
              }
              if ( v116 >= 0 )
              {
                v117 = (_QWORD *)operator new(v116 + 1);
                v276[0] = v116;
                v274 = v117;
                goto LABEL_283;
              }
LABEL_409:
              std::__throw_length_error("basic_string::_M_create");
            }
LABEL_408:
            std::__throw_logic_error("basic_string::_M_construct null not valid");
          }
        }
        v218 = (void *)v106;
        memcpy(v107, v105, v106);
        v107 = v277;
        v106 = (__int64)v218;
        goto LABEL_204;
      }
      v64 = &v286;
      sub_FC70B0((__int64)&v286, *v246, 0, 565);
      sub_21B5FF0(&v252, v53, v61);
      v65 = v252;
      v66 = n;
      v67 = (unsigned __int8 *)v286;
      if ( !v286 )
      {
        v148 = v287;
        v149 = *(_DWORD *)(v287 + 14976);
        if ( v149 )
        {
          v167 = (unsigned int)(v149 - 1);
          *(_DWORD *)(v287 + 14976) = v167;
          v67 = *(unsigned __int8 **)(v148 + 8 * v167 + 14848);
          v168 = *((unsigned int *)v67 + 134);
          *v67 = 0;
          v169 = *((_QWORD *)v67 + 66);
          *((_DWORD *)v67 + 106) = 0;
          v170 = v169 + (v168 << 6);
          if ( v169 != v170 )
          {
            v242 = v55;
            v171 = v66;
            src = v67;
            v172 = v169;
            s2 = v61;
            v173 = v170;
            v248 = &v286;
            do
            {
              while ( 1 )
              {
                v173 -= 64;
                v174 = *(void **)(v173 + 24);
                if ( v174 == (void *)(v173 + 40) )
                  break;
                operator delete(v174);
                if ( v172 == v173 )
                  goto LABEL_357;
              }
            }
            while ( v172 != v173 );
LABEL_357:
            v66 = v171;
            v67 = (unsigned __int8 *)src;
            v55 = v242;
            v61 = s2;
            v64 = v248;
          }
          *((_DWORD *)v67 + 134) = 0;
        }
        else
        {
          src = (void *)n;
          v239 = v252;
          v67 = (unsigned __int8 *)operator new(0x3A0u);
          *v67 = 0;
          *((_QWORD *)v67 + 12) = v67 + 112;
          *((_QWORD *)v67 + 16) = v67 + 144;
          *((_QWORD *)v67 + 20) = v67 + 176;
          *((_QWORD *)v67 + 24) = v67 + 208;
          *((_QWORD *)v67 + 28) = v67 + 240;
          *((_QWORD *)v67 + 32) = v67 + 272;
          *((_QWORD *)v67 + 36) = v67 + 304;
          *((_QWORD *)v67 + 40) = v67 + 336;
          *((_QWORD *)v67 + 44) = v67 + 368;
          *((_QWORD *)v67 + 48) = v67 + 400;
          *((_QWORD *)v67 + 52) = v67 + 432;
          *((_QWORD *)v67 + 13) = 0;
          v67[112] = 0;
          *((_QWORD *)v67 + 17) = 0;
          v67[144] = 0;
          *((_QWORD *)v67 + 21) = 0;
          v67[176] = 0;
          *((_QWORD *)v67 + 25) = 0;
          v67[208] = 0;
          *((_QWORD *)v67 + 29) = 0;
          v67[240] = 0;
          *((_QWORD *)v67 + 33) = 0;
          v67[272] = 0;
          *((_QWORD *)v67 + 37) = 0;
          v67[304] = 0;
          *((_QWORD *)v67 + 41) = 0;
          v67[336] = 0;
          *((_QWORD *)v67 + 45) = 0;
          v67[368] = 0;
          *((_QWORD *)v67 + 49) = 0;
          v67[400] = 0;
          *((_QWORD *)v67 + 53) = 0x800000000LL;
          v65 = v239;
          *((_QWORD *)v67 + 66) = v67 + 544;
          v66 = (__int64)src;
          *((_QWORD *)v67 + 67) = 0x600000000LL;
        }
        v286 = v67;
      }
      v67[*v67 + 1] = 0;
      v271 = v273;
      if ( &v65[v66] && !v65 )
        goto LABEL_408;
      if ( (unsigned __int64)v66 > 0xF )
      {
        if ( v66 < 0 )
          goto LABEL_409;
        src = v65;
        v232 = v66;
        v68 = (_QWORD *)operator new(v66 + 1);
        v66 = v232;
        v65 = src;
        v271 = v68;
        v273[0] = v232;
      }
      else
      {
        if ( v66 == 1 )
        {
          LOBYTE(v273[0]) = *v65;
          v68 = v273;
          goto LABEL_121;
        }
        v68 = v273;
        if ( !v66 )
        {
LABEL_121:
          v272 = v66;
          *((_BYTE *)v68 + v66) = 0;
          v69 = v286;
          v70 = *(unsigned __int8 *)v286;
          *(_BYTE *)v286 = v70 + 1;
          v71 = 4 * (v70 + 3);
          v72 = (void **)&v69[v71];
          v73 = (_BYTE *)v69[v71];
          if ( v271 == v273 )
          {
            v140 = v272;
            if ( v272 )
            {
              if ( v272 == 1 )
              {
                *v73 = v273[0];
                v140 = v272;
                v73 = *v72;
              }
              else
              {
                v236 = v72;
                memcpy(v73, v271, v272);
                v72 = v236;
                v140 = v272;
                v73 = *v236;
              }
            }
            v72[1] = (void *)v140;
            v73[v140] = 0;
            v73 = v271;
          }
          else
          {
            if ( v73 == (_BYTE *)&v69[v71 + 2] )
            {
              *v72 = v271;
              v72[1] = (void *)v272;
              v72[2] = (void *)v273[0];
            }
            else
            {
              v74 = v69[4 * (int)v70 + 14];
              *v72 = v271;
              v72[1] = (void *)v272;
              v72[2] = (void *)v273[0];
              if ( v73 )
              {
                v271 = v73;
                v273[0] = v74;
                goto LABEL_125;
              }
            }
            v73 = v273;
            v271 = v273;
          }
LABEL_125:
          v272 = 0;
          *v73 = 0;
          if ( v271 != v273 )
            operator delete(v271);
          v75 = (char *)&v255;
          sub_21B5FF0(&v255, v55, v61);
          v76 = (unsigned __int8 *)v286;
          v77 = v255;
          v78 = v256;
          if ( !v286 )
          {
            v150 = v287;
            v151 = *(_DWORD *)(v287 + 14976);
            if ( v151 )
            {
              v175 = (unsigned int)(v151 - 1);
              *(_DWORD *)(v287 + 14976) = v175;
              v76 = *(unsigned __int8 **)(v150 + 8 * v175 + 14848);
              v176 = *((unsigned int *)v76 + 134);
              *v76 = 0;
              v177 = *((_QWORD *)v76 + 66);
              *((_DWORD *)v76 + 106) = 0;
              v178 = v177 + (v176 << 6);
              if ( v177 != v178 )
              {
                src = v55;
                v179 = v78;
                s2 = v61;
                v180 = v178;
                v248 = v64;
                v249 = &v255;
                v181 = v177;
                do
                {
                  while ( 1 )
                  {
                    v180 -= 64;
                    v182 = *(void **)(v180 + 24);
                    if ( v182 == (void *)(v180 + 40) )
                      break;
                    v243 = v76;
                    operator delete(v182);
                    v76 = v243;
                    if ( v181 == v180 )
                      goto LABEL_365;
                  }
                }
                while ( v181 != v180 );
LABEL_365:
                v78 = v179;
                v61 = s2;
                v55 = src;
                v64 = v248;
                v75 = (char *)v249;
              }
              *((_DWORD *)v76 + 134) = 0;
            }
            else
            {
              src = (void *)v256;
              v240 = v255;
              v76 = (unsigned __int8 *)operator new(0x3A0u);
              *v76 = 0;
              *((_QWORD *)v76 + 12) = v76 + 112;
              *((_QWORD *)v76 + 16) = v76 + 144;
              *((_QWORD *)v76 + 20) = v76 + 176;
              *((_QWORD *)v76 + 24) = v76 + 208;
              *((_QWORD *)v76 + 28) = v76 + 240;
              *((_QWORD *)v76 + 32) = v76 + 272;
              *((_QWORD *)v76 + 36) = v76 + 304;
              *((_QWORD *)v76 + 40) = v76 + 336;
              *((_QWORD *)v76 + 44) = v76 + 368;
              *((_QWORD *)v76 + 48) = v76 + 400;
              *((_QWORD *)v76 + 52) = v76 + 432;
              *((_QWORD *)v76 + 13) = 0;
              v76[112] = 0;
              *((_QWORD *)v76 + 17) = 0;
              v76[144] = 0;
              *((_QWORD *)v76 + 21) = 0;
              v76[176] = 0;
              *((_QWORD *)v76 + 25) = 0;
              v76[208] = 0;
              *((_QWORD *)v76 + 29) = 0;
              v76[240] = 0;
              *((_QWORD *)v76 + 33) = 0;
              v76[272] = 0;
              *((_QWORD *)v76 + 37) = 0;
              v76[304] = 0;
              *((_QWORD *)v76 + 41) = 0;
              v76[336] = 0;
              *((_QWORD *)v76 + 45) = 0;
              v76[368] = 0;
              *((_QWORD *)v76 + 49) = 0;
              v76[400] = 0;
              *((_QWORD *)v76 + 53) = 0x800000000LL;
              v77 = v240;
              *((_QWORD *)v76 + 66) = v76 + 544;
              v78 = (__int64)src;
              *((_QWORD *)v76 + 67) = 0x600000000LL;
            }
            v286 = v76;
          }
          v79 = (char *)&v268;
          v76[*v76 + 1] = 0;
          v268 = v270;
          if ( &v77[v78] && !v77 )
            goto LABEL_408;
          if ( (unsigned __int64)v78 > 0xF )
          {
            s2 = &v268;
            src = v77;
            if ( v78 < 0 )
              goto LABEL_409;
            v234 = v78;
            v80 = (_QWORD *)operator new(v78 + 1);
            v78 = v234;
            v77 = src;
            v268 = v80;
            v79 = (char *)s2;
            v270[0] = v234;
          }
          else
          {
            if ( v78 == 1 )
            {
              LOBYTE(v270[0]) = *v77;
              v80 = v270;
              goto LABEL_133;
            }
            v80 = v270;
            if ( !v78 )
            {
LABEL_133:
              v269 = v78;
              *((_BYTE *)v80 + v78) = 0;
              v81 = v286;
              v82 = *(unsigned __int8 *)v286;
              *(_BYTE *)v286 = v82 + 1;
              v83 = 4 * (v82 + 3);
              v84 = (char *)&v81[v83];
              v85 = (_BYTE *)v81[v83];
              if ( v268 == v79 + 16 )
              {
                v141 = v269;
                if ( v269 )
                {
                  if ( v269 == 1 )
                  {
                    *v85 = v270[0];
                    v141 = v269;
                    v85 = *(_BYTE **)v84;
                  }
                  else
                  {
                    src = v79;
                    v237 = v84;
                    memcpy(v85, v268, v269);
                    v84 = v237;
                    v79 = (char *)src;
                    v141 = v269;
                    v85 = *(_BYTE **)v237;
                  }
                }
                *((_QWORD *)v84 + 1) = v141;
                v85[v141] = 0;
                v85 = v268;
              }
              else
              {
                if ( v85 == (_BYTE *)&v81[v83 + 2] )
                {
                  *(_QWORD *)v84 = v268;
                  *((_QWORD *)v84 + 1) = v269;
                  *((_QWORD *)v84 + 2) = v270[0];
                }
                else
                {
                  v86 = v81[4 * (int)v82 + 14];
                  *(_QWORD *)v84 = v268;
                  *((_QWORD *)v84 + 1) = v269;
                  *((_QWORD *)v84 + 2) = v270[0];
                  if ( v85 )
                  {
                    v268 = v85;
                    v270[0] = v86;
                    goto LABEL_137;
                  }
                }
                v85 = v79 + 16;
                v268 = v79 + 16;
              }
LABEL_137:
              v269 = 0;
              *v85 = 0;
              if ( v268 != v79 + 16 )
                operator delete(v268);
              v87 = (unsigned __int8 *)v286;
              if ( !v286 )
              {
                v152 = v287;
                v153 = *(_DWORD *)(v287 + 14976);
                if ( v153 )
                {
                  v160 = (unsigned int)(v153 - 1);
                  *(_DWORD *)(v287 + 14976) = v160;
                  v87 = *(unsigned __int8 **)(v152 + 8 * v160 + 14848);
                  v161 = *((unsigned int *)v87 + 134);
                  *v87 = 0;
                  v162 = *((_QWORD *)v87 + 66);
                  *((_DWORD *)v87 + 106) = 0;
                  v163 = v162 + (v161 << 6);
                  if ( v162 != v163 )
                  {
                    v241 = v61;
                    v164 = v163;
                    src = v64;
                    v165 = v87;
                    s2 = v75;
                    do
                    {
                      while ( 1 )
                      {
                        v164 -= 64;
                        v166 = *(void **)(v164 + 24);
                        if ( v166 == (void *)(v164 + 40) )
                          break;
                        operator delete(v166);
                        if ( v162 == v164 )
                          goto LABEL_349;
                      }
                    }
                    while ( v162 != v164 );
LABEL_349:
                    v87 = v165;
                    v61 = v241;
                    v64 = (void **)src;
                    v75 = (char *)s2;
                  }
                  *((_DWORD *)v87 + 134) = 0;
                }
                else
                {
                  v87 = (unsigned __int8 *)operator new(0x3A0u);
                  *v87 = 0;
                  *((_QWORD *)v87 + 12) = v87 + 112;
                  *((_QWORD *)v87 + 16) = v87 + 144;
                  *((_QWORD *)v87 + 20) = v87 + 176;
                  *((_QWORD *)v87 + 24) = v87 + 208;
                  *((_QWORD *)v87 + 28) = v87 + 240;
                  *((_QWORD *)v87 + 32) = v87 + 272;
                  *((_QWORD *)v87 + 36) = v87 + 304;
                  *((_QWORD *)v87 + 40) = v87 + 336;
                  *((_QWORD *)v87 + 44) = v87 + 368;
                  *((_QWORD *)v87 + 48) = v87 + 400;
                  *((_QWORD *)v87 + 52) = v87 + 432;
                  *((_QWORD *)v87 + 13) = 0;
                  v87[112] = 0;
                  *((_QWORD *)v87 + 17) = 0;
                  v87[144] = 0;
                  *((_QWORD *)v87 + 21) = 0;
                  v87[176] = 0;
                  *((_QWORD *)v87 + 25) = 0;
                  v87[208] = 0;
                  *((_QWORD *)v87 + 29) = 0;
                  v87[240] = 0;
                  *((_QWORD *)v87 + 33) = 0;
                  v87[272] = 0;
                  *((_QWORD *)v87 + 37) = 0;
                  v87[304] = 0;
                  *((_QWORD *)v87 + 41) = 0;
                  v87[336] = 0;
                  *((_QWORD *)v87 + 45) = 0;
                  v87[368] = 0;
                  *((_QWORD *)v87 + 49) = 0;
                  v87[400] = 0;
                  *((_QWORD *)v87 + 53) = 0x800000000LL;
                  *((_QWORD *)v87 + 66) = v87 + 544;
                  *((_QWORD *)v87 + 67) = 0x600000000LL;
                }
                v286 = v87;
              }
              v88 = (char *)&v265;
              v87[*v87 + 1] = 0;
              v265 = v267;
              if ( &v62[v63] && !v62 )
                goto LABEL_408;
              if ( v63 == 1 )
              {
                LOBYTE(v267[0]) = *v62;
              }
              else if ( v63 && (_DWORD)v63 )
              {
                v138 = 0;
                do
                {
                  v139 = v138++;
                  *((_BYTE *)v267 + v139) = v62[v139];
                }
                while ( v138 < (unsigned int)v63 );
              }
              v266 = v63;
              *((_BYTE *)v267 + v63) = 0;
              v89 = v286;
              v90 = *(unsigned __int8 *)v286;
              *(_BYTE *)v286 = v90 + 1;
              v91 = 4 * (v90 + 3);
              v92 = (void **)&v89[v91];
              v93 = (_BYTE *)v89[v91];
              if ( v265 == v267 )
              {
                v142 = v266;
                if ( v266 )
                {
                  if ( v266 == 1 )
                  {
                    *v93 = v267[0];
                    v142 = v266;
                    v93 = *v92;
                  }
                  else
                  {
                    src = &v265;
                    v238 = v92;
                    memcpy(v93, v265, v266);
                    v92 = v238;
                    v88 = (char *)src;
                    v142 = v266;
                    v93 = *v238;
                  }
                }
                v92[1] = (void *)v142;
                v93[v142] = 0;
                v93 = v265;
              }
              else
              {
                if ( v93 == (_BYTE *)&v89[v91 + 2] )
                {
                  *v92 = v265;
                  v92[1] = (void *)v266;
                  v92[2] = (void *)v267[0];
                }
                else
                {
                  v94 = v89[4 * (int)v90 + 14];
                  *v92 = v265;
                  v92[1] = (void *)v266;
                  v92[2] = (void *)v267[0];
                  if ( v93 )
                  {
                    v265 = v93;
                    v267[0] = v94;
                    goto LABEL_148;
                  }
                }
                v93 = v267;
                v265 = v267;
              }
LABEL_148:
              v266 = 0;
              *v93 = 0;
              if ( v265 != v88 + 16 )
                operator delete(v265);
              if ( v255 != v75 + 16 )
                operator delete(v255);
              if ( v252 != &v254 )
                operator delete(v252);
              if ( (_BYTE)v290 )
              {
                sub_FC7790(v288, (__int64 *)v64, SHIBYTE(v290));
                v288 = 0;
                v290 = 0;
              }
              if ( v289 != v64 + 6 )
                operator delete(v289);
              v95 = (void **)v286;
              if ( v286 )
              {
                v96 = v287;
                if ( v287 )
                {
                  if ( (unsigned __int64)v286 < v287 || (unsigned __int64)v286 > v287 + 14848 )
                  {
                    v97 = *((void ***)v286 + 66);
                    v98 = &v97[8 * (unsigned __int64)*((unsigned int *)v286 + 134)];
                    if ( v97 != v98 )
                    {
                      v228 = v61;
                      v99 = *((void ***)v286 + 66);
                      do
                      {
                        while ( 1 )
                        {
                          v98 -= 8;
                          v100 = (void **)v98[3];
                          if ( v100 == v98 + 5 )
                            break;
                          operator delete(v100);
                          if ( v99 == v98 )
                            goto LABEL_165;
                        }
                      }
                      while ( v99 != v98 );
LABEL_165:
                      v61 = v228;
                      v98 = (void **)v95[66];
                    }
                    if ( v98 != v95 + 68 )
                      free(v98);
                    v101 = (void **)v95[52];
                    if ( v101 != v95 + 54 )
                      free(v101);
                    v102 = v95 + 48;
                    v229 = v95 + 8;
                    do
                    {
                      while ( *v102 != v102 + 2 )
                      {
                        operator delete(*v102);
                        v102 -= 4;
                        if ( v229 == v102 )
                          goto LABEL_173;
                      }
                      v102 -= 4;
                    }
                    while ( v229 != v102 );
LABEL_173:
                    operator delete(v95, 0x3A0u);
                  }
                  else
                  {
                    v143 = *(unsigned int *)(v287 + 14976);
                    *(_DWORD *)(v287 + 14976) = v143 + 1;
                    *(_QWORD *)(v96 + 8 * v143 + 14848) = v95;
                  }
                }
              }
              goto LABEL_174;
            }
          }
          src = v79;
          v235 = v78;
          memcpy(v80, v77, v78);
          v78 = v235;
          v79 = (char *)src;
          v80 = v268;
          goto LABEL_133;
        }
      }
      v233 = v66;
      memcpy(v68, v65, v66);
      v68 = v271;
      v66 = v233;
      goto LABEL_121;
    }
  }
LABEL_19:
  if ( v227 )
    return (const char *)s2;
  if ( v251 != 32 )
  {
    if ( v251 == 64 )
      goto LABEL_188;
    if ( !v251 || (v103 = v3[12], v103 == 11) )
    {
LABEL_191:
      result = "ilp32s";
      if ( v231 != 13 )
        return "lp64s";
      return result;
    }
    if ( v103 <= 0xB )
    {
      if ( v103 != 9 )
      {
LABEL_188:
        result = "ilp32d";
        if ( v231 != 13 )
          return "lp64d";
        return result;
      }
    }
    else if ( v103 != 23 )
    {
      if ( v103 != 24 )
        goto LABEL_188;
      goto LABEL_191;
    }
  }
  result = "ilp32f";
  if ( v231 != 13 )
    return "lp64f";
  return result;
}
