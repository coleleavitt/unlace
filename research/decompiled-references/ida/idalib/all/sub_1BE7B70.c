__int64 __fastcall sub_1BE7B70(
        __m128 *a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        bool *a6,
        double a7,
        __m128 a8)
{
  __int64 *v8; // rax
  __int64 *v9; // rbp
  __int64 v10; // rdx
  __m128i v11; // xmm0
  __int64 v12; // rdi
  bool v13; // al
  bool v14; // zf
  unsigned __int16 *v15; // rax
  bool v16; // dl
  __int64 v17; // rcx
  char v18; // si
  __m128 *v19; // rbx
  unsigned __int64 v20; // rsi
  __int32 v21; // eax
  unsigned __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int16 *v24; // rbp
  unsigned __int64 v25; // rax
  _DWORD *v26; // rdx
  __int64 *v27; // r12
  __int64 v28; // rbp
  int v29; // eax
  __int64 v30; // r14
  char v31; // al
  int v32; // eax
  __int64 v33; // r9
  char v34; // r14
  __int64 v35; // rax
  unsigned __int8 *v36; // rbp
  __int64 v37; // r15
  unsigned __int64 v38; // rdx
  __int64 *v39; // rax
  unsigned __int64 *v40; // rbp
  unsigned __int64 v41; // r15
  unsigned __int64 v42; // rax
  __m128i *v43; // rax
  __m128i *v44; // rbx
  unsigned __int64 *v45; // rdi
  void *v46; // rdi
  void **v47; // rbx
  __m128i *v48; // rax
  void *v49; // rdi
  char v50; // al
  unsigned __int64 v51; // rdx
  _QWORD *v52; // rcx
  __int64 v53; // rbp
  __int64 *v54; // rax
  __int64 v55; // r12
  unsigned int v56; // eax
  __int64 v57; // rdx
  __int64 *v58; // r13
  unsigned int v59; // eax
  __int64 v60; // rbp
  unsigned __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  char v65; // al
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  unsigned int v70; // r14d
  unsigned int v71; // eax
  __int64 v72; // r9
  __int64 v73; // rcx
  unsigned __int16 *v74; // rdx
  __m128i *v75; // rcx
  __int64 v76; // rdx
  __m128i *v77; // r14
  __int64 v78; // rax
  __int64 v79; // rdx
  __m128i v80; // xmm2
  __m128i v81; // xmm3
  __int64 *v82; // rbp
  unsigned int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rbp
  __m128i *v86; // rsi
  __int64 v87; // rcx
  unsigned __int16 *v88; // rdi
  __int64 *v89; // r13
  __int64 *v90; // r12
  __int64 v91; // rbp
  unsigned __int8 v92; // al
  int v93; // edx
  __int64 v94; // rdx
  __int64 *v95; // r15
  __int64 v96; // rdx
  unsigned __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rsi
  unsigned int v101; // eax
  unsigned __int16 *v102; // rdi
  char *v103; // r12
  char *v104; // r13
  char *v105; // rdi
  __int64 v107; // rdx
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rcx
  unsigned __int16 *v111; // rax
  __int64 v112; // rax
  __int64 v113; // rbp
  __int64 v114; // rax
  void *v115; // r12
  unsigned __int64 v116; // rdx
  _QWORD *v117; // rdx
  __int64 v118; // r12
  __int16 v119; // bx
  __int64 *v120; // r12
  unsigned int v121; // eax
  __int64 v122; // r12
  __m128 *v123; // r13
  __int64 v124; // rdx
  __m128 *v125; // r15
  __m128 *v126; // r14
  __int64 v127; // rcx
  __int64 v128; // r9
  __int64 v129; // r10
  __int64 v130; // r11
  __int64 v131; // rbp
  __int64 v132; // r10
  unsigned __int64 v133; // r12
  char v134; // al
  char v135; // r14
  __int64 **v136; // rax
  __int64 v137; // rcx
  __int64 v138; // rbp
  unsigned __int64 v139; // rdx
  __int64 *v140; // rcx
  _DWORD *v141; // rdi
  unsigned __int64 v142; // rax
  __int64 *v143; // rsi
  __int64 v144; // rdi
  __int64 v145; // rdx
  __int64 *v146; // r12
  __int64 v147; // rax
  __int64 v148; // rdx
  __int64 *v149; // rbp
  unsigned __int64 v150; // r14
  __int64 v151; // r10
  __int64 v152; // rcx
  __int64 v153; // r9
  __int64 v154; // r10
  __int64 v155; // r11
  unsigned int v156; // r13d
  const __m128i *v157; // rcx
  unsigned int v158; // r12d
  __int64 v159; // r15
  __int64 v160; // r14
  _QWORD *v161; // r15
  char *v162; // rcx
  __int64 v163; // rax
  char *v164; // rax
  char *v165; // rdx
  __int64 **v166; // rdi
  __m128i *v167; // rax
  __m128i v168; // xmm7
  __int64 v169; // r15
  __int64 v170; // r12
  __int64 v171; // rax
  const __m128i *v172; // rdi
  __int64 v173; // rbx
  __int64 v174; // rbp
  __int64 v175; // r14
  unsigned __int64 v176; // r13
  __int64 v177; // rax
  unsigned __int64 v178; // rdx
  unsigned __int64 v179; // r14
  __m128 *v180; // r15
  __int64 v181; // r9
  __int64 v182; // r10
  __int64 v183; // r11
  __int64 v184; // rcx
  __int64 v185; // r9
  __int64 v186; // r10
  __int64 v187; // r11
  unsigned __int64 v188; // r14
  __int64 v189; // r9
  __int64 v190; // r10
  __int64 v191; // r11
  __int64 v192; // rcx
  __int64 v193; // r9
  __int64 v194; // r10
  __int64 v195; // r11
  unsigned __int64 v196; // r14
  __int64 v197; // r9
  __int64 v198; // r10
  __int64 v199; // r11
  __int64 v200; // rcx
  __int64 v201; // r9
  __int64 v202; // r10
  __int64 v203; // r11
  unsigned __int64 *v204; // rax
  __int64 v205; // rcx
  __int64 v206; // r9
  unsigned __int64 v207; // rdx
  unsigned __int64 v208; // rax
  __int64 *v209; // rax
  __int64 v210; // rcx
  unsigned __int64 v211; // rax
  unsigned __int64 v212; // rcx
  __int64 v213; // r8
  __int64 v214; // r9
  unsigned __int64 *v215; // rcx
  _QWORD *v216; // rax
  __int64 v217; // rax
  _QWORD *v218; // rax
  unsigned __int64 v219; // rdx
  __m128i *v220; // r15
  unsigned __int64 v221; // rcx
  __int64 v222; // r13
  __int64 v223; // rax
  __int64 v224; // r15
  __int64 v225; // rbp
  __int32 v226; // r13d
  int v227; // r15d
  __int64 v228; // rsi
  int v229; // eax
  char *v230; // r12
  __int64 v231; // rax
  char *v232; // rax
  char *i; // rcx
  __int64 v234; // r14
  size_t v235; // rax
  unsigned __int64 **v236; // rax
  unsigned __int64 *v237; // rdx
  unsigned __int64 v238; // rax
  unsigned __int64 *v239; // rcx
  unsigned __int64 v240; // rax
  void *v241; // rdx
  void *v242; // rax
  char *v243; // r14
  void *v244; // rax
  void *v245; // rdx
  unsigned __int64 v246; // rax
  unsigned __int64 v247; // rax
  __int64 v248; // rax
  unsigned __int64 *v249; // rax
  __int64 v250; // rcx
  unsigned __int64 v251; // rax
  __m128i v252; // xmm7
  unsigned __int64 v253; // r12
  unsigned __int64 v254; // r13
  unsigned __int64 v255; // r14
  __int64 v256; // rax
  __int64 *v257; // rdx
  __int64 *v258; // rcx
  __int64 v259; // rsi
  __int64 v260; // rdi
  int v261; // eax
  unsigned int v262; // eax
  signed __int64 v263; // r15
  _WORD *v264; // [rsp+8h] [rbp-920h] BYREF
  __m128 *v265; // [rsp+10h] [rbp-918h]
  unsigned __int64 *v266; // [rsp+18h] [rbp-910h]
  __m128 *v267; // [rsp+20h] [rbp-908h]
  int v268; // [rsp+2Ch] [rbp-8FCh]
  __m128i v269; // [rsp+30h] [rbp-8F8h] BYREF
  bool *v270; // [rsp+40h] [rbp-8E8h]
  __m128i *v271; // [rsp+48h] [rbp-8E0h]
  unsigned __int64 *v272; // [rsp+50h] [rbp-8D8h]
  __int64 *v273; // [rsp+58h] [rbp-8D0h]
  _QWORD *v274; // [rsp+60h] [rbp-8C8h]
  __int64 v275; // [rsp+68h] [rbp-8C0h] BYREF
  unsigned __int64 v276; // [rsp+70h] [rbp-8B8h] BYREF
  unsigned __int64 v277; // [rsp+78h] [rbp-8B0h]
  unsigned __int8 *v278; // [rsp+90h] [rbp-898h] BYREF
  unsigned __int64 v279; // [rsp+98h] [rbp-890h]
  __m128i v280; // [rsp+B0h] [rbp-878h] BYREF
  __m128i v281; // [rsp+C0h] [rbp-868h] BYREF
  __m128i v282; // [rsp+D0h] [rbp-858h] BYREF
  __m128i v283; // [rsp+E0h] [rbp-848h] BYREF
  __m128i v284; // [rsp+F0h] [rbp-838h] BYREF
  __m128i v285[2]; // [rsp+100h] [rbp-828h] BYREF
  void *v286[2]; // [rsp+120h] [rbp-808h] BYREF
  __m128i v287; // [rsp+130h] [rbp-7F8h] BYREF
  __int64 v288; // [rsp+140h] [rbp-7E8h]
  __int64 v289; // [rsp+148h] [rbp-7E0h]
  _QWORD v290[17]; // [rsp+150h] [rbp-7D8h] BYREF
  __int64 v291; // [rsp+1D8h] [rbp-750h]
  __int64 v292; // [rsp+1E0h] [rbp-748h]
  __int64 v293; // [rsp+1F0h] [rbp-738h]
  __int64 v294; // [rsp+1F8h] [rbp-730h]
  int v295; // [rsp+208h] [rbp-720h]
  char v296; // [rsp+20Ch] [rbp-71Ch]
  void *v297; // [rsp+210h] [rbp-718h]
  __int64 v298; // [rsp+218h] [rbp-710h]
  _QWORD v299[10]; // [rsp+220h] [rbp-708h] BYREF
  void *v300; // [rsp+270h] [rbp-6B8h]
  __int64 v301; // [rsp+278h] [rbp-6B0h]
  _WORD v302[52]; // [rsp+280h] [rbp-6A8h] BYREF
  void *ptr; // [rsp+2E8h] [rbp-640h]
  __int64 v304; // [rsp+2F0h] [rbp-638h]
  _BYTE v305[40]; // [rsp+2F8h] [rbp-630h] BYREF
  __m128 v306; // [rsp+320h] [rbp-608h] BYREF
  __int64 *v307; // [rsp+330h] [rbp-5F8h]
  unsigned __int64 v308; // [rsp+338h] [rbp-5F0h]
  unsigned __int8 v309; // [rsp+340h] [rbp-5E8h]
  __int64 v310; // [rsp+348h] [rbp-5E0h]
  char v311; // [rsp+350h] [rbp-5D8h]
  char v312; // [rsp+351h] [rbp-5D7h]
  __int16 v313; // [rsp+352h] [rbp-5D6h]
  unsigned __int16 *v314; // [rsp+358h] [rbp-5D0h]
  char v315; // [rsp+360h] [rbp-5C8h]
  char v316; // [rsp+361h] [rbp-5C7h]
  bool v317; // [rsp+362h] [rbp-5C6h]
  unsigned __int16 *v318; // [rsp+368h] [rbp-5C0h]
  void *v319[2]; // [rsp+370h] [rbp-5B8h] BYREF
  _QWORD v320[33]; // [rsp+380h] [rbp-5A8h] BYREF
  void *v321; // [rsp+488h] [rbp-4A0h] BYREF
  unsigned __int64 v322; // [rsp+490h] [rbp-498h]
  _BYTE v323[64]; // [rsp+498h] [rbp-490h] BYREF
  void *v324; // [rsp+4D8h] [rbp-450h]
  __int64 v325; // [rsp+4E0h] [rbp-448h]
  _BYTE v326[1024]; // [rsp+4E8h] [rbp-440h] BYREF
  __int32 v327; // [rsp+8E8h] [rbp-40h]
  char v328; // [rsp+8ECh] [rbp-3Ch]

  v8 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v264 = a2;
  v9 = &v275;
  v265 = a1;
  v275 = a3;
  v10 = a1[15].m128_i64[1];
  v11 = (__m128i)_mm_loadh_ps((const double *)&v264);
  v307 = &v275;
  v308 = 0;
  v309 = a4;
  v310 = v10;
  v272 = (unsigned __int64 *)a1;
  v306 = (__m128)v11;
  v12 = *v8;
  v13 = 1;
  v268 = a4;
  v14 = *(_BYTE *)(v12 + 16) == 33;
  v274 = a5;
  v270 = a6;
  if ( !v14 )
  {
    v107 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v13 = 0;
    if ( *(_BYTE *)(v107 + 16) == 33 )
    {
      v108 = sub_F63050(v12, a2, v107, a4);
      v9 = v307;
      v13 = v108 != 0;
    }
  }
  v311 = v13;
  v312 = 0;
  v313 = 0;
  v15 = (unsigned __int16 *)sub_BFB9F0((__int64)v264);
  if ( (*v15 & 0x1FF) == 4 )
  {
    v118 = *((_QWORD *)v15 + 2);
    LOWORD(v265) = *v264;
    v119 = (unsigned __int16)v265 & 0x1FF;
    v15 = (unsigned __int16 *)sub_BFB9F0(v118);
    v16 = 0;
    if ( (unsigned __int16 *)v118 == v15 )
      v16 = *((_QWORD *)v15 + 5) != 0;
    v18 = 1;
    LOBYTE(v17) = v119 == 20;
  }
  else
  {
    v16 = 0;
    v17 = 0;
    v18 = 0;
  }
  v315 = v18;
  v19 = &v306;
  v317 = v16;
  v319[1] = (void *)0x800000000LL;
  v322 = 0x400000000LL;
  v20 = 0x1000000000LL;
  v314 = v15;
  v316 = v17;
  v318 = v15;
  v319[0] = v320;
  v320[32] = 0;
  v21 = *((_DWORD *)v15 + 6);
  v321 = v323;
  v324 = v326;
  v325 = 0x1000000000LL;
  v327 = v21;
  v328 = 1;
  v22 = sub_1BCC170(*v9, 0x1000000000LL, (__int64)v326, v17);
  v24 = v318;
  v308 = v22;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 <= 1 )
  {
    if ( (*v318 & 0x1FF) == 0x17 )
    {
      if ( !(unsigned __int8)sub_C95850((__int64)v318) )
      {
        v20 = (unsigned __int64)v24;
        if ( !sub_1BE70F0((__int64)v272, (unsigned __int64)v24, 0, nullptr, 0, 0, *(double *)v11.m128i_i64, a8) )
          LOBYTE(v313) = 1;
      }
      v24 = v318;
    }
    goto LABEL_8;
  }
  if ( (*(_QWORD *)v318 & 0x80000LL) == 0 )
    goto LABEL_8;
  v109 = 4LL * *((unsigned int *)v318 + 1);
  v110 = (__int64)&v318[v109 + 32];
  v111 = &v318[v109 + 40];
  if ( (*v318 & 0x1FF) == 0x18 )
    v111 = (unsigned __int16 *)v110;
  if ( !*(_DWORD *)v111 )
  {
LABEL_8:
    v25 = *(_QWORD *)v24;
    if ( (*(_QWORD *)v24 & 0x80000) == 0 )
      goto LABEL_13;
    v20 = *v24;
    v23 = 8LL * *((unsigned int *)v24 + 1);
    LOWORD(v20) = v20 & 0x1FF;
    v26 = (_DWORD *)((char *)v24 + v23 + 80);
    if ( (_WORD)v20 == 24 )
      v26 = (_DWORD *)((char *)v24 + v23 + 64);
    if ( !*v26 || (v25 & 0x80000) == 0 )
    {
LABEL_13:
      if ( !v311 )
      {
LABEL_14:
        v27 = (__int64 *)(v318 + 40);
        if ( (*v318 & 0x1FF) == 0x18 )
          v27 = (__int64 *)(v318 + 32);
        v273 = &v27[*((unsigned int *)v318 + 1)];
        if ( v27 == v273 )
          goto LABEL_74;
        LOBYTE(v265) = 0;
        v267 = &v306;
        v266 = v290;
        while ( 1 )
        {
          v28 = *v27 & 0xFFFFFFFFFFFFFFF8LL;
          LOBYTE(v29) = *(_BYTE *)(v28 + 28) & 0x7F;
          if ( (((_BYTE)v29 + 52) & 0x7Fu) <= 1 || (unsigned int)(unsigned __int8)v29 - 53 <= 1 )
          {
            v28 = sub_B72ED0(*v27 & 0xFFFFFFFFFFFFFFF8LL);
            LOBYTE(v29) = *(_BYTE *)(v28 + 28) & 0x7F;
          }
          if ( (_BYTE)v29 == 71 )
          {
            v30 = *(_QWORD *)(v28 + 48);
            if ( (*(_BYTE *)(v30 + 28) & 0x7Fu) - 35 > 3 )
            {
              if ( !v311 )
                goto LABEL_26;
            }
            else
            {
              v31 = sub_B979F0(*(_QWORD **)(v28 + 48));
              if ( !v31 )
                v31 = sub_B981D0((_QWORD *)v30, v20);
              if ( v311 != v31 )
              {
LABEL_26:
                v11.m128i_i64[0] = 0;
                v302[48] = 0;
                v287.m128i_i32[0] = v327;
                v278 = nullptr;
                v288 = (__int64)v266;
                v291 &= 0xFFFFFFFE00000000LL;
                v293 &= 0xFFFFFFFE00000000LL;
                v297 = v299;
                v298 = 0x800000000LL;
                v300 = v302;
                ptr = v305;
                *(_OWORD *)v286 = 0;
                v287.m128i_i16[2] = 0;
                v287.m128i_i64[1] = 0;
                v289 = 0x400000000LL;
                v290[16] = 0;
                v292 = 0;
                v294 = 0;
                v295 = 0;
                v296 = 0;
                v299[8] = 0;
                v299[9] = 0;
                v301 = 0x400000000LL;
                v304 = 0x400000000LL;
                v32 = sub_1D75BD0(
                        v306.m128_i32[0],
                        v28,
                        (int)v267 + 80,
                        v308,
                        (unsigned int)&v278,
                        (unsigned int)v286,
                        1);
                if ( v32 )
                {
                  v11.m128i_i64[0] = 0;
                  v75 = (__m128i *)((char *)v324 + 64 * (unsigned __int64)(unsigned int)v325);
                  if ( (unsigned int)v325 >= (unsigned __int64)HIDWORD(v325) )
                  {
                    v219 = (unsigned int)v325 + 1LL;
                    v283 = 0;
                    v220 = &v283;
                    v284 = 0;
                    memset(v285, 0, sizeof(v285));
                    if ( HIDWORD(v325) < v219 )
                    {
                      if ( v324 > &v283 || v75 <= &v283 )
                      {
                        v269.m128i_i32[0] = v32;
                        v271 = &v283;
                        sub_2237220(&v267[27].m128_u16[4], &v267[28].m128_u16[4], v219, 64);
                        v32 = v269.m128i_i32[0];
                        v220 = v271;
                        v75 = (__m128i *)((char *)v324 + 64 * (unsigned __int64)(unsigned int)v325);
                      }
                      else
                      {
                        v269.m128i_i32[0] = v32;
                        v263 = (char *)&v283 - (_BYTE *)v324;
                        sub_2237220(&v267[27].m128_u16[4], &v267[28].m128_u16[4], v219, 64);
                        v32 = v269.m128i_i32[0];
                        v220 = (__m128i *)((char *)v324 + v263);
                        v75 = (__m128i *)((char *)v324 + 64 * (unsigned __int64)(unsigned int)v325);
                      }
                    }
                    *v75 = _mm_loadu_si128(v220);
                    v75[1] = _mm_loadu_si128(v220 + 1);
                    v75[2] = _mm_loadu_si128(v220 + 2);
                    v75[3] = _mm_loadu_si128(v220 + 3);
                    v76 = (unsigned int)(v325 + 1);
                    LODWORD(v325) = v325 + 1;
                  }
                  else
                  {
                    *v75 = 0;
                    v75[1] = 0;
                    v75[2] = 0;
                    v75[3] = 0;
                    v76 = (unsigned int)(v325 + 1);
                    LODWORD(v325) = v325 + 1;
                  }
                  v20 = v310;
                  v77 = (__m128i *)((char *)v324 + 64 * v76 - 64);
                  sub_1BD97A0((__int64)&v280, v310, v32, (__int64 *)v286);
                  v78 = *(_QWORD *)(v28 + 48);
                  v79 = *v27;
                  a8 = (__m128)_mm_load_si128(&v280);
                  v80 = _mm_load_si128(&v281);
                  v81 = _mm_load_si128(&v282);
                  v283 = (__m128i)a8;
                  v284 = v80;
                  v285[0] = v81;
                  v77->m128i_i64[0] = v79;
                  v77->m128i_i64[1] = v78;
                  v77[1] = _mm_load_si128(&v283);
                  v77[2] = _mm_load_si128(&v284);
                  v77[3] = _mm_load_si128(v285);
                  v34 = 0;
                }
                else
                {
                  v20 = (unsigned __int64)v278;
                  v34 = sub_1BDFA80(v306.m128_i64[0], (__int128 *)v278, 0, 0, 0, v33);
                  if ( v34 )
                  {
                    v35 = (unsigned int)v322;
                    v36 = v278;
                    v37 = *v27;
                    v38 = (unsigned int)v322 + 1LL;
                    if ( v38 > HIDWORD(v322) )
                    {
                      v20 = (unsigned __int64)&v267[23].m128_u64[1];
                      sub_2237220(&v267[22].m128_u16[4], &v267[23].m128_u16[4], v38, 16);
                      v35 = (unsigned int)v322;
                    }
                    v39 = (__int64 *)((char *)v321 + 16 * v35);
                    *v39 = v37;
                    v39[1] = (__int64)v36;
                    LODWORD(v322) = v322 + 1;
                  }
                }
                if ( ptr != v305 )
                  free(ptr);
                if ( v300 != v302 )
                  free(v300);
                if ( v297 != v299 )
                  free(v297);
                v269.m128i_i64[0] = v288;
                v40 = (unsigned __int64 *)(v288 + 32LL * (unsigned int)v289);
                if ( (unsigned __int64 *)v288 != v40 )
                {
                  do
                  {
                    v40 -= 4;
                    v41 = v40[1];
                    if ( v41 )
                    {
                      v42 = v40[2];
                      if ( v42 )
                      {
                        if ( v41 < v42 || v41 > v42 + 14848 )
                        {
                          v43 = *(__m128i **)(v41 + 528);
                          v44 = &v43[4 * (unsigned __int64)*(unsigned int *)(v41 + 536)];
                          if ( v43 != v44 )
                          {
                            do
                            {
                              while ( 1 )
                              {
                                v44 -= 4;
                                v45 = (unsigned __int64 *)v44[1].m128i_i64[1];
                                if ( v45 == &v44[2].m128i_u64[1] )
                                  break;
                                v271 = v43;
                                operator delete(v45);
                                v43 = v271;
                                if ( v271 == v44 )
                                  goto LABEL_44;
                              }
                            }
                            while ( v43 != v44 );
LABEL_44:
                            v44 = *(__m128i **)(v41 + 528);
                          }
                          if ( v44 != (__m128i *)(v41 + 544) )
                            free(v44);
                          v46 = *(void **)(v41 + 416);
                          v47 = (void **)(v41 + 416);
                          if ( v46 != (void *)(v41 + 432) )
                            free(v46);
                          v48 = (__m128i *)(v41 + 96);
                          do
                          {
                            while ( 1 )
                            {
                              v47 -= 4;
                              v49 = *v47;
                              if ( *v47 == v47 + 2 )
                                break;
                              v271 = v48;
                              operator delete(v49);
                              v48 = v271;
                              if ( v47 == (void **)v271 )
                                goto LABEL_52;
                            }
                          }
                          while ( v47 != (void **)v48 );
LABEL_52:
                          v20 = 928;
                          operator delete((void *)v41, 0x3A0u);
                        }
                        else
                        {
                          v64 = *(unsigned int *)(v42 + 14976);
                          *(_DWORD *)(v42 + 14976) = v64 + 1;
                          *(_QWORD *)(v42 + 8 * v64 + 14848) = v41;
                        }
                      }
                    }
                  }
                  while ( (unsigned __int64 *)v269.m128i_i64[0] != v40 );
                  v40 = (unsigned __int64 *)v288;
                }
                if ( v40 != v266 )
                  free(v40);
                v50 = (char)v265;
                if ( v34 )
                  v50 = v34;
                LOBYTE(v265) = v50;
                goto LABEL_60;
              }
            }
            goto LABEL_60;
          }
          if ( (*(_QWORD *)v318 & 0x80000LL) != 0 )
          {
            v20 = *v318;
            v73 = 4LL * *((unsigned int *)v318 + 1);
            LOWORD(v20) = v20 & 0x1FF;
            v74 = &v318[v73 + 40];
            if ( (_WORD)v20 == 24 )
              v74 = &v318[v73 + 32];
            if ( *(_DWORD *)v74 )
              goto LABEL_60;
            v29 = (unsigned __int8)v29;
            if ( (unsigned int)(unsigned __int8)v29 - 35 <= 3 )
            {
LABEL_88:
              v65 = sub_B979F0((_QWORD *)v28);
              if ( v65 )
              {
                if ( v311 == v65 )
                  goto LABEL_60;
              }
              else
              {
                v134 = sub_B981D0((_QWORD *)v28, v20);
                if ( v311 == v134 )
                  goto LABEL_60;
              }
              v29 = *(_BYTE *)(v28 + 28) & 0x7F;
              goto LABEL_91;
            }
          }
          else
          {
            v29 = (unsigned __int8)v29;
            if ( (unsigned int)(unsigned __int8)v29 - 35 <= 3 )
              goto LABEL_88;
          }
          if ( v311 )
            goto LABEL_60;
LABEL_91:
          if ( (unsigned int)(v29 - 34) <= 5 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(v306.m128_u64[0] + 232) + 60LL) & 0x10) == 0
              || (v20 = 1, (v211 = sub_15F1640(v306.m128_i64[0], 1)) != 0) && (*(_BYTE *)(v211 + 29) & 2) != 0
              || (v20 = v211, (unsigned int)sub_178F000(
                                              *(_QWORD *)(v306.m128_u64[0] + 664),
                                              v211,
                                              v28,
                                              v212,
                                              v213,
                                              v214)) )
            {
              if ( *(char *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28) + 84) >= 0
                || (*(_BYTE *)(v28 + 29) & 1) == 0 )
              {
                goto LABEL_94;
              }
              v204 = sub_B8C3D0(v28, v20, v66, v67, v68, v69);
              v207 = *v204;
              v208 = *v204 + 8LL * *((unsigned int *)v204 + 2);
              if ( v207 < v208 )
              {
                v205 = v207;
                while ( 1 )
                {
                  v20 = *(_QWORD *)v205;
                  if ( *(_WORD *)(*(_QWORD *)v205 + 36LL) == 376 )
                    break;
                  v205 += 8;
                  if ( v208 == v205 )
                    goto LABEL_320;
                }
                if ( v208 == v205 )
                  goto LABEL_320;
              }
              else
              {
                if ( v207 == v208 )
                  goto LABEL_320;
                if ( *(_WORD *)(*(_QWORD *)v208 + 36LL) != 376 )
                {
                  v209 = (__int64 *)(v208 + 8);
                  while ( 1 )
                  {
                    v205 = (__int64)v209;
                    if ( (__int64 *)v207 == v209 )
                      break;
                    v210 = *v209++;
                    if ( *(_WORD *)(v210 + 36) == 376 )
                      goto LABEL_316;
                  }
LABEL_320:
                  if ( (*(_BYTE *)(v28 + 29) & 1) != 0 )
                  {
                    v236 = (unsigned __int64 **)sub_B8C3D0(v28, v20, v207, v205, v23, v206);
                    v237 = *v236;
                    v238 = (unsigned __int64)&(*v236)[*((unsigned int *)v236 + 2)];
                    if ( (unsigned __int64)v237 < v238 )
                    {
                      v239 = v237;
                      while ( 1 )
                      {
                        v20 = *v239;
                        if ( *(_WORD *)(*v239 + 36) == 378 )
                          break;
                        if ( (unsigned __int64 *)v238 == ++v239 )
                          goto LABEL_94;
                      }
                      if ( (unsigned __int64 *)v238 == v239 )
                        goto LABEL_94;
LABEL_328:
                      while ( 1 )
                      {
                        v240 = *v237;
                        if ( *(_WORD *)(*v237 + 36) == 378 )
                          break;
                        ++v237;
                      }
                      v241 = (void *)*(unsigned int *)(v240 + 40);
                      v242 = *(void **)(v240 + 48);
                      v243 = nullptr;
                      v286[1] = v241;
                      v286[0] = v242;
                      v244 = (void *)sub_2246FB0(v286, asc_22E1692, 6, 0);
                      v245 = v286[1];
                      if ( v244 < v286[1] )
                      {
                        v243 = (char *)((char *)v286[1] - (char *)v244);
                        v245 = v244;
                      }
                      v283.m128i_i64[1] = (__int64)v243;
                      v283.m128i_i64[0] = (__int64)v286[0] + (unsigned __int64)v245;
                      v246 = sub_2247130(&v283, asc_22E1692, 6, -1) + 1;
                      if ( v246 > v283.m128i_i64[1] )
                        v246 = v283.m128i_u64[1];
                      v20 = v283.m128i_i64[1] - (_QWORD)v243;
                      v247 = v283.m128i_i64[1] - (_QWORD)v243 + v246;
                      if ( v247 > v283.m128i_i64[1] )
                        v247 = v283.m128i_u64[1];
                      if ( v247 != 7
                        || *(_DWORD *)v283.m128i_i64[0] != 1634100580
                        || *(_WORD *)(v283.m128i_i64[0] + 4) != 27765
                        || *(_BYTE *)(v283.m128i_i64[0] + 6) != 116 )
                      {
                        goto LABEL_60;
                      }
                      goto LABEL_94;
                    }
                    if ( v237 != (unsigned __int64 *)v238 )
                    {
                      if ( *(_WORD *)(*(_QWORD *)v238 + 36LL) != 378 )
                      {
                        v249 = (unsigned __int64 *)(v238 + 8);
                        while ( v237 != v249 )
                        {
                          v250 = *v249++;
                          if ( *(_WORD *)(v250 + 36) == 378 )
                            goto LABEL_328;
                        }
                        goto LABEL_94;
                      }
                      goto LABEL_328;
                    }
                  }
LABEL_94:
                  v70 = v309;
                  v71 = sub_EEB7E0(v306.m128_u64[1], v20, *(double *)v11.m128i_i64);
                  v20 = v28;
                  if ( sub_1BCC890(v306.m128_i64[0], v28, v71, v70, *(double *)v11.m128i_i64, a8) )
                  {
                    HIBYTE(v313) |= v309;
                  }
                  else
                  {
                    v20 = v28;
                    v135 = sub_1BDFA80(v306.m128_i64[0], (__int128 *)v28, 0, 0, 0, v72);
                    if ( v135 )
                    {
                      if ( (*(_BYTE *)(*(_QWORD *)(v306.m128_u64[0] + 232) + 1LL) & 8) == 0
                        || (v20 = *(_QWORD *)(v28 + 48),
                            *(_QWORD *)(*(_QWORD *)&byte_8[v308 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
                        || sub_1BE5710(v306.m128_i64[0], v20, v308, nullptr, nullptr) )
                      {
                        v136 = (__int64 **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28);
                        v137 = (unsigned int)v322;
                        v20 = HIDWORD(v322);
                        v138 = *v27;
                        v139 = (unsigned int)v322 + 1LL;
                        if ( v139 > HIDWORD(v322) )
                        {
                          v265 = (__m128 *)v136;
                          v20 = (unsigned __int64)&v267[23].m128_u64[1];
                          sub_2237220(&v267[22].m128_u16[4], &v267[23].m128_u16[4], v139, 16);
                          v137 = (unsigned int)v322;
                          v136 = (__int64 **)v265;
                        }
                        v140 = (__int64 *)((char *)v321 + 16 * v137);
                        LOBYTE(v265) = v135;
                        *v140 = v138;
                        v140[1] = (__int64)v136;
                        v312 = 1;
                        LODWORD(v322) = v322 + 1;
                      }
                    }
                  }
                  goto LABEL_60;
                }
              }
LABEL_316:
              while ( 1 )
              {
                v234 = *(_QWORD *)v207;
                if ( *(_WORD *)(*(_QWORD *)v207 + 36LL) == 376 )
                  break;
                v207 += 8LL;
              }
              v235 = j__strlen("default");
              v207 = *(unsigned int *)(v234 + 40);
              if ( v235 == v207 )
              {
                if ( !v235 )
                  goto LABEL_320;
                v20 = (unsigned __int64)"default";
                if ( !memcmp(*(const void **)(v234 + 48), "default", v235) )
                  goto LABEL_320;
              }
            }
          }
LABEL_60:
          if ( v273 == ++v27 )
          {
            v19 = v267;
            v51 = (unsigned int)v322;
            if ( !(_BYTE)v265 )
              goto LABEL_75;
            if ( (unsigned int)v322 <= 1 )
              goto LABEL_63;
            v123 = (__m128 *)v321;
            v124 = 16LL * (unsigned int)v322;
            v125 = (__m128 *)((char *)v321 + v124);
            v126 = (__m128 *)((char *)v321 + 16);
            v266 = (unsigned __int64 *)v321;
            v267 = (__m128 *)((char *)v321 + v124);
            if ( (char *)v321 + 16 == (char *)v321 + v124 )
            {
LABEL_185:
              v146 = (__int64 *)v266[1];
              v286[0] = v19;
              v147 = v124 >> 4;
              v148 = v124 >> 6;
              v286[1] = v146;
              if ( !v148 )
                goto LABEL_270;
              v149 = (__int64 *)v19;
              v265 = &v123[4 * v148];
              while ( 2 )
              {
                v150 = v123->m128_u64[1];
                if ( (__int64 *)v150 != v146 )
                {
                  v151 = v149[3];
                  v20 = v146[6];
                  if ( *(_QWORD *)(*(_QWORD *)&byte_8[v151 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
                  {
                    if ( !sub_1BE5710(*v149, v20, v149[3], nullptr, nullptr) )
                      goto LABEL_191;
                    v151 = v149[3];
                  }
                  if ( sub_1BC70C0(v151, *(_QWORD *)(v150 + 48)) )
                  {
LABEL_190:
                    v20 = (unsigned __int64)v146;
                    if ( (unsigned int)sub_1BC8F70(v153, (__int64)v146, v150, v152, v23, v153) != 1 )
                      goto LABEL_191;
                  }
                  else
                  {
                    v20 = v155;
                    if ( sub_1BE5710(v153, v155, v154, nullptr, nullptr) )
                    {
                      v153 = *v149;
                      goto LABEL_190;
                    }
                  }
                  v149 = (__int64 *)v286[0];
                  v146 = (__int64 *)v286[1];
                }
                v179 = v123[1].m128_u64[1];
                v180 = v123 + 1;
                if ( (__int64 *)v179 != v146 )
                {
                  if ( !sub_1BC70C0(v149[3], v146[6]) )
                  {
                    v20 = v182;
                    if ( !sub_1BE5710(v183, v182, v181, nullptr, nullptr) )
                      goto LABEL_224;
                    v181 = v149[3];
                  }
                  if ( sub_1BC70C0(v181, *(_QWORD *)(v179 + 48)) )
                  {
LABEL_223:
                    v20 = (unsigned __int64)v146;
                    if ( (unsigned int)sub_1BC8F70(v187, (__int64)v146, v179, v184, v23, v185) != 1 )
                      goto LABEL_224;
                  }
                  else
                  {
                    v20 = v186;
                    if ( sub_1BE5710(v187, v186, v185, nullptr, nullptr) )
                    {
                      v187 = *v149;
                      goto LABEL_223;
                    }
                  }
                  v149 = (__int64 *)v286[0];
                  v146 = (__int64 *)v286[1];
                }
                v188 = v123[2].m128_u64[1];
                v180 = v123 + 2;
                if ( (__int64 *)v188 != v146 )
                {
                  if ( !sub_1BC70C0(v149[3], v146[6]) )
                  {
                    v20 = v190;
                    if ( !sub_1BE5710(v191, v190, v189, nullptr, nullptr) )
                      goto LABEL_224;
                    v189 = v149[3];
                  }
                  if ( sub_1BC70C0(v189, *(_QWORD *)(v188 + 48)) )
                  {
LABEL_230:
                    v20 = (unsigned __int64)v146;
                    if ( (unsigned int)sub_1BC8F70(v195, (__int64)v146, v188, v192, v23, v193) != 1 )
                      goto LABEL_224;
                  }
                  else
                  {
                    v20 = v194;
                    if ( sub_1BE5710(v195, v194, v193, nullptr, nullptr) )
                    {
                      v195 = *v149;
                      goto LABEL_230;
                    }
                  }
                  v149 = (__int64 *)v286[0];
                  v146 = (__int64 *)v286[1];
                }
                v196 = v123[3].m128_u64[1];
                v180 = v123 + 3;
                if ( (__int64 *)v196 != v146 )
                {
                  if ( !sub_1BC70C0(v149[3], v146[6]) )
                  {
                    v20 = v198;
                    if ( !sub_1BE5710(v199, v198, v197, nullptr, nullptr) )
                    {
LABEL_224:
                      v123 = v180;
                      goto LABEL_191;
                    }
                    v197 = v149[3];
                  }
                  if ( sub_1BC70C0(v197, *(_QWORD *)(v196 + 48)) )
                  {
LABEL_235:
                    v20 = (unsigned __int64)v146;
                    if ( (unsigned int)sub_1BC8F70(v203, (__int64)v146, v196, v200, v23, v201) != 1 )
                      goto LABEL_224;
                  }
                  else
                  {
                    v20 = v202;
                    if ( sub_1BE5710(v203, v202, v201, nullptr, nullptr) )
                    {
                      v203 = *v149;
                      goto LABEL_235;
                    }
                  }
                }
                v123 += 4;
                if ( v265 != v123 )
                {
                  v149 = (__int64 *)v286[0];
                  v146 = (__int64 *)v286[1];
                  continue;
                }
                break;
              }
              v147 = v267 - v123;
LABEL_270:
              if ( v147 == 2 )
              {
                v265 = (__m128 *)v286;
                goto LABEL_391;
              }
              if ( v147 != 3 )
              {
                if ( v147 == 1 )
                {
                  v265 = (__m128 *)v286;
                  goto LABEL_274;
                }
                goto LABEL_275;
              }
              v20 = (unsigned __int64)v123;
              v265 = (__m128 *)v286;
              if ( !sub_1BE62E0((__int64 **)v286, (__int64)v123) )
              {
                ++v123;
LABEL_391:
                v20 = (unsigned __int64)v123;
                if ( !sub_1BE62E0((__int64 **)v265, (__int64)v123) )
                {
                  ++v123;
LABEL_274:
                  v20 = (unsigned __int64)v123;
                  if ( !sub_1BE62E0((__int64 **)v265, (__int64)v123) )
                  {
LABEL_275:
                    v215 = v266;
                    v216 = v321;
                    *(_QWORD *)v321 = *v266;
                    v51 = v215[1];
                    v216[1] = v51;
                    v217 = (unsigned int)v322;
                    if ( (unsigned int)v322 == 1 )
                    {
                      v51 = 1;
                      goto LABEL_63;
                    }
                    if ( (unsigned int)v322 > 1uLL )
                    {
LABEL_281:
                      v52 = v321;
                    }
                    else
                    {
                      v20 = HIDWORD(v322);
                      if ( !HIDWORD(v322) )
                      {
                        v20 = (unsigned __int64)&v19[23].m128_u64[1];
                        sub_2237220(&v19[22].m128_u16[4], &v19[23].m128_u16[4], 1, 16);
                        v217 = (unsigned int)v322;
                      }
                      v52 = v321;
                      v218 = (char *)v321 + 16 * v217;
                      v51 = (unsigned __int64)v321 + 16;
                      if ( v218 != (_QWORD *)((char *)v321 + 16) )
                      {
                        do
                        {
                          *v218 = 0;
                          v218 += 2;
                          *(v218 - 1) = 0;
                        }
                        while ( (_QWORD *)v51 != v218 );
                        goto LABEL_281;
                      }
                    }
                    LODWORD(v322) = 1;
LABEL_67:
                    v53 = v52[1];
                    v54 = (__int64 *)(*(_QWORD *)(v53 + 48) & 0xFFFFFFFFFFFFFFF0LL);
                    v55 = *v54;
                    if ( *(_BYTE *)(*v54 + 16) == 26 || (v55 = sub_1BC7360(*v54, v20, v51, (__int64)v52)) != 0 )
                    {
                      v56 = sub_C00A40((unsigned __int64)v264, v20, v51, (__int64)v52, v23);
                      v20 = v56;
                      sub_18B0530((__int64)v272, v56, v55, *(double *)v11.m128i_i64, a8);
                    }
                    if ( (_DWORD)v322 != 1 )
                    {
                      *v274 = 0x10102464C457FLL;
                      BUG();
                    }
                    v14 = (_BYTE)v268 == 0;
                    v57 = *(_QWORD *)v321;
                    *v274 = *(_QWORD *)v321;
                    if ( !v14 )
                    {
                      if ( (_BYTE)v313 )
                      {
                        v58 = (__int64 *)(v306.m128_u64[0] + 8);
                        v59 = sub_EEB7E0((unsigned __int64)v318, v20, *(double *)v11.m128i_i64);
                        sub_168B9F0((__int64)v286, v58, v59, 0xFC9u, 0);
                        v283.m128i_i64[0] = sub_EEC8C0((unsigned __int64)v318, (__int64)v58, *(double *)v11.m128i_i64);
                        sub_1587DB0((__int64)v286, v283.m128i_i64);
                        sub_15F7200(v286);
                      }
                      else
                      {
                        sub_1663480(v272, (__int64)v264, v57, *(double *)v11.m128i_i64);
                      }
                    }
                    goto LABEL_124;
                  }
                }
              }
LABEL_191:
              if ( v123 == v267 )
                goto LABEL_275;
              v156 = v322;
              if ( !v312 )
              {
                v265 = (__m128 *)v286;
                v286[0] = &v287;
                v286[1] = (void *)0x400000000LL;
                if ( (_DWORD)v322 )
                {
                  v221 = 4;
                  v222 = 0;
                  v223 = 0;
                  v224 = 16LL * (unsigned int)(v322 - 1);
                  while ( 1 )
                  {
                    v283.m128i_i64[0] = *(_QWORD *)((char *)v321 + v222 + 8) | *(_QWORD *)((_BYTE *)v321 + v222) & 3LL;
                    v225 = v283.m128i_i64[0];
                    if ( v223 + 1 > v221 )
                    {
                      sub_2237220(v265, &v287, v223 + 1, 8);
                      *((_QWORD *)v286[0] + LODWORD(v286[1])) = v225;
                    }
                    else
                    {
                      *((_QWORD *)v286[0] + v223) = v283.m128i_i64[0];
                    }
                    v223 = (unsigned int)++LODWORD(v286[1]);
                    if ( v224 == v222 )
                      break;
                    v221 = HIDWORD(v286[1]);
                    v222 += 16;
                  }
                }
                v226 = v306.m128_i32[0];
                v227 = v309;
                sub_168B9B0((__int64)&v283, v306.m128_u64[0] + 8, 6210);
                sub_AE9DF0((unsigned __int8 **)&v283, 0, 3u);
                sub_AE9DF0((unsigned __int8 **)&v283, 2, 3u);
                sub_168B9B0((__int64)&v278, v306.m128_u64[0] + 8, 2956);
                sub_AE9DF0(&v278, *(_QWORD *)(*((_QWORD *)v321 + 1) + 40LL), 9u);
                v266 = &v276;
                v228 = v306.m128_u64[0] + 8;
                sub_168B9B0((__int64)&v276, v306.m128_u64[0] + 8, 0);
                v229 = sub_EEB7E0(v306.m128_u64[1], v228, *(double *)v11.m128i_i64);
                v230 = (char *)sub_1D7EDC0(
                                 v226,
                                 v286[0],
                                 LODWORD(v286[0]) + 8 * LODWORD(v286[1]),
                                 (int)v19 + 440,
                                 v229,
                                 (_DWORD)v266,
                                 (__int64)&v278,
                                 (__int64)&v283,
                                 v227,
                                 v308);
                if ( v276 && v277 )
                  sub_1580C40(v277, v276);
                if ( v278 && v279 )
                  sub_1580C40(v279, (unsigned __int64)v278);
                v20 = v283.m128i_i64[0];
                if ( v283.m128i_i64[0] && v283.m128i_i64[1] )
                  sub_1580C40(v283.m128i_u64[1], v283.m128i_u64[0]);
                v166 = (__int64 **)v286[0];
                if ( v230 == (char *)v286[0] + 8 * LODWORD(v286[1]) )
                {
                  HIBYTE(v313) |= v309;
                }
                else
                {
                  *(_QWORD *)v321 = *((_QWORD *)v321 + 2 * ((v230 - (char *)v286[0]) >> 3));
                  *((_QWORD *)v321 + 1) = *(_QWORD *)v230 & 0xFFFFFFFFFFFFFFF8LL;
                  v231 = (unsigned int)v322;
                  if ( (unsigned int)v322 != 1 )
                  {
                    if ( (unsigned int)v322 <= 1uLL )
                    {
                      if ( !HIDWORD(v322) )
                      {
                        v20 = (unsigned __int64)&v19[23].m128_u64[1];
                        sub_2237220(&v19[22].m128_u16[4], &v19[23].m128_u16[4], 1, 16);
                        v231 = (unsigned int)v322;
                      }
                      v232 = (char *)v321 + 16 * v231;
                      for ( i = (char *)v321 + 16; i != v232; *((_QWORD *)v232 - 1) = 0 )
                      {
                        *(_QWORD *)v232 = 0;
                        v232 += 16;
                      }
                    }
                    LODWORD(v322) = 1;
                  }
                  v166 = (__int64 **)v286[0];
                }
                if ( v166 != (__int64 **)&v265[1] )
                  goto LABEL_312;
                goto LABEL_74;
              }
              v157 = (const __m128i *)v321;
              if ( (_DWORD)v322 )
              {
                v158 = 0;
                do
                {
                  v159 = v158;
                  if ( sub_B77AF0(v157[v159].m128i_i64[1]) )
                  {
                    v160 = 16LL * --v156;
                    v161 = (char *)v321 + v159 * 16;
                    v162 = (char *)v321 + v160;
                    *v161 = *(_QWORD *)((char *)v321 + v160);
                    v161[1] = *((_QWORD *)v162 + 1);
                    v163 = (unsigned int)v322;
                    if ( v156 == (unsigned __int64)(unsigned int)v322 )
                    {
                      v157 = (const __m128i *)v321;
                      v166 = (__int64 **)v321;
                    }
                    else if ( v156 < (unsigned __int64)(unsigned int)v322 )
                    {
                      v157 = (const __m128i *)v321;
                      LODWORD(v322) = v156;
                      v166 = (__int64 **)v321;
                    }
                    else
                    {
                      if ( v156 > (unsigned __int64)HIDWORD(v322) )
                      {
                        sub_2237220(&v19[22].m128_u16[4], &v19[23].m128_u16[4], v156, 16);
                        v163 = (unsigned int)v322;
                      }
                      v157 = (const __m128i *)v321;
                      v164 = (char *)v321 + 16 * v163;
                      v165 = (char *)v321 + v160;
                      v166 = (__int64 **)v321;
                      if ( v164 != (char *)v321 + v160 )
                      {
                        do
                        {
                          *(_QWORD *)v164 = 0;
                          v164 += 16;
                          *((_QWORD *)v164 - 1) = 0;
                        }
                        while ( v165 != v164 );
                        v157 = (const __m128i *)v321;
                        v166 = (__int64 **)v321;
                      }
                      LODWORD(v322) = v156;
                    }
                  }
                  else
                  {
                    v157 = (const __m128i *)v321;
                    ++v158;
                    v166 = (__int64 **)v321;
                  }
                }
                while ( v158 != v156 );
                v20 = 0x400000000LL;
                v265 = (__m128 *)v286;
                v167 = &v287;
                v286[1] = (void *)0x400000000LL;
                v286[0] = &v287;
                v168 = _mm_loadu_si128(v157);
                LODWORD(v286[1]) = 1;
                v287 = v168;
                if ( (unsigned int)v322 > 1 )
                {
                  v169 = 16;
                  v267 = (__m128 *)&v287;
                  v266 = (unsigned __int64 *)v19;
                  v170 = 16 * ((unsigned int)(v322 - 2) + 2LL);
                  while ( 1 )
                  {
                    v172 = (const __m128i *)&v166[(unsigned __int64)v169 / 8];
                    v173 = v167->m128i_i64[1];
                    v174 = v172->m128i_i64[1];
                    if ( v174 && v173 )
                    {
                      v175 = v306.m128_u64[0];
                      v176 = sub_B77AF0(v172->m128i_i64[1]);
                      if ( !(sub_B77AF0(v173) | v176) )
                      {
                        v20 = v174;
                        v171 = sub_1BD4060(v175, v174, v173, 0, 0);
                        if ( v171 )
                        {
                          v166 = (__int64 **)v321;
                          if ( *(_QWORD *)((char *)v321 + v169 + 8) == v171 )
                          {
                            v248 = 0;
                            LODWORD(v286[1]) = 0;
                            v11 = _mm_loadu_si128((const __m128i *)((char *)v321 + v169));
                            if ( !HIDWORD(v286[1]) )
                            {
                              v20 = (unsigned __int64)v267;
                              v269 = v11;
                              sub_2237220(v265, v267, 1, 16);
                              v11 = _mm_load_si128(&v269);
                              v248 = 16LL * LODWORD(v286[1]);
                            }
                            *(__m128i *)((char *)v286[0] + v248) = v11;
                            v166 = (__int64 **)v321;
                            ++LODWORD(v286[1]);
                          }
                          goto LABEL_209;
                        }
                      }
                      v172 = (const __m128i *)((char *)v321 + v169);
                    }
                    v177 = LODWORD(v286[1]);
                    v11 = _mm_loadu_si128(v172);
                    v178 = LODWORD(v286[1]) + 1LL;
                    if ( v178 > HIDWORD(v286[1]) )
                    {
                      v20 = (unsigned __int64)v267;
                      v269 = v11;
                      sub_2237220(v265, v267, v178, 16);
                      v177 = LODWORD(v286[1]);
                      v11 = _mm_load_si128(&v269);
                    }
                    *((__m128i *)v286[0] + v177) = v11;
                    v166 = (__int64 **)v321;
                    ++LODWORD(v286[1]);
LABEL_209:
                    v169 += 16;
                    if ( v170 == v169 )
                    {
                      v19 = (__m128 *)v266;
                      v51 = LODWORD(v286[1]);
                      v251 = HIDWORD(v322);
                      if ( v166 != (__int64 **)(v266 + 47) )
                      {
                        v20 = (unsigned __int64)&v265[1];
                        if ( v286[0] != &v265[1] )
                        {
                          v321 = v286[0];
                          v286[0] = v166;
                          LODWORD(v286[1]) = v322;
                          v322 = __PAIR64__(HIDWORD(v286[1]), v51);
                          HIDWORD(v286[1]) = v251;
                          goto LABEL_365;
                        }
                      }
LABEL_369:
                      if ( v251 < v51 )
                      {
                        v20 = (unsigned __int64)&v19[23].m128_u64[1];
                        sub_2237220(&v19[22].m128_u16[4], &v19[23].m128_u16[4], v51, 16);
                      }
                      v253 = (unsigned int)v322;
                      v51 = (unsigned int)v322;
                      if ( HIDWORD(v286[1]) < (unsigned int)v322 )
                      {
                        v20 = (unsigned __int64)&v265[1];
                        sub_2237220(v265, &v265[1], (unsigned int)v322, 16);
                        v253 = (unsigned int)v322;
                        v51 = (unsigned int)v322;
                      }
                      v254 = LODWORD(v286[1]);
                      v255 = v253;
                      if ( LODWORD(v286[1]) <= v253 )
                        v255 = LODWORD(v286[1]);
                      if ( v255 )
                      {
                        v256 = 0;
                        v23 = 16 * v255;
                        do
                        {
                          v257 = (__int64 *)((char *)v286[0] + v256);
                          v258 = (__int64 *)((char *)v321 + v256);
                          v256 += 16;
                          v259 = *v258;
                          *v258 = *v257;
                          v260 = v257[1];
                          *v257 = v259;
                          v20 = v258[1];
                          v258[1] = v260;
                          v257[1] = v20;
                        }
                        while ( v23 != v256 );
                        v253 = (unsigned int)v322;
                        v254 = LODWORD(v286[1]);
                        v51 = (unsigned int)v322;
                      }
                      v166 = (__int64 **)v286[0];
                      if ( v253 <= v254 )
                      {
                        if ( v253 < v254 )
                        {
                          v261 = v253;
                          v20 = (unsigned __int64)v286[0] + 16 * v255;
                          v23 = (__int64)v286[0] + 16 * v254;
                          if ( v20 != v23 )
                          {
                            memcpy((char *)v321 + 16 * v253, (const void *)v20, 16 * v254 - 16 * v255);
                            v261 = v322;
                            v166 = (__int64 **)v286[0];
                          }
                          LODWORD(v286[1]) = v255;
                          v262 = v254 - v253 + v261;
                          v51 = v262;
                          LODWORD(v322) = v262;
                        }
                      }
                      else
                      {
                        v23 = v254;
                        v20 = (unsigned __int64)v321 + 16 * v255;
                        if ( (void *)v20 != (char *)v321 + 16 * v253 )
                        {
                          memcpy((char *)v286[0] + 16 * v254, (const void *)v20, 16 * v253 - 16 * v255);
                          v23 = LODWORD(v286[1]);
                          v166 = (__int64 **)v286[0];
                        }
                        v51 = (unsigned int)v255;
                        LODWORD(v322) = v255;
                        LODWORD(v286[1]) = v253 - v254 + v23;
                      }
LABEL_365:
                      if ( v166 == (__int64 **)&v265[1] )
                      {
LABEL_75:
                        if ( (*(_BYTE *)(v272[29] + 60) & 0x10) != 0 && (unsigned int)v51 > 1 )
                        {
                          v60 = *(_QWORD *)(v306.m128_u64[0] + 664);
                          v20 = sub_15F1640(v306.m128_i64[0], 1);
                          sub_178F320(v60, v20, &v19[22].m128_u32[2], v61, v62, v63);
                          goto LABEL_78;
                        }
                        goto LABEL_63;
                      }
LABEL_312:
                      free(v166);
LABEL_74:
                      v51 = (unsigned int)v322;
                      goto LABEL_75;
                    }
                    v167 = (__m128i *)v286[0];
                  }
                }
              }
              else
              {
                v265 = (__m128 *)v286;
                v286[0] = &v287;
                v286[1] = (void *)0x400000000LL;
                v252 = _mm_loadu_si128((const __m128i *)v321);
                LODWORD(v286[1]) = 1;
                v287 = v252;
              }
              v251 = HIDWORD(v322);
              v51 = 1;
              goto LABEL_369;
            }
            while ( 2 )
            {
              v131 = v126->m128_i64[1];
              v132 = v308;
              v133 = v123->m128_u64[1];
              v20 = *(_QWORD *)(v131 + 48);
              if ( *(_QWORD *)(*(_QWORD *)&byte_8[v308 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
              {
LABEL_159:
                if ( !sub_1BC70C0(v132, *(_QWORD *)(v133 + 48)) )
                {
                  v20 = v130;
                  if ( !sub_1BE5710(v128, v130, v129, nullptr, nullptr) )
                  {
                    v123 = v126;
                    goto LABEL_162;
                  }
                  v128 = v306.m128_u64[0];
                }
                v20 = v131;
                if ( (unsigned int)sub_1BC8F70(v128, v131, v133, v127, v23, v128) == 1 )
                  v123 = v126;
              }
              else if ( sub_1BE5710(v306.m128_i64[0], v20, v308, nullptr, nullptr) )
              {
                v132 = v308;
                goto LABEL_159;
              }
LABEL_162:
              if ( v125 == ++v126 )
              {
                v266 = (unsigned __int64 *)v123;
                v123 = (__m128 *)v321;
                v124 = 16LL * (unsigned int)v322;
                v267 = (__m128 *)((char *)v321 + v124);
                goto LABEL_185;
              }
              continue;
            }
          }
        }
      }
LABEL_73:
      if ( !v317 )
        goto LABEL_74;
      goto LABEL_14;
    }
    v141 = (_DWORD *)((char *)v24 + v23 + 64);
    if ( (_WORD)v20 != 24 )
      v141 = (_DWORD *)((char *)v24 + v23 + 80);
    v142 = v25 >> 16;
    if ( (v142 & 8) == 0 )
      goto LABEL_177;
    if ( (_WORD)v20 == 24 )
    {
      v145 = v23 + 64;
      if ( *(_DWORD *)((char *)v24 + v23 + 64) )
      {
LABEL_183:
        v20 = (unsigned __int64)&v24[8 * ((v142 & 8) != 0)] + v145;
LABEL_178:
        sub_F1EA70(v141, v20, (__int64)v319);
        if ( !v311 )
          goto LABEL_14;
        goto LABEL_73;
      }
    }
    else
    {
      v145 = v23 + 80;
      if ( *(_DWORD *)((char *)v24 + v23 + 80) )
        goto LABEL_183;
    }
LABEL_177:
    v20 = 0;
    goto LABEL_178;
  }
  v20 = (unsigned __int64)v318;
  v112 = sub_1BE70F0((__int64)v272, (unsigned __int64)v318, 0, (__int64 *)v286, 0, 0, *(double *)v11.m128i_i64, a8);
  v113 = v112;
  if ( v112 )
  {
    if ( (*(_BYTE *)(v112 + 28) & 0x7Fu) - 35 > 3 || sub_B979F0((_QWORD *)v112) )
    {
      LODWORD(v51) = v322;
    }
    else
    {
      v311 = 1;
      v51 = (unsigned int)v322;
      if ( !v317 )
        goto LABEL_63;
    }
    v114 = (unsigned int)v51;
    v115 = v286[0];
    v116 = (unsigned int)v51 + 1LL;
    if ( v116 > HIDWORD(v322) )
    {
      v20 = (unsigned __int64)v323;
      sub_2237220(&v321, v323, v116, 16);
      v114 = (unsigned int)v322;
    }
    v117 = (char *)v321 + 16 * v114;
    *v117 = v115;
    v117[1] = v113;
    v51 = (unsigned int)(v322 + 1);
    LODWORD(v322) = v322 + 1;
LABEL_63:
    if ( !(_BYTE)v268 )
      goto LABEL_65;
  }
  else
  {
LABEL_78:
    v51 = (unsigned int)v322;
    if ( !(_BYTE)v268 )
      goto LABEL_65;
  }
  if ( !HIBYTE(v313) )
  {
    if ( (_DWORD)v51 )
    {
      if ( (int)v51 <= 1 )
        goto LABEL_65;
      v120 = (__int64 *)(v306.m128_u64[0] + 8);
      v121 = sub_EEB7E0((unsigned __int64)v318, v20, *(double *)v11.m128i_i64);
      sub_168B9F0((__int64)v286, v120, v121, 0xB8Cu, 0);
      v278 = *((unsigned __int8 **)v318 + 2);
      v122 = sub_15894B0((__int64)v286, (__int64 *)&v278);
      v283.m128i_i64[0] = sub_EEC8C0((unsigned __int64)v318, (__int64)&v278, *(double *)v11.m128i_i64);
      sub_1587DB0(v122, v283.m128i_i64);
      sub_15F7200(v286);
    }
    else
    {
      v82 = (__int64 *)(v306.m128_u64[0] + 8);
      if ( v311 && !v317 )
      {
        sub_168B9F0((__int64)v286, (__int64 *)(v306.m128_u64[0] + 8), *((_DWORD *)v318 + 6), 0xB8Du, 0);
        v143 = v307;
        v144 = sub_1605D30((__int64)v286, v307);
        v53 = 0;
        v283.m128i_i64[0] = sub_EEC8C0((unsigned __int64)v318, (__int64)v143, *(double *)v11.m128i_i64);
        sub_1587DB0(v144, v283.m128i_i64);
        sub_15F7200(v286);
        goto LABEL_124;
      }
      v83 = sub_EEB7E0((unsigned __int64)v318, v20, *(double *)v11.m128i_i64);
      sub_168B9F0((__int64)v286, v82, v83, 0xB8Eu, 0);
      v278 = *((unsigned __int8 **)v318 + 2);
      v84 = sub_15894B0((__int64)v286, (__int64 *)&v278);
      v85 = sub_1605D30(v84, &v19[1].m128_i64[1]);
      v86 = &v283;
      v283.m128i_i64[0] = sub_EEC8C0((unsigned __int64)v318, (__int64)&v19[1].m128_i64[1], *(double *)v11.m128i_i64);
      sub_1587DB0(v85, v283.m128i_i64);
      sub_15F7200(v286);
      if ( (_DWORD)v325 )
      {
        v88 = v318;
        v89 = (__int64 *)(v318 + 40);
        if ( (*v318 & 0x1FF) == 0x18 )
          v89 = (__int64 *)(v318 + 32);
        v90 = &v89[*((unsigned int *)v318 + 1)];
        if ( v89 != v90 )
        {
          do
          {
            while ( 1 )
            {
              v91 = *v89 & 0xFFFFFFFFFFFFFFF8LL;
              v92 = *(_BYTE *)(v91 + 28) & 0x7F;
              v93 = v92;
              if ( ((v92 + 52) & 0x7Fu) <= 1 || (unsigned int)v92 - 53 <= 1 )
              {
                v91 = sub_B72ED0(*v89 & 0xFFFFFFFFFFFFFFF8LL);
                v93 = *(_BYTE *)(v91 + 28) & 0x7F;
              }
              v94 = (unsigned int)(v93 - 34);
              if ( (unsigned int)v94 <= 5 )
              {
                v95 = *(__int64 **)(v91 + 120);
                v86 = (__m128i *)&v95[(unsigned int)sub_B76070(v91, (__int64)v86, v94, v87)];
                if ( v86 == (__m128i *)sub_1BC9FF0(v95, (__int64)v86, v96, v97, v98, v99) )
                  break;
              }
              if ( v90 == ++v89 )
                goto LABEL_122;
            }
            v100 = *v89++;
            v86 = (__m128i *)(v100 & 0xFFFFFFFFFFFFFFF8LL);
            sub_1BE6900(v306.m128_i64[0], v86->m128i_i8, v91, 0, v308, 1);
          }
          while ( v90 != v89 );
LABEL_122:
          v88 = v318;
        }
        v101 = sub_EEB7E0((unsigned __int64)v88, (__int64)v86, *(double *)v11.m128i_i64);
        v53 = 0;
        sub_1BE16D0(&v19[27].m128_i64[1], (__int64 *)v306.m128_u64[0], v101);
        goto LABEL_124;
      }
    }
    v53 = 0;
    sub_1BE6FF0(v306.m128_i64[0], (__int64)v318, v308, 1u);
    goto LABEL_124;
  }
LABEL_65:
  if ( (_DWORD)v51 == 1 )
  {
    v52 = v321;
    goto LABEL_67;
  }
  v53 = 0;
LABEL_124:
  if ( v270 )
    *v270 = *((_DWORD *)v318 + 1) > 1u;
  v102 = (unsigned __int16 *)((char *)v324 + 64 * (unsigned __int64)(unsigned int)v325);
  if ( v324 != v102 )
  {
    v103 = (char *)v324 + 16;
    v104 = (char *)(v102 + 8);
    do
    {
      v105 = v103;
      v103 += 64;
      sub_1BD2300(v105);
    }
    while ( v103 != v104 );
    v102 = (unsigned __int16 *)v324;
  }
  if ( v102 != &v19[28].m128_u16[4] )
    free(v102);
  if ( v321 != &v19[23].m128_u16[4] )
    free(v321);
  if ( v319[0] != &v19[6] )
    free(v319[0]);
  return v53;
}
