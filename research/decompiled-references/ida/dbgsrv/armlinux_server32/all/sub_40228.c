/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40228
// Address: 0x00040228

//----- (00040228) --------------------------------------------------------
int __fastcall sub_40228(int a1)
{
  _WORD *v2; // r0
  int v3; // r3
  unsigned int v4; // r4
  _DWORD *v5; // r7
  int v6; // r3
  int v7; // r4
  _WORD *v8; // r0
  _WORD *v9; // r0
  int v10; // r3
  char *v11; // r0
  int v12; // r3
  char **v13; // r4
  char *v14; // r0
  int v15; // r9
  const char ***v16; // r8
  int v17; // r6
  const char ***v18; // r5
  const char **v19; // r7
  int v20; // r4
  const char **v21; // r0
  int v22; // r3
  const char **v23; // r3
  const char *v24; // r6
  int v25; // r0
  const char ***v26; // r4
  const char ***v27; // r3
  int v28; // r2
  unsigned int v29; // r2
  unsigned int v30; // r4
  _DWORD *v31; // r5
  const char **v32; // r3
  const char **v33; // r4
  unsigned int v34; // r5
  bool v35; // cc
  unsigned int v36; // r2
  int v37; // r3
  char *v38; // r1
  int v39; // r3
  char **v40; // r6
  char *v41; // r4
  const char *v42; // r7
  int v43; // r0
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int v47; // r0
  int v48; // r1
  const char *v49; // r7
  __int16 v50; // r2
  char v51; // r3
  int v52; // r9
  const char ***v53; // r8
  int v54; // r6
  const char ***v55; // r5
  const char **v56; // r7
  int v57; // r4
  const char **v58; // r0
  int v59; // r3
  const char **v60; // r3
  const char *v61; // r6
  int v62; // r0
  const char ***v63; // r4
  const char ***v64; // r3
  int v65; // r2
  unsigned int v66; // r2
  unsigned int v67; // r4
  _DWORD *v68; // r5
  const char ***v69; // r3
  int v70; // r2
  unsigned int v71; // r2
  unsigned int v72; // r5
  _DWORD *v73; // r4
  const char **v74; // r0
  const char **v75; // r3
  const char **v76; // r6
  const char **v77; // r0
  int v78; // r3
  const char **v79; // r2
  const char *v80; // t1
  const char **v81; // r5
  const char **v82; // r1
  unsigned int v83; // r7
  unsigned int v84; // r2
  _DWORD *v85; // r0
  __int64 v86; // kr28_8
  char *v87; // r0
  int v88; // r9
  char *v89; // r5
  _DWORD *v90; // r7
  int v91; // r3
  int v92; // r3
  int v93; // r3
  void *v94; // r0
  const char **v95; // r0
  const char **v96; // r3
  const char **v97; // r6
  const char **v98; // r4
  const char **v99; // r0
  int v100; // r3
  const char **v101; // r2
  const char *v102; // t1
  const char **v103; // r3
  const char ***v104; // r3
  int v105; // r2
  unsigned int v106; // r5
  unsigned int v107; // r2
  _DWORD *v108; // r4
  const char **v109; // r3
  const char **v110; // r4
  unsigned int v111; // r5
  unsigned int v112; // r2
  int v113; // r3
  char *v114; // r1
  int v115; // r3
  char **v116; // r5
  char *v117; // r6
  int v118; // r9
  const char ***v119; // r8
  int v120; // r6
  const char ***v121; // r5
  const char **v122; // r7
  int v123; // r4
  const char **v124; // r0
  int v125; // r3
  const char **v126; // r3
  const char *v127; // r6
  int v128; // r0
  const char ***v129; // r4
  const char ***v130; // r3
  int v131; // r2
  unsigned int v132; // r2
  unsigned int v133; // r4
  _DWORD *v134; // r5
  const char ***v135; // r3
  int v136; // r2
  unsigned int v137; // r5
  unsigned int v138; // r2
  _DWORD *v139; // r4
  const char **v140; // r3
  const char **v141; // r4
  unsigned int v142; // r5
  unsigned int v143; // r2
  const char **v145; // r0
  const char **v146; // r3
  const char **v147; // r6
  const char **v148; // r0
  int v149; // r3
  const char **v150; // r2
  const char *v151; // t1
  const char **v152; // r0
  const char **v153; // r3
  const char **v154; // r6
  const char **v155; // r0
  int v156; // r3
  const char **v157; // r2
  const char *v158; // t1
  const char **v159; // r5
  const char **v160; // r1
  unsigned int v161; // r7
  unsigned int v162; // r2
  const char **v163; // r5
  const char **v164; // r1
  unsigned int v165; // r7
  unsigned int v166; // r2
  _DWORD *v167; // r0
  __int64 v168; // kr60_8
  char *v169; // r0
  int v170; // r9
  char *v171; // r5
  _DWORD *v172; // r7
  int v173; // r3
  int v174; // r3
  int v175; // r3
  void *v176; // r0
  _DWORD *v177; // r0
  __int64 v178; // kr68_8
  char *v179; // r0
  int v180; // r9
  char *v181; // r5
  _DWORD *v182; // r7
  int v183; // r3
  int v184; // r3
  int v185; // r3
  void *v186; // r0
  const char **v187; // r0
  const char **v188; // r3
  const char **v189; // r6
  const char **v190; // r0
  int v191; // r3
  const char **v192; // r2
  const char *v193; // t1
  const char **v194; // r0
  const char **v195; // r3
  const char **v196; // r6
  const char **v197; // r0
  int v198; // r3
  const char **v199; // r2
  const char *v200; // t1
  const char **v201; // r0
  const char **v202; // r3
  const char **v203; // r6
  const char **v204; // r0
  int v205; // r3
  const char **v206; // r2
  const char *v207; // t1
  _DWORD *v208; // r0
  __int64 v209; // kr88_8
  char *v210; // r0
  int v211; // r9
  char *v212; // r4
  _DWORD *v213; // r5
  int v214; // r3
  int v215; // r3
  int v216; // r3
  int v217; // r3
  int v218; // r3
  void *v219; // r0
  void *v220; // r0
  const char **v221; // r0
  const char **v222; // r3
  const char **v223; // r6
  const char **v224; // r0
  int v225; // r3
  const char **v226; // r2
  const char *v227; // t1
  const char **v228; // r0
  const char **v229; // r3
  const char **v230; // r6
  const char **v231; // r0
  int v232; // r3
  const char **v233; // r2
  const char *v234; // t1
  _DWORD *v235; // r0
  __int64 v236; // krA0_8
  char *v237; // r0
  int v238; // r10
  char *v239; // r4
  _DWORD *v240; // r8
  int v241; // r3
  int v242; // r3
  int v243; // r3
  void *v244; // r0
  const char **v245; // r0
  const char **v246; // r3
  const char **v247; // r8
  const char **v248; // r5
  const char **v249; // r0
  int v250; // r3
  const char **v251; // r2
  const char *v252; // t1
  const char **v253; // r1
  const char **v254; // r0
  const char **v255; // r3
  const char **v256; // r8
  const char **v257; // r5
  const char **v258; // r0
  int v259; // r3
  const char **v260; // r2
  const char *v261; // t1
  const char **v262; // r1
  const char **v263; // r0
  const char **v264; // r3
  const char **v265; // r8
  const char **v266; // r5
  const char **v267; // r0
  int v268; // r3
  const char **v269; // r2
  const char *v270; // t1
  const char **v271; // r1
  _DWORD *v272; // r0
  __int64 v273; // krC0_8
  char *v274; // r0
  int v275; // r10
  char *v276; // r4
  _DWORD *v277; // r8
  int v278; // r3
  int v279; // r3
  int v280; // r3
  void *v281; // r0
  _DWORD *v282; // r0
  __int64 v283; // krC8_8
  char *v284; // r0
  int v285; // r10
  char *v286; // r4
  _DWORD *v287; // r8
  int v288; // r3
  int v289; // r3
  int v290; // r3
  void *v291; // r0
  const char *v292; // [sp+0h] [bp-54h]
  const char *v293; // [sp+0h] [bp-54h]
  const char *v294; // [sp+0h] [bp-54h]
  int v295; // [sp+10h] [bp-44h]
  const char *v296; // [sp+1Ch] [bp-38h] BYREF
  const char *v297; // [sp+20h] [bp-34h] BYREF
  const char *v298; // [sp+24h] [bp-30h] BYREF
  const char *v299; // [sp+28h] [bp-2Ch] BYREF
  const char *v300; // [sp+2Ch] [bp-28h] BYREF
  const char *v301; // [sp+30h] [bp-24h] BYREF
  const char *v302; // [sp+34h] [bp-20h] BYREF
  const char *v303; // [sp+38h] [bp-1Ch] BYREF
  const char *v304; // [sp+3Ch] [bp-18h] BYREF
  const char *v305; // [sp+40h] [bp-14h] BYREF
  const char *v306; // [sp+44h] [bp-10h] BYREF
  const char *v307; // [sp+48h] [bp-Ch] BYREF

  *(_DWORD *)(a1 + 68) = 4;
  *(_DWORD *)(a1 + 4) = code_highlight_block;
  *(_DWORD *)(a1 + 72) = 6;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 64) = 5;
  *(_BYTE *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 100) = 656876066;
  *(_WORD *)(a1 + 104) = 9052;
  *(_DWORD *)a1 = &off_D0ABC;
  v2 = sub_78018(a1 + 32, nullptr, 3u, 1u);
  *(_DWORD *)(a1 + 32) = v2;
  *(_DWORD *)(a1 + 36) = 3;
  *v2 = *(_WORD *)"//";
  *(_BYTE *)(*(_DWORD *)(a1 + 32) + 2) = 0;
  v4 = *(_DWORD *)(a1 + 52);
  v3 = *(_DWORD *)(a1 + 48);
  if ( v3 + 1 > v4 )
  {
    v208 = sub_78018(a1 + 44, nullptr, v3 + 1, 0x18u);
    v209 = *(_QWORD *)(a1 + 48);
    v5 = v208;
    *(_DWORD *)(a1 + 52) = v4;
    v210 = *(char **)(a1 + 44);
    v211 = v209 - 1;
    if ( (int)v209 - 1 >= 0 )
    {
      v212 = v210 + 24;
      v213 = v5;
      do
      {
        *v213 = *((_DWORD *)v212 - 6);
        v214 = *((_DWORD *)v212 - 5);
        *((_DWORD *)v212 - 6) = 0;
        v213[1] = v214;
        v215 = *((_DWORD *)v212 - 4);
        *((_DWORD *)v212 - 5) = 0;
        v213[2] = v215;
        v216 = *((_DWORD *)v212 - 3);
        *((_DWORD *)v212 - 4) = 0;
        v213[3] = v216;
        v217 = *((_DWORD *)v212 - 2);
        *((_DWORD *)v212 - 3) = 0;
        v213[4] = v217;
        v218 = *((_DWORD *)v212 - 1);
        *((_DWORD *)v212 - 2) = 0;
        v213[5] = v218;
        v219 = *((void **)v212 - 3);
        *((_DWORD *)v212 - 1) = 0;
        if ( v219 )
        {
          *((_DWORD *)v212 - 2) = 0;
          sub_77F70(v219);
        }
        v220 = *((void **)v212 - 6);
        if ( v220 )
        {
          *((_DWORD *)v212 - 5) = 0;
          sub_77F70(v220);
        }
        --v211;
        v213 += 6;
        v212 += 24;
      }
      while ( v211 != -1 );
      v210 = *(char **)(a1 + 44);
    }
    sub_77F70(v210);
    v3 = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 44) = v5;
    *(_DWORD *)(a1 + 52) = HIDWORD(v209);
  }
  else
  {
    v5 = *(_DWORD **)(a1 + 44);
  }
  v6 = 6 * v3;
  v7 = (int)&v5[v6];
  v5[v6] = 0;
  *(_DWORD *)(v7 + 4) = 0;
  *(_DWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 + 12) = 0;
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 20) = 0;
  ++*(_DWORD *)(a1 + 48);
  if ( v5[v6 + 2] <= 2u )
  {
    v8 = sub_78018(v7, (void *)v5[v6], 3u, 1u);
    *(_DWORD *)v7 = v8;
  }
  else
  {
    v8 = (_WORD *)v5[v6];
  }
  *(_DWORD *)(v7 + 4) = 3;
  *v8 = *(_WORD *)"/*";
  *(_BYTE *)(*(_DWORD *)v7 + 2) = 0;
  if ( *(_DWORD *)(v7 + 20) <= 2u )
  {
    v9 = sub_78018(v7 + 12, *(void **)(v7 + 12), 3u, 1u);
    *(_DWORD *)(v7 + 12) = v9;
  }
  else
  {
    v9 = *(_WORD **)(v7 + 12);
  }
  *(_DWORD *)(v7 + 16) = 3;
  v295 = a1 + 8;
  *v9 = *(_WORD *)"*/";
  *(_BYTE *)(*(_DWORD *)(v7 + 12) + 2) = 0;
  v10 = *(_DWORD *)(a1 + 12);
  if ( (unsigned int)(v10 + 1) > *(_DWORD *)(a1 + 16) )
  {
    v11 = (char *)sub_78018(v295, *(void **)(a1 + 8), v10 + 1, 0xCu);
    v10 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 8) = v11;
  }
  else
  {
    v11 = *(char **)(a1 + 8);
  }
  v12 = 12 * v10;
  v13 = (char **)&v11[v12];
  *(_DWORD *)&v11[v12] = 0;
  v13[1] = nullptr;
  v13[2] = nullptr;
  ++*(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)&v11[v12 + 8] <= 0x4Du )
  {
    v14 = (char *)sub_78018((int)v13, *(void **)&v11[v12], 0x4Eu, 1u);
    *v13 = v14;
  }
  else
  {
    v14 = *(char **)&v11[v12];
  }
  v13[1] = (char *)78;
  memcpy(v14, "auto|static|extern|for|if|else|while|do|break|continue|return|try|catch|throw", 0x4Du);
  (*v13)[77] = 0;
  v292 = sub_79544(*v13, "|", &v296);
  v297 = v292;
  if ( v292 )
  {
    while ( 1 )
    {
      v15 = *(_DWORD *)(a1 + 24);
      if ( v15 )
        break;
      v71 = 1;
LABEL_67:
      v72 = *(_DWORD *)(a1 + 28);
      if ( v72 < v71 )
      {
        v85 = sub_78018(a1 + 20, nullptr, v71, 0x10u);
        v86 = *(_QWORD *)(a1 + 24);
        v73 = v85;
        *(_DWORD *)(a1 + 28) = v72;
        v87 = *(char **)(a1 + 20);
        v88 = v86 - 1;
        if ( (int)v86 - 1 >= 0 )
        {
          v89 = v87 + 16;
          v90 = v73;
          do
          {
            *v90 = *((_DWORD *)v89 - 4);
            v91 = *((_DWORD *)v89 - 3);
            *((_DWORD *)v89 - 4) = 0;
            v90[1] = v91;
            v92 = *((_DWORD *)v89 - 2);
            *((_DWORD *)v89 - 3) = 0;
            v90[2] = v92;
            v93 = *((_DWORD *)v89 - 1);
            *((_DWORD *)v89 - 2) = 0;
            v90[3] = v93;
            v94 = *((void **)v89 - 4);
            if ( v94 )
            {
              *((_DWORD *)v89 - 3) = 0;
              sub_77F70(v94);
            }
            --v88;
            v90 += 4;
            v89 += 16;
          }
          while ( v88 != -1 );
          v87 = *(char **)(a1 + 20);
        }
        sub_77F70(v87);
        v15 = *(_DWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 20) = v73;
        *(_DWORD *)(a1 + 28) = HIDWORD(v86);
      }
      else
      {
        v73 = *(_DWORD **)(a1 + 20);
      }
      v16 = (const char ***)&v73[4 * v15];
      *v16 = nullptr;
      v16[1] = nullptr;
      v16[2] = nullptr;
      ++*(_DWORD *)(a1 + 24);
      v16[3] = (const char **)1;
LABEL_31:
      v32 = v16[1];
      v33 = *v16;
      v34 = (unsigned int)v16[2];
      v35 = *v16 > &v298;
      v298 = v292;
      v36 = (unsigned int)v32 + 1;
      if ( v35 || &v298 >= &v33[v34] )
      {
        if ( v34 < v36 )
        {
          v74 = (const char **)sub_78018((int)v16, nullptr, v36, 4u);
          v76 = v16[2];
          v75 = v16[1];
          v33 = v74;
          v16[2] = (const char **)v34;
          v77 = *v16;
          v78 = (int)v75 - 1;
          if ( v78 >= 0 )
          {
            v79 = v33 - 1;
            do
            {
              v80 = *v77++;
              --v78;
              v79[1] = v80;
              ++v79;
            }
            while ( v78 != -1 );
            v77 = *v16;
          }
          sub_77F70(v77);
          v32 = v16[1];
          *v16 = v33;
          v16[2] = v76;
        }
        v33[(_DWORD)v32] = v298;
      }
      else if ( v34 < v36 )
      {
        v95 = (const char **)sub_78018((int)v16, nullptr, v36, 4u);
        v97 = v16[2];
        v96 = v16[1];
        v98 = v95;
        v16[2] = (const char **)v34;
        v99 = *v16;
        v100 = (int)v96 - 1;
        if ( v100 >= 0 )
        {
          v101 = v98 - 1;
          do
          {
            v102 = *v99++;
            --v100;
            v101[1] = v102;
            ++v101;
          }
          while ( v100 != -1 );
          v99 = *v16;
        }
        sub_77F70(v99);
        v103 = v16[1];
        *v16 = v98;
        v16[2] = v97;
        v98[(_DWORD)v103] = v292;
      }
      else
      {
        v33[(_DWORD)v32] = v292;
      }
      v16[1] = (const char **)((char *)v16[1] + 1);
LABEL_36:
      v292 = sub_79544(nullptr, "|", &v296);
      v297 = v292;
      if ( !v292 )
        goto LABEL_37;
    }
    v16 = *(const char ****)(a1 + 20);
    v17 = 0;
    v18 = v16;
    while ( 1 )
    {
      v19 = v18[1];
      v20 = (int)&(*v18)[(_DWORD)v19];
      v21 = sub_40164(*v18, v20, &v297);
      if ( (const char **)v20 != v21 )
        break;
      ++v17;
      v18 += 4;
      if ( v17 == v15 )
      {
        if ( v16[3] == (const char **)1 )
        {
LABEL_30:
          if ( v16 )
            goto LABEL_31;
        }
        else
        {
          v69 = v16 + 4;
          v70 = 0;
          while ( v17 != ++v70 )
          {
            v16 = v69;
            v69 += 4;
            if ( *(v69 - 1) == (const char **)1 )
              goto LABEL_30;
          }
        }
        v71 = v15 + 1;
        goto LABEL_67;
      }
    }
    if ( v18[3] == (const char **)1 )
      goto LABEL_36;
    v22 = (v20 - (int)v21) >> 2;
    if ( v22 - 2 >= 0 )
    {
      v23 = &(&v21[v22])[-1];
      do
      {
        *v21 = v21[1];
        ++v21;
      }
      while ( v21 != v23 );
      v19 = v18[1];
    }
    v24 = v297;
    v18[1] = (const char **)((char *)v19 - 1);
    v25 = *(_DWORD *)(a1 + 24);
    if ( v25 )
    {
      v26 = *(const char ****)(a1 + 20);
      if ( v26[3] == (const char **)1 )
      {
LABEL_75:
        if ( v26 )
        {
LABEL_76:
          v81 = *v26;
          v82 = v26[1];
          v299 = v24;
          v83 = (unsigned int)v26[2];
          v84 = (unsigned int)v82 + 1;
          if ( v81 <= &v299 && &v299 < &v81[v83] )
          {
            if ( v83 < v84 )
            {
              v245 = (const char **)sub_78018((int)v26, nullptr, v84, 4u);
              v247 = v26[2];
              v246 = v26[1];
              v248 = v245;
              v26[2] = (const char **)v83;
              v249 = *v26;
              v250 = (int)v246 - 1;
              if ( v250 >= 0 )
              {
                v251 = v248 - 1;
                do
                {
                  v252 = *v249++;
                  --v250;
                  v251[1] = v252;
                  ++v251;
                }
                while ( v250 != -1 );
                v249 = *v26;
              }
              sub_77F70(v249);
              v253 = v26[1];
              *v26 = v248;
              v26[2] = v247;
              v248[(_DWORD)v253] = v24;
            }
            else
            {
              v81[(_DWORD)v82] = v24;
            }
          }
          else
          {
            if ( v83 < v84 )
            {
              v201 = (const char **)sub_78018((int)v26, nullptr, v84, 4u);
              v203 = v26[2];
              v202 = v26[1];
              v81 = v201;
              v26[2] = (const char **)v83;
              v204 = *v26;
              v205 = (int)v202 - 1;
              if ( v205 >= 0 )
              {
                v206 = v81 - 1;
                do
                {
                  v207 = *v204++;
                  --v205;
                  v206[1] = v207;
                  ++v206;
                }
                while ( v205 != -1 );
                v204 = *v26;
              }
              sub_77F70(v204);
              v82 = v26[1];
              *v26 = v81;
              v26[2] = v203;
            }
            v81[(_DWORD)v82] = v299;
          }
          v26[1] = (const char **)((char *)v26[1] + 1);
          goto LABEL_36;
        }
      }
      else
      {
        v27 = v26 + 4;
        v28 = 0;
        while ( v25 != ++v28 )
        {
          v26 = v27;
          v27 += 4;
          if ( *(v27 - 1) == (const char **)1 )
            goto LABEL_75;
        }
      }
      v29 = v25 + 1;
    }
    else
    {
      v29 = 1;
    }
    v30 = *(_DWORD *)(a1 + 28);
    if ( v30 < v29 )
    {
      v282 = sub_78018(a1 + 20, nullptr, v29, 0x10u);
      v283 = *(_QWORD *)(a1 + 24);
      v31 = v282;
      *(_DWORD *)(a1 + 28) = v30;
      v284 = *(char **)(a1 + 20);
      v285 = v283 - 1;
      if ( (int)v283 - 1 >= 0 )
      {
        v286 = v284 + 16;
        v287 = v31;
        do
        {
          *v287 = *((_DWORD *)v286 - 4);
          v288 = *((_DWORD *)v286 - 3);
          *((_DWORD *)v286 - 4) = 0;
          v287[1] = v288;
          v289 = *((_DWORD *)v286 - 2);
          *((_DWORD *)v286 - 3) = 0;
          v287[2] = v289;
          v290 = *((_DWORD *)v286 - 1);
          *((_DWORD *)v286 - 2) = 0;
          v287[3] = v290;
          v291 = *((void **)v286 - 4);
          if ( v291 )
          {
            *((_DWORD *)v286 - 3) = 0;
            sub_77F70(v291);
          }
          --v285;
          v287 += 4;
          v286 += 16;
        }
        while ( v285 != -1 );
        v284 = *(char **)(a1 + 20);
      }
      sub_77F70(v284);
      v25 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 20) = v31;
      *(_DWORD *)(a1 + 28) = HIDWORD(v283);
    }
    else
    {
      v31 = *(_DWORD **)(a1 + 20);
    }
    v26 = (const char ***)&v31[4 * v25];
    *v26 = nullptr;
    v26[1] = nullptr;
    v26[2] = nullptr;
    ++*(_DWORD *)(a1 + 24);
    v26[3] = (const char **)1;
    goto LABEL_76;
  }
LABEL_37:
  v37 = *(_DWORD *)(a1 + 12);
  v38 = *(char **)(a1 + 8);
  if ( (unsigned int)(v37 + 1) > *(_DWORD *)(a1 + 16) )
  {
    v38 = (char *)sub_78018(v295, v38, v37 + 1, 0xCu);
    v37 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 8) = v38;
  }
  v39 = 12 * v37;
  v40 = (char **)&v38[v39];
  *(_DWORD *)&v38[v39] = 0;
  v40[1] = nullptr;
  v40[2] = nullptr;
  ++*(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)&v38[v39 + 8] <= 0x2Bu )
  {
    v41 = (char *)sub_78018((int)v40, *(void **)&v38[v39], 0x2Cu, 1u);
    *v40 = v41;
  }
  else
  {
    v41 = *(char **)&v38[v39];
  }
  v40[1] = (char *)44;
  v42 = "long|string|__int64|success|char|float|void";
  do
  {
    v41 += 16;
    v43 = *(_DWORD *)v42;
    v44 = *((_DWORD *)v42 + 1);
    v45 = *((_DWORD *)v42 + 2);
    v46 = *((_DWORD *)v42 + 3);
    v42 += 16;
    *((_DWORD *)v41 - 4) = v43;
    *((_DWORD *)v41 - 3) = v44;
    *((_DWORD *)v41 - 2) = v45;
    *((_DWORD *)v41 - 1) = v46;
  }
  while ( v42 != "|float|void" );
  v47 = *(_DWORD *)v42;
  v48 = *((_DWORD *)v42 + 1);
  v49 = v42 + 8;
  v50 = *(_WORD *)v49;
  v51 = v49[2];
  *((_DWORD *)v41 + 1) = v48;
  *(_DWORD *)v41 = v47;
  *((_WORD *)v41 + 4) = v50;
  v41[10] = v51;
  (*v40)[43] = 0;
  v293 = sub_79544(*v40, "|", &v300);
  v301 = v293;
  if ( v293 )
  {
    while ( 1 )
    {
      v52 = *(_DWORD *)(a1 + 24);
      if ( v52 )
        break;
      v106 = *(_DWORD *)(a1 + 28);
      v107 = 1;
      if ( v106 )
        goto LABEL_100;
LABEL_185:
      v177 = sub_78018(a1 + 20, nullptr, v107, 0x10u);
      v178 = *(_QWORD *)(a1 + 24);
      v108 = v177;
      *(_DWORD *)(a1 + 28) = v106;
      v179 = *(char **)(a1 + 20);
      v180 = v178 - 1;
      if ( (int)v178 - 1 >= 0 )
      {
        v181 = v179 + 16;
        v182 = v108;
        do
        {
          *v182 = *((_DWORD *)v181 - 4);
          v183 = *((_DWORD *)v181 - 3);
          *((_DWORD *)v181 - 4) = 0;
          v182[1] = v183;
          v184 = *((_DWORD *)v181 - 2);
          *((_DWORD *)v181 - 3) = 0;
          v182[2] = v184;
          v185 = *((_DWORD *)v181 - 1);
          *((_DWORD *)v181 - 2) = 0;
          v182[3] = v185;
          v186 = *((void **)v181 - 4);
          if ( v186 )
          {
            *((_DWORD *)v181 - 3) = 0;
            sub_77F70(v186);
          }
          --v180;
          v182 += 4;
          v181 += 16;
        }
        while ( v180 != -1 );
        v179 = *(char **)(a1 + 20);
      }
      sub_77F70(v179);
      v52 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 20) = v108;
      *(_DWORD *)(a1 + 28) = HIDWORD(v178);
LABEL_101:
      v53 = (const char ***)&v108[4 * v52];
      *v53 = nullptr;
      v53[1] = nullptr;
      v53[2] = nullptr;
      ++*(_DWORD *)(a1 + 24);
      v53[3] = (const char **)2;
LABEL_102:
      v109 = v53[1];
      v110 = *v53;
      v111 = (unsigned int)v53[2];
      v35 = *v53 > &v302;
      v302 = v293;
      v112 = (unsigned int)v109 + 1;
      if ( v35 || &v302 >= &v110[v111] )
      {
        if ( v111 < v112 )
        {
          v145 = (const char **)sub_78018((int)v53, nullptr, v112, 4u);
          v147 = v53[2];
          v146 = v53[1];
          v110 = v145;
          v53[2] = (const char **)v111;
          v148 = *v53;
          v149 = (int)v146 - 1;
          if ( v149 >= 0 )
          {
            v150 = v110 - 1;
            do
            {
              v151 = *v148++;
              --v149;
              v150[1] = v151;
              ++v150;
            }
            while ( v149 != -1 );
            v148 = *v53;
          }
          sub_77F70(v148);
          v109 = v53[1];
          *v53 = v110;
          v53[2] = v147;
        }
        v110[(_DWORD)v109] = v302;
      }
      else
      {
        if ( v111 < v112 )
        {
          v221 = (const char **)sub_78018((int)v53, nullptr, v112, 4u);
          v223 = v53[2];
          v222 = v53[1];
          v110 = v221;
          v53[2] = (const char **)v111;
          v224 = *v53;
          v225 = (int)v222 - 1;
          if ( v225 >= 0 )
          {
            v226 = v110 - 1;
            do
            {
              v227 = *v224++;
              --v225;
              v226[1] = v227;
              ++v226;
            }
            while ( v225 != -1 );
            v224 = *v53;
          }
          sub_77F70(v224);
          v109 = v53[1];
          *v53 = v110;
          v53[2] = v223;
        }
        v110[(_DWORD)v109] = v293;
      }
      v53[1] = (const char **)((char *)v53[1] + 1);
LABEL_107:
      v293 = sub_79544(nullptr, "|", &v300);
      v301 = v293;
      if ( !v293 )
        goto LABEL_108;
    }
    v53 = *(const char ****)(a1 + 20);
    v54 = 0;
    v55 = v53;
    while ( 1 )
    {
      v56 = v55[1];
      v57 = (int)&(*v55)[(_DWORD)v56];
      v58 = sub_40164(*v55, v57, &v301);
      if ( (const char **)v57 != v58 )
        break;
      ++v54;
      v55 += 4;
      if ( v54 == v52 )
      {
        if ( v53[3] == (const char **)2 )
        {
LABEL_147:
          if ( v53 )
            goto LABEL_102;
        }
        else
        {
          v104 = v53 + 4;
          v105 = 0;
          while ( v54 != ++v105 )
          {
            v53 = v104;
            v104 += 4;
            if ( *(v104 - 1) == (const char **)2 )
              goto LABEL_147;
          }
        }
        v106 = *(_DWORD *)(a1 + 28);
        v107 = v52 + 1;
        if ( v106 < v52 + 1 )
          goto LABEL_185;
LABEL_100:
        v108 = *(_DWORD **)(a1 + 20);
        goto LABEL_101;
      }
    }
    if ( v55[3] == (const char **)2 )
      goto LABEL_107;
    v59 = (v57 - (int)v58) >> 2;
    if ( v59 - 2 >= 0 )
    {
      v60 = &(&v58[v59])[-1];
      do
      {
        *v58 = v58[1];
        ++v58;
      }
      while ( v58 != v60 );
      v56 = v55[1];
    }
    v61 = v301;
    v55[1] = (const char **)((char *)v56 - 1);
    v62 = *(_DWORD *)(a1 + 24);
    if ( v62 )
    {
      v63 = *(const char ****)(a1 + 20);
      if ( v63[3] == (const char **)2 )
      {
LABEL_165:
        if ( v63 )
        {
LABEL_166:
          v163 = *v63;
          v164 = v63[1];
          v303 = v61;
          v165 = (unsigned int)v63[2];
          v166 = (unsigned int)v164 + 1;
          if ( v163 <= &v303 && &v303 < &v163[v165] )
          {
            if ( v165 < v166 )
            {
              v254 = (const char **)sub_78018((int)v63, nullptr, v166, 4u);
              v256 = v63[2];
              v255 = v63[1];
              v257 = v254;
              v63[2] = (const char **)v165;
              v258 = *v63;
              v259 = (int)v255 - 1;
              if ( v259 >= 0 )
              {
                v260 = v257 - 1;
                do
                {
                  v261 = *v258++;
                  --v259;
                  v260[1] = v261;
                  ++v260;
                }
                while ( v259 != -1 );
                v258 = *v63;
              }
              sub_77F70(v258);
              v262 = v63[1];
              *v63 = v257;
              v63[2] = v256;
              v257[(_DWORD)v262] = v61;
            }
            else
            {
              v163[(_DWORD)v164] = v61;
            }
          }
          else
          {
            if ( v165 < v166 )
            {
              v187 = (const char **)sub_78018((int)v63, nullptr, v166, 4u);
              v189 = v63[2];
              v188 = v63[1];
              v163 = v187;
              v63[2] = (const char **)v165;
              v190 = *v63;
              v191 = (int)v188 - 1;
              if ( v191 >= 0 )
              {
                v192 = v163 - 1;
                do
                {
                  v193 = *v190++;
                  --v191;
                  v192[1] = v193;
                  ++v192;
                }
                while ( v191 != -1 );
                v190 = *v63;
              }
              sub_77F70(v190);
              v164 = v63[1];
              *v63 = v163;
              v63[2] = v189;
            }
            v163[(_DWORD)v164] = v303;
          }
          v63[1] = (const char **)((char *)v63[1] + 1);
          goto LABEL_107;
        }
      }
      else
      {
        v64 = v63 + 4;
        v65 = 0;
        while ( ++v65 != v62 )
        {
          v63 = v64;
          v64 += 4;
          if ( *(v64 - 1) == (const char **)2 )
            goto LABEL_165;
        }
      }
      v66 = v62 + 1;
    }
    else
    {
      v66 = 1;
    }
    v67 = *(_DWORD *)(a1 + 28);
    if ( v67 < v66 )
    {
      v235 = sub_78018(a1 + 20, nullptr, v66, 0x10u);
      v236 = *(_QWORD *)(a1 + 24);
      v68 = v235;
      *(_DWORD *)(a1 + 28) = v67;
      v237 = *(char **)(a1 + 20);
      v238 = v236 - 1;
      if ( (int)v236 - 1 >= 0 )
      {
        v239 = v237 + 16;
        v240 = v68;
        do
        {
          *v240 = *((_DWORD *)v239 - 4);
          v241 = *((_DWORD *)v239 - 3);
          *((_DWORD *)v239 - 4) = 0;
          v240[1] = v241;
          v242 = *((_DWORD *)v239 - 2);
          *((_DWORD *)v239 - 3) = 0;
          v240[2] = v242;
          v243 = *((_DWORD *)v239 - 1);
          *((_DWORD *)v239 - 2) = 0;
          v240[3] = v243;
          v244 = *((void **)v239 - 4);
          if ( v244 )
          {
            *((_DWORD *)v239 - 3) = 0;
            sub_77F70(v244);
          }
          --v238;
          v240 += 4;
          v239 += 16;
        }
        while ( v238 != -1 );
        v237 = *(char **)(a1 + 20);
      }
      sub_77F70(v237);
      v62 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 20) = v68;
      *(_DWORD *)(a1 + 28) = HIDWORD(v236);
    }
    else
    {
      v68 = *(_DWORD **)(a1 + 20);
    }
    v63 = (const char ***)&v68[4 * v62];
    *v63 = nullptr;
    v63[1] = nullptr;
    v63[2] = nullptr;
    ++*(_DWORD *)(a1 + 24);
    v63[3] = (const char **)2;
    goto LABEL_166;
  }
LABEL_108:
  v113 = *(_DWORD *)(a1 + 12);
  v114 = *(char **)(a1 + 8);
  if ( (unsigned int)(v113 + 1) > *(_DWORD *)(a1 + 16) )
  {
    v114 = (char *)sub_78018(v295, v114, v113 + 1, 0xCu);
    v113 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 8) = v114;
  }
  v115 = 12 * v113;
  v116 = (char **)&v114[v115];
  *(_DWORD *)&v114[v115] = 0;
  v116[1] = nullptr;
  v116[2] = nullptr;
  ++*(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)&v114[v115 + 8] <= 0x16u )
  {
    v117 = (char *)sub_78018((int)v116, *(void **)&v114[v115], 0x17u, 1u);
    *v116 = v117;
  }
  else
  {
    v117 = *(char **)&v114[v115];
  }
  v116[1] = (char *)23;
  qmemcpy(v117, "BADADDR|BADSEL|MAXADDR", 22);
  (*v116)[22] = 0;
  v294 = sub_79544(*v116, "|", &v304);
  v305 = v294;
  if ( v294 )
  {
    while ( 1 )
    {
      v118 = *(_DWORD *)(a1 + 24);
      if ( v118 )
        break;
      v137 = *(_DWORD *)(a1 + 28);
      v138 = 1;
      if ( v137 )
        goto LABEL_136;
LABEL_176:
      v167 = sub_78018(a1 + 20, nullptr, v138, 0x10u);
      v168 = *(_QWORD *)(a1 + 24);
      v139 = v167;
      *(_DWORD *)(a1 + 28) = v137;
      v169 = *(char **)(a1 + 20);
      v170 = v168 - 1;
      if ( (int)v168 - 1 >= 0 )
      {
        v171 = v169 + 16;
        v172 = v139;
        do
        {
          *v172 = *((_DWORD *)v171 - 4);
          v173 = *((_DWORD *)v171 - 3);
          *((_DWORD *)v171 - 4) = 0;
          v172[1] = v173;
          v174 = *((_DWORD *)v171 - 2);
          *((_DWORD *)v171 - 3) = 0;
          v172[2] = v174;
          v175 = *((_DWORD *)v171 - 1);
          *((_DWORD *)v171 - 2) = 0;
          v172[3] = v175;
          v176 = *((void **)v171 - 4);
          if ( v176 )
          {
            *((_DWORD *)v171 - 3) = 0;
            sub_77F70(v176);
          }
          --v170;
          v172 += 4;
          v171 += 16;
        }
        while ( v170 != -1 );
        v169 = *(char **)(a1 + 20);
      }
      sub_77F70(v169);
      v118 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 20) = v139;
      *(_DWORD *)(a1 + 28) = HIDWORD(v168);
LABEL_137:
      v119 = (const char ***)&v139[4 * v118];
      *v119 = nullptr;
      v119[1] = nullptr;
      v119[2] = nullptr;
      ++*(_DWORD *)(a1 + 24);
      v119[3] = (const char **)3;
LABEL_138:
      v140 = v119[1];
      v141 = *v119;
      v142 = (unsigned int)v119[2];
      v35 = *v119 > &v306;
      v306 = v294;
      v143 = (unsigned int)v140 + 1;
      if ( v35 || &v306 >= &v141[v142] )
      {
        if ( v142 < v143 )
        {
          v152 = (const char **)sub_78018((int)v119, nullptr, v143, 4u);
          v154 = v119[2];
          v153 = v119[1];
          v141 = v152;
          v119[2] = (const char **)v142;
          v155 = *v119;
          v156 = (int)v153 - 1;
          if ( v156 >= 0 )
          {
            v157 = v141 - 1;
            do
            {
              v158 = *v155++;
              --v156;
              v157[1] = v158;
              ++v157;
            }
            while ( v156 != -1 );
            v155 = *v119;
          }
          sub_77F70(v155);
          v140 = v119[1];
          *v119 = v141;
          v119[2] = v154;
        }
        v141[(_DWORD)v140] = v306;
      }
      else
      {
        if ( v142 < v143 )
        {
          v228 = (const char **)sub_78018((int)v119, nullptr, v143, 4u);
          v230 = v119[2];
          v229 = v119[1];
          v141 = v228;
          v119[2] = (const char **)v142;
          v231 = *v119;
          v232 = (int)v229 - 1;
          if ( v232 >= 0 )
          {
            v233 = v141 - 1;
            do
            {
              v234 = *v231++;
              --v232;
              v233[1] = v234;
              ++v233;
            }
            while ( v232 != -1 );
            v231 = *v119;
          }
          sub_77F70(v231);
          v140 = v119[1];
          *v119 = v141;
          v119[2] = v230;
        }
        v141[(_DWORD)v140] = v294;
      }
      v119[1] = (const char **)((char *)v119[1] + 1);
LABEL_143:
      v294 = sub_79544(nullptr, "|", &v304);
      v305 = v294;
      if ( !v294 )
        return a1;
    }
    v119 = *(const char ****)(a1 + 20);
    v120 = 0;
    v121 = v119;
    while ( 1 )
    {
      v122 = v121[1];
      v123 = (int)&(*v121)[(_DWORD)v122];
      v124 = sub_40164(*v121, v123, &v305);
      if ( (const char **)v123 != v124 )
        break;
      ++v120;
      v121 += 4;
      if ( v120 == v118 )
      {
        if ( v119[3] == (const char **)3 )
        {
LABEL_145:
          if ( v119 )
            goto LABEL_138;
        }
        else
        {
          v135 = v119 + 4;
          v136 = 0;
          while ( v120 != ++v136 )
          {
            v119 = v135;
            v135 += 4;
            if ( *(v135 - 1) == (const char **)3 )
              goto LABEL_145;
          }
        }
        v137 = *(_DWORD *)(a1 + 28);
        v138 = v118 + 1;
        if ( v137 < v118 + 1 )
          goto LABEL_176;
LABEL_136:
        v139 = *(_DWORD **)(a1 + 20);
        goto LABEL_137;
      }
    }
    if ( v121[3] == (const char **)3 )
      goto LABEL_143;
    v125 = (v123 - (int)v124) >> 2;
    if ( v125 - 2 >= 0 )
    {
      v126 = &(&v124[v125])[-1];
      do
      {
        *v124 = v124[1];
        ++v124;
      }
      while ( v124 != v126 );
      v122 = v121[1];
    }
    v127 = v305;
    v121[1] = (const char **)((char *)v122 - 1);
    v128 = *(_DWORD *)(a1 + 24);
    if ( v128 )
    {
      v129 = *(const char ****)(a1 + 20);
      if ( v129[3] == (const char **)3 )
      {
LABEL_159:
        if ( v129 )
        {
LABEL_160:
          v159 = *v129;
          v160 = v129[1];
          v307 = v127;
          v161 = (unsigned int)v129[2];
          v162 = (unsigned int)v160 + 1;
          if ( v159 <= &v307 && &v307 < &v159[v161] )
          {
            if ( v161 < v162 )
            {
              v263 = (const char **)sub_78018((int)v129, nullptr, v162, 4u);
              v265 = v129[2];
              v264 = v129[1];
              v266 = v263;
              v129[2] = (const char **)v161;
              v267 = *v129;
              v268 = (int)v264 - 1;
              if ( v268 >= 0 )
              {
                v269 = v266 - 1;
                do
                {
                  v270 = *v267++;
                  --v268;
                  v269[1] = v270;
                  ++v269;
                }
                while ( v268 != -1 );
                v267 = *v129;
              }
              sub_77F70(v267);
              v271 = v129[1];
              *v129 = v266;
              v129[2] = v265;
              v266[(_DWORD)v271] = v127;
            }
            else
            {
              v159[(_DWORD)v160] = v127;
            }
          }
          else
          {
            if ( v161 < v162 )
            {
              v194 = (const char **)sub_78018((int)v129, nullptr, v162, 4u);
              v196 = v129[2];
              v195 = v129[1];
              v159 = v194;
              v129[2] = (const char **)v161;
              v197 = *v129;
              v198 = (int)v195 - 1;
              if ( v198 >= 0 )
              {
                v199 = v159 - 1;
                do
                {
                  v200 = *v197++;
                  --v198;
                  v199[1] = v200;
                  ++v199;
                }
                while ( v198 != -1 );
                v197 = *v129;
              }
              sub_77F70(v197);
              v160 = v129[1];
              *v129 = v159;
              v129[2] = v196;
            }
            v159[(_DWORD)v160] = v307;
          }
          v129[1] = (const char **)((char *)v129[1] + 1);
          goto LABEL_143;
        }
      }
      else
      {
        v130 = v129 + 4;
        v131 = 0;
        while ( ++v131 != v128 )
        {
          v129 = v130;
          v130 += 4;
          if ( *(v130 - 1) == (const char **)3 )
            goto LABEL_159;
        }
      }
      v132 = v128 + 1;
    }
    else
    {
      v132 = 1;
    }
    v133 = *(_DWORD *)(a1 + 28);
    if ( v133 < v132 )
    {
      v272 = sub_78018(a1 + 20, nullptr, v132, 0x10u);
      v273 = *(_QWORD *)(a1 + 24);
      v134 = v272;
      *(_DWORD *)(a1 + 28) = v133;
      v274 = *(char **)(a1 + 20);
      v275 = v273 - 1;
      if ( (int)v273 - 1 >= 0 )
      {
        v276 = v274 + 16;
        v277 = v134;
        do
        {
          *v277 = *((_DWORD *)v276 - 4);
          v278 = *((_DWORD *)v276 - 3);
          *((_DWORD *)v276 - 4) = 0;
          v277[1] = v278;
          v279 = *((_DWORD *)v276 - 2);
          *((_DWORD *)v276 - 3) = 0;
          v277[2] = v279;
          v280 = *((_DWORD *)v276 - 1);
          *((_DWORD *)v276 - 2) = 0;
          v277[3] = v280;
          v281 = *((void **)v276 - 4);
          if ( v281 )
          {
            *((_DWORD *)v276 - 3) = 0;
            sub_77F70(v281);
          }
          --v275;
          v277 += 4;
          v276 += 16;
        }
        while ( v275 != -1 );
        v274 = *(char **)(a1 + 20);
      }
      sub_77F70(v274);
      v128 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 20) = v134;
      *(_DWORD *)(a1 + 28) = HIDWORD(v273);
    }
    else
    {
      v134 = *(_DWORD **)(a1 + 20);
    }
    v129 = (const char ***)&v134[4 * v128];
    *v129 = nullptr;
    v129[1] = nullptr;
    v129[2] = nullptr;
    ++*(_DWORD *)(a1 + 24);
    v129[3] = (const char **)3;
    goto LABEL_160;
  }
  return a1;
}
// 424E4: using guessed type int code_highlight_block();
// D0ABC: using guessed type _UNKNOWN *;
