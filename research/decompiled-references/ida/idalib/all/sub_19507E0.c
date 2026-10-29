__int64 __fastcall sub_19507E0(
        unsigned int *a1,
        __int64 *a2,
        char a3,
        __int64 *a4,
        __int64 a5,
        double a6,
        __m128 si128)
{
  unsigned int *v7; // rbx
  __int64 v8; // rsi
  __int64 *v9; // rbp
  __int64 v10; // r13
  unsigned __int8 *v11; // r12
  __int64 v12; // r15
  unsigned int v13; // eax
  char v14; // dl
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm0
  unsigned __int64 v22; // r13
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  char v25; // r13
  unsigned __int8 *v26; // rax
  bool v27; // zf
  __int64 v28; // r8
  int v29; // edx
  int v30; // ecx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned int v33; // r13d
  __int64 *v34; // rax
  __int64 v35; // r9
  unsigned __int16 **v36; // rcx
  __int64 v37; // r8
  void **v38; // r15
  unsigned __int8 v39; // dl
  const void *v40; // rcx
  __int64 v41; // r8
  unsigned __int16 **v42; // rcx
  __int64 v43; // r8
  char *v44; // r15
  __int64 v45; // r13
  __int64 v46; // rax
  __int64 v47; // r13
  char *v48; // r13
  _QWORD *v49; // rbx
  _QWORD *v50; // r13
  _BYTE *v51; // rsi
  signed __int64 v52; // r13
  const void *v53; // rcx
  __int64 v54; // r8
  unsigned __int64 v55; // rax
  void *v56; // rdi
  unsigned __int16 **v57; // rcx
  __int64 v58; // r8
  void **v59; // r15
  unsigned __int8 v60; // dl
  const void *v61; // rcx
  __int64 v62; // r8
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  unsigned int v65; // r13d
  __int64 *v66; // rax
  __int64 v67; // r9
  char *v68; // r15
  __int64 v69; // r13
  __int64 v70; // rax
  __int64 v71; // r13
  char *v72; // r13
  _QWORD *v73; // rbx
  _QWORD *v74; // r13
  _BYTE *v75; // rsi
  signed __int64 v76; // r13
  const void *v77; // rcx
  __int64 v78; // r8
  unsigned __int64 v79; // rax
  unsigned __int16 **v80; // rax
  void *v81; // r13
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rax
  unsigned __int16 **v84; // r13
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rax
  unsigned __int8 *v87; // rax
  unsigned __int16 **v88; // rcx
  __int64 v89; // r8
  void **v90; // r15
  unsigned __int8 v91; // dl
  const void *v92; // rcx
  __int64 v93; // r8
  __int64 *v94; // rdi
  int v95; // r10d
  unsigned int v96; // r13d
  __int64 v97; // rbx
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // rcx
  char v101; // r15
  unsigned __int64 v102; // rax
  __int64 v103; // rcx
  unsigned __int64 v104; // rdx
  unsigned __int16 **v105; // rcx
  __int64 v106; // r8
  void **v107; // r15
  unsigned __int8 v108; // dl
  const void *v109; // rcx
  __int64 v110; // r8
  unsigned __int16 *v111; // r13
  unsigned int v112; // eax
  __int64 v113; // r9
  unsigned __int64 v114; // r13
  unsigned __int8 *v115; // r11
  __int64 v116; // rax
  unsigned __int8 *v117; // r15
  __int64 v118; // r8
  unsigned __int8 v119; // al
  __int64 v120; // rcx
  unsigned __int64 v121; // rax
  unsigned __int64 v122; // rax
  unsigned int v123; // r13d
  __int64 *v124; // rax
  __int64 v125; // r9
  unsigned __int16 **v126; // rcx
  __int64 v127; // r8
  void **v128; // r15
  unsigned __int8 v129; // dl
  const void *v130; // rcx
  __int64 v131; // r8
  unsigned __int64 v132; // rax
  unsigned __int64 v133; // rax
  unsigned __int8 *v134; // rdi
  unsigned __int16 **v135; // r13
  __int64 *i; // rdi
  unsigned __int64 v137; // rax
  unsigned __int64 v138; // rax
  unsigned __int64 v139; // rax
  unsigned __int8 *v140; // rdi
  unsigned __int16 **v141; // rcx
  __int64 v142; // r8
  char *v143; // r15
  __int64 v144; // r13
  __int64 v145; // rax
  __int64 v146; // r13
  char *v147; // r13
  _QWORD *v148; // rbx
  _QWORD *v149; // r13
  _BYTE *v150; // rsi
  signed __int64 v151; // r13
  const void *v152; // rcx
  __int64 v153; // r8
  unsigned __int64 v154; // rax
  unsigned __int16 *v155; // rsi
  __int64 v156; // rax
  __int64 v157; // rdx
  __int64 v158; // r13
  unsigned int v159; // eax
  __int64 v160; // rax
  __int64 v161; // rax
  unsigned __int8 *v162; // r11
  unsigned __int8 v163; // r15
  unsigned __int64 v164; // r13
  __int64 v165; // rax
  unsigned __int8 *v166; // rdx
  __int64 v167; // r9
  unsigned __int64 v168; // rax
  unsigned __int64 v169; // rax
  unsigned __int8 *v170; // rdi
  unsigned __int16 **v171; // r13
  unsigned __int16 **v172; // r15
  __int64 *k; // rdi
  unsigned __int64 v174; // rax
  unsigned int v175; // eax
  unsigned __int64 v176; // rax
  unsigned __int16 *v177; // r13
  unsigned int v178; // eax
  unsigned __int64 v179; // r15
  unsigned __int8 *v180; // r13
  __int64 v181; // rax
  unsigned __int8 *v182; // r11
  unsigned __int8 v183; // al
  unsigned __int16 **v184; // rcx
  __int64 v185; // r8
  void **v186; // r15
  unsigned __int8 v187; // dl
  const void *v188; // rcx
  __int64 v189; // r8
  unsigned __int16 **v190; // rcx
  __int64 v191; // r8
  void **v192; // r15
  unsigned __int8 v193; // dl
  const void *v194; // rcx
  __int64 v195; // r8
  unsigned __int16 **v196; // rcx
  __int64 v197; // r8
  void **v198; // r15
  unsigned __int8 v199; // dl
  const void *v200; // rcx
  __int64 v201; // r8
  unsigned __int16 **v202; // rcx
  __int64 v203; // r8
  char *v204; // r13
  __int64 v205; // rbp
  unsigned __int8 *v206; // r15
  unsigned int *v207; // r12
  char *v208; // rbx
  unsigned __int64 v209; // rax
  __int64 v210; // rcx
  unsigned __int64 v211; // rax
  unsigned __int64 v212; // rdx
  unsigned __int8 *v213; // rax
  void *v214; // r9
  __int64 v215; // r8
  _BYTE *v216; // rdx
  __int64 v217; // rsi
  __int64 v218; // rcx
  int v219; // r9d
  __int64 v220; // rdi
  void *v221; // rsi
  __int64 v222; // rdx
  int v223; // edx
  unsigned __int64 v224; // rdx
  __int64 v225; // r8
  unsigned __int8 v226; // al
  __int64 v227; // rcx
  __int64 *v228; // rax
  unsigned __int64 v229; // rdx
  __int64 v230; // r8
  unsigned __int8 v231; // al
  __int64 v232; // rcx
  __int64 *v233; // rax
  unsigned __int64 v234; // rdx
  __int64 v235; // r8
  unsigned __int8 v236; // al
  __int64 v237; // rcx
  __int64 *v238; // rax
  __int64 v239; // r8
  __int64 v240; // rcx
  __int64 v241; // rcx
  __int64 v242; // rcx
  __int64 v243; // rcx
  unsigned __int64 v244; // rax
  __int64 v245; // r13
  unsigned __int16 **v246; // r15
  __int64 *j; // rdi
  unsigned __int64 v248; // rax
  unsigned __int64 v249; // rax
  unsigned __int8 v250; // dl
  __int64 v251; // r9
  __int64 v252; // r8
  __int64 v253; // rcx
  unsigned __int64 v254; // rax
  unsigned int v255; // r13d
  __int64 *v256; // rax
  __int64 v257; // r9
  unsigned __int8 *v258; // rdi
  void *v259; // rsi
  __int64 v260; // rdx
  unsigned int v261; // r13d
  const void *v262; // rax
  __int64 v263; // rdx
  unsigned __int64 v264; // rax
  void *v265; // rsi
  __int64 v266; // rdx
  unsigned __int8 *v267; // rdi
  unsigned int v268; // r13d
  const void *v269; // rax
  __int64 v270; // rdx
  void *v271; // rsi
  __int64 v272; // rdx
  unsigned __int8 *v273; // rdi
  unsigned int v274; // r13d
  const void *v275; // rax
  __int64 v276; // rdx
  __int64 v277; // [rsp-28h] [rbp-2A0h]
  __int64 v278; // [rsp-18h] [rbp-290h]
  void *p_dest; // [rsp+8h] [rbp-270h] BYREF
  __int64 *v280; // [rsp+10h] [rbp-268h]
  char v281; // [rsp+1Fh] [rbp-259h]
  __int64 *v282; // [rsp+20h] [rbp-258h]
  char *v283; // [rsp+28h] [rbp-250h]
  void **p_ptr; // [rsp+30h] [rbp-248h]
  _QWORD *v285; // [rsp+38h] [rbp-240h]
  void *v286; // [rsp+40h] [rbp-238h]
  __int64 v287; // [rsp+48h] [rbp-230h]
  __int64 v288; // [rsp+50h] [rbp-228h]
  __int64 v289; // [rsp+58h] [rbp-220h]
  _BYTE *v290; // [rsp+60h] [rbp-218h]
  __int64 v291; // [rsp+68h] [rbp-210h]
  void *src; // [rsp+70h] [rbp-208h]
  unsigned int *v293; // [rsp+78h] [rbp-200h]
  void *v294; // [rsp+80h] [rbp-1F8h]
  __int64 v295; // [rsp+88h] [rbp-1F0h]
  char v296[8]; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v297; // [rsp+98h] [rbp-1E0h]
  char v298; // [rsp+A0h] [rbp-1D8h]
  __m128 v299; // [rsp+B0h] [rbp-1C8h] BYREF
  __int64 v300; // [rsp+C0h] [rbp-1B8h]
  unsigned __int8 *v301; // [rsp+C8h] [rbp-1B0h] BYREF
  unsigned __int64 v302; // [rsp+D0h] [rbp-1A8h]
  void *v303; // [rsp+E0h] [rbp-198h] BYREF
  unsigned int v304; // [rsp+E8h] [rbp-190h]
  void *dest; // [rsp+120h] [rbp-158h] BYREF
  __m128 v306; // [rsp+128h] [rbp-150h]
  _BYTE v307[40]; // [rsp+138h] [rbp-140h] BYREF
  void *ptr; // [rsp+160h] [rbp-118h] BYREF
  __int64 v309; // [rsp+168h] [rbp-110h]
  char v310; // [rsp+170h] [rbp-108h] BYREF
  _BYTE v311[4]; // [rsp+1A0h] [rbp-D8h] BYREF
  unsigned int v312; // [rsp+1A4h] [rbp-D4h]
  unsigned int v313; // [rsp+1A8h] [rbp-D0h]
  unsigned int v314; // [rsp+1ACh] [rbp-CCh]
  char v315; // [rsp+1B0h] [rbp-C8h]
  unsigned __int8 v316; // [rsp+230h] [rbp-48h]

  v7 = a1;
  *(_QWORD *)a1 = a1 + 4;
  v280 = a2;
  *((_QWORD *)a1 + 1) = 0x600000000LL;
  v8 = (__int64)&a4[a5];
  v281 = a3;
  v285 = a1 + 4;
  v282 = (__int64 *)v8;
  if ( a4 != (__int64 *)v8 )
  {
    p_dest = a1 + 4;
    v9 = a4;
    v10 = 0;
    p_ptr = &ptr;
    v11 = v311;
    v283 = &v310;
    while ( 1 )
    {
      v12 = *v9;
      v13 = *(_DWORD *)(*v9 + 12);
      v14 = *(_BYTE *)(*v9 + 8);
      v316 = 0;
      v311[0] = v281;
      v312 = v13;
      v15 = *(_DWORD *)(v12 + 16);
      v311[1] = v14;
      v314 = 0;
      v313 = v15;
      if ( (unsigned __int8)sub_EADB30(v12) )
        v314 = *(_DWORD *)(v12 + 20);
      v300 = v10;
      v301 = v11;
      v20 = _mm_loadh_ps((const double *)&p_dest);
      v302 = 0;
      v299 = v20;
      switch ( *(_BYTE *)(v12 + 8) )
      {
        case 0:
          if ( *(_QWORD *)(v12 + 32) )
          {
            v8 = **(_QWORD **)(v12 + 24);
            v138 = sub_1944E10(v280, (unsigned __int16 *)v8, v20, si128);
            if ( v138 <= 1 )
              goto LABEL_22;
            v8 = 20;
            v139 = sub_1AA2500(
                     *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                     20,
                     *(unsigned __int8 *)(v12 + 8),
                     *(unsigned int *)(v12 + 12),
                     v138 & 0xFFFFFFFFFFFFFFFELL);
            if ( v139 <= 1 )
              goto LABEL_22;
            ptr = (void *)(v139 & 0xFFFFFFFFFFFFFFFELL);
            sub_17440A0((__int64)v301, p_ptr, 1);
            v140 = v301;
          }
          else
          {
            v140 = v11;
          }
          v234 = v140[1];
          v235 = *((unsigned int *)v140 + 2);
          v236 = v140[144];
          if ( (unsigned __int8)v234 > 0x31u || (v241 = 0x3400000000001LL, !_bittest64(&v241, v234)) || v236 )
          {
            if ( v236 != 3 )
              goto LABEL_386;
            v237 = 0;
            if ( *((_DWORD *)v140 + 6) )
            {
              LODWORD(p_dest) = *((_DWORD *)v140 + 2);
              v238 = (__int64 *)sub_1741CC0((__int64)v140);
              v140 = v301;
              v235 = (unsigned int)p_dest;
              v237 = *v238;
            }
          }
          else
          {
            v237 = 0;
          }
          v8 = *((unsigned int *)v140 + 1);
          v22 = sub_EB30B0(
                  *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                  v8,
                  *((_DWORD *)v140 + 3),
                  v237,
                  v235,
                  v19);
          v302 = v22;
          goto LABEL_8;
        case 1:
          v141 = *(unsigned __int16 ***)(v12 + 24);
          v142 = *(_QWORD *)(v12 + 32);
          src = &v303;
          sub_19500B0((__int64)&v303, (__int64 **)&v299, &v301, v141, v142, v20, si128);
          v143 = (char *)v303;
          v144 = 8LL * v304;
          p_dest = (char *)v303 + v144;
          v145 = v144 >> 3;
          v146 = v144 >> 5;
          if ( !v146 )
            goto LABEL_328;
          v147 = (char *)v303 + 32 * v146;
          do
          {
            if ( (unsigned __int8)sub_1AA3DE0(*(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL), 1, *(_QWORD *)v143) )
              goto LABEL_173;
            if ( (unsigned __int8)sub_1AA3DE0(
                                    *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                                    1,
                                    *((_QWORD *)v143 + 1)) )
            {
              v143 += 8;
              goto LABEL_173;
            }
            if ( (unsigned __int8)sub_1AA3DE0(
                                    *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                                    1,
                                    *((_QWORD *)v143 + 2)) )
            {
              v143 += 16;
              goto LABEL_173;
            }
            if ( (unsigned __int8)sub_1AA3DE0(
                                    *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                                    1,
                                    *((_QWORD *)v143 + 3)) )
            {
              v143 += 24;
              goto LABEL_173;
            }
            v143 += 32;
          }
          while ( v147 != v143 );
          v145 = ((_BYTE *)p_dest - v143) >> 3;
LABEL_328:
          if ( v145 == 2 )
            goto LABEL_361;
          if ( v145 != 3 )
          {
            if ( v145 != 1 )
            {
LABEL_331:
              v143 = (char *)p_dest;
              goto LABEL_180;
            }
            goto LABEL_363;
          }
          if ( !(unsigned __int8)sub_1AA3DE0(*(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL), 1, *(_QWORD *)v143) )
          {
            v143 += 8;
LABEL_361:
            if ( !(unsigned __int8)sub_1AA3DE0(*(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL), 1, *(_QWORD *)v143) )
            {
              v143 += 8;
LABEL_363:
              if ( !(unsigned __int8)sub_1AA3DE0(*(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL), 1, *(_QWORD *)v143) )
                goto LABEL_331;
            }
          }
LABEL_173:
          if ( p_dest != v143 && p_dest != v143 + 8 )
          {
            v293 = v7;
            v148 = v143 + 8;
            v149 = p_dest;
            do
            {
              if ( !(unsigned __int8)sub_1AA3DE0(*(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL), 1, *v148) )
              {
                v143 += 8;
                *((_QWORD *)v143 - 1) = *v148;
              }
              ++v148;
            }
            while ( v149 != v148 );
            v7 = v293;
          }
LABEL_180:
          v150 = v303;
          v151 = (_BYTE *)v303 + 8 * v304 - (_BYTE *)p_dest;
          if ( p_dest != (char *)v303 + 8 * v304 )
          {
            memmove(v143, p_dest, (_BYTE *)v303 + 8 * v304 - (_BYTE *)p_dest);
            v150 = v303;
          }
          v304 = (&v143[v151] - v150) >> 3;
          sub_17441C0((__int64)v301, v150, v304, 0);
          if ( v301[1] == 41 )
          {
            if ( v301[144] != 7 )
              goto LABEL_386;
            v152 = *((const void **)v301 + 3);
            v153 = *((unsigned int *)v301 + 8);
          }
          else
          {
            if ( v301[144] != 4 )
              goto LABEL_386;
            v152 = *((const void **)v301 + 2);
            v153 = *((unsigned int *)v301 + 6);
          }
          v8 = *((unsigned int *)v301 + 1);
          v154 = sub_EB43E0(
                   *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                   v8,
                   *((_DWORD *)v301 + 3),
                   v152,
                   v153,
                   *((unsigned int *)v301 + 2));
          v56 = v303;
          v22 = v154;
          v302 = v154;
          if ( v303 == (char *)src + 16 )
            goto LABEL_8;
LABEL_161:
          free(v56);
          goto LABEL_22;
        case 2:
          v8 = v312;
          v22 = sub_EB27F0(*(_QWORD **)(*v280 + 248), v312, v313, v17, v18, v19);
          v302 = v22;
          goto LABEL_8;
        case 4:
          v155 = nullptr;
          if ( *(_QWORD *)(v12 + 32) )
            v155 = **(unsigned __int16 ***)(v12 + 24);
          v156 = sub_1944E10(v280, v155, v20, si128);
          v157 = *(_QWORD *)v299.m128_u64[0];
          p_dest = (void *)(v156 & 0xFFFFFFFFFFFFFFFELL);
          v158 = *(_QWORD *)(v157 + 744);
          v159 = sub_EEB7E0(v156 & 0xFFFFFFFFFFFFFFFELL, (__int64)v155, *(double *)v20.m128_u64);
          v160 = sub_1AA2500(v158, 20, v301[1], v159, p_dest);
          v161 = sub_1ACA320(*(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL), v160 & 0xFFFFFFFFFFFFFFFELL);
          v162 = v301;
          v163 = *(_BYTE *)(v12 + 48);
          v164 = v161 & 0xFFFFFFFFFFFFFFFELL;
          v165 = v301[144];
          v166 = v301;
          if ( (_BYTE)v165 == 0xFF )
            goto LABEL_192;
          if ( (_BYTE)v165 == 8 )
          {
            v301[16] = v163;
            v167 = *((unsigned int *)v162 + 2);
            *((_QWORD *)v162 + 3) = v164;
          }
          else
          {
            p_dest = v301;
            funcs_1576A39[v165]();
            v162 = v301;
            v166 = (unsigned __int8 *)p_dest;
LABEL_192:
            v166[144] = 8;
            v167 = *((unsigned int *)v162 + 2);
            v166[16] = v163;
            *((_QWORD *)v166 + 3) = v164;
            if ( v162[144] != 8 )
LABEL_386:
              abort();
          }
          v8 = *((unsigned int *)v162 + 1);
          v22 = sub_EB3320(
                  *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                  v8,
                  *((_DWORD *)v162 + 3),
                  v162[16],
                  *((_QWORD *)v162 + 3),
                  v167);
          v302 = v22;
          goto LABEL_8;
        case 5:
        case 6:
        case 7:
          v8 = v12;
          sub_19501A0((__int64)&v299, v12, v20, si128);
          v22 = v302;
          goto LABEL_8;
        case 8:
        case 9:
        case 0xA:
          v8 = v12;
          sub_1950330((__int64)&v299, v12, v20, si128);
          v22 = v302;
          goto LABEL_8;
        case 0xB:
        case 0xC:
        case 0xD:
          v8 = v12;
          sub_19504C0((__int64)&v299, v12, v20, si128);
          v22 = v302;
          goto LABEL_8;
        case 0xE:
        case 0xF:
        case 0x10:
          v8 = v12;
          sub_1950650((__int64)&v299, v12, v20, si128);
          v22 = v302;
          goto LABEL_8;
        case 0x11:
          v25 = *(_BYTE *)(v12 + 24);
          if ( v316 == 0xFF )
          {
            v26 = v11;
          }
          else
          {
            if ( v316 == 1 )
            {
              v315 = *(_BYTE *)(v12 + 24);
              v28 = v313;
              v26 = v11;
              v30 = v314;
              v29 = v312;
              goto LABEL_27;
            }
            funcs_1576A39[v316]();
            v26 = v301;
          }
          v316 = 1;
          v27 = v26[144] == 1;
          v28 = *((unsigned int *)v26 + 2);
          v29 = *((_DWORD *)v26 + 1);
          v315 = v25;
          v30 = *((_DWORD *)v26 + 3);
          if ( !v27 )
            goto LABEL_386;
LABEL_27:
          v8 = v26[16];
          v22 = sub_EB2AF0(*(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL), v8, v29, v30, v28, v19);
          v302 = v22;
          goto LABEL_8;
        case 0x12:
          v8 = 0;
          if ( *(_QWORD *)(v12 + 32) )
            v8 = **(_QWORD **)(v12 + 24);
          v31 = sub_1944E10(v280, (unsigned __int16 *)v8, v20, si128);
          if ( v31 <= 1 )
            goto LABEL_22;
          v8 = 20;
          v32 = sub_1AA2500(
                  *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                  20,
                  *(unsigned __int8 *)(v12 + 8),
                  *(unsigned int *)(v12 + 12),
                  v31 & 0xFFFFFFFFFFFFFFFELL);
          if ( v32 <= 1 )
            goto LABEL_22;
          ptr = (void *)(v32 & 0xFFFFFFFFFFFFFFFELL);
          sub_17440A0((__int64)v301, p_ptr, 1);
          v33 = *((_DWORD *)v301 + 2);
          v34 = (__int64 *)sub_1741CC0((__int64)v301);
          v8 = *((unsigned int *)v301 + 1);
          v22 = sub_EB3250(*(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL), v8, *((_DWORD *)v301 + 3), *v34, v33, v35);
          v302 = v22;
          goto LABEL_8;
        case 0x13:
          v36 = *(unsigned __int16 ***)(v12 + 24);
          v37 = *(_QWORD *)(v12 + 32);
          v38 = p_ptr;
          sub_19500B0((__int64)p_ptr, (__int64 **)&v299, &v301, v36, v37, v20, si128);
          sub_18C5320((__int64)v11, (__int64)v38);
          if ( ptr != v283 )
            free(ptr);
          v39 = v301[144];
          if ( v301[1] == 41 )
          {
            if ( v39 != 7 )
              goto LABEL_386;
            v40 = *((const void **)v301 + 3);
            v41 = *((unsigned int *)v301 + 8);
          }
          else
          {
            if ( v39 != 4 )
              goto LABEL_386;
            v40 = *((const void **)v301 + 2);
            v41 = *((unsigned int *)v301 + 6);
          }
          v8 = *((unsigned int *)v301 + 1);
          v22 = sub_EB4020(
                  *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                  v8,
                  *((_DWORD *)v301 + 3),
                  v40,
                  v41,
                  *((unsigned int *)v301 + 2));
          v302 = v22;
          goto LABEL_8;
        case 0x14:
          v42 = *(unsigned __int16 ***)(v12 + 24);
          v43 = *(_QWORD *)(v12 + 32);
          p_dest = &dest;
          sub_19500B0((__int64)&dest, (__int64 **)&v299, &v301, v42, v43, v20, si128);
          v44 = (char *)dest;
          v45 = 8LL * v306.m128_u32[0];
          src = (char *)dest + v45;
          v46 = v45 >> 3;
          v47 = v45 >> 5;
          if ( !v47 )
            goto LABEL_338;
          v48 = (char *)dest + 32 * v47;
          do
          {
            if ( (unsigned __int8)sub_1AA3DE0(*(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL), 20, *(_QWORD *)v44) )
              goto LABEL_46;
            if ( (unsigned __int8)sub_1AA3DE0(
                                    *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                                    20,
                                    *((_QWORD *)v44 + 1)) )
            {
              v44 += 8;
              goto LABEL_46;
            }
            if ( (unsigned __int8)sub_1AA3DE0(
                                    *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                                    20,
                                    *((_QWORD *)v44 + 2)) )
            {
              v44 += 16;
              goto LABEL_46;
            }
            if ( (unsigned __int8)sub_1AA3DE0(
                                    *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                                    20,
                                    *((_QWORD *)v44 + 3)) )
            {
              v44 += 24;
              goto LABEL_46;
            }
            v44 += 32;
          }
          while ( v48 != v44 );
          v46 = ((_BYTE *)src - v44) >> 3;
LABEL_338:
          if ( v46 == 2 )
            goto LABEL_373;
          if ( v46 != 3 )
          {
            if ( v46 != 1 )
            {
LABEL_341:
              v44 = (char *)src;
              goto LABEL_53;
            }
            goto LABEL_375;
          }
          if ( !(unsigned __int8)sub_1AA3DE0(*(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL), 20, *(_QWORD *)v44) )
          {
            v44 += 8;
LABEL_373:
            if ( !(unsigned __int8)sub_1AA3DE0(*(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL), 20, *(_QWORD *)v44) )
            {
              v44 += 8;
LABEL_375:
              if ( !(unsigned __int8)sub_1AA3DE0(*(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL), 20, *(_QWORD *)v44) )
                goto LABEL_341;
            }
          }
LABEL_46:
          if ( src != v44 && src != v44 + 8 )
          {
            v293 = v7;
            v49 = v44 + 8;
            v50 = src;
            do
            {
              if ( !(unsigned __int8)sub_1AA3DE0(*(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL), 20, *v49) )
              {
                v44 += 8;
                *((_QWORD *)v44 - 1) = *v49;
              }
              ++v49;
            }
            while ( v50 != v49 );
            v7 = v293;
          }
LABEL_53:
          v51 = dest;
          v52 = (_BYTE *)dest + 8 * v306.m128_u32[0] - (_BYTE *)src;
          if ( src != (char *)dest + 8 * v306.m128_u32[0] )
          {
            memmove(v44, src, (_BYTE *)dest + 8 * v306.m128_u32[0] - (_BYTE *)src);
            v51 = dest;
          }
          v306.m128_i32[0] = (&v44[v52] - v51) >> 3;
          sub_17441C0((__int64)v301, v51, v306.m128_u32[0], 0);
          if ( v301[1] == 41 )
          {
            if ( v301[144] != 7 )
              goto LABEL_386;
            v53 = *((const void **)v301 + 3);
            v54 = *((unsigned int *)v301 + 8);
          }
          else
          {
            if ( v301[144] != 4 )
              goto LABEL_386;
            v53 = *((const void **)v301 + 2);
            v54 = *((unsigned int *)v301 + 6);
          }
          v8 = *((unsigned int *)v301 + 1);
          v55 = sub_EB3F30(
                  *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                  v8,
                  *((_DWORD *)v301 + 3),
                  v53,
                  v54,
                  *((unsigned int *)v301 + 2));
          v56 = dest;
          v22 = v55;
          v302 = v55;
          if ( dest == (char *)p_dest + 16 )
            goto LABEL_8;
          goto LABEL_161;
        case 0x15:
          v57 = *(unsigned __int16 ***)(v12 + 24);
          v58 = *(_QWORD *)(v12 + 32);
          v59 = p_ptr;
          sub_19500B0((__int64)p_ptr, (__int64 **)&v299, &v301, v57, v58, v20, si128);
          sub_18C5320((__int64)v11, (__int64)v59);
          if ( ptr != v283 )
            free(ptr);
          v60 = v301[144];
          if ( v301[1] == 41 )
          {
            if ( v60 != 7 )
              goto LABEL_386;
            v61 = *((const void **)v301 + 3);
            v62 = *((unsigned int *)v301 + 8);
          }
          else
          {
            if ( v60 != 4 )
              goto LABEL_386;
            v61 = *((const void **)v301 + 2);
            v62 = *((unsigned int *)v301 + 6);
          }
          v8 = *((unsigned int *)v301 + 1);
          v22 = sub_EB3C60(
                  *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                  v8,
                  *((_DWORD *)v301 + 3),
                  v61,
                  v62,
                  *((unsigned int *)v301 + 2));
          v302 = v22;
          goto LABEL_8;
        case 0x16:
          v8 = 0;
          if ( *(_QWORD *)(v12 + 32) )
            v8 = **(_QWORD **)(v12 + 24);
          v63 = sub_1944E10(v280, (unsigned __int16 *)v8, v20, si128);
          if ( v63 <= 1 )
            goto LABEL_22;
          v8 = 20;
          v64 = sub_1AA2500(
                  *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                  20,
                  *(unsigned __int8 *)(v12 + 8),
                  *(unsigned int *)(v12 + 12),
                  v63 & 0xFFFFFFFFFFFFFFFELL);
          if ( v64 <= 1 )
            goto LABEL_22;
          ptr = (void *)(v64 & 0xFFFFFFFFFFFFFFFELL);
          sub_17440A0((__int64)v301, p_ptr, 1);
          v65 = *((_DWORD *)v301 + 2);
          v66 = (__int64 *)sub_1741CC0((__int64)v301);
          v8 = *((unsigned int *)v301 + 1);
          v22 = sub_EB3180(*(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL), v8, *((_DWORD *)v301 + 3), *v66, v65, v67);
          v302 = v22;
          goto LABEL_8;
        case 0x17:
          sub_19500B0(
            (__int64)p_ptr,
            (__int64 **)&v299,
            &v301,
            *(unsigned __int16 ***)(v12 + 24),
            *(_QWORD *)(v12 + 32),
            v20,
            si128);
          v68 = (char *)ptr;
          v69 = 8LL * (unsigned int)v309;
          p_dest = (char *)ptr + v69;
          v70 = v69 >> 3;
          v71 = v69 >> 5;
          if ( !v71 )
            goto LABEL_333;
          v72 = (char *)ptr + 32 * v71;
          do
          {
            if ( (unsigned __int8)sub_1AA3DE0(*(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL), 23, *(_QWORD *)v68) )
              goto LABEL_78;
            if ( (unsigned __int8)sub_1AA3DE0(
                                    *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                                    23,
                                    *((_QWORD *)v68 + 1)) )
            {
              v68 += 8;
              goto LABEL_78;
            }
            if ( (unsigned __int8)sub_1AA3DE0(
                                    *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                                    23,
                                    *((_QWORD *)v68 + 2)) )
            {
              v68 += 16;
              goto LABEL_78;
            }
            if ( (unsigned __int8)sub_1AA3DE0(
                                    *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                                    23,
                                    *((_QWORD *)v68 + 3)) )
            {
              v68 += 24;
              goto LABEL_78;
            }
            v68 += 32;
          }
          while ( v72 != v68 );
          v70 = ((_BYTE *)p_dest - v68) >> 3;
LABEL_333:
          if ( v70 == 2 )
            goto LABEL_367;
          if ( v70 != 3 )
          {
            if ( v70 != 1 )
            {
LABEL_336:
              v68 = (char *)p_dest;
              goto LABEL_85;
            }
            goto LABEL_369;
          }
          if ( !(unsigned __int8)sub_1AA3DE0(*(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL), 23, *(_QWORD *)v68) )
          {
            v68 += 8;
LABEL_367:
            if ( !(unsigned __int8)sub_1AA3DE0(*(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL), 23, *(_QWORD *)v68) )
            {
              v68 += 8;
LABEL_369:
              if ( !(unsigned __int8)sub_1AA3DE0(*(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL), 23, *(_QWORD *)v68) )
                goto LABEL_336;
            }
          }
LABEL_78:
          if ( p_dest != v68 && p_dest != v68 + 8 )
          {
            src = v7;
            v73 = v68 + 8;
            v74 = p_dest;
            do
            {
              if ( !(unsigned __int8)sub_1AA3DE0(*(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL), 23, *v73) )
              {
                v68 += 8;
                *((_QWORD *)v68 - 1) = *v73;
              }
              ++v73;
            }
            while ( v74 != v73 );
            v7 = (unsigned int *)src;
          }
LABEL_85:
          v75 = ptr;
          v76 = (_BYTE *)ptr + 8 * (unsigned int)v309 - (_BYTE *)p_dest;
          if ( p_dest != (char *)ptr + 8 * (unsigned int)v309 )
          {
            memmove(v68, p_dest, (_BYTE *)ptr + 8 * (unsigned int)v309 - (_BYTE *)p_dest);
            v75 = ptr;
          }
          LODWORD(v309) = (&v68[v76] - v75) >> 3;
          sub_17441C0((__int64)v301, v75, (unsigned int)v309, 0);
          if ( v301[1] == 41 )
          {
            if ( v301[144] != 7 )
              goto LABEL_386;
            v77 = *((const void **)v301 + 3);
            v78 = *((unsigned int *)v301 + 8);
          }
          else
          {
            if ( v301[144] != 4 )
              goto LABEL_386;
            v77 = *((const void **)v301 + 2);
            v78 = *((unsigned int *)v301 + 6);
          }
          v8 = *((unsigned int *)v301 + 1);
          v79 = sub_EB4200(
                  *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                  v8,
                  *((_DWORD *)v301 + 3),
                  v77,
                  v78,
                  *((unsigned int *)v301 + 2));
          v56 = ptr;
          v22 = v79;
          v302 = v79;
          if ( ptr == v283 )
            goto LABEL_8;
          goto LABEL_161;
        case 0x19:
          v8 = 25;
          v302 = sub_EB45C0(*(_QWORD **)(*v280 + 248), 25, v312, v314, v12 + 32, *(unsigned int *)(v12 + 24), v313);
          v22 = v302;
          goto LABEL_8;
        case 0x1A:
          v8 = 26;
          v302 = sub_EB45C0(*(_QWORD **)(*v280 + 248), 26, v312, v314, v12 + 32, *(unsigned int *)(v12 + 24), v313);
          v22 = v302;
          goto LABEL_8;
        case 0x1B:
          v8 = v312;
          v22 = sub_EB29F0(*(_QWORD **)(*v280 + 248), v312, v313, v17, v18, v19);
          v302 = v22;
          goto LABEL_8;
        case 0x1C:
          v88 = *(unsigned __int16 ***)(v12 + 24);
          v89 = *(_QWORD *)(v12 + 32);
          v90 = p_ptr;
          sub_19500B0((__int64)p_ptr, (__int64 **)&v299, &v301, v88, v89, v20, si128);
          sub_18C5320((__int64)v11, (__int64)v90);
          if ( ptr != v283 )
            free(ptr);
          v91 = v301[144];
          if ( v301[1] == 41 )
          {
            if ( v91 != 7 )
              goto LABEL_386;
            v92 = *((const void **)v301 + 3);
            v93 = *((unsigned int *)v301 + 8);
          }
          else
          {
            if ( v91 != 4 )
              goto LABEL_386;
            v92 = *((const void **)v301 + 2);
            v93 = *((unsigned int *)v301 + 6);
          }
          v8 = *((unsigned int *)v301 + 1);
          v22 = sub_EB42F0(
                  *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                  v8,
                  *((_DWORD *)v301 + 3),
                  v92,
                  v93,
                  *((unsigned int *)v301 + 2));
          v302 = v22;
          goto LABEL_8;
        case 0x1D:
          si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8CF0);
          p_dest = &dest;
          v94 = v280;
          v306 = si128;
          v95 = *(_DWORD *)(v12 + 32);
          ptr = v283;
          dest = v307;
          v309 = 0x600000000LL;
          if ( v95 )
          {
            src = v7;
            v96 = 0;
            v97 = v12;
            do
            {
              v98 = sub_1944E10(v94, *(unsigned __int16 **)(*(_QWORD *)(v97 + 24) + 8LL * v96), v20, si128);
              if ( v98 > 1 )
              {
                v99 = sub_1ACAAD0(
                        *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                        v299.m128_u64[1],
                        v300,
                        *v301,
                        *(unsigned __int8 *)(v96 + v97 + 8LL * *(unsigned int *)(v97 + 32) + 40),
                        v98 & 0xFFFFFFFFFFFFFFFELL);
                if ( v99 > 1 )
                {
                  v100 = v306.m128_u64[0];
                  v101 = *(_BYTE *)(v96 + v97 + 8LL * *(unsigned int *)(v97 + 32) + 40);
                  if ( v306.m128_u64[0] + 1 > v306.m128_u64[1] )
                  {
                    v293 = (unsigned int *)v99;
                    sub_2236E10(p_dest, (char *)p_dest + 24, v306.m128_u64[0] + 1, 1);
                    v100 = v306.m128_u64[0];
                    v99 = (unsigned __int64)v293;
                  }
                  v102 = v99 & 0xFFFFFFFFFFFFFFFELL;
                  *((_BYTE *)dest + v100) = v101;
                  v103 = (unsigned int)v309;
                  ++v306.m128_u64[0];
                  v104 = (unsigned int)v309 + 1LL;
                  if ( v104 > HIDWORD(v309) )
                  {
                    v293 = (unsigned int *)v102;
                    sub_2237220(p_ptr, v283, v104, 8);
                    v103 = (unsigned int)v309;
                    v102 = (unsigned __int64)v293;
                  }
                  *((_QWORD *)ptr + v103) = v102;
                  LODWORD(v309) = v309 + 1;
                }
              }
              ++v96;
              v94 = (__int64 *)v299.m128_u64[0];
            }
            while ( v96 < *(_DWORD *)(v97 + 32) );
            v7 = (unsigned int *)src;
            v213 = v301;
            v214 = ptr;
            v215 = (unsigned int)v309;
            v216 = dest;
            v217 = v306.m128_u64[0];
          }
          else
          {
            v216 = v307;
            v217 = 0;
            v215 = 0;
            v214 = v283;
            v213 = v11;
          }
          v218 = *v94;
          v288 = (__int64)v214;
          v289 = v215;
          v219 = *((_DWORD *)v213 + 3);
          v220 = *(_QWORD *)(v218 + 744);
          LODWORD(v218) = *((_DWORD *)v213 + 2);
          v291 = v217;
          v290 = v216;
          v277 = v217;
          v8 = *v213;
          v302 = sub_1AC4620(
                   v220,
                   v8,
                   v299.m128_i32[2],
                   v300,
                   *((_DWORD *)v213 + 1),
                   v219,
                   (__int64)v216,
                   v277,
                   v288,
                   v215,
                   v218);
          if ( ptr != v283 )
            free(ptr);
          v56 = dest;
          if ( dest == (char *)p_dest + 24 )
            goto LABEL_22;
          goto LABEL_161;
        case 0x1E:
          v105 = *(unsigned __int16 ***)(v12 + 24);
          v106 = *(_QWORD *)(v12 + 32);
          v107 = p_ptr;
          sub_19500B0((__int64)p_ptr, (__int64 **)&v299, &v301, v105, v106, v20, si128);
          sub_18C5320((__int64)v11, (__int64)v107);
          if ( ptr != v283 )
            free(ptr);
          v108 = v301[144];
          if ( v301[1] == 41 )
          {
            if ( v108 != 7 )
              goto LABEL_386;
            v109 = *((const void **)v301 + 3);
            v110 = *((unsigned int *)v301 + 8);
          }
          else
          {
            if ( v108 != 4 )
              goto LABEL_386;
            v109 = *((const void **)v301 + 2);
            v110 = *((unsigned int *)v301 + 6);
          }
          v8 = *((unsigned int *)v301 + 1);
          v22 = sub_EB3B70(
                  *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                  v8,
                  *((_DWORD *)v301 + 3),
                  v109,
                  v110,
                  *((unsigned int *)v301 + 2));
          v302 = v22;
          goto LABEL_8;
        case 0x1F:
          v111 = *(unsigned __int16 **)(v12 + 24);
          v112 = sub_C00A40((unsigned __int64)v111, v8, v16, v17, v18);
          v8 = (__int64)v280;
          sub_194FF90((__int64)v296, v280, v112, 0, v111, 0, v20, si128);
          if ( v298 )
            goto LABEL_22;
          v114 = v297 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v297 & 0xFFFFFFFFFFFFFFFELL) == 0 )
            goto LABEL_22;
          v115 = v301;
          v116 = v301[144];
          v117 = v301;
          if ( (_BYTE)v116 == 0xFF )
            goto LABEL_136;
          if ( (_BYTE)v116 == 2 )
          {
            *((_QWORD *)v301 + 2) = v114;
            v118 = *((unsigned int *)v115 + 2);
LABEL_138:
            v120 = *((_QWORD *)v115 + 2);
            goto LABEL_139;
          }
          funcs_1576A39[v116]();
          v115 = v301;
LABEL_136:
          v117[144] = 2;
          v118 = *((unsigned int *)v115 + 2);
          *((_QWORD *)v117 + 2) = v114;
          v119 = v115[144];
          if ( v115[1] != 42 || v119 )
          {
            if ( v119 != 2 )
              goto LABEL_386;
            goto LABEL_138;
          }
          v120 = 0;
LABEL_139:
          v8 = *((unsigned int *)v115 + 1);
          v22 = sub_EB2B90(
                  *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                  v8,
                  *((_DWORD *)v115 + 3),
                  v120,
                  v118,
                  v113);
          v302 = v22;
          goto LABEL_8;
        case 0x20:
          v8 = v312;
          v22 = sub_EB2A70(*(_QWORD **)(*v280 + 248), v312, v313, v17, v18, v19);
          v302 = v22;
          goto LABEL_8;
        case 0x21:
          v8 = v312;
          v22 = sub_EB2970(*(_QWORD **)(*v280 + 248), v312, v313, v17, v18, v19);
          v302 = v22;
          goto LABEL_8;
        case 0x23:
          v126 = *(unsigned __int16 ***)(v12 + 24);
          v127 = *(_QWORD *)(v12 + 32);
          v128 = p_ptr;
          sub_19500B0((__int64)p_ptr, (__int64 **)&v299, &v301, v126, v127, v20, si128);
          sub_18C5320((__int64)v11, (__int64)v128);
          if ( ptr != v283 )
            free(ptr);
          v129 = v301[144];
          if ( v301[1] == 41 )
          {
            if ( v129 != 7 )
              goto LABEL_386;
            v130 = *((const void **)v301 + 3);
            v131 = *((unsigned int *)v301 + 8);
          }
          else
          {
            if ( v129 != 4 )
              goto LABEL_386;
            v130 = *((const void **)v301 + 2);
            v131 = *((unsigned int *)v301 + 6);
          }
          v8 = *((unsigned int *)v301 + 1);
          v22 = sub_EB3990(
                  *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                  v8,
                  *((_DWORD *)v301 + 3),
                  v130,
                  v131,
                  *((unsigned int *)v301 + 2));
          v302 = v22;
          goto LABEL_8;
        case 0x25:
          ptr = v283;
          v135 = *(unsigned __int16 ***)(v12 + 24);
          v309 = 0x600000000LL;
          p_dest = &v135[*(_QWORD *)(v12 + 32)];
          if ( v135 == p_dest )
          {
            v265 = v283;
            v266 = 0;
            v267 = v11;
          }
          else
          {
            for ( i = v280; ; i = (__int64 *)v299.m128_u64[0] )
            {
              v8 = (__int64)*v135;
              v137 = sub_1944E10(i, *v135, v20, si128);
              if ( v137 <= 1 )
                goto LABEL_160;
              v8 = 20;
              v244 = sub_1AA2500(
                       *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                       20,
                       *(unsigned __int8 *)(v12 + 8),
                       *(unsigned int *)(v12 + 12),
                       v137 & 0xFFFFFFFFFFFFFFFELL);
              if ( v244 <= 1 )
                goto LABEL_160;
              ++v135;
              sub_14B7B40((__int64)p_ptr, v244 & 0xFFFFFFFFFFFFFFFELL);
              if ( p_dest == v135 )
                break;
            }
            v267 = v301;
            v265 = ptr;
            v266 = (unsigned int)v309;
          }
          sub_17440A0((__int64)v267, v265, v266);
          v268 = *((_DWORD *)v301 + 2);
          v269 = (const void *)sub_1741CC0((__int64)v301);
          v8 = *((unsigned int *)v301 + 1);
          v264 = sub_EB3670(
                   *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                   v8,
                   *((_DWORD *)v301 + 3),
                   v269,
                   v270,
                   v268);
          goto LABEL_323;
        case 0x26:
          v8 = 0;
          if ( *(_QWORD *)(v12 + 32) )
            v8 = **(_QWORD **)(v12 + 24);
          v24 = sub_1944E10(v280, (unsigned __int16 *)v8, v20, si128);
          if ( v24 <= 1 )
            goto LABEL_22;
          v8 = 20;
          v254 = sub_1AA2500(
                   *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                   20,
                   *(unsigned __int8 *)(v12 + 8),
                   *(unsigned int *)(v12 + 12),
                   v24 & 0xFFFFFFFFFFFFFFFELL);
          if ( v254 <= 1 )
            goto LABEL_22;
          ptr = (void *)(v254 & 0xFFFFFFFFFFFFFFFELL);
          sub_17440A0((__int64)v301, p_ptr, 1);
          v255 = *((_DWORD *)v301 + 2);
          v256 = (__int64 *)sub_1741CC0((__int64)v301);
          v8 = *((unsigned int *)v301 + 1);
          v22 = sub_EB2F10(
                  *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                  v8,
                  *((_DWORD *)v301 + 3),
                  *v256,
                  v255,
                  v257);
          v302 = v22;
          goto LABEL_8;
        case 0x27:
          v196 = *(unsigned __int16 ***)(v12 + 24);
          v197 = *(_QWORD *)(v12 + 32);
          v198 = p_ptr;
          sub_19500B0((__int64)p_ptr, (__int64 **)&v299, &v301, v196, v197, v20, si128);
          sub_18C5320((__int64)v11, (__int64)v198);
          if ( ptr != v283 )
            free(ptr);
          v199 = v301[144];
          if ( v301[1] == 41 )
          {
            if ( v199 != 7 )
              goto LABEL_386;
            v200 = *((const void **)v301 + 3);
            v201 = *((unsigned int *)v301 + 8);
          }
          else
          {
            if ( v199 != 4 )
              goto LABEL_386;
            v200 = *((const void **)v301 + 2);
            v201 = *((unsigned int *)v301 + 6);
          }
          v8 = *((unsigned int *)v301 + 1);
          v22 = sub_EB3A80(
                  *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                  v8,
                  *((_DWORD *)v301 + 3),
                  v200,
                  v201,
                  *((unsigned int *)v301 + 2));
          v302 = v22;
          goto LABEL_8;
        case 0x28:
          v190 = *(unsigned __int16 ***)(v12 + 24);
          v191 = *(_QWORD *)(v12 + 32);
          v192 = p_ptr;
          sub_19500B0((__int64)p_ptr, (__int64 **)&v299, &v301, v190, v191, v20, si128);
          sub_18C5320((__int64)v11, (__int64)v192);
          if ( ptr != v283 )
            free(ptr);
          v193 = v301[144];
          if ( v301[1] == 41 )
          {
            if ( v193 != 7 )
              goto LABEL_386;
            v194 = *((const void **)v301 + 3);
            v195 = *((unsigned int *)v301 + 8);
          }
          else
          {
            if ( v193 != 4 )
              goto LABEL_386;
            v194 = *((const void **)v301 + 2);
            v195 = *((unsigned int *)v301 + 6);
          }
          v8 = *((unsigned int *)v301 + 1);
          v22 = sub_EB44D0(
                  *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                  v8,
                  *((_DWORD *)v301 + 3),
                  v194,
                  v195,
                  *((unsigned int *)v301 + 2));
          v302 = v22;
          goto LABEL_8;
        case 0x29:
          v202 = *(unsigned __int16 ***)(v12 + 24);
          v203 = *(_QWORD *)(v12 + 32);
          p_dest = &dest;
          sub_19500B0((__int64)&dest, (__int64 **)&v299, &v301, v202, v203, v20, si128);
          ptr = v283;
          v309 = 0x600000000LL;
          if ( dest == (char *)dest + 8 * v306.m128_u32[0] )
          {
            v222 = 0;
            v221 = v283;
          }
          else
          {
            src = v9;
            v204 = (char *)dest;
            v205 = v12;
            v206 = v11;
            v207 = v7;
            v208 = (char *)dest + 8 * v306.m128_u32[0];
            do
            {
              v209 = sub_1AC4880(
                       *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                       *v301,
                       *(unsigned __int8 *)(v205 + 40),
                       *(_QWORD *)v204);
              if ( v209 > 1 )
              {
                v210 = (unsigned int)v309;
                v211 = v209 & 0xFFFFFFFFFFFFFFFELL;
                v212 = (unsigned int)v309 + 1LL;
                if ( v212 > HIDWORD(v309) )
                {
                  v293 = (unsigned int *)v211;
                  sub_2237220(p_ptr, v283, v212, 8);
                  v210 = (unsigned int)v309;
                  v211 = (unsigned __int64)v293;
                }
                *((_QWORD *)ptr + v210) = v211;
                LODWORD(v309) = v309 + 1;
              }
              v204 += 8;
            }
            while ( v208 != v204 );
            v7 = v207;
            v221 = ptr;
            v11 = v206;
            v12 = v205;
            v222 = (unsigned int)v309;
            v9 = (__int64 *)src;
          }
          v287 = v222;
          v223 = *(unsigned __int8 *)(v12 + 40);
          v286 = v221;
          v278 = (__int64)v221;
          v8 = v299.m128_i64[1];
          v302 = sub_1AC7380(
                   *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                   v299.m128_i32[2],
                   v300,
                   *v301,
                   *((_DWORD *)v301 + 1),
                   *((_DWORD *)v301 + 3),
                   v223,
                   v278,
                   v287,
                   *((_DWORD *)v301 + 2));
          if ( ptr != v283 )
            free(ptr);
          v56 = dest;
          if ( dest == (char *)p_dest + 16 )
            goto LABEL_22;
          goto LABEL_161;
        case 0x2A:
          if ( v311[0] == 17 )
          {
            ptr = v283;
            v309 = 0x600000000LL;
            v245 = v12 + 32 + 8LL * *(unsigned int *)(v12 + 28);
            if ( v12 + 32 == v245 )
            {
              v260 = 0;
              v259 = v283;
              v258 = v11;
            }
            else
            {
              v246 = (unsigned __int16 **)(v12 + 32);
              for ( j = v280; ; j = (__int64 *)v299.m128_u64[0] )
              {
                v248 = sub_1944E10(j, *v246, v20, si128);
                if ( v248 > 1 )
                {
                  v249 = sub_1AA8160(
                           *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                           *v301,
                           v301[1],
                           v248 & 0xFFFFFFFFFFFFFFFELL);
                  if ( v249 > 1 )
                    sub_14B7B40((__int64)p_ptr, v249 & 0xFFFFFFFFFFFFFFFELL);
                }
                if ( (unsigned __int16 **)v245 == ++v246 )
                  break;
              }
              v258 = v301;
              v259 = ptr;
              v260 = (unsigned int)v309;
            }
            sub_17441C0((__int64)v258, v259, v260, 0);
            v261 = *((_DWORD *)v301 + 2);
            v262 = (const void *)sub_1741D10((__int64)v301);
            v8 = *((unsigned int *)v301 + 1);
            v264 = sub_EB34B0(
                     *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                     v8,
                     *((_DWORD *)v301 + 3),
                     v262,
                     v263,
                     v261);
LABEL_323:
            v22 = v264;
            v302 = v264;
            if ( ptr != v283 )
            {
              free(ptr);
              v22 = v302;
            }
          }
          else
          {
            if ( !*(_BYTE *)(v12 + 24) )
            {
              v183 = v316;
              v180 = v11;
              goto LABEL_268;
            }
            v177 = *(unsigned __int16 **)(v12 + 32);
            v178 = sub_C00A40((unsigned __int64)v177, v8, v16, v17, v18);
            v8 = (__int64)v280;
            sub_194FF90((__int64)p_ptr, v280, v178, 0, v177, 0, v20, si128);
            if ( !v310 )
            {
              v179 = v309 & 0xFFFFFFFFFFFFFFFELL;
              if ( (v309 & 0xFFFFFFFFFFFFFFFELL) != 0 )
              {
                v180 = v301;
                v181 = v301[144];
                v182 = v301;
                if ( (_BYTE)v181 == 0xFF )
                  goto LABEL_213;
                if ( (_BYTE)v181 == 2 )
                {
                  *((_QWORD *)v301 + 2) = v179;
                  v239 = *((unsigned int *)v180 + 2);
                }
                else
                {
                  funcs_1576A39[v181]();
                  v182 = v301;
LABEL_213:
                  *((_QWORD *)v180 + 2) = v179;
                  v180[144] = 2;
                  v180 = v182;
                  v183 = v182[144];
LABEL_268:
                  v239 = *((unsigned int *)v180 + 2);
                  if ( v180[1] == 42 && !v183 )
                  {
                    v240 = 0;
                    goto LABEL_271;
                  }
                  if ( v183 != 2 )
                    goto LABEL_386;
                }
                v240 = *((_QWORD *)v180 + 2);
LABEL_271:
                v8 = *((unsigned int *)v180 + 1);
                v22 = sub_EB3400(
                        *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                        v8,
                        *((_DWORD *)v180 + 3),
                        v240,
                        v239,
                        v19);
                v302 = v22;
                goto LABEL_8;
              }
            }
LABEL_22:
            v22 = v302;
          }
LABEL_8:
          if ( v316 != 0xFF )
            funcs_1576A39[v316]();
          if ( v22 )
          {
            v23 = v7[2];
            if ( v23 + 1 > (unsigned __int64)v7[3] )
            {
              v8 = (__int64)v285;
              sub_2237220(v7, v285, v23 + 1, 8);
              v23 = v7[2];
            }
            *(_QWORD *)(*(_QWORD *)v7 + 8 * v23) = v22;
            ++v7[2];
          }
          if ( v282 == ++v9 )
            return (__int64)v7;
          v10 = v7[2];
          p_dest = *(void **)v7;
          break;
        case 0x2B:
          v8 = v312;
          v22 = sub_EB2870(*(_QWORD **)(*v280 + 248), v312, v313, v17, v18, v19);
          v302 = v22;
          goto LABEL_8;
        case 0x2C:
          ptr = v283;
          v171 = *(unsigned __int16 ***)(v12 + 24);
          v309 = 0x600000000LL;
          v172 = &v171[*(_QWORD *)(v12 + 32)];
          if ( v171 == v172 )
          {
            v271 = v283;
            v272 = 0;
            v273 = v11;
          }
          else
          {
            for ( k = v280; ; k = (__int64 *)v299.m128_u64[0] )
            {
              v8 = (__int64)*v171;
              v174 = sub_1944E10(k, *v171, v20, si128);
              if ( v174 <= 1 )
                goto LABEL_160;
              src = (void *)(v174 & 0xFFFFFFFFFFFFFFFELL);
              p_dest = *(void **)(*(_QWORD *)v299.m128_u64[0] + 744LL);
              v175 = sub_EEB7E0(v174 & 0xFFFFFFFFFFFFFFFELL, v8, *(double *)v20.m128_u64);
              v8 = sub_1AA2500(p_dest, 20, v301[1], v175, src) & 0xFFFFFFFFFFFFFFFELL;
              v176 = sub_1ACA710(*(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL), v8);
              if ( v176 <= 1 )
                goto LABEL_160;
              ++v171;
              sub_14B7B40((__int64)p_ptr, v176 & 0xFFFFFFFFFFFFFFFELL);
              if ( v172 == v171 )
                break;
            }
            v273 = v301;
            v271 = ptr;
            v272 = (unsigned int)v309;
          }
          sub_17440A0((__int64)v273, v271, v272);
          v274 = *((_DWORD *)v301 + 2);
          v275 = (const void *)sub_1741CC0((__int64)v301);
          v8 = *((unsigned int *)v301 + 1);
          v264 = sub_EB3580(
                   *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                   v8,
                   *((_DWORD *)v301 + 3),
                   v275,
                   v276,
                   v274);
          goto LABEL_323;
        case 0x2D:
          v184 = *(unsigned __int16 ***)(v12 + 24);
          v185 = *(_QWORD *)(v12 + 32);
          v186 = p_ptr;
          sub_19500B0((__int64)p_ptr, (__int64 **)&v299, &v301, v184, v185, v20, si128);
          sub_18C5320((__int64)v11, (__int64)v186);
          if ( ptr != v283 )
            free(ptr);
          v187 = v301[144];
          if ( v301[1] == 41 )
          {
            if ( v187 != 7 )
              goto LABEL_386;
            v188 = *((const void **)v301 + 3);
            v189 = *((unsigned int *)v301 + 8);
          }
          else
          {
            if ( v187 != 4 )
              goto LABEL_386;
            v188 = *((const void **)v301 + 2);
            v189 = *((unsigned int *)v301 + 6);
          }
          v8 = *((unsigned int *)v301 + 1);
          v22 = sub_EB4110(
                  *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                  v8,
                  *((_DWORD *)v301 + 3),
                  v188,
                  v189,
                  *((unsigned int *)v301 + 2));
          v302 = v22;
          goto LABEL_8;
        case 0x2E:
          if ( *(_QWORD *)(v12 + 32) )
          {
            v8 = **(_QWORD **)(v12 + 24);
            v132 = sub_1944E10(v280, (unsigned __int16 *)v8, v20, si128);
            if ( v132 <= 1 )
              goto LABEL_22;
            v8 = 20;
            v133 = sub_1AA2500(
                     *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                     20,
                     *(unsigned __int8 *)(v12 + 8),
                     *(unsigned int *)(v12 + 12),
                     v132 & 0xFFFFFFFFFFFFFFFELL);
            if ( v133 <= 1 )
              goto LABEL_22;
            ptr = (void *)(v133 & 0xFFFFFFFFFFFFFFFELL);
            sub_17440A0((__int64)v301, p_ptr, 1);
            v134 = v301;
          }
          else
          {
            v134 = v11;
          }
          v229 = v134[1];
          v230 = *((unsigned int *)v134 + 2);
          v231 = v134[144];
          if ( (unsigned __int8)v229 > 0x31u || (v242 = 0x3400000000001LL, !_bittest64(&v242, v229)) || v231 )
          {
            if ( v231 != 3 )
              goto LABEL_386;
            v19 = *((unsigned int *)v134 + 6);
            v232 = 0;
            if ( (_DWORD)v19 )
            {
              LODWORD(p_dest) = *((_DWORD *)v134 + 2);
              v233 = (__int64 *)sub_1741CC0((__int64)v134);
              v134 = v301;
              v230 = (unsigned int)p_dest;
              v232 = *v233;
            }
          }
          else
          {
            v232 = 0;
          }
          v8 = *((unsigned int *)v134 + 1);
          v22 = sub_EB2E40(
                  *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                  v8,
                  *((_DWORD *)v134 + 3),
                  v232,
                  v230,
                  v19);
          v302 = v22;
          goto LABEL_8;
        case 0x2F:
          v8 = 0;
          if ( *(_QWORD *)(v12 + 32) )
            v8 = **(_QWORD **)(v12 + 24);
          v121 = sub_1944E10(v280, (unsigned __int16 *)v8, v20, si128);
          if ( v121 <= 1 )
            goto LABEL_22;
          v8 = 20;
          v122 = sub_1AA2500(
                   *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                   20,
                   *(unsigned __int8 *)(v12 + 8),
                   *(unsigned int *)(v12 + 12),
                   v121 & 0xFFFFFFFFFFFFFFFELL);
          if ( v122 <= 1 )
            goto LABEL_22;
          ptr = (void *)(v122 & 0xFFFFFFFFFFFFFFFELL);
          sub_17440A0((__int64)v301, p_ptr, 1);
          v123 = *((_DWORD *)v301 + 2);
          v124 = (__int64 *)sub_1741CC0((__int64)v301);
          v8 = *((unsigned int *)v301 + 1);
          v22 = sub_EB2FE0(
                  *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                  v8,
                  *((_DWORD *)v301 + 3),
                  *v124,
                  v123,
                  v125);
          v302 = v22;
          goto LABEL_8;
        case 0x30:
          if ( !*(_DWORD *)(v12 + 20) )
          {
            v87 = v11;
            goto LABEL_315;
          }
          ptr = v283;
          v309 = 0x600000000LL;
          v80 = *(unsigned __int16 ***)(v12 + 24);
          v81 = *v80;
          if ( !*v80 )
            goto LABEL_97;
          v8 = (__int64)*v80;
          v82 = sub_1944E10(v280, *v80, v20, si128);
          if ( v82 > 1 )
          {
            v8 = 20;
            v83 = sub_1AA2500(
                    *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                    20,
                    *(unsigned __int8 *)(v12 + 8),
                    *(unsigned int *)(v12 + 12),
                    v82 & 0xFFFFFFFFFFFFFFFELL);
            if ( v83 > 1 )
            {
              v81 = (void *)(v83 & 0xFFFFFFFFFFFFFFFELL);
              v80 = *(unsigned __int16 ***)(v12 + 24);
LABEL_97:
              p_dest = &v80[*(_QWORD *)(v12 + 32)];
              if ( v80 + 1 != p_dest )
              {
                src = v81;
                v84 = v80 + 1;
                do
                {
                  v8 = (__int64)*v84;
                  v85 = sub_1944E10((__int64 *)v299.m128_u64[0], *v84, v20, si128);
                  if ( v85 <= 1 )
                    goto LABEL_160;
                  v8 = 20;
                  v86 = sub_1AA2500(
                          *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                          20,
                          *(unsigned __int8 *)(v12 + 8),
                          *(unsigned int *)(v12 + 12),
                          v85 & 0xFFFFFFFFFFFFFFFELL);
                  if ( v86 <= 1 )
                    goto LABEL_160;
                  ++v84;
                  sub_14B7B40((__int64)p_ptr, v86 & 0xFFFFFFFFFFFFFFFELL);
                }
                while ( p_dest != v84 );
                v81 = src;
              }
              sub_18C5220((__int64)v301, (__int64)v81, *(_DWORD *)(v12 + 40), (__int64)p_ptr);
              if ( ptr != v283 )
                free(ptr);
              v87 = v301;
LABEL_315:
              v250 = v87[144];
              v251 = *((unsigned int *)v87 + 2);
              if ( v250 == 0xFF )
                goto LABEL_386;
              if ( v250 )
              {
                if ( v250 != 5 )
                  goto LABEL_386;
                v252 = *((unsigned int *)v87 + 6);
                v294 = *((void **)v87 + 4);
                v295 = *((unsigned int *)v87 + 10);
                v253 = *((_QWORD *)v87 + 2);
              }
              else
              {
                v294 = nullptr;
                v252 = 0;
                v253 = 0;
                v295 = 0;
              }
              v8 = *((unsigned int *)v87 + 1);
              v302 = sub_EB3760(
                       *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                       v8,
                       *((_DWORD *)v87 + 3),
                       v253,
                       v252,
                       v251,
                       v294,
                       v295);
              v22 = v302;
              goto LABEL_8;
            }
          }
LABEL_160:
          v56 = ptr;
          if ( ptr == v283 )
            goto LABEL_22;
          goto LABEL_161;
        case 0x31:
          if ( *(_QWORD *)(v12 + 32) )
          {
            v8 = **(_QWORD **)(v12 + 24);
            v168 = sub_1944E10(v280, (unsigned __int16 *)v8, v20, si128);
            if ( v168 <= 1 )
              goto LABEL_22;
            v8 = 20;
            v169 = sub_1AA2500(
                     *(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 744LL),
                     20,
                     *(unsigned __int8 *)(v12 + 8),
                     *(unsigned int *)(v12 + 12),
                     v168 & 0xFFFFFFFFFFFFFFFELL);
            if ( v169 <= 1 )
              goto LABEL_22;
            ptr = (void *)(v169 & 0xFFFFFFFFFFFFFFFELL);
            sub_17440A0((__int64)v301, p_ptr, 1);
            v170 = v301;
          }
          else
          {
            v170 = v11;
          }
          v224 = v170[1];
          v225 = *((unsigned int *)v170 + 2);
          v226 = v170[144];
          if ( (unsigned __int8)v224 > 0x31u || (v243 = 0x3400000000001LL, !_bittest64(&v243, v224)) || v226 )
          {
            if ( v226 != 3 )
              goto LABEL_386;
            v227 = 0;
            if ( *((_DWORD *)v170 + 6) )
            {
              LODWORD(p_dest) = *((_DWORD *)v170 + 2);
              v228 = (__int64 *)sub_1741CC0((__int64)v170);
              v170 = v301;
              v225 = (unsigned int)p_dest;
              v227 = *v228;
            }
          }
          else
          {
            v227 = 0;
          }
          v8 = *((unsigned int *)v170 + 1);
          v22 = sub_EB2D70(
                  *(_QWORD **)(*(_QWORD *)v299.m128_u64[0] + 248LL),
                  v8,
                  *((_DWORD *)v170 + 3),
                  v227,
                  v225,
                  v19);
          v302 = v22;
          goto LABEL_8;
        default:
          return sub_1953060();
      }
    }
  }
  return (__int64)v7;
}
