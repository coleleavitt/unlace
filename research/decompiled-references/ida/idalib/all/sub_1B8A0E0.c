__int64 __fastcall sub_1B8A0E0(__m128i *a1, __int64 *a2, __int64 a3, __int64 a4, int a5, int a6, double a7, __m128 a8)
{
  const void *v10; // r12
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 *v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v17; // rbx
  _QWORD *v18; // rcx
  int v19; // r15d
  __int64 v20; // rdi
  __int64 v21; // rsi
  _DWORD *v22; // rsi
  _DWORD *v23; // rsi
  _DWORD *v24; // rsi
  __int64 v25; // rdx
  _DWORD *v26; // rax
  _QWORD *v27; // rax
  _DWORD *v28; // rsi
  _DWORD *v29; // rsi
  void **v30; // r12
  void **v31; // rbp
  char *v32; // r12
  char *v33; // rbp
  char *v34; // rdi
  char *v35; // rdi
  char *v36; // rdi
  char *v37; // rdi
  char *v38; // rdi
  char *v39; // rdi
  char *v40; // rdi
  char *v41; // rdi
  __int64 v42; // rax
  unsigned __int64 v43; // rbp
  __int64 *v44; // r12
  __m128i *v45; // r9
  __int64 v46; // rax
  __int32 v47; // edx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // rsi
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // r14
  __m128 v73; // xmm0
  __m128 v74; // xmm0
  __int64 v75; // r12
  __int64 v76; // rbp
  char *v77; // rbx
  __int64 v78; // rdi
  __int64 v79; // r15
  unsigned __int64 v80; // r14
  void **v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  unsigned __int64 v87; // rax
  __int64 v88; // rdx
  unsigned __int64 v89; // rcx
  __int64 v90; // rbp
  __int64 v91; // r8
  __int16 v92; // ax
  __m128i *v93; // rax
  __int64 v94; // rdi
  void *v95; // rsi
  __int64 v96; // rax
  unsigned __int64 v97; // rdi
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  unsigned int v101; // eax
  unsigned __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rsi
  unsigned __int64 v106; // rdi
  unsigned int v107; // eax
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // rsi
  __int64 v110; // rax
  unsigned int v111; // eax
  unsigned __int64 v112; // rax
  __int64 v113; // r15
  void *v114; // rsi
  char *v115; // rax
  unsigned __int64 v116; // rdi
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  unsigned int v120; // eax
  unsigned __int64 v121; // r15
  __int64 v122; // rcx
  void *v123; // rsi
  _QWORD *v124; // r14
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  unsigned int v128; // eax
  unsigned __int64 v129; // r14
  unsigned __int64 *v130; // rsi
  unsigned int v131; // eax
  __int64 v132; // rsi
  unsigned __int64 v133; // rax
  unsigned __int64 v134; // rdx
  int v135; // eax
  unsigned __int64 v136; // rdi
  int v137; // ebx
  __int64 v138; // rsi
  __int64 v139; // rdx
  __int64 v140; // r8
  unsigned int v141; // r12d
  char *v142; // rbx
  _QWORD *v143; // r14
  unsigned __int64 v144; // rdi
  __int64 v145; // r15
  unsigned __int64 v146; // rbp
  int v147; // eax
  __int64 v148; // rax
  __int64 v149; // r15
  __int16 v150; // ax
  void *v151; // rsi
  __int64 v152; // rax
  unsigned __int64 v153; // rdi
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  unsigned int v157; // eax
  __int64 v158; // rdx
  unsigned __int64 v159; // rcx
  __int64 v160; // r8
  unsigned __int64 v161; // r14
  char *v162; // rax
  void *v163; // rsi
  __int64 v164; // rdi
  __int64 v165; // rbp
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  unsigned int v169; // eax
  unsigned __int64 v170; // rax
  unsigned __int64 v171; // rbp
  int v172; // eax
  unsigned __int64 v173; // rdi
  int v174; // ebx
  __m128 v175; // xmm0
  __int64 v176; // [rsp-20h] [rbp-DF8h]
  __int64 v177; // [rsp-10h] [rbp-DE8h]
  __int64 v178; // [rsp-10h] [rbp-DE8h]
  _QWORD *v180; // [rsp+8h] [rbp-DD0h]
  __int64 v182; // [rsp+18h] [rbp-DC0h]
  unsigned __int64 v183; // [rsp+18h] [rbp-DC0h]
  __m128i *v184; // [rsp+20h] [rbp-DB8h] BYREF
  __int64 v185; // [rsp+28h] [rbp-DB0h]
  __int64 v186; // [rsp+30h] [rbp-DA8h]
  char **v187; // [rsp+38h] [rbp-DA0h]
  __m128 *v188; // [rsp+40h] [rbp-D98h]
  char *v189; // [rsp+48h] [rbp-D90h]
  __int64 v190; // [rsp+50h] [rbp-D88h]
  const __m128i *v191; // [rsp+58h] [rbp-D80h]
  void **v192; // [rsp+60h] [rbp-D78h]
  __m128i *v193; // [rsp+68h] [rbp-D70h]
  void ***v194; // [rsp+70h] [rbp-D68h]
  void **v195; // [rsp+78h] [rbp-D60h]
  __m128i *v196; // [rsp+80h] [rbp-D58h]
  void ***v197; // [rsp+88h] [rbp-D50h]
  void **v198; // [rsp+90h] [rbp-D48h]
  char *v199; // [rsp+98h] [rbp-D40h]
  unsigned __int64 v200; // [rsp+A0h] [rbp-D38h]
  __m128i *v201; // [rsp+A8h] [rbp-D30h]
  void **p_ptr; // [rsp+B0h] [rbp-D28h]
  void **v203; // [rsp+B8h] [rbp-D20h]
  void **v204; // [rsp+C0h] [rbp-D18h]
  int v205; // [rsp+C8h] [rbp-D10h]
  int v206; // [rsp+CCh] [rbp-D0Ch]
  __int64 v207; // [rsp+D0h] [rbp-D08h]
  __m128i *v208; // [rsp+D8h] [rbp-D00h]
  __int64 v209[2]; // [rsp+E8h] [rbp-CF0h] BYREF
  __int64 v210; // [rsp+F8h] [rbp-CE0h] BYREF
  __int64 v211; // [rsp+100h] [rbp-CD8h] BYREF
  __int64 v212; // [rsp+108h] [rbp-CD0h]
  __int64 v213; // [rsp+110h] [rbp-CC8h]
  unsigned int v214; // [rsp+118h] [rbp-CC0h]
  void *v215; // [rsp+120h] [rbp-CB8h] BYREF
  char v216; // [rsp+130h] [rbp-CA8h] BYREF
  void *v217; // [rsp+140h] [rbp-C98h] BYREF
  size_t v218; // [rsp+148h] [rbp-C90h]
  char v219; // [rsp+150h] [rbp-C88h] BYREF
  void *v220[2]; // [rsp+160h] [rbp-C78h] BYREF
  char v221; // [rsp+170h] [rbp-C68h] BYREF
  const char *v222; // [rsp+180h] [rbp-C58h] BYREF
  __int16 v223; // [rsp+1A0h] [rbp-C38h]
  void **v224; // [rsp+1B0h] [rbp-C28h] BYREF
  __int16 v225; // [rsp+1D0h] [rbp-C08h]
  __m128i v226[3]; // [rsp+1E0h] [rbp-BF8h] BYREF
  char *v227; // [rsp+210h] [rbp-BC8h] BYREF
  __int16 v228; // [rsp+230h] [rbp-BA8h]
  char v229; // [rsp+240h] [rbp-B98h] BYREF
  __m128 v230; // [rsp+270h] [rbp-B68h] BYREF
  __m128 v231; // [rsp+280h] [rbp-B58h]
  __int64 *v232; // [rsp+290h] [rbp-B48h]
  void *v233; // [rsp+2A0h] [rbp-B38h] BYREF
  __int64 v234; // [rsp+2A8h] [rbp-B30h]
  char v235; // [rsp+2B0h] [rbp-B28h] BYREF
  void *v236[2]; // [rsp+2D0h] [rbp-B08h] BYREF
  __int64 v237; // [rsp+2E0h] [rbp-AF8h] BYREF
  void *ptr; // [rsp+300h] [rbp-AD8h] BYREF
  __int64 v239; // [rsp+308h] [rbp-AD0h]
  char v240; // [rsp+310h] [rbp-AC8h] BYREF
  __m128i v241; // [rsp+330h] [rbp-AA8h] BYREF
  __int64 v242; // [rsp+340h] [rbp-A98h]
  void *v243; // [rsp+360h] [rbp-A78h] BYREF
  __int64 v244; // [rsp+368h] [rbp-A70h]
  __int64 v245; // [rsp+370h] [rbp-A68h] BYREF
  void **v246; // [rsp+3A0h] [rbp-A38h] BYREF
  __int64 v247; // [rsp+3A8h] [rbp-A30h]
  char v248; // [rsp+3B0h] [rbp-A28h] BYREF
  char *v249; // [rsp+3F0h] [rbp-9E8h] BYREF
  __int64 v250; // [rsp+3F8h] [rbp-9E0h]
  char v251; // [rsp+400h] [rbp-9D8h] BYREF

  v10 = a2;
  v205 = a6;
  v11 = sub_168B6C0((__int64)a1);
  v12 = &a2[a3];
  v180 = (_QWORD *)v11;
  v209[0] = *(_QWORD *)(a1->m128i_i64[0] + 608);
  if ( v12 == a2 )
    return 1;
  v13 = *a2;
  if ( *(_DWORD *)(*a2 + 8) != 97 )
  {
    v14 = a2 + 1;
    while ( v12 != v14 )
    {
      v13 = *v14++;
      if ( *(_DWORD *)(v13 + 8) == 97 )
        goto LABEL_8;
    }
    return 1;
  }
LABEL_8:
  v17 = *(unsigned int *)(v13 + 16);
  v18 = (_QWORD *)(v13 + 24);
  v209[1] = v13;
  v19 = v17;
  v20 = v13 + 24 + 8 * v17;
  v21 = (__int64)(8 * v17) >> 3;
  if ( !((__int64)(8 * v17) >> 5) )
  {
LABEL_94:
    if ( v21 != 2 )
    {
      if ( v21 != 3 )
      {
        if ( v21 != 1 )
          goto LABEL_25;
        goto LABEL_97;
      }
      if ( !*v18 || (*(_DWORD *)*v18 & 0x40000) != 0 )
        goto LABEL_24;
      ++v18;
    }
    if ( !*v18 || (*(_DWORD *)*v18 & 0x40000) != 0 )
      goto LABEL_24;
    ++v18;
LABEL_97:
    if ( *v18 && (*(_DWORD *)*v18 & 0x40000) == 0 )
      goto LABEL_25;
    goto LABEL_24;
  }
  v22 = *(_DWORD **)(v13 + 24);
  if ( v22 )
  {
    if ( (*v22 & 0x40000) == 0 )
    {
      v23 = *(_DWORD **)(v13 + 32);
      v18 = (_QWORD *)(v13 + 32);
      if ( v23 )
      {
        if ( (*v23 & 0x40000) == 0 )
        {
          v24 = *(_DWORD **)(v13 + 40);
          v18 = (_QWORD *)(v13 + 40);
          if ( v24 )
          {
            v25 = v13 + 32 * ((__int64)(8 * v17) >> 5) + 8;
            while ( (*v24 & 0x40000) == 0 )
            {
              v26 = (_DWORD *)v18[1];
              if ( !v26 || (*v26 & 0x40000) != 0 )
              {
                ++v18;
                break;
              }
              v27 = v18 + 2;
              if ( v18 == (_QWORD *)v25 )
              {
                v18 += 2;
                v21 = (v20 - (__int64)v27) >> 3;
                goto LABEL_94;
              }
              v28 = (_DWORD *)v18[2];
              if ( !v28
                || (*v28 & 0x40000) != 0
                || (v29 = (_DWORD *)v18[3], v27 = v18 + 3, !v29)
                || (*v29 & 0x40000) != 0 )
              {
                v18 = v27;
                break;
              }
              v18 += 4;
              v24 = (_DWORD *)*v18;
              if ( !*v18 )
                break;
            }
          }
        }
      }
    }
  }
LABEL_24:
  if ( (_QWORD *)v20 != v18 )
    return 1;
LABEL_25:
  if ( !a4 )
    return 1;
  v249 = &v251;
  v187 = &v249;
  v250 = 0x400000000LL;
  sub_1B50610((__int64)&v249, v17);
  v197 = &v246;
  v210 = 0;
  v246 = (void **)&v248;
  v247 = 0x400000000LL;
  if ( (unsigned __int8)sub_1AFD830((__int64)a1, 69, a4, v17, (__int64)&v249, (__int64)&v210, (__int64)&v246) )
  {
    if ( (unsigned __int8)sub_B8E180(*(_QWORD *)(a1->m128i_i64[0] + 544)) )
    {
      v15 = sub_EF6790((__int64)v180, a5, v205, v10, a3, v17, a4, 0);
    }
    else
    {
      v203 = &v243;
      v243 = &v245;
      v244 = 0x600000000LL;
      sub_1AF7D50((__int64)&v243, v17, 0);
      sub_1AE75D0(a4, (__int64)v243, (unsigned int)v244);
      v234 = 0x400000000LL;
      v198 = &v233;
      v233 = &v235;
      v42 = a1->m128i_i64[0];
      v212 = 0;
      v211 = v42;
      v236[0] = &v237;
      p_ptr = &ptr;
      v213 = 0;
      v214 = 0;
      v204 = v236;
      v236[1] = (void *)0x400000000LL;
      ptr = &v240;
      v239 = 0x400000000LL;
      if ( v17 )
      {
        sub_1AE86A0((__int64)v236, v17);
        if ( (unsigned int)v239 != v17 )
        {
          if ( (unsigned int)v239 > v17 )
            LODWORD(v239) = v17;
          else
            sub_1AE86A0((__int64)p_ptr, v17);
        }
        v185 = 0;
        v194 = &v224;
        v193 = (__m128i *)&v222;
        v184 = (__m128i *)&v229;
        v191 = (const __m128i *)&v227;
        v188 = &v230;
        v186 = (__int64)&v215;
        v192 = &v217;
        v201 = &v241;
        v189 = &v221;
        v190 = (__int64)&v219;
        v199 = &v216;
        v207 = (__int64)v10;
        v208 = (__m128i *)a3;
        v200 = v17;
        v206 = v17;
        do
        {
          while ( 1 )
          {
            v43 = (unsigned int)v185;
            v44 = (__int64 *)&v249[616 * (unsigned int)v185];
            v45 = *(__m128i **)v44[19];
            v46 = v45[1].m128i_i64[0];
            v47 = v45->m128i_i32[1];
            v196 = v45;
            v48 = *(_QWORD *)(v46 + 40);
            v49 = v45[1].m128i_i64[1];
            v241.m128i_i32[2] = v47;
            v241.m128i_i64[0] = v48;
            v242 = v49;
            sub_B87650(v186, v241.m128i_i64);
            v50 = *v44;
            v51 = *(_QWORD *)(*v44 + 8);
            LOWORD(v232) = 260;
            v195 = (void **)v51;
            v230.m128_u64[0] = v186;
            v227 = ".iv.";
            v228 = 259;
            sub_E3A880(v220, (unsigned int)v185, 0);
            v225 = 260;
            v222 = ".floor_";
            v223 = 259;
            v224 = v220;
            sub_A41580(v226, v193, (const __m128i *)v194, v52, v53, v54);
            sub_A41580(v184, v226, v191, v55, v56, v57);
            sub_A41580(&v241, v184, (const __m128i *)v188, v58, v59, v60);
            sub_2253560(v192, &v241);
            v61 = (__int64)v196;
            if ( v220[0] != v189 )
            {
              operator delete(v220[0]);
              v61 = (__int64)v196;
            }
            v62 = sub_1AFE760(a1->m128i_i64[0], 0, (__int64)v195, v217, v218, v61);
            *((_QWORD *)v236[0] + (unsigned int)v185) = v62;
            if ( v217 != (void *)v190 )
              operator delete(v217);
            LOWORD(v232) = 260;
            v230.m128_u64[0] = v186;
            v228 = 259;
            v227 = ".iv.";
            sub_E3A880(v220, v43, 0);
            v225 = 260;
            v222 = ".stripe_";
            v223 = 259;
            v224 = v220;
            sub_A41580(v226, v193, (const __m128i *)v194, v63, v64, v65);
            sub_A41580(v184, v226, v191, v66, v67, v68);
            sub_A41580(&v241, v184, (const __m128i *)v188, v69, v70, v71);
            sub_2253560(v192, &v241);
            if ( v220[0] != v189 )
              operator delete(v220[0]);
            v72 = *(_QWORD *)(v50 + 16);
            *(_QWORD *)(v72 + 40) = sub_6F3470(*(_QWORD *)(a1->m128i_i64[0] + 240) + 552LL, v217, v218);
            *((_QWORD *)ptr + v43) = v72;
            if ( v217 != (void *)v190 )
              operator delete(v217);
            sub_1AF60D0(
              v180,
              (__int64)v44,
              *((_QWORD *)v243 + v43),
              v246[2 * v43],
              LODWORD(v246[2 * v43 + 1]),
              (__int64)v198);
            if ( v215 == v199 )
              break;
            operator delete(v215);
            if ( ++v185 == v200 )
              goto LABEL_76;
          }
          ++v185;
        }
        while ( v200 != v185 );
LABEL_76:
        v19 = v206;
        v10 = (const void *)v207;
        a3 = (__int64)v208;
        v182 = v210;
        v184 = (__m128i *)&v211;
        v232 = v209;
        LODWORD(v191) = v206 - 1;
        v73 = _mm_loadh_ps((const double *)&v184);
        v184 = a1;
        v230 = v73;
        v74 = _mm_loadh_ps((const double *)&v184);
        v231 = v74;
        if ( v206 - 1 >= 0 )
        {
          LODWORD(v184) = v206 - 1;
          LODWORD(v194) = v206;
          v185 = 8LL * (v206 - 1);
          v196 = v208;
          v195 = (void **)v207;
          v75 = v185;
          do
          {
            v76 = a1->m128i_i64[0];
            v77 = &v249[77 * v75];
            v78 = a1->m128i_i64[0];
            v79 = *((_QWORD *)v77 + 2);
            v80 = **((_QWORD **)v77 + 19);
            v81 = *(void ***)((char *)v243 + v75);
            v186 = *(_QWORD *)(v79 + 8);
            v192 = v81;
            v82 = (_QWORD *)sub_1AEDE80(v78, (__int64)v236[0], (unsigned int)v184, v186, v80);
            v87 = sub_19146F0(v76, v82, v83, v84, v85, v86, v74, a8);
            sub_17ED4C0(
              v76,
              *(_QWORD *)((char *)ptr + v75),
              v87 & 0xFFFFFFFFFFFFFFFELL,
              0,
              *(double *)v74.m128_u64,
              *(double *)a8.m128_u64);
            v189 = *(char **)((char *)ptr + v75);
            LODWORD(v193) = sub_16C50A0(v80);
            LODWORD(v190) = sub_BF7FE0(v80);
            v90 = sub_EEE9A0(24, v180, 8u);
            v92 = *(_WORD *)v90 & 0xFE00;
            LOBYTE(v92) = -11;
            *(_WORD *)v90 = v92;
            if ( unk_2CD7484 )
              sub_EE9B50(245);
            *(_QWORD *)(v90 + 8) = v189;
            *(_DWORD *)(v90 + 16) = (_DWORD)v193;
            *(_DWORD *)(v90 + 20) = v190;
            if ( v90 == 1 )
              goto LABEL_82;
            v189 = (char *)a1->m128i_i64[0];
            v93 = (__m128i *)sub_1B89EA0((__int64)v188, (int)v184, v88, v89, v91, v74, a8);
            v94 = a1->m128i_i64[0];
            v95 = v236[0];
            v193 = v93;
            v96 = sub_1AEDE80(v94, (__int64)v236[0], (unsigned int)v184, v186, v80);
            v97 = *((_QWORD *)v77 + 5);
            v190 = v96;
            v101 = sub_C00A40(v97, (__int64)v95, v98, v99, v100);
            v102 = sub_1929BB0((__int64)v189, v209[0], v101, 5u, v190, v193, v74, a8, 0);
            if ( v102 <= 1
              || (v105 = a1->m128i_i64[0],
                  v106 = *((_QWORD *)v77 + 5),
                  v189 = (char *)(v102 & 0xFFFFFFFFFFFFFFFELL),
                  v190 = v105,
                  v107 = sub_C00A40(v106, v105, v103, v104, v177),
                  v108 = sub_1929BB0(v190, v209[0], v107, 0xAu, v79, v189, v74, a8, 0),
                  v108 <= 1)
              || (v109 = *((_QWORD *)v77 + 5),
                  v200 = v108,
                  v110 = a1->m128i_i64[0],
                  v199 = (char *)v109,
                  v190 = v110,
                  LODWORD(v193) = sub_EEC140(v109),
                  v111 = sub_EEB7E0((unsigned __int64)v199, (__int64)v199, *(double *)v74.m128_u64),
                  v112 = sub_1923BC0(
                           v190,
                           v111,
                           (unsigned int)v193,
                           v200 & 0xFFFFFFFFFFFFFFFELL,
                           v79,
                           (__int64)v189,
                           v74,
                           a8),
                  v112 <= 1)
              || (v113 = a1->m128i_i64[0],
                  v190 = v112,
                  v114 = ptr,
                  v115 = (char *)sub_1AEDE80(v113, (__int64)ptr, (unsigned int)v184, v186, v80),
                  v116 = *((_QWORD *)v77 + 5),
                  v189 = v115,
                  v120 = sub_C00A40(v116, (__int64)v114, v117, v118, v119),
                  v121 = sub_1929BB0(
                           v113,
                           v209[0],
                           v120,
                           0xAu,
                           (__int64)v189,
                           (_QWORD *)(v190 & 0xFFFFFFFFFFFFFFFELL),
                           v74,
                           a8,
                           0),
                  v121 <= 1)
              || (v122 = v186,
                  v123 = ptr,
                  v186 = a1->m128i_i64[0],
                  v124 = (_QWORD *)sub_1AEDE80(v186, (__int64)ptr, (unsigned int)v184, v122, v80),
                  v128 = sub_C00A40(*((_QWORD *)v77 + 7), (__int64)v123, v125, v126, v127),
                  v129 = sub_1925670(v186, v209[0], v128, 2, v124, 0, v74, a8),
                  v129 <= 1) )
            {
LABEL_82:
              v15 = 1;
              goto LABEL_83;
            }
            v241.m128i_i64[0] = (__int64)v201[1].m128i_i64;
            v130 = *((unsigned __int64 **)v77 + 37);
            v241.m128i_i64[1] = 0x400000000LL;
            sub_1AF67E0((__int64)v201, v130, (__int64)&v130[*((unsigned int *)v77 + 76)]);
            LOWORD(v186) = *(_WORD *)v192;
            if ( (v186 & 0x1FF) == 0xFC )
              sub_183F100((__int64)v201, (__int64)v192[7]);
            sub_183F100((__int64)v201, v182);
            LODWORD(v186) = sub_EEC140(v182);
            v131 = sub_EEB7E0(v182, v182, *(double *)v74.m128_u64);
            v132 = v241.m128i_i64[0];
            v133 = sub_EEF560(v180, (const void *)v241.m128i_i64[0], v241.m128i_u32[2], 0, v131, (unsigned int)v186);
            v134 = *((_QWORD *)v77 + 6);
            v190 = v133;
            v183 = v134;
            LODWORD(v189) = sub_EEB7E0(v134, v132, *(double *)v74.m128_u64);
            v135 = sub_EEB7E0(v183, v132, *(double *)v74.m128_u64);
            v136 = *((_QWORD *)v77 + 7);
            LODWORD(v186) = v135;
            v137 = sub_EEC140(v136);
            v182 = sub_EEE9A0(56, v180, 8u);
            v138 = (__int64)v180;
            sub_EEF330(
              v182,
              v180,
              v90 & 0xFFFFFFFFFFFFFFFELL,
              v121 & 0xFFFFFFFFFFFFFFFELL,
              0,
              v129 & 0xFFFFFFFFFFFFFFFELL,
              v190,
              (unsigned int)v189,
              v186,
              v137);
            if ( (__m128i *)v241.m128i_i64[0] != &v201[1] )
              free((void *)v241.m128i_i64[0]);
            LODWORD(v184) = (_DWORD)v184 - 1;
            v75 -= 8;
          }
          while ( (_DWORD)v184 != -1 );
          v141 = (unsigned int)v191;
          LODWORD(v191) = (_DWORD)v194;
          v192 = v195;
          v193 = v196;
          while ( v141 != -1 )
          {
            v142 = &v249[77 * v185];
            v143 = *((_QWORD **)v142 + 2);
            v144 = *((_QWORD *)v142 + 6);
            v145 = a1->m128i_i64[0];
            v146 = **((_QWORD **)v142 + 19);
            v184 = (__m128i *)v143[1];
            v147 = sub_C00A40(v144, v138, v139, (__int64)v184, v140);
            v148 = sub_18C1B30(v145, v147, 0);
            sub_17ED4C0(
              v145,
              *(_QWORD *)((char *)v236[0] + v185),
              v148 & 0xFFFFFFFFFFFFFFFELL,
              0,
              *(double *)v74.m128_u64,
              *(double *)a8.m128_u64);
            v186 = *(_QWORD *)((char *)v236[0] + v185);
            LODWORD(v190) = sub_16C50A0(v146);
            LODWORD(v189) = sub_BF7FE0(v146);
            v149 = sub_EEE9A0(24, v180, 8u);
            v150 = *(_WORD *)v149 & 0xFE00;
            LOBYTE(v150) = -11;
            *(_WORD *)v149 = v150;
            if ( unk_2CD7484 )
              sub_EE9B50(245);
            *(_QWORD *)(v149 + 8) = v186;
            *(_DWORD *)(v149 + 16) = v190;
            *(_DWORD *)(v149 + 20) = (_DWORD)v189;
            if ( v149 == 1 )
              goto LABEL_82;
            v151 = v236[0];
            v189 = (char *)a1->m128i_i64[0];
            v152 = sub_1AEDE80((__int64)v189, (__int64)v236[0], v141, (__int64)v184, v146);
            v153 = *((_QWORD *)v142 + 5);
            v186 = v152;
            v157 = sub_C00A40(v153, (__int64)v151, v154, v155, v156);
            v161 = sub_1929BB0((__int64)v189, v209[0], v157, 0xAu, v186, v143, v74, a8, 0);
            if ( v161 <= 1 )
              goto LABEL_82;
            v186 = a1->m128i_i64[0];
            v162 = (char *)sub_1B89EA0((__int64)v188, v141, v158, v159, v160, v74, a8);
            v163 = v236[0];
            v164 = a1->m128i_i64[0];
            v189 = v162;
            v165 = sub_1AEDE80(v164, (__int64)v236[0], v141, (__int64)v184, v146);
            v169 = sub_C00A40(*((_QWORD *)v142 + 7), (__int64)v163, v166, v167, v168);
            v170 = sub_1929BB0(v186, v209[0], v169, 0x19u, v165, v189, v74, a8, 0);
            v185 -= 8;
            v171 = v170;
            if ( v170 <= 1 )
              goto LABEL_82;
            --v141;
            v184 = *((__m128i **)v142 + 6);
            LODWORD(v186) = sub_EEB7E0((unsigned __int64)v184, v178, *(double *)v74.m128_u64);
            v172 = sub_EEB7E0((unsigned __int64)v184, v178, *(double *)v74.m128_u64);
            v173 = *((_QWORD *)v142 + 7);
            LODWORD(v184) = v172;
            v174 = sub_EEC140(v173);
            v176 = v182;
            v138 = (__int64)v180;
            v182 = sub_EEE9A0(56, v180, 8u);
            sub_EEF330(
              v182,
              v180,
              v149 & 0xFFFFFFFFFFFFFFFELL,
              v161 & 0xFFFFFFFFFFFFFFFELL,
              0,
              v171 & 0xFFFFFFFFFFFFFFFELL,
              v176,
              v186,
              (int)v184,
              v174);
          }
          v19 = (int)v191;
          v10 = v192;
          a3 = (__int64)v193;
        }
      }
      else
      {
        v182 = v210;
        v184 = (__m128i *)&v211;
        v232 = v209;
        v175 = _mm_loadh_ps((const double *)&v184);
        v184 = a1;
        v230 = v175;
        v231 = _mm_loadh_ps((const double *)&v184);
      }
      sub_1AEC4E0(v180, (__int64 *)v233, (unsigned int)v234);
      v15 = sub_EF6790((__int64)v180, a5, v205, v10, a3, v19, a4, v182);
LABEL_83:
      if ( ptr != p_ptr + 2 )
        free(ptr);
      if ( v236[0] != v204 + 2 )
        free(v236[0]);
      operator delete(v212, 16LL * v214, 8);
      if ( v233 != v198 + 2 )
        free(v233);
      if ( v243 != v203 + 2 )
        free(v243);
    }
  }
  else
  {
    v15 = 1;
  }
  v30 = v246;
  v31 = &v246[2 * (unsigned int)v247];
  if ( v246 != v31 )
  {
    do
    {
      while ( 1 )
      {
        v31 -= 2;
        if ( *v31 == v31 + 2 )
          break;
        free(*v31);
        if ( v30 == v31 )
          goto LABEL_31;
      }
    }
    while ( v30 != v31 );
LABEL_31:
    v31 = v246;
  }
  if ( v31 != (void **)(v197 + 2) )
    free(v31);
  v32 = v249;
  v33 = &v249[616 * (unsigned int)v250];
  if ( v249 != v33 )
  {
    do
    {
      while ( 1 )
      {
        v33 -= 616;
        v34 = *((char **)v33 + 61);
        if ( v34 != v33 + 504 )
          free(v34);
        v35 = *((char **)v33 + 55);
        if ( v35 != v33 + 456 )
          free(v35);
        v36 = *((char **)v33 + 49);
        if ( v36 != v33 + 408 )
          free(v36);
        v37 = *((char **)v33 + 43);
        if ( v37 != v33 + 360 )
          free(v37);
        v38 = *((char **)v33 + 37);
        if ( v38 != v33 + 312 )
          free(v38);
        v39 = *((char **)v33 + 31);
        if ( v39 != v33 + 264 )
          free(v39);
        v40 = *((char **)v33 + 25);
        if ( v40 != v33 + 216 )
          free(v40);
        v41 = *((char **)v33 + 19);
        if ( v41 == v33 + 168 )
          break;
        free(v41);
        if ( v32 == v33 )
          goto LABEL_51;
      }
    }
    while ( v32 != v33 );
LABEL_51:
    v33 = v249;
  }
  if ( v33 != (char *)(v187 + 2) )
    free(v33);
  return v15;
}
