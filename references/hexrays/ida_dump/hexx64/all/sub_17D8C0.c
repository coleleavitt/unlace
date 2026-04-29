__int64 __fastcall sub_17D8C0(__int64 a1, unsigned __int8 a2, const __m128i *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // edx
  int v7; // esi
  _BYTE *v8; // rax
  int v9; // eax
  __int64 v10; // rbx
  unsigned int *v11; // rbx
  unsigned int *v12; // rax
  unsigned int v13; // eax
  _QWORD *v14; // rdx
  _BYTE *v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  __int64 v18; // rdi
  _BYTE *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r10
  _QWORD *v22; // rax
  __int64 v23; // r11
  __int64 v24; // rsi
  _BYTE *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rcx
  size_t v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rsi
  _QWORD *v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // rdi
  int v37; // eax
  int v38; // edx
  __int64 v40; // rax
  __int64 v41; // rsi
  _BYTE *v42; // rdx
  __int64 v43; // rax
  bool v44; // zf
  int v45; // edx
  __int64 v46; // rdx
  _BYTE *v47; // rdx
  __int128 v48; // rdi
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  size_t v51; // rax
  unsigned __int8 *v52; // rdi
  __int32 v53; // eax
  unsigned int v54; // edx
  __int32 v55; // eax
  int v56; // eax
  __int64 *v57; // rbx
  void *v58; // rbx
  __m128i v59; // xmm0
  __int64 v60; // rax
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  int v65; // r9d
  __int64 v66; // rax
  __int64 v67; // rax
  size_t v68; // rcx
  __int64 *v69; // r8
  char v70; // al
  __int64 v71; // rdi
  char v72; // al
  __int64 *v73; // rdi
  unsigned int v74; // eax
  __int64 v75; // rax
  unsigned __int8 *v76; // rcx
  __int64 *v77; // r8
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  int v81; // r9d
  __int64 v82; // rdx
  __int64 v83; // r8
  int v84; // r9d
  unsigned __int8 *v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  int v89; // r9d
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  int v93; // r9d
  char v94; // al
  __int8 v95; // dl
  __int64 *v96; // rax
  unsigned __int8 *v97; // r9
  unsigned __int8 *v98; // rdi
  __int64 *v99; // rax
  __int64 v100; // rdi
  _QWORD *v101; // rax
  __int64 v102; // rsi
  unsigned __int8 *v103; // rsi
  __int64 v104; // rdi
  _BYTE *v105; // rdi
  char v106; // al
  __int128 v107; // rdi
  _QWORD *v108; // rax
  __m128i v109; // xmm0
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  int v113; // r9d
  unsigned __int8 v114; // al
  char v115; // al
  _QWORD *v116; // rdi
  int v117; // ecx
  int v118; // eax
  _BYTE *v119; // rsi
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rdi
  __int64 v125; // rdx
  int v126; // eax
  __m128 v127; // xmm0
  unsigned int *v128; // rdx
  char v129; // al
  int v130; // eax
  _QWORD *v131; // rdi
  char v132; // dl
  int v133; // eax
  __int64 v134; // [rsp+8h] [rbp-548h]
  __int64 v135; // [rsp+10h] [rbp-540h]
  __int64 v136; // [rsp+18h] [rbp-538h]
  __int64 v137; // [rsp+20h] [rbp-530h]
  __int64 v138; // [rsp+28h] [rbp-528h]
  char v139; // [rsp+30h] [rbp-520h]
  __int64 v140; // [rsp+30h] [rbp-520h]
  __int64 *v141; // [rsp+38h] [rbp-518h] BYREF
  __int64 v142; // [rsp+40h] [rbp-510h]
  int v143; // [rsp+48h] [rbp-508h]
  int v144; // [rsp+4Ch] [rbp-504h]
  size_t v145; // [rsp+50h] [rbp-500h]
  __int64 *v146; // [rsp+58h] [rbp-4F8h]
  __int64 *v147; // [rsp+60h] [rbp-4F0h]
  _QWORD *v148; // [rsp+68h] [rbp-4E8h]
  unsigned __int8 *v149; // [rsp+70h] [rbp-4E0h]
  unsigned __int8 *v150; // [rsp+78h] [rbp-4D8h] BYREF
  const __m128i *v151; // [rsp+80h] [rbp-4D0h]
  __int64 v152; // [rsp+88h] [rbp-4C8h]
  _QWORD *v153; // [rsp+90h] [rbp-4C0h]
  size_t n; // [rsp+98h] [rbp-4B8h] BYREF
  __int64 *v155; // [rsp+A0h] [rbp-4B0h]
  __int64 *v156; // [rsp+A8h] [rbp-4A8h]
  __m128i v157; // [rsp+B0h] [rbp-4A0h] BYREF
  __int64 *v158; // [rsp+C0h] [rbp-490h]
  _QWORD *v159; // [rsp+C8h] [rbp-488h]
  __m128i v160; // [rsp+D0h] [rbp-480h] BYREF
  unsigned int v161; // [rsp+E0h] [rbp-470h]
  unsigned __int8 v162; // [rsp+E6h] [rbp-46Ah]
  unsigned __int8 v163; // [rsp+E7h] [rbp-469h]
  _BYTE *v164; // [rsp+E8h] [rbp-468h]
  __int64 v165[4]; // [rsp+F0h] [rbp-460h] BYREF
  __int64 v166; // [rsp+110h] [rbp-440h] BYREF
  __int128 v167; // [rsp+118h] [rbp-438h]
  __int64 v168; // [rsp+130h] [rbp-420h] BYREF
  __int64 v169; // [rsp+138h] [rbp-418h]
  void *v170; // [rsp+140h] [rbp-410h] BYREF
  __int128 v171; // [rsp+148h] [rbp-408h]
  __int64 v172[2]; // [rsp+160h] [rbp-3F0h] BYREF
  __int64 v173; // [rsp+170h] [rbp-3E0h] BYREF
  __int128 v174; // [rsp+178h] [rbp-3D8h]
  __int64 v175[2]; // [rsp+190h] [rbp-3C0h] BYREF
  void *src; // [rsp+1A0h] [rbp-3B0h] BYREF
  __m128i v177; // [rsp+1A8h] [rbp-3A8h]
  __int64 v178; // [rsp+1C0h] [rbp-390h] BYREF
  void *v179; // [rsp+1D0h] [rbp-380h]
  __int128 v180; // [rsp+1D8h] [rbp-378h]
  __int64 v181; // [rsp+1F0h] [rbp-360h] BYREF
  __int64 v182; // [rsp+1F8h] [rbp-358h]
  __int64 v183; // [rsp+200h] [rbp-350h] BYREF
  __int128 v184; // [rsp+208h] [rbp-348h]
  _QWORD v185[2]; // [rsp+220h] [rbp-330h] BYREF
  __int64 v186; // [rsp+230h] [rbp-320h] BYREF
  __int64 v187; // [rsp+238h] [rbp-318h]
  void *v188[2]; // [rsp+250h] [rbp-300h] BYREF
  void *v189; // [rsp+260h] [rbp-2F0h] BYREF
  __int64 v190; // [rsp+268h] [rbp-2E8h]
  _QWORD v191[6]; // [rsp+280h] [rbp-2D0h] BYREF
  __int64 v192[2]; // [rsp+2B0h] [rbp-2A0h] BYREF
  void *v193; // [rsp+2C0h] [rbp-290h] BYREF
  __int128 v194; // [rsp+2C8h] [rbp-288h]
  __int64 v195; // [rsp+2E0h] [rbp-270h] BYREF
  __int128 v196; // [rsp+2E8h] [rbp-268h]
  __int64 v197; // [rsp+2F8h] [rbp-258h]
  unsigned __int8 *v198; // [rsp+310h] [rbp-240h] BYREF
  _BYTE *v199; // [rsp+318h] [rbp-238h]
  void *v200; // [rsp+320h] [rbp-230h]
  __int128 v201; // [rsp+328h] [rbp-228h]
  char v202; // [rsp+338h] [rbp-218h]
  __m128 v203; // [rsp+340h] [rbp-210h]
  int v204; // [rsp+350h] [rbp-200h]
  char v205; // [rsp+354h] [rbp-1FCh]
  __int64 v206; // [rsp+360h] [rbp-1F0h] BYREF
  __int128 v207; // [rsp+368h] [rbp-1E8h] BYREF
  __int128 v208; // [rsp+378h] [rbp-1D8h]
  __int64 v209; // [rsp+388h] [rbp-1C8h]
  unsigned __int64 v210; // [rsp+390h] [rbp-1C0h]
  __int64 v211; // [rsp+398h] [rbp-1B8h]
  unsigned __int64 v212; // [rsp+3A0h] [rbp-1B0h]
  __int64 v213; // [rsp+3A8h] [rbp-1A8h]
  __int64 (__fastcall **v214)(); // [rsp+3B0h] [rbp-1A0h] BYREF
  __int128 v215; // [rsp+3B8h] [rbp-198h] BYREF
  __m128i v216; // [rsp+3C8h] [rbp-188h] BYREF
  char v217; // [rsp+3D8h] [rbp-178h]
  __int64 v218; // [rsp+3E0h] [rbp-170h] BYREF
  unsigned __int8 *v219; // [rsp+3E8h] [rbp-168h]
  _BYTE v220[160]; // [rsp+3F8h] [rbp-158h] BYREF
  __int64 v221; // [rsp+498h] [rbp-B8h] BYREF
  char v222[24]; // [rsp+4A8h] [rbp-A8h] BYREF
  __int64 v223; // [rsp+4C0h] [rbp-90h] BYREF
  char v224[32]; // [rsp+4D0h] [rbp-80h] BYREF
  __int64 v225; // [rsp+4F0h] [rbp-60h]
  int v226; // [rsp+508h] [rbp-48h]
  unsigned __int8 v227; // [rsp+50Dh] [rbp-43h]
  unsigned __int8 v228; // [rsp+50Eh] [rbp-42h]
  char v229; // [rsp+512h] [rbp-3Eh]
  char v230; // [rsp+513h] [rbp-3Dh]
  unsigned __int64 v231; // [rsp+518h] [rbp-38h]

  v151 = a3;
  v163 = a2;
  v231 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 64);
  v171 = 0;
  v168 = 0;
  v5 = *(_QWORD *)(v4 + 1504);
  v169 = 0;
  v170 = nullptr;
  v6 = *(_DWORD *)(v5 + 84);
  v7 = *(_DWORD *)(v5 + 60);
  v152 = v5;
  v155 = v172;
  v172[0] = 0;
  v172[1] = 0;
  sub_63E80(v172, v7, v6);
  v8 = *(_BYTE **)(a1 + 48);
  v173 = 0;
  v156 = &v178;
  v164 = v8;
  v161 = 0;
  v158 = &v181;
  v174 = 0;
  if ( !v8 )
  {
    *(_DWORD *)(a1 + 24) &= ~0x80u;
    goto LABEL_81;
  }
  do
  {
    v9 = *(_DWORD *)v164;
    if ( *(_DWORD *)v164 == 60 )
      goto LABEL_6;
    if ( v9 == 56 )
    {
      if ( !v164[64] )
        goto LABEL_6;
    }
    else if ( v9 == 57 && !v164[64] && (unsigned __int8)sub_1D2A70(*(_QWORD *)(a1 + 480), *((_QWORD *)v164 + 3)) )
    {
      goto LABEL_6;
    }
    sub_124680((__int64)v175, a1, (__int64)v164, 0);
    sub_64000(v156, (__int64)v175);
    v10 = v177.m128i_i64[0];
    v179 = nullptr;
    v180 = 0;
    if ( v177.m128i_i64[0] )
    {
      v179 = (void *)qalloc_or_throw(16 * v177.m128i_i64[0]);
      *((_QWORD *)&v180 + 1) = v10;
      memcpy(v179, src, 16 * v10);
      *(_QWORD *)&v180 = v10;
    }
    v181 = 0;
    v11 = (unsigned int *)v164;
    v182 = 0;
    v183 = 0;
    v159 = nullptr;
    v184 = 0;
LABEL_13:
    v12 = (unsigned int *)sub_129150(a1, v175, *((_QWORD *)v11 + 2), 0, &v168, 0, 0x101u);
    v11 = v12;
    if ( v12 )
    {
      if ( !v163 || (v13 = *v12, v13 == 4) || v13 == 67 && v11[17] == v11[9] )
      {
        sub_64280(v158, &v168);
        sub_316CB0(&v183, &v170);
        v18 = *v11;
        if ( (unsigned int)(v18 - 61) > 1 && !(unsigned __int8)sub_32ED70(v18) )
          goto LABEL_52;
        v157.m128i_i32[0] = v11[1] & 0x20000;
        if ( v157.m128i_i32[0] )
          goto LABEL_52;
        v15 = *((_BYTE **)v11 + 3);
        v17 = *v11;
        v19 = *((_BYTE **)v164 + 3);
        if ( v15 == v19 )
          goto LABEL_46;
        if ( v17 == 67 )
        {
          if ( v11[17] == 4 )
          {
            if ( (int)v11[9] > 4 && *((_BYTE *)v11 + 32) != 13 )
              goto LABEL_52;
            v40 = *(_QWORD *)(a1 + 64);
            if ( !*(_QWORD *)(v40 + 1040) )
              goto LABEL_47;
          }
          else
          {
            v40 = *(_QWORD *)(a1 + 64);
            if ( !*(_QWORD *)(v40 + 1040) )
            {
              if ( *(_DWORD *)v164 != 62 )
                goto LABEL_48;
              goto LABEL_93;
            }
          }
          v14 = *(_QWORD **)(v40 + 1016);
          v21 = v40 + 1008;
          if ( !v14 )
          {
LABEL_47:
            if ( *(_DWORD *)v164 != 62 )
              goto LABEL_48;
            v41 = *((_QWORD *)v164 + 3);
            if ( *((_QWORD *)v11 + 3) == v41 )
            {
              if ( !sub_120720((__int64)v11, v41) )
                goto LABEL_52;
LABEL_48:
              if ( *v11 == 61 )
              {
                v15 = v164;
                if ( *(_DWORD *)v164 != 4 && (*(_DWORD *)v164 != 67 || *((_DWORD *)v164 + 17) != *((_DWORD *)v164 + 9)) )
                  goto LABEL_52;
              }
              goto LABEL_49;
            }
LABEL_93:
            if ( *v11 == 61 )
              goto LABEL_52;
LABEL_49:
            if ( *((_BYTE *)v11 + 64) == 8 && !v11[17] )
              goto LABEL_52;
            if ( (unsigned __int8)sub_64780(&v168, v155) )
              goto LABEL_52;
            v160.m128i_i64[0] = (__int64)&v173;
            if ( (unsigned __int8)sub_318470(&v170, &v173) )
              goto LABEL_52;
            v149 = (unsigned __int8 *)(v11 + 16);
            LOBYTE(v150) = sub_330E90(a1, v11 + 16);
            if ( (_BYTE)v150 )
              goto LABEL_52;
            v153 = v185;
            sub_124680((__int64)v185, a1, (__int64)v11, 1u);
            if ( (unsigned __int8)sub_64780(v153, v155) || (unsigned __int8)sub_318470(&v186, v160.m128i_i64[0]) )
            {
              if ( v164[32] == 4 || v164[48] == 4 || v164[64] == 4 )
                goto LABEL_110;
              v27 = *((_QWORD *)v11 + 3);
              v160.m128i_i64[0] = *(_QWORD *)(a1 + 64);
              v28 = sub_1CFBB0(v160.m128i_i64[0], v27);
              if ( (v11[1] & 0x20) != 0 )
                v28 += *(int *)(*(_QWORD *)(v160.m128i_i64[0] + 1504) + 80LL);
              v29 = *(_QWORD *)(a1 + 64);
              v160.m128i_i64[0] = v28;
              v30 = *((_QWORD *)v164 + 3);
              n = v29;
              v31 = sub_1CFBB0(v29, v30);
              if ( (v164[4] & 0x20) != 0 )
                v31 += *(int *)(*(_QWORD *)(n + 1504) + 80LL);
              if ( v160.m128i_i64[0] != v31 )
                goto LABEL_110;
            }
            if ( v163 )
            {
              v160.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL);
              if ( (unsigned __int8)sub_64780(v153, (_QWORD *)(v160.m128i_i64[0] + 104))
                || (unsigned __int8)sub_318470(&v186, v160.m128i_i64[0] + 120) )
              {
                v32 = *(_QWORD *)(a1 + 64);
                v33 = *((_QWORD *)v11 + 3);
                v34 = (_QWORD *)(v32 + 1056);
                v35 = *(_QWORD **)(v32 + 1064);
                v36 = v34;
                if ( !v35 )
                  goto LABEL_110;
                do
                {
                  if ( v35[4] >= v33 )
                  {
                    v36 = v35;
                    v35 = (_QWORD *)v35[2];
                  }
                  else
                  {
                    v35 = (_QWORD *)v35[3];
                  }
                }
                while ( v35 );
                if ( v34 == v36 || v33 < v36[4] )
                  goto LABEL_110;
              }
            }
            LOBYTE(v148) = sub_172FB0(v11);
            if ( (_BYTE)v148 )
            {
              if ( (*(_BYTE *)(a1 + 25) & 8) == 0 )
                goto LABEL_110;
            }
            if ( (unsigned __int8)sub_318470(&v170, *(_QWORD *)(a1 + 64) + 232LL)
              || (unsigned __int8)sub_318470(&v186, *(_QWORD *)(a1 + 64) + 232LL) )
            {
              v42 = *((_BYTE **)v11 + 1);
              for ( n = (size_t)&v214; v42 != v164; v42 = *(_BYTE **)(v160.m128i_i64[0] + 8) )
              {
                v215 = 0u;
                v216 = 0u;
                v214 = &off_4DDF00;
                v160.m128i_i64[0] = (__int64)v42;
                if ( (unsigned int)sub_11F760(v42, (_QWORD *)n) )
                  goto LABEL_110;
              }
            }
            if ( (*((_BYTE *)v11 + 65) & 8) != 0 )
            {
              v49 = *((unsigned __int8 *)v11 + 64);
              v162 = 0;
              if ( (unsigned __int8)v49 <= 9u )
              {
                v50 = 610;
                v162 = _bittest64(&v50, v49);
              }
            }
            else
            {
              v162 = 0;
            }
            v43 = *(_QWORD *)(a1 + 64);
            v44 = (_BYTE)v148 == 0;
            v45 = *(_DWORD *)(v43 + 888) + 1;
            v143 = *(_DWORD *)(v43 + 888);
            *(_DWORD *)(v43 + 888) = v45;
            if ( v44 )
            {
              v46 = *((_QWORD *)v11 + 1);
              LOBYTE(v146) = *v11 == 62;
              v160.m128i_i8[0] = sub_AE9C0(a1, &v168, v46, (__int64)v164, 1u) ^ 1;
              if ( (unsigned __int8)sub_64880(&v168) && !(_QWORD)v171 )
                goto LABEL_110;
            }
            else
            {
              v146 = (__int64 *)&v198;
              sub_64000((__int64 *)&v198, (__int64)&v168);
              v200 = nullptr;
              v201 = 0;
              if ( (_QWORD)v171 )
              {
                v160.m128i_i64[0] = v171;
                n = 16 * v171;
                v200 = (void *)qalloc_or_throw(16 * v171);
                *((_QWORD *)&v201 + 1) = v160.m128i_i64[0];
                memcpy(v200, v170, n);
                *(_QWORD *)&v201 = v160.m128i_i64[0];
              }
              if ( sub_B0230(a1, v146, *((_QWORD *)v11 + 1), (__int64)v164, 3, 1u)
                || sub_120380(v11, 0) && sub_120380(v164, 0) )
              {
                goto LABEL_158;
              }
              v61 = *(_DWORD *)v164;
              if ( *(_DWORD *)v164 == 1
                || (v61 != 4 && (v61 != 67 || *((_DWORD *)v164 + 9) != *((_DWORD *)v164 + 17)) || v164[32] == 4)
                && (!sub_11C8A0((__int64)v164, &v214) || *(_BYTE *)v214 == 4)
                && (v164[32] != 1 || v164[48] != 1) )
              {
                v145 = (size_t)&v206;
                sub_64000(&v206, (__int64)&v168);
                *((_QWORD *)&v207 + 1) = 0;
                v208 = 0;
                if ( (_QWORD)v171 )
                {
                  v160.m128i_i64[0] = v171;
                  n = 16 * v171;
                  *((_QWORD *)&v207 + 1) = qalloc_or_throw(16 * v171);
                  *((_QWORD *)&v208 + 1) = v160.m128i_i64[0];
                  memcpy(*((void **)&v207 + 1), v170, n);
                  *(_QWORD *)&v208 = v160.m128i_i64[0];
                }
                n = (size_t)&v214;
                sub_127A20((__int64)&v214, a1, (__int64)v11, 0);
                sub_64640((__int64 *)v145, (__int64 *)n, v62, v63, v64, v65);
                v160.m128i_i64[0] = (__int64)&v207 + 8;
                sub_317C60((char *)&v207 + 8, (char *)&v215 + 8);
                if ( *((_QWORD *)&v215 + 1) )
                {
                  v216.m128i_i64[0] = 0;
                  qfree(*((_QWORD *)&v215 + 1));
                }
                qfree(v214);
                v66 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
                v217 = 0;
                v215 = 0u;
                v216 = 0u;
                v214 = &off_4DDF28;
                v218 = v66;
                if ( (unsigned int)sub_11E900(v11, n) )
                {
                  v67 = *(_QWORD *)(a1 + 64);
                  v68 = *(_QWORD *)(v67 + 128);
                  v69 = *(__int64 **)(v67 + 568);
                  v195 = 0;
                  v196 = 0;
                  n = v68;
                  v141 = &v195;
                  if ( (__int64 *)((char *)v69 + v68 - 1) >= v69 )
                  {
                    v147 = v69;
                    v195 = qvector_reserve(v141, 0, 1, 16);
                    *(__m128 *)(v195 + 16 * v196) = _mm_loadh_ps((const double *)&n);
                    *(_QWORD *)&v196 = v196 + 1;
                  }
                  sub_3180C0(v160.m128i_i64[0], v141);
                  if ( v195 )
                  {
                    *(_QWORD *)&v196 = 0;
                    qfree(v195);
                  }
                }
                else if ( *((_QWORD *)&v207 + 1) )
                {
                  *(_QWORD *)&v208 = 0;
                  qfree(*((_QWORD *)&v207 + 1));
                  *((_QWORD *)&v207 + 1) = 0;
                  *((_QWORD *)&v208 + 1) = 0;
                }
                v70 = sub_64780((_QWORD *)v145, v175);
                v71 = *((_QWORD *)&v207 + 1);
                if ( v70 || (v72 = sub_318470(v160.m128i_i64[0], &src), v71 = *((_QWORD *)&v207 + 1), v72) )
                {
                  if ( v71 )
                  {
                    *(_QWORD *)&v208 = 0;
                    qfree(v71);
                  }
                  qfree(v206);
LABEL_158:
                  if ( v200 )
                  {
                    *(_QWORD *)&v201 = 0;
                    qfree(v200);
                  }
                  qfree(v198);
LABEL_110:
                  if ( v186 )
                  {
                    v187 = 0;
                    qfree(v186);
                  }
                  qfree(v185[0]);
                  goto LABEL_52;
                }
                if ( *((_QWORD *)&v207 + 1) )
                {
                  *(_QWORD *)&v208 = 0;
                  qfree(*((_QWORD *)&v207 + 1));
                }
                qfree(v206);
              }
              if ( v200 )
              {
                *(_QWORD *)&v201 = 0;
                qfree(v200);
              }
              qfree(v198);
              LOBYTE(v146) = (_BYTE)v148;
              v160.m128i_i8[0] = (char)v148;
            }
            v147 = (__int64 *)v188;
            sub_127A20((__int64)v188, a1, (__int64)v11, 0x100u);
            if ( (unsigned int)(*(_DWORD *)v164 - 1) > 1 )
            {
              LOBYTE(v145) = 0;
            }
            else
            {
              v47 = v164 + 48;
              if ( *(_DWORD *)v164 == 2 )
                v47 = v164 + 32;
              *(_QWORD *)&v48 = a1;
              *((_QWORD *)&v48 + 1) = &v214;
              v214 = nullptr;
              v215 = 0u;
              n = (size_t)&v214;
              v216 = 0;
              sub_123EA0(v48, (__int64)v47, 1u, 0xFFFF0000);
              LOBYTE(v145) = sub_64780(v147, (_QWORD *)n);
              if ( !(_BYTE)v145 )
                LOBYTE(v145) = sub_318470(&v189, (char *)&v215 + 8);
              if ( *((_QWORD *)&v215 + 1) )
              {
                v216.m128i_i64[0] = 0;
                qfree(*((_QWORD *)&v215 + 1));
              }
              qfree(v214);
            }
            v166 = 0;
            v167 = 0;
            LODWORD(n) = *(_DWORD *)v164;
            if ( (unsigned int)(n - 56) <= 1 && !v164[64] || !v160.m128i_i8[0] )
            {
              v160.m128i_i64[0] = 0;
              if ( (_BYTE)v146 )
                goto LABEL_138;
              LOBYTE(v142) = 0;
              v139 = 1;
LABEL_169:
              for ( v160.m128i_i64[0] = 0; ; v160.m128i_i64[0] = v145 )
              {
                v51 = sub_A9AA0(a1, v153, (__int64)v11, (__int64)v164, 1u);
                v145 = v51;
                if ( !v51 )
                {
                  LOBYTE(v144) = 0;
                  goto LABEL_284;
                }
                if ( (_BYTE)v142 )
                {
                  LOBYTE(v146) = v142;
                  LOBYTE(v144) = v142;
LABEL_284:
                  v74 = *v11;
                  if ( *v11 == 61 )
                  {
                    if ( !sub_A4680(a1, (__int64)v164, &v168) )
                      goto LABEL_223;
                    goto LABEL_194;
                  }
                  if ( *(_DWORD *)v164 != 1 || v74 == 4 )
                  {
LABEL_287:
                    if ( *((_BYTE *)v11 + 64) != 14 )
                      goto LABEL_288;
                    if ( *(_DWORD *)v164 == 4 )
                    {
                      v149 = *((unsigned __int8 **)v11 + 9);
                      v97 = v149 + 16;
                      goto LABEL_326;
                    }
                    if ( *(_DWORD *)v164 == 11
                      && v164[32] == 4
                      && !v145
                      && sub_125B90(*((unsigned __int8 **)v164 + 5), *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL), v11, 0) )
                    {
                      v96 = *((__int64 **)v11 + 9);
                      v44 = *(_DWORD *)v164 == 4;
                      v149 = (unsigned __int8 *)v96;
                      v97 = (unsigned __int8 *)(v96 + 2);
                      v98 = v164 + 32;
                      if ( !v44 )
                        goto LABEL_316;
LABEL_326:
                      v150 = v97;
                      n = (size_t)(v164 + 32);
                      v106 = sub_125B60(v164 + 32, (__int64)v149, 0);
                      v97 = v150;
                      if ( !v106 )
                      {
                        v96 = *((__int64 **)v11 + 9);
                        v98 = (unsigned __int8 *)n;
LABEL_316:
                        n = (size_t)v97;
                        if ( !sub_125B60(v98, (__int64)(v96 + 2), 0) )
                          goto LABEL_288;
                        v99 = (__int64 *)v149;
                        v149 = (unsigned __int8 *)n;
                        v97 = (unsigned __int8 *)v99;
                      }
                      v100 = *(_QWORD *)(a1 + 64);
                      v145 = (size_t)(v164 + 64);
                      LOBYTE(v150) = sub_12CF30(v100, (__int64)v97, (__int64)(v164 + 64), 0, 0, (int)v97);
                      if ( !(_BYTE)v150 )
                        goto LABEL_288;
                      if ( v164 == *((_BYTE **)v11 + 1) )
                      {
LABEL_324:
                        v101 = (_QWORD *)j__qalloc_or_throw(80);
                        v159 = v101;
                        v160.m128i_i64[0] = (__int64)(v101 + 4);
                        v157.m128i_i64[0] = (__int64)(v101 + 8);
                        v102 = *((_QWORD *)v11 + 3);
                        v101[7] = 0;
                        v101[4] = 0xFFFFFFFF00000000LL;
                        v101[5] = 0;
                        v101[6] = 0xFFFFFFFF00000000LL;
                        v101[8] = 0xFFFFFFFF00000000LL;
                        v101[9] = 0;
                        sub_330970(v101, v102);
                        v103 = (unsigned __int8 *)v145;
                        v104 = v160.m128i_i64[0];
                        *(_DWORD *)v159 = 4;
                        sub_125180(v104, v103);
                        sub_125180(v157.m128i_i64[0], v149);
                        sub_A3160(a1, v159, (__int64)v11);
                        sub_125180((__int64)v149, (unsigned __int8 *)v160.m128i_i64[0]);
                        v105 = v164;
                        *((_QWORD *)v11 + 3) = *((_QWORD *)v164 + 3);
                        sub_11D5A0((__int64)v105);
                        sub_167810(a1, v11, 6);
                        goto LABEL_194;
                      }
                      v214 = nullptr;
                      v215 = 0u;
                      n = (size_t)&v214;
                      v216 = 0;
                      sub_127FE0(a1, (__int64 *)&v214, v145, 0);
                      if ( !sub_B0230(a1, (__int64 *)n, *((_QWORD *)v11 + 1), (__int64)v164, 3, 1u) )
                      {
                        if ( *((_QWORD *)&v215 + 1) )
                        {
                          v216.m128i_i64[0] = 0;
                          qfree(*((_QWORD *)&v215 + 1));
                        }
                        qfree(v214);
                        goto LABEL_324;
                      }
                      if ( *((_QWORD *)&v215 + 1) )
                      {
                        v216.m128i_i64[0] = 0;
                        qfree(*((_QWORD *)&v215 + 1));
                      }
                      qfree(v214);
                    }
LABEL_288:
                    if ( (_BYTE)v144 && v139 )
                      goto LABEL_223;
                    LOBYTE(v144) = v142 | v144;
                    if ( (_BYTE)v144 )
                    {
                      v75 = *(_QWORD *)(a1 + 64);
                      v76 = *(unsigned __int8 **)(v75 + 128);
                      v77 = *(__int64 **)(v75 + 568);
                      v215 = 0;
                      v214 = nullptr;
                      v150 = v76;
                      n = (size_t)&v214;
                      if ( (char *)v77 + (_QWORD)v76 - 1 >= (char *)v77 )
                      {
                        v149 = (unsigned __int8 *)v77;
                        v214 = (__int64 (__fastcall **)())qvector_reserve(n, 0, 1, 16);
                        *(__m128 *)&v214[2 * v215] = _mm_loadh_ps((const double *)&v150);
                        *(_QWORD *)&v215 = v215 + 1;
                      }
                      LOBYTE(v144) = sub_317F40(n, &v189);
                      if ( v214 )
                      {
                        *(_QWORD *)&v215 = 0;
                        qfree(v214);
                      }
                      if ( !(_BYTE)v144 )
                        goto LABEL_223;
                      if ( (_QWORD)v167 )
                      {
                        sub_1751F0(v147, v156, v78, v79, v80, v81);
                        if ( !(unsigned __int8)sub_64880(v147) || v190 )
                        {
                          LODWORD(v150) = 0;
                          while ( (int)v150 < (unsigned __int64)v167 )
                          {
                            sub_124680(n, a1, *(_QWORD *)(v166 + 8LL * (int)v150), 0);
                            v115 = sub_94210((_QWORD *)n, v147);
                            v116 = (_QWORD *)n;
                            if ( v115 )
                              goto LABEL_415;
                            sub_93B40((_QWORD *)n);
                            LODWORD(v150) = (_DWORD)v150 + 1;
                          }
                        }
                      }
                    }
                    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 480) + 607LL) & 2) == 0 && sub_17D770(a1, v11, v151) )
                      goto LABEL_223;
                    sub_124680((__int64)v191, a1, (__int64)v164, 0x800u);
                    n = (size_t)&v214;
                    sub_1752C0((__int64)&v214, (__int64)v191, (__int64)v11, v164, a1, a1, 0, v144, (__int64)v153);
                    v149 = (unsigned __int8 *)v192;
                    sub_64000(v192, (__int64)v156);
                    v85 = (unsigned __int8 *)v180;
                    v193 = nullptr;
                    v194 = 0;
                    if ( (_QWORD)v180 )
                    {
                      v150 = (unsigned __int8 *)v180;
                      v145 = 16 * v180;
                      v193 = (void *)qalloc_or_throw(16 * v180);
                      *((_QWORD *)&v194 + 1) = v150;
                      memcpy(v193, v179, v145);
                      v85 = v150;
                      *(_QWORD *)&v194 = v150;
                    }
                    sub_1751F0((__int64 *)v149, v175, v82, (__int64)v85, v83, v84);
                    sub_64640(&v221, (__int64 *)v149, v86, v87, v88, v89);
                    v150 = (unsigned __int8 *)&v193;
                    sub_317C60(v222, &v193);
                    LOBYTE(v145) = sub_64640(&v223, (__int64 *)v149, v90, v91, v92, v93);
                    v94 = sub_317C60(v224, v150);
                    v229 = v145 | v94;
                    LODWORD(v150) = sub_175BD0(n, (__int64)v164);
                    if ( v226 )
                    {
                      LOBYTE(v145) = v226 == 1;
                      v132 = sub_11CC50(v219 + 64, *(_QWORD *)(v225 + 480));
                      v133 = 0;
                      if ( (_BYTE)v145 == v132 )
                        v133 = 3;
                      v227 = sub_AB6D0(v225, (unsigned int *)v219, (int)v219 + 64, v133 | 4u);
                    }
                    v161 += v227;
                    if ( (_DWORD)v150 == -2 )
                      goto LABEL_417;
                    if ( !(_DWORD)v150 )
                    {
                      LODWORD(v150) = v228;
                      if ( v228 )
                      {
                        sub_93B40(v149);
                        sub_173DA0(n);
                        sub_93B40(v191);
                        goto LABEL_194;
                      }
                      v95 = v144;
                      if ( v227 || (v95 = sub_B36D0(a1, v11), v227) )
                      {
                        v159 = nullptr;
                        v160.m128i_i64[0] = 0;
                      }
                      v157.m128i_i8[0] = v95;
                      sub_93B40(v149);
                      sub_173DA0(n);
                      sub_93B40(v191);
                      if ( !v157.m128i_i8[0] )
                      {
LABEL_210:
                        if ( v166 )
                        {
                          *(_QWORD *)&v167 = 0;
                          qfree(v166);
                        }
                        sub_93B40(v147);
                        sub_93B40(v153);
                        goto LABEL_143;
                      }
LABEL_201:
                      v57 = (__int64 *)n;
                      sub_124680(n, a1, (__int64)v164, 0);
                      sub_648D0(v175, v57);
                      v58 = *((void **)&v215 + 1);
                      v59 = _mm_loadu_si128(&v216);
                      *((_QWORD *)&v215 + 1) = 0;
                      v216 = 0;
                      if ( src )
                      {
                        v157 = v59;
                        v177.m128i_i64[0] = 0;
                        qfree(src);
                        v59 = _mm_load_si128(&v157);
                      }
                      src = v58;
                      v177 = v59;
                      sub_173690(v156, (__int64)v175);
                      sub_93B40((_QWORD *)n);
                      v169 = 0;
                      if ( v170 )
                      {
                        *(_QWORD *)&v171 = 0;
                        qfree(v170);
                        v170 = nullptr;
                        *((_QWORD *)&v171 + 1) = 0;
                      }
                      v182 = 0;
                      if ( v183 )
                      {
                        *(_QWORD *)&v184 = 0;
                        qfree(v183);
                        v183 = 0;
                        *((_QWORD *)&v184 + 1) = 0;
                      }
                      if ( (_BYTE)v144 )
                        sub_1EA870(a1, a1 + 448, *(_QWORD *)(a1 + 48), 0);
                      v11 = (unsigned int *)v164;
                      goto LABEL_210;
                    }
                    if ( (unsigned int)((_DWORD)v150 + 4) <= 1 )
                    {
                      if ( (_DWORD)v150 == -4 )
                        ++v161;
                    }
                    else if ( (int)v150 <= 1 || !(_BYTE)v148 )
                    {
                      LOBYTE(v148) = (unsigned __int8)v146 & ((int)v218 > 0);
                      if ( !(_BYTE)v148 )
                      {
                        v213 = 0;
                        *((_QWORD *)&v208 + 1) = 0xFFFFFFFF00000000LL;
                        v210 = 0xFFFFFFFF00000000LL;
                        v212 = 0xFFFFFFFF00000000LL;
                        v209 = 0;
                        v211 = 0;
                        v145 = (size_t)&v206;
                        v207 = 0;
                        sub_1253A0((__int64)&v206, (__int64)v11);
                        v117 = 128;
                        if ( *(char *)(*(_QWORD *)(a1 + 64) + 5LL) < 0 )
                          v117 = 512;
                        if ( sub_173990(v11, v164, (int)v150, v117) )
                        {
                          if ( !(_BYTE)v144 || (_DWORD)v218 )
                            goto LABEL_405;
                          if ( !v227 )
                          {
                            if ( *(_DWORD *)v164 != 4 || !sub_125B60(v164 + 32, (__int64)(v164 + 64), 0) )
                            {
                              if ( *((_BYTE *)v11 + 64) == 1 )
                                sub_1380A0(*(_QWORD *)(a1 + 64), v11[18], (int)v11[17]);
                              sub_11D5A0((__int64)v11);
                              v118 = *(_DWORD *)(a1 + 24);
                              v119 = v164;
                              BYTE1(v118) &= ~2u;
                              LOBYTE(v118) = v118 | 0x80;
                              *(_DWORD *)(a1 + 24) = v118;
                              v124 = sub_13B260((_QWORD *)a1, (__int64)v119, v120, v121, v122, v123);
                              if ( v124 )
                                sub_13B2C0(v124);
                              LOBYTE(v148) = v144;
                            }
LABEL_405:
                            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 64) + 4LL) & 8) == 0
                              || (v146 = (__int64 *)&v198,
                                  sub_1E16F0(&v198, a1 + 448),
                                  LOBYTE(v141) = sub_94210(v147, v146),
                                  sub_93B40(v146),
                                  v125 = 24,
                                  !(_BYTE)v141) )
                            {
                              v125 = 8;
                            }
                            if ( !(_QWORD)v167 )
                              v125 = (unsigned int)v125 | 4;
                            v126 = sub_167810(a1, v164, v125);
                            if ( (v164[6] & 2) != 0 )
                            {
                              if ( (_QWORD)v167 )
                              {
                                if ( (_BYTE)v148 )
                                  sub_1253A0((__int64)v11, v145);
                                goto LABEL_413;
                              }
                              if ( (unsigned __int8)v144 | v163 || v126 )
                              {
LABEL_422:
                                v230 = 0;
                                sub_7CCD0(v145);
                                sub_93B40(v149);
                                sub_173DA0(n);
                                sub_93B40(v191);
                                LOBYTE(v150) = v144;
                                goto LABEL_194;
                              }
LABEL_425:
                              if ( (*((_BYTE *)v11 + 64) != 1 || !(unsigned __int8)sub_11CCD0(v152, v11[18]))
                                && *((_QWORD *)v164 + 3) != *((_QWORD *)v11 + 3)
                                && (*v11 != 4 && (*v11 != 67 || v11[9] != v11[17]) || *((_BYTE *)v11 + 32) != 2) )
                              {
                                if ( (int)v150 > 1 && *(_DWORD *)v164 != 1 )
                                  goto LABEL_413;
                                if ( *((_BYTE *)v11 + 32) == 4 || *((_BYTE *)v11 + 48) == 4 )
                                {
                                  if ( !(_BYTE)v142 )
                                    goto LABEL_413;
                                  sub_11D5A0((__int64)v11);
                                  v130 = *(_DWORD *)(a1 + 24);
                                  BYTE1(v130) &= ~2u;
                                  LOBYTE(v130) = v130 | 0x80;
                                  *(_DWORD *)(a1 + 24) = v130;
                                }
                              }
                            }
                            else if ( !((unsigned __int8)v144 | v163) && !v126 )
                            {
                              goto LABEL_425;
                            }
                            if ( (_QWORD)v167 )
                            {
                              v141 = &v195;
                              v160.m128i_i64[0] = (__int64)v220;
                              sub_124680((__int64)&v195, a1, (__int64)v220, 0);
                              v202 = 0;
                              v198 = (unsigned __int8 *)&off_4DDEA0;
                              v160.m128i_i32[0] = 0;
                              v199 = nullptr;
                              v127 = _mm_loadh_ps((const double *)&v141);
                              v201 = 0u;
                              v204 = 0;
                              v205 = 0;
                              v200 = (void *)a1;
                              v150 = (unsigned __int8 *)&v198;
                              v203 = v127;
                              while ( v160.m128i_i32[0] < (unsigned __int64)v167 )
                              {
                                v128 = *(unsigned int **)(v166 + 8LL * v160.m128i_i32[0]);
                                if ( *(_DWORD *)v203.m128_u64[0] != 8
                                  && (v159 = *(_QWORD **)(v166 + 8LL * v160.m128i_i32[0]),
                                      v129 = sub_125B90(
                                               (unsigned __int8 *)v203.m128_u64[0],
                                               *(_QWORD *)(*((_QWORD *)v200 + 8) + 1504LL),
                                               v128,
                                               0),
                                      v128 = (unsigned int *)v159,
                                      v129)
                                  && *(_DWORD *)(v203.m128_u64[0] + 68) == *((_DWORD *)v159 + 17) )
                                {
                                  v131 = v159 + 4;
                                  v148 = v159;
                                  v159 = *(_QWORD **)(*((_QWORD *)v200 + 8) + 1504LL);
                                  sub_125180((__int64)v131, (unsigned __int8 *)(v203.m128_u64[0] + 64));
                                  sub_172B80((__int64)v159, (__int64)v148);
                                }
                                else
                                {
                                  v204 = 0;
                                  if ( (unsigned int)sub_11E900(v128, (__int64)v150) || v204 <= 0 )
                                  {
                                    if ( !under_debugger )
                                      sub_383060(50538);
LABEL_464:
                                    BUG();
                                  }
                                }
                                ++v160.m128i_i32[0];
                              }
                              while ( v157.m128i_i32[0] < (unsigned __int64)v167 )
                                sub_167810(a1, *(_QWORD *)(v166 + 8LL * v157.m128i_i32[0]++), 6);
                              if ( *((_QWORD *)&v196 + 1) )
                              {
                                v197 = 0;
                                qfree(*((_QWORD *)&v196 + 1));
                              }
                              qfree(v195);
                              sub_167810(a1, v164, 14);
                            }
                            goto LABEL_422;
                          }
                          sub_7CCD0(v145);
LABEL_417:
                          sub_93B40(v149);
                          sub_173DA0(n);
                          sub_93B40(v191);
                          goto LABEL_201;
                        }
LABEL_413:
                        sub_7CCD0(v145);
                      }
                    }
                    sub_93B40(v149);
                    sub_173DA0(n);
                    v116 = v191;
LABEL_415:
                    sub_93B40(v116);
                    goto LABEL_223;
                  }
                  if ( v74 == 67 )
                  {
                    if ( v11[9] == v11[17] )
                      goto LABEL_288;
                  }
                  else if ( v74 - 8 <= 2 )
                  {
                    goto LABEL_288;
                  }
                  v214 = nullptr;
                  *(_QWORD *)&v107 = a1;
                  v215 = 0u;
                  v216 = 0;
                  *((_QWORD *)&v107 + 1) = &v214;
                  v150 = v164 + 64;
                  n = (size_t)&v214;
                  sub_123EA0(v107, (__int64)(v164 + 64), 0, 0xFFFF0000);
                  sub_64700((__int64 *)n, &v168);
                  sub_3180C0((char *)&v215 + 8, &v170);
                  if ( (unsigned __int8)sub_64880((_QWORD *)n) && !v216.m128i_i64[0] )
                  {
LABEL_339:
                    sub_93B40((_QWORD *)n);
                    goto LABEL_287;
                  }
                  v141 = &v195;
                  sub_123A40((__int64)&v195, v150);
                  if ( *v11 - 12 <= 1
                    && (v198 = nullptr, v199 = nullptr, (unsigned __int8)sub_122E10((__int64 *)&v198, v11))
                    && v199
                    && *v199 != 4 )
                  {
                    if ( (_BYTE)v195 == 4 )
                    {
                      if ( (unsigned int)(*(_DWORD *)v196 - 12) <= 1 )
                      {
                        v206 = 0;
                        *(_QWORD *)&v207 = 0;
                        if ( (unsigned __int8)sub_122E10(&v206, (_DWORD *)v196) )
                        {
                          if ( (_QWORD)v207
                            && sub_1255D0((unsigned __int8 *)v207, v152, (__int64)v149, 0)
                            && (~v206 & (unsigned __int64)&v198[v206] & 0x8000000000000000LL) == 0LL )
                          {
                            sub_11CDA0((__int64)v141);
                            goto LABEL_339;
                          }
                        }
                      }
                      goto LABEL_346;
                    }
                    v150 = v198;
                    sub_11CDA0((__int64)v141);
                    if ( (__int64)v150 >= 0 )
                      goto LABEL_339;
                  }
                  else
                  {
LABEL_346:
                    sub_11CDA0((__int64)v141);
                  }
                  if ( sub_124CC0(a1, (_QWORD *)n, (__int64)v164, (__int64)v11, nullptr, 1u)
                    || sub_A9D90(a1, (__int64 *)n, *((_QWORD *)v164 + 1), 0, 1u) )
                  {
                    sub_93B40((_QWORD *)n);
                    goto LABEL_223;
                  }
                  goto LABEL_339;
                }
                if ( (unsigned int *)v51 == v11 )
                  goto LABEL_223;
                LOBYTE(v144) = *v11 == 4 || *v11 - 8 <= 3;
                if ( (_BYTE)v144 )
                {
                  if ( *((_BYTE *)v11 + 32) == 4 )
                  {
                    v52 = *((unsigned __int8 **)v11 + 5);
                  }
                  else
                  {
                    LOBYTE(v144) = 0;
                    v52 = (unsigned __int8 *)v11;
                  }
                }
                else
                {
                  v52 = (unsigned __int8 *)v11;
                }
                if ( *((_DWORD *)v52 + 17) <= *(_DWORD *)(v145 + 68) )
                {
                  v138 = *(_QWORD *)(a1 + 480);
                  v141 = *(__int64 **)(v138 + 112);
                  if ( sub_125B90(v52, (__int64)v141, (unsigned int *)v145, 1u) )
                  {
                    v137 = *(_QWORD *)(v145 + 8);
                    v136 = *((_QWORD *)v11 + 1);
                    n = (size_t)&v214;
                    sub_64000((__int64 *)&v214, (__int64)v147);
                    *((_QWORD *)&v215 + 1) = 0;
                    v216 = 0;
                    if ( v190 )
                    {
                      v135 = v190;
                      v134 = 16 * v190;
                      *((_QWORD *)&v215 + 1) = qalloc_or_throw(16 * v190);
                      v216.m128i_i64[1] = v135;
                      memcpy(*((void **)&v215 + 1), v189, v134);
                      v216.m128i_i64[0] = v135;
                    }
                    n = sub_A9D90(a1, (__int64 *)n, v136, v137, 1u);
                    if ( *((_QWORD *)&v215 + 1) )
                    {
                      v216.m128i_i64[0] = 0;
                      qfree(*((_QWORD *)&v215 + 1));
                    }
                    qfree(v214);
                    if ( !n )
                    {
                      if ( sub_1225C0((__int64)v11) )
                      {
                        if ( sub_122600((unsigned int *)v145) && *(_DWORD *)(v145 + 68) == v11[9] )
                        {
LABEL_186:
                          sub_A33C0(a1, (__int64)v11);
                          if ( !(_BYTE)v144 )
                          {
                            sub_11CDA0((__int64)(v11 + 12));
                            *v11 = 4;
                          }
                          v53 = v11[9];
                          v159 = v11 + 8;
                          v160.m128i_i32[0] = v53;
                          sub_125180((__int64)(v11 + 8), (unsigned __int8 *)(v145 + 64));
                          v54 = *v11;
                          v55 = v11[9];
                          if ( *v11 > 9 )
                          {
                            if ( v54 != 10 )
                              goto LABEL_352;
                          }
                          else
                          {
                            if ( v54 <= 7 )
                            {
                              if ( v54 == 4 )
                              {
                                if ( v11[17] != v55 )
                                  goto LABEL_192;
                                goto LABEL_193;
                              }
LABEL_352:
                              if ( (int)v11[17] > v55 )
                              {
                                if ( !under_debugger )
                                  sub_383060(50539);
                                goto LABEL_464;
                              }
                              goto LABEL_193;
                            }
                            if ( v160.m128i_i32[0] < v55 )
                            {
                              if ( !(unsigned __int8)sub_12AB50(
                                                       (unsigned __int64)v159,
                                                       (__int64)v141,
                                                       v160.m128i_i32[0],
                                                       0) )
                              {
                                v157.m128i_i64[0] = *((_QWORD *)v11 + 3);
                                v114 = sub_11CC50((unsigned __int8 *)v159, v138);
                                sub_1207E0((char *)v159, (int)v141, v114 + 10, v157.m128i_i64[0], v160.m128i_i32[0]);
                              }
                              v55 = v11[9];
                            }
                          }
                          if ( v55 == v11[17] )
                          {
                            *v11 = 4;
                          }
                          else if ( v55 >= (int)v11[17] )
                          {
LABEL_192:
                            *v11 = 10;
                          }
LABEL_193:
                          sub_A3160(a1, v11, v145);
                          sub_167810(a1, v11, 6);
                          LOBYTE(v150) = 0;
                          LOBYTE(v144) = 0;
LABEL_194:
                          v56 = *(_DWORD *)(a1 + 24);
                          ++v161;
                          BYTE1(v56) &= ~2u;
                          LOBYTE(v56) = v56 | 0x80;
                          v44 = v162 == 0;
                          *(_DWORD *)(a1 + 24) = v56;
                          if ( !v44 )
                            sub_175220(v164 + 64);
                          if ( *(_DWORD *)v164 == 4 && v164[32] == 2 )
                            *((_DWORD *)v164 + 1) &= ~0x20000u;
                          if ( *(_BYTE *)(*(_QWORD *)(a1 + 480) + 1425LL) )
                            sub_A2520(a1, (__int64)"propagate step %d result (propagated %d)", v143, v161);
                          if ( (_BYTE)v150 )
                          {
                            v159 = nullptr;
                            v160.m128i_i64[0] = 0;
                            n = (size_t)&v214;
                            goto LABEL_201;
                          }
                          n = (size_t)&v214;
                          sub_124680((__int64)&v214, a1, (__int64)v164, 0);
                          sub_648D0(v175, (__int64 *)n);
                          v108 = *((_QWORD **)&v215 + 1);
                          v109 = _mm_loadu_si128(&v216);
                          *((_QWORD *)&v215 + 1) = 0;
                          v216 = 0;
                          if ( src )
                          {
                            v159 = v108;
                            v160 = v109;
                            v177.m128i_i64[0] = 0;
                            qfree(src);
                            v108 = v159;
                            v109 = _mm_load_si128(&v160);
                          }
                          src = v108;
                          v177 = v109;
                          sub_173690(v156, (__int64)v175);
                          sub_93B40((_QWORD *)n);
                          sub_1751F0(v175, v158, v110, v111, v112, v113);
                          if ( v166 )
                          {
                            *(_QWORD *)&v167 = 0;
                            qfree(v166);
                          }
                          sub_93B40(v147);
                          sub_93B40(v153);
LABEL_145:
                          v159 = nullptr;
LABEL_52:
                          sub_64640(v175, &v168, (__int64)v14, (__int64)v15, v16, v17);
                          sub_317C60(&src, &v170);
                          goto LABEL_13;
                        }
                      }
                      else if ( !sub_122600((unsigned int *)v145) )
                      {
                        goto LABEL_186;
                      }
                    }
                  }
                }
                if ( *(_DWORD *)(get_ph() + 4) != 72 && *(_DWORD *)(get_ph() + 4) != 15 )
                  goto LABEL_223;
                v165[0] = a1;
                v165[1] = v160.m128i_i64[0];
                v165[2] = (__int64)v159;
                if ( !(unsigned __int8)sub_178580(v165, (unsigned int *)v164, (unsigned int *)v145) )
                  goto LABEL_223;
                v159 = *(_QWORD **)(v145 + 16);
                if ( !v159 )
                {
                  if ( !under_debugger )
                    sub_383060(52825);
                  goto LABEL_464;
                }
                sub_A33C0(a1, v145);
                sub_A3160(a1, (_QWORD *)v145, (__int64)v164);
              }
            }
            v141 = *((__int64 **)v11 + 1);
            v60 = sub_A9AA0(a1, v153, (__int64)v141, (__int64)v164, 1u);
            LOBYTE(v142) = 0;
            if ( v60 )
            {
LABEL_214:
              if ( (_QWORD)v167 )
              {
                if ( (v164[6] & 2) != 0 )
                {
                  v160.m128i_i64[0] = 0;
LABEL_223:
                  if ( v166 )
                  {
                    *(_QWORD *)&v167 = 0;
                    qfree(v166);
                  }
LABEL_138:
                  if ( v189 )
                  {
                    v190 = 0;
                    qfree(v189);
                  }
                  qfree(v188[0]);
                  if ( v186 )
                  {
                    v187 = 0;
                    qfree(v186);
                  }
                  qfree(v185[0]);
LABEL_143:
                  if ( v160.m128i_i64[0] )
                  {
                    sub_A33C0(a1, v160.m128i_i64[0]);
                    sub_A3160(a1, v160.m128i_i64[0], (__int64)v159);
                    goto LABEL_145;
                  }
                  goto LABEL_52;
                }
                if ( !(_BYTE)v145 && (v164[64] != 1 || *(_DWORD *)(v152 + 60) != *((_DWORD *)v164 + 18)) )
                {
                  if ( *v11 == 4 || *v11 == 67 && v11[9] == v11[17] )
                    LOBYTE(v146) = (*((_BYTE *)v11 + 32) == 4) | (unsigned __int8)v146;
                  else
                    LOBYTE(v146) = v160.m128i_i8[0];
                }
              }
              v139 = v142 ^ 1;
              if ( (unsigned __int8)v142 != 1 )
              {
                v160.m128i_i64[0] = 0;
                if ( (_BYTE)v146 )
                  goto LABEL_223;
              }
              goto LABEL_169;
            }
            v144 = *(_DWORD *)(a1 + 72);
            n = (size_t)&v214;
            sub_64000((__int64 *)&v214, (__int64)v147);
            *((_QWORD *)&v215 + 1) = 0;
            v216 = 0;
            if ( v190 )
            {
              v142 = v190;
              v140 = 16 * v190;
              *((_QWORD *)&v215 + 1) = qalloc_or_throw(16 * v190);
              v216.m128i_i64[1] = v142;
              memcpy(*((void **)&v215 + 1), v189, v140);
              v216.m128i_i64[0] = v142;
            }
            LOBYTE(v142) = sub_1778B0(a1, (__int64 *)n, (__int64)v141, 0, (__int64)v164, &v166, v144);
            if ( !(_BYTE)v142 )
              goto LABEL_261;
            if ( (unsigned __int8)sub_64880((_QWORD *)n) && !v216.m128i_i64[0]
              || (unsigned __int8)sub_A2310((_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 104LL), (_QWORD *)n) )
            {
              goto LABEL_262;
            }
            v73 = *(__int64 **)(*(_QWORD *)(a1 + 64) + 784LL);
            if ( v73 )
              LOBYTE(v142) = !sub_17C4E0(v73, n, v144, 0xFFFFFFFF, 0, 0, 2u, 0x2001u);
            else
LABEL_261:
              LOBYTE(v142) = 0;
LABEL_262:
            if ( *((_QWORD *)&v215 + 1) )
            {
              v216.m128i_i64[0] = 0;
              qfree(*((_QWORD *)&v215 + 1));
            }
            qfree(v214);
            goto LABEL_214;
          }
        }
        else
        {
          v20 = *(_QWORD *)(a1 + 64);
          if ( !*(_QWORD *)(v20 + 1040) || (v14 = *(_QWORD **)(v20 + 1016), v21 = v20 + 1008, !v14) )
          {
LABEL_43:
            if ( *(_DWORD *)v164 == 4 && v17 == 4 )
            {
              if ( sub_125B60(v164 + 32, (__int64)(v11 + 16), 0)
                && sub_125B60(v164 + 64, (__int64)(v11 + 8), 0)
                && v164[32] == 6 )
              {
                goto LABEL_17;
              }
              v17 = *v11;
            }
            if ( v17 != 10 )
            {
LABEL_46:
              if ( v17 == 62 )
              {
                if ( *(_DWORD *)v164 != 1 && *(_DWORD *)v164 != 4 )
                  goto LABEL_52;
                goto LABEL_49;
              }
              goto LABEL_47;
            }
            if ( (*((_BYTE *)v11 + 65) & 4) == 0 )
            {
              v215 = 0u;
              v214 = off_4DDF50;
              v216 = 0u;
              v217 = 0;
              v160.m128i_i64[0] = (__int64)&v218;
              sub_123A40((__int64)&v218, (unsigned __int8 *)v11 + 64);
              LODWORD(n) = sub_11E900(v164, (__int64)&v214);
              v214 = off_4DDF50;
              sub_11CDA0(v160.m128i_i64[0]);
              v17 = *v11;
              if ( (_DWORD)n )
                *((_BYTE *)v11 + 65) |= 4u;
              goto LABEL_46;
            }
            goto LABEL_47;
          }
        }
        v16 = v21;
        v22 = v14;
        do
        {
          while ( 1 )
          {
            v23 = v22[2];
            v24 = v22[3];
            if ( v22[4] < (unsigned __int64)v15 )
              break;
            v16 = (__int64)v22;
            v22 = (_QWORD *)v22[2];
            if ( !v23 )
              goto LABEL_35;
          }
          v22 = (_QWORD *)v22[3];
        }
        while ( v24 );
LABEL_35:
        if ( v16 == v21 )
        {
          v25 = v164;
        }
        else
        {
          if ( (unsigned __int64)v15 >= *(_QWORD *)(v16 + 32) )
            goto LABEL_52;
          v16 = v21;
          v25 = v164;
        }
        do
        {
          while ( 1 )
          {
            v15 = (_BYTE *)v14[2];
            v26 = v14[3];
            if ( v14[4] < (unsigned __int64)v19 )
              break;
            v16 = (__int64)v14;
            v14 = (_QWORD *)v14[2];
            if ( !v15 )
              goto LABEL_41;
          }
          v14 = (_QWORD *)v14[3];
        }
        while ( v26 );
LABEL_41:
        v164 = v25;
        if ( v16 != v21 && (unsigned __int64)v19 >= *(_QWORD *)(v16 + 32) )
          goto LABEL_52;
        goto LABEL_43;
      }
    }
LABEL_17:
    if ( v183 )
    {
      *(_QWORD *)&v184 = 0;
      qfree(v183);
    }
    qfree(v181);
    if ( v179 )
    {
      *(_QWORD *)&v180 = 0;
      qfree(v179);
    }
    qfree(v178);
    if ( src )
    {
      v177.m128i_i64[0] = 0;
      qfree(src);
    }
    qfree(v175[0]);
LABEL_6:
    v164 = *((_BYTE **)v164 + 1);
  }
  while ( v164 );
  if ( v161 )
  {
    v37 = *(_DWORD *)(a1 + 24);
    v38 = v161;
    BYTE1(v37) &= ~2u;
    LOBYTE(v37) = v37 | 0xC0;
    *(_DWORD *)(a1 + 24) = v37;
    sub_A2520(a1, (__int64)"propagate result: %d", v38);
  }
  *(_DWORD *)(a1 + 24) &= ~0x80u;
  if ( v173 )
  {
    *(_QWORD *)&v174 = 0;
    qfree(v173);
  }
LABEL_81:
  qfree(v172[0]);
  if ( v170 )
  {
    *(_QWORD *)&v171 = 0;
    qfree(v170);
  }
  qfree(v168);
  return v161;
}
