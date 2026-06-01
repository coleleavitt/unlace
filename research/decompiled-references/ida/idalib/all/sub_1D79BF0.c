__int64 __fastcall sub_1D79BF0(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        _QWORD *a4,
        __int64 *a5,
        unsigned __int64 a6,
        __m128 a7,
        __m128 a8,
        char a9,
        char a10,
        __int64 a11)
{
  unsigned __int64 v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  const __m128i *v18; // rbp
  _QWORD *v19; // r15
  __int64 v20; // rax
  bool v21; // cl
  __int64 v22; // rsi
  __int64 v23; // rsi
  const __m128i *v24; // rdx
  __int64 result; // rax
  unsigned __int64 v26; // rax
  __int16 v27; // dx
  char v28; // cl
  unsigned int v29; // eax
  __int64 *v30; // r13
  unsigned int v31; // eax
  unsigned __int8 v32; // bp
  char v33; // al
  unsigned int v34; // eax
  _QWORD *v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  unsigned __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdi
  _WORD **v50; // r11
  _WORD *v51; // r13
  _WORD **v52; // r15
  unsigned int v53; // ebp
  unsigned __int64 v54; // rax
  __int16 v55; // ax
  __int64 v56; // rsi
  int v57; // eax
  unsigned int v58; // r15d
  __int64 v59; // rsi
  unsigned __int64 v60; // rax
  __int64 v61; // rsi
  void *v62; // rdi
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rbp
  __int64 *v67; // r12
  _DWORD **v68; // rdx
  unsigned __int64 v69; // r12
  _QWORD *v70; // r13
  __int64 v71; // rcx
  __int64 v72; // r8
  __int16 v73; // ax
  __m128i si128; // xmm5
  __m128i v75; // xmm6
  _DWORD **v76; // rax
  bool v77; // bl
  unsigned int v78; // eax
  unsigned int *v79; // rdx
  unsigned int *v80; // r13
  __int64 v81; // rax
  int *v82; // rax
  int v83; // edx
  int v84; // eax
  _QWORD *v85; // rdi
  unsigned int v86; // edx
  unsigned __int64 v87; // r12
  __m128i v88; // xmm7
  __int64 v89; // rax
  unsigned __int64 v90; // rdx
  const __m128i *v91; // rcx
  char *v92; // rdx
  __m128i *v93; // rax
  __int64 v94; // rax
  int v95; // edx
  __int64 v96; // r12
  unsigned int *v97; // rbp
  __int64 v98; // rbx
  _BYTE *v99; // r13
  const __m128i *v100; // rcx
  const __m128i *v101; // roff
  unsigned __int64 v102; // rdx
  __m128i *v103; // rax
  __int64 v104; // rax
  _BYTE *v105; // r12
  unsigned __int64 v106; // rdx
  __m128i *v107; // rcx
  const __m128i *v108; // rax
  __int64 v109; // rsi
  unsigned __int64 v110; // rsi
  unsigned __int64 v111; // rax
  __int64 v112; // rdx
  unsigned int v113; // eax
  _QWORD *v114; // rax
  void *v115; // rdx
  _QWORD *v116; // rax
  char v117; // cl
  __int64 v118; // rdx
  __int64 (__fastcall **v119)(); // rcx
  char v120; // r12
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rbp
  __int64 v124; // r8
  __int64 v125; // r9
  void *v126; // rax
  _QWORD *v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // r12
  void *v133; // rax
  _QWORD *v134; // rax
  __int64 v135; // rax
  void **v136; // rsi
  __int64 v137; // rax
  __int64 v138; // rbx
  _BYTE *v139; // r12
  __int64 v140; // rdx
  __int64 *v141; // r9
  __int64 (__fastcall ***v142)(); // rcx
  __int64 v143; // rax
  unsigned __int64 v144; // rax
  unsigned int *v145; // rsi
  __int64 (__fastcall **v146)(); // rdi
  size_t v147; // r8
  const void *v148; // rsi
  __int64 v149; // rax
  _DWORD *v150; // rax
  void *v151; // rdx
  __int64 v152; // rax
  unsigned int v153; // edx
  __int64 v154; // rax
  __int64 v155; // rbp
  __int64 v156; // rdx
  __int64 v157; // rax
  __int64 v158; // rdx
  unsigned __int64 v159; // rax
  unsigned int v160; // eax
  unsigned int v161; // edx
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // rbp
  __int64 v165; // r8
  __int64 v166; // r9
  void *v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rdx
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // rax
  _QWORD *v173; // rax
  unsigned int v175; // [rsp+0h] [rbp-5F8h]
  unsigned int v176; // [rsp+0h] [rbp-5F8h]
  unsigned int v177; // [rsp+0h] [rbp-5F8h]
  unsigned __int64 v178; // [rsp+20h] [rbp-5D8h]
  unsigned __int64 v179; // [rsp+20h] [rbp-5D8h]
  _WORD **v180; // [rsp+30h] [rbp-5C8h]
  unsigned __int64 v181; // [rsp+38h] [rbp-5C0h]
  unsigned __int64 v182; // [rsp+38h] [rbp-5C0h]
  __int64 v183; // [rsp+38h] [rbp-5C0h]
  size_t v184; // [rsp+38h] [rbp-5C0h]
  __int64 v185; // [rsp+38h] [rbp-5C0h]
  const __m128i *v186; // [rsp+40h] [rbp-5B8h]
  char v187; // [rsp+40h] [rbp-5B8h]
  unsigned int v188; // [rsp+48h] [rbp-5B0h]
  unsigned __int64 v189; // [rsp+48h] [rbp-5B0h]
  _QWORD *v190; // [rsp+58h] [rbp-5A0h]
  unsigned __int64 v191; // [rsp+58h] [rbp-5A0h]
  const __m128i *v192; // [rsp+60h] [rbp-598h]
  void *v193; // [rsp+60h] [rbp-598h]
  __int64 v194; // [rsp+68h] [rbp-590h]
  __int64 (__fastcall ***v195)(); // [rsp+68h] [rbp-590h]
  _QWORD *v196; // [rsp+78h] [rbp-580h] BYREF
  __int64 v197; // [rsp+80h] [rbp-578h] BYREF
  const __m128i *v198; // [rsp+88h] [rbp-570h]
  bool v199; // [rsp+97h] [rbp-561h] BYREF
  unsigned __int64 v200; // [rsp+98h] [rbp-560h] BYREF
  __int64 v201[2]; // [rsp+A0h] [rbp-558h] BYREF
  void *v202; // [rsp+B0h] [rbp-548h] BYREF
  signed __int64 v203; // [rsp+B8h] [rbp-540h]
  _BYTE v204[16]; // [rsp+C0h] [rbp-538h] BYREF
  _QWORD v205[6]; // [rsp+D0h] [rbp-528h] BYREF
  void *v206[2]; // [rsp+100h] [rbp-4F8h] BYREF
  _BYTE v207[32]; // [rsp+110h] [rbp-4E8h] BYREF
  __int64 (__fastcall **v208)(); // [rsp+130h] [rbp-4C8h] BYREF
  int v209; // [rsp+138h] [rbp-4C0h]
  __int128 v210; // [rsp+140h] [rbp-4B8h]
  _BYTE *v211; // [rsp+150h] [rbp-4A8h]
  char v212; // [rsp+158h] [rbp-4A0h]
  int v213; // [rsp+15Ch] [rbp-49Ch]
  void **v214; // [rsp+160h] [rbp-498h]
  void *ptr; // [rsp+170h] [rbp-488h] BYREF
  __int64 v216; // [rsp+178h] [rbp-480h]
  _BYTE v217[96]; // [rsp+180h] [rbp-478h] BYREF
  void *v218; // [rsp+1E0h] [rbp-418h] BYREF
  __int64 v219; // [rsp+1E8h] [rbp-410h]
  _BYTE v220[96]; // [rsp+1F0h] [rbp-408h] BYREF
  int v221; // [rsp+250h] [rbp-3A8h]
  char v222; // [rsp+254h] [rbp-3A4h]
  void *v223[2]; // [rsp+260h] [rbp-398h] BYREF
  _QWORD v224[16]; // [rsp+270h] [rbp-388h] BYREF
  __int128 v225; // [rsp+2F0h] [rbp-308h] BYREF
  void *v226; // [rsp+300h] [rbp-2F8h]
  __int64 v227; // [rsp+308h] [rbp-2F0h]
  _BYTE v228[96]; // [rsp+310h] [rbp-2E8h] BYREF
  __int16 v229; // [rsp+370h] [rbp-288h]
  void *v230; // [rsp+378h] [rbp-280h]
  __int64 v231; // [rsp+380h] [rbp-278h]
  _BYTE v232[40]; // [rsp+388h] [rbp-270h] BYREF
  void *v233[2]; // [rsp+3B0h] [rbp-248h] BYREF
  __m128i v234; // [rsp+3C0h] [rbp-238h] BYREF
  unsigned __int64 v235; // [rsp+3D0h] [rbp-228h]
  __int16 v236; // [rsp+3D8h] [rbp-220h]
  void *v237; // [rsp+420h] [rbp-1D8h]
  __int64 v238; // [rsp+428h] [rbp-1D0h]
  _WORD v239[49]; // [rsp+430h] [rbp-1C8h] BYREF
  char v240; // [rsp+492h] [rbp-166h]
  void *v241[2]; // [rsp+4A0h] [rbp-158h] BYREF
  void *v242; // [rsp+4B0h] [rbp-148h] BYREF
  unsigned int v243; // [rsp+4B8h] [rbp-140h]
  unsigned __int8 *v244; // [rsp+4C0h] [rbp-138h] BYREF
  __int16 v245; // [rsp+4C8h] [rbp-130h]
  __int64 v246; // [rsp+4F0h] [rbp-108h]
  __int64 v247; // [rsp+4F8h] [rbp-100h]
  __int64 v248; // [rsp+508h] [rbp-F0h]
  __int16 v249; // [rsp+510h] [rbp-E8h]
  char v250; // [rsp+512h] [rbp-E6h]
  __int64 v251; // [rsp+518h] [rbp-E0h]
  unsigned int v252; // [rsp+520h] [rbp-D8h]
  char v253; // [rsp+524h] [rbp-D4h]
  int v254; // [rsp+5B0h] [rbp-48h]
  int v255; // [rsp+5B4h] [rbp-44h]

  v197 = a2;
  v198 = a3;
  v196 = a4;
  if ( (*(_DWORD *)a4 & 0x40000) != 0 )
    return 18;
  v11 = a1;
  v13 = sub_F57E80(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
  v18 = (const __m128i *)v13;
  if ( v13 && *(_BYTE *)(v13 + 16) != 16 )
    v18 = nullptr;
  v19 = v196;
  v20 = *(_QWORD *)(v196[1] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v20 + 16) == 13 && ((*(_WORD *)(v20 + 18) >> 3) & 0x1FFu) > 0x1F2
    || (((unsigned __int8)v18[1].m128i_i8[2] >> 3) & 3) == 1 )
  {
    v26 = sub_1907C70(a1, v196, (__m128i)a7, a8, v14, v15, v16, v17);
    if ( v26 == 1 )
      return 18;
    v19 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFELL);
    v196 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFELL);
  }
  v21 = 0;
  v22 = v197 & 7;
  if ( !(v22 | (v197 >> 3) & 1) && *(_BYTE *)(*(_QWORD *)(v197 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38 )
    v21 = v197 != 0;
  v199 = v21;
  if ( !a9
    && ((*(_BYTE *)(*(_QWORD *)(v197 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 || ((*(_DWORD *)v19 >> 14) & 5) != 0) )
  {
    v241[0] = (void *)a1;
    v241[1] = nullptr;
    v23 = v197;
    LOBYTE(v245) = v199;
    v24 = v198;
    v242 = nullptr;
    v243 = 0;
    v244 = nullptr;
    HIBYTE(v245) = 1;
LABEL_15:
    *a5 = sub_1D62EB0(v241, v23, v24, *(double *)a7.m128_u64, a8);
    operator delete(v241[1], 16LL * v243, 8);
    return 0;
  }
  v27 = *(_WORD *)v19 & 0x1FF;
  v28 = **(_BYTE **)(a1 + 232) & 8;
  if ( v27 == 9 )
  {
    if ( !v28 )
      goto LABEL_20;
    v33 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v197 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL);
    if ( (unsigned __int8)(v33 - 2) <= 4u )
    {
      v34 = sub_F6CCB0(&v197, a7);
      sub_168B9F0((__int64)v241, (__int64 *)(a1 + 8), v34, 0x1583u, 0);
      sub_15F7200(v241);
      v24 = v198;
      v23 = v196[1];
      v241[0] = (void *)a1;
      v241[1] = nullptr;
      v242 = nullptr;
      v243 = 0;
      v244 = nullptr;
      LOBYTE(v245) = v199;
      HIBYTE(v245) = 1;
      goto LABEL_15;
    }
    if ( v33 != 42 )
      goto LABEL_20;
    goto LABEL_88;
  }
  if ( v28
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v197 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
  {
LABEL_88:
    v78 = sub_F6CCB0(&v197, a7);
    v22 = a1 + 8;
    sub_168B9F0((__int64)v241, (__int64 *)(a1 + 8), v78, 0x1583u, 0);
    sub_15F7200(v241);
    v19 = v196;
    v27 = *(_WORD *)v196 & 0x1FF;
  }
  if ( v27 != 53 )
  {
LABEL_20:
    v19 = nullptr;
    goto LABEL_21;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
  {
    v31 = sub_EEB7E0((unsigned __int64)v19, v22, *(double *)a7.m128_u64);
    sub_168B9F0((__int64)v241, (__int64 *)(a1 + 8), v31, 0xCBCu, 0);
    v32 = ((unsigned __int8)v18[1].m128i_i8[2] >> 3) & 3;
    if ( (_BYTE)v251 )
    {
      sub_AE9DF0(&v244, v32, 2u);
    }
    else
    {
      if ( !v253 )
      {
LABEL_34:
        sub_15F7200(v241);
        return 18;
      }
      v132 = sub_168B9E0(v241);
      v133 = v242;
      if ( v242 )
        v133 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v242 + 32LL))(v242);
      v233[0] = v133;
      v134 = sub_1587BC0(v132, (__int64 *)v233, v128, v129, v130, v131);
      sub_AE9DF0((unsigned __int8 **)(*v134 + 32LL * v252 + 8), v32, 2u);
    }
    v77 = (**(_BYTE **)(a1 + 232) & 8) != 0;
    if ( (_BYTE)v251 )
    {
      sub_AE9DF0(&v244, v77, 3u);
    }
    else if ( v253 )
    {
      v123 = sub_168B9E0(v241);
      v126 = v242;
      if ( v242 )
        v126 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v242 + 32LL))(v242);
      v233[0] = v126;
      v127 = sub_1587BC0(v123, (__int64 *)v233, v121, v122, v124, v125);
      sub_AE9DF0((unsigned __int8 **)(*v127 + 32LL * v252 + 8), v77, 3u);
    }
    goto LABEL_34;
  }
LABEL_21:
  v206[0] = v207;
  v206[1] = (void *)0x100000000LL;
  sub_1D37240((__int64)v206, 1u);
  v205[2] = a1;
  v205[0] = &v196;
  v205[1] = a5;
  v205[3] = &v199;
  v205[4] = &v197;
  ptr = v217;
  v216 = 0x400000000LL;
  if ( (((unsigned __int8)v18[1].m128i_i8[2] >> 3) & 3) != 1 )
  {
    v241[0] = (void *)a1;
    sub_1D37A00(&v241[1]);
    v35 = v196;
    v247 = 0x100000000LL;
    v249 = 0;
    v246 = v36 + 96;
    v37 = *(_QWORD *)(v11 + 11280);
    *(_QWORD *)(v11 + 11280) = v36;
    v248 = v37;
    v250 = 0;
    v251 = 0;
    v188 = sub_C00A40((unsigned __int64)v35, 1, v38, v36, v39);
    v40 = sub_BBE1D0(*(_QWORD **)(v11 + 248), 0, 0, v188, *(_DWORD *)(a6 + 24), 0, 0, 0, 0, 0, 0);
    v41 = *(_QWORD *)(v11 + 248);
    v42 = *(_QWORD *)(v40 + 48);
    v208 = (__int64 (__fastcall **)())v40;
    v178 = v42 & 0xFFFFFFFFFFFFFFF0LL;
    sub_BBD280((__int64)&v225 + 8, v41, v188, v188, (__int64)&v208, 1, v188, nullptr);
    *(_QWORD *)&v225 = (char *)&v225 + 8;
    if ( v19 )
    {
      v233[0] = (void *)v197;
      v45 = sub_C1BEF0((__int64)v233, v41, v43, v44) & 0xFFFFFFFFFFFFFFF0LL;
      v49 = *(_QWORD *)v45;
      if ( *(_BYTE *)(*(_QWORD *)v45 + 16LL) != 16
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v49 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 16
         || !sub_F63050(v49, v41, v46, v47)) )
      {
        goto LABEL_78;
      }
      v50 = (_WORD **)v19[2];
      v180 = (_WORD **)((char *)v50 + ((v19[3] - (_QWORD)v50) & 0x7FFFFFFF8LL));
      if ( v180 != v50 )
      {
        v51 = *v50;
        if ( (**v50 & 0x1FF) == 0x44 )
        {
LABEL_78:
          v57 = 1;
          goto LABEL_72;
        }
        v190 = v19;
        v192 = v18;
        v52 = v50 + 1;
        v53 = 0;
        LODWORD(v181) = 0;
        while ( 1 )
        {
          v55 = sub_C0EB40((__int64)v51, *(_QWORD *)(v11 + 248), nullptr, v47, v48);
          v56 = v225;
          v57 = sub_1D774E0(
                  v11,
                  v225,
                  0,
                  v178,
                  *((_QWORD *)v51 + 1),
                  v55,
                  *(double *)a7.m128_u64,
                  a8,
                  (__int64)v51,
                  a6,
                  (__int64 *)v206,
                  (__int64)&ptr,
                  1,
                  0,
                  0,
                  0);
          if ( v57 )
            break;
          if ( (!v53 || !(_DWORD)v181) && (*(_DWORD *)v206[0] & 0x7FFFFFFF) != 0 )
          {
            v54 = sub_EEC8C0((unsigned __int64)v51, v56, *(double *)a7.m128_u64);
            v53 = v54;
            v181 = HIDWORD(v54);
          }
          if ( v180 == v52 )
          {
            v19 = v190;
            v18 = v192;
            goto LABEL_83;
          }
          v51 = *v52++;
          if ( (*v51 & 0x1FF) == 0x44 )
            goto LABEL_78;
        }
        v58 = v53;
        if ( v57 != 5 )
          goto LABEL_52;
        sub_168B9F0((__int64)v233, (__int64 *)(v11 + 8), *(_DWORD *)(a6 + 16), 0xCBBu, 0);
        v135 = sub_1BDB6E0((__int64)v233, a6 + 184);
        v136 = (void **)(a6 + 208);
        v137 = sub_1BDB6E0(v135, a6 + 208);
        v138 = v137;
        if ( *(_BYTE *)(v137 + 120) )
        {
          v223[0] = (void *)__PAIR64__(v181, v53);
          LOBYTE(v223[1]) = 1;
          v136 = v223;
          sub_AEC610((__int64 *)(v137 + 32), (__int64 *)v223);
        }
        else if ( *(_BYTE *)(v137 + 132) )
        {
          v164 = sub_168B9E0((_QWORD *)v137);
          v167 = *(void **)(v138 + 16);
          if ( v167 )
            v167 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v167 + 32LL))(*(_QWORD *)(v138 + 16));
          v218 = v167;
          v168 = *sub_1587BC0(v164, (__int64 *)&v218, v162, v163, v165, v166) + 32LL * *(unsigned int *)(v138 + 128);
          v223[0] = (void *)__PAIR64__(v181, v58);
          LOBYTE(v223[1]) = 1;
          v136 = v223;
          sub_AEC610((__int64 *)(v168 + 8), (__int64 *)v223);
        }
        v223[0] = (void *)sub_EEC8C0((unsigned __int64)v51, (__int64)v136, *(double *)a7.m128_u64);
        sub_1587DB0(v138, (__int64 *)v223);
        sub_15F7200(v233);
        v57 = 18;
        if ( (**(_DWORD **)v205[0] & 0x10000) == 0 )
          goto LABEL_72;
        goto LABEL_53;
      }
LABEL_83:
      if ( (*(_DWORD *)v206[0] & 0x7FFFFFFF) == 1 )
      {
        v179 = sub_1864C90(v11, *((_QWORD *)v206[0] + 1), v188);
        if ( (v179 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          v57 = 18;
          goto LABEL_72;
        }
LABEL_85:
        sub_1CB3BA0((__int64)v241);
LABEL_55:
        v59 = *a5;
        if ( (*a5 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          if ( (*(_QWORD *)&byte_8[v179 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[v179 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v179) & 7) != (*(_QWORD *)&byte_8[*a5 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v59 | (unsigned __int8)*(_QWORD *)&byte_8[*a5 & 0xFFFFFFFFFFFFFFF0LL]) & 7) )
          {
            sub_F1D250((__int64)v241, v59, 0, 0);
            si128 = _mm_load_si128((const __m128i *)v241);
            *(_QWORD *)(a6 + 200) = v242;
            *(__m128i *)(a6 + 184) = si128;
            sub_F1D250((__int64)v241, v179, 0, 0);
            v75 = _mm_load_si128((const __m128i *)v241);
            *(_QWORD *)(a6 + 224) = v242;
            v76 = (_DWORD **)v205[0];
            *(__m128i *)(a6 + 208) = v75;
            if ( (**v76 & 0x10000) != 0 )
            {
LABEL_146:
              result = sub_1D640C0((__int64)v205, a7, a8);
              v30 = (__int64 *)ptr;
            }
            else
            {
              v30 = (__int64 *)ptr;
              result = 5;
            }
            goto LABEL_24;
          }
          v179 = sub_ABBE20(*(_QWORD **)(v11 + 248), v59, v179, 0);
        }
        if ( v18[2].m128i_i64[0] && !a10 )
        {
          v189 = sub_F6E530((__int64)&v197);
          v80 = v79;
          v225 = 0;
          v200 = v179;
          v226 = v228;
          v229 = 0;
          v227 = 0x400000000LL;
          v230 = v232;
          v231 = 0x400000000LL;
          v182 = v18[2].m128i_u64[0];
          v81 = *((_QWORD *)v79 + 1);
          if ( v81 && (v82 = *(int **)(v81 + 64)) != nullptr )
          {
            v83 = v82[1];
            v84 = *v82;
          }
          else
          {
            v83 = 0;
            v84 = 0;
          }
          v254 = v84;
          v255 = v83;
          v85 = *(_QWORD **)(v11 + 248);
          v241[1] = (void *)0x800000000LL;
          v86 = *v80;
          v241[0] = &v242;
          v87 = (unsigned __int64)sub_A81910(v85, v200, v86) & 0xFFFFFFFFFFFFFFFCLL;
          sub_F1D250((__int64)v223, v200, 0, 0);
          v88 = _mm_load_si128((const __m128i *)v223);
          v234.m128i_i64[1] = v87 | 2;
          v234.m128i_i64[0] = v224[0];
          v89 = LODWORD(v241[1]);
          *(__m128i *)v233 = v88;
          v90 = LODWORD(v241[1]) + 1LL;
          if ( v90 > HIDWORD(v241[1]) )
          {
            v139 = v241[0];
            if ( v241[0] > v233 || v233 >= (void **)((char *)v241[0] + 32 * LODWORD(v241[1])) )
            {
              sub_2237220(v241, &v242, v90, 32);
              v89 = LODWORD(v241[1]);
              v91 = (const __m128i *)v233;
              v92 = (char *)v241[0];
            }
            else
            {
              sub_2237220(v241, &v242, v90, 32);
              v92 = (char *)v241[0];
              v89 = LODWORD(v241[1]);
              v91 = (const __m128i *)((char *)v241[0] + (char *)v233 - v139);
            }
          }
          else
          {
            v91 = (const __m128i *)v233;
            v92 = (char *)v241[0];
          }
          v93 = (__m128i *)&v92[32 * v89];
          *v93 = _mm_loadu_si128(v91);
          v93[1] = _mm_loadu_si128(v91 + 1);
          v94 = (unsigned int)++LODWORD(v241[1]);
          v95 = *(_DWORD *)(v189 + 20);
          if ( v95 )
          {
            v96 = 16;
            v186 = v18;
            v97 = v80;
            v191 = v11;
            v98 = 32LL * (unsigned int)(v95 - 1) + 48;
            do
            {
              v99 = v241[0];
              v100 = (const __m128i *)v233;
              v101 = (const __m128i *)(*(_QWORD *)(*((_QWORD *)v97 + 1) + 64LL) + v96);
              a8 = (__m128)_mm_loadu_si128(v101);
              *(__m128 *)v233 = a8;
              v102 = v94 + 1;
              v103 = (__m128i *)((char *)v241[0] + 32 * v94);
              v234 = _mm_loadu_si128(v101 + 1);
              if ( v102 > HIDWORD(v241[1]) )
              {
                if ( v241[0] > v233 || v103 <= (__m128i *)v233 )
                {
                  sub_2237220(v241, &v242, v102, 32);
                  v100 = (const __m128i *)v233;
                  v103 = (__m128i *)((char *)v241[0] + 32 * LODWORD(v241[1]));
                }
                else
                {
                  sub_2237220(v241, &v242, v102, 32);
                  v100 = (const __m128i *)((char *)v241[0] + (char *)v233 - v99);
                  v103 = (__m128i *)((char *)v241[0] + 32 * LODWORD(v241[1]));
                }
              }
              v96 += 32;
              *v103 = _mm_loadu_si128(v100);
              v103[1] = _mm_loadu_si128(v100 + 1);
              v94 = (unsigned int)++LODWORD(v241[1]);
            }
            while ( v96 != v98 );
            v80 = v97;
            v11 = v191;
            v18 = v186;
          }
          a7 = 0;
          v239[48] = 0;
          v240 = 0;
          v233[0] = &v234;
          v233[1] = (void *)0x400000000LL;
          v237 = v239;
          v238 = 0x400000000LL;
          *(_OWORD *)v223 = 0;
          v224[0] = 0;
          v187 = sub_1CCEE60(v11, v182, 0, (__int64)v241, (__int64)v223, 0, (__m128)0LL, a8, (__int64)v233, 1, nullptr);
          if ( !v187 )
          {
            v218 = v220;
            v219 = 0x400000000LL;
            v221 = 0;
            v222 = 0;
            if ( v182 )
            {
              v194 = (unsigned int)v238;
              v193 = v237;
              v104 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v182 + 32LL))(v182);
              v105 = v218;
              v106 = (unsigned int)v219 + 1LL;
              v223[0] = (void *)(v104 & 0xFFFFFFFFFFFFFFFBLL);
              v107 = (__m128i *)((char *)v218 + 24 * (unsigned int)v219);
              v108 = (const __m128i *)v223;
              v223[1] = v193;
              v224[0] = v194;
              if ( v106 > HIDWORD(v219) )
              {
                if ( v218 > v223 || v107 <= (__m128i *)v223 )
                {
                  sub_2237220(&v218, v220, v106, 24);
                  v108 = (const __m128i *)v223;
                  v107 = (__m128i *)((char *)v218 + 24 * (unsigned int)v219);
                }
                else
                {
                  sub_2237220(&v218, v220, v106, 24);
                  v108 = (const __m128i *)((char *)v218 + (char *)v223 - v105);
                  v107 = (__m128i *)((char *)v218 + 24 * (unsigned int)v219);
                }
              }
            }
            else
            {
              v223[1] = v237;
              v107 = (__m128i *)v220;
              v108 = (const __m128i *)v223;
              v223[0] = nullptr;
              v224[0] = (unsigned int)v238;
            }
            *v107 = _mm_loadu_si128(v108);
            v107[1].m128i_i64[0] = v108[1].m128i_i64[0];
            LODWORD(v219) = v219 + 1;
            v109 = *(_QWORD *)(v182 + 16);
            if ( (v109 & 4) != 0 )
              v110 = *(_QWORD *)(v109 & 0xFFFFFFFFFFFFFFF8LL);
            else
              v110 = v109 & 0xFFFFFFFFFFFFFFF8LL;
            v111 = sub_BBF4F0(
                     *(_QWORD **)(v11 + 248),
                     v110,
                     *(_DWORD *)(v182 + 24),
                     (const __m128i *)v237,
                     (unsigned int)v238);
            sub_18C74E0(v11, 0, v111, 4);
            if ( *(_QWORD *)(v189 + 32) )
            {
              v112 = *((_QWORD *)v80 + 1);
              v113 = 0;
              if ( v112 )
              {
                v114 = *(_QWORD **)v112;
                if ( *(_QWORD *)v112 )
                {
                  v115 = *(void **)(v112 + 8);
                  v223[0] = v114;
                  v223[1] = v115;
                  v116 = (_QWORD *)(v114[1] & 0xFFFFFFFFFFFFFFF8LL);
                  if ( v116 )
                  {
                    v223[0] = v116;
                    v117 = 0;
                    while ( (v116[1] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                    {
                      v117 = 1;
                      v116 = (_QWORD *)(v116[1] & 0xFFFFFFFFFFFFFFF8LL);
                    }
                    if ( v117 )
                      v223[0] = v116;
                  }
                  v113 = sub_E90530((__int64 *)v223);
                }
                else
                {
                  v113 = *(_DWORD *)(v112 + 16);
                  if ( !v113 )
                    v113 = *(_DWORD *)(v112 + 32);
                }
              }
            }
            else
            {
              v113 = *v80;
            }
            if ( ((*(_BYTE *)(v189 + 18) >> 3) & 3) == 1 )
              v118 = v80[1];
            else
              v118 = *v80;
            v119 = *(__int64 (__fastcall ***)())(v182 + 64);
            v223[1] = (void *)0x400000000LL;
            v209 = 0;
            v208 = v119;
            v223[0] = v224;
            v187 = sub_1750770(
                     v11,
                     v182,
                     (__int64)&v208,
                     1u,
                     (__int64)v223,
                     (__int64)&v218,
                     0.0,
                     (v118 << 32) | v113,
                     (__int64)&v225);
            if ( v223[0] != v224 )
              free(v223[0]);
            if ( !v187 )
            {
              v120 = v229;
              if ( !(_BYTE)v229 )
              {
                a7 = 0;
                v202 = v204;
                v214 = &v202;
                v208 = &off_2BEBE68;
                v203 = 0;
                v204[0] = 0;
                v209 = 0;
                v212 = 0;
                v213 = 1;
                v211 = nullptr;
                v210 = 0;
                sub_227B8B0(&v208, 0, 0, 0);
                if ( *((_BYTE **)&v210 + 1) == v211 )
                {
                  v142 = (__int64 (__fastcall ***)())sub_227BF10(&v208, "'", 1);
                }
                else
                {
                  *v211 = 39;
                  v142 = &v208;
                  ++v211;
                }
                v143 = *(_QWORD *)(v182 + 40);
                if ( (v143 & 7) == 0 )
                {
                  v144 = v143 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v144 )
                  {
                    v145 = *(unsigned int **)(v144 + 16);
                    v146 = v142[4];
                    v147 = *v145;
                    v148 = v145 + 4;
                    if ( (char *)v142[3] - (char *)v146 >= v147 )
                    {
                      v195 = v142;
                      if ( v147 )
                      {
                        v184 = v147;
                        memcpy(v146, v148, v147);
                        v142 = v195;
                        v195[4] = (__int64 (__fastcall **)())((char *)v195[4] + v184);
                      }
                    }
                    else
                    {
                      sub_227BF10(v142, v148, v147);
                    }
                  }
                }
                v149 = *((_QWORD *)v80 + 1);
                if ( v149 )
                {
                  v150 = *(_DWORD **)(v149 + 64);
                  if ( v150 )
                  {
                    if ( *v150 )
                    {
                      v183 = *(_QWORD *)(v18[2].m128i_i64[0] + 56);
                      v223[0] = (void *)sub_16043A0(
                                          *(_QWORD **)(v11 + 248),
                                          *(_QWORD **)(v11 + 240),
                                          v140,
                                          (__int64)v142,
                                          v183,
                                          v141);
                      v223[1] = v151;
                      sub_F712D0((__int64)&v208, v18 + 3, v18[1].m128i_u32[1], (const __m128i *)v223, v183);
                    }
                  }
                }
                if ( *((_BYTE **)&v210 + 1) == v211 )
                  sub_227BF10(&v208, "'", 1);
                else
                  *v211++ = 39;
                v152 = *((_QWORD *)v80 + 1);
                if ( v152 )
                  v153 = *(_DWORD *)(v152 + 32);
                else
                  v153 = 0;
                sub_168B9F0((__int64)v223, (__int64 *)(v11 + 8), v153, 0x12C3u, 0);
                v154 = sub_1605D30((__int64)v223, (__int64 *)&v200);
                v155 = v154;
                if ( *(_BYTE *)(v154 + 120) )
                {
                  sub_AEC220((unsigned __int8 **)(v154 + 32), v202, v203);
                }
                else if ( *(_BYTE *)(v154 + 132) )
                {
                  v185 = sub_168B9E0((_QWORD *)v154);
                  v172 = *(_QWORD *)(v155 + 16);
                  if ( v172 )
                    v172 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v172 + 32LL))(*(_QWORD *)(v155 + 16));
                  v201[0] = v172;
                  v173 = sub_1587BC0(v185, v201, v169, (__int64)v201, v170, v171);
                  sub_AEC220((unsigned __int8 **)(*v173 + 32LL * *(unsigned int *)(v155 + 128) + 8), v202, v203);
                }
                if ( *(_QWORD *)(v189 + 32) )
                {
                  v156 = *((_QWORD *)v80 + 1);
                  if ( v156 )
                  {
                    v157 = *(_QWORD *)v156;
                    if ( *(_QWORD *)v156 )
                    {
                      v158 = *(_QWORD *)(v156 + 8);
                      v201[0] = v157;
                      v201[1] = v158;
                      v159 = *(_QWORD *)(v157 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                      if ( v159 )
                      {
                        v201[0] = v159;
                        while ( (*(_QWORD *)(v159 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                        {
                          v120 = 1;
                          v159 = *(_QWORD *)(v159 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                        }
                        if ( v120 )
                          v201[0] = v159;
                      }
                      v160 = sub_E90530(v201);
                    }
                    else
                    {
                      v160 = *(_DWORD *)(v156 + 16);
                      if ( !v160 )
                        v160 = *(_DWORD *)(v156 + 32);
                    }
                  }
                  else
                  {
                    v160 = 0;
                  }
                }
                else
                {
                  v160 = *v80;
                }
                if ( ((*(_BYTE *)(v189 + 18) >> 3) & 3) == 1 )
                  v161 = v80[1];
                else
                  v161 = *v80;
                v201[0] = __PAIR64__(v161, v160);
                sub_1587DB0(v155, v201);
                sub_15F7200(v223);
                sub_174DC50(v11, (__int64)&v225, 1u, 0.0);
                v208 = &off_2BEBE68;
                sub_227B7A0(&v208);
                if ( v202 != v204 )
                  operator delete(v202);
                v187 = 1;
              }
            }
            sub_190D5E0(v11, a7);
            if ( v218 != v220 )
              free(v218);
          }
          if ( v237 != v239 )
            free(v237);
          if ( v233[0] != &v234 )
            free(v233[0]);
          if ( v241[0] != &v242 )
            free(v241[0]);
          if ( v230 != v232 )
            free(v230);
          if ( v226 != v228 )
            free(v226);
          if ( v187 )
            goto LABEL_133;
        }
        v241[0] = (void *)v11;
        v241[1] = nullptr;
        v244 = (unsigned __int8 *)v179;
        v242 = nullptr;
        v243 = 0;
        v245 = 256;
        v60 = sub_1D62EB0(v241, v197, v198, *(double *)a7.m128_u64, a8);
        v61 = v243;
        v62 = v241[1];
        *a5 = v60;
        operator delete(v62, 16 * v61, 8);
        v66 = *a5;
        if ( (*a5 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
LABEL_133:
          v30 = (__int64 *)ptr;
          result = 18;
        }
        else
        {
          if ( v19 )
            v66 = *((_QWORD *)v206[0] + 1);
          v67 = (__int64 *)ptr;
          v30 = (__int64 *)((char *)ptr + 24 * (unsigned int)v216);
          if ( ptr == v30 )
          {
            result = 0;
          }
          else
          {
            while ( 1 )
            {
              result = sub_1D39840(v11, a6, v66, v63, v64, v65, *v67, v67[1], v67[2]);
              if ( (_DWORD)result )
                break;
              v67 += 3;
              if ( v30 == v67 )
                goto LABEL_66;
            }
            v68 = (_DWORD **)v205[0];
            *a5 = 0;
            if ( (**v68 & 0x10000) != 0 )
              goto LABEL_146;
LABEL_66:
            v30 = (__int64 *)ptr;
          }
        }
        goto LABEL_24;
      }
    }
    else
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v11 + 232) + 1LL) & 8) == 0 && ((*((_BYTE *)v196 + 1) >> 3) & 7) == 1 )
      {
        sub_168B9F0((__int64)v233, (__int64 *)(v11 + 8), v188, 0xCAEu, 0);
        sub_15F7200(v233);
        v57 = 18;
        goto LABEL_72;
      }
      v236 = 256;
      v233[0] = (void *)v11;
      v233[1] = nullptr;
      v234.m128i_i64[0] = 0;
      v234.m128i_i32[2] = 0;
      v235 = v178;
      v69 = sub_1D62EB0(v233, v197, v198, *(double *)a7.m128_u64, a8);
      operator delete(v233[1], 16LL * v234.m128i_u32[2], 8);
      v70 = v196;
      v73 = sub_C0EB40((__int64)v196, *(_QWORD *)(v11 + 248), nullptr, v71, v72);
      v57 = sub_1D774E0(
              v11,
              v225,
              0,
              v69,
              v196[1],
              v73,
              *(double *)a7.m128_u64,
              a8,
              (__int64)v70,
              a6,
              (__int64 *)v206,
              (__int64)&ptr,
              0,
              0,
              0,
              a11);
      if ( v57 )
      {
LABEL_52:
        if ( (**(_DWORD **)v205[0] & 0x10000) == 0 )
        {
LABEL_72:
          v177 = v57;
          sub_1CB3BA0((__int64)v241);
          v30 = (__int64 *)ptr;
          result = v177;
          goto LABEL_24;
        }
LABEL_53:
        v57 = sub_1D640C0((__int64)v205, a7, a8);
        goto LABEL_72;
      }
      if ( (*(_DWORD *)v206[0] & 0x7FFFFFFF) == 1 )
      {
        v179 = *((_QWORD *)v206[0] + 1);
        goto LABEL_85;
      }
    }
    v57 = 3;
    if ( (**(_DWORD **)v205[0] & 0x10000) == 0 )
      goto LABEL_72;
    goto LABEL_53;
  }
  if ( !v19 )
  {
    v179 = sub_1E5F980(a1, v196);
    goto LABEL_55;
  }
  v29 = sub_EEB7E0((unsigned __int64)v196, 1, *(double *)a7.m128_u64);
  sub_168B9F0((__int64)v241, (__int64 *)(a1 + 8), v29, 0xE00u, 0);
  sub_15F7200(v241);
  v30 = (__int64 *)ptr;
  result = 18;
LABEL_24:
  if ( v30 != (__int64 *)v217 )
  {
    v175 = result;
    free(v30);
    result = v175;
  }
  if ( v206[0] != v207 )
  {
    v176 = result;
    free(v206[0]);
    return v176;
  }
  return result;
}
