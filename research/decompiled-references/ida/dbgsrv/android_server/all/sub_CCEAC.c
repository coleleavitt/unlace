/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CCEAC
// Address: 0x00000000000CCEAC

//----- (00000000000CCEAC) ----------------------------------------------------
__int64 __fastcall sub_CCEAC(__int64 a1, int a2)
{
  __int64 v3; // x28
  int v4; // w8
  char *v5; // x18
  unsigned __int8 *v6; // x22
  unsigned int v8; // w21
  unsigned __int64 v9; // x24
  unsigned __int64 i; // x23
  __int64 *v11; // x3
  unsigned int v12; // w27
  int v13; // w29
  unsigned int v14; // w25
  int v15; // w8
  unsigned int v16; // t1
  unsigned __int64 v17; // x9
  __int64 v18; // x0
  __int64 v19; // x0
  unsigned int v20; // t1
  unsigned __int64 v21; // x8
  unsigned __int64 v22; // x10
  int v23; // w25
  __int64 *v24; // x29
  __int64 v25; // x0
  int v26; // w9
  unsigned int v27; // t1
  char v28; // w9
  unsigned int v29; // w8
  __int128 v30; // q1
  char v31; // w8
  unsigned int v32; // t1
  unsigned __int64 v33; // x8
  int v34; // w8
  unsigned int v35; // w8
  unsigned int v36; // w29
  unsigned int v37; // t1
  unsigned __int64 v38; // x8
  unsigned int v39; // w9
  unsigned int v40; // w10
  unsigned int v41; // w11
  unsigned int v42; // w8
  unsigned int v43; // w9
  unsigned int v44; // w8
  unsigned int v45; // w8
  unsigned int v46; // t1
  char v47; // w10
  int v48; // w9
  int v49; // w9
  unsigned int v50; // w8
  unsigned int v51; // w8
  int v52; // w8
  unsigned int v53; // t1
  unsigned __int64 v54; // x8
  const char *v55; // x8
  unsigned int v56; // w10
  unsigned int v57; // t1
  char v58; // w11
  __int64 v59; // x10
  __int16 v60; // w11
  __int64 *v61; // x21
  char *v62; // x25
  __int64 v63; // x8
  __int64 v64; // x9
  unsigned int v65; // w0
  _DWORD *v66; // x8
  int v67; // w9
  unsigned int v68; // t1
  unsigned __int64 v69; // x8
  unsigned __int64 v70; // x2
  int v71; // w9
  __int64 v72; // x0
  __int64 *v73; // x29
  unsigned __int8 *v74; // x1
  __int64 v75; // x0
  int v76; // w8
  unsigned int v77; // w2
  unsigned int v78; // w9
  __int64 v79; // x10
  int v80; // w11
  __int64 v81; // x13
  unsigned __int64 v82; // x12
  unsigned int v83; // t1
  unsigned int v84; // w13
  __int64 v85; // x12
  unsigned __int64 v86; // x13
  unsigned int v87; // t1
  unsigned __int64 v88; // x14
  __int64 v89; // x16
  int v90; // w14
  __int16 v91; // w13
  int v92; // w12
  unsigned __int64 v93; // x13
  unsigned int v94; // t1
  unsigned __int64 v95; // x14
  unsigned __int64 v96; // x13
  unsigned int v97; // t1
  unsigned __int64 v98; // x14
  __int64 v99; // x16
  __int64 v100; // x14
  unsigned int v101; // w0
  const char *v102; // x8
  int v103; // w8
  __int64 v104; // x9
  __int64 v105; // x8
  unsigned int v106; // w2
  __int64 v107; // x10
  unsigned int *v108; // x8
  int v109; // w9
  __int64 *v110; // x24
  __int64 v111; // x0
  unsigned int v112; // t1
  unsigned __int64 v113; // x8
  __int64 v114; // x8
  __int64 *v115; // x24
  __int64 v116; // x0
  unsigned int v117; // t1
  unsigned __int64 v118; // x8
  __int64 v119; // x8
  __int64 *v120; // x24
  __int64 v121; // x0
  int v122; // w8
  __int64 v123; // x8
  unsigned int v124; // t1
  unsigned __int64 v125; // x9
  __int64 v126; // x9
  __int64 *v127; // x24
  __int64 v128; // x0
  int v129; // w8
  unsigned int v130; // w9
  unsigned int v131; // w25
  __int64 v132; // x11
  __int64 v133; // x10
  unsigned int v134; // w11
  int v135; // w12
  unsigned int v136; // w12
  size_t v137; // x2
  __int64 *v138; // x29
  __int64 *v139; // x29
  __int64 v140; // x0
  __int64 v141; // x8
  __int64 v142; // x25
  __int64 v143; // x9
  int v144; // w21
  __int64 v145; // x8
  __int64 v146; // x10
  __int64 v147; // x8
  __int64 v148; // x9
  int v149; // w21
  __int64 v150; // x8
  __int64 v151; // x10
  unsigned int v152; // w8
  int v153; // w21
  unsigned int v154; // t1
  unsigned __int64 v155; // x9
  __int64 v156; // x9
  __int64 *v157; // x29
  __int64 v158; // x0
  unsigned __int64 v159; // x9
  unsigned int v160; // t1
  unsigned __int64 v161; // x9
  int *v162; // x8
  __int64 *v163; // x25
  char v164; // w8
  __int64 v165; // x9
  int v166; // w10
  __int64 v167; // x11
  unsigned __int64 v168; // x8
  int v169; // w10
  unsigned int v170; // t1
  unsigned __int8 *v171; // x11
  int v172; // w12
  int v173; // w11
  int v174; // w10
  int v175; // w14
  __int64 v176; // x12
  __int64 v177; // x13
  int v178; // w12
  unsigned int v179; // t1
  unsigned int v180; // w14
  unsigned __int8 *v181; // x9
  __int64 v182; // x9
  int v183; // w11
  __int64 v184; // x10
  unsigned __int64 v185; // x8
  int v186; // w10
  unsigned int v187; // t1
  char *v188; // x10
  char v189; // w12
  int v190; // w10
  int v191; // w9
  int v192; // w13
  __int64 v193; // x12
  __int64 v194; // x11
  int v195; // w12
  unsigned int v196; // t1
  unsigned int v197; // w13
  char *v198; // x9
  unsigned int v199; // t1
  char v200; // w10
  int v201; // w9
  unsigned int v202; // w8
  __int64 v203; // x8
  unsigned int v204; // w9
  unsigned int v205; // w9
  char *v206; // x10
  unsigned int v207; // w12
  unsigned int v208; // w10
  unsigned int v209; // w8
  unsigned int v210; // w10
  unsigned int v211; // w8
  unsigned int v212; // w13
  unsigned int v213; // w14
  __int64 v214; // x9
  __int64 v215; // x11
  __int64 v216; // x12
  char *v217; // x11
  unsigned int v218; // w12
  char v219; // t1
  __int64 v220; // x13
  __int64 v221; // x17
  __int128 *v222; // x14
  _OWORD *v223; // x15
  __int64 v224; // x16
  __int128 v225; // q0
  __int128 v226; // q1
  unsigned int v227; // w10
  int v228; // w8
  unsigned int v229; // w9
  __int64 v230; // x0
  int v231; // w8
  const char *v232; // x8
  int v233; // w8
  int v235; // w9
  __int64 v236; // x21
  __int64 v237; // x10
  __int64 v238; // x22
  __int64 v239; // x0
  unsigned __int8 *v240; // x1
  __int64 v241; // x0
  int v242; // w8
  int v243; // w12
  int v244; // w10
  int v246; // w8
  int v247; // w8
  bool v248; // zf
  int v250; // [xsp+14h] [xbp-CCh]
  int v251; // [xsp+14h] [xbp-CCh]
  int v252; // [xsp+14h] [xbp-CCh]
  unsigned __int16 *v253; // [xsp+20h] [xbp-C0h]
  __int64 v254; // [xsp+28h] [xbp-B8h]
  unsigned int *v255; // [xsp+30h] [xbp-B0h]
  __int64 *v256; // [xsp+38h] [xbp-A8h]
  _DWORD **v257; // [xsp+40h] [xbp-A0h]
  unsigned int v258; // [xsp+4Ch] [xbp-94h]
  unsigned int v259; // [xsp+50h] [xbp-90h]
  unsigned int v260; // [xsp+54h] [xbp-8Ch]
  __int64 *v261; // [xsp+58h] [xbp-88h]
  unsigned int v262; // [xsp+64h] [xbp-7Ch]
  unsigned int v263; // [xsp+64h] [xbp-7Ch]
  unsigned int v264; // [xsp+64h] [xbp-7Ch]
  int *v265; // [xsp+68h] [xbp-78h]
  __int16 v266; // [xsp+74h] [xbp-6Ch] BYREF
  char v267; // [xsp+76h] [xbp-6Ah]
  char v268; // [xsp+77h] [xbp-69h]
  __int64 v269; // [xsp+78h] [xbp-68h]

  v269 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !a1 )
    return 4294967294LL;
  if ( !*(_QWORD *)(a1 + 64) )
    return 4294967294LL;
  if ( !*(_QWORD *)(a1 + 72) )
    return 4294967294LL;
  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 )
    return 4294967294LL;
  if ( *(_QWORD *)v3 != a1 )
    return 4294967294LL;
  v4 = *(_DWORD *)(v3 + 8);
  v265 = (int *)(v3 + 8);
  if ( (unsigned int)(v4 - 16180) > 0x1F )
    return 4294967294LL;
  v5 = *(char **)(a1 + 24);
  if ( !v5 )
    return 4294967294LL;
  v6 = *(unsigned __int8 **)a1;
  if ( !*(_QWORD *)a1 )
  {
    if ( *(_DWORD *)(a1 + 8) )
      return 4294967294LL;
  }
  if ( v4 == 16191 )
  {
    v4 = 16192;
    *v265 = 16192;
    v5 = *(char **)(a1 + 24);
    v6 = *(unsigned __int8 **)a1;
  }
  v8 = *(_DWORD *)(a1 + 32);
  v9 = *(_QWORD *)(v3 + 80);
  LODWORD(i) = *(_DWORD *)(v3 + 88);
  v258 = a2 - 5;
  v259 = *(_DWORD *)(a1 + 8);
  v255 = (unsigned int *)(v3 + 120);
  v254 = v3 + 1368;
  v257 = (_DWORD **)(v3 + 144);
  v11 = (__int64 *)(v3 + 32);
  v253 = (unsigned __int16 *)(v3 + 152);
  v12 = v259;
  v13 = v8;
  v260 = 0;
  v256 = (__int64 *)(v3 + 792);
  v261 = (__int64 *)(v3 + 32);
  while ( 2 )
  {
    v14 = 1;
    switch ( v4 )
    {
      case 16180:
        v15 = *(_DWORD *)(v3 + 16);
        if ( !v15 )
        {
          v76 = 16192;
          goto LABEL_368;
        }
        if ( (unsigned int)i <= 0xF )
        {
          i = (unsigned int)i;
          while ( v12 )
          {
            v16 = *v6++;
            --v12;
            v17 = (unsigned __int64)v16 << i;
            i += 8LL;
            v9 += v17;
            if ( i >= 0x10 )
              goto LABEL_19;
          }
          goto LABEL_385;
        }
LABEL_19:
        if ( (v15 & 2) != 0 && v9 == 35615 )
        {
          i = (unsigned __int64)v11;
          if ( !*(_DWORD *)(v3 + 56) )
            *(_DWORD *)(v3 + 56) = 15;
          v18 = sub_C8324(0, nullptr, 0);
          *(_QWORD *)i = v18;
          v266 = -29921;
          v19 = sub_C8324(v18, &v266, 2u);
          v11 = (__int64 *)i;
          v9 = 0;
          LODWORD(i) = 0;
          *v11 = v19;
          *v265 = 16181;
          goto LABEL_12;
        }
        v104 = *(_QWORD *)(v3 + 48);
        if ( v104 )
        {
          *(_DWORD *)(v104 + 72) = -1;
          v15 = *(_DWORD *)(v3 + 16);
        }
        if ( (v15 & 1) == 0 || (((unsigned __int64)(unsigned __int8)v9 << 8) + (v9 >> 8)) % 0x1F )
        {
          v55 = "incorrect header check";
          goto LABEL_341;
        }
        v250 = v13;
        if ( (v9 & 0xF) == 8 )
        {
          v227 = *(_DWORD *)(v3 + 56);
          v228 = (unsigned __int8)v9 >> 4;
          v229 = v228 + 8;
          if ( !v227 )
          {
            v227 = v228 + 8;
            *(_DWORD *)(v3 + 56) = v229;
          }
          if ( v229 <= 0xF && v229 <= v227 )
          {
            *(_DWORD *)(v3 + 24) = 0;
            *(_DWORD *)(v3 + 28) = 256 << v228;
            v230 = sub_D4634(0, nullptr, 0);
            if ( (v9 & 0x2000) != 0 )
              v231 = 16189;
            else
              v231 = 16191;
            LODWORD(i) = 0;
            *(_QWORD *)(v3 + 32) = v230;
            *(_QWORD *)(a1 + 96) = v230;
            *(_DWORD *)(v3 + 8) = v231;
            v9 = 0;
            goto LABEL_384;
          }
          v9 >>= 4;
          LODWORD(i) = i - 4;
          v232 = "invalid window size";
        }
        else
        {
          v232 = "unknown compression method";
        }
        *(_QWORD *)(a1 + 48) = v232;
        *v265 = 16209;
LABEL_384:
        v11 = (__int64 *)(v3 + 32);
LABEL_60:
        v13 = v250;
        goto LABEL_12;
      case 16181:
        if ( (unsigned int)i > 0xF )
          goto LABEL_82;
        i = (unsigned int)i;
        do
        {
          if ( !v12 )
            goto LABEL_385;
          v53 = *v6++;
          --v12;
          v54 = (unsigned __int64)v53 << i;
          i += 8LL;
          v9 += v54;
        }
        while ( i < 0x10 );
LABEL_82:
        *(_DWORD *)(v3 + 24) = v9;
        if ( (unsigned __int8)v9 != 8 )
        {
          v55 = "unknown compression method";
          goto LABEL_341;
        }
        if ( (v9 & 0xE000) != 0 )
        {
          v55 = "unknown header flags set";
          goto LABEL_341;
        }
        v108 = *(unsigned int **)(v3 + 48);
        LOWORD(v109) = v9;
        if ( v108 )
        {
          *v108 = ((unsigned int)v9 >> 8) & 1;
          v109 = *(_DWORD *)(v3 + 24);
        }
        if ( (v109 & 0x200) != 0 && (*(_BYTE *)(v3 + 16) & 4) != 0 )
        {
          v266 = v9;
          v110 = v11;
          v111 = sub_C8324(*v11, &v266, 2u);
          v11 = v110;
          *v110 = v111;
        }
        LODWORD(i) = 0;
        v9 = 0;
        *v265 = 16182;
LABEL_170:
        i = (unsigned int)i;
        do
        {
          if ( !v12 )
            goto LABEL_385;
          v112 = *v6++;
          --v12;
          v113 = (unsigned __int64)v112 << i;
          i += 8LL;
          v9 += v113;
        }
        while ( i < 0x20 );
LABEL_173:
        v114 = *(_QWORD *)(v3 + 48);
        if ( v114 )
          *(_QWORD *)(v114 + 8) = v9;
        if ( (*(_BYTE *)(v3 + 25) & 2) != 0 && (*(_BYTE *)(v3 + 16) & 4) != 0 )
        {
          v266 = v9;
          v267 = BYTE2(v9);
          v268 = BYTE3(v9);
          v115 = v11;
          v116 = sub_C8324(*v11, &v266, 4u);
          v11 = v115;
          *v115 = v116;
        }
        LODWORD(i) = 0;
        v9 = 0;
        *v265 = 16183;
LABEL_179:
        i = (unsigned int)i;
        do
        {
          if ( !v12 )
            goto LABEL_385;
          v117 = *v6++;
          --v12;
          v118 = (unsigned __int64)v117 << i;
          i += 8LL;
          v9 += v118;
        }
        while ( i < 0x10 );
LABEL_182:
        v119 = *(_QWORD *)(v3 + 48);
        if ( v119 )
        {
          *(_DWORD *)(v119 + 16) = (unsigned __int8)v9;
          *(_DWORD *)(*(_QWORD *)(v3 + 48) + 20LL) = v9 >> 8;
        }
        if ( (*(_BYTE *)(v3 + 25) & 2) != 0 && (*(_BYTE *)(v3 + 16) & 4) != 0 )
        {
          v266 = v9;
          v120 = v11;
          v121 = sub_C8324(*v11, &v266, 2u);
          v11 = v120;
          *v120 = v121;
        }
        v9 = 0;
        LODWORD(i) = 0;
        *v265 = 16184;
LABEL_188:
        v122 = *(_DWORD *)(v3 + 24);
        if ( (v122 & 0x400) != 0 )
        {
          if ( (unsigned int)i <= 0xF )
          {
            i = (unsigned int)i;
            while ( v12 )
            {
              v124 = *v6++;
              --v12;
              v125 = (unsigned __int64)v124 << i;
              i += 8LL;
              v9 += v125;
              if ( i >= 0x10 )
                goto LABEL_195;
            }
            goto LABEL_385;
          }
LABEL_195:
          v126 = *(_QWORD *)(v3 + 48);
          *(_DWORD *)(v3 + 92) = v9;
          if ( v126 )
          {
            *(_DWORD *)(v126 + 32) = v9;
            v122 = *(_DWORD *)(v3 + 24);
          }
          if ( (v122 & 0x200) != 0 && (*(_BYTE *)(v3 + 16) & 4) != 0 )
          {
            v266 = v9;
            v127 = v11;
            v128 = sub_C8324(*v11, &v266, 2u);
            v11 = v127;
            v9 = 0;
            LODWORD(i) = 0;
            *v11 = v128;
          }
          else
          {
            v9 = 0;
            LODWORD(i) = 0;
          }
        }
        else
        {
          v123 = *(_QWORD *)(v3 + 48);
          if ( v123 )
            *(_QWORD *)(v123 + 24) = 0;
        }
        *v265 = 16185;
LABEL_202:
        v129 = *(_DWORD *)(v3 + 24);
        if ( (v129 & 0x400) != 0 )
        {
          v130 = *(_DWORD *)(v3 + 92);
          if ( v130 <= v12 )
            v131 = *(_DWORD *)(v3 + 92);
          else
            v131 = v12;
          if ( v131 )
          {
            v132 = *(_QWORD *)(v3 + 48);
            if ( v132 )
            {
              v133 = *(_QWORD *)(v132 + 24);
              if ( v133 )
              {
                v135 = *(_DWORD *)(v132 + 32);
                v134 = *(_DWORD *)(v132 + 36);
                v136 = v135 - v130;
                if ( v134 > v136 )
                {
                  if ( v136 + v131 <= v134 )
                    v137 = v131;
                  else
                    v137 = v134 - v136;
                  v251 = v13;
                  v138 = v11;
                  memcpy((void *)(v133 + v136), v6, v137);
                  v11 = v138;
                  v13 = v251;
                  v129 = *(_DWORD *)(v3 + 24);
                }
              }
            }
            if ( (v129 & 0x200) != 0 && (*(_BYTE *)(v3 + 16) & 4) != 0 )
            {
              v252 = v13;
              v139 = v11;
              v140 = sub_C8324(*v11, v6, v131);
              v11 = v139;
              v13 = v252;
              *v11 = v140;
            }
            v12 -= v131;
            v6 += v131;
            v130 = *(_DWORD *)(v3 + 92) - v131;
            *(_DWORD *)(v3 + 92) = v130;
          }
          if ( v130 )
            goto LABEL_385;
        }
        *(_DWORD *)(v3 + 92) = 0;
        *(_DWORD *)(v3 + 8) = 16186;
LABEL_220:
        if ( (*(_BYTE *)(v3 + 25) & 8) != 0 )
        {
          if ( !v12 )
            goto LABEL_385;
          v142 = 0;
          v263 = v8;
          do
          {
            v143 = *(_QWORD *)(v3 + 48);
            v144 = v6[v142++];
            if ( v143 )
            {
              v145 = *(_QWORD *)(v143 + 40);
              if ( v145 )
              {
                v146 = *(unsigned int *)(v3 + 92);
                if ( (unsigned int)v146 < *(_DWORD *)(v143 + 48) )
                {
                  *(_DWORD *)(v3 + 92) = v146 + 1;
                  *(_BYTE *)(v145 + v146) = v144;
                }
              }
            }
          }
          while ( v144 && v12 > (unsigned int)v142 );
          if ( (*(_BYTE *)(v3 + 25) & 2) != 0 && (*(_BYTE *)(v3 + 16) & 4) != 0 )
            *v261 = sub_C8324(*v261, v6, (unsigned int)v142);
          v6 += v142;
          if ( v144 )
            goto LABEL_425;
          v11 = (__int64 *)(v3 + 32);
          v8 = v263;
          v12 -= v142;
        }
        else
        {
          v141 = *(_QWORD *)(v3 + 48);
          if ( v141 )
            *(_QWORD *)(v141 + 40) = 0;
        }
        *(_DWORD *)(v3 + 92) = 0;
        *(_DWORD *)(v3 + 8) = 16187;
LABEL_237:
        if ( (*(_BYTE *)(v3 + 25) & 0x10) == 0 )
        {
          v147 = *(_QWORD *)(v3 + 48);
          if ( v147 )
            *(_QWORD *)(v147 + 56) = 0;
          goto LABEL_253;
        }
        if ( !v12 )
          goto LABEL_385;
        v142 = 0;
        v263 = v8;
        do
        {
          v148 = *(_QWORD *)(v3 + 48);
          v149 = v6[v142++];
          if ( v148 )
          {
            v150 = *(_QWORD *)(v148 + 56);
            if ( v150 )
            {
              v151 = *(unsigned int *)(v3 + 92);
              if ( (unsigned int)v151 < *(_DWORD *)(v148 + 64) )
              {
                *(_DWORD *)(v3 + 92) = v151 + 1;
                *(_BYTE *)(v150 + v151) = v149;
              }
            }
          }
        }
        while ( v149 && v12 > (unsigned int)v142 );
        if ( (*(_BYTE *)(v3 + 25) & 2) != 0 && (*(_BYTE *)(v3 + 16) & 4) != 0 )
          *v261 = sub_C8324(*v261, v6, (unsigned int)v142);
        v6 += v142;
        if ( !v149 )
        {
          v11 = (__int64 *)(v3 + 32);
          v8 = v263;
          v12 -= v142;
LABEL_253:
          *v265 = 16188;
LABEL_254:
          v152 = *(_DWORD *)(v3 + 24);
          if ( (v152 & 0x200) != 0 )
          {
            if ( (unsigned int)i <= 0xF )
            {
              i = (unsigned int)i;
              while ( v12 )
              {
                v154 = *v6++;
                --v12;
                v155 = (unsigned __int64)v154 << i;
                i += 8LL;
                v9 += v155;
                if ( i >= 0x10 )
                  goto LABEL_260;
              }
              goto LABEL_385;
            }
LABEL_260:
            if ( (*(_BYTE *)(v3 + 16) & 4) != 0 && v9 != *(unsigned __int16 *)v11 )
            {
              v55 = "header crc mismatch";
              goto LABEL_341;
            }
            v264 = v8;
            v153 = v13;
            v9 = 0;
            LODWORD(i) = 0;
          }
          else
          {
            v264 = v8;
            v153 = v13;
          }
          v156 = *(_QWORD *)(v3 + 48);
          v157 = v11;
          v62 = v5;
          if ( v156 )
          {
            *(_DWORD *)(v156 + 68) = (v152 >> 9) & 1;
            *(_DWORD *)(*(_QWORD *)(v3 + 48) + 72LL) = 1;
          }
          v158 = sub_C8324(0, nullptr, 0);
          v11 = v157;
          *v157 = v158;
          v13 = v153;
          v8 = v264;
          *(_QWORD *)(a1 + 96) = v158;
          *v265 = 16191;
          goto LABEL_266;
        }
LABEL_425:
        v12 -= v142;
        v14 = v260;
        v8 = v263;
        goto LABEL_386;
      case 16182:
        if ( (unsigned int)i > 0x1F )
          goto LABEL_173;
        goto LABEL_170;
      case 16183:
        if ( (unsigned int)i > 0xF )
          goto LABEL_182;
        goto LABEL_179;
      case 16184:
        goto LABEL_188;
      case 16185:
        goto LABEL_202;
      case 16186:
        goto LABEL_220;
      case 16187:
        goto LABEL_237;
      case 16188:
        goto LABEL_254;
      case 16189:
        if ( (unsigned int)i > 0x1F )
          goto LABEL_32;
        i = (unsigned int)i;
        do
        {
          if ( !v12 )
            goto LABEL_385;
          v20 = *v6++;
          --v12;
          v21 = (unsigned __int64)v20 << i;
          i += 8LL;
          v9 += v21;
        }
        while ( i < 0x20 );
LABEL_32:
        LODWORD(i) = 0;
        v22 = (v9 >> 8) & 0xFF00
            | BYTE3(v9)
            | ((unsigned __int64)BYTE1(v9) << 16) & 0xFFFFFFFF00FFFFFFLL
            | ((unsigned __int64)(unsigned __int8)v9 << 24);
        v9 = 0;
        *v11 = v22;
        *(_QWORD *)(a1 + 96) = v22;
        *v265 = 16190;
LABEL_33:
        if ( !*(_DWORD *)(v3 + 20) )
        {
          *(_QWORD *)(a1 + 24) = v5;
          *(_DWORD *)(a1 + 32) = v8;
          *(_QWORD *)a1 = v6;
          *(_DWORD *)(a1 + 8) = v12;
          *(_QWORD *)(v3 + 80) = v9;
          *(_DWORD *)(v3 + 88) = i;
          return 2;
        }
        v23 = v13;
        v24 = v11;
        v25 = sub_D4634(0, nullptr, 0);
        v11 = v24;
        *v24 = v25;
        *(_QWORD *)(a1 + 96) = v25;
        v13 = v23;
        *v265 = 16191;
LABEL_35:
        if ( v258 < 2 )
          goto LABEL_385;
LABEL_36:
        if ( *(_DWORD *)(v3 + 12) )
        {
          v26 = 16206;
          v9 >>= i & 7;
          LODWORD(i) = i - (i & 7);
          goto LABEL_342;
        }
        if ( (unsigned int)i <= 2 )
        {
          if ( !v12 )
            goto LABEL_385;
          v27 = *v6++;
          v28 = i;
          LODWORD(i) = i + 8;
          --v12;
          v9 += (unsigned __int64)v27 << v28;
        }
        v29 = ((unsigned int)v9 >> 1) & 3;
        *(_DWORD *)(v3 + 12) = v9 & 1;
        switch ( v29 )
        {
          case 3u:
            *(_QWORD *)(a1 + 48) = "invalid block type";
            v103 = 16209;
            break;
          case 2u:
            v103 = 16196;
            break;
          case 1u:
            *(_QWORD *)&v30 = "`\a";
            *((_QWORD *)&v30 + 1) = qword_11F3A8;
            *(_OWORD *)(v3 + 104) = v30;
            *(_QWORD *)(v3 + 120) = 0x500000009LL;
            *(_DWORD *)(v3 + 8) = 16199;
            if ( a2 == 6 )
            {
              v14 = v260;
              v9 >>= 3;
              LODWORD(i) = i - 3;
              goto LABEL_386;
            }
LABEL_153:
            v9 >>= 3;
            LODWORD(i) = i - 3;
            goto LABEL_12;
          default:
            v103 = 16193;
            break;
        }
        *v265 = v103;
        goto LABEL_153;
      case 16190:
        goto LABEL_33;
      case 16191:
        goto LABEL_35;
      case 16192:
        goto LABEL_36;
      case 16193:
        v31 = i & 7;
        LODWORD(i) = i - (i & 7);
        v9 >>= v31;
        if ( (unsigned int)i > 0x1F )
          goto LABEL_50;
        for ( i = (unsigned int)i; i < 0x20; i += 8LL )
        {
          if ( !v12 )
            goto LABEL_385;
          v32 = *v6++;
          --v12;
          v33 = (unsigned __int64)v32 << i;
          v9 += v33;
        }
LABEL_50:
        if ( (unsigned __int16)v9 != ((v9 >> 16) ^ 0xFFFF) )
        {
          v55 = "invalid stored block lengths";
          goto LABEL_341;
        }
        LODWORD(i) = 0;
        v34 = (unsigned __int16)v9;
        v9 = 0;
        *(_DWORD *)(v3 + 92) = v34;
        *(_DWORD *)(v3 + 8) = 16194;
        if ( a2 == 6 )
          goto LABEL_385;
LABEL_52:
        *v265 = 16195;
LABEL_53:
        v35 = *(_DWORD *)(v3 + 92);
        if ( !v35 )
        {
          v76 = 16191;
          goto LABEL_368;
        }
        if ( v35 > v12 )
          v35 = v12;
        v250 = v13;
        v36 = v8;
        if ( v35 <= v8 )
          v8 = v35;
        if ( !v8 )
        {
          v14 = v260;
          v8 = v36;
          v13 = v250;
          goto LABEL_386;
        }
        memcpy(v5, v6, v8);
        v11 = (__int64 *)(v3 + 32);
        v12 -= v8;
        v6 += v8;
        v5 += v8;
        *(_DWORD *)(v3 + 92) -= v8;
        v8 = v36 - v8;
        goto LABEL_60;
      case 16194:
        goto LABEL_52;
      case 16195:
        goto LABEL_53;
      case 16196:
        if ( (unsigned int)i > 0xD )
          goto LABEL_65;
        i = (unsigned int)i;
        do
        {
          if ( !v12 )
            goto LABEL_385;
          v37 = *v6++;
          --v12;
          v38 = (unsigned __int64)v37 << i;
          i += 8LL;
          v9 += v38;
        }
        while ( i < 0xE );
LABEL_65:
        v39 = ((unsigned int)v9 >> 5) & 0x1F;
        v40 = ((unsigned int)v9 >> 10) & 0xF;
        v41 = (v9 & 0x1F) + 257;
        v9 >>= 14;
        v42 = v40 + 4;
        LODWORD(i) = i - 14;
        *(_DWORD *)(v3 + 128) = v40 + 4;
        *(_DWORD *)(v3 + 132) = v41;
        *(_DWORD *)(v3 + 136) = v39 + 1;
        if ( v41 > 0x11E || v39 >= 0x1E )
        {
          v55 = "too many length or distance symbols";
          goto LABEL_341;
        }
        v43 = 0;
        *(_DWORD *)(v3 + 140) = 0;
        *(_DWORD *)(v3 + 8) = 16197;
LABEL_86:
        v56 = v43;
        do
        {
          if ( (unsigned int)i <= 2 )
          {
            if ( !v12 )
              goto LABEL_385;
            v57 = *v6++;
            v58 = i;
            LODWORD(i) = i + 8;
            --v12;
            v9 += (unsigned __int64)v57 << v58;
          }
          v43 = v56 + 1;
          v59 = *((unsigned __int16 *)&dword_11E9B4 + v56);
          v60 = v9 & 7;
          v9 >>= 3;
          *(_DWORD *)(v3 + 140) = v43;
          *(_WORD *)(v3 + 2 * v59 + 152) = v60;
          LODWORD(i) = i - 3;
          v56 = v43;
        }
        while ( v43 < v42 );
LABEL_91:
        v262 = v8;
        v61 = v11;
        v62 = v5;
        if ( v43 <= 0x12 )
        {
          v63 = v43;
          do
          {
            v64 = *((unsigned __int16 *)&dword_11E9B4 + v63++);
            *(_DWORD *)(v3 + 140) = v63;
            *(_WORD *)(v3 + 2 * v64 + 152) = 0;
          }
          while ( (unsigned int)v63 < 0x13 );
        }
        *(_QWORD *)(v3 + 144) = v254;
        *(_QWORD *)(v3 + 104) = v254;
        *(_DWORD *)(v3 + 120) = 7;
        v65 = sub_CF30C(0, v253, 0x13u, v257, v255, v256);
        if ( v65 )
        {
          *(_QWORD *)(a1 + 48) = "invalid code lengths set";
          v66 = (_DWORD *)(v3 + 8);
          v11 = v61;
          v8 = v262;
          v260 = v65;
          goto LABEL_163;
        }
        v11 = v61;
        v8 = v262;
        v44 = 0;
        v260 = 0;
        *(_DWORD *)(v3 + 140) = 0;
        *(_DWORD *)(v3 + 8) = 16198;
LABEL_110:
        v77 = *(_DWORD *)(v3 + 132);
        v78 = *(_DWORD *)(v3 + 136) + v77;
        if ( v44 < v78 )
        {
          v79 = *(_QWORD *)(v3 + 104);
          v80 = ~(-1 << *(_DWORD *)(v3 + 120));
          while ( 1 )
          {
            while ( 1 )
            {
              v81 = v80 & (unsigned int)v9;
              LODWORD(v82) = *(unsigned __int8 *)(v79 + 4LL * (unsigned int)v81 + 1);
              if ( (unsigned int)i < (unsigned int)v82 )
              {
                i = (unsigned int)i;
                do
                {
                  if ( !v12 )
                    goto LABEL_385;
                  v83 = *v6++;
                  --v12;
                  v9 += (unsigned __int64)v83 << i;
                  LODWORD(v81) = v80 & v9;
                  v82 = *(unsigned __int8 *)(v79 + 4LL * (v80 & (unsigned int)v9) + 1);
                  i += 8LL;
                }
                while ( i < v82 );
                v81 = (unsigned int)v81;
              }
              v84 = *(unsigned __int16 *)(v79 + 4 * v81 + 2);
              if ( v84 > 0xF )
                break;
              v9 >>= v82;
              LODWORD(i) = i - v82;
              v85 = v3 + 2LL * v44++;
              *(_DWORD *)(v3 + 140) = v44;
              *(_WORD *)(v85 + 152) = v84;
              if ( v44 >= v78 )
                goto LABEL_142;
            }
            if ( v84 == 16 )
            {
              v93 = (unsigned int)(v82 + 2);
              if ( (unsigned int)i < (unsigned int)v93 )
              {
                i = (unsigned int)i;
                while ( v12 )
                {
                  v94 = *v6++;
                  --v12;
                  v95 = (unsigned __int64)v94 << i;
                  i += 8LL;
                  v9 += v95;
                  if ( i >= v93 )
                    goto LABEL_131;
                }
                goto LABEL_385;
              }
LABEL_131:
              v9 >>= v82;
              LODWORD(i) = i - v82;
              if ( !v44 )
                break;
              v91 = *(_WORD *)(v3 + 2LL * (v44 - 1) + 152);
              v92 = (v9 & 3) + 3;
              v9 >>= 2;
              LODWORD(i) = i - 2;
            }
            else
            {
              if ( v84 == 17 )
              {
                v86 = (unsigned int)(v82 + 3);
                if ( (unsigned int)i < (unsigned int)v86 )
                {
                  i = (unsigned int)i;
                  while ( v12 )
                  {
                    v87 = *v6++;
                    --v12;
                    v88 = (unsigned __int64)v87 << i;
                    i += 8LL;
                    v9 += v88;
                    if ( i >= v86 )
                      goto LABEL_126;
                  }
                  goto LABEL_385;
                }
LABEL_126:
                v89 = (v9 >> v82) & 7;
                v9 = v9 >> v82 >> 3;
                v90 = -3 - v82;
                v91 = 0;
                v92 = v89 + 3;
              }
              else
              {
                v96 = (unsigned int)(v82 + 7);
                if ( (unsigned int)i < (unsigned int)v96 )
                {
                  i = (unsigned int)i;
                  while ( v12 )
                  {
                    v97 = *v6++;
                    --v12;
                    v98 = (unsigned __int64)v97 << i;
                    i += 8LL;
                    v9 += v98;
                    if ( i >= v96 )
                      goto LABEL_137;
                  }
                  goto LABEL_385;
                }
LABEL_137:
                v99 = (v9 >> v82) & 0x7F;
                v9 = v9 >> v82 >> 7;
                v90 = -7 - v82;
                v91 = 0;
                v92 = v99 + 11;
              }
              LODWORD(i) = v90 + i;
            }
            if ( v92 + v44 > v78 )
              break;
            do
            {
              --v92;
              v100 = v3 + 2LL * v44++;
              *(_DWORD *)(v3 + 140) = v44;
              *(_WORD *)(v100 + 152) = v91;
            }
            while ( v92 );
            if ( v44 >= v78 )
              goto LABEL_142;
          }
          v55 = "invalid bit length repeat";
LABEL_341:
          v26 = 16209;
          *(_QWORD *)(a1 + 48) = v55;
LABEL_342:
          v162 = (int *)(v3 + 8);
LABEL_343:
          *v162 = v26;
LABEL_12:
          v4 = *v265;
          continue;
        }
LABEL_142:
        if ( !*(_WORD *)(v3 + 664) )
        {
          v55 = "invalid code -- missing end-of-block";
          goto LABEL_341;
        }
        v62 = v5;
        *(_QWORD *)(v3 + 144) = v254;
        *(_QWORD *)(v3 + 104) = v254;
        *(_DWORD *)(v3 + 120) = 9;
        v101 = sub_CF30C(1, v253, v77, v257, v255, v256);
        if ( v101 )
        {
          v260 = v101;
          v102 = "invalid literal/lengths set";
LABEL_162:
          *(_QWORD *)(a1 + 48) = v102;
          v66 = (_DWORD *)(v3 + 8);
          v11 = (__int64 *)(v3 + 32);
LABEL_163:
          *v66 = 16209;
LABEL_266:
          v5 = v62;
          goto LABEL_12;
        }
        v105 = *(_QWORD *)(v3 + 144);
        v107 = *(unsigned int *)(v3 + 132);
        v106 = *(_DWORD *)(v3 + 136);
        *(_DWORD *)(v3 + 124) = 6;
        *(_QWORD *)(v3 + 112) = v105;
        v260 = sub_CF30C(2, (unsigned __int16 *)(v3 + 2 * v107 + 152), v106, v257, (unsigned int *)(v3 + 124), v256);
        if ( v260 )
        {
          v102 = "invalid distances set";
          goto LABEL_162;
        }
        v11 = (__int64 *)(v3 + 32);
        v260 = 0;
        *v265 = 16199;
        if ( a2 != 6 )
        {
LABEL_286:
          *v265 = 16200;
LABEL_287:
          if ( v8 >= 0x102 && v12 >= 6 )
          {
            v163 = v11;
            *(_QWORD *)(a1 + 24) = v5;
            *(_DWORD *)(a1 + 32) = v8;
            *(_QWORD *)a1 = v6;
            *(_DWORD *)(a1 + 8) = v12;
            *(_QWORD *)(v3 + 80) = v9;
            *(_DWORD *)(v3 + 88) = i;
            sub_D47D4((unsigned __int8 **)a1, v13);
            v5 = *(char **)(a1 + 24);
            v8 = *(_DWORD *)(a1 + 32);
            v6 = *(unsigned __int8 **)a1;
            v12 = *(_DWORD *)(a1 + 8);
            v9 = *(_QWORD *)(v3 + 80);
            LODWORD(i) = *(_DWORD *)(v3 + 88);
            if ( *(_DWORD *)(v3 + 8) == 16191 )
              *(_DWORD *)(v3 + 7148) = -1;
            v11 = v163;
            goto LABEL_12;
          }
          v164 = *(_DWORD *)(v3 + 120);
          v165 = *(_QWORD *)(v3 + 104);
          *(_DWORD *)(v3 + 7148) = 0;
          v166 = -1 << v164;
          v167 = (unsigned int)v9 & ~(-1 << v164);
          LODWORD(v168) = *(unsigned __int8 *)(v165 + 4LL * (unsigned int)v167 + 1);
          if ( (unsigned int)i < (unsigned int)v168 )
          {
            v169 = ~v166;
            i = (unsigned int)i;
            do
            {
              if ( !v12 )
                goto LABEL_385;
              v170 = *v6++;
              --v12;
              v9 += (unsigned __int64)v170 << i;
              LODWORD(v167) = v169 & v9;
              v168 = *(unsigned __int8 *)(v165 + 4LL * (v169 & (unsigned int)v9) + 1);
              i += 8LL;
            }
            while ( i < v168 );
            v167 = (unsigned int)v167;
          }
          v171 = (unsigned __int8 *)(v165 + 4 * v167);
          v172 = *v171;
          v173 = *((unsigned __int16 *)v171 + 1);
          v174 = v168;
          if ( !v172 || (v172 & 0xF0) != 0 )
          {
            v174 = 0;
          }
          else
          {
            v175 = -1 << (v168 + v172);
            v176 = (((unsigned int)v9 & ~v175) >> v168) + v173;
            LODWORD(v177) = *(unsigned __int8 *)(v165 + 4LL * (unsigned int)v176 + 1);
            if ( (int)v168 + (int)v177 > (unsigned int)i )
            {
              v178 = ~v175;
              i = (unsigned int)i;
              do
              {
                if ( !v12 )
                  goto LABEL_385;
                v179 = *v6++;
                --v12;
                v9 += (unsigned __int64)v179 << i;
                v180 = (((unsigned int)v9 & v178) >> v168) + v173;
                v177 = *(unsigned __int8 *)(v165 + 4LL * v180 + 1);
                i += 8LL;
              }
              while ( i < (unsigned __int64)(unsigned int)v168 + v177 );
              v176 = v180;
            }
            v181 = (unsigned __int8 *)(v165 + 4 * v176);
            v173 = *((unsigned __int16 *)v181 + 1);
            v172 = *v181;
            v9 >>= v168;
            LODWORD(i) = i - v168;
            LODWORD(v168) = v177;
            *(_DWORD *)(v3 + 7148) = v174;
          }
          v9 >>= v168;
          LODWORD(i) = i - v168;
          *(_DWORD *)(v3 + 7148) = v174 + v168;
          *(_DWORD *)(v3 + 92) = v173;
          if ( v172 )
          {
            if ( (v172 & 0x20) != 0 )
            {
              v67 = 16191;
              *(_DWORD *)(v3 + 7148) = -1;
LABEL_98:
              *(_DWORD *)(v3 + 8) = v67;
              goto LABEL_12;
            }
            if ( (v172 & 0x40) != 0 )
            {
              v55 = "invalid literal/length code";
              goto LABEL_341;
            }
            v45 = v172 & 0xF;
            *(_DWORD *)(v3 + 100) = v45;
            *(_DWORD *)(v3 + 8) = 16201;
            if ( (v172 & 0xF) == 0 )
            {
LABEL_310:
              v49 = *(_DWORD *)(v3 + 92);
              goto LABEL_311;
            }
LABEL_70:
            if ( (unsigned int)i < v45 )
            {
              while ( v12 )
              {
                v46 = *v6++;
                v47 = i;
                LODWORD(i) = i + 8;
                --v12;
                v9 += (unsigned __int64)v46 << v47;
                if ( (unsigned int)i >= v45 )
                  goto LABEL_73;
              }
              goto LABEL_385;
            }
LABEL_73:
            v48 = v9 & ~(-1 << v45);
            LODWORD(i) = i - v45;
            v9 >>= v45;
            v49 = *(_DWORD *)(v3 + 92) + v48;
            v50 = *(_DWORD *)(v3 + 7148) + v45;
            *(_DWORD *)(v3 + 92) = v49;
            *(_DWORD *)(v3 + 7148) = v50;
LABEL_311:
            *(_DWORD *)(v3 + 7152) = v49;
            *(_DWORD *)(v3 + 8) = 16202;
LABEL_312:
            v182 = *(_QWORD *)(v3 + 112);
            v183 = -1 << *(_DWORD *)(v3 + 124);
            v184 = (unsigned int)v9 & ~v183;
            v185 = *(unsigned __int8 *)(v182 + 4LL * (unsigned int)v184 + 1);
            if ( (unsigned int)i < (unsigned int)v185 )
            {
              v186 = ~v183;
              i = (unsigned int)i;
              do
              {
                if ( !v12 )
                  goto LABEL_385;
                v187 = *v6++;
                --v12;
                v9 += (unsigned __int64)v187 << i;
                v185 = *(unsigned __int8 *)(v182 + 4LL * (v186 & (unsigned int)v9) + 1);
                i += 8LL;
              }
              while ( i < v185 );
              v184 = v186 & (unsigned int)v9;
            }
            v188 = (char *)(v182 + 4 * v184);
            v189 = *v188;
            v190 = *((unsigned __int16 *)v188 + 1);
            if ( (v189 & 0xF0) != 0 )
            {
              v191 = *(_DWORD *)(v3 + 7148);
            }
            else
            {
              v192 = -1 << (v185 + v189);
              v193 = (((unsigned int)v9 & ~v192) >> v185) + v190;
              LODWORD(v194) = *(unsigned __int8 *)(v182 + 4LL * (unsigned int)v193 + 1);
              if ( (int)v185 + (int)v194 > (unsigned int)i )
              {
                v195 = ~v192;
                i = (unsigned int)i;
                do
                {
                  if ( !v12 )
                    goto LABEL_385;
                  v196 = *v6++;
                  --v12;
                  v9 += (unsigned __int64)v196 << i;
                  v197 = (((unsigned int)v9 & v195) >> v185) + v190;
                  v194 = *(unsigned __int8 *)(v182 + 4LL * v197 + 1);
                  i += 8LL;
                }
                while ( i < v185 + v194 );
                v193 = v197;
              }
              v198 = (char *)(v182 + 4 * v193);
              v190 = *((unsigned __int16 *)v198 + 1);
              v189 = *v198;
              v9 >>= v185;
              LODWORD(i) = i - v185;
              v191 = *(_DWORD *)(v3 + 7148) + v185;
              LODWORD(v185) = v194;
              *(_DWORD *)(v3 + 7148) = v191;
            }
            v9 >>= v185;
            LODWORD(i) = i - v185;
            *(_DWORD *)(v3 + 7148) = v191 + v185;
            if ( (v189 & 0x40) != 0 )
            {
              v55 = "invalid distance code";
              goto LABEL_341;
            }
            v51 = v189 & 0xF;
            *(_DWORD *)(v3 + 96) = v190;
            *(_DWORD *)(v3 + 100) = v51;
            *(_DWORD *)(v3 + 8) = 16203;
            if ( (v189 & 0xF) != 0 )
            {
LABEL_327:
              if ( (unsigned int)i < v51 )
              {
                while ( v12 )
                {
                  v199 = *v6++;
                  v200 = i;
                  LODWORD(i) = i + 8;
                  --v12;
                  v9 += (unsigned __int64)v199 << v200;
                  if ( (unsigned int)i >= v51 )
                    goto LABEL_330;
                }
                goto LABEL_385;
              }
LABEL_330:
              v201 = v9 & ~(-1 << v51);
              LODWORD(i) = i - v51;
              v9 >>= v51;
              v202 = *(_DWORD *)(v3 + 7148) + v51;
              *(_DWORD *)(v3 + 96) += v201;
              *(_DWORD *)(v3 + 7148) = v202;
            }
LABEL_331:
            *v265 = 16204;
LABEL_332:
            if ( !v8 )
              goto LABEL_385;
            v203 = *(unsigned int *)(v3 + 96);
            if ( (unsigned int)v203 <= v13 - v8 )
            {
              v205 = *(_DWORD *)(v3 + 92);
              v206 = &v5[-v203];
              v207 = v205;
            }
            else
            {
              v204 = v203 - (v13 - v8);
              if ( v204 > *(_DWORD *)(v3 + 64) && *(_DWORD *)(v3 + 7144) )
              {
                v55 = "invalid distance too far back";
                goto LABEL_341;
              }
              v208 = *(_DWORD *)(v3 + 68);
              v209 = v204 - v208;
              if ( v204 <= v208 )
              {
                v210 = v208 - v204;
                v209 = v204;
              }
              else
              {
                v210 = *(_DWORD *)(v3 + 60) - v209;
              }
              v205 = *(_DWORD *)(v3 + 92);
              v206 = (char *)(*(_QWORD *)(v3 + 72) + v210);
              if ( v209 <= v205 )
                v207 = v209;
              else
                v207 = *(_DWORD *)(v3 + 92);
            }
            if ( v207 <= v8 )
              v211 = v207;
            else
              v211 = v8;
            if ( v8 >= v207 )
              v212 = v207;
            else
              v212 = v8;
            v213 = v205 - v211;
            v214 = v212 - 1;
            v215 = v214 + 1;
            *(_DWORD *)(v3 + 92) = v213;
            if ( (unsigned __int64)(v214 + 1) < 0x20 )
              goto LABEL_359;
            if ( v8 < v207 )
              v207 = v8;
            v216 = v207 - 1;
            if ( v5 < &v206[v216 + 1] && v206 < &v5[v216 + 1] )
            {
LABEL_359:
              v217 = v5;
              v218 = v211;
              goto LABEL_360;
            }
            v220 = v212 & 0x1F;
            v221 = v215 - v220;
            v222 = (__int128 *)(v206 + 16);
            v223 = v5 + 16;
            v217 = &v5[v215 - v220];
            v218 = v211 - v221;
            v206 += v221;
            v224 = v214 + 1 - v220;
            do
            {
              v225 = *(v222 - 1);
              v226 = *v222;
              v222 += 2;
              v224 -= 32;
              *(v223 - 1) = v225;
              *v223 = v226;
              v223 += 2;
            }
            while ( v224 );
            if ( (_DWORD)v220 )
            {
              do
              {
LABEL_360:
                v219 = *v206++;
                --v218;
                *v217++ = v219;
              }
              while ( v218 );
            }
            v8 -= v211;
            v5 += v214 + 1;
            if ( *(_DWORD *)(v3 + 92) )
              goto LABEL_12;
            v76 = 16200;
          }
          else
          {
            v76 = 16205;
          }
LABEL_368:
          *v265 = v76;
          goto LABEL_12;
        }
LABEL_385:
        v14 = v260;
LABEL_386:
        *(_QWORD *)(a1 + 24) = v5;
        *(_DWORD *)(a1 + 32) = v8;
        *(_QWORD *)a1 = v6;
        *(_DWORD *)(a1 + 8) = v12;
        *(_QWORD *)(v3 + 80) = v9;
        *(_DWORD *)(v3 + 88) = i;
        v233 = *(_DWORD *)(a1 + 32);
        if ( *(_DWORD *)(v3 + 60) )
        {
LABEL_387:
          if ( (unsigned int)sub_CE834(a1, *(_QWORD *)(a1 + 24), v13 - v233) )
          {
            *v265 = 16210;
            return 4294967292LL;
          }
          v235 = *(_DWORD *)(a1 + 32);
        }
        else
        {
          v235 = v13;
          if ( v13 != v233 )
          {
            if ( (unsigned int)*v265 > 0x3F50 )
            {
              v235 = *(_DWORD *)(a1 + 32);
            }
            else
            {
              if ( a2 != 4 )
                goto LABEL_387;
              v235 = *(_DWORD *)(a1 + 32);
              if ( (unsigned int)*v265 <= 0x3F4D )
                goto LABEL_387;
            }
          }
        }
        v236 = (unsigned int)(v13 - v235);
        v237 = *(_QWORD *)(a1 + 40);
        v238 = v259 - *(_DWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 16) += v238;
        *(_QWORD *)(a1 + 40) = v237 + v236;
        *(_QWORD *)(v3 + 40) += v236;
        if ( v13 != v235 && (*(_DWORD *)(v3 + 16) & 4) != 0 )
        {
          v239 = *(_QWORD *)(v3 + 32);
          v240 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) - v236);
          if ( *(_DWORD *)(v3 + 24) )
            v241 = sub_C8324(v239, v240, (unsigned int)v236);
          else
            v241 = sub_D4634(v239, v240, (unsigned int)v236);
          *v261 = v241;
          *(_QWORD *)(a1 + 96) = v241;
        }
        v242 = *(_DWORD *)(v3 + 8);
        if ( *(_DWORD *)(v3 + 12) )
          v243 = 64;
        else
          v243 = 0;
        v244 = v243 + *(_DWORD *)(v3 + 88) + ((v242 == 16191) << 7);
        if ( v242 == 16194 || v242 == 16199 )
          v246 = 256;
        else
          v246 = 0;
        v247 = v244 + v246;
        if ( (unsigned int)v236 | (unsigned int)v238 )
          v248 = a2 == 4;
        else
          v248 = 1;
        *(_DWORD *)(a1 + 88) = v247;
        if ( v248 && v14 == 0 )
          return 4294967291LL;
        else
          return v14;
      case 16197:
        v43 = *(_DWORD *)(v3 + 140);
        v42 = *(_DWORD *)(v3 + 128);
        if ( v43 < v42 )
          goto LABEL_86;
        goto LABEL_91;
      case 16198:
        v44 = *(_DWORD *)(v3 + 140);
        goto LABEL_110;
      case 16199:
        goto LABEL_286;
      case 16200:
        goto LABEL_287;
      case 16201:
        v45 = *(_DWORD *)(v3 + 100);
        if ( v45 )
          goto LABEL_70;
        goto LABEL_310;
      case 16202:
        goto LABEL_312;
      case 16203:
        v51 = *(_DWORD *)(v3 + 100);
        if ( !v51 )
          goto LABEL_331;
        goto LABEL_327;
      case 16204:
        goto LABEL_332;
      case 16205:
        if ( !v8 )
          goto LABEL_385;
        --v8;
        v67 = 16200;
        *v5++ = *(_DWORD *)(v3 + 92);
        goto LABEL_98;
      case 16206:
        v52 = *(_DWORD *)(v3 + 16);
        if ( !v52 )
          goto LABEL_275;
        if ( (unsigned int)i > 0x1F )
          goto LABEL_104;
        i = (unsigned int)i;
        do
        {
          if ( !v12 )
            goto LABEL_385;
          v68 = *v6++;
          --v12;
          v69 = (unsigned __int64)v68 << i;
          i += 8LL;
          v9 += v69;
        }
        while ( i < 0x20 );
LABEL_104:
        v70 = v13 - v8;
        *(_QWORD *)(a1 + 40) += v70;
        v52 = *(_DWORD *)(v3 + 16);
        *(_QWORD *)(v3 + 40) += v70;
        v71 = v52 & 4;
        if ( v13 != v8 && (v52 & 4) != 0 )
        {
          v72 = *(_QWORD *)(v3 + 32);
          v73 = v11;
          v74 = (unsigned __int8 *)&v5[-v70];
          if ( *(_DWORD *)(v3 + 24) )
            v75 = sub_C8324(v72, v74, v70);
          else
            v75 = sub_D4634(v72, v74, v70);
          *(_QWORD *)(v3 + 32) = v75;
          *(_QWORD *)(a1 + 96) = v75;
          v52 = *(_DWORD *)(v3 + 16);
          v71 = v52 & 4;
          v11 = v73;
        }
        if ( v71 )
        {
          v159 = v9;
          if ( !*(_DWORD *)(v3 + 24) )
            v159 = (v9 >> 8) & 0xFF00
                 | BYTE3(v9)
                 | ((unsigned __int64)BYTE1(v9) << 16) & 0xFFFFFFFF00FFFFFFLL
                 | ((unsigned __int64)(unsigned __int8)v9 << 24);
          if ( v159 != *v11 )
          {
            *(_QWORD *)(a1 + 48) = "incorrect data check";
            v162 = (int *)(v3 + 8);
            v26 = 16209;
            v13 = v8;
            goto LABEL_343;
          }
        }
        v9 = 0;
        LODWORD(i) = 0;
        v13 = v8;
LABEL_275:
        *v265 = 16207;
        if ( !v52 )
          goto LABEL_427;
LABEL_276:
        if ( !*(_DWORD *)(v3 + 24) )
          goto LABEL_427;
        if ( (unsigned int)i > 0x1F )
        {
LABEL_281:
          if ( (v52 & 4) != 0 && v9 != *(_DWORD *)(v3 + 40) )
          {
            v55 = "incorrect length check";
            goto LABEL_341;
          }
          v9 = 0;
          LODWORD(i) = 0;
LABEL_427:
          v14 = 1;
          *v265 = 16208;
          goto LABEL_386;
        }
        i = (unsigned int)i;
        while ( v12 )
        {
          v160 = *v6++;
          --v12;
          v161 = (unsigned __int64)v160 << i;
          i += 8LL;
          v9 += v161;
          if ( i >= 0x20 )
            goto LABEL_281;
        }
        goto LABEL_385;
      case 16207:
        v52 = *(_DWORD *)(v3 + 16);
        if ( !v52 )
          goto LABEL_427;
        goto LABEL_276;
      case 16208:
        goto LABEL_386;
      case 16209:
        v14 = -3;
        goto LABEL_386;
      case 16210:
        return 4294967292LL;
      default:
        return 4294967294LL;
    }
  }
}
// 11D7B8: using guessed type __int64[511];
// 11E9B4: using guessed type int dword_11E9B4;
// 11F3A8: using guessed type __int64 qword_11F3A8[16];
