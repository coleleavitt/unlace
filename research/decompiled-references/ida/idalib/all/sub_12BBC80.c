int __fastcall sub_12BBC80(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbp
  _QWORD *v7; // rbx
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  size_t v30; // rax
  _QWORD *v31; // r13
  size_t v32; // r14
  _QWORD *v33; // rbx
  _QWORD *v34; // rbp
  __int64 v35; // r15
  _QWORD *v36; // rbx
  const char **v37; // r12
  const char *v38; // r14
  signed __int64 v39; // rbp
  char *v40; // rsi
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  __int64 v49; // rax
  unsigned __int64 v50; // rcx
  __int64 v51; // rax
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  unsigned __int64 v60; // rcx
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  __int64 v63; // rax
  unsigned __int64 v64; // rcx
  __int64 v65; // rax
  unsigned __int64 v66; // rcx
  __int64 v67; // rax
  unsigned __int64 v68; // rcx
  __int64 v69; // rax
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  unsigned __int64 v72; // rax
  __int64 v73; // rcx
  _QWORD *v74; // r12
  _QWORD *i; // rbx
  const char **v76; // rax
  const char *v77; // r14
  unsigned __int8 *v78; // rbx
  _QWORD *v79; // rdx
  __int64 v80; // rax
  unsigned __int8 *v81; // rbx
  _QWORD *v82; // rdx
  __int64 v83; // rax
  void **v84; // rbx
  __int64 v85; // rax
  void **v86; // r14
  void **v87; // r12
  void **v88; // rdi
  void **v89; // rdi
  void **v90; // r12
  void **v91; // r14
  __int64 v92; // rax
  size_t v93; // rdx
  size_t v94; // rax
  size_t v95; // rcx
  char *v96; // rdx
  __int64 v97; // rbx
  __int64 v98; // rax
  __int64 *v99; // r12
  __int64 v100; // r14
  __int64 v101; // rbp
  __m128i si128; // xmm0
  __int64 v103; // rax
  __int64 (__fastcall *v104)(__int64 *, void *, __int64); // r14
  __int64 v105; // r14
  __int64 v106; // rcx
  unsigned __int8 *v107; // rbx
  _QWORD *v108; // rdx
  __int64 v109; // rax
  unsigned __int8 *v110; // rbx
  _QWORD *v111; // rdx
  __int64 v112; // rax
  void **v113; // rbx
  __int64 v114; // rax
  void **v115; // r13
  void **v116; // rbp
  void **v117; // rdi
  void **v118; // rdi
  void **v119; // r13
  void **v120; // rbp
  unsigned __int8 *v121; // rbx
  _QWORD *v122; // rdx
  __int64 v123; // rax
  unsigned __int8 *v124; // rbx
  _QWORD *v125; // rdx
  __int64 v126; // rax
  void **v127; // rbp
  __int64 v128; // rax
  void **v129; // r13
  void **v130; // rbx
  void **v131; // rdi
  void **v132; // rdi
  void **v133; // r13
  void **v134; // rbx
  unsigned __int8 *v135; // rbx
  _QWORD *v136; // rdx
  __int64 v137; // rax
  unsigned __int8 *v138; // rbx
  _QWORD *v139; // rdx
  __int64 v140; // rax
  void **v141; // rbx
  __int64 v142; // rax
  void **v143; // r13
  void **v144; // rbp
  void **v145; // rdi
  void **v146; // rdi
  void **v147; // r13
  void **v148; // rbp
  unsigned __int8 *v149; // rbx
  _QWORD *v150; // rdx
  __int64 v151; // rax
  unsigned __int8 *v152; // rbx
  _QWORD *v153; // rdx
  __int64 v154; // rax
  void **v155; // rbp
  __int64 v156; // rax
  void **v157; // r13
  void **v158; // rbx
  void **v159; // rdi
  void **v160; // rdi
  void **v161; // r13
  void **v162; // rbx
  __int64 v163; // rdx
  int v164; // eax
  __int64 v165; // rax
  __int64 v166; // r12
  __int64 v167; // r14
  __int64 v168; // r12
  void *v169; // rdi
  __int64 v170; // rdx
  int v171; // eax
  __int64 v172; // rax
  __int64 v173; // r12
  __int64 v174; // r14
  __int64 v175; // r12
  void *v176; // rdi
  unsigned __int8 *v177; // rbx
  _QWORD *v178; // rdx
  __int64 v179; // rax
  unsigned __int8 *v180; // rbx
  _QWORD *v181; // rdx
  __int64 v182; // rax
  void **v183; // rbx
  __int64 v184; // rax
  __int64 v185; // r13
  __int64 v186; // rbp
  void *v187; // rdi
  void **v188; // rdi
  void **v189; // rdi
  void **v190; // rbp
  void **v191; // r13
  __int64 v192; // rdx
  __int64 v193; // rdx
  int v194; // eax
  __int64 v195; // rdx
  int v196; // eax
  __int64 v197; // rdx
  int v198; // eax
  __int64 v199; // rdx
  int v200; // eax
  __int64 v201; // rdx
  int v202; // eax
  __int64 v203; // rdx
  int v204; // eax
  __int64 v205; // rdx
  int v206; // eax
  __int64 v207; // rdx
  int v208; // eax
  __int64 v209; // rdx
  __int64 v210; // rdx
  __int64 v211; // rax
  __int64 v212; // rbp
  __int64 v213; // r13
  __int64 v214; // rbp
  void *v215; // rdi
  __int64 v216; // rax
  __int64 v217; // rbp
  __int64 v218; // r13
  __int64 v219; // rbp
  void *v220; // rdi
  __int64 v221; // rax
  __int64 v222; // rbp
  __int64 v223; // r13
  __int64 v224; // rbp
  void *v225; // rdi
  __int64 v226; // rax
  __int64 v227; // rbp
  __int64 v228; // r13
  __int64 v229; // rbp
  void *v230; // rdi
  __int64 v231; // rax
  __int64 v232; // rbp
  __int64 v233; // r13
  __int64 v234; // rbp
  void *v235; // rdi
  __int64 v236; // rax
  __int64 v237; // rbp
  __int64 v238; // r13
  __int64 v239; // rbp
  void *v240; // rdi
  __int64 v241; // rax
  __int64 v242; // rbp
  __int64 v243; // r13
  __int64 v244; // rbp
  void *v245; // rdi
  __int64 v246; // rdx
  __int64 v247; // rdx
  __int64 v248; // rax
  __int64 v249; // rbp
  __int64 v250; // r13
  __int64 v251; // rbp
  void *v252; // rdi
  __int64 v253; // rdx
  __int64 v254; // rdx
  int v255; // eax
  __int64 v256; // rdx
  int v257; // eax
  __int64 v258; // rax
  __int64 v259; // rbp
  __int64 v260; // r13
  __int64 v261; // rbp
  void *v262; // rdi
  __int64 v263; // rax
  __int64 v264; // rbp
  __int64 v265; // r13
  __int64 v266; // rbp
  void *v267; // rdi
  char v269; // [rsp+7h] [rbp-2A1h]
  _QWORD *v270; // [rsp+10h] [rbp-298h]
  __int64 *v271; // [rsp+10h] [rbp-298h]
  __int64 v274; // [rsp+38h] [rbp-270h]
  _QWORD *v275; // [rsp+48h] [rbp-260h]
  char v276; // [rsp+5Fh] [rbp-249h] BYREF
  void *s1; // [rsp+60h] [rbp-248h] BYREF
  size_t v278; // [rsp+68h] [rbp-240h]
  _QWORD v279[2]; // [rsp+70h] [rbp-238h] BYREF
  _QWORD v280[4]; // [rsp+80h] [rbp-228h] BYREF
  _QWORD v281[4]; // [rsp+A0h] [rbp-208h] BYREF
  __int16 v282; // [rsp+C0h] [rbp-1E8h]
  _QWORD v283[4]; // [rsp+D0h] [rbp-1D8h] BYREF
  __int16 v284; // [rsp+F0h] [rbp-1B8h]
  __int64 *v285; // [rsp+100h] [rbp-1A8h] BYREF
  __int64 v286; // [rsp+108h] [rbp-1A0h]
  _BYTE v287[64]; // [rsp+110h] [rbp-198h] BYREF
  void *ptr; // [rsp+150h] [rbp-158h] BYREF
  __m128i v289; // [rsp+158h] [rbp-150h]
  __int64 v290; // [rsp+168h] [rbp-140h] BYREF
  void *v291; // [rsp+170h] [rbp-138h]
  _BYTE v292[16]; // [rsp+180h] [rbp-128h] BYREF
  __int16 v293; // [rsp+190h] [rbp-118h]

  if ( !(unsigned __int8)sub_21B7850(a2, 1915, 1463, 1) )
  {
    v53 = *(unsigned int *)(a3 + 8);
    if ( v53 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v53 + 1, 8);
      v53 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v53) = "-fno-use-init-array";
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (unsigned __int8)sub_12B9120(a1 + 16, (__int64)a2) )
  {
    if ( (unsigned __int8)sub_21B7850(a2, 2528, 2266, 0) )
    {
      sub_FC70B0((__int64)&ptr, **(_QWORD **)(a1 + 8), 0, 323);
      v121 = (unsigned __int8 *)ptr;
      if ( !ptr )
      {
        v201 = v289.m128i_i64[0];
        v202 = *(_DWORD *)(v289.m128i_i64[0] + 14976);
        if ( v202 )
        {
          v231 = (unsigned int)(v202 - 1);
          *(_DWORD *)(v289.m128i_i64[0] + 14976) = v231;
          v121 = *(unsigned __int8 **)(v201 + 8 * v231 + 14848);
          v232 = *((unsigned int *)v121 + 134);
          *v121 = 0;
          v233 = *((_QWORD *)v121 + 66);
          *((_DWORD *)v121 + 106) = 0;
          v234 = v233 + (v232 << 6);
          while ( v233 != v234 )
          {
            while ( 1 )
            {
              v234 -= 64;
              v235 = *(void **)(v234 + 24);
              if ( v235 == (void *)(v234 + 40) )
                break;
              operator delete(v235);
              if ( v233 == v234 )
                goto LABEL_361;
            }
          }
LABEL_361:
          *((_DWORD *)v121 + 134) = 0;
        }
        else
        {
          v121 = (unsigned __int8 *)operator new(0x3A0u);
          *v121 = 0;
          *((_QWORD *)v121 + 12) = v121 + 112;
          *((_QWORD *)v121 + 16) = v121 + 144;
          *((_QWORD *)v121 + 20) = v121 + 176;
          *((_QWORD *)v121 + 24) = v121 + 208;
          *((_QWORD *)v121 + 28) = v121 + 240;
          *((_QWORD *)v121 + 32) = v121 + 272;
          *((_QWORD *)v121 + 36) = v121 + 304;
          *((_QWORD *)v121 + 40) = v121 + 336;
          *((_QWORD *)v121 + 44) = v121 + 368;
          *((_QWORD *)v121 + 48) = v121 + 400;
          *((_QWORD *)v121 + 52) = v121 + 432;
          *((_QWORD *)v121 + 13) = 0;
          v121[112] = 0;
          *((_QWORD *)v121 + 17) = 0;
          v121[144] = 0;
          *((_QWORD *)v121 + 21) = 0;
          v121[176] = 0;
          *((_QWORD *)v121 + 25) = 0;
          v121[208] = 0;
          *((_QWORD *)v121 + 29) = 0;
          v121[240] = 0;
          *((_QWORD *)v121 + 33) = 0;
          v121[272] = 0;
          *((_QWORD *)v121 + 37) = 0;
          v121[304] = 0;
          *((_QWORD *)v121 + 41) = 0;
          v121[336] = 0;
          *((_QWORD *)v121 + 45) = 0;
          v121[368] = 0;
          *((_QWORD *)v121 + 49) = 0;
          v121[400] = 0;
          *((_QWORD *)v121 + 53) = 0x800000000LL;
          *((_QWORD *)v121 + 66) = v121 + 544;
          *((_QWORD *)v121 + 67) = 0x600000000LL;
        }
        ptr = v121;
      }
      v121[*v121 + 1] = 1;
      v122 = ptr;
      v123 = *(unsigned __int8 *)ptr;
      *(_BYTE *)ptr = v123 + 1;
      v122[v123 + 2] = "-pthread";
      v124 = (unsigned __int8 *)ptr;
      if ( !ptr )
      {
        v197 = v289.m128i_i64[0];
        v198 = *(_DWORD *)(v289.m128i_i64[0] + 14976);
        if ( v198 )
        {
          v221 = (unsigned int)(v198 - 1);
          *(_DWORD *)(v289.m128i_i64[0] + 14976) = v221;
          v124 = *(unsigned __int8 **)(v197 + 8 * v221 + 14848);
          v222 = *((unsigned int *)v124 + 134);
          *v124 = 0;
          v223 = *((_QWORD *)v124 + 66);
          *((_DWORD *)v124 + 106) = 0;
          v224 = v223 + (v222 << 6);
          while ( v223 != v224 )
          {
            while ( 1 )
            {
              v224 -= 64;
              v225 = *(void **)(v224 + 24);
              if ( v225 == (void *)(v224 + 40) )
                break;
              operator delete(v225);
              if ( v223 == v224 )
                goto LABEL_351;
            }
          }
LABEL_351:
          *((_DWORD *)v124 + 134) = 0;
        }
        else
        {
          v124 = (unsigned __int8 *)operator new(0x3A0u);
          *v124 = 0;
          *((_QWORD *)v124 + 12) = v124 + 112;
          *((_QWORD *)v124 + 16) = v124 + 144;
          *((_QWORD *)v124 + 20) = v124 + 176;
          *((_QWORD *)v124 + 24) = v124 + 208;
          *((_QWORD *)v124 + 28) = v124 + 240;
          *((_QWORD *)v124 + 32) = v124 + 272;
          *((_QWORD *)v124 + 36) = v124 + 304;
          *((_QWORD *)v124 + 40) = v124 + 336;
          *((_QWORD *)v124 + 44) = v124 + 368;
          *((_QWORD *)v124 + 48) = v124 + 400;
          *((_QWORD *)v124 + 52) = v124 + 432;
          *((_QWORD *)v124 + 13) = 0;
          v124[112] = 0;
          *((_QWORD *)v124 + 17) = 0;
          v124[144] = 0;
          *((_QWORD *)v124 + 21) = 0;
          v124[176] = 0;
          *((_QWORD *)v124 + 25) = 0;
          v124[208] = 0;
          *((_QWORD *)v124 + 29) = 0;
          v124[240] = 0;
          *((_QWORD *)v124 + 33) = 0;
          v124[272] = 0;
          *((_QWORD *)v124 + 37) = 0;
          v124[304] = 0;
          *((_QWORD *)v124 + 41) = 0;
          v124[336] = 0;
          *((_QWORD *)v124 + 45) = 0;
          v124[368] = 0;
          *((_QWORD *)v124 + 49) = 0;
          v124[400] = 0;
          *((_QWORD *)v124 + 53) = 0x800000000LL;
          *((_QWORD *)v124 + 66) = v124 + 544;
          *((_QWORD *)v124 + 67) = 0x600000000LL;
        }
        ptr = v124;
      }
      v124[*v124 + 1] = 1;
      v125 = ptr;
      v126 = *(unsigned __int8 *)ptr;
      *(_BYTE *)ptr = v126 + 1;
      v125[v126 + 2] = "-mno-atomics";
      if ( (_BYTE)v293 )
      {
        sub_FC7790(v289.m128i_i64[1], (__int64 *)&ptr, SHIBYTE(v293));
        v289.m128i_i64[1] = 0;
        v293 = 0;
      }
      if ( v291 != v292 )
        operator delete(v291);
      v127 = (void **)ptr;
      if ( ptr )
      {
        v128 = v289.m128i_i64[0];
        if ( v289.m128i_i64[0] )
        {
          if ( (unsigned __int64)ptr >= v289.m128i_i64[0] && (unsigned __int64)ptr <= v289.m128i_i64[0] + 14848 )
          {
            v247 = *(unsigned int *)(v289.m128i_i64[0] + 14976);
            *(_DWORD *)(v289.m128i_i64[0] + 14976) = v247 + 1;
            *(_QWORD *)(v128 + 8 * v247 + 14848) = v127;
          }
          else
          {
            v129 = *((void ***)ptr + 66);
            v130 = &v129[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
            if ( v129 != v130 )
            {
              do
              {
                while ( 1 )
                {
                  v130 -= 8;
                  v131 = (void **)v130[3];
                  if ( v131 == v130 + 5 )
                    break;
                  operator delete(v131);
                  if ( v129 == v130 )
                    goto LABEL_202;
                }
              }
              while ( v129 != v130 );
LABEL_202:
              v130 = (void **)v127[66];
            }
            if ( v130 != v127 + 68 )
              free(v130);
            v132 = (void **)v127[52];
            if ( v132 != v127 + 54 )
              free(v132);
            v133 = v127 + 48;
            v134 = v127 + 8;
            do
            {
              while ( *v133 != v133 + 2 )
              {
                operator delete(*v133);
                v133 -= 4;
                if ( v134 == v133 )
                  goto LABEL_210;
              }
              v133 -= 4;
            }
            while ( v133 != v134 );
LABEL_210:
            operator delete(v127, 0x3A0u);
          }
        }
      }
    }
    if ( (unsigned __int8)sub_21B7850(a2, 2560, 2304, 0) )
    {
      sub_FC70B0((__int64)&ptr, **(_QWORD **)(a1 + 8), 0, 323);
      v107 = (unsigned __int8 *)ptr;
      if ( !ptr )
      {
        v207 = v289.m128i_i64[0];
        v208 = *(_DWORD *)(v289.m128i_i64[0] + 14976);
        if ( v208 )
        {
          v248 = (unsigned int)(v208 - 1);
          *(_DWORD *)(v289.m128i_i64[0] + 14976) = v248;
          v107 = *(unsigned __int8 **)(v207 + 8 * v248 + 14848);
          v249 = *((unsigned int *)v107 + 134);
          *v107 = 0;
          v250 = *((_QWORD *)v107 + 66);
          *((_DWORD *)v107 + 106) = 0;
          v251 = v250 + (v249 << 6);
          while ( v250 != v251 )
          {
            while ( 1 )
            {
              v251 -= 64;
              v252 = *(void **)(v251 + 24);
              if ( v252 == (void *)(v251 + 40) )
                break;
              operator delete(v252);
              if ( v250 == v251 )
                goto LABEL_378;
            }
          }
LABEL_378:
          *((_DWORD *)v107 + 134) = 0;
        }
        else
        {
          v107 = (unsigned __int8 *)operator new(0x3A0u);
          *v107 = 0;
          *((_QWORD *)v107 + 12) = v107 + 112;
          *((_QWORD *)v107 + 16) = v107 + 144;
          *((_QWORD *)v107 + 20) = v107 + 176;
          *((_QWORD *)v107 + 24) = v107 + 208;
          *((_QWORD *)v107 + 28) = v107 + 240;
          *((_QWORD *)v107 + 32) = v107 + 272;
          *((_QWORD *)v107 + 36) = v107 + 304;
          *((_QWORD *)v107 + 40) = v107 + 336;
          *((_QWORD *)v107 + 44) = v107 + 368;
          *((_QWORD *)v107 + 48) = v107 + 400;
          *((_QWORD *)v107 + 52) = v107 + 432;
          *((_QWORD *)v107 + 13) = 0;
          v107[112] = 0;
          *((_QWORD *)v107 + 17) = 0;
          v107[144] = 0;
          *((_QWORD *)v107 + 21) = 0;
          v107[176] = 0;
          *((_QWORD *)v107 + 25) = 0;
          v107[208] = 0;
          *((_QWORD *)v107 + 29) = 0;
          v107[240] = 0;
          *((_QWORD *)v107 + 33) = 0;
          v107[272] = 0;
          *((_QWORD *)v107 + 37) = 0;
          v107[304] = 0;
          *((_QWORD *)v107 + 41) = 0;
          v107[336] = 0;
          *((_QWORD *)v107 + 45) = 0;
          v107[368] = 0;
          *((_QWORD *)v107 + 49) = 0;
          v107[400] = 0;
          *((_QWORD *)v107 + 53) = 0x800000000LL;
          *((_QWORD *)v107 + 66) = v107 + 544;
          *((_QWORD *)v107 + 67) = 0x600000000LL;
        }
        ptr = v107;
      }
      v107[*v107 + 1] = 1;
      v108 = ptr;
      v109 = *(unsigned __int8 *)ptr;
      *(_BYTE *)ptr = v109 + 1;
      v108[v109 + 2] = "-pthread";
      v110 = (unsigned __int8 *)ptr;
      if ( !ptr )
      {
        v203 = v289.m128i_i64[0];
        v204 = *(_DWORD *)(v289.m128i_i64[0] + 14976);
        if ( v204 )
        {
          v226 = (unsigned int)(v204 - 1);
          *(_DWORD *)(v289.m128i_i64[0] + 14976) = v226;
          v110 = *(unsigned __int8 **)(v203 + 8 * v226 + 14848);
          v227 = *((unsigned int *)v110 + 134);
          *v110 = 0;
          v228 = *((_QWORD *)v110 + 66);
          *((_DWORD *)v110 + 106) = 0;
          v229 = v228 + (v227 << 6);
          while ( v228 != v229 )
          {
            while ( 1 )
            {
              v229 -= 64;
              v230 = *(void **)(v229 + 24);
              if ( v230 == (void *)(v229 + 40) )
                break;
              operator delete(v230);
              if ( v228 == v229 )
                goto LABEL_356;
            }
          }
LABEL_356:
          *((_DWORD *)v110 + 134) = 0;
        }
        else
        {
          v110 = (unsigned __int8 *)operator new(0x3A0u);
          *v110 = 0;
          *((_QWORD *)v110 + 12) = v110 + 112;
          *((_QWORD *)v110 + 16) = v110 + 144;
          *((_QWORD *)v110 + 20) = v110 + 176;
          *((_QWORD *)v110 + 24) = v110 + 208;
          *((_QWORD *)v110 + 28) = v110 + 240;
          *((_QWORD *)v110 + 32) = v110 + 272;
          *((_QWORD *)v110 + 36) = v110 + 304;
          *((_QWORD *)v110 + 40) = v110 + 336;
          *((_QWORD *)v110 + 44) = v110 + 368;
          *((_QWORD *)v110 + 48) = v110 + 400;
          *((_QWORD *)v110 + 52) = v110 + 432;
          *((_QWORD *)v110 + 13) = 0;
          v110[112] = 0;
          *((_QWORD *)v110 + 17) = 0;
          v110[144] = 0;
          *((_QWORD *)v110 + 21) = 0;
          v110[176] = 0;
          *((_QWORD *)v110 + 25) = 0;
          v110[208] = 0;
          *((_QWORD *)v110 + 29) = 0;
          v110[240] = 0;
          *((_QWORD *)v110 + 33) = 0;
          v110[272] = 0;
          *((_QWORD *)v110 + 37) = 0;
          v110[304] = 0;
          *((_QWORD *)v110 + 41) = 0;
          v110[336] = 0;
          *((_QWORD *)v110 + 45) = 0;
          v110[368] = 0;
          *((_QWORD *)v110 + 49) = 0;
          v110[400] = 0;
          *((_QWORD *)v110 + 53) = 0x800000000LL;
          *((_QWORD *)v110 + 66) = v110 + 544;
          *((_QWORD *)v110 + 67) = 0x600000000LL;
        }
        ptr = v110;
      }
      v110[*v110 + 1] = 1;
      v111 = ptr;
      v112 = *(unsigned __int8 *)ptr;
      *(_BYTE *)ptr = v112 + 1;
      v111[v112 + 2] = "-mno-bulk-memory";
      if ( (_BYTE)v293 )
      {
        sub_FC7790(v289.m128i_i64[1], (__int64 *)&ptr, SHIBYTE(v293));
        v289.m128i_i64[1] = 0;
        v293 = 0;
      }
      if ( v291 != v292 )
        operator delete(v291);
      v113 = (void **)ptr;
      if ( ptr )
      {
        v114 = v289.m128i_i64[0];
        if ( v289.m128i_i64[0] )
        {
          if ( (unsigned __int64)ptr >= v289.m128i_i64[0] && (unsigned __int64)ptr <= v289.m128i_i64[0] + 14848 )
          {
            v210 = *(unsigned int *)(v289.m128i_i64[0] + 14976);
            *(_DWORD *)(v289.m128i_i64[0] + 14976) = v210 + 1;
            *(_QWORD *)(v114 + 8 * v210 + 14848) = v113;
          }
          else
          {
            v115 = *((void ***)ptr + 66);
            v116 = &v115[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
            if ( v115 != v116 )
            {
              do
              {
                while ( 1 )
                {
                  v116 -= 8;
                  v117 = (void **)v116[3];
                  if ( v117 == v116 + 5 )
                    break;
                  operator delete(v117);
                  if ( v115 == v116 )
                    goto LABEL_180;
                }
              }
              while ( v115 != v116 );
LABEL_180:
              v116 = (void **)v113[66];
            }
            if ( v116 != v113 + 68 )
              free(v116);
            v118 = (void **)v113[52];
            v119 = v113 + 52;
            if ( v118 != v113 + 54 )
              free(v118);
            v120 = v113 + 12;
            do
            {
              while ( 1 )
              {
                v119 -= 4;
                if ( *v119 == v119 + 2 )
                  break;
                operator delete(*v119);
                if ( v119 == v120 )
                  goto LABEL_188;
              }
            }
            while ( v119 != v120 );
LABEL_188:
            operator delete(v113, 0x3A0u);
          }
        }
      }
    }
    if ( (unsigned __int8)sub_21B7850(a2, 2659, 2502, 0) )
    {
      sub_FC70B0((__int64)&ptr, **(_QWORD **)(a1 + 8), 0, 323);
      v149 = (unsigned __int8 *)ptr;
      if ( !ptr )
      {
        v195 = v289.m128i_i64[0];
        v196 = *(_DWORD *)(v289.m128i_i64[0] + 14976);
        if ( v196 )
        {
          v211 = (unsigned int)(v196 - 1);
          *(_DWORD *)(v289.m128i_i64[0] + 14976) = v211;
          v149 = *(unsigned __int8 **)(v195 + 8 * v211 + 14848);
          v212 = *((unsigned int *)v149 + 134);
          *v149 = 0;
          v213 = *((_QWORD *)v149 + 66);
          *((_DWORD *)v149 + 106) = 0;
          v214 = v213 + (v212 << 6);
          while ( v213 != v214 )
          {
            while ( 1 )
            {
              v214 -= 64;
              v215 = *(void **)(v214 + 24);
              if ( v215 == (void *)(v214 + 40) )
                break;
              operator delete(v215);
              if ( v213 == v214 )
                goto LABEL_341;
            }
          }
LABEL_341:
          *((_DWORD *)v149 + 134) = 0;
        }
        else
        {
          v149 = (unsigned __int8 *)operator new(0x3A0u);
          *v149 = 0;
          *((_QWORD *)v149 + 12) = v149 + 112;
          *((_QWORD *)v149 + 16) = v149 + 144;
          *((_QWORD *)v149 + 20) = v149 + 176;
          *((_QWORD *)v149 + 24) = v149 + 208;
          *((_QWORD *)v149 + 28) = v149 + 240;
          *((_QWORD *)v149 + 32) = v149 + 272;
          *((_QWORD *)v149 + 36) = v149 + 304;
          *((_QWORD *)v149 + 40) = v149 + 336;
          *((_QWORD *)v149 + 44) = v149 + 368;
          *((_QWORD *)v149 + 48) = v149 + 400;
          *((_QWORD *)v149 + 52) = v149 + 432;
          *((_QWORD *)v149 + 13) = 0;
          v149[112] = 0;
          *((_QWORD *)v149 + 17) = 0;
          v149[144] = 0;
          *((_QWORD *)v149 + 21) = 0;
          v149[176] = 0;
          *((_QWORD *)v149 + 25) = 0;
          v149[208] = 0;
          *((_QWORD *)v149 + 29) = 0;
          v149[240] = 0;
          *((_QWORD *)v149 + 33) = 0;
          v149[272] = 0;
          *((_QWORD *)v149 + 37) = 0;
          v149[304] = 0;
          *((_QWORD *)v149 + 41) = 0;
          v149[336] = 0;
          *((_QWORD *)v149 + 45) = 0;
          v149[368] = 0;
          *((_QWORD *)v149 + 49) = 0;
          v149[400] = 0;
          *((_QWORD *)v149 + 53) = 0x800000000LL;
          *((_QWORD *)v149 + 66) = v149 + 544;
          *((_QWORD *)v149 + 67) = 0x600000000LL;
        }
        ptr = v149;
      }
      v149[*v149 + 1] = 1;
      v150 = ptr;
      v151 = *(unsigned __int8 *)ptr;
      *(_BYTE *)ptr = v151 + 1;
      v150[v151 + 2] = "-pthread";
      v152 = (unsigned __int8 *)ptr;
      if ( !ptr )
      {
        v193 = v289.m128i_i64[0];
        v194 = *(_DWORD *)(v289.m128i_i64[0] + 14976);
        if ( v194 )
        {
          v241 = (unsigned int)(v194 - 1);
          *(_DWORD *)(v289.m128i_i64[0] + 14976) = v241;
          v152 = *(unsigned __int8 **)(v193 + 8 * v241 + 14848);
          v242 = *((unsigned int *)v152 + 134);
          *v152 = 0;
          v243 = *((_QWORD *)v152 + 66);
          *((_DWORD *)v152 + 106) = 0;
          v244 = v243 + (v242 << 6);
          while ( v243 != v244 )
          {
            while ( 1 )
            {
              v244 -= 64;
              v245 = *(void **)(v244 + 24);
              if ( v245 == (void *)(v244 + 40) )
                break;
              operator delete(v245);
              if ( v243 == v244 )
                goto LABEL_371;
            }
          }
LABEL_371:
          *((_DWORD *)v152 + 134) = 0;
        }
        else
        {
          v152 = (unsigned __int8 *)operator new(0x3A0u);
          *v152 = 0;
          *((_QWORD *)v152 + 12) = v152 + 112;
          *((_QWORD *)v152 + 16) = v152 + 144;
          *((_QWORD *)v152 + 20) = v152 + 176;
          *((_QWORD *)v152 + 24) = v152 + 208;
          *((_QWORD *)v152 + 28) = v152 + 240;
          *((_QWORD *)v152 + 32) = v152 + 272;
          *((_QWORD *)v152 + 36) = v152 + 304;
          *((_QWORD *)v152 + 40) = v152 + 336;
          *((_QWORD *)v152 + 44) = v152 + 368;
          *((_QWORD *)v152 + 48) = v152 + 400;
          *((_QWORD *)v152 + 52) = v152 + 432;
          *((_QWORD *)v152 + 13) = 0;
          v152[112] = 0;
          *((_QWORD *)v152 + 17) = 0;
          v152[144] = 0;
          *((_QWORD *)v152 + 21) = 0;
          v152[176] = 0;
          *((_QWORD *)v152 + 25) = 0;
          v152[208] = 0;
          *((_QWORD *)v152 + 29) = 0;
          v152[240] = 0;
          *((_QWORD *)v152 + 33) = 0;
          v152[272] = 0;
          *((_QWORD *)v152 + 37) = 0;
          v152[304] = 0;
          *((_QWORD *)v152 + 41) = 0;
          v152[336] = 0;
          *((_QWORD *)v152 + 45) = 0;
          v152[368] = 0;
          *((_QWORD *)v152 + 49) = 0;
          v152[400] = 0;
          *((_QWORD *)v152 + 53) = 0x800000000LL;
          *((_QWORD *)v152 + 66) = v152 + 544;
          *((_QWORD *)v152 + 67) = 0x600000000LL;
        }
        ptr = v152;
      }
      v152[*v152 + 1] = 1;
      v153 = ptr;
      v154 = *(unsigned __int8 *)ptr;
      *(_BYTE *)ptr = v154 + 1;
      v153[v154 + 2] = "-mno-mutable-globals";
      if ( (_BYTE)v293 )
      {
        sub_FC7790(v289.m128i_i64[1], (__int64 *)&ptr, SHIBYTE(v293));
        v289.m128i_i64[1] = 0;
        v293 = 0;
      }
      if ( v291 != v292 )
        operator delete(v291);
      v155 = (void **)ptr;
      if ( ptr )
      {
        v156 = v289.m128i_i64[0];
        if ( v289.m128i_i64[0] )
        {
          if ( (unsigned __int64)ptr >= v289.m128i_i64[0] && (unsigned __int64)ptr <= v289.m128i_i64[0] + 14848 )
          {
            v246 = *(unsigned int *)(v289.m128i_i64[0] + 14976);
            *(_DWORD *)(v289.m128i_i64[0] + 14976) = v246 + 1;
            *(_QWORD *)(v156 + 8 * v246 + 14848) = v155;
          }
          else
          {
            v157 = *((void ***)ptr + 66);
            v158 = &v157[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
            if ( v157 != v158 )
            {
              do
              {
                while ( 1 )
                {
                  v158 -= 8;
                  v159 = (void **)v158[3];
                  if ( v159 == v158 + 5 )
                    break;
                  operator delete(v159);
                  if ( v157 == v158 )
                    goto LABEL_246;
                }
              }
              while ( v157 != v158 );
LABEL_246:
              v158 = (void **)v155[66];
            }
            if ( v158 != v155 + 68 )
              free(v158);
            v160 = (void **)v155[52];
            if ( v160 != v155 + 54 )
              free(v160);
            v161 = v155 + 48;
            v162 = v155 + 8;
            do
            {
              while ( *v161 != v161 + 2 )
              {
                operator delete(*v161);
                v161 -= 4;
                if ( v161 == v162 )
                  goto LABEL_254;
              }
              v161 -= 4;
            }
            while ( v161 != v162 );
LABEL_254:
            operator delete(v155, 0x3A0u);
          }
        }
      }
    }
    if ( (unsigned __int8)sub_21B7850(a2, 2717, 2861, 0) )
    {
      sub_FC70B0((__int64)&ptr, **(_QWORD **)(a1 + 8), 0, 323);
      v135 = (unsigned __int8 *)ptr;
      if ( !ptr )
      {
        v205 = v289.m128i_i64[0];
        v206 = *(_DWORD *)(v289.m128i_i64[0] + 14976);
        if ( v206 )
        {
          v236 = (unsigned int)(v206 - 1);
          *(_DWORD *)(v289.m128i_i64[0] + 14976) = v236;
          v135 = *(unsigned __int8 **)(v205 + 8 * v236 + 14848);
          v237 = *((unsigned int *)v135 + 134);
          *v135 = 0;
          v238 = *((_QWORD *)v135 + 66);
          *((_DWORD *)v135 + 106) = 0;
          v239 = v238 + (v237 << 6);
          while ( v238 != v239 )
          {
            while ( 1 )
            {
              v239 -= 64;
              v240 = *(void **)(v239 + 24);
              if ( v240 == (void *)(v239 + 40) )
                break;
              operator delete(v240);
              if ( v238 == v239 )
                goto LABEL_366;
            }
          }
LABEL_366:
          *((_DWORD *)v135 + 134) = 0;
        }
        else
        {
          v135 = (unsigned __int8 *)operator new(0x3A0u);
          *v135 = 0;
          *((_QWORD *)v135 + 12) = v135 + 112;
          *((_QWORD *)v135 + 16) = v135 + 144;
          *((_QWORD *)v135 + 20) = v135 + 176;
          *((_QWORD *)v135 + 24) = v135 + 208;
          *((_QWORD *)v135 + 28) = v135 + 240;
          *((_QWORD *)v135 + 32) = v135 + 272;
          *((_QWORD *)v135 + 36) = v135 + 304;
          *((_QWORD *)v135 + 40) = v135 + 336;
          *((_QWORD *)v135 + 44) = v135 + 368;
          *((_QWORD *)v135 + 48) = v135 + 400;
          *((_QWORD *)v135 + 52) = v135 + 432;
          *((_QWORD *)v135 + 13) = 0;
          v135[112] = 0;
          *((_QWORD *)v135 + 17) = 0;
          v135[144] = 0;
          *((_QWORD *)v135 + 21) = 0;
          v135[176] = 0;
          *((_QWORD *)v135 + 25) = 0;
          v135[208] = 0;
          *((_QWORD *)v135 + 29) = 0;
          v135[240] = 0;
          *((_QWORD *)v135 + 33) = 0;
          v135[272] = 0;
          *((_QWORD *)v135 + 37) = 0;
          v135[304] = 0;
          *((_QWORD *)v135 + 41) = 0;
          v135[336] = 0;
          *((_QWORD *)v135 + 45) = 0;
          v135[368] = 0;
          *((_QWORD *)v135 + 49) = 0;
          v135[400] = 0;
          *((_QWORD *)v135 + 53) = 0x800000000LL;
          *((_QWORD *)v135 + 66) = v135 + 544;
          *((_QWORD *)v135 + 67) = 0x600000000LL;
        }
        ptr = v135;
      }
      v135[*v135 + 1] = 1;
      v136 = ptr;
      v137 = *(unsigned __int8 *)ptr;
      *(_BYTE *)ptr = v137 + 1;
      v136[v137 + 2] = "-pthread";
      v138 = (unsigned __int8 *)ptr;
      if ( !ptr )
      {
        v199 = v289.m128i_i64[0];
        v200 = *(_DWORD *)(v289.m128i_i64[0] + 14976);
        if ( v200 )
        {
          v216 = (unsigned int)(v200 - 1);
          *(_DWORD *)(v289.m128i_i64[0] + 14976) = v216;
          v138 = *(unsigned __int8 **)(v199 + 8 * v216 + 14848);
          v217 = *((unsigned int *)v138 + 134);
          *v138 = 0;
          v218 = *((_QWORD *)v138 + 66);
          *((_DWORD *)v138 + 106) = 0;
          v219 = v218 + (v217 << 6);
          while ( v218 != v219 )
          {
            while ( 1 )
            {
              v219 -= 64;
              v220 = *(void **)(v219 + 24);
              if ( v220 == (void *)(v219 + 40) )
                break;
              operator delete(v220);
              if ( v218 == v219 )
                goto LABEL_346;
            }
          }
LABEL_346:
          *((_DWORD *)v138 + 134) = 0;
        }
        else
        {
          v138 = (unsigned __int8 *)operator new(0x3A0u);
          *v138 = 0;
          *((_QWORD *)v138 + 12) = v138 + 112;
          *((_QWORD *)v138 + 16) = v138 + 144;
          *((_QWORD *)v138 + 20) = v138 + 176;
          *((_QWORD *)v138 + 24) = v138 + 208;
          *((_QWORD *)v138 + 28) = v138 + 240;
          *((_QWORD *)v138 + 32) = v138 + 272;
          *((_QWORD *)v138 + 36) = v138 + 304;
          *((_QWORD *)v138 + 40) = v138 + 336;
          *((_QWORD *)v138 + 44) = v138 + 368;
          *((_QWORD *)v138 + 48) = v138 + 400;
          *((_QWORD *)v138 + 52) = v138 + 432;
          *((_QWORD *)v138 + 13) = 0;
          v138[112] = 0;
          *((_QWORD *)v138 + 17) = 0;
          v138[144] = 0;
          *((_QWORD *)v138 + 21) = 0;
          v138[176] = 0;
          *((_QWORD *)v138 + 25) = 0;
          v138[208] = 0;
          *((_QWORD *)v138 + 29) = 0;
          v138[240] = 0;
          *((_QWORD *)v138 + 33) = 0;
          v138[272] = 0;
          *((_QWORD *)v138 + 37) = 0;
          v138[304] = 0;
          *((_QWORD *)v138 + 41) = 0;
          v138[336] = 0;
          *((_QWORD *)v138 + 45) = 0;
          v138[368] = 0;
          *((_QWORD *)v138 + 49) = 0;
          v138[400] = 0;
          *((_QWORD *)v138 + 53) = 0x800000000LL;
          *((_QWORD *)v138 + 66) = v138 + 544;
          *((_QWORD *)v138 + 67) = 0x600000000LL;
        }
        ptr = v138;
      }
      v138[*v138 + 1] = 1;
      v139 = ptr;
      v140 = *(unsigned __int8 *)ptr;
      *(_BYTE *)ptr = v140 + 1;
      v139[v140 + 2] = "-mno-sign-ext";
      if ( (_BYTE)v293 )
      {
        sub_FC7790(v289.m128i_i64[1], (__int64 *)&ptr, SHIBYTE(v293));
        v289.m128i_i64[1] = 0;
        v293 = 0;
      }
      if ( v291 != v292 )
        operator delete(v291);
      v141 = (void **)ptr;
      if ( ptr )
      {
        v142 = v289.m128i_i64[0];
        if ( v289.m128i_i64[0] )
        {
          if ( (unsigned __int64)ptr >= v289.m128i_i64[0] && (unsigned __int64)ptr <= v289.m128i_i64[0] + 14848 )
          {
            v209 = *(unsigned int *)(v289.m128i_i64[0] + 14976);
            *(_DWORD *)(v289.m128i_i64[0] + 14976) = v209 + 1;
            *(_QWORD *)(v142 + 8 * v209 + 14848) = v141;
          }
          else
          {
            v143 = *((void ***)ptr + 66);
            v144 = &v143[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
            if ( v143 != v144 )
            {
              do
              {
                while ( 1 )
                {
                  v144 -= 8;
                  v145 = (void **)v144[3];
                  if ( v145 == v144 + 5 )
                    break;
                  operator delete(v145);
                  if ( v143 == v144 )
                    goto LABEL_224;
                }
              }
              while ( v143 != v144 );
LABEL_224:
              v144 = (void **)v141[66];
            }
            if ( v144 != v141 + 68 )
              free(v144);
            v146 = (void **)v141[52];
            v147 = v141 + 52;
            if ( v146 != v141 + 54 )
              free(v146);
            v148 = v141 + 12;
            do
            {
              while ( 1 )
              {
                v147 -= 4;
                if ( *v147 == v147 + 2 )
                  break;
                operator delete(*v147);
                if ( v147 == v148 )
                  goto LABEL_232;
              }
            }
            while ( v147 != v148 );
LABEL_232:
            operator delete(v141, 0x3A0u);
          }
        }
      }
    }
    v57 = *(unsigned int *)(a3 + 8);
    if ( v57 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v57 + 1, 8);
      v57 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v57) = "-target-feature";
    v58 = *(unsigned int *)(a3 + 12);
    v59 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v59;
    if ( v59 + 1 > v58 )
    {
      sub_2237220(a3, a3 + 16, v59 + 1, 8);
      v59 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v59) = "+atomics";
    v60 = *(unsigned int *)(a3 + 12);
    v61 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v61;
    if ( v61 + 1 > v60 )
    {
      sub_2237220(a3, a3 + 16, v61 + 1, 8);
      v61 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v61) = "-target-feature";
    v62 = *(unsigned int *)(a3 + 12);
    v63 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v63;
    if ( v63 + 1 > v62 )
    {
      sub_2237220(a3, a3 + 16, v63 + 1, 8);
      v63 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v63) = "+bulk-memory";
    v64 = *(unsigned int *)(a3 + 12);
    v65 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v65;
    if ( v65 + 1 > v64 )
    {
      sub_2237220(a3, a3 + 16, v65 + 1, 8);
      v65 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v65) = "-target-feature";
    v66 = *(unsigned int *)(a3 + 12);
    v67 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v67;
    if ( v67 + 1 > v66 )
    {
      sub_2237220(a3, a3 + 16, v67 + 1, 8);
      v67 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v67) = "+mutable-globals";
    v68 = *(unsigned int *)(a3 + 12);
    v69 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v69;
    if ( v69 + 1 > v68 )
    {
      sub_2237220(a3, a3 + 16, v69 + 1, 8);
      v69 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v69) = "-target-feature";
    v70 = *(unsigned int *)(a3 + 12);
    v71 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v71;
    if ( v71 + 1 > v70 )
    {
      sub_2237220(a3, a3 + 16, v71 + 1, 8);
      v71 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v71) = "+sign-ext";
    ++*(_DWORD *)(a3 + 8);
  }
  if ( !(unsigned __int8)sub_21B7850(a2, 2502, 2659, 0) )
  {
    sub_11C59A0((__int64)&ptr, (_DWORD *)a1, (__int64)a2);
    if ( v289.m128i_i32[0] == 1 )
    {
      if ( (unsigned __int8)sub_21B7850(a2, 2659, 2502, 0) )
      {
        sub_FC70B0((__int64)&ptr, **(_QWORD **)(a1 + 8), 0, 323);
        v177 = (unsigned __int8 *)ptr;
        if ( !ptr )
        {
          v256 = v289.m128i_i64[0];
          v257 = *(_DWORD *)(v289.m128i_i64[0] + 14976);
          if ( v257 )
          {
            v263 = (unsigned int)(v257 - 1);
            *(_DWORD *)(v289.m128i_i64[0] + 14976) = v263;
            v177 = *(unsigned __int8 **)(v256 + 8 * v263 + 14848);
            v264 = *((unsigned int *)v177 + 134);
            *v177 = 0;
            v265 = *((_QWORD *)v177 + 66);
            *((_DWORD *)v177 + 106) = 0;
            v266 = v265 + (v264 << 6);
            while ( v265 != v266 )
            {
              while ( 1 )
              {
                v266 -= 64;
                v267 = *(void **)(v266 + 24);
                if ( v267 == (void *)(v266 + 40) )
                  break;
                operator delete(v267);
                if ( v265 == v266 )
                  goto LABEL_396;
              }
            }
LABEL_396:
            *((_DWORD *)v177 + 134) = 0;
          }
          else
          {
            v177 = (unsigned __int8 *)operator new(0x3A0u);
            *v177 = 0;
            *((_QWORD *)v177 + 12) = v177 + 112;
            *((_QWORD *)v177 + 16) = v177 + 144;
            *((_QWORD *)v177 + 20) = v177 + 176;
            *((_QWORD *)v177 + 24) = v177 + 208;
            *((_QWORD *)v177 + 28) = v177 + 240;
            *((_QWORD *)v177 + 32) = v177 + 272;
            *((_QWORD *)v177 + 36) = v177 + 304;
            *((_QWORD *)v177 + 40) = v177 + 336;
            *((_QWORD *)v177 + 44) = v177 + 368;
            *((_QWORD *)v177 + 48) = v177 + 400;
            *((_QWORD *)v177 + 52) = v177 + 432;
            *((_QWORD *)v177 + 13) = 0;
            v177[112] = 0;
            *((_QWORD *)v177 + 17) = 0;
            v177[144] = 0;
            *((_QWORD *)v177 + 21) = 0;
            v177[176] = 0;
            *((_QWORD *)v177 + 25) = 0;
            v177[208] = 0;
            *((_QWORD *)v177 + 29) = 0;
            v177[240] = 0;
            *((_QWORD *)v177 + 33) = 0;
            v177[272] = 0;
            *((_QWORD *)v177 + 37) = 0;
            v177[304] = 0;
            *((_QWORD *)v177 + 41) = 0;
            v177[336] = 0;
            *((_QWORD *)v177 + 45) = 0;
            v177[368] = 0;
            *((_QWORD *)v177 + 49) = 0;
            v177[400] = 0;
            *((_QWORD *)v177 + 53) = 0x800000000LL;
            *((_QWORD *)v177 + 66) = v177 + 544;
            *((_QWORD *)v177 + 67) = 0x600000000LL;
          }
          ptr = v177;
        }
        v177[*v177 + 1] = 1;
        v178 = ptr;
        v179 = *(unsigned __int8 *)ptr;
        *(_BYTE *)ptr = v179 + 1;
        v178[v179 + 2] = "-fPIC";
        v180 = (unsigned __int8 *)ptr;
        if ( !ptr )
        {
          v254 = v289.m128i_i64[0];
          v255 = *(_DWORD *)(v289.m128i_i64[0] + 14976);
          if ( v255 )
          {
            v258 = (unsigned int)(v255 - 1);
            *(_DWORD *)(v289.m128i_i64[0] + 14976) = v258;
            v180 = *(unsigned __int8 **)(v254 + 8 * v258 + 14848);
            v259 = *((unsigned int *)v180 + 134);
            *v180 = 0;
            v260 = *((_QWORD *)v180 + 66);
            *((_DWORD *)v180 + 106) = 0;
            v261 = v260 + (v259 << 6);
            while ( v260 != v261 )
            {
              while ( 1 )
              {
                v261 -= 64;
                v262 = *(void **)(v261 + 24);
                if ( v262 == (void *)(v261 + 40) )
                  break;
                operator delete(v262);
                if ( v260 == v261 )
                  goto LABEL_391;
              }
            }
LABEL_391:
            *((_DWORD *)v180 + 134) = 0;
          }
          else
          {
            v180 = (unsigned __int8 *)operator new(0x3A0u);
            *v180 = 0;
            *((_QWORD *)v180 + 12) = v180 + 112;
            *((_QWORD *)v180 + 16) = v180 + 144;
            *((_QWORD *)v180 + 20) = v180 + 176;
            *((_QWORD *)v180 + 24) = v180 + 208;
            *((_QWORD *)v180 + 28) = v180 + 240;
            *((_QWORD *)v180 + 32) = v180 + 272;
            *((_QWORD *)v180 + 36) = v180 + 304;
            *((_QWORD *)v180 + 40) = v180 + 336;
            *((_QWORD *)v180 + 44) = v180 + 368;
            *((_QWORD *)v180 + 48) = v180 + 400;
            *((_QWORD *)v180 + 52) = v180 + 432;
            *((_QWORD *)v180 + 13) = 0;
            v180[112] = 0;
            *((_QWORD *)v180 + 17) = 0;
            v180[144] = 0;
            *((_QWORD *)v180 + 21) = 0;
            v180[176] = 0;
            *((_QWORD *)v180 + 25) = 0;
            v180[208] = 0;
            *((_QWORD *)v180 + 29) = 0;
            v180[240] = 0;
            *((_QWORD *)v180 + 33) = 0;
            v180[272] = 0;
            *((_QWORD *)v180 + 37) = 0;
            v180[304] = 0;
            *((_QWORD *)v180 + 41) = 0;
            v180[336] = 0;
            *((_QWORD *)v180 + 45) = 0;
            v180[368] = 0;
            *((_QWORD *)v180 + 49) = 0;
            v180[400] = 0;
            *((_QWORD *)v180 + 53) = 0x800000000LL;
            *((_QWORD *)v180 + 66) = v180 + 544;
            *((_QWORD *)v180 + 67) = 0x600000000LL;
          }
          ptr = v180;
        }
        v180[*v180 + 1] = 1;
        v181 = ptr;
        v182 = *(unsigned __int8 *)ptr;
        *(_BYTE *)ptr = v182 + 1;
        v181[v182 + 2] = "-mno-mutable-globals";
        if ( (_BYTE)v293 )
        {
          sub_FC7790(v289.m128i_i64[1], (__int64 *)&ptr, SHIBYTE(v293));
          v289.m128i_i64[1] = 0;
          v293 = 0;
        }
        if ( v291 != v292 )
          operator delete(v291);
        v183 = (void **)ptr;
        if ( ptr )
        {
          v184 = v289.m128i_i64[0];
          if ( v289.m128i_i64[0] )
          {
            if ( (unsigned __int64)ptr < v289.m128i_i64[0] || (unsigned __int64)ptr > v289.m128i_i64[0] + 14848 )
            {
              v185 = *((_QWORD *)ptr + 66);
              v186 = v185 + ((unsigned __int64)*((unsigned int *)ptr + 134) << 6);
              while ( v185 != v186 )
              {
                while ( 1 )
                {
                  v186 -= 64;
                  v187 = *(void **)(v186 + 24);
                  if ( v187 == (void *)(v186 + 40) )
                    break;
                  operator delete(v187);
                  if ( v185 == v186 )
                    goto LABEL_284;
                }
              }
LABEL_284:
              v188 = (void **)v183[66];
              if ( v188 != v183 + 68 )
                free(v188);
              v189 = (void **)v183[52];
              v190 = v183 + 52;
              if ( v189 != v183 + 54 )
                free(v189);
              v191 = v183 + 12;
              do
              {
                while ( 1 )
                {
                  v190 -= 4;
                  if ( *v190 == v190 + 2 )
                    break;
                  operator delete(*v190);
                  if ( v190 == v191 )
                    goto LABEL_291;
                }
              }
              while ( v190 != v191 );
LABEL_291:
              operator delete(v183, 0x3A0u);
            }
            else
            {
              v253 = *(unsigned int *)(v289.m128i_i64[0] + 14976);
              *(_DWORD *)(v289.m128i_i64[0] + 14976) = v253 + 1;
              *(_QWORD *)(v184 + 8 * v253 + 14848) = v183;
            }
          }
        }
      }
      v54 = *(unsigned int *)(a3 + 8);
      if ( v54 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, v54 + 1, 8);
        v54 = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v54) = "-target-feature";
      v55 = *(unsigned int *)(a3 + 12);
      v56 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
      *(_DWORD *)(a3 + 8) = v56;
      if ( v56 + 1 > v55 )
      {
        sub_2237220(a3, a3 + 16, v56 + 1, 8);
        v56 = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v56) = "+mutable-globals";
      ++*(_DWORD *)(a3 + 8);
    }
  }
  v276 = 0;
  v280[2] = a1;
  v280[1] = a2;
  v280[0] = &v276;
  LODWORD(ptr) = 1948;
  v4 = sub_21B6DA0(a2, &ptr, 1);
  v5 = a2[1];
  v6 = (_QWORD *)(v5 + 8LL * (unsigned int)v4);
  v7 = (_QWORD *)(v5 + 8 * HIDWORD(v4));
  if ( v6 == v7 )
    goto LABEL_8;
  while ( 1 )
  {
    if ( *v6 )
    {
      v8 = sub_21B9810(*v6, 1948);
      if ( v8 )
        break;
    }
    if ( v7 == ++v6 )
      goto LABEL_8;
  }
  v269 = v8;
  if ( v6 == v7 )
  {
LABEL_8:
    v269 = 0;
  }
  else
  {
    do
    {
      v9 = *(_QWORD *)(*v6 + 16LL);
      if ( !v9 )
        v9 = *v6;
      ++v6;
      *(_BYTE *)(v9 + 44) |= 1u;
      if ( v6 == v7 )
        break;
      while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 1948) )
      {
        if ( v7 == ++v6 )
          goto LABEL_16;
      }
    }
    while ( v6 != v7 );
LABEL_16:
    sub_12B9AA0(v280, "-fwasm-exceptions", 17);
    v10 = *(unsigned int *)(a3 + 8);
    if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v10 + 1, 8);
      v10 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v10) = "-target-feature";
    v11 = *(unsigned int *)(a3 + 12);
    v12 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v12;
    if ( v12 + 1 > v11 )
    {
      sub_2237220(a3, a3 + 16, v12 + 1, 8);
      v12 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v12) = "+exception-handling";
    v13 = *(unsigned int *)(a3 + 12);
    v14 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v14;
    if ( v14 + 1 > v13 )
    {
      sub_2237220(a3, a3 + 16, v14 + 1, 8);
      v14 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v14) = "-target-feature";
    v15 = *(unsigned int *)(a3 + 12);
    v16 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v16;
    if ( v16 + 1 > v15 )
    {
      sub_2237220(a3, a3 + 16, v16 + 1, 8);
      v16 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v16) = "+multivalue";
    v17 = *(unsigned int *)(a3 + 12);
    v18 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v18;
    if ( v18 + 1 > v17 )
    {
      sub_2237220(a3, a3 + 16, v18 + 1, 8);
      v18 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v18) = "-target-feature";
    v19 = *(unsigned int *)(a3 + 12);
    v20 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v20;
    if ( v20 + 1 > v19 )
    {
      sub_2237220(a3, a3 + 16, v20 + 1, 8);
      v20 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v20) = "+reference-types";
    v21 = *(unsigned int *)(a3 + 12);
    v22 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v22;
    if ( v22 + 1 > v21 )
    {
      sub_2237220(a3, a3 + 16, v22 + 1, 8);
      v22 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v22) = "-exception-model=wasm";
    v23 = *(unsigned int *)(a3 + 12);
    v24 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v24;
    if ( v24 + 1 > v23 )
    {
      sub_2237220(a3, a3 + 16, v24 + 1, 8);
      v24 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v24) = "-mllvm";
    v25 = *(unsigned int *)(a3 + 12);
    v26 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v26;
    if ( v26 + 1 > v25 )
    {
      sub_2237220(a3, a3 + 16, v26 + 1, 8);
      v26 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v26) = "-wasm-enable-eh";
    ++*(_DWORD *)(a3 + 8);
  }
  LODWORD(ptr) = 2465;
  v27 = sub_21B6DA0(a2, &ptr, 1);
  v28 = a2[1];
  v29 = (unsigned int)v27;
  v30 = v28 + 8 * HIDWORD(v27);
  v31 = (_QWORD *)(v28 + 8 * v29);
  v32 = v30;
  if ( v31 != (_QWORD *)v30 )
  {
    v33 = (_QWORD *)v30;
    do
    {
      if ( *v31 )
      {
        LODWORD(v30) = sub_21B9810(*v31, 2465);
        if ( (_BYTE)v30 )
          break;
      }
      ++v31;
    }
    while ( v33 != v31 );
  }
  v34 = (_QWORD *)v32;
  v35 = a3;
LABEL_41:
  if ( v34 != v31 )
  {
    v36 = **(_QWORD ***)(*v31 + 48LL);
    s1 = v36;
    if ( v36 )
    {
      v278 = strlen((const char *)v36);
      if ( v278 > 0x21
        && !(*v36 ^ 0x70697263736D652DLL | v36[1] ^ 0x2D7878632D6E6574LL)
        && !(v36[2] ^ 0x6F69747065637865LL | v36[3] ^ 0x776F6C6C612D736ELL)
        && *((_WORD *)v36 + 16) == 25701 )
      {
        LODWORD(ptr) = 2465;
        v72 = sub_21B6DA0(a2, &ptr, 1);
        v73 = a2[1];
        v74 = (_QWORD *)(v73 + 8LL * (unsigned int)v72);
        for ( i = (_QWORD *)(v73 + 8 * HIDWORD(v72)); i != v74; ++v74 )
        {
          if ( *v74 && (unsigned __int8)sub_21B9810(*v74, 2465) )
            break;
        }
        while ( i != v74 )
        {
          v76 = *(const char ***)(*v74 + 48LL);
          v77 = *v76;
          if ( *v76
            && strlen(*v76) == 33
            && !(*(_QWORD *)v77 ^ 0x2D656C62616E652DLL | *((_QWORD *)v77 + 1) ^ 0x7470697263736D65LL)
            && !(*((_QWORD *)v77 + 2) ^ 0x652D7878632D6E65LL | *((_QWORD *)v77 + 3) ^ 0x6E6F697470656378LL)
            && v77[32] == 115 )
          {
            goto LABEL_146;
          }
          if ( ++v74 == i )
            break;
          while ( !*v74 || !(unsigned __int8)sub_21B9810(*v74, 2465) )
          {
            if ( i == ++v74 )
              goto LABEL_124;
          }
        }
LABEL_124:
        sub_FC70B0((__int64)&ptr, **(_QWORD **)(a1 + 8), 0, 324);
        v78 = (unsigned __int8 *)ptr;
        if ( !ptr )
        {
          v170 = v289.m128i_i64[0];
          v171 = *(_DWORD *)(v289.m128i_i64[0] + 14976);
          if ( v171 )
          {
            v172 = (unsigned int)(v171 - 1);
            *(_DWORD *)(v289.m128i_i64[0] + 14976) = v172;
            v78 = *(unsigned __int8 **)(v170 + 8 * v172 + 14848);
            v173 = *((unsigned int *)v78 + 134);
            *v78 = 0;
            v174 = *((_QWORD *)v78 + 66);
            *((_DWORD *)v78 + 106) = 0;
            v175 = v174 + (v173 << 6);
            while ( v174 != v175 )
            {
              while ( 1 )
              {
                v175 -= 64;
                v176 = *(void **)(v175 + 24);
                if ( v176 == (void *)(v175 + 40) )
                  break;
                operator delete(v176);
                if ( v174 == v175 )
                  goto LABEL_266;
              }
            }
LABEL_266:
            *((_DWORD *)v78 + 134) = 0;
          }
          else
          {
            v78 = (unsigned __int8 *)operator new(0x3A0u);
            *v78 = 0;
            *((_QWORD *)v78 + 12) = v78 + 112;
            *((_QWORD *)v78 + 16) = v78 + 144;
            *((_QWORD *)v78 + 20) = v78 + 176;
            *((_QWORD *)v78 + 24) = v78 + 208;
            *((_QWORD *)v78 + 28) = v78 + 240;
            *((_QWORD *)v78 + 32) = v78 + 272;
            *((_QWORD *)v78 + 36) = v78 + 304;
            *((_QWORD *)v78 + 40) = v78 + 336;
            *((_QWORD *)v78 + 44) = v78 + 368;
            *((_QWORD *)v78 + 48) = v78 + 400;
            *((_QWORD *)v78 + 52) = v78 + 432;
            *((_QWORD *)v78 + 13) = 0;
            v78[112] = 0;
            *((_QWORD *)v78 + 17) = 0;
            v78[144] = 0;
            *((_QWORD *)v78 + 21) = 0;
            v78[176] = 0;
            *((_QWORD *)v78 + 25) = 0;
            v78[208] = 0;
            *((_QWORD *)v78 + 29) = 0;
            v78[240] = 0;
            *((_QWORD *)v78 + 33) = 0;
            v78[272] = 0;
            *((_QWORD *)v78 + 37) = 0;
            v78[304] = 0;
            *((_QWORD *)v78 + 41) = 0;
            v78[336] = 0;
            *((_QWORD *)v78 + 45) = 0;
            v78[368] = 0;
            *((_QWORD *)v78 + 49) = 0;
            v78[400] = 0;
            *((_QWORD *)v78 + 53) = 0x800000000LL;
            *((_QWORD *)v78 + 66) = v78 + 544;
            *((_QWORD *)v78 + 67) = 0x600000000LL;
          }
          ptr = v78;
        }
        v78[*v78 + 1] = 1;
        v79 = ptr;
        v80 = *(unsigned __int8 *)ptr;
        *(_BYTE *)ptr = v80 + 1;
        v79[v80 + 2] = "-mllvm -emscripten-cxx-exceptions-allowed";
        v81 = (unsigned __int8 *)ptr;
        if ( !ptr )
        {
          v163 = v289.m128i_i64[0];
          v164 = *(_DWORD *)(v289.m128i_i64[0] + 14976);
          if ( v164 )
          {
            v165 = (unsigned int)(v164 - 1);
            *(_DWORD *)(v289.m128i_i64[0] + 14976) = v165;
            v81 = *(unsigned __int8 **)(v163 + 8 * v165 + 14848);
            v166 = *((unsigned int *)v81 + 134);
            *v81 = 0;
            v167 = *((_QWORD *)v81 + 66);
            *((_DWORD *)v81 + 106) = 0;
            v168 = v167 + (v166 << 6);
            while ( v167 != v168 )
            {
              while ( 1 )
              {
                v168 -= 64;
                v169 = *(void **)(v168 + 24);
                if ( v169 == (void *)(v168 + 40) )
                  break;
                operator delete(v169);
                if ( v167 == v168 )
                  goto LABEL_260;
              }
            }
LABEL_260:
            *((_DWORD *)v81 + 134) = 0;
          }
          else
          {
            v81 = (unsigned __int8 *)operator new(0x3A0u);
            *v81 = 0;
            *((_QWORD *)v81 + 12) = v81 + 112;
            *((_QWORD *)v81 + 16) = v81 + 144;
            *((_QWORD *)v81 + 20) = v81 + 176;
            *((_QWORD *)v81 + 24) = v81 + 208;
            *((_QWORD *)v81 + 28) = v81 + 240;
            *((_QWORD *)v81 + 32) = v81 + 272;
            *((_QWORD *)v81 + 36) = v81 + 304;
            *((_QWORD *)v81 + 40) = v81 + 336;
            *((_QWORD *)v81 + 44) = v81 + 368;
            *((_QWORD *)v81 + 48) = v81 + 400;
            *((_QWORD *)v81 + 52) = v81 + 432;
            *((_QWORD *)v81 + 13) = 0;
            v81[112] = 0;
            *((_QWORD *)v81 + 17) = 0;
            v81[144] = 0;
            *((_QWORD *)v81 + 21) = 0;
            v81[176] = 0;
            *((_QWORD *)v81 + 25) = 0;
            v81[208] = 0;
            *((_QWORD *)v81 + 29) = 0;
            v81[240] = 0;
            *((_QWORD *)v81 + 33) = 0;
            v81[272] = 0;
            *((_QWORD *)v81 + 37) = 0;
            v81[304] = 0;
            *((_QWORD *)v81 + 41) = 0;
            v81[336] = 0;
            *((_QWORD *)v81 + 45) = 0;
            v81[368] = 0;
            *((_QWORD *)v81 + 49) = 0;
            v81[400] = 0;
            *((_QWORD *)v81 + 53) = 0x800000000LL;
            *((_QWORD *)v81 + 66) = v81 + 544;
            *((_QWORD *)v81 + 67) = 0x600000000LL;
          }
          ptr = v81;
        }
        v81[*v81 + 1] = 1;
        v82 = ptr;
        v83 = *(unsigned __int8 *)ptr;
        *(_BYTE *)ptr = v83 + 1;
        v82[v83 + 2] = "-mllvm -enable-emscripten-cxx-exceptions";
        if ( (_BYTE)v293 )
        {
          sub_FC7790(v289.m128i_i64[1], (__int64 *)&ptr, SHIBYTE(v293));
          v289.m128i_i64[1] = 0;
          v293 = 0;
        }
        if ( v291 != v292 )
          operator delete(v291);
        v84 = (void **)ptr;
        if ( ptr )
        {
          v85 = v289.m128i_i64[0];
          if ( v289.m128i_i64[0] )
          {
            if ( (unsigned __int64)ptr >= v289.m128i_i64[0] && (unsigned __int64)ptr <= v289.m128i_i64[0] + 14848 )
            {
              v192 = *(unsigned int *)(v289.m128i_i64[0] + 14976);
              *(_DWORD *)(v289.m128i_i64[0] + 14976) = v192 + 1;
              *(_QWORD *)(v85 + 8 * v192 + 14848) = v84;
            }
            else
            {
              v86 = *((void ***)ptr + 66);
              v87 = &v86[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
              if ( v86 != v87 )
              {
                do
                {
                  while ( 1 )
                  {
                    v87 -= 8;
                    v88 = (void **)v87[3];
                    if ( v88 == v87 + 5 )
                      break;
                    operator delete(v88);
                    if ( v86 == v87 )
                      goto LABEL_137;
                  }
                }
                while ( v86 != v87 );
LABEL_137:
                v87 = (void **)v84[66];
              }
              if ( v87 != v84 + 68 )
                free(v87);
              v89 = (void **)v84[52];
              if ( v89 != v84 + 54 )
                free(v89);
              v90 = v84 + 48;
              v91 = v84 + 8;
              do
              {
                while ( *v90 != v90 + 2 )
                {
                  operator delete(*v90);
                  v90 -= 4;
                  if ( v91 == v90 )
                    goto LABEL_145;
                }
                v90 -= 4;
              }
              while ( v91 != v90 );
LABEL_145:
              operator delete(v84, 0x3A0u);
            }
          }
        }
LABEL_146:
        LOBYTE(ptr) = 61;
        v92 = sub_2246AB0(&s1, &ptr, 1, 0);
        if ( v92 == -1 )
        {
          v95 = 0;
          v96 = nullptr;
        }
        else
        {
          v93 = v278;
          v94 = v92 + 1;
          v95 = 0;
          if ( v94 <= v278 )
          {
            v93 = v94;
            v95 = v278 - v94;
          }
          v96 = (char *)s1 + v93;
        }
        v279[0] = v96;
        v279[1] = v95;
        v285 = (__int64 *)v287;
        v286 = 0x400000000LL;
        sub_22476F0(v279, &v285, 44, 0xFFFFFFFFLL, 1);
        v97 = 2LL * (unsigned int)v286;
        v271 = &v285[v97];
        if ( v285 != &v285[v97] )
        {
          v275 = v34;
          v98 = *(unsigned int *)(v35 + 8);
          v99 = v285;
          v274 = v35 + 16;
          do
          {
            v100 = *v99;
            v101 = v99[1];
            if ( v98 + 1 > (unsigned __int64)*(unsigned int *)(v35 + 12) )
            {
              sub_2237220(v35, v274, v98 + 1, 8);
              v98 = *(unsigned int *)(v35 + 8);
            }
            si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
            *(_QWORD *)(*(_QWORD *)v35 + 8 * v98) = "-mllvm";
            v282 = 1283;
            v281[0] = "--force-attribute=";
            ++*(_DWORD *)(v35 + 8);
            v283[0] = v281;
            v283[2] = ":noinline";
            v103 = *a2;
            v281[3] = v101;
            v281[2] = v100;
            v284 = 770;
            ptr = &v290;
            v104 = *(__int64 (__fastcall **)(__int64 *, void *, __int64))(v103 + 16);
            v289 = si128;
            sub_22538C0(v283, &ptr);
            v105 = v104(a2, ptr, v289.m128i_i64[0]);
            if ( ptr != &v290 )
              free(ptr);
            v106 = *(unsigned int *)(v35 + 8);
            if ( v106 + 1 > (unsigned __int64)*(unsigned int *)(v35 + 12) )
            {
              sub_2237220(v35, v274, v106 + 1, 8);
              v106 = *(unsigned int *)(v35 + 8);
            }
            v99 += 2;
            *(_QWORD *)(*(_QWORD *)v35 + 8 * v106) = v105;
            v98 = (unsigned int)(*(_DWORD *)(v35 + 8) + 1);
            *(_DWORD *)(v35 + 8) = v98;
          }
          while ( v271 != v99 );
          v34 = v275;
          v271 = v285;
        }
        if ( v271 != (__int64 *)v287 )
          free(v271);
      }
    }
    else
    {
      v278 = 0;
    }
    v270 = v34;
    v37 = (const char **)off_2BAF260;
    while ( 1 )
    {
      v38 = *v37;
      if ( !*v37 )
        break;
      v30 = strlen(*v37);
      v39 = v30;
      if ( v30 <= v278 )
      {
        if ( !v30 || (LODWORD(v30) = memcmp(s1, v38, v30), !(_DWORD)v30) )
        {
          v40 = (char *)v38;
          goto LABEL_53;
        }
      }
LABEL_69:
      if ( algn_2BAF278 == (_BYTE *)++v37 )
      {
        v34 = v270;
        if ( ++v31 == v270 )
          return v30;
        while ( 1 )
        {
          if ( *v31 )
          {
            LODWORD(v30) = sub_21B9810(*v31, 2465);
            if ( (_BYTE)v30 )
              break;
          }
          if ( v270 == ++v31 )
            return v30;
        }
        goto LABEL_41;
      }
    }
    v40 = nullptr;
    v39 = 0;
LABEL_53:
    LODWORD(v30) = (unsigned int)sub_12B9AA0(v280, v40, v39);
    if ( !v269 )
    {
      v41 = *(unsigned int *)(v35 + 8);
      if ( v41 + 1 > (unsigned __int64)*(unsigned int *)(v35 + 12) )
      {
        sub_2237220(v35, v35 + 16, v41 + 1, 8);
        v41 = *(unsigned int *)(v35 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v35 + 8 * v41) = "-target-feature";
      v42 = *(unsigned int *)(v35 + 12);
      v43 = (unsigned int)(*(_DWORD *)(v35 + 8) + 1);
      *(_DWORD *)(v35 + 8) = v43;
      if ( v43 + 1 > v42 )
      {
        sub_2237220(v35, v35 + 16, v43 + 1, 8);
        v43 = *(unsigned int *)(v35 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v35 + 8 * v43) = "+exception-handling";
      v44 = *(unsigned int *)(v35 + 12);
      v45 = (unsigned int)(*(_DWORD *)(v35 + 8) + 1);
      *(_DWORD *)(v35 + 8) = v45;
      if ( v45 + 1 > v44 )
      {
        sub_2237220(v35, v35 + 16, v45 + 1, 8);
        v45 = *(unsigned int *)(v35 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v35 + 8 * v45) = "-target-feature";
      v46 = *(unsigned int *)(v35 + 12);
      v47 = (unsigned int)(*(_DWORD *)(v35 + 8) + 1);
      *(_DWORD *)(v35 + 8) = v47;
      if ( v47 + 1 > v46 )
      {
        sub_2237220(v35, v35 + 16, v47 + 1, 8);
        v47 = *(unsigned int *)(v35 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v35 + 8 * v47) = "+multivalue";
      v48 = *(unsigned int *)(v35 + 12);
      v49 = (unsigned int)(*(_DWORD *)(v35 + 8) + 1);
      *(_DWORD *)(v35 + 8) = v49;
      if ( v49 + 1 > v48 )
      {
        sub_2237220(v35, v35 + 16, v49 + 1, 8);
        v49 = *(unsigned int *)(v35 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v35 + 8 * v49) = "-target-feature";
      v50 = *(unsigned int *)(v35 + 12);
      v51 = (unsigned int)(*(_DWORD *)(v35 + 8) + 1);
      *(_DWORD *)(v35 + 8) = v51;
      if ( v51 + 1 > v50 )
      {
        sub_2237220(v35, v35 + 16, v51 + 1, 8);
        v51 = *(unsigned int *)(v35 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v35 + 8 * v51) = "+reference-types";
      v52 = *(unsigned int *)(v35 + 12);
      v30 = (unsigned int)(*(_DWORD *)(v35 + 8) + 1);
      *(_DWORD *)(v35 + 8) = v30;
      if ( v30 + 1 > v52 )
      {
        sub_2237220(v35, v35 + 16, v30 + 1, 8);
        v30 = *(unsigned int *)(v35 + 8);
      }
      v269 = 1;
      *(_QWORD *)(*(_QWORD *)v35 + 8 * v30) = "-exception-model=wasm";
      ++*(_DWORD *)(v35 + 8);
    }
    goto LABEL_69;
  }
  return v30;
}
