unsigned __int64 __fastcall sub_1CDD580(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        char a12,
        int a13,
        int a14)
{
  _BYTE *v16; // rax
  _BYTE *v17; // rax
  _BYTE *v18; // rax
  void **v19; // rax
  _BYTE *v20; // rax
  _BYTE *v21; // rax
  void *v22; // rax
  _QWORD *v23; // rax
  _BYTE *v24; // rax
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  char v31; // al
  __int64 v32; // r13
  unsigned __int64 v33; // rbx
  const __m128i *v35; // r13
  __int64 v36; // r9
  int v37; // eax
  __int64 v38; // rdi
  bool v39; // al
  __int64 v40; // r8
  _QWORD *v41; // rdi
  int v42; // eax
  void **v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // r13
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r9
  __int64 v50; // r8
  char *v51; // r14
  __int64 v52; // rax
  void *v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r12
  void *v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rbp
  void *v62; // r13
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r9
  __int64 v67; // rbp
  int v68; // eax
  __int64 v69; // r13
  __int64 v70; // rax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rdx
  __int64 v73; // rax
  unsigned __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 *v78; // rdx
  __int64 v79; // rsi
  __int64 v80; // rax
  size_t v81; // r13
  const char *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rax
  char v85; // dl
  __int64 v86; // r14
  __int64 v87; // rax
  char *m128i_i8; // rsi
  __int64 v89; // rax
  __int64 v90; // r14
  _BYTE *v91; // r13
  void **v92; // rdx
  unsigned __int64 v93; // rsi
  char *v94; // rax
  unsigned int v95; // ecx
  unsigned __int64 v96; // r13
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  unsigned int v101; // r15d
  __int64 *v102; // rax
  __int64 v103; // rbp
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  char *v108; // r13
  __int64 v109; // r14
  char *v110; // rbp
  void *v111; // rdi
  void *v112; // rdi
  size_t v113; // r13
  const char *v114; // rax
  __int64 v115; // rdx
  void *v116; // rdx
  int v117; // r13d
  __int64 v118; // rax
  __int64 v119; // r9
  const __m128i *v120; // rdx
  unsigned int v121; // eax
  __m128i v122; // xmm5
  int v123; // r14d
  char v124; // cl
  __int64 v125; // r9
  unsigned int v126; // eax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  _QWORD *v131; // rax
  const char *v132; // rax
  _QWORD *v133; // rax
  _QWORD *v134; // rdi
  __int64 (__fastcall *v135)(_QWORD *); // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  unsigned __int64 v140; // rax
  unsigned int v141; // eax
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  _QWORD *v146; // rax
  const char *v147; // rax
  size_t v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  _QWORD *v152; // rax
  __int64 v153; // rax
  void *v154; // r13
  unsigned __int64 v155; // rax
  _QWORD *v156; // r10
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // r9
  unsigned __int64 v161; // rsi
  unsigned int v162; // eax
  __int64 v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // r9
  void *v168; // rax
  _QWORD *v169; // rax
  _QWORD *v170; // r14
  unsigned int v171; // eax
  unsigned __int64 v172; // r14
  __m128i v173; // xmm6
  __int64 v174; // rax
  unsigned int v175; // eax
  const __m128i *v176; // rdx
  unsigned __int64 v177; // r13
  __int64 v178; // rcx
  void *v179; // rsi
  void *v180; // rax
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // r9
  _QWORD *v185; // rax
  __int64 v186; // [rsp+18h] [rbp-440h]
  __int64 v187; // [rsp+18h] [rbp-440h]
  __int64 v188; // [rsp+18h] [rbp-440h]
  __int64 v189; // [rsp+18h] [rbp-440h]
  __int64 v190; // [rsp+18h] [rbp-440h]
  __int64 v191; // [rsp+18h] [rbp-440h]
  _QWORD *v192; // [rsp+18h] [rbp-440h]
  unsigned __int64 v193; // [rsp+18h] [rbp-440h]
  __int64 v194; // [rsp+18h] [rbp-440h]
  _QWORD *v195; // [rsp+20h] [rbp-438h]
  __int64 v196; // [rsp+28h] [rbp-430h]
  __int64 v197; // [rsp+28h] [rbp-430h]
  __int64 v198; // [rsp+28h] [rbp-430h]
  __int64 v199; // [rsp+28h] [rbp-430h]
  __int64 v200; // [rsp+28h] [rbp-430h]
  __int64 v201; // [rsp+30h] [rbp-428h]
  unsigned int v202; // [rsp+38h] [rbp-420h]
  char v203; // [rsp+38h] [rbp-420h]
  unsigned int v204; // [rsp+38h] [rbp-420h]
  __int64 v205; // [rsp+40h] [rbp-418h]
  size_t n; // [rsp+48h] [rbp-410h]
  char na; // [rsp+48h] [rbp-410h]
  size_t nb; // [rsp+48h] [rbp-410h]
  __int64 v209; // [rsp+50h] [rbp-408h]
  __int64 v210; // [rsp+58h] [rbp-400h]
  __int64 v211; // [rsp+60h] [rbp-3F8h]
  size_t v212; // [rsp+78h] [rbp-3E0h]
  unsigned int v213; // [rsp+84h] [rbp-3D4h] BYREF
  void *v214; // [rsp+88h] [rbp-3D0h] BYREF
  _BYTE v215[16]; // [rsp+90h] [rbp-3C8h] BYREF
  __m128 v216; // [rsp+A0h] [rbp-3B8h] BYREF
  __int64 v217; // [rsp+B0h] [rbp-3A8h]
  _BYTE *v218; // [rsp+C0h] [rbp-398h] BYREF
  unsigned __int64 v219; // [rsp+C8h] [rbp-390h]
  void *v220; // [rsp+E0h] [rbp-378h] BYREF
  unsigned __int64 v221; // [rsp+E8h] [rbp-370h]
  void *v222; // [rsp+100h] [rbp-358h] BYREF
  signed __int64 v223; // [rsp+108h] [rbp-350h]
  _BYTE v224[16]; // [rsp+110h] [rbp-348h] BYREF
  _BYTE v225[24]; // [rsp+120h] [rbp-338h] BYREF
  int v226; // [rsp+138h] [rbp-320h] BYREF
  __m128i v227; // [rsp+150h] [rbp-308h] BYREF
  __int128 v228; // [rsp+160h] [rbp-2F8h]
  __int128 v229; // [rsp+170h] [rbp-2E8h]
  void *v230[2]; // [rsp+180h] [rbp-2D8h] BYREF
  __int64 v231; // [rsp+190h] [rbp-2C8h] BYREF
  unsigned __int64 v232; // [rsp+198h] [rbp-2C0h]
  int v233; // [rsp+1F0h] [rbp-268h]
  char v234; // [rsp+1F4h] [rbp-264h]
  void *v235; // [rsp+210h] [rbp-248h] BYREF
  __int64 v236; // [rsp+218h] [rbp-240h]
  _BYTE v237[96]; // [rsp+220h] [rbp-238h] BYREF
  void *ptr; // [rsp+280h] [rbp-1D8h]
  __int64 v239; // [rsp+288h] [rbp-1D0h]
  _WORD v240[49]; // [rsp+290h] [rbp-1C8h] BYREF
  char v241; // [rsp+2F2h] [rbp-166h]
  void *v242; // [rsp+300h] [rbp-158h] BYREF
  void *v243[2]; // [rsp+308h] [rbp-150h] BYREF
  __int64 v244; // [rsp+318h] [rbp-140h]
  unsigned __int8 *v245[6]; // [rsp+320h] [rbp-138h] BYREF
  _QWORD v246[2]; // [rsp+350h] [rbp-108h] BYREF
  _QWORD v247[2]; // [rsp+360h] [rbp-F8h] BYREF
  int v248; // [rsp+370h] [rbp-E8h]
  char v249; // [rsp+374h] [rbp-E4h]
  __int64 v250; // [rsp+378h] [rbp-E0h]
  unsigned int v251; // [rsp+380h] [rbp-D8h]
  char v252; // [rsp+384h] [rbp-D4h]
  __int64 v253; // [rsp+410h] [rbp-48h]

  v214 = (void *)a2;
  v213 = a3;
  v16 = sub_F22ED0((__int64 *)&v214);
  if ( v16 )
  {
    v222 = *((void **)v16 + 2);
    v17 = sub_F22ED0((__int64 *)&v222);
    if ( v17 )
    {
      *(_QWORD *)v225 = *((_QWORD *)v17 + 2);
      v18 = sub_F22ED0((__int64 *)v225);
      if ( v18 )
      {
        v227.m128i_i64[0] = *((_QWORD *)v18 + 2);
        v19 = (void **)sub_F22ED0(v227.m128i_i64);
        if ( v19 )
        {
          v230[0] = v19[2];
          v20 = sub_F22ED0((__int64 *)v230);
          if ( v20 )
          {
            v235 = *((void **)v20 + 2);
            v21 = sub_F22ED0((__int64 *)&v235);
            if ( v21 )
            {
              v242 = *((void **)v21 + 2);
              v22 = (void *)sub_1CB2550((__int64 *)&v242);
            }
            else
            {
              v22 = v235;
            }
          }
          else
          {
            v22 = v230[0];
          }
        }
        else
        {
          v22 = (void *)v227.m128i_i64[0];
        }
      }
      else
      {
        v22 = *(void **)v225;
      }
    }
    else
    {
      v22 = v222;
    }
  }
  else
  {
    v22 = v214;
  }
  v242 = v22;
  v23 = (_QWORD *)sub_F22F70(&v242);
  if ( v23 && (unsigned __int64)(v23[1] - 1LL) <= 0xFFFFFFFFFFFFFFD1LL )
    return sub_AB7A80(*(_QWORD **)(a1 + 248), 6u, v23, *(const __m128i **)a4, *(_DWORD *)(a4 + 8));
  if ( sub_F22E90((__int64 *)&v214) && (unsigned __int8)sub_1CBA680(a1, 0, (__int64 *)&v214, v213, 1u) )
    return 0;
  v216.m128_u64[1] = 0;
  v217 = 0;
  v24 = sub_F22F10((__int64 *)&v214);
  if ( !v24 )
  {
    sub_F22C70((__int64)&v242, (__int64 *)&v214);
    a6 = (__m128)_mm_loadu_si128((const __m128i *)v243);
    v25 = (__int64)v242;
    v216 = a6;
    v217 = v244;
    if ( v242 && (*((_BYTE *)v242 + 28) & 0x7D) != 0x45 && (*((_BYTE *)v242 + 28) & 0x7F) != 0x49 )
      goto LABEL_15;
    sub_168B9F0((__int64)&v242, (__int64 *)(a1 + 8), v213, 0x13FFu, 0);
    if ( (_BYTE)v250 )
    {
      sub_F23A70(v245, (__int64)v214);
    }
    else if ( v252 )
    {
      v58 = sub_168B9E0(&v242);
      v59 = v243[1];
      if ( v243[1] )
        v59 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v243[1] + 32LL))(v243[1]);
      v235 = v59;
      v60 = sub_1587BC0(v58, (__int64 *)&v235, v54, v55, v56, v57);
      sub_F23A70((unsigned __int8 **)(*v60 + 32LL * v251 + 8), (__int64)v214);
    }
    sub_15F7200(&v242);
    sub_1CDCDC0(a1, (__int64)v214);
    return 0;
  }
  v25 = sub_F22180((__int64)v24);
LABEL_15:
  v235 = v237;
  v236 = 0x400000000LL;
  v239 = 0x400000000LL;
  v240[48] = 0;
  v26 = v25;
  ptr = v240;
  v241 = 0;
  if ( (unsigned __int8)sub_1CCEE60(a1, v25, v213, a4, (__int64)&v216, 0, a5, a6, (__int64)&v235, 1, nullptr) )
    goto LABEL_19;
  v31 = *(_BYTE *)(v25 + 28) & 0x7F;
  if ( v31 == 68 )
  {
    v41 = *(_QWORD **)(a1 + 248);
    v40 = 0;
    goto LABEL_44;
  }
  if ( v31 == 70 )
  {
    v32 = *(_QWORD *)(v25 + 48);
    if ( *(char *)(v32 + 28) >= 0 )
    {
      v230[0] = &v231;
      v230[1] = (void *)0x400000000LL;
      v233 = 0;
      v234 = 0;
      sub_1CB3AC0((__int64)v230, v25, (__int64)v235, (unsigned int)v236, 1u);
      v42 = sub_BBD7B0(*(_QWORD *)(v25 + 56));
      v242 = (void *)a1;
      v243[0] = &dword_0 + 1;
      v233 += v42;
      v43 = &v243[1];
      do
      {
        *v43 = (void *)-4096LL;
        v43 += 2;
      }
      while ( v43 != v246 );
      BYTE2(v248) = 0;
      v246[0] = v247;
      v246[1] = 0x100000000LL;
      v44 = *(_QWORD *)(a1 + 11280);
      LOWORD(v248) = 0;
      v247[1] = v44;
      v45 = v230[0];
      v250 = 0;
      *(_QWORD *)(a1 + 11280) = &v242;
      sub_1DC38B0((unsigned int)v215, a1, v213, v25, v45[1], v45[2], 0);
      sub_18F5260(a1, v25, (int *)&v213, 1u, 0, 0, (__m128i)a5, *(double *)a6.m128_u64, 0, 0, 0);
      if ( v215[8] )
      {
        v33 = 0;
      }
      else
      {
        v227 = 0;
        v228 = 0;
        v229 = 0;
        v73 = *(_QWORD *)(v25 + 16);
        if ( (v73 & 4) != 0 )
          v74 = *(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v74 = v73 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(v74 + 8) & 0x7F) != 0x18 && (*(_BYTE *)(v74 + 8) & 0x7F) != 0 )
        {
          v75 = *(_QWORD *)(a1 + 544);
          v227.m128i_i64[0] = a1;
          *(_QWORD *)(a1 + 544) = v74;
          v227.m128i_i64[1] = v75;
          v76 = *(_QWORD *)(a1 + 512);
          BYTE8(v229) = 1;
          *(_QWORD *)&v228 = v76;
          v77 = *(_QWORD *)(a1 + 9944);
          *(_QWORD *)(a1 + 512) = 0;
          *((_QWORD *)&v228 + 1) = v77;
          LODWORD(v77) = *(_DWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 9944) = 0;
          LODWORD(v229) = v77;
          DWORD1(v229) = *(_DWORD *)(a1 + 2632);
          *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
          *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
        }
        v78 = (__int64 *)(*(_QWORD *)(v32 + 80) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v32 + 80) & 4) != 0 )
          v79 = v78[1];
        else
          v79 = *v78;
        v80 = sub_1DD1D30(a1, v79, v230, *(unsigned int *)(v25 + 24), *(_QWORD *)(v25 + 40), 0);
        if ( (v80 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v196 = v80;
          sub_17431E0(&v227);
          sub_1DBADA0(v215);
          sub_1CB3BA0((__int64)&v242);
          v40 = v196;
          v112 = v230[0];
          if ( v230[0] != &v231 )
            goto LABEL_131;
          goto LABEL_43;
        }
        v81 = j__strlen("enable_if_t");
        v82 = sub_995750(v25);
        if ( v81 == v83 && (!v81 || !memcmp(v82, "enable_if_t", v81))
          || (v113 = j__strlen("__enable_if_t"), v114 = sub_995750(v25), v113 == v115)
          && (!v113 || !memcmp(v114, "__enable_if_t", v113)) )
        {
          v84 = sub_1DBADC0(a1);
          if ( v85 )
          {
            if ( v84 )
            {
              if ( *(_BYTE *)(v84 + 20) )
              {
                if ( *(_DWORD *)(*(_QWORD *)(v84 + 32) + 24LL) == 5331 )
                {
                  v176 = *(const __m128i **)a4;
                  if ( (**(_DWORD **)a4 & 0x7FFFFFFF) == 8 )
                  {
                    v223 = 0;
                    v224[0] = 0;
                    v222 = v224;
                    v199 = v84;
                    sub_1CB4750(
                      (char **)v225,
                      a1,
                      v176[1].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL,
                      (__m128)0LL,
                      *(double *)a6.m128_u64);
                    v177 = *(_QWORD *)v225;
                    sub_A0AAD0((__int64)&v222, &v225[8]);
                    v178 = v199;
                    if ( *(int **)&v225[8] != &v226 )
                    {
                      operator delete(*(void **)&v225[8]);
                      v178 = v199;
                    }
                    v200 = v178;
                    *(_OWORD *)&v225[8] = 0;
                    *(_DWORD *)v225 = 0;
                    v226 = 0;
                    sub_1CB34F0(v178, (__int64)v225);
                    sub_168B9B0((__int64)&v218, a1 + 8, 5332);
                    v179 = v222;
                    sub_AEC220(&v218, v222, v223);
                    v180 = (void *)sub_EEC8C0(v177, (__int64)v179, 0.0);
                    LOBYTE(v221) = 1;
                    v220 = v180;
                    sub_AEC610((__int64 *)&v218, (__int64 *)&v220);
                    sub_1582CA0((__int64)&v220, &v218);
                    sub_1CB36A0(v200, *(int *)v225, (__int64 *)&v220);
                    if ( v220 && v221 )
                      sub_1580C40(v221, (unsigned __int64)v220);
                    if ( v218 && v219 )
                      sub_1580C40(v219, (unsigned __int64)v218);
                    if ( *(_QWORD *)&v225[8] && *(_QWORD *)&v225[16] )
                      sub_1580C40(*(unsigned __int64 *)&v225[16], *(unsigned __int64 *)&v225[8]);
                    if ( v222 != v224 )
                      operator delete(v222);
                  }
                }
              }
            }
          }
        }
        v33 = 0;
        sub_17431E0(&v227);
      }
      sub_1DBADA0(v215);
      sub_1CB3BA0((__int64)&v242);
      if ( v230[0] != &v231 )
        free(v230[0]);
      goto LABEL_20;
    }
LABEL_19:
    v33 = 0;
    goto LABEL_20;
  }
  if ( v31 != 74 )
  {
    if ( sub_F235A0((__int64 *)&v214, v25, v27, v28, v29, v30) || sub_F5E540(a4, (__int64)ptr, (unsigned int)v239) )
    {
      v61 = *(_QWORD **)(a1 + 248);
      v62 = ptr;
      v187 = (unsigned int)v239;
      v63 = sub_AB62A0(v61, (__int64)v214, 1u);
      v40 = sub_A780B0((__int64)v61, v63, (__int64)v62, v187);
      if ( (*(_BYTE *)(v25 + 28) & 0x7F) != 0x48 )
        goto LABEL_43;
      v67 = *(_QWORD *)(a1 + 544);
      if ( !v67 )
        goto LABEL_43;
      v68 = *(_BYTE *)(v67 + 8) & 0x7F;
      if ( v68 == 24 || (*(_BYTE *)(v67 + 8) & 0x7F) == 0 )
        goto LABEL_43;
      v69 = v40;
      while ( 1 )
      {
        if ( (unsigned int)(v68 - 59) <= 2
          && v67 != 64
          && ((*(_BYTE *)(v67 - 36) & 0x7F) == 0x3D || sub_B97230(v67 - 64)) )
        {
          v70 = *(_QWORD *)(v67 - 16);
          if ( v70 )
          {
            v71 = v70 & 0xFFFFFFFFFFFFFFF0LL;
            v72 = v71;
          }
          else
          {
            v71 = sub_A7AA70(*(_QWORD *)(a1 + 248), v67 - 64, v64, v65, v40, v66);
            v72 = v71 & 0xFFFFFFFFFFFFFFF0LL;
          }
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v72 + 32LL) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) == v69 )
            break;
        }
        v140 = sub_B8ED10(v67);
        v67 = v140;
        if ( v140 )
        {
          v68 = *(_BYTE *)(v140 + 8) & 0x7F;
          if ( (*(_BYTE *)(v67 + 8) & 0x7F) != 0 && v68 != 24 )
            continue;
        }
        v40 = v69;
        goto LABEL_43;
      }
      v41 = *(_QWORD **)(a1 + 248);
      v40 = v71;
    }
    else
    {
      v227.m128i_i64[0] = 0;
      v46 = sub_BC4EE0((_QWORD *)v25, (__int64)ptr, (unsigned int)v239, (__int64)&v227);
      if ( !v46 )
      {
        v156 = (_QWORD *)(*(_QWORD *)(v25 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v25 + 16) & 4) != 0 )
          v156 = (_QWORD *)*v156;
        v46 = sub_BC2FB0(
                *(_QWORD **)(a1 + 248),
                *(_BYTE *)(*(_QWORD *)(v25 + 48) + 73LL) >> 5,
                (__int64)v156,
                *(_DWORD *)(*(_QWORD *)(v25 + 48) + 56LL),
                *(_DWORD *)(v25 + 24),
                v25,
                (const __m128i *)ptr,
                (unsigned int)v239,
                v241,
                0);
        sub_BC3800((_QWORD *)v25, v46, v227.m128i_i64[0]);
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 24LL))(v25) )
        {
          v161 = *(_QWORD *)(v25 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v25 + 16) & 4) != 0 )
            v161 = *(_QWORD *)(v161 + 8);
          sub_B90130(v46, v161, v157, v158, v159, v160);
        }
      }
      if ( (*(_BYTE *)(v46 + 180) & 7) == 0 && (*(_BYTE *)(*(_QWORD *)(v25 + 48) + 29LL) & 1) != 0 )
      {
        sub_1DC3A50(v230, a1, v213, v46, 0);
        if ( !LOBYTE(v230[1]) )
        {
          v242 = &v243[1];
          v249 = 0;
          v243[0] = (void *)0x400000000LL;
          v248 = 0;
          sub_1CB3AC0((__int64)&v242, v25, (__int64)ptr, (unsigned int)v239, 0);
          sub_1E0A290(a1, &v242, *(_QWORD *)(v25 + 48), v46, 0, 0);
          if ( v242 != &v243[1] )
            free(v242);
        }
        sub_1DBADA0(v230);
      }
      sub_18F5260(a1, v46, (int *)&v213, 1u, 0, 0, (__m128i)a5, *(double *)a6.m128_u64, 0, 0, 0);
      v50 = *(_QWORD *)(v46 + 48);
      v41 = *(_QWORD **)(a1 + 248);
      if ( v50 )
      {
        v40 = v50 & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v155 = sub_A7AA70((__int64)v41, v46, v47, v48, 0, v49);
        v41 = *(_QWORD **)(a1 + 248);
        v40 = v155;
      }
    }
    goto LABEL_44;
  }
  v35 = (const __m128i *)v235;
  v36 = (unsigned int)v236;
  v195 = *(_QWORD **)(a1 + 248);
  v37 = *(_DWORD *)(v25 + 64);
  if ( v37 != 1 )
  {
    if ( v37 <= 1 )
    {
      if ( !v37 )
      {
        v51 = (char *)v235 + 24 * (unsigned int)v236;
        v52 = sub_1CAFA60((__int64)v235, (__int64)v51);
        v40 = 0;
        if ( v51 == (char *)v52 )
        {
          sub_F22A90(&v242, v35->m128i_i64[1]);
          v53 = v242;
          v186 = sub_1CE0190(a1, v242, v213, v35[5].m128i_i64[0], v35[4].m128i_u32[3]);
          if ( (v186 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
            v170 = *(_QWORD **)(a1 + 248);
            v253 = 0;
            v242 = &v243[1];
            v243[0] = (void *)0x800000000LL;
            v171 = sub_1CB2FB0(*(_QWORD *)a4 + 32LL, (__int64)v53, *(double *)a5.m128_u64);
            v172 = (unsigned __int64)sub_A81910(v170, v186, v171);
            sub_F1D250((__int64)&v227, v186, 0, 0);
            v173 = _mm_load_si128(&v227);
            v231 = v228;
            *(__m128i *)v230 = v173;
            v232 = v172 & 0xFFFFFFFFFFFFFFFCLL | 2;
            sub_17429A0((__int64)&v242, (const __m128i *)v230);
            sub_F22A90(v230, v35[2].m128i_i64[0]);
            v174 = sub_1CDD580(a1, v230[0], v213, &v242);
            v112 = v242;
            v40 = v174;
            if ( v242 != &v243[1] )
              goto LABEL_131;
          }
          else
          {
            v40 = v35[3].m128i_i64[1];
          }
        }
        goto LABEL_43;
      }
    }
    else
    {
      if ( v37 == 2 )
      {
        v205 = *((_QWORD *)v235 + 4);
        v38 = *(_QWORD *)(v205 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v38 + 17) & 4) != 0
          || (v26 = *(_QWORD *)(a1 + 248), sub_F60F80(v38, (__int64)v195, v27, v28, v29, (unsigned int)v236)) )
        {
          *(__m128i *)v225 = _mm_loadu_si128(v35 + 3);
          *(_QWORD *)&v225[16] = v35[4].m128i_i64[0];
          v39 = sub_F1D530((__int64)v225);
          v40 = 0;
          if ( !v39 )
          {
            v120 = *(const __m128i **)a4;
            v253 = 0;
            v242 = &v243[1];
            v243[0] = (void *)0x800000000LL;
            v192 = *(_QWORD **)(a1 + 248);
            v121 = sub_1CB2FB0((__int64)v120[2].m128i_i64, v26, *(double *)a5.m128_u64);
            v193 = (unsigned __int64)sub_A81910(v192, v205, v121);
            sub_F1D250((__int64)&v227, v205, 0, 0);
            v122 = _mm_load_si128(&v227);
            v231 = v228;
            *(__m128i *)v230 = v122;
            v232 = v193 & 0xFFFFFFFFFFFFFFFCLL | 2;
            sub_17429A0((__int64)&v242, (const __m128i *)v230);
            sub_1CB2F30((__int64)&v220, (__int64)v225);
            LODWORD(v230[1]) = 64;
            v230[0] = nullptr;
            BYTE4(v230[1]) = 0;
            v123 = sub_98E2D0((__int64 *)&v220, (__int64 *)v230);
            if ( LODWORD(v230[1]) > 0x40 && v230[0] )
              operator delete[](v230[0]);
            if ( v123 >= 0 )
            {
              v124 = BYTE4(v221);
              LODWORD(v223) = v221;
              if ( (unsigned int)v221 > 0x40 )
              {
                v203 = BYTE4(v221);
                sub_2205470(&v222, 0, 0);
                v124 = v203;
              }
              else
              {
                v222 = nullptr;
              }
              for ( BYTE4(v223) = v124; ; v124 = BYTE4(v223) )
              {
                if ( v124 )
                {
                  if ( (int)sub_2205DB0(&v222, &v220) >= 0 )
                    goto LABEL_168;
                }
                else if ( (int)sub_2205E20(&v222, &v220) >= 0 )
                {
LABEL_168:
                  if ( (unsigned int)v223 > 0x40 && v222 )
                    operator delete[](v222);
                  if ( (unsigned int)v221 > 0x40 && v220 )
                    operator delete[](v220);
                  sub_F22A90(v230, v35->m128i_i64[1]);
                  v40 = sub_1CDD580(a1, v230[0], v213, &v242);
                  goto LABEL_175;
                }
                sub_F1F190((__int64)&v227, v195, (void ***)&v222, v205, 0, v125);
                v126 = sub_1CB2FB0(*(_QWORD *)a4 + 64LL, (__int64)v195, *(double *)a5.m128_u64);
                sub_1D3AAD0(v230, a1, &v227, v205, v126, 0);
                sub_17429A0((__int64)&v242, (const __m128i *)v230);
                sub_2205900(&v222);
              }
            }
            v162 = sub_1CB2FB0(*(_QWORD *)a4 + 64LL, (__int64)v230, *(double *)a5.m128_u64);
            sub_168B9F0((__int64)v230, (__int64 *)(a1 + 8), v162, 0xFA7u, 0);
            sub_15F7200(v230);
            if ( (unsigned int)v221 > 0x40 && v220 )
              operator delete[](v220);
            v40 = 0;
LABEL_175:
            v112 = v242;
            if ( v242 != &v243[1] )
              goto LABEL_131;
          }
        }
        else
        {
          v141 = sub_1CB2FB0(*(_QWORD *)a4 + 32LL, (__int64)v195, *(double *)a5.m128_u64);
          sub_168B9F0((__int64)&v242, (__int64 *)(a1 + 8), v141, 0xFA6u, 0);
          sub_15F7200(&v242);
          v40 = 0;
        }
        goto LABEL_43;
      }
      if ( v37 == 3 )
      {
        v227 = _mm_loadu_si128((const __m128i *)v235);
        *(_QWORD *)&v228 = *((_QWORD *)v235 + 2);
        *(__m128i *)v230 = _mm_loadu_si128((const __m128i *)((char *)v235 + 24));
        v231 = *((_QWORD *)v235 + 5);
        if ( sub_F1D530((__int64)&v227) || sub_F1D530((__int64)v230) )
        {
          v40 = 0;
          goto LABEL_43;
        }
        sub_1CB2F30((__int64)v225, (__int64)&v227);
        LODWORD(v243[0]) = 64;
        v242 = (void *)HIDWORD(v230[0]);
        BYTE4(v243[0]) = 0;
        v117 = sub_98E2D0((__int64 *)v225, (__int64 *)&v242);
        if ( LODWORD(v243[0]) > 0x40 && v242 )
          operator delete[](v242);
        if ( v117 >= 0 )
        {
          v175 = sub_1CB2FB0(*(_QWORD *)a4, (__int64)&v242, *(double *)a5.m128_u64);
          sub_168B9F0((__int64)&v242, (__int64 *)(a1 + 8), v175, 0x1453u, 0);
          sub_15F7200(&v242);
          v40 = 0;
          goto LABEL_151;
        }
        v118 = *(_QWORD *)v225;
        if ( v225[12] )
        {
          if ( *(_DWORD *)&v225[8] <= 0x40u )
          {
LABEL_150:
            v40 = *((_QWORD *)v230[1] + 3 * v118 + 1);
LABEL_151:
            if ( *(_DWORD *)&v225[8] > 0x40u && *(_QWORD *)v225 )
            {
              v189 = v40;
              operator delete[](*(void **)v225);
              v40 = v189;
            }
            goto LABEL_43;
          }
        }
        else if ( *(_DWORD *)&v225[8] <= 0x40u )
        {
          if ( *(_DWORD *)&v225[8] )
            v118 = (__int64)(*(_QWORD *)v225 << (64 - v225[8])) >> (64 - v225[8]);
          else
            v118 = 0;
          goto LABEL_150;
        }
        v118 = **(_QWORD **)v225;
        goto LABEL_150;
      }
    }
    return sub_1CDF1F0(a1, v25, v27, v28, v29, v236, a9, a10, a11, a12, a13, a14);
  }
  if ( (unsigned int)(*(_DWORD *)(v195[2181] + 248LL) - 49) > 2 )
  {
    v190 = (unsigned int)v236;
    sub_168B9F0((__int64)&v242, (__int64 *)(a1 + 8), v213, 0xF4Bu, 0);
    v119 = v190;
    if ( (_BYTE)v250 )
    {
      sub_AE9DF0(v245, v25, 0xAu);
      v119 = v190;
    }
    else if ( v252 )
    {
      v197 = v190;
      v163 = sub_168B9E0(&v242);
      v167 = v190;
      v194 = v163;
      v168 = v243[1];
      if ( v243[1] )
      {
        v168 = (void *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)v243[1] + 32LL))(
                         v243[1],
                         a1 + 8,
                         *(_QWORD *)v243[1],
                         v165,
                         v166,
                         v167);
        v167 = v197;
      }
      v198 = v167;
      v230[0] = v168;
      v169 = sub_1587BC0(v194, (__int64 *)v230, v164, v165, v166, v167);
      sub_AE9DF0((unsigned __int8 **)(*v169 + 32LL * v251 + 8), v25, 0xAu);
      v119 = v198;
    }
    v191 = v119;
    sub_15F7200(&v242);
    v36 = v191;
  }
  v86 = (__int64)&v35->m128i_i64[3 * v36];
  v87 = sub_1CAFA60((__int64)v35, v86);
  v40 = 0;
  if ( v86 != v87 )
    goto LABEL_43;
  sub_1CB2F30((__int64)&v242, (__int64)v35);
  if ( LODWORD(v243[0]) <= 0x40 )
  {
    LODWORD(v209) = (_DWORD)v242;
  }
  else
  {
    v209 = *(_QWORD *)v242;
    operator delete[](v242);
  }
  sub_1CB2F30((__int64)&v242, (__int64)&v35[1].m128i_i64[1]);
  if ( LODWORD(v243[0]) <= 0x40 )
  {
    LODWORD(v210) = (_DWORD)v242;
  }
  else
  {
    v210 = *(_QWORD *)v242;
    operator delete[](v242);
  }
  m128i_i8 = v35[3].m128i_i8;
  sub_1CB2F30((__int64)&v242, (__int64)v35[3].m128i_i64);
  if ( LODWORD(v243[0]) <= 0x40 )
  {
    LODWORD(v211) = (_DWORD)v242;
  }
  else
  {
    v211 = *(_QWORD *)v242;
    operator delete[](v242);
  }
  v89 = v35[4].m128i_u32[3];
  v90 = v35[5].m128i_i64[0];
  v230[0] = &v231;
  v230[1] = (void *)0x100000000LL;
  v201 = v90 + 24 * v89;
  if ( v90 == v201 )
  {
LABEL_224:
    v40 = sub_A77930((__int64)v195, v209, v210, v211, (__int64)v230[0], LODWORD(v230[1]));
    goto LABEL_124;
  }
  while ( 1 )
  {
    v96 = *(_QWORD *)(v90 + 8);
    v101 = sub_1CB2FB0(*(_QWORD *)a4 + 96LL, (__int64)m128i_i8, *(double *)a5.m128_u64);
    v102 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v96 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v103 = *v102;
    if ( *(_BYTE *)(*v102 + 16) != 48 )
      goto LABEL_122;
    v202 = 0;
    if ( (unsigned __int8)sub_1CB1310(*v102, (__int64)m128i_i8, v97, v98, v99, v100) )
    {
      n = j__strlen("Literal");
      v131 = sub_F60F10(v103, (__int64)m128i_i8, v127, v128, v129, v130);
      v132 = sub_995750((__int64)v131);
      m128i_i8 = (char *)n;
      if ( n == v104 )
      {
        if ( !n )
          break;
        m128i_i8 = "Literal";
        if ( !memcmp(v132, "Literal", n) )
          break;
      }
    }
    if ( (unsigned __int8)sub_1CB1310(v103, (__int64)m128i_i8, v104, v105, v106, v107) )
    {
      nb = j__strlen("integral_constant");
      v146 = sub_F60F10(v103, (__int64)m128i_i8, v142, v143, v144, v145);
      v147 = sub_995750((__int64)v146);
      if ( nb == v148 )
      {
        na = 0;
        goto LABEL_192;
      }
    }
LABEL_122:
    if ( (unsigned __int8)sub_1E63CF0(a1, v101, v96, 1, 3380) )
      goto LABEL_123;
    LOBYTE(v242) = 3;
    v243[0] = (void *)v96;
    LODWORD(v244) = 1;
    v243[1] = nullptr;
LABEL_112:
    v91 = v230[0];
    v92 = &v242;
    v93 = LODWORD(v230[1]) + 1LL;
    v94 = (char *)v230[0] + 32 * LODWORD(v230[1]);
    if ( v93 > HIDWORD(v230[1]) )
    {
      if ( v230[0] > &v242 || v94 <= (char *)&v242 )
      {
        sub_AEAE50((__int64 *)v230, v93);
        v92 = &v242;
        v94 = (char *)v230[0] + 32 * LODWORD(v230[1]);
      }
      else
      {
        sub_AEAE50((__int64 *)v230, v93);
        v92 = (void **)((char *)v230[0] + (char *)&v242 - v91);
        v94 = (char *)v230[0] + 32 * LODWORD(v230[1]);
      }
    }
    *v94 = 0;
    m128i_i8 = (char *)(v92 + 2);
    *((_QWORD *)v94 + 1) = 0;
    *((_DWORD *)v94 + 6) = 1;
    *((_QWORD *)v94 + 2) = 0;
    *v94 = *(_BYTE *)v92;
    *((_QWORD *)v94 + 1) = v92[1];
    v95 = *((_DWORD *)v92 + 6);
    if ( v95 <= 0x40 )
    {
      v116 = v92[2];
      *((_DWORD *)v94 + 6) = v95;
      *((_QWORD *)v94 + 2) = v116;
    }
    else
    {
      sub_22056A0(v94 + 16, m128i_i8);
    }
    ++LODWORD(v230[1]);
    if ( (unsigned int)v244 > 0x40 && v243[1] )
      operator delete[](v243[1]);
    v90 += 24;
    if ( v201 == v90 )
      goto LABEL_224;
  }
  v133 = sub_F60F10(v103, (__int64)m128i_i8, v104, v105, v106, v107);
  v134 = v133;
  if ( (*((_BYTE *)v133 + 28) & 0x7Fu) - 60 > 1 )
    goto LABEL_266;
  v103 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v133[21] + 16LL) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                   & 0xFFFFFFFFFFFFFFF0LL);
  v135 = *(__int64 (__fastcall **)(_QWORD *))(*v133 + 16LL);
  if ( *(_BYTE *)(v103 + 16) != 48 )
  {
    v204 = v135(v134);
    sub_168B9F0((__int64)&v242, (__int64 *)(a1 + 8), v204, 0xF4Eu, 0);
    goto LABEL_184;
  }
  v202 = v135(v134);
  na = sub_1CB1310(v103, (__int64)m128i_i8, v136, v137, v138, v139);
  if ( !na
    || (v212 = j__strlen("integral_constant"),
        v185 = sub_F60F10(v103, (__int64)m128i_i8, v181, v182, v183, v184),
        v147 = sub_995750((__int64)v185),
        v212 != v148) )
  {
LABEL_183:
    sub_168B9F0((__int64)&v242, (__int64 *)(a1 + 8), v202, 0xF4Eu, 0);
LABEL_184:
    sub_15F7200(&v242);
    LODWORD(v244) = 1;
    goto LABEL_123;
  }
LABEL_192:
  if ( v148 )
  {
    m128i_i8 = "integral_constant";
    if ( memcmp(v147, "integral_constant", v148) )
    {
      if ( na )
        goto LABEL_183;
      goto LABEL_122;
    }
  }
  v152 = sub_F60F10(v103, (__int64)m128i_i8, v148, v149, v150, v151);
  if ( (*((_BYTE *)v152 + 28) & 0x7Fu) - 60 > 1 )
LABEL_266:
    BUG();
  v153 = v152[21];
  v154 = *(void **)(v153 + 16);
  sub_1CB2F30((__int64)&v242, v153 + 32);
  *(_DWORD *)&v225[8] = v243[0];
  *(_QWORD *)v225 = v242;
  v227.m128i_i32[2] = (__int32)v243[0];
  if ( na )
  {
    if ( LODWORD(v243[0]) > 0x40 )
      sub_2205510(&v227);
    else
      v227.m128i_i64[0] = (__int64)v242;
    LOBYTE(v242) = 2;
    v243[0] = nullptr;
    LODWORD(v244) = v227.m128i_i32[2];
    v243[1] = (void *)v227.m128i_i64[0];
  }
  else
  {
    if ( LODWORD(v243[0]) > 0x40 )
      sub_2205510(&v227);
    else
      v227.m128i_i64[0] = (__int64)v242;
    LOBYTE(v242) = 1;
    v243[0] = v154;
    LODWORD(v244) = v227.m128i_i32[2];
    v243[1] = (void *)v227.m128i_i64[0];
  }
  if ( *(_DWORD *)&v225[8] > 0x40u && *(_QWORD *)v225 )
    operator delete[](*(void **)v225);
  if ( (unsigned __int8)((_BYTE)v242 - 1) <= 2u )
    goto LABEL_112;
  if ( (unsigned int)v244 > 0x40 && v243[1] )
    operator delete[](v243[1]);
LABEL_123:
  v40 = 0;
LABEL_124:
  v108 = (char *)v230[0];
  v109 = v40;
  v110 = (char *)v230[0] + 32 * LODWORD(v230[1]);
  if ( v230[0] != v110 )
  {
    do
    {
      v110 -= 32;
      if ( *((_DWORD *)v110 + 6) > 0x40u )
      {
        v111 = *((void **)v110 + 2);
        if ( v111 )
          operator delete[](v111);
      }
    }
    while ( v108 != v110 );
    v40 = v109;
  }
  v112 = v230[0];
  if ( v230[0] != &v231 )
  {
LABEL_131:
    v188 = v40;
    free(v112);
    v40 = v188;
  }
LABEL_43:
  v41 = *(_QWORD **)(a1 + 248);
LABEL_44:
  v33 = sub_AB81A0(v41, (__int64)v214, *(const __m128i **)a4, *(unsigned int *)(a4 + 8), ptr, (unsigned int)v239, v40);
LABEL_20:
  if ( ptr != v240 )
    free(ptr);
  if ( v235 != v237 )
    free(v235);
  return v33;
}
