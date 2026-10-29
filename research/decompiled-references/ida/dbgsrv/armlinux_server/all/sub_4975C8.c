/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4975C8
// Address: 0x00000000004975C8

//----- (00000000004975C8) ----------------------------------------------------
__int64 __fastcall sub_4975C8(__int64 a1, unsigned __int64 *a2)
{
  unsigned int v4; // w22
  int v6; // w0
  int v7; // w0
  unsigned __int64 v8; // x3
  __int64 v9; // x23
  unsigned __int64 *v10; // x22
  unsigned __int64 v11; // x1
  __int64 v12; // x2
  unsigned __int64 v13; // x24
  unsigned __int64 v14; // x4
  unsigned __int64 v15; // x3
  __int64 v16; // x0
  char *v17; // x22
  unsigned __int64 v18; // x25
  unsigned __int64 v19; // x2
  unsigned __int64 v20; // x3
  char *v21; // x0
  _BYTE *v22; // x0
  __int64 v23; // x21
  unsigned __int64 v24; // x21
  _BYTE *v25; // x0
  char *v26; // x20
  char *v27; // x23
  __int64 v28; // x2
  _BYTE *v29; // x0
  char *v30; // x1
  unsigned __int64 v31; // x2
  unsigned __int64 v32; // x20
  int v33; // w22
  __int64 v34; // x26
  unsigned __int64 v35; // x0
  unsigned __int64 *v36; // x2
  unsigned __int64 v37; // x3
  __int64 v38; // x0
  char *v39; // x24
  unsigned __int64 v40; // x26
  unsigned __int64 v41; // x2
  unsigned __int64 v42; // x3
  char *v43; // x24
  unsigned __int64 v44; // x3
  __int64 v45; // x0
  char *v46; // x25
  unsigned __int64 v47; // x28
  unsigned __int64 v48; // x2
  unsigned __int64 v49; // x3
  char *v50; // x25
  __int64 v51; // x0
  char *v52; // x20
  __int64 *v53; // x1
  unsigned __int64 v54; // x26
  unsigned __int64 v55; // x2
  __int64 v56; // x4
  __int64 v57; // x5
  __int64 v58; // x3
  char *v59; // x0
  __int64 v60; // x24
  __int64 v61; // x20
  __int64 v62; // x2
  char *v63; // x0
  __int64 v64; // x1
  char *v65; // x4
  char *v66; // x3
  __int64 v67; // x7
  char *v68; // x24
  unsigned __int64 v69; // x3
  __int64 v70; // x1
  __int64 v71; // x2
  char *v72; // x0
  __int64 v73; // x1
  char *v74; // x4
  char *v75; // x3
  __int64 v76; // x7
  unsigned __int64 v77; // x3
  __int64 v78; // x0
  char *v79; // x22
  unsigned __int64 v80; // x26
  unsigned __int64 v81; // x2
  unsigned __int64 v82; // x3
  char *v83; // x0
  unsigned __int64 v84; // x3
  __int64 v85; // x0
  char *v86; // x25
  unsigned __int64 v87; // x27
  unsigned __int64 v88; // x2
  unsigned __int64 v89; // x3
  char *v90; // x0
  unsigned __int64 v91; // x3
  __int64 v92; // x0
  char *v93; // x24
  unsigned __int64 v94; // x26
  unsigned __int64 v95; // x2
  unsigned __int64 v96; // x3
  char *v97; // x0
  unsigned __int64 v98; // x26
  char *v99; // x0
  __int64 v100; // x2
  __int64 v101; // x1
  char *v102; // x4
  char *v103; // x3
  __int64 v104; // x7
  unsigned __int64 v105; // x25
  char *v106; // x0
  __int64 v107; // x2
  __int64 v108; // x1
  char *v109; // x4
  char *v110; // x3
  __int64 v111; // x7
  __int64 v112; // x1
  unsigned __int64 v113; // x3
  char *v114; // x0
  char *v115; // x0
  unsigned __int64 v116; // x3
  __int64 v117; // x1
  unsigned __int64 v118; // x25
  char *v119; // x0
  __int64 v120; // x2
  __int64 v121; // x1
  char *v122; // x6
  char *v123; // x3
  __int64 v124; // x5
  unsigned __int64 v125; // x27
  char *v126; // x0
  __int64 v127; // x2
  __int64 v128; // x1
  char *v129; // x6
  char *v130; // x3
  __int64 v131; // x5
  unsigned __int64 v132; // x25
  char *v133; // x0
  __int64 v134; // x2
  __int64 v135; // x1
  char *v136; // x6
  char *v137; // x3
  __int64 v138; // x5
  unsigned __int64 v139; // x24
  char *v140; // x0
  __int64 v141; // x2
  __int64 v142; // x1
  char *v143; // x6
  char *v144; // x3
  __int64 v145; // x5
  __int64 v146; // x2
  __int64 v147; // x1
  __int64 v148; // x3
  char *v149; // x0
  char *v150; // x25
  unsigned __int64 v151; // x3
  __int64 v152; // x1
  char *v153; // x0
  unsigned __int64 v154; // x3
  __int64 v155; // x1
  __int64 v156; // x1
  unsigned __int64 v157; // x3
  char *v158; // x0
  unsigned __int64 v159; // x25
  char *v160; // x0
  __int64 v161; // x2
  __int64 v162; // x1
  char *v163; // x6
  char *v164; // x3
  __int64 v165; // x5
  unsigned __int64 v166; // x26
  char *v167; // x0
  __int64 v168; // x2
  __int64 v169; // x1
  char *v170; // x6
  char *v171; // x3
  __int64 v172; // x5
  char *v173; // x0
  unsigned __int64 v174; // x25
  __int64 v175; // x1
  char *v176; // x6
  __int64 v177; // x0
  char *v178; // x3
  char *v179; // x2
  __int64 v180; // x5
  char *v181; // x0
  unsigned __int64 v182; // x27
  __int64 v183; // x1
  char *v184; // x6
  __int64 v185; // x0
  char *v186; // x3
  char *v187; // x2
  __int64 v188; // x5
  unsigned __int64 v189; // x24
  char *v190; // x0
  __int64 v191; // x2
  __int64 v192; // x1
  char *v193; // x6
  char *v194; // x3
  __int64 v195; // x5
  unsigned __int64 v196; // x25
  char *v197; // x0
  __int64 v198; // x2
  __int64 v199; // x1
  char *v200; // x6
  char *v201; // x3
  __int64 v202; // x5
  unsigned __int64 v203; // [xsp+60h] [xbp-1A0h]
  unsigned __int64 v204; // [xsp+68h] [xbp-198h]
  unsigned __int64 v205; // [xsp+70h] [xbp-190h] BYREF
  unsigned __int64 v206; // [xsp+78h] [xbp-188h]
  __int64 v207; // [xsp+80h] [xbp-180h]
  unsigned __int64 v208; // [xsp+88h] [xbp-178h] BYREF
  unsigned __int64 v209; // [xsp+90h] [xbp-170h]
  __int64 v210; // [xsp+98h] [xbp-168h]
  unsigned __int64 v211; // [xsp+A0h] [xbp-160h] BYREF
  unsigned __int64 v212; // [xsp+A8h] [xbp-158h]
  __int64 v213; // [xsp+B0h] [xbp-150h]
  unsigned __int64 v214; // [xsp+B8h] [xbp-148h] BYREF
  unsigned __int64 v215; // [xsp+C0h] [xbp-140h]
  __int64 v216; // [xsp+C8h] [xbp-138h]
  unsigned __int64 v217; // [xsp+D0h] [xbp-130h] BYREF
  unsigned __int64 v218; // [xsp+D8h] [xbp-128h]
  __int64 v219; // [xsp+E0h] [xbp-120h]
  __int64 v220; // [xsp+E8h] [xbp-118h] BYREF
  __int64 v221; // [xsp+F0h] [xbp-110h]
  __int64 v222; // [xsp+F8h] [xbp-108h]
  unsigned __int64 v223; // [xsp+100h] [xbp-100h] BYREF
  unsigned __int64 v224; // [xsp+108h] [xbp-F8h]
  __int64 v225; // [xsp+110h] [xbp-F0h]
  unsigned __int64 v226; // [xsp+118h] [xbp-E8h]
  unsigned __int64 v227; // [xsp+120h] [xbp-E0h]
  __int64 v228; // [xsp+128h] [xbp-D8h]
  unsigned __int64 v229; // [xsp+130h] [xbp-D0h]
  unsigned __int64 v230; // [xsp+138h] [xbp-C8h]
  __int64 v231; // [xsp+140h] [xbp-C0h]
  unsigned __int64 v232; // [xsp+148h] [xbp-B8h]
  unsigned __int64 v233; // [xsp+150h] [xbp-B0h]
  __int64 v234; // [xsp+158h] [xbp-A8h]
  unsigned __int64 v235; // [xsp+160h] [xbp-A0h]
  unsigned __int64 v236; // [xsp+168h] [xbp-98h]
  __int64 v237; // [xsp+170h] [xbp-90h]
  unsigned __int64 v238; // [xsp+178h] [xbp-88h]
  unsigned __int64 v239; // [xsp+180h] [xbp-80h]
  __int64 v240; // [xsp+188h] [xbp-78h]
  __int64 v241; // [xsp+190h] [xbp-70h]
  __int64 v242; // [xsp+198h] [xbp-68h]
  __int64 v243; // [xsp+1A0h] [xbp-60h]
  unsigned __int64 v244; // [xsp+1A8h] [xbp-58h]
  unsigned __int64 v245; // [xsp+1B0h] [xbp-50h]
  __int64 v246; // [xsp+1B8h] [xbp-48h]
  void *ptr; // [xsp+1C0h] [xbp-40h] BYREF
  unsigned __int64 v248; // [xsp+1C8h] [xbp-38h]
  unsigned __int64 v249; // [xsp+1D0h] [xbp-30h]
  void *v250; // [xsp+1D8h] [xbp-28h] BYREF
  __int64 v251; // [xsp+1E0h] [xbp-20h]
  unsigned __int64 v252; // [xsp+1E8h] [xbp-18h]
  int v253; // [xsp+1F0h] [xbp-10h]
  unsigned __int8 v254; // [xsp+1F4h] [xbp-Ch]

  v4 = 0;
  if ( a2[1] <= *a2 )
    return v4;
  v6 = *(_DWORD *)(a1 + 32);
  v250 = nullptr;
  v251 = 0;
  v252 = 0;
  v253 = v6;
  if ( v6 == -1 )
    v7 = 0;
  else
    v7 = (unsigned __int8)sub_47DBD8();
  v8 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v254 = v7;
  if ( v8 )
  {
    v9 = 0;
    v10 = *(unsigned __int64 **)a1;
    v11 = *a2;
    v12 = *(_QWORD *)a1 + 16LL;
    v13 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    if ( v13 <= *a2 )
    {
      while ( ++v9 != v8 )
      {
        v10 = (unsigned __int64 *)v12;
        v12 += 16;
        v13 = *(_QWORD *)(v12 - 8);
        if ( v13 > v11 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v14 = a2[1];
      if ( *v10 < v14 )
      {
        if ( *v10 < v11 )
        {
          if ( v7 )
          {
            v84 = v10[1];
            v86 = (char *)v250;
            v85 = v251;
            v211 = *v10;
            v212 = v84;
            LOBYTE(v213) = 1;
            v87 = v252;
            v88 = v251 + 1;
            if ( v250 <= &v211 && &v211 < (unsigned __int64 *)((char *)v250 + 24 * v252) )
            {
              v234 = v213;
              v232 = v211;
              v233 = v212;
              if ( v252 < v88 )
              {
                v86 = (char *)sub_491288((__int64)&v250, nullptr, v88, 0x18u);
                v166 = v252;
                v167 = (char *)v250;
                v252 = v87;
                v168 = v251 - 1;
                if ( v251 - 1 >= 0 )
                {
                  v169 = 0;
                  do
                  {
                    v170 = &v167[v169];
                    v171 = &v86[v169];
                    --v168;
                    v169 += 24;
                    v172 = *((_QWORD *)v170 + 1);
                    *(_QWORD *)v171 = *(_QWORD *)v170;
                    *((_QWORD *)v171 + 1) = v172;
                    *((_QWORD *)v171 + 2) = *((_QWORD *)v170 + 2);
                  }
                  while ( v168 != -1 );
                  v167 = (char *)v250;
                }
                j__free(v167);
                v85 = v251;
                v250 = v86;
                v252 = v166;
              }
              v115 = &v86[24 * v85];
              v116 = v233;
              v117 = v234;
              *(_QWORD *)v115 = v232;
              *((_QWORD *)v115 + 1) = v116;
              *((_QWORD *)v115 + 2) = v117;
            }
            else
            {
              if ( v252 < v88 )
              {
                v86 = (char *)sub_491288((__int64)&v250, nullptr, v88, 0x18u);
                v98 = v252;
                v99 = (char *)v250;
                v252 = v87;
                v100 = v251 - 1;
                if ( v251 - 1 >= 0 )
                {
                  v101 = 0;
                  do
                  {
                    v102 = &v99[v101];
                    v103 = &v86[v101];
                    --v100;
                    v101 += 24;
                    v104 = *((_QWORD *)v102 + 1);
                    *(_QWORD *)v103 = *(_QWORD *)v102;
                    *((_QWORD *)v103 + 1) = v104;
                    *((_QWORD *)v103 + 2) = *((_QWORD *)v102 + 2);
                  }
                  while ( v100 != -1 );
                  v99 = (char *)v250;
                }
                j__free(v99);
                v85 = v251;
                v250 = v86;
                v252 = v98;
              }
              v89 = v212;
              v90 = &v86[24 * v85];
              *(_QWORD *)v90 = v211;
              *((_QWORD *)v90 + 1) = v89;
              *((_QWORD *)v90 + 2) = v213;
            }
            v11 = *a2;
            ++v251;
          }
          v10[1] = v11;
          if ( v254 )
          {
            v77 = v10[1];
            v214 = *v10;
            v215 = v77;
            v79 = (char *)v250;
            v78 = v251;
            LOBYTE(v216) = 0;
            v80 = v252;
            v81 = v251 + 1;
            if ( v250 <= &v214 && &v214 < (unsigned __int64 *)((char *)v250 + 24 * v252) )
            {
              v235 = v214;
              v236 = v215;
              v237 = v216;
              if ( v252 < v81 )
              {
                v79 = (char *)sub_491288((__int64)&v250, nullptr, v81, 0x18u);
                v159 = v252;
                v160 = (char *)v250;
                v252 = v80;
                v161 = v251 - 1;
                if ( v251 - 1 >= 0 )
                {
                  v162 = 0;
                  do
                  {
                    v163 = &v160[v162];
                    v164 = &v79[v162];
                    --v161;
                    v162 += 24;
                    v165 = *((_QWORD *)v163 + 1);
                    *(_QWORD *)v164 = *(_QWORD *)v163;
                    *((_QWORD *)v164 + 1) = v165;
                    *((_QWORD *)v164 + 2) = *((_QWORD *)v163 + 2);
                  }
                  while ( v161 != -1 );
                  v160 = (char *)v250;
                }
                j__free(v160);
                v78 = v251;
                v250 = v79;
                v252 = v159;
              }
              v112 = v237;
              v113 = v236;
              v114 = &v79[24 * v78];
              *(_QWORD *)v114 = v235;
              *((_QWORD *)v114 + 1) = v113;
              *((_QWORD *)v114 + 2) = v112;
            }
            else
            {
              if ( v252 < v81 )
              {
                v79 = (char *)sub_491288((__int64)&v250, nullptr, v81, 0x18u);
                v105 = v252;
                v106 = (char *)v250;
                v252 = v80;
                v107 = v251 - 1;
                if ( v251 - 1 >= 0 )
                {
                  v108 = 0;
                  do
                  {
                    v109 = &v106[v108];
                    v110 = &v79[v108];
                    --v107;
                    v108 += 24;
                    v111 = *((_QWORD *)v109 + 1);
                    *(_QWORD *)v110 = *(_QWORD *)v109;
                    *((_QWORD *)v110 + 1) = v111;
                    *((_QWORD *)v110 + 2) = *((_QWORD *)v109 + 2);
                  }
                  while ( v107 != -1 );
                  v106 = (char *)v250;
                }
                j__free(v106);
                v78 = v251;
                v250 = v79;
                v252 = v105;
              }
              v82 = v215;
              v83 = &v79[24 * v78];
              *(_QWORD *)v83 = v214;
              *((_QWORD *)v83 + 1) = v82;
              *((_QWORD *)v83 + 2) = v216;
            }
            ++v251;
          }
          if ( a2[1] < v13 )
          {
            ptr = (void *)a2[1];
            v248 = v13;
            sub_496458((void **)a1, (unsigned __int64 *)&ptr, (__int64)&v250);
            LODWORD(v9) = v9 + 1;
            v8 = *(_QWORD *)(a1 + 8);
            goto LABEL_40;
          }
        }
        else
        {
          if ( v14 >= v13 )
          {
            LODWORD(v9) = v9 - 1;
            goto LABEL_40;
          }
          if ( v7 )
          {
            v91 = v10[1];
            v93 = (char *)v250;
            v92 = v251;
            v205 = *v10;
            v206 = v91;
            LOBYTE(v207) = 1;
            v94 = v252;
            v95 = v251 + 1;
            if ( v250 <= &v205 && &v205 < (unsigned __int64 *)((char *)v250 + 24 * v252) )
            {
              v228 = v207;
              v226 = v205;
              v227 = v206;
              if ( v252 < v95 )
              {
                v93 = (char *)sub_491288((__int64)&v250, nullptr, v95, 0x18u);
                v196 = v252;
                v197 = (char *)v250;
                v252 = v94;
                v198 = v251 - 1;
                if ( v251 - 1 >= 0 )
                {
                  v199 = 0;
                  do
                  {
                    v200 = &v197[v199];
                    v201 = &v93[v199];
                    --v198;
                    v199 += 24;
                    v202 = *((_QWORD *)v200 + 1);
                    *(_QWORD *)v201 = *(_QWORD *)v200;
                    *((_QWORD *)v201 + 1) = v202;
                    *((_QWORD *)v201 + 2) = *((_QWORD *)v200 + 2);
                  }
                  while ( v198 != -1 );
                  v197 = (char *)v250;
                }
                j__free(v197);
                v92 = v251;
                v250 = v93;
                v252 = v196;
              }
              v153 = &v93[24 * v92];
              v154 = v227;
              v155 = v228;
              *(_QWORD *)v153 = v226;
              *((_QWORD *)v153 + 1) = v154;
              *((_QWORD *)v153 + 2) = v155;
            }
            else
            {
              if ( v252 < v95 )
              {
                v93 = (char *)sub_491288((__int64)&v250, nullptr, v95, 0x18u);
                v132 = v252;
                v133 = (char *)v250;
                v252 = v94;
                v134 = v251 - 1;
                if ( v251 - 1 >= 0 )
                {
                  v135 = 0;
                  do
                  {
                    v136 = &v133[v135];
                    v137 = &v93[v135];
                    --v134;
                    v135 += 24;
                    v138 = *((_QWORD *)v136 + 1);
                    *(_QWORD *)v137 = *(_QWORD *)v136;
                    *((_QWORD *)v137 + 1) = v138;
                    *((_QWORD *)v137 + 2) = *((_QWORD *)v136 + 2);
                  }
                  while ( v134 != -1 );
                  v133 = (char *)v250;
                }
                j__free(v133);
                v92 = v251;
                v250 = v93;
                v252 = v132;
              }
              v96 = v206;
              v97 = &v93[24 * v92];
              *(_QWORD *)v97 = v205;
              *((_QWORD *)v97 + 1) = v96;
              *((_QWORD *)v97 + 2) = v207;
            }
            v14 = a2[1];
            ++v251;
          }
          *v10 = v14;
          if ( v254 )
          {
            v15 = v10[1];
            v208 = *v10;
            v209 = v15;
            v17 = (char *)v250;
            v16 = v251;
            LOBYTE(v210) = 0;
            v18 = v252;
            v19 = v251 + 1;
            if ( v250 <= &v208 && &v208 < (unsigned __int64 *)((char *)v250 + 24 * v252) )
            {
              v229 = v208;
              v230 = v209;
              v231 = v210;
              if ( v252 < v19 )
              {
                v17 = (char *)sub_491288((__int64)&v250, nullptr, v19, 0x18u);
                v189 = v252;
                v190 = (char *)v250;
                v252 = v18;
                v191 = v251 - 1;
                if ( v251 - 1 >= 0 )
                {
                  v192 = 0;
                  do
                  {
                    v193 = &v190[v192];
                    v194 = &v17[v192];
                    --v191;
                    v192 += 24;
                    v195 = *((_QWORD *)v193 + 1);
                    *(_QWORD *)v194 = *(_QWORD *)v193;
                    *((_QWORD *)v194 + 1) = v195;
                    *((_QWORD *)v194 + 2) = *((_QWORD *)v193 + 2);
                  }
                  while ( v191 != -1 );
                  v190 = (char *)v250;
                }
                j__free(v190);
                v16 = v251;
                v250 = v17;
                v252 = v189;
              }
              v156 = v231;
              v157 = v230;
              v158 = &v17[24 * v16];
              *(_QWORD *)v158 = v229;
              *((_QWORD *)v158 + 1) = v157;
              *((_QWORD *)v158 + 2) = v156;
            }
            else
            {
              if ( v252 < v19 )
              {
                v17 = (char *)sub_491288((__int64)&v250, nullptr, v19, 0x18u);
                v139 = v252;
                v140 = (char *)v250;
                v252 = v18;
                v141 = v251 - 1;
                if ( v251 - 1 >= 0 )
                {
                  v142 = 0;
                  do
                  {
                    v143 = &v140[v142];
                    v144 = &v17[v142];
                    --v141;
                    v142 += 24;
                    v145 = *((_QWORD *)v143 + 1);
                    *(_QWORD *)v144 = *(_QWORD *)v143;
                    *((_QWORD *)v144 + 1) = v145;
                    *((_QWORD *)v144 + 2) = *((_QWORD *)v143 + 2);
                  }
                  while ( v141 != -1 );
                  v140 = (char *)v250;
                }
                j__free(v140);
                v16 = v251;
                v250 = v17;
                v252 = v139;
              }
              v20 = v209;
              v21 = &v17[24 * v16];
              *(_QWORD *)v21 = v208;
              *((_QWORD *)v21 + 1) = v20;
              *((_QWORD *)v21 + 2) = v210;
            }
            v8 = *(_QWORD *)(a1 + 8);
            ++v251;
LABEL_40:
            v33 = v9;
            while ( ++v33 < v8 )
            {
              v34 = 16LL * v33;
              v35 = a2[1];
              v36 = (unsigned __int64 *)(*(_QWORD *)a1 + v34);
              if ( v35 <= *v36 )
                break;
              if ( v35 < v36[1] )
              {
                if ( v254 )
                {
                  v44 = v36[1];
                  v46 = (char *)v250;
                  v45 = v251;
                  v217 = *v36;
                  v218 = v44;
                  LOBYTE(v219) = 1;
                  v47 = v252;
                  v48 = v251 + 1;
                  if ( v250 <= &v217 && &v217 < (unsigned __int64 *)((char *)v250 + 24 * v252) )
                  {
                    v240 = v219;
                    v238 = v217;
                    v239 = v218;
                    if ( v252 < v48 )
                    {
                      v181 = (char *)sub_491288((__int64)&v250, nullptr, v48, 0x18u);
                      v182 = v252;
                      v252 = v47;
                      v46 = v181;
                      v183 = v251 - 1;
                      if ( v251 - 1 >= 0 )
                      {
                        v184 = (char *)v250;
                        v185 = 0;
                        do
                        {
                          v186 = &v184[v185];
                          v187 = &v46[v185];
                          --v183;
                          v185 += 24;
                          v188 = *((_QWORD *)v186 + 1);
                          *(_QWORD *)v187 = *(_QWORD *)v186;
                          *((_QWORD *)v187 + 1) = v188;
                          *((_QWORD *)v187 + 2) = *((_QWORD *)v186 + 2);
                        }
                        while ( v183 != -1 );
                      }
                      j__free(v250);
                      v45 = v251;
                      v250 = v46;
                      v252 = v182;
                    }
                    v150 = &v46[24 * v45];
                    v151 = v239;
                    v152 = v240;
                    *(_QWORD *)v150 = v238;
                    *((_QWORD *)v150 + 1) = v151;
                    *((_QWORD *)v150 + 2) = v152;
                  }
                  else
                  {
                    if ( v252 < v48 )
                    {
                      v46 = (char *)sub_491288((__int64)&v250, nullptr, v48, 0x18u);
                      v125 = v252;
                      v126 = (char *)v250;
                      v252 = v47;
                      v127 = v251 - 1;
                      if ( v251 - 1 >= 0 )
                      {
                        v128 = 0;
                        do
                        {
                          v129 = &v126[v128];
                          v130 = &v46[v128];
                          --v127;
                          v128 += 24;
                          v131 = *((_QWORD *)v129 + 1);
                          *(_QWORD *)v130 = *(_QWORD *)v129;
                          *((_QWORD *)v130 + 1) = v131;
                          *((_QWORD *)v130 + 2) = *((_QWORD *)v129 + 2);
                        }
                        while ( v127 != -1 );
                        v126 = (char *)v250;
                      }
                      j__free(v126);
                      v45 = v251;
                      v250 = v46;
                      v252 = v125;
                    }
                    v49 = v218;
                    v50 = &v46[24 * v45];
                    *(_QWORD *)v50 = v217;
                    *((_QWORD *)v50 + 1) = v49;
                    *((_QWORD *)v50 + 2) = v219;
                  }
                  v35 = a2[1];
                  v36 = (unsigned __int64 *)(*(_QWORD *)a1 + v34);
                  ++v251;
                }
                *v36 = v35;
                if ( v254 )
                {
                  v52 = (char *)v250;
                  v51 = v251;
                  v53 = (__int64 *)(*(_QWORD *)a1 + v34);
                  v54 = v252;
                  v55 = v251 + 1;
                  v56 = *v53;
                  v57 = v53[1];
                  v220 = *v53;
                  v221 = v57;
                  LOBYTE(v222) = 0;
                  if ( v250 <= &v220 && &v220 < (__int64 *)((char *)v250 + 24 * v252) )
                  {
                    v241 = v56;
                    v242 = v57;
                    v243 = v222;
                    if ( v252 < v55 )
                    {
                      v173 = (char *)sub_491288((__int64)&v250, nullptr, v55, 0x18u);
                      v174 = v252;
                      v252 = v54;
                      v52 = v173;
                      v175 = v251 - 1;
                      if ( v251 - 1 >= 0 )
                      {
                        v176 = (char *)v250;
                        v177 = 0;
                        do
                        {
                          v178 = &v176[v177];
                          v179 = &v52[v177];
                          --v175;
                          v177 += 24;
                          v180 = *((_QWORD *)v178 + 1);
                          *(_QWORD *)v179 = *(_QWORD *)v178;
                          *((_QWORD *)v179 + 1) = v180;
                          *((_QWORD *)v179 + 2) = *((_QWORD *)v178 + 2);
                        }
                        while ( v175 != -1 );
                      }
                      j__free(v250);
                      v51 = v251;
                      v250 = v52;
                      v252 = v174;
                    }
                    v147 = v243;
                    v148 = v242;
                    v149 = &v52[24 * v51];
                    *(_QWORD *)v149 = v241;
                    *((_QWORD *)v149 + 1) = v148;
                    *((_QWORD *)v149 + 2) = v147;
                  }
                  else
                  {
                    if ( v252 < v55 )
                    {
                      v52 = (char *)sub_491288((__int64)&v250, nullptr, v55, 0x18u);
                      v118 = v252;
                      v119 = (char *)v250;
                      v252 = v54;
                      v120 = v251 - 1;
                      if ( v251 - 1 >= 0 )
                      {
                        v121 = 0;
                        do
                        {
                          v122 = &v119[v121];
                          v123 = &v52[v121];
                          --v120;
                          v121 += 24;
                          v124 = *((_QWORD *)v122 + 1);
                          *(_QWORD *)v123 = *(_QWORD *)v122;
                          *((_QWORD *)v123 + 1) = v124;
                          *((_QWORD *)v123 + 2) = *((_QWORD *)v122 + 2);
                        }
                        while ( v120 != -1 );
                        v119 = (char *)v250;
                      }
                      j__free(v119);
                      v51 = v251;
                      v250 = v52;
                      v252 = v118;
                    }
                    v58 = v221;
                    v59 = &v52[24 * v51];
                    *(_QWORD *)v59 = v220;
                    *((_QWORD *)v59 + 1) = v58;
                    *((_QWORD *)v59 + 2) = v222;
                  }
                  ++v251;
                }
                break;
              }
              if ( v254 )
              {
                v37 = v36[1];
                v223 = *v36;
                v224 = v37;
                v39 = (char *)v250;
                v38 = v251;
                LOBYTE(v225) = 1;
                v40 = v252;
                v41 = v251 + 1;
                if ( v250 <= &v223 && &v223 < (unsigned __int64 *)((char *)v250 + 24 * v252) )
                {
                  v246 = v225;
                  v244 = v223;
                  v245 = v224;
                  if ( v252 < v41 )
                  {
                    v39 = (char *)sub_491288((__int64)&v250, nullptr, v41, 0x18u);
                    v204 = v252;
                    v252 = v40;
                    v71 = v251 - 1;
                    v72 = (char *)v250;
                    if ( v251 - 1 >= 0 )
                    {
                      v73 = 0;
                      do
                      {
                        v74 = &v72[v73];
                        v75 = &v39[v73];
                        --v71;
                        v73 += 24;
                        v76 = *((_QWORD *)v74 + 1);
                        *(_QWORD *)v75 = *(_QWORD *)v74;
                        *((_QWORD *)v75 + 1) = v76;
                        *((_QWORD *)v75 + 2) = *((_QWORD *)v74 + 2);
                      }
                      while ( v71 != -1 );
                      v72 = (char *)v250;
                    }
                    j__free(v72);
                    v38 = v251;
                    v250 = v39;
                    v252 = v204;
                  }
                  v68 = &v39[24 * v38];
                  v69 = v245;
                  v70 = v246;
                  *(_QWORD *)v68 = v244;
                  *((_QWORD *)v68 + 1) = v69;
                  *((_QWORD *)v68 + 2) = v70;
                }
                else
                {
                  if ( v252 < v41 )
                  {
                    v39 = (char *)sub_491288((__int64)&v250, nullptr, v41, 0x18u);
                    v203 = v252;
                    v252 = v40;
                    v62 = v251 - 1;
                    v63 = (char *)v250;
                    if ( v251 - 1 >= 0 )
                    {
                      v64 = 0;
                      do
                      {
                        v65 = &v63[v64];
                        v66 = &v39[v64];
                        --v62;
                        v64 += 24;
                        v67 = *((_QWORD *)v65 + 1);
                        *(_QWORD *)v66 = *(_QWORD *)v65;
                        *((_QWORD *)v66 + 1) = v67;
                        *((_QWORD *)v66 + 2) = *((_QWORD *)v65 + 2);
                      }
                      while ( v62 != -1 );
                      v63 = (char *)v250;
                    }
                    j__free(v63);
                    v38 = v251;
                    v250 = v39;
                    v252 = v203;
                  }
                  v42 = v224;
                  v43 = &v39[24 * v38];
                  *(_QWORD *)v43 = v223;
                  *((_QWORD *)v43 + 1) = v42;
                  *((_QWORD *)v43 + 2) = v225;
                }
                v8 = *(_QWORD *)(a1 + 8);
                ++v251;
              }
            }
            if ( (_DWORD)v9 + 1 != v33 )
            {
              v60 = 16LL * v33;
              v61 = 16 * ((int)v9 + 1LL);
              memmove(
                (void *)(*(_QWORD *)a1 + v61),
                (const void *)(*(_QWORD *)a1 + v60),
                16LL * *(_QWORD *)(a1 + 8) - v60);
              *(_QWORD *)(a1 + 8) -= (v60 - v61) >> 4;
            }
            v4 = v254;
            *(_QWORD *)(a1 + 24) = 0;
            if ( v4 )
            {
              v146 = v251;
              if ( v251 )
              {
                ptr = nullptr;
                v248 = 0;
                v249 = 0;
                v22 = nullptr;
                v23 = 21 * v251 + 10;
                if ( 21 * v251 != -10 )
                {
                  ptr = sub_491288((__int64)&ptr, nullptr, 21 * v251 + 10, 1u);
                  memset((char *)ptr + v248, 0, v23 - v248);
                  v248 = v23;
                  v22 = ptr;
                  v146 = v251;
                }
                v24 = (unsigned __int64)&v22[v23];
                v25 = sub_48E4D8(v22, v24, v146);
                v26 = (char *)v250;
                v27 = (char *)v250 + 24 * v251;
                if ( v250 != v27 )
                {
                  v28 = 0;
                  do
                  {
                    if ( v24 > (unsigned __int64)v25 )
                      *v25++ = v26[16];
                    v29 = sub_48E4D8(v25, v24, *(_QWORD *)v26 - v28);
                    v25 = sub_48E4D8(v29, v24, *((_QWORD *)v26 + 1) - *(_QWORD *)v26);
                    v28 = *((_QWORD *)v26 + 1);
                    v26 += 24;
                  }
                  while ( v27 != v26 );
                }
                v30 = (char *)ptr;
                v31 = v248;
                v32 = v25 - (_BYTE *)ptr;
                if ( v25 - (_BYTE *)ptr > v248 )
                {
                  if ( v32 > v249 )
                  {
                    v30 = (char *)sub_491288((__int64)&ptr, ptr, v32, 1u);
                    v31 = v248;
                    ptr = v30;
                  }
                  memset(&v30[v31], 0, v32 - v31);
                  v248 = v32;
                }
                else if ( v25 - (_BYTE *)ptr < v248 )
                {
                  v248 = v25 - (_BYTE *)ptr;
                }
                sub_47DBC8();
                v251 = 0;
                if ( ptr )
                {
                  v248 = 0;
                  j__free(ptr);
                }
              }
            }
            else
            {
              v4 = 1;
            }
            goto LABEL_33;
          }
        }
        v8 = *(_QWORD *)(a1 + 8);
        goto LABEL_40;
      }
    }
    v4 = 0;
  }
LABEL_33:
  if ( v250 )
  {
    v251 = 0;
    j__free(v250);
  }
  return v4;
}
// 4975C8: could not find valid save-restore pair for x25
// 4975C8: could not find valid save-restore pair for x26
// 4975C8: could not find valid save-restore pair for x27
