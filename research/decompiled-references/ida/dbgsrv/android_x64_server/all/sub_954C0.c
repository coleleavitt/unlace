/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_954C0
// Address: 0x00000000000954C0

//----- (00000000000954C0) ----------------------------------------------------
_QWORD *__fastcall sub_954C0(char **a1, __int64 a2, unsigned int *a3, double a4, double a5, double a6)
{
  __int64 v7; // r12
  _QWORD *v8; // r13
  char v9; // r15
  char *v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  char *v13; // rdi
  _BYTE *v14; // rax
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  char **v18; // r12
  size_t v19; // rbp
  unsigned __int64 v20; // rcx
  unsigned __int64 *v21; // rbx
  char *v22; // rax
  void *v23; // rsi
  char *v24; // rdi
  int v25; // eax
  char **v26; // r12
  size_t v27; // rbp
  unsigned __int64 v28; // rcx
  unsigned __int64 *v29; // rbx
  char *v30; // rax
  void *v31; // rsi
  char *v32; // rdi
  int v33; // r12d
  char *v34; // r13
  unsigned __int64 v35; // rsi
  __int64 v36; // rbx
  __int64 i1; // rbp
  unsigned int v38; // eax
  unsigned int v39; // ebx
  _BYTE *v40; // rax
  _BYTE *v41; // rax
  unsigned __int64 v42; // rbp
  unsigned __int8 v43; // r12
  signed int v44; // r15d
  unsigned int v45; // r14d
  unsigned __int64 v46; // rbp
  unsigned int v47; // ebx
  unsigned int v48; // r15d
  _BYTE *v49; // rax
  __int64 v50; // rbx
  unsigned int v51; // ebp
  _BYTE *v52; // rax
  unsigned int v53; // r14d
  _QWORD *v54; // rbp
  __int64 v55; // rax
  __int64 v56; // rbx
  void *v57; // rdi
  void *v58; // rdi
  unsigned int v59; // ebx
  unsigned int v60; // ebp
  __int128 v61; // xmm0
  signed int v62; // ebp
  _BYTE *v63; // rax
  const char *v64; // rax
  char v65; // al
  unsigned int v66; // eax
  unsigned int v67; // eax
  _BYTE *v68; // rax
  int v69; // eax
  int v70; // r13d
  void *v71; // r12
  unsigned int v72; // r15d
  unsigned int v73; // r12d
  int v74; // r14d
  __int64 v75; // rax
  __int64 v76; // rbp
  int v77; // eax
  unsigned __int64 v78; // r15
  void *v79; // rcx
  char *v80; // rax
  __int64 v81; // rbx
  int v82; // r14d
  __int64 v83; // rbp
  const char *v84; // r12
  _BYTE *v85; // rax
  bool v86; // zf
  _QWORD *v87; // r13
  __int64 v88; // rbx
  size_t v89; // rax
  size_t v90; // r15
  size_t v91; // rbp
  char *v92; // rdi
  unsigned int v93; // r14d
  unsigned __int64 v94; // rbx
  unsigned int v95; // eax
  unsigned int v96; // r12d
  void *v97; // r13
  void *v98; // rsi
  unsigned int v99; // eax
  unsigned int v100; // ebx
  _BYTE *v101; // rax
  char *v102; // rdi
  signed int v103; // ebx
  _BYTE *v104; // rax
  const char *v105; // rax
  unsigned int v106; // ebx
  _BYTE *v107; // rax
  unsigned int v108; // r14d
  __int64 v109; // rbx
  unsigned int v110; // ebp
  __int64 v111; // rcx
  _BYTE *v112; // rax
  _BYTE *v113; // rax
  signed int v114; // eax
  unsigned int v115; // ebx
  _BYTE *v116; // rax
  unsigned int v117; // r14d
  __int64 v118; // rbp
  unsigned int v119; // ebp
  signed int v120; // r15d
  _BYTE *v121; // rax
  _BYTE *v122; // rax
  __int64 v123; // rbp
  __int64 n; // rbx
  int v125; // eax
  __int128 v126; // kr10_16
  void *v127; // rdx
  char *v128; // rdi
  void *v129; // rax
  void *v130; // rdi
  unsigned int v131; // ebx
  _BYTE *v132; // rax
  char *v133; // rbp
  unsigned __int64 v134; // rbx
  const char *v135; // r14
  _BYTE *v136; // rcx
  signed int v137; // ebx
  _BYTE *v138; // rax
  const char *v139; // rax
  unsigned int v140; // eax
  signed int v141; // ebx
  _BYTE *v142; // rax
  char *v143; // rax
  unsigned __int64 v144; // rbx
  unsigned __int64 v145; // r14
  unsigned __int8 *v146; // r15
  unsigned __int64 v147; // rbx
  void *v148; // rsi
  __int64 v149; // r12
  char v150; // al
  char *v151; // rsi
  char *v152; // rax
  unsigned int v153; // eax
  _BYTE *v154; // rax
  unsigned __int64 v155; // rbx
  unsigned __int64 v156; // r15
  unsigned __int8 *v157; // r14
  unsigned __int64 v158; // rbx
  __int64 v159; // r12
  char v160; // al
  unsigned int v161; // r14d
  unsigned __int64 v162; // rbp
  unsigned int v163; // r15d
  _BYTE *v164; // rax
  const char *v165; // rax
  signed int v166; // eax
  signed int v167; // ebx
  FILE *v168; // rbp
  int v169; // eax
  const char *v170; // r15
  char *v171; // rax
  int v172; // r12d
  int v173; // r14d
  FILE *v174; // rax
  unsigned __int64 v175; // rbx
  int v176; // ebp
  signed int v177; // r14d
  _BYTE *v178; // rax
  _BYTE *v179; // rax
  __int64 v180; // rbp
  __int64 mm; // rbx
  char *v182; // rbx
  char *v183; // r14
  unsigned __int64 v184; // r15
  __int64 nn; // rbp
  void *v186; // rdi
  unsigned __int64 v187; // rbp
  unsigned int v188; // r15d
  unsigned int v189; // r14d
  unsigned int v190; // eax
  __int64 v191; // r12
  __int64 *v192; // rdx
  __int64 v193; // rdx
  __int64 v194; // rbp
  _BYTE *v195; // rax
  __int128 v196; // kr20_16
  char *v197; // rdi
  void *v198; // rax
  char *v199; // rbx
  char *v200; // rax
  void *v201; // r14
  _BYTE *v202; // rax
  char *v203; // rax
  char v204; // cl
  __int64 v205; // rbp
  __int64 v206; // rbp
  _BYTE *v207; // rax
  const char *v208; // r12
  _BYTE *v209; // rax
  _QWORD *v210; // r13
  __int64 v211; // rbx
  size_t v212; // rax
  size_t v213; // r15
  size_t v214; // rbp
  char *v215; // rdi
  unsigned int v216; // ebp
  _BYTE *v217; // rax
  _BYTE *v218; // rax
  char v219; // bp
  void **v220; // rcx
  __int64 v221; // rax
  int v222; // eax
  int v223; // r12d
  unsigned __int64 v224; // r15
  unsigned __int64 v225; // rsi
  char *v226; // rcx
  char *v227; // r14
  __int64 v228; // rbx
  __int64 v229; // rdi
  _BYTE *v230; // rbp
  size_t v231; // rbp
  __int64 v232; // rax
  __int64 v233; // r13
  unsigned __int64 v234; // rdx
  char *v235; // rax
  __int64 v236; // rbp
  const char *v237; // rcx
  const char *v238; // r8
  const char *v239; // r9
  unsigned int v240; // ebx
  const char *v241; // rax
  const char *v242; // rax
  const char *v243; // rax
  const char *v244; // rax
  _BYTE *v245; // rax
  _BYTE *v246; // rax
  char *v247; // r12
  _BYTE *v248; // rax
  unsigned int v249; // ebp
  __int64 v250; // r13
  unsigned int v251; // r14d
  _BYTE *v252; // rax
  unsigned int k; // ebx
  char *v254; // r12
  __int64 v255; // r15
  _BYTE *v256; // rax
  const char *v257; // rbp
  size_t v258; // rax
  __int64 v259; // rax
  __int64 *v260; // rbx
  char *v261; // rbx
  void *v262; // r14
  unsigned __int64 v263; // r15
  __int64 m; // rbp
  void *v265; // rdi
  _BYTE *v266; // rax
  unsigned int *v267; // rax
  _BYTE *v268; // rax
  unsigned int v269; // r15d
  char v270; // al
  _BYTE *v271; // rax
  const char *v272; // rax
  _BYTE *v273; // rax
  _BYTE *v274; // rax
  unsigned int *v275; // rax
  _BYTE *v276; // rax
  const char *v277; // rax
  const char *v278; // rax
  const char *v279; // rax
  void *v280; // rsi
  _BYTE *v281; // rax
  const char *v282; // rax
  const char *v283; // rbp
  size_t v284; // rdx
  char *v285; // rbx
  char *v286; // r14
  unsigned __int64 v287; // r15
  __int64 i; // rbp
  void *v289; // rdi
  const char *v290; // rbx
  size_t v291; // rdx
  const char *v292; // rbx
  size_t v293; // rdx
  const char *v294; // rbx
  size_t v295; // rdx
  const char *v296; // rbx
  size_t v297; // rdx
  const char *v298; // rbx
  size_t v299; // rdx
  size_t v300; // rax
  void *v301; // rbp
  unsigned __int64 v302; // r13
  __int64 v303; // rbx
  const char *v304; // rbp
  char *v306; // rbx
  unsigned __int64 v307; // rbp
  __int64 ii; // r13
  void *v309; // rdi
  _BYTE *v310; // rax
  _BYTE *v311; // rax
  unsigned int *v312; // rax
  _BYTE *v313; // rax
  const char *v314; // rbx
  size_t v315; // rdx
  char *v316; // rdi
  const char *v317; // rbx
  size_t v318; // rdx
  const char *v319; // rbx
  size_t v320; // rdx
  const char *v321; // rbx
  size_t v322; // rdx
  const char *v323; // rbx
  size_t v324; // rdx
  const char *v326; // rbx
  size_t v327; // rdx
  char *v328; // rbx
  void *v329; // r14
  unsigned __int64 v330; // r15
  __int64 jj; // rbp
  void *v332; // rdi
  char *v333; // rbx
  unsigned __int64 v334; // r14
  unsigned __int64 v335; // r15
  __int64 kk; // rbp
  void *v337; // rdi
  const char *v338; // rbx
  size_t v339; // rdx
  char *v340; // rbx
  char *v341; // r14
  __int64 i2; // rbp
  void *v343; // rdi
  void *v344; // rdi
  void *v345; // rdi
  char *v346; // rbx
  char *v347; // r14
  unsigned __int64 v348; // r15
  __int64 j; // rbp
  void *v350; // rdi
  char v351; // [rsp+7h] [rbp-30F1h]
  char v352; // [rsp+7h] [rbp-30F1h]
  char v353; // [rsp+7h] [rbp-30F1h]
  char v354; // [rsp+7h] [rbp-30F1h]
  char v355; // [rsp+7h] [rbp-30F1h]
  char v356; // [rsp+7h] [rbp-30F1h]
  char v357; // [rsp+7h] [rbp-30F1h]
  char v358; // [rsp+7h] [rbp-30F1h]
  char v359; // [rsp+7h] [rbp-30F1h]
  char v360; // [rsp+7h] [rbp-30F1h]
  char v361; // [rsp+7h] [rbp-30F1h]
  char v362; // [rsp+7h] [rbp-30F1h]
  char v363; // [rsp+7h] [rbp-30F1h]
  __int64 v365; // [rsp+8h] [rbp-30F0h]
  __int64 v369; // [rsp+10h] [rbp-30E8h]
  char *v373; // [rsp+18h] [rbp-30E0h]
  unsigned int v374; // [rsp+18h] [rbp-30E0h]
  unsigned int v375; // [rsp+18h] [rbp-30E0h]
  unsigned __int64 v376; // [rsp+18h] [rbp-30E0h]
  int v377; // [rsp+18h] [rbp-30E0h]
  void *v378; // [rsp+18h] [rbp-30E0h]
  void *v379; // [rsp+18h] [rbp-30E0h]
  __int64 v380; // [rsp+20h] [rbp-30D8h]
  unsigned __int64 v381; // [rsp+20h] [rbp-30D8h]
  __int64 v382; // [rsp+28h] [rbp-30D0h]
  char *v383; // [rsp+28h] [rbp-30D0h]
  __int64 v384; // [rsp+30h] [rbp-30C8h]
  unsigned __int64 v385; // [rsp+38h] [rbp-30C0h]
  unsigned int v386; // [rsp+38h] [rbp-30C0h]
  unsigned __int64 v387; // [rsp+40h] [rbp-30B8h]
  char *v388; // [rsp+40h] [rbp-30B8h]
  char *v389; // [rsp+48h] [rbp-30B0h]
  __int64 v390; // [rsp+50h] [rbp-30A8h]
  void *v391; // [rsp+58h] [rbp-30A0h]
  char *v392[2]; // [rsp+60h] [rbp-3098h] BYREF
  __int64 v393; // [rsp+70h] [rbp-3088h]
  void *src; // [rsp+80h] [rbp-3078h] BYREF
  unsigned __int64 v395; // [rsp+88h] [rbp-3070h]
  void *v396[2]; // [rsp+90h] [rbp-3068h] BYREF
  __int64 v397; // [rsp+A0h] [rbp-3058h]
  char s2[16]; // [rsp+B0h] [rbp-3048h] BYREF
  __int64 v399; // [rsp+C0h] [rbp-3038h]
  void *dest[4]; // [rsp+10B0h] [rbp-2048h] BYREF
  void *v401[2]; // [rsp+10D0h] [rbp-2028h]
  __int64 v402; // [rsp+10E0h] [rbp-2018h]
  char *s[2]; // [rsp+20B0h] [rbp-1048h] BYREF
  void *v404[7]; // [rsp+20C0h] [rbp-1038h] BYREF
  int v405; // [rsp+20F8h] [rbp-1000h]
  _BYTE v406[10]; // [rsp+30B6h] [rbp-42h] BYREF
  _QWORD v407[7]; // [rsp+30C0h] [rbp-38h] BYREF

  v7 = a2;
  v8 = a1;
  v407[0] = __readfsqword(0x28u);
  v9 = *(_BYTE *)(a2 + 289);
  *(_BYTE *)(a2 + 289) = 0;
  v10 = (char *)a3 + 5;
  v11 = *a3;
  src = (char *)a3 + 5;
  v12 = (unsigned __int64)a3 + v11 + 5;
  v395 = v12;
  sub_AB1F0((__int64)a1, 0);
  switch ( *((_BYTE *)a3 + 4) )
  {
    case 5:
      v13 = *a1;
      if ( !*v8 )
        goto LABEL_520;
      v8[1] = 0;
      qfree(v13);
      *v8 = 0;
      v8[2] = 0;
      if ( v9 )
        goto LABEL_521;
      return v8;
    case 0xA:
      v354 = v9;
      *(_QWORD *)(*(_QWORD *)(a2 + 440) + 672LL) = unpack_dq((unsigned __int64 *)&src, v12);
      v82 = unpack_dd((unsigned __int64 *)&src, v395);
      v83 = a2;
      if ( v82 )
        *(_BYTE *)(a2 + 184) = 1;
      v84 = (const char *)src;
      v85 = src;
      while ( (unsigned __int64)v85 < v395 )
      {
        v86 = *v85++ == 0;
        if ( v86 )
        {
          src = v85;
          v87 = *(_QWORD **)(a2 + 440);
          v88 = (__int64)(v87 + 85);
          if ( v84 )
          {
            v89 = strlen(v84);
            if ( v89 )
            {
              v90 = v89;
              v91 = v89 + 1;
              if ( v87[87] >= v89 + 1 )
              {
                v92 = *(char **)v88;
              }
              else
              {
                v92 = (char *)qvector_reserve((__int64)(v87 + 85), *(char **)v88, v89 + 1, 1u);
                *(_QWORD *)v88 = v92;
              }
              v87[86] = v91;
              memmove(v92, v84, v90);
              *(_BYTE *)(v87[85] + v90) = 0;
              v83 = a2;
              goto LABEL_242;
            }
          }
LABEL_241:
          *(_QWORD *)(v88 + 8) = 0;
LABEL_242:
          v208 = (const char *)src;
          v209 = src;
          while ( (unsigned __int64)v209 < v395 )
          {
            v86 = *v209++ == 0;
            if ( v86 )
            {
              src = v209;
              v210 = *(_QWORD **)(v83 + 440);
              v211 = (__int64)(v210 + 88);
              if ( v208 )
              {
                v212 = strlen(v208);
                if ( v212 )
                {
                  v213 = v212;
                  v214 = v212 + 1;
                  if ( v210[90] >= v212 + 1 )
                  {
                    v215 = *(char **)v211;
                  }
                  else
                  {
                    v215 = (char *)qvector_reserve((__int64)(v210 + 88), *(char **)v211, v212 + 1, 1u);
                    *(_QWORD *)v211 = v215;
                  }
                  v210[89] = v214;
                  memmove(v215, v208, v213);
                  *(_BYTE *)(v210[88] + v213) = 0;
LABEL_251:
                  *(_DWORD *)(*(_QWORD *)(a2 + 440) + 728LL) = unpack_dd((unsigned __int64 *)&src, v395);
                  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a2 + 440) + 96LL))(
                    *(_QWORD *)(a2 + 440),
                    v82 != 0);
                  *(_OWORD *)s = 0;
                  v404[0] = nullptr;
                  dest[0] = nullptr;
                  v7 = a2;
                  v8 = a1;
                  v9 = v354;
                  v216 = (*(__int64 (__fastcall **)(_QWORD, void **, char **))(**(_QWORD **)(a2 + 440) + 104LL))(
                           *(_QWORD *)(a2 + 440),
                           dest,
                           s);
                  if ( *(_BYTE *)(a2 + 184) )
                    sub_390A0(
                      (int)"init(debug_debugger=%d) => %d (add_debugger_flags=0x%llX)\n",
                      v82 != 0,
                      v216,
                      dest[0]);
                  v217 = pack_dd(v396, (unsigned __int64)v396 + 5, v216);
                  sub_56350((__int64)a1, v396, v217 - (_BYTE *)v396);
                  v218 = pack_dq(v406, (unsigned __int64)v407, (__int64)dest[0]);
                  sub_56350((__int64)a1, v406, v218 - v406);
                  if ( v216 == 1 )
                  {
                    if ( *(_BYTE *)(a2 + 184) )
                      sub_390A0((int)"init() => idaregs.nregs %zu\n", *(_QWORD *)(*(_QWORD *)(a2 + 440) + 552LL));
                    j_serialize_dynamic_register_set(a1, *(_QWORD *)(a2 + 440) + 544LL);
                  }
                  else
                  {
                    if ( s[1] )
                      v244 = s[0];
                    else
                      v244 = s1;
                    v298 = &byte_EB522;
                    if ( v244 )
                      v298 = v244;
                    v299 = strlen(v298) + 1;
                    sub_56350((__int64)a1, v298, v299);
                  }
                  v102 = s[0];
                  if ( !s[0] )
                    goto LABEL_520;
                  goto LABEL_518;
                }
              }
LABEL_250:
              *(_QWORD *)(v211 + 8) = 0;
              goto LABEL_251;
            }
          }
          v211 = *(_QWORD *)(v83 + 440) + 704LL;
          goto LABEL_250;
        }
      }
      v88 = *(_QWORD *)(a2 + 440) + 680LL;
      goto LABEL_241;
    case 0xB:
      goto LABEL_520;
    case 0xC:
      *(_OWORD *)s = 0;
      v404[0] = nullptr;
      memset(dest, 0, 24);
      v131 = (*(__int64 (__fastcall **)(_QWORD, char **, void **))(**(_QWORD **)(a2 + 440) + 72LL))(
               *(_QWORD *)(a2 + 440),
               s,
               dest);
      v132 = pack_dd(v396, (unsigned __int64)v396 + 5, v131);
      sub_56350((__int64)a1, v396, v132 - (_BYTE *)v396);
      if ( v131 == 1 )
      {
        sub_A56D0((__int64)a1, (__int64 *)s);
      }
      else
      {
        if ( dest[1] )
          v241 = (const char *)dest[0];
        else
          v241 = s1;
        v283 = &byte_EB522;
        if ( v241 )
          v283 = v241;
        v284 = strlen(v283) + 1;
        sub_56350((__int64)a1, v283, v284);
      }
      if ( *(_BYTE *)(a2 + 184) )
        sub_390A0((int)"get_processes() => %d\n", v131);
      if ( dest[0] )
      {
        dest[1] = nullptr;
        qfree(dest[0]);
        dest[0] = nullptr;
        dest[2] = nullptr;
      }
      v285 = s[0];
      if ( !s[0] )
        goto LABEL_520;
      v286 = s[1];
      if ( s[1] )
      {
        v363 = v9;
        v287 = 1;
        for ( i = 8; ; i += 32 )
        {
          v289 = *(void **)&v285[i];
          if ( v289 )
          {
            *(_QWORD *)&v285[i + 8] = 0;
            qfree(v289);
            *(_QWORD *)&v285[i] = 0;
            *(_QWORD *)&v285[i + 16] = 0;
          }
          if ( v287 >= (unsigned __int64)v286 )
            break;
          v285 = s[0];
          ++v287;
        }
        v285 = s[0];
        v9 = v363;
      }
      s[1] = nullptr;
      qfree(v285);
      goto LABEL_519;
    case 0xD:
      v388 = nullptr;
      v133 = v10;
      while ( (unsigned __int64)v133 < v12 )
      {
        v86 = *v133++ == 0;
        if ( v86 )
        {
          src = v133;
          v388 = v10;
          goto LABEL_217;
        }
      }
      v133 = v10;
LABEL_217:
      v199 = v133;
      while ( (unsigned __int64)v199 < v12 )
      {
        v86 = *v199++ == 0;
        if ( v86 )
        {
          src = v199;
          goto LABEL_222;
        }
      }
      v199 = v133;
      v133 = nullptr;
LABEL_222:
      v200 = v199;
      while ( (unsigned __int64)v200 < v12 )
      {
        v86 = *v200++ == 0;
        if ( v86 )
        {
          src = v200;
          goto LABEL_227;
        }
      }
      v199 = nullptr;
LABEL_227:
      v361 = v9;
      v386 = unpack_dd((unsigned __int64 *)&src, v12);
      v201 = src;
      v202 = src;
      while ( (unsigned __int64)v202 < v395 )
      {
        v86 = *v202++ == 0;
        if ( v86 )
        {
          src = v202;
          goto LABEL_232;
        }
      }
      v201 = nullptr;
LABEL_232:
      v390 = unpack_dd((unsigned __int64 *)&src, v395);
      memset(dest, 0, 24);
      *(_OWORD *)s = 0;
      v404[0] = nullptr;
      LOBYTE(v404[1]) = 1;
      v203 = (char *)src;
      if ( (unsigned __int64)src >= v395 )
      {
        v204 = 0;
      }
      else
      {
        v204 = *(_BYTE *)src;
        v203 = (char *)src + 1;
      }
      v391 = v201;
      src = v203;
      LOBYTE(v404[1]) = v204 != 0;
      v222 = unpack_dd((unsigned __int64 *)&src, v395);
      v383 = v199;
      v389 = v133;
      if ( v222 > 0 )
      {
        v223 = 0;
        v377 = v222;
        do
        {
          v224 = (unsigned __int64)src;
          v225 = v395;
          if ( (unsigned __int64)src >= v395 )
            break;
          v226 = s[1];
          if ( v404[0] >= s[1] + 1 )
          {
            v227 = s[0];
          }
          else
          {
            v227 = (char *)qvector_reserve((__int64)s, s[0], (unsigned __int64)(s[1] + 1), 0x18u);
            s[0] = v227;
            v226 = s[1];
            v224 = (unsigned __int64)src;
            v225 = v395;
            v8 = a1;
            v222 = v377;
          }
          v228 = 3LL * (_QWORD)v226;
          v229 = (__int64)&v227[24 * (_QWORD)v226];
          *(_OWORD *)v229 = 0;
          *(_QWORD *)(v229 + 16) = 0;
          ++s[1];
          v230 = (_BYTE *)v224;
          while ( (unsigned __int64)v230 < v225 )
          {
            v86 = *v230++ == 0;
            if ( v86 )
            {
              src = v230;
              if ( v224 )
              {
                v231 = (size_t)&v230[~v224];
                v232 = *(_QWORD *)&v227[24 * (_QWORD)v226 + 8];
                v233 = v232 - 1;
                if ( !v232 )
                  v233 = 0;
                v234 = v233 + v231 + 1;
                v235 = *(char **)v229;
                if ( *(_QWORD *)&v227[24 * (_QWORD)v226 + 16] < v234 )
                {
                  v235 = (char *)qvector_reserve(v229, v235, v234, 1u);
                  *(_QWORD *)&v227[8 * v228] = v235;
                  v229 = (__int64)&v227[8 * v228];
                  v234 = v233 + v231 + 1;
                }
                *(_QWORD *)&v227[8 * v228 + 8] = v234;
                v235[v231 + v233] = 0;
                memmove((void *)(*(_QWORD *)v229 + v233), (const void *)v224, v231);
                v8 = a1;
                v222 = v377;
              }
              break;
            }
          }
          ++v223;
        }
        while ( v223 < v222 );
      }
      LODWORD(v236) = -3;
      if ( v388 )
      {
        v7 = a2;
        v9 = v361;
        if ( v383 )
        {
          if ( v391 )
          {
            v236 = (*(unsigned int (__fastcall **)(_QWORD, char *, char *, char **, char *, _QWORD, void *, __int64, void **))(**(_QWORD **)(a2 + 440) + 128LL))(
                     *(_QWORD *)(a2 + 440),
                     v388,
                     v389,
                     s,
                     v383,
                     v386,
                     v391,
                     v390,
                     dest);
            if ( *(_BYTE *)(a2 + 184) )
            {
              v237 = " is_dll";
              if ( (v386 & 1) == 0 )
                v237 = &byte_EB522;
              v238 = " under_gui";
              if ( (v386 & 2) == 0 )
                v238 = &byte_EB522;
              v239 = " hide_window";
              if ( (v386 & 0x20) == 0 )
                v239 = &byte_EB522;
              sub_390A0(
                (int)"start_process(path=%s args=%s flags=%s%s%s\n"
                     "              sdir=%s\n"
                     "              input=%s crc32=%x) => %d\n",
                v388,
                v389,
                v237,
                v238,
                v239,
                v383,
                v391,
                v390,
                v236);
            }
          }
        }
      }
      else
      {
        v7 = a2;
        v9 = v361;
      }
      sub_95300(v7, (__int64)v8, v236, (__int64)dest);
      v346 = s[0];
      if ( s[0] )
      {
        v347 = s[1];
        if ( s[1] )
        {
          v348 = 1;
          for ( j = 0; ; j += 24 )
          {
            v350 = *(void **)&v346[j];
            if ( v350 )
            {
              *(_QWORD *)&v346[j + 8] = 0;
              qfree(v350);
              *(_QWORD *)&v346[j] = 0;
              *(_QWORD *)&v346[j + 16] = 0;
            }
            if ( v348 >= (unsigned __int64)v347 )
              break;
            v346 = s[0];
            ++v348;
          }
          v346 = s[0];
          v9 = v361;
        }
        s[1] = nullptr;
        qfree(v346);
        s[0] = nullptr;
        v404[0] = nullptr;
      }
      if ( !dest[0] )
        goto LABEL_520;
      dest[1] = nullptr;
      qfree(dest[0]);
LABEL_583:
      dest[0] = nullptr;
      dest[2] = nullptr;
      if ( !v9 )
        return v8;
      goto LABEL_521;
    case 0xE:
      *(_OWORD *)s = 0;
      v404[0] = nullptr;
      v103 = (*(__int64 (__fastcall **)(_QWORD, char **))(**(_QWORD **)(a2 + 440) + 160LL))(*(_QWORD *)(a2 + 440), s);
      if ( *(_BYTE *)(a2 + 184) )
        sub_390A0((int)"exit_process() => %d\n", (unsigned int)v103);
      v104 = pack_dd(v396, (unsigned __int64)v396 + 5, v103);
      sub_56350((__int64)a1, v396, v104 - (_BYTE *)v396);
      if ( v103 < 0 )
      {
        if ( s[1] )
          v105 = s[0];
        else
          v105 = s1;
        v314 = &byte_EB522;
        if ( v105 )
          v314 = v105;
        v315 = strlen(v314) + 1;
        sub_56350((__int64)a1, v314, v315);
      }
      v316 = s[0];
      if ( s[0] )
        goto LABEL_489;
      goto LABEL_520;
    case 0xF:
      *(_OWORD *)s = 0;
      v404[0] = nullptr;
      v114 = sub_95250(a2, (__int64)s, (unsigned __int64 *)&src);
      sub_95300(a2, (__int64)a1, v114, (__int64)s);
      v102 = s[0];
      if ( s[0] )
        goto LABEL_518;
      goto LABEL_520;
    case 0x10:
      v115 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 440) + 120LL))(*(_QWORD *)(a2 + 440));
      v116 = pack_dd(v396, (unsigned __int64)v396 + 5, v115);
      sub_56350((__int64)a1, v396, v116 - (_BYTE *)v396);
      if ( *(_BYTE *)(a2 + 184) )
        sub_390A0((int)"detach_process() => %d\n", v115);
      goto LABEL_520;
    case 0x11:
      v140 = unpack_dd((unsigned __int64 *)&src, v12);
      v141 = 0;
      if ( !*(_BYTE *)(a2 + 288) )
        v141 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a2 + 440) + 136LL))(
                 *(_QWORD *)(a2 + 440),
                 a2 + 296,
                 v140);
      v142 = pack_dd(v396, (unsigned __int64)v396 + 5, v141);
      sub_56350((__int64)a1, v396, v142 - (_BYTE *)v396);
      if ( v141 > 0 )
      {
        sub_A5EE0((__int64)a1, a2 + 296);
        if ( *(_BYTE *)(a2 + 184) )
        {
          v143 = sub_A0240(a2 + 296, (char *)s, 1024, a4, a5, a6);
          sub_390A0((int)"got event: %s\n", v143);
        }
        goto LABEL_520;
      }
      v270 = 1;
      if ( *(_BYTE *)(a2 + 288) )
        v270 = v9;
      if ( !v270 )
        return v8;
      goto LABEL_521;
    case 0x12:
      *(_OWORD *)s = 0;
      v404[0] = nullptr;
      v137 = (*(__int64 (__fastcall **)(_QWORD, char **))(**(_QWORD **)(a2 + 440) + 152LL))(*(_QWORD *)(a2 + 440), s);
      if ( *(_BYTE *)(a2 + 184) )
        sub_390A0((int)"prepare_to_pause_process() => %d\n", (unsigned int)v137);
      v138 = pack_dd(v396, (unsigned __int64)v396 + 5, v137);
      sub_56350((__int64)a1, v396, v138 - (_BYTE *)v396);
      if ( v137 < 0 )
      {
        if ( s[1] )
          v139 = s[0];
        else
          v139 = s1;
        v317 = &byte_EB522;
        if ( v139 )
          v317 = v139;
        v318 = strlen(v317) + 1;
        sub_56350((__int64)a1, v317, v318);
      }
      v316 = s[0];
      if ( !s[0] )
        goto LABEL_520;
LABEL_489:
      s[1] = nullptr;
      qfree(v316);
      goto LABEL_519;
    case 0x13:
      if ( v12 <= (unsigned __int64)v10 )
        v65 = 0;
      else
        v65 = *v10++;
      src = v10;
      if ( (unsigned __int64)v10 >= v12 )
        v219 = 0;
      else
        v219 = *v10++;
      src = v10;
      *(_OWORD *)s = 0;
      v404[0] = nullptr;
      memset(dest, 0, 24);
      v220 = dest;
      if ( !v219 )
        v220 = nullptr;
      v362 = v9;
      (*(void (__fastcall **)(_QWORD, char **, bool, void **))(**(_QWORD **)(a2 + 440) + 192LL))(
        *(_QWORD *)(a2 + 440),
        s,
        v65 != 0,
        v220);
      sub_9A3B0(a2, (__int64)s);
      v221 = sub_A0550(*(_QWORD *)(a2 + 440));
      if ( v221 )
      {
        v376 = sub_9A5F0(a2, *(_QWORD **)v221, *(const char ***)(v221 + 24), *(_DWORD *)(v221 + 8));
        sub_A0010(*(_QWORD **)(a2 + 440));
      }
      else
      {
        v376 = 0;
      }
      if ( v219 )
      {
        v251 = (unsigned int)dest[1];
        v252 = pack_dd(v396, (unsigned __int64)v396 + 5, (unsigned int)dest[1]);
        sub_56350((__int64)a1, v396, v252 - (_BYTE *)v396);
        if ( v251 )
        {
          for ( k = 0; k < v251; ++k )
          {
            v254 = (char *)dest[0];
            v255 = 32LL * (int)k;
            v256 = pack_dd(v396, (unsigned __int64)v396 + 5, *(_DWORD *)((char *)dest[0] + v255));
            sub_56350((__int64)a1, v396, v256 - (_BYTE *)v396);
            v257 = s1;
            if ( *(_QWORD *)&v254[v255 + 16] )
              v257 = *(const char **)&v254[v255 + 8];
            if ( !v257 )
              v257 = &byte_EB522;
            v258 = strlen(v257);
            sub_56350((__int64)a1, v257, v258 + 1);
          }
        }
      }
      v7 = a2;
      v9 = v362;
      if ( *(_BYTE *)(a2 + 184) )
      {
        if ( (unsigned int)v376 > 0x38 || (v259 = 0x20000000003C0LL, _bittest64(&v259, v376)) )
        {
          v260 = qword_155930;
          qsnprintf((char *)qword_155930, 16, "RPC_%d", v376);
        }
        else
        {
          v260 = (__int64 *)off_14E820[(int)v376];
        }
        sub_390A0((int)"stopped_at_debug_event => %s\n", v260);
      }
      v261 = (char *)dest[0];
      if ( dest[0] )
      {
        v262 = dest[1];
        if ( dest[1] )
        {
          v263 = 1;
          for ( m = 8; ; m += 32 )
          {
            v265 = *(void **)&v261[m];
            if ( v265 )
            {
              *(_QWORD *)&v261[m + 8] = 0;
              qfree(v265);
              *(_QWORD *)&v261[m] = 0;
              *(_QWORD *)&v261[m + 16] = 0;
            }
            if ( v263 >= (unsigned __int64)v262 )
              break;
            v261 = (char *)dest[0];
            ++v263;
          }
          v261 = (char *)dest[0];
          v9 = v362;
        }
        dest[1] = nullptr;
        qfree(v261);
        dest[0] = nullptr;
        dest[2] = nullptr;
      }
      if ( !s[0] )
        goto LABEL_520;
      sub_9E0F0((__int64 *)s, 0);
      qfree(s[0]);
      goto LABEL_519;
    case 0x14:
      sub_A5CE0(a2 + 296, (unsigned __int64 *)&src);
      v106 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 440) + 168LL))(
               *(_QWORD *)(a2 + 440),
               a2 + 296);
      if ( *(_BYTE *)(a2 + 184) )
        sub_390A0((int)"continue_after_event(...) => %d\n", v106);
      goto LABEL_117;
    case 0x15:
      v81 = (unsigned int)unpack_dd((unsigned __int64 *)&src, v12);
      v51 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 440) + 200LL))(*(_QWORD *)(a2 + 440), v81);
      if ( *(_BYTE *)(a2 + 184) )
        sub_390A0((int)"thread_suspend(tid=%d) => %d\n", (unsigned int)v81, v51);
      goto LABEL_57;
    case 0x16:
      v50 = (unsigned int)unpack_dd((unsigned __int64 *)&src, v12);
      v51 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 440) + 208LL))(*(_QWORD *)(a2 + 440), v50);
      if ( *(_BYTE *)(a2 + 184) )
        sub_390A0((int)"thread_continue(tid=%d) => %d\n", (unsigned int)v50, v51);
LABEL_57:
      v52 = pack_dd(v396, (unsigned __int64)v396 + 5, v51);
      sub_56350((__int64)a1, v396, v52 - (_BYTE *)v396);
      goto LABEL_520;
    case 0x17:
      v117 = unpack_dd((unsigned __int64 *)&src, v12);
      v118 = (unsigned int)unpack_dd((unsigned __int64 *)&src, v395);
      v106 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a2 + 440) + 216LL))(
               *(_QWORD *)(a2 + 440),
               v117,
               v118);
      if ( *(_BYTE *)(a2 + 184) )
        sub_390A0((int)"set_resume_mode(tid=%d, resmod=%d) => %d\n", v117, (unsigned int)v118, v106);
LABEL_117:
      v107 = pack_dd(v396, (unsigned __int64)v396 + 5, v106);
      sub_56350((__int64)a1, v396, v107 - (_BYTE *)v396);
      goto LABEL_520;
    case 0x18:
      v355 = v9;
      *(_OWORD *)s = 0;
      v404[0] = nullptr;
      memset(dest, 0, 24);
      v119 = (*(__int64 (__fastcall **)(_QWORD, char **, void **))(**(_QWORD **)(a2 + 440) + 256LL))(
               *(_QWORD *)(a2 + 440),
               s,
               dest);
      v120 = (signed int)s[1];
      if ( *(_BYTE *)(a2 + 184) )
        sub_390A0((int)"get_memory_info() => %d (qty=%d)\n", v119, LODWORD(s[1]));
      v121 = pack_dd(v396, (unsigned __int64)v396 + 5, v119 + 4);
      sub_56350((__int64)a1, v396, v121 - (_BYTE *)v396);
      if ( v119 == 1 )
      {
        v122 = pack_dd(v396, (unsigned __int64)v396 + 5, v120);
        sub_56350((__int64)a1, v396, v122 - (_BYTE *)v396);
        if ( v120 > 0 )
        {
          v123 = 0;
          for ( n = 0; n < v120; ++n )
          {
            sub_A5210((__int64)a1, (__int64)&s[0][v123]);
            v123 += 80;
          }
        }
      }
      else
      {
        if ( dest[1] )
          v242 = (const char *)dest[0];
        else
          v242 = s1;
        v290 = &byte_EB522;
        if ( v242 )
          v290 = v242;
        v291 = strlen(v290) + 1;
        sub_56350((__int64)a1, v290, v291);
      }
      v9 = v355;
      if ( dest[0] )
      {
        dest[1] = nullptr;
        qfree(dest[0]);
        dest[0] = nullptr;
        dest[2] = nullptr;
      }
      if ( !s[0] )
        goto LABEL_520;
      sub_385C0((__int64 *)s, 0);
      qfree(s[0]);
      goto LABEL_519;
    case 0x19:
      v357 = v9;
      v155 = unpack_dq((unsigned __int64 *)&src, v12);
      v156 = (unsigned int)unpack_dd((unsigned __int64 *)&src, v395);
      v157 = (unsigned __int8 *)operator new[](v156);
      v158 = v155 - 1;
      *(_OWORD *)s = 0;
      v404[0] = nullptr;
      v159 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int8 *, unsigned __int64, char **))(**(_QWORD **)(a2 + 440) + 288LL))(
               *(_QWORD *)(a2 + 440),
               v158,
               v157,
               v156,
               s);
      if ( *(_BYTE *)(a2 + 184) )
      {
        sub_390A0((int)"read_memory(ea=%a size=%zu) => %zd", v158, v156, v159);
        v160 = *(_BYTE *)(a2 + 184);
        if ( (_DWORD)v156 != 1 )
        {
LABEL_363:
          if ( v160 )
            sub_390A0((int)"\n");
          goto LABEL_365;
        }
      }
      else
      {
        v160 = 0;
        if ( (_DWORD)v156 != 1 )
          goto LABEL_363;
      }
      if ( v159 <= 0 )
        goto LABEL_363;
      if ( v160 )
        sub_390A0((int)" (0x%02X)\n", *v157);
LABEL_365:
      v273 = pack_dd(v396, (unsigned __int64)v396 + 5, v159);
      sub_56350((__int64)a1, v396, v273 - (_BYTE *)v396);
      if ( v159 <= 0 )
      {
        if ( s[1] )
          v277 = s[0];
        else
          v277 = s1;
        v323 = &byte_EB522;
        if ( v277 )
          v323 = v277;
        v324 = strlen(v323) + 1;
        sub_56350((__int64)a1, v323, v324);
      }
      else
      {
        sub_56350((__int64)a1, v157, v159);
      }
      operator delete[](v157);
      v102 = s[0];
      v7 = a2;
      v9 = v357;
      if ( s[0] )
        goto LABEL_518;
      goto LABEL_520;
    case 0x1A:
      v356 = v9;
      v144 = unpack_dq((unsigned __int64 *)&src, v12);
      v145 = (unsigned int)unpack_dd((unsigned __int64 *)&src, v395);
      v146 = (unsigned __int8 *)operator new[](v145);
      v147 = v144 - 1;
      v148 = src;
      if ( (char *)src + v145 >= src && (unsigned __int64)src + v145 <= v395 )
      {
        src = (char *)src + v145;
        memcpy(v146, v148, v145);
      }
      *(_OWORD *)s = 0;
      v404[0] = nullptr;
      v149 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int8 *, unsigned __int64, char **))(**(_QWORD **)(v7 + 440) + 296LL))(
               *(_QWORD *)(v7 + 440),
               v147,
               v146,
               v145,
               s);
      if ( *(_BYTE *)(a2 + 184) )
      {
        sub_390A0((int)"write_memory(ea=%a size=%zu) => %zd", v147, v145, v149);
        v150 = *(_BYTE *)(a2 + 184);
        if ( (_DWORD)v145 != 1 )
        {
LABEL_354:
          if ( v150 )
            sub_390A0((int)"\n");
          goto LABEL_356;
        }
      }
      else
      {
        v150 = 0;
        if ( (_DWORD)v145 != 1 )
          goto LABEL_354;
      }
      if ( !v149 )
        goto LABEL_354;
      if ( v150 )
        sub_390A0((int)" (0x%02X)\n", *v146);
LABEL_356:
      v271 = pack_dd(v396, (unsigned __int64)v396 + 5, v149);
      sub_56350((__int64)a1, v396, v271 - (_BYTE *)v396);
      if ( v149 <= 0 )
      {
        if ( s[1] )
          v272 = s[0];
        else
          v272 = s1;
        v321 = &byte_EB522;
        if ( v272 )
          v321 = v272;
        v322 = strlen(v321) + 1;
        sub_56350((__int64)a1, v321, v322);
      }
      operator delete[](v146);
      v102 = s[0];
      v7 = a2;
      v9 = v356;
      if ( s[0] )
      {
LABEL_518:
        s[1] = nullptr;
        qfree(v102);
LABEL_519:
        s[0] = nullptr;
        v404[0] = nullptr;
      }
LABEL_520:
      if ( v9 )
LABEL_521:
        *(_BYTE *)(v7 + 289) = 1;
      return v8;
    case 0x1B:
      if ( !(unsigned int)sub_93450(a2, a1, (unsigned __int64 *)&src) && *(_BYTE *)(a2 + 184) )
        sub_390A0((int)"rpc_update_bpts failed!\n");
      goto LABEL_520;
    case 0x1C:
      sub_93D50(a2, (__int64)a1, (unsigned __int64 *)&src);
      goto LABEL_520;
    case 0x1D:
      v358 = v9;
      v161 = unpack_dd((unsigned __int64 *)&src, v12);
      v162 = unpack_dq((unsigned __int64 *)&src, v395) - 1;
      *(_OWORD *)s = 0;
      v404[0] = nullptr;
      v163 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char **))(**(_QWORD **)(a2 + 440) + 360LL))(
               *(_QWORD *)(a2 + 440),
               v161,
               v162,
               s);
      v164 = pack_dd(v396, (unsigned __int64)v396 + 5, v163);
      sub_56350((__int64)a1, v396, v164 - (_BYTE *)v396);
      if ( v163 != 1 )
      {
        if ( s[1] )
          v165 = s[0];
        else
          v165 = s1;
        v292 = &byte_EB522;
        if ( v165 )
          v292 = v165;
        v293 = strlen(v292) + 1;
        sub_56350((__int64)a1, v292, v293);
      }
      if ( *(_BYTE *)(a2 + 184) )
        sub_390A0((int)"eval_lowcnd(tid=%d, ea=%a) => %d\n", v161, v162, v163);
      v102 = s[0];
      v9 = v358;
      if ( s[0] )
        goto LABEL_518;
      goto LABEL_520;
    case 0x1E:
      v352 = v9;
      v45 = unpack_dd((unsigned __int64 *)&src, v12);
      v46 = unpack_dq((unsigned __int64 *)&src, v395) - 1;
      v47 = unpack_dd((unsigned __int64 *)&src, v395) - 1;
      v48 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _QWORD))(**(_QWORD **)(a2 + 440) + 304LL))(
              *(_QWORD *)(a2 + 440),
              v45,
              v46,
              v47);
      if ( *(_BYTE *)(a2 + 184) )
        sub_390A0((int)"isok_bpt(type=%d ea=%a len=%d) => %d\n", v45, v46, v47, v48);
      v49 = pack_dd(v396, (unsigned __int64)v396 + 5, v48);
      sub_56350((__int64)a1, v396, v49 - (_BYTE *)v396);
      goto LABEL_482;
    case 0x1F:
      *(_OWORD *)s = 0;
      v404[0] = nullptr;
      memset(dest, 0, 24);
      *(_OWORD *)s2 = 0;
      v399 = 0;
      v353 = v9;
      v375 = unpack_dd((unsigned __int64 *)&src, v12);
      v73 = unpack_dd((unsigned __int64 *)&src, v395);
      v74 = unpack_dd((unsigned __int64 *)&src, v395);
      v75 = *(_QWORD *)(a2 + 440);
      v76 = *(_QWORD *)(v75 + 552);
      if ( !v76 )
        LODWORD(v76) = *(_DWORD *)(v75 + 648);
      if ( v74 <= 0 || v74 > (int)v76 )
      {
        v240 = 0;
        sub_3BBA0(
          (__int64)s,
          "read_regs(tid=%d, mask=%x, nregs=%d) => 0 (incorrect nregs, should be in range 0..%d)\n",
          v375,
          v73,
          v74,
          v76);
      }
      else
      {
        v77 = (int)(v74 + ((unsigned int)((v74 + 7) >> 31) >> 29) + 7) >> 3;
        v78 = v77;
        v79 = dest[1];
        if ( dest[1] >= (void *)v77 )
        {
          if ( dest[1] != (void *)v77 )
          {
            LOBYTE(v396[0]) = 0;
            sub_5E330((__int64)dest, v77, (char *)v396);
            v78 = (unsigned __int64)dest[1];
          }
        }
        else
        {
          v80 = (char *)dest[0];
          if ( dest[2] < (void *)v78 )
          {
            v80 = (char *)qvector_reserve((__int64)dest, (char *)dest[0], v78, 1u);
            dest[0] = v80;
            v79 = dest[1];
          }
          memset(&v80[(_QWORD)v79], 0, v78 - (_QWORD)v79);
          dest[1] = (void *)v78;
        }
        v280 = src;
        if ( (char *)src + v78 >= src && (unsigned __int64)src + v78 <= v395 )
        {
          src = (char *)src + v78;
          memcpy(dest[0], v280, v78);
        }
        sub_9A950((__int64)s2, (int)v76);
        v240 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char **))(**(_QWORD **)(a2 + 440) + 224LL))(
                 *(_QWORD *)(a2 + 440),
                 v375,
                 v73,
                 *(_QWORD *)s2,
                 s);
        if ( *(_BYTE *)(a2 + 184) )
          sub_390A0((int)"read_regs(tid=%d, mask=%x) => %d\n", v375, v73, v240);
      }
      v281 = pack_dd(v396, (unsigned __int64)v396 + 5, v240);
      sub_56350((__int64)a1, v396, v281 - (_BYTE *)v396);
      if ( v240 == 1 )
      {
        sub_A6D00((__int64)a1, *(__int64 *)s2, v74, (__int64)dest[0]);
      }
      else
      {
        if ( s[1] )
          v282 = s[0];
        else
          v282 = s1;
        v296 = &byte_EB522;
        if ( v282 )
          v296 = v282;
        v297 = strlen(v296) + 1;
        sub_56350((__int64)a1, v296, v297);
      }
      sub_9AA40((__int64)s2);
      v7 = a2;
      v9 = v353;
      if ( dest[0] )
      {
        dest[1] = nullptr;
        qfree(dest[0]);
        dest[0] = nullptr;
        dest[2] = nullptr;
      }
      v102 = s[0];
      if ( s[0] )
        goto LABEL_518;
      goto LABEL_520;
    case 0x20:
      v59 = unpack_dd((unsigned __int64 *)&src, v12);
      v60 = unpack_dd((unsigned __int64 *)&src, v395);
      LODWORD(s[0]) = -2;
      v61 = 0;
      *(_OWORD *)v404 = 0;
      s[1] = (char *)-1LL;
      if ( (unsigned __int64)src < v395 )
      {
        sub_9D100((__int64)s, (unsigned __int64 *)&src);
        v61 = 0;
      }
      *(_OWORD *)dest = v61;
      dest[2] = nullptr;
      v62 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char **, void **))(**(_QWORD **)(a2 + 440) + 232LL))(
              *(_QWORD *)(a2 + 440),
              v59,
              v60,
              s,
              dest);
      if ( *(_BYTE *)(a2 + 184) )
        sub_390A0((int)"write_reg(tid=%d) => %d\n", v59, (unsigned int)v62);
      v63 = pack_dd(v396, (unsigned __int64)v396 + 5, v62);
      sub_56350((__int64)a1, v396, v63 - (_BYTE *)v396);
      if ( v62 < 0 )
      {
        if ( dest[1] )
          v64 = (const char *)dest[0];
        else
          v64 = s1;
        v319 = &byte_EB522;
        if ( v64 )
          v319 = v64;
        v320 = strlen(v319) + 1;
        sub_56350((__int64)a1, v319, v320);
      }
      if ( dest[0] )
      {
        dest[1] = nullptr;
        qfree(dest[0]);
        dest[0] = nullptr;
        dest[2] = nullptr;
      }
      if ( SLODWORD(s[0]) < -1 )
        goto LABEL_520;
      if ( s[1] )
      {
        v404[0] = nullptr;
        qfree(s[1]);
        s[1] = nullptr;
        v404[1] = nullptr;
      }
      LODWORD(s[0]) = -2;
      if ( !v9 )
        return v8;
      goto LABEL_521;
    case 0x21:
      v108 = unpack_dd((unsigned __int64 *)&src, v12);
      v109 = (unsigned int)unpack_dd((unsigned __int64 *)&src, v395);
      *(_OWORD *)s = 0;
      v404[0] = nullptr;
      v110 = (*(__int64 (__fastcall **)(_QWORD, void **, _QWORD, __int64, char **))(**(_QWORD **)(a2 + 440) + 240LL))(
               *(_QWORD *)(a2 + 440),
               dest,
               v108,
               v109,
               s);
      if ( *(_BYTE *)(a2 + 184) )
      {
        v111 = -1;
        if ( v110 == 1 )
          v111 = (__int64)dest[0];
        sub_390A0((int)"get_thread_sreg_base(tid=%d, %d) => %a\n", v108, (unsigned int)v109, v111);
      }
      v112 = pack_dd(v396, (unsigned __int64)v396 + 5, v110);
      sub_56350((__int64)a1, v396, v112 - (_BYTE *)v396);
      if ( v110 == 1 )
      {
        v113 = pack_dq(v406, (unsigned __int64)v407, (__int64)dest[0] + 1);
        sub_56350((__int64)a1, v406, v113 - v406);
      }
      else
      {
        if ( s[1] )
          v243 = s[0];
        else
          v243 = s1;
        v294 = &byte_EB522;
        if ( v243 )
          v294 = v243;
        v295 = strlen(v294) + 1;
        sub_56350((__int64)a1, v294, v295);
      }
      v102 = s[0];
      if ( s[0] )
        goto LABEL_518;
      goto LABEL_520;
    case 0x22:
      v53 = unpack_dd((unsigned __int64 *)&src, v12);
      v54 = sub_A60B0(v53, (unsigned __int64 *)&src);
      (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**(_QWORD **)(a2 + 440) + 184LL))(
        *(_QWORD *)(a2 + 440),
        v54,
        v53);
      if ( v54 )
      {
        v55 = *(v54 - 1);
        if ( v55 )
        {
          v56 = 7 * v55;
          do
          {
            v57 = (void *)v54[v56 - 3];
            if ( v57 )
            {
              v54[v56 - 2] = 0;
              qfree(v57);
              v54[v56 - 3] = 0;
              v54[v56 - 1] = 0;
            }
            v58 = (void *)v54[v56 - 6];
            if ( v58 )
            {
              v54[v56 - 5] = 0;
              qfree(v58);
              v54[v56 - 6] = 0;
              v54[v56 - 4] = 0;
            }
            v56 -= 7;
          }
          while ( v56 * 8 );
        }
        operator delete[](v54 - 1);
      }
      if ( *(_BYTE *)(a2 + 184) )
        sub_390A0((int)"set_exception_info(qty=%d)\n", v53);
      goto LABEL_520;
    case 0x23:
      v352 = v9;
      v170 = nullptr;
      v171 = v10;
      v369 = a2;
      while ( (unsigned __int64)v171 < v12 )
      {
        v86 = *v171++ == 0;
        if ( v86 )
        {
          src = v171;
          v170 = v10;
          break;
        }
      }
      v365 = (__int64)a1;
      v172 = unpack_dd((unsigned __int64 *)&src, v12);
      v173 = sub_A8010((_QWORD *)a2);
      if ( v173 == -1 )
      {
        v249 = -1;
        v250 = 0;
      }
      else
      {
        if ( v172 )
        {
          v174 = fopenRB(v170);
        }
        else
        {
          if ( (unsigned __int8)qdirname((char *)s, 0x1000u, v170) )
          {
            if ( !qisdir((const char *)s) )
            {
              qmake_full_path((unsigned __int64)dest, 4096, (const char *)s);
              qgetcwd(s2, 0x1000u);
              v300 = __strlen_chk(s2, 4096);
              if ( !strncmp((const char *)dest, s2, v300) )
              {
                *(_OWORD *)v396 = 0;
                v397 = 0;
                do
                {
                  if ( qisdir((const char *)dest) )
                    break;
                  v301 = v396[0];
                  sub_37F60((__int64)v392, (const char *)dest);
                  sub_9AB10((__int64)v396, (__int64)v301, (__int128 *)v392);
                  if ( v392[0] )
                  {
                    v392[1] = nullptr;
                    qfree(v392[0]);
                    v392[0] = nullptr;
                    v393 = 0;
                  }
                }
                while ( (unsigned __int8)qdirname((char *)dest, 0x1000u, (const char *)dest) );
                v378 = v396[1];
                if ( v396[1] )
                {
                  v302 = 1;
                  v303 = 8;
                  do
                  {
                    v304 = s1;
                    if ( *(_QWORD *)((char *)v396[0] + v303) )
                      v304 = *(const char **)((char *)v396[0] + v303 - 8);
                    if ( *(_BYTE *)(a2 + 184) )
                      sub_390A0((int)"open_file() creating directory %s\n", v304);
                    if ( (unsigned int)qmkdir(v304, 0x1FFu) )
                      break;
                    v303 += 24;
                  }
                  while ( v302++ < (unsigned __int64)v378 );
                }
                v306 = (char *)v396[0];
                if ( v396[0] )
                {
                  v379 = v396[1];
                  if ( v396[1] )
                  {
                    v307 = 1;
                    for ( ii = 0; ; ii += 24 )
                    {
                      v309 = *(void **)&v306[ii];
                      if ( v309 )
                      {
                        *(_QWORD *)&v306[ii + 8] = 0;
                        qfree(v309);
                        *(_QWORD *)&v306[ii] = 0;
                        *(_QWORD *)&v306[ii + 16] = 0;
                      }
                      if ( v307 >= (unsigned __int64)v379 )
                        break;
                      v306 = (char *)v396[0];
                      ++v307;
                    }
                    v306 = (char *)v396[0];
                  }
                  v396[1] = nullptr;
                  qfree(v306);
                  v396[0] = nullptr;
                  v397 = 0;
                }
              }
            }
          }
          v174 = fopenWB(v170);
        }
        *(_QWORD *)(a2 + 8LL * v173 + 8) = v174;
        v249 = v174 == nullptr ? -1 : v173;
        v250 = 0;
        if ( v174 && v172 )
        {
          v250 = qfsize(v174);
          v249 = v173;
        }
      }
      if ( *(_BYTE *)(a2 + 184) )
        sub_390A0((int)"open_file('%s', %d) => %d %lld\n", v170, v172 != 0, v249, v250);
      v310 = pack_dd(v396, (unsigned __int64)v396 + 5, v249);
      sub_56350(v365, v396, v310 - (_BYTE *)v396);
      if ( v249 == -1 )
      {
        v312 = (unsigned int *)__errno(v365);
        v313 = pack_dd(v396, (unsigned __int64)v396 + 5, *v312);
        sub_56350(v365, v396, v313 - (_BYTE *)v396);
      }
      else
      {
        v311 = pack_dq(v406, (unsigned __int64)v407, v250);
        sub_56350(v365, v406, v311 - v406);
      }
LABEL_481:
      v8 = (_QWORD *)v365;
      v7 = v369;
LABEL_482:
      if ( !v352 )
        return v8;
      goto LABEL_521;
    case 0x24:
      v166 = unpack_dd((unsigned __int64 *)&src, v12);
      v167 = v166;
      if ( (unsigned int)v166 <= 0xF )
      {
        v168 = *(FILE **)(a2 + 8LL * v166 + 8);
        if ( v168 )
        {
          v169 = fileno(*(FILE **)(a2 + 8LL * v166 + 8));
          fchmod(v169, 0x1EDu);
          qfclose(v168);
          *(_QWORD *)(a2 + 8LL * v167 + 8) = 0;
        }
      }
      if ( *(_BYTE *)(a2 + 184) )
        sub_390A0((int)"close_file(%d)\n", (unsigned int)v167);
      goto LABEL_520;
    case 0x25:
      v365 = (__int64)a1;
      v369 = a2;
      v352 = v9;
      v374 = unpack_dd((unsigned __int64 *)&src, v12);
      v381 = unpack_dq((unsigned __int64 *)&src, v395);
      v69 = unpack_dd((unsigned __int64 *)&src, v395);
      v70 = v69;
      if ( v69 <= 0 )
      {
        v72 = 0;
        v71 = nullptr;
      }
      else
      {
        v71 = (void *)operator new[](v69);
        qfseek(*(FILE **)(a2 + 8LL * (int)v374 + 8), v381, 0);
        v72 = qfread(*(FILE **)(a2 + 8LL * (int)v374 + 8), v71, v70);
      }
      v266 = pack_dd(v396, (unsigned __int64)v396 + 5, v72);
      sub_56350((__int64)a1, v396, v266 - (_BYTE *)v396);
      if ( v70 == v72 )
      {
        sub_56350((__int64)a1, v71, v70);
      }
      else
      {
        v267 = (unsigned int *)__errno(a1);
        v268 = pack_dd(v396, (unsigned __int64)v396 + 5, *v267);
        sub_56350((__int64)a1, v396, v268 - (_BYTE *)v396);
      }
      if ( v71 )
        operator delete[](v71);
      v7 = a2;
      if ( *(_BYTE *)(a2 + 184) )
      {
        sub_390A0((int)"read_file(%d, 0x%llX, %d) => %d\n", v374, v381, (unsigned int)v70, v72);
        goto LABEL_481;
      }
      v8 = a1;
      goto LABEL_482;
    case 0x26:
      v369 = a2;
      v365 = (__int64)a1;
      v352 = v9;
      v93 = unpack_dd((unsigned __int64 *)&src, v12);
      v94 = unpack_dq((unsigned __int64 *)&src, v395);
      v95 = unpack_dd((unsigned __int64 *)&src, v395);
      v96 = v95;
      if ( v95 )
      {
        v97 = (void *)operator new[](v95);
        v98 = src;
        if ( (char *)src + v96 >= src && (unsigned __int64)src + v96 <= v395 )
        {
          src = (char *)src + v96;
          memcpy(v97, v98, v96);
        }
      }
      else
      {
        v97 = nullptr;
      }
      qfseek(*(FILE **)(v369 + 8LL * (int)v93 + 8), v94, 0);
      if ( v97 )
        v269 = qfwrite(*(FILE **)(v369 + 8LL * (int)v93 + 8), v97, v96);
      else
        v269 = 0;
      v274 = pack_dd(v396, (unsigned __int64)v396 + 5, v96);
      sub_56350((__int64)a1, v396, v274 - (_BYTE *)v396);
      if ( v96 != v269 )
      {
        v275 = (unsigned int *)__errno(a1);
        v276 = pack_dd(v396, (unsigned __int64)v396 + 5, *v275);
        sub_56350((__int64)a1, v396, v276 - (_BYTE *)v396);
      }
      if ( v97 )
        operator delete[](v97);
      if ( *(_BYTE *)(v369 + 184) )
        sub_390A0((int)"write_file(%d, 0x%llX, %u) => %u\n", v93, v94, v96, v269);
      goto LABEL_481;
    case 0x27:
      v125 = sub_AAFC0(a2 + 192, (__int64)a1, v10, v12);
      if ( !v125 )
        goto LABEL_520;
      sub_AB1F0((__int64)dest, v125);
      v126 = *(_OWORD *)dest;
      *(_OWORD *)s = *(_OWORD *)dest;
      memset(dest, 0, 24);
      v127 = dest[2];
      v404[0] = dest[2];
      v128 = *a1;
      if ( *v8 )
      {
        v8[1] = 0;
        qfree(v128);
        v129 = v404[0];
        v130 = dest[0];
        *(_OWORD *)v8 = *(_OWORD *)s;
        v8[2] = v129;
        if ( !v130 )
          goto LABEL_520;
LABEL_141:
        dest[1] = nullptr;
        qfree(v130);
        goto LABEL_583;
      }
LABEL_214:
      *(_OWORD *)v8 = v126;
      v8[2] = v127;
      if ( v9 )
        goto LABEL_521;
      return v8;
    case 0x28:
      *(_OWORD *)s = 0;
      v404[0] = nullptr;
      v99 = unpack_dd((unsigned __int64 *)&src, v12);
      v100 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char **))(**(_QWORD **)(a2 + 440) + 416LL))(
               *(_QWORD *)(a2 + 440),
               v99,
               s);
      v101 = pack_dd(v396, (unsigned __int64)v396 + 5, v100);
      sub_56350((__int64)a1, v396, v101 - (_BYTE *)v396);
      if ( v100 == 1 )
        sub_A6560((__int64)a1, (__int64 *)s);
      v102 = s[0];
      if ( s[0] )
        goto LABEL_518;
      goto LABEL_520;
    case 0x29:
      v360 = v9;
      v187 = unpack_dq((unsigned __int64 *)&src, v12);
      v188 = unpack_dd((unsigned __int64 *)&src, v395);
      v189 = unpack_dd((unsigned __int64 *)&src, v395);
      v190 = unpack_dd((unsigned __int64 *)&src, v395);
      v191 = v190;
      *(_OWORD *)s2 = 0;
      v399 = 0;
      *(_OWORD *)v396 = 0;
      v397 = 0;
      *(_OWORD *)v401 = 0;
      memset(dest, 0, sizeof(dest));
      v402 = 0;
      v192 = nullptr;
      if ( (v190 & 1) == 0 )
        v192 = (__int64 *)v396;
      sub_A68E0((__int64 *)s2, (__int64)dest, v192, (unsigned __int64 *)&src);
      *(_OWORD *)v392 = 0;
      v393 = 0;
      s[0] = (char *)0xFFFFFFFFLL;
      s[1] = (char *)-1LL;
      LOBYTE(v404[0]) = 0;
      memset((char *)v404 + 4, 0, 52);
      v193 = v188;
      v9 = v360;
      v194 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, _QWORD, char *, void **, void **, char **, char **, __int64))(**(_QWORD **)(a2 + 440) + 424LL))(
               *(_QWORD *)(a2 + 440),
               v187 - 1,
               v193,
               v189,
               s2,
               dest,
               v396,
               v392,
               s,
               v191);
      v195 = pack_dq(v406, (unsigned __int64)v407, v194 + 1);
      sub_56350((__int64)a1, v406, v195 - v406);
      if ( v194 == -1 )
      {
        if ( (v191 & 2) != 0 )
          sub_A5EE0((__int64)a1, (__int64)s);
        if ( v392[1] )
          v278 = v392[0];
        else
          v278 = s1;
        v326 = &byte_EB522;
        if ( v278 )
          v326 = v278;
        v327 = strlen(v326) + 1;
        sub_56350((__int64)a1, v326, v327);
      }
      else if ( (v191 & 1) == 0 )
      {
        sub_A6A90((__int64)a1, (__int64)v396, 1);
      }
      free_debug_event((__int64)s);
      v7 = a2;
      if ( v392[0] )
      {
        v392[1] = nullptr;
        qfree(v392[0]);
        v392[0] = nullptr;
        v393 = 0;
      }
      if ( v401[0] )
      {
        v401[1] = nullptr;
        qfree(v401[0]);
        v401[0] = nullptr;
        v402 = 0;
      }
      if ( dest[0] )
      {
        dest[1] = nullptr;
        qfree(dest[0]);
        dest[0] = nullptr;
        dest[2] = nullptr;
      }
      v328 = (char *)v396[0];
      if ( v396[0] )
      {
        v329 = v396[1];
        if ( v396[1] )
        {
          v330 = 1;
          for ( jj = 8; ; jj += 32 )
          {
            v332 = *(void **)&v328[jj];
            if ( v332 )
            {
              *(_QWORD *)&v328[jj + 8] = 0;
              qfree(v332);
              *(_QWORD *)&v328[jj] = 0;
              *(_QWORD *)&v328[jj + 16] = 0;
            }
            if ( v330 >= (unsigned __int64)v329 )
              break;
            v328 = (char *)v396[0];
            ++v330;
          }
          v328 = (char *)v396[0];
          v9 = v360;
        }
        v396[1] = nullptr;
        qfree(v328);
        v396[0] = nullptr;
        v397 = 0;
      }
      v333 = *(char **)s2;
      if ( !*(_QWORD *)s2 )
        goto LABEL_520;
      v334 = *(_QWORD *)&s2[8];
      if ( *(_QWORD *)&s2[8] )
      {
        v335 = 1;
        for ( kk = 8; ; kk += 32 )
        {
          v337 = *(void **)&v333[kk];
          if ( v337 )
          {
            *(_QWORD *)&v333[kk + 8] = 0;
            qfree(v337);
            *(_QWORD *)&v333[kk] = 0;
            *(_QWORD *)&v333[kk + 16] = 0;
          }
          if ( v335 >= v334 )
            break;
          v333 = *(char **)s2;
          ++v335;
        }
        v333 = *(char **)s2;
        v9 = v360;
      }
      *(_QWORD *)&s2[8] = 0;
      qfree(v333);
      *(_QWORD *)s2 = 0;
      v399 = 0;
      if ( !v9 )
        return v8;
      goto LABEL_521;
    case 0x2A:
      v66 = unpack_dd((unsigned __int64 *)&src, v12);
      v67 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 440) + 432LL))(*(_QWORD *)(a2 + 440), v66);
      v68 = pack_dd(v396, (unsigned __int64)v396 + 5, v67);
      sub_56350((__int64)a1, v396, v68 - (_BYTE *)v396);
      goto LABEL_520;
    case 0x2B:
      v151 = nullptr;
      v152 = v10;
      while ( (unsigned __int64)v152 < v12 )
      {
        v86 = *v152++ == 0;
        if ( v86 )
        {
          src = v152;
          v151 = v10;
          break;
        }
      }
      v153 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(v7 + 440) + 536LL))(*(_QWORD *)(v7 + 440), v151);
      v154 = pack_dd(v396, (unsigned __int64)v396 + 5, v153);
      sub_56350((__int64)a1, v396, v154 - (_BYTE *)v396);
      goto LABEL_520;
    case 0x2C:
      v359 = v9;
      v175 = unpack_dq((unsigned __int64 *)&src, v12) - 1;
      *(_OWORD *)s = 0;
      v404[0] = nullptr;
      v176 = (*(__int64 (__fastcall **)(_QWORD, char **, unsigned __int64))(**(_QWORD **)(a2 + 440) + 264LL))(
               *(_QWORD *)(a2 + 440),
               s,
               v175);
      v177 = (signed int)s[1];
      if ( *(_BYTE *)(a2 + 184) )
        sub_390A0((int)"get_scattered_image(base=%a) => %d (qty=%d)\n", v175, (unsigned int)v176, LODWORD(s[1]));
      v178 = pack_dd(v396, (unsigned __int64)v396 + 5, v176 + 2);
      sub_56350((__int64)a1, v396, v178 - (_BYTE *)v396);
      if ( v176 > 0 )
      {
        v179 = pack_dd(v396, (unsigned __int64)v396 + 5, v177);
        sub_56350((__int64)a1, v396, v179 - (_BYTE *)v396);
        if ( v177 > 0 )
        {
          v180 = 0;
          for ( mm = 0; mm < v177; ++mm )
          {
            sub_A5520((__int64)a1, &s[0][v180]);
            v180 += 40;
          }
        }
      }
      v182 = s[0];
      if ( !s[0] )
        goto LABEL_520;
      v183 = s[1];
      if ( s[1] )
      {
        v184 = 1;
        for ( nn = 16; ; nn += 40 )
        {
          v186 = *(void **)&v182[nn];
          if ( v186 )
          {
            *(_QWORD *)&v182[nn + 8] = 0;
            qfree(v186);
            *(_QWORD *)&v182[nn] = 0;
            *(_QWORD *)&v182[nn + 16] = 0;
          }
          if ( v184 >= (unsigned __int64)v183 )
            break;
          v182 = s[0];
          ++v184;
        }
        v182 = s[0];
        v9 = v359;
      }
      s[1] = nullptr;
      qfree(v182);
      goto LABEL_519;
    case 0x2D:
      v351 = v9;
      v42 = unpack_dq((unsigned __int64 *)&src, v12) - 1;
      *(_OWORD *)s = 0;
      v404[0] = nullptr;
      v43 = (*(__int64 (__fastcall **)(_QWORD, char **, unsigned __int64))(**(_QWORD **)(a2 + 440) + 272LL))(
              *(_QWORD *)(a2 + 440),
              s,
              v42);
      v44 = (signed int)s[1];
      if ( *(_BYTE *)(a2 + 184) )
        sub_390A0((int)"get_image_uuid(base=%a) => %d (size=%d)\n", v42, v43, LODWORD(s[1]));
      v246 = pack_dd(v396, (unsigned __int64)v396 + 5, v43);
      sub_56350((__int64)a1, v396, v246 - (_BYTE *)v396);
      if ( v43 )
      {
        if ( (unsigned __int64)v44 >> 32 )
        {
          if ( !(_BYTE)under_debugger )
            interr(5);
          BUG();
        }
        v247 = s[0];
        v248 = pack_dd(v396, (unsigned __int64)v396 + 5, v44);
        sub_56350((__int64)a1, v396, v248 - (_BYTE *)v396);
        sub_56350((__int64)a1, v247, v44);
      }
      v102 = s[0];
      v7 = a2;
      v9 = v351;
      if ( s[0] )
        goto LABEL_518;
      goto LABEL_520;
    case 0x2E:
      v134 = unpack_dq((unsigned __int64 *)&src, v12) - 1;
      v135 = (const char *)src;
      v136 = src;
      while ( (unsigned __int64)v136 < v395 )
      {
        v86 = *v136++ == 0;
        if ( v86 )
        {
          src = v136;
          goto LABEL_235;
        }
      }
      v135 = nullptr;
LABEL_235:
      v205 = *(_QWORD *)(a2 + 440);
      sub_37F60((__int64)s, v135);
      v206 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char **))(*(_QWORD *)v205 + 280LL))(v205, v134, s);
      if ( s[0] )
      {
        s[1] = nullptr;
        qfree(s[0]);
        s[0] = nullptr;
        v404[0] = nullptr;
      }
      if ( *(_BYTE *)(a2 + 184) )
        sub_390A0((int)"get_segm_start(base=%a, segname=%s) => %a\n", v134, v135, v206);
      v207 = pack_dq(v406, (unsigned __int64)v407, v206 + 1);
      sub_56350((__int64)a1, v406, v207 - v406);
      goto LABEL_520;
    case 0x2F:
      v387 = unpack_dq((unsigned __int64 *)&src, v12);
      v385 = unpack_dq((unsigned __int64 *)&src, v395);
      v15 = unpack_dd((unsigned __int64 *)&src, v395);
      v16 = v15;
      memset(dest, 0, 24);
      if ( v15 )
      {
        memset(v404, 0, sizeof(v404));
        *(_OWORD *)s = 0;
        v405 = -1;
        v382 = v15;
        sub_9E600((__int64)dest, v15, (unsigned __int64)s);
        if ( v404[4] )
        {
          v404[5] = nullptr;
          qfree(v404[4]);
          v404[4] = nullptr;
          v404[6] = nullptr;
        }
        if ( v404[1] )
        {
          v404[2] = nullptr;
          qfree(v404[1]);
          v404[1] = nullptr;
          v404[3] = nullptr;
        }
        if ( s[0] )
        {
          s[1] = nullptr;
          qfree(s[0]);
          s[0] = nullptr;
          v404[0] = nullptr;
        }
        if ( v16 > 0 )
        {
          v384 = 0;
          do
          {
            v373 = (char *)dest[0];
            v17 = unpack_dd((unsigned __int64 *)&src, v395);
            v380 = 80 * v384;
            if ( v17 )
            {
              v18 = (char **)&v373[v380];
              v19 = v17;
              v20 = *(_QWORD *)&v373[v380 + 8];
              if ( v20 >= v17 )
              {
                if ( v20 != v17 )
                {
                  s2[0] = 0;
                  sub_5E330((__int64)&v373[v380], v17, s2);
                }
              }
              else
              {
                v21 = (unsigned __int64 *)&v373[v380 + 8];
                if ( *(_QWORD *)&v373[v380 + 16] >= (unsigned __int64)v17 )
                {
                  v22 = *v18;
                }
                else
                {
                  v22 = (char *)qvector_reserve((__int64)&v373[v380], *v18, v17, 1u);
                  *v18 = v22;
                  v20 = *v21;
                }
                memset(&v22[v20], 0, v19 - v20);
                *v21 = v19;
              }
              v23 = src;
              if ( (char *)src + v19 >= src && (unsigned __int64)src + v19 <= v395 )
              {
                v24 = *v18;
                src = (char *)src + v19;
                memcpy(v24, v23, v19);
              }
            }
            v25 = unpack_dd((unsigned __int64 *)&src, v395);
            if ( v25 )
            {
              v26 = (char **)&v373[v380 + 24];
              v27 = v25;
              v28 = *(_QWORD *)&v373[v380 + 32];
              if ( v28 >= v25 )
              {
                if ( v28 != v25 )
                {
                  s2[0] = 0;
                  sub_5E330((__int64)&v373[v380 + 24], v25, s2);
                }
              }
              else
              {
                v29 = (unsigned __int64 *)&v373[v380 + 32];
                if ( *(_QWORD *)&v373[v380 + 40] >= (unsigned __int64)v25 )
                {
                  v30 = *v26;
                }
                else
                {
                  v30 = (char *)qvector_reserve((__int64)&v373[v380 + 24], *v26, v25, 1u);
                  *v26 = v30;
                  v28 = *v29;
                }
                memset(&v30[v28], 0, v27 - v28);
                *v29 = v27;
              }
              v31 = src;
              if ( (char *)src + v27 >= src && (unsigned __int64)src + v27 <= v395 )
              {
                v32 = *v26;
                src = (char *)src + v27;
                memcpy(v32, v31, v27);
              }
            }
            v33 = unpack_dd((unsigned __int64 *)&src, v395);
            v34 = &v373[v380 + 48];
            if ( *(_QWORD *)&v373[v380 + 56] != v33 )
            {
              *(_OWORD *)s2 = 0;
              sub_9EAC0((__int64)&v373[v380 + 48], v33, s2);
            }
            v35 = v395;
            if ( v33 > 0 )
            {
              v36 = 0;
              for ( i1 = 0; i1 < v33; ++i1 )
              {
                *(_QWORD *)(*(_QWORD *)v34 + v36) = unpack_dq((unsigned __int64 *)&src, v35) - 1;
                *(_QWORD *)(*(_QWORD *)v34 + v36 + 8) = unpack_dq((unsigned __int64 *)&src, v395) - 1;
                v35 = v395;
                v36 += 16;
              }
            }
            *(_DWORD *)&v373[v380 + 72] = unpack_dd((unsigned __int64 *)&src, v35);
            ++v384;
          }
          while ( v384 < v382 );
        }
      }
      v38 = unpack_dd((unsigned __int64 *)&src, v395);
      *(_OWORD *)s = 0;
      v404[0] = nullptr;
      v7 = a2;
      v8 = a1;
      v39 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned __int64, unsigned __int64, void **, _QWORD, char **))(**(_QWORD **)(a2 + 440) + 576LL))(
              *(_QWORD *)(a2 + 440),
              s2,
              v387 - 1,
              v385 - 1,
              dest,
              v38,
              s);
      v40 = pack_dd(v396, (unsigned __int64)v396 + 5, v39);
      sub_56350((__int64)a1, v396, v40 - (_BYTE *)v396);
      if ( v39 != -1 )
      {
        if ( v39 == 1 )
        {
          v41 = pack_dq(v406, (unsigned __int64)v407, *(_QWORD *)s2 + 1LL);
          sub_56350((__int64)a1, v406, v41 - v406);
        }
        else
        {
          if ( s[1] )
            v279 = s[0];
          else
            v279 = s1;
          v338 = &byte_EB522;
          if ( v279 )
            v338 = v279;
          v339 = strlen(v338) + 1;
          sub_56350((__int64)a1, v338, v339);
        }
      }
      if ( s[0] )
      {
        s[1] = nullptr;
        qfree(s[0]);
        s[0] = nullptr;
        v404[0] = nullptr;
      }
      v340 = (char *)dest[0];
      if ( !dest[0] )
        goto LABEL_520;
      if ( dest[1] )
      {
        v341 = (char *)dest[1] - 1;
        for ( i2 = 0; ; i2 += 80 )
        {
          v343 = *(void **)&v340[i2 + 48];
          if ( v343 )
          {
            *(_QWORD *)&v340[i2 + 56] = 0;
            qfree(v343);
            *(_QWORD *)&v340[i2 + 48] = 0;
            *(_QWORD *)&v340[i2 + 64] = 0;
          }
          v344 = *(void **)&v340[i2 + 24];
          if ( v344 )
          {
            *(_QWORD *)&v340[i2 + 32] = 0;
            qfree(v344);
            *(_QWORD *)&v340[i2 + 24] = 0;
            *(_QWORD *)&v340[i2 + 40] = 0;
          }
          v345 = *(void **)&v340[i2];
          if ( v345 )
          {
            *(_QWORD *)&v340[i2 + 8] = 0;
            qfree(v345);
            *(_QWORD *)&v340[i2] = 0;
            *(_QWORD *)&v340[i2 + 16] = 0;
          }
          if ( !v341 )
            break;
          v340 = (char *)dest[0];
          --v341;
        }
        v340 = (char *)dest[0];
      }
      dest[1] = nullptr;
      qfree(v340);
      goto LABEL_583;
    case 0x30:
      if ( *(_QWORD *)(*(_QWORD *)(a2 + 440) + 552LL) )
      {
        v14 = pack_dd(v396, (unsigned __int64)v396 + 5, 1u);
        sub_56350((__int64)a1, v396, v14 - (_BYTE *)v396);
        j_serialize_dynamic_register_set(a1, *(_QWORD *)(a2 + 440) + 544LL);
      }
      else
      {
        v245 = pack_dd(v396, (unsigned __int64)v396 + 5, 0);
        sub_56350((__int64)a1, v396, v245 - (_BYTE *)v396);
      }
      goto LABEL_520;
    default:
      sub_AB1F0((__int64)dest, 1);
      v196 = *(_OWORD *)dest;
      *(_OWORD *)s = *(_OWORD *)dest;
      memset(dest, 0, 24);
      v127 = dest[2];
      v404[0] = dest[2];
      v197 = *a1;
      v126 = v196;
      if ( !*v8 )
        goto LABEL_214;
      v8[1] = 0;
      qfree(v197);
      v198 = v404[0];
      v130 = dest[0];
      *(_OWORD *)v8 = *(_OWORD *)s;
      v8[2] = v198;
      if ( v130 )
        goto LABEL_141;
      goto LABEL_520;
  }
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// A6FA0: using guessed type __int64 __fastcall j_serialize_dynamic_register_set(_QWORD, _QWORD);
// 14E820: using guessed type char *off_14E820[6];
// 155930: using guessed type __int64 qword_155930[2];
// 158B40: using guessed type __int64 under_debugger;
