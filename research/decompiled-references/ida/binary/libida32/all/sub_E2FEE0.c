unsigned __int64 __fastcall sub_E2FEE0(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // r13
  __int64 v8; // rax
  _QWORD *v9; // rdi
  unsigned __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __m128 si128; // xmm0
  unsigned __int64 v15; // r12
  __int64 v16; // rdi
  _BYTE *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  _BYTE *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rdi
  unsigned __int64 v36; // rax
  __int64 v37; // rdi
  _BYTE *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  _QWORD *v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // r13
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int64 v46; // r8
  __int64 v47; // rcx
  unsigned __int64 v48; // r8
  unsigned int v49; // r12d
  bool v50; // al
  unsigned int v51; // eax
  unsigned int v52; // r12d
  bool v53; // al
  __int64 v54; // r13
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned __int64 v60; // r8
  __int64 v61; // r12
  unsigned __int64 v62; // rax
  char v63; // al
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  __int64 v66; // rdx
  bool v67; // r14
  __int64 v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // rcx
  unsigned __int64 v71; // r8
  unsigned __int64 v72; // r13
  __int64 v73; // rdx
  __int64 v74; // rcx
  unsigned __int64 v75; // r8
  __int64 v76; // rdx
  __int64 v77; // rcx
  int v78; // r12d
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // r12
  __int64 v82; // r14
  __int64 i; // r14
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // r13
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  unsigned __int64 v91; // rax
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // r15
  unsigned __int64 v95; // rdx
  unsigned __int64 v96; // rcx
  _QWORD *v97; // rcx
  __int64 v98; // r15
  unsigned __int64 *v99; // rsi
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // rdx
  __int64 v102; // r14
  __int64 v103; // rdx
  __int64 v104; // r14
  __int64 v105; // rdx
  __int64 v106; // rcx
  unsigned __int64 v107; // r8
  __int64 v108; // rdx
  __int64 v109; // rcx
  int v110; // r12d
  __int64 v111; // rax
  __int64 v112; // r12
  __int64 v113; // r13
  __int64 v114; // r13
  __int64 v115; // r12
  __int64 v116; // r13
  __int64 v117; // rdx
  __int64 v118; // r15
  __int64 v119; // rax
  unsigned __int64 v120; // rdx
  _QWORD *v121; // rcx
  __int64 v122; // rdi
  __int64 v123; // r8
  __int64 v124; // r15
  __int64 v125; // rax
  __int64 v126; // rsi
  unsigned __int64 v127; // rdx
  _QWORD *v128; // rcx
  __int64 v129; // rdi
  __int64 v130; // r8
  __int64 v131; // r14
  unsigned __int64 v132; // rsi
  __int64 v133; // rax
  unsigned __int64 v134; // rsi
  unsigned __int64 v135; // rax
  unsigned __int64 v136; // rsi
  __int64 v137; // rdx
  __int64 v138; // r14
  unsigned __int64 v139; // rdx
  __int64 v140; // rax
  unsigned __int64 v141; // rdx
  unsigned __int64 v142; // rax
  _DWORD *v143; // rax
  __int64 v144; // rdi
  int v145; // edx
  __int64 v146; // r14
  unsigned __int64 v147; // rdx
  __int64 v148; // rax
  unsigned __int64 v149; // rdx
  unsigned __int64 v150; // rax
  _DWORD *v151; // rsi
  __int64 *v152; // rdi
  int v153; // eax
  __int64 v154; // rax
  _DWORD *v155; // rdx
  __int64 *v156; // rdi
  int v157; // eax
  __int64 v158; // rax
  __int64 v159; // rcx
  __int64 v160; // r8
  unsigned __int64 v161; // r13
  unsigned __int64 v162; // r15
  _QWORD **v163; // r14
  _QWORD *v164; // rax
  unsigned __int64 v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rcx
  unsigned __int64 v168; // rsi
  __int64 v169; // rdx
  __int64 v170; // rcx
  unsigned __int64 v171; // r8
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 v176; // rax
  __int64 v177; // r13
  __int64 **v178; // r12
  __int64 v179; // r15
  __int64 v180; // rdi
  __int64 v181; // r14
  __int64 v182; // rdx
  __int64 v183; // r13
  __int64 v184; // r15
  __int64 v185; // r12
  unsigned int v186; // eax
  __int64 v187; // rdi
  _BYTE *v188; // rax
  __int64 v189; // rdi
  _BYTE *v190; // rax
  __int64 v191; // rdx
  const char *v192; // rsi
  __int64 v193; // rdx
  __int64 v194; // rcx
  unsigned __int64 v195; // r8
  __int64 v196; // rax
  unsigned __int64 v197; // rdx
  char v198; // dl
  __int64 v199; // rax
  __int64 v200; // rdx
  __int64 v201; // rcx
  unsigned __int64 v202; // r8
  bool v203; // al
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // r8
  __int64 v207; // rax
  __int64 v208; // rdx
  __int64 v209; // rcx
  unsigned __int64 v210; // r8
  int v211; // r12d
  __int64 v212; // rax
  __int64 v213; // r13
  unsigned __int64 v214; // r15
  __int64 v215; // rdi
  unsigned __int64 v216; // r13
  _BYTE *v217; // rax
  unsigned __int64 v218; // rsi
  __int64 v219; // rdi
  _BYTE *v220; // rax
  __int64 v221; // rax
  __int64 v222; // rcx
  __int64 v223; // r8
  __int64 v224; // r9
  __int64 v225; // rdx
  void **v226; // rbx
  void **v227; // r13
  __int8 v228; // al
  unsigned __int64 v229; // r12
  __int64 v230; // r15
  __int64 v231; // rdx
  unsigned __int8 v232; // dl
  int v233; // edx
  int v234; // eax
  __int64 v235; // rdx
  __int64 v236; // rcx
  __int64 v237; // r13
  __int64 v238; // rax
  __int8 v239; // al
  __int64 v240; // rdx
  __int64 v241; // rcx
  unsigned __int64 v242; // r8
  __int64 v243; // rax
  _BYTE *v244; // rdx
  __int64 v245; // rdx
  __int64 v246; // rdi
  __int64 v247; // rdx
  __int64 v248; // rcx
  __int64 v249; // r8
  unsigned __int64 v250; // rax
  __int64 v251; // rdx
  __int64 v252; // rcx
  unsigned __int64 v253; // r8
  __int64 v254; // rsi
  void **v255; // r15
  unsigned __int64 v256; // rax
  __int64 v257; // rcx
  __int64 v258; // r8
  char v259; // r15
  __int64 v260; // rdx
  __int64 v261; // rax
  unsigned __int64 v262; // r15
  unsigned __int64 v263; // rdx
  unsigned __int64 v264; // rdx
  __int64 v265; // rdi
  _BYTE *v266; // rax
  __int64 v267; // rax
  __int64 v268; // rdx
  __int64 v269; // rcx
  unsigned __int64 v270; // r8
  unsigned __int64 v271; // r8
  __int64 v272; // r9
  __int64 v273; // rdx
  __int64 v274; // rcx
  unsigned __int64 v275; // r8
  __int64 v276; // rdx
  __int64 v277; // rcx
  unsigned __int64 v278; // r8
  __int64 v279; // rdi
  _BYTE *v280; // rax
  __int64 v281; // rdx
  __int64 v282; // rdx
  __int64 v283; // r12
  unsigned __int64 v284; // r13
  __int64 v285; // rdx
  __int64 v286; // rcx
  __int64 v287; // r8
  __int64 v288; // rax
  __int64 v289; // rdx
  __int64 v290; // rcx
  unsigned __int64 v291; // r8
  __int64 v292; // rdi
  __int64 v293; // r15
  __int64 v294; // rdx
  __int64 v295; // rdx
  __int64 v296; // rdx
  __int64 v297; // rcx
  unsigned __int64 v298; // r8
  __m128 v299; // [rsp+0h] [rbp-138h] BYREF
  _QWORD *v300; // [rsp+10h] [rbp-128h]
  void **v301; // [rsp+18h] [rbp-120h]
  void **p_ptr; // [rsp+20h] [rbp-118h]
  unsigned __int8 v303; // [rsp+2Ch] [rbp-10Ch]
  char v304; // [rsp+37h] [rbp-101h] BYREF
  __int64 v305; // [rsp+38h] [rbp-100h] BYREF
  _QWORD v306[2]; // [rsp+40h] [rbp-F8h] BYREF
  __m128 v307; // [rsp+50h] [rbp-E8h] BYREF
  __int64 *v308; // [rsp+60h] [rbp-D8h]
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v310; // [rsp+78h] [rbp-C0h]
  char v311; // [rsp+80h] [rbp-B8h] BYREF

  v5 = a5;
  v303 = a4;
  v299.m128_u64[0] = (unsigned __int64)&v304;
  v8 = *a1;
  v305 = 0;
  v9 = *(_QWORD **)(v8 + 8);
  v299 = _mm_loadh_ps((const double *)v299.m128_u64);
  result = sub_A4E860(v9, a2, &v305, a4, a5);
  si128 = (__m128)_mm_load_si128((const __m128i *)&v299);
  v304 = 1;
  v308 = a1;
  v307 = si128;
  v15 = result;
  switch ( *(_DWORD *)a3 )
  {
    case 0:
    case 1:
      v16 = a1[1];
      v17 = *(_BYTE **)(v16 + 32);
      if ( *(_QWORD *)(v16 + 24) <= (unsigned __int64)v17 )
      {
        sub_2257CD0(v16, 76);
      }
      else
      {
        v18 = (__int64)(v17 + 1);
        *(_QWORD *)(v16 + 32) = v17 + 1;
        *v17 = 76;
      }
      sub_E1BE40((__int64)a1, v15, v18, v12, v13);
      v19 = a1[1];
      v20 = *(_BYTE **)(v19 + 32);
      if ( *(_QWORD *)(v19 + 24) <= (unsigned __int64)v20 )
        goto LABEL_51;
      goto LABEL_5;
    case 2:
      sub_E234C0((__int64)a1, result, a3 + 8, v12, v13);
      result = v303;
      goto LABEL_7;
    case 3:
      sub_E23440((__int64)a1, result, (_QWORD *)(a3 + 8), v12, v13);
      result = v303;
      goto LABEL_7;
    case 4:
      sub_E15AA0(*a1);
      result = v303;
      goto LABEL_7;
    case 5:
      v43 = *(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v43 + 16) != 14 )
        v43 = sub_F3F310(*(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL), a2, v11, v12);
      sub_E144E0((__int64)&v307);
      sub_971800(a1[1], "tl");
      sub_E1BE40((__int64)a1, v15, v44, v45, v46);
      v49 = *(_DWORD *)(a3 + 16);
      if ( v49 <= 0x40 )
        v50 = *(_QWORD *)(a3 + 8) == 0;
      else
        v50 = v49 == (unsigned int)sub_21E2A40(a3 + 8);
      if ( !v50 )
        goto LABEL_184;
      if ( *(_DWORD *)(a3 + 32) <= 0x40u )
      {
        v196 = *(_QWORD *)(a3 + 24);
        if ( !v196 )
        {
LABEL_195:
          v53 = v196 == 0;
LABEL_38:
          if ( !v53 )
            sub_E234C0((__int64)a1, *(_QWORD *)(v43 + 32), a3 + 24, v47, v48);
          goto LABEL_50;
        }
      }
      else
      {
        v299.m128_i32[0] = *(_DWORD *)(a3 + 32);
        v51 = sub_21E2A40(a3 + 24);
        v52 = v51;
        if ( v299.m128_i32[0] == v51 )
        {
LABEL_37:
          v53 = v52 == v51;
          goto LABEL_38;
        }
      }
LABEL_184:
      sub_E234C0((__int64)a1, *(_QWORD *)(v43 + 32), a3 + 8, v47, v48);
      v52 = *(_DWORD *)(a3 + 32);
      if ( v52 > 0x40 )
      {
        v51 = sub_21E2A40(a3 + 24);
        goto LABEL_37;
      }
      v196 = *(_QWORD *)(a3 + 24);
      goto LABEL_195;
    case 6:
      v54 = *(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v54 + 16) != 14 )
        v54 = sub_F3F310(*(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL), a2, v11, v12);
      sub_E144E0((__int64)&v307);
      sub_971800(a1[1], "tl");
      sub_E1BE40((__int64)a1, v15, v55, v56, v57);
      v61 = sub_21D5390(a1, v15, v58);
      v62 = a3 + 8;
      if ( *(_QWORD *)(a3 + 8) == v61 )
        v62 = *(_QWORD *)(a3 + 16);
      v63 = *(_BYTE *)(v62 + 20);
      if ( (v63 & 7) != 3 || (v63 & 8) != 0 )
        goto LABEL_45;
      v64 = *(_QWORD *)(a3 + 32);
      v197 = a3 + 32;
      if ( v61 == v64 )
        v197 = *(_QWORD *)(a3 + 40);
      v198 = *(_BYTE *)(v197 + 20);
      v59 = v198 & 7;
      if ( (_BYTE)v59 != 3 || (v198 & 8) != 0 )
      {
LABEL_45:
        sub_E23440((__int64)a1, *(_QWORD *)(v54 + 32), (_QWORD *)(a3 + 8), v59, v60);
        v64 = *(_QWORD *)(a3 + 32);
      }
      v65 = a3 + 32;
      if ( v61 == v64 )
        v65 = *(_QWORD *)(a3 + 40);
      if ( (*(_BYTE *)(v65 + 20) & 7) != 3 || (*(_BYTE *)(v65 + 20) & 8) != 0 )
        sub_E23440((__int64)a1, *(_QWORD *)(v54 + 32), (_QWORD *)(a3 + 32), v59, v60);
      goto LABEL_50;
    case 7:
      if ( (unsigned __int8)sub_A2D380(a3) )
        goto LABEL_103;
      v306[0] = sub_A2D320(a3);
      v306[1] = v66;
      v300 = v306;
      v67 = sub_A2B9C0(v306);
      if ( !v67 )
      {
        v68 = *(_QWORD *)sub_A2D340(a3);
        if ( v68 )
        {
          sub_971800(a1[1], "L");
          sub_E1BE40((__int64)a1, v15, v240, v241, v242);
          v243 = sub_2257BF0(a1[1], v68);
          v244 = *(_BYTE **)(v243 + 32);
          if ( (unsigned __int64)v244 >= *(_QWORD *)(v243 + 24) )
          {
            sub_2257CD0(v243, 69);
          }
          else
          {
            *(_QWORD *)(v243 + 32) = v244 + 1;
            *v244 = 69;
          }
          result = v303;
          goto LABEL_7;
        }
        sub_E144E0((__int64)&v307);
        sub_971800(a1[1], "rc");
        sub_E1BE40((__int64)a1, v15, v69, v70, v71);
        result = sub_971800(a1[1], "Li0E");
        if ( !v303 )
          return result;
        goto LABEL_50;
      }
      v301 = *(void ***)(*a1 + 8);
      v203 = sub_A2D350(a3);
      v299.m128_u64[0] = v15 & 0xFFFFFFFFFFFFFFF0LL;
      if ( !v203 )
      {
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 > 1 )
        {
          sub_E144E0((__int64)&v307);
          sub_971800(a1[1], "cv");
          sub_E1BE40((__int64)a1, v15, v276, v277, v278);
        }
        else
        {
          sub_E144E0((__int64)&v307);
          sub_971800(a1[1], "decvP");
          v207 = sub_F44710(*(_QWORD *)v299.m128_u64[0], "decvP", v204, v205, v206);
          sub_E1BE40((__int64)a1, v207, v208, v209, v210);
        }
        v211 = 1;
        sub_971800(a1[1], "plcvPcad");
        goto LABEL_215;
      }
      if ( v303 && *((_BYTE *)v301[290] + 212) <= 0x5Fu )
      {
        v292 = a3;
        v293 = sub_A2B5D0(v300);
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v293 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
                             - 2) <= 4u )
        {
          sub_A2D360(a3);
          v292 = a3;
          if ( v294 == 1 )
          {
            if ( !*(_QWORD *)sub_A2D360(a3) )
            {
              v254 = v293;
              v255 = v301;
              v256 = sub_A51FE0(v301, v254);
              v259 = sub_A9C330(v255, v15, v256, v257, v258);
              sub_A2D360(a3);
              if ( (v260 || sub_A2D330(a3)) && !v259 )
                goto LABEL_263;
LABEL_271:
              if ( v5 )
              {
                v284 = sub_E145A0(v301, a3);
                v288 = sub_F44710(*(_QWORD *)v299.m128_u64[0], a3, v285, v286, v287);
                if ( (*(_QWORD *)&byte_8[v288 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                    | ((unsigned __int8)*(_QWORD *)&byte_8[v288 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v288) & 7) != (*(_QWORD *)&byte_8[v284 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v284 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v284) & 7)
                  && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 212LL) > 0x5Fu )
                {
                  sub_E144E0((__int64)&v307);
                  sub_971800(a1[1], "cv");
                  sub_E1BE40((__int64)a1, v15, v289, v290, v291);
                }
              }
              v211 = 0;
              if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
              {
                sub_E144E0((__int64)&v307);
                sub_971800(a1[1], "ad");
              }
LABEL_215:
              v212 = sub_A2B5D0(v300);
              v213 = v306[0];
              v214 = v212;
              if ( (v306[0] & 3) != 0 )
              {
                if ( (v306[0] & 3) == 1 )
                {
                  sub_E144E0((__int64)&v307);
                  v218 = v213 & 0xFFFFFFFFFFFFFFFCLL;
                  sub_E24970(
                    (__int64)a1,
                    (unsigned __int16 *)(v213 & 0xFFFFFFFFFFFFFFFCLL),
                    (unsigned __int16 *)0xFFFFFFFFLL,
                    0,
                    v271,
                    v272);
                }
                else
                {
                  sub_E144E0((__int64)&v307);
                  sub_971800(a1[1], "ti");
                  v218 = v213 & 0xFFFFFFFFFFFFFFF0LL;
                  sub_E1BE40((__int64)a1, v213 & 0xFFFFFFFFFFFFFFF0LL, v273, v274, v275);
                }
              }
              else
              {
                v215 = a1[1];
                v216 = v306[0] & 0xFFFFFFFFFFFFFFFCLL;
                v217 = *(_BYTE **)(v215 + 32);
                if ( (unsigned __int64)v217 >= *(_QWORD *)(v215 + 24) )
                {
                  sub_2257CD0(v215, 76);
                }
                else
                {
                  *(_QWORD *)(v215 + 32) = v217 + 1;
                  *v217 = 76;
                }
                v218 = v216;
                sub_E2E4C0((__int64)a1, v216, 0, si128);
                v219 = a1[1];
                v220 = *(_BYTE **)(v219 + 32);
                if ( (unsigned __int64)v220 >= *(_QWORD *)(v219 + 24) )
                {
                  v218 = 69;
                  sub_2257CD0(v219, 69);
                }
                else
                {
                  *(_QWORD *)(v219 + 32) = v220 + 1;
                  *v220 = 69;
                }
              }
              if ( v211 == 1 )
              {
                v265 = a1[1];
                v266 = *(_BYTE **)(v265 + 32);
                if ( (unsigned __int64)v266 >= *(_QWORD *)(v265 + 24) )
                {
                  sub_2257CD0(v265, 76);
                }
                else
                {
                  *(_QWORD *)(v265 + 32) = v266 + 1;
                  *v266 = 76;
                }
                v267 = sub_A3FFE0(v301);
                sub_E1BE40((__int64)a1, v267, v268, v269, v270);
                v41 = a1 + 1;
                v42 = *(_QWORD *)sub_A2D340(a3);
                goto LABEL_26;
              }
              if ( v211 != 2 )
                goto LABEL_6;
              if ( *(_QWORD *)sub_A2D340(a3) )
              {
                v218 = *(_QWORD *)sub_A2D340(a3);
                sub_E14650(a1 + 1, v218);
              }
              v299.m128_i8[0] = sub_A2D330(a3);
              v221 = sub_A2D360(a3);
              v226 = (void **)(v221 + 8 * v225);
              if ( (void **)v221 == v226 )
              {
LABEL_282:
                v19 = a1[1];
                v20 = *(_BYTE **)(v19 + 32);
                v264 = *(_QWORD *)(v19 + 24);
                if ( v299.m128_i8[0] )
                {
                  if ( (unsigned __int64)v20 >= v264 )
                  {
                    sub_2257CD0(v19, 112);
                  }
                  else
                  {
                    *(_QWORD *)(v19 + 32) = v20 + 1;
                    *v20 = 112;
                  }
                  v19 = a1[1];
                  v20 = *(_BYTE **)(v19 + 32);
                  v264 = *(_QWORD *)(v19 + 24);
                }
                if ( (unsigned __int64)v20 < v264 )
                  goto LABEL_5;
                goto LABEL_51;
              }
              v227 = (void **)v221;
              p_ptr = &ptr;
              while ( 1 )
              {
                v229 = (unsigned __int64)*v227;
                v230 = *(_QWORD *)(v214 & 0xFFFFFFFFFFFFFFF0LL);
                v231 = *(unsigned __int8 *)(v230 + 16);
                if ( (unsigned __int8)(v231 - 2) > 4u )
                {
                  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v230 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u
                    || (v261 = sub_F3F310(v230, v218, v231, v222), (v230 = v261) == 0) )
                  {
                    v262 = v229 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (*(_BYTE *)((v229 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 49 > 2 )
                    {
                      v218 = v229 & 0xFFFFFFFFFFFFFFF8LL;
                      v214 = sub_A56C90((__int64)v301, v229 & 0xFFFFFFFFFFFFFFF8LL, v231, v222, v223, v224);
                    }
                    else
                    {
                      v263 = *(_QWORD *)(v262 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                      if ( (*(_QWORD *)(v262 + 16) & 4) != 0 )
                        v263 = *(_QWORD *)v263;
                      if ( (*(_BYTE *)(v263 + 8) & 0x7Fu) - 58 > 3 )
                        BUG();
                      if ( *(_BYTE *)(v263 + 9) >> 5 == 2 )
                      {
                        v279 = a1[1];
                        v280 = *(_BYTE **)(v279 + 32);
                        if ( (unsigned __int64)v280 >= *(_QWORD *)(v279 + 24) )
                        {
                          v218 = 95;
                          sub_2257CD0(v279, 95);
                        }
                        else
                        {
                          v281 = (__int64)(v280 + 1);
                          *(_QWORD *)(v279 + 32) = v280 + 1;
                          *v280 = 95;
                        }
                        if ( (unsigned int)sub_BF9790(v229 & 0xFFFFFFFFFFFFFFF8LL, v218, v281, v222, v223, v224) )
                        {
                          v283 = a1[1];
                          v218 = (unsigned int)sub_BF9790(v262, v218, v282, v222, v223, v224) - 1;
                          sub_2257BD0(v283, v218);
                        }
                      }
                      v214 = *(_QWORD *)(v262 + 48);
                    }
                    goto LABEL_232;
                  }
                  LODWORD(v231) = *(unsigned __int8 *)(v261 + 16);
                }
                if ( (unsigned int)(v231 - 2) <= 1 )
                {
                  v232 = *(_BYTE *)(v230 + 19);
                  v218 = *(_QWORD *)(v230 + 40);
                  if ( (v232 & 2) != 0 )
                  {
                    LODWORD(v310) = *(_DWORD *)(v218 + 8);
                    if ( (unsigned int)v310 <= 0x40 )
                    {
                      ptr = *(void **)v218;
LABEL_228:
                      v228 = v299.m128_i8[0];
                      if ( (void *)v229 == ptr )
                        v228 = v67;
                      v299.m128_i8[0] = v228;
                      goto LABEL_231;
                    }
                    sub_21E17D0(p_ptr);
                    v233 = v310;
                  }
                  else
                  {
                    v233 = 8 * ((v232 >> 2) & 0x1F);
                    LODWORD(v310) = v233;
                    if ( v233 > 64 )
                    {
                      sub_21E1730(p_ptr, v218, 0);
                      v233 = v310;
                    }
                    else
                    {
                      ptr = (void *)v218;
                    }
                  }
                  LODWORD(v300) = v233;
                  if ( (unsigned int)v233 <= 0x40 )
                    goto LABEL_228;
                  v234 = sub_21E2A40(p_ptr);
                  if ( (unsigned int)((_DWORD)v300 - v234) <= 0x40 )
                  {
                    v239 = v299.m128_i8[0];
                    if ( v229 == *(_QWORD *)ptr )
                      v239 = v67;
                    v299.m128_i8[0] = v239;
LABEL_241:
                    operator delete[](ptr);
                    goto LABEL_231;
                  }
                  if ( ptr )
                    goto LABEL_241;
                }
LABEL_231:
                v214 = *(_QWORD *)(v230 + 32);
LABEL_232:
                if ( v226 == ++v227 )
                  goto LABEL_282;
              }
            }
            v292 = a3;
          }
        }
        sub_A2D360(v292);
        if ( v295 )
        {
LABEL_263:
          sub_E144E0((__int64)&v307);
          if ( v5 && (unsigned __int8)sub_F43600(*(_QWORD *)v299.m128_u64[0]) )
          {
            sub_971800(a1[1], "cv");
            sub_E1BE40((__int64)a1, v15, v296, v297, v298);
          }
          v246 = a1[1];
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v299.m128_u64[0] + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
          {
            sub_971800(v246, "ad");
            v246 = a1[1];
          }
          sub_971800(v246, "so");
          if ( (unsigned __int8)sub_F43600(*(_QWORD *)v299.m128_u64[0]) )
          {
            ptr = (void *)sub_E145A0(v301, a3);
            v250 = sub_6B4E70(&ptr);
          }
          else
          {
            v250 = sub_F44710(*(_QWORD *)v299.m128_u64[0], "so", v247, v248, v249);
          }
          v211 = 2;
          sub_E1BE40((__int64)a1, v250, v251, v252, v253);
          goto LABEL_215;
        }
      }
      else
      {
        sub_A2D360(a3);
        if ( v245 )
          goto LABEL_263;
      }
      if ( sub_A2D330(a3) )
        goto LABEL_263;
      goto LABEL_271;
    case 8:
      v104 = *(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v104 + 16) - 57 > 1 )
        v104 = sub_F3F310(*(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL), a2, v11, v12);
      sub_E144E0((__int64)&v307);
      sub_971800(a1[1], "tl");
      sub_E1BE40((__int64)a1, v15, v105, v106, v107);
      v110 = *(_DWORD *)(a3 + 16);
      if ( !v110 )
        goto LABEL_50;
      v111 = (unsigned int)(v110 - 1);
      v112 = v111;
      v113 = 56 * v111;
      while ( 2 )
      {
        if ( sub_E181D0(*(_QWORD *)(v104 + 32), v113 + *(_QWORD *)(a3 + 8), v108, v109) )
        {
          v113 -= 56;
          if ( (_DWORD)v112 )
          {
            v112 = (unsigned int)(v112 - 1);
            continue;
          }
        }
        else
        {
          v114 = 7 * (v112 + 1);
          v115 = 0;
          v116 = 8 * v114;
          do
          {
            v117 = v115 + *(_QWORD *)(a3 + 8);
            v115 += 56;
            sub_E2FEE0(a1, *(_QWORD *)(v104 + 32), v117, 0, 0);
          }
          while ( v116 != v115 );
        }
        break;
      }
      goto LABEL_50;
    case 9:
      v72 = sub_F40CA0(*(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFFFFFFFFFFF0LL;
      sub_E144E0((__int64)&v307);
      sub_971800(a1[1], "tl");
      sub_E1BE40((__int64)a1, v15, v73, v74, v75);
      v78 = *(_DWORD *)(a3 + 20);
      v79 = *(unsigned int *)(a3 + 16);
      if ( (_DWORD)v79 == v78 )
        goto LABEL_58;
      if ( sub_E181D0(v72, *(_QWORD *)(a3 + 8) + 56 * v79, *(_QWORD *)(a3 + 8), v77) )
      {
        v78 = *(_DWORD *)(a3 + 16);
LABEL_58:
        if ( !v78 )
        {
LABEL_109:
          v19 = a1[1];
          v20 = *(_BYTE **)(v19 + 32);
          if ( (unsigned __int64)v20 >= *(_QWORD *)(v19 + 24) )
          {
            sub_2257CD0(v19, 69);
            goto LABEL_6;
          }
          goto LABEL_5;
        }
        v80 = (unsigned int)(v78 - 1);
        v81 = v80;
        v82 = 56 * v80;
        while ( sub_E181D0(v72, v82 + *(_QWORD *)(a3 + 8), v76, v77) )
        {
          v82 -= 56;
          if ( !(_DWORD)v81 )
            goto LABEL_109;
          v81 = (unsigned int)(v81 - 1);
        }
      }
      else
      {
        if ( !v78 )
          goto LABEL_109;
        v81 = (unsigned int)(v78 - 1);
      }
      for ( i = 0; ; ++i )
      {
        v85 = *(unsigned int *)(a3 + 16);
        v84 = (unsigned int)v85 > (unsigned int)i ? 7 * i : 7 * v85;
        sub_E2FEE0(a1, v72, *(_QWORD *)(a3 + 8) + 8 * v84, 0, 0);
        if ( v81 == i )
          break;
      }
      goto LABEL_109;
    case 0xA:
      v86 = sub_F3F530(*(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL));
      v91 = sub_B5ABC0(v86, a2, v87, v88, v89, v90);
      v301 = &ptr;
      ptr = &v311;
      v310 = 0x1000000000LL;
      if ( !v91 )
      {
        LODWORD(v310) = 0;
        goto LABEL_112;
      }
      v94 = 0;
      v95 = *(_QWORD *)(v91 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v95 )
        goto LABEL_75;
      while ( (*(_BYTE *)(v95 + 28) & 0x7Fu) - 49 <= 2 )
      {
LABEL_106:
        ++v94;
        v95 = *(_QWORD *)(v95 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v95 )
          goto LABEL_75;
      }
      while ( 1 )
      {
        v96 = *(_QWORD *)(v95 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v95 = v96;
        if ( !v96 )
          break;
        if ( (*(_BYTE *)(v96 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_106;
      }
LABEL_75:
      v97 = v301;
      v98 = v94 + 1;
      v99 = (unsigned __int64 *)(v301 + 2);
      if ( v98 > 16 )
      {
        v299.m128_u64[0] = v91;
        sub_22134E0(v301, v99, v98, 8);
        v97 = ptr;
        v91 = v299.m128_u64[0];
        v99 = (unsigned __int64 *)((char *)ptr + 8 * (unsigned int)v310);
        LODWORD(v98) = v310 + v98;
      }
      *v99 = v91;
      v100 = *(_QWORD *)(v91 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v100 )
      {
        while ( (*(_BYTE *)(v100 + 28) & 0x7Fu) - 49 <= 2 )
        {
LABEL_104:
          *++v99 = v100;
          v100 = *(_QWORD *)(v100 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v100 )
            goto LABEL_82;
        }
        while ( 1 )
        {
          v101 = *(_QWORD *)(v100 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v100 = v101;
          if ( !v101 )
            break;
          if ( (*(_BYTE *)(v101 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_104;
        }
      }
LABEL_82:
      LODWORD(v310) = v98;
      if ( !(_DWORD)v98 )
        goto LABEL_112;
      while ( 2 )
      {
        v102 = *((_QWORD *)ptr + (unsigned int)v98 - 1);
        if ( (*(_BYTE *)(v102 + 68) & 1) != 0 && !*(_QWORD *)(v102 + 40) )
          goto LABEL_86;
        if ( *(char *)(v102 + 29) < 0 )
          v102 = sub_B4E9E0(*((_QWORD *)ptr + (unsigned int)v98 - 1));
        v103 = *(unsigned int *)(v102 + 68);
        if ( (v103 & 0xFFFFFFF0) == 0 )
        {
          sub_B5AD70(v102, (__int64)v99, v103, (__int64)v97, v92, v93);
          LODWORD(v103) = *(_DWORD *)(v102 + 68);
        }
        v99 = (unsigned __int64 *)(*(_QWORD *)(a3 + 8) + 56LL * (((unsigned int)v103 >> 4) + *(_DWORD *)(a3 + 16) - 1));
        if ( sub_E181D0(
               *(_QWORD *)(*((_QWORD *)ptr + (unsigned int)v310 - 1) + 48LL),
               (unsigned __int64)v99,
               (unsigned int)v310,
               (__int64)v97) )
        {
          LODWORD(v98) = v310;
LABEL_86:
          LODWORD(v98) = v98 - 1;
          LODWORD(v310) = v98;
          if ( !(_DWORD)v98 )
            break;
          continue;
        }
        break;
      }
LABEL_112:
      v118 = *(_QWORD *)(v86 + 104);
      v119 = *(_QWORD *)(v118 + 96);
      v120 = v119 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v119 & 1) == 0 )
      {
        v121 = (_QWORD *)(v119 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v119 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (v119 & 2) == 0 )
            goto LABEL_115;
          v138 = v121[2295];
          v139 = v118 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v138 )
          {
            v140 = v121[294];
            v121[304] += 24LL;
            v141 = (v140 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v121[295] >= v141 + 24 && v140 )
            {
              v121[294] = v141 + 24;
              v142 = (v140 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v142 = sub_962430((__int64)(v121 + 294), 24, 24, 3, v92, v93);
              v141 = v142 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v142 = v138;
            v139 = v141 | 4;
            *(_DWORD *)(v142 + 8) = 0;
            *(_QWORD *)(v142 + 16) = v118;
          }
          v120 = v139 & 0xFFFFFFFFFFFFFFFELL;
          v119 = v120 | 1;
          *(_QWORD *)(v118 + 96) = v120 | 1;
        }
      }
      if ( v120 )
      {
        if ( (v120 & 4) != 0 )
        {
          v143 = (_DWORD *)(v119 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v143 )
          {
            v144 = *(_QWORD *)v143;
            v145 = *(_DWORD *)(*(_QWORD *)v143 + 12LL);
            if ( v143[2] != v145 )
            {
              v143[2] = v145;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v144 + 152LL))(v144, v118);
            }
          }
        }
      }
LABEL_115:
      v122 = *(_QWORD *)(v86 + 128);
      if ( (*(_BYTE *)(v122 + 24) & 1) != 0 )
        v123 = sub_B72C40(v122);
      else
        v123 = *(_QWORD *)(v122 + 24);
      v124 = *(_QWORD *)(v86 + 104);
      v125 = *(_QWORD *)(v124 + 96);
      v126 = v125;
      v127 = v125 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v125 & 1) == 0 )
      {
        v128 = (_QWORD *)(v125 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v125 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (v125 & 2) == 0 )
          {
            v129 = *(_QWORD *)(v86 + 128);
            v130 = v123 + 24LL * *(unsigned int *)(v129 + 16);
            goto LABEL_121;
          }
          v146 = v128[2295];
          v147 = v124 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v146 )
          {
            v148 = v128[294];
            v128[304] += 24LL;
            v149 = (v148 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v128[295] >= v149 + 24 && v148 )
            {
              v128[294] = v149 + 24;
              v150 = (v148 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v299.m128_u64[0] = v123;
              v150 = sub_962430((__int64)(v128 + 294), 24, 24, 3, v123, v93);
              v123 = v299.m128_u64[0];
              v149 = v150 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v150 = v146;
            v147 = v149 | 4;
            *(_DWORD *)(v150 + 8) = 0;
            *(_QWORD *)(v150 + 16) = v124;
          }
          v127 = v147 & 0xFFFFFFFFFFFFFFFELL;
          v126 = v127 | 1;
          *(_QWORD *)(v124 + 96) = v127 | 1;
        }
      }
      if ( v127 )
      {
        if ( (v127 & 4) != 0 )
        {
          v151 = (_DWORD *)(v126 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v151 )
          {
            v152 = *(__int64 **)v151;
            v153 = *(_DWORD *)(*(_QWORD *)v151 + 12LL);
            if ( v151[2] != v153 )
            {
              v151[2] = v153;
              v154 = *v152;
              v299.m128_u64[0] = v123;
              (*(void (__fastcall **)(__int64 *, __int64))(v154 + 152))(v152, v124);
              v123 = v299.m128_u64[0];
            }
          }
        }
      }
      v129 = *(_QWORD *)(v86 + 128);
      v124 = *(_QWORD *)(v86 + 104);
      v137 = *(_QWORD *)(v124 + 96);
      v130 = v123 + 24LL * *(unsigned int *)(v129 + 16);
      v136 = v137 & 0xFFFFFFFFFFFFFFFELL;
      LOBYTE(v125) = v137;
      if ( (v137 & 1) == 0 && (v128 = (_QWORD *)(v137 & 0xFFFFFFFFFFFFFFFCLL), (v137 & 0xFFFFFFFFFFFFFFFCLL) != 0) )
      {
LABEL_121:
        if ( (v125 & 2) != 0 )
        {
          v131 = v128[2295];
          v132 = v124 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v131 )
          {
            v133 = v128[294];
            v128[304] += 24LL;
            v134 = (v133 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v128[295] >= v134 + 24 && v133 )
            {
              v128[294] = v134 + 24;
              v135 = (v133 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v299.m128_u64[0] = v130;
              v135 = sub_962430((__int64)(v128 + 294), 24, 24, 3, v130, v93);
              v130 = v299.m128_u64[0];
              v134 = v135 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v135 = v131;
            v132 = v134 | 4;
            *(_DWORD *)(v135 + 8) = 0;
            *(_QWORD *)(v135 + 16) = v124;
          }
          v136 = v132 & 0xFFFFFFFFFFFFFFFELL;
          v137 = v136 | 1;
          *(_QWORD *)(v124 + 96) = v136 | 1;
          goto LABEL_151;
        }
      }
      else
      {
LABEL_151:
        if ( v136 )
        {
          if ( (v136 & 4) != 0 )
          {
            v155 = (_DWORD *)(v137 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v155 )
            {
              v156 = *(__int64 **)v155;
              v157 = *(_DWORD *)(*(_QWORD *)v155 + 12LL);
              if ( v155[2] != v157 )
              {
                v155[2] = v157;
                v158 = *v156;
                v299.m128_u64[0] = v130;
                (*(void (__fastcall **)(__int64 *, __int64))(v158 + 152))(v156, v124);
                v130 = v299.m128_u64[0];
              }
            }
          }
        }
        v129 = *(_QWORD *)(v86 + 128);
      }
      if ( (*(_BYTE *)(v129 + 24) & 1) != 0 )
      {
        v299.m128_u64[0] = v130;
        v199 = sub_B72C40(v129);
        v130 = v299.m128_u64[0];
        p_ptr = (void **)v199;
        v159 = v199;
      }
      else
      {
        p_ptr = *(void ***)(v129 + 24);
        v159 = (__int64)p_ptr;
      }
      v160 = v130 - v159;
      v161 = 0xAAAAAAAAAAAAAAABLL * (v160 >> 3);
      v162 = v161;
      if ( (_DWORD)v310 )
      {
LABEL_164:
        sub_E144E0((__int64)&v307);
        sub_971800(a1[1], "tl");
        v168 = v15;
        sub_E1BE40((__int64)a1, v15, v169, v170, v171);
        if ( (_DWORD)v161 )
        {
          v176 = (unsigned int)(v161 - 1);
          v177 = 0;
          v178 = (__int64 **)(p_ptr + 2);
          v179 = (__int64)&p_ptr[3 * v176 + 5];
          do
          {
            while ( 1 )
            {
              v180 = **v178;
              v181 = v177 + *(_QWORD *)(a3 + 8);
              if ( (*(_BYTE *)(*(_QWORD *)(v180 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xF) != 0 )
                break;
              v168 = *(_QWORD *)(v180 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
              v182 = v177 + *(_QWORD *)(a3 + 8);
              v178 += 3;
              v177 += 56;
              sub_E2FEE0(a1, v168, v182, 0, 0);
              if ( v178 == (__int64 **)v179 )
                goto LABEL_168;
            }
            v178 += 3;
            v177 += 56;
            v168 = sub_F411C0(v180) & 0xFFFFFFFFFFFFFFF0LL;
            sub_E2FEE0(a1, v168, v181, 0, 0);
          }
          while ( (__int64 **)v179 != v178 );
        }
      }
      else
      {
        if ( v161 )
        {
          v163 = (_QWORD **)(v159 + v160 - 8);
          v300 = v306;
          do
          {
            LODWORD(v161) = v162;
            v164 = *v163;
            v299.m128_u64[0] = *(_QWORD *)(a3 + 8) + 56LL * (unsigned int)(v162 - 1);
            v306[0] = *v164;
            v165 = sub_6B4E70(v300);
            if ( !sub_E181D0(v165, v299.m128_u64[0], v166, v167) )
              goto LABEL_164;
            v163 -= 3;
          }
          while ( --v162 );
        }
        sub_E144E0((__int64)&v307);
        sub_971800(a1[1], "tl");
        v168 = v15;
        sub_E1BE40((__int64)a1, v15, v200, v201, v202);
      }
LABEL_168:
      if ( (_DWORD)v310 )
      {
        v183 = 0;
        v184 = 8LL * (unsigned int)(v310 - 1) + 8;
        do
        {
          v185 = *(_QWORD *)((char *)ptr + v183);
          if ( (*(_BYTE *)(v185 + 68) & 1) == 0 || *(_QWORD *)(v185 + 40) )
          {
            if ( *(char *)(v185 + 29) < 0 )
              v185 = sub_B4E9E0(*(_QWORD *)((char *)ptr + v183));
            v186 = *(_DWORD *)(v185 + 68);
            if ( (v186 & 0xFFFFFFF0) == 0 )
            {
              sub_B5AD70(v185, v168, v172, v173, v174, v175);
              v186 = *(_DWORD *)(v185 + 68);
            }
            v168 = *(_QWORD *)(*(_QWORD *)((char *)ptr + v183) + 48LL);
            sub_E2FEE0(a1, v168, *(_QWORD *)(a3 + 8) + 56LL * ((v186 >> 4) + *(_DWORD *)(a3 + 16) - 1), 0, 0);
          }
          v183 += 8;
        }
        while ( v184 != v183 );
      }
      v187 = a1[1];
      v188 = *(_BYTE **)(v187 + 32);
      if ( (unsigned __int64)v188 >= *(_QWORD *)(v187 + 24) )
      {
        sub_2257CD0(v187, 69);
      }
      else
      {
        *(_QWORD *)(v187 + 32) = v188 + 1;
        *v188 = 69;
      }
      if ( ptr != v301 + 2 )
        free(ptr);
LABEL_6:
      result = v303;
LABEL_7:
      if ( (_BYTE)result && !v304 )
      {
        v21 = a1[1];
        result = *(_QWORD *)(v21 + 32);
        if ( result >= *(_QWORD *)(v21 + 24) )
        {
          return sub_2257CD0(v21, 69);
        }
        else
        {
          *(_QWORD *)(v21 + 32) = result + 1;
          *(_BYTE *)result = 69;
        }
      }
      return result;
    case 0xB:
      v22 = *(_QWORD *)(a3 + 8);
      if ( v22 )
      {
        sub_E144E0((__int64)&v307);
        sub_971800(a1[1], "tl");
        sub_E1BE40((__int64)a1, v15, v23, v24, v25);
        if ( !sub_E181D0(v15, a3, v26, v27) )
        {
          sub_971800(a1[1], "di");
          v28 = *(_QWORD *)(*a1 + 16);
          v29 = sub_F3F530(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL));
          v30 = sub_E16440(*(_DWORD *)(v29 + 24), v28, v22);
          if ( v30 )
            sub_E15750(a1[1], v30);
          sub_E2FEE0(a1, *(_QWORD *)(v22 + 48), *(_QWORD *)(a3 + 16), 0, 0);
        }
        goto LABEL_50;
      }
      v189 = a1[1];
      v190 = *(_BYTE **)(v189 + 32);
      if ( (unsigned __int64)v190 >= *(_QWORD *)(v189 + 24) )
      {
        sub_2257CD0(v189, 76);
      }
      else
      {
        v191 = (__int64)(v190 + 1);
        *(_QWORD *)(v189 + 32) = v190 + 1;
        *v190 = 76;
      }
      sub_E1BE40((__int64)a1, v15, v191, v12, v13);
      v19 = a1[1];
      v20 = *(_BYTE **)(v19 + 32);
      if ( (unsigned __int64)v20 < *(_QWORD *)(v19 + 24) )
        goto LABEL_5;
      goto LABEL_51;
    case 0xC:
      if ( !sub_A2D650(a3) )
      {
LABEL_103:
        sub_E23300((__int64)a1, v15, v31, v32, v33);
        result = v303;
        goto LABEL_7;
      }
      sub_E144E0((__int64)&v307);
      sub_A2D670(a3);
      if ( v34 )
      {
        v35 = a1[1];
        v192 = "mc";
      }
      else
      {
        if ( !v5 )
        {
LABEL_20:
          v35 = a1[1];
          goto LABEL_21;
        }
        v237 = *(_QWORD *)(sub_A2D650(a3) + 48);
        v238 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v238 + 16) != 33 )
          v238 = sub_F3F310(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL), a2, v235, v236);
        v35 = a1[1];
        if ( (*(_QWORD *)&byte_8[*(_QWORD *)(v238 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(v238 + 32) & 0xFFFFFFFFFFFFFFF0LL]
             | (unsigned __int8)*(_QWORD *)(v238 + 32))
            & 7) == (*(_QWORD *)&byte_8[v237 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                   | ((unsigned __int8)*(_QWORD *)&byte_8[v237 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v237) & 7)
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 212LL) <= 0x5Fu )
        {
LABEL_21:
          sub_971800(v35, "adL");
          v36 = sub_A2D650(a3);
          sub_E2E4C0((__int64)a1, v36, 0, si128);
          v37 = a1[1];
          v38 = *(_BYTE **)(v37 + 32);
          if ( (unsigned __int64)v38 >= *(_QWORD *)(v37 + 24) )
          {
            sub_2257CD0(v37, 69);
          }
          else
          {
            *(_QWORD *)(v37 + 32) = v38 + 1;
            *v38 = 69;
          }
          sub_A2D670(a3);
          if ( !v39 )
            goto LABEL_6;
          v40 = sub_A68DB0(*(_QWORD *)(*a1 + 8), a3);
          if ( v40 )
          {
            v41 = a1 + 1;
            v42 = v40;
LABEL_26:
            sub_E14650(v41, v42);
          }
LABEL_50:
          v19 = a1[1];
          v20 = *(_BYTE **)(v19 + 32);
          if ( (unsigned __int64)v20 >= *(_QWORD *)(v19 + 24) )
          {
LABEL_51:
            sub_2257CD0(v19, 69);
            result = v303;
            goto LABEL_7;
          }
LABEL_5:
          *(_QWORD *)(v19 + 32) = v20 + 1;
          *v20 = 69;
          goto LABEL_6;
        }
        v192 = "cv";
      }
      sub_971800(v35, v192);
      sub_E1BE40((__int64)a1, v15, v193, v194, v195);
      goto LABEL_20;
    default:
      return result;
  }
}

