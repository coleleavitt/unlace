/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7D09C
// Address: 0x0007D09C

//----- (0007D09C) --------------------------------------------------------
int __fastcall sub_7D09C(int **a1, int *a2)
{
  unsigned int v3; // r2
  int v4; // r3
  int *v6; // r1
  int v7; // r0
  int *v8; // r5
  int v9; // r3
  unsigned int v10; // r2
  unsigned __int8 v11; // r0
  int v12; // r4
  unsigned int v13; // r5
  int *v14; // r6
  unsigned int *v15; // r11
  unsigned int v16; // r1
  int v17; // r3
  int v18; // r9
  unsigned int *v19; // r8
  unsigned int v20; // r3
  unsigned int v21; // r3
  int *v22; // r1
  int v23; // r3
  int *v24; // r11
  int *v25; // r5
  unsigned int v26; // lr
  int v27; // r1
  int v28; // r2
  char *v29; // r6
  char *v30; // r6
  int v31; // r0
  int v32; // r1
  unsigned int v33; // r12
  unsigned int v34; // r9
  char *v35; // r0
  unsigned int v36; // r2
  void *v37; // r0
  unsigned int v38; // r12
  char *v39; // r3
  char *v40; // lr
  int v41; // r0
  int v42; // r1
  int v43; // r2
  int v45; // r3
  unsigned int v46; // r6
  unsigned int v47; // r3
  unsigned int v48; // r1
  int v49; // r2
  char *v50; // r4
  char *v51; // r4
  unsigned int v52; // r12
  unsigned int v53; // r0
  unsigned int v54; // r1
  unsigned int v55; // r7
  char *v56; // r0
  unsigned int v57; // r8
  void *v58; // r0
  unsigned int v59; // r7
  char *v60; // r3
  char *v61; // r12
  int v62; // r0
  int v63; // r1
  int v64; // r2
  __int64 v65; // r0
  char *v66; // r8
  unsigned int v67; // lr
  unsigned int v68; // r12
  char *v69; // r3
  int v70; // r1
  int v71; // r2
  int v72; // r2
  unsigned int v73; // r1
  int v74; // r2
  char *v75; // r4
  int *v76; // r0
  unsigned int v77; // r8
  int v78; // r6
  char *v79; // r9
  int v80; // r3
  char *v81; // r9
  unsigned int v82; // r3
  unsigned int v83; // r12
  unsigned int v84; // r8
  unsigned int v85; // r1
  int v86; // r2
  char *v87; // r9
  int *v88; // r3
  int v89; // r2
  unsigned int v90; // r2
  int v91; // r5
  _BYTE *v92; // r0
  unsigned int v93; // r5
  _BYTE *v94; // r0
  char *v95; // r6
  char *v96; // r4
  int v97; // r2
  _BYTE *v98; // r0
  char *v99; // r1
  unsigned int v100; // r2
  unsigned int v101; // r4
  int *v102; // r9
  unsigned int v103; // r1
  unsigned int v104; // r3
  unsigned int v105; // r12
  unsigned int v106; // r6
  int v107; // r1
  int v108; // r2
  char *v109; // r3
  char *v110; // r6
  int v111; // r1
  int v112; // r2
  int *v113; // r3
  int *v114; // r8
  unsigned int v115; // r3
  unsigned int v116; // r1
  int v117; // r2
  char *v118; // r4
  char *v119; // r4
  unsigned int v120; // r12
  unsigned int v121; // r0
  unsigned int v122; // r1
  unsigned int v123; // r7
  char *v124; // r0
  unsigned int v125; // r11
  void *v126; // r0
  unsigned int v127; // r7
  char *v128; // r3
  char *v129; // r12
  int v130; // r0
  int v131; // r1
  int v132; // r2
  unsigned int v133; // r1
  int v134; // r2
  char *v135; // r4
  int v136; // r5
  _BYTE *v137; // r0
  unsigned int v138; // r5
  _BYTE *v139; // r0
  char *v140; // r6
  char *v141; // r4
  int v142; // r2
  _BYTE *v143; // r0
  char *v144; // r1
  unsigned int v145; // r2
  unsigned int v146; // r4
  char *v147; // r0
  unsigned int v148; // r2
  void *v149; // r0
  unsigned int v150; // r12
  char *v151; // r3
  char *v152; // lr
  int v153; // r0
  int v154; // r1
  int v155; // r2
  void *v156; // r0
  unsigned int v157; // r12
  char *v158; // r3
  char *v159; // lr
  int v160; // r0
  int v161; // r1
  int v162; // r2
  char *v163; // r0
  unsigned int v164; // r2
  char *v165; // r1
  unsigned int v166; // r6
  void *v167; // r0
  char *v168; // r3
  char *v169; // r12
  int v170; // r0
  int v171; // r1
  int v172; // r2
  char *v173; // r3
  int v174; // r1
  int v175; // r2
  char *v176; // r0
  unsigned int v177; // r2
  char *v178; // r1
  unsigned int v179; // lr
  char *v180; // r6
  char *v181; // r3
  int v182; // r0
  int v183; // r1
  int v184; // r2
  char *v185; // r0
  unsigned int v186; // r2
  void *v187; // r0
  unsigned int v188; // r7
  char *v189; // r3
  char *v190; // r12
  int v191; // r0
  int v192; // r1
  int v193; // r2
  unsigned int v194; // r2
  int v195; // r5
  _BYTE *v196; // r0
  unsigned int v197; // r5
  _BYTE *v198; // r0
  char *v199; // r6
  char *v200; // r4
  int v201; // r2
  _BYTE *v202; // r0
  unsigned int v203; // r3
  unsigned int v204; // r4
  char *v205; // r0
  unsigned int v206; // r2
  void *v207; // r0
  unsigned int v208; // r7
  char *v209; // r3
  char *v210; // r12
  int v211; // r0
  int v212; // r1
  int v213; // r2
  char *v214; // r0
  void *v215; // r0
  unsigned int v216; // lr
  char *v217; // r12
  char *v218; // r3
  int v219; // r0
  int v220; // r1
  int v221; // r2
  char *v222; // r0
  unsigned int v223; // r11
  void *v224; // r0
  unsigned int v225; // lr
  char *v226; // r12
  char *v227; // r3
  int v228; // r0
  int v229; // r1
  int v230; // r2
  unsigned int v231; // r1
  int v232; // r2
  char *v233; // r9
  char *v234; // r0
  unsigned int v235; // r6
  unsigned int v236; // r12
  char *v237; // r3
  char *v238; // lr
  int v239; // r0
  int v240; // r1
  int v241; // r2
  void *v242; // r0
  int v243; // [sp+4h] [bp-D0h]
  unsigned int v244; // [sp+4h] [bp-D0h]
  int v245; // [sp+Ch] [bp-C8h]
  int v246; // [sp+Ch] [bp-C8h]
  unsigned int v247; // [sp+Ch] [bp-C8h]
  signed int v248; // [sp+10h] [bp-C4h]
  unsigned int v249; // [sp+10h] [bp-C4h]
  unsigned int v250; // [sp+14h] [bp-C0h]
  int v251; // [sp+14h] [bp-C0h]
  unsigned int v252; // [sp+14h] [bp-C0h]
  unsigned int v253; // [sp+14h] [bp-C0h]
  char *v254; // [sp+20h] [bp-B4h]
  unsigned int v255; // [sp+20h] [bp-B4h]
  unsigned int v256; // [sp+20h] [bp-B4h]
  unsigned int v257; // [sp+24h] [bp-B0h]
  unsigned int v258; // [sp+28h] [bp-ACh] BYREF
  unsigned int v259; // [sp+2Ch] [bp-A8h]
  int v260; // [sp+30h] [bp-A4h]
  unsigned int v261; // [sp+34h] [bp-A0h]
  unsigned int v262; // [sp+38h] [bp-9Ch]
  int v263; // [sp+3Ch] [bp-98h]
  void *v264; // [sp+40h] [bp-94h] BYREF
  unsigned int v265; // [sp+44h] [bp-90h]
  unsigned int v266; // [sp+48h] [bp-8Ch]
  __int64 v267; // [sp+4Ch] [bp-88h] BYREF
  int v268; // [sp+54h] [bp-80h]
  __int64 v269; // [sp+58h] [bp-7Ch]
  int v270; // [sp+60h] [bp-74h]
  unsigned int v271; // [sp+64h] [bp-70h] BYREF
  unsigned int v272; // [sp+68h] [bp-6Ch]
  int v273; // [sp+6Ch] [bp-68h]
  _DWORD v274[3]; // [sp+70h] [bp-64h] BYREF
  int v275; // [sp+7Ch] [bp-58h] BYREF
  int v276; // [sp+80h] [bp-54h]
  int v277; // [sp+84h] [bp-50h]
  int v278; // [sp+88h] [bp-4Ch]
  int v279; // [sp+8Ch] [bp-48h]
  int v280; // [sp+90h] [bp-44h]
  unsigned int v281; // [sp+94h] [bp-40h] BYREF
  unsigned int v282; // [sp+98h] [bp-3Ch]
  int v283; // [sp+9Ch] [bp-38h]
  unsigned int v284; // [sp+A0h] [bp-34h]
  unsigned int v285; // [sp+A4h] [bp-30h]
  int v286; // [sp+A8h] [bp-2Ch]
  void *v287; // [sp+ACh] [bp-28h] BYREF
  unsigned int v288; // [sp+B0h] [bp-24h]
  unsigned int v289; // [sp+B4h] [bp-20h]
  void *ptr; // [sp+B8h] [bp-1Ch] BYREF
  unsigned int v291; // [sp+BCh] [bp-18h]
  unsigned int v292; // [sp+C0h] [bp-14h]
  int *v293; // [sp+C4h] [bp-10h]
  unsigned __int8 v294; // [sp+C8h] [bp-Ch]

  v3 = (unsigned int)a1[1];
  if ( !v3 )
    return 0;
  v4 = a2[1];
  v6 = a1[4];
  if ( !v4 )
  {
    v292 = 0;
    v293 = v6;
    ptr = nullptr;
    v291 = 0;
    if ( v6 == (int *)-1 )
    {
      v294 = 0;
      v8 = *a1;
    }
    else
    {
      v7 = sub_6AEE0();
      v8 = *a1;
      if ( v7 )
      {
        v113 = a1[1];
        v294 = 1;
        v114 = &v8[2 * (_DWORD)v113];
        if ( v114 > v8 )
        {
          v115 = v291;
          do
          {
            v119 = (char *)ptr;
            v120 = v115 + 1;
            v121 = *v8;
            v122 = v8[1];
            v123 = v292;
            LOBYTE(v283) = 1;
            v281 = v121;
            v282 = v122;
            if ( ptr <= &v281 && &v281 < (unsigned int *)((char *)ptr + 12 * v292) )
            {
              v284 = v281;
              v285 = v282;
              v286 = v283;
              if ( v292 < v120 )
              {
                v205 = (char *)sub_78018((int)&ptr, nullptr, v115 + 1, 0xCu);
                v206 = v292;
                v119 = v205;
                v292 = v123;
                v207 = ptr;
                v208 = v291 - 1;
                v247 = v206;
                if ( (int)(v291 - 1) >= 0 )
                {
                  v209 = (char *)ptr + 12;
                  v210 = v119 + 12;
                  do
                  {
                    v211 = *((_DWORD *)v209 - 3);
                    v212 = *((_DWORD *)v209 - 2);
                    v213 = *((_DWORD *)v209 - 1);
                    --v208;
                    v209 += 12;
                    *((_DWORD *)v210 - 3) = v211;
                    *((_DWORD *)v210 - 2) = v212;
                    *((_DWORD *)v210 - 1) = v213;
                    v210 += 12;
                  }
                  while ( v208 != -1 );
                  v207 = ptr;
                }
                sub_77F70(v207);
                v115 = v291;
                ptr = v119;
                v292 = v247;
              }
              v133 = v285;
              v134 = v286;
              v135 = &v119[12 * v115];
              *(_DWORD *)v135 = v284;
              *((_DWORD *)v135 + 1) = v133;
              *((_DWORD *)v135 + 2) = v134;
            }
            else
            {
              if ( v292 < v120 )
              {
                v124 = (char *)sub_78018((int)&ptr, nullptr, v115 + 1, 0xCu);
                v125 = v292;
                v119 = v124;
                v292 = v123;
                v126 = ptr;
                v127 = v291 - 1;
                if ( (int)(v291 - 1) >= 0 )
                {
                  v128 = (char *)ptr + 12;
                  v129 = v119 + 12;
                  do
                  {
                    v130 = *((_DWORD *)v128 - 3);
                    v131 = *((_DWORD *)v128 - 2);
                    v132 = *((_DWORD *)v128 - 1);
                    --v127;
                    v128 += 12;
                    *((_DWORD *)v129 - 3) = v130;
                    *((_DWORD *)v129 - 2) = v131;
                    *((_DWORD *)v129 - 1) = v132;
                    v129 += 12;
                  }
                  while ( v127 != -1 );
                  v126 = ptr;
                }
                sub_77F70(v126);
                v115 = v291;
                ptr = v119;
                v292 = v125;
              }
              v116 = v282;
              v117 = v283;
              v118 = &v119[12 * v115];
              *(_DWORD *)v118 = v281;
              *((_DWORD *)v118 + 1) = v116;
              *((_DWORD *)v118 + 2) = v117;
            }
            v8 += 2;
            v115 = ++v291;
          }
          while ( v8 < v114 );
          v8 = *a1;
        }
      }
      else
      {
        v294 = 0;
      }
    }
    if ( v8 )
    {
      a1[1] = nullptr;
      sub_77F70(v8);
      *a1 = nullptr;
      a1[2] = nullptr;
    }
    v9 = v294;
    a1[3] = nullptr;
    if ( v9 )
    {
      v10 = v291;
      if ( v291 )
      {
        v287 = nullptr;
        v288 = 0;
        v289 = 0;
        v136 = 11 * v291 + 5;
        if ( 11 * v291 == -5 )
        {
          v137 = (_BYTE *)(11 * v291 + 5);
        }
        else
        {
          v287 = sub_78018((int)&v287, nullptr, 11 * v291 + 5, 1u);
          memset((char *)v287 + v288, 0, v136 - v288);
          v288 = v136;
          v137 = v287;
          v10 = v291;
        }
        v138 = (unsigned int)&v137[v136];
        v139 = sub_76118(v137, v138, v10);
        v140 = (char *)ptr + 12 * v291;
        if ( ptr != v140 )
        {
          v141 = (char *)ptr + 12;
          v142 = 0;
          while ( 1 )
          {
            if ( v138 > (unsigned int)v139 )
              *v139++ = *(v141 - 4);
            v143 = sub_76118(v139, v138, *((_DWORD *)v141 - 3) - v142);
            v139 = sub_76118(v143, v138, *((_DWORD *)v141 - 2) - *((_DWORD *)v141 - 3));
            v142 = *((_DWORD *)v141 - 2);
            if ( v140 == v141 )
              break;
            v141 += 12;
          }
        }
        v144 = (char *)v287;
        v145 = v288;
        v146 = v139 - (_BYTE *)v287;
        if ( v139 - (_BYTE *)v287 > v288 )
        {
          if ( v146 > v289 )
          {
            v144 = (char *)sub_78018((int)&v287, v287, v139 - (_BYTE *)v287, 1u);
            v145 = v288;
            v287 = v144;
          }
          memset(&v144[v145], 0, v146 - v145);
          v288 = v146;
        }
        else if ( v139 - (_BYTE *)v287 < v288 )
        {
          v288 = v139 - (_BYTE *)v287;
        }
        sub_6AED8();
        v291 = 0;
        if ( v287 )
        {
          v288 = 0;
          sub_77F70(v287);
        }
      }
    }
    if ( ptr )
    {
      v291 = 0;
      sub_77F70(ptr);
    }
    return 1;
  }
  v293 = a1[4];
  v11 = 0;
  ptr = nullptr;
  v291 = 0;
  v292 = 0;
  if ( v6 != (int *)-1 )
  {
    v11 = sub_6AEE0();
    v3 = (unsigned int)a1[1];
  }
  v12 = 0;
  v13 = 0;
  v294 = v11;
  v243 = 0;
LABEL_16:
  if ( v13 >= v3 )
  {
    a1[3] = nullptr;
    if ( !v243 )
      goto LABEL_63;
    v243 = v294;
    if ( v294 )
    {
      v194 = v291;
      if ( v291 )
      {
        v287 = nullptr;
        v288 = 0;
        v289 = 0;
        v195 = 11 * v291 + 5;
        if ( 11 * v291 == -5 )
        {
          v196 = (_BYTE *)(11 * v291 + 5);
        }
        else
        {
          v287 = sub_78018((int)&v287, nullptr, 11 * v291 + 5, 1u);
          memset((char *)v287 + v288, 0, v195 - v288);
          v288 = v195;
          v196 = v287;
          v194 = v291;
        }
        v197 = (unsigned int)&v196[v195];
        v198 = sub_76118(v196, v197, v194);
        v199 = (char *)ptr + 12 * v291;
        if ( ptr != v199 )
        {
          v200 = (char *)ptr + 12;
          v201 = 0;
          while ( 1 )
          {
            if ( v197 > (unsigned int)v198 )
              *v198++ = *(v200 - 4);
            v202 = sub_76118(v198, v197, *((_DWORD *)v200 - 3) - v201);
            v198 = sub_76118(v202, v197, *((_DWORD *)v200 - 2) - *((_DWORD *)v200 - 3));
            v201 = *((_DWORD *)v200 - 2);
            if ( v199 == v200 )
              break;
            v200 += 12;
          }
        }
        v203 = v288;
        v204 = v198 - (_BYTE *)v287;
        if ( v198 - (_BYTE *)v287 > v288 )
        {
          if ( v204 > v289 )
          {
            v242 = sub_78018((int)&v287, v287, v198 - (_BYTE *)v287, 1u);
            v203 = v288;
            v287 = v242;
          }
          memset((char *)v287 + v203, 0, v204 - v203);
          v288 = v204;
        }
        else if ( v198 - (_BYTE *)v287 < v288 )
        {
          v288 = v198 - (_BYTE *)v287;
        }
        sub_6AED8();
        v291 = 0;
        if ( v287 )
        {
          v288 = 0;
          sub_77F70(v287);
        }
        goto LABEL_63;
      }
    }
    goto LABEL_62;
  }
  v14 = *a1;
  v245 = 8 * v13;
  v15 = (unsigned int *)&(*a1)[2 * v13];
  v16 = *v15;
  v17 = *a2 + 8 * v12;
  do
  {
    v18 = v17 - *a2;
    v19 = (unsigned int *)v17;
    if ( *(_DWORD *)(v17 + 4) > v16 )
    {
      if ( v294 )
      {
        v65 = *(_QWORD *)v15;
        v66 = (char *)ptr;
        v67 = v291;
        LOBYTE(v268) = 1;
        v267 = v65;
        v68 = v291 + 1;
        v249 = v292;
        if ( ptr <= &v267 && &v267 < (__int64 *)((char *)ptr + 12 * v292) )
        {
          v269 = v267;
          v270 = v268;
          if ( v292 < v68 )
          {
            v66 = (char *)sub_78018((int)&ptr, nullptr, v291 + 1, 0xCu);
            v215 = ptr;
            v256 = v292;
            v216 = v291 - 1;
            v292 = v249;
            if ( (int)(v291 - 1) >= 0 )
            {
              v217 = (char *)ptr + 12;
              v218 = v66 + 12;
              do
              {
                v219 = *((_DWORD *)v217 - 3);
                v220 = *((_DWORD *)v217 - 2);
                v221 = *((_DWORD *)v217 - 1);
                --v216;
                v217 += 12;
                *((_DWORD *)v218 - 3) = v219;
                *((_DWORD *)v218 - 2) = v220;
                *((_DWORD *)v218 - 1) = v221;
                v218 += 12;
              }
              while ( v216 != -1 );
              v215 = ptr;
            }
            sub_77F70(v215);
            v67 = v291;
            ptr = v66;
            v292 = v256;
          }
          v173 = &v66[12 * v67];
          v174 = HIDWORD(v269);
          v175 = v270;
          *(_DWORD *)v173 = v269;
          *((_DWORD *)v173 + 1) = v174;
          *((_DWORD *)v173 + 2) = v175;
        }
        else
        {
          if ( v292 < v68 )
          {
            v66 = (char *)sub_78018((int)&ptr, nullptr, v291 + 1, 0xCu);
            v156 = ptr;
            v252 = v292;
            v157 = v291 - 1;
            v292 = v249;
            if ( (int)(v291 - 1) >= 0 )
            {
              v158 = (char *)ptr + 12;
              v159 = v66 + 12;
              do
              {
                v160 = *((_DWORD *)v158 - 3);
                v161 = *((_DWORD *)v158 - 2);
                v162 = *((_DWORD *)v158 - 1);
                --v157;
                v158 += 12;
                *((_DWORD *)v159 - 3) = v160;
                *((_DWORD *)v159 - 2) = v161;
                *((_DWORD *)v159 - 1) = v162;
                v159 += 12;
              }
              while ( v157 != -1 );
              v156 = ptr;
            }
            sub_77F70(v156);
            v67 = v291;
            ptr = v66;
            v292 = v252;
          }
          v69 = &v66[12 * v67];
          v70 = HIDWORD(v267);
          v71 = v268;
          *(_DWORD *)v69 = v267;
          *((_DWORD *)v69 + 1) = v70;
          *((_DWORD *)v69 + 2) = v71;
        }
        v72 = *a2;
        ++v291;
        v19 = (unsigned int *)(v72 + v18);
        v16 = v14[2 * v13];
      }
      v20 = *v19;
      v248 = v13 + 1;
      v250 = v15[1];
      if ( *v19 > v16 )
      {
        if ( v20 >= v15[1] )
        {
          v248 = v13;
          goto LABEL_24;
        }
        v243 = 1;
        v14[2 * v13] = v20;
      }
      v21 = v19[1];
      if ( v21 < v250 )
      {
        v15[1] = v21;
        v243 = 1;
      }
LABEL_24:
      if ( !v294 )
      {
LABEL_25:
        v22 = *a1;
        v23 = (int)&(*a1)[v245 / 4u];
        do
        {
          if ( *(_DWORD *)(v23 + 4) > *v19 )
            break;
          ++v13;
          v23 += 8;
        }
        while ( (int *)v13 != a1[1] );
        if ( (int)v13 <= v248 )
        {
          v77 = v15[1];
          ++v13;
          v3 = (unsigned int)a1[1];
          if ( v77 < v250 )
          {
            v78 = 8 * v13;
            v79 = (char *)&v22[2 * v13];
            if ( v3 + 1 > (unsigned int)a1[2] )
            {
              v214 = (char *)sub_78018((int)a1, v22, v3 + 1, 8u);
              v3 = (unsigned int)a1[1];
              v79 = &v214[v78];
              *a1 = (int *)v214;
            }
            memmove(v79 + 8, v79, 8 * v3 - v78);
            *(_DWORD *)v79 = v77;
            *((_DWORD *)v79 + 1) = v250;
            v80 = v294;
            v3 = (unsigned int)a1[1] + 1;
            a1[1] = (int *)v3;
            if ( v80 )
            {
              v81 = (char *)ptr;
              v82 = v291;
              v281 = v77;
              v83 = v291 + 1;
              LOBYTE(v283) = 0;
              v282 = v250;
              v84 = v292;
              if ( ptr <= &v281 && &v281 < (unsigned int *)((char *)ptr + 12 * v292) )
              {
                v284 = v281;
                v285 = v282;
                v286 = v283;
                if ( v292 < v83 )
                {
                  v234 = (char *)sub_78018((int)&ptr, nullptr, v291 + 1, 0xCu);
                  v235 = v292;
                  v81 = v234;
                  v292 = v84;
                  v236 = v291 - 1;
                  if ( (int)(v291 - 1) >= 0 )
                  {
                    v237 = (char *)ptr + 12;
                    v238 = v234 + 12;
                    do
                    {
                      v239 = *((_DWORD *)v237 - 3);
                      v240 = *((_DWORD *)v237 - 2);
                      v241 = *((_DWORD *)v237 - 1);
                      --v236;
                      v237 += 12;
                      *((_DWORD *)v238 - 3) = v239;
                      *((_DWORD *)v238 - 2) = v240;
                      *((_DWORD *)v238 - 1) = v241;
                      v238 += 12;
                    }
                    while ( v236 != -1 );
                  }
                  sub_77F70(ptr);
                  v82 = v291;
                  ptr = v81;
                  v292 = v235;
                }
                v231 = v285;
                v232 = v286;
                v233 = &v81[12 * v82];
                *(_DWORD *)v233 = v284;
                *((_DWORD *)v233 + 1) = v231;
                *((_DWORD *)v233 + 2) = v232;
              }
              else
              {
                if ( v292 < v83 )
                {
                  v222 = (char *)sub_78018((int)&ptr, nullptr, v291 + 1, 0xCu);
                  v223 = v292;
                  v81 = v222;
                  v292 = v84;
                  v224 = ptr;
                  v225 = v291 - 1;
                  if ( (int)(v291 - 1) >= 0 )
                  {
                    v226 = (char *)ptr + 12;
                    v227 = v81 + 12;
                    do
                    {
                      v228 = *((_DWORD *)v226 - 3);
                      v229 = *((_DWORD *)v226 - 2);
                      v230 = *((_DWORD *)v226 - 1);
                      --v225;
                      v226 += 12;
                      *((_DWORD *)v227 - 3) = v228;
                      *((_DWORD *)v227 - 2) = v229;
                      *((_DWORD *)v227 - 1) = v230;
                      v227 += 12;
                    }
                    while ( v225 != -1 );
                    v224 = ptr;
                  }
                  sub_77F70(v224);
                  v82 = v291;
                  ptr = v81;
                  v292 = v223;
                }
                v85 = v282;
                v86 = v283;
                v87 = &v81[12 * v82];
                *(_DWORD *)v87 = v281;
                *((_DWORD *)v87 + 1) = v85;
                *((_DWORD *)v87 + 2) = v86;
              }
              v3 = (unsigned int)a1[1];
              ++v291;
            }
          }
        }
        else
        {
          v251 = 8 * v13;
          v24 = &v22[2 * v13];
          v246 = 2 * v248;
          v25 = &v22[2 * v248];
          if ( v294 && v25 < v24 )
          {
            v26 = v291;
            do
            {
              v30 = (char *)ptr;
              v31 = *v25;
              v32 = v25[1];
              v33 = v26 + 1;
              LOBYTE(v277) = 1;
              v34 = v292;
              v275 = v31;
              v276 = v32;
              if ( ptr <= &v275 && &v275 < (int *)((char *)ptr + 12 * v292) )
              {
                v278 = v275;
                v279 = v276;
                v280 = v277;
                if ( v292 < v33 )
                {
                  v147 = (char *)sub_78018((int)&ptr, nullptr, v26 + 1, 0xCu);
                  v148 = v292;
                  v30 = v147;
                  v292 = v34;
                  v149 = ptr;
                  v150 = v291 - 1;
                  v255 = v148;
                  if ( (int)(v291 - 1) >= 0 )
                  {
                    v151 = (char *)ptr + 12;
                    v152 = v30 + 12;
                    do
                    {
                      v153 = *((_DWORD *)v151 - 3);
                      v154 = *((_DWORD *)v151 - 2);
                      v155 = *((_DWORD *)v151 - 1);
                      --v150;
                      v151 += 12;
                      *((_DWORD *)v152 - 3) = v153;
                      *((_DWORD *)v152 - 2) = v154;
                      *((_DWORD *)v152 - 1) = v155;
                      v152 += 12;
                    }
                    while ( v150 != -1 );
                    v149 = ptr;
                  }
                  sub_77F70(v149);
                  v26 = v291;
                  ptr = v30;
                  v292 = v255;
                }
                v110 = &v30[12 * v26];
                v111 = v279;
                v112 = v280;
                *(_DWORD *)v110 = v278;
                *((_DWORD *)v110 + 1) = v111;
                *((_DWORD *)v110 + 2) = v112;
              }
              else
              {
                if ( v292 < v33 )
                {
                  v35 = (char *)sub_78018((int)&ptr, nullptr, v26 + 1, 0xCu);
                  v36 = v292;
                  v30 = v35;
                  v292 = v34;
                  v37 = ptr;
                  v38 = v291 - 1;
                  v244 = v36;
                  if ( (int)(v291 - 1) >= 0 )
                  {
                    v39 = (char *)ptr + 12;
                    v40 = v30 + 12;
                    do
                    {
                      v41 = *((_DWORD *)v39 - 3);
                      v42 = *((_DWORD *)v39 - 2);
                      v43 = *((_DWORD *)v39 - 1);
                      --v38;
                      v39 += 12;
                      *((_DWORD *)v40 - 3) = v41;
                      *((_DWORD *)v40 - 2) = v42;
                      *((_DWORD *)v40 - 1) = v43;
                      v40 += 12;
                    }
                    while ( v38 != -1 );
                    v37 = ptr;
                  }
                  sub_77F70(v37);
                  v26 = v291;
                  ptr = v30;
                  v292 = v244;
                }
                v27 = v276;
                v28 = v277;
                v29 = &v30[12 * v26];
                *(_DWORD *)v29 = v275;
                *((_DWORD *)v29 + 1) = v27;
                *((_DWORD *)v29 + 2) = v28;
              }
              v25 += 2;
              v26 = ++v291;
            }
            while ( v24 > v25 );
            v25 = &(*a1)[v246];
            v24 = &(*a1)[v251 / 4u];
          }
          v76 = v25;
          v243 = 1;
          v13 = v248;
          memmove(v76, v24, 8 * (_DWORD)a1[1] - v251);
          v3 = (unsigned int)a1[1] - ((v251 - v246 * 4) >> 3);
          a1[1] = (int *)v3;
        }
        goto LABEL_16;
      }
      v102 = (int *)&v271;
      v103 = v15[1];
      v104 = v291;
      v254 = (char *)ptr;
      v271 = *v15;
      v272 = v103;
      v105 = v291 + 1;
      LOBYTE(v273) = 0;
      v106 = v292;
      if ( ptr <= &v271 && &v271 < (unsigned int *)((char *)ptr + 12 * v292) )
      {
        v102 = v274;
        v274[0] = v271;
        v274[1] = v272;
        v274[2] = v273;
        if ( v292 >= v105 )
          goto LABEL_102;
        v176 = (char *)sub_78018((int)&ptr, nullptr, v291 + 1, 0xCu);
        v177 = v292;
        v178 = v176;
        v254 = v176;
        v292 = v106;
        v179 = v291 - 1;
        v257 = v177;
        v167 = ptr;
        if ( (int)(v291 - 1) < 0 )
          goto LABEL_148;
        v180 = (char *)ptr + 12;
        v181 = v178 + 12;
        do
        {
          v182 = *((_DWORD *)v180 - 3);
          v183 = *((_DWORD *)v180 - 2);
          v184 = *((_DWORD *)v180 - 1);
          --v179;
          v180 += 12;
          *((_DWORD *)v181 - 3) = v182;
          *((_DWORD *)v181 - 2) = v183;
          *((_DWORD *)v181 - 1) = v184;
          v181 += 12;
        }
        while ( v179 != -1 );
      }
      else
      {
        if ( v292 >= v105 )
        {
LABEL_102:
          v107 = v102[1];
          v108 = v102[2];
          v109 = &v254[12 * v104];
          *(_DWORD *)v109 = *v102;
          *((_DWORD *)v109 + 1) = v107;
          *((_DWORD *)v109 + 2) = v108;
          ++v291;
          goto LABEL_25;
        }
        v163 = (char *)sub_78018((int)&ptr, nullptr, v291 + 1, 0xCu);
        v164 = v292;
        v165 = v163;
        v292 = v106;
        v254 = v163;
        v166 = v291 - 1;
        v257 = v164;
        v167 = ptr;
        if ( (int)(v291 - 1) < 0 )
        {
LABEL_148:
          sub_77F70(v167);
          v104 = v291;
          ptr = v254;
          v292 = v257;
          goto LABEL_102;
        }
        v168 = (char *)ptr + 12;
        v169 = v165 + 12;
        do
        {
          v170 = *((_DWORD *)v168 - 3);
          v171 = *((_DWORD *)v168 - 2);
          v172 = *((_DWORD *)v168 - 1);
          --v166;
          v168 += 12;
          *((_DWORD *)v169 - 3) = v170;
          *((_DWORD *)v169 - 2) = v171;
          *((_DWORD *)v169 - 1) = v172;
          v169 += 12;
        }
        while ( v166 != -1 );
      }
      v167 = ptr;
      goto LABEL_148;
    }
    ++v12;
    v17 += 8;
  }
  while ( v12 != a2[1] );
  v243 = v294;
  v45 = 8 * v3;
  if ( !v294 )
  {
    a1[3] = nullptr;
    a1[1] = (int *)(v3 - ((v45 - v245) >> 3));
    goto LABEL_62;
  }
  v46 = (unsigned int)&v14[v45 / 4u];
  if ( (unsigned int)v15 >= v46 )
  {
    a1[3] = nullptr;
    a1[1] = (int *)(v3 - ((v45 - v245) >> 3));
    goto LABEL_84;
  }
  v47 = v291;
  do
  {
    v51 = (char *)ptr;
    v52 = v47 + 1;
    v53 = *v15;
    v54 = v15[1];
    v55 = v292;
    LOBYTE(v260) = 1;
    v258 = v53;
    v259 = v54;
    if ( ptr <= &v258 && &v258 < (unsigned int *)((char *)ptr + 12 * v292) )
    {
      v261 = v258;
      v262 = v259;
      v263 = v260;
      if ( v292 < v52 )
      {
        v185 = (char *)sub_78018((int)&ptr, nullptr, v47 + 1, 0xCu);
        v186 = v292;
        v51 = v185;
        v292 = v55;
        v187 = ptr;
        v188 = v291 - 1;
        v253 = v186;
        if ( (int)(v291 - 1) >= 0 )
        {
          v189 = (char *)ptr + 12;
          v190 = v51 + 12;
          do
          {
            v191 = *((_DWORD *)v189 - 3);
            v192 = *((_DWORD *)v189 - 2);
            v193 = *((_DWORD *)v189 - 1);
            --v188;
            v189 += 12;
            *((_DWORD *)v190 - 3) = v191;
            *((_DWORD *)v190 - 2) = v192;
            *((_DWORD *)v190 - 1) = v193;
            v190 += 12;
          }
          while ( v188 != -1 );
          v187 = ptr;
        }
        sub_77F70(v187);
        v47 = v291;
        ptr = v51;
        v292 = v253;
      }
      v73 = v262;
      v74 = v263;
      v75 = &v51[12 * v47];
      *(_DWORD *)v75 = v261;
      *((_DWORD *)v75 + 1) = v73;
      *((_DWORD *)v75 + 2) = v74;
    }
    else
    {
      if ( v292 < v52 )
      {
        v56 = (char *)sub_78018((int)&ptr, nullptr, v47 + 1, 0xCu);
        v57 = v292;
        v51 = v56;
        v292 = v55;
        v58 = ptr;
        v59 = v291 - 1;
        if ( (int)(v291 - 1) >= 0 )
        {
          v60 = (char *)ptr + 12;
          v61 = v51 + 12;
          do
          {
            v62 = *((_DWORD *)v60 - 3);
            v63 = *((_DWORD *)v60 - 2);
            v64 = *((_DWORD *)v60 - 1);
            --v59;
            v60 += 12;
            *((_DWORD *)v61 - 3) = v62;
            *((_DWORD *)v61 - 2) = v63;
            *((_DWORD *)v61 - 1) = v64;
            v61 += 12;
          }
          while ( v59 != -1 );
          v58 = ptr;
        }
        sub_77F70(v58);
        v47 = v291;
        ptr = v51;
        v292 = v57;
      }
      v48 = v259;
      v49 = v260;
      v50 = &v51[12 * v47];
      *(_DWORD *)v50 = v258;
      *((_DWORD *)v50 + 1) = v48;
      *((_DWORD *)v50 + 2) = v49;
    }
    v15 += 2;
    v47 = ++v291;
  }
  while ( v46 > (unsigned int)v15 );
  v88 = a1[1];
  a1[3] = nullptr;
  v89 = v294;
  a1[1] = (int *)((char *)v88 - ((8 * (int)v88 - v245) >> 3));
  if ( !v89 )
  {
LABEL_62:
    v243 = 1;
    goto LABEL_63;
  }
LABEL_84:
  v90 = v291;
  if ( !v291 )
    goto LABEL_62;
  v264 = nullptr;
  v265 = 0;
  v266 = 0;
  v91 = 11 * v291 + 5;
  if ( 11 * v291 == -5 )
  {
    v92 = (_BYTE *)(11 * v291 + 5);
  }
  else
  {
    v264 = sub_78018((int)&v264, nullptr, 11 * v291 + 5, 1u);
    memset((char *)v264 + v265, 0, v91 - v265);
    v265 = v91;
    v92 = v264;
    v90 = v291;
  }
  v93 = (unsigned int)&v92[v91];
  v94 = sub_76118(v92, v93, v90);
  v95 = (char *)ptr + 12 * v291;
  if ( ptr != v95 )
  {
    v96 = (char *)ptr + 12;
    v97 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v94 < v93 )
        *v94++ = *(v96 - 4);
      v98 = sub_76118(v94, v93, *((_DWORD *)v96 - 3) - v97);
      v94 = sub_76118(v98, v93, *((_DWORD *)v96 - 2) - *((_DWORD *)v96 - 3));
      v97 = *((_DWORD *)v96 - 2);
      if ( v95 == v96 )
        break;
      v96 += 12;
    }
  }
  v99 = (char *)v264;
  v100 = v265;
  v101 = v94 - (_BYTE *)v264;
  if ( v94 - (_BYTE *)v264 > v265 )
  {
    if ( v101 > v266 )
    {
      v99 = (char *)sub_78018((int)&v264, v264, v94 - (_BYTE *)v264, 1u);
      v100 = v265;
      v264 = v99;
    }
    memset(&v99[v100], 0, v101 - v100);
    v265 = v101;
  }
  else if ( v94 - (_BYTE *)v264 < v265 )
  {
    v265 = v94 - (_BYTE *)v264;
  }
  sub_6AED8();
  v291 = 0;
  if ( v264 )
  {
    v265 = 0;
    sub_77F70(v264);
  }
LABEL_63:
  if ( ptr )
  {
    v291 = 0;
    sub_77F70(ptr);
  }
  return v243;
}
