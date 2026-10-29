void __fastcall sub_1E3F110(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11,
        __m128i a12)
{
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rbx
  char v14; // al
  unsigned __int64 v15; // rax
  char v16; // dl
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rbp
  __m128 v19; // xmm0
  unsigned __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // rdi
  unsigned __int64 v23; // r12
  __int64 v24; // r14
  __int64 (__fastcall **v25)(__int64 *, unsigned __int64 *, __m128, __m128); // rax
  void **v26; // rax
  __int64 v27; // rax
  unsigned int v28; // edx
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rsi
  unsigned __int16 *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  char *v38; // rdi
  unsigned __int64 v39; // rbp
  __int64 v40; // rbx
  __int64 v41; // r15
  void **v42; // rbp
  unsigned __int8 v43; // al
  __int64 v44; // r9
  unsigned __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  unsigned __int64 v49; // rbp
  __int64 v50; // r15
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // r14
  __int64 v55; // rcx
  signed __int64 v56; // rax
  __int64 v57; // rbp
  _DWORD *v58; // rdi
  _DWORD *v59; // r15
  _DWORD *v60; // rdi
  _DWORD *v61; // r15
  _DWORD *v62; // rdi
  _DWORD *v63; // r15
  _DWORD *v64; // rdi
  _DWORD *v65; // r15
  __int64 *v66; // rbp
  __int64 v67; // r14
  unsigned int v68; // r12d
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rax
  __int64 v71; // rdi
  unsigned __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 *v75; // r15
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 *v78; // rdi
  __int64 v79; // rcx
  char v80; // si
  __int64 v81; // rax
  char v82; // r14
  int v83; // ebp
  __int64 v84; // rax
  _QWORD *v85; // rdi
  unsigned int *v86; // rax
  __int64 v87; // rax
  __int64 v88; // r15
  double v89; // xmm4_8
  double v90; // xmm5_8
  __int64 (__fastcall **v91)(__int64 *, unsigned __int64 *, __m128, __m128); // r12
  __int64 v92; // rcx
  char v93; // al
  __int64 v94; // rdx
  __int64 v95; // rax
  char v96; // si
  char v97; // cl
  __int64 v98; // rax
  _DWORD *v99; // rdi
  _DWORD *v100; // rbp
  _DWORD *v101; // rdi
  _DWORD *v102; // rbp
  _DWORD *v103; // rdi
  _DWORD *v104; // rbp
  unsigned __int64 *v105; // rbx
  __int64 v106; // rax
  unsigned __int64 v107; // rbp
  unsigned __int64 v108; // rax
  __int64 v109; // rsi
  __int64 v110; // rdi
  __int64 v111; // r15
  unsigned __int64 v112; // rax
  __int64 *v113; // rcx
  __int64 v114; // r12
  int v115; // eax
  int v116; // eax
  __int64 v117; // rcx
  __int64 v118; // rdx
  __int64 *v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rax
  unsigned int v122; // eax
  unsigned __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rsi
  unsigned int v127; // edx
  unsigned int v128; // eax
  unsigned __int64 v129; // rdx
  __int64 v130; // rsi
  unsigned __int16 *v131; // rbp
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 *v134; // rax
  unsigned __int64 *v135; // r15
  unsigned __int64 v136; // rbx
  unsigned __int64 v137; // rax
  __int64 v138; // rsi
  __int64 v139; // rdi
  __int64 v140; // r12
  unsigned __int64 v141; // rax
  __int64 *v142; // rcx
  __int64 v143; // rbp
  int v144; // eax
  int v145; // eax
  __int64 v146; // rdx
  __int64 *v147; // rax
  __int64 v148; // rdx
  __int64 v149; // rax
  unsigned int v150; // eax
  unsigned __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rsi
  unsigned int v155; // edx
  unsigned int v156; // eax
  unsigned __int64 v157; // rdx
  __int64 v158; // rsi
  unsigned __int16 *v159; // rbx
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 *v162; // rax
  unsigned __int64 *v163; // r15
  unsigned __int64 v164; // rbx
  unsigned __int64 v165; // rax
  __int64 v166; // r12
  __int64 v167; // rdi
  __int64 v168; // rbp
  unsigned __int64 v169; // rax
  __int64 (__fastcall **v170)(__int64 *, unsigned __int64 *, __m128, __m128); // rcx
  __int64 v171; // rdx
  int v172; // eax
  __int64 *v173; // rcx
  int v174; // eax
  __int64 v175; // rcx
  __int64 *v176; // rax
  __int64 *v177; // rdx
  __int64 v178; // rax
  unsigned int v179; // edx
  unsigned __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  unsigned int v183; // eax
  unsigned __int64 v184; // rdx
  __int64 v185; // rsi
  unsigned __int16 *v186; // rbx
  __int64 v187; // rcx
  __int64 v188; // r8
  _BYTE *v189; // r9
  _BYTE *v190; // rbx
  unsigned int v191; // eax
  _BYTE *v192; // r14
  char v193; // cl
  char *v194; // rax
  __int64 v195; // rbp
  __int64 (__fastcall *v196)(__int64 *, unsigned __int64 *, __m128, __m128); // rbx
  _QWORD *v197; // rdi
  unsigned __int8 v198; // al
  __int64 v199; // r9
  unsigned __int64 v200; // rcx
  __int64 v201; // r8
  __int64 v202; // r9
  __int64 v203; // rdx
  unsigned __int64 v204; // rbx
  __int64 v205; // rbx
  __int64 v206; // rcx
  unsigned __int64 v207; // rbx
  unsigned __int64 v208; // rdx
  unsigned __int8 v209; // al
  __int64 v210; // r9
  unsigned __int64 v211; // rcx
  __int64 v212; // r8
  __int64 v213; // r9
  __int64 v214; // rdx
  unsigned __int64 v215; // rbx
  __int64 v216; // rbx
  __int64 v217; // rcx
  unsigned __int64 v218; // rbx
  unsigned __int64 v219; // rdx
  unsigned __int8 v220; // al
  __int64 v221; // r9
  unsigned __int64 v222; // rcx
  __int64 v223; // r8
  __int64 v224; // r9
  __int64 v225; // rdx
  unsigned __int64 v226; // rbp
  __int64 v227; // rbp
  __int64 v228; // rcx
  unsigned __int64 v229; // rbp
  unsigned __int64 v230; // rdx
  __int64 v231; // rax
  char v232; // cl
  __int64 v233; // r12
  __int64 v234; // rax
  __int64 v235; // rcx
  __int64 (__fastcall *v236)(__int64 *, unsigned __int64 *, __m128, __m128); // r13
  __int64 v237; // r15
  char v238; // al
  char ***v239; // rsi
  char ***v240; // rdi
  __int64 v241; // r12
  _QWORD *v242; // rdi
  int v243; // eax
  unsigned int v244; // eax
  __int64 v245; // rdi
  unsigned int v246; // eax
  __int64 v247; // rdi
  __int64 v248; // rdi
  unsigned int v249; // eax
  __int64 v250; // rdi
  unsigned int v251; // eax
  char v252; // al
  __int64 v253; // rax
  __int64 v255; // [rsp+8h] [rbp-3B0h] BYREF
  __int64 (__fastcall **v256)(__int64 *, unsigned __int64 *, __m128, __m128); // [rsp+10h] [rbp-3A8h]
  __int64 *v257; // [rsp+18h] [rbp-3A0h] BYREF
  __int64 v258; // [rsp+20h] [rbp-398h]
  __int64 *v259; // [rsp+28h] [rbp-390h]
  __int64 v260; // [rsp+30h] [rbp-388h]
  __int64 *v261; // [rsp+38h] [rbp-380h]
  __int64 *v262; // [rsp+40h] [rbp-378h]
  void **v263; // [rsp+48h] [rbp-370h]
  void **v264; // [rsp+50h] [rbp-368h]
  void **v265; // [rsp+58h] [rbp-360h]
  __m128 v266; // [rsp+60h] [rbp-358h]
  __int64 (__fastcall **v267)(__int64 *, unsigned __int64 *, __m128, __m128); // [rsp+70h] [rbp-348h]
  unsigned __int64 v268; // [rsp+78h] [rbp-340h]
  _QWORD v269[4]; // [rsp+80h] [rbp-338h] BYREF
  __m128 v270; // [rsp+A0h] [rbp-318h] BYREF
  char v271; // [rsp+B0h] [rbp-308h]
  __m128 v272; // [rsp+C0h] [rbp-2F8h] BYREF
  __m128 v273; // [rsp+D0h] [rbp-2E8h]
  __int64 v274; // [rsp+F8h] [rbp-2C0h]
  void *v275; // [rsp+110h] [rbp-2A8h] BYREF
  __int64 v276; // [rsp+118h] [rbp-2A0h]
  char v277; // [rsp+120h] [rbp-298h] BYREF
  void *v278; // [rsp+160h] [rbp-258h] BYREF
  __int64 v279; // [rsp+168h] [rbp-250h]
  char v280; // [rsp+170h] [rbp-248h] BYREF
  void *v281; // [rsp+1B0h] [rbp-208h] BYREF
  __int64 v282; // [rsp+1B8h] [rbp-200h]
  char v283; // [rsp+1C0h] [rbp-1F8h] BYREF
  __int64 *v284; // [rsp+200h] [rbp-1B8h] BYREF
  __int64 v285; // [rsp+208h] [rbp-1B0h]
  __int64 v286; // [rsp+210h] [rbp-1A8h] BYREF
  __int64 v287; // [rsp+218h] [rbp-1A0h]
  __int64 *v288; // [rsp+250h] [rbp-168h] BYREF
  __int64 v289; // [rsp+258h] [rbp-160h]
  __int64 v290; // [rsp+260h] [rbp-158h] BYREF
  __int64 v291; // [rsp+268h] [rbp-150h]
  __int16 v292; // [rsp+270h] [rbp-148h]
  char v293; // [rsp+272h] [rbp-146h]
  __int64 v294; // [rsp+278h] [rbp-140h]
  __int64 (__fastcall *v295)(__int64 *, unsigned __int64 *, __m128, __m128); // [rsp+290h] [rbp-128h] BYREF
  __int64 v296; // [rsp+298h] [rbp-120h]
  __int64 v297; // [rsp+2A0h] [rbp-118h] BYREF
  unsigned int v298; // [rsp+2A8h] [rbp-110h]
  void *ptr; // [rsp+2E0h] [rbp-D8h] BYREF
  __int64 v300; // [rsp+2E8h] [rbp-D0h]
  __int64 v301; // [rsp+2F0h] [rbp-C8h] BYREF
  __int64 v302; // [rsp+2F8h] [rbp-C0h]
  __int16 v303; // [rsp+300h] [rbp-B8h]
  char v304; // [rsp+302h] [rbp-B6h]
  __int64 v305; // [rsp+308h] [rbp-B0h]

  v12 = a1;
  v13 = a4;
  v14 = *(_BYTE *)(a4 + 28);
  v257 = a2;
  if ( (v14 & 0x7F) == 0x47 )
    v13 = *(_QWORD *)(a4 + 48);
  v15 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
    v15 = *(_QWORD *)v15;
  if ( v15 )
  {
    v16 = *(_BYTE *)(v15 + 8);
    v15 -= 64LL;
    if ( (v16 & 0x7Fu) - 59 >= 3 )
      v15 = 0;
  }
  v17 = 0;
  v255 = v15;
  v18 = *(_QWORD *)(a3 + 40);
  v272 = _mm_loadh_ps((const double *)&v255);
  v255 = 0;
  v19 = _mm_loadh_ps((const double *)&v257);
  v273 = v19;
  if ( v18 )
  {
    sub_18C74E0(a1, 4, 0, 4);
    sub_18C74E0(a1, 6, 0, 4);
    v20 = sub_BFBAE0(v18);
    if ( (*(_WORD *)v20 & 0x1FF) == 0x47 )
    {
      v21 = *(_QWORD *)(v20 + 16);
      v22 = v272.m128_u64[0];
      if ( (*(_BYTE *)(v21 + 28) & 0x7F) == 0x2B )
      {
        if ( v272.m128_u64[0] )
          v17 = v272.m128_u64[0] + 72;
        v23 = v17;
        v24 = v273.m128_u64[0];
        v255 = *(_QWORD *)(v273.m128_u64[0] + 544);
        v25 = *(__int64 (__fastcall ***)(__int64 *, unsigned __int64 *, __m128, __m128))(v273.m128_u64[0] + 512);
        *(_QWORD *)(v273.m128_u64[0] + 512) = 0;
        v256 = v25;
        v287 = *(_QWORD *)(v24 + 9944);
        LODWORD(v25) = *(_DWORD *)(v24 + 80);
        *(_QWORD *)(v24 + 544) = v23;
        LODWORD(v258) = (_DWORD)v25;
        LODWORD(v25) = *(_DWORD *)(v24 + 2632);
        *(_QWORD *)(v24 + 9944) = 0;
        LODWORD(v259) = (_DWORD)v25;
        *(_DWORD *)(v24 + 80) = *(_DWORD *)(v24 + 40);
        *(_DWORD *)(v24 + 2632) = *(_DWORD *)(v24 + 3688);
        v26 = (void **)&v297;
        v295 = (__int64 (__fastcall *)(__int64 *, unsigned __int64 *, __m128, __m128))v24;
        v296 = 1;
        do
        {
          *v26 = (void *)-4096LL;
          v26 += 2;
        }
        while ( v26 != &ptr );
        ptr = &v301;
        v300 = 0x100000000LL;
        v27 = *(_QWORD *)(v24 + 11280);
        v303 = 0;
        v302 = v27;
        v304 = 0;
        v305 = 0;
        *(_QWORD *)(v24 + 11280) = &v295;
        v28 = sub_B76070(v22, 6, -4096, (__int64)&ptr);
        v32 = (unsigned __int8)(*(_WORD *)(v21 + 98) >> 4);
        if ( v32 == 255 )
        {
          LODWORD(v260) = v28;
          v251 = sub_B74880(v21);
          if ( (unsigned int)v260 <= v251 )
            goto LABEL_19;
          v33 = v272.m128_u64[0];
          v32 = (unsigned __int8)(*(_WORD *)(v21 + 98) >> 4);
          if ( v32 == 255 )
          {
            v260 = v272.m128_u64[0];
            v32 = sub_B74880(v21);
            v33 = v260;
          }
        }
        else
        {
          if ( v28 <= v32 )
          {
LABEL_19:
            v34 = v18;
            v35 = sub_1DF2070(v273.m128_i64[0], v18, v273.m128_u64[1], v29, v30, v31, v19, a6);
            v38 = (char *)ptr;
            v39 = (unsigned __int64)v35;
            if ( !(_BYTE)v303 )
            {
              v38 = (char *)ptr;
              if ( (_DWORD)v300 )
              {
                v260 = (__int64)v35;
                v261 = (__int64 *)v13;
                v40 = 0;
                v41 = 8LL * (unsigned int)(v300 - 1) + 8;
                do
                {
                  v42 = *(void ***)&v38[v40];
                  if ( v42 )
                  {
                    if ( *v42 != v42 + 2 )
                      free(*v42);
                    v34 = 48;
                    operator delete(v42, 0x30u);
                    v38 = (char *)ptr;
                  }
                  v40 += 8;
                }
                while ( v41 != v40 );
                v39 = v260;
                v13 = (unsigned __int64)v261;
              }
              *((_QWORD *)v295 + 1410) = v302;
              LOBYTE(v303) = 1;
            }
            if ( v38 != (char *)&v301 )
              free(v38);
            if ( (v296 & 1) == 0 )
            {
              v34 = 16LL * v298;
              operator delete(v297, v34, 8);
            }
            if ( v255 )
            {
              *(_QWORD *)(v24 + 544) = v255;
              *(_QWORD *)(v24 + 512) = v256;
              *(_QWORD *)(v24 + 9944) = v287;
              *(_DWORD *)(v24 + 80) = v258;
              *(_DWORD *)(v24 + 2632) = (_DWORD)v259;
            }
            goto LABEL_37;
          }
          v33 = v272.m128_u64[0];
        }
        sub_1DC20B0((__int64)&v295, v21, *(_QWORD *)(*(_QWORD *)(v33 + 120) + 8LL * v32), v29);
        goto LABEL_19;
      }
    }
    else
    {
      v22 = v272.m128_u64[0];
    }
    v43 = sub_B72F20(v22);
    sub_19A2CD0((__int64)&v295, v273.m128_i64[0], v272.m128_i64[1], 0, v43, v44);
    v34 = v18;
    v39 = (unsigned __int64)sub_1DF2070(v273.m128_i64[0], v18, v273.m128_u64[1], v45, v46, v47, v19, a6);
    sub_19A2DA0((__int64 *)&v295);
LABEL_37:
    v255 = v39;
    if ( v39 != 1 )
    {
      v48 = 0;
      v49 = v39 & 0xFFFFFFFFFFFFFFFELL;
      if ( v49 )
        v48 = (unsigned int)sub_C00A40(v49, v34, 0, v36, v37);
      v255 = sub_19B4A30(v12, v49, v48, 0, 0, 0, v19, a6);
    }
    sub_190D5E0(v12, v19);
    sub_190D5E0(v12, v19);
  }
  v50 = sub_A86E90(*(_QWORD *)(v12 + 248));
  v258 = v50;
  sub_1E37D60(v50, *(__int64 **)(a3 + 48));
  v53 = *(unsigned int *)(v50 + 8);
  v269[0] = v12;
  v269[1] = &v272;
  v295 = sub_1DFF5F0;
  v296 = (__int64)v269;
  v269[2] = v12;
  v54 = *(_QWORD *)v50;
  v55 = *(_QWORD *)v50 + 136 * v53;
  v56 = 0xF0F0F0F0F0F0F0F1LL * ((136 * v53) >> 3);
  v256 = (__int64 (__fastcall **)(__int64 *, unsigned __int64 *, __m128, __m128))v55;
  if ( v56 >> 2 )
  {
    v57 = v54 + 544 * (v56 >> 2);
    while ( 1 )
    {
      v64 = *(_DWORD **)(v54 + 8);
      v65 = &v64[14 * *(unsigned int *)(v54 + 16)];
      if ( v65 != sub_1DFE7B0(v64, (__int64)v65, (__int64)&v295) )
        goto LABEL_49;
      v58 = *(_DWORD **)(v54 + 144);
      v59 = &v58[14 * *(unsigned int *)(v54 + 152)];
      if ( v59 != sub_1DFE7B0(v58, (__int64)v59, (__int64)&v295) )
      {
        v54 += 136;
        goto LABEL_49;
      }
      v60 = *(_DWORD **)(v54 + 280);
      v61 = &v60[14 * *(unsigned int *)(v54 + 288)];
      if ( v61 != sub_1DFE7B0(v60, (__int64)v61, (__int64)&v295) )
      {
        v54 += 272;
        goto LABEL_49;
      }
      v62 = *(_DWORD **)(v54 + 416);
      v63 = &v62[14 * *(unsigned int *)(v54 + 424)];
      if ( v63 != sub_1DFE7B0(v62, (__int64)v63, (__int64)&v295) )
      {
        v54 += 408;
        goto LABEL_49;
      }
      v54 += 544;
      if ( v57 == v54 )
      {
        v56 = 0xF0F0F0F0F0F0F0F1LL * (((__int64)v256 - v54) >> 3);
        break;
      }
    }
  }
  switch ( v56 )
  {
    case 2LL:
LABEL_69:
      v101 = *(_DWORD **)(v54 + 8);
      v102 = &v101[14 * *(unsigned int *)(v54 + 16)];
      if ( v102 != sub_1DFE7B0(v101, (__int64)v102, (__int64)&v295) )
        goto LABEL_49;
      v54 += 136;
LABEL_71:
      v103 = *(_DWORD **)(v54 + 8);
      v104 = &v103[14 * *(unsigned int *)(v54 + 16)];
      if ( v104 == sub_1DFE7B0(v103, (__int64)v104, (__int64)&v295) )
        break;
LABEL_49:
      if ( v256 != (__int64 (__fastcall **)(__int64 *, unsigned __int64 *, __m128, __m128))v54 )
        return;
      break;
    case 3LL:
      v99 = *(_DWORD **)(v54 + 8);
      v100 = &v99[14 * *(unsigned int *)(v54 + 16)];
      if ( v100 != sub_1DFE7B0(v99, (__int64)v100, (__int64)&v295) )
        goto LABEL_49;
      v54 += 136;
      goto LABEL_69;
    case 1LL:
      goto LABEL_71;
  }
  v66 = *(__int64 **)(v12 + 760);
  v67 = *(_QWORD *)(a3 + 24);
  v68 = *(_DWORD *)(a3 + 104);
  v69 = sub_17A2530(v12, v13, 0, v55, v51, v52);
  sub_1B1C8B0(&v270, v66, v69, (_QWORD *)(v255 & 0xFFFFFFFFFFFFFFFELL), v258, v68, v19, a6, v67);
  if ( !v271 )
    return;
  v266 = v270;
  v70 = sub_BFBAE0(v270.m128_u64[1]);
  if ( (*(_WORD *)v70 & 0x1FF) == 0x47
    && (v71 = *(_QWORD *)(v70 + 16), (*(_BYTE *)(v71 + 28) & 0x7Fu) - 34 <= 5)
    && (v72 = sub_B77A30(v71), (v75 = (__int64 *)v72) != nullptr) )
  {
    if ( !(unsigned __int8)sub_B726C0(*(_QWORD *)(v72 + 48), (__int64)v66, v73, v74) )
      return;
    v78 = v257;
    v79 = *(unsigned __int8 *)(v12 + 12592);
    v80 = *(_BYTE *)(v12 + 10024);
    LODWORD(v256) = *(_DWORD *)(v12 + 11200);
    v81 = *(_QWORD *)(v12 + 264);
    v82 = *(_BYTE *)(v12 + 11248);
    LOBYTE(v255) = v80;
    v83 = *(_DWORD *)(v81 + 204);
    *(_BYTE *)(v12 + 12592) = 1;
    *(_BYTE *)(v12 + 11248) = 1;
    *(_BYTE *)(v12 + 10024) = 1;
    v84 = *v78;
    v85 = *(_QWORD **)(v12 + 248);
    LOBYTE(v259) = v79;
    v86 = sub_BC1D90(v85, *(const __m128i **)(v84 + 8), *(_QWORD *)(v84 + 16), v79, v76, v77);
    v87 = sub_1E04120(v12, v75, v86, *(_DWORD *)(v13 + 24), 3);
    v88 = v87;
    if ( !v87
      || (sub_AAA8C0(*(_QWORD *)(v12 + 248), *(_QWORD *)(v87 + 48), *(_QWORD *)(v266.m128_u64[0] + 48), 0, 0, 1, 0)
        & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v252 = v255;
      *(_BYTE *)(v12 + 11248) = v82;
      *(_BYTE *)(v12 + 10024) = v252;
      *(_DWORD *)(v12 + 11200) = (_DWORD)v256;
      *(_BYTE *)(v12 + 12592) = (_BYTE)v259;
      v253 = *(_QWORD *)(v12 + 264);
      if ( *(_DWORD *)(v253 + 204) == 5 )
        *(_BYTE *)(v253 + 194) = 1;
      if ( v83 )
        v83 = 3;
      *(_DWORD *)(v253 + 204) = v83;
      return;
    }
    v91 = &v295;
    sub_1E3D740(
      v12,
      *(_DWORD *)(v13 + 24),
      v88,
      1,
      0,
      0,
      *(double *)v19.m128_u64,
      *(double *)a6.m128_u64,
      a7,
      a8,
      v89,
      v90,
      a11,
      a12);
    v93 = sub_B7D390(v88, (__int64)&v295, 0, v92);
    v94 = *(_QWORD *)(v88 + 48);
    *(_BYTE *)(v88 + 84) = *(_BYTE *)(v88 + 84) & 0xF7 | (8 * ((v93 ^ 1) & 1));
    v95 = sub_C09130(*(_QWORD **)(v12 + 248), 0, 0, 0, v88, 0, *(_DWORD *)(v88 + 24), v94, 0, 0, 0, 0);
    v96 = v255;
    v97 = (char)v259;
    *(_BYTE *)(v12 + 11248) = v82;
    v266.m128_u64[1] = v95;
    LODWORD(v95) = (_DWORD)v256;
    *(_BYTE *)(v12 + 10024) = v96;
    *(_DWORD *)(v12 + 11200) = v95;
    v98 = *(_QWORD *)(v12 + 264);
    *(_BYTE *)(v12 + 12592) = v97;
    if ( *(_DWORD *)(v98 + 204) == 5 )
      *(_BYTE *)(v98 + 194) = 1;
    if ( v83 )
      v83 = 3;
    *(_DWORD *)(v98 + 204) = v83;
  }
  else
  {
    v91 = &v295;
  }
  v263 = &v275;
  v275 = &v277;
  v276 = 0x800000000LL;
  v279 = 0x800000000LL;
  v282 = 0x800000000LL;
  v295 = (__int64 (__fastcall *)(__int64 *, unsigned __int64 *, __m128, __m128))&v297;
  v296 = 0x400000000LL;
  v278 = &v280;
  v105 = *(unsigned __int64 **)(a3 + 64);
  v106 = *(unsigned int *)(a3 + 56);
  v264 = &v278;
  v265 = &v281;
  v281 = &v283;
  v255 = (__int64)&v105[v106];
  if ( v105 != (unsigned __int64 *)v255 )
  {
    v267 = &v295;
    v262 = (__int64 *)&v288;
    v261 = &v290;
    while ( 1 )
    {
      v107 = *v105;
      sub_18C74E0(v12, 6, 0, 4);
      v108 = sub_BFBAE0(v107);
      if ( (*(_WORD *)v108 & 0x1FF) != 0x47 )
      {
        v110 = v272.m128_u64[0];
LABEL_163:
        v220 = sub_B72F20(v110);
        sub_19A2CD0((__int64)&v284, v273.m128_i64[0], v272.m128_i64[1], 0, v220, v221);
        v130 = v107;
        v131 = sub_1DF2070(v273.m128_i64[0], v107, v273.m128_u64[1], v222, v223, v224, v19, a6);
        sub_19A2DA0((__int64 *)&v284);
        if ( v131 != (unsigned __int16 *)((char *)&dword_0 + 1) )
          goto LABEL_164;
        goto LABEL_89;
      }
      v109 = *(_QWORD *)(v108 + 16);
      v110 = v272.m128_u64[0];
      if ( (*(_BYTE *)(v109 + 28) & 0x7F) != 0x2B )
        goto LABEL_163;
      v111 = v273.m128_u64[0];
      v112 = v272.m128_u64[0] + 72;
      if ( !v272.m128_u64[0] )
        v112 = 0;
      v113 = *(__int64 **)(v273.m128_u64[0] + 512);
      v114 = *(_QWORD *)(v273.m128_u64[0] + 544);
      *(_QWORD *)(v273.m128_u64[0] + 512) = 0;
      *(_QWORD *)(v111 + 544) = v112;
      v115 = *(_DWORD *)(v111 + 40);
      v257 = v113;
      LODWORD(v113) = *(_DWORD *)(v111 + 80);
      *(_DWORD *)(v111 + 80) = v115;
      v116 = *(_DWORD *)(v111 + 3688);
      LODWORD(v259) = (_DWORD)v113;
      v117 = *(unsigned int *)(v111 + 2632);
      v118 = *(_QWORD *)(v111 + 9944);
      *(_DWORD *)(v111 + 2632) = v116;
      v119 = &v286;
      *(_QWORD *)(v111 + 9944) = 0;
      LODWORD(v260) = v117;
      v284 = (__int64 *)v111;
      v285 = 1;
      v274 = v118;
      v120 = (__int64)v262;
      do
      {
        *v119 = -4096;
        v119 += 2;
      }
      while ( v119 != (__int64 *)v120 );
      v256 = (__int64 (__fastcall **)(__int64 *, unsigned __int64 *, __m128, __m128))v109;
      v288 = v261;
      v289 = 0x100000000LL;
      v121 = *(_QWORD *)(v111 + 11280);
      v292 = 0;
      v291 = v121;
      v293 = 0;
      v294 = 0;
      *(_QWORD *)(v111 + 11280) = &v284;
      v122 = sub_B76070(v110, 0, v120, v117);
      v126 = (__int64)v256;
      v127 = v122;
      v128 = (unsigned __int8)(*((_WORD *)v256 + 49) >> 4);
      if ( v128 != 255 )
        break;
      v248 = (__int64)v256;
      LODWORD(v256) = v127;
      v268 = v126;
      v249 = sub_B74880(v248);
      if ( (unsigned int)v256 > v249 )
      {
        v126 = v268;
        v129 = v272.m128_u64[0];
        v128 = (unsigned __int8)(*(_WORD *)(v268 + 98) >> 4);
        if ( v128 == 255 )
        {
          v250 = v268;
          v268 = v272.m128_u64[0];
          v256 = (__int64 (__fastcall **)(__int64 *, unsigned __int64 *, __m128, __m128))v126;
          v128 = sub_B74880(v250);
          v129 = v268;
          v126 = (__int64)v256;
        }
LABEL_85:
        sub_1DC20B0((__int64)&v284, v126, *(_QWORD *)(*(_QWORD *)(v129 + 120) + 8LL * v128), v123);
      }
LABEL_86:
      v130 = v107;
      v131 = sub_1DF2070(v273.m128_i64[0], v107, v273.m128_u64[1], v123, v124, v125, v19, a6);
      sub_1CB3BA0((__int64)&v284);
      if ( v114 )
      {
        v134 = v257;
        *(_QWORD *)(v111 + 544) = v114;
        *(_QWORD *)(v111 + 512) = v134;
        *(_QWORD *)(v111 + 9944) = v274;
        *(_DWORD *)(v111 + 80) = (_DWORD)v259;
        *(_DWORD *)(v111 + 2632) = v260;
      }
      if ( v131 != (unsigned __int16 *)((char *)&dword_0 + 1) )
      {
LABEL_164:
        v225 = 0;
        v226 = (unsigned __int64)v131 & 0xFFFFFFFFFFFFFFFELL;
        if ( v226 )
          v225 = (unsigned int)sub_C00A40(v226, v130, 0, v132, v133);
        v227 = sub_19B4A30(v12, v226, v225, 0, 0, 0, v19, a6);
        sub_190D5E0(v12, v19);
        if ( v227 != 1 )
        {
          v228 = (unsigned int)v276;
          v229 = v227 & 0xFFFFFFFFFFFFFFFELL;
          v230 = (unsigned int)v276 + 1LL;
          if ( v230 > HIDWORD(v276) )
          {
            sub_2237220(v263, v263 + 2, v230, 8);
            v228 = (unsigned int)v276;
          }
          *((_QWORD *)v275 + v228) = v229;
          LODWORD(v276) = v276 + 1;
        }
        goto LABEL_90;
      }
LABEL_89:
      sub_190D5E0(v12, v19);
LABEL_90:
      if ( (unsigned __int64 *)v255 == ++v105 )
      {
        v91 = v267;
        goto LABEL_92;
      }
    }
    if ( v127 <= v128 )
      goto LABEL_86;
    v129 = v272.m128_u64[0];
    goto LABEL_85;
  }
LABEL_92:
  v135 = *(unsigned __int64 **)(a3 + 80);
  v255 = (__int64)&v135[*(unsigned int *)(a3 + 72)];
  if ( v135 == (unsigned __int64 *)v255 )
    goto LABEL_110;
  v267 = v91;
  v262 = (__int64 *)&v288;
  v261 = &v290;
  do
  {
    v136 = *v135;
    sub_18C74E0(v12, 6, 0, 4);
    v137 = sub_BFBAE0(v136);
    if ( (*(_WORD *)v137 & 0x1FF) != 0x47 )
    {
      v139 = v272.m128_u64[0];
LABEL_155:
      v209 = sub_B72F20(v139);
      sub_19A2CD0((__int64)&v284, v273.m128_i64[0], v272.m128_i64[1], 0, v209, v210);
      v158 = v136;
      v159 = sub_1DF2070(v273.m128_i64[0], v136, v273.m128_u64[1], v211, v212, v213, v19, a6);
      sub_19A2DA0((__int64 *)&v284);
      if ( v159 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_107;
      goto LABEL_156;
    }
    v138 = *(_QWORD *)(v137 + 16);
    v139 = v272.m128_u64[0];
    if ( (*(_BYTE *)(v138 + 28) & 0x7F) != 0x2B )
      goto LABEL_155;
    v140 = v273.m128_u64[0];
    v141 = v272.m128_u64[0] + 72;
    if ( !v272.m128_u64[0] )
      v141 = 0;
    v142 = *(__int64 **)(v273.m128_u64[0] + 512);
    v143 = *(_QWORD *)(v273.m128_u64[0] + 544);
    *(_QWORD *)(v273.m128_u64[0] + 512) = 0;
    *(_QWORD *)(v140 + 544) = v141;
    v144 = *(_DWORD *)(v140 + 40);
    v257 = v142;
    LODWORD(v142) = *(_DWORD *)(v140 + 80);
    *(_DWORD *)(v140 + 80) = v144;
    v145 = *(_DWORD *)(v140 + 3688);
    LODWORD(v259) = (_DWORD)v142;
    LODWORD(v142) = *(_DWORD *)(v140 + 2632);
    v146 = *(_QWORD *)(v140 + 9944);
    *(_DWORD *)(v140 + 2632) = v145;
    v147 = &v286;
    *(_QWORD *)(v140 + 9944) = 0;
    LODWORD(v260) = (_DWORD)v142;
    v284 = (__int64 *)v140;
    v285 = 1;
    v274 = v146;
    v148 = (__int64)v262;
    do
    {
      *v147 = -4096;
      v147 += 2;
    }
    while ( (__int64 *)v148 != v147 );
    v256 = (__int64 (__fastcall **)(__int64 *, unsigned __int64 *, __m128, __m128))v138;
    v288 = v261;
    v289 = 0x100000000LL;
    v149 = *(_QWORD *)(v140 + 11280);
    v292 = 0;
    v291 = v149;
    v293 = 0;
    v294 = 0;
    *(_QWORD *)(v140 + 11280) = &v284;
    v150 = sub_B76070(v139, v138, v148, 0);
    v154 = (__int64)v256;
    v155 = v150;
    v156 = (unsigned __int8)(*((_WORD *)v256 + 49) >> 4);
    if ( v156 != 255 )
    {
      if ( v155 <= v156 )
        goto LABEL_104;
      v157 = v272.m128_u64[0];
      goto LABEL_103;
    }
    v245 = (__int64)v256;
    LODWORD(v256) = v155;
    v268 = v154;
    v246 = sub_B74880(v245);
    if ( (unsigned int)v256 > v246 )
    {
      v154 = v268;
      v157 = v272.m128_u64[0];
      v156 = (unsigned __int8)(*(_WORD *)(v268 + 98) >> 4);
      if ( v156 == 255 )
      {
        v247 = v268;
        v268 = v272.m128_u64[0];
        v256 = (__int64 (__fastcall **)(__int64 *, unsigned __int64 *, __m128, __m128))v154;
        v156 = sub_B74880(v247);
        v157 = v268;
        v154 = (__int64)v256;
      }
LABEL_103:
      sub_1DC20B0((__int64)&v284, v154, *(_QWORD *)(*(_QWORD *)(v157 + 120) + 8LL * v156), v151);
    }
LABEL_104:
    v158 = v136;
    v159 = sub_1DF2070(v273.m128_i64[0], v136, v273.m128_u64[1], v151, v152, v153, v19, a6);
    sub_1CB3BA0((__int64)&v284);
    if ( v143 )
    {
      v162 = v257;
      *(_QWORD *)(v140 + 544) = v143;
      *(_QWORD *)(v140 + 512) = v162;
      *(_QWORD *)(v140 + 9944) = v274;
      *(_DWORD *)(v140 + 80) = (_DWORD)v259;
      *(_DWORD *)(v140 + 2632) = v260;
    }
    if ( v159 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    {
LABEL_107:
      sub_190D5E0(v12, v19);
      goto LABEL_108;
    }
LABEL_156:
    v214 = 0;
    v215 = (unsigned __int64)v159 & 0xFFFFFFFFFFFFFFFELL;
    if ( v215 )
      v214 = (unsigned int)sub_C00A40(v215, v158, 0, v160, v161);
    v216 = sub_19B4A30(v12, v215, v214, 0, 0, 0, v19, a6);
    sub_190D5E0(v12, v19);
    if ( v216 != 1 )
    {
      v217 = (unsigned int)v279;
      v218 = v216 & 0xFFFFFFFFFFFFFFFELL;
      v219 = (unsigned int)v279 + 1LL;
      if ( v219 > HIDWORD(v279) )
      {
        sub_2237220(v264, v264 + 2, v219, 8);
        v217 = (unsigned int)v279;
      }
      *((_QWORD *)v278 + v217) = v218;
      LODWORD(v279) = v279 + 1;
    }
LABEL_108:
    ++v135;
  }
  while ( (unsigned __int64 *)v255 != v135 );
  v91 = v267;
LABEL_110:
  v163 = *(unsigned __int64 **)(a3 + 96);
  v255 = (__int64)&v163[*(unsigned int *)(a3 + 88)];
  if ( v163 == (unsigned __int64 *)v255 )
    goto LABEL_128;
  v267 = v91;
  v262 = (__int64 *)&v288;
  v261 = &v290;
  while ( 2 )
  {
    v164 = *v163;
    sub_18C74E0(v12, 6, 0, 4);
    v165 = sub_BFBAE0(v164);
    if ( (*(_WORD *)v165 & 0x1FF) != 0x47 )
    {
      v167 = v272.m128_u64[0];
LABEL_147:
      v198 = sub_B72F20(v167);
      sub_19A2CD0((__int64)&v284, v273.m128_i64[0], v272.m128_i64[1], 0, v198, v199);
      v185 = v164;
      v186 = sub_1DF2070(v273.m128_i64[0], v164, v273.m128_u64[1], v200, v201, v202, v19, a6);
      sub_19A2DA0((__int64 *)&v284);
      if ( v186 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_125;
      goto LABEL_148;
    }
    v166 = *(_QWORD *)(v165 + 16);
    v167 = v272.m128_u64[0];
    if ( (*(_BYTE *)(v166 + 28) & 0x7F) != 0x2B )
      goto LABEL_147;
    v168 = v273.m128_u64[0];
    v169 = v272.m128_u64[0] + 72;
    if ( !v272.m128_u64[0] )
      v169 = 0;
    v170 = *(__int64 (__fastcall ***)(__int64 *, unsigned __int64 *, __m128, __m128))(v273.m128_u64[0] + 544);
    v171 = *(_QWORD *)(v273.m128_u64[0] + 9944);
    *(_QWORD *)(v273.m128_u64[0] + 9944) = 0;
    *(_QWORD *)(v168 + 544) = v169;
    v172 = *(_DWORD *)(v168 + 40);
    v256 = v170;
    v173 = *(__int64 **)(v168 + 512);
    *(_QWORD *)(v168 + 512) = 0;
    v257 = v173;
    LODWORD(v173) = *(_DWORD *)(v168 + 80);
    *(_DWORD *)(v168 + 80) = v172;
    v174 = *(_DWORD *)(v168 + 3688);
    LODWORD(v259) = (_DWORD)v173;
    v175 = *(unsigned int *)(v168 + 2632);
    *(_DWORD *)(v168 + 2632) = v174;
    v176 = &v286;
    LODWORD(v260) = v175;
    v284 = (__int64 *)v168;
    v285 = 1;
    v274 = v171;
    v177 = v262;
    do
    {
      *v176 = -4096;
      v176 += 2;
    }
    while ( v176 != v177 );
    v288 = v261;
    v289 = 0x100000000LL;
    v178 = *(_QWORD *)(v168 + 11280);
    v292 = 0;
    v291 = v178;
    v293 = 0;
    v294 = 0;
    *(_QWORD *)(v168 + 11280) = &v284;
    v179 = sub_B76070(v167, 6, 0, v175);
    v183 = (unsigned __int8)(*(_WORD *)(v166 + 98) >> 4);
    if ( v183 == 255 )
    {
      LODWORD(v268) = v179;
      v244 = sub_B74880(v166);
      if ( (unsigned int)v268 > v244 )
      {
        v184 = v272.m128_u64[0];
        v183 = (unsigned __int8)(*(_WORD *)(v166 + 98) >> 4);
        if ( v183 == 255 )
        {
          v268 = v272.m128_u64[0];
          v183 = sub_B74880(v166);
          v184 = v268;
        }
LABEL_121:
        sub_1DC20B0((__int64)&v284, v166, *(_QWORD *)(*(_QWORD *)(v184 + 120) + 8LL * v183), v180);
      }
    }
    else if ( v179 > v183 )
    {
      v184 = v272.m128_u64[0];
      goto LABEL_121;
    }
    v185 = v164;
    v186 = sub_1DF2070(v273.m128_i64[0], v164, v273.m128_u64[1], v180, v181, v182, v19, a6);
    sub_1CB3BA0((__int64)&v284);
    if ( v256 )
    {
      *(_QWORD *)(v168 + 544) = v256;
      *(_QWORD *)(v168 + 512) = v257;
      *(_QWORD *)(v168 + 9944) = v274;
      *(_DWORD *)(v168 + 80) = (_DWORD)v259;
      *(_DWORD *)(v168 + 2632) = v260;
    }
    if ( v186 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    {
LABEL_125:
      sub_190D5E0(v12, v19);
      goto LABEL_126;
    }
LABEL_148:
    v203 = 0;
    v204 = (unsigned __int64)v186 & 0xFFFFFFFFFFFFFFFELL;
    if ( v204 )
      v203 = (unsigned int)sub_C00A40(v204, v185, 0, v187, v188);
    v205 = sub_19B4A30(v12, v204, v203, 0, 0, 0, v19, a6);
    sub_190D5E0(v12, v19);
    if ( v205 != 1 )
    {
      v206 = (unsigned int)v282;
      v207 = v205 & 0xFFFFFFFFFFFFFFFELL;
      v208 = (unsigned int)v282 + 1LL;
      if ( v208 > HIDWORD(v282) )
      {
        sub_2237220(v265, v265 + 2, v208, 8);
        v206 = (unsigned int)v282;
      }
      *((_QWORD *)v281 + v206) = v207;
      LODWORD(v282) = v282 + 1;
    }
LABEL_126:
    if ( (unsigned __int64 *)v255 != ++v163 )
      continue;
    break;
  }
  v91 = v267;
LABEL_128:
  v189 = *(_BYTE **)(a3 + 112);
  v190 = &v189[56 * *(unsigned int *)(a3 + 104)];
  v191 = v296;
  if ( v189 != v190 )
  {
    v257 = (__int64 *)v12;
    v192 = v189;
    v259 = (__int64 *)&v284;
    v256 = v91 + 2;
    v255 = (__int64)v91;
    do
    {
      if ( HIDWORD(v296) <= v191 )
      {
        v231 = sub_2237400(v255, v256, 0, 56, v259);
        v232 = v192[1];
        v233 = v231;
        v260 = v231;
        v234 = v231 + 56LL * (unsigned int)v296;
        *(_BYTE *)v234 = *v192;
        *(_BYTE *)(v234 + 1) = v232;
        *(_QWORD *)(v234 + 8) = v234 + 24;
        v235 = (__int64)v295;
        *(_QWORD *)(v234 + 16) = 0x400000000LL;
        v236 = (__int64 (__fastcall *)(__int64 *, unsigned __int64 *, __m128, __m128))(v235 + 56LL * (unsigned int)v296);
        if ( (__int64 (__fastcall *)(__int64 *, unsigned __int64 *, __m128, __m128))v235 != v236 )
        {
          v237 = v235;
          do
          {
            while ( 1 )
            {
              *(_BYTE *)v233 = *(_BYTE *)v237;
              v238 = *(_BYTE *)(v237 + 1);
              *(_DWORD *)(v233 + 16) = 0;
              *(_BYTE *)(v233 + 1) = v238;
              *(_QWORD *)(v233 + 8) = v233 + 24;
              *(_DWORD *)(v233 + 20) = 4;
              if ( *(_DWORD *)(v237 + 16) )
                break;
              v237 += 56;
              v233 += 56;
              if ( v236 == (__int64 (__fastcall *)(__int64 *, unsigned __int64 *, __m128, __m128))v237 )
                goto LABEL_180;
            }
            v239 = (char ***)(v237 + 8);
            v240 = (char ***)(v233 + 8);
            v237 += 56;
            v233 += 56;
            sub_1576230(v240, v239);
          }
          while ( v236 != (__int64 (__fastcall *)(__int64 *, unsigned __int64 *, __m128, __m128))v237 );
LABEL_180:
          v241 = (__int64)v295;
          v236 = (__int64 (__fastcall *)(__int64 *, unsigned __int64 *, __m128, __m128))((char *)v295
                                                                                       + 56 * (unsigned int)v296);
          if ( v295 != v236 )
          {
            do
            {
              while ( 1 )
              {
                v236 = (__int64 (__fastcall *)(__int64 *, unsigned __int64 *, __m128, __m128))((char *)v236 - 56);
                v242 = *((_QWORD **)v236 + 1);
                if ( v242 == (_QWORD *)((char *)v236 + 24) )
                  break;
                free(v242);
                if ( v236 == (__int64 (__fastcall *)(__int64 *, unsigned __int64 *, __m128, __m128))v241 )
                  goto LABEL_183;
              }
            }
            while ( v236 != (__int64 (__fastcall *)(__int64 *, unsigned __int64 *, __m128, __m128))v241 );
LABEL_183:
            v236 = v295;
          }
        }
        v243 = (int)v284;
        if ( (char *)v236 != (char *)v256 )
        {
          v261 = v284;
          free(v236);
          v243 = (int)v261;
        }
        HIDWORD(v296) = v243;
        v191 = v296 + 1;
        v295 = (__int64 (__fastcall *)(__int64 *, unsigned __int64 *, __m128, __m128))v260;
        LODWORD(v296) = v296 + 1;
      }
      else
      {
        v193 = v192[1];
        v194 = (char *)v295 + 56 * v191;
        *v194 = *v192;
        v194[1] = v193;
        *((_QWORD *)v194 + 1) = v194 + 24;
        *((_QWORD *)v194 + 2) = 0x400000000LL;
        v191 = v296 + 1;
        LODWORD(v296) = v296 + 1;
      }
      v192 += 56;
    }
    while ( v190 != v192 );
    v12 = (unsigned __int64)v257;
    v91 = (__int64 (__fastcall **)(__int64 *, unsigned __int64 *, __m128, __m128))v255;
  }
  sub_1B1FD20(
    *(__int64 **)(v12 + 760),
    v266.m128_i64[0],
    v266.m128_i64[1],
    v258,
    v275,
    (unsigned int)v276,
    v278,
    (unsigned int)v279,
    v281,
    (unsigned int)v282,
    (__int64)v295,
    v191,
    0,
    0,
    *(_QWORD *)(a3 + 24));
  v195 = (__int64)v295;
  v196 = (__int64 (__fastcall *)(__int64 *, unsigned __int64 *, __m128, __m128))((char *)v295 + 56 * (unsigned int)v296);
  if ( v295 != v196 )
  {
    do
    {
      while ( 1 )
      {
        v196 = (__int64 (__fastcall *)(__int64 *, unsigned __int64 *, __m128, __m128))((char *)v196 - 56);
        v197 = *((_QWORD **)v196 + 1);
        if ( v197 == (_QWORD *)((char *)v196 + 24) )
          break;
        free(v197);
        if ( (__int64 (__fastcall *)(__int64 *, unsigned __int64 *, __m128, __m128))v195 == v196 )
          goto LABEL_137;
      }
    }
    while ( (__int64 (__fastcall *)(__int64 *, unsigned __int64 *, __m128, __m128))v195 != v196 );
LABEL_137:
    v196 = v295;
  }
  if ( (char *)v196 != (char *)(v91 + 2) )
    free(v196);
  if ( v281 != v265 + 2 )
    free(v281);
  if ( v278 != v264 + 2 )
    free(v278);
  if ( v275 != v263 + 2 )
    free(v275);
}
