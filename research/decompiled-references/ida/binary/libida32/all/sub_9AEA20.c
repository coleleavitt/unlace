__int64 __fastcall sub_9AEA20(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  char v3; // al
  int v5; // ebp
  __int64 v6; // rcx
  __int64 v7; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v11; // r13
  int v12; // ebp
  int v13; // eax
  int v14; // ecx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned int v17; // edi
  _QWORD *v18; // rdx
  int v19; // eax
  int v20; // esi
  __int64 v21; // r9
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rbx
  __int64 v25; // r11
  int v26; // ebp
  int v27; // eax
  __int64 v28; // r11
  int v29; // ecx
  __int64 v30; // r11
  __int64 v31; // r13
  int v32; // ecx
  int v33; // eax
  int v34; // r11d
  __int64 v35; // rbp
  __int64 v36; // rcx
  int v37; // r8d
  int v38; // eax
  __int64 v39; // rcx
  int v40; // r8d
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // r11d
  int v44; // eax
  __int64 v45; // r9
  int v46; // r8d
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // ecx
  int v50; // eax
  __int64 v51; // r9
  __int64 v52; // r11
  int v53; // r8d
  __int64 v54; // r9
  __int64 v55; // r8
  int v56; // ecx
  int v57; // eax
  __int64 v58; // r8
  __int64 v59; // r11
  int v60; // r9d
  __int64 v61; // r8
  __int64 v62; // r10
  int v63; // edx
  int v64; // eax
  __int64 v65; // r10
  __int64 v66; // r9
  int v67; // eax
  __int64 v68; // r10
  __int64 v69; // r9
  int v70; // r8d
  int v71; // eax
  __int64 v72; // rcx
  int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // r10
  int v76; // edx
  int v77; // eax
  __int64 v78; // r10
  __int64 v79; // r8
  int v80; // eax
  __int64 v81; // r9
  __int64 v82; // r10
  int v83; // edx
  int v84; // eax
  __int64 v85; // r10
  __int64 v86; // r8
  int v87; // eax
  __int64 v88; // r11
  __int64 v89; // r10
  int v90; // edx
  int v91; // eax
  __int64 v92; // r10
  __int64 v93; // r8
  int v94; // eax
  __int64 v95; // r8
  __int64 v96; // r10
  int v97; // edx
  int v98; // eax
  __int64 v99; // r10
  __int64 v100; // r9
  int v101; // eax
  __int64 v102; // r10
  __int64 v103; // r14
  int v104; // r8d
  int v105; // eax
  int v106; // eax
  __int64 v107; // rsi
  __int64 v108; // rdi
  __int64 *v109; // rdx
  __int64 v110; // rsi
  __int64 v111; // rdi
  __int64 *v112; // rdx
  __int64 v113; // rsi
  __int64 v114; // rdi
  __int64 *v115; // rdx
  __int64 v116; // rsi
  __int64 v117; // rdi
  __int64 *v118; // rdx
  __int64 v119; // rsi
  __int64 v120; // rdi
  __int64 *v121; // rdx
  __int64 v122; // rsi
  __int64 v123; // rdi
  __int64 *v124; // rdx
  __int64 v125; // [rsp+0h] [rbp-338h]
  __int64 v126; // [rsp+0h] [rbp-338h]
  __int64 v127; // [rsp+0h] [rbp-338h]
  __int64 v128; // [rsp+0h] [rbp-338h]
  __int64 v129; // [rsp+0h] [rbp-338h]
  __int64 v130; // [rsp+0h] [rbp-338h]
  __int64 v131; // [rsp+0h] [rbp-338h]
  __int64 v132; // [rsp+0h] [rbp-338h]
  __int64 v133; // [rsp+0h] [rbp-338h]
  __int64 v134; // [rsp+0h] [rbp-338h]
  __int64 v135; // [rsp+0h] [rbp-338h]
  __int64 v136; // [rsp+0h] [rbp-338h]
  __int64 v137; // [rsp+0h] [rbp-338h]
  __int64 v138; // [rsp+0h] [rbp-338h]
  __int64 v139; // [rsp+0h] [rbp-338h]
  __int64 v140; // [rsp+0h] [rbp-338h]
  __int64 v141; // [rsp+0h] [rbp-338h]
  __int64 v142; // [rsp+8h] [rbp-330h]
  __int64 v143; // [rsp+10h] [rbp-328h]
  __int64 v144; // [rsp+10h] [rbp-328h]
  int v145; // [rsp+10h] [rbp-328h]
  __int64 v146; // [rsp+10h] [rbp-328h]
  int v147; // [rsp+10h] [rbp-328h]
  int v148; // [rsp+10h] [rbp-328h]
  __int64 v149; // [rsp+10h] [rbp-328h]
  __int64 v150; // [rsp+10h] [rbp-328h]
  __int64 v151; // [rsp+10h] [rbp-328h]
  int v152; // [rsp+10h] [rbp-328h]
  __int64 v153; // [rsp+10h] [rbp-328h]
  __int64 v154; // [rsp+10h] [rbp-328h]
  __int64 v155; // [rsp+10h] [rbp-328h]
  int v156; // [rsp+10h] [rbp-328h]
  int v157; // [rsp+10h] [rbp-328h]
  int v158; // [rsp+10h] [rbp-328h]
  __int64 v159; // [rsp+10h] [rbp-328h]
  __int64 v160; // [rsp+10h] [rbp-328h]
  __int64 v161; // [rsp+10h] [rbp-328h]
  __int64 v162; // [rsp+10h] [rbp-328h]
  __int64 v163; // [rsp+10h] [rbp-328h]
  __int64 v164; // [rsp+10h] [rbp-328h]
  __int64 v165; // [rsp+10h] [rbp-328h]
  __int64 v166; // [rsp+10h] [rbp-328h]
  char *v167; // [rsp+18h] [rbp-320h]
  int v168; // [rsp+18h] [rbp-320h]
  int v169; // [rsp+18h] [rbp-320h]
  __int64 v170; // [rsp+18h] [rbp-320h]
  int v171; // [rsp+18h] [rbp-320h]
  __int64 v172; // [rsp+18h] [rbp-320h]
  int v173; // [rsp+18h] [rbp-320h]
  int v174; // [rsp+18h] [rbp-320h]
  __int64 v175; // [rsp+18h] [rbp-320h]
  int v176; // [rsp+18h] [rbp-320h]
  __int64 v177; // [rsp+18h] [rbp-320h]
  int v178; // [rsp+18h] [rbp-320h]
  __int64 v179; // [rsp+18h] [rbp-320h]
  __int64 v180; // [rsp+18h] [rbp-320h]
  __int64 v181; // [rsp+18h] [rbp-320h]
  __int64 v182; // [rsp+18h] [rbp-320h]
  __int64 v183; // [rsp+18h] [rbp-320h]
  __int64 v184; // [rsp+18h] [rbp-320h]
  __int64 v185; // [rsp+18h] [rbp-320h]
  __int64 v186; // [rsp+18h] [rbp-320h]
  int v187; // [rsp+18h] [rbp-320h]
  __int64 v188; // [rsp+18h] [rbp-320h]
  int v189; // [rsp+18h] [rbp-320h]
  __int64 v190; // [rsp+18h] [rbp-320h]
  __int64 v191; // [rsp+18h] [rbp-320h]
  __int64 v192; // [rsp+18h] [rbp-320h]
  int v193; // [rsp+18h] [rbp-320h]
  __int64 v194; // [rsp+18h] [rbp-320h]
  int v195; // [rsp+18h] [rbp-320h]
  int v196; // [rsp+18h] [rbp-320h]
  __int64 v197; // [rsp+18h] [rbp-320h]
  __int64 v198; // [rsp+18h] [rbp-320h]
  __int64 v199; // [rsp+18h] [rbp-320h]
  __int64 v200; // [rsp+18h] [rbp-320h]
  _QWORD *v201; // [rsp+20h] [rbp-318h]
  int v202; // [rsp+20h] [rbp-318h]
  int v203; // [rsp+20h] [rbp-318h]
  __int64 v204; // [rsp+20h] [rbp-318h]
  __int64 v205; // [rsp+20h] [rbp-318h]
  __int64 v206; // [rsp+20h] [rbp-318h]
  __int64 v207; // [rsp+20h] [rbp-318h]
  __int64 v208; // [rsp+20h] [rbp-318h]
  int v209; // [rsp+20h] [rbp-318h]
  int v210; // [rsp+20h] [rbp-318h]
  int v211; // [rsp+20h] [rbp-318h]
  __int64 v212; // [rsp+20h] [rbp-318h]
  int v213; // [rsp+20h] [rbp-318h]
  __int64 v214; // [rsp+20h] [rbp-318h]
  int v215; // [rsp+20h] [rbp-318h]
  int v216; // [rsp+20h] [rbp-318h]
  int v217; // [rsp+20h] [rbp-318h]
  int v218; // [rsp+20h] [rbp-318h]
  __int64 v219; // [rsp+20h] [rbp-318h]
  __int64 v220; // [rsp+20h] [rbp-318h]
  __int64 v221; // [rsp+20h] [rbp-318h]
  __int64 v222; // [rsp+20h] [rbp-318h]
  __int64 v223; // [rsp+20h] [rbp-318h]
  int v224; // [rsp+28h] [rbp-310h]
  int v225; // [rsp+28h] [rbp-310h]
  int v226; // [rsp+28h] [rbp-310h]
  __int64 v227; // [rsp+28h] [rbp-310h]
  int v228; // [rsp+28h] [rbp-310h]
  __int64 v229; // [rsp+28h] [rbp-310h]
  __int64 v230; // [rsp+28h] [rbp-310h]
  int v231; // [rsp+28h] [rbp-310h]
  int v232; // [rsp+28h] [rbp-310h]
  int v233; // [rsp+28h] [rbp-310h]
  __int64 v234; // [rsp+28h] [rbp-310h]
  __int64 v235; // [rsp+28h] [rbp-310h]
  __int64 v236; // [rsp+28h] [rbp-310h]
  __int64 v237; // [rsp+28h] [rbp-310h]
  __int64 v238; // [rsp+28h] [rbp-310h]
  __int64 v239; // [rsp+28h] [rbp-310h]
  int v240; // [rsp+28h] [rbp-310h]
  __int64 v241; // [rsp+30h] [rbp-308h]
  __int64 v242; // [rsp+30h] [rbp-308h]
  int v243; // [rsp+30h] [rbp-308h]
  __int64 v244; // [rsp+30h] [rbp-308h]
  __int64 v245; // [rsp+30h] [rbp-308h]
  __int64 v246; // [rsp+30h] [rbp-308h]
  __int64 v247; // [rsp+30h] [rbp-308h]
  int v248; // [rsp+30h] [rbp-308h]
  __int64 v249; // [rsp+30h] [rbp-308h]
  __int64 v250; // [rsp+30h] [rbp-308h]
  __int64 v251; // [rsp+30h] [rbp-308h]
  __int64 v252; // [rsp+30h] [rbp-308h]
  __int64 v253; // [rsp+30h] [rbp-308h]
  __int64 v254; // [rsp+30h] [rbp-308h]
  int v255; // [rsp+3Ch] [rbp-2FCh]
  int v256; // [rsp+3Ch] [rbp-2FCh]
  int v257; // [rsp+3Ch] [rbp-2FCh]
  int v258; // [rsp+3Ch] [rbp-2FCh]
  int v259; // [rsp+3Ch] [rbp-2FCh]
  int v260; // [rsp+3Ch] [rbp-2FCh]
  int v261; // [rsp+3Ch] [rbp-2FCh]
  int v262; // [rsp+3Ch] [rbp-2FCh]
  void *v263; // [rsp+40h] [rbp-2F8h] BYREF
  __int64 v264; // [rsp+48h] [rbp-2F0h]
  __int64 v265; // [rsp+50h] [rbp-2E8h] BYREF
  int v266; // [rsp+58h] [rbp-2E0h]
  _BYTE v267[148]; // [rsp+5Ch] [rbp-2DCh] BYREF
  void *v268; // [rsp+F0h] [rbp-248h] BYREF
  __int64 v269; // [rsp+F8h] [rbp-240h]
  _BYTE v270[160]; // [rsp+100h] [rbp-238h] BYREF
  void *ptr; // [rsp+1A0h] [rbp-198h] BYREF
  __int64 v272; // [rsp+1A8h] [rbp-190h]
  __int64 v273; // [rsp+1B0h] [rbp-188h] BYREF
  int v274; // [rsp+1B8h] [rbp-180h]
  _BYTE v275[148]; // [rsp+1BCh] [rbp-17Ch] BYREF
  void *v276; // [rsp+250h] [rbp-E8h] BYREF
  __int64 v277; // [rsp+258h] [rbp-E0h]
  __int64 v278; // [rsp+260h] [rbp-D8h] BYREF
  int v279; // [rsp+268h] [rbp-D0h]
  _BYTE v280[204]; // [rsp+26Ch] [rbp-CCh] BYREF

  v2 = a2;
  if ( !a2 )
    return v2;
  v3 = *(_BYTE *)(a2 + 43);
  if ( (v3 & 0x40) != 0 )
    return v2;
  if ( (v3 & 0x20) != 0 )
  {
    v5 = *(_DWORD *)(a2 + 64);
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 8);
    v142 = *(_QWORD *)(a2 + 16);
    if ( v11 )
    {
      if ( (*(_BYTE *)(v11 + 43) & 0x20) != 0 )
      {
        v12 = *(_DWORD *)(v11 + 64);
      }
      else
      {
        v24 = *(_QWORD *)(v11 + 8);
        v25 = *(_QWORD *)(v11 + 16);
        if ( v24 )
        {
          if ( (*(_BYTE *)(v24 + 43) & 0x20) != 0 )
          {
            v26 = *(_DWORD *)(v24 + 64);
          }
          else
          {
            v35 = *(_QWORD *)(v24 + 8);
            v36 = *(_QWORD *)(v24 + 16);
            v37 = 0;
            if ( v35 )
            {
              if ( (*(_BYTE *)(v35 + 43) & 0x20) != 0 )
              {
                v37 = *(_DWORD *)(v35 + 64);
              }
              else
              {
                v102 = *(_QWORD *)(v35 + 8);
                v103 = *(_QWORD *)(v35 + 16);
                v104 = 0;
                if ( v102 )
                {
                  if ( (*(_BYTE *)(v102 + 43) & 0x20) != 0 )
                  {
                    v104 = *(_DWORD *)(v102 + 64);
                  }
                  else
                  {
                    v137 = *(_QWORD *)(v35 + 8);
                    v190 = *(_QWORD *)(v24 + 16);
                    v160 = *(_QWORD *)(v11 + 16);
                    v104 = sub_9AAED0(*(_QWORD *)(v102 + 8), *(_QWORD *)(v102 + 16), (__int64 *)(v102 + 48));
                    *(_BYTE *)(v137 + 43) |= 0x20u;
                    v36 = v190;
                    *(_DWORD *)(v137 + 64) = v104;
                    v25 = v160;
                  }
                }
                v215 = v104;
                v188 = v36;
                v278 = *(_QWORD *)(v35 + 48);
                v135 = v25;
                v279 = *(_DWORD *)(v35 + 56);
                v276 = &v278;
                v277 = 0x2000000003LL;
                v105 = sub_961DD0(&v278, (__int64)v280);
                v25 = v135;
                v36 = v188;
                v37 = v105 + v215;
                if ( v103 )
                {
                  if ( (*(_BYTE *)(v103 + 43) & 0x20) != 0 )
                  {
                    v106 = *(_DWORD *)(v103 + 64);
                  }
                  else
                  {
                    v216 = v105 + v215;
                    v106 = sub_9AAED0(*(_QWORD *)(v103 + 8), *(_QWORD *)(v103 + 16), (__int64 *)(v103 + 48));
                    *(_BYTE *)(v103 + 43) |= 0x20u;
                    v37 = v216;
                    v36 = v188;
                    v25 = v135;
                    *(_DWORD *)(v103 + 64) = v106;
                  }
                  v37 += v106;
                }
                if ( v276 != &v278 )
                {
                  v189 = v37;
                  v159 = v36;
                  v136 = v25;
                  free(v276);
                  v37 = v189;
                  v36 = v159;
                  v25 = v136;
                }
                *(_DWORD *)(v35 + 64) = v37;
                *(_BYTE *)(v35 + 43) |= 0x20u;
              }
            }
            v169 = v37;
            v146 = v36;
            v273 = *(_QWORD *)(v24 + 48);
            v126 = v25;
            v274 = *(_DWORD *)(v24 + 56);
            ptr = &v273;
            v272 = 0x2000000003LL;
            v38 = sub_961DD0(&v273, (__int64)v275);
            v39 = v146;
            v25 = v126;
            v26 = v169 + v38;
            if ( v146 )
            {
              if ( (*(_BYTE *)(v146 + 43) & 0x20) != 0 )
              {
                v40 = *(_DWORD *)(v146 + 64);
              }
              else
              {
                v68 = *(_QWORD *)(v146 + 8);
                v69 = *(_QWORD *)(v146 + 16);
                v70 = 0;
                if ( v68 )
                {
                  if ( (*(_BYTE *)(v68 + 43) & 0x20) != 0 )
                  {
                    v70 = *(_DWORD *)(v68 + 64);
                  }
                  else
                  {
                    v140 = *(_QWORD *)(v146 + 8);
                    v222 = *(_QWORD *)(v146 + 16);
                    v200 = v146;
                    v166 = v25;
                    v70 = sub_9AAED0(*(_QWORD *)(v68 + 8), *(_QWORD *)(v68 + 16), (__int64 *)(v68 + 48));
                    *(_BYTE *)(v140 + 43) |= 0x20u;
                    v69 = v222;
                    v39 = v200;
                    v25 = v166;
                    *(_DWORD *)(v140 + 64) = v70;
                  }
                }
                v226 = v70;
                v206 = v69;
                v278 = *(_QWORD *)(v39 + 48);
                v177 = v25;
                v279 = *(_DWORD *)(v39 + 56);
                v130 = v39;
                v276 = &v278;
                v277 = 0x2000000003LL;
                v71 = sub_961DD0(&v278, (__int64)v280);
                v72 = v130;
                v25 = v177;
                v40 = v71 + v226;
                if ( v206 )
                {
                  if ( (*(_BYTE *)(v206 + 43) & 0x20) != 0 )
                  {
                    v73 = *(_DWORD *)(v206 + 64);
                  }
                  else
                  {
                    v122 = *(_QWORD *)(v206 + 16);
                    v123 = *(_QWORD *)(v206 + 8);
                    v124 = (__int64 *)(v206 + 48);
                    v141 = v206;
                    v240 = v71 + v226;
                    v223 = v72;
                    v73 = sub_9AAED0(v123, v122, v124);
                    *(_BYTE *)(v141 + 43) |= 0x20u;
                    v40 = v240;
                    v72 = v223;
                    v25 = v177;
                    *(_DWORD *)(v141 + 64) = v73;
                  }
                  v40 += v73;
                }
                if ( v276 != &v278 )
                {
                  v178 = v40;
                  v154 = v72;
                  v131 = v25;
                  free(v276);
                  v40 = v178;
                  v72 = v154;
                  v25 = v131;
                }
                *(_DWORD *)(v72 + 64) = v40;
                *(_BYTE *)(v72 + 43) |= 0x20u;
              }
              v26 += v40;
            }
            if ( ptr != &v273 )
            {
              v127 = v25;
              free(ptr);
              v25 = v127;
            }
            *(_DWORD *)(v24 + 64) = v26;
            *(_BYTE *)(v24 + 43) |= 0x20u;
          }
        }
        else
        {
          v26 = 0;
        }
        v143 = v25;
        v268 = v270;
        v269 = 0x2000000000LL;
        v125 = *(_QWORD *)(v11 + 48);
        sub_993300((__int64)&v268, v125);
        sub_993300((__int64)&v268, SHIDWORD(v125));
        sub_993300((__int64)&v268, *(_DWORD *)(v11 + 56));
        v27 = sub_961DD0(v268, (__int64)v268 + 4 * (unsigned int)v269);
        v28 = v143;
        v12 = v27 + v26;
        if ( v143 )
        {
          if ( (*(_BYTE *)(v143 + 43) & 0x20) != 0 )
          {
            v29 = *(_DWORD *)(v143 + 64);
          }
          else
          {
            v54 = *(_QWORD *)(v143 + 8);
            v55 = *(_QWORD *)(v143 + 16);
            v56 = 0;
            if ( v54 )
            {
              if ( (*(_BYTE *)(v54 + 43) & 0x20) != 0 )
              {
                v56 = *(_DWORD *)(v54 + 64);
              }
              else
              {
                v132 = *(_QWORD *)(v143 + 8);
                v181 = *(_QWORD *)(v143 + 16);
                v56 = sub_9AAED0(*(_QWORD *)(v54 + 8), *(_QWORD *)(v54 + 16), (__int64 *)(v54 + 48));
                *(_BYTE *)(v132 + 43) |= 0x20u;
                v55 = v181;
                *(_DWORD *)(v132 + 64) = v56;
                v28 = v143;
              }
            }
            v174 = v56;
            v151 = v55;
            v273 = *(_QWORD *)(v28 + 48);
            v128 = v28;
            v274 = *(_DWORD *)(v28 + 56);
            ptr = &v273;
            v272 = 0x2000000003LL;
            v57 = sub_961DD0(&v273, (__int64)v275);
            v58 = v151;
            v59 = v128;
            v29 = v57 + v174;
            if ( v151 )
            {
              if ( (*(_BYTE *)(v151 + 43) & 0x20) != 0 )
              {
                v60 = *(_DWORD *)(v151 + 64);
              }
              else
              {
                v81 = *(_QWORD *)(v151 + 8);
                v82 = *(_QWORD *)(v151 + 16);
                v83 = 0;
                if ( v81 )
                {
                  if ( (*(_BYTE *)(v81 + 43) & 0x20) != 0 )
                  {
                    v83 = *(_DWORD *)(v81 + 64);
                  }
                  else
                  {
                    v195 = v57 + v174;
                    v237 = *(_QWORD *)(v151 + 16);
                    v219 = v151;
                    v163 = v128;
                    v139 = v81;
                    v83 = sub_9AAED0(*(_QWORD *)(v81 + 8), *(_QWORD *)(v81 + 16), (__int64 *)(v81 + 48));
                    *(_BYTE *)(v139 + 43) |= 0x20u;
                    v82 = v237;
                    v58 = v219;
                    v29 = v195;
                    *(_DWORD *)(v139 + 64) = v83;
                    v59 = v163;
                  }
                }
                v209 = v29;
                v243 = v83;
                v278 = *(_QWORD *)(v58 + 48);
                v229 = v82;
                v279 = *(_DWORD *)(v58 + 56);
                v182 = v59;
                v133 = v58;
                v276 = &v278;
                v277 = 0x2000000003LL;
                v84 = sub_961DD0(&v278, (__int64)v280);
                v85 = v229;
                v86 = v133;
                v59 = v182;
                v60 = v243 + v84;
                v29 = v209;
                if ( v229 )
                {
                  if ( (*(_BYTE *)(v229 + 43) & 0x20) != 0 )
                  {
                    v87 = *(_DWORD *)(v229 + 64);
                  }
                  else
                  {
                    v110 = *(_QWORD *)(v229 + 16);
                    v111 = *(_QWORD *)(v229 + 8);
                    v112 = (__int64 *)(v229 + 48);
                    v248 = v243 + v84;
                    v235 = v133;
                    v138 = v85;
                    v87 = sub_9AAED0(v111, v110, v112);
                    *(_BYTE *)(v138 + 43) |= 0x20u;
                    v60 = v248;
                    v86 = v235;
                    v29 = v209;
                    *(_DWORD *)(v138 + 64) = v87;
                    v59 = v182;
                  }
                  v60 += v87;
                }
                if ( v276 != &v278 )
                {
                  v210 = v60;
                  v183 = v86;
                  v156 = v29;
                  v134 = v59;
                  free(v276);
                  v60 = v210;
                  v86 = v183;
                  v29 = v156;
                  v59 = v134;
                }
                *(_DWORD *)(v86 + 64) = v60;
                *(_BYTE *)(v86 + 43) |= 0x20u;
              }
              v29 += v60;
            }
            if ( ptr != &v273 )
            {
              v152 = v29;
              v129 = v59;
              free(ptr);
              v29 = v152;
              v59 = v129;
            }
            *(_DWORD *)(v59 + 64) = v29;
            *(_BYTE *)(v59 + 43) |= 0x20u;
          }
          v12 += v29;
        }
        if ( v268 != v270 )
          free(v268);
        *(_DWORD *)(v11 + 64) = v12;
        *(_BYTE *)(v11 + 43) |= 0x20u;
      }
    }
    else
    {
      v12 = 0;
    }
    v265 = *(_QWORD *)(v2 + 48);
    v13 = *(_DWORD *)(v2 + 56);
    v263 = &v265;
    v266 = v13;
    v264 = 0x2000000003LL;
    v5 = sub_961DD0(&v265, (__int64)v267) + v12;
    if ( v142 )
    {
      if ( (*(_BYTE *)(v142 + 43) & 0x20) != 0 )
      {
        v14 = *(_DWORD *)(v142 + 64);
      }
      else
      {
        v30 = *(_QWORD *)(v142 + 8);
        v31 = *(_QWORD *)(v142 + 16);
        v32 = 0;
        if ( v30 )
        {
          if ( (*(_BYTE *)(v30 + 43) & 0x20) != 0 )
          {
            v32 = *(_DWORD *)(v30 + 64);
          }
          else
          {
            v47 = *(_QWORD *)(v30 + 8);
            v48 = *(_QWORD *)(v30 + 16);
            v49 = 0;
            if ( v47 )
            {
              if ( (*(_BYTE *)(v47 + 43) & 0x20) != 0 )
              {
                v49 = *(_DWORD *)(v47 + 64);
              }
              else
              {
                v74 = *(_QWORD *)(v47 + 8);
                v75 = *(_QWORD *)(v47 + 16);
                v76 = 0;
                if ( v74 )
                {
                  if ( (*(_BYTE *)(v74 + 43) & 0x20) != 0 )
                  {
                    v76 = *(_DWORD *)(v74 + 64);
                  }
                  else
                  {
                    v254 = *(_QWORD *)(v47 + 16);
                    v239 = *(_QWORD *)(v30 + 8);
                    v221 = *(_QWORD *)(v30 + 16);
                    v199 = *(_QWORD *)(v142 + 8);
                    v165 = *(_QWORD *)(v47 + 8);
                    v76 = sub_9AAED0(*(_QWORD *)(v74 + 8), *(_QWORD *)(v74 + 16), (__int64 *)(v74 + 48));
                    *(_BYTE *)(v165 + 43) |= 0x20u;
                    v75 = v254;
                    v47 = v239;
                    v48 = v221;
                    *(_DWORD *)(v165 + 64) = v76;
                    v30 = v199;
                  }
                }
                v256 = v76;
                v242 = v75;
                v278 = *(_QWORD *)(v47 + 48);
                v227 = v48;
                v279 = *(_DWORD *)(v47 + 56);
                v207 = v30;
                v179 = v47;
                v276 = &v278;
                v277 = 0x2000000003LL;
                v77 = sub_961DD0(&v278, (__int64)v280);
                v78 = v242;
                v79 = v179;
                v30 = v207;
                v49 = v256 + v77;
                v48 = v227;
                if ( v242 )
                {
                  if ( (*(_BYTE *)(v242 + 43) & 0x20) != 0 )
                  {
                    v80 = *(_DWORD *)(v242 + 64);
                  }
                  else
                  {
                    v113 = *(_QWORD *)(v242 + 16);
                    v114 = *(_QWORD *)(v242 + 8);
                    v115 = (__int64 *)(v242 + 48);
                    v260 = v256 + v77;
                    v250 = v179;
                    v194 = v78;
                    v80 = sub_9AAED0(v114, v113, v115);
                    *(_BYTE *)(v194 + 43) |= 0x20u;
                    v49 = v260;
                    v79 = v250;
                    v48 = v227;
                    *(_DWORD *)(v194 + 64) = v80;
                    v30 = v207;
                  }
                  v49 += v80;
                }
                if ( v276 != &v278 )
                {
                  v228 = v49;
                  v208 = v79;
                  v180 = v48;
                  v155 = v30;
                  free(v276);
                  v49 = v228;
                  v79 = v208;
                  v48 = v180;
                  v30 = v155;
                }
                *(_DWORD *)(v79 + 64) = v49;
                *(_BYTE *)(v79 + 43) |= 0x20u;
              }
            }
            v203 = v49;
            v172 = v48;
            v273 = *(_QWORD *)(v30 + 48);
            v149 = v30;
            v274 = *(_DWORD *)(v30 + 56);
            ptr = &v273;
            v272 = 0x2000000003LL;
            v50 = sub_961DD0(&v273, (__int64)v275);
            v51 = v172;
            v52 = v149;
            v32 = v50 + v203;
            if ( v172 )
            {
              if ( (*(_BYTE *)(v172 + 43) & 0x20) != 0 )
              {
                v53 = *(_DWORD *)(v172 + 64);
              }
              else
              {
                v61 = *(_QWORD *)(v172 + 8);
                v62 = *(_QWORD *)(v172 + 16);
                v63 = 0;
                if ( v61 )
                {
                  if ( (*(_BYTE *)(v61 + 43) & 0x20) != 0 )
                  {
                    v63 = *(_DWORD *)(v61 + 64);
                  }
                  else
                  {
                    v217 = v50 + v203;
                    v247 = *(_QWORD *)(v172 + 16);
                    v234 = v172;
                    v192 = v149;
                    v161 = v61;
                    v63 = sub_9AAED0(*(_QWORD *)(v61 + 8), *(_QWORD *)(v61 + 16), (__int64 *)(v61 + 48));
                    *(_BYTE *)(v161 + 43) |= 0x20u;
                    v62 = v247;
                    v51 = v234;
                    v32 = v217;
                    *(_DWORD *)(v161 + 64) = v63;
                    v52 = v192;
                  }
                }
                v255 = v63;
                v241 = v62;
                v278 = *(_QWORD *)(v51 + 48);
                v224 = v32;
                v279 = *(_DWORD *)(v51 + 56);
                v204 = v52;
                v175 = v51;
                v276 = &v278;
                v277 = 0x2000000003LL;
                v64 = sub_961DD0(&v278, (__int64)v280);
                v65 = v241;
                v66 = v175;
                v52 = v204;
                v53 = v255 + v64;
                v32 = v224;
                if ( v241 )
                {
                  if ( (*(_BYTE *)(v241 + 43) & 0x20) != 0 )
                  {
                    v67 = *(_DWORD *)(v241 + 64);
                  }
                  else
                  {
                    v119 = *(_QWORD *)(v241 + 16);
                    v120 = *(_QWORD *)(v241 + 8);
                    v121 = (__int64 *)(v241 + 48);
                    v262 = v255 + v64;
                    v253 = v175;
                    v198 = v65;
                    v67 = sub_9AAED0(v120, v119, v121);
                    *(_BYTE *)(v198 + 43) |= 0x20u;
                    v53 = v262;
                    v66 = v253;
                    v32 = v224;
                    *(_DWORD *)(v198 + 64) = v67;
                    v52 = v204;
                  }
                  v53 += v67;
                }
                if ( v276 != &v278 )
                {
                  v225 = v53;
                  v205 = v66;
                  v176 = v32;
                  v153 = v52;
                  free(v276);
                  v53 = v225;
                  v66 = v205;
                  v32 = v176;
                  v52 = v153;
                }
                *(_DWORD *)(v66 + 64) = v53;
                *(_BYTE *)(v66 + 43) |= 0x20u;
              }
              v32 += v53;
            }
            if ( ptr != &v273 )
            {
              v173 = v32;
              v150 = v52;
              free(ptr);
              v32 = v173;
              v52 = v150;
            }
            *(_DWORD *)(v52 + 64) = v32;
            *(_BYTE *)(v52 + 43) |= 0x20u;
          }
        }
        v168 = v32;
        v268 = v270;
        v269 = 0x2000000000LL;
        v144 = *(_QWORD *)(v142 + 48);
        sub_993300((__int64)&v268, v144);
        sub_993300((__int64)&v268, SHIDWORD(v144));
        sub_993300((__int64)&v268, *(_DWORD *)(v142 + 56));
        v33 = sub_961DD0(v268, (__int64)v268 + 4 * (unsigned int)v269);
        v14 = v33 + v168;
        if ( v31 )
        {
          if ( (*(_BYTE *)(v31 + 43) & 0x20) != 0 )
          {
            v34 = *(_DWORD *)(v31 + 64);
          }
          else
          {
            v41 = *(_QWORD *)(v31 + 8);
            v42 = *(_QWORD *)(v31 + 16);
            v43 = 0;
            if ( v41 )
            {
              if ( (*(_BYTE *)(v41 + 43) & 0x20) != 0 )
              {
                v43 = *(_DWORD *)(v41 + 64);
              }
              else
              {
                v88 = *(_QWORD *)(v41 + 8);
                v89 = *(_QWORD *)(v41 + 16);
                v90 = 0;
                if ( v88 )
                {
                  if ( (*(_BYTE *)(v88 + 43) & 0x20) != 0 )
                  {
                    v90 = *(_DWORD *)(v88 + 64);
                  }
                  else
                  {
                    v196 = v33 + v168;
                    v251 = *(_QWORD *)(v41 + 16);
                    v238 = *(_QWORD *)(v31 + 8);
                    v220 = *(_QWORD *)(v31 + 16);
                    v164 = *(_QWORD *)(v41 + 8);
                    v90 = sub_9AAED0(*(_QWORD *)(v88 + 8), *(_QWORD *)(v88 + 16), (__int64 *)(v88 + 48));
                    *(_BYTE *)(v164 + 43) |= 0x20u;
                    v89 = v251;
                    v41 = v238;
                    v42 = v220;
                    *(_DWORD *)(v164 + 64) = v90;
                    v14 = v196;
                  }
                }
                v211 = v14;
                v257 = v90;
                v278 = *(_QWORD *)(v41 + 48);
                v244 = v89;
                v279 = *(_DWORD *)(v41 + 56);
                v230 = v42;
                v184 = v41;
                v276 = &v278;
                v277 = 0x2000000003LL;
                v91 = sub_961DD0(&v278, (__int64)v280);
                v92 = v244;
                v93 = v184;
                v14 = v211;
                v43 = v257 + v91;
                v42 = v230;
                if ( v244 )
                {
                  if ( (*(_BYTE *)(v244 + 43) & 0x20) != 0 )
                  {
                    v94 = *(_DWORD *)(v244 + 64);
                  }
                  else
                  {
                    v116 = *(_QWORD *)(v244 + 16);
                    v117 = *(_QWORD *)(v244 + 8);
                    v118 = (__int64 *)(v244 + 48);
                    v261 = v257 + v91;
                    v252 = v184;
                    v197 = v92;
                    v94 = sub_9AAED0(v117, v116, v118);
                    *(_BYTE *)(v197 + 43) |= 0x20u;
                    v43 = v261;
                    v93 = v252;
                    v42 = v230;
                    *(_DWORD *)(v197 + 64) = v94;
                    v14 = v211;
                  }
                  v43 += v94;
                }
                if ( v276 != &v278 )
                {
                  v231 = v43;
                  v212 = v93;
                  v185 = v42;
                  v157 = v14;
                  free(v276);
                  v43 = v231;
                  v93 = v212;
                  v42 = v185;
                  v14 = v157;
                }
                *(_DWORD *)(v93 + 64) = v43;
                *(_BYTE *)(v93 + 43) |= 0x20u;
              }
            }
            v147 = v14;
            v202 = v43;
            v273 = *(_QWORD *)(v31 + 48);
            v170 = v42;
            v274 = *(_DWORD *)(v31 + 56);
            ptr = &v273;
            v272 = 0x2000000003LL;
            v44 = sub_961DD0(&v273, (__int64)v275);
            v45 = v170;
            v14 = v147;
            v34 = v44 + v202;
            if ( v170 )
            {
              if ( (*(_BYTE *)(v170 + 43) & 0x20) != 0 )
              {
                v46 = *(_DWORD *)(v170 + 64);
              }
              else
              {
                v95 = *(_QWORD *)(v170 + 8);
                v96 = *(_QWORD *)(v170 + 16);
                v97 = 0;
                if ( v95 )
                {
                  if ( (*(_BYTE *)(v95 + 43) & 0x20) != 0 )
                  {
                    v97 = *(_DWORD *)(v95 + 64);
                  }
                  else
                  {
                    v193 = v147;
                    v249 = v96;
                    v236 = v45;
                    v218 = v44 + v202;
                    v162 = v95;
                    v97 = sub_9AAED0(*(_QWORD *)(v95 + 8), *(_QWORD *)(v95 + 16), (__int64 *)(v95 + 48));
                    *(_BYTE *)(v162 + 43) |= 0x20u;
                    v96 = v249;
                    v45 = v236;
                    v34 = v218;
                    *(_DWORD *)(v162 + 64) = v97;
                    v14 = v193;
                  }
                }
                v258 = v97;
                v245 = v96;
                v278 = *(_QWORD *)(v45 + 48);
                v232 = v34;
                v279 = *(_DWORD *)(v45 + 56);
                v213 = v14;
                v186 = v45;
                v276 = &v278;
                v277 = 0x2000000003LL;
                v98 = sub_961DD0(&v278, (__int64)v280);
                v99 = v245;
                v100 = v186;
                v14 = v213;
                v46 = v258 + v98;
                v34 = v232;
                if ( v245 )
                {
                  if ( (*(_BYTE *)(v245 + 43) & 0x20) != 0 )
                  {
                    v101 = *(_DWORD *)(v245 + 64);
                  }
                  else
                  {
                    v107 = *(_QWORD *)(v245 + 16);
                    v108 = *(_QWORD *)(v245 + 8);
                    v109 = (__int64 *)(v245 + 48);
                    v259 = v258 + v98;
                    v246 = v186;
                    v191 = v99;
                    v101 = sub_9AAED0(v108, v107, v109);
                    *(_BYTE *)(v191 + 43) |= 0x20u;
                    v46 = v259;
                    v100 = v246;
                    v34 = v232;
                    *(_DWORD *)(v191 + 64) = v101;
                    v14 = v213;
                  }
                  v46 += v101;
                }
                if ( v276 != &v278 )
                {
                  v233 = v46;
                  v214 = v100;
                  v187 = v34;
                  v158 = v14;
                  free(v276);
                  v46 = v233;
                  v100 = v214;
                  v34 = v187;
                  v14 = v158;
                }
                *(_DWORD *)(v100 + 64) = v46;
                *(_BYTE *)(v100 + 43) |= 0x20u;
              }
              v34 += v46;
            }
            if ( ptr != &v273 )
            {
              v171 = v34;
              v148 = v14;
              free(ptr);
              v34 = v171;
              v14 = v148;
            }
            *(_DWORD *)(v31 + 64) = v34;
            *(_BYTE *)(v31 + 43) |= 0x20u;
          }
          v14 += v34;
        }
        if ( v268 != v270 )
        {
          v145 = v14;
          free(v268);
          v14 = v145;
        }
        *(_DWORD *)(v142 + 64) = v14;
        *(_BYTE *)(v142 + 43) |= 0x20u;
      }
      v5 += v14;
    }
    if ( v263 != &v265 )
      free(v263);
    *(_DWORD *)(v2 + 64) = v5;
    *(_BYTE *)(v2 + 43) |= 0x20u;
  }
  LODWORD(v268) = v5 & 0xFFFFFFFD;
  if ( !(unsigned __int8)sub_9AAFC0((__int64 *)a1, (int *)&v268, &ptr) )
  {
    v17 = *(_DWORD *)(a1 + 16);
    v18 = ptr;
    v19 = *(_DWORD *)(a1 + 8) + 1;
    v20 = 2 * v17;
    v21 = (unsigned int)(4 * v19);
    v22 = 3 * v17;
    v276 = ptr;
    if ( (unsigned int)v21 < (unsigned int)v22 )
    {
      v22 = v17 >> 3;
      if ( v17 - *(_DWORD *)(a1 + 12) - v19 > (unsigned int)v22 )
      {
LABEL_38:
        *(_DWORD *)(a1 + 8) = v19;
        if ( *(_DWORD *)v18 != -1 )
          --*(_DWORD *)(a1 + 12);
        v23 = (int)v268;
        v18[1] = 0;
        *(_DWORD *)v18 = v23;
        v8 = v18 + 1;
        goto LABEL_41;
      }
      v20 = v17;
    }
    sub_9AD540((__int64 *)a1, v20, (__int64)ptr, v6, v22, v21);
    sub_9AAFC0((__int64 *)a1, (int *)&v268, &v276);
    v18 = v276;
    v19 = *(_DWORD *)(a1 + 8) + 1;
    goto LABEL_38;
  }
  v7 = *((_QWORD *)ptr + 1);
  v201 = ptr;
  v167 = (char *)ptr + 8;
  v8 = (char *)ptr + 8;
  if ( !v7 )
  {
LABEL_41:
    *v8 = v2;
    *(_BYTE *)(v2 + 43) |= 0x40u;
    return v2;
  }
  while ( 1 )
  {
    v265 = v7;
    v264 = 0x1400000001LL;
    v263 = &v265;
    sub_9A68E0((__int64 *)&v263);
    v268 = v270;
    v269 = 0x1400000000LL;
    ptr = &v273;
    v273 = v2;
    v272 = 0x1400000001LL;
    sub_9A68E0((__int64 *)&ptr);
    v277 = 0x1400000000LL;
    v276 = &v278;
    v9 = (unsigned int)v272;
    if ( (_DWORD)v272 )
    {
      while ( (_DWORD)v264 )
      {
        v15 = *((_QWORD *)ptr + v9 - 1) & 0xFFFFFFFFFFFFFFFCLL;
        v16 = *((_QWORD *)v263 + (unsigned int)v264 - 1) & 0xFFFFFFFFFFFFFFFCLL;
        if ( *(_QWORD *)(v15 + 48) != *(_QWORD *)(v16 + 48) || *(_DWORD *)(v15 + 56) != *(_DWORD *)(v16 + 56) )
          break;
        sub_9A68E0((__int64 *)&ptr);
        sub_9A68E0((__int64 *)&v263);
        v9 = (unsigned int)v272;
        if ( !(_DWORD)v272 )
          goto LABEL_8;
      }
      if ( ptr != &v273 )
        free(ptr);
      goto LABEL_33;
    }
LABEL_8:
    if ( ptr != &v273 )
      free(ptr);
    if ( !(_DWORD)v264 )
      break;
LABEL_33:
    if ( v263 == &v265 )
    {
      v7 = *(_QWORD *)(v7 + 32);
      if ( !v7 )
      {
LABEL_35:
        *(_QWORD *)(v201[1] + 24LL) = v2;
        *(_QWORD *)(v2 + 32) = v201[1];
        v8 = v167;
        goto LABEL_41;
      }
    }
    else
    {
      free(v263);
      v7 = *(_QWORD *)(v7 + 32);
      if ( !v7 )
        goto LABEL_35;
    }
  }
  if ( !*(_DWORD *)(v2 + 68) )
    sub_9AD7F0((void *)v2);
  if ( v263 != &v265 )
    free(v263);
  return v7;
}

