__int64 __fastcall sub_17D8C0(__int64 a1, unsigned __int8 a2, const __m128i *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // edx
  int v7; // esi
  _BYTE *v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned int *v13; // rbx
  unsigned int *v14; // rax
  unsigned int v15; // eax
  _QWORD *v16; // rdx
  _BYTE *v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // rdi
  _BYTE *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r10
  _QWORD *v24; // rax
  __int64 v25; // r11
  __int64 v26; // rsi
  _BYTE *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rcx
  size_t v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rsi
  _QWORD *v36; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // rdi
  int v39; // eax
  int v40; // edx
  __int64 v42; // rax
  __int64 v43; // rsi
  _BYTE *v44; // rdx
  __int64 v45; // rax
  bool v46; // zf
  int v47; // edx
  __int64 v48; // rdx
  int v49; // r8d
  int v50; // r9d
  _BYTE *v51; // rdx
  __int128 v52; // rdi
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  size_t v55; // rax
  unsigned __int8 *v56; // rdi
  __int64 *v57; // rsi
  __int32 v58; // eax
  unsigned int v59; // edx
  __int32 v60; // eax
  int v61; // eax
  __int64 *v62; // rbx
  void *v63; // rbx
  __m128i v64; // xmm0
  __int64 v65; // rax
  int v66; // eax
  int v67; // r8d
  int v68; // r9d
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  int v72; // r9d
  __int64 v73; // rax
  __int64 v74; // rax
  size_t v75; // rcx
  __int64 *v76; // r8
  char v77; // al
  __int64 v78; // rdi
  char v79; // al
  __int64 *v80; // rsi
  __int64 *v81; // rdi
  unsigned int v82; // eax
  __int64 v83; // rax
  unsigned __int8 *v84; // rcx
  __int64 *v85; // r8
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  int v89; // r9d
  __int64 *v90; // rsi
  __int64 v91; // rdx
  __int64 v92; // r8
  int v93; // r9d
  unsigned __int8 *v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  int v98; // r9d
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  int v102; // r9d
  char v103; // al
  __int8 v104; // dl
  __int64 *v105; // rax
  unsigned __int8 *v106; // r9
  unsigned __int8 *v107; // rdi
  __int64 *v108; // rax
  size_t v109; // rsi
  __int64 v110; // rdi
  __int64 v111; // rdx
  int v112; // r8d
  int v113; // r9d
  _BYTE *v114; // rcx
  _QWORD *v115; // rax
  __int64 v116; // rsi
  unsigned __int8 *v117; // rsi
  __int64 v118; // rdi
  _BYTE *v119; // rdi
  char v120; // al
  __int128 v121; // rdi
  __int64 v122; // rdx
  __int64 v123; // rcx
  _QWORD *v124; // rax
  __m128i v125; // xmm0
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r8
  int v129; // r9d
  unsigned __int8 v130; // al
  char v131; // al
  __int64 *v132; // rdi
  int v133; // ecx
  int v134; // eax
  _BYTE *v135; // rsi
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rdi
  __int64 v141; // rdx
  int v142; // eax
  __m128 v143; // xmm0
  unsigned int *v144; // rdx
  char v145; // al
  int v146; // eax
  _QWORD *v147; // rdi
  char v148; // dl
  int v149; // eax
  int v150; // [rsp+0h] [rbp-550h]
  __int64 v151; // [rsp+8h] [rbp-548h]
  __int64 v152; // [rsp+10h] [rbp-540h]
  __int64 v153; // [rsp+18h] [rbp-538h]
  __int64 v154; // [rsp+20h] [rbp-530h]
  __int64 v155; // [rsp+28h] [rbp-528h]
  char v156; // [rsp+30h] [rbp-520h]
  __int64 v157; // [rsp+30h] [rbp-520h]
  __int64 *v158; // [rsp+38h] [rbp-518h] BYREF
  __int64 v159; // [rsp+40h] [rbp-510h]
  int v160; // [rsp+48h] [rbp-508h]
  int v161; // [rsp+4Ch] [rbp-504h]
  size_t v162; // [rsp+50h] [rbp-500h]
  __int64 *v163; // [rsp+58h] [rbp-4F8h]
  __int64 *v164; // [rsp+60h] [rbp-4F0h]
  _QWORD *v165; // [rsp+68h] [rbp-4E8h]
  unsigned __int8 *v166; // [rsp+70h] [rbp-4E0h]
  unsigned __int8 *v167; // [rsp+78h] [rbp-4D8h] BYREF
  const __m128i *v168; // [rsp+80h] [rbp-4D0h]
  __int64 v169; // [rsp+88h] [rbp-4C8h]
  __int64 *v170; // [rsp+90h] [rbp-4C0h]
  size_t n; // [rsp+98h] [rbp-4B8h] BYREF
  __int64 *v172; // [rsp+A0h] [rbp-4B0h]
  __int64 *v173; // [rsp+A8h] [rbp-4A8h]
  __m128i v174; // [rsp+B0h] [rbp-4A0h] BYREF
  __int64 *v175; // [rsp+C0h] [rbp-490h]
  _QWORD *v176; // [rsp+C8h] [rbp-488h]
  __m128i v177; // [rsp+D0h] [rbp-480h] BYREF
  unsigned int v178; // [rsp+E0h] [rbp-470h]
  unsigned __int8 v179; // [rsp+E6h] [rbp-46Ah]
  unsigned __int8 v180; // [rsp+E7h] [rbp-469h]
  _BYTE *v181; // [rsp+E8h] [rbp-468h]
  __int64 v182[4]; // [rsp+F0h] [rbp-460h] BYREF
  __int64 v183; // [rsp+110h] [rbp-440h] BYREF
  __int128 v184; // [rsp+118h] [rbp-438h]
  __int64 v185; // [rsp+130h] [rbp-420h] BYREF
  __int64 v186; // [rsp+138h] [rbp-418h]
  void *v187; // [rsp+140h] [rbp-410h] BYREF
  __int128 v188; // [rsp+148h] [rbp-408h]
  __int64 v189[2]; // [rsp+160h] [rbp-3F0h] BYREF
  __int64 v190; // [rsp+170h] [rbp-3E0h] BYREF
  __int128 v191; // [rsp+178h] [rbp-3D8h]
  __int64 v192[2]; // [rsp+190h] [rbp-3C0h] BYREF
  void *src; // [rsp+1A0h] [rbp-3B0h] BYREF
  __m128i v194; // [rsp+1A8h] [rbp-3A8h]
  __int64 v195; // [rsp+1C0h] [rbp-390h] BYREF
  void *v196; // [rsp+1D0h] [rbp-380h]
  __int128 v197; // [rsp+1D8h] [rbp-378h]
  __int64 v198; // [rsp+1F0h] [rbp-360h] BYREF
  __int64 v199; // [rsp+1F8h] [rbp-358h]
  __int64 v200; // [rsp+200h] [rbp-350h] BYREF
  __int128 v201; // [rsp+208h] [rbp-348h]
  __int64 v202[2]; // [rsp+220h] [rbp-330h] BYREF
  __int64 v203; // [rsp+230h] [rbp-320h] BYREF
  __int64 v204; // [rsp+238h] [rbp-318h]
  __int64 v205[2]; // [rsp+250h] [rbp-300h] BYREF
  void *v206; // [rsp+260h] [rbp-2F0h] BYREF
  __int64 v207; // [rsp+268h] [rbp-2E8h]
  __int64 v208[6]; // [rsp+280h] [rbp-2D0h] BYREF
  __int64 v209[2]; // [rsp+2B0h] [rbp-2A0h] BYREF
  void *v210; // [rsp+2C0h] [rbp-290h] BYREF
  __int128 v211; // [rsp+2C8h] [rbp-288h]
  __int64 v212; // [rsp+2E0h] [rbp-270h] BYREF
  __int128 v213; // [rsp+2E8h] [rbp-268h]
  __int64 v214; // [rsp+2F8h] [rbp-258h]
  unsigned __int8 *v215; // [rsp+310h] [rbp-240h] BYREF
  _BYTE *v216; // [rsp+318h] [rbp-238h]
  void *v217; // [rsp+320h] [rbp-230h]
  __int128 v218; // [rsp+328h] [rbp-228h]
  char v219; // [rsp+338h] [rbp-218h]
  __m128 v220; // [rsp+340h] [rbp-210h]
  int v221; // [rsp+350h] [rbp-200h]
  char v222; // [rsp+354h] [rbp-1FCh]
  __int64 v223; // [rsp+360h] [rbp-1F0h] BYREF
  __int128 v224; // [rsp+368h] [rbp-1E8h] BYREF
  __int128 v225; // [rsp+378h] [rbp-1D8h]
  __int64 v226; // [rsp+388h] [rbp-1C8h]
  unsigned __int64 v227; // [rsp+390h] [rbp-1C0h]
  __int64 v228; // [rsp+398h] [rbp-1B8h]
  unsigned __int64 v229; // [rsp+3A0h] [rbp-1B0h]
  __int64 v230; // [rsp+3A8h] [rbp-1A8h]
  __int64 (__fastcall **v231)(); // [rsp+3B0h] [rbp-1A0h] BYREF
  __int128 v232; // [rsp+3B8h] [rbp-198h] BYREF
  __m128i v233; // [rsp+3C8h] [rbp-188h] BYREF
  char v234; // [rsp+3D8h] [rbp-178h]
  __int64 v235; // [rsp+3E0h] [rbp-170h] BYREF
  unsigned __int8 *v236; // [rsp+3E8h] [rbp-168h]
  _BYTE v237[160]; // [rsp+3F8h] [rbp-158h] BYREF
  __int64 v238; // [rsp+498h] [rbp-B8h] BYREF
  char v239[24]; // [rsp+4A8h] [rbp-A8h] BYREF
  __int64 v240; // [rsp+4C0h] [rbp-90h] BYREF
  char v241[32]; // [rsp+4D0h] [rbp-80h] BYREF
  __int64 v242; // [rsp+4F0h] [rbp-60h]
  int v243; // [rsp+508h] [rbp-48h]
  unsigned __int8 v244; // [rsp+50Dh] [rbp-43h]
  unsigned __int8 v245; // [rsp+50Eh] [rbp-42h]
  char v246; // [rsp+512h] [rbp-3Eh]
  char v247; // [rsp+513h] [rbp-3Dh]
  unsigned __int64 v248; // [rsp+518h] [rbp-38h]

  v168 = a3;
  v180 = a2;
  v248 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 64);
  v188 = 0;
  v185 = 0;
  v5 = *(_QWORD *)(v4 + 1504);
  v186 = 0;
  v187 = nullptr;
  v6 = *(_DWORD *)(v5 + 84);
  v7 = *(_DWORD *)(v5 + 60);
  v169 = v5;
  v172 = v189;
  v189[0] = 0;
  v189[1] = 0;
  sub_63E80(v189, v7, v6);
  v8 = *(_BYTE **)(a1 + 48);
  v190 = 0;
  v173 = &v195;
  v181 = v8;
  v178 = 0;
  v175 = &v198;
  v191 = 0;
  if ( !v8 )
  {
    *(_DWORD *)(a1 + 24) &= ~0x80u;
    goto LABEL_81;
  }
  do
  {
    v9 = *(_DWORD *)v181;
    if ( *(_DWORD *)v181 == 60 )
      goto LABEL_6;
    if ( v9 == 56 )
    {
      if ( !v181[64] )
        goto LABEL_6;
    }
    else if ( v9 == 57 && !v181[64] && (unsigned __int8)sub_1D2A70(*(_QWORD *)(a1 + 480), *((_QWORD *)v181 + 3)) )
    {
      goto LABEL_6;
    }
    sub_124680((__int64)v192, a1, (__int64)v181, 0);
    sub_64000(v173, (__int64)v192);
    v12 = v194.m128i_i64[0];
    v196 = nullptr;
    v197 = 0;
    if ( v194.m128i_i64[0] )
    {
      v196 = (void *)qalloc_or_throw(16 * v194.m128i_i64[0], (__int64)v192, v10, v11);
      *((_QWORD *)&v197 + 1) = v12;
      memcpy(v196, src, 16 * v12);
      *(_QWORD *)&v197 = v12;
    }
    v198 = 0;
    v13 = (unsigned int *)v181;
    v199 = 0;
    v200 = 0;
    v176 = nullptr;
    v201 = 0;
LABEL_13:
    v14 = (unsigned int *)sub_129150(a1, v192, *((_QWORD *)v13 + 2), 0, (__int64)&v185, 0, 0x101u);
    v13 = v14;
    if ( v14 )
    {
      if ( !v180 || (v15 = *v14, v15 == 4) || v15 == 67 && v13[17] == v13[9] )
      {
        sub_64280(v175, &v185);
        sub_316CB0(&v200, &v187);
        v20 = *v13;
        if ( (unsigned int)(v20 - 61) > 1 && !(unsigned __int8)sub_32ED70(v20) )
          goto LABEL_52;
        v174.m128i_i32[0] = v13[1] & 0x20000;
        if ( v174.m128i_i32[0] )
          goto LABEL_52;
        v17 = *((_BYTE **)v13 + 3);
        v19 = *v13;
        v21 = *((_BYTE **)v181 + 3);
        if ( v17 == v21 )
          goto LABEL_46;
        if ( v19 == 67 )
        {
          if ( v13[17] == 4 )
          {
            if ( (int)v13[9] > 4 && *((_BYTE *)v13 + 32) != 13 )
              goto LABEL_52;
            v42 = *(_QWORD *)(a1 + 64);
            if ( !*(_QWORD *)(v42 + 1040) )
              goto LABEL_47;
          }
          else
          {
            v42 = *(_QWORD *)(a1 + 64);
            if ( !*(_QWORD *)(v42 + 1040) )
            {
              if ( *(_DWORD *)v181 != 62 )
                goto LABEL_48;
              goto LABEL_93;
            }
          }
          v16 = *(_QWORD **)(v42 + 1016);
          v23 = v42 + 1008;
          if ( !v16 )
          {
LABEL_47:
            if ( *(_DWORD *)v181 != 62 )
              goto LABEL_48;
            v43 = *((_QWORD *)v181 + 3);
            if ( *((_QWORD *)v13 + 3) == v43 )
            {
              if ( !sub_120720((__int64)v13, v43) )
                goto LABEL_52;
LABEL_48:
              if ( *v13 == 61 )
              {
                v17 = v181;
                if ( *(_DWORD *)v181 != 4 && (*(_DWORD *)v181 != 67 || *((_DWORD *)v181 + 17) != *((_DWORD *)v181 + 9)) )
                  goto LABEL_52;
              }
              goto LABEL_49;
            }
LABEL_93:
            if ( *v13 == 61 )
              goto LABEL_52;
LABEL_49:
            if ( *((_BYTE *)v13 + 64) == 8 && !v13[17] )
              goto LABEL_52;
            if ( (unsigned __int8)sub_64780(&v185, v172) )
              goto LABEL_52;
            v177.m128i_i64[0] = (__int64)&v190;
            if ( (unsigned __int8)sub_318470(&v187, &v190) )
              goto LABEL_52;
            v166 = (unsigned __int8 *)(v13 + 16);
            LOBYTE(v167) = sub_330E90(a1, v13 + 16);
            if ( (_BYTE)v167 )
              goto LABEL_52;
            v170 = v202;
            sub_124680((__int64)v202, a1, (__int64)v13, 1u);
            if ( (unsigned __int8)sub_64780(v170, v172) || (unsigned __int8)sub_318470(&v203, v177.m128i_i64[0]) )
            {
              if ( v181[32] == 4 || v181[48] == 4 || v181[64] == 4 )
                goto LABEL_110;
              v29 = *((_QWORD *)v13 + 3);
              v177.m128i_i64[0] = *(_QWORD *)(a1 + 64);
              v30 = sub_1CFBB0(v177.m128i_i64[0], v29);
              if ( (v13[1] & 0x20) != 0 )
                v30 += *(int *)(*(_QWORD *)(v177.m128i_i64[0] + 1504) + 80LL);
              v31 = *(_QWORD *)(a1 + 64);
              v177.m128i_i64[0] = v30;
              v32 = *((_QWORD *)v181 + 3);
              n = v31;
              v33 = sub_1CFBB0(v31, v32);
              if ( (v181[4] & 0x20) != 0 )
                v33 += *(int *)(*(_QWORD *)(n + 1504) + 80LL);
              if ( v177.m128i_i64[0] != v33 )
                goto LABEL_110;
            }
            if ( v180 )
            {
              v177.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL);
              if ( (unsigned __int8)sub_64780(v170, (_QWORD *)(v177.m128i_i64[0] + 104))
                || (unsigned __int8)sub_318470(&v203, v177.m128i_i64[0] + 120) )
              {
                v34 = *(_QWORD *)(a1 + 64);
                v35 = *((_QWORD *)v13 + 3);
                v36 = (_QWORD *)(v34 + 1056);
                v37 = *(_QWORD **)(v34 + 1064);
                v38 = v36;
                if ( !v37 )
                  goto LABEL_110;
                do
                {
                  if ( v37[4] >= v35 )
                  {
                    v38 = v37;
                    v37 = (_QWORD *)v37[2];
                  }
                  else
                  {
                    v37 = (_QWORD *)v37[3];
                  }
                }
                while ( v37 );
                if ( v36 == v38 || v35 < v38[4] )
                  goto LABEL_110;
              }
            }
            LOBYTE(v165) = sub_172FB0(v13);
            if ( (_BYTE)v165 )
            {
              if ( (*(_BYTE *)(a1 + 25) & 8) == 0 )
                goto LABEL_110;
            }
            if ( (unsigned __int8)sub_318470(&v187, *(_QWORD *)(a1 + 64) + 232LL)
              || (unsigned __int8)sub_318470(&v203, *(_QWORD *)(a1 + 64) + 232LL) )
            {
              v44 = *((_BYTE **)v13 + 1);
              for ( n = (size_t)&v231; v44 != v181; v44 = *(_BYTE **)(v177.m128i_i64[0] + 8) )
              {
                v232 = 0u;
                v233 = 0u;
                v231 = &off_4DDF00;
                v177.m128i_i64[0] = (__int64)v44;
                if ( (unsigned int)sub_11F760(v44, (_QWORD *)n) )
                  goto LABEL_110;
              }
            }
            if ( (*((_BYTE *)v13 + 65) & 8) != 0 )
            {
              v53 = *((unsigned __int8 *)v13 + 64);
              v179 = 0;
              if ( (unsigned __int8)v53 <= 9u )
              {
                v54 = 610;
                v179 = _bittest64(&v54, v53);
              }
            }
            else
            {
              v179 = 0;
            }
            v45 = *(_QWORD *)(a1 + 64);
            v46 = (_BYTE)v165 == 0;
            v47 = *(_DWORD *)(v45 + 888) + 1;
            v160 = *(_DWORD *)(v45 + 888);
            *(_DWORD *)(v45 + 888) = v47;
            if ( v46 )
            {
              v48 = *((_QWORD *)v13 + 1);
              LOBYTE(v163) = *v13 == 62;
              v177.m128i_i8[0] = sub_AE9C0(a1, &v185, v48, (__int64)v181, 1u) ^ 1;
              if ( (unsigned __int8)sub_64880(&v185) && !(_QWORD)v188 )
                goto LABEL_110;
            }
            else
            {
              v163 = (__int64 *)&v215;
              sub_64000((__int64 *)&v215, (__int64)&v185);
              v217 = nullptr;
              v218 = 0;
              if ( (_QWORD)v188 )
              {
                v177.m128i_i64[0] = v188;
                n = 16 * v188;
                v217 = (void *)qalloc_or_throw(16 * v188, (__int64)&v185, 16 * v188, v188);
                *((_QWORD *)&v218 + 1) = v177.m128i_i64[0];
                memcpy(v217, v187, n);
                *(_QWORD *)&v218 = v177.m128i_i64[0];
              }
              if ( sub_B0230(a1, v163, *((_QWORD *)v13 + 1), (__int64)v181, 3, 1u)
                || sub_120380(v13, 0) && sub_120380(v181, 0) )
              {
                goto LABEL_158;
              }
              v66 = *(_DWORD *)v181;
              if ( *(_DWORD *)v181 == 1
                || (v66 != 4 && (v66 != 67 || *((_DWORD *)v181 + 9) != *((_DWORD *)v181 + 17)) || v181[32] == 4)
                && (!sub_11C8A0((__int64)v181, &v231) || *(_BYTE *)v231 == 4)
                && (v181[32] != 1 || v181[48] != 1) )
              {
                v162 = (size_t)&v223;
                sub_64000(&v223, (__int64)&v185);
                *((_QWORD *)&v224 + 1) = 0;
                v225 = 0;
                if ( (_QWORD)v188 )
                {
                  v177.m128i_i64[0] = v188;
                  n = 16 * v188;
                  *((_QWORD *)&v224 + 1) = qalloc_or_throw(16 * v188, (__int64)&v185, 16 * v188, v188);
                  *((_QWORD *)&v225 + 1) = v177.m128i_i64[0];
                  memcpy(*((void **)&v224 + 1), v187, n);
                  *(_QWORD *)&v225 = v177.m128i_i64[0];
                }
                n = (size_t)&v231;
                sub_127A20((__int64)&v231, a1, (__int64)v13, 0, v67, v68);
                sub_64640((__int64 *)v162, (__int64 *)n, v69, v70, v71, v72);
                v177.m128i_i64[0] = (__int64)&v224 + 8;
                sub_317C60((char *)&v224 + 8, (char *)&v232 + 8);
                if ( *((_QWORD *)&v232 + 1) )
                {
                  v233.m128i_i64[0] = 0;
                  qfree(*((__int64 *)&v232 + 1));
                }
                qfree((__int64)v231);
                v73 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
                v234 = 0;
                v232 = 0u;
                v233 = 0u;
                v231 = &off_4DDF28;
                v235 = v73;
                if ( (unsigned int)sub_11E900(v13, n) )
                {
                  v74 = *(_QWORD *)(a1 + 64);
                  v75 = *(_QWORD *)(v74 + 128);
                  v76 = *(__int64 **)(v74 + 568);
                  v212 = 0;
                  v213 = 0;
                  n = v75;
                  v158 = &v212;
                  if ( (__int64 *)((char *)v76 + v75 - 1) >= v76 )
                  {
                    v164 = v76;
                    v212 = qvector_reserve((__int64)v158, 0, 1, 16);
                    *(__m128 *)(v212 + 16 * v213) = _mm_loadh_ps((const double *)&n);
                    *(_QWORD *)&v213 = v213 + 1;
                  }
                  sub_3180C0(v177.m128i_i64[0], v158);
                  if ( v212 )
                  {
                    *(_QWORD *)&v213 = 0;
                    qfree(v212);
                  }
                }
                else if ( *((_QWORD *)&v224 + 1) )
                {
                  *(_QWORD *)&v225 = 0;
                  qfree(*((__int64 *)&v224 + 1));
                  *((_QWORD *)&v224 + 1) = 0;
                  *((_QWORD *)&v225 + 1) = 0;
                }
                v77 = sub_64780((_QWORD *)v162, v192);
                v78 = *((_QWORD *)&v224 + 1);
                if ( v77 || (v79 = sub_318470(v177.m128i_i64[0], &src), v78 = *((_QWORD *)&v224 + 1), v79) )
                {
                  if ( v78 )
                  {
                    *(_QWORD *)&v225 = 0;
                    qfree(v78);
                  }
                  qfree(v223);
LABEL_158:
                  if ( v217 )
                  {
                    *(_QWORD *)&v218 = 0;
                    qfree((__int64)v217);
                  }
                  qfree((__int64)v215);
LABEL_110:
                  if ( v203 )
                  {
                    v204 = 0;
                    qfree(v203);
                  }
                  qfree(v202[0]);
                  goto LABEL_52;
                }
                if ( *((_QWORD *)&v224 + 1) )
                {
                  *(_QWORD *)&v225 = 0;
                  qfree(*((__int64 *)&v224 + 1));
                }
                qfree(v223);
              }
              if ( v217 )
              {
                *(_QWORD *)&v218 = 0;
                qfree((__int64)v217);
              }
              qfree((__int64)v215);
              LOBYTE(v163) = (_BYTE)v165;
              v177.m128i_i8[0] = (char)v165;
            }
            v164 = v205;
            sub_127A20((__int64)v205, a1, (__int64)v13, 256, v49, v50);
            if ( (unsigned int)(*(_DWORD *)v181 - 1) > 1 )
            {
              LOBYTE(v162) = 0;
            }
            else
            {
              v51 = v181 + 48;
              if ( *(_DWORD *)v181 == 2 )
                v51 = v181 + 32;
              *(_QWORD *)&v52 = a1;
              *((_QWORD *)&v52 + 1) = &v231;
              v231 = nullptr;
              v232 = 0u;
              n = (size_t)&v231;
              v233 = 0;
              sub_123EA0(v52, (__int64)v51, 1, 0xFFFF0000);
              LOBYTE(v162) = sub_64780(v164, (_QWORD *)n);
              if ( !(_BYTE)v162 )
                LOBYTE(v162) = sub_318470(&v206, (char *)&v232 + 8);
              if ( *((_QWORD *)&v232 + 1) )
              {
                v233.m128i_i64[0] = 0;
                qfree(*((__int64 *)&v232 + 1));
              }
              qfree((__int64)v231);
            }
            v183 = 0;
            v184 = 0;
            LODWORD(n) = *(_DWORD *)v181;
            if ( (unsigned int)(n - 56) <= 1 && !v181[64] || !v177.m128i_i8[0] )
            {
              v177.m128i_i64[0] = 0;
              if ( (_BYTE)v163 )
                goto LABEL_138;
              LOBYTE(v159) = 0;
              v156 = 1;
LABEL_169:
              for ( v177.m128i_i64[0] = 0; ; v177.m128i_i64[0] = v162 )
              {
                v55 = sub_A9AA0(a1, v170, (__int64)v13, (__int64)v181, 1u);
                v162 = v55;
                if ( !v55 )
                {
                  LOBYTE(v161) = 0;
                  goto LABEL_284;
                }
                if ( (_BYTE)v159 )
                {
                  LOBYTE(v163) = v159;
                  LOBYTE(v161) = v159;
LABEL_284:
                  v82 = *v13;
                  if ( *v13 == 61 )
                  {
                    if ( !sub_A4680(a1, (__int64)v181, &v185) )
                      goto LABEL_223;
                    goto LABEL_194;
                  }
                  if ( *(_DWORD *)v181 != 1 || v82 == 4 )
                  {
LABEL_287:
                    if ( *((_BYTE *)v13 + 64) != 14 )
                      goto LABEL_288;
                    if ( *(_DWORD *)v181 == 4 )
                    {
                      v166 = *((unsigned __int8 **)v13 + 9);
                      v106 = v166 + 16;
                      goto LABEL_326;
                    }
                    if ( *(_DWORD *)v181 == 11
                      && v181[32] == 4
                      && !v162
                      && sub_125B90(*((unsigned __int8 **)v181 + 5), *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL), v13, 0) )
                    {
                      v105 = *((__int64 **)v13 + 9);
                      v46 = *(_DWORD *)v181 == 4;
                      v166 = (unsigned __int8 *)v105;
                      v106 = (unsigned __int8 *)(v105 + 2);
                      v107 = v181 + 32;
                      if ( !v46 )
                        goto LABEL_316;
LABEL_326:
                      v167 = v106;
                      n = (size_t)(v181 + 32);
                      v120 = sub_125B60(v181 + 32, (__int64)v166, 0);
                      v106 = v167;
                      if ( !v120 )
                      {
                        v105 = *((__int64 **)v13 + 9);
                        v107 = (unsigned __int8 *)n;
LABEL_316:
                        n = (size_t)v106;
                        if ( !sub_125B60(v107, (__int64)(v105 + 2), 0) )
                          goto LABEL_288;
                        v108 = (__int64 *)v166;
                        v166 = (unsigned __int8 *)n;
                        v106 = (unsigned __int8 *)v108;
                      }
                      v109 = (size_t)v106;
                      v110 = *(_QWORD *)(a1 + 64);
                      v162 = (size_t)(v181 + 64);
                      LOBYTE(v167) = sub_12CF30(v110, (__int64)v106, v181 + 64, 0, 0, (int)v106);
                      if ( !(_BYTE)v167 )
                        goto LABEL_288;
                      v114 = v181;
                      if ( v181 == *((_BYTE **)v13 + 1) )
                      {
LABEL_324:
                        v115 = (_QWORD *)j__qalloc_or_throw(80, v109, v111, (__int64)v114);
                        v176 = v115;
                        v177.m128i_i64[0] = (__int64)(v115 + 4);
                        v174.m128i_i64[0] = (__int64)(v115 + 8);
                        v116 = *((_QWORD *)v13 + 3);
                        v115[7] = 0;
                        v115[4] = 0xFFFFFFFF00000000LL;
                        v115[5] = 0;
                        v115[6] = 0xFFFFFFFF00000000LL;
                        v115[8] = 0xFFFFFFFF00000000LL;
                        v115[9] = 0;
                        sub_330970(v115, v116);
                        v117 = (unsigned __int8 *)v162;
                        v118 = v177.m128i_i64[0];
                        *(_DWORD *)v176 = 4;
                        sub_125180(v118, v117);
                        sub_125180(v174.m128i_i64[0], v166);
                        sub_A3160(a1, v176, (__int64)v13);
                        sub_125180((__int64)v166, (unsigned __int8 *)v177.m128i_i64[0]);
                        v119 = v181;
                        *((_QWORD *)v13 + 3) = *((_QWORD *)v181 + 3);
                        sub_11D5A0((__int64)v119);
                        sub_167810(a1, v13, 6);
                        goto LABEL_194;
                      }
                      v231 = nullptr;
                      v232 = 0u;
                      n = (size_t)&v231;
                      v233 = 0;
                      sub_127FE0(a1, (__int64)&v231, v162, 0, v112, v113, v150, v151, v152, v153, v154);
                      v109 = n;
                      if ( !sub_B0230(a1, (__int64 *)n, *((_QWORD *)v13 + 1), (__int64)v181, 3, 1u) )
                      {
                        if ( *((_QWORD *)&v232 + 1) )
                        {
                          v233.m128i_i64[0] = 0;
                          qfree(*((__int64 *)&v232 + 1));
                        }
                        qfree((__int64)v231);
                        goto LABEL_324;
                      }
                      if ( *((_QWORD *)&v232 + 1) )
                      {
                        v233.m128i_i64[0] = 0;
                        qfree(*((__int64 *)&v232 + 1));
                      }
                      qfree((__int64)v231);
                    }
LABEL_288:
                    if ( (_BYTE)v161 && v156 )
                      goto LABEL_223;
                    LOBYTE(v161) = v159 | v161;
                    if ( (_BYTE)v161 )
                    {
                      v83 = *(_QWORD *)(a1 + 64);
                      v84 = *(unsigned __int8 **)(v83 + 128);
                      v85 = *(__int64 **)(v83 + 568);
                      v232 = 0;
                      v231 = nullptr;
                      v167 = v84;
                      n = (size_t)&v231;
                      if ( (char *)v85 + (_QWORD)v84 - 1 >= (char *)v85 )
                      {
                        v166 = (unsigned __int8 *)v85;
                        v231 = (__int64 (__fastcall **)())qvector_reserve(n, 0, 1, 16);
                        *(__m128 *)&v231[2 * v232] = _mm_loadh_ps((const double *)&v167);
                        *(_QWORD *)&v232 = v232 + 1;
                      }
                      LOBYTE(v161) = sub_317F40(n, &v206);
                      if ( v231 )
                      {
                        *(_QWORD *)&v232 = 0;
                        qfree((__int64)v231);
                      }
                      if ( !(_BYTE)v161 )
                        goto LABEL_223;
                      if ( (_QWORD)v184 )
                      {
                        sub_1751F0(v164, v173, v86, v87, v88, v89);
                        if ( !(unsigned __int8)sub_64880(v164) || v207 )
                        {
                          LODWORD(v167) = 0;
                          while ( (int)v167 < (unsigned __int64)v184 )
                          {
                            sub_124680(n, a1, *(_QWORD *)(v183 + 8LL * (int)v167), 0);
                            v131 = sub_94210((_QWORD *)n, v164);
                            v132 = (__int64 *)n;
                            if ( v131 )
                              goto LABEL_415;
                            sub_93B40((__int64 *)n);
                            LODWORD(v167) = (_DWORD)v167 + 1;
                          }
                        }
                      }
                    }
                    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 480) + 607LL) & 2) == 0 && sub_17D770(a1, v13, v168) )
                      goto LABEL_223;
                    sub_124680((__int64)v208, a1, (__int64)v181, 0x800u);
                    n = (size_t)&v231;
                    sub_1752C0((__int64)&v231, (__int64)v208, (__int64)v13, v181, a1, a1, 0, v161, (__int64)v170);
                    v90 = v173;
                    v166 = (unsigned __int8 *)v209;
                    sub_64000(v209, (__int64)v173);
                    v94 = (unsigned __int8 *)v197;
                    v210 = nullptr;
                    v211 = 0;
                    if ( (_QWORD)v197 )
                    {
                      v167 = (unsigned __int8 *)v197;
                      v162 = 16 * v197;
                      v210 = (void *)qalloc_or_throw(16 * v197, (__int64)v90, 16 * v197, v197);
                      *((_QWORD *)&v211 + 1) = v167;
                      memcpy(v210, v196, v162);
                      v94 = v167;
                      *(_QWORD *)&v211 = v167;
                    }
                    sub_1751F0((__int64 *)v166, v192, v91, (__int64)v94, v92, v93);
                    sub_64640(&v238, (__int64 *)v166, v95, v96, v97, v98);
                    v167 = (unsigned __int8 *)&v210;
                    sub_317C60(v239, &v210);
                    LOBYTE(v162) = sub_64640(&v240, (__int64 *)v166, v99, v100, v101, v102);
                    v103 = sub_317C60(v241, v167);
                    v246 = v162 | v103;
                    LODWORD(v167) = sub_175BD0(n, (__int64)v181);
                    if ( v243 )
                    {
                      LOBYTE(v162) = v243 == 1;
                      v148 = sub_11CC50(v236 + 64, *(_QWORD *)(v242 + 480));
                      v149 = 0;
                      if ( (_BYTE)v162 == v148 )
                        v149 = 3;
                      v244 = sub_AB6D0(v242, (unsigned int *)v236, (int)v236 + 64, v149 | 4u);
                    }
                    v178 += v244;
                    if ( (_DWORD)v167 == -2 )
                      goto LABEL_417;
                    if ( !(_DWORD)v167 )
                    {
                      LODWORD(v167) = v245;
                      if ( v245 )
                      {
                        sub_93B40((__int64 *)v166);
                        sub_173DA0(n);
                        sub_93B40(v208);
                        goto LABEL_194;
                      }
                      v104 = v161;
                      if ( v244 || (v104 = sub_B36D0(a1, (__int64 *)v13), v244) )
                      {
                        v176 = nullptr;
                        v177.m128i_i64[0] = 0;
                      }
                      v174.m128i_i8[0] = v104;
                      sub_93B40((__int64 *)v166);
                      sub_173DA0(n);
                      sub_93B40(v208);
                      if ( !v174.m128i_i8[0] )
                      {
LABEL_210:
                        if ( v183 )
                        {
                          *(_QWORD *)&v184 = 0;
                          qfree(v183);
                        }
                        sub_93B40(v164);
                        sub_93B40(v170);
                        goto LABEL_143;
                      }
LABEL_201:
                      v62 = (__int64 *)n;
                      sub_124680(n, a1, (__int64)v181, 0);
                      sub_648D0(v192, v62);
                      v63 = *((void **)&v232 + 1);
                      v64 = _mm_loadu_si128(&v233);
                      *((_QWORD *)&v232 + 1) = 0;
                      v233 = 0;
                      if ( src )
                      {
                        v174 = v64;
                        v194.m128i_i64[0] = 0;
                        qfree((__int64)src);
                        v64 = _mm_load_si128(&v174);
                      }
                      src = v63;
                      v194 = v64;
                      sub_173690(v173, (__int64)v192);
                      sub_93B40((__int64 *)n);
                      v186 = 0;
                      if ( v187 )
                      {
                        *(_QWORD *)&v188 = 0;
                        qfree((__int64)v187);
                        v187 = nullptr;
                        *((_QWORD *)&v188 + 1) = 0;
                      }
                      v199 = 0;
                      if ( v200 )
                      {
                        *(_QWORD *)&v201 = 0;
                        qfree(v200);
                        v200 = 0;
                        *((_QWORD *)&v201 + 1) = 0;
                      }
                      if ( (_BYTE)v161 )
                        sub_1EA870(a1, a1 + 448, *(_QWORD *)(a1 + 48), 0);
                      v13 = (unsigned int *)v181;
                      goto LABEL_210;
                    }
                    if ( (unsigned int)((_DWORD)v167 + 4) <= 1 )
                    {
                      if ( (_DWORD)v167 == -4 )
                        ++v178;
                    }
                    else if ( (int)v167 <= 1 || !(_BYTE)v165 )
                    {
                      LOBYTE(v165) = (unsigned __int8)v163 & ((int)v235 > 0);
                      if ( !(_BYTE)v165 )
                      {
                        v230 = 0;
                        *((_QWORD *)&v225 + 1) = 0xFFFFFFFF00000000LL;
                        v227 = 0xFFFFFFFF00000000LL;
                        v229 = 0xFFFFFFFF00000000LL;
                        v226 = 0;
                        v228 = 0;
                        v162 = (size_t)&v223;
                        v224 = 0;
                        sub_1253A0((__int64)&v223, (__int64)v13);
                        v133 = 128;
                        if ( *(char *)(*(_QWORD *)(a1 + 64) + 5LL) < 0 )
                          v133 = 512;
                        if ( sub_173990(v13, v181, (int)v167, v133) )
                        {
                          if ( !(_BYTE)v161 || (_DWORD)v235 )
                            goto LABEL_405;
                          if ( !v244 )
                          {
                            if ( *(_DWORD *)v181 != 4 || !sub_125B60(v181 + 32, (__int64)(v181 + 64), 0) )
                            {
                              if ( *((_BYTE *)v13 + 64) == 1 )
                                sub_1380A0(*(_QWORD *)(a1 + 64), v13[18], (int)v13[17]);
                              sub_11D5A0((__int64)v13);
                              v134 = *(_DWORD *)(a1 + 24);
                              v135 = v181;
                              BYTE1(v134) &= ~2u;
                              LOBYTE(v134) = v134 | 0x80;
                              *(_DWORD *)(a1 + 24) = v134;
                              v140 = sub_13B260((_QWORD *)a1, (__int64)v135, v136, v137, v138, v139);
                              if ( v140 )
                                sub_13B2C0(v140);
                              LOBYTE(v165) = v161;
                            }
LABEL_405:
                            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 64) + 4LL) & 8) == 0
                              || (v163 = (__int64 *)&v215,
                                  sub_1E16F0(&v215, a1 + 448),
                                  LOBYTE(v158) = sub_94210(v164, v163),
                                  sub_93B40(v163),
                                  v141 = 24,
                                  !(_BYTE)v158) )
                            {
                              v141 = 8;
                            }
                            if ( !(_QWORD)v184 )
                              v141 = (unsigned int)v141 | 4;
                            v142 = sub_167810(a1, v181, v141);
                            if ( (v181[6] & 2) != 0 )
                            {
                              if ( (_QWORD)v184 )
                              {
                                if ( (_BYTE)v165 )
                                  sub_1253A0((__int64)v13, v162);
                                goto LABEL_413;
                              }
                              if ( (unsigned __int8)v161 | v180 || v142 )
                              {
LABEL_422:
                                v247 = 0;
                                sub_7CCD0(v162);
                                sub_93B40((__int64 *)v166);
                                sub_173DA0(n);
                                sub_93B40(v208);
                                LOBYTE(v167) = v161;
                                goto LABEL_194;
                              }
LABEL_425:
                              if ( (*((_BYTE *)v13 + 64) != 1 || !(unsigned __int8)sub_11CCD0(v169, v13[18]))
                                && *((_QWORD *)v181 + 3) != *((_QWORD *)v13 + 3)
                                && (*v13 != 4 && (*v13 != 67 || v13[9] != v13[17]) || *((_BYTE *)v13 + 32) != 2) )
                              {
                                if ( (int)v167 > 1 && *(_DWORD *)v181 != 1 )
                                  goto LABEL_413;
                                if ( *((_BYTE *)v13 + 32) == 4 || *((_BYTE *)v13 + 48) == 4 )
                                {
                                  if ( !(_BYTE)v159 )
                                    goto LABEL_413;
                                  sub_11D5A0((__int64)v13);
                                  v146 = *(_DWORD *)(a1 + 24);
                                  BYTE1(v146) &= ~2u;
                                  LOBYTE(v146) = v146 | 0x80;
                                  *(_DWORD *)(a1 + 24) = v146;
                                }
                              }
                            }
                            else if ( !((unsigned __int8)v161 | v180) && !v142 )
                            {
                              goto LABEL_425;
                            }
                            if ( (_QWORD)v184 )
                            {
                              v158 = &v212;
                              v177.m128i_i64[0] = (__int64)v237;
                              sub_124680((__int64)&v212, a1, (__int64)v237, 0);
                              v219 = 0;
                              v215 = (unsigned __int8 *)&off_4DDEA0;
                              v177.m128i_i32[0] = 0;
                              v216 = nullptr;
                              v143 = _mm_loadh_ps((const double *)&v158);
                              v218 = 0u;
                              v221 = 0;
                              v222 = 0;
                              v217 = (void *)a1;
                              v167 = (unsigned __int8 *)&v215;
                              v220 = v143;
                              while ( v177.m128i_i32[0] < (unsigned __int64)v184 )
                              {
                                v144 = *(unsigned int **)(v183 + 8LL * v177.m128i_i32[0]);
                                if ( *(_DWORD *)v220.m128_u64[0] != 8
                                  && (v176 = *(_QWORD **)(v183 + 8LL * v177.m128i_i32[0]),
                                      v145 = sub_125B90(
                                               (unsigned __int8 *)v220.m128_u64[0],
                                               *(_QWORD *)(*((_QWORD *)v217 + 8) + 1504LL),
                                               v144,
                                               0),
                                      v144 = (unsigned int *)v176,
                                      v145)
                                  && *(_DWORD *)(v220.m128_u64[0] + 68) == *((_DWORD *)v176 + 17) )
                                {
                                  v147 = v176 + 4;
                                  v165 = v176;
                                  v176 = *(_QWORD **)(*((_QWORD *)v217 + 8) + 1504LL);
                                  sub_125180((__int64)v147, (unsigned __int8 *)(v220.m128_u64[0] + 64));
                                  sub_172B80((__int64)v176, (__int64)v165);
                                }
                                else
                                {
                                  v221 = 0;
                                  if ( (unsigned int)sub_11E900(v144, (__int64)v167) || v221 <= 0 )
                                  {
                                    if ( !under_debugger )
                                      sub_383060(50538);
LABEL_464:
                                    BUG();
                                  }
                                }
                                ++v177.m128i_i32[0];
                              }
                              while ( v174.m128i_i32[0] < (unsigned __int64)v184 )
                                sub_167810(a1, *(_QWORD *)(v183 + 8LL * v174.m128i_i32[0]++), 6);
                              if ( *((_QWORD *)&v213 + 1) )
                              {
                                v214 = 0;
                                qfree(*((__int64 *)&v213 + 1));
                              }
                              qfree(v212);
                              sub_167810(a1, v181, 14);
                            }
                            goto LABEL_422;
                          }
                          sub_7CCD0(v162);
LABEL_417:
                          sub_93B40((__int64 *)v166);
                          sub_173DA0(n);
                          sub_93B40(v208);
                          goto LABEL_201;
                        }
LABEL_413:
                        sub_7CCD0(v162);
                      }
                    }
                    sub_93B40((__int64 *)v166);
                    sub_173DA0(n);
                    v132 = v208;
LABEL_415:
                    sub_93B40(v132);
                    goto LABEL_223;
                  }
                  if ( v82 == 67 )
                  {
                    if ( v13[9] == v13[17] )
                      goto LABEL_288;
                  }
                  else if ( v82 - 8 <= 2 )
                  {
                    goto LABEL_288;
                  }
                  v231 = nullptr;
                  *(_QWORD *)&v121 = a1;
                  v232 = 0u;
                  v233 = 0;
                  *((_QWORD *)&v121 + 1) = &v231;
                  v167 = v181 + 64;
                  n = (size_t)&v231;
                  sub_123EA0(v121, (__int64)(v181 + 64), 0, 0xFFFF0000);
                  sub_64700((__int64 *)n, &v185);
                  sub_3180C0((char *)&v232 + 8, &v187);
                  if ( (unsigned __int8)sub_64880((_QWORD *)n) && !v233.m128i_i64[0] )
                  {
LABEL_339:
                    sub_93B40((__int64 *)n);
                    goto LABEL_287;
                  }
                  v158 = &v212;
                  sub_123A40((__int64)&v212, v167, v122, v123);
                  if ( *v13 - 12 <= 1
                    && (v215 = nullptr, v216 = nullptr, (unsigned __int8)sub_122E10((__int64 *)&v215, v13))
                    && v216
                    && *v216 != 4 )
                  {
                    if ( (_BYTE)v212 == 4 )
                    {
                      if ( (unsigned int)(*(_DWORD *)v213 - 12) <= 1 )
                      {
                        v223 = 0;
                        *(_QWORD *)&v224 = 0;
                        if ( (unsigned __int8)sub_122E10(&v223, (_DWORD *)v213) )
                        {
                          if ( (_QWORD)v224
                            && sub_1255D0((unsigned __int8 *)v224, v169, (__int64)v166, 0)
                            && (~v223 & (unsigned __int64)&v215[v223] & 0x8000000000000000LL) == 0LL )
                          {
                            sub_11CDA0((__int64)v158);
                            goto LABEL_339;
                          }
                        }
                      }
                      goto LABEL_346;
                    }
                    v167 = v215;
                    sub_11CDA0((__int64)v158);
                    if ( (__int64)v167 >= 0 )
                      goto LABEL_339;
                  }
                  else
                  {
LABEL_346:
                    sub_11CDA0((__int64)v158);
                  }
                  if ( sub_124CC0(a1, (_QWORD *)n, (__int64)v181, (__int64)v13, 0, 1u)
                    || sub_A9D90(a1, (__int64 *)n, *((_QWORD *)v181 + 1), 0, 1u) )
                  {
                    sub_93B40((__int64 *)n);
                    goto LABEL_223;
                  }
                  goto LABEL_339;
                }
                if ( (unsigned int *)v55 == v13 )
                  goto LABEL_223;
                LOBYTE(v161) = *v13 == 4 || *v13 - 8 <= 3;
                if ( (_BYTE)v161 )
                {
                  if ( *((_BYTE *)v13 + 32) == 4 )
                  {
                    v56 = *((unsigned __int8 **)v13 + 5);
                  }
                  else
                  {
                    LOBYTE(v161) = 0;
                    v56 = (unsigned __int8 *)v13;
                  }
                }
                else
                {
                  v56 = (unsigned __int8 *)v13;
                }
                if ( *((_DWORD *)v56 + 17) <= *(_DWORD *)(v162 + 68) )
                {
                  v155 = *(_QWORD *)(a1 + 480);
                  v158 = *(__int64 **)(v155 + 112);
                  if ( sub_125B90(v56, (__int64)v158, (unsigned int *)v162, 1u) )
                  {
                    v57 = v164;
                    v154 = *(_QWORD *)(v162 + 8);
                    v153 = *((_QWORD *)v13 + 1);
                    n = (size_t)&v231;
                    sub_64000((__int64 *)&v231, (__int64)v164);
                    *((_QWORD *)&v232 + 1) = 0;
                    v233 = 0;
                    if ( v207 )
                    {
                      v152 = v207;
                      v151 = 16 * v207;
                      *((_QWORD *)&v232 + 1) = qalloc_or_throw(16 * v207, (__int64)v57, 16 * v207, v207);
                      v233.m128i_i64[1] = v152;
                      memcpy(*((void **)&v232 + 1), v206, v151);
                      v233.m128i_i64[0] = v152;
                    }
                    n = sub_A9D90(a1, (__int64 *)n, v153, v154, 1u);
                    if ( *((_QWORD *)&v232 + 1) )
                    {
                      v233.m128i_i64[0] = 0;
                      qfree(*((__int64 *)&v232 + 1));
                    }
                    qfree((__int64)v231);
                    if ( !n )
                    {
                      if ( sub_1225C0((__int64)v13) )
                      {
                        if ( sub_122600((unsigned int *)v162) && *(_DWORD *)(v162 + 68) == v13[9] )
                        {
LABEL_186:
                          sub_A33C0(a1, (__int64)v13);
                          if ( !(_BYTE)v161 )
                          {
                            sub_11CDA0((__int64)(v13 + 12));
                            *v13 = 4;
                          }
                          v58 = v13[9];
                          v176 = v13 + 8;
                          v177.m128i_i32[0] = v58;
                          sub_125180((__int64)(v13 + 8), (unsigned __int8 *)(v162 + 64));
                          v59 = *v13;
                          v60 = v13[9];
                          if ( *v13 > 9 )
                          {
                            if ( v59 != 10 )
                              goto LABEL_352;
                          }
                          else
                          {
                            if ( v59 <= 7 )
                            {
                              if ( v59 == 4 )
                              {
                                if ( v13[17] != v60 )
                                  goto LABEL_192;
                                goto LABEL_193;
                              }
LABEL_352:
                              if ( (int)v13[17] > v60 )
                              {
                                if ( !under_debugger )
                                  sub_383060(50539);
                                goto LABEL_464;
                              }
                              goto LABEL_193;
                            }
                            if ( v177.m128i_i32[0] < v60 )
                            {
                              if ( !(unsigned __int8)sub_12AB50(
                                                       (unsigned __int8 *)v176,
                                                       (__int64)v158,
                                                       v177.m128i_i32[0],
                                                       0) )
                              {
                                v174.m128i_i64[0] = *((_QWORD *)v13 + 3);
                                v130 = sub_11CC50((unsigned __int8 *)v176, v155);
                                sub_1207E0(
                                  (char *)v176,
                                  (__int64)v158,
                                  (unsigned int)v130 + 10,
                                  v174.m128i_i64[0],
                                  v177.m128i_i32[0]);
                              }
                              v60 = v13[9];
                            }
                          }
                          if ( v60 == v13[17] )
                          {
                            *v13 = 4;
                          }
                          else if ( v60 >= (int)v13[17] )
                          {
LABEL_192:
                            *v13 = 10;
                          }
LABEL_193:
                          sub_A3160(a1, v13, v162);
                          sub_167810(a1, v13, 6);
                          LOBYTE(v167) = 0;
                          LOBYTE(v161) = 0;
LABEL_194:
                          v61 = *(_DWORD *)(a1 + 24);
                          ++v178;
                          BYTE1(v61) &= ~2u;
                          LOBYTE(v61) = v61 | 0x80;
                          v46 = v179 == 0;
                          *(_DWORD *)(a1 + 24) = v61;
                          if ( !v46 )
                            sub_175220(v181 + 64);
                          if ( *(_DWORD *)v181 == 4 && v181[32] == 2 )
                            *((_DWORD *)v181 + 1) &= ~0x20000u;
                          if ( *(_BYTE *)(*(_QWORD *)(a1 + 480) + 1425LL) )
                            sub_A2520(a1, (__int64)"propagate step %d result (propagated %d)", v160, v178);
                          if ( (_BYTE)v167 )
                          {
                            v176 = nullptr;
                            v177.m128i_i64[0] = 0;
                            n = (size_t)&v231;
                            goto LABEL_201;
                          }
                          n = (size_t)&v231;
                          sub_124680((__int64)&v231, a1, (__int64)v181, 0);
                          sub_648D0(v192, (__int64 *)n);
                          v124 = *((_QWORD **)&v232 + 1);
                          v125 = _mm_loadu_si128(&v233);
                          *((_QWORD *)&v232 + 1) = 0;
                          v233 = 0;
                          if ( src )
                          {
                            v176 = v124;
                            v177 = v125;
                            v194.m128i_i64[0] = 0;
                            qfree((__int64)src);
                            v124 = v176;
                            v125 = _mm_load_si128(&v177);
                          }
                          src = v124;
                          v194 = v125;
                          sub_173690(v173, (__int64)v192);
                          sub_93B40((__int64 *)n);
                          sub_1751F0(v192, v175, v126, v127, v128, v129);
                          if ( v183 )
                          {
                            *(_QWORD *)&v184 = 0;
                            qfree(v183);
                          }
                          sub_93B40(v164);
                          sub_93B40(v170);
LABEL_145:
                          v176 = nullptr;
LABEL_52:
                          sub_64640(v192, &v185, (__int64)v16, (__int64)v17, v18, v19);
                          sub_317C60(&src, &v187);
                          goto LABEL_13;
                        }
                      }
                      else if ( !sub_122600((unsigned int *)v162) )
                      {
                        goto LABEL_186;
                      }
                    }
                  }
                }
                if ( *(_DWORD *)(get_ph() + 4) != 72 && *(_DWORD *)(get_ph() + 4) != 15 )
                  goto LABEL_223;
                v182[0] = a1;
                v182[1] = v177.m128i_i64[0];
                v182[2] = (__int64)v176;
                if ( !(unsigned __int8)sub_178580(v182, (unsigned int *)v181, (unsigned int *)v162) )
                  goto LABEL_223;
                v176 = *(_QWORD **)(v162 + 16);
                if ( !v176 )
                {
                  if ( !under_debugger )
                    sub_383060(52825);
                  goto LABEL_464;
                }
                sub_A33C0(a1, v162);
                sub_A3160(a1, (_QWORD *)v162, (__int64)v181);
              }
            }
            v158 = *((__int64 **)v13 + 1);
            v65 = sub_A9AA0(a1, v170, (__int64)v158, (__int64)v181, 1u);
            LOBYTE(v159) = 0;
            if ( v65 )
            {
LABEL_214:
              if ( (_QWORD)v184 )
              {
                if ( (v181[6] & 2) != 0 )
                {
                  v177.m128i_i64[0] = 0;
LABEL_223:
                  if ( v183 )
                  {
                    *(_QWORD *)&v184 = 0;
                    qfree(v183);
                  }
LABEL_138:
                  if ( v206 )
                  {
                    v207 = 0;
                    qfree((__int64)v206);
                  }
                  qfree(v205[0]);
                  if ( v203 )
                  {
                    v204 = 0;
                    qfree(v203);
                  }
                  qfree(v202[0]);
LABEL_143:
                  if ( v177.m128i_i64[0] )
                  {
                    sub_A33C0(a1, v177.m128i_i64[0]);
                    sub_A3160(a1, v177.m128i_i64[0], (__int64)v176);
                    goto LABEL_145;
                  }
                  goto LABEL_52;
                }
                if ( !(_BYTE)v162 && (v181[64] != 1 || *(_DWORD *)(v169 + 60) != *((_DWORD *)v181 + 18)) )
                {
                  if ( *v13 == 4 || *v13 == 67 && v13[9] == v13[17] )
                    LOBYTE(v163) = (*((_BYTE *)v13 + 32) == 4) | (unsigned __int8)v163;
                  else
                    LOBYTE(v163) = v177.m128i_i8[0];
                }
              }
              v156 = v159 ^ 1;
              if ( (unsigned __int8)v159 != 1 )
              {
                v177.m128i_i64[0] = 0;
                if ( (_BYTE)v163 )
                  goto LABEL_223;
              }
              goto LABEL_169;
            }
            v80 = v164;
            v161 = *(_DWORD *)(a1 + 72);
            n = (size_t)&v231;
            sub_64000((__int64 *)&v231, (__int64)v164);
            *((_QWORD *)&v232 + 1) = 0;
            v233 = 0;
            if ( v207 )
            {
              v159 = v207;
              v157 = 16 * v207;
              *((_QWORD *)&v232 + 1) = qalloc_or_throw(16 * v207, (__int64)v80, 16 * v207, v207);
              v233.m128i_i64[1] = v159;
              memcpy(*((void **)&v232 + 1), v206, v157);
              v233.m128i_i64[0] = v159;
            }
            LOBYTE(v159) = sub_1778B0(a1, (__int64 *)n, (__int64)v158, 0, (__int64)v181, &v183, v161);
            if ( !(_BYTE)v159 )
              goto LABEL_261;
            if ( (unsigned __int8)sub_64880((_QWORD *)n) && !v233.m128i_i64[0]
              || (unsigned __int8)sub_A2310((_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 104LL), (_QWORD *)n) )
            {
              goto LABEL_262;
            }
            v81 = *(__int64 **)(*(_QWORD *)(a1 + 64) + 784LL);
            if ( v81 )
              LOBYTE(v159) = !sub_17C4E0(v81, n, v161, 0xFFFFFFFF, 0, 0, 2u, 0x2001u);
            else
LABEL_261:
              LOBYTE(v159) = 0;
LABEL_262:
            if ( *((_QWORD *)&v232 + 1) )
            {
              v233.m128i_i64[0] = 0;
              qfree(*((__int64 *)&v232 + 1));
            }
            qfree((__int64)v231);
            goto LABEL_214;
          }
        }
        else
        {
          v22 = *(_QWORD *)(a1 + 64);
          if ( !*(_QWORD *)(v22 + 1040) || (v16 = *(_QWORD **)(v22 + 1016), v23 = v22 + 1008, !v16) )
          {
LABEL_43:
            if ( *(_DWORD *)v181 == 4 && v19 == 4 )
            {
              if ( sub_125B60(v181 + 32, (__int64)(v13 + 16), 0)
                && sub_125B60(v181 + 64, (__int64)(v13 + 8), 0)
                && v181[32] == 6 )
              {
                goto LABEL_17;
              }
              v19 = *v13;
            }
            if ( v19 != 10 )
            {
LABEL_46:
              if ( v19 == 62 )
              {
                if ( *(_DWORD *)v181 != 1 && *(_DWORD *)v181 != 4 )
                  goto LABEL_52;
                goto LABEL_49;
              }
              goto LABEL_47;
            }
            if ( (*((_BYTE *)v13 + 65) & 4) == 0 )
            {
              v232 = 0u;
              v231 = off_4DDF50;
              v233 = 0u;
              v234 = 0;
              v177.m128i_i64[0] = (__int64)&v235;
              sub_123A40((__int64)&v235, (unsigned __int8 *)v13 + 64, (__int64)v16, (__int64)v17);
              LODWORD(n) = sub_11E900(v181, (__int64)&v231);
              v231 = off_4DDF50;
              sub_11CDA0(v177.m128i_i64[0]);
              v19 = *v13;
              if ( (_DWORD)n )
                *((_BYTE *)v13 + 65) |= 4u;
              goto LABEL_46;
            }
            goto LABEL_47;
          }
        }
        v18 = v23;
        v24 = v16;
        do
        {
          while ( 1 )
          {
            v25 = v24[2];
            v26 = v24[3];
            if ( v24[4] < (unsigned __int64)v17 )
              break;
            v18 = (__int64)v24;
            v24 = (_QWORD *)v24[2];
            if ( !v25 )
              goto LABEL_35;
          }
          v24 = (_QWORD *)v24[3];
        }
        while ( v26 );
LABEL_35:
        if ( v18 == v23 )
        {
          v27 = v181;
        }
        else
        {
          if ( (unsigned __int64)v17 >= *(_QWORD *)(v18 + 32) )
            goto LABEL_52;
          v18 = v23;
          v27 = v181;
        }
        do
        {
          while ( 1 )
          {
            v17 = (_BYTE *)v16[2];
            v28 = v16[3];
            if ( v16[4] < (unsigned __int64)v21 )
              break;
            v18 = (__int64)v16;
            v16 = (_QWORD *)v16[2];
            if ( !v17 )
              goto LABEL_41;
          }
          v16 = (_QWORD *)v16[3];
        }
        while ( v28 );
LABEL_41:
        v181 = v27;
        if ( v18 != v23 && (unsigned __int64)v21 >= *(_QWORD *)(v18 + 32) )
          goto LABEL_52;
        goto LABEL_43;
      }
    }
LABEL_17:
    if ( v200 )
    {
      *(_QWORD *)&v201 = 0;
      qfree(v200);
    }
    qfree(v198);
    if ( v196 )
    {
      *(_QWORD *)&v197 = 0;
      qfree((__int64)v196);
    }
    qfree(v195);
    if ( src )
    {
      v194.m128i_i64[0] = 0;
      qfree((__int64)src);
    }
    qfree(v192[0]);
LABEL_6:
    v181 = *((_BYTE **)v181 + 1);
  }
  while ( v181 );
  if ( v178 )
  {
    v39 = *(_DWORD *)(a1 + 24);
    v40 = v178;
    BYTE1(v39) &= ~2u;
    LOBYTE(v39) = v39 | 0xC0;
    *(_DWORD *)(a1 + 24) = v39;
    sub_A2520(a1, (__int64)"propagate result: %d", v40);
  }
  *(_DWORD *)(a1 + 24) &= ~0x80u;
  if ( v190 )
  {
    *(_QWORD *)&v191 = 0;
    qfree(v190);
  }
LABEL_81:
  qfree(v189[0]);
  if ( v187 )
  {
    *(_QWORD *)&v188 = 0;
    qfree((__int64)v187);
  }
  qfree(v185);
  return v178;
}
