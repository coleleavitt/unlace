__int64 __fastcall sub_E18DD0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rbp
  __int64 *v12; // rbx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  int v17; // r8d
  int v18; // r9d
  size_t v19; // r12
  size_t v20; // r13
  int *v21; // rdi
  __int64 *v22; // rcx
  size_t v23; // rdx
  int v24; // eax
  __int64 v25; // r12
  int *v26; // rdx
  int v27; // r13d
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  size_t v32; // rcx
  size_t v33; // r9
  void *v34; // rdi
  __int64 *v35; // r8
  size_t v36; // rdx
  int v37; // eax
  int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  size_t v42; // rdx
  __int64 v43; // rax
  __int64 *i; // rbp
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  void *v49; // rdi
  int v50; // eax
  int v51; // r13d
  int v52; // edx
  int v53; // ecx
  int v54; // r8d
  int v55; // r9d
  void *v56; // rdi
  int v57; // eax
  int v58; // r13d
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // r13d
  int v62; // edx
  int v63; // ecx
  int v64; // r8d
  int v65; // r9d
  size_t v66; // rcx
  void *v67; // rdi
  size_t v68; // rdx
  int v69; // eax
  __int64 v70; // rcx
  __m128i v71; // xmm1
  __m128i v72; // xmm0
  __int64 v73; // rdx
  __int64 j; // rax
  __int64 *v75; // rbp
  __int64 *v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rbx
  __int64 v79; // rax
  int v80; // edx
  int v81; // ecx
  int v82; // r8d
  int v83; // r9d
  void *v84; // rdi
  size_t v85; // rdx
  int v86; // eax
  int v87; // r13d
  __int64 *v88; // rax
  __int64 v89; // r13
  _QWORD *v90; // rbp
  int v91; // edx
  int v92; // ecx
  int v93; // r8d
  int v94; // r9d
  void *v95; // rdi
  size_t v96; // rdx
  int v97; // eax
  _QWORD *v98; // rbx
  bool v99; // cc
  int v100; // edx
  int v101; // ecx
  int v102; // r8d
  int v103; // r9d
  size_t v104; // rbp
  void *v105; // rdi
  size_t v106; // rdx
  int v107; // eax
  __int64 v108; // rbp
  __m128i v109; // xmm1
  __int64 v110; // rax
  int v111; // edx
  int v112; // ecx
  int v113; // r8d
  int v114; // r9d
  size_t v115; // rcx
  void *v116; // rdi
  size_t v117; // rdx
  int v118; // eax
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 *v121; // rbp
  unsigned __int64 v122; // rax
  __int64 v123; // rbx
  __int64 v124; // r13
  __int64 v125; // rax
  int v126; // edx
  int v127; // ecx
  int v128; // r8d
  int v129; // r9d
  int *v130; // rdi
  size_t v131; // rdx
  int v132; // eax
  int v133; // r12d
  __int64 *v134; // rbx
  __m128 v135; // xmm0
  __int64 v136; // rbp
  _QWORD *v137; // rbx
  int v138; // edx
  int v139; // ecx
  int v140; // r8d
  int v141; // r9d
  size_t v142; // r12
  void *v143; // rdi
  size_t v144; // rdx
  int v145; // eax
  int v146; // edx
  __int64 v147; // r12
  _QWORD *v148; // rax
  __int64 v149; // r13
  __int64 v150; // rbx
  __int64 v151; // r13
  __int64 *v152; // rax
  __m128 v153; // xmm0
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 *v156; // rdx
  __int64 v157; // rax
  __m128i v158; // xmm0
  __int64 v159; // rax
  unsigned __int64 v160; // rbx
  _QWORD *v161; // rax
  int v162; // [rsp+0h] [rbp-108h]
  int v163; // [rsp+0h] [rbp-108h]
  int v164; // [rsp+0h] [rbp-108h]
  int v165; // [rsp+0h] [rbp-108h]
  int v166; // [rsp+0h] [rbp-108h]
  int v167; // [rsp+0h] [rbp-108h]
  int v168; // [rsp+0h] [rbp-108h]
  int v169; // [rsp+0h] [rbp-108h]
  int v170; // [rsp+0h] [rbp-108h]
  int v171; // [rsp+0h] [rbp-108h]
  int v172; // [rsp+0h] [rbp-108h]
  int v173; // [rsp+0h] [rbp-108h]
  int v174; // [rsp+0h] [rbp-108h]
  void **p_s1; // [rsp+8h] [rbp-100h]
  void *v176; // [rsp+8h] [rbp-100h]
  void *v177; // [rsp+8h] [rbp-100h]
  void *v178; // [rsp+8h] [rbp-100h]
  void *v179; // [rsp+8h] [rbp-100h]
  void *v180; // [rsp+8h] [rbp-100h]
  void *v181; // [rsp+8h] [rbp-100h]
  void *v182; // [rsp+8h] [rbp-100h]
  void *v183; // [rsp+8h] [rbp-100h]
  void *v184; // [rsp+8h] [rbp-100h]
  void *v185; // [rsp+8h] [rbp-100h]
  void *v186; // [rsp+8h] [rbp-100h]
  void *v187; // [rsp+8h] [rbp-100h]
  void *v188; // [rsp+10h] [rbp-F8h]
  int v189; // [rsp+10h] [rbp-F8h]
  int *v190; // [rsp+10h] [rbp-F8h]
  int v191; // [rsp+10h] [rbp-F8h]
  int v192; // [rsp+10h] [rbp-F8h]
  int v193; // [rsp+10h] [rbp-F8h]
  int v194; // [rsp+10h] [rbp-F8h]
  int v195; // [rsp+10h] [rbp-F8h]
  int v196; // [rsp+10h] [rbp-F8h]
  int v197; // [rsp+10h] [rbp-F8h]
  int v198; // [rsp+10h] [rbp-F8h]
  int v199; // [rsp+10h] [rbp-F8h]
  int v200; // [rsp+10h] [rbp-F8h]
  int v201; // [rsp+10h] [rbp-F8h]
  void *v202; // [rsp+18h] [rbp-F0h]
  void *v203; // [rsp+18h] [rbp-F0h]
  __int64 *v204; // [rsp+18h] [rbp-F0h]
  void *v205; // [rsp+18h] [rbp-F0h]
  void *v206; // [rsp+18h] [rbp-F0h]
  void *v207; // [rsp+18h] [rbp-F0h]
  void *v208; // [rsp+18h] [rbp-F0h]
  void *v209; // [rsp+18h] [rbp-F0h]
  void *v210; // [rsp+18h] [rbp-F0h]
  void *v211; // [rsp+18h] [rbp-F0h]
  void *v212; // [rsp+18h] [rbp-F0h]
  void *v213; // [rsp+18h] [rbp-F0h]
  void *v214; // [rsp+18h] [rbp-F0h]
  __int64 *v215; // [rsp+20h] [rbp-E8h]
  int v216; // [rsp+20h] [rbp-E8h]
  int v217; // [rsp+20h] [rbp-E8h]
  int v218; // [rsp+20h] [rbp-E8h]
  int v219; // [rsp+20h] [rbp-E8h]
  int v220; // [rsp+20h] [rbp-E8h]
  int v221; // [rsp+20h] [rbp-E8h]
  int v222; // [rsp+20h] [rbp-E8h]
  __m128 *v223; // [rsp+20h] [rbp-E8h]
  int v224; // [rsp+20h] [rbp-E8h]
  int v225; // [rsp+20h] [rbp-E8h]
  int v226; // [rsp+20h] [rbp-E8h]
  int v227; // [rsp+20h] [rbp-E8h]
  int v228; // [rsp+20h] [rbp-E8h]
  __int64 *v229; // [rsp+28h] [rbp-E0h]
  int v230; // [rsp+28h] [rbp-E0h]
  int v231; // [rsp+28h] [rbp-E0h]
  int v232; // [rsp+28h] [rbp-E0h]
  int v233; // [rsp+28h] [rbp-E0h]
  int v234; // [rsp+28h] [rbp-E0h]
  int v235; // [rsp+28h] [rbp-E0h]
  int v236; // [rsp+28h] [rbp-E0h]
  char *v237; // [rsp+28h] [rbp-E0h]
  int v238; // [rsp+28h] [rbp-E0h]
  int v239; // [rsp+28h] [rbp-E0h]
  int v240; // [rsp+28h] [rbp-E0h]
  int v241; // [rsp+28h] [rbp-E0h]
  int v242; // [rsp+28h] [rbp-E0h]
  __int64 *v243; // [rsp+30h] [rbp-D8h]
  int v244; // [rsp+30h] [rbp-D8h]
  int v245; // [rsp+30h] [rbp-D8h]
  int v246; // [rsp+30h] [rbp-D8h]
  int v247; // [rsp+30h] [rbp-D8h]
  int v248; // [rsp+30h] [rbp-D8h]
  int v249; // [rsp+30h] [rbp-D8h]
  int v250; // [rsp+30h] [rbp-D8h]
  int v251; // [rsp+30h] [rbp-D8h]
  int v252; // [rsp+30h] [rbp-D8h]
  int v253; // [rsp+30h] [rbp-D8h]
  int v254; // [rsp+30h] [rbp-D8h]
  int v255; // [rsp+30h] [rbp-D8h]
  int v256[2]; // [rsp+38h] [rbp-D0h]
  int v257; // [rsp+38h] [rbp-D0h]
  int v258; // [rsp+38h] [rbp-D0h]
  int v259; // [rsp+38h] [rbp-D0h]
  int v260; // [rsp+38h] [rbp-D0h]
  int v261; // [rsp+38h] [rbp-D0h]
  int v262; // [rsp+38h] [rbp-D0h]
  int v263; // [rsp+38h] [rbp-D0h]
  int v264; // [rsp+38h] [rbp-D0h]
  int v265; // [rsp+38h] [rbp-D0h]
  int v266; // [rsp+38h] [rbp-D0h]
  int v267; // [rsp+38h] [rbp-D0h]
  int v268; // [rsp+38h] [rbp-D0h]
  int v269; // [rsp+40h] [rbp-C8h]
  int v270; // [rsp+40h] [rbp-C8h]
  int v271; // [rsp+40h] [rbp-C8h]
  int v272; // [rsp+40h] [rbp-C8h]
  int v273; // [rsp+40h] [rbp-C8h]
  int v274; // [rsp+40h] [rbp-C8h]
  int v275; // [rsp+40h] [rbp-C8h]
  int v276; // [rsp+40h] [rbp-C8h]
  __int64 v277; // [rsp+40h] [rbp-C8h]
  int v278; // [rsp+40h] [rbp-C8h]
  int v279; // [rsp+40h] [rbp-C8h]
  int v280; // [rsp+40h] [rbp-C8h]
  int v281; // [rsp+40h] [rbp-C8h]
  int v282; // [rsp+40h] [rbp-C8h]
  int *v283; // [rsp+48h] [rbp-C0h]
  int v284; // [rsp+48h] [rbp-C0h]
  int v285; // [rsp+48h] [rbp-C0h]
  int v286; // [rsp+48h] [rbp-C0h]
  int v287; // [rsp+48h] [rbp-C0h]
  int v288; // [rsp+48h] [rbp-C0h]
  int v289; // [rsp+48h] [rbp-C0h]
  __int64 v290; // [rsp+48h] [rbp-C0h]
  int v291; // [rsp+48h] [rbp-C0h]
  int v292; // [rsp+48h] [rbp-C0h]
  int v293; // [rsp+48h] [rbp-C0h]
  int v294; // [rsp+48h] [rbp-C0h]
  int v295; // [rsp+48h] [rbp-C0h]
  int v296; // [rsp+48h] [rbp-C0h]
  void **v297; // [rsp+50h] [rbp-B8h]
  int v298; // [rsp+50h] [rbp-B8h]
  int v299; // [rsp+50h] [rbp-B8h]
  int v300; // [rsp+50h] [rbp-B8h]
  int v301[2]; // [rsp+50h] [rbp-B8h]
  int v302; // [rsp+50h] [rbp-B8h]
  int v303; // [rsp+50h] [rbp-B8h]
  int v304; // [rsp+50h] [rbp-B8h]
  int v305; // [rsp+50h] [rbp-B8h]
  int v306; // [rsp+50h] [rbp-B8h]
  int v307; // [rsp+50h] [rbp-B8h]
  int v308; // [rsp+50h] [rbp-B8h]
  int v309; // [rsp+50h] [rbp-B8h]
  int v310; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v311; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v312; // [rsp+60h] [rbp-A8h]
  __int64 *v313; // [rsp+68h] [rbp-A0h]
  char *v314; // [rsp+70h] [rbp-98h]
  int v315; // [rsp+78h] [rbp-90h]
  char v316; // [rsp+7Fh] [rbp-89h]
  __m128 v317; // [rsp+80h] [rbp-88h] BYREF
  void *s2; // [rsp+90h] [rbp-78h] BYREF
  int v319[2]; // [rsp+98h] [rbp-70h]
  __int64 v320; // [rsp+A0h] [rbp-68h] BYREF
  void *v321; // [rsp+A8h] [rbp-60h]
  void *s1; // [rsp+B0h] [rbp-58h] BYREF
  size_t n; // [rsp+B8h] [rbp-50h]
  int v324[2]; // [rsp+C0h] [rbp-48h] BYREF

  result = a2 - a1;
  LODWORD(v297) = a2;
  *(_QWORD *)v256 = a3;
  if ( a2 - a1 <= 256 )
    return result;
  p_s1 = &s1;
  while ( 1 )
  {
    v8 = result;
    v9 = result >> 5;
    v10 = v8 >> 4;
    if ( !*(_QWORD *)v256 )
      break;
    v11 = (__int64 *)(a1 + 16 * v9);
    v12 = (__int64 *)(a1 + 16);
    sub_180CE20(
      (int)&s2,
      a1 + 16 * v9,
      v10,
      a4,
      (int)a5,
      a6,
      v162,
      p_s1,
      (int)v188,
      (__int64)v202,
      (int)v215,
      (int)v229,
      (int)v243,
      v256[0] - 1,
      v269,
      (int)v283,
      (int)v297,
      v311,
      v312,
      (int)v313,
      (int)v314,
      v315,
      v317.m128_i32[0],
      v317.m128_i32[2],
      (int)s2,
      v319[0],
      v320,
      v321,
      (int)s1,
      n);
    sub_180CE20(
      (int)v176,
      a1 + 16,
      v13,
      v14,
      v15,
      v16,
      v163,
      v176,
      v189,
      (__int64)v203,
      v216,
      v230,
      v244,
      v257,
      v270,
      v284,
      v298,
      v311,
      v312,
      (int)v313,
      (int)v314,
      v315,
      v317.m128_i32[0],
      v317.m128_i32[2],
      (int)s2,
      v319[0],
      v320,
      v321,
      (int)s1,
      n);
    v19 = n;
    v20 = *(_QWORD *)v319;
    v21 = (int *)s1;
    v22 = (__int64 *)s2;
    v23 = *(_QWORD *)v319;
    if ( n <= *(_QWORD *)v319 )
      v23 = n;
    if ( !v23 || (v204 = (__int64 *)s2, v190 = (int *)s1, v24 = memcmp(s1, s2, v23), v21 = v190, v22 = v204, !v24) )
    {
      v25 = v19 - v20;
      v24 = 0x7FFFFFFF;
      if ( v25 < 0x80000000LL )
      {
        if ( v25 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
          v24 = 0x80000000;
        else
          v24 = v25;
      }
    }
    v26 = v324;
    if ( v21 != v324 )
    {
      LODWORD(v204) = v24;
      operator delete(v21, *(_QWORD *)v324 + 1LL);
      v22 = (__int64 *)s2;
      v24 = (int)v204;
    }
    if ( v22 != &v320 )
    {
      LODWORD(v204) = v24;
      operator delete(v22, v320 + 1);
      v24 = (int)v204;
    }
    if ( v24 >= 0 )
    {
      v61 = v299 - 16;
      sub_180CE20(
        (int)&s2,
        v299 - 16,
        (int)v26,
        (int)v22,
        v17,
        v18,
        v164,
        v177,
        (int)v324,
        (__int64)v204,
        v217,
        v231,
        v245,
        v258,
        v271,
        v285,
        v299,
        v311,
        v312,
        (int)v313,
        (int)v314,
        v315,
        v317.m128_i32[0],
        v317.m128_i32[2],
        (int)s2,
        v319[0],
        v320,
        v321,
        (int)s1,
        n);
      sub_180CE20(
        (int)v181,
        a1 + 16,
        v62,
        v63,
        v64,
        v65,
        v168,
        v181,
        v194,
        (__int64)v208,
        v221,
        v235,
        v249,
        v262,
        v275,
        v289,
        v304,
        v311,
        v312,
        (int)v313,
        (int)v314,
        v315,
        v317.m128_i32[0],
        v317.m128_i32[2],
        (int)s2,
        v319[0],
        v320,
        v321,
        (int)s1,
        n);
      v66 = n;
      v33 = *(_QWORD *)v319;
      v67 = s1;
      v35 = (__int64 *)s2;
      v68 = *(_QWORD *)v319;
      if ( n <= *(_QWORD *)v319 )
        v68 = n;
      if ( !v68
        || (v243 = *(__int64 **)v319,
            v229 = (__int64 *)n,
            v215 = (__int64 *)s2,
            v202 = s1,
            v69 = memcmp(s1, s2, v68),
            v67 = v202,
            v35 = v215,
            v66 = (size_t)v229,
            v33 = (size_t)v243,
            !v69) )
      {
        v70 = v66 - v33;
        LODWORD(v42) = 0x80000000;
        v69 = 0x7FFFFFFF;
        if ( v70 < 0x80000000LL )
        {
          if ( v70 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
            v69 = 0x80000000;
          else
            v69 = v70;
        }
      }
      LODWORD(v40) = (_DWORD)v188;
      if ( v67 != v188 )
      {
        LODWORD(v202) = v69;
        operator delete(v67, *(_QWORD *)v324 + 1LL);
        v35 = (__int64 *)s2;
        v69 = (int)v202;
      }
      if ( v35 != &v320 )
      {
        LODWORD(v202) = v69;
        operator delete(v35, v320 + 1);
        v69 = (int)v202;
      }
      if ( v69 >= 0 )
      {
        sub_180CE20(
          (int)&s2,
          v61,
          v42,
          v40,
          (int)v35,
          v33,
          v162,
          p_s1,
          (int)v188,
          (__int64)v202,
          (int)v215,
          (int)v229,
          (int)v243,
          v256[0],
          v269,
          (int)v283,
          v301[0],
          v311,
          v312,
          (int)v313,
          (int)v314,
          v315,
          v317.m128_i32[0],
          v317.m128_i32[2],
          (int)s2,
          v319[0],
          v320,
          v321,
          (int)s1,
          n);
        sub_180CE20(
          (int)v185,
          (int)v11,
          v111,
          v112,
          v113,
          v114,
          v172,
          v185,
          v199,
          (__int64)v212,
          v226,
          v240,
          v253,
          v266,
          v280,
          v294,
          v308,
          v311,
          v312,
          (int)v313,
          (int)v314,
          v315,
          v317.m128_i32[0],
          v317.m128_i32[2],
          (int)s2,
          v319[0],
          v320,
          v321,
          (int)s1,
          n);
        v115 = n;
        v33 = *(_QWORD *)v319;
        v116 = s1;
        v35 = (__int64 *)s2;
        v117 = *(_QWORD *)v319;
        if ( n <= *(_QWORD *)v319 )
          v117 = n;
        if ( !v117
          || (v243 = *(__int64 **)v319,
              v229 = (__int64 *)n,
              v215 = (__int64 *)s2,
              v202 = s1,
              v118 = memcmp(s1, s2, v117),
              v116 = v202,
              v35 = v215,
              v115 = (size_t)v229,
              v33 = (size_t)v243,
              !v118) )
        {
          v119 = v115 - v33;
          v118 = 0x7FFFFFFF;
          if ( v119 <= 0x7FFFFFFF )
          {
            if ( v119 < (__int64)0xFFFFFFFF80000000LL )
              v118 = 0x80000000;
            else
              v118 = v119;
          }
        }
        if ( v116 != v188 )
        {
          LODWORD(v202) = v118;
          operator delete(v116, *(_QWORD *)v324 + 1LL);
          v35 = (__int64 *)s2;
          v118 = (int)v202;
        }
        if ( v35 != &v320 )
        {
          LODWORD(v202) = v118;
          operator delete(v35, v320 + 1);
          v118 = (int)v202;
        }
        v40 = *(_QWORD *)a1;
        v42 = *(_QWORD *)(a1 + 8);
        if ( v118 >= 0 )
        {
          *(_QWORD *)a1 = *v11;
          v157 = v11[1];
          *v11 = v40;
          *(_QWORD *)(a1 + 8) = v157;
          v11[1] = v42;
        }
        else
        {
          *(_QWORD *)a1 = *(_QWORD *)(*(_QWORD *)v301 - 16LL);
          v120 = *(_QWORD *)(*(_QWORD *)v301 - 8LL);
          *(_QWORD *)(*(_QWORD *)v301 - 16LL) = v40;
          *(_QWORD *)(a1 + 8) = v120;
          *(_QWORD *)(*(_QWORD *)v301 - 8LL) = v42;
        }
      }
      else
      {
        v71 = _mm_loadl_epi64((const __m128i *)a1);
        v72 = _mm_loadl_epi64((const __m128i *)(a1 + 24));
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 8);
        *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(v72, v71);
      }
    }
    else
    {
      v27 = v299 - 16;
      sub_180CE20(
        (int)&s2,
        v299 - 16,
        (int)v26,
        (int)v22,
        v17,
        v18,
        v164,
        v177,
        (int)v324,
        (__int64)v204,
        v217,
        v231,
        v245,
        v258,
        v271,
        v285,
        v299,
        v311,
        v312,
        (int)v313,
        (int)v314,
        v315,
        v317.m128_i32[0],
        v317.m128_i32[2],
        (int)s2,
        v319[0],
        v320,
        v321,
        (int)s1,
        n);
      sub_180CE20(
        (int)v178,
        (int)v11,
        v28,
        v29,
        v30,
        v31,
        v165,
        v178,
        v191,
        (__int64)v205,
        v218,
        v232,
        v246,
        v259,
        v272,
        v286,
        v300,
        v311,
        v312,
        (int)v313,
        (int)v314,
        v315,
        v317.m128_i32[0],
        v317.m128_i32[2],
        (int)s2,
        v319[0],
        v320,
        v321,
        (int)s1,
        n);
      v32 = n;
      v33 = *(_QWORD *)v319;
      v34 = s1;
      v35 = (__int64 *)s2;
      v36 = *(_QWORD *)v319;
      if ( n <= *(_QWORD *)v319 )
        v36 = n;
      if ( !v36
        || (v243 = *(__int64 **)v319,
            v229 = (__int64 *)n,
            v215 = (__int64 *)s2,
            v202 = s1,
            v37 = memcmp(s1, s2, v36),
            v34 = v202,
            v35 = v215,
            v32 = (size_t)v229,
            v33 = (size_t)v243,
            !v37) )
      {
        v39 = v32 - v33;
        v38 = 0x80000000;
        v37 = 0x7FFFFFFF;
        if ( v39 < 0x80000000LL )
        {
          if ( v39 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
            v37 = 0x80000000;
          else
            v37 = v39;
        }
      }
      LODWORD(v40) = (_DWORD)v188;
      if ( v34 != v188 )
      {
        LODWORD(v202) = v37;
        operator delete(v34, *(_QWORD *)v324 + 1LL);
        v35 = (__int64 *)s2;
        v37 = (int)v202;
      }
      if ( v35 != &v320 )
      {
        LODWORD(v202) = v37;
        operator delete(v35, v320 + 1);
        v37 = (int)v202;
      }
      if ( v37 >= 0 )
      {
        sub_180CE20(
          (int)&s2,
          v27,
          v38,
          v40,
          (int)v35,
          v33,
          v162,
          p_s1,
          (int)v188,
          (__int64)v202,
          (int)v215,
          (int)v229,
          (int)v243,
          v256[0],
          v269,
          (int)v283,
          v301[0],
          v311,
          v312,
          (int)v313,
          (int)v314,
          v315,
          v317.m128_i32[0],
          v317.m128_i32[2],
          (int)s2,
          v319[0],
          v320,
          v321,
          (int)s1,
          n);
        sub_180CE20(
          (int)v184,
          a1 + 16,
          v100,
          v101,
          v102,
          v103,
          v171,
          v184,
          v198,
          (__int64)v211,
          v225,
          v239,
          v252,
          v265,
          v279,
          v293,
          v307,
          v311,
          v312,
          (int)v313,
          (int)v314,
          v315,
          v317.m128_i32[0],
          v317.m128_i32[2],
          (int)s2,
          v319[0],
          v320,
          v321,
          (int)s1,
          n);
        v104 = n;
        v35 = *(__int64 **)v319;
        v105 = s1;
        v40 = (__int64)s2;
        v106 = *(_QWORD *)v319;
        if ( n <= *(_QWORD *)v319 )
          v106 = n;
        if ( !v106
          || (v229 = *(__int64 **)v319,
              v215 = (__int64 *)s2,
              v202 = s1,
              v107 = memcmp(s1, s2, v106),
              v105 = v202,
              v40 = (__int64)v215,
              v35 = v229,
              !v107) )
        {
          v108 = v104 - (_QWORD)v35;
          v107 = 0x7FFFFFFF;
          if ( v108 <= 0x7FFFFFFF )
          {
            if ( v108 < (__int64)0xFFFFFFFF80000000LL )
              v107 = 0x80000000;
            else
              v107 = v108;
          }
        }
        if ( v105 != v188 )
        {
          LODWORD(v202) = v107;
          operator delete(v105, *(_QWORD *)v324 + 1LL);
          v40 = (__int64)s2;
          v107 = (int)v202;
        }
        if ( (__int64 *)v40 != &v320 )
        {
          LODWORD(v202) = v107;
          operator delete((void *)v40, v320 + 1);
          v107 = (int)v202;
        }
        v109 = _mm_loadl_epi64((const __m128i *)a1);
        v42 = *(_QWORD *)(a1 + 8);
        if ( v107 >= 0 )
        {
          v158 = _mm_loadl_epi64((const __m128i *)(a1 + 24));
          v159 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 24) = v42;
          *(_QWORD *)a1 = v159;
          *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(v158, v109);
        }
        else
        {
          LODWORD(v40) = v301[0];
          *(_QWORD *)a1 = *(_QWORD *)(*(_QWORD *)v301 - 16LL);
          v110 = *(_QWORD *)(*(_QWORD *)v301 - 8LL);
          *(_QWORD *)(*(_QWORD *)v301 - 16LL) = v109.m128i_i64[0];
          *(_QWORD *)(a1 + 8) = v110;
          *(_QWORD *)(*(_QWORD *)v301 - 8LL) = v42;
        }
      }
      else
      {
        v41 = *(_QWORD *)a1;
        *(_QWORD *)a1 = *v11;
        v42 = v11[1];
        *v11 = v41;
        v43 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = v42;
        v11[1] = v43;
      }
    }
    for ( i = *(__int64 **)v301; ; i[1] = v60 )
    {
      while ( 1 )
      {
        sub_180CE20(
          (int)&s2,
          a1,
          v42,
          v40,
          (int)v35,
          v33,
          v162,
          p_s1,
          (int)v188,
          (__int64)v202,
          (int)v215,
          (int)v229,
          (int)v243,
          v256[0],
          v269,
          (int)v283,
          v301[0],
          v311,
          v312,
          (int)v313,
          (int)v314,
          v315,
          v317.m128_i32[0],
          v317.m128_i32[2],
          (int)s2,
          v319[0],
          v320,
          v321,
          (int)s1,
          n);
        sub_180CE20(
          (int)v179,
          (int)v12,
          v45,
          v46,
          v47,
          v48,
          v166,
          v179,
          v192,
          (__int64)v206,
          v219,
          v233,
          v247,
          v260,
          v273,
          v287,
          v302,
          v311,
          v312,
          (int)v313,
          (int)v314,
          v315,
          v317.m128_i32[0],
          v317.m128_i32[2],
          (int)s2,
          v319[0],
          v320,
          v321,
          (int)s1,
          n);
        v40 = n;
        v33 = *(_QWORD *)v319;
        v49 = s1;
        v35 = (__int64 *)s2;
        v42 = *(_QWORD *)v319;
        if ( n <= *(_QWORD *)v319 )
          v42 = n;
        if ( !v42
          || (v243 = *(__int64 **)v319,
              v229 = (__int64 *)n,
              v215 = (__int64 *)s2,
              v202 = s1,
              v50 = memcmp(s1, s2, v42),
              v49 = v202,
              v35 = v215,
              v40 = (__int64)v229,
              v33 = (size_t)v243,
              (v51 = v50) == 0) )
        {
          v40 -= v33;
          v51 = 0x7FFFFFFF;
          if ( v40 < 0x80000000LL )
          {
            if ( v40 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
              v51 = 0x80000000;
            else
              v51 = v40;
          }
        }
        if ( v49 != v188 )
        {
          operator delete(v49, *(_QWORD *)v324 + 1LL);
          v35 = (__int64 *)s2;
        }
        if ( v35 != &v320 )
          operator delete(v35, v320 + 1);
        if ( v51 >= 0 )
          break;
        v12 += 2;
      }
      do
      {
        i -= 2;
        sub_180CE20(
          (int)&s2,
          (int)i,
          v42,
          v40,
          (int)v35,
          v33,
          v162,
          p_s1,
          (int)v188,
          (__int64)v202,
          (int)v215,
          (int)v229,
          (int)v243,
          v256[0],
          v269,
          (int)v283,
          v301[0],
          v311,
          v312,
          (int)v313,
          (int)v314,
          v315,
          v317.m128_i32[0],
          v317.m128_i32[2],
          (int)s2,
          v319[0],
          v320,
          v321,
          (int)s1,
          n);
        sub_180CE20(
          (int)v180,
          a1,
          v52,
          v53,
          v54,
          v55,
          v167,
          v180,
          v193,
          (__int64)v207,
          v220,
          v234,
          v248,
          v261,
          v274,
          v288,
          v303,
          v311,
          v312,
          (int)v313,
          (int)v314,
          v315,
          v317.m128_i32[0],
          v317.m128_i32[2],
          (int)s2,
          v319[0],
          v320,
          v321,
          (int)s1,
          n);
        v40 = n;
        v33 = *(_QWORD *)v319;
        v56 = s1;
        v35 = (__int64 *)s2;
        v42 = *(_QWORD *)v319;
        if ( n <= *(_QWORD *)v319 )
          v42 = n;
        if ( !v42
          || (v243 = *(__int64 **)v319,
              v229 = (__int64 *)n,
              v215 = (__int64 *)s2,
              v202 = s1,
              v57 = memcmp(s1, s2, v42),
              v56 = v202,
              v35 = v215,
              v40 = (__int64)v229,
              v33 = (size_t)v243,
              (v58 = v57) == 0) )
        {
          v40 -= v33;
          v58 = 0x7FFFFFFF;
          if ( v40 < 0x80000000LL )
          {
            if ( v40 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
              v58 = 0x80000000;
            else
              v58 = v40;
          }
        }
        if ( v56 != v188 )
        {
          operator delete(v56, *(_QWORD *)v324 + 1LL);
          v35 = (__int64 *)s2;
        }
        if ( v35 != &v320 )
          operator delete(v35, v320 + 1);
      }
      while ( v58 < 0 );
      if ( v12 >= i )
        break;
      v59 = *v12;
      v12 += 2;
      *(v12 - 2) = *i;
      v42 = i[1];
      *i = v59;
      v60 = *(v12 - 1);
      *(v12 - 1) = v42;
    }
    sub_E18DD0(v12, *(_QWORD *)v301, *(_QWORD *)v256, v40, v35, v33);
    result = (__int64)v12 - a1;
    if ( (__int64)v12 - a1 <= 256 )
      return result;
    LODWORD(v297) = (_DWORD)v12;
  }
  v77 = v10 - 1;
  LODWORD(v10) = ~(_DWORD)v10;
  v314 = (char *)(v9 - 1);
  v277 = v77 >> 1;
  v313 = (__int64 *)(a1 + 16 * v9 - 16);
  LODWORD(v77) = v10 & 1;
  v316 = v10 & 1;
  v237 = (char *)(v9 - 1);
  v223 = &v317;
  while ( 1 )
  {
    v121 = v313;
    v122 = v313[1];
    v312 = *v313;
    v123 = (__int64)v237;
    v311 = v122;
    if ( (__int64)v237 >= v277 )
    {
      v135 = _mm_loadh_ps((const double *)&v311);
      if ( v314 != v237 || !v316 )
      {
        v124 = (__int64)v237;
        v317 = v135;
LABEL_196:
        LODWORD(v10) = v317.m128_i32[0];
        v160 = v311;
        v161 = (_QWORD *)(a1 + 16 * v124);
        *v161 = v317.m128_u64[0];
        v161[1] = v160;
        goto LABEL_177;
      }
      v124 = (__int64)v237;
LABEL_188:
      v155 = v124 + 1;
      v124 = 2 * (v124 + 1) - 1;
      v156 = (__int64 *)(a1 + 32 * v155 - 16);
      v77 = *v156;
      v10 = v156[1];
      *v121 = v77;
      v121[1] = v10;
      goto LABEL_160;
    }
    v283 = v324;
    while ( 1 )
    {
      v124 = 2 * (v123 + 1);
      v125 = 32 * (v123 + 1);
      v121 = (__int64 *)(a1 + v125);
      sub_180CE20(
        (int)&s2,
        a1 + v125 - 16,
        v10,
        v77,
        (int)a5,
        a6,
        v162,
        p_s1,
        (int)v188,
        (__int64)v202,
        (int)v223,
        (int)v237,
        (int)v243,
        v256[0],
        v277,
        (int)v283,
        (int)v297,
        v311,
        v312,
        (int)v313,
        (int)v314,
        v315,
        v317.m128_i32[0],
        v317.m128_i32[2],
        (int)s2,
        v319[0],
        v320,
        v321,
        (int)s1,
        n);
      sub_180CE20(
        (int)v186,
        (int)v121,
        v126,
        v127,
        v128,
        v129,
        v173,
        v186,
        v200,
        (__int64)v213,
        v227,
        v241,
        v254,
        v267,
        v281,
        v295,
        v309,
        v311,
        v312,
        (int)v313,
        (int)v314,
        v315,
        v317.m128_i32[0],
        v317.m128_i32[2],
        (int)s2,
        v319[0],
        v320,
        v321,
        (int)s1,
        n);
      v77 = n;
      a6 = *(_QWORD *)v319;
      v130 = (int *)s1;
      a5 = (__int64 *)s2;
      v131 = *(_QWORD *)v319;
      if ( n <= *(_QWORD *)v319 )
        v131 = n;
      if ( !v131
        || (*(_QWORD *)v256 = *(_QWORD *)v319,
            v243 = (__int64 *)n,
            v202 = s2,
            v188 = s1,
            v132 = memcmp(s1, s2, v131),
            v130 = (int *)v188,
            a5 = (__int64 *)v202,
            v77 = (__int64)v243,
            a6 = *(_QWORD *)v256,
            (v133 = v132) == 0) )
      {
        v77 -= a6;
        v133 = 0x7FFFFFFF;
        if ( v77 < 0x80000000LL )
        {
          if ( v77 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
            v133 = 0x80000000;
          else
            v133 = v77;
        }
      }
      if ( v130 != v283 )
      {
        operator delete(v130, *(_QWORD *)v324 + 1LL);
        a5 = (__int64 *)s2;
      }
      v10 = (__int64)&v320;
      if ( a5 != &v320 )
        operator delete(a5, v320 + 1);
      if ( v133 < 0 )
      {
        --v124;
        v121 = (__int64 *)(a1 + 16 * v124);
      }
      v134 = (__int64 *)(a1 + 16 * v123);
      *v134 = *v121;
      v134[1] = v121[1];
      if ( v124 >= v277 )
        break;
      v123 = v124;
    }
    v135 = _mm_loadh_ps((const double *)&v311);
    if ( v314 == (char *)v124 && v316 )
      goto LABEL_188;
LABEL_160:
    v317 = v135;
    v136 = (v124 - 1) >> 1;
    if ( (__int64)v237 >= v124 )
      goto LABEL_196;
    v202 = v324;
    while ( 1 )
    {
      sub_180CE20(
        (int)&s2,
        (int)v223,
        v10,
        v77,
        (int)a5,
        a6,
        v162,
        p_s1,
        (int)v188,
        (__int64)v202,
        (int)v223,
        (int)v237,
        (int)v243,
        v256[0],
        v277,
        (int)v283,
        (int)v297,
        v311,
        v312,
        (int)v313,
        (int)v314,
        v315,
        v317.m128_i32[0],
        v317.m128_i32[2],
        (int)s2,
        v319[0],
        v320,
        v321,
        (int)s1,
        n);
      v137 = (_QWORD *)(a1 + 16 * v136);
      sub_180CE20(
        (int)v187,
        (int)v137,
        v138,
        v139,
        v140,
        v141,
        v174,
        v187,
        v201,
        (__int64)v214,
        v228,
        v242,
        v255,
        v268,
        v282,
        v296,
        v310,
        v311,
        v312,
        (int)v313,
        (int)v314,
        v315,
        v317.m128_i32[0],
        v317.m128_i32[2],
        (int)s2,
        v319[0],
        v320,
        v321,
        (int)s1,
        n);
      v142 = n;
      a5 = *(__int64 **)v319;
      v143 = s1;
      v77 = (__int64)s2;
      v144 = *(_QWORD *)v319;
      if ( n <= *(_QWORD *)v319 )
        v144 = n;
      if ( !v144
        || (*(_QWORD *)v256 = *(_QWORD *)v319,
            v243 = (__int64 *)s2,
            v188 = s1,
            v145 = memcmp(s1, s2, v144),
            v143 = v188,
            v77 = (__int64)v243,
            a5 = *(__int64 **)v256,
            (v146 = v145) == 0) )
      {
        v147 = v142 - (_QWORD)a5;
        v146 = 0x7FFFFFFF;
        if ( v147 < 0x80000000LL )
        {
          if ( v147 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
            v146 = 0x80000000;
          else
            v146 = v147;
        }
      }
      if ( v143 != v202 )
      {
        LODWORD(v188) = v146;
        operator delete(v143, *(_QWORD *)v324 + 1LL);
        v77 = (__int64)s2;
        v146 = (int)v188;
      }
      if ( (__int64 *)v77 != &v320 )
      {
        LODWORD(v188) = v146;
        operator delete((void *)v77, v320 + 1);
        v146 = (int)v188;
      }
      v148 = (_QWORD *)(a1 + 16 * v124);
      if ( v146 >= 0 )
        break;
      v124 = v136;
      *v148 = *v137;
      v148[1] = v137[1];
      LODWORD(v10) = v136 - 1;
      if ( (__int64)v237 >= v136 )
      {
        v148 = (_QWORD *)(a1 + 16 * v136);
        break;
      }
      v136 = (v136 - 1) / 2;
    }
    *v148 = v317.m128_u64[0];
    LODWORD(v10) = v317.m128_i32[2];
    v148[1] = v317.m128_u64[1];
    if ( !v237 )
      break;
LABEL_177:
    --v237;
    v313 -= 2;
  }
  result = (__int64)v297 - a1;
  if ( (__int64)v297 - a1 > 16 )
  {
    do
    {
      while ( 1 )
      {
        v297 -= 2;
        v314 = (char *)*v297;
        v311 = (unsigned __int64)v297[1];
        *v297 = *(void **)a1;
        v297[1] = *(void **)(a1 + 8);
        v313 = (__int64 *)((char *)v297 - a1);
        v73 = (((__int64)v297 - a1) >> 4) - 1;
        v312 = ((__int64)v297 - a1) >> 4;
        v290 = v73 / 2;
        if ( (__int64)v297 - a1 <= 32 )
          break;
        v195 = 0;
        for ( j = 0; ; j = v78 )
        {
          v79 = j + 1;
          v78 = 2 * v79;
          v79 *= 32;
          v75 = (__int64 *)(a1 + v79);
          sub_180CE20(
            (int)&s2,
            a1 + v79 - 16,
            v73,
            v77,
            (int)a5,
            a6,
            v162,
            p_s1,
            v195,
            (__int64)v202,
            (int)v223,
            (int)v237,
            (int)v243,
            v256[0],
            v277,
            v290,
            (int)v297,
            v311,
            v312,
            (int)v313,
            (int)v314,
            v315,
            v317.m128_i32[0],
            v317.m128_i32[2],
            (int)s2,
            v319[0],
            v320,
            v321,
            (int)s1,
            n);
          sub_180CE20(
            (int)v182,
            (int)v75,
            v80,
            v81,
            v82,
            v83,
            v169,
            v182,
            v196,
            (__int64)v209,
            v222,
            v236,
            v250,
            v263,
            v276,
            v291,
            v305,
            v311,
            v312,
            (int)v313,
            (int)v314,
            v315,
            v317.m128_i32[0],
            v317.m128_i32[2],
            (int)s2,
            v319[0],
            v320,
            v321,
            (int)s1,
            n);
          v77 = n;
          a6 = *(_QWORD *)v319;
          v84 = s1;
          a5 = (__int64 *)s2;
          v85 = *(_QWORD *)v319;
          if ( n <= *(_QWORD *)v319 )
            v85 = n;
          if ( !v85
            || (v277 = *(_QWORD *)v319,
                *(_QWORD *)v256 = n,
                v243 = (__int64 *)s2,
                v237 = (char *)s1,
                v86 = memcmp(s1, s2, v85),
                v84 = v237,
                a5 = v243,
                v77 = *(_QWORD *)v256,
                a6 = v277,
                (v87 = v86) == 0) )
          {
            v77 -= a6;
            v87 = 0x7FFFFFFF;
            if ( v77 < 0x80000000LL )
            {
              if ( v77 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
                v87 = 0x80000000;
              else
                v87 = v77;
            }
          }
          if ( v84 != v202 )
          {
            operator delete(v84, *(_QWORD *)v324 + 1LL);
            a5 = (__int64 *)s2;
          }
          if ( a5 != &v320 )
            operator delete(a5, v320 + 1);
          if ( v87 >= 0 )
            break;
          LODWORD(v73) = v78 - 1;
          v75 = (__int64 *)(a1 + 16 * (v78 - 1));
          v76 = (__int64 *)(a1 + 16LL * (_QWORD)v188);
          *v76 = *v75;
          v77 = v75[1];
          v76[1] = v77;
          if ( v78 - 1 >= v290 )
          {
            if ( (v312 & 1) != 0 )
            {
              v149 = v78 - 2;
              --v78;
              v89 = v149 >> 1;
              v317 = _mm_loadh_ps((const double *)&v311);
              goto LABEL_99;
            }
            --v78;
            goto LABEL_94;
          }
          --v78;
LABEL_79:
          v195 = v78;
        }
        v88 = (__int64 *)(a1 + 16LL * (_QWORD)v188);
        *v88 = *v75;
        v73 = v75[1];
        v88[1] = v73;
        if ( v78 < v290 )
          goto LABEL_79;
        if ( (v312 & 1) != 0 )
          goto LABEL_95;
LABEL_94:
        if ( (v312 - 2) >> 1 == v78 )
          goto LABEL_186;
LABEL_95:
        v317 = _mm_loadh_ps((const double *)&v311);
        v89 = (v78 - 1) / 2;
        if ( v78 )
          goto LABEL_99;
        *(_QWORD *)a1 = v317.m128_u64[0];
        *(_QWORD *)(a1 + 8) = v311;
      }
      v78 = v312 & 1;
      if ( (v312 & 1) != 0 )
      {
        v317.m128_u64[0] = (unsigned __int64)v314;
      }
      else
      {
        if ( (unsigned __int64)v73 <= 2 )
        {
          v75 = (__int64 *)a1;
LABEL_186:
          v150 = v78 + 1;
          v151 = 2 * v150;
          v152 = (__int64 *)(a1 + 32 * v150 - 16);
          v153 = _mm_loadh_ps((const double *)&v311);
          v78 = 2 * v150 - 1;
          v73 = *v152;
          v154 = v152[1];
          v89 = (v151 >> 1) - 1;
          *v75 = v73;
          v75[1] = v154;
          v317 = v153;
          while ( 1 )
          {
LABEL_99:
            sub_180CE20(
              (int)&s2,
              (int)v223,
              v73,
              v77,
              (int)a5,
              a6,
              v162,
              p_s1,
              (int)v188,
              (__int64)v202,
              (int)v223,
              (int)v237,
              (int)v243,
              v256[0],
              v277,
              v290,
              (int)v297,
              v311,
              v312,
              (int)v313,
              (int)v314,
              v315,
              v317.m128_i32[0],
              v317.m128_i32[2],
              (int)s2,
              v319[0],
              v320,
              v321,
              (int)s1,
              n);
            v90 = (_QWORD *)(a1 + 16 * v89);
            sub_180CE20(
              (int)v183,
              (int)v90,
              v91,
              v92,
              v93,
              v94,
              v170,
              v183,
              v197,
              (__int64)v210,
              v224,
              v238,
              v251,
              v264,
              v278,
              v292,
              v306,
              v311,
              v312,
              (int)v313,
              (int)v314,
              v315,
              v317.m128_i32[0],
              v317.m128_i32[2],
              (int)s2,
              v319[0],
              v320,
              v321,
              (int)s1,
              n);
            v77 = n;
            a6 = *(_QWORD *)v319;
            v95 = s1;
            a5 = (__int64 *)s2;
            v96 = *(_QWORD *)v319;
            if ( n <= *(_QWORD *)v319 )
              v96 = n;
            if ( !v96
              || (*(_QWORD *)v256 = *(_QWORD *)v319,
                  v243 = (__int64 *)n,
                  v237 = (char *)s2,
                  v188 = s1,
                  v97 = memcmp(s1, s2, v96),
                  v95 = v188,
                  a5 = (__int64 *)v237,
                  v77 = (__int64)v243,
                  a6 = *(_QWORD *)v256,
                  !v97) )
            {
              v77 -= a6;
              v97 = 0x7FFFFFFF;
              if ( v77 < 0x80000000LL )
              {
                if ( v77 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
                  v97 = 0x80000000;
                else
                  v97 = v77;
              }
            }
            if ( v95 != v202 )
            {
              LODWORD(v188) = v97;
              operator delete(v95, *(_QWORD *)v324 + 1LL);
              a5 = (__int64 *)s2;
              v97 = (int)v188;
            }
            if ( a5 != &v320 )
            {
              LODWORD(v188) = v97;
              operator delete(a5, v320 + 1);
              v97 = (int)v188;
            }
            v98 = (_QWORD *)(a1 + 16 * v78);
            if ( v97 >= 0 )
            {
              v311 = v317.m128_u64[1];
              goto LABEL_112;
            }
            LODWORD(v73) = v89 - 1;
            *v98 = *v90;
            v98[1] = v90[1];
            v78 = v89;
            if ( !v89 )
              break;
            v89 = (v89 - 1) / 2;
          }
          v98 = (_QWORD *)a1;
          v311 = v317.m128_u64[1];
          goto LABEL_112;
        }
        v317 = _mm_loadh_ps((const double *)&v311);
      }
      v98 = (_QWORD *)a1;
LABEL_112:
      v99 = (__int64)v313 <= 16;
      *v98 = v317.m128_u64[0];
      result = v311;
      v98[1] = v311;
    }
    while ( !v99 );
  }
  return result;
}

