/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_440C08
// Address: 0x0000000000440C08

//----- (0000000000440C08) ----------------------------------------------------
__int64 __fastcall sub_440C08(__int64 a1)
{
  __int64 v2; // x19
  __int64 v3; // x26
  __int64 v4; // x22
  _WORD *v5; // x0
  __int64 v6; // x0
  unsigned __int64 v7; // x19
  _QWORD *v8; // x23
  __int64 v9; // x0
  _QWORD *v10; // x19
  __int64 v11; // x21
  _WORD *v12; // x0
  _WORD *v13; // x0
  __int64 v14; // x1
  char *v15; // x0
  __int64 v16; // x1
  char **v17; // x19
  char *v18; // x0
  const char *v19; // x22
  unsigned __int64 v20; // x24
  __int64 v21; // x0
  int v22; // w27
  __int64 v23; // x25
  __int64 v24; // x23
  __int64 v25; // x28
  __int64 v26; // x19
  const char **v27; // x0
  __int64 v28; // x1
  __int64 *v29; // x0
  __int64 v30; // x1
  const char *v31; // x27
  unsigned __int64 v32; // x3
  __int64 v33; // x2
  int v34; // w0
  __int64 v35; // x19
  unsigned __int64 v36; // x2
  unsigned __int64 v37; // x19
  _QWORD *v38; // x22
  __int64 v39; // x0
  const char **v40; // x24
  unsigned __int64 v41; // x27
  unsigned __int64 v42; // x2
  __int64 v43; // x3
  void **v44; // x0
  char **v45; // x19
  char *v46; // x0
  const char *v47; // x22
  unsigned __int64 v48; // x24
  __int64 v49; // x0
  int v50; // w27
  __int64 v51; // x25
  __int64 v52; // x28
  __int64 v53; // x23
  __int64 v54; // x19
  const char **v55; // x0
  __int64 v56; // x1
  __int64 *v57; // x0
  __int64 v58; // x1
  const char *v59; // x27
  unsigned __int64 v60; // x3
  __int64 v61; // x2
  int v62; // w0
  __int64 v63; // x19
  unsigned __int64 v64; // x2
  unsigned __int64 v65; // x19
  _QWORD *v66; // x22
  __int64 v67; // x0
  const char **v68; // x24
  unsigned __int64 v69; // x27
  unsigned __int64 v70; // x2
  __int64 v71; // x3
  void **v72; // x0
  char **v73; // x19
  char *v74; // x0
  const char *v75; // x22
  unsigned __int64 v76; // x24
  __int64 v77; // x0
  int v78; // w26
  __int64 v79; // x28
  __int64 v80; // x27
  __int64 v81; // x25
  __int64 v82; // x19
  const char **v83; // x0
  __int64 v84; // x1
  __int64 *v85; // x0
  __int64 v86; // x1
  const char *v87; // x26
  unsigned __int64 v88; // x3
  __int64 v89; // x2
  int v90; // w0
  __int64 v91; // x19
  unsigned __int64 v92; // x2
  unsigned __int64 v93; // x19
  _QWORD *v94; // x22
  __int64 v95; // x0
  const char **v96; // x24
  unsigned __int64 v97; // x26
  unsigned __int64 v98; // x2
  int v100; // w0
  unsigned __int64 v101; // x2
  unsigned __int64 v102; // x19
  _QWORD *v103; // x27
  int v104; // w0
  unsigned __int64 v105; // x2
  unsigned __int64 v106; // x19
  _QWORD *v107; // x26
  int v108; // w0
  unsigned __int64 v109; // x2
  unsigned __int64 v110; // x19
  _QWORD *v111; // x27
  __int64 v112; // x22
  const char **v113; // x0
  __int64 v114; // x3
  __int64 j; // x1
  __int64 v116; // x22
  const char **v117; // x0
  __int64 v118; // x3
  __int64 nn; // x1
  __int64 v120; // x22
  const char **v121; // x0
  __int64 v122; // x3
  __int64 ii; // x1
  __int64 v124; // x0
  _QWORD *v125; // x22
  unsigned __int64 v126; // x24
  unsigned __int64 v127; // x2
  __int64 v128; // x0
  const char **v129; // x22
  unsigned __int64 v130; // x24
  unsigned __int64 v131; // x2
  __int64 v132; // x0
  const char **v133; // x22
  unsigned __int64 v134; // x24
  unsigned __int64 v135; // x2
  __int64 v136; // x1
  __int64 v137; // x2
  __int64 v138; // x23
  __int64 v139; // x1
  _QWORD *v140; // x19
  _QWORD *v141; // x24
  void *v142; // x0
  __int64 v143; // x1
  __int64 v144; // x2
  __int64 v145; // x23
  __int64 v146; // x1
  _QWORD *v147; // x19
  _QWORD *v148; // x24
  void *v149; // x0
  __int64 v150; // x1
  __int64 v151; // x2
  __int64 v152; // x23
  __int64 v153; // x1
  _QWORD *v154; // x19
  _QWORD *v155; // x24
  void *v156; // x0
  _QWORD *v157; // x24
  __int64 v158; // x0
  __int64 v159; // x3
  __int64 v160; // x23
  const char **v161; // x0
  __int64 n; // x1
  __int64 v163; // x0
  _QWORD *v164; // x24
  __int64 v165; // x0
  __int64 v166; // x3
  __int64 v167; // x23
  const char **v168; // x0
  __int64 mm; // x1
  __int64 v170; // x0
  _QWORD *v171; // x24
  __int64 v172; // x0
  __int64 v173; // x3
  __int64 v174; // x23
  const char **v175; // x0
  __int64 i; // x1
  __int64 v177; // x0
  __int64 v178; // x27
  const char **v179; // x0
  __int64 v180; // x3
  __int64 kk; // x1
  __int64 v182; // x26
  const char **v183; // x0
  __int64 v184; // x3
  __int64 i2; // x1
  __int64 v186; // x27
  const char **v187; // x0
  __int64 v188; // x3
  __int64 m; // x1
  _QWORD *v190; // x0
  __int64 v191; // x24
  __int64 v192; // x27
  __int64 v193; // x24
  _QWORD *v194; // x19
  _QWORD *v195; // x21
  void *v196; // x0
  void *v197; // x0
  __int64 v198; // x2
  __int64 v199; // x23
  __int64 v200; // x24
  _QWORD *v201; // x19
  _QWORD *v202; // x25
  void *v203; // x0
  __int64 v204; // x2
  __int64 v205; // x23
  __int64 v206; // x24
  _QWORD *v207; // x19
  _QWORD *v208; // x25
  void *v209; // x0
  _QWORD *v210; // x22
  __int64 v211; // x25
  const char **v212; // x0
  __int64 v213; // x3
  __int64 k; // x1
  __int64 v215; // x0
  _QWORD *v216; // x22
  __int64 v217; // x25
  const char **v218; // x0
  __int64 v219; // x3
  __int64 jj; // x1
  __int64 v221; // x0
  __int64 v222; // x2
  __int64 v223; // x23
  __int64 v224; // x24
  _QWORD *v225; // x19
  _QWORD *v226; // x28
  void *v227; // x0
  _QWORD *v228; // x22
  __int64 v229; // x28
  const char **v230; // x0
  __int64 v231; // x3
  __int64 i1; // x1
  __int64 v233; // x0
  _QWORD *v234; // [xsp+68h] [xbp-98h]
  __int64 v235; // [xsp+88h] [xbp-78h]
  __int64 v236; // [xsp+88h] [xbp-78h]
  __int64 v237; // [xsp+88h] [xbp-78h]
  const char *v238; // [xsp+98h] [xbp-68h] BYREF
  const char *v239; // [xsp+A0h] [xbp-60h] BYREF
  const char *v240; // [xsp+A8h] [xbp-58h] BYREF
  const char *v241; // [xsp+B0h] [xbp-50h] BYREF
  const char *v242; // [xsp+B8h] [xbp-48h] BYREF
  const char *v243; // [xsp+C0h] [xbp-40h] BYREF
  const char *v244; // [xsp+C8h] [xbp-38h] BYREF
  const char *v245; // [xsp+D0h] [xbp-30h] BYREF
  const char *v246; // [xsp+D8h] [xbp-28h] BYREF
  const char *v247; // [xsp+E0h] [xbp-20h] BYREF
  const char *v248; // [xsp+E8h] [xbp-18h] BYREF
  _QWORD v249[2]; // [xsp+F0h] [xbp-10h] BYREF

  v2 = a1 + 64;
  v3 = a1 + 16;
  v4 = a1 + 88;
  *(_QWORD *)(a1 + 8) = code_highlight_block;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  v234 = (_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 120) = 5;
  *(_DWORD *)(a1 + 124) = 4;
  *(_DWORD *)(a1 + 128) = 6;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)a1 = off_51A578;
  *(_BYTE *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 180) = 656876066;
  *(_WORD *)(a1 + 184) = 9052;
  v5 = sub_491288(a1 + 64, nullptr, 3u, 1u);
  *(_QWORD *)(a1 + 64) = v5;
  *(_QWORD *)(v2 + 8) = 3;
  *v5 = 12079;
  *(_BYTE *)(*(_QWORD *)(a1 + 64) + 2LL) = 0;
  v6 = *(_QWORD *)(v4 + 8);
  v7 = *(_QWORD *)(v4 + 16);
  if ( v6 + 1 > v7 )
  {
    v190 = sub_491288(v4, nullptr, v6 + 1, 0x30u);
    v191 = *(_QWORD *)(v4 + 8);
    v192 = *(_QWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 16) = v7;
    v8 = v190;
    v193 = v191 - 1;
    v194 = *(_QWORD **)(a1 + 88);
    if ( v193 >= 0 )
    {
      v195 = v190;
      do
      {
        *v195 = *v194;
        *v194 = 0;
        v195[1] = v194[1];
        v194[1] = 0;
        v195[2] = v194[2];
        v194[2] = 0;
        v195[3] = v194[3];
        v194[3] = 0;
        v195[4] = v194[4];
        v194[4] = 0;
        v195[5] = v194[5];
        v194[5] = 0;
        v196 = (void *)v194[3];
        if ( v196 )
        {
          v194[4] = 0;
          j__free(v196);
        }
        v197 = (void *)*v194;
        if ( *v194 )
        {
          v194[1] = 0;
          j__free(v197);
        }
        --v193;
        v194 += 6;
        v195 += 6;
      }
      while ( v193 != -1 );
      v194 = *(_QWORD **)(a1 + 88);
    }
    j__free(v194);
    *(_QWORD *)(a1 + 88) = v8;
    *(_QWORD *)(v4 + 16) = v192;
    v6 = *(_QWORD *)(v4 + 8);
  }
  else
  {
    v8 = *(_QWORD **)(a1 + 88);
  }
  v9 = 6 * v6;
  v10 = &v8[v9];
  v11 = (__int64)&v8[v9 + 3];
  v8[v9] = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  *(_QWORD *)(v11 + 8) = 0;
  *(_QWORD *)(v11 + 16) = 0;
  ++*(_QWORD *)(v4 + 8);
  if ( v8[v9 + 2] <= 2u )
  {
    v12 = sub_491288((__int64)&v8[v9], (void *)v8[v9], 3u, 1u);
    *v10 = v12;
  }
  else
  {
    v12 = (_WORD *)v8[v9];
  }
  v10[1] = 3;
  *v12 = 10799;
  *(_BYTE *)(*v10 + 2LL) = 0;
  if ( *(_QWORD *)(v11 + 16) <= 2u )
  {
    v13 = sub_491288(v11, (void *)v10[3], 3u, 1u);
    v10[3] = v13;
  }
  else
  {
    v13 = (_WORD *)v10[3];
  }
  *(_QWORD *)(v11 + 8) = 3;
  *v13 = 12074;
  *(_BYTE *)(v10[3] + 2LL) = 0;
  v14 = *(_QWORD *)(v3 + 8);
  if ( (unsigned __int64)(v14 + 1) > *(_QWORD *)(v3 + 16) )
  {
    v15 = (char *)sub_491288(v3, *(void **)(a1 + 16), v14 + 1, 0x18u);
    *(_QWORD *)(a1 + 16) = v15;
    v14 = *(_QWORD *)(v3 + 8);
  }
  else
  {
    v15 = *(char **)(a1 + 16);
  }
  v16 = 24 * v14;
  v17 = (char **)&v15[v16];
  *(_QWORD *)&v15[v16] = 0;
  v17[1] = nullptr;
  v17[2] = nullptr;
  ++*(_QWORD *)(v3 + 8);
  if ( *(_QWORD *)&v15[v16 + 16] <= 0x4Du )
  {
    v18 = (char *)sub_491288((__int64)v17, *(void **)&v15[v16], 0x4Eu, 1u);
    *v17 = v18;
  }
  else
  {
    v18 = *(char **)&v15[v16];
  }
  v17[1] = (char *)78;
  qmemcpy(v18, "auto|static|extern|for|if|else|while|do|break|continue|return|try|catch|throw", 77);
  (*v17)[77] = 0;
  v239 = sub_4930F8(*v17, "|", &v238);
  v19 = v239;
  if ( v239 )
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)(a1 + 48);
      if ( v20 )
        break;
      v109 = 1;
LABEL_119:
      v110 = v234[2];
      if ( v110 < v109 )
      {
        v111 = sub_491288((__int64)v234, nullptr, v109, 0x20u);
        v143 = v234[1];
        v144 = v234[2];
        v234[2] = v110;
        v145 = v144;
        v146 = v143 - 1;
        v147 = (_QWORD *)*v234;
        if ( v146 >= 0 )
        {
          v148 = v111;
          do
          {
            *v148 = *v147;
            *v147 = 0;
            v148[1] = v147[1];
            v147[1] = 0;
            v148[2] = v147[2];
            v147[2] = 0;
            *((_DWORD *)v148 + 6) = *((_DWORD *)v147 + 6);
            v149 = (void *)*v147;
            if ( *v147 )
            {
              v147[1] = 0;
              v236 = v146;
              j__free(v149);
              v146 = v236;
            }
            --v146;
            v147 += 4;
            v148 += 4;
          }
          while ( v146 != -1 );
          v147 = (_QWORD *)*v234;
        }
        j__free(v147);
        v20 = v234[1];
        *v234 = v111;
        v234[2] = v145;
      }
      else
      {
        v111 = *(_QWORD **)(a1 + 40);
      }
      v35 = (__int64)&v111[4 * v20];
      *(_QWORD *)v35 = 0;
      *(_QWORD *)(v35 + 8) = 0;
      *(_QWORD *)(v35 + 16) = 0;
      ++v234[1];
      *(_DWORD *)(v35 + 24) = 1;
LABEL_31:
      v40 = *(const char ***)v35;
      v39 = *(_QWORD *)(v35 + 8);
      v240 = v19;
      v41 = *(_QWORD *)(v35 + 16);
      v42 = v39 + 1;
      if ( v40 <= &v240 && &v240 < &v40[v41] )
      {
        if ( v41 < v42 )
        {
          v171 = sub_491288(v35, nullptr, v42, 8u);
          v173 = *(_QWORD *)(v35 + 8);
          v172 = *(_QWORD *)(v35 + 16);
          *(_QWORD *)(v35 + 16) = v41;
          v174 = v172;
          v175 = *(const char ***)v35;
          if ( v173 - 1 >= 0 )
          {
            for ( i = 0; i != v173; ++i )
              v171[i] = v175[i];
            v175 = *(const char ***)v35;
          }
          j__free(v175);
          v177 = *(_QWORD *)(v35 + 8);
          *(_QWORD *)v35 = v171;
          *(_QWORD *)(v35 + 16) = v174;
          v171[v177] = v19;
        }
        else
        {
          v40[v39] = v19;
        }
      }
      else
      {
        if ( v41 < v42 )
        {
          v40 = (const char **)sub_491288(v35, nullptr, v42, 8u);
          v112 = *(_QWORD *)(v35 + 16);
          v113 = *(const char ***)v35;
          v114 = *(_QWORD *)(v35 + 8);
          *(_QWORD *)(v35 + 16) = v41;
          if ( v114 - 1 >= 0 )
          {
            for ( j = 0; j != v114; ++j )
              v40[j] = v113[j];
            v113 = *(const char ***)v35;
          }
          j__free(v113);
          v39 = *(_QWORD *)(v35 + 8);
          *(_QWORD *)v35 = v40;
          *(_QWORD *)(v35 + 16) = v112;
        }
        v40[v39] = v240;
      }
LABEL_35:
      ++*(_QWORD *)(v35 + 8);
LABEL_36:
      v239 = sub_4930F8(nullptr, "|", &v238);
      v19 = v239;
      if ( !v239 )
        goto LABEL_37;
    }
    v21 = 0;
    v22 = 0;
    v23 = *(_QWORD *)(a1 + 40);
    while ( 1 )
    {
      v24 = v23 + 32 * v21;
      v25 = *(_QWORD *)(v24 + 8);
      v26 = *(_QWORD *)v24 + 8 * v25;
      v27 = sub_440AA0(*(const char ***)v24, v26, &v239);
      if ( (const char **)v26 != v27 )
        break;
      v21 = ++v22;
      if ( v22 >= v20 )
      {
        if ( *(_DWORD *)(v23 + 24) != 1 )
        {
          v108 = 0;
          while ( ++v108 < v20 )
          {
            v35 = v23 + 32LL * v108;
            if ( *(_DWORD *)(v35 + 24) == 1 )
              goto LABEL_30;
          }
LABEL_118:
          v109 = v20 + 1;
          goto LABEL_119;
        }
        v35 = v23;
LABEL_30:
        if ( !v35 )
          goto LABEL_118;
        goto LABEL_31;
      }
    }
    if ( *(_DWORD *)(v24 + 24) == 1 )
      goto LABEL_36;
    v28 = v26 - (_QWORD)v27;
    v29 = (__int64 *)(v27 + 1);
    if ( (v28 >> 3) - 2 >= 0 )
    {
      do
      {
        v30 = *v29++;
        *(v29 - 2) = v30;
      }
      while ( (__int64 *)v26 != v29 );
      v25 = *(_QWORD *)(v24 + 8);
    }
    *(_QWORD *)(v24 + 8) = v25 - 1;
    v31 = v239;
    v32 = *(_QWORD *)(a1 + 48);
    if ( v32 )
    {
      v33 = *(_QWORD *)(a1 + 40);
      if ( *(_DWORD *)(v33 + 24) == 1 )
      {
        v35 = *(_QWORD *)(a1 + 40);
LABEL_150:
        if ( v35 )
          goto LABEL_151;
      }
      else
      {
        v34 = 0;
        while ( v32 > ++v34 )
        {
          v35 = v33 + 32LL * v34;
          if ( *(_DWORD *)(v35 + 24) == 1 )
            goto LABEL_150;
        }
      }
      v36 = v32 + 1;
    }
    else
    {
      v36 = 1;
    }
    v37 = v234[2];
    if ( v37 < v36 )
    {
      v38 = sub_491288((__int64)v234, nullptr, v36, 0x20u);
      v198 = v234[1];
      v199 = v234[2];
      v234[2] = v37;
      v200 = v198 - 1;
      v201 = (_QWORD *)*v234;
      if ( v198 - 1 >= 0 )
      {
        v202 = v38;
        do
        {
          *v202 = *v201;
          *v201 = 0;
          v202[1] = v201[1];
          v201[1] = 0;
          v202[2] = v201[2];
          v201[2] = 0;
          *((_DWORD *)v202 + 6) = *((_DWORD *)v201 + 6);
          v203 = (void *)*v201;
          if ( *v201 )
          {
            v201[1] = 0;
            j__free(v203);
          }
          --v200;
          v201 += 4;
          v202 += 4;
        }
        while ( v200 != -1 );
        v201 = (_QWORD *)*v234;
      }
      j__free(v201);
      v32 = v234[1];
      *v234 = v38;
      v234[2] = v199;
    }
    else
    {
      v38 = *(_QWORD **)(a1 + 40);
    }
    v35 = (__int64)&v38[4 * v32];
    *(_QWORD *)v35 = 0;
    *(_QWORD *)(v35 + 8) = 0;
    *(_QWORD *)(v35 + 16) = 0;
    ++v234[1];
    *(_DWORD *)(v35 + 24) = 1;
LABEL_151:
    v133 = *(const char ***)v35;
    v132 = *(_QWORD *)(v35 + 8);
    v241 = v31;
    v134 = *(_QWORD *)(v35 + 16);
    v135 = v132 + 1;
    if ( v133 <= &v241 && &v241 < &v133[v134] )
    {
      if ( v134 < v135 )
      {
        v210 = sub_491288(v35, nullptr, v135, 8u);
        v211 = *(_QWORD *)(v35 + 16);
        v212 = *(const char ***)v35;
        v213 = *(_QWORD *)(v35 + 8);
        *(_QWORD *)(v35 + 16) = v134;
        if ( v213 - 1 >= 0 )
        {
          for ( k = 0; k != v213; ++k )
            v210[k] = v212[k];
          v212 = *(const char ***)v35;
        }
        j__free(v212);
        v215 = *(_QWORD *)(v35 + 8);
        *(_QWORD *)v35 = v210;
        *(_QWORD *)(v35 + 16) = v211;
        v210[v215] = v31;
      }
      else
      {
        v133[v132] = v31;
      }
    }
    else
    {
      if ( v134 < v135 )
      {
        v133 = (const char **)sub_491288(v35, nullptr, v135, 8u);
        v186 = *(_QWORD *)(v35 + 16);
        v187 = *(const char ***)v35;
        v188 = *(_QWORD *)(v35 + 8);
        *(_QWORD *)(v35 + 16) = v134;
        if ( v188 - 1 >= 0 )
        {
          for ( m = 0; m != v188; ++m )
            v133[m] = v187[m];
          v187 = *(const char ***)v35;
        }
        j__free(v187);
        v132 = *(_QWORD *)(v35 + 8);
        *(_QWORD *)v35 = v133;
        *(_QWORD *)(v35 + 16) = v186;
      }
      v133[v132] = v241;
    }
    goto LABEL_35;
  }
LABEL_37:
  v43 = *(_QWORD *)(v3 + 8);
  v44 = *(void ***)(a1 + 16);
  if ( (unsigned __int64)(v43 + 1) > *(_QWORD *)(v3 + 16) )
  {
    v44 = (void **)sub_491288(v3, *(void **)(a1 + 16), v43 + 1, 0x18u);
    *(_QWORD *)(a1 + 16) = v44;
    v43 = *(_QWORD *)(v3 + 8);
  }
  v45 = (char **)&v44[3 * v43];
  *v45 = nullptr;
  v45[1] = nullptr;
  v45[2] = nullptr;
  ++*(_QWORD *)(v3 + 8);
  if ( (unsigned __int64)v45[2] <= 0x2B )
  {
    v46 = (char *)sub_491288((__int64)v45, v44[3 * v43], 0x2Cu, 1u);
    *v45 = v46;
  }
  else
  {
    v46 = (char *)v44[3 * v43];
  }
  v45[1] = (char *)44;
  qmemcpy(v46, "long|string|__int64|success|char|float|void", 43);
  (*v45)[43] = 0;
  v243 = sub_4930F8(*v45, "|", &v242);
  v47 = v243;
  if ( v243 )
  {
    while ( 1 )
    {
      v48 = *(_QWORD *)(a1 + 48);
      if ( v48 )
        break;
      v101 = 1;
LABEL_103:
      v102 = v234[2];
      if ( v102 < v101 )
      {
        v103 = sub_491288((__int64)v234, nullptr, v101, 0x20u);
        v136 = v234[1];
        v137 = v234[2];
        v234[2] = v102;
        v138 = v137;
        v139 = v136 - 1;
        v140 = (_QWORD *)*v234;
        if ( v139 >= 0 )
        {
          v141 = v103;
          do
          {
            *v141 = *v140;
            *v140 = 0;
            v141[1] = v140[1];
            v140[1] = 0;
            v141[2] = v140[2];
            v140[2] = 0;
            *((_DWORD *)v141 + 6) = *((_DWORD *)v140 + 6);
            v142 = (void *)*v140;
            if ( *v140 )
            {
              v140[1] = 0;
              v235 = v139;
              j__free(v142);
              v139 = v235;
            }
            --v139;
            v140 += 4;
            v141 += 4;
          }
          while ( v139 != -1 );
          v140 = (_QWORD *)*v234;
        }
        j__free(v140);
        v48 = v234[1];
        *v234 = v103;
        v234[2] = v138;
      }
      else
      {
        v103 = *(_QWORD **)(a1 + 40);
      }
      v63 = (__int64)&v103[4 * v48];
      *(_QWORD *)v63 = 0;
      *(_QWORD *)(v63 + 8) = 0;
      *(_QWORD *)(v63 + 16) = 0;
      ++v234[1];
      *(_DWORD *)(v63 + 24) = 2;
LABEL_61:
      v68 = *(const char ***)v63;
      v67 = *(_QWORD *)(v63 + 8);
      v244 = v47;
      v69 = *(_QWORD *)(v63 + 16);
      v70 = v67 + 1;
      if ( v68 <= &v244 && &v244 < &v68[v69] )
      {
        if ( v69 < v70 )
        {
          v157 = sub_491288(v63, nullptr, v70, 8u);
          v159 = *(_QWORD *)(v63 + 8);
          v158 = *(_QWORD *)(v63 + 16);
          *(_QWORD *)(v63 + 16) = v69;
          v160 = v158;
          v161 = *(const char ***)v63;
          if ( v159 - 1 >= 0 )
          {
            for ( n = 0; n != v159; ++n )
              v157[n] = v161[n];
            v161 = *(const char ***)v63;
          }
          j__free(v161);
          v163 = *(_QWORD *)(v63 + 8);
          *(_QWORD *)v63 = v157;
          *(_QWORD *)(v63 + 16) = v160;
          v157[v163] = v47;
        }
        else
        {
          v68[v67] = v47;
        }
      }
      else
      {
        if ( v69 < v70 )
        {
          v68 = (const char **)sub_491288(v63, nullptr, v70, 8u);
          v120 = *(_QWORD *)(v63 + 16);
          v121 = *(const char ***)v63;
          v122 = *(_QWORD *)(v63 + 8);
          *(_QWORD *)(v63 + 16) = v69;
          if ( v122 - 1 >= 0 )
          {
            for ( ii = 0; ii != v122; ++ii )
              v68[ii] = v121[ii];
            v121 = *(const char ***)v63;
          }
          j__free(v121);
          v67 = *(_QWORD *)(v63 + 8);
          *(_QWORD *)v63 = v68;
          *(_QWORD *)(v63 + 16) = v120;
        }
        v68[v67] = v244;
      }
LABEL_65:
      ++*(_QWORD *)(v63 + 8);
LABEL_66:
      v243 = sub_4930F8(nullptr, "|", &v242);
      v47 = v243;
      if ( !v243 )
        goto LABEL_67;
    }
    v49 = 0;
    v50 = 0;
    v51 = *(_QWORD *)(a1 + 40);
    while ( 1 )
    {
      v52 = v51 + 32 * v49;
      v53 = *(_QWORD *)(v52 + 8);
      v54 = *(_QWORD *)v52 + 8 * v53;
      v55 = sub_440AA0(*(const char ***)v52, v54, &v243);
      if ( (const char **)v54 != v55 )
        break;
      v49 = ++v50;
      if ( v48 <= v50 )
      {
        if ( *(_DWORD *)(v51 + 24) != 2 )
        {
          v100 = 0;
          while ( v48 > ++v100 )
          {
            v63 = v51 + 32LL * v100;
            if ( *(_DWORD *)(v63 + 24) == 2 )
              goto LABEL_60;
          }
LABEL_102:
          v101 = v48 + 1;
          goto LABEL_103;
        }
        v63 = v51;
LABEL_60:
        if ( !v63 )
          goto LABEL_102;
        goto LABEL_61;
      }
    }
    if ( *(_DWORD *)(v52 + 24) == 2 )
      goto LABEL_66;
    v56 = v54 - (_QWORD)v55;
    v57 = (__int64 *)(v55 + 1);
    if ( (v56 >> 3) - 2 >= 0 )
    {
      do
      {
        v58 = *v57++;
        *(v57 - 2) = v58;
      }
      while ( (__int64 *)v54 != v57 );
      v53 = *(_QWORD *)(v52 + 8);
    }
    *(_QWORD *)(v52 + 8) = v53 - 1;
    v59 = v243;
    v60 = *(_QWORD *)(a1 + 48);
    if ( v60 )
    {
      v61 = *(_QWORD *)(a1 + 40);
      if ( *(_DWORD *)(v61 + 24) == 2 )
      {
        v63 = *(_QWORD *)(a1 + 40);
LABEL_144:
        if ( v63 )
          goto LABEL_145;
      }
      else
      {
        v62 = 0;
        while ( ++v62 < v60 )
        {
          v63 = v61 + 32LL * v62;
          if ( *(_DWORD *)(v63 + 24) == 2 )
            goto LABEL_144;
        }
      }
      v64 = v60 + 1;
    }
    else
    {
      v64 = 1;
    }
    v65 = v234[2];
    if ( v65 < v64 )
    {
      v66 = sub_491288((__int64)v234, nullptr, v64, 0x20u);
      v204 = v234[1];
      v205 = v234[2];
      v234[2] = v65;
      v206 = v204 - 1;
      v207 = (_QWORD *)*v234;
      if ( v204 - 1 >= 0 )
      {
        v208 = v66;
        do
        {
          *v208 = *v207;
          *v207 = 0;
          v208[1] = v207[1];
          v207[1] = 0;
          v208[2] = v207[2];
          v207[2] = 0;
          *((_DWORD *)v208 + 6) = *((_DWORD *)v207 + 6);
          v209 = (void *)*v207;
          if ( *v207 )
          {
            v207[1] = 0;
            j__free(v209);
          }
          --v206;
          v207 += 4;
          v208 += 4;
        }
        while ( v206 != -1 );
        v207 = (_QWORD *)*v234;
      }
      j__free(v207);
      v60 = v234[1];
      *v234 = v66;
      v234[2] = v205;
    }
    else
    {
      v66 = *(_QWORD **)(a1 + 40);
    }
    v63 = (__int64)&v66[4 * v60];
    *(_QWORD *)v63 = 0;
    *(_QWORD *)(v63 + 8) = 0;
    *(_QWORD *)(v63 + 16) = 0;
    ++v234[1];
    *(_DWORD *)(v63 + 24) = 2;
LABEL_145:
    v129 = *(const char ***)v63;
    v128 = *(_QWORD *)(v63 + 8);
    v245 = v59;
    v130 = *(_QWORD *)(v63 + 16);
    v131 = v128 + 1;
    if ( v129 <= &v245 && &v245 < &v129[v130] )
    {
      if ( v130 < v131 )
      {
        v216 = sub_491288(v63, nullptr, v131, 8u);
        v217 = *(_QWORD *)(v63 + 16);
        v218 = *(const char ***)v63;
        v219 = *(_QWORD *)(v63 + 8);
        *(_QWORD *)(v63 + 16) = v130;
        if ( v219 - 1 >= 0 )
        {
          for ( jj = 0; jj != v219; ++jj )
            v216[jj] = v218[jj];
          v218 = *(const char ***)v63;
        }
        j__free(v218);
        v221 = *(_QWORD *)(v63 + 8);
        *(_QWORD *)v63 = v216;
        *(_QWORD *)(v63 + 16) = v217;
        v216[v221] = v59;
      }
      else
      {
        v129[v128] = v59;
      }
    }
    else
    {
      if ( v130 < v131 )
      {
        v129 = (const char **)sub_491288(v63, nullptr, v131, 8u);
        v178 = *(_QWORD *)(v63 + 16);
        v179 = *(const char ***)v63;
        v180 = *(_QWORD *)(v63 + 8);
        *(_QWORD *)(v63 + 16) = v130;
        if ( v180 - 1 >= 0 )
        {
          for ( kk = 0; kk != v180; ++kk )
            v129[kk] = v179[kk];
          v179 = *(const char ***)v63;
        }
        j__free(v179);
        v128 = *(_QWORD *)(v63 + 8);
        *(_QWORD *)v63 = v129;
        *(_QWORD *)(v63 + 16) = v178;
      }
      v129[v128] = v245;
    }
    goto LABEL_65;
  }
LABEL_67:
  v71 = *(_QWORD *)(v3 + 8);
  v72 = *(void ***)(a1 + 16);
  if ( (unsigned __int64)(v71 + 1) > *(_QWORD *)(v3 + 16) )
  {
    v72 = (void **)sub_491288(v3, *(void **)(a1 + 16), v71 + 1, 0x18u);
    *(_QWORD *)(a1 + 16) = v72;
    v71 = *(_QWORD *)(v3 + 8);
  }
  v73 = (char **)&v72[3 * v71];
  *v73 = nullptr;
  v73[1] = nullptr;
  v73[2] = nullptr;
  ++*(_QWORD *)(v3 + 8);
  if ( (unsigned __int64)v73[2] <= 0x16 )
  {
    v74 = (char *)sub_491288((__int64)v73, v72[3 * v71], 0x17u, 1u);
    *v73 = v74;
  }
  else
  {
    v74 = (char *)v72[3 * v71];
  }
  v73[1] = (char *)23;
  qmemcpy(v74, "BADADDR|BADSEL|MAXADDR", 22);
  (*v73)[22] = 0;
  v247 = sub_4930F8(*v73, "|", &v246);
  v75 = v247;
  if ( v247 )
  {
    while ( 1 )
    {
      v76 = *(_QWORD *)(a1 + 48);
      if ( v76 )
        break;
      v105 = 1;
LABEL_111:
      v106 = v234[2];
      if ( v106 < v105 )
      {
        v107 = sub_491288((__int64)v234, nullptr, v105, 0x20u);
        v150 = v234[1];
        v151 = v234[2];
        v234[2] = v106;
        v152 = v151;
        v153 = v150 - 1;
        v154 = (_QWORD *)*v234;
        if ( v153 >= 0 )
        {
          v155 = v107;
          do
          {
            *v155 = *v154;
            *v154 = 0;
            v155[1] = v154[1];
            v154[1] = 0;
            v155[2] = v154[2];
            v154[2] = 0;
            *((_DWORD *)v155 + 6) = *((_DWORD *)v154 + 6);
            v156 = (void *)*v154;
            if ( *v154 )
            {
              v154[1] = 0;
              v237 = v153;
              j__free(v156);
              v153 = v237;
            }
            --v153;
            v154 += 4;
            v155 += 4;
          }
          while ( v153 != -1 );
          v154 = (_QWORD *)*v234;
        }
        j__free(v154);
        v76 = v234[1];
        *v234 = v107;
        v234[2] = v152;
      }
      else
      {
        v107 = *(_QWORD **)(a1 + 40);
      }
      v91 = (__int64)&v107[4 * v76];
      *(_QWORD *)v91 = 0;
      *(_QWORD *)(v91 + 8) = 0;
      *(_QWORD *)(v91 + 16) = 0;
      ++v234[1];
      *(_DWORD *)(v91 + 24) = 3;
LABEL_91:
      v96 = *(const char ***)v91;
      v95 = *(_QWORD *)(v91 + 8);
      v248 = v75;
      v97 = *(_QWORD *)(v91 + 16);
      v98 = v95 + 1;
      if ( v96 <= &v248 && &v248 < &v96[v97] )
      {
        if ( v97 < v98 )
        {
          v164 = sub_491288(v91, nullptr, v98, 8u);
          v166 = *(_QWORD *)(v91 + 8);
          v165 = *(_QWORD *)(v91 + 16);
          *(_QWORD *)(v91 + 16) = v97;
          v167 = v165;
          v168 = *(const char ***)v91;
          if ( v166 - 1 >= 0 )
          {
            for ( mm = 0; mm != v166; ++mm )
              v164[mm] = v168[mm];
            v168 = *(const char ***)v91;
          }
          j__free(v168);
          v170 = *(_QWORD *)(v91 + 8);
          *(_QWORD *)v91 = v164;
          *(_QWORD *)(v91 + 16) = v167;
          v164[v170] = v75;
        }
        else
        {
          v96[v95] = v75;
        }
      }
      else
      {
        if ( v97 < v98 )
        {
          v96 = (const char **)sub_491288(v91, nullptr, v98, 8u);
          v116 = *(_QWORD *)(v91 + 16);
          v117 = *(const char ***)v91;
          v118 = *(_QWORD *)(v91 + 8);
          *(_QWORD *)(v91 + 16) = v97;
          if ( v118 - 1 >= 0 )
          {
            for ( nn = 0; nn != v118; ++nn )
              v96[nn] = v117[nn];
            v117 = *(const char ***)v91;
          }
          j__free(v117);
          v95 = *(_QWORD *)(v91 + 8);
          *(_QWORD *)v91 = v96;
          *(_QWORD *)(v91 + 16) = v116;
        }
        v96[v95] = v248;
      }
LABEL_95:
      ++*(_QWORD *)(v91 + 8);
LABEL_96:
      v247 = sub_4930F8(nullptr, "|", &v246);
      v75 = v247;
      if ( !v247 )
        return v249[1] ^ _stack_chk_guard;
    }
    v77 = 0;
    v78 = 0;
    v79 = *(_QWORD *)(a1 + 40);
    while ( 1 )
    {
      v80 = v79 + 32 * v77;
      v81 = *(_QWORD *)(v80 + 8);
      v82 = *(_QWORD *)v80 + 8 * v81;
      v83 = sub_440AA0(*(const char ***)v80, v82, &v247);
      if ( (const char **)v82 != v83 )
        break;
      v77 = ++v78;
      if ( v78 >= v76 )
      {
        if ( *(_DWORD *)(v79 + 24) != 3 )
        {
          v104 = 0;
          while ( ++v104 < v76 )
          {
            v91 = v79 + 32LL * v104;
            if ( *(_DWORD *)(v91 + 24) == 3 )
              goto LABEL_90;
          }
LABEL_110:
          v105 = v76 + 1;
          goto LABEL_111;
        }
        v91 = v79;
LABEL_90:
        if ( !v91 )
          goto LABEL_110;
        goto LABEL_91;
      }
    }
    if ( *(_DWORD *)(v80 + 24) == 3 )
      goto LABEL_96;
    v84 = v82 - (_QWORD)v83;
    v85 = (__int64 *)(v83 + 1);
    if ( (v84 >> 3) - 2 >= 0 )
    {
      do
      {
        v86 = *v85++;
        *(v85 - 2) = v86;
      }
      while ( (__int64 *)v82 != v85 );
      v81 = *(_QWORD *)(v80 + 8);
    }
    *(_QWORD *)(v80 + 8) = v81 - 1;
    v87 = v247;
    v88 = *(_QWORD *)(a1 + 48);
    if ( v88 )
    {
      v89 = *(_QWORD *)(a1 + 40);
      if ( *(_DWORD *)(v89 + 24) == 3 )
      {
        v91 = *(_QWORD *)(a1 + 40);
LABEL_138:
        if ( v91 )
          goto LABEL_139;
      }
      else
      {
        v90 = 0;
        while ( ++v90 < v88 )
        {
          v91 = v89 + 32LL * v90;
          if ( *(_DWORD *)(v91 + 24) == 3 )
            goto LABEL_138;
        }
      }
      v92 = v88 + 1;
    }
    else
    {
      v92 = 1;
    }
    v93 = v234[2];
    if ( v93 < v92 )
    {
      v94 = sub_491288((__int64)v234, nullptr, v92, 0x20u);
      v222 = v234[1];
      v223 = v234[2];
      v234[2] = v93;
      v224 = v222 - 1;
      v225 = (_QWORD *)*v234;
      if ( v222 - 1 >= 0 )
      {
        v226 = v94;
        do
        {
          *v226 = *v225;
          *v225 = 0;
          v226[1] = v225[1];
          v225[1] = 0;
          v226[2] = v225[2];
          v225[2] = 0;
          *((_DWORD *)v226 + 6) = *((_DWORD *)v225 + 6);
          v227 = (void *)*v225;
          if ( *v225 )
          {
            v225[1] = 0;
            j__free(v227);
          }
          --v224;
          v225 += 4;
          v226 += 4;
        }
        while ( v224 != -1 );
        v225 = (_QWORD *)*v234;
      }
      j__free(v225);
      v88 = v234[1];
      *v234 = v94;
      v234[2] = v223;
    }
    else
    {
      v94 = *(_QWORD **)(a1 + 40);
    }
    v91 = (__int64)&v94[4 * v88];
    *(_QWORD *)v91 = 0;
    *(_QWORD *)(v91 + 8) = 0;
    *(_QWORD *)(v91 + 16) = 0;
    ++v234[1];
    *(_DWORD *)(v91 + 24) = 3;
LABEL_139:
    v125 = *(_QWORD **)v91;
    v124 = *(_QWORD *)(v91 + 8);
    v249[0] = v87;
    v126 = *(_QWORD *)(v91 + 16);
    v127 = v124 + 1;
    if ( v125 <= v249 && v249 < &v125[v126] )
    {
      if ( v126 < v127 )
      {
        v228 = sub_491288(v91, nullptr, v127, 8u);
        v229 = *(_QWORD *)(v91 + 16);
        v230 = *(const char ***)v91;
        v231 = *(_QWORD *)(v91 + 8);
        *(_QWORD *)(v91 + 16) = v126;
        if ( v231 - 1 >= 0 )
        {
          for ( i1 = 0; i1 != v231; ++i1 )
            v228[i1] = v230[i1];
          v230 = *(const char ***)v91;
        }
        j__free(v230);
        v233 = *(_QWORD *)(v91 + 8);
        *(_QWORD *)v91 = v228;
        *(_QWORD *)(v91 + 16) = v229;
        v228[v233] = v87;
      }
      else
      {
        v125[v124] = v87;
      }
    }
    else
    {
      if ( v126 < v127 )
      {
        v125 = sub_491288(v91, nullptr, v127, 8u);
        v182 = *(_QWORD *)(v91 + 16);
        v183 = *(const char ***)v91;
        v184 = *(_QWORD *)(v91 + 8);
        *(_QWORD *)(v91 + 16) = v126;
        if ( v184 - 1 >= 0 )
        {
          for ( i2 = 0; i2 != v184; ++i2 )
            v125[i2] = v183[i2];
          v183 = *(const char ***)v91;
        }
        j__free(v183);
        v124 = *(_QWORD *)(v91 + 8);
        *(_QWORD *)v91 = v125;
        *(_QWORD *)(v91 + 16) = v182;
      }
      v125[v124] = v249[0];
    }
    goto LABEL_95;
  }
  return v249[1] ^ _stack_chk_guard;
}
// 443E30: using guessed type __int64 __fastcall code_highlight_block(int, int, int, int, int, int, int, int, char);
// 51A578: using guessed type __int64 (__fastcall *off_51A578[2])();
