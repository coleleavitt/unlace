__int64 __fastcall sub_1CEA4D0(__int64 a1, __int64 *a2, char a3, __int64 *a4, __int64 a5, double a6, __m128 si128)
{
  unsigned __int64 v7; // r14
  __int64 *v9; // rbp
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // rsi
  unsigned int v13; // eax
  char v14; // dl
  unsigned int v15; // eax
  void *v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm0
  unsigned __int64 v22; // r13
  __int64 v23; // rax
  unsigned __int16 *v24; // rsi
  unsigned __int64 v25; // rax
  char v26; // r13
  _BYTE *v27; // rax
  bool v28; // zf
  __int64 v29; // r8
  int v30; // edx
  int v31; // ecx
  unsigned __int16 *v32; // rsi
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned int v35; // r13d
  __int64 *v36; // rax
  __int64 v37; // r9
  char ***v38; // r14
  unsigned int v39; // r13d
  const void *v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  __int64 v43; // r8
  unsigned __int64 *v44; // r14
  __int64 v45; // r13
  unsigned __int64 *v46; // r15
  __int64 v47; // rax
  __int64 v48; // r13
  unsigned __int64 *v49; // r13
  unsigned __int64 *j; // r13
  _BYTE *v51; // rax
  char *v52; // r13
  char *v53; // rcx
  __int64 v54; // r14
  signed __int64 v55; // r13
  __int64 v56; // r15
  __int64 v57; // rax
  int v58; // edx
  char v59; // al
  unsigned int v60; // r13d
  const void *v61; // rax
  __int64 v62; // rdx
  unsigned __int64 v63; // rax
  char ***v64; // r14
  unsigned int v65; // r13d
  const void *v66; // rax
  __int64 v67; // rdx
  unsigned __int16 *v68; // rsi
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rax
  unsigned int v71; // r13d
  __int64 *v72; // rax
  __int64 v73; // r9
  unsigned __int64 v74; // rcx
  __int64 v75; // r8
  unsigned __int64 *v76; // r14
  __int64 v77; // r13
  unsigned __int64 *v78; // r15
  __int64 v79; // rax
  __int64 v80; // r13
  unsigned __int64 *v81; // r13
  unsigned __int64 *k; // r13
  _BYTE *v83; // rax
  char *v84; // r13
  char *v85; // rcx
  __int64 v86; // r14
  signed __int64 v87; // r13
  __int64 v88; // r15
  __int64 v89; // rax
  int v90; // edx
  char v91; // al
  unsigned int v92; // r13d
  const void *v93; // rax
  __int64 v94; // rdx
  unsigned __int16 **v95; // rax
  __int64 v96; // r14
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rax
  __int64 v99; // rdx
  unsigned __int16 **v100; // r13
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rax
  _BYTE *v103; // rax
  char ***v104; // r14
  unsigned int v105; // r13d
  const void *v106; // rax
  __int64 v107; // rdx
  __int64 *v108; // rdi
  int v109; // r10d
  unsigned int v110; // r14d
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // rcx
  char v114; // r13
  void *v115; // rax
  unsigned __int64 v116; // rdx
  char ***v117; // r14
  unsigned int v118; // r13d
  const void *v119; // rax
  __int64 v120; // rdx
  unsigned __int16 *v121; // r13
  unsigned int v122; // eax
  __int64 v123; // r9
  unsigned __int64 v124; // r13
  __int64 v125; // r11
  __int64 v126; // rax
  __int64 v127; // r14
  __int64 v128; // r8
  char v129; // al
  __int64 v130; // rcx
  unsigned __int16 *v131; // rsi
  unsigned __int64 v132; // rax
  unsigned __int64 v133; // rax
  unsigned int v134; // r13d
  __int64 *v135; // rax
  __int64 v136; // r9
  char ***v137; // r14
  unsigned int v138; // r13d
  const void *v139; // rax
  __int64 v140; // rdx
  unsigned __int64 v141; // rax
  unsigned __int64 v142; // rax
  _BYTE *v143; // rdi
  unsigned __int16 **v144; // r13
  unsigned __int16 **v145; // r14
  __int64 *m; // rdi
  unsigned __int64 v147; // rax
  void *v148; // rdi
  unsigned __int64 v149; // rax
  unsigned __int64 v150; // rax
  _BYTE *v151; // rdi
  unsigned __int64 v152; // rcx
  __int64 v153; // r8
  unsigned __int64 *v154; // r14
  __int64 v155; // r13
  unsigned __int64 *v156; // r15
  __int64 v157; // rax
  __int64 v158; // r13
  unsigned __int64 *v159; // r13
  unsigned __int64 *i; // r13
  _BYTE *v161; // rax
  char *v162; // r13
  char *v163; // rcx
  __int64 v164; // r14
  signed __int64 v165; // r13
  __int64 v166; // r15
  __int64 v167; // rax
  int v168; // edx
  char v169; // al
  unsigned int v170; // r13d
  const void *v171; // rax
  __int64 v172; // rdx
  unsigned __int16 *v173; // rsi
  unsigned __int64 v174; // r14
  _QWORD *v175; // r13
  unsigned int v176; // eax
  __int64 v177; // rax
  void **v178; // rax
  __int64 v179; // r11
  unsigned __int8 v180; // r15
  unsigned __int64 v181; // r13
  __int64 v182; // rax
  __int64 v183; // r14
  __int64 v184; // r9
  unsigned __int64 v185; // rax
  unsigned __int64 v186; // rax
  _BYTE *v187; // rdi
  unsigned __int16 **v188; // r13
  unsigned __int16 **v189; // r14
  __int64 *ii; // rdi
  unsigned __int16 *v191; // rsi
  unsigned __int64 v192; // rax
  _QWORD *v193; // r15
  unsigned int v194; // eax
  __int64 v195; // rax
  void **v196; // rax
  unsigned __int16 *v197; // r13
  unsigned int v198; // eax
  unsigned __int64 v199; // r14
  _BYTE *v200; // r13
  __int64 v201; // rax
  __int64 v202; // r11
  unsigned __int8 v203; // al
  char ***v204; // r14
  unsigned int v205; // r13d
  const void *v206; // rax
  __int64 v207; // rdx
  char ***v208; // r14
  unsigned int v209; // r13d
  const void *v210; // rax
  __int64 v211; // rdx
  char ***v212; // r14
  unsigned __int8 v213; // dl
  const void *v214; // rcx
  __int64 v215; // r8
  unsigned __int64 v216; // rcx
  __int64 v217; // r8
  unsigned __int64 *v218; // r14
  unsigned __int64 *v219; // r13
  unsigned __int64 v220; // rax
  __int64 v221; // rcx
  void *v222; // rax
  unsigned __int64 v223; // rdx
  char v224; // dl
  _BYTE *v225; // rax
  __int64 *v226; // r9
  __int64 v227; // r8
  _BYTE *v228; // rdx
  size_t v229; // rsi
  __int64 v230; // rcx
  int v231; // r9d
  __int64 *v232; // rdi
  unsigned __int64 v233; // rdx
  __int64 v234; // r8
  char v235; // al
  __int64 v236; // rcx
  __int64 v237; // rcx
  __int64 *v238; // rax
  unsigned __int64 v239; // rdx
  __int64 v240; // r8
  char v241; // al
  __int64 v242; // rcx
  __int64 v243; // rcx
  __int64 *v244; // rax
  unsigned __int64 v245; // rdx
  __int64 v246; // r8
  char v247; // al
  __int64 v248; // rcx
  __int64 v249; // rcx
  __int64 *v250; // rax
  __int64 v251; // r8
  __int64 v252; // rcx
  unsigned __int64 v253; // rax
  unsigned __int16 **v254; // r14
  __int64 v255; // r13
  __int64 *n; // rdi
  unsigned __int64 v257; // rax
  unsigned __int64 v258; // rax
  char v259; // dl
  __int64 v260; // r9
  __int64 v261; // r8
  __int64 v262; // rcx
  unsigned __int64 v263; // rax
  unsigned int v264; // r13d
  __int64 *v265; // rax
  __int64 v266; // r9
  char *v267; // rdi
  char *v268; // rdi
  char *v269; // rdi
  _BYTE *v270; // rdi
  void *v271; // rsi
  __int64 v272; // rdx
  unsigned int v273; // r13d
  const void *v274; // rax
  __int64 v275; // rdx
  unsigned __int64 v276; // rax
  __int64 v277; // rdx
  void *v278; // rsi
  void *v279; // rsi
  __int64 v280; // rdx
  _BYTE *v281; // rdi
  unsigned int v282; // r13d
  const void *v283; // rax
  __int64 v284; // rdx
  void *v285; // rsi
  __int64 v286; // rdx
  _BYTE *v287; // rdi
  unsigned int v288; // r13d
  const void *v289; // rax
  __int64 v290; // rdx
  unsigned __int64 p_dest; // [rsp+0h] [rbp-218h] BYREF
  __int64 *v292; // [rsp+8h] [rbp-210h]
  __int64 v293; // [rsp+10h] [rbp-208h]
  __int64 *v294; // [rsp+18h] [rbp-200h]
  char *v295; // [rsp+20h] [rbp-1F8h]
  char ***p_ptr; // [rsp+28h] [rbp-1F0h]
  void *v297; // [rsp+30h] [rbp-1E8h]
  __int64 v298; // [rsp+38h] [rbp-1E0h]
  __int64 *v299; // [rsp+40h] [rbp-1D8h]
  __int64 v300; // [rsp+48h] [rbp-1D0h]
  _BYTE *v301; // [rsp+50h] [rbp-1C8h]
  size_t v302; // [rsp+58h] [rbp-1C0h]
  void *v303; // [rsp+60h] [rbp-1B8h]
  __int64 v304; // [rsp+68h] [rbp-1B0h]
  __int64 v305; // [rsp+70h] [rbp-1A8h]
  void *src; // [rsp+78h] [rbp-1A0h]
  __m128 v307; // [rsp+80h] [rbp-198h] BYREF
  __int64 v308; // [rsp+90h] [rbp-188h]
  unsigned __int8 *v309; // [rsp+98h] [rbp-180h] BYREF
  unsigned __int64 v310; // [rsp+A0h] [rbp-178h]
  void *dest; // [rsp+B0h] [rbp-168h] BYREF
  __m128 v312; // [rsp+B8h] [rbp-160h]
  _BYTE v313[40]; // [rsp+C8h] [rbp-150h] BYREF
  void *ptr; // [rsp+F0h] [rbp-128h] BYREF
  __int64 v315; // [rsp+F8h] [rbp-120h]
  char v316; // [rsp+100h] [rbp-118h] BYREF
  char v317; // [rsp+130h] [rbp-E8h]
  _BYTE v318[4]; // [rsp+140h] [rbp-D8h] BYREF
  unsigned int v319; // [rsp+144h] [rbp-D4h]
  unsigned int v320; // [rsp+148h] [rbp-D0h]
  unsigned int v321; // [rsp+14Ch] [rbp-CCh]
  char v322; // [rsp+150h] [rbp-C8h]
  unsigned __int8 v323; // [rsp+1D0h] [rbp-48h]

  v7 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x600000000LL;
  v292 = a2;
  HIBYTE(v293) = a3;
  v305 = a1 + 16;
  *(_QWORD *)a1 = a1 + 16;
  v294 = &a4[a5];
  if ( a4 != v294 )
  {
    v9 = a4;
    v10 = 0;
    p_ptr = (char ***)&ptr;
    v295 = &v316;
    while ( 1 )
    {
      v11 = *v9;
      v12 = HIBYTE(v293);
      v13 = *(_DWORD *)(*v9 + 12);
      v14 = *(_BYTE *)(*v9 + 8);
      v323 = 0;
      v318[0] = HIBYTE(v293);
      v319 = v13;
      v15 = *(_DWORD *)(v11 + 16);
      v318[1] = v14;
      v321 = 0;
      v320 = v15;
      if ( (unsigned __int8)sub_EADB30(v11) )
        v321 = *(_DWORD *)(v11 + 20);
      p_dest = v7;
      v308 = v10;
      v309 = v318;
      v310 = 0;
      v20 = _mm_loadh_ps((const double *)&p_dest);
      v307 = v20;
      switch ( *(_BYTE *)(v11 + 8) )
      {
        case 0:
          if ( *(_QWORD *)(v11 + 32) )
          {
            v149 = sub_1CE88F0(v292, **(unsigned __int16 ***)(v11 + 24), v20, si128, (__int64)v16, v17, v18);
            if ( v149 <= 1 )
              goto LABEL_22;
            v150 = sub_1AA2500(
                     *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 744LL),
                     20,
                     *(_BYTE *)(v11 + 8),
                     *(_DWORD *)(v11 + 12),
                     v149 & 0xFFFFFFFFFFFFFFFELL);
            if ( v150 <= 1 )
              goto LABEL_22;
            ptr = (void *)(v150 & 0xFFFFFFFFFFFFFFFELL);
            sub_17440A0((__int64)v309, p_ptr, 1);
            v151 = v309;
          }
          else
          {
            v151 = v318;
          }
          v245 = (unsigned __int8)v151[1];
          v246 = *((unsigned int *)v151 + 2);
          v247 = v151[144];
          if ( (unsigned __int8)v245 > 0x31u || (v248 = 0x3400000000001LL, !_bittest64(&v248, v245)) || v247 )
          {
            if ( v247 != 3 )
              goto LABEL_368;
            v249 = 0;
            if ( *((_DWORD *)v151 + 6) )
            {
              LODWORD(p_dest) = *((_DWORD *)v151 + 2);
              v250 = (__int64 *)sub_1741CC0((__int64)v151);
              v151 = v309;
              v246 = (unsigned int)p_dest;
              v249 = *v250;
            }
          }
          else
          {
            v249 = 0;
          }
          v22 = sub_EB30B0(
                  *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                  *((_DWORD *)v151 + 1),
                  *((_DWORD *)v151 + 3),
                  v249,
                  v246,
                  v19);
          v310 = v22;
          goto LABEL_8;
        case 1:
          v152 = *(_QWORD *)(v11 + 24);
          v153 = *(_QWORD *)(v11 + 32);
          p_dest = (unsigned __int64)&dest;
          sub_1CE9DA0((__int64)&dest, (__int64 **)&v307, (__int64)&v309, v152, v153, v20, si128);
          v154 = (unsigned __int64 *)dest;
          v155 = 8LL * v312.m128_u32[0];
          v156 = (unsigned __int64 *)((char *)dest + v155);
          v157 = v155 >> 3;
          v158 = v155 >> 5;
          if ( !v158 )
            goto LABEL_315;
          v159 = (unsigned __int64 *)((char *)dest + 32 * v158);
          do
          {
            if ( (unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 1, *v154) )
              goto LABEL_164;
            if ( (unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 1, v154[1]) )
            {
              ++v154;
              goto LABEL_164;
            }
            if ( (unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 1, v154[2]) )
            {
              v154 += 2;
              goto LABEL_164;
            }
            if ( (unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 1, v154[3]) )
            {
              v154 += 3;
              goto LABEL_164;
            }
            v154 += 4;
          }
          while ( v159 != v154 );
          v157 = v156 - v154;
LABEL_315:
          if ( v157 == 2 )
            goto LABEL_350;
          if ( v157 != 3 )
          {
            if ( v157 != 1 )
            {
LABEL_318:
              v154 = v156;
              goto LABEL_169;
            }
            goto LABEL_352;
          }
          if ( !(unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 1, *v154) )
          {
            ++v154;
LABEL_350:
            if ( !(unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 1, *v154) )
            {
              ++v154;
LABEL_352:
              if ( !(unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 1, *v154) )
                goto LABEL_318;
            }
          }
LABEL_164:
          if ( v156 != v154 )
          {
            for ( i = v154 + 1; v156 != i; ++i )
            {
              if ( !(unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 1, *i) )
                *v154++ = *i;
            }
          }
LABEL_169:
          v161 = dest;
          v162 = (char *)((_BYTE *)dest + 8 * v312.m128_u32[0] - (_BYTE *)v156);
          if ( v156 != (unsigned __int64 *)((char *)dest + 8 * v312.m128_u32[0]) )
          {
            memmove(v154, v156, (_BYTE *)dest + 8 * v312.m128_u32[0] - (_BYTE *)v156);
            v161 = dest;
          }
          v163 = &v162[(_QWORD)v154];
          v164 = (__int64)v309;
          ptr = v295;
          v312.m128_i32[0] = (v163 - v161) >> 3;
          v165 = 8LL * v312.m128_u32[0];
          v315 = 0x600000000LL;
          v166 = v165 >> 3;
          if ( (unsigned __int64)v165 > 0x30 )
          {
            src = v161;
            sub_2237220(p_ptr, v295, (8LL * v312.m128_u32[0]) >> 3, 8);
            v161 = src;
            v267 = (char *)ptr + 8 * (unsigned int)v315;
          }
          else
          {
            if ( !v165 )
              goto LABEL_173;
            v267 = v295;
          }
          memcpy(v267, v161, v165);
          LODWORD(v165) = v315;
LABEL_173:
          v317 = 0;
          LODWORD(v315) = v166 + v165;
          v167 = *(unsigned __int8 *)(v164 + 144);
          v168 = v166 + v165;
          if ( (_BYTE)v167 != 0xFF )
          {
            if ( (_BYTE)v167 == 4 )
            {
              sub_1576230((char ***)(v164 + 16), p_ptr);
              *(_BYTE *)(v164 + 80) = v317;
LABEL_179:
              if ( ptr != v295 )
                free(ptr);
              v170 = *((_DWORD *)v309 + 2);
              v171 = (const void *)sub_1741D10((__int64)v309);
              v63 = sub_EB43E0(
                      *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                      *((_DWORD *)v309 + 1),
                      *((_DWORD *)v309 + 3),
                      v171,
                      v172,
                      v170);
              goto LABEL_182;
            }
            funcs_1576A39[v167]();
            v168 = v315;
          }
          *(_QWORD *)(v164 + 16) = v164 + 32;
          *(_QWORD *)(v164 + 24) = 0x600000000LL;
          if ( v168 )
            sub_1576230((char ***)(v164 + 16), p_ptr);
          v169 = v317;
          *(_BYTE *)(v164 + 144) = 4;
          *(_BYTE *)(v164 + 80) = v169;
          goto LABEL_179;
        case 2:
          v22 = sub_EB27F0(*(_QWORD **)(*v292 + 248), v319, v320, v17, v18, v19);
          v310 = v22;
          goto LABEL_8;
        case 4:
          v173 = nullptr;
          if ( *(_QWORD *)(v11 + 32) )
            v173 = **(unsigned __int16 ***)(v11 + 24);
          v174 = sub_1CE88F0(v292, v173, v20, si128, (__int64)v16, v17, v18) & 0xFFFFFFFFFFFFFFFELL;
          v175 = *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 744LL);
          v176 = sub_EEB7E0(v174, (__int64)v173, *(double *)v20.m128_u64);
          v177 = sub_1AA2500(v175, 20, v309[1], v176, v174);
          v178 = sub_1ACA320(
                   *(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL),
                   (void **)(v177 & 0xFFFFFFFFFFFFFFFELL),
                   *(double *)v20.m128_u64);
          v179 = (__int64)v309;
          v180 = *(_BYTE *)(v11 + 48);
          v181 = (unsigned __int64)v178 & 0xFFFFFFFFFFFFFFFELL;
          v182 = v309[144];
          v183 = (__int64)v309;
          if ( (_BYTE)v182 == 0xFF )
            goto LABEL_189;
          if ( (_BYTE)v182 == 8 )
          {
            v309[16] = v180;
            v184 = *(unsigned int *)(v179 + 8);
            *(_QWORD *)(v179 + 24) = v181;
          }
          else
          {
            funcs_1576A39[v182]();
            v179 = (__int64)v309;
LABEL_189:
            *(_BYTE *)(v183 + 144) = 8;
            v184 = *(unsigned int *)(v179 + 8);
            *(_BYTE *)(v183 + 16) = v180;
            *(_QWORD *)(v183 + 24) = v181;
            if ( *(_BYTE *)(v179 + 144) != 8 )
LABEL_368:
              abort();
          }
          v22 = sub_EB3320(
                  *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                  *(_DWORD *)(v179 + 4),
                  *(_DWORD *)(v179 + 12),
                  *(_BYTE *)(v179 + 16),
                  *(_QWORD *)(v179 + 24),
                  v184);
          v310 = v22;
          goto LABEL_8;
        case 5:
        case 6:
        case 7:
          sub_1CE9E90((__int64)&v307, v11, v20, si128);
          v22 = v310;
          goto LABEL_8;
        case 8:
        case 9:
        case 0xA:
          sub_1CEA020((__int64)&v307, v11, v20, si128);
          v22 = v310;
          goto LABEL_8;
        case 0xB:
        case 0xC:
        case 0xD:
          sub_1CEA1B0((__int64)&v307, v11, v20, si128);
          v22 = v310;
          goto LABEL_8;
        case 0xE:
        case 0xF:
        case 0x10:
          sub_1CEA340((__int64)&v307, v11, v20, si128);
          v22 = v310;
          goto LABEL_8;
        case 0x11:
          v26 = *(_BYTE *)(v11 + 24);
          if ( v323 == 0xFF )
          {
            v27 = v318;
          }
          else
          {
            if ( v323 == 1 )
            {
              v322 = *(_BYTE *)(v11 + 24);
              v29 = v320;
              v27 = v318;
              v31 = v321;
              v30 = v319;
              goto LABEL_27;
            }
            funcs_1576A39[v323]();
            v27 = v309;
          }
          v323 = 1;
          v28 = v27[144] == 1;
          v29 = *((unsigned int *)v27 + 2);
          v30 = *((_DWORD *)v27 + 1);
          v322 = v26;
          v31 = *((_DWORD *)v27 + 3);
          if ( !v28 )
            goto LABEL_368;
LABEL_27:
          v22 = sub_EB2AF0(*(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL), v27[16], v30, v31, v29, v19);
          v310 = v22;
          goto LABEL_8;
        case 0x12:
          v32 = nullptr;
          if ( *(_QWORD *)(v11 + 32) )
            v32 = **(unsigned __int16 ***)(v11 + 24);
          v33 = sub_1CE88F0(v292, v32, v20, si128, (__int64)v16, v17, v18);
          if ( v33 <= 1 )
            goto LABEL_22;
          v34 = sub_1AA2500(
                  *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 744LL),
                  20,
                  *(_BYTE *)(v11 + 8),
                  *(_DWORD *)(v11 + 12),
                  v33 & 0xFFFFFFFFFFFFFFFELL);
          if ( v34 <= 1 )
            goto LABEL_22;
          ptr = (void *)(v34 & 0xFFFFFFFFFFFFFFFELL);
          sub_17440A0((__int64)v309, p_ptr, 1);
          v35 = *((_DWORD *)v309 + 2);
          v36 = (__int64 *)sub_1741CC0((__int64)v309);
          v22 = sub_EB3250(
                  *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                  *((_DWORD *)v309 + 1),
                  *((_DWORD *)v309 + 3),
                  *v36,
                  v35,
                  v37);
          v310 = v22;
          goto LABEL_8;
        case 0x13:
          v38 = p_ptr;
          sub_1CE9DA0(
            (__int64)p_ptr,
            (__int64 **)&v307,
            (__int64)&v309,
            *(_QWORD *)(v11 + 24),
            *(_QWORD *)(v11 + 32),
            v20,
            si128);
          sub_1CB6B60((__int64)v318, (__int64)v38);
          if ( ptr != v295 )
            free(ptr);
          v39 = *((_DWORD *)v309 + 2);
          v40 = (const void *)sub_1741D10((__int64)v309);
          v22 = sub_EB4020(
                  *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                  *((_DWORD *)v309 + 1),
                  *((_DWORD *)v309 + 3),
                  v40,
                  v41,
                  v39);
          v310 = v22;
          goto LABEL_8;
        case 0x14:
          v42 = *(_QWORD *)(v11 + 24);
          v43 = *(_QWORD *)(v11 + 32);
          p_dest = (unsigned __int64)&dest;
          sub_1CE9DA0((__int64)&dest, (__int64 **)&v307, (__int64)&v309, v42, v43, v20, si128);
          v44 = (unsigned __int64 *)dest;
          v45 = 8LL * v312.m128_u32[0];
          v46 = (unsigned __int64 *)((char *)dest + v45);
          v47 = v45 >> 3;
          v48 = v45 >> 5;
          if ( !v48 )
            goto LABEL_310;
          v49 = (unsigned __int64 *)((char *)dest + 32 * v48);
          do
          {
            if ( (unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 20, *v44) )
              goto LABEL_43;
            if ( (unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 20, v44[1]) )
            {
              ++v44;
              goto LABEL_43;
            }
            if ( (unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 20, v44[2]) )
            {
              v44 += 2;
              goto LABEL_43;
            }
            if ( (unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 20, v44[3]) )
            {
              v44 += 3;
              goto LABEL_43;
            }
            v44 += 4;
          }
          while ( v49 != v44 );
          v47 = v46 - v44;
LABEL_310:
          if ( v47 == 2 )
            goto LABEL_356;
          if ( v47 != 3 )
          {
            if ( v47 != 1 )
            {
LABEL_313:
              v44 = v46;
              goto LABEL_48;
            }
            goto LABEL_358;
          }
          if ( !(unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 20, *v44) )
          {
            ++v44;
LABEL_356:
            if ( !(unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 20, *v44) )
            {
              ++v44;
LABEL_358:
              if ( !(unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 20, *v44) )
                goto LABEL_313;
            }
          }
LABEL_43:
          if ( v46 != v44 )
          {
            for ( j = v44 + 1; v46 != j; ++j )
            {
              if ( !(unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 20, *j) )
                *v44++ = *j;
            }
          }
LABEL_48:
          v51 = dest;
          v52 = (char *)((_BYTE *)dest + 8 * v312.m128_u32[0] - (_BYTE *)v46);
          if ( v46 != (unsigned __int64 *)((char *)dest + 8 * v312.m128_u32[0]) )
          {
            memmove(v44, v46, (_BYTE *)dest + 8 * v312.m128_u32[0] - (_BYTE *)v46);
            v51 = dest;
          }
          v53 = &v52[(_QWORD)v44];
          v54 = (__int64)v309;
          ptr = v295;
          v312.m128_i32[0] = (v53 - v51) >> 3;
          v55 = 8LL * v312.m128_u32[0];
          v315 = 0x600000000LL;
          v56 = v55 >> 3;
          if ( (unsigned __int64)v55 > 0x30 )
          {
            src = v51;
            sub_2237220(p_ptr, v295, (8LL * v312.m128_u32[0]) >> 3, 8);
            v51 = src;
            v269 = (char *)ptr + 8 * (unsigned int)v315;
          }
          else
          {
            if ( !v55 )
              goto LABEL_52;
            v269 = v295;
          }
          memcpy(v269, v51, v55);
          LODWORD(v55) = v315;
LABEL_52:
          v317 = 0;
          LODWORD(v315) = v56 + v55;
          v57 = *(unsigned __int8 *)(v54 + 144);
          v58 = v56 + v55;
          if ( (_BYTE)v57 != 0xFF )
          {
            if ( (_BYTE)v57 == 4 )
            {
              sub_1576230((char ***)(v54 + 16), p_ptr);
              *(_BYTE *)(v54 + 80) = v317;
LABEL_58:
              if ( ptr != v295 )
                free(ptr);
              v60 = *((_DWORD *)v309 + 2);
              v61 = (const void *)sub_1741D10((__int64)v309);
              v63 = sub_EB3F30(
                      *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                      *((_DWORD *)v309 + 1),
                      *((_DWORD *)v309 + 3),
                      v61,
                      v62,
                      v60);
              goto LABEL_182;
            }
            funcs_1576A39[v57]();
            v58 = v315;
          }
          *(_QWORD *)(v54 + 16) = v54 + 32;
          *(_QWORD *)(v54 + 24) = 0x600000000LL;
          if ( v58 )
            sub_1576230((char ***)(v54 + 16), p_ptr);
          v59 = v317;
          *(_BYTE *)(v54 + 144) = 4;
          *(_BYTE *)(v54 + 80) = v59;
          goto LABEL_58;
        case 0x15:
          v64 = p_ptr;
          sub_1CE9DA0(
            (__int64)p_ptr,
            (__int64 **)&v307,
            (__int64)&v309,
            *(_QWORD *)(v11 + 24),
            *(_QWORD *)(v11 + 32),
            v20,
            si128);
          sub_1CB6B60((__int64)v318, (__int64)v64);
          if ( ptr != v295 )
            free(ptr);
          v65 = *((_DWORD *)v309 + 2);
          v66 = (const void *)sub_1741D10((__int64)v309);
          v22 = sub_EB3C60(
                  *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                  *((_DWORD *)v309 + 1),
                  *((_DWORD *)v309 + 3),
                  v66,
                  v67,
                  v65);
          v310 = v22;
          goto LABEL_8;
        case 0x16:
          v68 = nullptr;
          if ( *(_QWORD *)(v11 + 32) )
            v68 = **(unsigned __int16 ***)(v11 + 24);
          v69 = sub_1CE88F0(v292, v68, v20, si128, (__int64)v16, v17, v18);
          if ( v69 <= 1 )
            goto LABEL_22;
          v70 = sub_1AA2500(
                  *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 744LL),
                  20,
                  *(_BYTE *)(v11 + 8),
                  *(_DWORD *)(v11 + 12),
                  v69 & 0xFFFFFFFFFFFFFFFELL);
          if ( v70 <= 1 )
            goto LABEL_22;
          ptr = (void *)(v70 & 0xFFFFFFFFFFFFFFFELL);
          sub_17440A0((__int64)v309, p_ptr, 1);
          v71 = *((_DWORD *)v309 + 2);
          v72 = (__int64 *)sub_1741CC0((__int64)v309);
          v22 = sub_EB3180(
                  *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                  *((_DWORD *)v309 + 1),
                  *((_DWORD *)v309 + 3),
                  *v72,
                  v71,
                  v73);
          v310 = v22;
          goto LABEL_8;
        case 0x17:
          v74 = *(_QWORD *)(v11 + 24);
          v75 = *(_QWORD *)(v11 + 32);
          p_dest = (unsigned __int64)&dest;
          sub_1CE9DA0((__int64)&dest, (__int64 **)&v307, (__int64)&v309, v74, v75, v20, si128);
          v76 = (unsigned __int64 *)dest;
          v77 = 8LL * v312.m128_u32[0];
          v78 = (unsigned __int64 *)((char *)dest + v77);
          v79 = v77 >> 3;
          v80 = v77 >> 5;
          if ( !v80 )
            goto LABEL_305;
          v81 = (unsigned __int64 *)((char *)dest + 32 * v80);
          do
          {
            if ( (unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 23, *v76) )
              goto LABEL_76;
            if ( (unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 23, v76[1]) )
            {
              ++v76;
              goto LABEL_76;
            }
            if ( (unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 23, v76[2]) )
            {
              v76 += 2;
              goto LABEL_76;
            }
            if ( (unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 23, v76[3]) )
            {
              v76 += 3;
              goto LABEL_76;
            }
            v76 += 4;
          }
          while ( v81 != v76 );
          v79 = v78 - v76;
LABEL_305:
          if ( v79 == 2 )
            goto LABEL_344;
          if ( v79 != 3 )
          {
            if ( v79 != 1 )
            {
LABEL_308:
              v76 = v78;
              goto LABEL_81;
            }
            goto LABEL_346;
          }
          if ( !(unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 23, *v76) )
          {
            ++v76;
LABEL_344:
            if ( !(unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 23, *v76) )
            {
              ++v76;
LABEL_346:
              if ( !(unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 23, *v76) )
                goto LABEL_308;
            }
          }
LABEL_76:
          if ( v78 != v76 )
          {
            for ( k = v76 + 1; v78 != k; ++k )
            {
              if ( !(unsigned __int8)sub_1AA3DE0(*(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL), 23, *k) )
                *v76++ = *k;
            }
          }
LABEL_81:
          v83 = dest;
          v84 = (char *)((_BYTE *)dest + 8 * v312.m128_u32[0] - (_BYTE *)v78);
          if ( v78 != (unsigned __int64 *)((char *)dest + 8 * v312.m128_u32[0]) )
          {
            memmove(v76, v78, (_BYTE *)dest + 8 * v312.m128_u32[0] - (_BYTE *)v78);
            v83 = dest;
          }
          v85 = &v84[(_QWORD)v76];
          v86 = (__int64)v309;
          ptr = v295;
          v312.m128_i32[0] = (v85 - v83) >> 3;
          v87 = 8LL * v312.m128_u32[0];
          v315 = 0x600000000LL;
          v88 = v87 >> 3;
          if ( (unsigned __int64)v87 > 0x30 )
          {
            src = v83;
            sub_2237220(p_ptr, v295, (8LL * v312.m128_u32[0]) >> 3, 8);
            v83 = src;
            v268 = (char *)ptr + 8 * (unsigned int)v315;
          }
          else
          {
            if ( !v87 )
              goto LABEL_85;
            v268 = v295;
          }
          memcpy(v268, v83, v87);
          LODWORD(v87) = v315;
LABEL_85:
          v317 = 0;
          LODWORD(v315) = v88 + v87;
          v89 = *(unsigned __int8 *)(v86 + 144);
          v90 = v88 + v87;
          if ( (_BYTE)v89 == 0xFF )
            goto LABEL_88;
          if ( (_BYTE)v89 != 4 )
          {
            funcs_1576A39[v89]();
            v90 = v315;
LABEL_88:
            *(_QWORD *)(v86 + 16) = v86 + 32;
            *(_QWORD *)(v86 + 24) = 0x600000000LL;
            if ( v90 )
              sub_1576230((char ***)(v86 + 16), p_ptr);
            v91 = v317;
            *(_BYTE *)(v86 + 144) = 4;
            *(_BYTE *)(v86 + 80) = v91;
            goto LABEL_91;
          }
          sub_1576230((char ***)(v86 + 16), p_ptr);
          *(_BYTE *)(v86 + 80) = v317;
LABEL_91:
          if ( ptr != v295 )
            free(ptr);
          v92 = *((_DWORD *)v309 + 2);
          v93 = (const void *)sub_1741D10((__int64)v309);
          v63 = sub_EB4200(
                  *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                  *((_DWORD *)v309 + 1),
                  *((_DWORD *)v309 + 3),
                  v93,
                  v94,
                  v92);
LABEL_182:
          v22 = v63;
          v310 = v63;
          v148 = dest;
          if ( dest != (void *)(p_dest + 16) )
          {
LABEL_152:
            free(v148);
LABEL_22:
            v22 = v310;
          }
LABEL_8:
          if ( v323 != 0xFF )
            funcs_1576A39[v323]();
          if ( v22 )
          {
            v23 = *(unsigned int *)(a1 + 8);
            if ( v23 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
            {
              sub_2237220(a1, v305, v23 + 1, 8);
              v23 = *(unsigned int *)(a1 + 8);
            }
            *(_QWORD *)(*(_QWORD *)a1 + 8 * v23) = v22;
            ++*(_DWORD *)(a1 + 8);
          }
          if ( v294 == ++v9 )
            return a1;
          v7 = *(_QWORD *)a1;
          v10 = *(unsigned int *)(a1 + 8);
          break;
        case 0x19:
          v310 = sub_EB45C0(*(_QWORD **)(*v292 + 248), 25, v319, v321, v11 + 32, *(unsigned int *)(v11 + 24), v320);
          v22 = v310;
          goto LABEL_8;
        case 0x1A:
          v310 = sub_EB45C0(*(_QWORD **)(*v292 + 248), 26, v319, v321, v11 + 32, *(unsigned int *)(v11 + 24), v320);
          v22 = v310;
          goto LABEL_8;
        case 0x1B:
          v22 = sub_EB29F0(*(_QWORD **)(*v292 + 248), v319, v320, v17, v18, v19);
          v310 = v22;
          goto LABEL_8;
        case 0x1C:
          v104 = p_ptr;
          sub_1CE9DA0(
            (__int64)p_ptr,
            (__int64 **)&v307,
            (__int64)&v309,
            *(_QWORD *)(v11 + 24),
            *(_QWORD *)(v11 + 32),
            v20,
            si128);
          sub_1CB6B60((__int64)v318, (__int64)v104);
          if ( ptr != v295 )
            free(ptr);
          v105 = *((_DWORD *)v309 + 2);
          v106 = (const void *)sub_1741D10((__int64)v309);
          v22 = sub_EB42F0(
                  *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                  *((_DWORD *)v309 + 1),
                  *((_DWORD *)v309 + 3),
                  v106,
                  v107,
                  v105);
          v310 = v22;
          goto LABEL_8;
        case 0x1D:
          si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8CF0);
          p_dest = (unsigned __int64)&dest;
          v108 = v292;
          v312 = si128;
          v109 = *(_DWORD *)(v11 + 32);
          ptr = v295;
          dest = v313;
          v315 = 0x600000000LL;
          if ( v109 )
          {
            v110 = 0;
            do
            {
              v111 = sub_1CE88F0(
                       v108,
                       *(unsigned __int16 **)(*(_QWORD *)(v11 + 24) + 8LL * v110),
                       v20,
                       si128,
                       (__int64)v16,
                       v17,
                       v18);
              if ( v111 > 1 )
              {
                v112 = sub_1ACAAD0(
                         *(_QWORD *)(*(_QWORD *)v307.m128_u64[0] + 744LL),
                         v307.m128_i64[1],
                         v308,
                         *v309,
                         *(_BYTE *)(v110 + v11 + 8LL * *(unsigned int *)(v11 + 32) + 40),
                         (_WORD *)(v111 & 0xFFFFFFFFFFFFFFFELL),
                         *(double *)v20.m128_u64,
                         p_dest,
                         (__int64)v292,
                         v293,
                         (int)v294);
                if ( v112 > 1 )
                {
                  v113 = v312.m128_u64[0];
                  v114 = *(_BYTE *)(v110 + v11 + 8LL * *(unsigned int *)(v11 + 32) + 40);
                  if ( v312.m128_u64[0] + 1 > v312.m128_u64[1] )
                  {
                    src = (void *)v112;
                    sub_2236E10(p_dest, p_dest + 24, v312.m128_u64[0] + 1, 1);
                    v113 = v312.m128_u64[0];
                    v112 = (unsigned __int64)src;
                  }
                  v115 = (void *)(v112 & 0xFFFFFFFFFFFFFFFELL);
                  *((_BYTE *)dest + v113) = v114;
                  v17 = (unsigned int)v315;
                  ++v312.m128_u64[0];
                  v116 = (unsigned int)v315 + 1LL;
                  if ( v116 > HIDWORD(v315) )
                  {
                    src = v115;
                    sub_2237220(p_ptr, v295, v116, 8);
                    v17 = (unsigned int)v315;
                    v115 = src;
                  }
                  v16 = ptr;
                  *((_QWORD *)ptr + v17) = v115;
                  LODWORD(v315) = v315 + 1;
                }
              }
              ++v110;
              v108 = (__int64 *)v307.m128_u64[0];
            }
            while ( v110 < *(_DWORD *)(v11 + 32) );
            v225 = v309;
            v226 = (__int64 *)ptr;
            v227 = (unsigned int)v315;
            v228 = dest;
            v229 = v312.m128_u64[0];
          }
          else
          {
            v228 = v313;
            v229 = 0;
            v227 = 0;
            v226 = (__int64 *)v295;
            v225 = v318;
          }
          v230 = *v108;
          v299 = v226;
          v300 = v227;
          v231 = *((_DWORD *)v225 + 3);
          v232 = *(__int64 **)(v230 + 744);
          LODWORD(v230) = *((_DWORD *)v225 + 2);
          v302 = v229;
          v301 = v228;
          v310 = sub_1AC4620(
                   v232,
                   *v225,
                   v307.m128_i64[1],
                   v308,
                   *((_DWORD *)v225 + 1),
                   v231,
                   *(double *)v20.m128_u64,
                   v228,
                   v229,
                   v299,
                   v227,
                   v230);
          if ( ptr != v295 )
            free(ptr);
          v148 = dest;
          if ( dest == (void *)(p_dest + 24) )
            goto LABEL_22;
          goto LABEL_152;
        case 0x1E:
          v117 = p_ptr;
          sub_1CE9DA0(
            (__int64)p_ptr,
            (__int64 **)&v307,
            (__int64)&v309,
            *(_QWORD *)(v11 + 24),
            *(_QWORD *)(v11 + 32),
            v20,
            si128);
          sub_1CB6B60((__int64)v318, (__int64)v117);
          if ( ptr != v295 )
            free(ptr);
          v118 = *((_DWORD *)v309 + 2);
          v119 = (const void *)sub_1741D10((__int64)v309);
          v22 = sub_EB3B70(
                  *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                  *((_DWORD *)v309 + 1),
                  *((_DWORD *)v309 + 3),
                  v119,
                  v120,
                  v118);
          v310 = v22;
          goto LABEL_8;
        case 0x1F:
          v121 = *(unsigned __int16 **)(v11 + 24);
          v122 = sub_C00A40((unsigned __int64)v121, v12, (__int64)v16, v17, v18);
          sub_1CE9030((__int64)p_ptr, v292, v122, 0, v121, 0, v20, si128);
          if ( v316 )
            goto LABEL_22;
          v124 = v315 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v315 & 0xFFFFFFFFFFFFFFFELL) == 0 )
            goto LABEL_22;
          v125 = (__int64)v309;
          v126 = v309[144];
          v127 = (__int64)v309;
          if ( (_BYTE)v126 == 0xFF )
            goto LABEL_130;
          if ( (_BYTE)v126 == 2 )
          {
            *((_QWORD *)v309 + 2) = v124;
            v128 = *(unsigned int *)(v125 + 8);
LABEL_132:
            v130 = *(_QWORD *)(v125 + 16);
            goto LABEL_133;
          }
          funcs_1576A39[v126]();
          v125 = (__int64)v309;
LABEL_130:
          *(_BYTE *)(v127 + 144) = 2;
          v128 = *(unsigned int *)(v125 + 8);
          *(_QWORD *)(v127 + 16) = v124;
          v129 = *(_BYTE *)(v125 + 144);
          if ( *(_BYTE *)(v125 + 1) != 42 || v129 )
          {
            if ( v129 != 2 )
              goto LABEL_368;
            goto LABEL_132;
          }
          v130 = 0;
LABEL_133:
          v22 = sub_EB2B90(
                  *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                  *(_DWORD *)(v125 + 4),
                  *(_DWORD *)(v125 + 12),
                  v130,
                  v128,
                  v123);
          v310 = v22;
          goto LABEL_8;
        case 0x20:
          v22 = sub_EB2A70(*(_QWORD **)(*v292 + 248), v319, v320, v17, v18, v19);
          v310 = v22;
          goto LABEL_8;
        case 0x21:
          v22 = sub_EB2970(*(_QWORD **)(*v292 + 248), v319, v320, v17, v18, v19);
          v310 = v22;
          goto LABEL_8;
        case 0x23:
          v137 = p_ptr;
          sub_1CE9DA0(
            (__int64)p_ptr,
            (__int64 **)&v307,
            (__int64)&v309,
            *(_QWORD *)(v11 + 24),
            *(_QWORD *)(v11 + 32),
            v20,
            si128);
          sub_1CB6B60((__int64)v318, (__int64)v137);
          if ( ptr != v295 )
            free(ptr);
          v138 = *((_DWORD *)v309 + 2);
          v139 = (const void *)sub_1741D10((__int64)v309);
          v22 = sub_EB3990(
                  *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                  *((_DWORD *)v309 + 1),
                  *((_DWORD *)v309 + 3),
                  v139,
                  v140,
                  v138);
          v310 = v22;
          goto LABEL_8;
        case 0x25:
          ptr = v295;
          v144 = *(unsigned __int16 ***)(v11 + 24);
          v315 = 0x600000000LL;
          v145 = &v144[*(_QWORD *)(v11 + 32)];
          if ( v144 == v145 )
          {
            v279 = v295;
            v280 = 0;
            v281 = v318;
          }
          else
          {
            for ( m = v292; ; m = (__int64 *)v307.m128_u64[0] )
            {
              v147 = sub_1CE88F0(m, *v144, v20, si128, (__int64)v16, v17, v18);
              if ( v147 <= 1 )
                goto LABEL_151;
              v253 = sub_1AA2500(
                       *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 744LL),
                       20,
                       *(_BYTE *)(v11 + 8),
                       *(_DWORD *)(v11 + 12),
                       v147 & 0xFFFFFFFFFFFFFFFELL);
              if ( v253 <= 1 )
                goto LABEL_151;
              ++v144;
              sub_14B7B40((__int64)p_ptr, v253 & 0xFFFFFFFFFFFFFFFELL);
              if ( v145 == v144 )
                break;
            }
            v281 = v309;
            v279 = ptr;
            v280 = (unsigned int)v315;
          }
          sub_17440A0((__int64)v281, v279, v280);
          v282 = *((_DWORD *)v309 + 2);
          v283 = (const void *)sub_1741CC0((__int64)v309);
          v276 = sub_EB3670(
                   *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                   *((_DWORD *)v309 + 1),
                   *((_DWORD *)v309 + 3),
                   v283,
                   v284,
                   v282);
          goto LABEL_300;
        case 0x26:
          v24 = nullptr;
          if ( *(_QWORD *)(v11 + 32) )
            v24 = **(unsigned __int16 ***)(v11 + 24);
          v25 = sub_1CE88F0(v292, v24, v20, si128, (__int64)v16, v17, v18);
          if ( v25 <= 1 )
            goto LABEL_22;
          v263 = sub_1AA2500(
                   *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 744LL),
                   20,
                   *(_BYTE *)(v11 + 8),
                   *(_DWORD *)(v11 + 12),
                   v25 & 0xFFFFFFFFFFFFFFFELL);
          if ( v263 <= 1 )
            goto LABEL_22;
          ptr = (void *)(v263 & 0xFFFFFFFFFFFFFFFELL);
          sub_17440A0((__int64)v309, p_ptr, 1);
          v264 = *((_DWORD *)v309 + 2);
          v265 = (__int64 *)sub_1741CC0((__int64)v309);
          v22 = sub_EB2F10(
                  *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                  *((_DWORD *)v309 + 1),
                  *((_DWORD *)v309 + 3),
                  *v265,
                  v264,
                  v266);
          v310 = v22;
          goto LABEL_8;
        case 0x27:
          v212 = p_ptr;
          sub_1CE9DA0(
            (__int64)p_ptr,
            (__int64 **)&v307,
            (__int64)&v309,
            *(_QWORD *)(v11 + 24),
            *(_QWORD *)(v11 + 32),
            v20,
            si128);
          sub_1CB6B60((__int64)v318, (__int64)v212);
          if ( ptr != v295 )
            free(ptr);
          v213 = v309[144];
          if ( v309[1] == 41 )
          {
            if ( v213 != 7 )
              goto LABEL_368;
            v214 = *((const void **)v309 + 3);
            v215 = *((unsigned int *)v309 + 8);
          }
          else
          {
            if ( v213 != 4 )
              goto LABEL_368;
            v214 = *((const void **)v309 + 2);
            v215 = *((unsigned int *)v309 + 6);
          }
          v22 = sub_EB3A80(
                  *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                  *((_DWORD *)v309 + 1),
                  *((_DWORD *)v309 + 3),
                  v214,
                  v215,
                  *((unsigned int *)v309 + 2));
          v310 = v22;
          goto LABEL_8;
        case 0x28:
          v208 = p_ptr;
          sub_1CE9DA0(
            (__int64)p_ptr,
            (__int64 **)&v307,
            (__int64)&v309,
            *(_QWORD *)(v11 + 24),
            *(_QWORD *)(v11 + 32),
            v20,
            si128);
          sub_1CB6B60((__int64)v318, (__int64)v208);
          if ( ptr != v295 )
            free(ptr);
          v209 = *((_DWORD *)v309 + 2);
          v210 = (const void *)sub_1741D10((__int64)v309);
          v22 = sub_EB44D0(
                  *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                  *((_DWORD *)v309 + 1),
                  *((_DWORD *)v309 + 3),
                  v210,
                  v211,
                  v209);
          v310 = v22;
          goto LABEL_8;
        case 0x29:
          v216 = *(_QWORD *)(v11 + 24);
          v217 = *(_QWORD *)(v11 + 32);
          p_dest = (unsigned __int64)&dest;
          sub_1CE9DA0((__int64)&dest, (__int64 **)&v307, (__int64)&v309, v216, v217, v20, si128);
          v218 = (unsigned __int64 *)dest;
          ptr = v295;
          v315 = 0x600000000LL;
          v219 = (unsigned __int64 *)((char *)dest + 8 * v312.m128_u32[0]);
          if ( dest == v219 )
          {
            v277 = 0;
            v278 = v295;
            goto LABEL_231;
          }
          do
          {
            while ( 1 )
            {
              v220 = sub_1AC4880(*(_QWORD *)(*(_QWORD *)v307.m128_u64[0] + 744LL), *v309, *(_BYTE *)(v11 + 40), *v218);
              if ( v220 > 1 )
                break;
              if ( v219 == ++v218 )
                goto LABEL_230;
            }
            v221 = (unsigned int)v315;
            v222 = (void *)(v220 & 0xFFFFFFFFFFFFFFFELL);
            v223 = (unsigned int)v315 + 1LL;
            if ( v223 > HIDWORD(v315) )
            {
              src = v222;
              sub_2237220(p_ptr, v295, v223, 8);
              v221 = (unsigned int)v315;
              v222 = src;
            }
            ++v218;
            *((_QWORD *)ptr + v221) = v222;
            LODWORD(v315) = v315 + 1;
          }
          while ( v219 != v218 );
LABEL_230:
          v278 = ptr;
          v277 = (unsigned int)v315;
LABEL_231:
          v298 = v277;
          v224 = *(_BYTE *)(v11 + 40);
          v297 = v278;
          v310 = sub_1AC7380(
                   *(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL),
                   (__int64 *)v307.m128_u64[1],
                   v308,
                   *v309,
                   *((_DWORD *)v309 + 1),
                   *((_DWORD *)v309 + 3),
                   v224,
                   v278,
                   v298,
                   *((_DWORD *)v309 + 2));
          if ( ptr != v295 )
            free(ptr);
          v148 = dest;
          if ( dest == (void *)(p_dest + 16) )
            goto LABEL_22;
          goto LABEL_152;
        case 0x2A:
          if ( v318[0] != 17 )
          {
            if ( !*(_BYTE *)(v11 + 24) )
            {
              v203 = v323;
              v200 = v318;
              goto LABEL_268;
            }
            v197 = *(unsigned __int16 **)(v11 + 32);
            v198 = sub_C00A40((unsigned __int64)v197, v12, (__int64)v16, v17, v18);
            sub_1CE9030((__int64)p_ptr, v292, v198, 0, v197, 0, v20, si128);
            if ( !v316 )
            {
              v199 = v315 & 0xFFFFFFFFFFFFFFFELL;
              if ( (v315 & 0xFFFFFFFFFFFFFFFELL) != 0 )
              {
                v200 = v309;
                v201 = v309[144];
                v202 = (__int64)v309;
                if ( (_BYTE)v201 == 0xFF )
                  goto LABEL_210;
                if ( (_BYTE)v201 == 2 )
                {
                  *((_QWORD *)v309 + 2) = v199;
                  v251 = *((unsigned int *)v200 + 2);
                }
                else
                {
                  funcs_1576A39[v201]();
                  v202 = (__int64)v309;
LABEL_210:
                  *((_QWORD *)v200 + 2) = v199;
                  v200[144] = 2;
                  v200 = (_BYTE *)v202;
                  v203 = *(_BYTE *)(v202 + 144);
LABEL_268:
                  v251 = *((unsigned int *)v200 + 2);
                  if ( v200[1] == 42 && !v203 )
                  {
                    v252 = 0;
                    goto LABEL_271;
                  }
                  if ( v203 != 2 )
                    goto LABEL_368;
                }
                v252 = *((_QWORD *)v200 + 2);
LABEL_271:
                v22 = sub_EB3400(
                        *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                        *((_DWORD *)v200 + 1),
                        *((_DWORD *)v200 + 3),
                        v252,
                        v251,
                        v19);
                v310 = v22;
                goto LABEL_8;
              }
            }
            goto LABEL_22;
          }
          v254 = (unsigned __int16 **)(v11 + 32);
          ptr = v295;
          v315 = 0x600000000LL;
          v255 = v11 + 32 + 8LL * *(unsigned int *)(v11 + 28);
          if ( v11 + 32 == v255 )
          {
            v272 = 0;
            v271 = v295;
            v270 = v318;
          }
          else
          {
            for ( n = v292; ; n = (__int64 *)v307.m128_u64[0] )
            {
              v257 = sub_1CE88F0(n, *v254, v20, si128, (__int64)v16, v17, v18);
              if ( v257 > 1 )
              {
                v258 = sub_1AA8160(
                         *(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL),
                         *v309,
                         v309[1],
                         v257 & 0xFFFFFFFFFFFFFFFELL);
                if ( v258 > 1 )
                  sub_14B7B40((__int64)p_ptr, v258 & 0xFFFFFFFFFFFFFFFELL);
              }
              if ( (unsigned __int16 **)v255 == ++v254 )
                break;
            }
            v270 = v309;
            v271 = ptr;
            v272 = (unsigned int)v315;
          }
          sub_17441C0((__int64)v270, v271, v272, 0);
          v273 = *((_DWORD *)v309 + 2);
          v274 = (const void *)sub_1741D10((__int64)v309);
          v276 = sub_EB34B0(
                   *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                   *((_DWORD *)v309 + 1),
                   *((_DWORD *)v309 + 3),
                   v274,
                   v275,
                   v273);
LABEL_300:
          v22 = v276;
          v310 = v276;
          if ( ptr != v295 )
          {
            free(ptr);
            v22 = v310;
          }
          goto LABEL_8;
        case 0x2B:
          v22 = sub_EB2870(*(_QWORD **)(*v292 + 248), v319, v320, v17, v18, v19);
          v310 = v22;
          goto LABEL_8;
        case 0x2C:
          ptr = v295;
          v188 = *(unsigned __int16 ***)(v11 + 24);
          v315 = 0x600000000LL;
          v189 = &v188[*(_QWORD *)(v11 + 32)];
          if ( v188 == v189 )
          {
            v285 = v295;
            v286 = 0;
            v287 = v318;
          }
          else
          {
            for ( ii = v292; ; ii = (__int64 *)v307.m128_u64[0] )
            {
              v191 = *v188;
              v192 = sub_1CE88F0(ii, *v188, v20, si128, (__int64)v16, v17, v18);
              if ( v192 <= 1 )
                goto LABEL_151;
              p_dest = v192 & 0xFFFFFFFFFFFFFFFELL;
              v193 = *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 744LL);
              v194 = sub_EEB7E0(v192 & 0xFFFFFFFFFFFFFFFELL, (__int64)v191, *(double *)v20.m128_u64);
              v195 = sub_1AA2500(v193, 20, v309[1], v194, p_dest);
              v196 = sub_1ACA710(
                       *(__int64 **)(*(_QWORD *)v307.m128_u64[0] + 744LL),
                       (void **)(v195 & 0xFFFFFFFFFFFFFFFELL),
                       *(double *)v20.m128_u64);
              if ( (unsigned __int64)v196 <= 1 )
                goto LABEL_151;
              ++v188;
              sub_14B7B40((__int64)p_ptr, (unsigned __int64)v196 & 0xFFFFFFFFFFFFFFFELL);
              if ( v189 == v188 )
                break;
            }
            v287 = v309;
            v285 = ptr;
            v286 = (unsigned int)v315;
          }
          sub_17440A0((__int64)v287, v285, v286);
          v288 = *((_DWORD *)v309 + 2);
          v289 = (const void *)sub_1741CC0((__int64)v309);
          v276 = sub_EB3580(
                   *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                   *((_DWORD *)v309 + 1),
                   *((_DWORD *)v309 + 3),
                   v289,
                   v290,
                   v288);
          goto LABEL_300;
        case 0x2D:
          v204 = p_ptr;
          sub_1CE9DA0(
            (__int64)p_ptr,
            (__int64 **)&v307,
            (__int64)&v309,
            *(_QWORD *)(v11 + 24),
            *(_QWORD *)(v11 + 32),
            v20,
            si128);
          sub_1CB6B60((__int64)v318, (__int64)v204);
          if ( ptr != v295 )
            free(ptr);
          v205 = *((_DWORD *)v309 + 2);
          v206 = (const void *)sub_1741D10((__int64)v309);
          v22 = sub_EB4110(
                  *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                  *((_DWORD *)v309 + 1),
                  *((_DWORD *)v309 + 3),
                  v206,
                  v207,
                  v205);
          v310 = v22;
          goto LABEL_8;
        case 0x2E:
          if ( *(_QWORD *)(v11 + 32) )
          {
            v141 = sub_1CE88F0(v292, **(unsigned __int16 ***)(v11 + 24), v20, si128, (__int64)v16, v17, v18);
            if ( v141 <= 1 )
              goto LABEL_22;
            v142 = sub_1AA2500(
                     *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 744LL),
                     20,
                     *(_BYTE *)(v11 + 8),
                     *(_DWORD *)(v11 + 12),
                     v141 & 0xFFFFFFFFFFFFFFFELL);
            if ( v142 <= 1 )
              goto LABEL_22;
            ptr = (void *)(v142 & 0xFFFFFFFFFFFFFFFELL);
            sub_17440A0((__int64)v309, p_ptr, 1);
            v143 = v309;
          }
          else
          {
            v143 = v318;
          }
          v239 = (unsigned __int8)v143[1];
          v240 = *((unsigned int *)v143 + 2);
          v241 = v143[144];
          if ( (unsigned __int8)v239 > 0x31u || (v242 = 0x3400000000001LL, !_bittest64(&v242, v239)) || v241 )
          {
            if ( v241 != 3 )
              goto LABEL_368;
            v19 = *((unsigned int *)v143 + 6);
            v243 = 0;
            if ( (_DWORD)v19 )
            {
              LODWORD(p_dest) = *((_DWORD *)v143 + 2);
              v244 = (__int64 *)sub_1741CC0((__int64)v143);
              v143 = v309;
              v240 = (unsigned int)p_dest;
              v243 = *v244;
            }
          }
          else
          {
            v243 = 0;
          }
          v22 = sub_EB2E40(
                  *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                  *((_DWORD *)v143 + 1),
                  *((_DWORD *)v143 + 3),
                  v243,
                  v240,
                  v19);
          v310 = v22;
          goto LABEL_8;
        case 0x2F:
          v131 = nullptr;
          if ( *(_QWORD *)(v11 + 32) )
            v131 = **(unsigned __int16 ***)(v11 + 24);
          v132 = sub_1CE88F0(v292, v131, v20, si128, (__int64)v16, v17, v18);
          if ( v132 <= 1 )
            goto LABEL_22;
          v133 = sub_1AA2500(
                   *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 744LL),
                   20,
                   *(_BYTE *)(v11 + 8),
                   *(_DWORD *)(v11 + 12),
                   v132 & 0xFFFFFFFFFFFFFFFELL);
          if ( v133 <= 1 )
            goto LABEL_22;
          ptr = (void *)(v133 & 0xFFFFFFFFFFFFFFFELL);
          sub_17440A0((__int64)v309, p_ptr, 1);
          v134 = *((_DWORD *)v309 + 2);
          v135 = (__int64 *)sub_1741CC0((__int64)v309);
          v22 = sub_EB2FE0(
                  *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                  *((_DWORD *)v309 + 1),
                  *((_DWORD *)v309 + 3),
                  *v135,
                  v134,
                  v136);
          v310 = v22;
          goto LABEL_8;
        case 0x30:
          if ( !*(_DWORD *)(v11 + 20) )
          {
            v103 = v318;
LABEL_286:
            v259 = v103[144];
            v260 = *((unsigned int *)v103 + 2);
            if ( v259 == -1 )
              goto LABEL_368;
            if ( v259 )
            {
              if ( v259 != 5 )
                goto LABEL_368;
              v261 = *((unsigned int *)v103 + 6);
              v262 = *((_QWORD *)v103 + 2);
              v303 = *((void **)v103 + 4);
              v304 = *((unsigned int *)v103 + 10);
            }
            else
            {
              v303 = nullptr;
              v261 = 0;
              v262 = 0;
              v304 = 0;
            }
            v310 = sub_EB3760(
                     *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                     *((_DWORD *)v103 + 1),
                     *((_DWORD *)v103 + 3),
                     v262,
                     v261,
                     v260,
                     v303,
                     v304);
            v22 = v310;
            goto LABEL_8;
          }
          ptr = v295;
          v315 = 0x600000000LL;
          v95 = *(unsigned __int16 ***)(v11 + 24);
          v96 = (__int64)*v95;
          if ( !*v95 )
            goto LABEL_99;
          v97 = sub_1CE88F0(v292, *v95, v20, si128, (__int64)v16, v17, v18);
          if ( v97 > 1 )
          {
            v98 = sub_1AA2500(
                    *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 744LL),
                    20,
                    *(_BYTE *)(v11 + 8),
                    *(_DWORD *)(v11 + 12),
                    v97 & 0xFFFFFFFFFFFFFFFELL);
            if ( v98 > 1 )
            {
              v96 = v98 & 0xFFFFFFFFFFFFFFFELL;
              v95 = *(unsigned __int16 ***)(v11 + 24);
LABEL_99:
              v99 = (__int64)(v95 + 1);
              v100 = v95 + 1;
              p_dest = (unsigned __int64)&v95[*(_QWORD *)(v11 + 32)];
              if ( v95 + 1 == (unsigned __int16 **)p_dest )
              {
LABEL_103:
                sub_18C5220((__int64)v309, v96, *(_DWORD *)(v11 + 40), (__int64)p_ptr);
                if ( ptr != v295 )
                  free(ptr);
                v103 = v309;
                goto LABEL_286;
              }
              while ( 1 )
              {
                v101 = sub_1CE88F0((__int64 *)v307.m128_u64[0], *v100, v20, si128, v99, v17, v18);
                if ( v101 <= 1 )
                  break;
                v102 = sub_1AA2500(
                         *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 744LL),
                         20,
                         *(_BYTE *)(v11 + 8),
                         *(_DWORD *)(v11 + 12),
                         v101 & 0xFFFFFFFFFFFFFFFELL);
                if ( v102 <= 1 )
                  break;
                ++v100;
                sub_14B7B40((__int64)p_ptr, v102 & 0xFFFFFFFFFFFFFFFELL);
                if ( (unsigned __int16 **)p_dest == v100 )
                  goto LABEL_103;
              }
            }
          }
LABEL_151:
          v148 = ptr;
          if ( ptr == v295 )
            goto LABEL_22;
          goto LABEL_152;
        case 0x31:
          if ( *(_QWORD *)(v11 + 32) )
          {
            v185 = sub_1CE88F0(v292, **(unsigned __int16 ***)(v11 + 24), v20, si128, (__int64)v16, v17, v18);
            if ( v185 <= 1 )
              goto LABEL_22;
            v186 = sub_1AA2500(
                     *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 744LL),
                     20,
                     *(_BYTE *)(v11 + 8),
                     *(_DWORD *)(v11 + 12),
                     v185 & 0xFFFFFFFFFFFFFFFELL);
            if ( v186 <= 1 )
              goto LABEL_22;
            ptr = (void *)(v186 & 0xFFFFFFFFFFFFFFFELL);
            sub_17440A0((__int64)v309, p_ptr, 1);
            v187 = v309;
          }
          else
          {
            v187 = v318;
          }
          v233 = (unsigned __int8)v187[1];
          v234 = *((unsigned int *)v187 + 2);
          v235 = v187[144];
          if ( (unsigned __int8)v233 > 0x31u || (v236 = 0x3400000000001LL, !_bittest64(&v236, v233)) || v235 )
          {
            if ( v235 != 3 )
              goto LABEL_368;
            v237 = 0;
            if ( *((_DWORD *)v187 + 6) )
            {
              LODWORD(p_dest) = *((_DWORD *)v187 + 2);
              v238 = (__int64 *)sub_1741CC0((__int64)v187);
              v187 = v309;
              v234 = (unsigned int)p_dest;
              v237 = *v238;
            }
          }
          else
          {
            v237 = 0;
          }
          v22 = sub_EB2D70(
                  *(_QWORD **)(*(_QWORD *)v307.m128_u64[0] + 248LL),
                  *((_DWORD *)v187 + 1),
                  *((_DWORD *)v187 + 3),
                  v237,
                  v234,
                  v19);
          v310 = v22;
          goto LABEL_8;
        default:
          JUMPOUT(0x2EAB40);
      }
    }
  }
  return a1;
}
