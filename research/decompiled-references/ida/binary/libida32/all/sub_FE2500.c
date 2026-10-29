void __fastcall sub_FE2500(double **a1, __m128i **a2)
{
  double *v2; // rax
  double v4; // xmm0_8
  double v5; // xmm0_8
  double v6; // xmm0_8
  double v7; // xmm0_8
  double v8; // xmm0_8
  double v9; // xmm0_8
  double v10; // xmm0_8
  double v11; // xmm0_8
  __int64 v12; // rax
  const char *v13; // r15
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  const char *v31; // xmm0_8
  __m128i *v32; // rdx
  __int64 v33; // rax
  __int64 (__fastcall ***v34)(); // rdi
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  const char *v58; // xmm0_8
  __m128i *v59; // rdx
  __int64 v60; // rax
  __int64 (__fastcall ***v61)(); // rdi
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  const char *v64; // xmm0_8
  __m128i *v65; // rdx
  __int64 v66; // rax
  __int64 (__fastcall ***v67)(); // rdi
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rax
  __int64 v70; // rax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rax
  const char *v73; // xmm0_8
  __int64 *v74; // rdx
  __int64 v75; // rax
  __int64 (__fastcall ***v76)(); // rdi
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rax
  __int64 v79; // rax
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rax
  __int64 v82; // rax
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rax
  const char *v85; // xmm0_8
  __m128i *v86; // rdx
  __int64 v87; // rax
  __int64 (__fastcall ***v88)(); // rdi
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // rax
  const char *v91; // xmm0_8
  __m128i *v92; // rdx
  __int64 v93; // rax
  __int64 (__fastcall ***v94)(); // rdi
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rax
  __int64 v97; // rax
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rax
  const char *v100; // xmm0_8
  __m128i *v101; // rdx
  __int64 v102; // rax
  __int64 (__fastcall ***v103)(); // rdi
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // rax
  __int64 v106; // rax
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rax
  __int64 v109; // rax
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // rax
  __int64 v112; // rax
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // rax
  __int64 v115; // rax
  unsigned __int64 v116; // rax
  unsigned __int64 v117; // rax
  __int64 v118; // rax
  unsigned __int64 v119; // rax
  unsigned __int64 v120; // rax
  __int64 v121; // rax
  unsigned __int64 v122; // rax
  unsigned __int64 v123; // rax
  __int64 v124; // rax
  unsigned __int64 v125; // rax
  unsigned __int64 v126; // rax
  __int64 v127; // rax
  unsigned __int64 v128; // rax
  unsigned __int64 v129; // rax
  __int64 v130; // rax
  unsigned __int64 v131; // rax
  unsigned __int64 v132; // rax
  __int64 v133; // rax
  unsigned __int64 v134; // rax
  unsigned __int64 v135; // rax
  __int64 v136; // rax
  unsigned __int64 v137; // rax
  unsigned __int64 v138; // rax
  __int64 v139; // rax
  unsigned __int64 v140; // rax
  unsigned __int64 v141; // rax
  __int64 v142; // rax
  unsigned __int64 v143; // rax
  unsigned __int64 v144; // rax
  __int64 v145; // rax
  unsigned __int64 v146; // rax
  unsigned __int64 v147; // rax
  __int64 v148; // rax
  unsigned __int64 v149; // rax
  unsigned __int64 v150; // rax
  __int64 v151; // rax
  unsigned __int64 v152; // rax
  unsigned __int64 v153; // rax
  __int64 v154; // rax
  unsigned __int64 v155; // rax
  unsigned __int64 v156; // rax
  __int64 v157; // rax
  unsigned __int64 v158; // rax
  unsigned __int64 v159; // rax
  __int64 v160; // rax
  unsigned __int64 v161; // rax
  unsigned __int64 v162; // rax
  __int64 v163; // rax
  unsigned __int64 v164; // rax
  unsigned __int64 v165; // rax
  __int64 v166; // rax
  unsigned __int64 v167; // rax
  unsigned __int64 v168; // rax
  __int64 v169; // rax
  unsigned __int64 v170; // rax
  unsigned __int64 v171; // rax
  __int64 v172; // rax
  unsigned __int64 v173; // rax
  unsigned __int64 v174; // rax
  __int64 v175; // rax
  unsigned __int64 v176; // rax
  unsigned __int64 v177; // rax
  __int64 v178; // rax
  unsigned __int64 v179; // rax
  unsigned __int64 v180; // rax
  __int64 v181; // rax
  unsigned __int64 v182; // rax
  unsigned __int64 v183; // rax
  __int64 v184; // rax
  unsigned __int64 v185; // rax
  unsigned __int64 v186; // rax
  __int64 v187; // rax
  unsigned __int64 v188; // rax
  unsigned __int64 v189; // rax
  __int64 v190; // rax
  unsigned __int64 v191; // rax
  unsigned __int64 v192; // rax
  __int64 v193; // rax
  unsigned __int64 v194; // rax
  unsigned __int64 v195; // rax
  __int64 v196; // rax
  unsigned __int64 v197; // rax
  unsigned __int64 v198; // rax
  __int64 v199; // rax
  unsigned __int64 v200; // rax
  unsigned __int64 v201; // rax
  __int64 v202; // rax
  unsigned __int64 v203; // rax
  unsigned __int64 v204; // rax
  __int64 v205; // rax
  unsigned __int64 v206; // rax
  unsigned __int64 v207; // rax
  __int64 v208; // rax
  unsigned __int64 v209; // rax
  unsigned __int64 v210; // rax
  __int64 v211; // rax
  unsigned __int64 v212; // rax
  unsigned __int64 v213; // rax
  __int64 v214; // rax
  unsigned __int64 v215; // rax
  unsigned __int64 v216; // rax
  __int64 v217; // rax
  unsigned __int64 v218; // rax
  unsigned __int64 v219; // rax
  __m128i v220; // xmm1
  __m128i si128; // xmm1
  __m128i v222; // xmm1
  const char *v223; // [rsp+0h] [rbp-D8h] BYREF
  double v224; // [rsp+8h] [rbp-D0h]
  void *v225; // [rsp+10h] [rbp-C8h] BYREF
  unsigned __int64 v226; // [rsp+18h] [rbp-C0h]
  __m128 v227; // [rsp+20h] [rbp-B8h] BYREF
  double v228; // [rsp+30h] [rbp-A8h]
  void *v229; // [rsp+40h] [rbp-98h] BYREF
  const char *v230; // [rsp+48h] [rbp-90h]
  _BYTE v231[16]; // [rsp+50h] [rbp-88h] BYREF
  __int64 (__fastcall **v232)(); // [rsp+60h] [rbp-78h] BYREF
  int v233; // [rsp+68h] [rbp-70h]
  __int128 v234; // [rsp+70h] [rbp-68h]
  __m128i *v235; // [rsp+80h] [rbp-58h]
  char v236; // [rsp+88h] [rbp-50h]
  int v237; // [rsp+8Ch] [rbp-4Ch]
  void **v238; // [rsp+90h] [rbp-48h]

  v2 = *a1;
  if ( *a1 != a1[1] )
  {
    v4 = *v2;
    if ( *v2 < 9.999999717180685e-10 )
      goto LABEL_583;
    v224 = *v2;
    v234 = 0;
    v238 = &v229;
    v229 = v231;
    v230 = nullptr;
    v231[0] = 0;
    v233 = 0;
    v236 = 0;
    v237 = 1;
    v235 = nullptr;
    v232 = &off_2BC1EC8;
    sub_2257B70(&v232, 0, 0, 0);
    v172 = sub_971800((__int64)&v232, "address=");
    v228 = v4;
    v223 = "%.8f";
    v227 = _mm_loadh_ps((const double *)&v223);
    sub_2258820(v172, &v227);
    v226 = (unsigned __int64)v230;
    v223 = v230;
    v225 = v229;
    v173 = sub_22233B0(&v225, 48, -1) + 1;
    v227.m128_u64[0] = (unsigned __int64)v225;
    if ( v173 > v226 )
      v173 = v226;
    v174 = v226 - (_QWORD)v223 + v173;
    if ( v174 > v226 )
      v174 = v226;
    v227.m128_u64[1] = v174;
    sub_FE2260(a2, (__int64)&v227);
    v232 = &off_2BC1EC8;
    sub_2257A60(&v232);
    if ( v229 != v231 )
      operator delete(v229);
    v2 = *a1;
    if ( *a1 != a1[1] )
    {
LABEL_583:
      if ( v2[1] < 9.999999717180685e-10 )
        goto LABEL_584;
      v224 = v2[1];
      v234 = 0;
      v238 = &v229;
      v229 = v231;
      v230 = nullptr;
      v231[0] = 0;
      v233 = 0;
      v236 = 0;
      v237 = 1;
      v235 = nullptr;
      v232 = &off_2BC1EC8;
      sub_2257B70(&v232, 0, 0, 0);
      v196 = sub_971800((__int64)&v232, "pointer-compare=");
      v223 = "%.8f";
      v228 = v224;
      v227 = _mm_loadh_ps((const double *)&v223);
      sub_2258820(v196, &v227);
      v226 = (unsigned __int64)v230;
      v223 = v230;
      v225 = v229;
      v197 = sub_22233B0(&v225, 48, -1) + 1;
      v227.m128_u64[0] = (unsigned __int64)v225;
      if ( v197 > v226 )
        v197 = v226;
      v198 = v226 - (_QWORD)v223 + v197;
      if ( v198 > v226 )
        v198 = v226;
      v227.m128_u64[1] = v198;
      sub_FE2260(a2, (__int64)&v227);
      v232 = &off_2BC1EC8;
      sub_2257A60(&v232);
      if ( v229 != v231 )
        operator delete(v229);
      v2 = *a1;
      if ( *a1 != a1[1] )
      {
LABEL_584:
        if ( v2[2] < 9.999999717180685e-10 )
          goto LABEL_585;
        v224 = v2[2];
        v234 = 0;
        v238 = &v229;
        v229 = v231;
        v230 = nullptr;
        v231[0] = 0;
        v233 = 0;
        v236 = 0;
        v237 = 1;
        v235 = nullptr;
        v232 = &off_2BC1EC8;
        sub_2257B70(&v232, 0, 0, 0);
        v148 = sub_971800((__int64)&v232, "pointer-subtract=");
        v228 = v224;
        v223 = "%.8f";
        v227 = _mm_loadh_ps((const double *)&v223);
        sub_2258820(v148, &v227);
        v226 = (unsigned __int64)v230;
        v223 = v230;
        v225 = v229;
        v149 = sub_22233B0(&v225, 48, -1) + 1;
        v227.m128_u64[0] = (unsigned __int64)v225;
        if ( v149 > v226 )
          v149 = v226;
        v150 = v226 - (_QWORD)v223 + v149;
        if ( v150 > v226 )
          v150 = v226;
        v227.m128_u64[1] = v150;
        sub_FE2260(a2, (__int64)&v227);
        v232 = &off_2BC1EC8;
        sub_2257A60(&v232);
        if ( v229 != v231 )
          operator delete(v229);
        v2 = *a1;
        if ( *a1 != a1[1] )
        {
LABEL_585:
          if ( v2[3] < 9.999999717180685e-10 )
            goto LABEL_586;
          v224 = v2[3];
          v234 = 0;
          v238 = &v229;
          v229 = v231;
          v230 = nullptr;
          v231[0] = 0;
          v233 = 0;
          v236 = 0;
          v237 = 1;
          v235 = nullptr;
          v232 = &off_2BC1EC8;
          sub_2257B70(&v232, 0, 0, 0);
          v208 = sub_971800((__int64)&v232, "kernel-address=");
          v223 = "%.8f";
          v228 = v224;
          v227 = _mm_loadh_ps((const double *)&v223);
          sub_2258820(v208, &v227);
          v226 = (unsigned __int64)v230;
          v223 = v230;
          v225 = v229;
          v209 = sub_22233B0(&v225, 48, -1) + 1;
          v227.m128_u64[0] = (unsigned __int64)v225;
          if ( v209 > v226 )
            v209 = v226;
          v210 = v226 - (_QWORD)v223 + v209;
          if ( v210 > v226 )
            v210 = v226;
          v227.m128_u64[1] = v210;
          sub_FE2260(a2, (__int64)&v227);
          v232 = &off_2BC1EC8;
          sub_2257A60(&v232);
          if ( v229 != v231 )
            operator delete(v229);
          v2 = *a1;
          if ( *a1 != a1[1] )
          {
LABEL_586:
            if ( v2[4] < 9.999999717180685e-10 )
              goto LABEL_587;
            v224 = v2[4];
            v234 = 0;
            v238 = &v229;
            v229 = v231;
            v230 = nullptr;
            v231[0] = 0;
            v233 = 0;
            v236 = 0;
            v237 = 1;
            v235 = nullptr;
            v232 = &off_2BC1EC8;
            sub_2257B70(&v232, 0, 0, 0);
            v160 = sub_971800((__int64)&v232, "hwaddress=");
            v228 = v224;
            v223 = "%.8f";
            v227 = _mm_loadh_ps((const double *)&v223);
            sub_2258820(v160, &v227);
            v226 = (unsigned __int64)v230;
            v223 = v230;
            v225 = v229;
            v161 = sub_22233B0(&v225, 48, -1) + 1;
            v227.m128_u64[0] = (unsigned __int64)v225;
            if ( v161 > v226 )
              v161 = v226;
            v162 = v226 - (_QWORD)v223 + v161;
            if ( v162 > v226 )
              v162 = v226;
            v227.m128_u64[1] = v162;
            sub_FE2260(a2, (__int64)&v227);
            v232 = &off_2BC1EC8;
            sub_2257A60(&v232);
            if ( v229 != v231 )
              operator delete(v229);
            v2 = *a1;
            if ( *a1 != a1[1] )
            {
LABEL_587:
              if ( v2[5] < 9.999999717180685e-10 )
                goto LABEL_588;
              v224 = v2[5];
              v234 = 0;
              v238 = &v229;
              v229 = v231;
              v230 = nullptr;
              v231[0] = 0;
              v233 = 0;
              v236 = 0;
              v237 = 1;
              v235 = nullptr;
              v232 = &off_2BC1EC8;
              sub_2257B70(&v232, 0, 0, 0);
              v184 = sub_971800((__int64)&v232, "kernel-hwaddress=");
              v223 = "%.8f";
              v228 = v224;
              v227 = _mm_loadh_ps((const double *)&v223);
              sub_2258820(v184, &v227);
              v226 = (unsigned __int64)v230;
              v223 = v230;
              v225 = v229;
              v185 = sub_22233B0(&v225, 48, -1) + 1;
              v227.m128_u64[0] = (unsigned __int64)v225;
              if ( v185 > v226 )
                v185 = v226;
              v186 = v226 - (_QWORD)v223 + v185;
              if ( v186 > v226 )
                v186 = v226;
              v227.m128_u64[1] = v186;
              sub_FE2260(a2, (__int64)&v227);
              v232 = &off_2BC1EC8;
              sub_2257A60(&v232);
              if ( v229 != v231 )
                operator delete(v229);
              v2 = *a1;
              if ( *a1 != a1[1] )
              {
LABEL_588:
                if ( v2[6] < 9.999999717180685e-10 )
                  goto LABEL_589;
                v224 = v2[6];
                v234 = 0;
                v238 = &v229;
                v229 = v231;
                v230 = nullptr;
                v231[0] = 0;
                v233 = 0;
                v236 = 0;
                v237 = 1;
                v235 = nullptr;
                v232 = &off_2BC1EC8;
                sub_2257B70(&v232, 0, 0, 0);
                v136 = sub_971800((__int64)&v232, "memtag-stack=");
                v228 = v224;
                v223 = "%.8f";
                v227 = _mm_loadh_ps((const double *)&v223);
                sub_2258820(v136, &v227);
                v226 = (unsigned __int64)v230;
                v223 = v230;
                v225 = v229;
                v137 = sub_22233B0(&v225, 48, -1) + 1;
                v227.m128_u64[0] = (unsigned __int64)v225;
                if ( v137 > v226 )
                  v137 = v226;
                v138 = v226 - (_QWORD)v223 + v137;
                if ( v138 > v226 )
                  v138 = v226;
                v227.m128_u64[1] = v138;
                sub_FE2260(a2, (__int64)&v227);
                v232 = &off_2BC1EC8;
                sub_2257A60(&v232);
                if ( v229 != v231 )
                  operator delete(v229);
                v2 = *a1;
                if ( *a1 != a1[1] )
                {
LABEL_589:
                  if ( v2[7] < 9.999999717180685e-10 )
                    goto LABEL_590;
                  v224 = v2[7];
                  v234 = 0;
                  v238 = &v229;
                  v229 = v231;
                  v230 = nullptr;
                  v231[0] = 0;
                  v233 = 0;
                  v236 = 0;
                  v237 = 1;
                  v235 = nullptr;
                  v232 = &off_2BC1EC8;
                  sub_2257B70(&v232, 0, 0, 0);
                  v214 = sub_971800((__int64)&v232, "memtag-heap=");
                  v223 = "%.8f";
                  v228 = v224;
                  v227 = _mm_loadh_ps((const double *)&v223);
                  sub_2258820(v214, &v227);
                  v226 = (unsigned __int64)v230;
                  v223 = v230;
                  v225 = v229;
                  v215 = sub_22233B0(&v225, 48, -1) + 1;
                  v227.m128_u64[0] = (unsigned __int64)v225;
                  if ( v215 > v226 )
                    v215 = v226;
                  v216 = v226 - (_QWORD)v223 + v215;
                  if ( v216 > v226 )
                    v216 = v226;
                  v227.m128_u64[1] = v216;
                  sub_FE2260(a2, (__int64)&v227);
                  v232 = &off_2BC1EC8;
                  sub_2257A60(&v232);
                  if ( v229 != v231 )
                    operator delete(v229);
                  v2 = *a1;
                  if ( a1[1] != *a1 )
                  {
LABEL_590:
                    if ( v2[8] < 9.999999717180685e-10 )
                      goto LABEL_591;
                    v224 = v2[8];
                    v234 = 0;
                    v238 = &v229;
                    v229 = v231;
                    v230 = nullptr;
                    v231[0] = 0;
                    v233 = 0;
                    v236 = 0;
                    v237 = 1;
                    v235 = nullptr;
                    v232 = &off_2BC1EC8;
                    sub_2257B70(&v232, 0, 0, 0);
                    v166 = sub_971800((__int64)&v232, "memtag-globals=");
                    v228 = v224;
                    v223 = "%.8f";
                    v227 = _mm_loadh_ps((const double *)&v223);
                    sub_2258820(v166, &v227);
                    v226 = (unsigned __int64)v230;
                    v223 = v230;
                    v225 = v229;
                    v167 = sub_22233B0(&v225, 48, -1) + 1;
                    v227.m128_u64[0] = (unsigned __int64)v225;
                    if ( v167 > v226 )
                      v167 = v226;
                    v168 = v226 - (_QWORD)v223 + v167;
                    if ( v168 > v226 )
                      v168 = v226;
                    v227.m128_u64[1] = v168;
                    sub_FE2260(a2, (__int64)&v227);
                    v232 = &off_2BC1EC8;
                    sub_2257A60(&v232);
                    if ( v229 != v231 )
                      operator delete(v229);
                    v2 = *a1;
                    if ( a1[1] != *a1 )
                    {
LABEL_591:
                      if ( v2[10] < 9.999999717180685e-10 )
                        goto LABEL_592;
                      v224 = v2[10];
                      v234 = 0;
                      v238 = &v229;
                      v229 = v231;
                      v230 = nullptr;
                      v231[0] = 0;
                      v233 = 0;
                      v236 = 0;
                      v237 = 1;
                      v235 = nullptr;
                      v232 = &off_2BC1EC8;
                      sub_2257B70(&v232, 0, 0, 0);
                      v190 = sub_971800((__int64)&v232, "memory=");
                      v223 = "%.8f";
                      v228 = v224;
                      v227 = _mm_loadh_ps((const double *)&v223);
                      sub_2258820(v190, &v227);
                      v226 = (unsigned __int64)v230;
                      v223 = v230;
                      v225 = v229;
                      v191 = sub_22233B0(&v225, 48, -1) + 1;
                      v227.m128_u64[0] = (unsigned __int64)v225;
                      if ( v191 > v226 )
                        v191 = v226;
                      v192 = v226 - (_QWORD)v223 + v191;
                      if ( v192 > v226 )
                        v192 = v226;
                      v227.m128_u64[1] = v192;
                      sub_FE2260(a2, (__int64)&v227);
                      v232 = &off_2BC1EC8;
                      sub_2257A60(&v232);
                      if ( v229 != v231 )
                        operator delete(v229);
                      v2 = *a1;
                      if ( a1[1] != *a1 )
                      {
LABEL_592:
                        if ( v2[11] < 9.999999717180685e-10 )
                          goto LABEL_593;
                        v224 = v2[11];
                        v234 = 0;
                        v238 = &v229;
                        v229 = v231;
                        v230 = nullptr;
                        v231[0] = 0;
                        v233 = 0;
                        v236 = 0;
                        v237 = 1;
                        v235 = nullptr;
                        v232 = &off_2BC1EC8;
                        sub_2257B70(&v232, 0, 0, 0);
                        v142 = sub_971800((__int64)&v232, "kernel-memory=");
                        v228 = v224;
                        v223 = "%.8f";
                        v227 = _mm_loadh_ps((const double *)&v223);
                        sub_2258820(v142, &v227);
                        v226 = (unsigned __int64)v230;
                        v223 = v230;
                        v225 = v229;
                        v143 = sub_22233B0(&v225, 48, -1) + 1;
                        v227.m128_u64[0] = (unsigned __int64)v225;
                        if ( v143 > v226 )
                          v143 = v226;
                        v144 = v226 - (_QWORD)v223 + v143;
                        if ( v144 > v226 )
                          v144 = v226;
                        v227.m128_u64[1] = v144;
                        sub_FE2260(a2, (__int64)&v227);
                        v232 = &off_2BC1EC8;
                        sub_2257A60(&v232);
                        if ( v229 != v231 )
                          operator delete(v229);
                        v2 = *a1;
                        if ( a1[1] != *a1 )
                        {
LABEL_593:
                          if ( v2[12] < 9.999999717180685e-10 )
                            goto LABEL_594;
                          v224 = v2[12];
                          v234 = 0;
                          v238 = &v229;
                          v229 = v231;
                          v230 = nullptr;
                          v231[0] = 0;
                          v233 = 0;
                          v236 = 0;
                          v237 = 1;
                          v235 = nullptr;
                          v232 = &off_2BC1EC8;
                          sub_2257B70(&v232, 0, 0, 0);
                          v202 = sub_971800((__int64)&v232, "fuzzer=");
                          v223 = "%.8f";
                          v228 = v224;
                          v227 = _mm_loadh_ps((const double *)&v223);
                          sub_2258820(v202, &v227);
                          v226 = (unsigned __int64)v230;
                          v223 = v230;
                          v225 = v229;
                          v203 = sub_22233B0(&v225, 48, -1) + 1;
                          v227.m128_u64[0] = (unsigned __int64)v225;
                          if ( v203 > v226 )
                            v203 = v226;
                          v204 = v226 - (_QWORD)v223 + v203;
                          if ( v204 > v226 )
                            v204 = v226;
                          v227.m128_u64[1] = v204;
                          sub_FE2260(a2, (__int64)&v227);
                          v232 = &off_2BC1EC8;
                          sub_2257A60(&v232);
                          if ( v229 != v231 )
                            operator delete(v229);
                          v2 = *a1;
                          if ( a1[1] != *a1 )
                          {
LABEL_594:
                            if ( v2[13] < 9.999999717180685e-10 )
                              goto LABEL_595;
                            v224 = v2[13];
                            v234 = 0;
                            v238 = &v229;
                            v229 = v231;
                            v230 = nullptr;
                            v231[0] = 0;
                            v233 = 0;
                            v236 = 0;
                            v237 = 1;
                            v235 = nullptr;
                            v232 = &off_2BC1EC8;
                            sub_2257B70(&v232, 0, 0, 0);
                            v154 = sub_971800((__int64)&v232, "fuzzer-no-link=");
                            v228 = v224;
                            v223 = "%.8f";
                            v227 = _mm_loadh_ps((const double *)&v223);
                            sub_2258820(v154, &v227);
                            v226 = (unsigned __int64)v230;
                            v223 = v230;
                            v225 = v229;
                            v155 = sub_22233B0(&v225, 48, -1) + 1;
                            v227.m128_u64[0] = (unsigned __int64)v225;
                            if ( v155 > v226 )
                              v155 = v226;
                            v156 = v226 - (_QWORD)v223 + v155;
                            if ( v156 > v226 )
                              v156 = v226;
                            v227.m128_u64[1] = v156;
                            sub_FE2260(a2, (__int64)&v227);
                            v232 = &off_2BC1EC8;
                            sub_2257A60(&v232);
                            if ( v229 != v231 )
                              operator delete(v229);
                            v2 = *a1;
                            if ( a1[1] != *a1 )
                            {
LABEL_595:
                              if ( v2[14] < 9.999999717180685e-10 )
                                goto LABEL_596;
                              v224 = v2[14];
                              v234 = 0;
                              v238 = &v229;
                              v229 = v231;
                              v230 = nullptr;
                              v231[0] = 0;
                              v233 = 0;
                              v236 = 0;
                              v237 = 1;
                              v235 = nullptr;
                              v232 = &off_2BC1EC8;
                              sub_2257B70(&v232, 0, 0, 0);
                              v178 = sub_971800((__int64)&v232, "type=");
                              v223 = "%.8f";
                              v228 = v224;
                              v227 = _mm_loadh_ps((const double *)&v223);
                              sub_2258820(v178, &v227);
                              v226 = (unsigned __int64)v230;
                              v223 = v230;
                              v225 = v229;
                              v179 = sub_22233B0(&v225, 48, -1) + 1;
                              v227.m128_u64[0] = (unsigned __int64)v225;
                              if ( v179 > v226 )
                                v179 = v226;
                              v180 = v226 - (_QWORD)v223 + v179;
                              if ( v180 > v226 )
                                v180 = v226;
                              v227.m128_u64[1] = v180;
                              sub_FE2260(a2, (__int64)&v227);
                              v232 = &off_2BC1EC8;
                              sub_2257A60(&v232);
                              if ( v229 != v231 )
                                operator delete(v229);
                              v2 = *a1;
                              if ( a1[1] != *a1 )
                              {
LABEL_596:
                                if ( v2[15] < 9.999999717180685e-10 )
                                  goto LABEL_597;
                                v224 = v2[15];
                                v234 = 0;
                                v238 = &v229;
                                v229 = v231;
                                v230 = nullptr;
                                v231[0] = 0;
                                v233 = 0;
                                v236 = 0;
                                v237 = 1;
                                v235 = nullptr;
                                v232 = &off_2BC1EC8;
                                sub_2257B70(&v232, 0, 0, 0);
                                v130 = sub_971800((__int64)&v232, "thread=");
                                v228 = v224;
                                v223 = "%.8f";
                                v227 = _mm_loadh_ps((const double *)&v223);
                                sub_2258820(v130, &v227);
                                v226 = (unsigned __int64)v230;
                                v223 = v230;
                                v225 = v229;
                                v131 = sub_22233B0(&v225, 48, -1) + 1;
                                v227.m128_u64[0] = (unsigned __int64)v225;
                                if ( v131 > v226 )
                                  v131 = v226;
                                v132 = v226 - (_QWORD)v223 + v131;
                                if ( v132 > v226 )
                                  v132 = v226;
                                v227.m128_u64[1] = v132;
                                sub_FE2260(a2, (__int64)&v227);
                                v232 = &off_2BC1EC8;
                                sub_2257A60(&v232);
                                if ( v229 != v231 )
                                  operator delete(v229);
                                v2 = *a1;
                                if ( a1[1] != *a1 )
                                {
LABEL_597:
                                  if ( v2[16] < 9.999999717180685e-10 )
                                    goto LABEL_598;
                                  v224 = v2[16];
                                  v234 = 0;
                                  v238 = &v229;
                                  v229 = v231;
                                  v230 = nullptr;
                                  v231[0] = 0;
                                  v233 = 0;
                                  v236 = 0;
                                  v237 = 1;
                                  v235 = nullptr;
                                  v232 = &off_2BC1EC8;
                                  sub_2257B70(&v232, 0, 0, 0);
                                  v217 = sub_971800((__int64)&v232, "numerical=");
                                  v223 = "%.8f";
                                  v228 = v224;
                                  v227 = _mm_loadh_ps((const double *)&v223);
                                  sub_2258820(v217, &v227);
                                  v226 = (unsigned __int64)v230;
                                  v223 = v230;
                                  v225 = v229;
                                  v218 = sub_22233B0(&v225, 48, -1) + 1;
                                  v227.m128_u64[0] = (unsigned __int64)v225;
                                  if ( v218 > v226 )
                                    v218 = v226;
                                  v219 = v226 - (_QWORD)v223 + v218;
                                  if ( v219 > v226 )
                                    v219 = v226;
                                  v227.m128_u64[1] = v219;
                                  sub_FE2260(a2, (__int64)&v227);
                                  v232 = &off_2BC1EC8;
                                  sub_2257A60(&v232);
                                  if ( v229 != v231 )
                                    operator delete(v229);
                                  v2 = *a1;
                                  if ( a1[1] != *a1 )
                                  {
LABEL_598:
                                    if ( v2[17] < 9.999999717180685e-10 )
                                      goto LABEL_599;
                                    v224 = v2[17];
                                    v234 = 0;
                                    v238 = &v229;
                                    v229 = v231;
                                    v230 = nullptr;
                                    v231[0] = 0;
                                    v233 = 0;
                                    v236 = 0;
                                    v237 = 1;
                                    v235 = nullptr;
                                    v232 = &off_2BC1EC8;
                                    sub_2257B70(&v232, 0, 0, 0);
                                    v169 = sub_971800((__int64)&v232, "realtime=");
                                    v228 = v224;
                                    v223 = "%.8f";
                                    v227 = _mm_loadh_ps((const double *)&v223);
                                    sub_2258820(v169, &v227);
                                    v226 = (unsigned __int64)v230;
                                    v223 = v230;
                                    v225 = v229;
                                    v170 = sub_22233B0(&v225, 48, -1) + 1;
                                    v227.m128_u64[0] = (unsigned __int64)v225;
                                    if ( v170 > v226 )
                                      v170 = v226;
                                    v171 = v226 - (_QWORD)v223 + v170;
                                    if ( v171 > v226 )
                                      v171 = v226;
                                    v227.m128_u64[1] = v171;
                                    sub_FE2260(a2, (__int64)&v227);
                                    v232 = &off_2BC1EC8;
                                    sub_2257A60(&v232);
                                    if ( v229 != v231 )
                                      operator delete(v229);
                                    v2 = *a1;
                                    if ( a1[1] != *a1 )
                                    {
LABEL_599:
                                      if ( v2[18] < 9.999999717180685e-10 )
                                        goto LABEL_600;
                                      v224 = v2[18];
                                      v234 = 0;
                                      v238 = &v229;
                                      v229 = v231;
                                      v230 = nullptr;
                                      v231[0] = 0;
                                      v233 = 0;
                                      v236 = 0;
                                      v237 = 1;
                                      v235 = nullptr;
                                      v232 = &off_2BC1EC8;
                                      sub_2257B70(&v232, 0, 0, 0);
                                      v193 = sub_971800((__int64)&v232, "leak=");
                                      v223 = "%.8f";
                                      v228 = v224;
                                      v227 = _mm_loadh_ps((const double *)&v223);
                                      sub_2258820(v193, &v227);
                                      v226 = (unsigned __int64)v230;
                                      v223 = v230;
                                      v225 = v229;
                                      v194 = sub_22233B0(&v225, 48, -1) + 1;
                                      v227.m128_u64[0] = (unsigned __int64)v225;
                                      if ( v194 > v226 )
                                        v194 = v226;
                                      v195 = v226 - (_QWORD)v223 + v194;
                                      if ( v195 > v226 )
                                        v195 = v226;
                                      v227.m128_u64[1] = v195;
                                      sub_FE2260(a2, (__int64)&v227);
                                      v232 = &off_2BC1EC8;
                                      sub_2257A60(&v232);
                                      if ( v229 != v231 )
                                        operator delete(v229);
                                      v2 = *a1;
                                      if ( a1[1] != *a1 )
                                      {
LABEL_600:
                                        if ( v2[19] < 9.999999717180685e-10 )
                                          goto LABEL_601;
                                        v224 = v2[19];
                                        v234 = 0;
                                        v238 = &v229;
                                        v229 = v231;
                                        v230 = nullptr;
                                        v231[0] = 0;
                                        v233 = 0;
                                        v236 = 0;
                                        v237 = 1;
                                        v235 = nullptr;
                                        v232 = &off_2BC1EC8;
                                        sub_2257B70(&v232, 0, 0, 0);
                                        v145 = sub_971800((__int64)&v232, "alignment=");
                                        v228 = v224;
                                        v223 = "%.8f";
                                        v227 = _mm_loadh_ps((const double *)&v223);
                                        sub_2258820(v145, &v227);
                                        v226 = (unsigned __int64)v230;
                                        v223 = v230;
                                        v225 = v229;
                                        v146 = sub_22233B0(&v225, 48, -1) + 1;
                                        v227.m128_u64[0] = (unsigned __int64)v225;
                                        if ( v146 > v226 )
                                          v146 = v226;
                                        v147 = v226 - (_QWORD)v223 + v146;
                                        if ( v147 > v226 )
                                          v147 = v226;
                                        v227.m128_u64[1] = v147;
                                        sub_FE2260(a2, (__int64)&v227);
                                        v232 = &off_2BC1EC8;
                                        sub_2257A60(&v232);
                                        if ( v229 != v231 )
                                          operator delete(v229);
                                        v2 = *a1;
                                        if ( a1[1] != *a1 )
                                        {
LABEL_601:
                                          if ( v2[20] < 9.999999717180685e-10 )
                                            goto LABEL_602;
                                          v224 = v2[20];
                                          v234 = 0;
                                          v238 = &v229;
                                          v229 = v231;
                                          v230 = nullptr;
                                          v231[0] = 0;
                                          v233 = 0;
                                          v236 = 0;
                                          v237 = 1;
                                          v235 = nullptr;
                                          v232 = &off_2BC1EC8;
                                          sub_2257B70(&v232, 0, 0, 0);
                                          v205 = sub_971800((__int64)&v232, "array-bounds=");
                                          v223 = "%.8f";
                                          v228 = v224;
                                          v227 = _mm_loadh_ps((const double *)&v223);
                                          sub_2258820(v205, &v227);
                                          v226 = (unsigned __int64)v230;
                                          v223 = v230;
                                          v225 = v229;
                                          v206 = sub_22233B0(&v225, 48, -1) + 1;
                                          v227.m128_u64[0] = (unsigned __int64)v225;
                                          if ( v206 > v226 )
                                            v206 = v226;
                                          v207 = v226 - (_QWORD)v223 + v206;
                                          if ( v207 > v226 )
                                            v207 = v226;
                                          v227.m128_u64[1] = v207;
                                          sub_FE2260(a2, (__int64)&v227);
                                          v232 = &off_2BC1EC8;
                                          sub_2257A60(&v232);
                                          if ( v229 != v231 )
                                            operator delete(v229);
                                          v2 = *a1;
                                          if ( a1[1] != *a1 )
                                          {
LABEL_602:
                                            if ( v2[21] < 9.999999717180685e-10 )
                                              goto LABEL_603;
                                            v224 = v2[21];
                                            v234 = 0;
                                            v238 = &v229;
                                            v229 = v231;
                                            v230 = nullptr;
                                            v231[0] = 0;
                                            v233 = 0;
                                            v236 = 0;
                                            v237 = 1;
                                            v235 = nullptr;
                                            v232 = &off_2BC1EC8;
                                            sub_2257B70(&v232, 0, 0, 0);
                                            v157 = sub_971800((__int64)&v232, "bool=");
                                            v228 = v224;
                                            v223 = "%.8f";
                                            v227 = _mm_loadh_ps((const double *)&v223);
                                            sub_2258820(v157, &v227);
                                            v226 = (unsigned __int64)v230;
                                            v223 = v230;
                                            v225 = v229;
                                            v158 = sub_22233B0(&v225, 48, -1) + 1;
                                            v227.m128_u64[0] = (unsigned __int64)v225;
                                            if ( v158 > v226 )
                                              v158 = v226;
                                            v159 = v226 - (_QWORD)v223 + v158;
                                            if ( v159 > v226 )
                                              v159 = v226;
                                            v227.m128_u64[1] = v159;
                                            sub_FE2260(a2, (__int64)&v227);
                                            v232 = &off_2BC1EC8;
                                            sub_2257A60(&v232);
                                            if ( v229 != v231 )
                                              operator delete(v229);
                                            v2 = *a1;
                                            if ( a1[1] != *a1 )
                                            {
LABEL_603:
                                              if ( v2[22] < 9.999999717180685e-10 )
                                                goto LABEL_604;
                                              v224 = v2[22];
                                              v234 = 0;
                                              v238 = &v229;
                                              v229 = v231;
                                              v230 = nullptr;
                                              v231[0] = 0;
                                              v233 = 0;
                                              v236 = 0;
                                              v237 = 1;
                                              v235 = nullptr;
                                              v232 = &off_2BC1EC8;
                                              sub_2257B70(&v232, 0, 0, 0);
                                              v181 = sub_971800((__int64)&v232, "builtin=");
                                              v223 = "%.8f";
                                              v228 = v224;
                                              v227 = _mm_loadh_ps((const double *)&v223);
                                              sub_2258820(v181, &v227);
                                              v226 = (unsigned __int64)v230;
                                              v223 = v230;
                                              v225 = v229;
                                              v182 = sub_22233B0(&v225, 48, -1) + 1;
                                              v227.m128_u64[0] = (unsigned __int64)v225;
                                              if ( v182 > v226 )
                                                v182 = v226;
                                              v183 = v226 - (_QWORD)v223 + v182;
                                              if ( v183 > v226 )
                                                v183 = v226;
                                              v227.m128_u64[1] = v183;
                                              sub_FE2260(a2, (__int64)&v227);
                                              v232 = &off_2BC1EC8;
                                              sub_2257A60(&v232);
                                              if ( v229 != v231 )
                                                operator delete(v229);
                                              v2 = *a1;
                                              if ( a1[1] != *a1 )
                                              {
LABEL_604:
                                                if ( v2[23] < 9.999999717180685e-10 )
                                                  goto LABEL_605;
                                                v224 = v2[23];
                                                v234 = 0;
                                                v238 = &v229;
                                                v229 = v231;
                                                v230 = nullptr;
                                                v231[0] = 0;
                                                v233 = 0;
                                                v236 = 0;
                                                v237 = 1;
                                                v235 = nullptr;
                                                v232 = &off_2BC1EC8;
                                                sub_2257B70(&v232, 0, 0, 0);
                                                v133 = sub_971800((__int64)&v232, "enum=");
                                                v228 = v224;
                                                v223 = "%.8f";
                                                v227 = _mm_loadh_ps((const double *)&v223);
                                                sub_2258820(v133, &v227);
                                                v226 = (unsigned __int64)v230;
                                                v223 = v230;
                                                v225 = v229;
                                                v134 = sub_22233B0(&v225, 48, -1) + 1;
                                                v227.m128_u64[0] = (unsigned __int64)v225;
                                                if ( v134 > v226 )
                                                  v134 = v226;
                                                v135 = v226 - (_QWORD)v223 + v134;
                                                if ( v135 > v226 )
                                                  v135 = v226;
                                                v227.m128_u64[1] = v135;
                                                sub_FE2260(a2, (__int64)&v227);
                                                v232 = &off_2BC1EC8;
                                                sub_2257A60(&v232);
                                                if ( v229 != v231 )
                                                  operator delete(v229);
                                                v2 = *a1;
                                                if ( a1[1] != *a1 )
                                                {
LABEL_605:
                                                  if ( v2[24] < 9.999999717180685e-10 )
                                                    goto LABEL_606;
                                                  v224 = v2[24];
                                                  v234 = 0;
                                                  v238 = &v229;
                                                  v229 = v231;
                                                  v230 = nullptr;
                                                  v231[0] = 0;
                                                  v233 = 0;
                                                  v236 = 0;
                                                  v237 = 1;
                                                  v235 = nullptr;
                                                  v232 = &off_2BC1EC8;
                                                  sub_2257B70(&v232, 0, 0, 0);
                                                  v211 = sub_971800((__int64)&v232, "float-cast-overflow=");
                                                  v223 = "%.8f";
                                                  v228 = v224;
                                                  v227 = _mm_loadh_ps((const double *)&v223);
                                                  sub_2258820(v211, &v227);
                                                  v226 = (unsigned __int64)v230;
                                                  v223 = v230;
                                                  v225 = v229;
                                                  v212 = sub_22233B0(&v225, 48, -1) + 1;
                                                  v227.m128_u64[0] = (unsigned __int64)v225;
                                                  if ( v212 > v226 )
                                                    v212 = v226;
                                                  v213 = v226 - (_QWORD)v223 + v212;
                                                  if ( v213 > v226 )
                                                    v213 = v226;
                                                  v227.m128_u64[1] = v213;
                                                  sub_FE2260(a2, (__int64)&v227);
                                                  v232 = &off_2BC1EC8;
                                                  sub_2257A60(&v232);
                                                  if ( v229 != v231 )
                                                    operator delete(v229);
                                                  v2 = *a1;
                                                  if ( a1[1] != *a1 )
                                                  {
LABEL_606:
                                                    if ( v2[25] < 9.999999717180685e-10 )
                                                      goto LABEL_607;
                                                    v224 = v2[25];
                                                    v234 = 0;
                                                    v238 = &v229;
                                                    v229 = v231;
                                                    v230 = nullptr;
                                                    v231[0] = 0;
                                                    v233 = 0;
                                                    v236 = 0;
                                                    v237 = 1;
                                                    v235 = nullptr;
                                                    v232 = &off_2BC1EC8;
                                                    sub_2257B70(&v232, 0, 0, 0);
                                                    v163 = sub_971800((__int64)&v232, "float-divide-by-zero=");
                                                    v228 = v224;
                                                    v223 = "%.8f";
                                                    v227 = _mm_loadh_ps((const double *)&v223);
                                                    sub_2258820(v163, &v227);
                                                    v226 = (unsigned __int64)v230;
                                                    v223 = v230;
                                                    v225 = v229;
                                                    v164 = sub_22233B0(&v225, 48, -1) + 1;
                                                    v227.m128_u64[0] = (unsigned __int64)v225;
                                                    if ( v164 > v226 )
                                                      v164 = v226;
                                                    v165 = v226 - (_QWORD)v223 + v164;
                                                    if ( v165 > v226 )
                                                      v165 = v226;
                                                    v227.m128_u64[1] = v165;
                                                    sub_FE2260(a2, (__int64)&v227);
                                                    v232 = &off_2BC1EC8;
                                                    sub_2257A60(&v232);
                                                    if ( v229 != v231 )
                                                      operator delete(v229);
                                                    v2 = *a1;
                                                    if ( a1[1] != *a1 )
                                                    {
LABEL_607:
                                                      if ( v2[26] < 9.999999717180685e-10 )
                                                        goto LABEL_608;
                                                      v224 = v2[26];
                                                      v234 = 0;
                                                      v238 = &v229;
                                                      v229 = v231;
                                                      v230 = nullptr;
                                                      v231[0] = 0;
                                                      v233 = 0;
                                                      v236 = 0;
                                                      v237 = 1;
                                                      v235 = nullptr;
                                                      v232 = &off_2BC1EC8;
                                                      sub_2257B70(&v232, 0, 0, 0);
                                                      v187 = sub_971800((__int64)&v232, "function=");
                                                      v223 = "%.8f";
                                                      v228 = v224;
                                                      v227 = _mm_loadh_ps((const double *)&v223);
                                                      sub_2258820(v187, &v227);
                                                      v226 = (unsigned __int64)v230;
                                                      v223 = v230;
                                                      v225 = v229;
                                                      v188 = sub_22233B0(&v225, 48, -1) + 1;
                                                      v227.m128_u64[0] = (unsigned __int64)v225;
                                                      if ( v188 > v226 )
                                                        v188 = v226;
                                                      v189 = v226 - (_QWORD)v223 + v188;
                                                      if ( v189 > v226 )
                                                        v189 = v226;
                                                      v227.m128_u64[1] = v189;
                                                      sub_FE2260(a2, (__int64)&v227);
                                                      v232 = &off_2BC1EC8;
                                                      sub_2257A60(&v232);
                                                      if ( v229 != v231 )
                                                        operator delete(v229);
                                                      v2 = *a1;
                                                      if ( a1[1] != *a1 )
                                                      {
LABEL_608:
                                                        if ( v2[27] < 9.999999717180685e-10 )
                                                          goto LABEL_609;
                                                        v224 = v2[27];
                                                        v234 = 0;
                                                        v238 = &v229;
                                                        v229 = v231;
                                                        v230 = nullptr;
                                                        v231[0] = 0;
                                                        v233 = 0;
                                                        v236 = 0;
                                                        v237 = 1;
                                                        v235 = nullptr;
                                                        v232 = &off_2BC1EC8;
                                                        sub_2257B70(&v232, 0, 0, 0);
                                                        v139 = sub_971800((__int64)&v232, "integer-divide-by-zero=");
                                                        v228 = v224;
                                                        v223 = "%.8f";
                                                        v227 = _mm_loadh_ps((const double *)&v223);
                                                        sub_2258820(v139, &v227);
                                                        v226 = (unsigned __int64)v230;
                                                        v223 = v230;
                                                        v225 = v229;
                                                        v140 = sub_22233B0(&v225, 48, -1) + 1;
                                                        v227.m128_u64[0] = (unsigned __int64)v225;
                                                        if ( v140 > v226 )
                                                          v140 = v226;
                                                        v141 = v226 - (_QWORD)v223 + v140;
                                                        if ( v141 > v226 )
                                                          v141 = v226;
                                                        v227.m128_u64[1] = v141;
                                                        sub_FE2260(a2, (__int64)&v227);
                                                        v232 = &off_2BC1EC8;
                                                        sub_2257A60(&v232);
                                                        if ( v229 != v231 )
                                                          operator delete(v229);
                                                        v2 = *a1;
                                                        if ( a1[1] != *a1 )
                                                        {
LABEL_609:
                                                          if ( v2[28] < 9.999999717180685e-10 )
                                                            goto LABEL_610;
                                                          v224 = v2[28];
                                                          v234 = 0;
                                                          v238 = &v229;
                                                          v229 = v231;
                                                          v230 = nullptr;
                                                          v231[0] = 0;
                                                          v233 = 0;
                                                          v236 = 0;
                                                          v237 = 1;
                                                          v235 = nullptr;
                                                          v232 = &off_2BC1EC8;
                                                          sub_2257B70(&v232, 0, 0, 0);
                                                          v199 = sub_971800((__int64)&v232, "nonnull-attribute=");
                                                          v223 = "%.8f";
                                                          v228 = v224;
                                                          v227 = _mm_loadh_ps((const double *)&v223);
                                                          sub_2258820(v199, &v227);
                                                          v226 = (unsigned __int64)v230;
                                                          v223 = v230;
                                                          v225 = v229;
                                                          v200 = sub_22233B0(&v225, 48, -1) + 1;
                                                          v227.m128_u64[0] = (unsigned __int64)v225;
                                                          if ( v200 > v226 )
                                                            v200 = v226;
                                                          v201 = v226 - (_QWORD)v223 + v200;
                                                          if ( v201 > v226 )
                                                            v201 = v226;
                                                          v227.m128_u64[1] = v201;
                                                          sub_FE2260(a2, (__int64)&v227);
                                                          v232 = &off_2BC1EC8;
                                                          sub_2257A60(&v232);
                                                          if ( v229 != v231 )
                                                            operator delete(v229);
                                                          v2 = *a1;
                                                          if ( a1[1] != *a1 )
                                                          {
LABEL_610:
                                                            if ( v2[29] < 9.999999717180685e-10 )
                                                              goto LABEL_611;
                                                            v224 = v2[29];
                                                            v234 = 0;
                                                            v238 = &v229;
                                                            v229 = v231;
                                                            v230 = nullptr;
                                                            v231[0] = 0;
                                                            v233 = 0;
                                                            v236 = 0;
                                                            v237 = 1;
                                                            v235 = nullptr;
                                                            v232 = &off_2BC1EC8;
                                                            sub_2257B70(&v232, 0, 0, 0);
                                                            v151 = sub_971800((__int64)&v232, "null=");
                                                            v228 = v224;
                                                            v223 = "%.8f";
                                                            v227 = _mm_loadh_ps((const double *)&v223);
                                                            sub_2258820(v151, &v227);
                                                            v226 = (unsigned __int64)v230;
                                                            v223 = v230;
                                                            v225 = v229;
                                                            v152 = sub_22233B0(&v225, 48, -1) + 1;
                                                            v227.m128_u64[0] = (unsigned __int64)v225;
                                                            if ( v152 > v226 )
                                                              v152 = v226;
                                                            v153 = v226 - (_QWORD)v223 + v152;
                                                            if ( v153 > v226 )
                                                              v153 = v226;
                                                            v227.m128_u64[1] = v153;
                                                            sub_FE2260(a2, (__int64)&v227);
                                                            v232 = &off_2BC1EC8;
                                                            sub_2257A60(&v232);
                                                            if ( v229 != v231 )
                                                              operator delete(v229);
                                                            v2 = *a1;
                                                            if ( a1[1] != *a1 )
                                                            {
LABEL_611:
                                                              if ( v2[30] < 9.999999717180685e-10 )
                                                                goto LABEL_612;
                                                              v224 = v2[30];
                                                              v234 = 0;
                                                              v238 = &v229;
                                                              v229 = v231;
                                                              v230 = nullptr;
                                                              v231[0] = 0;
                                                              v233 = 0;
                                                              v236 = 0;
                                                              v237 = 1;
                                                              v235 = nullptr;
                                                              v232 = &off_2BC1EC8;
                                                              sub_2257B70(&v232, 0, 0, 0);
                                                              v175 = sub_971800((__int64)&v232, "nullability-arg=");
                                                              v223 = "%.8f";
                                                              v228 = v224;
                                                              v227 = _mm_loadh_ps((const double *)&v223);
                                                              sub_2258820(v175, &v227);
                                                              v226 = (unsigned __int64)v230;
                                                              v223 = v230;
                                                              v225 = v229;
                                                              v176 = sub_22233B0(&v225, 48, -1) + 1;
                                                              v227.m128_u64[0] = (unsigned __int64)v225;
                                                              if ( v176 > v226 )
                                                                v176 = v226;
                                                              v177 = v226 - (_QWORD)v223 + v176;
                                                              if ( v177 > v226 )
                                                                v177 = v226;
                                                              v227.m128_u64[1] = v177;
                                                              sub_FE2260(a2, (__int64)&v227);
                                                              v232 = &off_2BC1EC8;
                                                              sub_2257A60(&v232);
                                                              if ( v229 != v231 )
                                                                operator delete(v229);
                                                              v2 = *a1;
                                                              if ( a1[1] != *a1 )
                                                              {
LABEL_612:
                                                                if ( v2[31] < 9.999999717180685e-10 )
                                                                  goto LABEL_613;
                                                                v224 = v2[31];
                                                                v234 = 0;
                                                                v238 = &v229;
                                                                v229 = v231;
                                                                v230 = nullptr;
                                                                v231[0] = 0;
                                                                v233 = 0;
                                                                v236 = 0;
                                                                v237 = 1;
                                                                v235 = nullptr;
                                                                v232 = &off_2BC1EC8;
                                                                sub_2257B70(&v232, 0, 0, 0);
                                                                v127 = sub_971800((__int64)&v232, "nullability-assign=");
                                                                v228 = v224;
                                                                v223 = "%.8f";
                                                                v227 = _mm_loadh_ps((const double *)&v223);
                                                                sub_2258820(v127, &v227);
                                                                v226 = (unsigned __int64)v230;
                                                                v223 = v230;
                                                                v225 = v229;
                                                                v128 = sub_22233B0(&v225, 48, -1) + 1;
                                                                v227.m128_u64[0] = (unsigned __int64)v225;
                                                                if ( v128 > v226 )
                                                                  v128 = v226;
                                                                v129 = v226 - (_QWORD)v223 + v128;
                                                                if ( v129 > v226 )
                                                                  v129 = v226;
                                                                v227.m128_u64[1] = v129;
                                                                sub_FE2260(a2, (__int64)&v227);
                                                                v232 = &off_2BC1EC8;
                                                                sub_2257A60(&v232);
                                                                if ( v229 != v231 )
                                                                  operator delete(v229);
                                                                v2 = *a1;
                                                                if ( a1[1] != *a1 )
                                                                {
LABEL_613:
                                                                  if ( v2[32] < 9.999999717180685e-10 )
                                                                    goto LABEL_614;
                                                                  v224 = v2[32];
                                                                  v234 = 0;
                                                                  v238 = &v229;
                                                                  v229 = v231;
                                                                  v230 = nullptr;
                                                                  v231[0] = 0;
                                                                  v233 = 0;
                                                                  v236 = 0;
                                                                  v237 = 1;
                                                                  v235 = nullptr;
                                                                  v232 = &off_2BC1EC8;
                                                                  sub_2257B70(&v232, 0, 0, 0);
                                                                  v121 = sub_971800(
                                                                           (__int64)&v232,
                                                                           "nullability-return=");
                                                                  v223 = "%.8f";
                                                                  v228 = v224;
                                                                  v227 = _mm_loadh_ps((const double *)&v223);
                                                                  sub_2258820(v121, &v227);
                                                                  v226 = (unsigned __int64)v230;
                                                                  v223 = v230;
                                                                  v225 = v229;
                                                                  v122 = sub_22233B0(&v225, 48, -1) + 1;
                                                                  v227.m128_u64[0] = (unsigned __int64)v225;
                                                                  if ( v122 > v226 )
                                                                    v122 = v226;
                                                                  v123 = v226 - (_QWORD)v223 + v122;
                                                                  if ( v123 > v226 )
                                                                    v123 = v226;
                                                                  v227.m128_u64[1] = v123;
                                                                  sub_FE2260(a2, (__int64)&v227);
                                                                  v232 = &off_2BC1EC8;
                                                                  sub_2257A60(&v232);
                                                                  if ( v229 != v231 )
                                                                    operator delete(v229);
                                                                  v2 = *a1;
                                                                  if ( a1[1] != *a1 )
                                                                  {
LABEL_614:
                                                                    if ( v2[34] < 9.999999717180685e-10 )
                                                                      goto LABEL_615;
                                                                    v224 = v2[34];
                                                                    v234 = 0;
                                                                    v238 = &v229;
                                                                    v229 = v231;
                                                                    v230 = nullptr;
                                                                    v231[0] = 0;
                                                                    v233 = 0;
                                                                    v236 = 0;
                                                                    v237 = 1;
                                                                    v235 = nullptr;
                                                                    v232 = &off_2BC1EC8;
                                                                    sub_2257B70(&v232, 0, 0, 0);
                                                                    v115 = sub_971800((__int64)&v232, "object-size=");
                                                                    v228 = v224;
                                                                    v223 = "%.8f";
                                                                    v227 = _mm_loadh_ps((const double *)&v223);
                                                                    sub_2258820(v115, &v227);
                                                                    v226 = (unsigned __int64)v230;
                                                                    v223 = v230;
                                                                    v225 = v229;
                                                                    v116 = sub_22233B0(&v225, 48, -1) + 1;
                                                                    v227.m128_u64[0] = (unsigned __int64)v225;
                                                                    if ( v116 > v226 )
                                                                      v116 = v226;
                                                                    v117 = v226 - (_QWORD)v223 + v116;
                                                                    if ( v117 > v226 )
                                                                      v117 = v226;
                                                                    v227.m128_u64[1] = v117;
                                                                    sub_FE2260(a2, (__int64)&v227);
                                                                    v232 = &off_2BC1EC8;
                                                                    sub_2257A60(&v232);
                                                                    if ( v229 != v231 )
                                                                      operator delete(v229);
                                                                    v2 = *a1;
                                                                    if ( a1[1] != *a1 )
                                                                    {
LABEL_615:
                                                                      if ( v2[35] < 9.999999717180685e-10 )
                                                                        goto LABEL_616;
                                                                      v224 = v2[35];
                                                                      v234 = 0;
                                                                      v238 = &v229;
                                                                      v229 = v231;
                                                                      v230 = nullptr;
                                                                      v231[0] = 0;
                                                                      v233 = 0;
                                                                      v236 = 0;
                                                                      v237 = 1;
                                                                      v235 = nullptr;
                                                                      v232 = &off_2BC1EC8;
                                                                      sub_2257B70(&v232, 0, 0, 0);
                                                                      v109 = sub_971800(
                                                                               (__int64)&v232,
                                                                               "pointer-overflow=");
                                                                      v223 = "%.8f";
                                                                      v228 = v224;
                                                                      v227 = _mm_loadh_ps((const double *)&v223);
                                                                      sub_2258820(v109, &v227);
                                                                      v226 = (unsigned __int64)v230;
                                                                      v223 = v230;
                                                                      v225 = v229;
                                                                      v110 = sub_22233B0(&v225, 48, -1) + 1;
                                                                      v227.m128_u64[0] = (unsigned __int64)v225;
                                                                      if ( v110 > v226 )
                                                                        v110 = v226;
                                                                      v111 = v226 - (_QWORD)v223 + v110;
                                                                      if ( v111 > v226 )
                                                                        v111 = v226;
                                                                      v227.m128_u64[1] = v111;
                                                                      sub_FE2260(a2, (__int64)&v227);
                                                                      v232 = &off_2BC1EC8;
                                                                      sub_2257A60(&v232);
                                                                      if ( v229 != v231 )
                                                                        operator delete(v229);
                                                                      v2 = *a1;
                                                                      if ( a1[1] != *a1 )
                                                                      {
LABEL_616:
                                                                        if ( v2[36] < 9.999999717180685e-10 )
                                                                          goto LABEL_617;
                                                                        v224 = v2[36];
                                                                        v234 = 0;
                                                                        v238 = &v229;
                                                                        v229 = v231;
                                                                        v230 = nullptr;
                                                                        v231[0] = 0;
                                                                        v233 = 0;
                                                                        v236 = 0;
                                                                        v237 = 1;
                                                                        v235 = nullptr;
                                                                        v232 = &off_2BC1EC8;
                                                                        sub_2257B70(&v232, 0, 0, 0);
                                                                        v106 = sub_971800((__int64)&v232, "return=");
                                                                        v228 = v224;
                                                                        v223 = "%.8f";
                                                                        v227 = _mm_loadh_ps((const double *)&v223);
                                                                        sub_2258820(v106, &v227);
                                                                        v226 = (unsigned __int64)v230;
                                                                        v223 = v230;
                                                                        v225 = v229;
                                                                        v107 = sub_22233B0(&v225, 48, -1) + 1;
                                                                        v227.m128_u64[0] = (unsigned __int64)v225;
                                                                        if ( v107 > v226 )
                                                                          v107 = v226;
                                                                        v108 = v226 - (_QWORD)v223 + v107;
                                                                        if ( v108 > v226 )
                                                                          v108 = v226;
                                                                        v227.m128_u64[1] = v108;
                                                                        sub_FE2260(a2, (__int64)&v227);
                                                                        v232 = &off_2BC1EC8;
                                                                        sub_2257A60(&v232);
                                                                        if ( v229 != v231 )
                                                                          operator delete(v229);
                                                                        v2 = *a1;
                                                                        if ( a1[1] != *a1 )
                                                                        {
LABEL_617:
                                                                          if ( v2[37] < 9.999999717180685e-10 )
                                                                            goto LABEL_618;
                                                                          v224 = v2[37];
                                                                          v234 = 0;
                                                                          v238 = &v229;
                                                                          v229 = v231;
                                                                          v230 = nullptr;
                                                                          v231[0] = 0;
                                                                          v233 = 0;
                                                                          v236 = 0;
                                                                          v237 = 1;
                                                                          v235 = nullptr;
                                                                          v232 = &off_2BC1EC8;
                                                                          sub_2257B70(&v232, 0, 0, 0);
                                                                          v124 = sub_971800(
                                                                                   (__int64)&v232,
                                                                                   "returns-nonnull-attribute=");
                                                                          v223 = "%.8f";
                                                                          v228 = v224;
                                                                          v227 = _mm_loadh_ps((const double *)&v223);
                                                                          sub_2258820(v124, &v227);
                                                                          v226 = (unsigned __int64)v230;
                                                                          v223 = v230;
                                                                          v225 = v229;
                                                                          v125 = sub_22233B0(&v225, 48, -1) + 1;
                                                                          v227.m128_u64[0] = (unsigned __int64)v225;
                                                                          if ( v125 > v226 )
                                                                            v125 = v226;
                                                                          v126 = v226 - (_QWORD)v223 + v125;
                                                                          if ( v126 > v226 )
                                                                            v126 = v226;
                                                                          v227.m128_u64[1] = v126;
                                                                          sub_FE2260(a2, (__int64)&v227);
                                                                          v232 = &off_2BC1EC8;
                                                                          sub_2257A60(&v232);
                                                                          if ( v229 != v231 )
                                                                            operator delete(v229);
                                                                          v2 = *a1;
                                                                          if ( a1[1] != *a1 )
                                                                          {
LABEL_618:
                                                                            if ( v2[38] < 9.999999717180685e-10 )
                                                                              goto LABEL_619;
                                                                            v224 = v2[38];
                                                                            v234 = 0;
                                                                            v238 = &v229;
                                                                            v229 = v231;
                                                                            v230 = nullptr;
                                                                            v231[0] = 0;
                                                                            v233 = 0;
                                                                            v236 = 0;
                                                                            v237 = 1;
                                                                            v235 = nullptr;
                                                                            v232 = &off_2BC1EC8;
                                                                            sub_2257B70(&v232, 0, 0, 0);
                                                                            v112 = sub_971800(
                                                                                     (__int64)&v232,
                                                                                     "shift-base=");
                                                                            v228 = v224;
                                                                            v223 = "%.8f";
                                                                            v227 = _mm_loadh_ps((const double *)&v223);
                                                                            sub_2258820(v112, &v227);
                                                                            v226 = (unsigned __int64)v230;
                                                                            v223 = v230;
                                                                            v225 = v229;
                                                                            v113 = sub_22233B0(&v225, 48, -1) + 1;
                                                                            v227.m128_u64[0] = (unsigned __int64)v225;
                                                                            if ( v113 > v226 )
                                                                              v113 = v226;
                                                                            v114 = v226 - (_QWORD)v223 + v113;
                                                                            if ( v114 > v226 )
                                                                              v114 = v226;
                                                                            v227.m128_u64[1] = v114;
                                                                            sub_FE2260(a2, (__int64)&v227);
                                                                            v232 = &off_2BC1EC8;
                                                                            sub_2257A60(&v232);
                                                                            if ( v229 != v231 )
                                                                              operator delete(v229);
                                                                            v2 = *a1;
                                                                            if ( a1[1] != *a1 )
                                                                            {
LABEL_619:
                                                                              if ( v2[39] < 9.999999717180685e-10 )
                                                                                goto LABEL_40;
                                                                              v224 = v2[39];
                                                                              v234 = 0;
                                                                              v238 = &v229;
                                                                              v229 = v231;
                                                                              v230 = nullptr;
                                                                              v231[0] = 0;
                                                                              v233 = 0;
                                                                              v236 = 0;
                                                                              v237 = 1;
                                                                              v235 = nullptr;
                                                                              v232 = &off_2BC1EC8;
                                                                              sub_2257B70(&v232, 0, 0, 0);
                                                                              v118 = sub_971800(
                                                                                       (__int64)&v232,
                                                                                       "shift-exponent=");
                                                                              v223 = "%.8f";
                                                                              v228 = v224;
                                                                              v227 = _mm_loadh_ps((const double *)&v223);
                                                                              sub_2258820(v118, &v227);
                                                                              v226 = (unsigned __int64)v230;
                                                                              v223 = v230;
                                                                              v225 = v229;
                                                                              v119 = sub_22233B0(&v225, 48, -1) + 1;
                                                                              v227.m128_u64[0] = (unsigned __int64)v225;
                                                                              if ( v119 > v226 )
                                                                                v119 = v226;
                                                                              v120 = v226 - (_QWORD)v223 + v119;
                                                                              if ( v120 > v226 )
                                                                                v120 = v226;
                                                                              v227.m128_u64[1] = v120;
                                                                              sub_FE2260(a2, (__int64)&v227);
                                                                              v232 = &off_2BC1EC8;
                                                                              sub_2257A60(&v232);
                                                                              if ( v229 != v231 )
                                                                                operator delete(v229);
                                                                              v2 = *a1;
                                                                              if ( a1[1] != *a1 )
                                                                              {
LABEL_40:
                                                                                v5 = v2[41];
                                                                                if ( v5 < 9.999999717180685e-10 )
                                                                                  goto LABEL_620;
                                                                                v229 = v231;
                                                                                v223 = *(const char **)&v5;
                                                                                v232 = &off_2BC1EC8;
                                                                                v230 = nullptr;
                                                                                v231[0] = 0;
                                                                                v233 = 0;
                                                                                v236 = 0;
                                                                                v237 = 1;
                                                                                v235 = nullptr;
                                                                                v234 = 0;
                                                                                v238 = &v229;
                                                                                sub_2257B70(&v232, 0, 0, 0);
                                                                                v85 = v223;
                                                                                v86 = v235;
                                                                                if ( *((_QWORD *)&v234 + 1)
                                                                                   - (_QWORD)v235 > 0x17u )
                                                                                {
                                                                                  si128 = _mm_load_si128((const __m128i *)&xmmword_23854D0);
                                                                                  v88 = &v232;
                                                                                  v235[1].m128i_i64[0] = 0x3D776F6C66726576LL;
                                                                                  *v86 = si128;
                                                                                  v235 = (__m128i *)((char *)v235 + 24);
                                                                                }
                                                                                else
                                                                                {
                                                                                  v87 = sub_22581D0(
                                                                                          &v232,
                                                                                          "signed-integer-overflow=",
                                                                                          24);
                                                                                  v85 = v223;
                                                                                  v88 = (__int64 (__fastcall ***)())v87;
                                                                                }
                                                                                v228 = *(double *)&v85;
                                                                                v223 = "%.8f";
                                                                                v227 = _mm_loadh_ps((const double *)&v223);
                                                                                sub_2258820(v88, &v227);
                                                                                v226 = (unsigned __int64)v230;
                                                                                v223 = v230;
                                                                                v225 = v229;
                                                                                v89 = sub_22233B0(&v225, 48, -1) + 1;
                                                                                v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                if ( v89 > v226 )
                                                                                  v89 = v226;
                                                                                v90 = v226 - (_QWORD)v223 + v89;
                                                                                if ( v90 > v226 )
                                                                                  v90 = v226;
                                                                                v227.m128_u64[1] = v90;
                                                                                sub_FE2260(a2, (__int64)&v227);
                                                                                v232 = &off_2BC1EC8;
                                                                                sub_2257A60(&v232);
                                                                                if ( v229 != v231 )
                                                                                  operator delete(v229);
                                                                                v2 = *a1;
                                                                                if ( a1[1] != *a1 )
                                                                                {
LABEL_620:
                                                                                  if ( v2[42] < 9.999999717180685e-10 )
                                                                                    goto LABEL_42;
                                                                                  v224 = v2[42];
                                                                                  v234 = 0;
                                                                                  v238 = &v229;
                                                                                  v229 = v231;
                                                                                  v230 = nullptr;
                                                                                  v231[0] = 0;
                                                                                  v233 = 0;
                                                                                  v236 = 0;
                                                                                  v237 = 1;
                                                                                  v235 = nullptr;
                                                                                  v232 = &off_2BC1EC8;
                                                                                  sub_2257B70(&v232, 0, 0, 0);
                                                                                  v97 = sub_971800(
                                                                                          (__int64)&v232,
                                                                                          "unreachable=");
                                                                                  v228 = v224;
                                                                                  v223 = "%.8f";
                                                                                  v227 = _mm_loadh_ps((const double *)&v223);
                                                                                  sub_2258820(v97, &v227);
                                                                                  v226 = (unsigned __int64)v230;
                                                                                  v223 = v230;
                                                                                  v225 = v229;
                                                                                  v98 = sub_22233B0(&v225, 48, -1) + 1;
                                                                                  v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                  if ( v98 > v226 )
                                                                                    v98 = v226;
                                                                                  v99 = v226 - (_QWORD)v223 + v98;
                                                                                  if ( v99 > v226 )
                                                                                    v99 = v226;
                                                                                  v227.m128_u64[1] = v99;
                                                                                  sub_FE2260(a2, (__int64)&v227);
                                                                                  v232 = &off_2BC1EC8;
                                                                                  sub_2257A60(&v232);
                                                                                  if ( v229 != v231 )
                                                                                    operator delete(v229);
                                                                                  v2 = *a1;
                                                                                  if ( a1[1] != *a1 )
                                                                                  {
LABEL_42:
                                                                                    v6 = v2[43];
                                                                                    if ( v6 < 9.999999717180685e-10 )
                                                                                      goto LABEL_43;
                                                                                    v229 = v231;
                                                                                    v223 = *(const char **)&v6;
                                                                                    v232 = &off_2BC1EC8;
                                                                                    v230 = nullptr;
                                                                                    v231[0] = 0;
                                                                                    v233 = 0;
                                                                                    v236 = 0;
                                                                                    v237 = 1;
                                                                                    v235 = nullptr;
                                                                                    v234 = 0;
                                                                                    v238 = &v229;
                                                                                    sub_2257B70(&v232, 0, 0, 0);
                                                                                    v91 = v223;
                                                                                    v92 = v235;
                                                                                    if ( *((_QWORD *)&v234 + 1)
                                                                                       - (_QWORD)v235 > 9u )
                                                                                    {
                                                                                      v94 = &v232;
                                                                                      v235->m128i_i64[0] = 0x6E756F622D616C76LL;
                                                                                      v92->m128i_i16[4] = 15716;
                                                                                      v235 = (__m128i *)((char *)v235 + 10);
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      v93 = sub_22581D0(
                                                                                              &v232,
                                                                                              "vla-bound=",
                                                                                              10);
                                                                                      v91 = v223;
                                                                                      v94 = (__int64 (__fastcall ***)())v93;
                                                                                    }
                                                                                    v228 = *(double *)&v91;
                                                                                    v223 = "%.8f";
                                                                                    v227 = _mm_loadh_ps((const double *)&v223);
                                                                                    sub_2258820(v94, &v227);
                                                                                    v226 = (unsigned __int64)v230;
                                                                                    v223 = v230;
                                                                                    v225 = v229;
                                                                                    v95 = sub_22233B0(&v225, 48, -1) + 1;
                                                                                    v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                    if ( v95 > v226 )
                                                                                      v95 = v226;
                                                                                    v96 = v226 - (_QWORD)v223 + v95;
                                                                                    if ( v96 > v226 )
                                                                                      v96 = v226;
                                                                                    v227.m128_u64[1] = v96;
                                                                                    sub_FE2260(a2, (__int64)&v227);
                                                                                    v232 = &off_2BC1EC8;
                                                                                    sub_2257A60(&v232);
                                                                                    if ( v229 != v231 )
                                                                                      operator delete(v229);
                                                                                    v2 = *a1;
                                                                                    if ( a1[1] != *a1 )
                                                                                    {
LABEL_43:
                                                                                      v7 = v2[44];
                                                                                      if ( v7 < 9.999999717180685e-10 )
                                                                                        goto LABEL_621;
                                                                                      v229 = v231;
                                                                                      v223 = *(const char **)&v7;
                                                                                      v232 = &off_2BC1EC8;
                                                                                      v230 = nullptr;
                                                                                      v231[0] = 0;
                                                                                      v233 = 0;
                                                                                      v236 = 0;
                                                                                      v237 = 1;
                                                                                      v235 = nullptr;
                                                                                      v234 = 0;
                                                                                      v238 = &v229;
                                                                                      sub_2257B70(&v232, 0, 0, 0);
                                                                                      v100 = v223;
                                                                                      v101 = v235;
                                                                                      if ( *((_QWORD *)&v234 + 1)
                                                                                         - (_QWORD)v235 > 4u )
                                                                                      {
                                                                                        v235->m128i_i32[0] = 1920233590;
                                                                                        v103 = &v232;
                                                                                        v101->m128i_i8[4] = 61;
                                                                                        v235 = (__m128i *)((char *)v235 + 5);
                                                                                      }
                                                                                      else
                                                                                      {
                                                                                        v102 = sub_22581D0(
                                                                                                 &v232,
                                                                                                 "vptr=",
                                                                                                 5);
                                                                                        v100 = v223;
                                                                                        v103 = (__int64 (__fastcall ***)())v102;
                                                                                      }
                                                                                      v228 = *(double *)&v100;
                                                                                      v223 = "%.8f";
                                                                                      v227 = _mm_loadh_ps((const double *)&v223);
                                                                                      sub_2258820(v103, &v227);
                                                                                      v226 = (unsigned __int64)v230;
                                                                                      v223 = v230;
                                                                                      v225 = v229;
                                                                                      v104 = sub_22233B0(&v225, 48, -1)
                                                                                           + 1;
                                                                                      v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                      if ( v104 > v226 )
                                                                                        v104 = v226;
                                                                                      v105 = v226 - (_QWORD)v223 + v104;
                                                                                      if ( v105 > v226 )
                                                                                        v105 = v226;
                                                                                      v227.m128_u64[1] = v105;
                                                                                      sub_FE2260(a2, (__int64)&v227);
                                                                                      v232 = &off_2BC1EC8;
                                                                                      sub_2257A60(&v232);
                                                                                      if ( v229 != v231 )
                                                                                        operator delete(v229);
                                                                                      v2 = *a1;
                                                                                      if ( a1[1] != *a1 )
                                                                                      {
LABEL_621:
                                                                                        if ( v2[45] < 9.999999717180685e-10 )
                                                                                          goto LABEL_622;
                                                                                        v224 = v2[45];
                                                                                        v234 = 0;
                                                                                        v238 = &v229;
                                                                                        v229 = v231;
                                                                                        v230 = nullptr;
                                                                                        v231[0] = 0;
                                                                                        v233 = 0;
                                                                                        v236 = 0;
                                                                                        v237 = 1;
                                                                                        v235 = nullptr;
                                                                                        v232 = &off_2BC1EC8;
                                                                                        sub_2257B70(&v232, 0, 0, 0);
                                                                                        v82 = sub_971800(
                                                                                                (__int64)&v232,
                                                                                                "unsigned-integer-overflow=");
                                                                                        v223 = "%.8f";
                                                                                        v228 = v224;
                                                                                        v227 = _mm_loadh_ps((const double *)&v223);
                                                                                        sub_2258820(v82, &v227);
                                                                                        v226 = (unsigned __int64)v230;
                                                                                        v223 = v230;
                                                                                        v225 = v229;
                                                                                        v83 = sub_22233B0(&v225, 48, -1)
                                                                                            + 1;
                                                                                        v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                        if ( v83 > v226 )
                                                                                          v83 = v226;
                                                                                        v84 = v226 - (_QWORD)v223 + v83;
                                                                                        if ( v84 > v226 )
                                                                                          v84 = v226;
                                                                                        v227.m128_u64[1] = v84;
                                                                                        sub_FE2260(a2, (__int64)&v227);
                                                                                        v232 = &off_2BC1EC8;
                                                                                        sub_2257A60(&v232);
                                                                                        if ( v229 != v231 )
                                                                                          operator delete(v229);
                                                                                        v2 = *a1;
                                                                                        if ( a1[1] != *a1 )
                                                                                        {
LABEL_622:
                                                                                          if ( v2[46] < 9.999999717180685e-10 )
                                                                                            goto LABEL_46;
                                                                                          v224 = v2[46];
                                                                                          v234 = 0;
                                                                                          v238 = &v229;
                                                                                          v229 = v231;
                                                                                          v230 = nullptr;
                                                                                          v231[0] = 0;
                                                                                          v233 = 0;
                                                                                          v236 = 0;
                                                                                          v237 = 1;
                                                                                          v235 = nullptr;
                                                                                          v232 = &off_2BC1EC8;
                                                                                          sub_2257B70(&v232, 0, 0, 0);
                                                                                          v79 = sub_971800(
                                                                                                  (__int64)&v232,
                                                                                                  "unsigned-shift-base=");
                                                                                          v228 = v224;
                                                                                          v223 = "%.8f";
                                                                                          v227 = _mm_loadh_ps((const double *)&v223);
                                                                                          sub_2258820(v79, &v227);
                                                                                          v226 = (unsigned __int64)v230;
                                                                                          v223 = v230;
                                                                                          v225 = v229;
                                                                                          v80 = sub_22233B0(
                                                                                                  &v225,
                                                                                                  48,
                                                                                                  -1)
                                                                                              + 1;
                                                                                          v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                          if ( v80 > v226 )
                                                                                            v80 = v226;
                                                                                          v81 = v226
                                                                                              - (_QWORD)v223
                                                                                              + v80;
                                                                                          if ( v81 > v226 )
                                                                                            v81 = v226;
                                                                                          v227.m128_u64[1] = v81;
                                                                                          sub_FE2260(a2, (__int64)&v227);
                                                                                          v232 = &off_2BC1EC8;
                                                                                          sub_2257A60(&v232);
                                                                                          if ( v229 != v231 )
                                                                                            operator delete(v229);
                                                                                          v2 = *a1;
                                                                                          if ( a1[1] != *a1 )
                                                                                          {
LABEL_46:
                                                                                            v8 = v2[47];
                                                                                            if ( v8 < 9.999999717180685e-10 )
                                                                                              goto LABEL_623;
                                                                                            v229 = v231;
                                                                                            v223 = *(const char **)&v8;
                                                                                            v232 = &off_2BC1EC8;
                                                                                            v230 = nullptr;
                                                                                            v231[0] = 0;
                                                                                            v233 = 0;
                                                                                            v236 = 0;
                                                                                            v237 = 1;
                                                                                            v235 = nullptr;
                                                                                            v234 = 0;
                                                                                            v238 = &v229;
                                                                                            sub_2257B70(&v232, 0, 0, 0);
                                                                                            v73 = v223;
                                                                                            v74 = (__int64 *)v235;
                                                                                            if ( *((_QWORD *)&v234 + 1)
                                                                                               - (_QWORD)v235 > 8u )
                                                                                            {
                                                                                              v235->m128i_i8[8] = 61;
                                                                                              v76 = &v232;
                                                                                              *v74 = 0x776F6C6661746164LL;
                                                                                              v235 = (__m128i *)((char *)v235 + 9);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              v75 = sub_22581D0(&v232, "dataflow=", 9);
                                                                                              v73 = v223;
                                                                                              v76 = (__int64 (__fastcall ***)())v75;
                                                                                            }
                                                                                            v228 = *(double *)&v73;
                                                                                            v223 = "%.8f";
                                                                                            v227 = _mm_loadh_ps((const double *)&v223);
                                                                                            sub_2258820(v76, &v227);
                                                                                            v226 = (unsigned __int64)v230;
                                                                                            v223 = v230;
                                                                                            v225 = v229;
                                                                                            v77 = sub_22233B0(
                                                                                                    &v225,
                                                                                                    48,
                                                                                                    -1)
                                                                                                + 1;
                                                                                            v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                            if ( v77 > v226 )
                                                                                              v77 = v226;
                                                                                            v78 = v226
                                                                                                - (_QWORD)v223
                                                                                                + v77;
                                                                                            if ( v78 > v226 )
                                                                                              v78 = v226;
                                                                                            v227.m128_u64[1] = v78;
                                                                                            sub_FE2260(
                                                                                              a2,
                                                                                              (__int64)&v227);
                                                                                            v232 = &off_2BC1EC8;
                                                                                            sub_2257A60(&v232);
                                                                                            if ( v229 != v231 )
                                                                                              operator delete(v229);
                                                                                            v2 = *a1;
                                                                                            if ( a1[1] != *a1 )
                                                                                            {
LABEL_623:
                                                                                              if ( v2[48] < 9.999999717180685e-10 )
                                                                                                goto LABEL_48;
                                                                                              v224 = v2[48];
                                                                                              v234 = 0;
                                                                                              v238 = &v229;
                                                                                              v229 = v231;
                                                                                              v230 = nullptr;
                                                                                              v231[0] = 0;
                                                                                              v233 = 0;
                                                                                              v236 = 0;
                                                                                              v237 = 1;
                                                                                              v235 = nullptr;
                                                                                              v232 = &off_2BC1EC8;
                                                                                              sub_2257B70(
                                                                                                &v232,
                                                                                                0,
                                                                                                0,
                                                                                                0);
                                                                                              v70 = sub_971800((__int64)&v232, "cfi-cast-strict=");
                                                                                              v223 = "%.8f";
                                                                                              v228 = v224;
                                                                                              v227 = _mm_loadh_ps((const double *)&v223);
                                                                                              sub_2258820(v70, &v227);
                                                                                              v226 = (unsigned __int64)v230;
                                                                                              v223 = v230;
                                                                                              v225 = v229;
                                                                                              v71 = sub_22233B0(&v225, 48, -1) + 1;
                                                                                              v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                              if ( v71 > v226 )
                                                                                                v71 = v226;
                                                                                              v72 = v226 - (_QWORD)v223 + v71;
                                                                                              if ( v72 > v226 )
                                                                                                v72 = v226;
                                                                                              v227.m128_u64[1] = v72;
                                                                                              sub_FE2260(
                                                                                                a2,
                                                                                                (__int64)&v227);
                                                                                              v232 = &off_2BC1EC8;
                                                                                              sub_2257A60(&v232);
                                                                                              if ( v229 != v231 )
                                                                                                operator delete(v229);
                                                                                              v2 = *a1;
                                                                                              if ( a1[1] != *a1 )
                                                                                              {
LABEL_48:
                                                                                                v9 = v2[49];
                                                                                                if ( v9 < 9.999999717180685e-10 )
                                                                                                  goto LABEL_49;
                                                                                                v229 = v231;
                                                                                                v223 = *(const char **)&v9;
                                                                                                v232 = &off_2BC1EC8;
                                                                                                v230 = nullptr;
                                                                                                v231[0] = 0;
                                                                                                v233 = 0;
                                                                                                v236 = 0;
                                                                                                v237 = 1;
                                                                                                v235 = nullptr;
                                                                                                v234 = 0;
                                                                                                v238 = &v229;
                                                                                                sub_2257B70(
                                                                                                  &v232,
                                                                                                  0,
                                                                                                  0,
                                                                                                  0);
                                                                                                v64 = v223;
                                                                                                v65 = v235;
                                                                                                if ( *((_QWORD *)&v234 + 1) - (_QWORD)v235 > 0x10u )
                                                                                                {
                                                                                                  v222 = _mm_load_si128((const __m128i *)&xmmword_23854E0);
                                                                                                  v235[1].m128i_i8[0] = 61;
                                                                                                  v67 = &v232;
                                                                                                  *v65 = v222;
                                                                                                  v235 = (__m128i *)((char *)v235 + 17);
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                  v66 = sub_22581D0(&v232, "cfi-derived-cast=", 17);
                                                                                                  v64 = v223;
                                                                                                  v67 = (__int64 (__fastcall ***)())v66;
                                                                                                }
                                                                                                v228 = *(double *)&v64;
                                                                                                v223 = "%.8f";
                                                                                                v227 = _mm_loadh_ps((const double *)&v223);
                                                                                                sub_2258820(v67, &v227);
                                                                                                v226 = (unsigned __int64)v230;
                                                                                                v223 = v230;
                                                                                                v225 = v229;
                                                                                                v68 = sub_22233B0(&v225, 48, -1) + 1;
                                                                                                v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                                if ( v68 > v226 )
                                                                                                  v68 = v226;
                                                                                                v69 = v226 - (_QWORD)v223 + v68;
                                                                                                if ( v69 > v226 )
                                                                                                  v69 = v226;
                                                                                                v227.m128_u64[1] = v69;
                                                                                                sub_FE2260(
                                                                                                  a2,
                                                                                                  (__int64)&v227);
                                                                                                v232 = &off_2BC1EC8;
                                                                                                sub_2257A60(&v232);
                                                                                                if ( v229 != v231 )
                                                                                                  operator delete(v229);
                                                                                                v2 = *a1;
                                                                                                if ( a1[1] != *a1 )
                                                                                                {
LABEL_49:
                                                                                                  v10 = v2[50];
                                                                                                  if ( v10 < 9.999999717180685e-10 )
                                                                                                    goto LABEL_624;
                                                                                                  v229 = v231;
                                                                                                  v223 = *(const char **)&v10;
                                                                                                  v232 = &off_2BC1EC8;
                                                                                                  v230 = nullptr;
                                                                                                  v231[0] = 0;
                                                                                                  v233 = 0;
                                                                                                  v236 = 0;
                                                                                                  v237 = 1;
                                                                                                  v235 = nullptr;
                                                                                                  v234 = 0;
                                                                                                  v238 = &v229;
                                                                                                  sub_2257B70(
                                                                                                    &v232,
                                                                                                    0,
                                                                                                    0,
                                                                                                    0);
                                                                                                  v58 = v223;
                                                                                                  v59 = v235;
                                                                                                  if ( *((_QWORD *)&v234 + 1) - (_QWORD)v235 > 9u )
                                                                                                  {
                                                                                                    v61 = &v232;
                                                                                                    v235->m128i_i64[0] = 0x6C6163692D696663LL;
                                                                                                    v59->m128i_i16[4] = 15724;
                                                                                                    v235 = (__m128i *)((char *)v235 + 10);
                                                                                                  }
                                                                                                  else
                                                                                                  {
                                                                                                    v60 = sub_22581D0(&v232, "cfi-icall=", 10);
                                                                                                    v58 = v223;
                                                                                                    v61 = (__int64 (__fastcall ***)())v60;
                                                                                                  }
                                                                                                  v228 = *(double *)&v58;
                                                                                                  v223 = "%.8f";
                                                                                                  v227 = _mm_loadh_ps((const double *)&v223);
                                                                                                  sub_2258820(
                                                                                                    v61,
                                                                                                    &v227);
                                                                                                  v226 = (unsigned __int64)v230;
                                                                                                  v223 = v230;
                                                                                                  v225 = v229;
                                                                                                  v62 = sub_22233B0(&v225, 48, -1) + 1;
                                                                                                  v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                                  if ( v62 > v226 )
                                                                                                    v62 = v226;
                                                                                                  v63 = v226 - (_QWORD)v223 + v62;
                                                                                                  if ( v63 > v226 )
                                                                                                    v63 = v226;
                                                                                                  v227.m128_u64[1] = v63;
                                                                                                  sub_FE2260(
                                                                                                    a2,
                                                                                                    (__int64)&v227);
                                                                                                  v232 = &off_2BC1EC8;
                                                                                                  sub_2257A60(&v232);
                                                                                                  if ( v229 != v231 )
                                                                                                    operator delete(v229);
                                                                                                  v2 = *a1;
                                                                                                  if ( a1[1] != *a1 )
                                                                                                  {
LABEL_624:
                                                                                                    if ( v2[51] < 9.999999717180685e-10 )
                                                                                                      goto LABEL_625;
                                                                                                    v224 = v2[51];
                                                                                                    v234 = 0;
                                                                                                    v238 = &v229;
                                                                                                    v229 = v231;
                                                                                                    v230 = nullptr;
                                                                                                    v231[0] = 0;
                                                                                                    v233 = 0;
                                                                                                    v236 = 0;
                                                                                                    v237 = 1;
                                                                                                    v235 = nullptr;
                                                                                                    v232 = &off_2BC1EC8;
                                                                                                    sub_2257B70(&v232, 0, 0, 0);
                                                                                                    v49 = sub_971800((__int64)&v232, "cfi-mfcall=");
                                                                                                    v228 = v224;
                                                                                                    v223 = "%.8f";
                                                                                                    v227 = _mm_loadh_ps((const double *)&v223);
                                                                                                    sub_2258820(v49, &v227);
                                                                                                    v226 = (unsigned __int64)v230;
                                                                                                    v223 = v230;
                                                                                                    v225 = v229;
                                                                                                    v50 = sub_22233B0(&v225, 48, -1) + 1;
                                                                                                    v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                                    if ( v50 > v226 )
                                                                                                      v50 = v226;
                                                                                                    v51 = v226 - (_QWORD)v223 + v50;
                                                                                                    if ( v51 > v226 )
                                                                                                      v51 = v226;
                                                                                                    v227.m128_u64[1] = v51;
                                                                                                    sub_FE2260(a2, (__int64)&v227);
                                                                                                    v232 = &off_2BC1EC8;
                                                                                                    sub_2257A60(&v232);
                                                                                                    if ( v229 != v231 )
                                                                                                      operator delete(v229);
                                                                                                    v2 = *a1;
                                                                                                    if ( a1[1] != *a1 )
                                                                                                    {
LABEL_625:
                                                                                                      if ( v2[52] < 9.999999717180685e-10 )
                                                                                                        goto LABEL_626;
                                                                                                      v224 = v2[52];
                                                                                                      v234 = 0;
                                                                                                      v238 = &v229;
                                                                                                      v229 = v231;
                                                                                                      v230 = nullptr;
                                                                                                      v231[0] = 0;
                                                                                                      v233 = 0;
                                                                                                      v236 = 0;
                                                                                                      v237 = 1;
                                                                                                      v235 = nullptr;
                                                                                                      v232 = &off_2BC1EC8;
                                                                                                      sub_2257B70(&v232, 0, 0, 0);
                                                                                                      v55 = sub_971800((__int64)&v232, "cfi-unrelated-cast=");
                                                                                                      v223 = "%.8f";
                                                                                                      v228 = v224;
                                                                                                      v227 = _mm_loadh_ps((const double *)&v223);
                                                                                                      sub_2258820(v55, &v227);
                                                                                                      v226 = (unsigned __int64)v230;
                                                                                                      v223 = v230;
                                                                                                      v225 = v229;
                                                                                                      v56 = sub_22233B0(&v225, 48, -1) + 1;
                                                                                                      v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                                      if ( v56 > v226 )
                                                                                                        v56 = v226;
                                                                                                      v57 = v226 - (_QWORD)v223 + v56;
                                                                                                      if ( v57 > v226 )
                                                                                                        v57 = v226;
                                                                                                      v227.m128_u64[1] = v57;
                                                                                                      sub_FE2260(a2, (__int64)&v227);
                                                                                                      v232 = &off_2BC1EC8;
                                                                                                      sub_2257A60(&v232);
                                                                                                      if ( v229 != v231 )
                                                                                                        operator delete(v229);
                                                                                                      v2 = *a1;
                                                                                                      if ( a1[1] != *a1 )
                                                                                                      {
LABEL_626:
                                                                                                        if ( v2[53] < 9.999999717180685e-10 )
                                                                                                          goto LABEL_627;
                                                                                                        v224 = v2[53];
                                                                                                        v234 = 0;
                                                                                                        v238 = &v229;
                                                                                                        v229 = v231;
                                                                                                        v230 = nullptr;
                                                                                                        v231[0] = 0;
                                                                                                        v233 = 0;
                                                                                                        v236 = 0;
                                                                                                        v237 = 1;
                                                                                                        v235 = nullptr;
                                                                                                        v232 = &off_2BC1EC8;
                                                                                                        sub_2257B70(&v232, 0, 0, 0);
                                                                                                        v43 = sub_971800((__int64)&v232, "cfi-nvcall=");
                                                                                                        v228 = v224;
                                                                                                        v223 = "%.8f";
                                                                                                        v227 = _mm_loadh_ps((const double *)&v223);
                                                                                                        sub_2258820(v43, &v227);
                                                                                                        v226 = (unsigned __int64)v230;
                                                                                                        v223 = v230;
                                                                                                        v225 = v229;
                                                                                                        v44 = sub_22233B0(&v225, 48, -1) + 1;
                                                                                                        v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                                        if ( v44 > v226 )
                                                                                                          v44 = v226;
                                                                                                        v45 = v226 - (_QWORD)v223 + v44;
                                                                                                        if ( v45 > v226 )
                                                                                                          v45 = v226;
                                                                                                        v227.m128_u64[1] = v45;
                                                                                                        sub_FE2260(a2, (__int64)&v227);
                                                                                                        v232 = &off_2BC1EC8;
                                                                                                        sub_2257A60(&v232);
                                                                                                        if ( v229 != v231 )
                                                                                                          operator delete(v229);
                                                                                                        v2 = *a1;
                                                                                                        if ( a1[1] != *a1 )
                                                                                                        {
LABEL_627:
                                                                                                          if ( v2[54] < 9.999999717180685e-10 )
                                                                                                            goto LABEL_628;
                                                                                                          v224 = v2[54];
                                                                                                          v234 = 0;
                                                                                                          v238 = &v229;
                                                                                                          v229 = v231;
                                                                                                          v230 = nullptr;
                                                                                                          v231[0] = 0;
                                                                                                          v233 = 0;
                                                                                                          v236 = 0;
                                                                                                          v237 = 1;
                                                                                                          v235 = nullptr;
                                                                                                          v232 = &off_2BC1EC8;
                                                                                                          sub_2257B70(&v232, 0, 0, 0);
                                                                                                          v52 = sub_971800((__int64)&v232, "cfi-vcall=");
                                                                                                          v223 = "%.8f";
                                                                                                          v228 = v224;
                                                                                                          v227 = _mm_loadh_ps((const double *)&v223);
                                                                                                          sub_2258820(v52, &v227);
                                                                                                          v226 = (unsigned __int64)v230;
                                                                                                          v223 = v230;
                                                                                                          v225 = v229;
                                                                                                          v53 = sub_22233B0(&v225, 48, -1) + 1;
                                                                                                          v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                                          if ( v53 > v226 )
                                                                                                            v53 = v226;
                                                                                                          v54 = v226 - (_QWORD)v223 + v53;
                                                                                                          if ( v54 > v226 )
                                                                                                            v54 = v226;
                                                                                                          v227.m128_u64[1] = v54;
                                                                                                          sub_FE2260(a2, (__int64)&v227);
                                                                                                          v232 = &off_2BC1EC8;
                                                                                                          sub_2257A60(&v232);
                                                                                                          if ( v229 != v231 )
                                                                                                            operator delete(v229);
                                                                                                          v2 = *a1;
                                                                                                          if ( a1[1] != *a1 )
                                                                                                          {
LABEL_628:
                                                                                                            if ( v2[56] < 9.999999717180685e-10 )
                                                                                                              goto LABEL_629;
                                                                                                            v224 = v2[56];
                                                                                                            v234 = 0;
                                                                                                            v238 = &v229;
                                                                                                            v229 = v231;
                                                                                                            v230 = nullptr;
                                                                                                            v231[0] = 0;
                                                                                                            v233 = 0;
                                                                                                            v236 = 0;
                                                                                                            v237 = 1;
                                                                                                            v235 = nullptr;
                                                                                                            v232 = &off_2BC1EC8;
                                                                                                            sub_2257B70(&v232, 0, 0, 0);
                                                                                                            v46 = sub_971800((__int64)&v232, "kcfi=");
                                                                                                            v228 = v224;
                                                                                                            v223 = "%.8f";
                                                                                                            v227 = _mm_loadh_ps((const double *)&v223);
                                                                                                            sub_2258820(v46, &v227);
                                                                                                            v226 = (unsigned __int64)v230;
                                                                                                            v223 = v230;
                                                                                                            v225 = v229;
                                                                                                            v47 = sub_22233B0(&v225, 48, -1) + 1;
                                                                                                            v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                                            if ( v47 > v226 )
                                                                                                              v47 = v226;
                                                                                                            v48 = v226 - (_QWORD)v223 + v47;
                                                                                                            if ( v48 > v226 )
                                                                                                              v48 = v226;
                                                                                                            v227.m128_u64[1] = v48;
                                                                                                            sub_FE2260(a2, (__int64)&v227);
                                                                                                            v232 = &off_2BC1EC8;
                                                                                                            sub_2257A60(&v232);
                                                                                                            if ( v229 != v231 )
                                                                                                              operator delete(v229);
                                                                                                            v2 = *a1;
                                                                                                            if ( a1[1] != *a1 )
                                                                                                            {
LABEL_629:
                                                                                                              if ( v2[57] < 9.999999717180685e-10 )
                                                                                                                goto LABEL_630;
                                                                                                              v224 = v2[57];
                                                                                                              v234 = 0;
                                                                                                              v238 = &v229;
                                                                                                              v229 = v231;
                                                                                                              v230 = nullptr;
                                                                                                              v231[0] = 0;
                                                                                                              v233 = 0;
                                                                                                              v236 = 0;
                                                                                                              v237 = 1;
                                                                                                              v235 = nullptr;
                                                                                                              v232 = &off_2BC1EC8;
                                                                                                              sub_2257B70(&v232, 0, 0, 0);
                                                                                                              v40 = sub_971800((__int64)&v232, "safe-stack=");
                                                                                                              v223 = "%.8f";
                                                                                                              v228 = v224;
                                                                                                              v227 = _mm_loadh_ps((const double *)&v223);
                                                                                                              sub_2258820(v40, &v227);
                                                                                                              v226 = (unsigned __int64)v230;
                                                                                                              v223 = v230;
                                                                                                              v225 = v229;
                                                                                                              v41 = sub_22233B0(&v225, 48, -1) + 1;
                                                                                                              v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                                              if ( v41 > v226 )
                                                                                                                v41 = v226;
                                                                                                              v42 = v226 - (_QWORD)v223 + v41;
                                                                                                              if ( v42 > v226 )
                                                                                                                v42 = v226;
                                                                                                              v227.m128_u64[1] = v42;
                                                                                                              sub_FE2260(a2, (__int64)&v227);
                                                                                                              v232 = &off_2BC1EC8;
                                                                                                              sub_2257A60(&v232);
                                                                                                              if ( v229 != v231 )
                                                                                                                operator delete(v229);
                                                                                                              v2 = *a1;
                                                                                                              if ( a1[1] != *a1 )
                                                                                                              {
LABEL_630:
                                                                                                                if ( v2[58] < 9.999999717180685e-10 )
                                                                                                                  goto LABEL_57;
                                                                                                                v224 = v2[58];
                                                                                                                v234 = 0;
                                                                                                                v238 = &v229;
                                                                                                                v229 = v231;
                                                                                                                v230 = nullptr;
                                                                                                                v231[0] = 0;
                                                                                                                v233 = 0;
                                                                                                                v236 = 0;
                                                                                                                v237 = 1;
                                                                                                                v235 = nullptr;
                                                                                                                v232 = &off_2BC1EC8;
                                                                                                                sub_2257B70(&v232, 0, 0, 0);
                                                                                                                v37 = sub_971800((__int64)&v232, "shadow-call-stack=");
                                                                                                                v228 = v224;
                                                                                                                v223 = "%.8f";
                                                                                                                v227 = _mm_loadh_ps((const double *)&v223);
                                                                                                                sub_2258820(v37, &v227);
                                                                                                                v226 = (unsigned __int64)v230;
                                                                                                                v223 = v230;
                                                                                                                v225 = v229;
                                                                                                                v38 = sub_22233B0(&v225, 48, -1) + 1;
                                                                                                                v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                                                if ( v38 > v226 )
                                                                                                                  v38 = v226;
                                                                                                                v39 = v226 - (_QWORD)v223 + v38;
                                                                                                                if ( v39 > v226 )
                                                                                                                  v39 = v226;
                                                                                                                v227.m128_u64[1] = v39;
                                                                                                                sub_FE2260(a2, (__int64)&v227);
                                                                                                                v232 = &off_2BC1EC8;
                                                                                                                sub_2257A60(&v232);
                                                                                                                if ( v229 != v231 )
                                                                                                                  operator delete(v229);
                                                                                                                v2 = *a1;
                                                                                                                if ( a1[1] != *a1 )
                                                                                                                {
LABEL_57:
                                                                                                                  v11 = v2[61];
                                                                                                                  if ( v11 < 9.999999717180685e-10 )
                                                                                                                    goto LABEL_631;
                                                                                                                  v229 = v231;
                                                                                                                  v223 = *(const char **)&v11;
                                                                                                                  v232 = &off_2BC1EC8;
                                                                                                                  v230 = nullptr;
                                                                                                                  v231[0] = 0;
                                                                                                                  v233 = 0;
                                                                                                                  v236 = 0;
                                                                                                                  v237 = 1;
                                                                                                                  v235 = nullptr;
                                                                                                                  v234 = 0;
                                                                                                                  v238 = &v229;
                                                                                                                  sub_2257B70(&v232, 0, 0, 0);
                                                                                                                  v31 = v223;
                                                                                                                  v32 = v235;
                                                                                                                  if ( *((_QWORD *)&v234 + 1) - (_QWORD)v235 > 0x24u )
                                                                                                                  {
                                                                                                                    v220 = _mm_load_si128((const __m128i *)&xmmword_23854F0);
                                                                                                                    v235[2].m128i_i32[0] = 1852795252;
                                                                                                                    v34 = &v232;
                                                                                                                    v32[2].m128i_i8[4] = 61;
                                                                                                                    *v32 = v220;
                                                                                                                    v32[1] = _mm_load_si128((const __m128i *)&xmmword_2385500);
                                                                                                                    v235 = (__m128i *)((char *)v235 + 37);
                                                                                                                  }
                                                                                                                  else
                                                                                                                  {
                                                                                                                    v33 = sub_22581D0(&v232, "implicit-unsigned-integer-truncation=", 37);
                                                                                                                    v31 = v223;
                                                                                                                    v34 = (__int64 (__fastcall ***)())v33;
                                                                                                                  }
                                                                                                                  v228 = *(double *)&v31;
                                                                                                                  v223 = "%.8f";
                                                                                                                  v227 = _mm_loadh_ps((const double *)&v223);
                                                                                                                  sub_2258820(v34, &v227);
                                                                                                                  v226 = (unsigned __int64)v230;
                                                                                                                  v223 = v230;
                                                                                                                  v225 = v229;
                                                                                                                  v35 = sub_22233B0(&v225, 48, -1) + 1;
                                                                                                                  v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                                                  if ( v35 > v226 )
                                                                                                                    v35 = v226;
                                                                                                                  v36 = v226 - (_QWORD)v223 + v35;
                                                                                                                  if ( v36 > v226 )
                                                                                                                    v36 = v226;
                                                                                                                  v227.m128_u64[1] = v36;
                                                                                                                  sub_FE2260(a2, (__int64)&v227);
                                                                                                                  v232 = &off_2BC1EC8;
                                                                                                                  sub_2257A60(&v232);
                                                                                                                  if ( v229 != v231 )
                                                                                                                    operator delete(v229);
                                                                                                                  v2 = *a1;
                                                                                                                  if ( a1[1] != *a1 )
                                                                                                                  {
LABEL_631:
                                                                                                                    if ( v2[62] < 9.999999717180685e-10 )
                                                                                                                      goto LABEL_632;
                                                                                                                    v224 = v2[62];
                                                                                                                    v234 = 0;
                                                                                                                    v238 = &v229;
                                                                                                                    v229 = v231;
                                                                                                                    v230 = nullptr;
                                                                                                                    v231[0] = 0;
                                                                                                                    v233 = 0;
                                                                                                                    v236 = 0;
                                                                                                                    v237 = 1;
                                                                                                                    v235 = nullptr;
                                                                                                                    v232 = &off_2BC1EC8;
                                                                                                                    sub_2257B70(&v232, 0, 0, 0);
                                                                                                                    v25 = sub_971800((__int64)&v232, "implicit-signed-integer-truncation=");
                                                                                                                    v223 = "%.8f";
                                                                                                                    v228 = v224;
                                                                                                                    v227 = _mm_loadh_ps((const double *)&v223);
                                                                                                                    sub_2258820(v25, &v227);
                                                                                                                    v226 = (unsigned __int64)v230;
                                                                                                                    v223 = v230;
                                                                                                                    v225 = v229;
                                                                                                                    v26 = sub_22233B0(&v225, 48, -1) + 1;
                                                                                                                    v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                                                    if ( v26 > v226 )
                                                                                                                      v26 = v226;
                                                                                                                    v27 = v226 - (_QWORD)v223 + v26;
                                                                                                                    if ( v27 > v226 )
                                                                                                                      v27 = v226;
                                                                                                                    v227.m128_u64[1] = v27;
                                                                                                                    sub_FE2260(a2, (__int64)&v227);
                                                                                                                    v232 = &off_2BC1EC8;
                                                                                                                    sub_2257A60(&v232);
                                                                                                                    if ( v229 != v231 )
                                                                                                                      operator delete(v229);
                                                                                                                    v2 = *a1;
                                                                                                                    if ( a1[1] != *a1 )
                                                                                                                    {
LABEL_632:
                                                                                                                      if ( v2[64] < 9.999999717180685e-10 )
                                                                                                                        goto LABEL_633;
                                                                                                                      v224 = v2[64];
                                                                                                                      v234 = 0;
                                                                                                                      v238 = &v229;
                                                                                                                      v229 = v231;
                                                                                                                      v230 = nullptr;
                                                                                                                      v231[0] = 0;
                                                                                                                      v233 = 0;
                                                                                                                      v236 = 0;
                                                                                                                      v237 = 1;
                                                                                                                      v235 = nullptr;
                                                                                                                      v232 = &off_2BC1EC8;
                                                                                                                      sub_2257B70(&v232, 0, 0, 0);
                                                                                                                      v28 = sub_971800((__int64)&v232, "implicit-integer-sign-change=");
                                                                                                                      v228 = v224;
                                                                                                                      v223 = "%.8f";
                                                                                                                      v227 = _mm_loadh_ps((const double *)&v223);
                                                                                                                      sub_2258820(v28, &v227);
                                                                                                                      v226 = (unsigned __int64)v230;
                                                                                                                      v223 = v230;
                                                                                                                      v225 = v229;
                                                                                                                      v29 = sub_22233B0(&v225, 48, -1) + 1;
                                                                                                                      v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                                                      if ( v29 > v226 )
                                                                                                                        v29 = v226;
                                                                                                                      v30 = v226 - (_QWORD)v223 + v29;
                                                                                                                      if ( v30 > v226 )
                                                                                                                        v30 = v226;
                                                                                                                      v227.m128_u64[1] = v30;
                                                                                                                      sub_FE2260(a2, (__int64)&v227);
                                                                                                                      v232 = &off_2BC1EC8;
                                                                                                                      sub_2257A60(&v232);
                                                                                                                      if ( v229 != v231 )
                                                                                                                        operator delete(v229);
                                                                                                                      v2 = *a1;
                                                                                                                      if ( a1[1] != *a1 )
                                                                                                                      {
LABEL_633:
                                                                                                                        if ( v2[67] < 9.999999717180685e-10 )
                                                                                                                          goto LABEL_634;
                                                                                                                        v224 = v2[67];
                                                                                                                        v234 = 0;
                                                                                                                        v238 = &v229;
                                                                                                                        v229 = v231;
                                                                                                                        v230 = nullptr;
                                                                                                                        v231[0] = 0;
                                                                                                                        v233 = 0;
                                                                                                                        v236 = 0;
                                                                                                                        v237 = 1;
                                                                                                                        v235 = nullptr;
                                                                                                                        v232 = &off_2BC1EC8;
                                                                                                                        sub_2257B70(&v232, 0, 0, 0);
                                                                                                                        v22 = sub_971800((__int64)&v232, "implicit-bitfield-conversion=");
                                                                                                                        v223 = "%.8f";
                                                                                                                        v228 = v224;
                                                                                                                        v227 = _mm_loadh_ps((const double *)&v223);
                                                                                                                        sub_2258820(v22, &v227);
                                                                                                                        v226 = (unsigned __int64)v230;
                                                                                                                        v223 = v230;
                                                                                                                        v225 = v229;
                                                                                                                        v23 = sub_22233B0(&v225, 48, -1) + 1;
                                                                                                                        v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                                                        if ( v23 > v226 )
                                                                                                                          v23 = v226;
                                                                                                                        v24 = v226 - (_QWORD)v223 + v23;
                                                                                                                        if ( v24 > v226 )
                                                                                                                          v24 = v226;
                                                                                                                        v227.m128_u64[1] = v24;
                                                                                                                        sub_FE2260(a2, (__int64)&v227);
                                                                                                                        v232 = &off_2BC1EC8;
                                                                                                                        sub_2257A60(&v232);
                                                                                                                        if ( v229 != v231 )
                                                                                                                          operator delete(v229);
                                                                                                                        v2 = *a1;
                                                                                                                        if ( a1[1] != *a1 )
                                                                                                                        {
LABEL_634:
                                                                                                                          if ( v2[70] < 9.999999717180685e-10 )
                                                                                                                            goto LABEL_635;
                                                                                                                          v224 = v2[70];
                                                                                                                          v234 = 0;
                                                                                                                          v238 = &v229;
                                                                                                                          v229 = v231;
                                                                                                                          v230 = nullptr;
                                                                                                                          v231[0] = 0;
                                                                                                                          v233 = 0;
                                                                                                                          v236 = 0;
                                                                                                                          v237 = 1;
                                                                                                                          v235 = nullptr;
                                                                                                                          v232 = &off_2BC1EC8;
                                                                                                                          sub_2257B70(&v232, 0, 0, 0);
                                                                                                                          v19 = sub_971800((__int64)&v232, "objc-cast=");
                                                                                                                          v228 = v224;
                                                                                                                          v223 = "%.8f";
                                                                                                                          v227 = _mm_loadh_ps((const double *)&v223);
                                                                                                                          sub_2258820(v19, &v227);
                                                                                                                          v226 = (unsigned __int64)v230;
                                                                                                                          v223 = v230;
                                                                                                                          v225 = v229;
                                                                                                                          v20 = sub_22233B0(&v225, 48, -1) + 1;
                                                                                                                          v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                                                          if ( v20 > v226 )
                                                                                                                            v20 = v226;
                                                                                                                          v21 = v226 - (_QWORD)v223 + v20;
                                                                                                                          if ( v21 > v226 )
                                                                                                                            v21 = v226;
                                                                                                                          v227.m128_u64[1] = v21;
                                                                                                                          sub_FE2260(a2, (__int64)&v227);
                                                                                                                          v232 = &off_2BC1EC8;
                                                                                                                          sub_2257A60(&v232);
                                                                                                                          if ( v229 != v231 )
                                                                                                                            operator delete(v229);
                                                                                                                          v2 = *a1;
                                                                                                                          if ( a1[1] != *a1 )
                                                                                                                          {
LABEL_635:
                                                                                                                            if ( v2[71] < 9.999999717180685e-10 )
                                                                                                                              goto LABEL_63;
                                                                                                                            v224 = v2[71];
                                                                                                                            v234 = 0;
                                                                                                                            v238 = &v229;
                                                                                                                            v229 = v231;
                                                                                                                            v230 = nullptr;
                                                                                                                            v231[0] = 0;
                                                                                                                            v233 = 0;
                                                                                                                            v236 = 0;
                                                                                                                            v237 = 1;
                                                                                                                            v235 = nullptr;
                                                                                                                            v232 = &off_2BC1EC8;
                                                                                                                            sub_2257B70(&v232, 0, 0, 0);
                                                                                                                            v16 = sub_971800((__int64)&v232, "local-bounds=");
                                                                                                                            v223 = "%.8f";
                                                                                                                            v228 = v224;
                                                                                                                            v227 = _mm_loadh_ps((const double *)&v223);
                                                                                                                            sub_2258820(v16, &v227);
                                                                                                                            v226 = (unsigned __int64)v230;
                                                                                                                            v223 = v230;
                                                                                                                            v225 = v229;
                                                                                                                            v17 = sub_22233B0(&v225, 48, -1) + 1;
                                                                                                                            v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                                                            if ( v17 > v226 )
                                                                                                                              v17 = v226;
                                                                                                                            v18 = v226 - (_QWORD)v223 + v17;
                                                                                                                            if ( v18 > v226 )
                                                                                                                              v18 = v226;
                                                                                                                            v227.m128_u64[1] = v18;
                                                                                                                            sub_FE2260(a2, (__int64)&v227);
                                                                                                                            v232 = &off_2BC1EC8;
                                                                                                                            sub_2257A60(&v232);
                                                                                                                            if ( v229 != v231 )
                                                                                                                              operator delete(v229);
                                                                                                                            v2 = *a1;
                                                                                                                            if ( a1[1] != *a1 )
                                                                                                                            {
LABEL_63:
                                                                                                                              if ( v2[73] >= 9.999999717180685e-10 )
                                                                                                                              {
                                                                                                                                v224 = v2[73];
                                                                                                                                v234 = 0;
                                                                                                                                v238 = &v229;
                                                                                                                                v229 = v231;
                                                                                                                                v230 = nullptr;
                                                                                                                                v231[0] = 0;
                                                                                                                                v233 = 0;
                                                                                                                                v236 = 0;
                                                                                                                                v237 = 1;
                                                                                                                                v235 = nullptr;
                                                                                                                                v232 = &off_2BC1EC8;
                                                                                                                                sub_2257B70(&v232, 0, 0, 0);
                                                                                                                                v12 = sub_971800((__int64)&v232, "scudo=");
                                                                                                                                v228 = v224;
                                                                                                                                v223 = "%.8f";
                                                                                                                                v227 = _mm_loadh_ps((const double *)&v223);
                                                                                                                                sub_2258820(v12, &v227);
                                                                                                                                v13 = v230;
                                                                                                                                v225 = v229;
                                                                                                                                v226 = (unsigned __int64)v230;
                                                                                                                                v14 = sub_22233B0(&v225, 48, -1) + 1;
                                                                                                                                if ( v14 > v226 )
                                                                                                                                  v14 = v226;
                                                                                                                                v227.m128_u64[0] = (unsigned __int64)v225;
                                                                                                                                v15 = v226 - (_QWORD)v13 + v14;
                                                                                                                                if ( v15 > v226 )
                                                                                                                                  v15 = v226;
                                                                                                                                v227.m128_u64[1] = v15;
                                                                                                                                sub_FE2260(a2, (__int64)&v227);
                                                                                                                                v232 = &off_2BC1EC8;
                                                                                                                                sub_2257A60(&v232);
                                                                                                                                if ( v229 != v231 )
                                                                                                                                  operator delete(v229);
                                                                                                                              }
                                                                                                                            }
                                                                                                                          }
                                                                                                                        }
                                                                                                                      }
                                                                                                                    }
                                                                                                                  }
                                                                                                                }
                                                                                                              }
                                                                                                            }
                                                                                                          }
                                                                                                        }
                                                                                                      }
                                                                                                    }
                                                                                                  }
                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

