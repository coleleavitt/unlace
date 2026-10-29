__m128i *__fastcall sub_20F93A0(__m128i *a1, int a2, int a3)
{
  bool v4; // al
  bool v5; // r14
  size_t v6; // r15
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  bool v10; // al
  size_t v11; // r15
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  bool v36; // al
  bool v37; // r15
  size_t v38; // r12
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  size_t v51; // rbp
  size_t v52; // rax
  _QWORD *v53; // rax
  char *v54; // rsi
  size_t v55; // r15
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  size_t v59; // r14
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  bool v63; // al
  size_t v64; // r15
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // rax
  _QWORD *v82; // rax
  size_t v83; // rax
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  _QWORD *v86; // rax
  _QWORD *v87; // rax
  _QWORD *v88; // rax
  _QWORD *v89; // rax
  size_t v90; // r12
  size_t v91; // rax
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  _QWORD *v94; // rax
  size_t v95; // rbp
  size_t v96; // rax
  _QWORD *v97; // rax
  _QWORD *v98; // rax
  __int64 v99; // rax
  __m128i *v100; // r12
  signed __int64 v101; // rax
  size_t v102; // rbp
  _QWORD *v103; // rax
  _QWORD *v104; // rax
  _QWORD *v105; // rax
  _QWORD *v106; // rax
  _QWORD *v107; // rax
  _QWORD *v108; // rax
  _QWORD *v109; // rax
  _QWORD *v110; // rax
  _QWORD *v111; // rax
  _QWORD *v112; // rax
  _QWORD *v113; // rax
  _QWORD *v114; // rax
  _QWORD *v115; // rax
  _QWORD *v116; // rax
  _QWORD *v117; // rax
  _QWORD *v118; // rax
  _QWORD *v119; // rax
  _QWORD *v120; // rax
  _QWORD *v121; // rax
  _QWORD *v122; // rax
  _QWORD *v123; // rax
  _QWORD *v124; // rax
  _QWORD *v125; // rax
  _QWORD *v126; // rax
  _QWORD *v127; // rax
  _QWORD *v128; // rax
  _QWORD *v129; // rax
  _QWORD *v130; // rax
  _QWORD *v131; // rax
  _QWORD *v132; // rax
  _QWORD *v133; // rax
  _QWORD *v134; // rax
  _QWORD *v135; // rax
  _QWORD *v136; // rax
  _QWORD *v137; // rax
  _QWORD *v138; // rax
  _QWORD *v139; // rax
  _QWORD *v140; // rax
  _QWORD *v141; // rax
  _QWORD *v142; // rax
  _QWORD *v143; // rax
  _QWORD *v144; // rax
  _QWORD *v145; // rax
  _QWORD *v146; // rax
  _QWORD *v147; // rax
  _QWORD *v148; // rax
  _QWORD *v149; // rax
  _QWORD *v150; // rax
  size_t v151; // rax
  __m128i *v152; // rax
  size_t v154; // r15
  _QWORD *v155; // rax
  _QWORD *v156; // rax
  _QWORD *v157; // rax
  size_t v158; // r15
  _QWORD *v159; // rax
  _QWORD *v160; // rax
  _QWORD *v161; // rax
  _QWORD *v162; // rax
  _QWORD *v163; // rax
  _QWORD *v164; // rax
  size_t v165; // r12
  _QWORD *v166; // rax
  _QWORD *v167; // rax
  _QWORD *v168; // rax
  _QWORD *v169; // rax
  _QWORD *v170; // rax
  _QWORD *v171; // rax
  size_t v172; // rbp
  size_t v173; // rax
  size_t v174; // r14
  _QWORD *v175; // rax
  _QWORD *v176; // rax
  _QWORD *v177; // rax
  size_t v178; // r15
  size_t v179; // rax
  _QWORD *v180; // rax
  _QWORD *v181; // rax
  _QWORD *v182; // rax
  size_t v183; // r12
  size_t v184; // rax
  _QWORD *v185; // rax
  _QWORD *v186; // rax
  _QWORD *v187; // rax
  size_t v188; // rbp
  size_t v189; // rax
  _QWORD *v190; // rax
  _QWORD *v191; // rax
  _QWORD *v192; // rax
  size_t v193; // r12
  size_t v194; // rax
  _QWORD *v195; // rax
  _QWORD *v196; // rax
  _QWORD *v197; // rax
  size_t v198; // rbp
  size_t v199; // rax
  size_t v200; // r15
  _QWORD *v201; // rax
  _QWORD *v202; // rax
  _QWORD *v203; // rax
  size_t v204; // rax
  _QWORD *v205; // rax
  _QWORD *v206; // rax
  _QWORD *v207; // rax
  _QWORD *v208; // rax
  _QWORD *v209; // rax
  _QWORD *v210; // rax
  _QWORD *v211; // rax
  _QWORD *v212; // rax
  _QWORD *v213; // rax
  size_t v214; // r12
  _QWORD *v215; // rax
  _QWORD *v216; // rax
  _QWORD *v217; // rax
  _QWORD *v218; // rax
  _QWORD *v219; // rax
  _QWORD *v220; // rax
  _QWORD *v221; // rax
  _QWORD *v222; // rax
  _QWORD *v223; // rax
  _QWORD *v224; // rax
  _QWORD *v225; // rax
  _QWORD *v226; // rax
  _QWORD *v227; // rax
  _QWORD *v228; // rax
  _QWORD *v229; // rax
  _QWORD *v230; // rax
  _QWORD *v231; // rax
  _QWORD *v232; // rax
  _QWORD *v233; // rax
  _QWORD *v234; // rax
  _QWORD *v235; // rax
  _QWORD *v236; // rax
  _QWORD *v237; // rax
  _QWORD *v238; // rax
  _QWORD *v239; // rax
  _QWORD *v240; // rax
  _QWORD *v241; // rax
  _QWORD *v242; // rax
  _QWORD *v243; // rax
  _QWORD *v244; // rax
  _QWORD *v245; // rax
  _QWORD *v246; // rax
  _QWORD *v247; // rax
  size_t v248; // rax
  _QWORD *v249; // rax
  _QWORD *v250; // rax
  _QWORD *v251; // rax
  size_t v252; // rax
  _QWORD *v253; // rax
  _QWORD *v254; // rax
  _QWORD *v255; // rax
  size_t v256; // rax
  _QWORD *v257; // rax
  _QWORD *v258; // rax
  _QWORD *v259; // rax
  size_t v260; // rax
  _QWORD *v261; // rax
  _QWORD *v262; // rax
  _QWORD *v263; // rax
  size_t v264; // rax
  __m128i *v265; // rax
  _QWORD *v266; // rax
  _QWORD *v267; // rax
  _QWORD *v268; // rax
  _QWORD *v269; // rax
  _QWORD *v270; // rax
  _QWORD *v271; // rax
  _QWORD *v272; // rax
  _QWORD *v273; // rax
  _QWORD *v274; // rax
  _QWORD *v275; // rax
  _QWORD *v276; // rax
  _QWORD *v277; // rax
  _QWORD *v278; // rax
  _QWORD *v279; // rax
  _QWORD *v280; // rax
  bool v281; // [rsp+Dh] [rbp-5Bh]
  bool v282; // [rsp+Eh] [rbp-5Ah]
  bool v283; // [rsp+Fh] [rbp-59h]
  bool v284; // [rsp+Fh] [rbp-59h]
  void *v285; // [rsp+10h] [rbp-58h] BYREF
  __int64 v286; // [rsp+18h] [rbp-50h]
  __m128i v287[4]; // [rsp+20h] [rbp-48h] BYREF

  v287[0].m128i_i8[0] = 0;
  v286 = 0;
  v285 = v287;
  if ( !(a3 | a2) )
  {
    v5 = 0;
    goto LABEL_61;
  }
  v4 = a2 == 1;
  v5 = a2 == 1 && a3 == 1;
  if ( v5 )
  {
    v55 = j__strlen("invalid");
    if ( v55 != j__strlen("target") || v55 && memcmp("target", "invalid", v55) )
    {
      v56 = sub_9EE7C0(&v285, "'");
      v57 = sub_9EE7C0(v56, "target");
      v58 = sub_9EE7C0(v57, "'");
      sub_9EE7C0(v58, " ");
    }
    goto LABEL_61;
  }
  v5 = v4 && a3 == 2;
  if ( !v5 )
  {
    v282 = v4 && a3 == 3;
    if ( v282 )
    {
      v154 = j__strlen("invalid");
      if ( v154 != j__strlen("parallel") || v154 && memcmp("parallel", "invalid", v154) )
      {
        v155 = sub_9EE7C0(&v285, "'");
        v156 = sub_9EE7C0(v155, "parallel");
        v157 = sub_9EE7C0(v156, "'");
        sub_9EE7C0(v157, " ");
      }
      goto LABEL_190;
    }
    v282 = v4 && a3 == 4;
    if ( v282 )
    {
      v174 = j__strlen("invalid");
      if ( v174 != j__strlen("for") || v174 && memcmp("for", "invalid", v174) )
      {
        v175 = sub_9EE7C0(&v285, "'");
        v176 = sub_9EE7C0(v175, (char *)"for");
        v177 = sub_9EE7C0(v176, "'");
        sub_9EE7C0(v177, " ");
      }
      v5 = a2 == 2;
      v63 = a2 == 3;
      goto LABEL_232;
    }
    v5 = a2 == 1;
LABEL_61:
    v281 = v5 && a3 == 5;
    if ( v281 )
    {
      v59 = j__strlen("invalid");
      if ( v59 != j__strlen("simd") || v59 && memcmp("simd", "invalid", v59) )
      {
        v60 = sub_9EE7C0(&v285, "'");
        v61 = sub_9EE7C0(v60, (char *)"simd");
        v62 = sub_9EE7C0(v61, "'");
        sub_9EE7C0(v62, " ");
      }
      v5 = a2 == 2;
      v63 = a2 == 3;
LABEL_65:
      v284 = v63 && a3 == 10;
      if ( v284 )
      {
        v64 = j__strlen("invalid");
        if ( j__strlen("arm") == v64 )
        {
          if ( !v64 )
          {
LABEL_114:
            if ( j__strlen("armeb") != v64 )
            {
LABEL_70:
              v65 = sub_9EE7C0(&v285, "'");
              v66 = sub_9EE7C0(v65, "armeb");
              v67 = sub_9EE7C0(v66, "'");
              sub_9EE7C0(v67, " ");
              v64 = j__strlen("invalid");
              if ( j__strlen("aarch64") != v64 )
                goto LABEL_118;
              if ( v64 )
              {
LABEL_72:
                if ( !memcmp("aarch64", "invalid", v64) )
                {
                  if ( v64 != j__strlen("aarch64_be") )
                    goto LABEL_74;
LABEL_120:
                  if ( !memcmp("aarch64_be", "invalid", v64) )
                  {
                    if ( v64 != j__strlen("aarch64_32") )
                      goto LABEL_122;
                    goto LABEL_76;
                  }
                  goto LABEL_74;
                }
LABEL_118:
                v106 = sub_9EE7C0(&v285, "'");
                v107 = sub_9EE7C0(v106, (char *)"aarch64");
                v108 = sub_9EE7C0(v107, "'");
                sub_9EE7C0(v108, " ");
                v64 = j__strlen("invalid");
                if ( j__strlen("aarch64_be") == v64 )
                {
                  if ( v64 )
                    goto LABEL_120;
LABEL_415:
                  if ( j__strlen("aarch64_32") )
                    goto LABEL_122;
                  goto LABEL_416;
                }
LABEL_74:
                v68 = sub_9EE7C0(&v285, "'");
                v69 = sub_9EE7C0(v68, "aarch64_be");
                v70 = sub_9EE7C0(v69, "'");
                sub_9EE7C0(v70, " ");
                v64 = j__strlen("invalid");
                if ( j__strlen("aarch64_32") != v64 )
                  goto LABEL_122;
                if ( v64 )
                {
LABEL_76:
                  if ( !memcmp("aarch64_32", "invalid", v64) )
                  {
                    if ( v64 != j__strlen("ppc") )
                      goto LABEL_78;
LABEL_124:
                    if ( !memcmp("ppc", "invalid", v64) )
                    {
                      if ( v64 != j__strlen("ppcle") )
                        goto LABEL_126;
                      goto LABEL_80;
                    }
                    goto LABEL_78;
                  }
LABEL_122:
                  v109 = sub_9EE7C0(&v285, "'");
                  v110 = sub_9EE7C0(v109, "aarch64_32");
                  v111 = sub_9EE7C0(v110, "'");
                  sub_9EE7C0(v111, " ");
                  v64 = j__strlen("invalid");
                  if ( j__strlen("ppc") == v64 )
                  {
                    if ( v64 )
                      goto LABEL_124;
LABEL_417:
                    if ( j__strlen("ppcle") )
                      goto LABEL_126;
                    goto LABEL_418;
                  }
LABEL_78:
                  v71 = sub_9EE7C0(&v285, "'");
                  v72 = sub_9EE7C0(v71, (char *)"ppc");
                  v73 = sub_9EE7C0(v72, "'");
                  sub_9EE7C0(v73, " ");
                  v64 = j__strlen("invalid");
                  if ( j__strlen("ppcle") != v64 )
                    goto LABEL_126;
                  if ( v64 )
                  {
LABEL_80:
                    if ( !memcmp("ppcle", "invalid", v64) )
                    {
                      if ( v64 != j__strlen("ppc64") )
                        goto LABEL_82;
LABEL_128:
                      if ( !memcmp("ppc64", "invalid", v64) )
                      {
                        if ( v64 != j__strlen("ppc64le") )
                          goto LABEL_130;
                        goto LABEL_84;
                      }
                      goto LABEL_82;
                    }
LABEL_126:
                    v112 = sub_9EE7C0(&v285, "'");
                    v113 = sub_9EE7C0(v112, "ppcle");
                    v114 = sub_9EE7C0(v113, "'");
                    sub_9EE7C0(v114, " ");
                    v64 = j__strlen("invalid");
                    if ( j__strlen("ppc64") == v64 )
                    {
                      if ( v64 )
                        goto LABEL_128;
LABEL_419:
                      if ( j__strlen("ppc64le") )
                        goto LABEL_130;
                      goto LABEL_420;
                    }
LABEL_82:
                    v74 = sub_9EE7C0(&v285, "'");
                    v75 = sub_9EE7C0(v74, "ppc64");
                    v76 = sub_9EE7C0(v75, "'");
                    sub_9EE7C0(v76, " ");
                    v64 = j__strlen("invalid");
                    if ( j__strlen("ppc64le") != v64 )
                      goto LABEL_130;
                    if ( v64 )
                    {
LABEL_84:
                      if ( !memcmp("ppc64le", "invalid", v64) )
                      {
                        if ( v64 != j__strlen("x86") )
                          goto LABEL_86;
LABEL_132:
                        if ( !memcmp("x86", "invalid", v64) )
                        {
                          if ( v64 != j__strlen("x86_64") )
                            goto LABEL_134;
                          goto LABEL_88;
                        }
                        goto LABEL_86;
                      }
LABEL_130:
                      v115 = sub_9EE7C0(&v285, "'");
                      v116 = sub_9EE7C0(v115, "ppc64le");
                      v117 = sub_9EE7C0(v116, "'");
                      sub_9EE7C0(v117, " ");
                      v64 = j__strlen("invalid");
                      if ( j__strlen("x86") == v64 )
                      {
                        if ( v64 )
                          goto LABEL_132;
LABEL_421:
                        if ( j__strlen("x86_64") )
                          goto LABEL_134;
                        goto LABEL_422;
                      }
LABEL_86:
                      v77 = sub_9EE7C0(&v285, "'");
                      v78 = sub_9EE7C0(v77, "x86");
                      v79 = sub_9EE7C0(v78, "'");
                      sub_9EE7C0(v79, " ");
                      v64 = j__strlen("invalid");
                      if ( j__strlen("x86_64") != v64 )
                        goto LABEL_134;
                      if ( v64 )
                      {
LABEL_88:
                        if ( !memcmp("x86_64", "invalid", v64) )
                        {
                          if ( v64 != j__strlen("amdgcn") )
                            goto LABEL_90;
LABEL_136:
                          if ( !memcmp("amdgcn", "invalid", v64) )
                          {
                            if ( v64 == j__strlen("nvptx") )
                            {
LABEL_92:
                              if ( !memcmp("nvptx", "invalid", v64) )
                              {
                                if ( v64 != j__strlen("nvptx64") )
                                {
LABEL_94:
                                  v84 = sub_9EE7C0(&v285, "'");
                                  v85 = sub_9EE7C0(v84, "nvptx64");
                                  v86 = sub_9EE7C0(v85, "'");
                                  sub_9EE7C0(v86, " ");
                                  v64 = j__strlen("invalid");
LABEL_95:
                                  if ( j__strlen("spirv64") == v64 && (!v64 || !memcmp("spirv64", "invalid", v64)) )
                                    goto LABEL_97;
LABEL_96:
                                  v87 = sub_9EE7C0(&v285, "'");
                                  v88 = sub_9EE7C0(v87, "spirv64");
                                  v89 = sub_9EE7C0(v88, "'");
                                  sub_9EE7C0(v89, " ");
LABEL_97:
                                  v37 = a2 == 4;
LABEL_98:
                                  if ( a3 == 15 && v5 )
                                  {
                                    v90 = j__strlen("invalid");
                                    v91 = j__strlen("<any, entirely target dependent>");
                                    if ( v91 != v90 || v91 && memcmp("<any, entirely target dependent>", "invalid", v91) )
                                    {
                                      v92 = sub_9EE7C0(&v285, "'");
                                      v93 = sub_9EE7C0(v92, "<any, entirely target dependent>");
                                      v94 = sub_9EE7C0(v93, "'");
                                      sub_9EE7C0(v94, " ");
                                    }
                                    goto LABEL_102;
                                  }
                                  v281 = v284;
                                  goto LABEL_264;
                                }
                                goto LABEL_140;
                              }
                              goto LABEL_138;
                            }
                            goto LABEL_138;
                          }
                          goto LABEL_90;
                        }
LABEL_134:
                        v118 = sub_9EE7C0(&v285, "'");
                        v119 = sub_9EE7C0(v118, "x86_64");
                        v120 = sub_9EE7C0(v119, "'");
                        sub_9EE7C0(v120, " ");
                        v64 = j__strlen("invalid");
                        if ( j__strlen("amdgcn") == v64 )
                        {
                          if ( v64 )
                            goto LABEL_136;
LABEL_423:
                          if ( !j__strlen("nvptx") )
                            goto LABEL_424;
                          goto LABEL_138;
                        }
LABEL_90:
                        v80 = sub_9EE7C0(&v285, "'");
                        v81 = sub_9EE7C0(v80, "amdgcn");
                        v82 = sub_9EE7C0(v81, "'");
                        sub_9EE7C0(v82, " ");
                        v64 = j__strlen("invalid");
                        v83 = j__strlen("nvptx");
                        if ( v83 == v64 )
                        {
                          if ( v83 )
                            goto LABEL_92;
LABEL_424:
                          if ( j__strlen("nvptx64") )
                            goto LABEL_94;
                          goto LABEL_425;
                        }
LABEL_138:
                        v121 = sub_9EE7C0(&v285, "'");
                        v122 = sub_9EE7C0(v121, "nvptx");
                        v123 = sub_9EE7C0(v122, "'");
                        sub_9EE7C0(v123, " ");
                        v64 = j__strlen("invalid");
                        if ( j__strlen("nvptx64") != v64 )
                          goto LABEL_94;
                        if ( v64 )
                        {
LABEL_140:
                          if ( !memcmp("nvptx64", "invalid", v64) )
                            goto LABEL_95;
                          goto LABEL_94;
                        }
LABEL_425:
                        if ( !j__strlen("spirv64") )
                          goto LABEL_97;
                        goto LABEL_96;
                      }
LABEL_422:
                      if ( !j__strlen("amdgcn") )
                        goto LABEL_423;
                      goto LABEL_90;
                    }
LABEL_420:
                    if ( !j__strlen("x86") )
                      goto LABEL_421;
                    goto LABEL_86;
                  }
LABEL_418:
                  if ( !j__strlen("ppc64") )
                    goto LABEL_419;
                  goto LABEL_82;
                }
LABEL_416:
                if ( !j__strlen("ppc") )
                  goto LABEL_417;
                goto LABEL_78;
              }
LABEL_414:
              if ( !j__strlen("aarch64_be") )
                goto LABEL_415;
              goto LABEL_74;
            }
            if ( !v64 )
            {
              if ( j__strlen("aarch64") )
                goto LABEL_118;
              goto LABEL_414;
            }
LABEL_116:
            if ( !memcmp("armeb", "invalid", v64) )
            {
              if ( v64 != j__strlen("aarch64") )
                goto LABEL_118;
              goto LABEL_72;
            }
            goto LABEL_70;
          }
          if ( !memcmp("arm", "invalid", v64) )
          {
            if ( v64 != j__strlen("armeb") )
              goto LABEL_70;
            goto LABEL_116;
          }
        }
        v103 = sub_9EE7C0(&v285, "'");
        v104 = sub_9EE7C0(v103, (char *)"arm");
        v105 = sub_9EE7C0(v104, "'");
        sub_9EE7C0(v105, " ");
        v64 = j__strlen("invalid");
        goto LABEL_114;
      }
      v283 = v5;
      v5 = v281;
      v281 = v63;
LABEL_287:
      v36 = a2 == 4;
      v37 = a2 == 4 && a3 == 11;
      if ( !v37 )
        goto LABEL_40;
      v214 = j__strlen("invalid");
      if ( j__strlen("amd") == v214 )
      {
        if ( !v214 )
        {
LABEL_329:
          if ( j__strlen("arm") != v214 )
          {
LABEL_292:
            v215 = sub_9EE7C0(&v285, "'");
            v216 = sub_9EE7C0(v215, (char *)"arm");
            v217 = sub_9EE7C0(v216, "'");
            sub_9EE7C0(v217, " ");
            v214 = j__strlen("invalid");
            if ( j__strlen("bsc") == v214 )
            {
              if ( v214 )
                goto LABEL_294;
LABEL_252:
              if ( j__strlen("cray") )
                goto LABEL_296;
              goto LABEL_253;
            }
LABEL_333:
            v245 = sub_9EE7C0(&v285, "'");
            v246 = sub_9EE7C0(v245, "bsc");
            v247 = sub_9EE7C0(v246, "'");
            sub_9EE7C0(v247, " ");
            v214 = j__strlen("invalid");
            v248 = j__strlen("cray");
            if ( v248 != v214 )
            {
LABEL_296:
              v218 = sub_9EE7C0(&v285, "'");
              v219 = sub_9EE7C0(v218, "cray");
              v220 = sub_9EE7C0(v219, "'");
              sub_9EE7C0(v220, " ");
              v214 = j__strlen("invalid");
              if ( j__strlen("fujitsu") == v214 )
              {
                if ( v214 )
                  goto LABEL_298;
LABEL_254:
                if ( j__strlen("gnu") )
                  goto LABEL_300;
                goto LABEL_255;
              }
LABEL_337:
              v249 = sub_9EE7C0(&v285, "'");
              v250 = sub_9EE7C0(v249, "fujitsu");
              v251 = sub_9EE7C0(v250, "'");
              sub_9EE7C0(v251, " ");
              v214 = j__strlen("invalid");
              v252 = j__strlen("gnu");
              if ( v252 != v214 )
              {
LABEL_300:
                v221 = sub_9EE7C0(&v285, "'");
                v222 = sub_9EE7C0(v221, "gnu");
                v223 = sub_9EE7C0(v222, "'");
                sub_9EE7C0(v223, " ");
                v214 = j__strlen("invalid");
                if ( j__strlen("ibm") == v214 )
                {
                  if ( v214 )
                    goto LABEL_302;
LABEL_256:
                  if ( j__strlen("intel") )
                    goto LABEL_304;
                  goto LABEL_257;
                }
LABEL_341:
                v253 = sub_9EE7C0(&v285, "'");
                v254 = sub_9EE7C0(v253, "ibm");
                v255 = sub_9EE7C0(v254, "'");
                sub_9EE7C0(v255, " ");
                v214 = j__strlen("invalid");
                v256 = j__strlen("intel");
                if ( v256 != v214 )
                {
LABEL_304:
                  v224 = sub_9EE7C0(&v285, "'");
                  v225 = sub_9EE7C0(v224, "intel");
                  v226 = sub_9EE7C0(v225, "'");
                  sub_9EE7C0(v226, " ");
                  v214 = j__strlen("invalid");
                  if ( j__strlen("llvm") == v214 )
                  {
                    if ( v214 )
                      goto LABEL_306;
LABEL_258:
                    if ( j__strlen("nec") )
                      goto LABEL_308;
                    goto LABEL_259;
                  }
LABEL_345:
                  v257 = sub_9EE7C0(&v285, "'");
                  v258 = sub_9EE7C0(v257, "llvm");
                  v259 = sub_9EE7C0(v258, "'");
                  sub_9EE7C0(v259, " ");
                  v214 = j__strlen("invalid");
                  v260 = j__strlen("nec");
                  if ( v260 != v214 )
                  {
LABEL_308:
                    v227 = sub_9EE7C0(&v285, "'");
                    v228 = sub_9EE7C0(v227, "nec");
                    v229 = sub_9EE7C0(v228, "'");
                    sub_9EE7C0(v229, " ");
                    v214 = j__strlen("invalid");
                    if ( j__strlen("nvidia") == v214 )
                    {
                      if ( v214 )
                        goto LABEL_310;
LABEL_260:
                      if ( j__strlen("pgi") )
                        goto LABEL_312;
                      goto LABEL_261;
                    }
LABEL_349:
                    v261 = sub_9EE7C0(&v285, "'");
                    v262 = sub_9EE7C0(v261, "nvidia");
                    v263 = sub_9EE7C0(v262, "'");
                    sub_9EE7C0(v263, " ");
                    v214 = j__strlen("invalid");
                    v264 = j__strlen("pgi");
                    if ( v264 != v214 )
                    {
LABEL_312:
                      v230 = sub_9EE7C0(&v285, "'");
                      v231 = sub_9EE7C0(v230, "pgi");
                      v232 = sub_9EE7C0(v231, "'");
                      sub_9EE7C0(v232, " ");
                      v214 = j__strlen("invalid");
                      if ( j__strlen("ti") != v214 )
                        goto LABEL_313;
                      if ( v214 )
                      {
LABEL_393:
                        if ( !memcmp("ti", "invalid", v214) )
                          goto LABEL_314;
                        goto LABEL_313;
                      }
LABEL_262:
                      if ( j__strlen("unknown") )
                      {
LABEL_263:
                        v190 = sub_9EE7C0(&v285, "'");
                        v191 = sub_9EE7C0(v190, "unknown");
                        v192 = sub_9EE7C0(v191, "'");
                        sub_9EE7C0(v192, " ");
                      }
LABEL_264:
                      if ( a3 == 16 && v281 )
                      {
                        v193 = j__strlen("invalid");
                        v194 = j__strlen("<any, entirely target dependent>");
                        if ( v194 != v193 || v194 && memcmp("<any, entirely target dependent>", "invalid", v194) )
                        {
                          v195 = sub_9EE7C0(&v285, "'");
                          v196 = sub_9EE7C0(v195, "<any, entirely target dependent>");
                          v197 = sub_9EE7C0(v196, "'");
                          sub_9EE7C0(v197, " ");
                        }
LABEL_268:
                        if ( a3 == 21 && v37 )
                        {
                          v198 = j__strlen("invalid");
                          v199 = j__strlen("atomic_default_mem_order");
                          if ( v199 != v198 || v199 && memcmp("atomic_default_mem_order", "invalid", v199) )
                          {
                            v53 = sub_9EE7C0(&v285, "'");
                            v54 = "atomic_default_mem_order";
                            goto LABEL_106;
                          }
                        }
                        goto LABEL_107;
                      }
                      goto LABEL_53;
                    }
                    if ( v264 )
                    {
LABEL_351:
                      if ( !memcmp("pgi", "invalid", v214) )
                      {
                        if ( v214 != j__strlen("ti") )
                          goto LABEL_313;
                        goto LABEL_393;
                      }
                      goto LABEL_312;
                    }
LABEL_261:
                    if ( j__strlen("ti") )
                    {
LABEL_313:
                      v233 = sub_9EE7C0(&v285, "'");
                      v234 = sub_9EE7C0(v233, "ti");
                      v235 = sub_9EE7C0(v234, "'");
                      sub_9EE7C0(v235, " ");
                      v214 = j__strlen("invalid");
LABEL_314:
                      if ( j__strlen("unknown") != v214 || v214 && memcmp("unknown", "invalid", v214) )
                        goto LABEL_263;
                      goto LABEL_264;
                    }
                    goto LABEL_262;
                  }
                  if ( v260 )
                  {
LABEL_347:
                    if ( !memcmp("nec", "invalid", v214) )
                    {
                      if ( v214 == j__strlen("nvidia") )
                      {
LABEL_310:
                        if ( !memcmp("nvidia", "invalid", v214) )
                        {
                          if ( v214 != j__strlen("pgi") )
                            goto LABEL_312;
                          goto LABEL_351;
                        }
                        goto LABEL_349;
                      }
                      goto LABEL_349;
                    }
                    goto LABEL_308;
                  }
LABEL_259:
                  if ( !j__strlen("nvidia") )
                    goto LABEL_260;
                  goto LABEL_349;
                }
                if ( v256 )
                {
LABEL_343:
                  if ( !memcmp("intel", "invalid", v214) )
                  {
                    if ( v214 == j__strlen("llvm") )
                    {
LABEL_306:
                      if ( !memcmp("llvm", "invalid", v214) )
                      {
                        if ( v214 != j__strlen("nec") )
                          goto LABEL_308;
                        goto LABEL_347;
                      }
                      goto LABEL_345;
                    }
                    goto LABEL_345;
                  }
                  goto LABEL_304;
                }
LABEL_257:
                if ( !j__strlen("llvm") )
                  goto LABEL_258;
                goto LABEL_345;
              }
              if ( v252 )
              {
LABEL_339:
                if ( !memcmp("gnu", "invalid", v214) )
                {
                  if ( v214 == j__strlen("ibm") )
                  {
LABEL_302:
                    if ( !memcmp("ibm", "invalid", v214) )
                    {
                      if ( v214 != j__strlen("intel") )
                        goto LABEL_304;
                      goto LABEL_343;
                    }
                    goto LABEL_341;
                  }
                  goto LABEL_341;
                }
                goto LABEL_300;
              }
LABEL_255:
              if ( !j__strlen("ibm") )
                goto LABEL_256;
              goto LABEL_341;
            }
            if ( v248 )
            {
LABEL_335:
              if ( !memcmp("cray", "invalid", v214) )
              {
                if ( v214 == j__strlen("fujitsu") )
                {
LABEL_298:
                  if ( !memcmp("fujitsu", "invalid", v214) )
                  {
                    if ( v214 != j__strlen("gnu") )
                      goto LABEL_300;
                    goto LABEL_339;
                  }
                  goto LABEL_337;
                }
                goto LABEL_337;
              }
              goto LABEL_296;
            }
LABEL_253:
            if ( !j__strlen("fujitsu") )
              goto LABEL_254;
            goto LABEL_337;
          }
          if ( !v214 )
          {
            if ( !j__strlen("bsc") )
              goto LABEL_252;
            goto LABEL_333;
          }
LABEL_331:
          if ( !memcmp("arm", "invalid", v214) )
          {
            if ( v214 == j__strlen("bsc") )
            {
LABEL_294:
              if ( !memcmp("bsc", "invalid", v214) )
              {
                if ( v214 != j__strlen("cray") )
                  goto LABEL_296;
                goto LABEL_335;
              }
              goto LABEL_333;
            }
            goto LABEL_333;
          }
          goto LABEL_292;
        }
        if ( !memcmp("amd", "invalid", v214) )
        {
          if ( v214 != j__strlen("arm") )
            goto LABEL_292;
          goto LABEL_331;
        }
      }
      v242 = sub_9EE7C0(&v285, "'");
      v243 = sub_9EE7C0(v242, "amd");
      v244 = sub_9EE7C0(v243, "'");
      sub_9EE7C0(v244, " ");
      v214 = j__strlen("invalid");
      goto LABEL_329;
    }
    v10 = a2 == 2;
    v283 = a2 == 2 && a3 == 6;
    if ( !v283 )
      goto LABEL_7;
    v200 = j__strlen("invalid");
    if ( j__strlen("host") == v200 )
    {
      if ( !v200 )
      {
LABEL_319:
        if ( j__strlen("nohost") != v200 )
        {
LABEL_279:
          v201 = sub_9EE7C0(&v285, "'");
          v202 = sub_9EE7C0(v201, "nohost");
          v203 = sub_9EE7C0(v202, "'");
          sub_9EE7C0(v203, " ");
          v200 = j__strlen("invalid");
          v204 = j__strlen("cpu");
          if ( v204 != v200 )
            goto LABEL_323;
          if ( v204 )
          {
LABEL_281:
            if ( !memcmp("cpu", "invalid", v200) )
            {
              if ( v200 != j__strlen("gpu") )
                goto LABEL_283;
LABEL_325:
              if ( !memcmp("gpu", "invalid", v200) )
              {
                if ( v200 != j__strlen("fpga") )
                  goto LABEL_284;
                goto LABEL_390;
              }
              goto LABEL_283;
            }
LABEL_323:
            v239 = sub_9EE7C0(&v285, "'");
            v240 = sub_9EE7C0(v239, "cpu");
            v241 = sub_9EE7C0(v240, "'");
            sub_9EE7C0(v241, " ");
            v200 = j__strlen("invalid");
            if ( j__strlen("gpu") == v200 )
            {
              if ( v200 )
                goto LABEL_325;
LABEL_434:
              if ( j__strlen("fpga") )
                goto LABEL_284;
              goto LABEL_435;
            }
LABEL_283:
            v205 = sub_9EE7C0(&v285, "'");
            v206 = sub_9EE7C0(v205, (char *)"gpu");
            v207 = sub_9EE7C0(v206, "'");
            sub_9EE7C0(v207, " ");
            v200 = j__strlen("invalid");
            if ( j__strlen("fpga") != v200 )
            {
LABEL_284:
              v208 = sub_9EE7C0(&v285, "'");
              v209 = sub_9EE7C0(v208, "fpga");
              v210 = sub_9EE7C0(v209, "'");
              sub_9EE7C0(v210, " ");
              v200 = j__strlen("invalid");
LABEL_285:
              if ( j__strlen("any") == v200 && (!v200 || !memcmp("any", "invalid", v200)) )
                goto LABEL_287;
LABEL_286:
              v211 = sub_9EE7C0(&v285, "'");
              v212 = sub_9EE7C0(v211, (char *)"any");
              v213 = sub_9EE7C0(v212, "'");
              sub_9EE7C0(v213, " ");
              goto LABEL_287;
            }
            if ( v200 )
            {
LABEL_390:
              if ( !memcmp("fpga", "invalid", v200) )
                goto LABEL_285;
              goto LABEL_284;
            }
LABEL_435:
            if ( !j__strlen("any") )
              goto LABEL_287;
            goto LABEL_286;
          }
LABEL_433:
          if ( !j__strlen("gpu") )
            goto LABEL_434;
          goto LABEL_283;
        }
        if ( !v200 )
        {
          if ( j__strlen("cpu") )
            goto LABEL_323;
          goto LABEL_433;
        }
LABEL_321:
        if ( !memcmp("nohost", "invalid", v200) )
        {
          if ( v200 != j__strlen("cpu") )
            goto LABEL_323;
          goto LABEL_281;
        }
        goto LABEL_279;
      }
      if ( !memcmp("host", "invalid", v200) )
      {
        if ( v200 != j__strlen("nohost") )
          goto LABEL_279;
        goto LABEL_321;
      }
    }
    v236 = sub_9EE7C0(&v285, "'");
    v237 = sub_9EE7C0(v236, "host");
    v238 = sub_9EE7C0(v237, "'");
    sub_9EE7C0(v238, " ");
    v200 = j__strlen("invalid");
    goto LABEL_319;
  }
  v6 = j__strlen("invalid");
  if ( v6 != j__strlen("teams") || v6 && memcmp("teams", "invalid", v6) )
  {
    v7 = sub_9EE7C0(&v285, "'");
    v8 = sub_9EE7C0(v7, "teams");
    v9 = sub_9EE7C0(v8, "'");
    sub_9EE7C0(v9, " ");
  }
  v10 = a2 == 2;
LABEL_7:
  v283 = v10 && a3 == 7;
  if ( v283 )
  {
    v11 = j__strlen("invalid");
    if ( j__strlen("arm") == v11 )
    {
      if ( !v11 )
      {
LABEL_143:
        if ( j__strlen("armeb") != v11 )
        {
LABEL_12:
          v12 = sub_9EE7C0(&v285, "'");
          v13 = sub_9EE7C0(v12, "armeb");
          v14 = sub_9EE7C0(v13, "'");
          sub_9EE7C0(v14, " ");
          v11 = j__strlen("invalid");
          if ( j__strlen("aarch64") != v11 )
            goto LABEL_147;
          if ( v11 )
          {
LABEL_14:
            if ( !memcmp("aarch64", "invalid", v11) )
            {
              if ( v11 != j__strlen("aarch64_be") )
                goto LABEL_16;
LABEL_149:
              if ( !memcmp("aarch64_be", "invalid", v11) )
              {
                if ( v11 != j__strlen("aarch64_32") )
                  goto LABEL_151;
                goto LABEL_18;
              }
              goto LABEL_16;
            }
LABEL_147:
            v127 = sub_9EE7C0(&v285, "'");
            v128 = sub_9EE7C0(v127, (char *)"aarch64");
            v129 = sub_9EE7C0(v128, "'");
            sub_9EE7C0(v129, " ");
            v11 = j__strlen("invalid");
            if ( j__strlen("aarch64_be") == v11 )
            {
              if ( v11 )
                goto LABEL_149;
LABEL_401:
              if ( j__strlen("aarch64_32") )
                goto LABEL_151;
              goto LABEL_402;
            }
LABEL_16:
            v15 = sub_9EE7C0(&v285, "'");
            v16 = sub_9EE7C0(v15, "aarch64_be");
            v17 = sub_9EE7C0(v16, "'");
            sub_9EE7C0(v17, " ");
            v11 = j__strlen("invalid");
            if ( j__strlen("aarch64_32") != v11 )
              goto LABEL_151;
            if ( v11 )
            {
LABEL_18:
              if ( !memcmp("aarch64_32", "invalid", v11) )
              {
                if ( v11 != j__strlen("ppc") )
                  goto LABEL_20;
LABEL_153:
                if ( !memcmp("ppc", "invalid", v11) )
                {
                  if ( v11 != j__strlen("ppcle") )
                    goto LABEL_155;
                  goto LABEL_22;
                }
                goto LABEL_20;
              }
LABEL_151:
              v130 = sub_9EE7C0(&v285, "'");
              v131 = sub_9EE7C0(v130, "aarch64_32");
              v132 = sub_9EE7C0(v131, "'");
              sub_9EE7C0(v132, " ");
              v11 = j__strlen("invalid");
              if ( j__strlen("ppc") == v11 )
              {
                if ( v11 )
                  goto LABEL_153;
LABEL_403:
                if ( j__strlen("ppcle") )
                  goto LABEL_155;
                goto LABEL_404;
              }
LABEL_20:
              v18 = sub_9EE7C0(&v285, "'");
              v19 = sub_9EE7C0(v18, (char *)"ppc");
              v20 = sub_9EE7C0(v19, "'");
              sub_9EE7C0(v20, " ");
              v11 = j__strlen("invalid");
              if ( j__strlen("ppcle") != v11 )
                goto LABEL_155;
              if ( v11 )
              {
LABEL_22:
                if ( !memcmp("ppcle", "invalid", v11) )
                {
                  if ( v11 != j__strlen("ppc64") )
                    goto LABEL_24;
LABEL_157:
                  if ( !memcmp("ppc64", "invalid", v11) )
                  {
                    if ( v11 != j__strlen("ppc64le") )
                      goto LABEL_159;
                    goto LABEL_26;
                  }
                  goto LABEL_24;
                }
LABEL_155:
                v133 = sub_9EE7C0(&v285, "'");
                v134 = sub_9EE7C0(v133, "ppcle");
                v135 = sub_9EE7C0(v134, "'");
                sub_9EE7C0(v135, " ");
                v11 = j__strlen("invalid");
                if ( j__strlen("ppc64") == v11 )
                {
                  if ( v11 )
                    goto LABEL_157;
LABEL_405:
                  if ( j__strlen("ppc64le") )
                    goto LABEL_159;
                  goto LABEL_406;
                }
LABEL_24:
                v21 = sub_9EE7C0(&v285, "'");
                v22 = sub_9EE7C0(v21, "ppc64");
                v23 = sub_9EE7C0(v22, "'");
                sub_9EE7C0(v23, " ");
                v11 = j__strlen("invalid");
                if ( j__strlen("ppc64le") != v11 )
                  goto LABEL_159;
                if ( v11 )
                {
LABEL_26:
                  if ( !memcmp("ppc64le", "invalid", v11) )
                  {
                    if ( v11 != j__strlen("x86") )
                      goto LABEL_28;
LABEL_161:
                    if ( !memcmp("x86", "invalid", v11) )
                    {
                      if ( v11 != j__strlen("x86_64") )
                        goto LABEL_163;
                      goto LABEL_30;
                    }
                    goto LABEL_28;
                  }
LABEL_159:
                  v136 = sub_9EE7C0(&v285, "'");
                  v137 = sub_9EE7C0(v136, "ppc64le");
                  v138 = sub_9EE7C0(v137, "'");
                  sub_9EE7C0(v138, " ");
                  v11 = j__strlen("invalid");
                  if ( j__strlen("x86") == v11 )
                  {
                    if ( v11 )
                      goto LABEL_161;
LABEL_407:
                    if ( j__strlen("x86_64") )
                      goto LABEL_163;
                    goto LABEL_408;
                  }
LABEL_28:
                  v24 = sub_9EE7C0(&v285, "'");
                  v25 = sub_9EE7C0(v24, "x86");
                  v26 = sub_9EE7C0(v25, "'");
                  sub_9EE7C0(v26, " ");
                  v11 = j__strlen("invalid");
                  if ( j__strlen("x86_64") != v11 )
                    goto LABEL_163;
                  if ( v11 )
                  {
LABEL_30:
                    if ( !memcmp("x86_64", "invalid", v11) )
                    {
                      if ( v11 != j__strlen("amdgcn") )
                        goto LABEL_32;
LABEL_165:
                      if ( !memcmp("amdgcn", "invalid", v11) )
                      {
                        if ( v11 == j__strlen("nvptx") )
                        {
LABEL_34:
                          if ( !memcmp("nvptx", "invalid", v11) )
                          {
                            if ( v11 != j__strlen("nvptx64") )
                            {
LABEL_36:
                              v30 = sub_9EE7C0(&v285, "'");
                              v31 = sub_9EE7C0(v30, "nvptx64");
                              v32 = sub_9EE7C0(v31, "'");
                              sub_9EE7C0(v32, " ");
                              v11 = j__strlen("invalid");
LABEL_37:
                              if ( j__strlen("spirv64") == v11 && (!v11 || !memcmp("spirv64", "invalid", v11)) )
                                goto LABEL_39;
LABEL_38:
                              v33 = sub_9EE7C0(&v285, "'");
                              v34 = sub_9EE7C0(v33, "spirv64");
                              v35 = sub_9EE7C0(v34, "'");
                              sub_9EE7C0(v35, " ");
LABEL_39:
                              v281 = a2 == 3;
                              v36 = a2 == 4;
LABEL_40:
                              v37 = v36 && a3 == 12;
                              if ( v37 )
                              {
                                v38 = j__strlen("invalid");
                                if ( j__strlen("match_all") == v38 )
                                {
                                  if ( !v38 )
                                  {
LABEL_172:
                                    if ( j__strlen("match_any") != v38 )
                                    {
LABEL_45:
                                      v39 = sub_9EE7C0(&v285, "'");
                                      v40 = sub_9EE7C0(v39, "match_any");
                                      v41 = sub_9EE7C0(v40, "'");
                                      sub_9EE7C0(v41, " ");
                                      v38 = j__strlen("invalid");
                                      if ( j__strlen("match_none") != v38 )
                                        goto LABEL_176;
                                      if ( v38 )
                                      {
LABEL_47:
                                        if ( !memcmp("match_none", "invalid", v38) )
                                        {
                                          if ( v38 != j__strlen("disable_implicit_base") )
                                            goto LABEL_49;
LABEL_178:
                                          if ( !memcmp("disable_implicit_base", "invalid", v38) )
                                          {
                                            if ( v38 != j__strlen("allow_templates") )
                                              goto LABEL_50;
                                            goto LABEL_387;
                                          }
                                          goto LABEL_49;
                                        }
LABEL_176:
                                        v148 = sub_9EE7C0(&v285, "'");
                                        v149 = sub_9EE7C0(v148, "match_none");
                                        v150 = sub_9EE7C0(v149, "'");
                                        sub_9EE7C0(v150, " ");
                                        v38 = j__strlen("invalid");
                                        v151 = j__strlen("disable_implicit_base");
                                        if ( v151 == v38 )
                                        {
                                          if ( v151 )
                                            goto LABEL_178;
LABEL_429:
                                          if ( j__strlen("allow_templates") )
                                            goto LABEL_50;
                                          goto LABEL_430;
                                        }
LABEL_49:
                                        v42 = sub_9EE7C0(&v285, "'");
                                        v43 = sub_9EE7C0(v42, "disable_implicit_base");
                                        v44 = sub_9EE7C0(v43, "'");
                                        sub_9EE7C0(v44, " ");
                                        v38 = j__strlen("invalid");
                                        if ( j__strlen("allow_templates") != v38 )
                                        {
LABEL_50:
                                          v45 = sub_9EE7C0(&v285, "'");
                                          v46 = sub_9EE7C0(v45, "allow_templates");
                                          v47 = sub_9EE7C0(v46, "'");
                                          sub_9EE7C0(v47, " ");
                                          v38 = j__strlen("invalid");
LABEL_51:
                                          if ( j__strlen("bind_to_declaration") == v38
                                            && (!v38 || !memcmp("bind_to_declaration", "invalid", v38)) )
                                          {
LABEL_53:
                                            if ( a3 == 17 && v37 )
                                            {
                                              v51 = j__strlen("invalid");
                                              v52 = j__strlen("unified_address");
                                              if ( v52 != v51 || v52 && memcmp("unified_address", "invalid", v52) )
                                              {
                                                v53 = sub_9EE7C0(&v285, "'");
                                                v54 = "unified_address";
LABEL_106:
                                                v97 = sub_9EE7C0(v53, v54);
                                                v98 = sub_9EE7C0(v97, "'");
                                                sub_9EE7C0(v98, " ");
                                                goto LABEL_107;
                                              }
                                              goto LABEL_107;
                                            }
                                            goto LABEL_220;
                                          }
LABEL_52:
                                          v48 = sub_9EE7C0(&v285, "'");
                                          v49 = sub_9EE7C0(v48, "bind_to_declaration");
                                          v50 = sub_9EE7C0(v49, "'");
                                          sub_9EE7C0(v50, " ");
                                          goto LABEL_53;
                                        }
                                        if ( v38 )
                                        {
LABEL_387:
                                          if ( !memcmp("allow_templates", "invalid", v38) )
                                            goto LABEL_51;
                                          goto LABEL_50;
                                        }
LABEL_430:
                                        if ( !j__strlen("bind_to_declaration") )
                                          goto LABEL_53;
                                        goto LABEL_52;
                                      }
LABEL_428:
                                      if ( !j__strlen("disable_implicit_base") )
                                        goto LABEL_429;
                                      goto LABEL_49;
                                    }
                                    if ( !v38 )
                                    {
                                      if ( j__strlen("match_none") )
                                        goto LABEL_176;
                                      goto LABEL_428;
                                    }
LABEL_174:
                                    if ( !memcmp("match_any", "invalid", v38) )
                                    {
                                      if ( v38 != j__strlen("match_none") )
                                        goto LABEL_176;
                                      goto LABEL_47;
                                    }
                                    goto LABEL_45;
                                  }
                                  if ( !memcmp("match_all", "invalid", v38) )
                                  {
                                    if ( v38 != j__strlen("match_any") )
                                      goto LABEL_45;
                                    goto LABEL_174;
                                  }
                                }
                                v145 = sub_9EE7C0(&v285, "'");
                                v146 = sub_9EE7C0(v145, "match_all");
                                v147 = sub_9EE7C0(v146, "'");
                                sub_9EE7C0(v147, " ");
                                v38 = j__strlen("invalid");
                                goto LABEL_172;
                              }
                              v282 = v5;
                              v37 = v36;
                              v5 = v283;
                              goto LABEL_208;
                            }
                            goto LABEL_169;
                          }
                          goto LABEL_167;
                        }
                        goto LABEL_167;
                      }
                      goto LABEL_32;
                    }
LABEL_163:
                    v139 = sub_9EE7C0(&v285, "'");
                    v140 = sub_9EE7C0(v139, "x86_64");
                    v141 = sub_9EE7C0(v140, "'");
                    sub_9EE7C0(v141, " ");
                    v11 = j__strlen("invalid");
                    if ( j__strlen("amdgcn") == v11 )
                    {
                      if ( v11 )
                        goto LABEL_165;
LABEL_409:
                      if ( !j__strlen("nvptx") )
                        goto LABEL_410;
                      goto LABEL_167;
                    }
LABEL_32:
                    v27 = sub_9EE7C0(&v285, "'");
                    v28 = sub_9EE7C0(v27, "amdgcn");
                    v29 = sub_9EE7C0(v28, "'");
                    sub_9EE7C0(v29, " ");
                    v11 = j__strlen("invalid");
                    if ( j__strlen("nvptx") == v11 )
                    {
                      if ( v11 )
                        goto LABEL_34;
LABEL_410:
                      if ( j__strlen("nvptx64") )
                        goto LABEL_36;
                      goto LABEL_411;
                    }
LABEL_167:
                    v142 = sub_9EE7C0(&v285, "'");
                    v143 = sub_9EE7C0(v142, "nvptx");
                    v144 = sub_9EE7C0(v143, "'");
                    sub_9EE7C0(v144, " ");
                    v11 = j__strlen("invalid");
                    if ( j__strlen("nvptx64") != v11 )
                      goto LABEL_36;
                    if ( v11 )
                    {
LABEL_169:
                      if ( !memcmp("nvptx64", "invalid", v11) )
                        goto LABEL_37;
                      goto LABEL_36;
                    }
LABEL_411:
                    if ( !j__strlen("spirv64") )
                      goto LABEL_39;
                    goto LABEL_38;
                  }
LABEL_408:
                  if ( !j__strlen("amdgcn") )
                    goto LABEL_409;
                  goto LABEL_32;
                }
LABEL_406:
                if ( !j__strlen("x86") )
                  goto LABEL_407;
                goto LABEL_28;
              }
LABEL_404:
              if ( !j__strlen("ppc64") )
                goto LABEL_405;
              goto LABEL_24;
            }
LABEL_402:
            if ( !j__strlen("ppc") )
              goto LABEL_403;
            goto LABEL_20;
          }
LABEL_400:
          if ( !j__strlen("aarch64_be") )
            goto LABEL_401;
          goto LABEL_16;
        }
        if ( !v11 )
        {
          if ( j__strlen("aarch64") )
            goto LABEL_147;
          goto LABEL_400;
        }
LABEL_145:
        if ( !memcmp("armeb", "invalid", v11) )
        {
          if ( v11 != j__strlen("aarch64") )
            goto LABEL_147;
          goto LABEL_14;
        }
        goto LABEL_12;
      }
      if ( !memcmp("arm", "invalid", v11) )
      {
        if ( v11 != j__strlen("armeb") )
          goto LABEL_12;
        goto LABEL_145;
      }
    }
    v124 = sub_9EE7C0(&v285, "'");
    v125 = sub_9EE7C0(v124, (char *)"arm");
    v126 = sub_9EE7C0(v125, "'");
    sub_9EE7C0(v126, " ");
    v11 = j__strlen("invalid");
    goto LABEL_143;
  }
  v282 = v5;
  v5 = v10;
LABEL_190:
  v63 = a2 == 3;
  v281 = a2 == 3 && a3 == 8;
  if ( !v281 )
  {
LABEL_232:
    v284 = v63 && a3 == 9;
    if ( v284 )
    {
      v178 = j__strlen("invalid");
      v179 = j__strlen("number");
      if ( v179 != v178 || v179 && memcmp("number", "invalid", v179) )
      {
        v180 = sub_9EE7C0(&v285, "'");
        v181 = sub_9EE7C0(v180, "number");
        v182 = sub_9EE7C0(v181, "'");
        sub_9EE7C0(v182, " ");
      }
      v37 = a2 == 4;
      goto LABEL_238;
    }
    v281 = v282;
    goto LABEL_65;
  }
  v158 = j__strlen("invalid");
  if ( j__strlen("host") == v158 )
  {
    if ( !v158 )
      goto LABEL_443;
    if ( !memcmp("host", "invalid", v158) )
    {
      if ( v158 == j__strlen("nohost") )
        goto LABEL_195;
LABEL_455:
      v278 = sub_9EE7C0(&v285, "'");
      v279 = sub_9EE7C0(v278, "nohost");
      v280 = sub_9EE7C0(v279, "'");
      sub_9EE7C0(v280, " ");
      v158 = j__strlen("invalid");
      if ( j__strlen("cpu") != v158 )
        goto LABEL_452;
      if ( v158 )
      {
LABEL_197:
        if ( !memcmp("cpu", "invalid", v158) )
        {
          if ( v158 == j__strlen("gpu") )
            goto LABEL_199;
LABEL_449:
          v272 = sub_9EE7C0(&v285, "'");
          v273 = sub_9EE7C0(v272, (char *)"gpu");
          v274 = sub_9EE7C0(v273, "'");
          sub_9EE7C0(v274, " ");
          v158 = j__strlen("invalid");
          if ( j__strlen("fpga") != v158 )
            goto LABEL_202;
          if ( v158 )
          {
LABEL_201:
            if ( !memcmp("fpga", "invalid", v158) )
              goto LABEL_203;
            goto LABEL_202;
          }
          goto LABEL_203;
        }
        goto LABEL_452;
      }
      goto LABEL_446;
    }
  }
  v269 = sub_9EE7C0(&v285, "'");
  v270 = sub_9EE7C0(v269, "host");
  v271 = sub_9EE7C0(v270, "'");
  sub_9EE7C0(v271, " ");
  v158 = j__strlen("invalid");
LABEL_443:
  if ( j__strlen("nohost") != v158 )
    goto LABEL_455;
  if ( v158 )
  {
LABEL_195:
    if ( !memcmp("nohost", "invalid", v158) )
    {
      if ( v158 == j__strlen("cpu") )
        goto LABEL_197;
LABEL_452:
      v275 = sub_9EE7C0(&v285, "'");
      v276 = sub_9EE7C0(v275, "cpu");
      v277 = sub_9EE7C0(v276, "'");
      sub_9EE7C0(v277, " ");
      v158 = j__strlen("invalid");
      if ( j__strlen("gpu") != v158 )
        goto LABEL_449;
      if ( v158 )
      {
LABEL_199:
        if ( !memcmp("gpu", "invalid", v158) )
        {
          if ( v158 == j__strlen("fpga") )
            goto LABEL_201;
LABEL_202:
          v159 = sub_9EE7C0(&v285, "'");
          v160 = sub_9EE7C0(v159, "fpga");
          v161 = sub_9EE7C0(v160, "'");
          sub_9EE7C0(v161, " ");
          v158 = j__strlen("invalid");
          goto LABEL_203;
        }
        goto LABEL_449;
      }
      goto LABEL_447;
    }
    goto LABEL_455;
  }
  if ( j__strlen("cpu") )
    goto LABEL_452;
LABEL_446:
  if ( j__strlen("gpu") )
    goto LABEL_449;
LABEL_447:
  v158 = j__strlen("fpga");
  if ( v158 )
    goto LABEL_202;
LABEL_203:
  if ( j__strlen("any") != v158 || v158 && memcmp("any", "invalid", v158) )
  {
    v162 = sub_9EE7C0(&v285, "'");
    v163 = sub_9EE7C0(v162, (char *)"any");
    v164 = sub_9EE7C0(v163, "'");
    sub_9EE7C0(v164, " ");
  }
  v37 = 0;
LABEL_208:
  if ( a2 == 5 && a3 == 13 )
  {
    v165 = j__strlen("invalid");
    if ( j__strlen("true") == v165 )
    {
      if ( !v165 )
      {
LABEL_438:
        if ( j__strlen("false") != v165 )
          goto LABEL_215;
        if ( !v165 )
        {
          if ( !j__strlen("unknown") )
            goto LABEL_220;
          goto LABEL_219;
        }
LABEL_214:
        if ( !memcmp("false", "invalid", v165) )
        {
LABEL_216:
          if ( j__strlen("unknown") == v165 && (!v165 || !memcmp("unknown", "invalid", v165)) )
          {
LABEL_220:
            if ( a3 == 18 && v37 )
            {
              v172 = j__strlen("invalid");
              v173 = j__strlen("unified_shared_memory");
              if ( v173 != v172 || v173 && memcmp("unified_shared_memory", "invalid", v173) )
              {
                v53 = sub_9EE7C0(&v285, "'");
                v54 = "unified_shared_memory";
                goto LABEL_106;
              }
              goto LABEL_107;
            }
            goto LABEL_244;
          }
LABEL_219:
          v169 = sub_9EE7C0(&v285, "'");
          v170 = sub_9EE7C0(v169, "unknown");
          v171 = sub_9EE7C0(v170, "'");
          sub_9EE7C0(v171, " ");
          goto LABEL_220;
        }
LABEL_215:
        v166 = sub_9EE7C0(&v285, "'");
        v167 = sub_9EE7C0(v166, "false");
        v168 = sub_9EE7C0(v167, "'");
        sub_9EE7C0(v168, " ");
        v165 = j__strlen("invalid");
        goto LABEL_216;
      }
      if ( !memcmp("true", "invalid", v165) )
      {
        if ( v165 != j__strlen("false") )
          goto LABEL_215;
        goto LABEL_214;
      }
    }
    v266 = sub_9EE7C0(&v285, "'");
    v267 = sub_9EE7C0(v266, "true");
    v268 = sub_9EE7C0(v267, "'");
    sub_9EE7C0(v268, " ");
    v165 = j__strlen("invalid");
    goto LABEL_438;
  }
  v284 = v281;
LABEL_238:
  if ( a3 != 14 || !v282 )
    goto LABEL_98;
  v183 = j__strlen("invalid");
  v184 = j__strlen("dispatch");
  if ( v184 != v183 || v184 && memcmp("dispatch", "invalid", v184) )
  {
    v185 = sub_9EE7C0(&v285, "'");
    v186 = sub_9EE7C0(v185, "dispatch");
    v187 = sub_9EE7C0(v186, "'");
    sub_9EE7C0(v187, " ");
  }
LABEL_244:
  if ( a3 == 19 && v37 )
  {
    v188 = j__strlen("invalid");
    v189 = j__strlen("reverse_offload");
    if ( v189 != v188 || v189 && memcmp("reverse_offload", "invalid", v189) )
    {
      v53 = sub_9EE7C0(&v285, "'");
      v54 = "reverse_offload";
      goto LABEL_106;
    }
    goto LABEL_107;
  }
LABEL_102:
  if ( a3 != 20 || !v37 )
    goto LABEL_268;
  v95 = j__strlen("invalid");
  v96 = j__strlen("dynamic_allocators");
  if ( v96 != v95 || v96 && memcmp("dynamic_allocators", "invalid", v96) )
  {
    v53 = sub_9EE7C0(&v285, "'");
    v54 = "dynamic_allocators";
    goto LABEL_106;
  }
LABEL_107:
  v99 = v286;
  v100 = a1 + 1;
  if ( !v286 )
  {
    a1->m128i_i64[0] = (__int64)v100;
    v101 = j__strlen("<none>");
    v102 = v101;
    if ( (unsigned __int64)v101 > 0xF )
    {
      if ( v101 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v265 = (__m128i *)operator new(v101 + 1);
      a1[1].m128i_i64[0] = v102;
      a1->m128i_i64[0] = (__int64)v265;
      v100 = v265;
    }
    else
    {
      if ( v101 == 1 )
      {
        a1[1].m128i_i8[0] = 60;
        goto LABEL_111;
      }
      if ( !v101 )
      {
LABEL_111:
        a1->m128i_i64[1] = v102;
        v100->m128i_i8[v102] = 0;
        if ( v285 != v287 )
          operator delete(v285);
        return a1;
      }
    }
    memcpy(v100, "<none>", v102);
    v100 = (__m128i *)a1->m128i_i64[0];
    goto LABEL_111;
  }
  --v286;
  *((char *)v285 + v99 - 1) = 0;
  v152 = (__m128i *)v285;
  a1->m128i_i64[0] = (__int64)v100;
  if ( v152 == v287 )
  {
    a1[1] = _mm_load_si128(v287);
  }
  else
  {
    a1->m128i_i64[0] = (__int64)v152;
    a1[1].m128i_i64[0] = v287[0].m128i_i64[0];
  }
  a1->m128i_i64[1] = v286;
  return a1;
}
