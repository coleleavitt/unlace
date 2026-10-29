__int64 __fastcall sub_1CCEE60(
        unsigned __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        int a10,
        _BYTE *a11)
{
  __int64 v12; // r14
  __int64 v13; // rbx
  int v14; // r12d
  __int64 i; // rbp
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *v18; // rax
  void **v19; // rax
  __int64 v20; // rax
  unsigned __int8 **v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rdi
  int v24; // eax
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // ebp
  char *v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // r12
  void **v33; // r13
  __int64 v35; // rcx
  __int64 v36; // r12
  __int64 v37; // rax
  unsigned int v38; // edx
  unsigned int v39; // eax
  __m128i *v40; // r12
  char v41; // al
  bool v42; // r14
  __int64 v43; // rsi
  char v44; // al
  __int64 v45; // rbx
  unsigned int v46; // eax
  __int64 v47; // rsi
  __int64 v48; // r9
  char v49; // al
  bool v50; // zf
  __int64 v51; // rbx
  char v52; // al
  __int64 v53; // rbp
  __int64 v54; // r13
  const __m128i *v55; // rbx
  unsigned __int64 v56; // rbx
  _QWORD *v57; // r12
  char v58; // al
  __int64 v59; // rbx
  __int64 v60; // rbp
  __int64 (__fastcall *v61)(__int64); // rdx
  char v62; // al
  __int64 v63; // r12
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned __int64 v67; // r14
  __int64 v68; // r13
  int v69; // eax
  int v70; // r12d
  unsigned int v71; // edx
  unsigned int v72; // eax
  unsigned __int64 *v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // rbp
  int v76; // eax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // rdi
  __int64 v81; // rcx
  __int64 v82; // rsi
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // r12
  __int64 v86; // rax
  __int64 v87; // rcx
  unsigned __int8 *v88; // rdx
  char v89; // al
  __m128i v90; // xmm6
  int v91; // eax
  __int64 v92; // rax
  int v93; // edx
  __int64 v94; // rax
  __int64 v95; // rax
  int v96; // edx
  __int64 v97; // rax
  unsigned int v98; // eax
  __int64 v99; // r14
  _QWORD *v100; // rsi
  __int64 v101; // r8
  __int64 v102; // r9
  _QWORD *v103; // rsi
  __int64 v104; // r8
  __int64 v105; // r9
  unsigned __int8 *v106; // r8
  char v107; // bl
  char v108; // r12
  char v109; // r14
  __int64 v110; // rax
  __int64 v111; // rax
  unsigned __int8 **v112; // rdi
  __m128i *v113; // rsi
  __m128i *v114; // rdx
  unsigned __int64 v115; // rbx
  __m128i *v116; // rax
  __int64 *v117; // r14
  __int64 v118; // rax
  char v119; // r13
  __int64 v120; // rdx
  __int64 v121; // rsi
  unsigned int v122; // eax
  unsigned int v123; // eax
  __int64 v124; // r9
  char v125; // al
  __int64 v126; // r8
  __int64 v127; // r9
  char v128; // al
  __m128i *v129; // rbx
  __int64 v130; // rdx
  __int64 v131; // rcx
  char v132; // al
  const __m128i *v133; // rbx
  const __m128i *v134; // r14
  const __m128i *v135; // r13
  const __m128i *v136; // rdx
  unsigned int v137; // r12d
  __int64 *v138; // rax
  __int64 *v139; // rax
  const __m128i *v140; // rax
  __m128 v141; // xmm5
  _QWORD *v142; // rsi
  _DWORD *v143; // r13
  __int64 v144; // r12
  unsigned int v145; // eax
  __int64 v146; // rbx
  unsigned __int8 **v147; // rax
  char v148; // al
  unsigned __int8 **v149; // rdi
  unsigned int v150; // eax
  unsigned __int64 v151; // r12
  __int64 v152; // r14
  const __m128i *v153; // r13
  __int64 v154; // r13
  unsigned __int8 **v155; // r14
  __int64 v156; // rbx
  __int64 v157; // rax
  __int64 v158; // rax
  unsigned int v159; // ebp
  __int64 v160; // rbx
  unsigned int v161; // edx
  unsigned int v162; // eax
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // r8
  __int64 v166; // r9
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  unsigned __int64 v170; // r14
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  __int64 v175; // r14
  __int64 v176; // rax
  _QWORD *v177; // rax
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // r9
  unsigned __int64 v181; // r14
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // r12
  __int64 v187; // rax
  _QWORD *v188; // rax
  __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 v191; // r8
  __int64 v192; // r9
  __int64 v193; // r12
  __int64 v194; // rax
  _QWORD *v195; // rax
  unsigned int v196; // [rsp+8h] [rbp-4A0h]
  __int64 v197; // [rsp+8h] [rbp-4A0h]
  __int64 v198; // [rsp+8h] [rbp-4A0h]
  unsigned int v199; // [rsp+10h] [rbp-498h]
  unsigned int v200; // [rsp+10h] [rbp-498h]
  int v201; // [rsp+10h] [rbp-498h]
  __int64 v202; // [rsp+10h] [rbp-498h]
  unsigned int v203; // [rsp+1Ch] [rbp-48Ch]
  int v204; // [rsp+1Ch] [rbp-48Ch]
  __int64 v205; // [rsp+20h] [rbp-488h]
  _DWORD *v206; // [rsp+30h] [rbp-478h]
  __m128 v208; // [rsp+60h] [rbp-448h] BYREF
  __m128i *v209; // [rsp+70h] [rbp-438h]
  unsigned int v210; // [rsp+78h] [rbp-430h]
  int v211; // [rsp+7Ch] [rbp-42Ch]
  __int64 v212; // [rsp+80h] [rbp-428h]
  __int64 v213; // [rsp+88h] [rbp-420h]
  __int64 v214; // [rsp+90h] [rbp-418h]
  unsigned __int8 **v215; // [rsp+98h] [rbp-410h]
  unsigned __int64 *v216; // [rsp+A0h] [rbp-408h]
  int v217; // [rsp+A8h] [rbp-400h]
  unsigned __int8 v218; // [rsp+ADh] [rbp-3FBh]
  char v219; // [rsp+AEh] [rbp-3FAh]
  char v220; // [rsp+AFh] [rbp-3F9h]
  __int64 v221; // [rsp+B0h] [rbp-3F8h]
  __int64 v222; // [rsp+B8h] [rbp-3F0h]
  __int64 v223; // [rsp+C0h] [rbp-3E8h]
  __m128i *v224; // [rsp+C8h] [rbp-3E0h]
  unsigned __int8 **v225; // [rsp+D0h] [rbp-3D8h]
  __m128i *v226; // [rsp+D8h] [rbp-3D0h]
  __m128i v227; // [rsp+E0h] [rbp-3C8h] BYREF
  __int64 v228; // [rsp+F0h] [rbp-3B8h]
  __int64 v229[2]; // [rsp+108h] [rbp-3A0h] BYREF
  __int64 v230; // [rsp+118h] [rbp-390h] BYREF
  __int64 v231[4]; // [rsp+120h] [rbp-388h] BYREF
  __m128i si128; // [rsp+140h] [rbp-368h] BYREF
  __m128i v233; // [rsp+150h] [rbp-358h] BYREF
  void *v234; // [rsp+160h] [rbp-348h] BYREF
  __int64 v235; // [rsp+168h] [rbp-340h]
  _BYTE v236[48]; // [rsp+170h] [rbp-338h] BYREF
  void *v237; // [rsp+1A0h] [rbp-308h] BYREF
  __int64 v238; // [rsp+1A8h] [rbp-300h]
  _BYTE v239[48]; // [rsp+1B0h] [rbp-2F8h] BYREF
  void *v240[2]; // [rsp+1E0h] [rbp-2C8h] BYREF
  __m128i v241; // [rsp+1F0h] [rbp-2B8h] BYREF
  void *v242[2]; // [rsp+230h] [rbp-278h] BYREF
  __m128i v243; // [rsp+240h] [rbp-268h] BYREF
  char v244; // [rsp+2A8h] [rbp-200h]
  unsigned int v245; // [rsp+2B0h] [rbp-1F8h]
  char v246; // [rsp+2B4h] [rbp-1F4h]
  unsigned __int64 v247; // [rsp+2C0h] [rbp-1E8h] BYREF
  __int64 v248; // [rsp+2C8h] [rbp-1E0h]
  __int64 v249; // [rsp+2D0h] [rbp-1D8h] BYREF
  unsigned int v250; // [rsp+2D8h] [rbp-1D0h]
  void *ptr; // [rsp+310h] [rbp-198h] BYREF
  __int64 v252; // [rsp+318h] [rbp-190h]
  __int64 v253; // [rsp+320h] [rbp-188h] BYREF
  __int64 v254; // [rsp+328h] [rbp-180h]
  __int16 v255; // [rsp+330h] [rbp-178h]
  char v256; // [rsp+332h] [rbp-176h]
  __int64 v257; // [rsp+338h] [rbp-170h]
  void *v258; // [rsp+350h] [rbp-158h] BYREF
  __int64 v259; // [rsp+358h] [rbp-150h]
  _BYTE v260[256]; // [rsp+360h] [rbp-148h] BYREF
  int v261; // [rsp+460h] [rbp-48h]
  unsigned int v262; // [rsp+464h] [rbp-44h]
  __int64 v263; // [rsp+4B0h] [rbp+8h]

  v12 = a4;
  v229[0] = a2;
  v210 = a3;
  v13 = a9;
  v211 = a6;
  v217 = a10;
  v218 = a6;
  if ( a11 )
    *a11 = 0;
  v14 = *(_DWORD *)(a4 + 8);
  v258 = v260;
  v259 = 0x800000000LL;
  if ( v14 )
    sub_AEA9C0((__int64 *)&v258, (__int64 *)a4);
  v261 = *(_DWORD *)(v12 + 272);
  v262 = *(_DWORD *)(v12 + 276);
  for ( i = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v229[0] + 56LL))(v229[0]);
        (*(_WORD *)(i + 30) & 0x180) != 0;
        i = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)i + 48LL))(i) )
  {
    if ( !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)i + 48LL))(i) )
      break;
  }
  v18 = *(_DWORD **)(i + 56);
  v247 = a1;
  v248 = 1;
  v206 = v18;
  v203 = v262;
  v237 = v239;
  v219 = *(_BYTE *)(v229[0] + 28) & 0x7F;
  v234 = v236;
  v235 = 0x200000000LL;
  v238 = 0x200000000LL;
  v199 = v259;
  v19 = (void **)&v249;
  do
  {
    *v19 = (void *)-4096LL;
    v19 += 2;
  }
  while ( v19 != &ptr );
  v256 = 0;
  v255 = 256;
  v257 = 0;
  ptr = &v253;
  v252 = 0x100000000LL;
  v20 = *(_QWORD *)(a1 + 11280);
  *(_QWORD *)(a1 + 11280) = &v247;
  v254 = v20;
  v205 = (__int64)&v206[2 * (v206[5] & 0x1FFFFFFF) + 6];
  if ( v206 + 6 == (_DWORD *)v205 )
  {
    v196 = 0;
    v73 = &v247;
    if ( *(_BYTE *)(a9 + 225) )
      goto LABEL_173;
    goto LABEL_172;
  }
  v196 = 0;
  v21 = (unsigned __int8 **)(v206 + 6);
  v209 = &si128;
  v216 = &v233.m128i_u64[1];
  v214 = v12;
  while ( 1 )
  {
    v22 = *(_QWORD *)(a5 + 16);
    if ( v22 && *(_DWORD *)a5 == ((char *)v21 - (char *)(v206 + 6)) >> 3 )
    {
      v133 = *(const __m128i **)(a5 + 8);
      v134 = (const __m128i *)((char *)v133 + 24 * v22);
      v208.m128_u64[0] = (unsigned __int64)v133;
      if ( v134 != v133 )
      {
        v215 = v21;
        v135 = v133;
        do
        {
          sub_1CB6790(a9, v135);
          v136 = v135;
          v135 = (const __m128i *)((char *)v135 + 24);
          sub_AB6BB0((__m128i *)v242, *(_QWORD **)(a1 + 248), v136);
          sub_1CB6790(a9 + 112, (const __m128i *)v242);
        }
        while ( v134 != v135 );
        v21 = &v215[0xAAAAAAAAAAAAAABLL * (((unsigned __int64)&v134[-1] - v208.m128_u64[0] - 8) >> 3) + 1];
      }
      goto LABEL_82;
    }
    v23 = (__int64)*v21;
    v24 = (*v21)[28] & 0x7F;
    switch ( (_BYTE)v24 )
    {
      case 'C':
        v25 = *(_DWORD *)(v23 + 64);
        if ( !v25 )
          goto LABEL_16;
        break;
      case '/':
        if ( !*(_BYTE *)(v23 + 81) )
          goto LABEL_16;
        v24 = *(_DWORD *)(v23 + 84);
        v25 = v24 + 1;
        if ( v24 == -1 )
          goto LABEL_16;
        break;
      case 'D':
        if ( (*(_BYTE *)(v23 + 80) & 4) == 0 )
          goto LABEL_16;
        v24 = *(_DWORD *)(v23 + 84);
        v25 = v24 + 1;
        if ( v24 == -1 )
          goto LABEL_16;
        break;
      default:
        goto LABEL_16;
    }
    v35 = (unsigned int)(v25 - 1);
    if ( (_DWORD)v35 == (_DWORD)v235 )
    {
      ++v21;
      sub_F1EDF0((__int64)v242, *(_QWORD **)(a1 + 248), (const __m128i *)v234, v35, v16, v17);
      sub_1CB6790(a9, (const __m128i *)v242);
      v103 = *(_QWORD **)(a1 + 248);
      LODWORD(v235) = 0;
      sub_F1EDF0((__int64)v242, v103, (const __m128i *)v237, (unsigned int)v238, v104, v105);
      sub_1CB6790(a9 + 112, (const __m128i *)v242);
      LODWORD(v238) = 0;
      goto LABEL_82;
    }
    if ( ((v218 ^ 1) & (v196 == v199)) != 0 )
    {
      LOBYTE(v24) = (v218 ^ 1) & (v196 == v199);
      v29 = v24;
      sub_168B9F0((__int64)v242, (__int64 *)(a1 + 8), v210, 0x13E3u, 0);
      LODWORD(v231[0]) = 0;
      v36 = sub_1587D10((__int64)v242, (int *)v231);
      sub_F22AA0((unsigned __int64 *)v240, v229[0]);
      si128.m128i_i32[0] = sub_17A2D70(a1, (__int64)v240[0]);
      v37 = sub_1587D10(v36, si128.m128i_i32);
      sub_1CBDAC0(v37, v229);
      sub_15F7200(v242);
      v38 = v206[2];
      v39 = v206[4];
      LOBYTE(v242[1]) = 1;
      v242[0] = (void *)__PAIR64__(v39, v38);
      sub_1CCCAD0(a1, v229[0], __SPAIR64__(v39, v38), (int)v242[1]);
      goto LABEL_21;
    }
LABEL_16:
    if ( v196 >= v199 )
    {
      if ( !v218 )
      {
        if ( (unsigned __int8)sub_B8BE90(v23) )
        {
          if ( ++v21 != (unsigned __int8 **)v205 )
            goto LABEL_20;
          sub_F1EDF0((__int64)v242, *(_QWORD **)(a1 + 248), (const __m128i *)v234, (unsigned int)v235, v27, v28);
          sub_1CB6790(a9, (const __m128i *)v242);
          v100 = *(_QWORD **)(a1 + 248);
          LODWORD(v235) = 0;
          sub_F1EDF0((__int64)v242, v100, (const __m128i *)v237, (unsigned int)v238, v101, v102);
          sub_1CB6790(a9 + 112, (const __m128i *)v242);
          LODWORD(v238) = 0;
          goto LABEL_82;
        }
        v56 = (unsigned __int64)*v21;
        v57 = (_QWORD *)v229[0];
        v221 = *(_QWORD *)a9;
        v222 = *(unsigned int *)(a9 + 8);
        v58 = *(_BYTE *)(v56 + 28) & 0x7F;
        if ( v58 == 67 )
        {
          if ( !sub_1A434E0(a1, v56, 0, v26, v27, v28) )
            goto LABEL_68;
          v242[0] = (void *)((unsigned __int64)v242[0] & 0xFFFFFFFE00000000LL);
          v242[1] = nullptr;
          v243.m128i_i64[1] = 0;
          v215 = (unsigned __int8 **)v242;
          if ( sub_1CB1710(a1, v57, v210, v203, v56, (__m128i *)v242, v221, v222) )
            goto LABEL_20;
          si128 = _mm_load_si128((const __m128i *)v242);
          v91 = (__int64)v242[0] & 0x7FFFFFFF;
          v233 = _mm_load_si128(&v243);
          goto LABEL_124;
        }
        if ( v58 == 47 )
        {
          if ( !sub_1A434E0(a1, v56, 0, v26, v27, v28) )
            goto LABEL_68;
          v242[0] = (void *)((unsigned __int64)v242[0] & 0xFFFFFFFE00000000LL);
          v242[1] = nullptr;
          v243.m128i_i64[1] = 0;
          v215 = (unsigned __int8 **)v242;
          if ( (unsigned __int8)sub_1CB0E30(a1, v57, v210, a7, v203, v56, (__int64)v242, v221, v222) )
            goto LABEL_20;
          a7 = (__m128)_mm_load_si128((const __m128i *)v242);
          v90 = _mm_load_si128(&v243);
          si128 = (__m128i)a7;
          v91 = (__int64)v242[0] & 0x7FFFFFFF;
          v233 = v90;
          goto LABEL_124;
        }
        if ( sub_1A434E0(a1, v56, 0, v26, v27, v28) )
        {
          *(_OWORD *)v242 = 0;
          v215 = (unsigned __int8 **)v242;
          v240[0] = (void *)sub_1CB2FE0(a1, v57, v210, v203, v56, (__int64 *)v242, v221, v222);
          if ( sub_F22B30(v240) )
            goto LABEL_20;
          v137 = 0;
          v138 = sub_A5EFB0(v56);
          if ( (*(_DWORD *)v138 & 0x7FFFFFFFu) - 6 <= 1 )
            v137 = *(_DWORD *)((v138[3] & 0xFFFFFFFFFFFFFFFCLL) + 16);
          v139 = sub_A5EFB0(v56);
          if ( (*(_DWORD *)v139 & 0x7FFFFFFFu) - 6 > 1 )
          {
            v208.m128_u64[0] = 0;
            a7 = 0;
          }
          else
          {
            v140 = (const __m128i *)(v139[3] & 0xFFFFFFFFFFFFFFFCLL);
            a7 = (__m128)_mm_loadl_epi64(v140);
            v208.m128_u64[0] = v140->m128i_u64[1];
          }
          v141 = _mm_loadh_ps((const double *)v208.m128_u64);
          v142 = *(_QWORD **)(a1 + 248);
          si128.m128i_i64[0] = 6;
          v208 = v141;
          si128.m128i_i64[1] = (__int64)v240[0];
          sub_F1ECA0(v216, v142, v141.m128_u64[0], v141.m128_u64[1], v137, 0);
          v91 = si128.m128i_i32[0] & 0x7FFFFFFF;
LABEL_124:
          if ( !v91 )
            goto LABEL_20;
          v106 = *v21;
          v212 = *(_QWORD *)a9;
          v213 = *(unsigned int *)(a9 + 8);
          sub_1DC3880((_DWORD)v215, a1, v203, v229[0], (_DWORD)v106, v210, v212, v213);
          if ( LOBYTE(v242[1]) )
            goto LABEL_182;
          v107 = *(_BYTE *)(a9 + 224);
          v108 = *(_BYTE *)(a9 + 225);
          v109 = *(_BYTE *)(a9 + 226);
          *(_WORD *)(a9 + 224) = 0;
          *(_BYTE *)(a9 + 226) = 0;
          if ( (unsigned __int8)sub_1CCE030(a1, (__int64)*v21, v209, v229[0], v210, v203, a7, a8, 0, a9, 0) )
          {
            *(_BYTE *)(a9 + 226) = v109;
            *(_BYTE *)(a9 + 225) = v108;
            *(_BYTE *)(a9 + 224) = v107;
LABEL_182:
            sub_1DBADA0(v215);
LABEL_20:
            v29 = 1;
            goto LABEL_21;
          }
          v110 = *(_QWORD *)a9 + 24LL * *(unsigned int *)(a9 + 8);
          *(_BYTE *)(v110 - 21) |= 0x80u;
          v111 = *(_QWORD *)(a9 + 112) + 24LL * *(unsigned int *)(a9 + 120);
          *(_BYTE *)(v111 - 21) |= 0x80u;
          if ( v219 == 68 )
            sub_17429A0((__int64)&v258, v209);
          *(_BYTE *)(a9 + 226) = v109;
          v112 = v215;
          ++v21;
          *(_BYTE *)(a9 + 225) = v108;
          *(_BYTE *)(a9 + 224) = v107;
          ++v196;
          sub_1DBADA0(v112);
          goto LABEL_82;
        }
LABEL_68:
        si128 = (__m128i)(0xFFFFFFFE00000000LL & si128.m128i_u64[0]);
        v59 = v229[0];
        v233.m128i_i64[1] = 0;
        v60 = (__int64)*v21;
        v61 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v229[0] + 56LL);
        v62 = (*v21)[28] & 0x7F;
        if ( v62 == 67 )
        {
          v63 = *(_QWORD *)(v61(v229[0]) + 56);
          v67 = *(_QWORD *)(v63 + 8LL * (unsigned int)sub_BBE5B0(v60) + 24);
          v240[0] = &v241;
          v240[1] = (void *)0x800000000LL;
          if ( (*(_QWORD *)(v67 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0
            && !sub_1A434E0(a1, v67, (__int64)v240, v64, v65, v66) )
          {
            v143 = v240[0];
            v144 = LODWORD(v240[1]);
            v145 = sub_BBE470(v67);
LABEL_165:
            sub_1A5E3E0(a1, v210, v59, v145, v143, v144, 2, 1);
LABEL_75:
            if ( v240[0] != &v241 )
              free(v240[0]);
            goto LABEL_20;
          }
        }
        else if ( v62 == 47 )
        {
          v170 = *(_QWORD *)(*(_QWORD *)(v61(v229[0]) + 56) + 8LL * (*(_WORD *)(v60 + 70) >> 4) + 24);
          v240[0] = &v241;
          v240[1] = (void *)0x800000000LL;
          if ( (*(_QWORD *)(v170 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0
            && !sub_1A434E0(a1, v170, (__int64)v240, v167, v168, v169) )
          {
            v143 = v240[0];
            v144 = LODWORD(v240[1]);
            v145 = sub_BBEB00(v170);
            goto LABEL_165;
          }
        }
        else
        {
          v181 = *(_QWORD *)(*(_QWORD *)(v61(v229[0]) + 56) + 8LL * (*(_WORD *)(v60 + 66) >> 4) + 24);
          v240[0] = &v241;
          v240[1] = (void *)0x800000000LL;
          if ( (*(_QWORD *)(v181 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0
            && !sub_1A434E0(a1, v181, (__int64)v240, v178, v179, v180) )
          {
            v143 = v240[0];
            v144 = LODWORD(v240[1]);
            v145 = sub_BBF0E0(v181);
            goto LABEL_165;
          }
        }
        v68 = *(_QWORD *)(v59 + 56);
        v215 = (unsigned __int8 **)v242;
        sub_168B9F0((__int64)v242, (__int64 *)(a1 + 8), v210, 0x13E3u, 0);
        if ( v244 )
        {
          sub_AE9DF0(v215 + 4, 0, 2u);
        }
        else if ( v246 )
        {
          v186 = sub_168B9E0(v215);
          v187 = v243.m128i_i64[0];
          if ( v243.m128i_i64[0] )
            v187 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v243.m128i_i64[0] + 32LL))(v243.m128i_i64[0]);
          v231[0] = v187;
          v188 = sub_1587BC0(v186, v231, v182, v183, v184, v185);
          sub_AE9DF0((unsigned __int8 **)(*v188 + 32LL * v245 + 8), 0, 2u);
        }
        sub_F22AA0((unsigned __int64 *)&v230, v59);
        v69 = sub_17A2D70(a1, v230);
        v70 = v69;
        if ( v244 )
        {
          sub_AE9DF0(v215 + 4, v69, 2u);
        }
        else
        {
          if ( !v246 )
          {
LABEL_74:
            sub_15F7200(v215);
            v71 = *(_DWORD *)(v68 + 8);
            v72 = *(_DWORD *)(v68 + 16);
            LOBYTE(v242[1]) = 1;
            v242[0] = (void *)__PAIR64__(v72, v71);
            sub_1CCCAD0(a1, v59, __SPAIR64__(v72, v71), (int)v242[1]);
            goto LABEL_75;
          }
          v175 = sub_168B9E0(v215);
          v176 = v243.m128i_i64[0];
          if ( v243.m128i_i64[0] )
            v176 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v243.m128i_i64[0] + 32LL))(v243.m128i_i64[0]);
          v231[0] = v176;
          v177 = sub_1587BC0(v175, v231, v171, v172, v173, v174);
          sub_AE9DF0((unsigned __int8 **)(*v177 + 32LL * v245 + 8), v70, 2u);
        }
        if ( v244 )
        {
          sub_AE9DF0(v215 + 4, v59, 0xAu);
        }
        else if ( v246 )
        {
          v193 = sub_168B9E0(v215);
          v194 = v243.m128i_i64[0];
          if ( v243.m128i_i64[0] )
            v194 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v243.m128i_i64[0] + 32LL))(v243.m128i_i64[0]);
          v231[0] = v194;
          v195 = sub_1587BC0(v193, v231, v189, v190, v191, v192);
          sub_AE9DF0((unsigned __int8 **)(*v195 + 32LL * v245 + 8), v59, 0xAu);
        }
        goto LABEL_74;
      }
      if ( (unsigned __int8)sub_B8BE90(v23) && (_DWORD)v235 )
      {
        sub_F1EDF0((__int64)v242, *(_QWORD **)(a1 + 248), (const __m128i *)v234, (unsigned int)v235, v163, v164);
        sub_1CB6790(a9, (const __m128i *)v242);
        sub_F1EDF0((__int64)v242, *(_QWORD **)(a1 + 248), (const __m128i *)v237, (unsigned int)v238, v165, v166);
        v29 = 0;
        sub_1CB6790(a9 + 112, (const __m128i *)v242);
        goto LABEL_21;
      }
LABEL_65:
      v29 = 0;
      goto LABEL_21;
    }
    v40 = (__m128i *)((char *)v258 + 32 * v196);
    v41 = sub_B8BE90(v23);
    v208.m128_i8[0] = 1;
    if ( v41 )
    {
      v88 = *v21;
      v89 = (*v21)[28] & 0x7F;
      if ( v89 == 67 )
      {
        v208.m128_i8[0] = *((_DWORD *)v88 + 16) != 0;
      }
      else if ( v89 == 47 )
      {
        v208.m128_i8[0] = v88[81];
        if ( v208.m128_i8[0] )
          goto LABEL_119;
      }
      else
      {
        v208.m128_i8[0] = 0;
        if ( v89 == 68 && (v88[80] & 4) != 0 )
LABEL_119:
          v208.m128_i8[0] = *((_DWORD *)v88 + 21) != -1;
      }
    }
    v42 = sub_F1D570((__int64)v40);
    if ( v42 )
    {
      if ( *(_BYTE *)(a9 + 225) )
        break;
    }
    v43 = (__int64)*v21;
    v44 = *(_BYTE *)(a9 + 224);
    *(_BYTE *)(a9 + 224) = 0;
    LOBYTE(v215) = v44;
    if ( (unsigned __int8)sub_1CCE030(a1, v43, v40, v229[0], v210, v203, a7, a8, v235, a9, 0) )
    {
      v51 = a9;
      goto LABEL_113;
    }
    v45 = *(_QWORD *)(a9 + 112) + 24LL * *(unsigned int *)(a9 + 120) - 24;
    v46 = sub_BBD7B0((__int64)v206);
    v47 = (__int64)*v21;
    v49 = sub_F70FC0(
            *(_QWORD **)(a1 + 248),
            (__int64)*v21,
            *(_QWORD *)(a9 + 112),
            *(unsigned int *)(a9 + 120),
            v46,
            (__m128i)a7,
            (__m128i)a8,
            v48,
            v40->m128i_i64[0],
            v40->m128i_i64[1]);
    v50 = v208.m128_i8[0] == 0;
    *(_BYTE *)(v45 + 3) = (v49 << 7) | *(_BYTE *)(v45 + 3) & 0x7F;
    if ( !v50 && v42 )
    {
      v51 = a9;
      v52 = *(_BYTE *)(v229[0] + 28) & 0x7F;
      if ( v52 != 73 && v52 != 70 )
      {
        ++v196;
        *(_BYTE *)(a9 + 224) = (_BYTE)v215;
LABEL_60:
        if ( (_DWORD)v235 )
        {
          sub_1CB6830(
            (__int64 *)v51,
            (__m128i *)(*(_QWORD *)v51 + 24LL * *(unsigned int *)(v51 + 8)),
            (char *)v234,
            (char *)v234 + 24 * (unsigned int)v235);
          LODWORD(v235) = 0;
          sub_1CB6830(
            (__int64 *)(v51 + 112),
            (__m128i *)(*(_QWORD *)(v51 + 112) + 24LL * *(unsigned int *)(v51 + 120)),
            (char *)v237,
            (char *)v237 + 24 * (unsigned int)v238);
          LODWORD(v238) = 0;
        }
        if ( v199 > v196 )
        {
          v53 = v51 + 112;
          v263 = v51;
          v54 = 32LL * v196;
          do
          {
            v55 = (const __m128i *)((char *)v258 + v54);
            v54 += 32;
            sub_1CB6790(v263, v55);
            sub_AB6BB0((__m128i *)v242, *(_QWORD **)(a1 + 248), v55);
            sub_1CB6790(v53, (const __m128i *)v242);
          }
          while ( 32 * (v196 + (unsigned __int64)(v199 - 1 - v196) + 1) != v54 );
        }
        goto LABEL_65;
      }
      v98 = sub_1CB2FB0((__int64)v40, v47, *(double *)a7.m128_u64);
      sub_168B9F0((__int64)v242, (__int64 *)(a1 + 8), v98, 0x13FEu, 0);
      si128.m128i_i32[0] = (*(_BYTE *)(v229[0] + 28) & 0x7F) == 73;
      v99 = sub_1587D10((__int64)v242, si128.m128i_i32);
      v240[0] = (void *)sub_F1E510((__int64)v40, (__int64)&si128, *(double *)a7.m128_u64);
      sub_1587DB0(v99, (__int64 *)v240);
      sub_15F7200(v242);
      sub_1CC6E20(a1, (__int64)*v21);
LABEL_113:
      v29 = 1;
      *(_BYTE *)(v51 + 224) = (_BYTE)v215;
      goto LABEL_21;
    }
    ++v196;
    *(_BYTE *)(a9 + 224) = (_BYTE)v215;
    if ( v42 )
    {
LABEL_78:
      if ( *(_BYTE *)(a9 + 225) || v208.m128_i8[0] )
      {
        v51 = a9;
        goto LABEL_60;
      }
    }
    if ( (unsigned __int8)sub_B8BE90((__int64)*v21) )
    {
      v92 = *(_QWORD *)a9 + 24LL * *(unsigned int *)(a9 + 8);
      v93 = *(_DWORD *)(a9 + 8) - 1;
      *(__m128i *)v242 = _mm_loadu_si128((const __m128i *)(v92 - 24));
      v94 = *(_QWORD *)(v92 - 8);
      *(_DWORD *)(a9 + 8) = v93;
      v243.m128i_i64[0] = v94;
      sub_1CB6790((__int64)&v234, (const __m128i *)v242);
      v95 = *(_QWORD *)(a9 + 112) + 24LL * *(unsigned int *)(a9 + 120);
      v96 = *(_DWORD *)(a9 + 120) - 1;
      *(__m128i *)v242 = _mm_loadu_si128((const __m128i *)(v95 - 24));
      v97 = *(_QWORD *)(v95 - 8);
      *(_DWORD *)(a9 + 120) = v96;
      v243.m128i_i64[0] = v97;
      sub_1CB6790((__int64)&v237, (const __m128i *)v242);
    }
    else
    {
      ++v21;
    }
LABEL_82:
    if ( (unsigned __int8 **)v205 == v21 )
    {
      v12 = v214;
      v13 = a9;
      if ( *(_BYTE *)(a9 + 225) )
        goto LABEL_173;
      v73 = *(unsigned __int64 **)(a1 + 11280);
      if ( !v73 )
      {
LABEL_85:
        if ( v199 <= v196 )
        {
LABEL_86:
          if ( (_BYTE)v217 )
          {
            sub_1CB6C40((char ***)v12, (char ***)&v258);
            *(_DWORD *)(v12 + 272) = v261;
            *(_DWORD *)(v12 + 276) = v262;
          }
          v29 = 0;
          if ( !(_BYTE)v211 )
          {
            v74 = v229[0];
            v75 = *(_QWORD *)(v229[0] + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v229[0] + 16) & 4) != 0 )
              v75 = *(_QWORD *)v75;
            v76 = *(_BYTE *)(v75 + 8) & 0x7F;
            if ( (unsigned int)(v76 - 68) <= 6 )
            {
              v77 = sub_B8C1B0(v75);
              if ( v77 )
                v75 = sub_B8D340(*(_QWORD *)(v77 + 48));
              v74 = v229[0];
              v76 = *(_BYTE *)(v75 + 8) & 0x7F;
            }
            if ( (unsigned int)(v76 - 59) > 2 )
            {
              v79 = 0;
              v78 = 0;
            }
            else
            {
              v78 = v75 - 64;
              v79 = v75 != 64;
            }
            v80 = *(_QWORD *)(v74 + 48);
            v81 = 0;
            if ( v80 )
            {
              v82 = (*(_BYTE *)(v80 + 28) & 0x7Fu) - 35;
              if ( (unsigned int)v82 <= 3 )
              {
                v200 = v79;
                v197 = v78;
                v83 = sub_1703690(v80, v82, v78, 0);
                v79 = v200;
                v78 = v197;
                v81 = v83;
              }
            }
            v84 = *(_QWORD *)(a1 + 512);
            v85 = *(_QWORD *)(a1 + 544);
            *(_QWORD *)(a1 + 544) = v75;
            *(_QWORD *)(a1 + 512) = 0;
            v198 = v84;
            v86 = *(_QWORD *)(a1 + 9944);
            *(_QWORD *)(a1 + 9944) = 0;
            v241.m128i_i64[1] = v86;
            v201 = *(_DWORD *)(a1 + 80);
            v204 = *(_DWORD *)(a1 + 2632);
            *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
            *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
            sub_19A2CD0((__int64)v231, a1, v78, v81, v79, v17);
            v87 = *(unsigned int *)(v13 + 120);
            si128.m128i_i64[0] = *(_QWORD *)(v13 + 112);
            si128.m128i_i64[1] = v87;
            v233.m128i_i8[0] = 1;
            v215 = (unsigned __int8 **)v242;
            sub_1DBA4B0((unsigned int)v242, a1, v229[0], v75, 0, 1);
            v29 = sub_1751080(
                    a1,
                    v229[0],
                    (__int64 *)v242,
                    ((unsigned __int64)*(unsigned int *)(v12 + 276) << 32) | v210);
            if ( (_BYTE)v29 && a11 )
              *a11 = 1;
            if ( v242[0] != v215 + 2 )
              free(v242[0]);
            sub_19A2DA0(v231);
            if ( v85 )
            {
              *(_QWORD *)(a1 + 544) = v85;
              *(_QWORD *)(a1 + 512) = v198;
              *(_QWORD *)(a1 + 9944) = v241.m128i_i64[1];
              *(_DWORD *)(a1 + 80) = v201;
              *(_DWORD *)(a1 + 2632) = v204;
            }
          }
          goto LABEL_21;
        }
        v154 = 32LL * v196;
        v215 = (unsigned __int8 **)v242;
LABEL_177:
        v155 = v215;
        sub_168B9F0((__int64)v215, (__int64 *)(a1 + 8), v210, 0x13E3u, 0);
        LODWORD(v230) = 1;
        v156 = sub_1587D10((__int64)v155, (int *)&v230);
        sub_F22AA0((unsigned __int64 *)&si128, v229[0]);
        LODWORD(v231[0]) = sub_17A2D70(a1, si128.m128i_i64[0]);
        v157 = sub_1587D10(v156, (int *)v231);
        v158 = sub_1CBDAC0(v157, v229);
        v159 = v262;
        v160 = v158;
        v240[0] = (void *)__PAIR64__(v159, sub_1CB2FB0((__int64)v258 + v154, (__int64)v229, *(double *)a7.m128_u64));
        v29 = 1;
        sub_1587DB0(v160, (__int64 *)v240);
        sub_15F7200(v155);
        v161 = v206[2];
        v162 = v206[4];
        LOBYTE(v242[1]) = 1;
        v242[0] = (void *)__PAIR64__(v162, v161);
        sub_1CCCAD0(a1, v229[0], __SPAIR64__(v162, v161), (int)v242[1]);
        goto LABEL_21;
      }
LABEL_172:
      if ( !sub_1DBAFC0(v73, 0, 0) )
        goto LABEL_85;
LABEL_173:
      v150 = v199;
      if ( v199 <= v196 )
        goto LABEL_86;
      v202 = v12;
      v215 = (unsigned __int8 **)v242;
      v151 = 32 * (v196 + (unsigned __int64)(v150 - 1 - v196) + 1);
      v152 = 32LL * v196;
      while ( 1 )
      {
        v154 = v152;
        if ( !sub_F1D570((__int64)v258 + v152) )
          goto LABEL_177;
        v153 = (const __m128i *)((char *)v258 + v152);
        v152 += 32;
        sub_1CB6790(v13, v153);
        sub_AB6BB0((__m128i *)v242, *(_QWORD **)(a1 + 248), v153);
        sub_1CB6790(v13 + 112, (const __m128i *)v242);
        if ( v151 == v152 )
        {
          v12 = v202;
          goto LABEL_86;
        }
      }
    }
  }
  v113 = &v243;
  v215 = (unsigned __int8 **)v242;
  v114 = &v243;
  v242[0] = &v243;
  v115 = (v205 - (__int64)v21) >> 3;
  v242[1] = (void *)0x400000000LL;
  if ( v115 > 4 )
  {
    sub_2237220(v215, &v243, (v205 - (__int64)v21) >> 3, 24);
    v114 = (__m128i *)v242[0];
    v113 = (__m128i *)((char *)v242[0] + 24 * LODWORD(v242[1]));
  }
  v116 = (__m128i *)((char *)v114 + 24 * v115);
  if ( v116 != v113 )
  {
    do
    {
      v113->m128i_i64[1] = 0;
      v113->m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v113 = (__m128i *)((char *)v113 + 24);
    }
    while ( v116 != v113 );
    v114 = (__m128i *)v242[0];
  }
  LODWORD(v242[1]) = (v205 - (__int64)v21) >> 3;
  v117 = (__int64 *)v21;
  v224 = (__m128i *)v240;
  v226 = &v227;
  v225 = v21;
  while ( 1 )
  {
    a8 = (__m128)_mm_loadu_si128(v40);
    v129 = (__m128i *)((char *)v114 + 24 * (((char *)v117 - (char *)v225) >> 3));
    *v129 = (__m128i)a8;
    v129[1].m128i_i64[0] = v40[1].m128i_i64[0];
    if ( !(unsigned __int8)sub_B8BE90(*v117) )
      goto LABEL_137;
    v130 = *v117;
    v132 = *(_BYTE *)(*v117 + 28) & 0x7F;
    if ( v132 == 67 )
    {
      if ( !*(_DWORD *)(v130 + 64) )
        goto LABEL_138;
LABEL_137:
      sub_F1DF30((__int64)v226, v129->m128i_i64, v130, v131);
      *v129 = _mm_loadu_si128(&v227);
      v129[1].m128i_i64[0] = v228;
      goto LABEL_138;
    }
    if ( v132 == 47 )
    {
      if ( !*(_BYTE *)(v130 + 81) )
        goto LABEL_138;
    }
    else if ( v132 != 68 || (*(_BYTE *)(v130 + 80) & 4) == 0 )
    {
      goto LABEL_138;
    }
    if ( *(_DWORD *)(v130 + 84) != -1 )
      goto LABEL_137;
LABEL_138:
    v118 = v40[1].m128i_i64[1];
    v119 = *(_BYTE *)(a9 + 224);
    *(__m128i *)v240 = _mm_loadu_si128(v129);
    v120 = v129[1].m128i_i64[0];
    v241.m128i_i64[1] = v118;
    LOBYTE(v118) = *(_BYTE *)(a9 + 225);
    v241.m128i_i64[0] = v120;
    v121 = *v117;
    v220 = v118;
    *(_WORD *)(a9 + 224) = 256;
    v122 = sub_1CCE030(a1, v121, v224, v229[0], v210, v203, a7, a8, v235, a9, 0);
    if ( (_BYTE)v122 )
      break;
    ++v117;
    *v129 = _mm_load_si128((const __m128i *)v240);
    v129[1].m128i_i64[0] = v241.m128i_i64[0];
    v223 = *(_QWORD *)(a9 + 112) + 24LL * *(unsigned int *)(a9 + 120) - 24;
    v123 = sub_BBD7B0((__int64)v206);
    v125 = sub_F70FC0(
             *(_QWORD **)(a1 + 248),
             *(v117 - 1),
             *(_QWORD *)(a9 + 112),
             *(unsigned int *)(a9 + 120),
             v123,
             (__m128i)a7,
             (__m128i)a8,
             v124,
             v129->m128i_i64[0],
             v129->m128i_i64[1]);
    v127 = v223;
    *(_BYTE *)(v223 + 3) = (v125 << 7) | *(_BYTE *)(v223 + 3) & 0x7F;
    v128 = v220;
    *(_BYTE *)(a9 + 224) = v119;
    *(_BYTE *)(a9 + 225) = v128;
    if ( v117 == (__int64 *)v205 )
    {
      v146 = v40[1].m128i_i64[1];
      sub_F1EDF0((__int64)v209, *(_QWORD **)(a1 + 248), (const __m128i *)v242[0], LODWORD(v242[1]), v126, v127);
      a7 = (__m128)_mm_load_si128(&si128);
      v241.m128i_i64[1] = v146;
      v241.m128i_i64[0] = v233.m128i_i64[0];
      v147 = v215;
      *(__m128 *)v240 = a7;
      *v40 = (__m128i)a7;
      v40[1] = _mm_load_si128(&v241);
      if ( v242[0] != v147 + 2 )
        free(v242[0]);
      ++v196;
      v21 = (unsigned __int8 **)v205;
      goto LABEL_78;
    }
    v114 = (__m128i *)v242[0];
  }
  v29 = v122;
  v148 = v220;
  v149 = (unsigned __int8 **)v242[0];
  *(_BYTE *)(a9 + 224) = v119;
  *(_BYTE *)(a9 + 225) = v148;
  if ( v149 != v215 + 2 )
    free(v149);
LABEL_21:
  v30 = (char *)ptr;
  if ( !(_BYTE)v255 )
  {
    if ( (_DWORD)v252 )
    {
      v31 = 0;
      v32 = 8LL * (unsigned int)(v252 - 1) + 8;
      do
      {
        v33 = *(void ***)&v30[v31];
        if ( v33 )
        {
          if ( *v33 != v33 + 2 )
            free(*v33);
          operator delete(v33, 0x30u);
          v30 = (char *)ptr;
        }
        v31 += 8;
      }
      while ( v31 != v32 );
    }
    LOBYTE(v255) = 1;
    *(_QWORD *)(v247 + 11280) = v254;
  }
  if ( v30 != (char *)&v253 )
    free(v30);
  if ( (v248 & 1) == 0 )
    operator delete(v249, 16LL * v250, 8);
  if ( v237 != v239 )
    free(v237);
  if ( v234 != v236 )
    free(v234);
  if ( v258 != v260 )
    free(v258);
  return v29;
}
