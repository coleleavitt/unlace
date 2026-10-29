/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_496458
// Address: 0x0000000000496458

//----- (0000000000496458) ----------------------------------------------------
__int64 __fastcall sub_496458(void **a1, unsigned __int64 *a2, __int64 a3)
{
  _QWORD *v6; // x1
  void *v7; // x5
  unsigned __int64 v8; // x20
  __int64 v9; // x4
  __int64 *v10; // x19
  unsigned __int64 v11; // x2
  unsigned __int64 v12; // x23
  _QWORD *v13; // x0
  void *v14; // x4
  unsigned __int64 v15; // x3
  __int64 v16; // x0
  char *v17; // x19
  unsigned __int64 v18; // x20
  unsigned __int64 v19; // x2
  char *v20; // x0
  __int64 v21; // x2
  __int64 v22; // x22
  __int64 v23; // x2
  __int64 v24; // x1
  char *v25; // x6
  char *v26; // x3
  __int64 v27; // x5
  __int64 v28; // x1
  unsigned __int64 v29; // x3
  char *v30; // x0
  char *v31; // x6
  char *v32; // x19
  __int64 i; // x4
  __int64 v34; // x0
  char *v35; // x3
  __int64 v36; // x2
  unsigned __int64 v37; // x22
  __int64 v38; // x2
  __int64 v39; // x4
  char *v40; // x20
  __int64 v41; // x0
  char *v42; // x3
  __int64 v43; // x1
  __int64 result; // x0
  unsigned __int64 v45; // x3
  unsigned __int64 v46; // x20
  unsigned __int64 v47; // x2
  __int64 v48; // x1
  unsigned __int64 v49; // x3
  char *v50; // x0
  __int64 v51; // x3
  char *v52; // x20
  unsigned __int64 v53; // x1
  unsigned __int64 v54; // x26
  unsigned __int64 v55; // x2
  __int64 v56; // x4
  unsigned __int64 v57; // x1
  char *v58; // x2
  char *v59; // x27
  __int64 v60; // x3
  __int64 v61; // x2
  unsigned __int64 v62; // x1
  char *v63; // x3
  unsigned __int64 v64; // x1
  char *v65; // x4
  unsigned __int64 v66; // x2
  unsigned __int64 v67; // x6
  char *v68; // x4
  char *v69; // x0
  __int64 v70; // x5
  __int64 v71; // x8
  __int64 v72; // x5
  __int64 v73; // x1
  char *v74; // x7
  char *v75; // x6
  __int64 v76; // x3
  __int64 v77; // x2
  __int64 v78; // x2
  __int64 v79; // x1
  char *v80; // x6
  char *v81; // x3
  __int64 v82; // x5
  signed __int64 v83; // x19
  _QWORD *v84; // x27
  _QWORD *v85; // x22
  unsigned __int64 *v86; // x2
  unsigned __int64 v87; // x1
  char *v88; // x19
  unsigned __int64 v89; // x20
  __int64 v90; // x0
  __int64 v91; // x1
  unsigned __int64 v92; // x3
  char *v93; // x19
  unsigned __int64 v94; // x3
  __int64 v95; // x0
  char *v96; // x19
  unsigned __int64 v97; // x20
  unsigned __int64 v98; // x2
  __int64 v99; // x1
  unsigned __int64 v100; // x3
  char *v101; // x0
  __int64 v102; // x0
  __int64 v103; // x1
  unsigned __int64 v104; // x3
  char *v105; // x0
  unsigned __int64 v106; // x3
  __int64 v107; // x0
  char *v108; // x20
  unsigned __int64 v109; // x22
  unsigned __int64 v110; // x2
  __int64 v111; // x1
  unsigned __int64 v112; // x3
  char *v113; // x0
  unsigned __int64 v114; // x3
  __int64 v115; // x0
  char *v116; // x19
  unsigned __int64 v117; // x20
  unsigned __int64 v118; // x2
  __int64 v119; // x1
  unsigned __int64 v120; // x3
  char *v121; // x0
  __int64 v122; // x1
  unsigned __int64 v123; // x3
  char *v124; // x0
  __int64 v125; // x22
  char *v126; // x0
  __int64 v127; // x2
  __int64 v128; // x2
  __int64 v129; // x1
  char *v130; // x6
  char *v131; // x3
  __int64 v132; // x5
  char *v133; // x4
  char *v134; // x0
  __int64 v135; // x5
  __int64 v136; // x9
  __int64 v137; // x5
  __int64 v138; // x1
  char *v139; // x8
  char *v140; // x6
  __int64 v141; // x3
  __int64 v142; // x22
  char *v143; // x0
  __int64 v144; // x2
  __int64 v145; // x2
  __int64 v146; // x1
  char *v147; // x6
  char *v148; // x3
  __int64 v149; // x5
  __int64 v150; // x23
  char *v151; // x0
  __int64 v152; // x4
  __int64 v153; // x4
  __int64 v154; // x1
  char *v155; // x6
  char *v156; // x5
  __int64 v157; // x3
  char *v158; // x0
  __int64 v159; // x2
  __int64 v160; // x22
  __int64 v161; // x2
  __int64 v162; // x1
  char *v163; // x6
  char *v164; // x3
  __int64 v165; // x5
  __int64 v166; // x1
  unsigned __int64 v167; // x3
  char *v168; // x0
  __int64 v169; // x1
  unsigned __int64 v170; // x3
  char *v171; // x0
  char *v172; // x0
  __int64 v173; // x4
  __int64 v174; // x27
  __int64 v175; // x4
  __int64 v176; // x1
  char *v177; // x6
  char *v178; // x5
  __int64 v179; // x3
  __int64 v180; // x0
  __int64 v181; // x1
  unsigned __int64 v182; // x3
  char *v183; // x19
  __int64 v184; // x22
  char *v185; // x0
  __int64 v186; // x4
  __int64 v187; // x4
  __int64 v188; // x1
  char *v189; // x6
  char *v190; // x5
  __int64 v191; // x3
  char *v192; // x0
  __int64 v193; // x1
  __int64 v194; // x22
  __int64 v195; // x1
  __int64 v196; // x4
  char *v197; // x6
  char *v198; // x5
  __int64 v199; // x3
  __int64 v200; // x4
  unsigned __int64 v201; // x1
  char *v202; // x2
  __int64 v203; // x0
  __int64 v204; // x0
  char *v205; // x6
  __int64 v206; // x1
  char *v207; // x5
  char *v208; // x4
  __int64 v209; // x3
  __int64 v210; // x0
  __int64 v211; // x22
  __int64 v212; // x0
  char *v213; // x6
  __int64 v214; // x1
  char *v215; // x5
  char *v216; // x4
  __int64 v217; // x3
  char *v218; // x0
  __int64 v219; // x2
  __int64 v220; // x23
  __int64 v221; // x2
  char *v222; // x6
  __int64 v223; // x3
  char *v224; // x5
  char *v225; // x4
  __int64 v226; // x1
  char *v227; // x0
  __int64 v228; // x1
  __int64 v229; // x22
  __int64 v230; // x1
  __int64 v231; // x4
  char *v232; // x6
  char *v233; // x5
  __int64 v234; // x3
  char *v235; // x0
  __int64 v236; // x1
  __int64 v237; // x27
  __int64 v238; // x1
  __int64 v239; // x4
  char *v240; // x6
  char *v241; // x5
  __int64 v242; // x3
  __int64 v243; // [xsp+68h] [xbp-58h]
  char *v244; // [xsp+68h] [xbp-58h]
  unsigned __int64 v245; // [xsp+68h] [xbp-58h]
  char *v246; // [xsp+68h] [xbp-58h]
  __int64 v247; // [xsp+70h] [xbp-50h]
  __int64 v248; // [xsp+70h] [xbp-50h]
  __int64 v249; // [xsp+88h] [xbp-38h] BYREF
  unsigned __int64 v250; // [xsp+90h] [xbp-30h]
  __int64 v251; // [xsp+98h] [xbp-28h]
  __int64 v252; // [xsp+A0h] [xbp-20h]
  unsigned __int64 v253; // [xsp+A8h] [xbp-18h]
  __int64 v254; // [xsp+B0h] [xbp-10h]

  v6 = *a1;
  v7 = a1[1];
  v8 = *a2;
  v9 = 2LL * (_QWORD)v7;
  if ( v7 )
  {
    v10 = &v6[v9 - 2];
    v11 = v10[1];
    if ( v11 == v8 )
    {
      if ( *(_BYTE *)(a3 + 28) )
      {
        LOBYTE(v251) = 1;
        v106 = v10[1];
        v249 = *v10;
        v250 = v106;
        v108 = *(char **)a3;
        v107 = *(_QWORD *)(a3 + 8);
        v109 = *(_QWORD *)(a3 + 16);
        v110 = v107 + 1;
        if ( *(_QWORD *)a3 <= (unsigned __int64)&v249 && &v249 < (__int64 *)&v108[24 * v109] )
        {
          v252 = v249;
          v253 = v250;
          v254 = v251;
          if ( v109 < v110 )
          {
            v218 = (char *)sub_491288(a3, nullptr, v110, 0x18u);
            v219 = *(_QWORD *)(a3 + 8);
            v220 = *(_QWORD *)(a3 + 16);
            *(_QWORD *)(a3 + 16) = v109;
            v108 = v218;
            v221 = v219 - 1;
            if ( v221 >= 0 )
            {
              v222 = *(char **)a3;
              v223 = 0;
              do
              {
                v224 = &v222[v223];
                v225 = &v218[v223];
                --v221;
                v223 += 24;
                v226 = *((_QWORD *)v224 + 1);
                *(_QWORD *)v225 = *(_QWORD *)v224;
                *((_QWORD *)v225 + 1) = v226;
                *((_QWORD *)v225 + 2) = *((_QWORD *)v224 + 2);
              }
              while ( v221 != -1 );
            }
            j__free(*(void **)a3);
            *(_QWORD *)a3 = v108;
            v107 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)(a3 + 16) = v220;
          }
          v166 = v254;
          v167 = v253;
          v168 = &v108[24 * v107];
          *(_QWORD *)v168 = v252;
          *((_QWORD *)v168 + 1) = v167;
          *((_QWORD *)v168 + 2) = v166;
        }
        else
        {
          if ( v109 < v110 )
          {
            v108 = (char *)sub_491288(a3, nullptr, v110, 0x18u);
            v150 = *(_QWORD *)(a3 + 16);
            v151 = *(char **)a3;
            v152 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)(a3 + 16) = v109;
            v153 = v152 - 1;
            if ( v153 >= 0 )
            {
              v154 = 0;
              do
              {
                v155 = &v151[v154];
                v156 = &v108[v154];
                --v153;
                v154 += 24;
                v157 = *((_QWORD *)v155 + 1);
                *(_QWORD *)v156 = *(_QWORD *)v155;
                *((_QWORD *)v156 + 1) = v157;
                *((_QWORD *)v156 + 2) = *((_QWORD *)v155 + 2);
              }
              while ( v153 != -1 );
              v151 = *(char **)a3;
            }
            j__free(v151);
            *(_QWORD *)a3 = v108;
            v107 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)(a3 + 16) = v150;
          }
          v111 = v251;
          v112 = v250;
          v113 = &v108[24 * v107];
          *(_QWORD *)v113 = v249;
          *((_QWORD *)v113 + 1) = v112;
          *((_QWORD *)v113 + 2) = v111;
        }
        ++*(_QWORD *)(a3 + 8);
      }
      v10[1] = a2[1];
      if ( !*(_BYTE *)(a3 + 28) )
        goto LABEL_42;
      v45 = v10[1];
      v249 = *v10;
      v250 = v45;
      v17 = *(char **)a3;
      v16 = *(_QWORD *)(a3 + 8);
      LOBYTE(v251) = 0;
      v46 = *(_QWORD *)(a3 + 16);
      v47 = v16 + 1;
      if ( v17 > (char *)&v249 || &v249 >= (__int64 *)&v17[24 * v46] )
      {
        if ( v46 >= v47 )
          goto LABEL_15;
        v17 = (char *)sub_491288(a3, nullptr, v47, 0x18u);
        v20 = *(char **)a3;
        v77 = *(_QWORD *)(a3 + 8);
        v22 = *(_QWORD *)(a3 + 16);
        *(_QWORD *)(a3 + 16) = v46;
        v78 = v77 - 1;
        if ( v78 < 0 )
          goto LABEL_14;
        v79 = 0;
        do
        {
          v80 = &v20[v79];
          v81 = &v17[v79];
          --v78;
          v79 += 24;
          v82 = *((_QWORD *)v80 + 1);
          *(_QWORD *)v81 = *(_QWORD *)v80;
          *((_QWORD *)v81 + 1) = v82;
          *((_QWORD *)v81 + 2) = *((_QWORD *)v80 + 2);
        }
        while ( v78 != -1 );
        goto LABEL_13;
      }
      v252 = v249;
      v253 = v250;
      v254 = v251;
      if ( v46 < v47 )
      {
        v17 = (char *)sub_491288(a3, nullptr, v47, 0x18u);
        v203 = *(_QWORD *)(a3 + 8);
        v194 = *(_QWORD *)(a3 + 16);
        *(_QWORD *)(a3 + 16) = v46;
        v204 = v203 - 1;
        if ( v204 >= 0 )
        {
          v205 = *(char **)a3;
          v206 = 0;
          do
          {
            v207 = &v205[v206];
            v208 = &v17[v206];
            --v204;
            v206 += 24;
            v209 = *((_QWORD *)v207 + 1);
            *(_QWORD *)v208 = *(_QWORD *)v207;
            *((_QWORD *)v208 + 1) = v209;
            *((_QWORD *)v208 + 2) = *((_QWORD *)v207 + 2);
          }
          while ( v204 != -1 );
        }
        goto LABEL_154;
      }
LABEL_54:
      v48 = v254;
      v49 = v253;
      v50 = &v17[24 * v16];
      *(_QWORD *)v50 = v252;
      *((_QWORD *)v50 + 1) = v49;
      *((_QWORD *)v50 + 2) = v48;
      goto LABEL_16;
    }
    v12 = a2[1];
    if ( v11 < v8 )
    {
      if ( (char *)v7 + 1 > a1[2] )
      {
        v13 = sub_491288((__int64)a1, v6, (unsigned __int64)v7 + 1, 0x10u);
        v14 = a1[1];
        v6 = v13;
        *a1 = v13;
        v9 = 2LL * (_QWORD)v14;
      }
      v6[v9] = v8;
      v6[v9 + 1] = v12;
      a1[1] = (char *)a1[1] + 1;
      if ( !*(_BYTE *)(a3 + 28) )
        goto LABEL_42;
      v15 = a2[1];
      v249 = *a2;
      v250 = v15;
      v17 = *(char **)a3;
      v16 = *(_QWORD *)(a3 + 8);
      LOBYTE(v251) = 0;
      v18 = *(_QWORD *)(a3 + 16);
      v19 = v16 + 1;
      if ( v17 > (char *)&v249 || &v249 >= (__int64 *)&v17[24 * v18] )
      {
        if ( v18 >= v19 )
        {
LABEL_15:
          v28 = v251;
          v29 = v250;
          v30 = &v17[24 * v16];
          *(_QWORD *)v30 = v249;
          *((_QWORD *)v30 + 1) = v29;
          *((_QWORD *)v30 + 2) = v28;
LABEL_16:
          ++*(_QWORD *)(a3 + 8);
LABEL_42:
          a1[3] = nullptr;
          return 1;
        }
        v17 = (char *)sub_491288(a3, nullptr, v19, 0x18u);
        v20 = *(char **)a3;
        v21 = *(_QWORD *)(a3 + 8);
        v22 = *(_QWORD *)(a3 + 16);
        *(_QWORD *)(a3 + 16) = v18;
        v23 = v21 - 1;
        if ( v23 < 0 )
        {
LABEL_14:
          j__free(v20);
          *(_QWORD *)a3 = v17;
          *(_QWORD *)(a3 + 16) = v22;
          v16 = *(_QWORD *)(a3 + 8);
          goto LABEL_15;
        }
        v24 = 0;
        do
        {
          v25 = &v20[v24];
          v26 = &v17[v24];
          --v23;
          v24 += 24;
          v27 = *((_QWORD *)v25 + 1);
          *(_QWORD *)v26 = *(_QWORD *)v25;
          *((_QWORD *)v26 + 1) = v27;
          *((_QWORD *)v26 + 2) = *((_QWORD *)v25 + 2);
        }
        while ( v23 != -1 );
LABEL_13:
        v20 = *(char **)a3;
        goto LABEL_14;
      }
      v252 = v249;
      v253 = v250;
      v254 = v251;
      if ( v18 < v19 )
      {
        v17 = (char *)sub_491288(a3, nullptr, v19, 0x18u);
        v192 = *(char **)a3;
        v193 = *(_QWORD *)(a3 + 8);
        v194 = *(_QWORD *)(a3 + 16);
        *(_QWORD *)(a3 + 16) = v18;
        v195 = v193 - 1;
        if ( v195 < 0 )
        {
LABEL_155:
          j__free(v192);
          *(_QWORD *)a3 = v17;
          *(_QWORD *)(a3 + 16) = v194;
          v16 = *(_QWORD *)(a3 + 8);
          goto LABEL_54;
        }
        v196 = 0;
        do
        {
          v197 = &v192[v196];
          v198 = &v17[v196];
          --v195;
          v196 += 24;
          v199 = *((_QWORD *)v197 + 1);
          *(_QWORD *)v198 = *(_QWORD *)v197;
          *((_QWORD *)v198 + 1) = v199;
          *((_QWORD *)v198 + 2) = *((_QWORD *)v197 + 2);
        }
        while ( v195 != -1 );
LABEL_154:
        v192 = *(char **)a3;
        goto LABEL_155;
      }
      goto LABEL_54;
    }
  }
  else
  {
    v12 = a2[1];
  }
  v31 = (char *)&v6[v9];
  v32 = (char *)*a1;
  for ( i = (v9 * 8) >> 4; i > 0; i = v34 - 1 - v36 )
  {
    v34 = i >> 1;
    v35 = &v32[16 * (i >> 1)];
    if ( v8 > *((_QWORD *)v35 + 1) )
    {
      v36 = i >> 1;
      v34 = i;
    }
    else
    {
      if ( !v34 )
        break;
      while ( 1 )
      {
        v36 = v34 >> 1;
        v35 = &v32[16 * (v34 >> 1)];
        if ( *((_QWORD *)v35 + 1) < v8 )
          break;
        v34 >>= 1;
        if ( !v36 )
          goto LABEL_24;
      }
    }
    v32 = v35 + 16;
  }
LABEL_24:
  if ( v32 == v31 )
  {
    if ( (char *)v7 + 1 > a1[2] )
      *a1 = sub_491288((__int64)a1, v6, (unsigned __int64)v7 + 1, 0x10u);
    v86 = (unsigned __int64 *)((char *)*a1 + 16 * (_QWORD)a1[1]);
    *v86 = v8;
    v86[1] = v12;
    a1[1] = (char *)a1[1] + 1;
    if ( !*(_BYTE *)(a3 + 28) )
      goto LABEL_42;
    v87 = a2[1];
    v249 = *a2;
    v250 = v87;
    v88 = *(char **)a3;
    LOBYTE(v251) = 0;
    v89 = *(_QWORD *)(a3 + 16);
    if ( v88 <= (char *)&v249 && &v249 < (__int64 *)&v88[24 * v89] )
    {
      v252 = v249;
      v253 = v250;
      v180 = *(_QWORD *)(a3 + 8);
      v254 = v251;
      if ( v89 < v180 + 1 )
      {
        v88 = (char *)sub_491288(a3, nullptr, v180 + 1, 0x18u);
        v227 = *(char **)a3;
        v228 = *(_QWORD *)(a3 + 8);
        v229 = *(_QWORD *)(a3 + 16);
        *(_QWORD *)(a3 + 16) = v89;
        v230 = v228 - 1;
        if ( v230 >= 0 )
        {
          v231 = 0;
          do
          {
            v232 = &v227[v231];
            v233 = &v88[v231];
            --v230;
            v231 += 24;
            v234 = *((_QWORD *)v232 + 1);
            *(_QWORD *)v233 = *(_QWORD *)v232;
            *((_QWORD *)v233 + 1) = v234;
            *((_QWORD *)v233 + 2) = *((_QWORD *)v232 + 2);
          }
          while ( v230 != -1 );
          v227 = *(char **)a3;
        }
        j__free(v227);
        *(_QWORD *)a3 = v88;
        *(_QWORD *)(a3 + 16) = v229;
        v180 = *(_QWORD *)(a3 + 8);
      }
      v181 = v254;
      v182 = v253;
      v183 = &v88[24 * v180];
      *(_QWORD *)v183 = v252;
      *((_QWORD *)v183 + 1) = v182;
      *((_QWORD *)v183 + 2) = v181;
    }
    else
    {
      v90 = *(_QWORD *)(a3 + 8);
      if ( v90 + 1 > v89 )
      {
        v88 = (char *)sub_491288(a3, nullptr, v90 + 1, 0x18u);
        v158 = *(char **)a3;
        v159 = *(_QWORD *)(a3 + 8);
        v160 = *(_QWORD *)(a3 + 16);
        *(_QWORD *)(a3 + 16) = v89;
        v161 = v159 - 1;
        if ( v161 >= 0 )
        {
          v162 = 0;
          do
          {
            v163 = &v158[v162];
            v164 = &v88[v162];
            --v161;
            v162 += 24;
            v165 = *((_QWORD *)v163 + 1);
            *(_QWORD *)v164 = *(_QWORD *)v163;
            *((_QWORD *)v164 + 1) = v165;
            *((_QWORD *)v164 + 2) = *((_QWORD *)v163 + 2);
          }
          while ( v161 != -1 );
          v158 = *(char **)a3;
        }
        j__free(v158);
        *(_QWORD *)a3 = v88;
        *(_QWORD *)(a3 + 16) = v160;
        v90 = *(_QWORD *)(a3 + 8);
      }
      v91 = v251;
      v92 = v250;
      v93 = &v88[24 * v90];
      *(_QWORD *)v93 = v249;
      *((_QWORD *)v93 + 1) = v92;
      *((_QWORD *)v93 + 2) = v91;
    }
    goto LABEL_16;
  }
  v37 = *(_QWORD *)v32;
  if ( *(_QWORD *)v32 > v8 || (result = 0, *((_QWORD *)v32 + 1) < v12) )
  {
    if ( v37 > v12 )
    {
      v83 = v32 - (char *)v6;
      if ( (char *)v7 + 1 > a1[2] )
      {
        *a1 = sub_491288((__int64)a1, v6, (unsigned __int64)v7 + 1, 0x10u);
        v7 = a1[1];
      }
      v84 = *a1;
      v85 = (char *)*a1 + v83;
      memmove(v85 + 2, v85, 16LL * (_QWORD)v7 - v83);
      *(_QWORD *)((char *)v84 + v83) = v8;
      v85[1] = v12;
      a1[1] = (char *)a1[1] + 1;
      if ( *(_BYTE *)(a3 + 28) )
      {
        v114 = a2[1];
        v249 = *a2;
        v250 = v114;
        v116 = *(char **)a3;
        v115 = *(_QWORD *)(a3 + 8);
        LOBYTE(v251) = 0;
        v117 = *(_QWORD *)(a3 + 16);
        v118 = v115 + 1;
        if ( v116 <= (char *)&v249 && &v249 < (__int64 *)&v116[24 * v117] )
        {
          v252 = v249;
          v253 = v250;
          v254 = v251;
          if ( v117 < v118 )
          {
            v116 = (char *)sub_491288(a3, nullptr, v118, 0x18u);
            v210 = *(_QWORD *)(a3 + 8);
            v211 = *(_QWORD *)(a3 + 16);
            *(_QWORD *)(a3 + 16) = v117;
            v212 = v210 - 1;
            if ( v212 >= 0 )
            {
              v213 = *(char **)a3;
              v214 = 0;
              do
              {
                v215 = &v213[v214];
                v216 = &v116[v214];
                --v212;
                v214 += 24;
                v217 = *((_QWORD *)v215 + 1);
                *(_QWORD *)v216 = *(_QWORD *)v215;
                *((_QWORD *)v216 + 1) = v217;
                *((_QWORD *)v216 + 2) = *((_QWORD *)v215 + 2);
              }
              while ( v212 != -1 );
            }
            j__free(*(void **)a3);
            *(_QWORD *)a3 = v116;
            v115 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)(a3 + 16) = v211;
          }
          v169 = v254;
          v170 = v253;
          v171 = &v116[24 * v115];
          *(_QWORD *)v171 = v252;
          *((_QWORD *)v171 + 1) = v170;
          *((_QWORD *)v171 + 2) = v169;
        }
        else
        {
          if ( v117 < v118 )
          {
            v116 = (char *)sub_491288(a3, nullptr, v118, 0x18u);
            v142 = *(_QWORD *)(a3 + 16);
            v143 = *(char **)a3;
            v144 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)(a3 + 16) = v117;
            v145 = v144 - 1;
            if ( v145 >= 0 )
            {
              v146 = 0;
              do
              {
                v147 = &v143[v146];
                v148 = &v116[v146];
                --v145;
                v146 += 24;
                v149 = *((_QWORD *)v147 + 1);
                *(_QWORD *)v148 = *(_QWORD *)v147;
                *((_QWORD *)v148 + 1) = v149;
                *((_QWORD *)v148 + 2) = *((_QWORD *)v147 + 2);
              }
              while ( v145 != -1 );
              v143 = *(char **)a3;
            }
            j__free(v143);
            *(_QWORD *)a3 = v116;
            v115 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)(a3 + 16) = v142;
          }
          v119 = v251;
          v120 = v250;
          v121 = &v116[24 * v115];
          *(_QWORD *)v121 = v249;
          *((_QWORD *)v121 + 1) = v120;
          *((_QWORD *)v121 + 2) = v119;
        }
        ++*(_QWORD *)(a3 + 8);
      }
    }
    else
    {
      if ( v37 > v8 )
        v37 = *a2;
      v38 = (__int64)v31;
      v39 = (v31 - v32) >> 4;
      v40 = v32;
      while ( v39 > 0 )
      {
        v41 = v39 >> 1;
        v42 = &v40[16 * (v39 >> 1)];
        if ( *((_QWORD *)v42 + 1) <= v12 )
        {
          v43 = v39 >> 1;
          v41 = v39;
        }
        else
        {
          if ( !v41 )
            break;
          while ( 1 )
          {
            v43 = v41 >> 1;
            v42 = &v40[16 * (v41 >> 1)];
            if ( *((_QWORD *)v42 + 1) <= v12 )
              break;
            v41 >>= 1;
            if ( !v43 )
              goto LABEL_35;
          }
        }
        v40 = v42 + 16;
        v39 = v41 - 1 - v43;
      }
LABEL_35:
      if ( v31 == v40 )
        goto LABEL_61;
      if ( *(_QWORD *)v40 <= v12 )
      {
        v12 = *((_QWORD *)v40 + 1);
        v40 += 16;
      }
      if ( v40 == v32 )
      {
        if ( *(_BYTE *)(a3 + 28) )
        {
          v52 = *(char **)a3;
          v51 = *(_QWORD *)(a3 + 8);
          v53 = *((_QWORD *)v32 + 1);
          v249 = *(_QWORD *)v32;
          v250 = v53;
          LOBYTE(v251) = 1;
          v54 = *(_QWORD *)(a3 + 16);
          v55 = v51 + 1;
          if ( v52 <= (char *)&v249 && &v249 < (__int64 *)&v52[24 * v54] )
          {
            v252 = v249;
            v253 = v250;
            v254 = v251;
            if ( v54 < v55 )
            {
              v52 = (char *)sub_491288(a3, nullptr, v55, 0x18u);
              v235 = *(char **)a3;
              v236 = *(_QWORD *)(a3 + 8);
              v237 = *(_QWORD *)(a3 + 16);
              *(_QWORD *)(a3 + 16) = v54;
              v238 = v236 - 1;
              if ( v238 >= 0 )
              {
                v239 = 0;
                do
                {
                  v240 = &v235[v239];
                  v241 = &v52[v239];
                  --v238;
                  v239 += 24;
                  v242 = *((_QWORD *)v240 + 1);
                  *(_QWORD *)v241 = *(_QWORD *)v240;
                  *((_QWORD *)v241 + 1) = v242;
                  *((_QWORD *)v241 + 2) = *((_QWORD *)v240 + 2);
                }
                while ( v238 != -1 );
                v235 = *(char **)a3;
              }
              j__free(v235);
              *(_QWORD *)a3 = v52;
              *(_QWORD *)(a3 + 16) = v237;
              v51 = *(_QWORD *)(a3 + 8);
            }
            v200 = v254;
            v201 = v253;
            v202 = &v52[24 * v51];
            *(_QWORD *)v202 = v252;
            *((_QWORD *)v202 + 1) = v201;
            *((_QWORD *)v202 + 2) = v200;
          }
          else
          {
            if ( v54 < v55 )
            {
              v52 = (char *)sub_491288(a3, nullptr, v55, 0x18u);
              v172 = *(char **)a3;
              v173 = *(_QWORD *)(a3 + 8);
              v174 = *(_QWORD *)(a3 + 16);
              *(_QWORD *)(a3 + 16) = v54;
              v175 = v173 - 1;
              if ( v175 >= 0 )
              {
                v176 = 0;
                do
                {
                  v177 = &v172[v176];
                  v178 = &v52[v176];
                  --v175;
                  v176 += 24;
                  v179 = *((_QWORD *)v177 + 1);
                  *(_QWORD *)v178 = *(_QWORD *)v177;
                  *((_QWORD *)v178 + 1) = v179;
                  *((_QWORD *)v178 + 2) = *((_QWORD *)v177 + 2);
                }
                while ( v175 != -1 );
                v172 = *(char **)a3;
              }
              j__free(v172);
              *(_QWORD *)a3 = v52;
              *(_QWORD *)(a3 + 16) = v174;
              v51 = *(_QWORD *)(a3 + 8);
            }
            v56 = v251;
            v57 = v250;
            v58 = &v52[24 * v51];
            *(_QWORD *)v58 = v249;
            *((_QWORD *)v58 + 1) = v57;
            *((_QWORD *)v58 + 2) = v56;
          }
          ++*(_QWORD *)(a3 + 8);
        }
      }
      else
      {
LABEL_61:
        if ( *(_BYTE *)(a3 + 28) && v32 < v40 )
        {
          v59 = v32;
          v60 = *(_QWORD *)(a3 + 8);
          do
          {
            v64 = *((_QWORD *)v59 + 1);
            v249 = *(_QWORD *)v59;
            v250 = v64;
            v65 = *(char **)a3;
            v66 = v60 + 1;
            LOBYTE(v251) = 1;
            v67 = *(_QWORD *)(a3 + 16);
            if ( v65 <= (char *)&v249 && &v249 < (__int64 *)&v65[24 * v67] )
            {
              v252 = v249;
              v253 = v250;
              v254 = v251;
              if ( v67 < v66 )
              {
                v245 = v67;
                v133 = (char *)sub_491288(a3, nullptr, v66, 0x18u);
                v134 = *(char **)a3;
                v135 = *(_QWORD *)(a3 + 8);
                v136 = *(_QWORD *)(a3 + 16);
                *(_QWORD *)(a3 + 16) = v245;
                v137 = v135 - 1;
                if ( v137 >= 0 )
                {
                  v138 = 0;
                  do
                  {
                    v139 = &v134[v138];
                    v140 = &v133[v138];
                    --v137;
                    v138 += 24;
                    v141 = *((_QWORD *)v139 + 1);
                    *(_QWORD *)v140 = *(_QWORD *)v139;
                    *((_QWORD *)v140 + 1) = v141;
                    *((_QWORD *)v140 + 2) = *((_QWORD *)v139 + 2);
                  }
                  while ( v137 != -1 );
                  v134 = *(char **)a3;
                }
                v246 = v133;
                v248 = v136;
                j__free(v134);
                v65 = v246;
                *(_QWORD *)a3 = v246;
                v60 = *(_QWORD *)(a3 + 8);
                *(_QWORD *)(a3 + 16) = v248;
              }
              v102 = 3 * v60;
              v103 = v254;
              v104 = v253;
              v105 = &v65[8 * v102];
              *(_QWORD *)v105 = v252;
              *((_QWORD *)v105 + 1) = v104;
              *((_QWORD *)v105 + 2) = v103;
            }
            else
            {
              if ( v67 < v66 )
              {
                v243 = *(_QWORD *)(a3 + 16);
                v68 = (char *)sub_491288(a3, nullptr, v66, 0x18u);
                v69 = *(char **)a3;
                v70 = *(_QWORD *)(a3 + 8);
                v71 = *(_QWORD *)(a3 + 16);
                *(_QWORD *)(a3 + 16) = v243;
                v72 = v70 - 1;
                if ( v72 >= 0 )
                {
                  v73 = 0;
                  do
                  {
                    v74 = &v69[v73];
                    v75 = &v68[v73];
                    --v72;
                    v73 += 24;
                    v76 = *((_QWORD *)v74 + 1);
                    *(_QWORD *)v75 = *(_QWORD *)v74;
                    *((_QWORD *)v75 + 1) = v76;
                    *((_QWORD *)v75 + 2) = *((_QWORD *)v74 + 2);
                  }
                  while ( v72 != -1 );
                  v69 = *(char **)a3;
                }
                v244 = v68;
                v247 = v71;
                j__free(v69);
                v65 = v244;
                *(_QWORD *)a3 = v244;
                v60 = *(_QWORD *)(a3 + 8);
                *(_QWORD *)(a3 + 16) = v247;
              }
              v61 = v251;
              v62 = v250;
              v63 = &v65[24 * v60];
              *(_QWORD *)v63 = v249;
              *((_QWORD *)v63 + 1) = v62;
              *((_QWORD *)v63 + 2) = v61;
            }
            v59 += 16;
            v60 = *(_QWORD *)(a3 + 8) + 1LL;
            *(_QWORD *)(a3 + 8) = v60;
          }
          while ( v59 < v40 );
          v38 = (__int64)*a1 + 16 * (_QWORD)a1[1];
        }
        a1[1] = (char *)a1[1] - ((v40 - (_BYTE *)memmove(v32 + 16, v40, v38 - (_QWORD)v40)) >> 4);
      }
      *(_QWORD *)v32 = v37;
      *((_QWORD *)v32 + 1) = v12;
      if ( *(_BYTE *)(a3 + 28) )
      {
        v94 = *((_QWORD *)v32 + 1);
        v249 = *(_QWORD *)v32;
        v250 = v94;
        v96 = *(char **)a3;
        v95 = *(_QWORD *)(a3 + 8);
        LOBYTE(v251) = 0;
        v97 = *(_QWORD *)(a3 + 16);
        v98 = v95 + 1;
        if ( v96 <= (char *)&v249 && &v249 < (__int64 *)&v96[24 * v97] )
        {
          v252 = v249;
          v253 = v250;
          v254 = v251;
          if ( v97 < v98 )
          {
            v96 = (char *)sub_491288(a3, nullptr, v98, 0x18u);
            v184 = *(_QWORD *)(a3 + 16);
            v185 = *(char **)a3;
            v186 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)(a3 + 16) = v97;
            v187 = v186 - 1;
            if ( v187 >= 0 )
            {
              v188 = 0;
              do
              {
                v189 = &v185[v188];
                v190 = &v96[v188];
                --v187;
                v188 += 24;
                v191 = *((_QWORD *)v189 + 1);
                *(_QWORD *)v190 = *(_QWORD *)v189;
                *((_QWORD *)v190 + 1) = v191;
                *((_QWORD *)v190 + 2) = *((_QWORD *)v189 + 2);
              }
              while ( v187 != -1 );
              v185 = *(char **)a3;
            }
            j__free(v185);
            *(_QWORD *)a3 = v96;
            v95 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)(a3 + 16) = v184;
          }
          v122 = v254;
          v123 = v253;
          v124 = &v96[24 * v95];
          *(_QWORD *)v124 = v252;
          *((_QWORD *)v124 + 1) = v123;
          *((_QWORD *)v124 + 2) = v122;
        }
        else
        {
          if ( v97 < v98 )
          {
            v96 = (char *)sub_491288(a3, nullptr, v98, 0x18u);
            v125 = *(_QWORD *)(a3 + 16);
            v126 = *(char **)a3;
            v127 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)(a3 + 16) = v97;
            v128 = v127 - 1;
            if ( v128 >= 0 )
            {
              v129 = 0;
              do
              {
                v130 = &v126[v129];
                v131 = &v96[v129];
                --v128;
                v129 += 24;
                v132 = *((_QWORD *)v130 + 1);
                *(_QWORD *)v131 = *(_QWORD *)v130;
                *((_QWORD *)v131 + 1) = v132;
                *((_QWORD *)v131 + 2) = *((_QWORD *)v130 + 2);
              }
              while ( v128 != -1 );
              v126 = *(char **)a3;
            }
            j__free(v126);
            *(_QWORD *)a3 = v96;
            v95 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)(a3 + 16) = v125;
          }
          v99 = v251;
          v100 = v250;
          v101 = &v96[24 * v95];
          *(_QWORD *)v101 = v249;
          *((_QWORD *)v101 + 1) = v100;
          *((_QWORD *)v101 + 2) = v99;
        }
        ++*(_QWORD *)(a3 + 8);
      }
    }
    goto LABEL_42;
  }
  return result;
}
// 496458: could not find valid save-restore pair for x22
// 496458: could not find valid save-restore pair for x27
