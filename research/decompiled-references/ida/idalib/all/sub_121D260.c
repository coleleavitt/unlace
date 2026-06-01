__int64 __fastcall sub_121D260(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v7; // rbp
  int v8; // r13d
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // r14
  __int64 v12; // rax
  char v13; // di
  size_t v14; // r14
  size_t v15; // rax
  char v16; // di
  size_t v17; // r14
  size_t v18; // rax
  size_t v19; // r15
  char v20; // r8
  int v21; // eax
  size_t v22; // r14
  size_t v23; // rax
  char v24; // di
  size_t v25; // r14
  size_t v26; // rax
  char v27; // di
  size_t v28; // r14
  size_t v29; // rax
  size_t v30; // r15
  char v31; // r8
  int v32; // eax
  int v33; // eax
  size_t v34; // rax
  size_t v35; // r14
  size_t v36; // rax
  size_t v37; // r15
  char v38; // r8
  int v39; // eax
  size_t v40; // r14
  __int64 v41; // rax
  char v42; // di
  size_t v43; // r14
  char v44; // al
  size_t v45; // r14
  char v46; // al
  size_t v47; // r14
  size_t v48; // rax
  char v49; // di
  size_t v50; // r14
  size_t v51; // rax
  char v52; // di
  unsigned int v53; // r13d
  size_t v54; // r14
  char v55; // al
  size_t v56; // r14
  char v57; // al
  size_t v58; // rax
  size_t v59; // rax
  int v60; // eax
  size_t v61; // rax
  size_t v62; // rax
  __int64 v63; // r12
  size_t v64; // rax
  __int64 v65; // rax
  size_t v66; // rax
  size_t v67; // rax
  __int64 v68; // r12
  size_t v69; // rax
  __int64 v70; // rax
  size_t v71; // rax
  size_t v72; // rax
  __int64 v73; // r12
  size_t v74; // rax
  __int64 v75; // rax
  size_t v76; // rax
  size_t v77; // rax
  __int64 v78; // rax
  size_t v79; // rax
  size_t v80; // rax
  __int64 v81; // rax
  size_t v82; // rax
  size_t v83; // rax
  __int64 v84; // rax
  size_t v85; // rax
  size_t v86; // rax
  __int64 v87; // r12
  size_t v88; // rax
  __int64 v89; // rax
  size_t v90; // rax
  size_t v91; // rax
  __int64 v92; // r12
  size_t v93; // rax
  __int64 v94; // rax
  size_t v95; // rax
  size_t v96; // rax
  __int64 v97; // r12
  size_t v98; // rax
  __int64 v99; // rax
  size_t v100; // rax
  size_t v101; // rax
  void **v102; // r12
  size_t v103; // rax
  _QWORD *v104; // r12
  size_t v105; // rax
  __int64 v106; // r12
  size_t v107; // rax
  __int64 v108; // r12
  size_t v109; // rax
  __int64 v110; // rax
  __int64 *v111; // rax
  __int64 *v112; // rax
  __int64 *v113; // rax
  _QWORD *v114; // rax
  __int64 *v115; // rax
  __int64 *v116; // rax
  __int64 *v117; // rax
  _QWORD *v118; // rax
  __int64 *v119; // rax
  __m128i *v120; // rax
  __m128 v121; // xmm0
  size_t v122; // rax
  void **v123; // r13
  size_t v124; // rax
  _QWORD *v125; // r13
  size_t v126; // rax
  __int64 v127; // rax
  size_t v128; // rax
  void **v129; // r13
  size_t v130; // rax
  _QWORD *v131; // r13
  size_t v132; // rax
  __int64 v133; // r13
  size_t v134; // rax
  __int64 v135; // r13
  size_t v136; // rax
  __int64 v137; // rax
  size_t v138; // rax
  void **v139; // r13
  size_t v140; // rax
  __int64 v141; // r13
  size_t v142; // rax
  __int64 v143; // r13
  size_t v144; // rax
  __int64 v145; // rax
  __int64 *v146; // rax
  __int64 *v147; // rax
  void **v148; // r13
  __int64 *m128i_i64; // r15
  __int64 *v150; // r14
  unsigned int v151; // r13d
  int v153; // eax
  int v154; // eax
  size_t v155; // rax
  int v156; // eax
  size_t v157; // rax
  int v158; // eax
  __int64 *v159; // rsi
  int v160; // eax
  size_t v161; // rax
  int v162; // eax
  size_t v163; // rax
  size_t v164; // rax
  size_t v165; // rax
  __m128i *v166; // r15
  __m128i *v167; // r14
  __m128i *v168; // rcx
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rax
  __m128i *v174; // r15
  __int64 v175; // rax
  __m128i *v176; // r15
  __m128i *v177; // rcx
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rax
  __int64 v183; // rax
  void ***v184; // rdi
  __m128i v185; // xmm5
  __m128i *v186; // rax
  unsigned __int64 *v187; // rdi
  __m128i *v188; // rcx
  void ***v189; // rdi
  __m128i v190; // xmm7
  __m128i *v191; // rcx
  unsigned __int64 *v192; // rdi
  size_t v193; // rax
  size_t v194; // rax
  _QWORD *v195; // r13
  size_t v196; // rax
  __int64 v197; // r13
  size_t v198; // rax
  __int64 v199; // r13
  size_t v200; // rax
  __int64 v201; // rax
  size_t v202; // rax
  size_t v203; // rax
  __int64 v204; // r13
  size_t v205; // rax
  __int64 v206; // r13
  size_t v207; // rax
  __int64 v208; // rax
  __int64 *v209; // rax
  char *v210; // r14
  char *v211; // r13
  void *v212; // rax
  char *v213; // r15
  __int64 v214; // rax
  __int64 v215; // rdi
  __m128i *v216; // rcx
  __int64 v217; // rax
  __int64 v218; // rax
  void *v219[2]; // [rsp+0h] [rbp-A58h] BYREF
  __m128i v220; // [rsp+10h] [rbp-A48h]
  __m128i *v221; // [rsp+20h] [rbp-A38h]
  __m128i *v222; // [rsp+28h] [rbp-A30h] BYREF
  void ***v223; // [rsp+30h] [rbp-A28h]
  void **v224; // [rsp+38h] [rbp-A20h]
  _BYTE *v225; // [rsp+40h] [rbp-A18h]
  _BYTE *v226; // [rsp+48h] [rbp-A10h]
  _BYTE *v227; // [rsp+50h] [rbp-A08h]
  _BYTE *v228; // [rsp+58h] [rbp-A00h]
  __int64 *v229; // [rsp+60h] [rbp-9F8h]
  __int64 *v230; // [rsp+68h] [rbp-9F0h]
  __m128 v231; // [rsp+70h] [rbp-9E8h] BYREF
  void *s1; // [rsp+80h] [rbp-9D8h] BYREF
  size_t n; // [rsp+88h] [rbp-9D0h]
  void *v234; // [rsp+90h] [rbp-9C8h] BYREF
  __int64 v235; // [rsp+98h] [rbp-9C0h]
  __int128 v236; // [rsp+A0h] [rbp-9B8h] BYREF
  __int64 v237; // [rsp+B0h] [rbp-9A8h]
  __int128 v238; // [rsp+C0h] [rbp-998h] BYREF
  __int64 v239; // [rsp+D0h] [rbp-988h]
  __m128i v240; // [rsp+E0h] [rbp-978h] BYREF
  __m128 v241; // [rsp+F0h] [rbp-968h]
  __int64 v242[6]; // [rsp+100h] [rbp-958h] BYREF
  _BYTE v243[128]; // [rsp+130h] [rbp-928h] BYREF
  _BYTE v244[128]; // [rsp+1B0h] [rbp-8A8h] BYREF
  _BYTE v245[128]; // [rsp+230h] [rbp-828h] BYREF
  _BYTE v246[128]; // [rsp+2B0h] [rbp-7A8h] BYREF
  _BYTE v247[128]; // [rsp+330h] [rbp-728h] BYREF
  _BYTE v248[128]; // [rsp+3B0h] [rbp-6A8h] BYREF
  __m128 si128; // [rsp+430h] [rbp-628h] BYREF
  __int64 v250; // [rsp+440h] [rbp-618h]
  __int128 v251; // [rsp+4B0h] [rbp-5A8h] BYREF
  __int64 v252; // [rsp+4C0h] [rbp-598h]
  __int128 v253; // [rsp+530h] [rbp-528h] BYREF
  __int64 v254; // [rsp+540h] [rbp-518h]
  __m128i v255; // [rsp+5B0h] [rbp-4A8h] BYREF
  __int64 v256; // [rsp+5C0h] [rbp-498h]
  __m128i v257; // [rsp+630h] [rbp-428h] BYREF
  __int64 v258; // [rsp+640h] [rbp-418h]
  char *v259; // [rsp+648h] [rbp-410h]
  __int64 v260; // [rsp+650h] [rbp-408h]
  char v261; // [rsp+658h] [rbp-400h] BYREF
  char *v262; // [rsp+690h] [rbp-3C8h]
  __int64 v263; // [rsp+698h] [rbp-3C0h]
  char v264; // [rsp+6A0h] [rbp-3B8h] BYREF
  __int64 v265; // [rsp+750h] [rbp-308h]
  __int64 v266; // [rsp+770h] [rbp-2E8h]
  void *v267[2]; // [rsp+780h] [rbp-2D8h] BYREF
  __int64 v268; // [rsp+790h] [rbp-2C8h]
  _BYTE *v269; // [rsp+798h] [rbp-2C0h] BYREF
  __int64 v270; // [rsp+7A0h] [rbp-2B8h]
  _BYTE v271[56]; // [rsp+7A8h] [rbp-2B0h] BYREF
  _BYTE *v272; // [rsp+7E0h] [rbp-278h] BYREF
  __int64 v273; // [rsp+7E8h] [rbp-270h]
  _BYTE v274[160]; // [rsp+7F0h] [rbp-268h] BYREF
  __m128i v275; // [rsp+890h] [rbp-1C8h] BYREF
  __int64 v276; // [rsp+8A0h] [rbp-1B8h]
  __m128i v277; // [rsp+8B0h] [rbp-1A8h] BYREF
  __int64 v278; // [rsp+8C0h] [rbp-198h]
  __m128i v279; // [rsp+8D0h] [rbp-188h] BYREF
  __m128 v280; // [rsp+8E0h] [rbp-178h] BYREF
  __m128i *v281; // [rsp+8F0h] [rbp-168h] BYREF
  __int64 v282; // [rsp+8F8h] [rbp-160h]
  __m128i v283; // [rsp+900h] [rbp-158h] BYREF
  __m128i *v284; // [rsp+910h] [rbp-148h] BYREF
  __int64 v285; // [rsp+918h] [rbp-140h]
  __m128i v286; // [rsp+920h] [rbp-138h] BYREF
  __int128 v287; // [rsp+930h] [rbp-128h] BYREF
  __int64 v288; // [rsp+940h] [rbp-118h]
  __m128i *v289; // [rsp+948h] [rbp-110h] BYREF
  __int64 v290; // [rsp+950h] [rbp-108h]
  __m128i v291; // [rsp+958h] [rbp-100h] BYREF
  __m128i v292; // [rsp+968h] [rbp-F0h] BYREF
  __m128i v293; // [rsp+978h] [rbp-E0h] BYREF
  char v294; // [rsp+988h] [rbp-D0h]
  __m128i v295[2]; // [rsp+9E0h] [rbp-78h] BYREF
  __m128i v296[5]; // [rsp+A00h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(a1 + 8);
  v220.m128i_i64[0] = a1;
  v221 = (__m128i *)a6;
  v242[2] = (__int64)"/crtbegin.o";
  v242[0] = a3;
  v242[1] = a4;
  v242[3] = j__strlen("/crtbegin.o");
  v242[4] = v7;
  s1 = nullptr;
  n = 0;
  v234 = nullptr;
  v235 = 0;
  sub_1152ED0(a5, a2, (const char **)&s1, (char **)&v234);
  v8 = a2[8];
  v236 = 0;
  v237 = 0;
  v9 = j__strlen("-m32");
  sub_11C67F0((unsigned int)(v8 - 16) <= 1, "-m32", v9, (__int64)&v236);
  v10 = j__strlen("-m64");
  sub_11C67F0((unsigned int)(a2[8] - 18) <= 1, "-m64", v10, (__int64)&v236);
  v11 = j__strlen("-mips16");
  v12 = sub_10DE660(a5, 0x980u, 0xA55u);
  v13 = 0;
  if ( v12 )
    v13 = sub_21B9810(v12, 2432);
  sub_11C67F0(v13, "-mips16", v11, (__int64)&v236);
  v14 = j__strlen("-march=mips32");
  v15 = j__strlen("mips32");
  v16 = 0;
  if ( n == v15 )
  {
    v16 = 1;
    if ( n )
      v16 = memcmp(s1, "mips32", n) == 0;
  }
  sub_11C67F0(v16, "-march=mips32", v14, (__int64)&v236);
  v17 = j__strlen("-march=mips32r2");
  v18 = j__strlen("mips32r2");
  v19 = n;
  v219[0] = s1;
  if ( v18 == n )
  {
    v20 = 1;
    if ( !n )
      goto LABEL_10;
    LODWORD(v222) = 1;
    v153 = memcmp(s1, "mips32r2", n);
    v20 = 1;
    if ( !v153 )
      goto LABEL_10;
    if ( v19 != j__strlen("mips32r3") )
    {
LABEL_52:
      if ( v19 == j__strlen("mips32r5") )
        goto LABEL_53;
LABEL_81:
      v164 = j__strlen("p5600");
      v20 = 0;
      if ( v164 == v19 )
      {
        v20 = 1;
        if ( v19 )
          goto LABEL_83;
      }
      goto LABEL_10;
    }
LABEL_9:
    v21 = memcmp(v219[0], "mips32r3", v19);
    v20 = 1;
    if ( !v21 )
      goto LABEL_10;
    goto LABEL_52;
  }
  if ( j__strlen("mips32r3") == v19 )
  {
    v20 = 1;
    if ( !v19 )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( j__strlen("mips32r5") != v19 )
    goto LABEL_81;
  v20 = 1;
  if ( !v19 )
    goto LABEL_10;
LABEL_53:
  v154 = memcmp(v219[0], "mips32r5", v19);
  v20 = 1;
  if ( v154 )
  {
    v155 = j__strlen("p5600");
    v20 = 0;
    if ( v19 == v155 )
LABEL_83:
      v20 = memcmp(v219[0], "p5600", v19) == 0;
  }
LABEL_10:
  sub_11C67F0(v20, "-march=mips32r2", v17, (__int64)&v236);
  v22 = j__strlen("-march=mips32r6");
  v23 = j__strlen("mips32r6");
  v24 = 0;
  if ( n == v23 )
  {
    v24 = 1;
    if ( n )
      v24 = memcmp(s1, "mips32r6", n) == 0;
  }
  sub_11C67F0(v24, "-march=mips32r6", v22, (__int64)&v236);
  v25 = j__strlen("-march=mips64");
  v26 = j__strlen("mips64");
  v27 = 0;
  if ( n == v26 )
  {
    v27 = 1;
    if ( n )
      v27 = memcmp(s1, "mips64", n) == 0;
  }
  sub_11C67F0(v27, "-march=mips64", v25, (__int64)&v236);
  v28 = j__strlen("-march=mips64r2");
  v29 = j__strlen("mips64r2");
  v30 = n;
  v219[0] = s1;
  if ( n == v29 )
  {
    v31 = 1;
    if ( !n )
      goto LABEL_26;
    LODWORD(v222) = 1;
    v32 = memcmp(s1, "mips64r2", n);
    v31 = 1;
    if ( !v32 )
      goto LABEL_26;
    if ( v30 != j__strlen("mips64r3") )
    {
LABEL_20:
      if ( v30 == j__strlen("mips64r5") )
        goto LABEL_21;
LABEL_75:
      if ( v30 != j__strlen("octeon") )
        goto LABEL_23;
      v31 = 1;
      if ( !v30 )
        goto LABEL_26;
LABEL_77:
      v162 = memcmp(v219[0], "octeon", v30);
      v31 = 1;
      if ( v162 )
      {
        v163 = j__strlen("octeon+");
        v31 = 0;
        if ( v30 == v163 )
          goto LABEL_25;
      }
      goto LABEL_26;
    }
LABEL_63:
    v158 = memcmp(v219[0], "mips64r3", v30);
    v31 = 1;
    if ( !v158 )
      goto LABEL_26;
    goto LABEL_20;
  }
  if ( v30 == j__strlen("mips64r3") )
  {
    v31 = 1;
    if ( !v30 )
      goto LABEL_26;
    goto LABEL_63;
  }
  if ( v30 != j__strlen("mips64r5") )
    goto LABEL_75;
  v31 = 1;
  if ( !v30 )
    goto LABEL_26;
LABEL_21:
  v33 = memcmp(v219[0], "mips64r5", v30);
  v31 = 1;
  if ( !v33 )
    goto LABEL_26;
  if ( v30 == j__strlen("octeon") )
    goto LABEL_77;
LABEL_23:
  v34 = j__strlen("octeon+");
  v31 = 0;
  if ( v30 == v34 )
  {
    v31 = 1;
    if ( v30 )
LABEL_25:
      v31 = memcmp(v219[0], "octeon+", v30) == 0;
  }
LABEL_26:
  sub_11C67F0(v31, "-march=mips64r2", v28, (__int64)&v236);
  v35 = j__strlen("-march=mips64r6");
  v36 = j__strlen("mips64r6");
  v37 = n;
  v219[0] = s1;
  if ( v36 == n )
  {
    v38 = 1;
    if ( !n )
      goto LABEL_29;
    LODWORD(v222) = 1;
    v39 = memcmp(s1, "mips64r6", n);
    v38 = 1;
    if ( !v39 )
      goto LABEL_29;
    if ( j__strlen("i6400") != v37 )
    {
      v165 = j__strlen("i6500");
      v38 = 0;
      if ( v37 != v165 )
        goto LABEL_29;
      goto LABEL_60;
    }
LABEL_58:
    v156 = memcmp(v219[0], "i6400", v37);
    v38 = 1;
    if ( !v156 )
      goto LABEL_29;
    v157 = j__strlen("i6500");
    v38 = 0;
    if ( v157 != v37 )
      goto LABEL_29;
LABEL_60:
    v38 = memcmp(v219[0], "i6500", v37) == 0;
    goto LABEL_29;
  }
  if ( j__strlen("i6400") == v37 )
  {
    v38 = 1;
    if ( !v37 )
      goto LABEL_29;
    goto LABEL_58;
  }
  v161 = j__strlen("i6500");
  v38 = 0;
  if ( v161 == v37 )
  {
    v38 = 1;
    if ( v37 )
      goto LABEL_60;
  }
LABEL_29:
  sub_11C67F0(v38, "-march=mips64r6", v35, (__int64)&v236);
  v40 = j__strlen("-mmicromips");
  v41 = sub_10DE660(a5, 0x9B8u, 0xA54u);
  v42 = 0;
  if ( v41 )
    v42 = sub_21B9810(v41, 2488);
  sub_11C67F0(v42, "-mmicromips", v40, (__int64)&v236);
  v43 = j__strlen("-muclibc");
  v44 = sub_1154520(a5);
  sub_11C67F0(v44, "-muclibc", v43, (__int64)&v236);
  v45 = j__strlen("-mnan=2008");
  v46 = sub_1154600(v220.m128i_i64[0], a5, (__int64)a2);
  sub_11C67F0(v46, "-mnan=2008", v45, (__int64)&v236);
  v47 = j__strlen("-mabi=n32");
  v48 = j__strlen("n32");
  v49 = 0;
  if ( v48 == v235 )
  {
    v49 = 1;
    if ( v48 )
      v49 = memcmp(v234, "n32", v48) == 0;
  }
  sub_11C67F0(v49, "-mabi=n32", v47, (__int64)&v236);
  v50 = j__strlen("-mabi=n64");
  v51 = j__strlen("n64");
  v52 = 0;
  if ( v51 == v235 )
  {
    v52 = 1;
    if ( v51 )
      v52 = memcmp(v234, "n64", v51) == 0;
  }
  v53 = v8 & 0xFFFFFFFD;
  sub_11C67F0(v52, "-mabi=n64", v50, (__int64)&v236);
  v54 = j__strlen("-msoft-float");
  v55 = sub_1216BC0(a5);
  sub_11C67F0(v55, "-msoft-float", v54, (__int64)&v236);
  v56 = j__strlen("-mhard-float");
  v57 = sub_1216BC0(a5);
  sub_11C67F0(v57 ^ 1, "-mhard-float", v56, (__int64)&v236);
  v58 = j__strlen("-EL");
  sub_11C67F0(v53 == 17, "-EL", v58, (__int64)&v236);
  v59 = j__strlen("-EB");
  sub_11C67F0(v53 != 17, "-EB", v59, (__int64)&v236);
  v60 = a2[10];
  if ( v60 != 7 )
  {
    if ( v60 == 6 && a2[11] == 7 && (unsigned int)(a2[12] - 1) <= 0xB )
    {
      v151 = sub_121B2B0((__int64 *)v220.m128i_i64[0], (__int64)&v236, (__int64)v242, v221);
      goto LABEL_48;
    }
    goto LABEL_40;
  }
  if ( a2[11] != 7 )
  {
LABEL_40:
    v258 = 0;
    v259 = &v261;
    v257 = 0;
    v222 = &v257;
    v262 = &v264;
    v260 = 0x100000000LL;
    v263 = 0x100000000LL;
    v265 = 0;
    v266 = 0;
    v61 = j__strlen("/mips16");
    sub_111A340((__int64)&v279, "/mips16", v61);
    v62 = j__strlen("-m32");
    v63 = sub_1117D00((__int64)&v279, (__int64)"-m32", v62, 0);
    v64 = j__strlen("-mips16");
    v65 = sub_1117D00(v63, (__int64)"-mips16", v64, 0);
    sub_117F2D0((__int64)v243, v65);
    sub_117F230((__int64)&v279);
    v66 = j__strlen("/micromips");
    sub_111A340((__int64)&v279, "/micromips", v66);
    v67 = j__strlen("-m32");
    v68 = sub_1117D00((__int64)&v279, (__int64)"-m32", v67, 0);
    v69 = j__strlen("-mmicromips");
    v70 = sub_1117D00(v68, (__int64)"-mmicromips", v69, 0);
    v226 = v244;
    sub_117F2D0((__int64)v244, v70);
    sub_117F230((__int64)&v279);
    v71 = j__strlen(&byte_22F0C30);
    sub_111A340((__int64)&v279, &byte_22F0C30, v71);
    v72 = j__strlen("-mips16");
    v73 = sub_1117D00((__int64)&v279, (__int64)"-mips16", v72, 1u);
    v74 = j__strlen("-mmicromips");
    v75 = sub_1117D00(v73, (__int64)"-mmicromips", v74, 1u);
    v227 = v245;
    sub_117F2D0((__int64)v245, v75);
    sub_117F230((__int64)&v279);
    v76 = j__strlen("/uclibc");
    sub_111A340((__int64)&v279, "/uclibc", v76);
    v77 = j__strlen("-muclibc");
    v78 = sub_1117D00((__int64)&v279, (__int64)"-muclibc", v77, 0);
    v228 = v246;
    sub_117F2D0((__int64)v246, v78);
    sub_117F230((__int64)&v279);
    v79 = j__strlen("/soft-float");
    sub_111A340((__int64)&v279, "/soft-float", v79);
    v80 = j__strlen("-msoft-float");
    v81 = sub_1117D00((__int64)&v279, (__int64)"-msoft-float", v80, 0);
    v224 = (void **)v247;
    sub_117F2D0((__int64)v247, v81);
    sub_117F230((__int64)&v279);
    v82 = j__strlen("/nan2008");
    sub_111A340((__int64)&v279, "/nan2008", v82);
    v83 = j__strlen("-mnan=2008");
    v84 = sub_1117D00((__int64)&v279, (__int64)"-mnan=2008", v83, 0);
    v225 = v248;
    sub_117F2D0((__int64)v248, v84);
    sub_117F230((__int64)&v279);
    v85 = j__strlen(&byte_22F0C30);
    sub_111A340((__int64)&v279, &byte_22F0C30, v85);
    v86 = j__strlen("-msoft-float");
    v87 = sub_1117D00((__int64)&v279, (__int64)"-msoft-float", v86, 1u);
    v88 = j__strlen("-mnan=2008");
    v89 = sub_1117D00(v87, (__int64)"-mnan=2008", v88, 1u);
    sub_117F2D0((__int64)&si128, v89);
    sub_117F230((__int64)&v279);
    v90 = j__strlen(&byte_22F0C30);
    sub_111A340((__int64)&v279, &byte_22F0C30, v90);
    v91 = j__strlen("-EB");
    v92 = sub_1117D00((__int64)&v279, (__int64)"-EB", v91, 0);
    v93 = j__strlen("-EL");
    v94 = sub_1117D00(v92, (__int64)"-EL", v93, 1u);
    sub_117F2D0((__int64)&v251, v94);
    sub_117F230((__int64)&v279);
    v95 = j__strlen("/el");
    sub_111A340((__int64)&v279, "/el", v95);
    v96 = j__strlen("-EL");
    v97 = sub_1117D00((__int64)&v279, (__int64)"-EL", v96, 0);
    v98 = j__strlen("-EB");
    v99 = sub_1117D00(v97, (__int64)"-EB", v98, 1u);
    v219[0] = &v253;
    sub_117F2D0((__int64)&v253, v99);
    sub_117F230((__int64)&v279);
    v100 = j__strlen(&byte_22F0C30);
    sub_111A340((__int64)&v279, &byte_22F0C30, v100);
    v101 = j__strlen("/64");
    v102 = sub_1119DD0((void **)&v279, "/64", v101);
    v103 = j__strlen("/64");
    v104 = sub_111A170(v102, "/64", v103);
    v105 = j__strlen("-mabi=n64");
    v106 = sub_1117D00((__int64)v104, (__int64)"-mabi=n64", v105, 0);
    v107 = j__strlen("-mabi=n32");
    v108 = sub_1117D00(v106, (__int64)"-mabi=n32", v107, 1u);
    v109 = j__strlen("-m32");
    v110 = sub_1117D00(v108, (__int64)"-m32", v109, 1u);
    v223 = (void ***)&v255;
    sub_117F2D0((__int64)&v255, v110);
    sub_117F230((__int64)&v279);
    v238 = 0;
    v239 = 0;
    v230 = (__int64 *)&v238;
    v111 = sub_111CEF0((__int64 *)&v238, (__int64)v243, (__int64)v244, (__int64)v245);
    v112 = sub_111D970((__int64)v111, (__int64)v246);
    v113 = sub_111CEF0(v112, (__int64)v247, (__int64)v248, (__int64)&si128);
    v114 = sub_1117D70(v113, "/micromips/nan2008");
    v115 = sub_1117D70(v114, "/mips16/nan2008");
    v116 = sub_111D520(v115, (__int64)&v251, (__int64)&v253);
    v117 = sub_111D970((__int64)v116, (__int64)&v255);
    v118 = sub_1117D70(v117, "/mips16.*/64");
    v119 = sub_1117D70(v118, "/micromips.*/64");
    sub_11187A0((__int64)&v279, v119);
    v229 = v242;
    v120 = (__m128i *)sub_110E920(
                        v279.m128i_i64,
                        (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1213F40,
                        (__int64)v242);
    v231.m128_u64[0] = (unsigned __int64)sub_121FBC0;
    v121 = _mm_loadh_ps((const double *)v231.m128_u64);
    v231.m128_u64[0] = (unsigned __int64)v120;
    v241 = v121;
    sub_1216720(v120 + 17, &v240);
    sub_11809E0(&v257, (__int64 *)v231.m128_u64[0]);
    if ( v241.m128_u64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v241.m128_u64[0])(&v240, &v240, 3);
    v231.m128_u64[0] = (unsigned __int64)v267;
    v231 = _mm_loadh_ps((const double *)v231.m128_u64);
    sub_117EEA0(v279.m128i_i64);
    sub_1216C70(v230);
    sub_117F230((__int64)v223);
    sub_117F230((__int64)v219[0]);
    sub_117F230((__int64)&v251);
    sub_117F230((__int64)&si128);
    sub_117F230((__int64)v225);
    sub_117F230((__int64)v224);
    sub_117F230((__int64)v228);
    sub_117F230((__int64)v227);
    sub_117F230((__int64)v226);
    sub_117F230((__int64)v243);
    v269 = v271;
    v272 = v274;
    *(_OWORD *)v267 = 0;
    v270 = 0x100000000LL;
    v273 = 0x100000000LL;
    v268 = 0;
    v276 = 0;
    v278 = 0;
    sub_111A340((__int64)&v279, nullptr, 0);
    v122 = j__strlen("/n32");
    v123 = sub_1119DD0((void **)&v279, "/n32", v122);
    v124 = j__strlen("/n32");
    v125 = sub_111A170(v123, "/n32", v124);
    v126 = j__strlen("-mabi=n32");
    v127 = sub_1117D00((__int64)v125, (__int64)"-mabi=n32", v126, 0);
    sub_117F2D0((__int64)&v251, v127);
    sub_117F230((__int64)&v279);
    sub_111A340((__int64)&v279, nullptr, 0);
    v128 = j__strlen("/64");
    v129 = sub_1119DD0((void **)&v279, "/64", v128);
    v130 = j__strlen("/64");
    v131 = sub_111A170(v129, "/64", v130);
    v132 = j__strlen("-m64");
    v133 = sub_1117D00((__int64)v131, (__int64)"-m64", v132, 0);
    v134 = j__strlen("-m32");
    v135 = sub_1117D00(v133, (__int64)"-m32", v134, 1u);
    v136 = j__strlen("-mabi=n32");
    v137 = sub_1117D00(v135, (__int64)"-mabi=n32", v136, 1u);
    sub_117F2D0((__int64)v219[0], v137);
    sub_117F230((__int64)&v279);
    sub_111A340((__int64)&v279, nullptr, 0);
    v138 = j__strlen("/32");
    v139 = sub_1119DD0((void **)&v279, "/32", v138);
    v140 = j__strlen("-m64");
    v141 = sub_1117D00((__int64)v139, (__int64)"-m64", v140, 1u);
    v142 = j__strlen("-m32");
    v143 = sub_1117D00(v141, (__int64)"-m32", v142, 0);
    v144 = j__strlen("-mabi=n32");
    v145 = sub_1117D00(v143, (__int64)"-mabi=n32", v144, 1u);
    sub_117F2D0((__int64)v223, v145);
    sub_117F230((__int64)&v279);
    si128 = 0;
    v250 = 0;
    v146 = sub_111CEF0((__int64 *)&si128, (__int64)v223, (__int64)v219[0], (__int64)&v251);
    sub_11187A0((__int64)&v279, v146);
    v147 = sub_110E920(v279.m128i_i64, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1213F40, (__int64)v229);
    sub_11809E0((__m128i *)v267, v147);
    sub_117EEA0(v279.m128i_i64);
    sub_1216C70((__int64 *)&si128);
    sub_117F230((__int64)v223);
    sub_117F230((__int64)v219[0]);
    sub_117F230((__int64)&v251);
    si128 = (__m128)_mm_load_si128((const __m128i *)&v231);
    if ( -1431655765 * (unsigned int)((v257.m128i_i64[1] - v257.m128i_i64[0]) >> 6) < -1431655765
                                                                                    * (unsigned int)(((char *)v267[1] - (char *)v267[0]) >> 6) )
    {
      v224 = v267;
      si128 = _mm_loadh_ps((const double *)&v222);
    }
    v148 = (void **)si128.m128_u64[0];
    m128i_i64 = v221[21].m128i_i64;
    if ( (unsigned __int8)sub_1110810(
                            si128.m128_i64[0],
                            (__int64 *)v220.m128i_i64[0],
                            (__int64)&v236,
                            v221[21].m128i_i64,
                            0)
      || (v148 = (void **)si128.m128_u64[1],
          (unsigned __int8)sub_1110810(si128.m128_i64[1], (__int64 *)v220.m128i_i64[0], (__int64)&v236, m128i_i64, 0)) )
    {
      if ( v148 == v267 )
      {
        LOBYTE(v254) = 0;
        v251 = 0;
        v252 = 0;
        sub_110B910(
          (__int64)&v279,
          nullptr,
          0,
          0,
          0,
          (__int64 *)&v251,
          nullptr,
          0,
          nullptr,
          0,
          (_BYTE *)v253,
          *((__int64 *)&v253 + 1),
          0);
        v176 = (__m128i *)((char *)v221 + 696);
        if ( v221[46].m128i_i8[0] )
        {
          sub_A0AAD0((__int64)v221[34].m128i_i64, &v279);
          sub_A0AAD0((__int64)v221[36].m128i_i64, &v281);
          sub_A0AAD0((__int64)v221[38].m128i_i64, &v284);
          v188 = v221;
          v189 = v223;
          v190 = _mm_loadu_si128(v221 + 40);
          v256 = v221[41].m128i_i64[0];
          *(__m128i *)v219 = v190;
          v221[40].m128i_i64[0] = v287;
          v255 = v190;
          v188[40].m128i_i64[1] = *((_QWORD *)&v287 + 1);
          v287 = 0;
          v188[41].m128i_i64[0] = v288;
          v288 = 0;
          sub_9B4A30(v189);
          sub_A0AAD0((__int64)&v221[41].m128i_i64[1], &v289);
          v191 = v221;
          if ( v221[45].m128i_i8[8] )
          {
            if ( v294 )
            {
              sub_A0AAD0((__int64)v176, &v292);
            }
            else
            {
              v192 = (unsigned __int64 *)v221[43].m128i_i64[1];
              v221[45].m128i_i8[8] = 0;
              if ( v192 != &v191[44].m128i_u64[1] )
                operator delete(v192);
            }
          }
          else if ( v294 )
          {
            v221[43].m128i_i64[1] = (__int64)&v221[44].m128i_i64[1];
            if ( (__m128i *)v292.m128i_i64[0] == &v293 )
            {
              *(__m128i *)((char *)v191 + 712) = _mm_loadu_si128(&v293);
            }
            else
            {
              v191[43].m128i_i64[1] = v292.m128i_i64[0];
              v191[44].m128i_i64[1] = v293.m128i_i64[0];
            }
            v218 = v292.m128i_i64[1];
            v293.m128i_i8[0] = 0;
            v292.m128i_i64[1] = 0;
            v191[44].m128i_i64[0] = v218;
            v292.m128i_i64[0] = (__int64)&v293;
            v191[45].m128i_i8[8] = 1;
          }
        }
        else
        {
          v177 = v221;
          v221[34].m128i_i64[0] = (__int64)v221[35].m128i_i64;
          if ( (__m128 *)v279.m128i_i64[0] == &v280 )
          {
            v177[35] = _mm_load_si128((const __m128i *)&v280);
          }
          else
          {
            v177[34].m128i_i64[0] = v279.m128i_i64[0];
            v177[35].m128i_i64[0] = v280.m128_u64[0];
          }
          v178 = v279.m128i_i64[1];
          v279.m128i_i64[1] = 0;
          v280.m128_i8[0] = 0;
          v177[34].m128i_i64[1] = v178;
          v279.m128i_i64[0] = (__int64)&v280;
          v177[36].m128i_i64[0] = (__int64)v177[37].m128i_i64;
          if ( v281 == &v283 )
          {
            v177[37] = _mm_load_si128(&v283);
          }
          else
          {
            v177[36].m128i_i64[0] = (__int64)v281;
            v177[37].m128i_i64[0] = v283.m128i_i64[0];
          }
          v179 = v282;
          v282 = 0;
          v283.m128i_i8[0] = 0;
          v177[36].m128i_i64[1] = v179;
          v281 = &v283;
          v177[38].m128i_i64[0] = (__int64)v177[39].m128i_i64;
          if ( v284 == &v286 )
          {
            v177[39] = _mm_load_si128(&v286);
          }
          else
          {
            v177[38].m128i_i64[0] = (__int64)v284;
            v177[39].m128i_i64[0] = v286.m128i_i64[0];
          }
          v180 = v285;
          v285 = 0;
          v286.m128i_i8[0] = 0;
          v177[38].m128i_i64[1] = v180;
          v284 = &v286;
          v177[40].m128i_i64[0] = v287;
          v181 = *((_QWORD *)&v287 + 1);
          v287 = 0;
          v177[40].m128i_i64[1] = v181;
          v182 = v288;
          v288 = 0;
          v177[41].m128i_i64[0] = v182;
          v177[41].m128i_i64[1] = (__int64)&v177[42].m128i_i64[1];
          if ( v289 == &v291 )
          {
            *(__m128i *)((char *)v177 + 680) = _mm_loadu_si128(&v291);
          }
          else
          {
            v177[41].m128i_i64[1] = (__int64)v289;
            v177[42].m128i_i64[1] = v291.m128i_i64[0];
          }
          v183 = v290;
          v290 = 0;
          v291.m128i_i8[0] = 0;
          v177[42].m128i_i64[0] = v183;
          v289 = &v291;
          sub_A20E90(v176, &v292);
          v221[46].m128i_i8[0] = 1;
        }
        sub_110AEF0((__int64)&v279);
        sub_9B4A30((void ***)&v251);
      }
      v159 = (__int64 *)v148;
      v151 = 1;
      sub_11809E0(v221, v159);
      sub_117EEA0((__int64 *)v267);
      sub_117EEA0(v222->m128i_i64);
    }
    else
    {
      sub_117EEA0((__int64 *)v267);
      v150 = (__int64 *)v222;
      sub_117EEA0(v222->m128i_i64);
      v257 = 0;
      v280.m128_i8[0] = 0;
      v258 = 0;
      sub_110B910(
        (__int64)v267,
        nullptr,
        0,
        0,
        0,
        v150,
        nullptr,
        0,
        nullptr,
        0,
        v279.m128i_i64[0],
        v279.m128i_i64[1],
        0);
      sub_9B4A30((void ***)v150);
      sub_110E210((char **)v221, (__int64)v267);
      sub_110E920(v221->m128i_i64, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1213F40, (__int64)v229);
      v151 = sub_1110810((__int64)v221, (__int64 *)v220.m128i_i64[0], (__int64)&v236, m128i_i64, 0);
      if ( (_BYTE)v151 )
      {
        LOBYTE(v256) = 0;
        v253 = 0;
        v254 = 0;
        sub_110B910(
          (__int64)&v279,
          nullptr,
          0,
          0,
          0,
          (__int64 *)v219[0],
          nullptr,
          0,
          nullptr,
          0,
          v255.m128i_i64[0],
          v255.m128i_i64[1],
          0);
        v166 = v221;
        v167 = (__m128i *)((char *)v221 + 696);
        if ( v221[46].m128i_i8[0] )
        {
          sub_A0AAD0((__int64)v221[34].m128i_i64, &v279);
          sub_A0AAD0((__int64)v221[36].m128i_i64, &v281);
          sub_A0AAD0((__int64)v221[38].m128i_i64, &v284);
          v184 = (void ***)v222;
          v185 = _mm_loadu_si128(v221 + 40);
          v258 = v221[41].m128i_i64[0];
          v220 = v185;
          v221[40].m128i_i64[0] = v287;
          v257 = v185;
          v166[40].m128i_i64[1] = *((_QWORD *)&v287 + 1);
          v287 = 0;
          v166[41].m128i_i64[0] = v288;
          v288 = 0;
          sub_9B4A30(v184);
          sub_A0AAD0((__int64)&v166[41].m128i_i64[1], &v289);
          if ( v166[45].m128i_i8[8] )
          {
            if ( v294 )
            {
              sub_A0AAD0((__int64)v167, &v292);
            }
            else
            {
              v186 = v221;
              v187 = (unsigned __int64 *)v221[43].m128i_i64[1];
              v221[45].m128i_i8[8] = 0;
              if ( v187 != &v186[44].m128i_u64[1] )
                operator delete(v187);
            }
          }
          else if ( v294 )
          {
            v216 = v221;
            v221[43].m128i_i64[1] = (__int64)&v221[44].m128i_i64[1];
            if ( (__m128i *)v292.m128i_i64[0] == &v293 )
            {
              *(__m128i *)((char *)v216 + 712) = _mm_loadu_si128(&v293);
            }
            else
            {
              v216[43].m128i_i64[1] = v292.m128i_i64[0];
              v216[44].m128i_i64[1] = v293.m128i_i64[0];
            }
            v217 = v292.m128i_i64[1];
            v293.m128i_i8[0] = 0;
            v292.m128i_i64[1] = 0;
            v216[44].m128i_i64[0] = v217;
            v292.m128i_i64[0] = (__int64)&v293;
            v216[45].m128i_i8[8] = 1;
          }
        }
        else
        {
          v168 = v221;
          v221[34].m128i_i64[0] = (__int64)v221[35].m128i_i64;
          if ( (__m128 *)v279.m128i_i64[0] == &v280 )
          {
            v168[35] = _mm_load_si128((const __m128i *)&v280);
          }
          else
          {
            v168[34].m128i_i64[0] = v279.m128i_i64[0];
            v168[35].m128i_i64[0] = v280.m128_u64[0];
          }
          v169 = v279.m128i_i64[1];
          v279.m128i_i64[1] = 0;
          v280.m128_i8[0] = 0;
          v168[34].m128i_i64[1] = v169;
          v279.m128i_i64[0] = (__int64)&v280;
          v168[36].m128i_i64[0] = (__int64)v168[37].m128i_i64;
          if ( v281 == &v283 )
          {
            v168[37] = _mm_load_si128(&v283);
          }
          else
          {
            v168[36].m128i_i64[0] = (__int64)v281;
            v168[37].m128i_i64[0] = v283.m128i_i64[0];
          }
          v170 = v282;
          v282 = 0;
          v283.m128i_i8[0] = 0;
          v168[36].m128i_i64[1] = v170;
          v281 = &v283;
          v168[38].m128i_i64[0] = (__int64)v168[39].m128i_i64;
          if ( v284 == &v286 )
          {
            v168[39] = _mm_load_si128(&v286);
          }
          else
          {
            v168[38].m128i_i64[0] = (__int64)v284;
            v168[39].m128i_i64[0] = v286.m128i_i64[0];
          }
          v171 = v285;
          v285 = 0;
          v286.m128i_i8[0] = 0;
          v168[38].m128i_i64[1] = v171;
          v284 = &v286;
          v168[40].m128i_i64[0] = v287;
          v172 = *((_QWORD *)&v287 + 1);
          v287 = 0;
          v168[40].m128i_i64[1] = v172;
          v173 = v288;
          v288 = 0;
          v168[41].m128i_i64[0] = v173;
          v168[41].m128i_i64[1] = (__int64)&v168[42].m128i_i64[1];
          if ( v289 == &v291 )
          {
            v174 = v168;
            *(__m128i *)((char *)v168 + 680) = _mm_loadu_si128(&v291);
          }
          else
          {
            v168[41].m128i_i64[1] = (__int64)v289;
            v174 = v168;
            v168[42].m128i_i64[1] = v291.m128i_i64[0];
          }
          v175 = v290;
          v290 = 0;
          v291.m128i_i8[0] = 0;
          v174[42].m128i_i64[0] = v175;
          v289 = &v291;
          sub_A20E90(v167, &v292);
          v174[46].m128i_i8[0] = 1;
        }
        sub_110AEF0((__int64)&v279);
        sub_9B4A30((void ***)v219[0]);
      }
      sub_110AEF0((__int64)v267);
    }
    goto LABEL_48;
  }
  v160 = a2[12];
  if ( v160 )
  {
    if ( (unsigned int)(v160 - 1) <= 0xB )
    {
      v151 = sub_12199D0((__int64 *)v220.m128i_i64[0], (__int64)&v236, v242, v221);
      goto LABEL_48;
    }
    goto LABEL_40;
  }
  v268 = 0;
  *(_OWORD *)v267 = 0;
  v269 = v271;
  v272 = v274;
  v270 = 0x100000000LL;
  v273 = 0x100000000LL;
  v276 = 0;
  v278 = 0;
  v193 = j__strlen(&byte_22F0C30);
  sub_111A340((__int64)&v279, &byte_22F0C30, v193);
  v194 = j__strlen("/mips-r2-hard-musl");
  v195 = sub_1119FA0(&v279, "/mips-r2-hard-musl", v194);
  v196 = j__strlen("-EB");
  v197 = sub_1117D00((__int64)v195, (__int64)"-EB", v196, 0);
  v198 = j__strlen("-EL");
  v199 = sub_1117D00(v197, (__int64)"-EL", v198, 1u);
  v200 = j__strlen("-march=mips32r2");
  v201 = sub_1117D00(v199, (__int64)"-march=mips32r2", v200, 0);
  v223 = (void ***)&v255;
  sub_117F2D0((__int64)&v255, v201);
  sub_117F230((__int64)&v279);
  v202 = j__strlen("/mipsel-r2-hard-musl");
  sub_111A340((__int64)&v279, "/mipsel-r2-hard-musl", v202);
  v203 = j__strlen("-EB");
  v204 = sub_1117D00((__int64)&v279, (__int64)"-EB", v203, 1u);
  v205 = j__strlen("-EL");
  v206 = sub_1117D00(v204, (__int64)"-EL", v205, 0);
  v207 = j__strlen("-march=mips32r2");
  v208 = sub_1117D00(v206, (__int64)"-march=mips32r2", v207, 0);
  v222 = &v257;
  sub_117F2D0((__int64)&v257, v208);
  sub_117F230((__int64)&v279);
  v253 = 0;
  v219[0] = &v253;
  v254 = 0;
  v209 = sub_111D520((__int64 *)&v253, (__int64)&v255, (__int64)&v257);
  sub_11187A0((__int64)&v279, v209);
  v210 = (char *)v267[0];
  v211 = (char *)v267[1];
  v212 = (void *)v279.m128i_i64[1];
  v267[0] = (void *)v279.m128i_i64[0];
  v213 = v210;
  v279 = 0;
  v267[1] = v212;
  v214 = v280.m128_u64[0];
  v280.m128_u64[0] = 0;
  v268 = v214;
  while ( v211 != v213 )
  {
    v215 = (__int64)v213;
    v213 += 192;
    sub_110AEF0(v215);
  }
  if ( v210 )
    operator delete(v210);
  sub_110B1B0((__int64)&v269, (__int64)&v280.m128_i64[1]);
  sub_1114800((__int64)&v272, (__int64)&v287);
  sub_1216720(&v275, v295);
  sub_1216720(&v277, v296);
  sub_117EEA0(v279.m128i_i64);
  sub_1216C70((__int64 *)v219[0]);
  v219[0] = sub_1219600;
  v280 = _mm_loadh_ps((const double *)v219);
  sub_1216720(&v275, &v279);
  if ( v280.m128_u64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v280.m128_u64[0])(&v279, &v279, 3);
  sub_117F230((__int64)v222);
  sub_117F230((__int64)v223);
  v151 = sub_1110810((__int64)v267, (__int64 *)v220.m128i_i64[0], (__int64)&v236, v221[21].m128i_i64, 0);
  if ( (_BYTE)v151 )
    sub_11809E0(v221, (__int64 *)v267);
  sub_117EEA0((__int64 *)v267);
LABEL_48:
  sub_9B4A30((void ***)&v236);
  return v151;
}
