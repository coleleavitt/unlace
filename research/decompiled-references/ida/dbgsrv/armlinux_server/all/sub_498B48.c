/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_498B48
// Address: 0x0000000000498B48

//----- (0000000000498B48) ----------------------------------------------------
__int64 __fastcall sub_498B48(__int64 a1, __int64 *a2)
{
  unsigned __int64 v4; // x3
  int v5; // w0
  char v6; // w0
  __int64 *v7; // x21
  int v8; // w0
  __int64 v9; // x2
  unsigned int v10; // w28
  unsigned __int8 v11; // w0
  int v12; // w20
  int v13; // w24
  __int64 v14; // x23
  __int64 v15; // x19
  unsigned __int64 *v16; // x27
  __int64 v17; // x2
  unsigned __int64 v18; // x1
  __int64 v19; // x19
  unsigned __int64 *v20; // x21
  int v21; // w19
  unsigned __int64 v22; // x0
  unsigned __int64 v23; // x0
  __int64 *v24; // x1
  char *v25; // x24
  char *v26; // x28
  __int64 v27; // x0
  char *v28; // x21
  unsigned __int64 v29; // x3
  char *v30; // x21
  unsigned __int64 v31; // x3
  unsigned __int64 v32; // x2
  unsigned __int64 v33; // x27
  unsigned __int64 v34; // x23
  char *v35; // x0
  __int64 v36; // x2
  __int64 v37; // x1
  char *v38; // x4
  char *v39; // x3
  __int64 v40; // x7
  __int64 v42; // x0
  unsigned __int64 v43; // x24
  __int64 v44; // x0
  unsigned __int64 v45; // x3
  char *v46; // x19
  unsigned __int64 v47; // x3
  char *v48; // x19
  unsigned __int64 v49; // x2
  unsigned __int64 v50; // x21
  unsigned __int64 v51; // x25
  char *v52; // x0
  __int64 v53; // x2
  __int64 v54; // x1
  char *v55; // x4
  char *v56; // x3
  __int64 v57; // x7
  __int64 v58; // x1
  unsigned __int64 v59; // x3
  char *v60; // x19
  char *v61; // x0
  char *v62; // x1
  unsigned __int64 v63; // x19
  __int64 v64; // x1
  int v65; // w2
  __int64 v66; // x2
  _BYTE *v67; // x0
  __int64 v68; // x20
  unsigned __int64 v69; // x20
  _BYTE *v70; // x0
  char *v71; // x19
  char *v72; // x21
  __int64 v73; // x2
  _BYTE *v74; // x0
  char *v75; // x1
  unsigned __int64 v76; // x2
  unsigned __int64 v77; // x19
  unsigned __int64 v78; // x1
  __int64 v79; // x0
  unsigned __int64 v80; // x2
  char *v81; // x0
  unsigned __int64 v82; // x3
  unsigned __int64 v83; // x2
  unsigned __int64 v84; // x3
  __int64 v85; // x0
  char *v86; // x21
  unsigned __int64 v87; // x2
  char *v88; // x21
  unsigned __int64 v89; // x3
  unsigned __int64 v90; // x3
  char *v91; // x21
  __int64 v92; // x25
  __int64 *v93; // x25
  __int64 v94; // x0
  unsigned __int64 v95; // x3
  char *v96; // x20
  unsigned __int64 v97; // x3
  char *v98; // x20
  unsigned __int64 v99; // x2
  unsigned __int64 v100; // x24
  unsigned __int64 v101; // x19
  char *v102; // x0
  __int64 v103; // x2
  __int64 v104; // x1
  char *v105; // x4
  char *v106; // x3
  __int64 v107; // x7
  unsigned __int64 v108; // x3
  char *v109; // x20
  _BYTE *v110; // x0
  __int64 v111; // x20
  unsigned __int64 v112; // x20
  _BYTE *v113; // x0
  char *v114; // x19
  char *v115; // x21
  __int64 v116; // x2
  _BYTE *v117; // x0
  char *v118; // x1
  unsigned __int64 v119; // x2
  unsigned __int64 v120; // x19
  __int64 v121; // x21
  char *v122; // x23
  int v123; // w0
  __int64 v124; // x0
  char *v125; // x21
  unsigned __int64 v126; // x2
  unsigned __int64 v127; // x23
  char *v128; // x21
  unsigned __int64 v129; // x3
  __int64 v130; // x2
  char *v131; // x0
  __int64 v132; // x1
  char *v133; // x4
  char *v134; // x3
  __int64 v135; // x7
  __int64 v136; // x2
  char *v137; // x0
  __int64 v138; // x1
  char *v139; // x4
  char *v140; // x3
  __int64 v141; // x7
  __int64 v142; // x2
  char *v143; // x0
  __int64 v144; // x1
  char *v145; // x4
  char *v146; // x3
  __int64 v147; // x6
  __int64 v148; // x7
  char *v149; // x21
  unsigned __int64 v150; // x3
  char *v151; // x0
  unsigned __int64 v152; // x3
  __int64 v153; // x2
  char *v154; // x0
  __int64 v155; // x1
  char *v156; // x4
  char *v157; // x3
  __int64 v158; // x7
  __int64 v159; // x2
  _BYTE *v160; // x0
  __int64 v161; // x20
  unsigned __int64 v162; // x20
  _BYTE *v163; // x0
  char *v164; // x19
  char *v165; // x21
  __int64 v166; // x2
  _BYTE *v167; // x0
  unsigned __int64 v168; // x3
  unsigned __int64 v169; // x19
  __int64 v170; // x2
  char *v171; // x0
  __int64 v172; // x1
  char *v173; // x4
  char *v174; // x3
  __int64 v175; // x7
  char *v176; // x0
  __int64 v177; // x2
  char *v178; // x0
  __int64 v179; // x1
  char *v180; // x4
  char *v181; // x3
  __int64 v182; // x7
  __int64 v183; // x2
  char *v184; // x0
  __int64 v185; // x1
  char *v186; // x4
  char *v187; // x3
  __int64 v188; // x6
  __int64 v189; // x7
  unsigned __int64 v190; // x19
  char *v191; // x0
  __int64 v192; // x2
  __int64 v193; // x1
  char *v194; // x6
  char *v195; // x3
  __int64 v196; // x5
  unsigned __int64 v197; // x3
  char *v198; // x21
  unsigned __int64 v199; // x27
  char *v200; // x6
  __int64 v201; // x0
  __int64 v202; // x1
  char *v203; // x3
  char *v204; // x2
  __int64 v205; // x5
  void *v206; // x0
  unsigned __int64 v207; // [xsp+60h] [xbp-1A0h]
  __int64 v208; // [xsp+68h] [xbp-198h]
  __int64 v209; // [xsp+68h] [xbp-198h]
  char *v210; // [xsp+68h] [xbp-198h]
  __int64 *v211; // [xsp+70h] [xbp-190h]
  __int64 v212; // [xsp+70h] [xbp-190h]
  unsigned __int64 v213; // [xsp+70h] [xbp-190h]
  unsigned __int64 v214; // [xsp+70h] [xbp-190h]
  unsigned __int64 v215; // [xsp+78h] [xbp-188h]
  unsigned __int64 v216; // [xsp+78h] [xbp-188h]
  unsigned __int64 v217; // [xsp+78h] [xbp-188h]
  unsigned __int64 v218; // [xsp+A0h] [xbp-160h]
  unsigned __int64 v219; // [xsp+A0h] [xbp-160h]
  unsigned __int64 v220; // [xsp+A8h] [xbp-158h]
  unsigned __int64 v221; // [xsp+A8h] [xbp-158h]
  unsigned __int64 v222; // [xsp+B8h] [xbp-148h] BYREF
  unsigned __int64 v223; // [xsp+C0h] [xbp-140h]
  __int64 v224; // [xsp+C8h] [xbp-138h]
  unsigned __int64 v225; // [xsp+D0h] [xbp-130h] BYREF
  unsigned __int64 v226; // [xsp+D8h] [xbp-128h]
  __int64 v227; // [xsp+E0h] [xbp-120h]
  unsigned __int64 v228; // [xsp+E8h] [xbp-118h] BYREF
  unsigned __int64 v229; // [xsp+F0h] [xbp-110h]
  __int64 v230; // [xsp+F8h] [xbp-108h]
  unsigned __int64 v231; // [xsp+100h] [xbp-100h] BYREF
  unsigned __int64 v232; // [xsp+108h] [xbp-F8h]
  __int64 v233; // [xsp+110h] [xbp-F0h]
  unsigned __int64 v234; // [xsp+118h] [xbp-E8h]
  unsigned __int64 v235; // [xsp+120h] [xbp-E0h]
  __int64 v236; // [xsp+128h] [xbp-D8h]
  void *v237; // [xsp+130h] [xbp-D0h] BYREF
  unsigned __int64 v238; // [xsp+138h] [xbp-C8h]
  unsigned __int64 v239; // [xsp+140h] [xbp-C0h]
  unsigned __int64 v240; // [xsp+148h] [xbp-B8h]
  unsigned __int64 v241; // [xsp+150h] [xbp-B0h]
  __int64 v242; // [xsp+158h] [xbp-A8h]
  unsigned __int64 v243; // [xsp+160h] [xbp-A0h]
  unsigned __int64 v244; // [xsp+168h] [xbp-98h]
  __int64 v245; // [xsp+170h] [xbp-90h]
  unsigned __int64 v246; // [xsp+178h] [xbp-88h] BYREF
  unsigned __int64 v247; // [xsp+180h] [xbp-80h]
  __int64 v248; // [xsp+188h] [xbp-78h]
  unsigned __int64 v249; // [xsp+190h] [xbp-70h] BYREF
  unsigned __int64 v250; // [xsp+198h] [xbp-68h]
  __int64 v251; // [xsp+1A0h] [xbp-60h]
  unsigned __int64 v252; // [xsp+1A8h] [xbp-58h]
  unsigned __int64 v253; // [xsp+1B0h] [xbp-50h]
  __int64 v254; // [xsp+1B8h] [xbp-48h]
  void *v255; // [xsp+1C0h] [xbp-40h] BYREF
  unsigned __int64 v256; // [xsp+1C8h] [xbp-38h]
  unsigned __int64 v257; // [xsp+1D0h] [xbp-30h]
  void *ptr; // [xsp+1D8h] [xbp-28h] BYREF
  __int64 v259; // [xsp+1E0h] [xbp-20h]
  unsigned __int64 v260; // [xsp+1E8h] [xbp-18h]
  int v261; // [xsp+1F0h] [xbp-10h]
  unsigned __int8 v262; // [xsp+1F4h] [xbp-Ch]

  v4 = *(_QWORD *)(a1 + 8);
  if ( !v4 )
    return 0;
  v5 = *(_DWORD *)(a1 + 32);
  if ( !a2[1] )
  {
    ptr = nullptr;
    v259 = 0;
    v260 = 0;
    v261 = v5;
    if ( v5 == -1 )
    {
      v262 = 0;
      v7 = *(__int64 **)a1;
    }
    else
    {
      v6 = sub_47DBD8();
      v7 = *(__int64 **)a1;
      if ( v6 )
      {
        v92 = *(_QWORD *)(a1 + 8);
        v262 = 1;
        v93 = &v7[2 * v92];
        if ( v93 > v7 )
        {
          v94 = v259;
          do
          {
            v97 = v7[1];
            v249 = *v7;
            v250 = v97;
            v98 = (char *)ptr;
            v99 = v94 + 1;
            LOBYTE(v251) = 1;
            v100 = v260;
            if ( ptr <= &v249 && &v249 < (unsigned __int64 *)((char *)ptr + 24 * v260) )
            {
              v254 = v251;
              v252 = v249;
              v253 = v250;
              if ( v260 < v99 )
              {
                v98 = (char *)sub_491288((__int64)&ptr, nullptr, v99, 0x18u);
                v207 = v260;
                v260 = v100;
                v170 = v259 - 1;
                v171 = (char *)ptr;
                if ( v259 - 1 >= 0 )
                {
                  v172 = 0;
                  do
                  {
                    v173 = &v171[v172];
                    v174 = &v98[v172];
                    --v170;
                    v172 += 24;
                    v175 = *((_QWORD *)v173 + 1);
                    *(_QWORD *)v174 = *(_QWORD *)v173;
                    *((_QWORD *)v174 + 1) = v175;
                    *((_QWORD *)v174 + 2) = *((_QWORD *)v173 + 2);
                  }
                  while ( v170 != -1 );
                  v171 = (char *)ptr;
                }
                j__free(v171);
                v94 = v259;
                ptr = v98;
                v260 = v207;
              }
              v108 = v253;
              v109 = &v98[24 * v94];
              *(_QWORD *)v109 = v252;
              *((_QWORD *)v109 + 1) = v108;
              *((_QWORD *)v109 + 2) = v254;
            }
            else
            {
              if ( v260 < v99 )
              {
                v98 = (char *)sub_491288((__int64)&ptr, nullptr, v99, 0x18u);
                v101 = v260;
                v102 = (char *)ptr;
                v260 = v100;
                v103 = v259 - 1;
                if ( v259 - 1 >= 0 )
                {
                  v104 = 0;
                  do
                  {
                    v105 = &v102[v104];
                    v106 = &v98[v104];
                    --v103;
                    v104 += 24;
                    v107 = *((_QWORD *)v105 + 1);
                    *(_QWORD *)v106 = *(_QWORD *)v105;
                    *((_QWORD *)v106 + 1) = v107;
                    *((_QWORD *)v106 + 2) = *((_QWORD *)v105 + 2);
                  }
                  while ( v103 != -1 );
                  v102 = (char *)ptr;
                }
                j__free(v102);
                v94 = v259;
                ptr = v98;
                v260 = v101;
              }
              v95 = v250;
              v96 = &v98[24 * v94];
              *(_QWORD *)v96 = v249;
              *((_QWORD *)v96 + 1) = v95;
              *((_QWORD *)v96 + 2) = v251;
            }
            v7 += 2;
            v94 = ++v259;
          }
          while ( v7 < v93 );
          v7 = *(__int64 **)a1;
        }
      }
      else
      {
        v262 = 0;
      }
    }
    if ( v7 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      j__free(v7);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    v8 = v262;
    *(_QWORD *)(a1 + 24) = 0;
    if ( v8 )
    {
      v9 = v259;
      if ( v259 )
      {
        v255 = nullptr;
        v256 = 0;
        v257 = 0;
        v110 = nullptr;
        v111 = 21 * v259 + 10;
        if ( 21 * v259 != -10 )
        {
          v255 = sub_491288((__int64)&v255, nullptr, 21 * v259 + 10, 1u);
          memset((char *)v255 + v256, 0, v111 - v256);
          v256 = v111;
          v110 = v255;
          v9 = v259;
        }
        v112 = (unsigned __int64)&v110[v111];
        v113 = sub_48E4D8(v110, v112, v9);
        v114 = (char *)ptr;
        v115 = (char *)ptr + 24 * v259;
        if ( ptr != v115 )
        {
          v116 = 0;
          do
          {
            if ( v112 > (unsigned __int64)v113 )
              *v113++ = v114[16];
            v117 = sub_48E4D8(v113, v112, *(_QWORD *)v114 - v116);
            v113 = sub_48E4D8(v117, v112, *((_QWORD *)v114 + 1) - *(_QWORD *)v114);
            v116 = *((_QWORD *)v114 + 1);
            v114 += 24;
          }
          while ( v115 != v114 );
        }
        v118 = (char *)v255;
        v119 = v256;
        v120 = v113 - (_BYTE *)v255;
        if ( v113 - (_BYTE *)v255 > v256 )
        {
          if ( v120 > v257 )
          {
            v118 = (char *)sub_491288((__int64)&v255, v255, v120, 1u);
            v119 = v256;
            v255 = v118;
          }
          memset(&v118[v119], 0, v120 - v119);
          v256 = v120;
        }
        else if ( v113 - (_BYTE *)v255 < v256 )
        {
          v256 = v113 - (_BYTE *)v255;
        }
        sub_47DBC8();
        v259 = 0;
        if ( v255 )
        {
          v256 = 0;
          j__free(v255);
        }
      }
    }
    if ( ptr )
    {
      v259 = 0;
      j__free(ptr);
    }
    return 1;
  }
  ptr = nullptr;
  v259 = 0;
  v260 = 0;
  v261 = v5;
  if ( v5 == -1 )
  {
    v11 = 0;
  }
  else
  {
    v11 = sub_47DBD8();
    v4 = *(_QWORD *)(a1 + 8);
  }
  v262 = v11;
  v12 = 0;
  v13 = 0;
  v10 = 0;
LABEL_16:
  v14 = v13;
  if ( v13 >= v4 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    if ( !v10 )
      goto LABEL_69;
    v10 = v262;
    if ( v262 )
    {
      v159 = v259;
      if ( v259 )
      {
        v255 = nullptr;
        v256 = 0;
        v257 = 0;
        v160 = nullptr;
        v161 = 21 * v259 + 10;
        if ( 21 * v259 != -10 )
        {
          v255 = sub_491288((__int64)&v255, nullptr, 21 * v259 + 10, 1u);
          memset((char *)v255 + v256, 0, v161 - v256);
          v256 = v161;
          v160 = v255;
          v159 = v259;
        }
        v162 = (unsigned __int64)&v160[v161];
        v163 = sub_48E4D8(v160, v162, v159);
        v164 = (char *)ptr;
        v165 = (char *)ptr + 24 * v259;
        if ( ptr != v165 )
        {
          v166 = 0;
          do
          {
            if ( v162 > (unsigned __int64)v163 )
              *v163++ = v164[16];
            v167 = sub_48E4D8(v163, v162, *(_QWORD *)v164 - v166);
            v163 = sub_48E4D8(v167, v162, *((_QWORD *)v164 + 1) - *(_QWORD *)v164);
            v166 = *((_QWORD *)v164 + 1);
            v164 += 24;
          }
          while ( v165 != v164 );
        }
        v168 = v256;
        v169 = v163 - (_BYTE *)v255;
        if ( v163 - (_BYTE *)v255 > v256 )
        {
          if ( v169 > v257 )
          {
            v206 = sub_491288((__int64)&v255, v255, v169, 1u);
            v168 = v256;
            v255 = v206;
          }
          memset((char *)v255 + v168, 0, v169 - v168);
          v256 = v169;
        }
        else if ( v163 - (_BYTE *)v255 < v256 )
        {
          v256 = v163 - (_BYTE *)v255;
        }
        sub_47DBC8();
        v259 = 0;
        if ( v255 )
        {
          v256 = 0;
          j__free(v255);
        }
        goto LABEL_69;
      }
    }
    goto LABEL_68;
  }
  v208 = 16LL * v13;
  v211 = *(__int64 **)a1;
  v15 = v12;
  v16 = (unsigned __int64 *)(*(_QWORD *)a1 + v208);
  v17 = *a2;
  v18 = *v16;
  do
  {
    v19 = 16 * v15;
    v20 = (unsigned __int64 *)(v17 + v19);
    if ( *(_QWORD *)(v17 + v19 + 8) > v18 )
    {
      if ( v262 )
      {
        v83 = *v16;
        v84 = v16[1];
        LOBYTE(v224) = 1;
        v86 = (char *)ptr;
        v85 = v259;
        v216 = v260;
        v222 = v83;
        v223 = v84;
        v87 = v259 + 1;
        if ( ptr <= &v222 && &v222 < (unsigned __int64 *)((char *)ptr + 24 * v260) )
        {
          v242 = v224;
          v240 = v222;
          v241 = v223;
          if ( v260 < v87 )
          {
            v86 = (char *)sub_491288((__int64)&ptr, nullptr, v87, 0x18u);
            v220 = v260;
            v260 = v216;
            v177 = v259 - 1;
            v178 = (char *)ptr;
            if ( v259 - 1 >= 0 )
            {
              v179 = 0;
              do
              {
                v180 = &v178[v179];
                v181 = &v86[v179];
                --v177;
                v179 += 24;
                v182 = *((_QWORD *)v180 + 1);
                *(_QWORD *)v181 = *(_QWORD *)v180;
                *((_QWORD *)v181 + 1) = v182;
                *((_QWORD *)v181 + 2) = *((_QWORD *)v180 + 2);
              }
              while ( v177 != -1 );
              v178 = (char *)ptr;
            }
            j__free(v178);
            v85 = v259;
            ptr = v86;
            v260 = v220;
          }
          v149 = &v86[24 * v85];
          v150 = v241;
          *(_QWORD *)v149 = v240;
          *((_QWORD *)v149 + 1) = v150;
          *((_QWORD *)v149 + 2) = v242;
        }
        else
        {
          if ( v260 < v87 )
          {
            v86 = (char *)sub_491288((__int64)&ptr, nullptr, v87, 0x18u);
            v218 = v260;
            v260 = v216;
            v136 = v259 - 1;
            v137 = (char *)ptr;
            if ( v259 - 1 >= 0 )
            {
              v138 = 0;
              do
              {
                v139 = &v137[v138];
                v140 = &v86[v138];
                --v136;
                v138 += 24;
                v141 = *((_QWORD *)v139 + 1);
                *(_QWORD *)v140 = *(_QWORD *)v139;
                *((_QWORD *)v140 + 1) = v141;
                *((_QWORD *)v140 + 2) = *((_QWORD *)v139 + 2);
              }
              while ( v136 != -1 );
              v137 = (char *)ptr;
            }
            j__free(v137);
            v85 = v259;
            ptr = v86;
            v260 = v218;
          }
          v88 = &v86[24 * v85];
          v89 = v223;
          *(_QWORD *)v88 = v222;
          *((_QWORD *)v88 + 1) = v89;
          *((_QWORD *)v88 + 2) = v224;
        }
        ++v259;
        v18 = v211[2 * v13];
        v20 = (unsigned __int64 *)(*a2 + v19);
      }
      v21 = v13 + 1;
      v22 = *v20;
      v215 = v16[1];
      if ( *v20 > v18 )
      {
        if ( v22 >= v16[1] )
        {
          v21 = v13;
LABEL_26:
          if ( v262 )
          {
            v78 = v16[1];
            v225 = *v16;
            v226 = v78;
            v79 = v259;
            LOBYTE(v227) = 0;
            v80 = v259 + 1;
            v210 = (char *)ptr;
            v213 = v260;
            if ( ptr <= &v225 && &v225 < (unsigned __int64 *)((char *)ptr + 24 * v260) )
            {
              v243 = v225;
              v244 = v226;
              v245 = v227;
              if ( v260 < v80 )
              {
                v210 = (char *)sub_491288((__int64)&ptr, nullptr, v80, 0x18u);
                v221 = v260;
                v260 = v213;
                v183 = v259 - 1;
                v184 = (char *)ptr;
                if ( v259 - 1 >= 0 )
                {
                  v185 = 0;
                  do
                  {
                    v186 = &v184[v185];
                    --v183;
                    v187 = &v210[v185];
                    v188 = *(_QWORD *)&v184[v185];
                    v189 = *(_QWORD *)&v184[v185 + 8];
                    v185 += 24;
                    *(_QWORD *)v187 = v188;
                    *((_QWORD *)v187 + 1) = v189;
                    *((_QWORD *)v187 + 2) = *((_QWORD *)v186 + 2);
                  }
                  while ( v183 != -1 );
                  v184 = (char *)ptr;
                }
                j__free(v184);
                ptr = v210;
                v79 = v259;
                v260 = v221;
              }
              v151 = &v210[24 * v79];
              v152 = v244;
              *(_QWORD *)v151 = v243;
              *((_QWORD *)v151 + 1) = v152;
              *((_QWORD *)v151 + 2) = v245;
            }
            else
            {
              if ( v260 < v80 )
              {
                v210 = (char *)sub_491288((__int64)&ptr, nullptr, v80, 0x18u);
                v219 = v260;
                v260 = v213;
                v142 = v259 - 1;
                v143 = (char *)ptr;
                if ( v259 - 1 >= 0 )
                {
                  v144 = 0;
                  do
                  {
                    v145 = &v143[v144];
                    --v142;
                    v146 = &v210[v144];
                    v147 = *(_QWORD *)&v143[v144];
                    v148 = *(_QWORD *)&v143[v144 + 8];
                    v144 += 24;
                    *(_QWORD *)v146 = v147;
                    *((_QWORD *)v146 + 1) = v148;
                    *((_QWORD *)v146 + 2) = *((_QWORD *)v145 + 2);
                  }
                  while ( v142 != -1 );
                  v143 = (char *)ptr;
                }
                j__free(v143);
                ptr = v210;
                v79 = v259;
                v260 = v219;
              }
              v81 = &v210[24 * v79];
              v82 = v226;
              *(_QWORD *)v81 = v225;
              *((_QWORD *)v81 + 1) = v82;
              *((_QWORD *)v81 + 2) = v227;
            }
            ++v259;
          }
          v24 = *(__int64 **)a1;
          do
          {
            if ( v24[2 * v14 + 1] > *v20 )
              break;
            v14 = ++v13;
          }
          while ( v13 != *(_QWORD *)(a1 + 8) );
          if ( v13 <= v21 )
          {
            v63 = v16[1];
            v4 = *(_QWORD *)(a1 + 8);
            if ( v63 >= v215 )
              goto LABEL_66;
            v121 = 16 * (v14 + 1);
            v122 = (char *)&v24[(unsigned __int64)v121 / 8];
            if ( v4 + 1 > *(_QWORD *)(a1 + 16) )
            {
              v176 = (char *)sub_491288(a1, v24, v4 + 1, 0x10u);
              v122 = &v176[v121];
              v4 = *(_QWORD *)(a1 + 8);
              *(_QWORD *)a1 = v176;
            }
            memmove(v122 + 16, v122, 16 * v4 - v121);
            *(_QWORD *)v122 = v63;
            *((_QWORD *)v122 + 1) = v215;
            v123 = v262;
            v4 = *(_QWORD *)(a1 + 8) + 1LL;
            *(_QWORD *)(a1 + 8) = v4;
            if ( v123 )
            {
              v125 = (char *)ptr;
              v124 = v259;
              v228 = v63;
              v229 = v215;
              LOBYTE(v230) = 0;
              v126 = v259 + 1;
              v127 = v260;
              if ( ptr <= &v228 && &v228 < (unsigned __int64 *)((char *)ptr + 24 * v260) )
              {
                v254 = v230;
                v252 = v228;
                v253 = v229;
                if ( v260 < v126 )
                {
                  v125 = (char *)sub_491288((__int64)&ptr, nullptr, v126, 0x18u);
                  v199 = v260;
                  v200 = (char *)ptr;
                  v260 = v127;
                  v201 = v259 - 1;
                  if ( v259 - 1 >= 0 )
                  {
                    v202 = 0;
                    do
                    {
                      v203 = &v200[v202];
                      v204 = &v125[v202];
                      --v201;
                      v202 += 24;
                      v205 = *((_QWORD *)v203 + 1);
                      *(_QWORD *)v204 = *(_QWORD *)v203;
                      *((_QWORD *)v204 + 1) = v205;
                      *((_QWORD *)v204 + 2) = *((_QWORD *)v203 + 2);
                    }
                    while ( v201 != -1 );
                  }
                  j__free(ptr);
                  v124 = v259;
                  ptr = v125;
                  v260 = v199;
                }
                v197 = v253;
                v198 = &v125[24 * v124];
                *(_QWORD *)v198 = v252;
                *((_QWORD *)v198 + 1) = v197;
                *((_QWORD *)v198 + 2) = v254;
              }
              else
              {
                if ( v260 < v126 )
                {
                  v125 = (char *)sub_491288((__int64)&ptr, nullptr, v126, 0x18u);
                  v190 = v260;
                  v191 = (char *)ptr;
                  v260 = v127;
                  v192 = v259 - 1;
                  if ( v259 - 1 >= 0 )
                  {
                    v193 = 0;
                    do
                    {
                      v194 = &v191[v193];
                      v195 = &v125[v193];
                      --v192;
                      v193 += 24;
                      v196 = *((_QWORD *)v194 + 1);
                      *(_QWORD *)v195 = *(_QWORD *)v194;
                      *((_QWORD *)v195 + 1) = v196;
                      *((_QWORD *)v195 + 2) = *((_QWORD *)v194 + 2);
                    }
                    while ( v192 != -1 );
                    v191 = (char *)ptr;
                  }
                  j__free(v191);
                  v124 = v259;
                  ptr = v125;
                  v260 = v190;
                }
                v128 = &v125[24 * v124];
                v129 = v229;
                *(_QWORD *)v128 = v228;
                *((_QWORD *)v128 + 1) = v129;
                *((_QWORD *)v128 + 2) = v230;
              }
              ++v13;
              v4 = *(_QWORD *)(a1 + 8);
              ++v259;
            }
            else
            {
LABEL_66:
              ++v13;
            }
          }
          else
          {
            v209 = 16LL * v21;
            v212 = 16 * v14;
            v25 = (char *)&v24[(unsigned __int64)v209 / 8];
            v26 = (char *)&v24[2 * v14];
            if ( v262 && v25 < v26 )
            {
              v27 = v259;
              do
              {
                v30 = (char *)ptr;
                v31 = *((_QWORD *)v25 + 1);
                v246 = *(_QWORD *)v25;
                v247 = v31;
                v32 = v27 + 1;
                LOBYTE(v248) = 1;
                v33 = v260;
                if ( ptr <= &v246 && &v246 < (unsigned __int64 *)((char *)ptr + 24 * v260) )
                {
                  v249 = v246;
                  v250 = v247;
                  v251 = v248;
                  if ( v260 < v32 )
                  {
                    v30 = (char *)sub_491288((__int64)&ptr, nullptr, v32, 0x18u);
                    v217 = v260;
                    v260 = v33;
                    v130 = v259 - 1;
                    v131 = (char *)ptr;
                    if ( v259 - 1 >= 0 )
                    {
                      v132 = 0;
                      do
                      {
                        v133 = &v131[v132];
                        v134 = &v30[v132];
                        --v130;
                        v132 += 24;
                        v135 = *((_QWORD *)v133 + 1);
                        *(_QWORD *)v134 = *(_QWORD *)v133;
                        *((_QWORD *)v134 + 1) = v135;
                        *((_QWORD *)v134 + 2) = *((_QWORD *)v133 + 2);
                      }
                      while ( v130 != -1 );
                      v131 = (char *)ptr;
                    }
                    j__free(v131);
                    v27 = v259;
                    ptr = v30;
                    v260 = v217;
                  }
                  v90 = v250;
                  v91 = &v30[24 * v27];
                  *(_QWORD *)v91 = v249;
                  *((_QWORD *)v91 + 1) = v90;
                  *((_QWORD *)v91 + 2) = v251;
                }
                else
                {
                  if ( v260 < v32 )
                  {
                    v30 = (char *)sub_491288((__int64)&ptr, nullptr, v32, 0x18u);
                    v34 = v260;
                    v35 = (char *)ptr;
                    v260 = v33;
                    v36 = v259 - 1;
                    if ( v259 - 1 >= 0 )
                    {
                      v37 = 0;
                      do
                      {
                        v38 = &v35[v37];
                        v39 = &v30[v37];
                        --v36;
                        v37 += 24;
                        v40 = *((_QWORD *)v38 + 1);
                        *(_QWORD *)v39 = *(_QWORD *)v38;
                        *((_QWORD *)v39 + 1) = v40;
                        *((_QWORD *)v39 + 2) = *((_QWORD *)v38 + 2);
                      }
                      while ( v36 != -1 );
                      v35 = (char *)ptr;
                    }
                    j__free(v35);
                    v27 = v259;
                    ptr = v30;
                    v260 = v34;
                  }
                  v28 = &v30[24 * v27];
                  v29 = v247;
                  *(_QWORD *)v28 = v246;
                  *((_QWORD *)v28 + 1) = v29;
                  *((_QWORD *)v28 + 2) = v248;
                }
                v25 += 16;
                v27 = ++v259;
              }
              while ( v26 > v25 );
              v25 = (char *)(*(_QWORD *)a1 + v209);
              v26 = (char *)(*(_QWORD *)a1 + v212);
            }
            v61 = v25;
            v13 = v21;
            v62 = v26;
            v10 = 1;
            memmove(v61, v62, 16LL * *(_QWORD *)(a1 + 8) - v212);
            v4 = *(_QWORD *)(a1 + 8) - ((v212 - v209) >> 4);
            *(_QWORD *)(a1 + 8) = v4;
          }
          goto LABEL_16;
        }
        v10 = 1;
        v211[2 * v13] = v22;
      }
      v23 = v20[1];
      if ( v23 < v215 )
      {
        v10 = 1;
        v16[1] = v23;
      }
      goto LABEL_26;
    }
    v15 = ++v12;
  }
  while ( v12 != a2[1] );
  v10 = v262;
  v42 = 2 * v4;
  if ( !v262 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 8) = v4 - ((v42 * 8 - v208) >> 4);
    goto LABEL_68;
  }
  v43 = (unsigned __int64)&v211[v42];
  if ( v16 >= (unsigned __int64 *)&v211[v42] )
  {
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 8) = v4 - ((v42 * 8 - v208) >> 4);
    goto LABEL_73;
  }
  v44 = v259;
  do
  {
    v47 = v16[1];
    v231 = *v16;
    v232 = v47;
    v48 = (char *)ptr;
    v49 = v44 + 1;
    LOBYTE(v233) = 1;
    v50 = v260;
    if ( ptr <= &v231 && &v231 < (unsigned __int64 *)((char *)ptr + 24 * v260) )
    {
      v236 = v233;
      v234 = v231;
      v235 = v232;
      if ( v260 < v49 )
      {
        v48 = (char *)sub_491288((__int64)&ptr, nullptr, v49, 0x18u);
        v214 = v260;
        v260 = v50;
        v153 = v259 - 1;
        v154 = (char *)ptr;
        if ( v259 - 1 >= 0 )
        {
          v155 = 0;
          do
          {
            v156 = &v154[v155];
            v157 = &v48[v155];
            --v153;
            v155 += 24;
            v158 = *((_QWORD *)v156 + 1);
            *(_QWORD *)v157 = *(_QWORD *)v156;
            *((_QWORD *)v157 + 1) = v158;
            *((_QWORD *)v157 + 2) = *((_QWORD *)v156 + 2);
          }
          while ( v153 != -1 );
          v154 = (char *)ptr;
        }
        j__free(v154);
        v44 = v259;
        ptr = v48;
        v260 = v214;
      }
      v58 = v236;
      v59 = v235;
      v60 = &v48[24 * v44];
      *(_QWORD *)v60 = v234;
      *((_QWORD *)v60 + 1) = v59;
      *((_QWORD *)v60 + 2) = v58;
    }
    else
    {
      if ( v260 < v49 )
      {
        v48 = (char *)sub_491288((__int64)&ptr, nullptr, v49, 0x18u);
        v51 = v260;
        v52 = (char *)ptr;
        v260 = v50;
        v53 = v259 - 1;
        if ( v259 - 1 >= 0 )
        {
          v54 = 0;
          do
          {
            v55 = &v52[v54];
            v56 = &v48[v54];
            --v53;
            v54 += 24;
            v57 = *((_QWORD *)v55 + 1);
            *(_QWORD *)v56 = *(_QWORD *)v55;
            *((_QWORD *)v56 + 1) = v57;
            *((_QWORD *)v56 + 2) = *((_QWORD *)v55 + 2);
          }
          while ( v53 != -1 );
          v52 = (char *)ptr;
        }
        j__free(v52);
        v44 = v259;
        ptr = v48;
        v260 = v51;
      }
      v45 = v232;
      v46 = &v48[24 * v44];
      *(_QWORD *)v46 = v231;
      *((_QWORD *)v46 + 1) = v45;
      *((_QWORD *)v46 + 2) = v233;
    }
    v16 += 2;
    v44 = ++v259;
  }
  while ( v43 > (unsigned __int64)v16 );
  v64 = *(_QWORD *)(a1 + 8);
  v65 = v262;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = v64 - ((16 * v64 - v208) >> 4);
  if ( !v65 )
  {
LABEL_68:
    v10 = 1;
    goto LABEL_69;
  }
LABEL_73:
  v66 = v259;
  if ( !v259 )
    goto LABEL_68;
  v237 = nullptr;
  v238 = 0;
  v239 = 0;
  v67 = nullptr;
  v68 = 21 * v259 + 10;
  if ( 21 * v259 != -10 )
  {
    v237 = sub_491288((__int64)&v237, nullptr, 21 * v259 + 10, 1u);
    memset((char *)v237 + v238, 0, v68 - v238);
    v238 = v68;
    v67 = v237;
    v66 = v259;
  }
  v69 = (unsigned __int64)&v67[v68];
  v70 = sub_48E4D8(v67, v69, v66);
  v71 = (char *)ptr;
  v72 = (char *)ptr + 24 * v259;
  if ( ptr != v72 )
  {
    v73 = 0;
    do
    {
      if ( (unsigned __int64)v70 < v69 )
        *v70++ = v71[16];
      v74 = sub_48E4D8(v70, v69, *(_QWORD *)v71 - v73);
      v70 = sub_48E4D8(v74, v69, *((_QWORD *)v71 + 1) - *(_QWORD *)v71);
      v73 = *((_QWORD *)v71 + 1);
      v71 += 24;
    }
    while ( v72 != v71 );
  }
  v75 = (char *)v237;
  v76 = v238;
  v77 = v70 - (_BYTE *)v237;
  if ( v70 - (_BYTE *)v237 > v238 )
  {
    if ( v77 > v239 )
    {
      v75 = (char *)sub_491288((__int64)&v237, v237, v77, 1u);
      v76 = v238;
      v237 = v75;
    }
    memset(&v75[v76], 0, v77 - v76);
    v238 = v77;
  }
  else if ( v70 - (_BYTE *)v237 < v238 )
  {
    v238 = v70 - (_BYTE *)v237;
  }
  sub_47DBC8();
  v259 = 0;
  if ( v237 )
  {
    v238 = 0;
    j__free(v237);
  }
LABEL_69:
  if ( ptr )
  {
    v259 = 0;
    j__free(ptr);
  }
  return v10;
}
