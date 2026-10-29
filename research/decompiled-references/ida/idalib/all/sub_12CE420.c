void __fastcall sub_12CE420(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  __int64 v4; // rax
  unsigned int *v6; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // r12
  _QWORD *v12; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // r12
  _QWORD *v16; // rbp
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // r13
  _QWORD *v20; // r12
  void **v21; // rbp
  void **v22; // rax
  __int64 *v23; // r15
  __int64 v24; // xmm1_8^8
  size_t v25; // r12
  void *v26; // rax
  __int64 v27; // rdx
  void *v28; // rsi
  __int64 v29; // rax
  void *v30; // rax
  __int64 v31; // rcx
  __int64 *v32; // rdi
  void **v33; // r12
  __int64 *v34; // rbp
  __int64 v35; // xmm2_8^8
  void *v36; // rax
  size_t v37; // r13
  __int64 v38; // rdx
  void *v39; // rsi
  __int64 v40; // rax
  void *v41; // rax
  __int64 v42; // rcx
  __int64 *v43; // rdi
  __int64 v44; // r15
  __int64 v45; // r12
  __int64 *v46; // rbp
  __int64 v47; // xmm3_8^8
  const void *v48; // rax
  size_t v49; // r13
  __int64 v50; // rdx
  void *v51; // rsi
  __int64 v52; // rax
  void *v53; // rax
  __int64 v54; // rcx
  __int64 *v55; // rdi
  __int64 v56; // r15
  __int64 v57; // rbp
  __int64 *v58; // r12
  __int64 v59; // xmm4_8^8
  size_t v60; // r13
  const void *v61; // rax
  __int64 v62; // rdx
  void *v63; // rsi
  __int64 v64; // rax
  void *v65; // rax
  __int64 v66; // rcx
  __int64 *v67; // rdi
  void **v68; // rbp
  __int64 *v69; // r12
  __int64 v70; // xmm5_8^8
  size_t v71; // r15
  void *v72; // rax
  __int64 v73; // rdx
  void *v74; // rsi
  __int64 v75; // rax
  void *v76; // rax
  __int64 v77; // rcx
  __int64 *v78; // rdi
  __int64 *v79; // rsi
  __int64 v80; // rax
  int v81; // eax
  void **v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rcx
  void **v86; // rax
  void **v87; // rdi
  __int64 v88; // r15
  __int64 v89; // rax
  const char **v90; // rax
  size_t v91; // rbp
  const char *v92; // r12
  __int64 *v93; // r13
  _BYTE *v94; // rsi
  __int64 v95; // rcx
  unsigned __int8 *v96; // r15
  _QWORD *v97; // rax
  _QWORD *v98; // rdx
  __int64 v99; // r8
  __int64 v100; // rax
  _QWORD *v101; // rcx
  _BYTE *v102; // rdi
  __int64 v103; // rax
  unsigned __int8 *v104; // r15
  _QWORD *v105; // rax
  _QWORD *v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rax
  void **v110; // rbp
  _BYTE *v111; // rdi
  __int64 v112; // rax
  void **v113; // rbp
  unsigned __int64 v114; // rax
  void **v115; // r13
  void **v116; // r12
  void **v117; // rdi
  void **v118; // rdi
  void **v119; // r13
  void **v120; // r12
  __int64 v121; // r15
  __int64 v122; // rax
  const char **v123; // rax
  size_t v124; // rbp
  const char *v125; // r12
  __int64 *v126; // r13
  _BYTE *v127; // rsi
  __int64 v128; // rcx
  unsigned __int8 *v129; // r15
  _QWORD *v130; // rax
  _QWORD *v131; // rdx
  __int64 v132; // r8
  __int64 v133; // rax
  _QWORD *v134; // rcx
  _BYTE *v135; // rdi
  __int64 v136; // rax
  unsigned __int8 *v137; // r15
  _QWORD *v138; // rax
  _QWORD *v139; // rdx
  __int64 v140; // rax
  __int64 v141; // rcx
  __int64 v142; // rax
  void **v143; // rbp
  _BYTE *v144; // rdi
  __int64 v145; // rax
  void **v146; // rbp
  unsigned __int64 v147; // rax
  void **v148; // r13
  void **v149; // r12
  void **v150; // rdi
  void **v151; // rdi
  void **v152; // r13
  void **v153; // r12
  char *v154; // rdi
  char *v155; // rdi
  char *v156; // rdi
  char *v157; // rdi
  char *v158; // rdi
  _QWORD *v159; // rbp
  __int64 v160; // rax
  const char **v161; // rax
  size_t v162; // r12
  const char *v163; // r13
  char *v164; // r15
  unsigned __int8 *v165; // rax
  _BYTE *v166; // rsi
  __int64 v167; // r8
  char *v168; // rcx
  _QWORD *v169; // rax
  _QWORD *v170; // rdx
  __int64 v171; // r9
  __int64 v172; // rax
  __int64 v173; // r8
  _BYTE *v174; // rdi
  __int64 v175; // rax
  unsigned __int8 *v176; // rax
  _QWORD *v177; // rax
  _QWORD *v178; // rdx
  __int64 v179; // r8
  __int64 v180; // rax
  void **v181; // r12
  _BYTE *v182; // rdi
  __int64 v183; // rax
  void **v184; // r12
  __int64 v185; // rax
  void **v186; // r15
  void **v187; // r13
  void **v188; // rdi
  void **v189; // rdi
  void **v190; // r13
  void **v191; // r15
  char *v192; // rdx
  char *v193; // rdx
  size_t v194; // rdx
  size_t v195; // rdx
  size_t v196; // rdx
  size_t v197; // rdx
  __int64 v198; // rdx
  __int64 v199; // rdx
  size_t v200; // rdx
  size_t v201; // rdx
  __int64 v202; // rdx
  __int64 v203; // rdx
  int v204; // eax
  __int64 v205; // rax
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // rdx
  __int64 v209; // rbp
  __int64 v210; // r15
  __int64 v211; // rbx
  void *v212; // rdi
  __int64 v213; // rdx
  int v214; // eax
  __int64 v215; // rax
  __int64 v216; // rdx
  __int64 v217; // rsi
  __int64 v218; // rdx
  unsigned __int8 *v219; // r15
  __int64 v220; // rbx
  void *v221; // rdi
  unsigned __int64 v222; // rdx
  int v223; // eax
  __int64 v224; // rax
  __int64 v225; // rax
  __int64 v226; // rcx
  __int64 v227; // rax
  __int64 *v228; // r14
  size_t v229; // r13
  __int64 v230; // rbp
  __int64 v231; // rbx
  void *v232; // rdi
  unsigned __int64 v233; // rdx
  int v234; // eax
  __int64 v235; // rax
  __int64 v236; // rax
  __int64 v237; // rdx
  __int64 v238; // rax
  size_t v239; // r15
  __int64 v240; // rbp
  const char *v241; // r14
  __int64 v242; // r12
  __int64 v243; // rbx
  void *v244; // rdi
  unsigned __int64 v245; // rdx
  int v246; // eax
  __int64 v247; // rax
  __int64 v248; // rax
  __int64 v249; // rcx
  __int64 v250; // rax
  __int64 *v251; // r14
  const char *v252; // r13
  size_t v253; // r12
  __int64 v254; // rbp
  __int64 v255; // rbx
  void *v256; // rdi
  unsigned __int64 v257; // rdx
  int v258; // eax
  __int64 v259; // rax
  __int64 v260; // rax
  __int64 v261; // rdx
  __int64 v262; // rax
  __int64 v263; // r15
  const char *v264; // r13
  size_t v265; // r12
  __int64 v266; // rbp
  __int64 v267; // rbx
  void *v268; // rdi
  void **v269; // rcx
  __m128i si128; // [rsp+0h] [rbp-2A8h] BYREF
  void **p_ptr; // [rsp+10h] [rbp-298h]
  void *v272; // [rsp+18h] [rbp-290h]
  __int64 v273; // [rsp+20h] [rbp-288h]
  void *src; // [rsp+28h] [rbp-280h]
  void *v275; // [rsp+30h] [rbp-278h]
  void *v276; // [rsp+38h] [rbp-270h]
  unsigned int *v277; // [rsp+40h] [rbp-268h]
  unsigned int *v278; // [rsp+48h] [rbp-260h]
  void *v279; // [rsp+50h] [rbp-258h] BYREF
  size_t v280; // [rsp+58h] [rbp-250h]
  void *v281; // [rsp+70h] [rbp-238h] BYREF
  size_t v282; // [rsp+78h] [rbp-230h]
  void *v283; // [rsp+90h] [rbp-218h] BYREF
  size_t n; // [rsp+98h] [rbp-210h]
  void *v285; // [rsp+B0h] [rbp-1F8h]
  size_t v286; // [rsp+B8h] [rbp-1F0h]
  _QWORD v287[2]; // [rsp+C0h] [rbp-1E8h] BYREF
  void *v288; // [rsp+D0h] [rbp-1D8h]
  size_t v289; // [rsp+D8h] [rbp-1D0h]
  _QWORD v290[2]; // [rsp+E0h] [rbp-1C8h] BYREF
  void *v291; // [rsp+F0h] [rbp-1B8h]
  size_t v292; // [rsp+F8h] [rbp-1B0h]
  _QWORD v293[2]; // [rsp+100h] [rbp-1A8h] BYREF
  void *v294; // [rsp+110h] [rbp-198h]
  size_t v295; // [rsp+118h] [rbp-190h]
  _QWORD v296[2]; // [rsp+120h] [rbp-188h] BYREF
  void *v297; // [rsp+130h] [rbp-178h] BYREF
  size_t v298; // [rsp+138h] [rbp-170h]
  _QWORD v299[2]; // [rsp+140h] [rbp-168h] BYREF
  void *v300; // [rsp+150h] [rbp-158h] BYREF
  size_t v301; // [rsp+158h] [rbp-150h]
  _QWORD v302[2]; // [rsp+160h] [rbp-148h] BYREF
  void *v303; // [rsp+170h] [rbp-138h] BYREF
  unsigned __int64 v304; // [rsp+178h] [rbp-130h]
  __int64 v305; // [rsp+180h] [rbp-128h]
  void *v306; // [rsp+190h] [rbp-118h]
  __int16 v307; // [rsp+1B0h] [rbp-F8h]
  void *v308; // [rsp+1C0h] [rbp-E8h] BYREF
  unsigned __int64 v309; // [rsp+1C8h] [rbp-E0h]
  __int64 v310; // [rsp+1D0h] [rbp-D8h]
  void *v311; // [rsp+1E0h] [rbp-C8h]
  __int16 v312; // [rsp+200h] [rbp-A8h]
  void *ptr; // [rsp+210h] [rbp-98h] BYREF
  __m128i v314; // [rsp+218h] [rbp-90h]
  __m128i v315; // [rsp+228h] [rbp-80h]
  __int16 v316; // [rsp+246h] [rbp-62h]
  __int16 v317; // [rsp+250h] [rbp-58h]

  v4 = *(_QWORD *)(a1 + 128);
  if ( !v4 )
    return;
  v6 = a4;
  v8 = *(_QWORD *)(a2 + 8);
  v273 = a1;
  si128.m128i_i64[0] = v8;
  sub_21B5A40(v4, a3, a4);
  sub_21B73E0(a3, v6, 1960, 1488);
  sub_21B73E0(a3, v6, 1961, 1489);
  sub_21B73E0(a3, v6, 1966, 1491);
  sub_21B73E0(a3, v6, 1490, 1965);
  if ( *(_BYTE *)(a1 + 137) )
    sub_21B73E0(a3, v6, 1974, 1494);
  LODWORD(ptr) = 1967;
  p_ptr = &ptr;
  v9 = sub_21B6DA0(a3, &ptr, 1);
  v10 = a3[1];
  v11 = (_QWORD *)(v10 + 8LL * (unsigned int)v9);
  v12 = (_QWORD *)(v10 + 8 * HIDWORD(v9));
  if ( v11 != v12 )
  {
    while ( !*v11 || !(unsigned __int8)sub_21B9810(*v11, 1967) )
    {
      if ( v12 == ++v11 )
        goto LABEL_8;
    }
    if ( v12 != v11 )
    {
      do
      {
        v88 = *v11;
        v89 = *(_QWORD *)(*v11 + 16LL);
        if ( !v89 )
          v89 = *v11;
        ++v11;
        *(_BYTE *)(v89 + 44) |= 1u;
        if ( v11 == v12 )
          break;
        while ( !*v11 || !(unsigned __int8)sub_21B9810(*v11, 1967) )
        {
          if ( v12 == ++v11 )
            goto LABEL_75;
        }
      }
      while ( v12 != v11 );
LABEL_75:
      v90 = *(const char ***)(v88 + 48);
      v91 = 0;
      v92 = *v90;
      if ( *v90 )
        v91 = strlen(*v90);
      if ( !(unsigned __int8)sub_2247A50(v92, v91, 0, p_ptr) && (void *)(int)ptr == ptr && (int)ptr >= 0 )
      {
        sub_21B5A40(v88, a3, v6);
        goto LABEL_8;
      }
      v93 = (__int64 *)&v303;
      sub_FC70B0((__int64)&v303, *(_QWORD *)si128.m128i_i64[0], 0, 400);
      v272 = &v279;
      sub_21B5FF0(&v279, v88, a3);
      v94 = v279;
      v95 = v280;
      v96 = (unsigned __int8 *)v303;
      if ( !v303 )
      {
        v233 = v304;
        v234 = *(_DWORD *)(v304 + 14976);
        if ( v234 )
        {
          v235 = (unsigned int)(v234 - 1);
          *(_DWORD *)(v304 + 14976) = v235;
          v96 = *(unsigned __int8 **)(v233 + 8 * v235 + 14848);
          v236 = *((unsigned int *)v96 + 134);
          *v96 = 0;
          v237 = *((_QWORD *)v96 + 66);
          *((_DWORD *)v96 + 106) = 0;
          v238 = v237 + (v236 << 6);
          if ( v237 != v238 )
          {
            src = v96;
            v239 = v91;
            v240 = v237;
            v275 = &v303;
            v276 = a3;
            v241 = v92;
            v242 = v95;
            v277 = v6;
            v243 = v238;
            do
            {
              while ( 1 )
              {
                v243 -= 64;
                v244 = *(void **)(v243 + 24);
                if ( v244 == (void *)(v243 + 40) )
                  break;
                operator delete(v244);
                if ( v240 == v243 )
                  goto LABEL_396;
              }
            }
            while ( v240 != v243 );
LABEL_396:
            v95 = v242;
            v92 = v241;
            v91 = v239;
            v93 = (__int64 *)v275;
            v96 = (unsigned __int8 *)src;
            a3 = v276;
            v6 = v277;
          }
          *((_DWORD *)v96 + 134) = 0;
        }
        else
        {
          v275 = v279;
          src = (void *)v280;
          v96 = (unsigned __int8 *)operator new(0x3A0u);
          *v96 = 0;
          *((_QWORD *)v96 + 12) = v96 + 112;
          *((_QWORD *)v96 + 16) = v96 + 144;
          *((_QWORD *)v96 + 20) = v96 + 176;
          *((_QWORD *)v96 + 24) = v96 + 208;
          *((_QWORD *)v96 + 28) = v96 + 240;
          *((_QWORD *)v96 + 32) = v96 + 272;
          *((_QWORD *)v96 + 36) = v96 + 304;
          *((_QWORD *)v96 + 40) = v96 + 336;
          *((_QWORD *)v96 + 44) = v96 + 368;
          *((_QWORD *)v96 + 48) = v96 + 400;
          *((_QWORD *)v96 + 52) = v96 + 432;
          *((_QWORD *)v96 + 13) = 0;
          v96[112] = 0;
          *((_QWORD *)v96 + 17) = 0;
          v96[144] = 0;
          *((_QWORD *)v96 + 21) = 0;
          v96[176] = 0;
          *((_QWORD *)v96 + 25) = 0;
          v96[208] = 0;
          *((_QWORD *)v96 + 29) = 0;
          v96[240] = 0;
          *((_QWORD *)v96 + 33) = 0;
          v96[272] = 0;
          *((_QWORD *)v96 + 37) = 0;
          v96[304] = 0;
          *((_QWORD *)v96 + 41) = 0;
          v96[336] = 0;
          *((_QWORD *)v96 + 45) = 0;
          v96[368] = 0;
          *((_QWORD *)v96 + 49) = 0;
          v96[400] = 0;
          *((_QWORD *)v96 + 53) = 0x800000000LL;
          v95 = (__int64)src;
          *((_QWORD *)v96 + 66) = v96 + 544;
          v94 = v275;
          *((_QWORD *)v96 + 67) = 0x600000000LL;
        }
        v303 = v96;
      }
      v96[*v96 + 1] = 0;
      v288 = v290;
      if ( &v94[v95] && !v94 )
        goto LABEL_447;
      if ( (unsigned __int64)v95 > 0xF )
      {
        if ( v95 < 0 )
          goto LABEL_446;
        v275 = v94;
        src = (void *)v95;
        v97 = (_QWORD *)operator new(v95 + 1);
        v95 = (__int64)src;
        v288 = v97;
        v290[0] = src;
      }
      else
      {
        if ( v95 == 1 )
        {
          LOBYTE(v290[0]) = *v94;
          v97 = v290;
          goto LABEL_85;
        }
        v97 = v290;
        if ( !v95 )
        {
LABEL_85:
          v289 = v95;
          *((_BYTE *)v97 + v95) = 0;
          v98 = v303;
          v99 = *(unsigned __int8 *)v303;
          *(_BYTE *)v303 = v99 + 1;
          v100 = 4 * (v99 + 3);
          v101 = &v98[v100];
          v102 = (_BYTE *)v98[v100];
          if ( v288 == v290 )
          {
            v196 = v289;
            if ( v289 )
            {
              if ( v289 == 1 )
              {
                *v102 = v290[0];
                v196 = v289;
                v102 = (_BYTE *)*v101;
              }
              else
              {
                src = v101;
                memcpy(v102, v288, v289);
                v101 = src;
                v196 = v289;
                v102 = *(_BYTE **)src;
              }
            }
            v101[1] = v196;
            v102[v196] = 0;
            v102 = v288;
          }
          else
          {
            if ( v102 == (_BYTE *)&v98[v100 + 2] )
            {
              *v101 = v288;
              v101[1] = v289;
              v101[2] = v290[0];
            }
            else
            {
              v103 = v98[4 * (int)v99 + 14];
              *v101 = v288;
              v101[1] = v289;
              v101[2] = v290[0];
              if ( v102 )
              {
                v288 = v102;
                v290[0] = v103;
                goto LABEL_89;
              }
            }
            v102 = v290;
            v288 = v290;
          }
LABEL_89:
          v289 = 0;
          *v102 = 0;
          if ( v288 != v290 )
            operator delete(v288);
          v104 = (unsigned __int8 *)v303;
          if ( !v303 )
          {
            v222 = v304;
            v223 = *(_DWORD *)(v304 + 14976);
            if ( v223 )
            {
              v224 = (unsigned int)(v223 - 1);
              *(_DWORD *)(v304 + 14976) = v224;
              v104 = *(unsigned __int8 **)(v222 + 8 * v224 + 14848);
              v225 = *((unsigned int *)v104 + 134);
              *v104 = 0;
              v226 = *((_QWORD *)v104 + 66);
              *((_DWORD *)v104 + 106) = 0;
              v227 = v226 + (v225 << 6);
              if ( v226 != v227 )
              {
                src = a3;
                v228 = v93;
                v229 = v91;
                v230 = v226;
                v275 = v6;
                v231 = v227;
                do
                {
                  while ( 1 )
                  {
                    v231 -= 64;
                    v232 = *(void **)(v231 + 24);
                    if ( v232 == (void *)(v231 + 40) )
                      break;
                    operator delete(v232);
                    if ( v230 == v231 )
                      goto LABEL_389;
                  }
                }
                while ( v230 != v231 );
LABEL_389:
                v91 = v229;
                v6 = (unsigned int *)v275;
                v93 = v228;
                a3 = src;
              }
              *((_DWORD *)v104 + 134) = 0;
            }
            else
            {
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
              *((_QWORD *)v104 + 66) = v104 + 544;
              *((_QWORD *)v104 + 67) = 0x600000000LL;
            }
            v303 = v104;
          }
          v104[*v104 + 1] = 0;
          v285 = v287;
          if ( &v92[v91] && !v92 )
            goto LABEL_447;
          if ( v91 > 0xF )
          {
            v105 = (_QWORD *)operator new(v91 + 1);
            v287[0] = v91;
            v285 = v105;
          }
          else
          {
            if ( v91 == 1 )
            {
              LOBYTE(v287[0]) = *v92;
              v105 = v287;
              goto LABEL_97;
            }
            v105 = v287;
            if ( !v91 )
            {
LABEL_97:
              v286 = v91;
              *((_BYTE *)v105 + v91) = 0;
              v106 = v303;
              v107 = *(unsigned __int8 *)v303;
              *(_BYTE *)v303 = v107 + 1;
              v108 = (unsigned __int8)v107;
              v109 = 4 * (v107 + 3);
              v110 = (void **)&v106[v109];
              v111 = (_BYTE *)v106[v109];
              if ( v285 == v287 )
              {
                v197 = v286;
                if ( v286 )
                {
                  if ( v286 == 1 )
                    *v111 = v287[0];
                  else
                    memcpy(v111, v285, v286);
                  v197 = v286;
                  v111 = *v110;
                }
                v110[1] = (void *)v197;
                v111[v197] = 0;
                v111 = v285;
              }
              else
              {
                if ( v111 == (_BYTE *)&v106[v109 + 2] )
                {
                  *v110 = v285;
                  v110[1] = (void *)v286;
                  v110[2] = (void *)v287[0];
                }
                else
                {
                  v112 = v106[4 * v108 + 14];
                  *v110 = v285;
                  v110[1] = (void *)v286;
                  v110[2] = (void *)v287[0];
                  if ( v111 )
                  {
                    v285 = v111;
                    v287[0] = v112;
                    goto LABEL_101;
                  }
                }
                v111 = v287;
                v285 = v287;
              }
LABEL_101:
              v286 = 0;
              *v111 = 0;
              if ( v285 != v287 )
                operator delete(v285);
              if ( v279 != (char *)v272 + 16 )
                operator delete(v279);
              if ( (_BYTE)v307 )
              {
                sub_FC7790(v305, v93, SHIBYTE(v307));
                v307 = 0;
                v305 = 0;
              }
              if ( v306 != v93 + 6 )
                operator delete(v306);
              v113 = (void **)v303;
              if ( v303 )
              {
                v114 = v304;
                if ( v304 )
                {
                  if ( (unsigned __int64)v303 < v304 || (unsigned __int64)v303 > v304 + 14848 )
                  {
                    v115 = *((void ***)v303 + 66);
                    v116 = &v115[8 * (unsigned __int64)*((unsigned int *)v303 + 134)];
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
                            goto LABEL_115;
                        }
                      }
                      while ( v115 != v116 );
LABEL_115:
                      v116 = (void **)v113[66];
                    }
                    if ( v116 != v113 + 68 )
                      free(v116);
                    v118 = (void **)v113[52];
                    if ( v118 != v113 + 54 )
                      free(v118);
                    v119 = v113 + 48;
                    v120 = v113 + 8;
                    do
                    {
                      while ( *v119 != v119 + 2 )
                      {
                        operator delete(*v119);
                        v119 -= 4;
                        if ( v120 == v119 )
                          goto LABEL_123;
                      }
                      v119 -= 4;
                    }
                    while ( v120 != v119 );
LABEL_123:
                    operator delete(v113, 0x3A0u);
                  }
                  else
                  {
                    v199 = *(unsigned int *)(v304 + 14976);
                    *(_DWORD *)(v304 + 14976) = v199 + 1;
                    *(_QWORD *)(v114 + 8 * v199 + 14848) = v113;
                  }
                }
              }
              goto LABEL_8;
            }
          }
          memcpy(v105, v92, v91);
          v105 = v285;
          goto LABEL_97;
        }
      }
      src = (void *)v95;
      memcpy(v97, v94, v95);
      v97 = v288;
      v95 = (__int64)src;
      goto LABEL_85;
    }
  }
LABEL_8:
  LODWORD(ptr) = 1964;
  v13 = sub_21B6DA0(a3, p_ptr, 1);
  v14 = a3[1];
  v15 = (_QWORD *)(v14 + 8LL * (unsigned int)v13);
  v16 = (_QWORD *)(v14 + 8 * HIDWORD(v13));
  if ( v15 == v16 )
    goto LABEL_12;
  while ( !*v15 || !(unsigned __int8)sub_21B9810(*v15, 1964) )
  {
    if ( v16 == ++v15 )
      goto LABEL_12;
  }
  if ( v16 == v15 )
  {
LABEL_12:
    LODWORD(src) = 1;
    goto LABEL_13;
  }
  do
  {
    v121 = *v15;
    v122 = *(_QWORD *)(*v15 + 16LL);
    if ( !v122 )
      v122 = *v15;
    ++v15;
    *(_BYTE *)(v122 + 44) |= 1u;
    if ( v15 == v16 )
      break;
    while ( !*v15 || !(unsigned __int8)sub_21B9810(*v15, 1964) )
    {
      if ( v16 == ++v15 )
        goto LABEL_133;
    }
  }
  while ( v16 != v15 );
LABEL_133:
  v123 = *(const char ***)(v121 + 48);
  v124 = 0;
  v125 = *v123;
  if ( *v123 )
    v124 = strlen(*v123);
  if ( !(unsigned __int8)sub_2247A50(v125, v124, 0, p_ptr) && (LODWORD(src) = (_DWORD)ptr, ptr == (void *)(int)ptr) )
  {
    if ( (int)ptr > 0 )
    {
      if ( (_DWORD)ptr != 1 )
        sub_21B5A40(v121, a3, v6);
      goto LABEL_13;
    }
  }
  else
  {
    LODWORD(src) = 1;
  }
  v126 = (__int64 *)&v308;
  sub_FC70B0((__int64)&v308, *(_QWORD *)si128.m128i_i64[0], 0, 400);
  v272 = &v281;
  sub_21B5FF0(&v281, v121, a3);
  v127 = v281;
  v128 = v282;
  v129 = (unsigned __int8 *)v308;
  if ( !v308 )
  {
    v257 = v309;
    v258 = *(_DWORD *)(v309 + 14976);
    if ( v258 )
    {
      v259 = (unsigned int)(v258 - 1);
      *(_DWORD *)(v309 + 14976) = v259;
      v129 = *(unsigned __int8 **)(v257 + 8 * v259 + 14848);
      v260 = *((unsigned int *)v129 + 134);
      *v129 = 0;
      v261 = *((_QWORD *)v129 + 66);
      *((_DWORD *)v129 + 106) = 0;
      v262 = v261 + (v260 << 6);
      if ( v261 != v262 )
      {
        v275 = v129;
        v263 = v128;
        v276 = &v308;
        v264 = v125;
        v265 = v124;
        v266 = v261;
        v277 = (unsigned int *)a3;
        v278 = v6;
        v267 = v262;
        do
        {
          while ( 1 )
          {
            v267 -= 64;
            v268 = *(void **)(v267 + 24);
            if ( v268 == (void *)(v267 + 40) )
              break;
            operator delete(v268);
            if ( v266 == v267 )
              goto LABEL_410;
          }
        }
        while ( v266 != v267 );
LABEL_410:
        v124 = v265;
        v125 = v264;
        v128 = v263;
        v126 = (__int64 *)v276;
        v129 = (unsigned __int8 *)v275;
        a3 = v277;
        v6 = v278;
      }
      *((_DWORD *)v129 + 134) = 0;
    }
    else
    {
      v276 = (void *)v282;
      v275 = v281;
      v129 = (unsigned __int8 *)operator new(0x3A0u);
      *v129 = 0;
      *((_QWORD *)v129 + 12) = v129 + 112;
      *((_QWORD *)v129 + 16) = v129 + 144;
      *((_QWORD *)v129 + 20) = v129 + 176;
      *((_QWORD *)v129 + 24) = v129 + 208;
      *((_QWORD *)v129 + 28) = v129 + 240;
      *((_QWORD *)v129 + 32) = v129 + 272;
      *((_QWORD *)v129 + 36) = v129 + 304;
      *((_QWORD *)v129 + 40) = v129 + 336;
      *((_QWORD *)v129 + 44) = v129 + 368;
      *((_QWORD *)v129 + 48) = v129 + 400;
      *((_QWORD *)v129 + 52) = v129 + 432;
      *((_QWORD *)v129 + 13) = 0;
      v129[112] = 0;
      *((_QWORD *)v129 + 17) = 0;
      v129[144] = 0;
      *((_QWORD *)v129 + 21) = 0;
      v129[176] = 0;
      *((_QWORD *)v129 + 25) = 0;
      v129[208] = 0;
      *((_QWORD *)v129 + 29) = 0;
      v129[240] = 0;
      *((_QWORD *)v129 + 33) = 0;
      v129[272] = 0;
      *((_QWORD *)v129 + 37) = 0;
      v129[304] = 0;
      *((_QWORD *)v129 + 41) = 0;
      v129[336] = 0;
      *((_QWORD *)v129 + 45) = 0;
      v129[368] = 0;
      *((_QWORD *)v129 + 49) = 0;
      v129[400] = 0;
      *((_QWORD *)v129 + 53) = 0x800000000LL;
      v127 = v275;
      *((_QWORD *)v129 + 66) = v129 + 544;
      v128 = (__int64)v276;
      *((_QWORD *)v129 + 67) = 0x600000000LL;
    }
    v308 = v129;
  }
  v129[*v129 + 1] = 0;
  v294 = v296;
  if ( &v127[v128] && !v127 )
    goto LABEL_447;
  if ( (unsigned __int64)v128 > 0xF )
  {
    v276 = v127;
    if ( v128 < 0 )
      goto LABEL_446;
    v275 = (void *)v128;
    v130 = (_QWORD *)operator new(v128 + 1);
    v128 = (__int64)v275;
    v127 = v276;
    v294 = v130;
    v296[0] = v275;
LABEL_331:
    v275 = (void *)v128;
    memcpy(v130, v127, v128);
    v130 = v294;
    v128 = (__int64)v275;
    goto LABEL_144;
  }
  if ( v128 == 1 )
  {
    LOBYTE(v296[0]) = *v127;
    v130 = v296;
    goto LABEL_144;
  }
  v130 = v296;
  if ( v128 )
    goto LABEL_331;
LABEL_144:
  v295 = v128;
  *((_BYTE *)v130 + v128) = 0;
  v131 = v308;
  v132 = *(unsigned __int8 *)v308;
  *(_BYTE *)v308 = v132 + 1;
  v133 = 4 * (v132 + 3);
  v134 = &v131[v133];
  v135 = (_BYTE *)v131[v133];
  if ( v294 == v296 )
  {
    v201 = v295;
    if ( v295 )
    {
      if ( v295 == 1 )
      {
        *v135 = v296[0];
        v201 = v295;
        v135 = (_BYTE *)*v134;
      }
      else
      {
        v275 = v134;
        memcpy(v135, v294, v295);
        v134 = v275;
        v201 = v295;
        v135 = *(_BYTE **)v275;
      }
    }
    v134[1] = v201;
    v135[v201] = 0;
    v135 = v294;
  }
  else
  {
    if ( v135 == (_BYTE *)&v131[v133 + 2] )
    {
      *v134 = v294;
      v134[1] = v295;
      v134[2] = v296[0];
    }
    else
    {
      v136 = v131[4 * (int)v132 + 14];
      *v134 = v294;
      v134[1] = v295;
      v134[2] = v296[0];
      if ( v135 )
      {
        v294 = v135;
        v296[0] = v136;
        goto LABEL_148;
      }
    }
    v135 = v296;
    v294 = v296;
  }
LABEL_148:
  v295 = 0;
  *v135 = 0;
  if ( v294 != v296 )
    operator delete(v294);
  v137 = (unsigned __int8 *)v308;
  if ( !v308 )
  {
    v245 = v309;
    v246 = *(_DWORD *)(v309 + 14976);
    if ( v246 )
    {
      v247 = (unsigned int)(v246 - 1);
      *(_DWORD *)(v309 + 14976) = v247;
      v137 = *(unsigned __int8 **)(v245 + 8 * v247 + 14848);
      v248 = *((unsigned int *)v137 + 134);
      *v137 = 0;
      v249 = *((_QWORD *)v137 + 66);
      *((_DWORD *)v137 + 106) = 0;
      v250 = v249 + (v248 << 6);
      if ( v249 != v250 )
      {
        v275 = a3;
        v251 = v126;
        v252 = v125;
        v253 = v124;
        v276 = v6;
        v254 = v249;
        v255 = v250;
        do
        {
          while ( 1 )
          {
            v255 -= 64;
            v256 = *(void **)(v255 + 24);
            if ( v256 == (void *)(v255 + 40) )
              break;
            operator delete(v256);
            if ( v254 == v255 )
              goto LABEL_403;
          }
        }
        while ( v254 != v255 );
LABEL_403:
        v124 = v253;
        v6 = (unsigned int *)v276;
        v125 = v252;
        v126 = v251;
        a3 = v275;
      }
      *((_DWORD *)v137 + 134) = 0;
    }
    else
    {
      v137 = (unsigned __int8 *)operator new(0x3A0u);
      *v137 = 0;
      *((_QWORD *)v137 + 12) = v137 + 112;
      *((_QWORD *)v137 + 16) = v137 + 144;
      *((_QWORD *)v137 + 20) = v137 + 176;
      *((_QWORD *)v137 + 24) = v137 + 208;
      *((_QWORD *)v137 + 28) = v137 + 240;
      *((_QWORD *)v137 + 32) = v137 + 272;
      *((_QWORD *)v137 + 36) = v137 + 304;
      *((_QWORD *)v137 + 40) = v137 + 336;
      *((_QWORD *)v137 + 44) = v137 + 368;
      *((_QWORD *)v137 + 48) = v137 + 400;
      *((_QWORD *)v137 + 52) = v137 + 432;
      *((_QWORD *)v137 + 13) = 0;
      v137[112] = 0;
      *((_QWORD *)v137 + 17) = 0;
      v137[144] = 0;
      *((_QWORD *)v137 + 21) = 0;
      v137[176] = 0;
      *((_QWORD *)v137 + 25) = 0;
      v137[208] = 0;
      *((_QWORD *)v137 + 29) = 0;
      v137[240] = 0;
      *((_QWORD *)v137 + 33) = 0;
      v137[272] = 0;
      *((_QWORD *)v137 + 37) = 0;
      v137[304] = 0;
      *((_QWORD *)v137 + 41) = 0;
      v137[336] = 0;
      *((_QWORD *)v137 + 45) = 0;
      v137[368] = 0;
      *((_QWORD *)v137 + 49) = 0;
      v137[400] = 0;
      *((_QWORD *)v137 + 53) = 0x800000000LL;
      *((_QWORD *)v137 + 66) = v137 + 544;
      *((_QWORD *)v137 + 67) = 0x600000000LL;
    }
    v308 = v137;
  }
  v137[*v137 + 1] = 0;
  v291 = v293;
  if ( &v125[v124] && !v125 )
    goto LABEL_447;
  if ( v124 > 0xF )
  {
    v138 = (_QWORD *)operator new(v124 + 1);
    v293[0] = v124;
    v291 = v138;
LABEL_333:
    memcpy(v138, v125, v124);
    v138 = v291;
    goto LABEL_156;
  }
  if ( v124 == 1 )
  {
    LOBYTE(v293[0]) = *v125;
    v138 = v293;
    goto LABEL_156;
  }
  v138 = v293;
  if ( v124 )
    goto LABEL_333;
LABEL_156:
  v292 = v124;
  *((_BYTE *)v138 + v124) = 0;
  v139 = v308;
  v140 = *(unsigned __int8 *)v308;
  *(_BYTE *)v308 = v140 + 1;
  v141 = (unsigned __int8)v140;
  v142 = 4 * (v140 + 3);
  v143 = (void **)&v139[v142];
  v144 = (_BYTE *)v139[v142];
  if ( v291 == v293 )
  {
    v200 = v292;
    if ( v292 )
    {
      if ( v292 == 1 )
        *v144 = v293[0];
      else
        memcpy(v144, v291, v292);
      v200 = v292;
      v144 = *v143;
    }
    v143[1] = (void *)v200;
    v144[v200] = 0;
    v144 = v291;
  }
  else
  {
    if ( v144 == (_BYTE *)&v139[v142 + 2] )
    {
      *v143 = v291;
      v143[1] = (void *)v292;
      v143[2] = (void *)v293[0];
    }
    else
    {
      v145 = v139[4 * v141 + 14];
      *v143 = v291;
      v143[1] = (void *)v292;
      v143[2] = (void *)v293[0];
      if ( v144 )
      {
        v291 = v144;
        v293[0] = v145;
        goto LABEL_160;
      }
    }
    v144 = v293;
    v291 = v293;
  }
LABEL_160:
  v292 = 0;
  *v144 = 0;
  if ( v291 != v293 )
    operator delete(v291);
  if ( v281 != (char *)v272 + 16 )
    operator delete(v281);
  if ( (_BYTE)v312 )
  {
    sub_FC7790(v310, v126, SHIBYTE(v312));
    v310 = 0;
    v312 = 0;
  }
  if ( v311 != v126 + 6 )
    operator delete(v311);
  v146 = (void **)v308;
  if ( v308 )
  {
    v147 = v309;
    if ( v309 )
    {
      if ( (unsigned __int64)v308 < v309 || (unsigned __int64)v308 > v309 + 14848 )
      {
        v148 = *((void ***)v308 + 66);
        v149 = &v148[8 * (unsigned __int64)*((unsigned int *)v308 + 134)];
        if ( v148 != v149 )
        {
          do
          {
            while ( 1 )
            {
              v149 -= 8;
              v150 = (void **)v149[3];
              if ( v150 == v149 + 5 )
                break;
              operator delete(v150);
              if ( v148 == v149 )
                goto LABEL_174;
            }
          }
          while ( v148 != v149 );
LABEL_174:
          v149 = (void **)v146[66];
        }
        if ( v149 != v146 + 68 )
          free(v149);
        v151 = (void **)v146[52];
        if ( v151 != v146 + 54 )
          free(v151);
        v152 = v146 + 48;
        v153 = v146 + 8;
        do
        {
          while ( *v152 != v152 + 2 )
          {
            operator delete(*v152);
            v152 -= 4;
            if ( v152 == v153 )
              goto LABEL_182;
          }
          v152 -= 4;
        }
        while ( v152 != v153 );
LABEL_182:
        operator delete(v146, 0x3A0u);
      }
      else
      {
        v202 = *(unsigned int *)(v309 + 14976);
        *(_DWORD *)(v309 + 14976) = v202 + 1;
        *(_QWORD *)(v147 + 8 * v202 + 14848) = v146;
      }
    }
  }
LABEL_13:
  LODWORD(ptr) = 1973;
  v17 = sub_21B6DA0(a3, p_ptr, 1);
  v18 = a3[1];
  v19 = (_QWORD *)(v18 + 8LL * (unsigned int)v17);
  v20 = (_QWORD *)(v18 + 8 * HIDWORD(v17));
  if ( v19 != v20 )
  {
    while ( !*v19 || !(unsigned __int8)sub_21B9810(*v19, 1973) )
    {
      if ( v20 == ++v19 )
        goto LABEL_17;
    }
    if ( v19 != v20 )
    {
      do
      {
        v159 = (_QWORD *)*v19;
        v160 = *(_QWORD *)(*v19 + 16LL);
        if ( !v160 )
          v160 = *v19;
        ++v19;
        *(_BYTE *)(v160 + 44) |= 1u;
        if ( v19 == v20 )
          break;
        while ( !*v19 || !(unsigned __int8)sub_21B9810(*v19, 1973) )
        {
          if ( v20 == ++v19 )
            goto LABEL_227;
        }
      }
      while ( v19 != v20 );
LABEL_227:
      v161 = (const char **)v159[6];
      v162 = 0;
      v163 = *v161;
      if ( *v161 )
        v162 = strlen(*v161);
      if ( (unsigned __int8)sub_2247A50(v163, v162, 0, p_ptr) || (LODWORD(v272) = (_DWORD)ptr, ptr != (void *)(int)ptr) )
      {
        LODWORD(v272) = 0;
      }
      else if ( (int)ptr >= 0 && (int)src > (int)ptr )
      {
LABEL_278:
        if ( (_DWORD)v272 )
          sub_21B5A40(v159, a3, v6);
        goto LABEL_17;
      }
      v164 = (char *)&v283;
      sub_FC70B0((__int64)p_ptr, *(_QWORD *)si128.m128i_i64[0], 0, 400);
      sub_21B5FF0(&v283, v159, a3);
      v165 = (unsigned __int8 *)ptr;
      v166 = v283;
      v167 = n;
      if ( !ptr )
      {
        v203 = v314.m128i_i64[0];
        v204 = *(_DWORD *)(v314.m128i_i64[0] + 14976);
        if ( v204 )
        {
          v205 = (unsigned int)(v204 - 1);
          *(_DWORD *)(v314.m128i_i64[0] + 14976) = v205;
          v165 = *(unsigned __int8 **)(v203 + 8 * v205 + 14848);
          v206 = *((unsigned int *)v165 + 134);
          *v165 = 0;
          v207 = *((_QWORD *)v165 + 66);
          *((_DWORD *)v165 + 106) = 0;
          v208 = v207 + (v206 << 6);
          if ( v207 != v208 )
          {
            src = v159;
            v209 = v207;
            v275 = &v283;
            v210 = v167;
            v276 = a3;
            v277 = v6;
            v211 = v208;
            do
            {
              while ( 1 )
              {
                v211 -= 64;
                v212 = *(void **)(v211 + 24);
                if ( v212 == (void *)(v211 + 40) )
                  break;
                si128.m128i_i64[0] = (__int64)v165;
                operator delete(v212);
                v165 = (unsigned __int8 *)si128.m128i_i64[0];
                if ( v209 == v211 )
                  goto LABEL_375;
              }
            }
            while ( v209 != v211 );
LABEL_375:
            v167 = v210;
            v159 = src;
            v164 = (char *)v275;
            a3 = v276;
            v6 = v277;
          }
          *((_DWORD *)v165 + 134) = 0;
        }
        else
        {
          src = (void *)n;
          si128.m128i_i64[0] = (__int64)v283;
          v165 = (unsigned __int8 *)operator new(0x3A0u);
          *v165 = 0;
          *((_QWORD *)v165 + 12) = v165 + 112;
          *((_QWORD *)v165 + 16) = v165 + 144;
          *((_QWORD *)v165 + 20) = v165 + 176;
          *((_QWORD *)v165 + 24) = v165 + 208;
          *((_QWORD *)v165 + 28) = v165 + 240;
          *((_QWORD *)v165 + 32) = v165 + 272;
          *((_QWORD *)v165 + 36) = v165 + 304;
          *((_QWORD *)v165 + 40) = v165 + 336;
          *((_QWORD *)v165 + 44) = v165 + 368;
          *((_QWORD *)v165 + 48) = v165 + 400;
          *((_QWORD *)v165 + 52) = v165 + 432;
          *((_QWORD *)v165 + 13) = 0;
          v165[112] = 0;
          *((_QWORD *)v165 + 17) = 0;
          v165[144] = 0;
          *((_QWORD *)v165 + 21) = 0;
          v165[176] = 0;
          *((_QWORD *)v165 + 25) = 0;
          v165[208] = 0;
          *((_QWORD *)v165 + 29) = 0;
          v165[240] = 0;
          *((_QWORD *)v165 + 33) = 0;
          v165[272] = 0;
          *((_QWORD *)v165 + 37) = 0;
          v165[304] = 0;
          *((_QWORD *)v165 + 41) = 0;
          v165[336] = 0;
          *((_QWORD *)v165 + 45) = 0;
          v165[368] = 0;
          *((_QWORD *)v165 + 49) = 0;
          v165[400] = 0;
          *((_QWORD *)v165 + 53) = 0x800000000LL;
          v166 = (_BYTE *)si128.m128i_i64[0];
          *((_QWORD *)v165 + 66) = v165 + 544;
          v167 = (__int64)src;
          *((_QWORD *)v165 + 67) = 0x600000000LL;
        }
        ptr = v165;
      }
      v168 = (char *)&v300;
      v165[*v165 + 1] = 0;
      v300 = v302;
      if ( &v166[v167] && !v166 )
        goto LABEL_447;
      if ( (unsigned __int64)v167 <= 0xF )
      {
        if ( v167 == 1 )
        {
          LOBYTE(v302[0]) = *v166;
          v169 = v302;
          goto LABEL_239;
        }
        v169 = v302;
        if ( !v167 )
        {
LABEL_239:
          v301 = v167;
          *((_BYTE *)v169 + v167) = 0;
          v170 = ptr;
          v171 = *(unsigned __int8 *)ptr;
          *(_BYTE *)ptr = v171 + 1;
          v172 = 4 * (v171 + 3);
          v173 = (__int64)&v170[v172];
          v174 = (_BYTE *)v170[v172];
          if ( v300 == v168 + 16 )
          {
            v195 = v301;
            if ( v301 )
            {
              if ( v301 == 1 )
              {
                *v174 = v302[0];
                v195 = v301;
                v174 = *(_BYTE **)v173;
              }
              else
              {
                src = v168;
                si128.m128i_i64[0] = v173;
                memcpy(v174, v300, v301);
                v173 = si128.m128i_i64[0];
                v168 = (char *)src;
                v195 = v301;
                v174 = *(_BYTE **)si128.m128i_i64[0];
              }
            }
            *(_QWORD *)(v173 + 8) = v195;
            v174[v195] = 0;
            v174 = v300;
          }
          else
          {
            if ( v174 == (_BYTE *)&v170[v172 + 2] )
            {
              *(_QWORD *)v173 = v300;
              *(_QWORD *)(v173 + 8) = v301;
              *(_QWORD *)(v173 + 16) = v302[0];
            }
            else
            {
              v175 = v170[4 * (int)v171 + 14];
              *(_QWORD *)v173 = v300;
              *(_QWORD *)(v173 + 8) = v301;
              *(_QWORD *)(v173 + 16) = v302[0];
              if ( v174 )
              {
                v300 = v174;
                v302[0] = v175;
                goto LABEL_243;
              }
            }
            v174 = v168 + 16;
            v300 = v168 + 16;
          }
LABEL_243:
          v301 = 0;
          *v174 = 0;
          if ( v300 != v168 + 16 )
            operator delete(v300);
          v176 = (unsigned __int8 *)ptr;
          if ( !ptr )
          {
            v213 = v314.m128i_i64[0];
            v214 = *(_DWORD *)(v314.m128i_i64[0] + 14976);
            if ( v214 )
            {
              v215 = (unsigned int)(v214 - 1);
              *(_DWORD *)(v314.m128i_i64[0] + 14976) = v215;
              v176 = *(unsigned __int8 **)(v213 + 8 * v215 + 14848);
              v216 = *((unsigned int *)v176 + 134);
              *v176 = 0;
              v217 = *((_QWORD *)v176 + 66);
              *((_DWORD *)v176 + 106) = 0;
              v218 = v217 + (v216 << 6);
              if ( v217 != v218 )
              {
                si128.m128i_i64[0] = (__int64)v164;
                v219 = v176;
                src = a3;
                v275 = v6;
                v220 = v218;
                do
                {
                  while ( 1 )
                  {
                    v220 -= 64;
                    v221 = *(void **)(v220 + 24);
                    if ( v221 == (void *)(v220 + 40) )
                      break;
                    operator delete(v221);
                    if ( v217 == v220 )
                      goto LABEL_382;
                  }
                }
                while ( v217 != v220 );
LABEL_382:
                v176 = v219;
                a3 = src;
                v164 = (char *)si128.m128i_i64[0];
                v6 = (unsigned int *)v275;
              }
              *((_DWORD *)v176 + 134) = 0;
            }
            else
            {
              v176 = (unsigned __int8 *)operator new(0x3A0u);
              *v176 = 0;
              *((_QWORD *)v176 + 12) = v176 + 112;
              *((_QWORD *)v176 + 16) = v176 + 144;
              *((_QWORD *)v176 + 20) = v176 + 176;
              *((_QWORD *)v176 + 24) = v176 + 208;
              *((_QWORD *)v176 + 28) = v176 + 240;
              *((_QWORD *)v176 + 32) = v176 + 272;
              *((_QWORD *)v176 + 36) = v176 + 304;
              *((_QWORD *)v176 + 40) = v176 + 336;
              *((_QWORD *)v176 + 44) = v176 + 368;
              *((_QWORD *)v176 + 48) = v176 + 400;
              *((_QWORD *)v176 + 52) = v176 + 432;
              *((_QWORD *)v176 + 13) = 0;
              v176[112] = 0;
              *((_QWORD *)v176 + 17) = 0;
              v176[144] = 0;
              *((_QWORD *)v176 + 21) = 0;
              v176[176] = 0;
              *((_QWORD *)v176 + 25) = 0;
              v176[208] = 0;
              *((_QWORD *)v176 + 29) = 0;
              v176[240] = 0;
              *((_QWORD *)v176 + 33) = 0;
              v176[272] = 0;
              *((_QWORD *)v176 + 37) = 0;
              v176[304] = 0;
              *((_QWORD *)v176 + 41) = 0;
              v176[336] = 0;
              *((_QWORD *)v176 + 45) = 0;
              v176[368] = 0;
              *((_QWORD *)v176 + 49) = 0;
              v176[400] = 0;
              *((_QWORD *)v176 + 53) = 0x800000000LL;
              *((_QWORD *)v176 + 66) = v176 + 544;
              *((_QWORD *)v176 + 67) = 0x600000000LL;
            }
            ptr = v176;
          }
          v176[*v176 + 1] = 0;
          v297 = v299;
          if ( !&v163[v162] || v163 )
          {
            if ( v162 > 0xF )
            {
              v177 = (_QWORD *)operator new(v162 + 1);
              v299[0] = v162;
              v297 = v177;
            }
            else
            {
              if ( v162 == 1 )
              {
                LOBYTE(v299[0]) = *v163;
                v177 = v299;
                goto LABEL_251;
              }
              v177 = v299;
              if ( !v162 )
              {
LABEL_251:
                v298 = v162;
                *((_BYTE *)v177 + v162) = 0;
                v178 = ptr;
                v179 = *(unsigned __int8 *)ptr;
                *(_BYTE *)ptr = v179 + 1;
                v180 = 4 * (v179 + 3);
                v181 = (void **)&v178[v180];
                v182 = (_BYTE *)v178[v180];
                if ( v297 == v299 )
                {
                  v194 = v298;
                  if ( v298 )
                  {
                    if ( v298 == 1 )
                    {
                      *v182 = v299[0];
                      v194 = v298;
                      v182 = *v181;
                    }
                    else
                    {
                      si128.m128i_i64[0] = (__int64)&v297;
                      memcpy(v182, v297, v298);
                      v182 = *v181;
                      v194 = v298;
                    }
                  }
                  v181[1] = (void *)v194;
                  v182[v194] = 0;
                  v182 = v297;
                }
                else
                {
                  if ( v182 == (_BYTE *)&v178[v180 + 2] )
                  {
                    *v181 = v297;
                    v181[1] = (void *)v298;
                    v181[2] = (void *)v299[0];
                  }
                  else
                  {
                    v183 = v178[4 * (int)v179 + 14];
                    *v181 = v297;
                    v181[1] = (void *)v298;
                    v181[2] = (void *)v299[0];
                    if ( v182 )
                    {
                      v297 = v182;
                      v299[0] = v183;
                      goto LABEL_255;
                    }
                  }
                  v182 = v299;
                  v297 = v299;
                }
LABEL_255:
                v298 = 0;
                *v182 = 0;
                if ( v297 != v299 )
                  operator delete(v297);
                if ( v283 != v164 + 16 )
                  operator delete(v283);
                if ( (_BYTE)v317 )
                {
                  sub_FC7790(v314.m128i_i64[1], (__int64 *)p_ptr, SHIBYTE(v317));
                  v314.m128i_i64[1] = 0;
                  v317 = 0;
                }
                if ( (void **)v315.m128i_i64[1] != p_ptr + 6 )
                  operator delete((void *)v315.m128i_i64[1]);
                v184 = (void **)ptr;
                if ( ptr )
                {
                  v185 = v314.m128i_i64[0];
                  if ( v314.m128i_i64[0] )
                  {
                    if ( (unsigned __int64)ptr < v314.m128i_i64[0] || (unsigned __int64)ptr > v314.m128i_i64[0] + 14848 )
                    {
                      v186 = *((void ***)ptr + 66);
                      v187 = &v186[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
                      if ( v186 != v187 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v187 -= 8;
                            v188 = (void **)v187[3];
                            if ( v188 == v187 + 5 )
                              break;
                            operator delete(v188);
                            if ( v186 == v187 )
                              goto LABEL_269;
                          }
                        }
                        while ( v186 != v187 );
LABEL_269:
                        v187 = (void **)v184[66];
                      }
                      if ( v187 != v184 + 68 )
                        free(v187);
                      v189 = (void **)v184[52];
                      v190 = v184 + 52;
                      if ( v189 != v184 + 54 )
                        free(v189);
                      v191 = v184 + 12;
                      do
                      {
                        while ( 1 )
                        {
                          v190 -= 4;
                          if ( *v190 == v190 + 2 )
                            break;
                          operator delete(*v190);
                          if ( v191 == v190 )
                            goto LABEL_277;
                        }
                      }
                      while ( v191 != v190 );
LABEL_277:
                      operator delete(v184, 0x3A0u);
                    }
                    else
                    {
                      v198 = *(unsigned int *)(v314.m128i_i64[0] + 14976);
                      *(_DWORD *)(v314.m128i_i64[0] + 14976) = v198 + 1;
                      *(_QWORD *)(v185 + 8 * v198 + 14848) = v184;
                    }
                  }
                }
                goto LABEL_278;
              }
            }
            si128.m128i_i64[0] = (__int64)&v297;
            memcpy(v177, v163, v162);
            v177 = v297;
            goto LABEL_251;
          }
LABEL_447:
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        }
LABEL_310:
        src = v168;
        si128.m128i_i64[0] = v167;
        memcpy(v169, v166, v167);
        v167 = si128.m128i_i64[0];
        v168 = (char *)src;
        v169 = v300;
        goto LABEL_239;
      }
      v275 = &v300;
      src = v166;
      if ( v167 >= 0 )
      {
        si128.m128i_i64[0] = v167;
        v169 = (_QWORD *)operator new(v167 + 1);
        v167 = si128.m128i_i64[0];
        v166 = src;
        v300 = v169;
        v168 = (char *)v275;
        v302[0] = si128.m128i_i64[0];
        goto LABEL_310;
      }
LABEL_446:
      std::__throw_length_error("basic_string::_M_create");
    }
  }
LABEL_17:
  v21 = *(void ***)v273;
  v22 = *(void ***)(v273 + 8);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  v272 = v22;
  if ( v22 != v21 )
  {
    v23 = (__int64 *)(p_ptr + 3);
    v275 = v6 + 4;
    while ( 1 )
    {
      v24 = _mm_load_si128(&si128).m128i_i64[1];
      ptr = v23;
      v314.m128i_i64[1] = v24;
      qmemcpy(v23, "-fxray-always-instrument=", 25);
      v314.m128i_i64[0] = 25;
      v25 = (size_t)v21[1];
      v26 = *v21;
      if ( v25 + 25 > 0x40 )
        break;
      v27 = 25;
      v28 = v23;
      if ( v25 )
      {
        v154 = (char *)v23;
        goto LABEL_206;
      }
LABEL_21:
      v29 = *a3;
      v314.m128i_i64[0] = v25 + v27;
      v30 = (void *)(*(__int64 (__fastcall **)(_QWORD *, void *))(v29 + 16))(a3, v28);
      v31 = v6[2];
      if ( v31 + 1 > (unsigned __int64)v6[3] )
      {
        src = v30;
        sub_2237220(v6, v275, v31 + 1, 8);
        v31 = v6[2];
        v30 = src;
      }
      *(_QWORD *)(*(_QWORD *)v6 + 8 * v31) = v30;
      v32 = (__int64 *)ptr;
      ++v6[2];
      if ( v32 == v23 )
      {
        v21 += 4;
        if ( v272 == v21 )
          goto LABEL_25;
      }
      else
      {
        free(v32);
        v21 += 4;
        if ( v272 == v21 )
          goto LABEL_25;
      }
    }
    src = *v21;
    sub_2236E10(p_ptr, v23, v25 + 25, 1);
    v154 = (char *)ptr;
    v26 = src;
    v27 = v314.m128i_i64[0];
LABEL_206:
    memcpy(&v154[v27], v26, v25);
    v28 = ptr;
    v27 = v314.m128i_i64[0];
    goto LABEL_21;
  }
LABEL_25:
  v33 = *(void ***)(v273 + 24);
  v272 = *(void **)(v273 + 32);
  if ( v272 != v33 )
  {
    v34 = (__int64 *)(p_ptr + 3);
    v275 = v6 + 4;
    while ( 1 )
    {
      v35 = _mm_load_si128(&si128).m128i_i64[1];
      ptr = v34;
      v314.m128i_i64[1] = v35;
      qmemcpy(v34, "-fxray-never-instrument=", 24);
      v314.m128i_i64[0] = 24;
      v36 = *v33;
      v37 = (size_t)v33[1];
      if ( v37 + 24 > 0x40 )
        break;
      v38 = 24;
      v39 = v34;
      if ( v37 )
      {
        v155 = (char *)v34;
        goto LABEL_208;
      }
LABEL_29:
      v40 = *a3;
      v314.m128i_i64[0] = v37 + v38;
      v41 = (void *)(*(__int64 (__fastcall **)(_QWORD *, void *))(v40 + 16))(a3, v39);
      v42 = v6[2];
      if ( v42 + 1 > (unsigned __int64)v6[3] )
      {
        src = v41;
        sub_2237220(v6, v275, v42 + 1, 8);
        v42 = v6[2];
        v41 = src;
      }
      *(_QWORD *)(*(_QWORD *)v6 + 8 * v42) = v41;
      v43 = (__int64 *)ptr;
      ++v6[2];
      if ( v43 == v34 )
      {
        v33 += 4;
        if ( v272 == v33 )
          goto LABEL_33;
      }
      else
      {
        free(v43);
        v33 += 4;
        if ( v272 == v33 )
          goto LABEL_33;
      }
    }
    src = *v33;
    sub_2236E10(p_ptr, v34, v37 + 24, 1);
    v155 = (char *)ptr;
    v36 = src;
    v38 = v314.m128i_i64[0];
LABEL_208:
    memcpy(&v155[v38], v36, v37);
    v39 = ptr;
    v38 = v314.m128i_i64[0];
    goto LABEL_29;
  }
LABEL_33:
  v44 = *(_QWORD *)(v273 + 56);
  v45 = *(_QWORD *)(v273 + 48);
  if ( v44 != v45 )
  {
    v46 = (__int64 *)(p_ptr + 3);
    src = v6 + 4;
    while ( 1 )
    {
      v47 = _mm_load_si128(&si128).m128i_i64[1];
      ptr = v46;
      v314.m128i_i64[1] = v47;
      qmemcpy(v46, "-fxray-attr-list=", 17);
      v314.m128i_i64[0] = 17;
      v48 = *(const void **)v45;
      v49 = *(_QWORD *)(v45 + 8);
      if ( v49 + 17 > 0x40 )
        break;
      v50 = 17;
      v51 = v46;
      if ( v49 )
      {
        v156 = (char *)v46;
        goto LABEL_210;
      }
LABEL_37:
      v52 = *a3;
      v314.m128i_i64[0] = v49 + v50;
      v53 = (void *)(*(__int64 (__fastcall **)(_QWORD *, void *))(v52 + 16))(a3, v51);
      v54 = v6[2];
      if ( v54 + 1 > (unsigned __int64)v6[3] )
      {
        v272 = v53;
        sub_2237220(v6, src, v54 + 1, 8);
        v54 = v6[2];
        v53 = v272;
      }
      *(_QWORD *)(*(_QWORD *)v6 + 8 * v54) = v53;
      v55 = (__int64 *)ptr;
      ++v6[2];
      if ( v55 == v46 )
      {
        v45 += 32;
        if ( v44 == v45 )
          goto LABEL_41;
      }
      else
      {
        free(v55);
        v45 += 32;
        if ( v44 == v45 )
          goto LABEL_41;
      }
    }
    v272 = *(void **)v45;
    sub_2236E10(p_ptr, v46, v49 + 17, 1);
    v156 = (char *)ptr;
    v48 = v272;
    v50 = v314.m128i_i64[0];
LABEL_210:
    memcpy(&v156[v50], v48, v49);
    v51 = ptr;
    v50 = v314.m128i_i64[0];
    goto LABEL_37;
  }
LABEL_41:
  v56 = *(_QWORD *)(v273 + 80);
  v57 = *(_QWORD *)(v273 + 72);
  if ( v56 != v57 )
  {
    v58 = (__int64 *)(p_ptr + 3);
    src = v6 + 4;
    while ( 1 )
    {
      v59 = _mm_load_si128(&si128).m128i_i64[1];
      ptr = v58;
      v314.m128i_i64[1] = v59;
      qmemcpy(v58, "-fdepfile-entry=", 16);
      v314.m128i_i64[0] = 16;
      v60 = *(_QWORD *)(v57 + 8);
      v61 = *(const void **)v57;
      if ( v60 + 16 > 0x40 )
        break;
      v62 = 16;
      v63 = v58;
      if ( v60 )
      {
        v157 = (char *)v58;
        goto LABEL_212;
      }
LABEL_45:
      v64 = *a3;
      v314.m128i_i64[0] = v60 + v62;
      v65 = (void *)(*(__int64 (__fastcall **)(_QWORD *, void *))(v64 + 16))(a3, v63);
      v66 = v6[2];
      if ( v66 + 1 > (unsigned __int64)v6[3] )
      {
        v272 = v65;
        sub_2237220(v6, src, v66 + 1, 8);
        v66 = v6[2];
        v65 = v272;
      }
      *(_QWORD *)(*(_QWORD *)v6 + 8 * v66) = v65;
      v67 = (__int64 *)ptr;
      ++v6[2];
      if ( v67 == v58 )
      {
        v57 += 32;
        if ( v56 == v57 )
          goto LABEL_49;
      }
      else
      {
        free(v67);
        v57 += 32;
        if ( v56 == v57 )
          goto LABEL_49;
      }
    }
    v272 = *(void **)v57;
    sub_2236E10(p_ptr, v58, v60 + 16, 1);
    v157 = (char *)ptr;
    v61 = v272;
    v62 = v314.m128i_i64[0];
LABEL_212:
    memcpy(&v157[v62], v61, v60);
    v63 = ptr;
    v62 = v314.m128i_i64[0];
    goto LABEL_45;
  }
LABEL_49:
  v68 = *(void ***)(v273 + 96);
  v272 = *(void **)(v273 + 104);
  v69 = (__int64 *)(p_ptr + 3);
  v275 = v6 + 4;
  if ( v272 != v68 )
  {
    while ( 1 )
    {
      v70 = _mm_load_si128(&si128).m128i_i64[1];
      ptr = v69;
      v314.m128i_i64[1] = v70;
      qmemcpy(v69, "-fxray-modes=", 13);
      v314.m128i_i64[0] = 13;
      v71 = (size_t)v68[1];
      v72 = *v68;
      if ( v71 + 13 > 0x40 )
        break;
      v73 = 13;
      v74 = v69;
      if ( v71 )
      {
        v158 = (char *)v69;
        goto LABEL_214;
      }
LABEL_52:
      v75 = *a3;
      v314.m128i_i64[0] = v71 + v73;
      v76 = (void *)(*(__int64 (__fastcall **)(_QWORD *, void *))(v75 + 16))(a3, v74);
      v77 = v6[2];
      if ( v77 + 1 > (unsigned __int64)v6[3] )
      {
        src = v76;
        sub_2237220(v6, v275, v77 + 1, 8);
        v77 = v6[2];
        v76 = src;
      }
      *(_QWORD *)(*(_QWORD *)v6 + 8 * v77) = v76;
      v78 = (__int64 *)ptr;
      ++v6[2];
      if ( v78 == v69 )
      {
        v68 += 4;
        if ( v272 == v68 )
          goto LABEL_56;
      }
      else
      {
        free(v78);
        v68 += 4;
        if ( v272 == v68 )
          goto LABEL_56;
      }
    }
    src = *v68;
    sub_2236E10(p_ptr, v69, v71 + 13, 1);
    v158 = (char *)ptr;
    v72 = src;
    v73 = v314.m128i_i64[0];
LABEL_214:
    memcpy(&v158[v73], v72, v71);
    v74 = ptr;
    v73 = v314.m128i_i64[0];
    goto LABEL_52;
  }
LABEL_56:
  v79 = (__int64 *)(p_ptr + 3);
  v314 = _mm_load_si128(&si128);
  ptr = p_ptr + 3;
  v315 = _mm_load_si128((const __m128i *)&xmmword_23A9FD0);
  p_ptr[5] = (void *)0x622D6E6F69746174LL;
  v80 = v273;
  *((_DWORD *)v79 + 6) = 1818521205;
  v81 = *(_DWORD *)(v80 + 120);
  *((_WORD *)v79 + 14) = 15717;
  v314.m128i_i64[0] = 30;
  if ( v81 == 15 )
  {
    v83 = 33;
    v316 = 27745;
    *((_BYTE *)p_ptr + 56) = 108;
    v314.m128i_i64[0] = 33;
    goto LABEL_63;
  }
  if ( !v81 )
  {
    v83 = 34;
    *(_DWORD *)((char *)p_ptr + 54) = 1701736302;
    v314.m128i_i64[0] = 34;
    goto LABEL_63;
  }
  if ( (v81 & 1) != 0 )
  {
    v82 = p_ptr;
    *(void **)((char *)p_ptr + 54) = (void *)0x6E6F6974636E7566LL;
    if ( (v81 & 2) == 0 )
    {
      *(_DWORD *)((char *)v82 + 62) = 1953391917;
      v83 = 44;
      *((_WORD *)v82 + 33) = 31090;
      v314.m128i_i64[0] = 44;
      if ( (v81 & 4) == 0 )
        goto LABEL_61;
LABEL_297:
      v192 = (char *)p_ptr + v83 + 24;
      *(_DWORD *)v192 = 1953723747;
      *((_WORD *)v192 + 2) = 28015;
      v83 = v314.m128i_i64[0] + 6;
      v314.m128i_i64[0] += 6;
      if ( (v81 & 8) == 0 )
        goto LABEL_62;
LABEL_298:
      if ( (unsigned __int64)(v83 + 5) > v314.m128i_i64[1] )
      {
        sub_2236E10(p_ptr, p_ptr + 3, v83 + 5, 1);
        v83 = v314.m128i_i64[0];
      }
      v193 = (char *)ptr + v83;
      *(_DWORD *)v193 = 1701869940;
      v193[4] = 100;
      v83 = v314.m128i_i64[0] + 5;
      v314.m128i_i64[0] += 5;
      goto LABEL_62;
    }
    v314.m128i_i64[0] = 38;
    v83 = 38;
    if ( (v81 & 4) != 0 )
      goto LABEL_297;
  }
  else if ( (v81 & 2) != 0 )
  {
    v269 = p_ptr;
    v83 = 43;
    *(void **)((char *)p_ptr + 54) = (void *)0x6E6F6974636E7566LL;
    *(_DWORD *)((char *)v269 + 62) = 1769497901;
    *((_BYTE *)v269 + 66) = 116;
    v314.m128i_i64[0] = 43;
    if ( (v81 & 4) != 0 )
      goto LABEL_297;
  }
  else
  {
    v83 = 30;
    if ( (v81 & 4) != 0 )
      goto LABEL_297;
  }
LABEL_61:
  if ( (v81 & 8) != 0 )
    goto LABEL_298;
LABEL_62:
  v79 = (__int64 *)ptr;
LABEL_63:
  v84 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, __int64))(*a3 + 16LL))(a3, v79, v83);
  v85 = v6[2];
  if ( v85 + 1 > (unsigned __int64)v6[3] )
  {
    si128.m128i_i64[0] = v84;
    sub_2237220(v6, v6 + 4, v85 + 1, 8);
    v85 = v6[2];
    v84 = si128.m128i_i64[0];
  }
  *(_QWORD *)(*(_QWORD *)v6 + 8 * v85) = v84;
  v86 = p_ptr;
  v87 = (void **)ptr;
  ++v6[2];
  if ( v87 != v86 + 3 )
    free(v87);
}
