void __fastcall sub_1BE1FE0(__int64 *a1, __int64 a2, unsigned int a3, char a4, double a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // r14
  char v10; // cl
  _BYTE *v11; // rsi
  unsigned __int64 v12; // rax
  __int64 *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 *v21; // rbx
  __int64 v22; // rdi
  unsigned __int64 v23; // r15
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 *v26; // r12
  unsigned __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 *v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // esi
  int v45; // eax
  unsigned __int64 v46; // rsi
  __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // edx
  unsigned __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // r14
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // r13
  __int64 v66; // rdi
  unsigned __int64 v67; // rsi
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  __int64 v70; // rax
  unsigned __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  _DWORD *v78; // r14
  _DWORD *i; // r15
  __int64 v80; // r8
  __int64 v81; // rsi
  __int64 v82; // rbx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // rsi
  char v97; // al
  __int64 v98; // r8
  _QWORD *v99; // rbp
  _QWORD *v100; // rbx
  __int64 (__fastcall *v101)(__int64); // rax
  __int64 v102; // rdx
  __int64 (__fastcall *v103)(__int64); // rcx
  __int64 (__fastcall *v104)(__int64); // rax
  __int64 v105; // rax
  __int64 v106; // rax
  int v107; // r12d
  unsigned __int64 v108; // rax
  __int64 v109; // rdx
  unsigned __int64 v110; // rcx
  unsigned __int64 v111; // rax
  unsigned int v112; // r14d
  unsigned int v113; // edx
  __int64 *v114; // rsi
  unsigned int v115; // r12d
  __int64 v116; // r15
  __int64 v117; // r14
  __int64 v118; // r15
  __int64 v119; // r13
  unsigned __int64 v120; // r12
  unsigned __int64 v121; // r14
  int v122; // edi
  int v123; // r8d
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // r15
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // r15
  __int64 v133; // rax
  __int64 v134; // r14
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rcx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // rdx
  __int64 v148; // r8
  __int64 v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rdx
  __int64 v155; // r8
  __int64 v156; // rax
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rax
  int v173; // ecx
  int v174; // edx
  bool v175; // al
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // r8
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // r8
  __int64 v187; // r9
  __int64 v188; // r15
  void *v189; // rax
  _QWORD *v190; // rax
  __int64 v191; // rax
  __int64 v192; // rax
  __int64 v193; // rax
  __int64 v194; // rax
  __int64 v195; // rax
  __int64 v196; // rax
  __int64 v197; // rax
  __int64 v198; // rax
  __int64 v199; // rax
  __int64 v200; // rax
  __int64 v201; // rax
  __int64 v202; // rax
  __int64 v203; // r13
  __int64 v204; // rdi
  int v205; // r12d
  __int64 v206; // rax
  __int64 v207; // rax
  __int64 v208; // rax
  __int64 v209; // rax
  __int64 v210; // rax
  __int64 v211; // rax
  __int64 v212; // rax
  __int64 v213; // rax
  __int64 v214; // r14
  __int64 v215; // rax
  __int64 v216; // rax
  __int64 v217; // rax
  __int64 v218; // rax
  __int64 v219; // rax
  __int64 v220; // rdx
  __int64 v221; // rcx
  __int64 v222; // r8
  __int64 v223; // r9
  __int64 v224; // r15
  void *v225; // rax
  _QWORD *v226; // rax
  __int64 v227; // rdx
  __int64 v228; // rcx
  __int64 v229; // r8
  __int64 v230; // r9
  void *v231; // rax
  _QWORD *v232; // rax
  __int64 v233; // rdx
  __int64 v234; // rcx
  __int64 v235; // r8
  __int64 v236; // r9
  void *v237; // rax
  _QWORD *v238; // rax
  __int64 v239; // rdx
  __int64 v240; // rcx
  __int64 v241; // r8
  __int64 v242; // r9
  __int64 v243; // r15
  void *v244; // rax
  _QWORD *v245; // rax
  char v247; // [rsp+10h] [rbp-1A8h]
  __int64 v248; // [rsp+10h] [rbp-1A8h]
  __int64 v249; // [rsp+10h] [rbp-1A8h]
  __int64 v250; // [rsp+10h] [rbp-1A8h]
  __int64 v251; // [rsp+10h] [rbp-1A8h]
  __int64 v252; // [rsp+10h] [rbp-1A8h]
  __int64 v253; // [rsp+10h] [rbp-1A8h]
  __int64 v254; // [rsp+10h] [rbp-1A8h]
  __int64 v255; // [rsp+10h] [rbp-1A8h]
  int v256; // [rsp+24h] [rbp-194h]
  __int64 *v257; // [rsp+28h] [rbp-190h]
  __int64 v258; // [rsp+28h] [rbp-190h]
  __int64 v259; // [rsp+28h] [rbp-190h]
  unsigned int v260; // [rsp+30h] [rbp-188h]
  unsigned __int64 v261; // [rsp+38h] [rbp-180h]
  unsigned __int8 v263; // [rsp+47h] [rbp-171h]
  _WORD *v264; // [rsp+48h] [rbp-170h]
  __int64 v265; // [rsp+48h] [rbp-170h]
  __int64 v266; // [rsp+48h] [rbp-170h]
  bool v267; // [rsp+52h] [rbp-166h] BYREF
  bool v268; // [rsp+53h] [rbp-165h] BYREF
  unsigned int v269; // [rsp+54h] [rbp-164h] BYREF
  unsigned int v270; // [rsp+58h] [rbp-160h] BYREF
  int v271; // [rsp+5Ch] [rbp-15Ch] BYREF
  unsigned int v272; // [rsp+60h] [rbp-158h] BYREF
  unsigned int v273; // [rsp+64h] [rbp-154h] BYREF
  __int64 v274; // [rsp+68h] [rbp-150h] BYREF
  __int64 v275; // [rsp+70h] [rbp-148h] BYREF
  __int64 v276; // [rsp+78h] [rbp-140h] BYREF
  __int64 v277; // [rsp+80h] [rbp-138h] BYREF
  __int64 v278; // [rsp+88h] [rbp-130h] BYREF
  void *v279; // [rsp+90h] [rbp-128h] BYREF
  signed __int64 v280; // [rsp+98h] [rbp-120h]
  _BYTE v281[16]; // [rsp+A0h] [rbp-118h] BYREF
  void *v282[2]; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v283; // [rsp+C0h] [rbp-F8h] BYREF
  void *v284; // [rsp+D0h] [rbp-E8h] BYREF
  unsigned __int64 v285; // [rsp+D8h] [rbp-E0h]
  __int64 v286; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v287; // [rsp+F0h] [rbp-C8h] BYREF
  char v288; // [rsp+F8h] [rbp-C0h]

  v5 = a3;
  v6 = a2;
  v7 = 19LL * a3;
  v8 = *(_QWORD *)a2;
  v256 = v5;
  v9 = *(_QWORD *)(a2 + 48) + 8 * v7;
  if ( a4 )
  {
    v263 = 0;
    v247 = a4;
  }
  else
  {
    v263 = 0;
    v247 = 1;
    if ( ((*(_BYTE *)(v8 + 28) + 93) & 0x7Fu) <= 2 )
    {
      if ( (_DWORD)v5 )
      {
        v247 = sub_B771C0(v8, a2, v7, (unsigned int)v5);
        if ( !v247 )
        {
          v256 = v5 - 1;
          v5 = (unsigned int)(v5 - 1);
          v263 = 0;
          v247 = 1;
        }
      }
      else
      {
        v247 = 0;
        v5 = 0;
        v263 = 1;
      }
    }
  }
  v10 = *(_BYTE *)(a2 + 105);
  v11 = (_BYTE *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL);
  v279 = v281;
  v280 = 0;
  v281[0] = 0;
  v12 = sub_1BC9950((__int64)a1, v11, v8, v10 & 3, &v279);
  v13 = *(__int64 **)(v8 + 120);
  v277 = 0;
  v260 = v12;
  v261 = HIDWORD(v12);
  v264 = *(_WORD **)(v9 + 16);
  v274 = *(_QWORD *)(v9 + 32);
  v275 = *(_QWORD *)(v9 + 40);
  v16 = (unsigned int)sub_B76070(v8, (__int64)v11, v14, v15);
  if ( (unsigned int)v16 > v5 )
    v16 = v5;
  v18 = 8 * v16;
  v257 = &v13[v16];
  v19 = (__int64)(8 * v16) >> 3;
  v20 = v18 >> 5;
  if ( v20 )
  {
    v21 = &v13[4 * v20];
    while ( !sub_B799A0(*v13) )
    {
      if ( sub_B799A0(v13[1]) )
      {
        v247 &= v257 == v13 + 1;
        goto LABEL_13;
      }
      if ( sub_B799A0(v13[2]) )
      {
        v247 &= v257 == v13 + 2;
        goto LABEL_13;
      }
      if ( sub_B799A0(v13[3]) )
      {
        v247 &= v257 == v13 + 3;
        goto LABEL_13;
      }
      v13 += 4;
      if ( v21 == v13 )
      {
        v19 = v257 - v13;
        goto LABEL_64;
      }
    }
    goto LABEL_12;
  }
LABEL_64:
  if ( v19 != 2 )
  {
    if ( v19 != 3 )
    {
      if ( v19 != 1 )
        goto LABEL_13;
      goto LABEL_67;
    }
    if ( sub_B799A0(*v13) )
    {
LABEL_12:
      v247 &= v257 == v13;
      goto LABEL_13;
    }
    ++v13;
  }
  if ( sub_B799A0(*v13) )
    goto LABEL_12;
  ++v13;
LABEL_67:
  if ( sub_B799A0(*v13) )
    goto LABEL_12;
LABEL_13:
  if ( v247 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(v8 + 120) + 8 * v5);
    v277 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  if ( *(_QWORD *)(a1[31] + 19080) == v274 )
  {
    v58 = sub_BFB9F0((__int64)v264);
    if ( (*(_WORD *)v58 & 0x1FF) == 4 )
      v58 = sub_BFB9F0(*(_QWORD *)(v58 + 16));
    v59 = *(_QWORD *)(v58 + 16);
    sub_168B9F0((__int64)&v287, a1 + 1, *(_DWORD *)(v8 + 24), 0x1850u, 0);
    LODWORD(v278) = v260;
    v60 = sub_16CF160((__int64)&v287, (unsigned int *)&v278);
    LODWORD(v282[0]) = v261;
    v61 = sub_16CF160(v60, (unsigned int *)v282);
    v62 = sub_1682A40(v61, (__int64)&v279);
    v63 = sub_15884C0(v62, &v277);
    v64 = sub_1605D30(v63, &v275);
    v65 = v64;
    if ( *(_BYTE *)(v64 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v64 + 32), v59, 9u);
    }
    else if ( *(_BYTE *)(v64 + 132) )
    {
      v188 = sub_168B9E0((_QWORD *)v64);
      v189 = *(void **)(v65 + 16);
      if ( v189 )
        v189 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v189 + 32LL))(*(_QWORD *)(v65 + 16));
      v284 = v189;
      v190 = sub_1587BC0(v188, (__int64 *)&v284, v184, v185, v186, v187);
      sub_AE9DF0((unsigned __int8 **)(*v190 + 32LL * *(unsigned int *)(v65 + 128) + 8), v59, 9u);
    }
    v66 = v65;
    LODWORD(v284) = v256 + 1;
    goto LABEL_59;
  }
  v23 = *(_QWORD *)&byte_8[v274 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[v274 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v274) & 7;
  v25 = v23 & 0xFFFFFFFFFFFFFFF0LL;
  v276 = *(_QWORD *)&byte_8[v275 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
       | ((unsigned __int8)*(_QWORD *)&byte_8[v275 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v275) & 7;
  v24 = v276;
  v26 = (unsigned __int64 *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
  v27 = v276 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v276 & 0xFFFFFFFFFFFFFFF0LL) != 0
    && (v28 = *(_QWORD *)v27,
        v29 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v27 + 16LL) - 43,
        (unsigned int)v29 <= 1) )
  {
    v24 = sub_9B4870(v28, (__int64)v11, v29, v25, v17);
    v276 = v24;
    v30 = *v26;
  }
  else
  {
    v30 = *(_QWORD *)v25;
    if ( v25 )
    {
      if ( *(_BYTE *)(v30 + 16) == 42 )
      {
        v25 = v276 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (v276 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v25 = *(_QWORD *)v25;
          if ( *(_BYTE *)(v25 + 16) == 42 )
          {
            v23 = *(_QWORD *)(v30 + 32);
            v24 = *(_QWORD *)(v25 + 32);
            v276 = v24;
            v26 = (unsigned __int64 *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
            v30 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
          }
        }
      }
    }
  }
  v31 = v30 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) == v31 )
  {
    v11 = (_BYTE *)v23;
    if ( !sub_16A8D90(&v276, v23, a1[31], v25, v17) )
    {
      v108 = 0;
      if ( (v23 & 8) != 0 )
        v108 = v26[3];
      v109 = 0;
      v110 = v108 | v23 & 7;
      if ( (v276 & 8) != 0 )
        v109 = *(__int64 *)((char *)&qword_18 + (v276 & 0xFFFFFFFFFFFFFFF0LL));
      v111 = v109 | v276 & 7;
      v112 = (unsigned int)v110 >> 9;
      v113 = *(_DWORD *)(v8 + 24);
      v114 = a1 + 1;
      v115 = (unsigned int)v111 >> 9;
      if ( (unsigned int)v111 >> 9 != (unsigned int)v110 >> 9 )
      {
        if ( v263 )
        {
          sub_168B9F0((__int64)&v287, v114, v113, 0x1846u, 0);
          v273 = v260;
          v180 = sub_16CF160((__int64)&v287, &v273);
          LODWORD(v278) = v261;
          v181 = sub_16CF160(v180, (unsigned int *)&v278);
          v182 = sub_1682A40(v181, (__int64)&v279);
          LODWORD(v282[0]) = v112;
          v183 = sub_1BDB780(v182, (unsigned int *)v282);
          LODWORD(v284) = v115;
          sub_1BDB780(v183, (unsigned int *)&v284);
          sub_15F7200(&v287);
LABEL_61:
          v67 = *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_BYTE *)(v67 + 28) & 0x7F) == 0x36 )
            sub_1BDB4F0((__int64)a1, v67);
          goto LABEL_39;
        }
        sub_168B9F0((__int64)&v287, v114, v113, 0x1845u, 0);
        v272 = v260;
        v191 = sub_16CF160((__int64)&v287, &v272);
        v273 = v261;
        v192 = sub_16CF160(v191, &v273);
        v193 = sub_1682A40(v192, (__int64)&v279);
        v194 = sub_15884C0(v193, &v277);
        LODWORD(v278) = v112;
        v195 = sub_1BDB780(v194, (unsigned int *)&v278);
        LODWORD(v282[0]) = v115;
        v196 = sub_1BDB780(v195, (unsigned int *)v282);
        LOBYTE(v271) = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v275 & 0xFFFFFFFFFFFFFFF0LL)
                                                                                + 8LL)
                                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                                        + 16LL)
                     - 43 <= 1;
        v197 = sub_1588420(v196, (unsigned __int8 *)&v271);
        LODWORD(v284) = v256 + 1;
        goto LABEL_161;
      }
      v116 = (v110 >> 6) & 7;
      v117 = (v111 >> 6) & 7;
      if ( (_DWORD)v117 == (_DWORD)v116 )
      {
        v118 = (v110 >> 4) & 3;
        v119 = (v111 >> 4) & 3;
        if ( (_DWORD)v119 == (_DWORD)v118 )
        {
          v120 = HIDWORD(v110);
          v121 = HIDWORD(v111);
          if ( HIDWORD(v111) && ((WORD2(v111) ^ 0xFFC0) & 0xFFC0) != 0 )
          {
            if ( v120 )
            {
              v122 = HIDWORD(v111);
              if ( ((WORD2(v110) ^ 0xFFC0) & 0xFFC0) != 0 )
              {
LABEL_122:
                v123 = HIDWORD(v110);
                goto LABEL_123;
              }
              v123 = 0;
            }
            else
            {
              v122 = HIDWORD(v111);
              v123 = 0;
            }
LABEL_123:
            if ( v123 != v122 )
            {
              sub_168B9F0((__int64)&v287, v114, v113, 0x1852u, 0);
              v269 = v260;
              v124 = sub_16CF160((__int64)&v287, &v269);
              v270 = v261;
              v125 = sub_16CF160(v124, &v270);
              v126 = sub_1682A40(v125, (__int64)&v279);
              v127 = sub_1605D30(v126, &v274);
              v267 = (_DWORD)v120 != 0;
              v128 = sub_1588420(v127, (unsigned __int8 *)&v267);
              v271 = v120;
              v129 = v128;
              sub_F71B00((__int64)v282, &v271);
              v130 = sub_1682AF0(v129, (__int64)v282);
              v268 = (_DWORD)v121 != 0;
              v131 = sub_1588420(v130, (unsigned __int8 *)&v268);
              v272 = v121;
              v132 = v131;
              sub_F71B00((__int64)&v284, &v272);
              v133 = sub_1682AF0(v132, (__int64)&v284);
              v273 = v256 + 1;
              v134 = sub_16CF160(v133, &v273);
              if ( v264 )
                v278 = sub_EEC8C0((unsigned __int64)v264, (__int64)&v273, a5);
              else
                v278 = 0;
              sub_1587DB0(v134, &v278);
              if ( v284 != &v286 )
                operator delete(v284);
              if ( v282[0] != &v283 )
                operator delete(v282[0]);
              goto LABEL_60;
            }
            goto LABEL_169;
          }
          if ( !v120 || ((WORD2(v110) ^ 0xFFC0) & 0xFFC0) == 0 )
          {
LABEL_169:
            v205 = ((unsigned __int8)~(v111 & 7) & (unsigned __int8)v110 & 7) - 1;
            if ( v263 )
            {
              sub_168B9F0((__int64)&v287, v114, v113, 0x184Cu, 0);
              LODWORD(v278) = v260;
              v206 = sub_16CF160((__int64)&v287, (unsigned int *)&v278);
              LODWORD(v282[0]) = v261;
              v207 = sub_16CF160(v206, (unsigned int *)v282);
              v208 = sub_1682A40(v207, (__int64)&v279);
              v197 = sub_1605D30(v208, &v274);
              LODWORD(v284) = v205;
            }
            else
            {
              sub_168B9F0((__int64)&v287, v114, v113, 0x184Bu, 0);
              v273 = v260;
              v215 = sub_16CF160((__int64)&v287, &v273);
              LODWORD(v278) = v261;
              v216 = sub_16CF160(v215, (unsigned int *)&v278);
              v217 = sub_1682A40(v216, (__int64)&v279);
              v218 = sub_15884C0(v217, &v277);
              v219 = sub_1605D30(v218, &v274);
              LODWORD(v282[0]) = v205;
              v197 = sub_16CF160(v219, (unsigned int *)v282);
              LODWORD(v284) = v256 + 1;
            }
            goto LABEL_161;
          }
          v122 = 0;
          goto LABEL_122;
        }
        sub_168B9F0((__int64)&v287, v114, v113, 0x184Eu, 0);
        v273 = v260;
        v209 = sub_16CF160((__int64)&v287, &v273);
        LODWORD(v278) = v261;
        v210 = sub_16CF160(v209, (unsigned int *)&v278);
        v211 = sub_1682A40(v210, (__int64)&v279);
        v212 = sub_15884C0(v211, &v277);
        v213 = sub_1605D30(v212, &v274);
        v214 = v213;
        if ( *(_BYTE *)(v213 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v213 + 32), (unsigned int)v118, 2u);
        }
        else
        {
          if ( !*(_BYTE *)(v213 + 132) )
          {
LABEL_173:
            v204 = v214;
            LODWORD(v282[0]) = v263;
            goto LABEL_165;
          }
          v255 = sub_168B9E0((_QWORD *)v213);
          v237 = *(void **)(v214 + 16);
          if ( v237 )
            v237 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v237 + 32LL))(*(_QWORD *)(v214 + 16));
          v284 = v237;
          v238 = sub_1587BC0(v255, (__int64 *)&v284, v233, v234, v235, v236);
          sub_AE9DF0((unsigned __int8 **)(*v238 + 32LL * *(unsigned int *)(v214 + 128) + 8), (unsigned int)v118, 2u);
        }
        if ( *(_BYTE *)(v214 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v214 + 32), (unsigned int)v119, 2u);
        }
        else if ( *(_BYTE *)(v214 + 132) )
        {
          v243 = sub_168B9E0((_QWORD *)v214);
          v244 = *(void **)(v214 + 16);
          if ( v244 )
            v244 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v244 + 32LL))(*(_QWORD *)(v214 + 16));
          v284 = v244;
          v245 = sub_1587BC0(v243, (__int64 *)&v284, v239, v240, v241, v242);
          sub_AE9DF0((unsigned __int8 **)(*v245 + 32LL * *(unsigned int *)(v214 + 128) + 8), (unsigned int)v119, 2u);
        }
        goto LABEL_173;
      }
      sub_168B9F0((__int64)&v287, v114, v113, 0x1851u, 0);
      v273 = v260;
      v198 = sub_16CF160((__int64)&v287, &v273);
      LODWORD(v278) = v261;
      v199 = sub_16CF160(v198, (unsigned int *)&v278);
      v200 = sub_1682A40(v199, (__int64)&v279);
      v201 = sub_15884C0(v200, &v277);
      v202 = sub_1605D30(v201, &v274);
      v203 = v202;
      if ( *(_BYTE *)(v202 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v202 + 32), (unsigned int)v116, 2u);
      }
      else
      {
        if ( !*(_BYTE *)(v202 + 132) )
        {
LABEL_164:
          v204 = v203;
          LODWORD(v282[0]) = v263;
LABEL_165:
          v197 = sub_16CF160(v204, (unsigned int *)v282);
          LODWORD(v284) = v256 + 1;
LABEL_161:
          v66 = v197;
LABEL_59:
          sub_16CF160(v66, (unsigned int *)&v284);
LABEL_60:
          sub_15F7200(&v287);
          goto LABEL_61;
        }
        v254 = sub_168B9E0((_QWORD *)v202);
        v231 = *(void **)(v203 + 16);
        if ( v231 )
          v231 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v231 + 32LL))(*(_QWORD *)(v203 + 16));
        v284 = v231;
        v232 = sub_1587BC0(v254, (__int64 *)&v284, v227, v228, v229, v230);
        sub_AE9DF0((unsigned __int8 **)(*v232 + 32LL * *(unsigned int *)(v203 + 128) + 8), (unsigned int)v116, 2u);
      }
      if ( *(_BYTE *)(v203 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v203 + 32), (unsigned int)v117, 2u);
      }
      else if ( *(_BYTE *)(v203 + 132) )
      {
        v224 = sub_168B9E0((_QWORD *)v203);
        v225 = *(void **)(v203 + 16);
        if ( v225 )
          v225 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v225 + 32LL))(*(_QWORD *)(v203 + 16));
        v284 = v225;
        v226 = sub_1587BC0(v224, (__int64 *)&v284, v220, v221, v222, v223);
        sub_AE9DF0((unsigned __int8 **)(*v226 + 32LL * *(unsigned int *)(v203 + 128) + 8), (unsigned int)v117, 2u);
      }
      goto LABEL_164;
    }
  }
  if ( (unsigned int)(*(_DWORD *)(v9 + 24) - 3) <= 1 )
  {
    v47 = (__int64)a1;
    sub_168B9F0((__int64)&v287, a1 + 1, *(_DWORD *)(v8 + 24), 0x1854u, 0);
    v273 = v260;
    v135 = sub_16CF160((__int64)&v287, &v273);
    LODWORD(v278) = v261;
    v136 = sub_16CF160(v135, (unsigned int *)&v278);
    v137 = sub_1682A40(v136, (__int64)&v279);
    LODWORD(v282[0]) = v263;
    v138 = sub_16CF160(v137, (unsigned int *)v282);
    LODWORD(v284) = v256 + 1;
    v139 = sub_16CF160(v138, (unsigned int *)&v284);
    LOBYTE(v272) = *(_DWORD *)(v9 + 24) == 4;
    v140 = sub_1588420(v139, (unsigned __int8 *)&v272);
    sub_15884C0(v140, &v277);
LABEL_52:
    sub_15F7200(&v287);
    v57 = *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v57 + 28) & 0x7F) == 0x36 )
      sub_1BDB4F0(v47, v57);
    goto LABEL_39;
  }
  if ( v264 && (*v264 & 0x1FF) == 0x35 )
  {
    sub_168B9F0((__int64)&v287, a1 + 1, *(_DWORD *)(v8 + 24), 0x184Fu, 0);
    v272 = v260;
    v165 = sub_16CF160((__int64)&v287, &v272);
    v273 = v261;
    v166 = sub_16CF160(v165, &v273);
    v167 = sub_1682A40(v166, (__int64)&v279);
    v168 = sub_15884C0(v167, &v277);
    v169 = sub_1605D30(v168, &v274);
    v170 = sub_1605D30(v169, &v275);
    LODWORD(v278) = v263;
    v171 = sub_16CF160(v170, (unsigned int *)&v278);
    LODWORD(v282[0]) = v256 + 1;
    v172 = sub_16CF160(v171, (unsigned int *)v282);
    v173 = *(_DWORD *)(v9 + 24);
    v174 = 1;
    if ( v173 != 5 )
      v174 = 2 * (v173 == 6);
    LODWORD(v284) = v174;
    sub_1587D10(v172, (int *)&v284);
    goto LABEL_60;
  }
  v34 = (__int64 *)(sub_C1BEF0((__int64)&v274, (__int64)v11, v31, v25) & 0xFFFFFFFFFFFFFFF0LL);
  v37 = *v34;
  if ( *(_BYTE *)(*v34 + 16) == 42 || (v37 = sub_1BC7590(v37, (__int64)v11, v32, v33)) != 0 )
  {
    if ( sub_F62670(*(_QWORD *)(*(_QWORD *)(v37 + 32) & 0xFFFFFFFFFFFFFFF0LL), nullptr, v32, v33, v35, v36) )
    {
LABEL_50:
      v47 = (__int64)a1;
      sub_168B9F0((__int64)&v287, a1 + 1, *(_DWORD *)(v8 + 24), 0x184Au, 0);
      v272 = v260;
      v48 = sub_16CF160((__int64)&v287, &v272);
      v273 = v261;
      v49 = sub_16CF160(v48, &v273);
      v50 = sub_1682A40(v49, (__int64)&v279);
      v51 = sub_15884C0(v50, &v277);
      v52 = sub_1605D30(v51, &v274);
      v53 = sub_1605D30(v52, &v275);
      LODWORD(v278) = v263;
      v54 = sub_16CF160(v53, (unsigned int *)&v278);
      LODWORD(v282[0]) = v256 + 1;
      v55 = sub_16CF160(v54, (unsigned int *)v282);
      v56 = *(_DWORD *)(v6 + 92);
LABEL_51:
      LODWORD(v284) = v56;
      sub_16CF160(v55, (unsigned int *)&v284);
      goto LABEL_52;
    }
  }
  else if ( sub_F62670(*v34, nullptr, v32, v33, v35, v36) )
  {
    goto LABEL_50;
  }
  v39 = *(_QWORD *)(v274 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v39 + 16) == 42 || (v39 = sub_1BC7590(*(_QWORD *)(v274 & 0xFFFFFFFFFFFFFFF0LL), 0, v38, v39)) != 0 )
  {
    v40 = *(_QWORD *)(v275 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v40 + 16) != 42 )
    {
      v249 = v39;
      v68 = sub_1BC7590(*(_QWORD *)(v275 & 0xFFFFFFFFFFFFFFF0LL), 0, v38, v39);
      v39 = v249;
      v40 = v68;
      if ( !v68 )
      {
        if ( *(_BYTE *)(*v26 + 16) != 34 )
          goto LABEL_29;
        goto LABEL_73;
      }
    }
    v248 = v39;
    v258 = v40;
    v287 = *(_QWORD *)(v40 + 32);
    if ( sub_16A8D90(&v287, *(_QWORD *)(v39 + 32), a1[31], v39, v40) )
    {
      v175 = sub_F62670(*(_QWORD *)(*(_QWORD *)(v248 + 32) & 0xFFFFFFFFFFFFFFF0LL), nullptr, v41, v248, v42, v43);
      v177 = v248;
      v178 = v258;
      if ( !v175 )
      {
        v179 = *(_QWORD *)(v258 + 32);
        v259 = v248;
        v253 = v178;
        if ( !sub_F62670(*(_QWORD *)(v179 & 0xFFFFFFFFFFFFFFF0LL), nullptr, v176, v177, v178, v43) )
        {
          if ( (unsigned __int8)sub_183BD10((__int64)a1, 0, *(_QWORD *)(v253 + 32), *(_QWORD *)(v259 + 32), v253, v43) )
          {
            v107 = 0;
            goto LABEL_138;
          }
        }
      }
    }
  }
  else
  {
    v81 = *(_QWORD *)(v274 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v81 + 16) == 34 || (v81 = sub_1BC7620(*(_QWORD *)(v274 & 0xFFFFFFFFFFFFFFF0LL), v81, v38, 0)) != 0 )
    {
      v82 = *(_QWORD *)(v275 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v82 + 16) == 34
        || (v82 = sub_1BC7620(*(_QWORD *)(v275 & 0xFFFFFFFFFFFFFFF0LL), v81, v38, v39)) != 0 )
      {
        v83 = sub_A5E7C0(v81, v81, v38, v39, v80);
        v250 = sub_9C7D40(v83, v81, v84, v85, v86);
        if ( v250 )
        {
          v90 = sub_A5E7C0(v82, v81, v87, v88, v89);
          v265 = sub_9C7D40(v90, v81, v91, v92, v93);
          if ( v265 )
          {
            v287 = *(_QWORD *)(v82 + 32);
            v96 = *(_QWORD *)(v81 + 32);
            v97 = sub_16A8D90(&v287, v96, a1[31], v94, v95);
            v98 = v250;
            if ( v97 )
            {
              if ( v265 == v250 )
              {
LABEL_108:
                v107 = 1;
LABEL_138:
                v47 = (__int64)a1;
                sub_168B9F0((__int64)&v287, a1 + 1, *(_DWORD *)(v8 + 24), 0x1848u, 0);
                v273 = v260;
                v159 = sub_16CF160((__int64)&v287, &v273);
                LODWORD(v278) = v261;
                v160 = sub_16CF160(v159, (unsigned int *)&v278);
                v161 = sub_1682A40(v160, (__int64)&v279);
                v162 = sub_15884C0(v161, &v277);
                LODWORD(v282[0]) = v107;
                v163 = sub_16CF160(v162, (unsigned int *)v282);
                v164 = sub_1605D30(v163, &v274);
                v55 = sub_1605D30(v164, &v275);
                goto LABEL_139;
              }
              v251 = v6;
              v99 = (_QWORD *)v98;
              v100 = (_QWORD *)v265;
              while ( 1 )
              {
                v101 = *(__int64 (__fastcall **)(__int64))(*v99 + 32LL);
                if ( v101 == sub_A55E60 )
                  v102 = v99[12];
                else
                  v102 = v101((__int64)v99);
                v103 = sub_A55E60;
                v104 = *(__int64 (__fastcall **)(__int64))(*v100 + 32LL);
                if ( v104 == sub_A55E60 )
                {
                  v105 = v100[12];
                }
                else
                {
                  v266 = v102;
                  v105 = v104((__int64)v100);
                  v102 = v266;
                }
                if ( v102 == v105 )
                {
LABEL_107:
                  v6 = v251;
                  goto LABEL_108;
                }
                v106 = sub_BAB630((__int64)v100, v96, v102, (__int64)v103, v98, v43);
                v100 = (_QWORD *)v106;
                if ( !v106 )
                  break;
                if ( (_QWORD *)v106 == v99 )
                  goto LABEL_107;
              }
              v6 = v251;
            }
          }
        }
      }
    }
    else
    {
      v141 = *(_QWORD *)(v275 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v141 + 16) - 43 <= 1
        || (v141 = sub_1BC7530(*(_QWORD *)(v275 & 0xFFFFFFFFFFFFFFF0LL), 0, v38, v141)) != 0 )
      {
        v252 = v141;
        v287 = sub_9B4870(v141, 0, v38, v141, v80);
        if ( sub_16A8D90(&v287, v274, a1[31], v142, v143) )
        {
          if ( !sub_F62670(*(_QWORD *)(v274 & 0xFFFFFFFFFFFFFFF0LL), nullptr, v144, v145, v146, v43) )
          {
            v149 = sub_9B4870(v252, 0, v147, v252, v148);
            if ( !sub_F62670(*(_QWORD *)(v149 & 0xFFFFFFFFFFFFFFF0LL), nullptr, v150, v151, v152, v153) )
            {
              v156 = sub_9B4870(v252, 0, v154, v252, v155);
              if ( (unsigned __int8)sub_183BD10((__int64)a1, 0, v156, v274, v157, v158) )
              {
                v107 = 2;
                goto LABEL_138;
              }
            }
          }
        }
      }
    }
  }
  if ( *(_BYTE *)(*v26 + 16) != 34 )
    goto LABEL_29;
LABEL_73:
  if ( *(_BYTE *)(*(_QWORD *)(v276 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
    goto LABEL_29;
  v69 = v23 & 7;
  v70 = (v276 >> 3) & 1;
  if ( (v23 & 8) == 0 )
  {
    if ( !v70 )
      goto LABEL_29;
    goto LABEL_76;
  }
  v69 |= v26[3];
  v71 = 0;
  if ( v70 )
LABEL_76:
    v71 = *(__int64 *)((char *)&qword_18 + (v276 & 0xFFFFFFFFFFFFFFF0LL));
  if ( ((v71 >> 6) & 7) != ((v69 >> 6) & 7) )
  {
    v47 = (__int64)a1;
    sub_168B9F0((__int64)&v287, a1 + 1, *(_DWORD *)(v8 + 24), 0x1847u, 0);
    v273 = v260;
    v72 = sub_16CF160((__int64)&v287, &v273);
    LODWORD(v278) = v261;
    v73 = sub_16CF160(v72, (unsigned int *)&v278);
    v74 = sub_1682A40(v73, (__int64)&v279);
    v75 = sub_15884C0(v74, &v277);
    v76 = sub_1605D30(v75, &v274);
    v77 = sub_1605D30(v76, &v275);
    LODWORD(v282[0]) = v263;
    v55 = sub_16CF160(v77, (unsigned int *)v282);
LABEL_139:
    v56 = v256 + 1;
    goto LABEL_51;
  }
LABEL_29:
  if ( !a4 || (unsigned __int8)sub_1BDFA80((__int64)a1, (__int128 *)v8, 1, 1, 0, v43) )
  {
    sub_168B9B0((__int64)&v284, (__int64)(a1 + 1), 6217);
    sub_AE9DF0((unsigned __int8 **)&v284, v260, 3u);
    sub_AE9DF0((unsigned __int8 **)&v284, (unsigned int)v261, 3u);
    sub_AEC220((unsigned __int8 **)&v284, v279, v280);
    v288 = 1;
    v287 = v277;
    sub_AEC610((__int64 *)&v284, &v287);
    sub_AE9DF0((unsigned __int8 **)&v284, v274, 8u);
    sub_AE9DF0((unsigned __int8 **)&v284, v275, 8u);
    sub_AE9DF0((unsigned __int8 **)&v284, v263, 3u);
    sub_AE9DF0((unsigned __int8 **)&v284, (unsigned int)(v256 + 1), 3u);
    sub_AE9DF0((unsigned __int8 **)&v284, *(unsigned int *)(v6 + 92), 3u);
    v44 = *(_DWORD *)(v8 + 24);
    if ( !v44 || (v45 = sub_1021680(a1[34], v44)) == 0 || v45 == 3 )
    {
      v78 = *(_DWORD **)(v6 + 72);
      for ( i = *(_DWORD **)(v6 + 64); v78 != i; i += 16 )
      {
        if ( *i && i[1] )
          sub_1BDA480((__int64 *)&v284, (unsigned __int64)i);
      }
    }
    sub_168CDE0((__int64)&v287, a1 + 1, *(_DWORD *)(v8 + 24), (__int64)&v284, 0);
    sub_15F7200(&v287);
    v46 = *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v46 + 28) & 0x7F) == 0x36 )
      sub_1BDB4F0((__int64)a1, v46);
    if ( v284 && v285 )
      sub_1580C40(v285, (unsigned __int64)v284);
  }
LABEL_39:
  if ( v279 != v281 )
    operator delete(v279);
}
