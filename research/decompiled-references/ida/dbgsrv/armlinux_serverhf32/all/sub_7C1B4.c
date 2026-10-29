/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C1B4
// Address: 0x0007C1B4

//----- (0007C1B4) --------------------------------------------------------
int __fastcall sub_7C1B4(void **a1, unsigned int *a2)
{
  int v4; // r4
  void *v6; // r3
  int v7; // r0
  void *v8; // r2
  unsigned int *v9; // r6
  unsigned int v10; // r3
  unsigned int v11; // r8
  unsigned int *v12; // r1
  int v13; // r9
  unsigned int v14; // r12
  int v15; // r5
  unsigned int v16; // r0
  unsigned int v17; // r1
  int *v18; // r8
  char *v19; // r6
  unsigned int v20; // r3
  unsigned int v21; // r12
  unsigned int v22; // r10
  int v23; // r1
  int v24; // r2
  char *v25; // r6
  unsigned int v26; // r5
  int i; // r6
  unsigned int v28; // r1
  unsigned int *v29; // r3
  char *v30; // r8
  unsigned int v31; // lr
  unsigned int v32; // r0
  unsigned int v33; // r1
  unsigned int v34; // r12
  unsigned int v35; // r10
  unsigned int v36; // r1
  int v37; // r2
  char *v38; // r8
  char *v39; // r10
  int *v40; // r8
  unsigned int v41; // r0
  unsigned int v42; // r1
  unsigned int v43; // r3
  unsigned int v44; // r12
  unsigned int v45; // r9
  int v46; // r1
  int v47; // r2
  char *v48; // r10
  int *v49; // r8
  char *v50; // r4
  unsigned int v51; // r3
  int *v52; // r2
  unsigned int v53; // r6
  int v54; // r0
  int v55; // r1
  unsigned int v56; // lr
  int v57; // r1
  int v58; // r2
  char *v59; // r4
  int v60; // r5
  unsigned int v61; // r2
  int v62; // r6
  _BYTE *v63; // r0
  unsigned int v64; // r6
  _BYTE *v65; // r0
  char *v66; // r7
  char *v67; // r5
  int v68; // r2
  _BYTE *v69; // r0
  char *v70; // r1
  unsigned int v71; // r2
  unsigned int v72; // r5
  char *v73; // r0
  unsigned int v74; // r2
  void *v75; // r0
  unsigned int v76; // r12
  char *v77; // r3
  char *v78; // lr
  int v79; // r0
  int v80; // r1
  int v81; // r2
  char *v82; // r8
  unsigned int v83; // r1
  int v84; // r2
  char *v85; // r0
  unsigned int v86; // r2
  void *v87; // r0
  unsigned int v88; // r12
  char *v89; // r3
  char *v90; // lr
  int v91; // r0
  int v92; // r1
  int v93; // r2
  char *v94; // r10
  unsigned int v95; // r0
  unsigned int v96; // r1
  int *v97; // r6
  unsigned int v98; // r3
  unsigned int v99; // r12
  int v100; // r1
  int v101; // r2
  char *v102; // r3
  unsigned int v103; // lr
  int *v104; // r10
  unsigned int v105; // r0
  unsigned int v106; // r1
  unsigned int v107; // r12
  int v108; // r1
  int v109; // r2
  char *v110; // r3
  char *v111; // r8
  int *v112; // r9
  unsigned int v113; // r0
  unsigned int v114; // r1
  unsigned int v115; // r3
  unsigned int v116; // r12
  unsigned int v117; // r10
  int v118; // r1
  int v119; // r2
  char *v120; // r8
  char *v121; // r1
  void *v122; // r0
  unsigned int v123; // r12
  char *v124; // r3
  char *v125; // lr
  int v126; // r0
  int v127; // r1
  int v128; // r2
  void *v129; // r0
  unsigned int v130; // r12
  char *v131; // r3
  char *v132; // lr
  int v133; // r0
  int v134; // r1
  int v135; // r2
  unsigned int v136; // lr
  char *v137; // r12
  char *v138; // r3
  int v139; // r0
  int v140; // r1
  int v141; // r2
  char *v142; // r1
  unsigned int v143; // lr
  char *v144; // r12
  char *v145; // r3
  int v146; // r0
  int v147; // r1
  int v148; // r2
  char *v149; // r0
  unsigned int v150; // r9
  void *v151; // r0
  unsigned int v152; // lr
  char *v153; // r6
  char *v154; // r3
  int v155; // r0
  int v156; // r1
  int v157; // r2
  char *v158; // r0
  unsigned int v159; // r2
  void *v160; // r0
  unsigned int v161; // lr
  char *v162; // r12
  char *v163; // r3
  int v164; // r0
  int v165; // r1
  int v166; // r2
  char *v167; // r0
  unsigned int v168; // r2
  void *v169; // r0
  unsigned int v170; // lr
  char *v171; // r12
  char *v172; // r3
  int v173; // r0
  int v174; // r1
  int v175; // r2
  char *v176; // r0
  unsigned int v177; // r9
  void *v178; // r0
  unsigned int v179; // lr
  char *v180; // r12
  char *v181; // r3
  int v182; // r0
  int v183; // r1
  int v184; // r2
  char *v185; // r0
  unsigned int v186; // r12
  char *v187; // r6
  char *v188; // r3
  int v189; // r0
  int v190; // r1
  int v191; // r2
  char *v192; // r0
  unsigned int v193; // r2
  unsigned int v194; // lr
  char *v195; // r12
  char *v196; // r3
  int v197; // r0
  int v198; // r1
  int v199; // r2
  char *v200; // r0
  unsigned int v201; // r2
  unsigned int v202; // lr
  char *v203; // r12
  char *v204; // r3
  int v205; // r0
  int v206; // r1
  int v207; // r2
  char *v208; // r0
  unsigned int v209; // lr
  char *v210; // r12
  char *v211; // r3
  int v212; // r0
  int v213; // r1
  int v214; // r2
  unsigned int v215; // [sp+4h] [bp-E8h]
  unsigned int v216; // [sp+4h] [bp-E8h]
  char *v217; // [sp+4h] [bp-E8h]
  unsigned int v218; // [sp+4h] [bp-E8h]
  unsigned int v219; // [sp+8h] [bp-E4h]
  unsigned int v220; // [sp+8h] [bp-E4h]
  unsigned int v221; // [sp+8h] [bp-E4h]
  int v222; // [sp+Ch] [bp-E0h]
  unsigned int v223; // [sp+Ch] [bp-E0h]
  unsigned int v224; // [sp+10h] [bp-DCh]
  unsigned int v225; // [sp+14h] [bp-D8h]
  unsigned int v226; // [sp+1Ch] [bp-D0h] BYREF
  unsigned int v227; // [sp+20h] [bp-CCh]
  int v228; // [sp+24h] [bp-C8h]
  _DWORD v229[3]; // [sp+28h] [bp-C4h] BYREF
  unsigned int v230; // [sp+34h] [bp-B8h] BYREF
  unsigned int v231; // [sp+38h] [bp-B4h]
  int v232; // [sp+3Ch] [bp-B0h]
  _DWORD v233[3]; // [sp+40h] [bp-ACh] BYREF
  unsigned int v234; // [sp+4Ch] [bp-A0h] BYREF
  unsigned int v235; // [sp+50h] [bp-9Ch]
  int v236; // [sp+54h] [bp-98h]
  _DWORD v237[3]; // [sp+58h] [bp-94h] BYREF
  unsigned int v238; // [sp+64h] [bp-88h] BYREF
  unsigned int v239; // [sp+68h] [bp-84h]
  int v240; // [sp+6Ch] [bp-80h]
  _DWORD v241[3]; // [sp+70h] [bp-7Ch] BYREF
  unsigned int v242; // [sp+7Ch] [bp-70h] BYREF
  unsigned int v243; // [sp+80h] [bp-6Ch]
  int v244; // [sp+84h] [bp-68h]
  _DWORD v245[3]; // [sp+88h] [bp-64h] BYREF
  int v246; // [sp+94h] [bp-58h] BYREF
  int v247; // [sp+98h] [bp-54h]
  int v248; // [sp+9Ch] [bp-50h]
  _DWORD v249[3]; // [sp+A0h] [bp-4Ch] BYREF
  unsigned int v250; // [sp+ACh] [bp-40h] BYREF
  unsigned int v251; // [sp+B0h] [bp-3Ch]
  int v252; // [sp+B4h] [bp-38h]
  unsigned int v253; // [sp+B8h] [bp-34h]
  unsigned int v254; // [sp+BCh] [bp-30h]
  int v255; // [sp+C0h] [bp-2Ch]
  void *v256; // [sp+C4h] [bp-28h] BYREF
  unsigned int v257; // [sp+C8h] [bp-24h]
  unsigned int v258; // [sp+CCh] [bp-20h]
  void *ptr; // [sp+D0h] [bp-1Ch] BYREF
  unsigned int v260; // [sp+D4h] [bp-18h]
  unsigned int v261; // [sp+D8h] [bp-14h]
  void *v262; // [sp+DCh] [bp-10h]
  unsigned __int8 v263; // [sp+E0h] [bp-Ch]

  if ( a2[1] <= *a2 )
    return 0;
  v6 = a1[4];
  v7 = 0;
  ptr = nullptr;
  v260 = 0;
  v261 = 0;
  v262 = v6;
  if ( v6 != (void *)-1 )
    v7 = sub_6AD68();
  v8 = a1[1];
  v263 = v7;
  if ( !v8 )
    goto LABEL_12;
  v9 = (unsigned int *)*a1;
  v10 = *a2;
  v11 = *((_DWORD *)*a1 + 1);
  if ( *a2 < v11 )
  {
    v13 = 0;
LABEL_11:
    v14 = a2[1];
    if ( *v9 >= v14 )
      goto LABEL_12;
    v15 = v13;
    if ( *v9 >= v10 )
    {
      if ( v14 >= v11 )
      {
        v15 = v13 - 1;
        goto LABEL_24;
      }
      if ( !v7 )
      {
LABEL_19:
        *v9 = v14;
        if ( v263 )
        {
          v16 = *v9;
          v17 = v9[1];
          v18 = (int *)&v230;
          v19 = (char *)ptr;
          v20 = v260;
          v230 = v16;
          v231 = v17;
          LOBYTE(v232) = 0;
          v21 = v260 + 1;
          v22 = v261;
          if ( ptr <= &v230 && &v230 < (unsigned int *)((char *)ptr + 12 * v261) )
          {
            v18 = v233;
            v233[0] = v230;
            v233[1] = v231;
            v233[2] = v232;
            if ( v261 >= v21 )
              goto LABEL_23;
            v208 = (char *)sub_77EB0((int)&ptr, nullptr, v260 + 1, 0xCu);
            v177 = v261;
            v19 = v208;
            v261 = v22;
            v178 = ptr;
            v209 = v260 - 1;
            if ( (int)(v260 - 1) < 0 )
              goto LABEL_138;
            v210 = (char *)ptr + 12;
            v211 = v19 + 12;
            do
            {
              v212 = *((_DWORD *)v210 - 3);
              v213 = *((_DWORD *)v210 - 2);
              v214 = *((_DWORD *)v210 - 1);
              --v209;
              v210 += 12;
              *((_DWORD *)v211 - 3) = v212;
              *((_DWORD *)v211 - 2) = v213;
              *((_DWORD *)v211 - 1) = v214;
              v211 += 12;
            }
            while ( v209 != -1 );
          }
          else
          {
            if ( v261 >= v21 )
            {
LABEL_23:
              v23 = v18[1];
              v24 = v18[2];
              v25 = &v19[12 * v20];
              *(_DWORD *)v25 = *v18;
              *((_DWORD *)v25 + 1) = v23;
              *((_DWORD *)v25 + 2) = v24;
              v8 = a1[1];
              ++v260;
              goto LABEL_24;
            }
            v176 = (char *)sub_77EB0((int)&ptr, nullptr, v260 + 1, 0xCu);
            v177 = v261;
            v19 = v176;
            v261 = v22;
            v178 = ptr;
            v179 = v260 - 1;
            if ( (int)(v260 - 1) < 0 )
            {
LABEL_138:
              sub_77E08(v178);
              v20 = v260;
              ptr = v19;
              v261 = v177;
              goto LABEL_23;
            }
            v180 = (char *)ptr + 12;
            v181 = v19 + 12;
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
          v178 = ptr;
          goto LABEL_138;
        }
        goto LABEL_74;
      }
      v111 = (char *)ptr;
      v112 = (int *)&v226;
      v113 = *v9;
      v114 = v9[1];
      v115 = v260;
      LOBYTE(v228) = 1;
      v226 = v113;
      v227 = v114;
      v116 = v260 + 1;
      v117 = v261;
      if ( ptr <= &v226 && &v226 < (unsigned int *)((char *)ptr + 12 * v261) )
      {
        v112 = v229;
        v229[0] = v226;
        v229[1] = v227;
        v229[2] = v228;
        if ( v261 >= v116 )
          goto LABEL_95;
        v200 = (char *)sub_77EB0((int)&ptr, nullptr, v260 + 1, 0xCu);
        v201 = v261;
        v111 = v200;
        v261 = v117;
        v169 = ptr;
        v202 = v260 - 1;
        v218 = v201;
        if ( (int)(v260 - 1) < 0 )
          goto LABEL_133;
        v203 = (char *)ptr + 12;
        v204 = v111 + 12;
        do
        {
          v205 = *((_DWORD *)v203 - 3);
          v206 = *((_DWORD *)v203 - 2);
          v207 = *((_DWORD *)v203 - 1);
          --v202;
          v203 += 12;
          *((_DWORD *)v204 - 3) = v205;
          *((_DWORD *)v204 - 2) = v206;
          *((_DWORD *)v204 - 1) = v207;
          v204 += 12;
        }
        while ( v202 != -1 );
      }
      else
      {
        if ( v261 >= v116 )
        {
LABEL_95:
          v118 = v112[1];
          v119 = v112[2];
          v120 = &v111[12 * v115];
          *(_DWORD *)v120 = *v112;
          *((_DWORD *)v120 + 1) = v118;
          *((_DWORD *)v120 + 2) = v119;
          v14 = a2[1];
          ++v260;
          goto LABEL_19;
        }
        v167 = (char *)sub_77EB0((int)&ptr, nullptr, v260 + 1, 0xCu);
        v168 = v261;
        v111 = v167;
        v261 = v117;
        v169 = ptr;
        v170 = v260 - 1;
        v218 = v168;
        if ( (int)(v260 - 1) < 0 )
        {
LABEL_133:
          sub_77E08(v169);
          v115 = v260;
          ptr = v111;
          v261 = v218;
          goto LABEL_95;
        }
        v171 = (char *)ptr + 12;
        v172 = v111 + 12;
        do
        {
          v173 = *((_DWORD *)v171 - 3);
          v174 = *((_DWORD *)v171 - 2);
          v175 = *((_DWORD *)v171 - 1);
          --v170;
          v171 += 12;
          *((_DWORD *)v172 - 3) = v173;
          *((_DWORD *)v172 - 2) = v174;
          *((_DWORD *)v172 - 1) = v175;
          v172 += 12;
        }
        while ( v170 != -1 );
      }
      v169 = ptr;
      goto LABEL_133;
    }
    if ( !v7 )
    {
LABEL_72:
      v9[1] = v10;
      if ( !v263 )
        goto LABEL_73;
      v94 = (char *)ptr;
      v95 = *v9;
      v96 = v9[1];
      v97 = (int *)&v238;
      v98 = v260;
      v238 = v95;
      v239 = v96;
      v99 = v260 + 1;
      LOBYTE(v240) = 0;
      v216 = v261;
      if ( ptr <= &v238 && &v238 < (unsigned int *)((char *)ptr + 12 * v261) )
      {
        v97 = v241;
        v241[0] = v238;
        v241[1] = v239;
        v241[2] = v240;
        if ( v261 >= v99 )
          goto LABEL_87;
        v94 = (char *)sub_77EB0((int)&ptr, nullptr, v260 + 1, 0xCu);
        v129 = ptr;
        v220 = v261;
        v136 = v260 - 1;
        v261 = v216;
        if ( (int)(v260 - 1) < 0 )
          goto LABEL_108;
        v137 = (char *)ptr + 12;
        v138 = v94 + 12;
        do
        {
          v139 = *((_DWORD *)v137 - 3);
          v140 = *((_DWORD *)v137 - 2);
          v141 = *((_DWORD *)v137 - 1);
          --v136;
          v137 += 12;
          *((_DWORD *)v138 - 3) = v139;
          *((_DWORD *)v138 - 2) = v140;
          *((_DWORD *)v138 - 1) = v141;
          v138 += 12;
        }
        while ( v136 != -1 );
      }
      else
      {
        if ( v261 >= v99 )
        {
LABEL_87:
          v100 = v97[1];
          v101 = v97[2];
          v102 = &v94[12 * v98];
          *(_DWORD *)v102 = *v97;
          *((_DWORD *)v102 + 1) = v100;
          *((_DWORD *)v102 + 2) = v101;
          ++v260;
LABEL_73:
          if ( a2[1] < v11 )
          {
            v256 = (void *)a2[1];
            v257 = v11;
            sub_7B638(a1, (unsigned int *)&v256, (int)&ptr);
            v8 = a1[1];
            v15 = v13 + 1;
LABEL_24:
            v26 = v15 + 1;
            v215 = v26;
            v222 = 8 * v26;
            for ( i = 8 * v26; v26 < (unsigned int)v8; i += 8 )
            {
              v28 = a2[1];
              v29 = (unsigned int *)((char *)*a1 + i);
              if ( v28 <= *v29 )
                break;
              if ( v28 < v29[1] )
              {
                if ( v263 )
                {
                  v39 = (char *)ptr;
                  v40 = (int *)&v242;
                  v41 = *v29;
                  v42 = v29[1];
                  v43 = v260;
                  LOBYTE(v244) = 1;
                  v242 = v41;
                  v243 = v42;
                  v44 = v260 + 1;
                  v45 = v261;
                  if ( ptr > &v242 || &v242 >= (unsigned int *)((char *)ptr + 12 * v261) )
                  {
                    if ( v261 >= v44 )
                      goto LABEL_42;
                    v158 = (char *)sub_77EB0((int)&ptr, nullptr, v260 + 1, 0xCu);
                    v159 = v261;
                    v39 = v158;
                    v261 = v45;
                    v160 = ptr;
                    v161 = v260 - 1;
                    v221 = v159;
                    if ( (int)(v260 - 1) >= 0 )
                    {
                      v162 = (char *)ptr + 12;
                      v163 = v39 + 12;
                      do
                      {
                        v164 = *((_DWORD *)v162 - 3);
                        v165 = *((_DWORD *)v162 - 2);
                        v166 = *((_DWORD *)v162 - 1);
                        --v161;
                        v162 += 12;
                        *((_DWORD *)v163 - 3) = v164;
                        *((_DWORD *)v163 - 2) = v165;
                        *((_DWORD *)v163 - 1) = v166;
                        v163 += 12;
                      }
                      while ( v161 != -1 );
                      goto LABEL_127;
                    }
                    goto LABEL_128;
                  }
                  v40 = v245;
                  v245[0] = v242;
                  v245[1] = v243;
                  v245[2] = v244;
                  if ( v261 < v44 )
                  {
                    v192 = (char *)sub_77EB0((int)&ptr, nullptr, v260 + 1, 0xCu);
                    v193 = v261;
                    v39 = v192;
                    v261 = v45;
                    v194 = v260 - 1;
                    v221 = v193;
                    if ( (int)(v260 - 1) >= 0 )
                    {
                      v195 = v192 + 12;
                      v196 = (char *)ptr + 12;
                      do
                      {
                        v197 = *((_DWORD *)v196 - 3);
                        v198 = *((_DWORD *)v196 - 2);
                        v199 = *((_DWORD *)v196 - 1);
                        --v194;
                        v196 += 12;
                        *((_DWORD *)v195 - 3) = v197;
                        *((_DWORD *)v195 - 2) = v198;
                        *((_DWORD *)v195 - 1) = v199;
                        v195 += 12;
                      }
                      while ( v194 != -1 );
                    }
LABEL_127:
                    v160 = ptr;
LABEL_128:
                    sub_77E08(v160);
                    v43 = v260;
                    ptr = v39;
                    v261 = v221;
                  }
LABEL_42:
                  v46 = v40[1];
                  v47 = v40[2];
                  v48 = &v39[12 * v43];
                  *(_DWORD *)v48 = *v40;
                  *((_DWORD *)v48 + 1) = v46;
                  *((_DWORD *)v48 + 2) = v47;
                  v28 = a2[1];
                  v29 = (unsigned int *)((char *)*a1 + i);
                  ++v260;
                }
                *v29 = v28;
                if ( !v263 )
                  break;
                v49 = &v246;
                v50 = (char *)ptr;
                v51 = v260;
                v52 = (int *)((char *)*a1 + i);
                v53 = v261;
                v54 = *v52;
                v55 = v52[1];
                v56 = v260 + 1;
                LOBYTE(v248) = 0;
                v246 = v54;
                v247 = v55;
                if ( ptr <= &v246 && &v246 < (int *)((char *)ptr + 12 * v261) )
                {
                  v49 = v249;
                  v249[0] = v246;
                  v249[1] = v247;
                  v249[2] = v248;
                  if ( v261 >= v56 )
                    goto LABEL_47;
                  v185 = (char *)sub_77EB0((int)&ptr, nullptr, v260 + 1, 0xCu);
                  v150 = v261;
                  v50 = v185;
                  v261 = v53;
                  v186 = v260 - 1;
                  if ( (int)(v260 - 1) >= 0 )
                  {
                    v187 = v185 + 12;
                    v188 = (char *)ptr + 12;
                    do
                    {
                      v189 = *((_DWORD *)v188 - 3);
                      v190 = *((_DWORD *)v188 - 2);
                      v191 = *((_DWORD *)v188 - 1);
                      --v186;
                      v188 += 12;
                      *((_DWORD *)v187 - 3) = v189;
                      *((_DWORD *)v187 - 2) = v190;
                      *((_DWORD *)v187 - 1) = v191;
                      v187 += 12;
                    }
                    while ( v186 != -1 );
                  }
LABEL_122:
                  v151 = ptr;
                }
                else
                {
                  if ( v261 >= v56 )
                  {
LABEL_47:
                    v57 = v49[1];
                    v58 = v49[2];
                    v59 = &v50[12 * v51];
                    *(_DWORD *)v59 = *v49;
                    *((_DWORD *)v59 + 1) = v57;
                    *((_DWORD *)v59 + 2) = v58;
                    ++v260;
                    break;
                  }
                  v149 = (char *)sub_77EB0((int)&ptr, nullptr, v260 + 1, 0xCu);
                  v150 = v261;
                  v50 = v149;
                  v261 = v53;
                  v151 = ptr;
                  v152 = v260 - 1;
                  if ( (int)(v260 - 1) >= 0 )
                  {
                    v153 = (char *)ptr + 12;
                    v154 = v50 + 12;
                    do
                    {
                      v155 = *((_DWORD *)v153 - 3);
                      v156 = *((_DWORD *)v153 - 2);
                      v157 = *((_DWORD *)v153 - 1);
                      --v152;
                      v153 += 12;
                      *((_DWORD *)v154 - 3) = v155;
                      *((_DWORD *)v154 - 2) = v156;
                      *((_DWORD *)v154 - 1) = v157;
                      v154 += 12;
                    }
                    while ( v152 != -1 );
                    goto LABEL_122;
                  }
                }
                sub_77E08(v151);
                v51 = v260;
                ptr = v50;
                v261 = v150;
                goto LABEL_47;
              }
              if ( v263 )
              {
                v30 = (char *)ptr;
                v31 = v260;
                v32 = *v29;
                v33 = v29[1];
                LOBYTE(v252) = 1;
                v34 = v260 + 1;
                v250 = v32;
                v251 = v33;
                v35 = v261;
                if ( ptr <= &v250 && &v250 < (unsigned int *)((char *)ptr + 12 * v261) )
                {
                  v253 = v250;
                  v254 = v251;
                  v255 = v252;
                  if ( v261 < v34 )
                  {
                    v85 = (char *)sub_77EB0((int)&ptr, nullptr, v34, 0xCu);
                    v86 = v261;
                    v30 = v85;
                    v261 = v35;
                    v87 = ptr;
                    v88 = v260 - 1;
                    v225 = v86;
                    if ( (int)(v260 - 1) >= 0 )
                    {
                      v89 = (char *)ptr + 12;
                      v90 = v30 + 12;
                      do
                      {
                        v91 = *((_DWORD *)v89 - 3);
                        v92 = *((_DWORD *)v89 - 2);
                        v93 = *((_DWORD *)v89 - 1);
                        --v88;
                        v89 += 12;
                        *((_DWORD *)v90 - 3) = v91;
                        *((_DWORD *)v90 - 2) = v92;
                        *((_DWORD *)v90 - 1) = v93;
                        v90 += 12;
                      }
                      while ( v88 != -1 );
                      v87 = ptr;
                    }
                    sub_77E08(v87);
                    v31 = v260;
                    ptr = v30;
                    v261 = v225;
                  }
                  v82 = &v30[12 * v31];
                  v83 = v254;
                  v84 = v255;
                  *(_DWORD *)v82 = v253;
                  *((_DWORD *)v82 + 1) = v83;
                  *((_DWORD *)v82 + 2) = v84;
                }
                else
                {
                  if ( v261 < v34 )
                  {
                    v73 = (char *)sub_77EB0((int)&ptr, nullptr, v34, 0xCu);
                    v74 = v261;
                    v30 = v73;
                    v261 = v35;
                    v75 = ptr;
                    v76 = v260 - 1;
                    v224 = v74;
                    if ( (int)(v260 - 1) >= 0 )
                    {
                      v77 = (char *)ptr + 12;
                      v78 = v30 + 12;
                      do
                      {
                        v79 = *((_DWORD *)v77 - 3);
                        v80 = *((_DWORD *)v77 - 2);
                        v81 = *((_DWORD *)v77 - 1);
                        --v76;
                        v77 += 12;
                        *((_DWORD *)v78 - 3) = v79;
                        *((_DWORD *)v78 - 2) = v80;
                        *((_DWORD *)v78 - 1) = v81;
                        v78 += 12;
                      }
                      while ( v76 != -1 );
                      v75 = ptr;
                    }
                    sub_77E08(v75);
                    v31 = v260;
                    ptr = v30;
                    v261 = v224;
                  }
                  v36 = v251;
                  v37 = v252;
                  v38 = &v30[12 * v31];
                  *(_DWORD *)v38 = v250;
                  *((_DWORD *)v38 + 1) = v36;
                  *((_DWORD *)v38 + 2) = v37;
                }
                v8 = a1[1];
                ++v260;
              }
              ++v26;
            }
            if ( v26 != v215 )
            {
              v60 = 8 * v26;
              memmove((char *)*a1 + v222, (char *)*a1 + v60, 8 * (_DWORD)a1[1] - v60);
              a1[1] = (char *)a1[1] - ((v60 - v222) >> 3);
            }
            v4 = v263;
            a1[3] = nullptr;
            if ( v4 )
            {
              v61 = v260;
              if ( v260 )
              {
                v256 = nullptr;
                v257 = 0;
                v258 = 0;
                v62 = 11 * v260 + 5;
                if ( 11 * v260 == -5 )
                {
                  v63 = (_BYTE *)(11 * v260 + 5);
                }
                else
                {
                  v256 = sub_77EB0((int)&v256, nullptr, 11 * v260 + 5, 1u);
                  memset((char *)v256 + v257, 0, v62 - v257);
                  v257 = v62;
                  v63 = v256;
                  v61 = v260;
                }
                v64 = (unsigned int)&v63[v62];
                v65 = sub_75FB0(v63, v64, v61);
                v66 = (char *)ptr + 12 * v260;
                if ( ptr != v66 )
                {
                  v67 = (char *)ptr + 12;
                  v68 = 0;
                  while ( 1 )
                  {
                    if ( v64 > (unsigned int)v65 )
                      *v65++ = *(v67 - 4);
                    v69 = sub_75FB0(v65, v64, *((_DWORD *)v67 - 3) - v68);
                    v65 = sub_75FB0(v69, v64, *((_DWORD *)v67 - 2) - *((_DWORD *)v67 - 3));
                    v68 = *((_DWORD *)v67 - 2);
                    if ( v66 == v67 )
                      break;
                    v67 += 12;
                  }
                }
                v70 = (char *)v256;
                v71 = v257;
                v72 = v65 - (_BYTE *)v256;
                if ( v65 - (_BYTE *)v256 > v257 )
                {
                  if ( v72 > v258 )
                  {
                    v70 = (char *)sub_77EB0((int)&v256, v256, v65 - (_BYTE *)v256, 1u);
                    v71 = v257;
                    v256 = v70;
                  }
                  memset(&v70[v71], 0, v72 - v71);
                  v257 = v72;
                }
                else if ( v65 - (_BYTE *)v256 < v257 )
                {
                  v257 = v65 - (_BYTE *)v256;
                }
                sub_6AD60();
                v260 = 0;
                if ( v256 )
                {
                  v257 = 0;
                  sub_77E08(v256);
                }
              }
            }
            else
            {
              v4 = 1;
            }
            goto LABEL_13;
          }
LABEL_74:
          v8 = a1[1];
          goto LABEL_24;
        }
        v94 = (char *)sub_77EB0((int)&ptr, nullptr, v260 + 1, 0xCu);
        v129 = ptr;
        v220 = v261;
        v130 = v260 - 1;
        v261 = v216;
        if ( (int)(v260 - 1) < 0 )
        {
LABEL_108:
          sub_77E08(v129);
          v98 = v260;
          ptr = v94;
          v261 = v220;
          goto LABEL_87;
        }
        v131 = (char *)ptr + 12;
        v132 = v94 + 12;
        do
        {
          v133 = *((_DWORD *)v131 - 3);
          v134 = *((_DWORD *)v131 - 2);
          v135 = *((_DWORD *)v131 - 1);
          --v130;
          v131 += 12;
          *((_DWORD *)v132 - 3) = v133;
          *((_DWORD *)v132 - 2) = v134;
          *((_DWORD *)v132 - 1) = v135;
          v132 += 12;
        }
        while ( v130 != -1 );
      }
      v129 = ptr;
      goto LABEL_108;
    }
    v103 = v260;
    v104 = (int *)&v234;
    v105 = *v9;
    v106 = v9[1];
    v107 = v260 + 1;
    LOBYTE(v236) = 1;
    v217 = (char *)ptr;
    v234 = v105;
    v235 = v106;
    v219 = v261;
    if ( ptr <= &v234 && &v234 < (unsigned int *)((char *)ptr + 12 * v261) )
    {
      v104 = v237;
      v237[0] = v234;
      v237[1] = v235;
      v237[2] = v236;
      if ( v261 >= v107 )
        goto LABEL_91;
      v142 = (char *)sub_77EB0((int)&ptr, nullptr, v260 + 1, 0xCu);
      v217 = v142;
      v122 = ptr;
      v223 = v261;
      v143 = v260 - 1;
      v261 = v219;
      if ( (int)(v260 - 1) < 0 )
        goto LABEL_103;
      v144 = (char *)ptr + 12;
      v145 = v142 + 12;
      do
      {
        v146 = *((_DWORD *)v144 - 3);
        v147 = *((_DWORD *)v144 - 2);
        v148 = *((_DWORD *)v144 - 1);
        --v143;
        v144 += 12;
        *((_DWORD *)v145 - 3) = v146;
        *((_DWORD *)v145 - 2) = v147;
        *((_DWORD *)v145 - 1) = v148;
        v145 += 12;
      }
      while ( v143 != -1 );
    }
    else
    {
      if ( v261 >= v107 )
      {
LABEL_91:
        v108 = v104[1];
        v109 = v104[2];
        v110 = &v217[12 * v103];
        *(_DWORD *)v110 = *v104;
        *((_DWORD *)v110 + 1) = v108;
        *((_DWORD *)v110 + 2) = v109;
        v10 = *a2;
        ++v260;
        goto LABEL_72;
      }
      v121 = (char *)sub_77EB0((int)&ptr, nullptr, v260 + 1, 0xCu);
      v217 = v121;
      v122 = ptr;
      v223 = v261;
      v123 = v260 - 1;
      v261 = v219;
      if ( (int)(v260 - 1) < 0 )
      {
LABEL_103:
        sub_77E08(v122);
        v103 = v260;
        ptr = v217;
        v261 = v223;
        goto LABEL_91;
      }
      v124 = (char *)ptr + 12;
      v125 = v121 + 12;
      do
      {
        v126 = *((_DWORD *)v124 - 3);
        v127 = *((_DWORD *)v124 - 2);
        v128 = *((_DWORD *)v124 - 1);
        --v123;
        v124 += 12;
        *((_DWORD *)v125 - 3) = v126;
        *((_DWORD *)v125 - 2) = v127;
        *((_DWORD *)v125 - 1) = v128;
        v125 += 12;
      }
      while ( v123 != -1 );
    }
    v122 = ptr;
    goto LABEL_103;
  }
  v12 = v9 + 2;
  v13 = 0;
  while ( v8 != (void *)++v13 )
  {
    v9 = v12;
    v12 += 2;
    if ( v10 < *(v12 - 1) )
    {
      v11 = *(v12 - 1);
      goto LABEL_11;
    }
  }
LABEL_12:
  v4 = 0;
LABEL_13:
  if ( ptr )
  {
    v260 = 0;
    sub_77E08(ptr);
  }
  return v4;
}
