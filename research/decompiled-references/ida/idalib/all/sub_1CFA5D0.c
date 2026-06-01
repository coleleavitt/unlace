unsigned __int64 __fastcall sub_1CFA5D0(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        double a7,
        __m128 a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        unsigned int *a12,
        int a13,
        int a14,
        int a15,
        unsigned int a16,
        const void *a17,
        __int64 a18)
{
  __int64 v19; // r13
  __int64 *v22; // rbx
  char v24; // r15
  int v25; // edx
  _BOOL4 v26; // ecx
  __m128 v27; // xmm0
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned int v33; // ecx
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // r9
  __int64 v41; // rdx
  unsigned __int64 v42; // rdi
  __int64 v43; // rax
  _WORD *v44; // rdx
  _WORD *v45; // rbx
  char v46; // al
  __int64 *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned __int64 v59; // rbp
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  _QWORD *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // r8
  __int64 v77; // r9
  char v78; // al
  __int16 v79; // r15
  __int64 v80; // rax
  __int16 v81; // dx
  __int16 v82; // cx
  __int16 v83; // si
  __int16 v84; // dx
  __int16 v85; // dx
  unsigned __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // r13
  __int64 v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rax
  __int64 v103; // r8
  __int64 v104; // r10
  unsigned __int8 v105; // al
  unsigned __int64 v106; // rdi
  unsigned __int64 v107; // rax
  unsigned int *v108; // r8
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  char v112; // al
  __int64 v113; // rax
  __int64 v114; // rdx
  int v115; // ecx
  int v116; // esi
  __int64 v117; // rax
  unsigned int *v118; // rsi
  __int64 v119; // rax
  bool v120; // al
  _QWORD *v121; // rdx
  unsigned __int64 v122; // rax
  __int64 v123; // rsi
  unsigned __int64 v124; // rax
  unsigned __int64 v125; // r15
  __int64 v126; // rax
  __int64 *v127; // rbx
  int v128; // eax
  char *v129; // rax
  __int64 v130; // rdx
  __int64 *v131; // rcx
  char *v132; // rsi
  size_t v133; // r9
  _QWORD *v134; // rax
  _BYTE *v135; // rdi
  _BYTE *v136; // rax
  unsigned __int64 v137; // rdi
  unsigned __int64 v138; // rdx
  unsigned __int64 v139; // rax
  __int16 v140; // si
  __int64 v141; // rcx
  unsigned __int64 v142; // rax
  __int64 v143; // rax
  __int64 *v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rax
  char v149; // al
  unsigned __int64 i; // rbx
  __int64 v151; // rdx
  _QWORD *v152; // rax
  char v153; // al
  __int64 *v154; // rbx
  _QWORD *v155; // rdi
  unsigned __int64 v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 v162; // r9
  __int64 v163; // rax
  __int64 v164; // rax
  char v165; // al
  _QWORD *v166; // rax
  unsigned __int64 v167; // r14
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // r8
  __int64 v175; // r9
  char *v176; // rax
  __int64 v177; // r8
  __int64 v178; // r9
  size_t v179; // rdx
  __int64 v180; // rax
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // r9
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  char v188; // al
  _BYTE *v189; // rax
  __int64 v190; // rdi
  unsigned __int64 v191; // rax
  __int64 v192; // [rsp-10h] [rbp-258h]
  __int64 v193; // [rsp-10h] [rbp-258h]
  __int64 v194; // [rsp-8h] [rbp-250h]
  unsigned __int64 v196; // [rsp+8h] [rbp-240h]
  __m128i *v197; // [rsp+8h] [rbp-240h]
  __int64 v198; // [rsp+8h] [rbp-240h]
  unsigned __int64 v199; // [rsp+8h] [rbp-240h]
  int v200; // [rsp+10h] [rbp-238h]
  __int64 v201; // [rsp+10h] [rbp-238h]
  __int64 v202; // [rsp+10h] [rbp-238h]
  __int64 v203; // [rsp+10h] [rbp-238h]
  __int64 v204; // [rsp+10h] [rbp-238h]
  __int64 v205; // [rsp+10h] [rbp-238h]
  __int64 v206; // [rsp+10h] [rbp-238h]
  __int64 v207; // [rsp+10h] [rbp-238h]
  unsigned __int64 v208; // [rsp+10h] [rbp-238h]
  __int64 v209; // [rsp+10h] [rbp-238h]
  __int64 v210; // [rsp+10h] [rbp-238h]
  _BOOL4 v211; // [rsp+18h] [rbp-230h]
  unsigned __int64 v212; // [rsp+18h] [rbp-230h]
  int v213; // [rsp+18h] [rbp-230h]
  unsigned int v214; // [rsp+20h] [rbp-228h]
  char v215; // [rsp+2Fh] [rbp-219h]
  unsigned int v216; // [rsp+30h] [rbp-218h]
  char v217; // [rsp+30h] [rbp-218h]
  __int64 v218; // [rsp+30h] [rbp-218h]
  int v219; // [rsp+30h] [rbp-218h]
  _QWORD *v220; // [rsp+30h] [rbp-218h]
  __int64 v221; // [rsp+30h] [rbp-218h]
  __int64 v222; // [rsp+30h] [rbp-218h]
  _QWORD *v223; // [rsp+30h] [rbp-218h]
  unsigned __int64 v224; // [rsp+30h] [rbp-218h]
  __int64 v225; // [rsp+30h] [rbp-218h]
  unsigned __int64 v226; // [rsp+30h] [rbp-218h]
  char v227; // [rsp+38h] [rbp-210h]
  char v228; // [rsp+38h] [rbp-210h]
  __int64 v229; // [rsp+38h] [rbp-210h]
  __int64 v230; // [rsp+38h] [rbp-210h]
  __int64 v231; // [rsp+38h] [rbp-210h]
  __int64 v232; // [rsp+38h] [rbp-210h]
  __int64 *v233; // [rsp+40h] [rbp-208h] BYREF
  void **p_src; // [rsp+48h] [rbp-200h]
  __int64 *v235; // [rsp+50h] [rbp-1F8h]
  __int64 *v236; // [rsp+58h] [rbp-1F0h]
  unsigned __int64 v237; // [rsp+68h] [rbp-1E0h] BYREF
  void *src; // [rsp+70h] [rbp-1D8h] BYREF
  size_t n; // [rsp+78h] [rbp-1D0h]
  _QWORD v240[2]; // [rsp+80h] [rbp-1C8h] BYREF
  __int64 v241; // [rsp+90h] [rbp-1B8h] BYREF
  char v242; // [rsp+98h] [rbp-1B0h]
  __int64 v243; // [rsp+9Ch] [rbp-1ACh]
  char v244; // [rsp+A4h] [rbp-1A4h]
  void *dest; // [rsp+A8h] [rbp-1A0h]
  __m128 v246; // [rsp+B0h] [rbp-198h] BYREF
  char v247; // [rsp+C8h] [rbp-180h]
  __int64 v248; // [rsp+D0h] [rbp-178h] BYREF
  unsigned __int64 v249; // [rsp+D8h] [rbp-170h]
  unsigned __int64 v250; // [rsp+E0h] [rbp-168h] BYREF
  __int64 v251; // [rsp+E8h] [rbp-160h]
  unsigned __int8 *v252; // [rsp+F0h] [rbp-158h] BYREF
  char v253; // [rsp+148h] [rbp-100h]
  unsigned int v254; // [rsp+150h] [rbp-F8h]
  char v255; // [rsp+154h] [rbp-F4h]
  __int64 v256; // [rsp+160h] [rbp-E8h] BYREF
  __int64 *v257; // [rsp+168h] [rbp-E0h]
  __int64 v258; // [rsp+170h] [rbp-D8h]
  __int64 v259; // [rsp+178h] [rbp-D0h] BYREF
  void *v260[2]; // [rsp+1B8h] [rbp-90h]
  __int64 v261; // [rsp+1C8h] [rbp-80h]
  __int64 v262; // [rsp+1D0h] [rbp-78h]
  __int64 v263; // [rsp+1D8h] [rbp-70h]
  unsigned int v264; // [rsp+1E0h] [rbp-68h]
  _QWORD v265[2]; // [rsp+1E8h] [rbp-60h] BYREF
  _BOOL4 v266; // [rsp+1F8h] [rbp-50h]
  int v267; // [rsp+1FCh] [rbp-4Ch]
  bool v268; // [rsp+200h] [rbp-48h]
  bool v269; // [rsp+201h] [rbp-47h]
  char v270; // [rsp+202h] [rbp-46h]
  bool v271; // [rsp+203h] [rbp-45h]
  bool v272; // [rsp+204h] [rbp-44h]
  char v273; // [rsp+205h] [rbp-43h]
  __int16 v274; // [rsp+206h] [rbp-42h]

  v19 = a2;
  v22 = (__int64 *)a1;
  if ( (unsigned __int8)sub_1CBD040(a1, a2, (__int64)a12) )
    return 0;
  v24 = 0;
  v214 = sub_F58610(a3);
  if ( !a9 )
  {
    sub_168B9F0((__int64)&v256, (__int64 *)(a1 + 8), a5, 0x1430u, 0);
    sub_15F7200(&v256);
    return 0;
  }
  v25 = sub_1A3A250(a1);
  if ( !*a6 || (v26 = 0, !a6[1]) )
    v26 = *((_QWORD *)a6 + 1) == 0 && a4 == 3;
  v27 = 0;
  v211 = v26;
  v200 = v25;
  v257 = &v259;
  v258 = 0x800000000LL;
  *(_OWORD *)v260 = 0;
  v263 = a9;
  v264 = a10;
  v256 = 0;
  v261 = 0;
  v262 = a1;
  sub_B85890(v265, a9);
  v265[1] = 0;
  v266 = v211;
  v268 = v200 != 0;
  v269 = v200 == 2;
  v267 = 0;
  v270 = 1;
  v271 = v200 == 0;
  v272 = v200 == 0;
  v273 = 0;
  v274 = 0;
  sub_1A395A0((__int64)&v256);
  if ( *((_QWORD *)a6 + 1) )
  {
    v31 = sub_16A2930(a1, (__int64)a6, 1, v28, v29, v30);
    v237 = v31;
    if ( !v31 )
    {
      v33 = 7429;
      if ( a4 != 3 )
        v33 = 5152;
      sub_168B9F0((__int64)&v248, (__int64 *)(a1 + 8), a10, v33, 0);
      v34 = *((_QWORD *)a6 + 1);
      if ( v253 )
      {
        sub_AE9DF0(&v252, *((_QWORD *)a6 + 1), 0xBu);
      }
      else if ( v255 )
      {
        v98 = sub_168B9E0(&v248);
        v99 = v250;
        if ( v250 )
          v99 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v250 + 32LL))(v250);
        v241 = v99;
        v100 = sub_1587BC0(v98, &v241, v95, (__int64)&v241, v96, v97);
        sub_AE9DF0((unsigned __int8 **)(*v100 + 32LL * v254 + 8), v34, 0xBu);
      }
      v241 = *(_QWORD *)a6;
      sub_1587DB0((__int64)&v248, &v241);
      sub_15F7200(&v248);
      v32 = 0;
      goto LABEL_10;
    }
    if ( (unsigned __int8)sub_169F990(a1, (__int64)a6, v31) )
      goto LABEL_9;
    v215 = sub_B8E180(v237);
    if ( v215 )
    {
      v113 = *(_QWORD *)(a1 + 512);
      v114 = *(_QWORD *)(a1 + 544);
      *(_QWORD *)(a1 + 512) = 0;
      v115 = *(_DWORD *)(a1 + 80);
      v116 = *(_DWORD *)(a1 + 2632);
      v229 = v113;
      v117 = *(_QWORD *)(a1 + 9944);
      *(_QWORD *)(a1 + 9944) = 0;
      v251 = v117;
      v213 = v116;
      v118 = a12;
      *(_QWORD *)(a1 + 544) = v237;
      v202 = v114;
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
      v219 = v115;
      *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
      v215 = sub_1CFA440(a1, (__int64)v118, (__m128)0LL, a8);
      if ( v202 )
      {
        *(_QWORD *)(a1 + 544) = v202;
        *(_QWORD *)(a1 + 512) = v229;
        v119 = v251;
        *(_DWORD *)(a1 + 80) = v219;
        *(_QWORD *)(a1 + 9944) = v119;
        *(_DWORD *)(a1 + 2632) = v213;
      }
    }
    v101 = v237;
    if ( a4 != 3 && a4 )
    {
      sub_17CFA00(a1, (__int64)a6, v237, a9, a10, nullptr, 0);
      v101 = v237;
    }
    v39 = (unsigned __int64)&v256;
    sub_1A48440(a1, (__int64)&v256, v101, 0);
  }
  else
  {
    v237 = *(_QWORD *)(a1 + 544);
    if ( a4 != 3 )
    {
      v248 = a9;
      LODWORD(v249) = a10;
      sub_B85890(&v250, a9);
      if ( (unsigned __int8)sub_17B40D0(a1, v237, v35, v36, v37, v38, v248, v249) )
        goto LABEL_9;
    }
    v39 = (unsigned __int64)&v256;
    sub_1A49A10(a1, (__int64)&v256, (__int64 *)v19, 0, 0, v30, 0.0, *(double *)a8.m128_u64);
    v215 = 0;
  }
  if ( (_DWORD)v256 != 5 )
  {
    if ( *(char *)(v19 + 8) < 0 )
    {
      v39 = v19;
      sub_17A2EE0(a1, (char *)v19, v237);
    }
    if ( !(_DWORD)v258 || (v102 = sub_16C47B0(*v257 & 0xFFFFFFFFFFFFFFF8LL), (v104 = v102) == 0) )
    {
LABEL_26:
      if ( a4 != 3 )
      {
        v212 = 0;
        v41 = *((_QWORD *)a6 + 1);
        if ( v41 )
          goto LABEL_28;
        v227 = 1;
LABEL_164:
        v216 = 0;
        goto LABEL_39;
      }
      v212 = *((_QWORD *)a6 + 1);
      if ( v212 )
      {
LABEL_267:
        v227 = 0;
        v212 = 0;
LABEL_117:
        if ( (unsigned __int8)sub_B8E180(v22[68]) )
        {
          v46 = v215 ^ 1;
          if ( !*((_QWORD *)a6 + 1) )
          {
            v228 = 0;
            v217 = v215;
            goto LABEL_229;
          }
          goto LABEL_41;
        }
        v216 = 3;
        if ( !*((_QWORD *)a6 + 1) )
        {
LABEL_32:
          v41 = 0;
          if ( !v212 )
            goto LABEL_39;
          goto LABEL_33;
        }
        goto LABEL_119;
      }
      goto LABEL_260;
    }
    v105 = *(_BYTE *)(v102 + 28) & 0x7F;
    LOBYTE(v39) = v105 == 47;
    v227 = v39 | (((v105 + 61) & 0x7Fu) <= 1);
    if ( v227 )
    {
      v39 = a10;
      sub_1CC2540(a1, a10, v104, 0);
      goto LABEL_26;
    }
    if ( v105 == 72 )
    {
      v212 = v104;
      goto LABEL_100;
    }
    if ( (unsigned int)v105 - 59 <= 2 && (v203 = v104, v120 = sub_B97450(v104), v104 = v203, v120) )
    {
      v121 = (_QWORD *)(*(_QWORD *)(v203 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v203 + 16) & 4) != 0 )
        v121 = (_QWORD *)*v121;
      if ( !v121 )
      {
        v212 = sub_B97230(0);
        if ( !v212 )
          JUMPOUT(0x2EAB40);
        if ( a4 == 3 )
        {
          if ( !*((_QWORD *)a6 + 1) )
          {
LABEL_260:
            v141 = *(_QWORD *)(a1 + 544);
            if ( (*(_BYTE *)(v141 + 8) & 0x7F) == 0 || (*(_BYTE *)(v141 + 8) & 0x7F) == 0x18 )
            {
LABEL_204:
              v237 = v141;
              LODWORD(v256) = 0;
              LODWORD(v258) = 0;
              if ( v260[0] )
                sub_1A39780((char *)v260[0]);
              v27 = 0;
              LOBYTE(v274) = 0;
              *(_OWORD *)v260 = 0;
              v266 = 0;
              sub_1A395A0((__int64)&v256);
              for ( i = v237; sub_B8E490(i); i = sub_B8ED10(i) )
                ;
              v151 = i;
              v22 = (__int64 *)a1;
              v39 = (unsigned __int64)&v256;
              sub_1A48440(a1, (__int64)&v256, v151, 0);
              if ( (_DWORD)v256 == 5 )
                goto LABEL_9;
              if ( (_DWORD)v258 )
              {
                v208 = *v257 & 0xFFFFFFFFFFFFFFF8LL;
                v104 = sub_16C47B0(v208);
                if ( !v104 )
                {
                  v212 = 0;
                  goto LABEL_116;
                }
                v40 = v208;
                if ( !v208 || (*(_BYTE *)(v208 + 28) & 0x7Fu) - 53 > 1 )
                  goto LABEL_166;
                v212 = 0;
                goto LABEL_105;
              }
              goto LABEL_267;
            }
            v142 = *(_QWORD *)(a1 + 544);
            v205 = 0;
            goto LABEL_194;
          }
LABEL_160:
          v106 = *(_QWORD *)(a1 + 544);
LABEL_161:
          if ( (unsigned __int8)sub_B8E180(v106) )
            goto LABEL_113;
          goto LABEL_140;
        }
        goto LABEL_140;
      }
      v220 = v121;
      v204 = (__int64)(v121 - 8);
      v122 = sub_B97230((__int64)(v121 - 8));
      v104 = v204;
      v212 = v122;
      if ( v122 )
      {
        if ( a4 == 3 )
          goto LABEL_101;
        if ( v204 )
        {
LABEL_123:
          v201 = v104;
          v39 = *v257 & 0xFFFFFFFFFFFFFFF8LL;
          v112 = sub_17A3270(a1, v39, v237, (__int64 *)v19, *((_QWORD *)a6 + 1) != 0);
          v104 = v201;
          if ( !v112 )
          {
            v41 = *((_QWORD *)a6 + 1);
            v212 = 0;
            v227 = a4 != 3;
            if ( !v41 )
              goto LABEL_164;
LABEL_119:
            v42 = v237;
            if ( !v237 )
              goto LABEL_31;
            goto LABEL_30;
          }
LABEL_103:
          v40 = *v257 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v40 || (*(_BYTE *)((*v257 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 53 > 1 )
          {
LABEL_108:
            if ( v212 )
              goto LABEL_109;
            if ( !v104 )
              goto LABEL_115;
LABEL_166:
            v127 = v22 + 1;
            v198 = v104;
            sub_168B9F0((__int64)&v248, v127, a10, 0x1328u, 0);
            sub_169D880((__int64)&v248, &a9);
            sub_15F7200(&v248);
            sub_168B9F0((__int64)&v248, v127, *(_DWORD *)(v198 + 24), 0x71u, 0);
            sub_15F7200(&v248);
            v32 = 0;
            goto LABEL_10;
          }
LABEL_105:
          v39 = *a6;
          if ( (!(_DWORD)v39 || !a6[1]) && !*((_QWORD *)a6 + 1) )
          {
            if ( !v212 )
              goto LABEL_226;
            v155 = (_QWORD *)(*(_QWORD *)(v212 + 16) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*(_QWORD *)(v212 + 16) & 4) != 0 )
              v155 = (_QWORD *)*v155;
            v209 = v40;
            v224 = sub_B8EAA0((__int64)v155);
            v156 = sub_B8EAA0(v237);
            v40 = v209;
            v232 = v156;
            if ( !v156
              || (v233 = (__int64 *)v209,
                  v210 = sub_B91570(v224, v39, v157, v158, v159, v209),
                  v163 = sub_B91570(v232, v39, v232, v160, v161, v162),
                  v40 = (unsigned __int64)v233,
                  v210 != v163) )
            {
LABEL_226:
              v225 = v40;
              sub_168B9F0((__int64)&v248, v22 + 1, a5, 0x1515u, 0);
              sub_15F7200(&v248);
              sub_168B9F0((__int64)&v248, v22 + 1, *(_DWORD *)(*(_QWORD *)(v225 + 64) + 24LL), 0x193Au, 0);
              sub_15F7200(&v248);
              v164 = sub_B9A040(v225);
              sub_168B9F0((__int64)&v248, v22 + 1, *(_DWORD *)(v164 + 24), 0x1937u, 0);
              v39 = (unsigned __int64)&v241;
              LODWORD(v241) = 0;
              sub_1587D10((__int64)&v248, (int *)&v241);
              sub_15F7200(&v248);
              v212 = 0;
              goto LABEL_115;
            }
LABEL_109:
            v106 = v22[68];
            if ( a4 != 3 )
              goto LABEL_110;
            goto LABEL_161;
          }
          goto LABEL_108;
        }
LABEL_140:
        v106 = v22[68];
LABEL_110:
        v107 = v237;
        v108 = *(unsigned int **)(v212 + 56);
        v250 = v106;
        v248 = 0;
        if ( !v237 )
          v107 = v106;
        v249 = v107;
        LODWORD(v251) = a5;
        if ( !(unsigned __int8)sub_1CD38B0(
                                 (__int64)v22,
                                 &v248,
                                 a12,
                                 (__int64 *)v212,
                                 v108,
                                 1,
                                 *(double *)v27.m128_u64,
                                 0,
                                 0) )
          goto LABEL_9;
LABEL_113:
        v218 = *(_QWORD *)(v212 + 48);
        v39 = v218;
        if ( sub_17B1BF0((__int64)v22, v218, v214, a4 == 2, a5, a9) )
          goto LABEL_114;
        sub_168B9F0((__int64)&v248, v22 + 1, a5, 0x150Du, 0);
        v230 = sub_169D880((__int64)&v248, &a9);
        LOBYTE(v233) = *(_BYTE *)(v218 + 73);
        v128 = sub_F58620((unsigned __int8)v233 >> 5);
        v129 = sub_F58640(v128);
        v131 = &v241;
        v243 = 0;
        v132 = v129;
        v133 = v130;
        v244 = 0;
        dest = &v246.m128_u16[4];
        v246.m128_u64[0] = 0;
        LODWORD(v241) = a5;
        HIDWORD(v241) = a5;
        src = v240;
        v246.m128_i8[8] = 0;
        v247 = 0;
        v242 = 1;
        if ( &v129[v130] && !v129 )
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        if ( (unsigned __int64)v130 > 0xF )
        {
          if ( v130 < 0 )
            std::__throw_length_error("basic_string::_M_create");
          v236 = &v241;
          p_src = (void **)v129;
          v233 = (__int64 *)v130;
          v134 = (_QWORD *)operator new(v130 + 1);
          v133 = (size_t)v233;
          src = v134;
          v240[0] = v233;
        }
        else
        {
          if ( v130 == 1 )
          {
            LOBYTE(v240[0]) = *v129;
            v134 = v240;
            goto LABEL_172;
          }
          v134 = v240;
          if ( !v130 )
          {
LABEL_172:
            n = v133;
            *((_BYTE *)v134 + v133) = 0;
            v135 = dest;
            v136 = dest;
            if ( src == v240 )
            {
              v179 = n;
              if ( n )
              {
                if ( n == 1 )
                {
                  *(_BYTE *)dest = v240[0];
                  v135 = dest;
                  v179 = n;
                }
                else
                {
                  p_src = (void **)&v241;
                  memcpy(dest, src, n);
                  v179 = n;
                  v131 = &v241;
                  v135 = dest;
                }
              }
              v246.m128_u64[0] = v179;
              v135[v179] = 0;
              v136 = src;
              goto LABEL_176;
            }
            if ( dest == &v246.m128_u16[4] )
            {
              v233 = (__int64 *)v240[0];
              dest = src;
              v27 = _mm_loadh_ps((const double *)&v233);
              v246 = v27;
            }
            else
            {
              v233 = (__int64 *)v240[0];
              v137 = v246.m128_u64[1];
              dest = src;
              v27 = _mm_loadh_ps((const double *)&v233);
              v246 = v27;
              if ( v136 )
              {
                src = v136;
                v240[0] = v137;
LABEL_176:
                n = 0;
                *v136 = 0;
                if ( src != v240 )
                {
                  v233 = &v241;
                  operator delete(src);
                  v131 = v233;
                }
                v233 = v131;
                sub_1589170(v230, v131);
                if ( dest != v233 + 5 )
                  operator delete(dest);
                sub_15F7200(&v248);
                v39 = (unsigned __int64)(v22 + 1);
                sub_168B9F0((__int64)&v248, v22 + 1, *(_DWORD *)(v218 + 24), 0x73u, 0);
                sub_15F7200(&v248);
                LOBYTE(v214) = *(_BYTE *)(v218 + 73) >> 5;
LABEL_114:
                if ( a4 != 2 )
                {
LABEL_115:
                  if ( a4 == 3 )
                  {
LABEL_116:
                    v227 = 0;
                    goto LABEL_117;
                  }
                  if ( !*((_QWORD *)a6 + 1) )
                  {
LABEL_243:
                    v227 = 1;
                    v216 = 0;
                    goto LABEL_32;
                  }
LABEL_28:
                  v42 = v237;
                  if ( v237 )
                  {
                    v227 = 1;
LABEL_30:
                    if ( ((*(_BYTE *)(v42 + 8) + 70) & 0x7Fu) <= 3 && (unsigned __int8)sub_B8E180(v42) )
                    {
                      v216 = 2;
                      goto LABEL_32;
                    }
LABEL_31:
                    v216 = 3 * (a4 == 3);
                    goto LABEL_32;
                  }
                  goto LABEL_243;
                }
                v152 = sub_B7E870(v218, v39, v109, v110, v111, v40);
                v40 = (unsigned __int64)v152;
                if ( v152 )
                {
                  v241 = 0;
                  if ( !a18
                    || (v223 = v152, v153 = sub_1E61520(v22, v152, &v241, 0), v40 = (unsigned __int64)v223, v153) )
                  {
                    v154 = v22 + 1;
                    v199 = v40;
                    sub_168B9F0((__int64)&v248, v154, a10, 0x1326u, 0);
                    sub_169D880((__int64)&v248, &a9);
                    sub_15F7200(&v248);
                    sub_168B9F0((__int64)&v248, v154, *(_DWORD *)(v199 + 24), 0x71u, 0);
                    sub_15F7200(&v248);
                    goto LABEL_9;
                  }
                  v189 = (_BYTE *)a18;
                  v190 = v241;
                  *(_QWORD *)(a18 + 8) = v223;
                  *v189 = 1;
                  v226 = sub_B97230(v190);
                  sub_1A39AF0((__int64)v22, v241);
                  v39 = v226;
                  sub_1A39AF0((__int64)v22, v226);
                }
                if ( !*((_QWORD *)a6 + 1) )
                {
                  v227 = 1;
                  v216 = 0;
LABEL_33:
                  v43 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, __int64))(*(_QWORD *)v212 + 56LL))(
                          v212,
                          v39,
                          v41);
                  v44 = (_WORD *)v43;
                  if ( (*(_WORD *)(v43 + 30) & 0x180) != 0 )
                  {
                    v233 = v22;
                    v45 = (_WORD *)v43;
                    do
                    {
                      if ( !(*(__int64 (__fastcall **)(_WORD *, unsigned __int64, _WORD *))(*(_QWORD *)v45 + 48LL))(
                              v45,
                              v39,
                              v44) )
                        break;
                      v45 = (_WORD *)(*(__int64 (__fastcall **)(_WORD *))(*(_QWORD *)v45 + 48LL))(v45);
                    }
                    while ( (v45[15] & 0x180) != 0 );
                    v44 = v45;
                    v22 = v233;
                  }
                  v41 = *((_QWORD *)v44 + 7);
LABEL_39:
                  v217 = sub_1CBDF60((__int64)v22, (__int64)a12, v41, v216, a18, v40, v27);
                  if ( v217 )
                  {
                    v228 = 0;
                    goto LABEL_128;
                  }
                  v46 = v215 ^ 1;
                  if ( !*((_QWORD *)a6 + 1) )
                  {
                    v228 = v227 & v46;
                    v217 = v215;
                    goto LABEL_128;
                  }
LABEL_41:
                  v217 = v46 & (v212 == 0);
                  if ( v217 )
                  {
                    v47 = v22 + 1;
                    if ( a4 != 3 )
                    {
                      sub_168B9F0((__int64)&v248, v47, a10, 0x102Fu, 0);
                      v48 = sub_169D880((__int64)&v248, &a9);
                      v49 = sub_17BABD0(v48, (__int64 *)&v237);
                      LOBYTE(src) = 1;
                      v50 = sub_1588420(v49, (unsigned __int8 *)&src);
                      v241 = *(_QWORD *)a6;
                      sub_1587DB0(v50, &v241);
                      sub_15F7200(&v248);
                      v228 = 0;
                      v24 = v217;
                      v51 = 0;
                      v212 = 0;
                      goto LABEL_44;
                    }
                    sub_168B9F0((__int64)&v248, v47, a10, 0xF09u, 0);
                    v185 = sub_169D880((__int64)&v248, &a9);
                    v186 = sub_17BABD0(v185, (__int64 *)&v237);
                    LOBYTE(src) = 1;
                    v187 = sub_1588420(v186, (unsigned __int8 *)&src);
                    v241 = *(_QWORD *)a6;
                    sub_1587DB0(v187, &v241);
                    sub_15F7200(&v248);
                    v228 = sub_B8E180(v22[68]);
                    if ( v228 )
                    {
                      v212 = 0;
                      v188 = v228;
                      v51 = 0;
                      v228 = 0;
                      v217 = v188;
LABEL_44:
                      v197 = (__m128i *)sub_B96A60((_QWORD *)v22[31], v214, v237, a5, a10, a9, v51, 1);
                      if ( *((_QWORD *)a6 + 1) )
                      {
                        v55 = sub_15AB9E0((__int64)a6, (_QWORD *)v22[31], v52, v53, v54, v192);
                        sub_B7C4C0((__int64)v197, v55, v56);
                      }
                      if ( a16 )
                        sub_B7C6B0((__int64)v197, v22[31], a17, a16);
                      if ( a4 == 2 && (!a18 || !*(_BYTE *)a18) )
                      {
                        if ( (*(_BYTE *)(v22[29] + 89) & 1) != 0 )
                        {
                          v180 = sub_B32990(v22[31], 0, 0);
                          sub_B8CC60((__int64)v197, v180, v181, v182, v183, v184);
                        }
                        sub_1665300((__int64)v22, (__int64)v197);
                        sub_1665460((__int64)v22, (__int64)v197);
                      }
                      v59 = sub_BBDF30(v22[31], v237, a10, a9, (__int64)a12, (__int64)v197);
                      if ( v24 )
                      {
                        if ( v212 )
                        {
                          v123 = *(_QWORD *)(v212 + 72);
                          *(_QWORD *)(v59 + 72) = v123;
                          v124 = sub_AEA770((__int64 *)(v123 + 64), v123, v57, v58, v60, v61);
                          v125 = *(_QWORD *)(v59 + 72);
                          *(_QWORD *)(v59 + 64) = v124 & 0xFFFFFFFFFFFFFFFCLL;
                          v58 = *(_WORD *)(v59 + 30) & 0x3FFF;
                          v57 = (unsigned int)v58 | *(_WORD *)(v124 + 30) & 0x26;
                          *(_WORD *)(v59 + 30) = v58 | *(_WORD *)(v124 + 30) & 0x26 | *(_WORD *)(v59 + 30) & 0xC000;
                        }
                        else
                        {
                          *(_QWORD *)(v59 + 72) = v59;
                          v125 = v59;
                        }
                        v126 = *(_QWORD *)(v125 + 64);
                        if ( (v126 & 1) != 0 || (v126 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
                        {
                          v138 = v126 & 0xFFFFFFFFFFFFFFFELL;
                          if ( (v126 & 0xFFFFFFFFFFFFFFFELL) != 0
                            && (v126 & 4) != 0
                            && (v139 = v126 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                          {
                            *(_QWORD *)(v139 + 16) = v59;
                          }
                          else
                          {
                            v138 = v59 & 0xFFFFFFFFFFFFFFFALL;
                          }
                          *(_QWORD *)(v125 + 64) = v138 | 1;
                        }
                        else
                        {
                          *(_QWORD *)(v125 + 64) = sub_6E2500(
                                                     (_QWORD *)(v126 & 0xFFFFFFFFFFFFFFFCLL),
                                                     v59,
                                                     v57,
                                                     v58,
                                                     v60,
                                                     v61)
                                                 | 1;
                        }
                      }
                      sub_B97250((__int64)v197, v59);
                      if ( a14 )
                      {
                        v62 = *(_QWORD *)(v59 + 8);
                        if ( (v62 & 7) != 0 )
                          *(_QWORD *)(v59 + 8) = v62 & 0xFFFFFFFFFFFFFFF8LL | 4;
                      }
                      v63 = sub_BC3930(v59);
                      sub_A7A4F0(v22[31], (__int64)v197, v63, v64, v65, v66);
                      if ( v212 && (*(_QWORD *)sub_BC3640((_QWORD *)v212) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                      {
                        v71 = (_QWORD *)sub_BC3640((_QWORD *)v212);
                        *v71 |= 4uLL;
                      }
                      if ( v228 )
                      {
                        v67 = *(_QWORD *)(v59 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                        if ( (*(_QWORD *)(v59 + 16) & 4) != 0 )
                          v67 = *(_QWORD *)v67;
                        if ( ((*(_BYTE *)(v67 + 8) + 70) & 0x7Fu) <= 3 )
                          sub_1654CB0((__int64)v22, v59, v212, a13);
                      }
                      sub_B90130((__int64)v197, v22[68], v67, v68, v69, v70);
                      sub_B90130(v59, v22[68], v72, v73, v74, v75);
                      if ( a4 == 2 )
                      {
                        if ( !a18 || !*(_BYTE *)a18 )
                          sub_B809C0((__int64)v197);
                        LOWORD(v248) = 1;
                        sub_1836B60(v22, v19, v197, a11, &v248, v27, (__m128i)a8);
                        if ( v212 )
                          sub_17C44D0(v22, v197->m128i_i64, *(_QWORD *)(v212 + 48), 1u);
                        sub_1666A30((__int64)v22, (__int64)v197);
                        sub_16693B0((__int64)v22, v197);
                        sub_1669B40((__int64)v22, (__int64)v197);
                      }
                      else
                      {
                        LOWORD(v248) = 1;
                        sub_1836B60(v22, v19, v197, a11, &v248, v27, (__m128i)a8);
                        if ( v212 )
                        {
                          sub_17C44D0(v22, v197->m128i_i64, *(_QWORD *)(v212 + 48), 1u);
                          sub_1666A30((__int64)v22, (__int64)v197);
                          sub_16693B0((__int64)v22, v197);
                          sub_1669B40((__int64)v22, (__int64)v197);
                          if ( a4 == 3 )
                          {
                            v78 = (*(_BYTE *)(v212 + 29) >> 5) & 3;
                            if ( v78 != 3 )
                            {
                              *(_BYTE *)(v59 + 29) = *(_BYTE *)(v59 + 29) & 0x9F | (32 * v78);
                              v197[1].m128i_i8[13] = *(_BYTE *)(v212 + 29) & 0x60 | v197[1].m128i_i8[13] & 0x9F;
                            }
LABEL_66:
                            v79 = *(_WORD *)(v59 + 30);
                            v80 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v59 + 48LL))(v59);
                            v81 = *(_WORD *)(v59 + 30);
                            v82 = v81 & 0x3FD9;
                            if ( (v79 & 0x102) != 0 )
                            {
                              v83 = *(_WORD *)(v59 + 30) & 0x3ED9 | 0x100;
                              v84 = v83 | v81 & 0xC000;
                              *(_WORD *)(v59 + 30) = v84;
                              if ( v80 )
                              {
                                if ( (*(_BYTE *)(v80 + 30) & 2) != 0 )
                                {
                                  v83 = v82 | 0x106;
                                  *(_WORD *)(v59 + 30) = v82 | 0x106 | v84 & 0xC000;
                                }
                                if ( (v79 & 0xCA0) == 0 )
                                  goto LABEL_74;
                                v85 = v83 | 0x80 | *(_WORD *)(v59 + 30) & 0xC000;
                                v82 = v83;
                                *(_WORD *)(v59 + 30) = v85;
                                goto LABEL_72;
                              }
                              v82 |= 0x100u;
                            }
                            else
                            {
                              *(_WORD *)(v59 + 30) = v81 & 0xFFD9;
                            }
                            if ( (v79 & 0xCA0) == 0
                              || (HIBYTE(v140) = HIBYTE(v82),
                                  LOBYTE(v140) = v82 | 0x80,
                                  v85 = v140 & 0x3FFF | *(_WORD *)(v59 + 30) & 0xC000,
                                  *(_WORD *)(v59 + 30) = v85,
                                  !v80) )
                            {
LABEL_74:
                              if ( !(unsigned __int8)sub_B8E180(v22[68]) )
                              {
                                v167 = sub_B8EAA0(v237);
                                sub_B94A80(v167, v59, v168, v169, v170, v171);
                                v176 = sub_17A3280((char *)v19, v167, v172, v173, v174, v175);
                                if ( v176 )
                                  sub_17B7670((__int64)v22, v59, (__int64)v176, 0, v177, v178);
                              }
                              v86 = sub_BA5C60(
                                      (_QWORD *)v22[31],
                                      v22[68],
                                      v197[1].m128i_i32[2],
                                      v59 & 0xFFFFFFFFFFFFFFFBLL,
                                      a15,
                                      0,
                                      nullptr,
                                      0);
                              *(_BYTE *)(v86 + 29) &= 0x9Fu;
                              sub_B94AD0((__m128i *)v22[68], v86, v87, v88, v89, v90);
                              v93 = v193;
                              v94 = v194;
                              goto LABEL_76;
                            }
LABEL_72:
                            if ( (*(_BYTE *)(v80 + 30) & 0x20) != 0 )
                            {
                              LOBYTE(v82) = v82 | 0xA0;
                              *(_WORD *)(v59 + 30) = v82 & 0x3FFF | v85 & 0xC000;
                            }
                            goto LABEL_74;
                          }
                        }
                        else
                        {
                          sub_1666A30((__int64)v22, (__int64)v197);
                          sub_16693B0((__int64)v22, v197);
                          sub_1669B40((__int64)v22, (__int64)v197);
                          if ( a4 == 3 )
                            goto LABEL_66;
                        }
                      }
                      while ( *(char *)(v19 + 8) < 0 )
                        v19 = *(_QWORD *)v19;
                      sub_17B7670((__int64)v22, v59, v19, 1, v76, v77);
LABEL_76:
                      if ( v212 )
                        sub_17CF9C0(v22, v59, v212);
                      if ( v217 )
                      {
                        sub_B88650(v59, 1);
                        sub_B88650((__int64)v197, 1);
                      }
                      sub_17A5800(v22, v59, v93, v94, v91, v92);
                      if ( a18 && *(_BYTE *)a18 )
                        v32 = *(_QWORD *)(a18 + 8);
                      else
                        v32 = v59;
                      goto LABEL_10;
                    }
LABEL_235:
                    v212 = 0;
                    v24 = 1;
                    v51 = 0;
                    goto LABEL_44;
                  }
                  v228 = v227 & v46;
                  v217 = v215;
LABEL_128:
                  if ( a4 != 3 )
                  {
LABEL_129:
                    if ( v212 )
                    {
                      v24 = 1;
                      v51 = *(_QWORD *)(v212 + 48);
                      goto LABEL_44;
                    }
                    goto LABEL_235;
                  }
LABEL_229:
                  v165 = sub_B8E180(v22[68]);
                  v51 = 0;
                  if ( v165 )
                    goto LABEL_44;
                  goto LABEL_129;
                }
                goto LABEL_28;
              }
            }
            v136 = v240;
            src = v240;
            goto LABEL_176;
          }
        }
        v235 = &v241;
        p_src = &src;
        v233 = (__int64 *)v133;
        memcpy(v134, v132, v133);
        v134 = src;
        v133 = (size_t)v233;
        v131 = &v241;
        goto LABEL_172;
      }
      if ( (*((_BYTE *)v220 - 36) & 0x7Fu) - 60 <= 1 )
      {
        v191 = sub_BBF290(v204);
        v104 = v204;
        v212 = v191;
      }
    }
    else
    {
      v212 = 0;
    }
LABEL_100:
    if ( a4 == 3 )
    {
LABEL_101:
      if ( !*((_QWORD *)a6 + 1) )
      {
        v141 = *(_QWORD *)(a1 + 544);
        if ( (*(_BYTE *)(v141 + 8) & 0x7F) == 0 || (*(_BYTE *)(v141 + 8) & 0x7F) == 0x18 )
          goto LABEL_197;
        v205 = v104;
        v142 = *(_QWORD *)(a1 + 544);
        do
LABEL_194:
          v142 = sub_B8ED10(v142);
        while ( (*(_BYTE *)(v142 + 8) & 0x7F) != 0 && (*(_BYTE *)(v142 + 8) & 0x7F) != 0x18 );
        v104 = v205;
        v141 = v142;
LABEL_197:
        if ( !v104 )
          goto LABEL_204;
        v143 = *(_QWORD *)(v104 + 16);
        v144 = (__int64 *)(v143 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v143 & 4) != 0 )
        {
          v144 = (__int64 *)*v144;
          if ( !v144 )
            goto LABEL_241;
        }
        else if ( !v144 )
        {
LABEL_202:
          v39 = v143 & 0xFFFFFFFFFFFFFFF8LL;
          goto LABEL_203;
        }
        v231 = v104;
        v221 = v141;
        v233 = v144;
        v206 = sub_B91570(v141, v39, (__int64)v144, v141, v103, v40);
        v148 = sub_B91570((__int64)v233, v39, (__int64)v233, v145, v146, v147);
        v141 = v221;
        v104 = v231;
        if ( v206 == v148 )
        {
LABEL_232:
          v166 = (_QWORD *)(*(_QWORD *)(v104 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v104 + 16) & 4) != 0 )
            v166 = (_QWORD *)*v166;
          v237 = (unsigned __int64)v166;
          goto LABEL_103;
        }
        v143 = *(_QWORD *)(v231 + 16);
        if ( (v143 & 4) == 0 )
          goto LABEL_202;
LABEL_241:
        v39 = *(_QWORD *)(v143 & 0xFFFFFFFFFFFFFFF8LL);
LABEL_203:
        v222 = v104;
        v207 = v141;
        v149 = sub_B91990(v141, v39, (__int64)v144, v141, v103, v40);
        v141 = v207;
        v104 = v222;
        if ( !v149 )
          goto LABEL_204;
        goto LABEL_232;
      }
      if ( v104 )
        goto LABEL_103;
      if ( !v212 )
        goto LABEL_117;
      goto LABEL_160;
    }
    goto LABEL_123;
  }
LABEL_9:
  v32 = 0;
LABEL_10:
  v196 = v32;
  sub_169D230((__int64)&v256);
  return v196;
}
