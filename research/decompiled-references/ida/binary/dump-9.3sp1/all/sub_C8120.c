__int64 __fastcall sub_C8120(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned int v5; // r12d
  unsigned int v6; // eax
  char v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r15
  bool v11; // zf
  __int64 v12; // rdi
  char v13; // al
  unsigned __int8 v14; // r14
  char v15; // al
  unsigned __int8 v16; // r13
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdi
  __int32 v21; // ecx
  __int32 v22; // eax
  __int64 *v23; // r14
  int tinfo_property; // r14d
  char *v25; // rsi
  char *v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rsi
  __int64 v30; // r13
  __int64 v31; // rax
  _QWORD *v32; // r14
  __int64 v33; // rcx
  char v34; // al
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rcx
  int v38; // eax
  int v39; // r14d
  unsigned __int64 v40; // r13
  int v41; // eax
  __int64 v42; // r14
  __int64 v43; // rdx
  __int64 *v44; // r13
  __int64 v45; // rax
  __m128i v46; // xmm0
  __int64 v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // r13
  __int64 v50; // rax
  __m128i v51; // xmm0
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 *v54; // r13
  __int64 v55; // rdx
  __int64 v56; // r9
  unsigned __int64 v57; // r8
  __int64 v58; // rdi
  __m128i v59; // xmm0
  __int64 v60; // rax
  __int64 *v61; // r13
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // r9
  size_t v65; // r8
  __int64 v66; // rdi
  __m128i v67; // xmm0
  __int64 v68; // rdx
  __int64 v69; // r13
  __int64 v70; // r14
  __int64 *v71; // rbx
  __int64 v72; // rdi
  __int64 v73; // r13
  __int64 v74; // r14
  __int64 *v75; // rbx
  __int64 v76; // rdi
  __int64 v77; // r13
  __int64 v78; // r14
  __int64 *v79; // rbx
  __int64 v80; // rdi
  __int64 v81; // r13
  __int64 v82; // r14
  __int64 *v83; // rbx
  __int64 v84; // rdi
  __int64 v85; // r12
  __m128i *v86; // rbx
  char v87; // al
  __m128i *v88; // rdi
  __int64 v89; // rdx
  __int64 v90; // r14
  char *v91; // rbx
  char v92; // dl
  int v93; // eax
  __int64 v94; // rax
  __int64 v95; // rcx
  int v96; // eax
  __int64 v97; // rdi
  __int64 v98; // rax
  __int64 *v99; // rdx
  __int64 v100; // rax
  int v101; // ecx
  __int64 v102; // rsi
  __int64 v103; // rax
  __int64 v104; // rax
  void *v105; // rax
  void *v106; // rax
  void *v107; // rax
  void *v108; // rax
  __int64 v109; // rdx
  unsigned __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // r14
  size_t v113; // r13
  __int64 v114; // r13
  __int64 v115; // rsi
  __int64 *v116; // r13
  size_t v117; // r13
  size_t v118; // r13
  size_t v119; // r13
  unsigned int v120; // r14d
  char *v121; // rdi
  int v122; // eax
  __int64 v123; // rdx
  unsigned __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // r14
  _QWORD *v128; // r14
  _QWORD *v129; // rcx
  __int64 v130; // rax
  int v131; // edx
  char v132; // r13
  __int64 v133; // rax
  __int64 v134; // r13
  int v135; // r9d
  __int64 v136; // [rsp+0h] [rbp-3C0h]
  __int64 v137; // [rsp+10h] [rbp-3B0h]
  __int64 v138; // [rsp+20h] [rbp-3A0h]
  __int64 v139; // [rsp+28h] [rbp-398h]
  size_t v140; // [rsp+30h] [rbp-390h]
  __int64 *v141; // [rsp+38h] [rbp-388h]
  char *v142; // [rsp+40h] [rbp-380h]
  __int64 *v143; // [rsp+48h] [rbp-378h]
  char v144; // [rsp+50h] [rbp-370h]
  __int64 v145; // [rsp+50h] [rbp-370h]
  int v146; // [rsp+58h] [rbp-368h]
  size_t v147; // [rsp+58h] [rbp-368h]
  unsigned __int8 v148; // [rsp+67h] [rbp-359h]
  size_t v149; // [rsp+68h] [rbp-358h]
  unsigned __int64 v150; // [rsp+68h] [rbp-358h]
  __int64 *v151; // [rsp+78h] [rbp-348h]
  size_t v152; // [rsp+80h] [rbp-340h]
  size_t v153; // [rsp+80h] [rbp-340h]
  __int64 v154; // [rsp+80h] [rbp-340h]
  int v155; // [rsp+80h] [rbp-340h]
  int v156; // [rsp+90h] [rbp-330h]
  __int64 v157; // [rsp+90h] [rbp-330h]
  size_t n; // [rsp+98h] [rbp-328h]
  __int64 *na; // [rsp+98h] [rbp-328h]
  size_t nb; // [rsp+98h] [rbp-328h]
  __int64 nd; // [rsp+98h] [rbp-328h]
  size_t nc; // [rsp+98h] [rbp-328h]
  char *v163; // [rsp+A8h] [rbp-318h]
  __int64 v164; // [rsp+B0h] [rbp-310h]
  __int64 *v165; // [rsp+B0h] [rbp-310h]
  int v166; // [rsp+B0h] [rbp-310h]
  __int64 v167; // [rsp+B8h] [rbp-308h]
  __int64 v168; // [rsp+B8h] [rbp-308h]
  int v169; // [rsp+B8h] [rbp-308h]
  int v170; // [rsp+C8h] [rbp-2F8h]
  __m128i v171; // [rsp+D0h] [rbp-2F0h] BYREF
  __int64 *v172; // [rsp+E0h] [rbp-2E0h]
  int tinfo_size; // [rsp+E8h] [rbp-2D8h]
  int v174; // [rsp+ECh] [rbp-2D4h]
  _DWORD *v175; // [rsp+F0h] [rbp-2D0h]
  char *v176; // [rsp+F8h] [rbp-2C8h]
  __m128i v177; // [rsp+100h] [rbp-2C0h] BYREF
  char *v178; // [rsp+110h] [rbp-2B0h]
  __int64 v179; // [rsp+118h] [rbp-2A8h]
  __int64 v180; // [rsp+120h] [rbp-2A0h] BYREF
  __int64 v181; // [rsp+128h] [rbp-298h] BYREF
  __int64 v182; // [rsp+130h] [rbp-290h] BYREF
  __int64 v183; // [rsp+138h] [rbp-288h] BYREF
  __int64 *v184; // [rsp+140h] [rbp-280h] BYREF
  __int64 v185; // [rsp+148h] [rbp-278h] BYREF
  char v186; // [rsp+150h] [rbp-270h] BYREF
  char v187; // [rsp+151h] [rbp-26Fh]
  unsigned int v188; // [rsp+154h] [rbp-26Ch]
  __int64 v189; // [rsp+158h] [rbp-268h]
  char v190; // [rsp+160h] [rbp-260h] BYREF
  char v191; // [rsp+161h] [rbp-25Fh]
  int v192; // [rsp+164h] [rbp-25Ch]
  __int64 v193[2]; // [rsp+170h] [rbp-250h] BYREF
  __int64 v194; // [rsp+180h] [rbp-240h] BYREF
  __int128 v195; // [rsp+188h] [rbp-238h]
  __int64 v196; // [rsp+1A0h] [rbp-220h] BYREF
  __int128 v197; // [rsp+1A8h] [rbp-218h]
  __int64 v198; // [rsp+1C0h] [rbp-200h] BYREF
  __int128 v199; // [rsp+1C8h] [rbp-1F8h]
  __int64 v200; // [rsp+1E0h] [rbp-1E0h] BYREF
  __int128 v201; // [rsp+1E8h] [rbp-1D8h]
  __int64 v202; // [rsp+200h] [rbp-1C0h] BYREF
  __int128 v203; // [rsp+208h] [rbp-1B8h]
  __int64 v204[2]; // [rsp+220h] [rbp-1A0h] BYREF
  __int64 v205; // [rsp+230h] [rbp-190h] BYREF
  __int128 v206; // [rsp+238h] [rbp-188h]
  __int64 v207[2]; // [rsp+250h] [rbp-170h] BYREF
  __int64 v208; // [rsp+260h] [rbp-160h] BYREF
  __int128 v209; // [rsp+268h] [rbp-158h]
  _QWORD *v210[2]; // [rsp+280h] [rbp-140h] BYREF
  __int64 v211; // [rsp+290h] [rbp-130h] BYREF
  __int64 v212; // [rsp+298h] [rbp-128h]
  _QWORD *v213; // [rsp+2B0h] [rbp-110h] BYREF
  __int128 v214; // [rsp+2B8h] [rbp-108h] BYREF
  __m128i v215; // [rsp+2C8h] [rbp-F8h] BYREF
  _DWORD v216[8]; // [rsp+2E0h] [rbp-E0h] BYREF
  _QWORD v217[2]; // [rsp+300h] [rbp-C0h] BYREF
  _QWORD v218[2]; // [rsp+310h] [rbp-B0h] BYREF
  _QWORD v219[2]; // [rsp+320h] [rbp-A0h] BYREF
  _QWORD v220[4]; // [rsp+330h] [rbp-90h] BYREF
  _QWORD v221[2]; // [rsp+350h] [rbp-70h] BYREF
  _QWORD v222[2]; // [rsp+360h] [rbp-60h] BYREF
  _QWORD v223[10]; // [rsp+370h] [rbp-50h] BYREF

  v179 = a1;
  v2 = *(_QWORD *)(a1 + 64);
  v223[3] = __readfsqword(0x28u);
  v3 = a2;
  LOBYTE(v4) = sub_A2650(v2, a2);
  if ( (_BYTE)v4 )
    return 0;
  v5 = v4;
  v174 = *(_DWORD *)(a2 + 4) & 0x80;
  if ( !v174 )
  {
    v6 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 != 4 )
    {
      if ( v6 > 4 )
      {
        v7 = 0;
        if ( v6 == 56 )
          goto LABEL_6;
        v7 = 0;
        if ( v6 - 8 <= 1 )
          goto LABEL_7;
LABEL_8:
        v8 = *(_QWORD *)(a2 + 24);
        v217[1] = 0;
        v218[1] = 0;
        v9 = *(_QWORD *)(v179 + 480);
        v219[1] = 0;
        v178 = *(char **)(v9 + 112);
        v217[0] = 0xFFFFFFFF00000000LL;
        v218[0] = 0xFFFFFFFF00000000LL;
        v219[0] = 0xFFFFFFFF00000000LL;
        v175 = v216;
        sub_330970(v216, v8);
        if ( (unsigned __int8)sub_B7CB0((__int64)v178, v216, v3) )
        {
          v10 = (__int64)v175;
        }
        else
        {
          v10 = v3;
          if ( !v7 )
          {
LABEL_26:
            sub_11CDA0(v219);
            sub_11CDA0(v218);
            sub_11CDA0(v217);
            return v5;
          }
        }
        if ( *(_DWORD *)v10 == 2 )
        {
          v176 = (char *)(v10 + 48);
          v163 = (char *)(v10 + 64);
          LODWORD(v172) = *(_DWORD *)(v10 + 68);
        }
        else
        {
          v176 = (char *)(v10 + 32);
          v163 = (char *)(v10 + 64);
          LODWORD(v172) = *(_DWORD *)(v10 + 36);
        }
        if ( *v176 == 1 && (unsigned __int8)sub_11CCD0(v178, *((unsigned int *)v176 + 2))
          || *(_BYTE *)(v10 + 64) == 1 && (unsigned __int8)sub_11CCD0(v178, *(unsigned int *)(v10 + 72))
          || ((v176[1] & 0x40) != 0 || (*(_BYTE *)(v10 + 65) & 0x40) != 0) && (*(_BYTE *)(v10 + 6) & 4) != 0 )
        {
          goto LABEL_26;
        }
        v11 = *(_DWORD *)v10 == 2;
        v180 = 0;
        v181 = 0;
        v12 = *(_QWORD *)(v179 + 64);
        n = *(_QWORD *)(v12 + 800);
        v13 = 1;
        if ( !v11 )
        {
          v13 = 0;
          if ( *v176 == 4 )
            v13 = **((_DWORD **)v176 + 1) == 2;
        }
        v14 = sub_BA670(v12, &v180, v179, v10, v176, n, v13, 1, nullptr);
        v15 = 1;
        if ( *(_DWORD *)v10 != 1 )
        {
          v15 = 0;
          if ( *(_BYTE *)(v10 + 64) == 4 )
            v15 = **(_DWORD **)(v10 + 72) == 2;
        }
        v16 = sub_BA670(*(_QWORD *)(v179 + 64), &v181, v179, v3, v163, n, v15, 1, nullptr);
        if ( v10 == v3 || (unsigned int)(*(_DWORD *)v3 - 56) <= 1 )
          goto LABEL_36;
        if ( *(_DWORD *)v3 != 10 )
        {
          if ( !under_debugger )
            sub_383060(52920);
LABEL_348:
          BUG();
        }
        if ( v16 && ((get_tinfo_property() & 0x2F) == 0xD || (get_tinfo_property() & 0xF) == 9)
          || (unsigned __int8)sub_BA670(
                                *(_QWORD *)(v179 + 64),
                                &v180,
                                v179,
                                v3,
                                (char *)(*(_QWORD *)(v3 + 40) + 32LL),
                                n,
                                0,
                                0,
                                nullptr)
          && ((get_tinfo_property() & 0x2F) == 0xD || (get_tinfo_property() & 0xF) == 9) )
        {
          sub_11D890(v3, v10);
          v17 = v179;
          v18 = *(_DWORD *)(v179 + 24);
          v19 = *(_QWORD *)(v179 + 64);
          LODWORD(v179) = v18;
          BYTE1(v18) &= ~2u;
          LOBYTE(v18) = v18 | 0x80;
          *(_DWORD *)(v17 + 24) = v18;
          sub_66FA0(v19, 1u, (__int64)"recognized structure copy: flatten low(shr)");
          v5 = 1;
        }
        else
        {
LABEL_36:
          v171.m128i_i8[0] = v16 | v14;
          if ( v16 | v14 )
          {
            if ( sub_B9420((__int64)v178) )
              v177.m128i_i32[0] = get_tinfo_size();
            else
              v177.m128i_i32[0] = 0;
            tinfo_size = 0;
            if ( sub_B9420((__int64)v178) )
              tinfo_size = get_tinfo_size();
            if ( v14 == 1 && (int)v172 < v177.m128i_i32[0] )
            {
              if ( (int)v172 >= tinfo_size )
              {
                v22 = tinfo_size;
                v21 = v177.m128i_i32[0];
                goto LABEL_47;
              }
            }
            else
            {
              if ( v16 != 1 || (int)v172 >= tinfo_size )
                goto LABEL_25;
              if ( (int)v172 >= v177.m128i_i32[0] )
                goto LABEL_216;
            }
            v21 = v177.m128i_i32[0];
            v22 = tinfo_size;
            if ( v177.m128i_i32[0] <= tinfo_size )
            {
LABEL_47:
              v177.m128i_i32[0] = v22;
              tinfo_size = v21;
              v23 = &v181;
              v151 = &v180;
LABEL_48:
              v182 = 0;
              if ( (get_tinfo_property() & 0x2F) == 0xD
                && (get_tinfo_property() & 0x2F) == 0xD
                && !(unsigned __int8)sub_B80A0(v23, 0, 0, (unsigned int)tinfo_size, &v182) )
              {
                v148 = sub_B80A0(v151, 0, 0, (unsigned int)v172, 0) ^ 1;
              }
              else if ( (_BYTE)v182 )
              {
                v98 = get_tinfo_size();
                v99 = v151;
                if ( tinfo_size == v98 )
                  v99 = &v182;
                v148 = v171.m128i_i8[0];
                v151 = v99;
              }
              else
              {
                v148 = v171.m128i_i8[0];
              }
              if ( *v176 == 2 && (get_tinfo_property() & 0xF) != 9 && !(unsigned __int8)sub_B8030(*v151, 2) )
              {
                v220[0] = 0;
                tinfo_get_innermost_udm();
                if ( !LOBYTE(v220[0])
                  || v213
                  || (get_tinfo_property() & 0xF) != 9 && !(unsigned __int8)sub_B8030(v220[0], 2)
                  || (tinfo_size = get_tinfo_size(), tinfo_size <= v177.m128i_i32[0]) )
                {
                  clear_tinfo_t();
                  goto LABEL_215;
                }
                copy_tinfo_t();
                clear_tinfo_t();
              }
              tinfo_property = get_tinfo_property();
              if ( *v176 == 5
                && *(_QWORD *)(*((_QWORD *)v176 + 1) + 8LL) >= *(_QWORD *)(*(_QWORD *)(v179 + 64) + 144LL)
                && (!sub_B9420((__int64)v178) || get_tinfo_size() < (unsigned __int64)tinfo_size) )
              {
LABEL_215:
                clear_tinfo_t();
                goto LABEL_25;
              }
              sub_123A40(&v186);
              v183 = 0;
              if ( *(_DWORD *)v10 != 2
                && !(unsigned __int8)sub_B8C10((__int64)v178, &v186, &v183, n, v176, tinfo_size, (__int64)v151) )
              {
                v5 = 0;
                goto LABEL_214;
              }
              if ( v186 == 2 && (unsigned __int8)sub_11CC50(v163, *(_QWORD *)(v179 + 480), 0) )
              {
                v100 = 0;
                v101 = 8 * (tinfo_size - *((_DWORD *)v176 + 1));
                if ( (unsigned __int64)v101 <= 0x3F )
                  v100 = *(_QWORD *)(v189 + 16) << v101;
                *(_QWORD *)(v189 + 16) = v100;
              }
              v25 = v163;
              v26 = &v190;
              v142 = &v190;
              sub_123A40(&v190);
              v184 = nullptr;
              if ( *(_DWORD *)v10 == 1 )
              {
                v167 = v183;
                if ( !v183 )
                  goto LABEL_64;
              }
              else
              {
                v25 = &v190;
                v26 = v178;
                if ( !(unsigned __int8)sub_B8C10((__int64)v178, &v190, &v184, n, v163, tinfo_size, (__int64)v151) )
                {
                  v5 = 0;
                  goto LABEL_213;
                }
                v167 = v183;
                if ( !v183 )
                {
LABEL_62:
                  if ( v184 && !v184[1] )
                  {
                    v123 = *v184;
                    v124 = *((int *)v184 + 4);
                    if ( *(_QWORD *)(*v184 + 440) < v124 )
                      sub_B7BC0(v26, v25, v123, v27, v28);
                    v148 |= *(_DWORD *)(*(_QWORD *)(v123 + 432) + 104 * v124 + 88) == tinfo_size;
                  }
LABEL_64:
                  v193[0] = 0;
                  v193[1] = 0;
                  sub_63E80(v193, 0, (int)v172);
                  v195 = 0;
                  v141 = &v194;
                  v194 = 0;
                  v194 = qvector_reserve((__int64)&v194, 0, 1, 8);
                  *(_QWORD *)(v194 + 8 * v195) = v10;
                  *(_QWORD *)&v195 = v195 + 1;
                  v29 = *(_QWORD *)(v10 + 24);
                  v144 = v186;
                  v221[0] = 0xFFFFFFFF00000000LL;
                  v222[0] = 0xFFFFFFFF00000000LL;
                  v223[0] = 0xFFFFFFFF00000000LL;
                  v221[1] = 0;
                  v222[1] = 0;
                  v223[1] = 0;
                  LOBYTE(v143) = v186 == 2;
                  sub_330970(v220, v29);
                  v156 = tinfo_property;
                  v146 = 2;
LABEL_65:
                  v30 = v10;
                  while ( 1 )
                  {
                    do
                    {
                      v31 = *(_QWORD *)(v30 + 16);
                      if ( v171.m128i_i8[0] )
                        v31 = *(_QWORD *)(v30 + 8);
                      v30 = v31;
                      if ( !v31 || (v177.m128i_i32[0] = *(_DWORD *)(v31 + 4) & 0x80) != 0 )
                      {
LABEL_140:
                        if ( (_DWORD)v172 != tinfo_size && v146 != 1 )
                        {
                          v146 = 1;
                          v171.m128i_i8[0] = 0;
                          goto LABEL_65;
                        }
LABEL_97:
                        if ( v148 )
                        {
                          if ( (_QWORD)v195 != 1 )
                          {
                            sub_64BA0(v193, 0);
                            if ( (unsigned __int8)sub_64A10(v193, 0, v156) )
                            {
                              v185 = 0;
                              goto LABEL_101;
                            }
                            if ( (get_tinfo_property() & 0x2F) == 0xD )
                            {
                              v213 = nullptr;
                              v215.m128i_i64[0] = 0;
                              v215.m128i_i32[2] = -1;
                              v214 = 0;
                              if ( !(unsigned __int8)calc_tinfo_gaps() )
                              {
                                if ( v213 )
                                {
                                  *(_QWORD *)&v214 = 0;
                                  qfree((__int64)v213);
                                }
                                goto LABEL_292;
                              }
                              v210[0] = nullptr;
                              v210[1] = nullptr;
                              sub_63E80((__int64 *)v210, 0, v156);
                              v128 = v213;
                              v129 = &v213[2 * v214];
                              if ( v129 != v213 )
                              {
                                do
                                {
                                  v130 = *v128;
                                  v131 = *((_DWORD *)v128 + 2);
                                  v177.m128i_i64[0] = (__int64)v129;
                                  sub_64440((__int64 *)v210, v130, v131 - v130);
                                  v129 = (_QWORD *)v177.m128i_i64[0];
                                  v128 += 2;
                                }
                                while ( (_QWORD *)v177.m128i_i64[0] != v128 );
                              }
                              v132 = sub_64820(v210, v193);
                              qfree((__int64)v210[0]);
                              if ( v213 )
                              {
                                *(_QWORD *)&v214 = 0;
                                qfree((__int64)v213);
                              }
                              v185 = 0;
                              if ( v132 )
                              {
LABEL_101:
                                v39 = v195;
                                v40 = (int)v195;
                                v196 = 0;
                                v198 = 0;
                                v200 = 0;
                                v202 = 0;
                                v145 = v195;
                                v197 = 0;
                                v199 = 0;
                                v201 = 0;
                                v203 = 0;
                                sub_C3840(&v196, (int)v195);
                                sub_C3840(&v198, v40);
                                sub_C3840(&v200, v40);
                                sub_C3840(&v202, v40);
                                v204[0] = 0;
                                v204[1] = 0;
                                v205 = 0;
                                v207[0] = 0;
                                v207[1] = 0;
                                v208 = 0;
                                v206 = 0;
                                v209 = 0;
                                if ( v39 <= 0 )
                                {
                                  v166 = 0;
                                }
                                else
                                {
                                  v164 = -40;
                                  v41 = v39;
                                  v42 = 0;
                                  LODWORD(v143) = v41 - 1;
                                  v157 = (unsigned int)(v41 - 1);
                                  v172 = (__int64 *)&v213;
                                  while ( 1 )
                                  {
                                    v43 = *(_QWORD *)(v194 + 8 * v42);
                                    v171.m128i_i64[0] = (__int64)v204;
                                    v177.m128i_i64[0] = (__int64)v207;
                                    sub_124680(v172, v179, v43, 1);
                                    v44 = (__int64 *)(v164 + 40 + v196);
                                    v168 = v164 + 40;
                                    sub_648D0(v44, v172);
                                    v45 = *((_QWORD *)&v214 + 1);
                                    v46 = _mm_loadu_si128(&v215);
                                    *((_QWORD *)&v214 + 1) = 0;
                                    v215 = 0;
                                    v47 = v44[2];
                                    if ( v47 )
                                    {
                                      v44[3] = 0;
                                      v171.m128i_i64[0] = v45;
                                      v177 = v46;
                                      qfree(v47);
                                      v45 = v171.m128i_i64[0];
                                      v46 = _mm_load_si128(&v177);
                                    }
                                    v44[2] = v45;
                                    *(__m128i *)(v44 + 3) = v46;
                                    if ( *((_QWORD *)&v214 + 1) )
                                    {
                                      v215.m128i_i64[0] = 0;
                                      qfree(*((__int64 *)&v214 + 1));
                                    }
                                    qfree((__int64)v213);
                                    v48 = *(_QWORD *)(v194 + 8 * v42);
                                    v171.m128i_i64[0] = (__int64)v204;
                                    v177.m128i_i64[0] = (__int64)v207;
                                    sub_127A20(v172, v179, v48, 1);
                                    v49 = v198 + v168;
                                    sub_648D0((__int64 *)(v198 + v168), v172);
                                    v50 = *((_QWORD *)&v214 + 1);
                                    v51 = _mm_loadu_si128(&v215);
                                    *((_QWORD *)&v214 + 1) = 0;
                                    v215 = 0;
                                    v52 = *(_QWORD *)(v49 + 16);
                                    if ( v52 )
                                    {
                                      *(_QWORD *)(v49 + 24) = 0;
                                      v171.m128i_i64[0] = v50;
                                      v177 = v51;
                                      qfree(v52);
                                      v50 = v171.m128i_i64[0];
                                      v51 = _mm_load_si128(&v177);
                                    }
                                    *(_QWORD *)(v49 + 16) = v50;
                                    *(__m128i *)(v49 + 24) = v51;
                                    if ( *((_QWORD *)&v214 + 1) )
                                    {
                                      v215.m128i_i64[0] = 0;
                                      qfree(*((__int64 *)&v214 + 1));
                                    }
                                    qfree((__int64)v213);
                                    if ( v42 )
                                    {
                                      na = (__int64 *)(v164 + v196);
                                      v53 = v200 + v164;
                                      v152 = v200 + v164;
                                      v54 = (__int64 *)(v200 + v168);
                                      v171.m128i_i64[0] = (__int64)v204;
                                      v177.m128i_i64[0] = (__int64)v207;
                                      sub_648D0((__int64 *)(v200 + v168), (__int64 *)(v200 + v164));
                                      v55 = v152;
                                      v56 = 0;
                                      v57 = *(_QWORD *)(v152 + 24);
                                      if ( v57 )
                                      {
                                        v147 = v152;
                                        v150 = *(_QWORD *)(v152 + 24);
                                        v171.m128i_i64[0] = (__int64)v204;
                                        v177.m128i_i64[0] = (__int64)v207;
                                        v154 = 16 * v57;
                                        v107 = (void *)qalloc_or_throw(16 * v57, v53, v55, 16 * v57);
                                        v108 = memcpy(v107, *(const void **)(v147 + 16), v154);
                                        v57 = v150;
                                        v56 = (__int64)v108;
                                      }
                                      v58 = v54[2];
                                      v59 = _mm_unpacklo_epi64((__m128i)v57, (__m128i)v57);
                                      if ( v58 )
                                      {
                                        v54[3] = 0;
                                        v177.m128i_i64[0] = v56;
                                        v171 = v59;
                                        qfree(v58);
                                        v59 = _mm_load_si128(&v171);
                                        v56 = v177.m128i_i64[0];
                                      }
                                      v54[2] = v56;
                                      *(__m128i *)(v54 + 3) = v59;
                                      v171.m128i_i64[0] = (__int64)v204;
                                      v177.m128i_i64[0] = (__int64)v207;
                                      sub_64280(v54, na);
                                      v177.m128i_i64[0] = (__int64)v207;
                                      v171.m128i_i64[0] = (__int64)v204;
                                      sub_316CB0(v54 + 2, na + 2);
                                      v60 = v164;
                                      v165 = (__int64 *)(v164 + v198);
                                      v61 = (__int64 *)(v202 + v168);
                                      v62 = v202 + v60;
                                      nb = v202 + v60;
                                      v171.m128i_i64[0] = (__int64)v204;
                                      v177.m128i_i64[0] = (__int64)v207;
                                      sub_648D0((__int64 *)(v202 + v168), (__int64 *)(v202 + v60));
                                      v63 = nb;
                                      v64 = 0;
                                      v65 = *(_QWORD *)(nb + 24);
                                      if ( v65 )
                                      {
                                        v149 = nb;
                                        v153 = *(_QWORD *)(nb + 24);
                                        v171.m128i_i64[0] = (__int64)v204;
                                        v177.m128i_i64[0] = (__int64)v207;
                                        nd = 16 * v65;
                                        v105 = (void *)qalloc_or_throw(16 * v65, v62, v63, 16 * v65);
                                        v106 = memcpy(v105, *(const void **)(v149 + 16), nd);
                                        v65 = v153;
                                        v64 = (__int64)v106;
                                      }
                                      v66 = v61[2];
                                      v67 = _mm_unpacklo_epi64((__m128i)v65, (__m128i)v65);
                                      if ( v66 )
                                      {
                                        v61[3] = 0;
                                        v177.m128i_i64[0] = v64;
                                        v171 = v67;
                                        qfree(v66);
                                        v67 = _mm_load_si128(&v171);
                                        v64 = v177.m128i_i64[0];
                                      }
                                      v61[2] = v64;
                                      *(__m128i *)(v61 + 3) = v67;
                                      v171.m128i_i64[0] = (__int64)v204;
                                      v177.m128i_i64[0] = (__int64)v207;
                                      sub_64280(v61, v165);
                                      v171.m128i_i64[0] = (__int64)v204;
                                      v177.m128i_i64[0] = (__int64)v207;
                                      sub_316CB0(v61 + 2, v165 + 2);
                                    }
                                    if ( v157 == v42 )
                                      break;
                                    ++v42;
                                    v164 = v168;
                                  }
                                  v169 = (int)v143;
                                  if ( (_DWORD)v145 == 1 )
                                  {
                                    v166 = 0;
                                  }
                                  else
                                  {
                                    v136 = (unsigned int)v143;
                                    v111 = v194;
                                    v68 = 0;
                                    v166 = 0;
                                    while ( 1 )
                                    {
                                      v155 = v68;
                                      LODWORD(v141) = v68 + 1;
                                      v112 = *(_QWORD *)(*(_QWORD *)(v111 + 8 * v68) + 8LL);
                                      v145 = 8 * v68 + 8;
                                      if ( *(_QWORD *)(v111 + 8 * v68 + 8) != v112 )
                                        break;
                                      v137 = v68 + 1;
LABEL_147:
                                      v68 = v137;
                                      if ( v136 == v137 )
                                        goto LABEL_148;
                                    }
                                    v137 = v68 + 1;
                                    nc = 40 * (v68 + 1);
                                    v171.m128i_i64[0] = (__int64)v204;
                                    v177.m128i_i64[0] = (__int64)v207;
                                    while ( 1 )
                                    {
                                      v114 = v179;
                                      sub_127A20(v210, v179, v112, 1);
                                      v115 = v114;
                                      v116 = v172;
                                      sub_124680(v172, v115, v112, 1);
                                      sub_64280(v204, v116);
                                      v143 = &v205;
                                      sub_316CB0(&v205, (char *)&v214 + 8);
                                      sub_64280((__int64 *)v177.m128i_i64[0], (__int64 *)v210);
                                      sub_316CB0(&v208, &v211);
                                      if ( v155 < v169 )
                                      {
                                        v140 = v200 + nc;
                                        if ( (unsigned __int8)sub_64780(v210, (_QWORD *)(v200 + nc))
                                          || (unsigned __int8)sub_318470(&v211, v140 + 16)
                                          || (v140 = v202 + nc, (unsigned __int8)sub_64780(v210, (_QWORD *)(v202 + nc)))
                                          || (unsigned __int8)sub_318470(&v211, v140 + 16)
                                          || (v119 = v202 + nc, (unsigned __int8)sub_64780(v172, (_QWORD *)(v202 + nc)))
                                          || (unsigned __int8)sub_318470((char *)&v214 + 8, v119 + 16) )
                                        {
                                          v169 = v155;
                                        }
                                      }
                                      v113 = v196 + nc;
                                      if ( (unsigned __int8)sub_64780(v177.m128i_i64[0], (_QWORD *)(v196 + nc))
                                        || (unsigned __int8)sub_318470(&v208, v113 + 16)
                                        || (v117 = v198 + nc,
                                            (unsigned __int8)sub_64780(v177.m128i_i64[0], (_QWORD *)(v198 + nc)))
                                        || (unsigned __int8)sub_318470(&v208, v117 + 16)
                                        || (v118 = v198 + nc, (unsigned __int8)sub_64780(v204, (_QWORD *)(v198 + nc)))
                                        || (unsigned __int8)sub_318470(&v205, v118 + 16) )
                                      {
                                        v166 = (int)v141;
                                      }
                                      if ( v166 > v169 )
                                        break;
                                      if ( *((_QWORD *)&v214 + 1) )
                                      {
                                        v215.m128i_i64[0] = 0;
                                        qfree(*((__int64 *)&v214 + 1));
                                      }
                                      qfree((__int64)v213);
                                      if ( v211 )
                                      {
                                        v212 = 0;
                                        qfree(v211);
                                      }
                                      qfree((__int64)v210[0]);
                                      v111 = v194;
                                      v112 = *(_QWORD *)(v112 + 8);
                                      if ( v112 == *(_QWORD *)(v194 + v145) )
                                        goto LABEL_147;
                                    }
                                    if ( *((_QWORD *)&v214 + 1) )
                                    {
                                      v215.m128i_i64[0] = 0;
                                      qfree(*((__int64 *)&v214 + 1));
                                    }
                                    qfree((__int64)v213);
                                    if ( v211 )
                                    {
                                      v212 = 0;
                                      qfree(v211);
                                    }
                                    qfree((__int64)v210[0]);
                                    v166 = -1;
                                  }
LABEL_148:
                                  if ( v208 )
                                  {
                                    *(_QWORD *)&v209 = 0;
                                    qfree(v208);
                                  }
                                }
                                qfree(v207[0]);
                                if ( v205 )
                                {
                                  *(_QWORD *)&v206 = 0;
                                  qfree(v205);
                                }
                                qfree(v204[0]);
                                if ( v202 )
                                {
                                  v69 = 0;
                                  if ( (_QWORD)v203 )
                                  {
                                    v177.m128i_i64[0] = v3;
                                    v70 = v203;
                                    do
                                    {
                                      v71 = (__int64 *)(v202 + 40 * v69);
                                      v72 = v71[2];
                                      if ( v72 )
                                      {
                                        v71[3] = 0;
                                        qfree(v72);
                                      }
                                      ++v69;
                                      qfree(*v71);
                                    }
                                    while ( v70 != v69 );
                                    v3 = v177.m128i_i64[0];
                                  }
                                  *(_QWORD *)&v203 = 0;
                                  qfree(v202);
                                }
                                if ( v200 )
                                {
                                  v73 = 0;
                                  if ( (_QWORD)v201 )
                                  {
                                    v177.m128i_i64[0] = v3;
                                    v74 = v201;
                                    do
                                    {
                                      v75 = (__int64 *)(v200 + 40 * v73);
                                      v76 = v75[2];
                                      if ( v76 )
                                      {
                                        v75[3] = 0;
                                        qfree(v76);
                                      }
                                      ++v73;
                                      qfree(*v75);
                                    }
                                    while ( v74 != v73 );
                                    v3 = v177.m128i_i64[0];
                                  }
                                  *(_QWORD *)&v201 = 0;
                                  qfree(v200);
                                }
                                if ( v198 )
                                {
                                  v77 = 0;
                                  if ( (_QWORD)v199 )
                                  {
                                    v177.m128i_i64[0] = v3;
                                    v78 = v199;
                                    do
                                    {
                                      v79 = (__int64 *)(v198 + 40 * v77);
                                      v80 = v79[2];
                                      if ( v80 )
                                      {
                                        v79[3] = 0;
                                        qfree(v80);
                                      }
                                      ++v77;
                                      qfree(*v79);
                                    }
                                    while ( v78 != v77 );
                                    v3 = v177.m128i_i64[0];
                                  }
                                  *(_QWORD *)&v199 = 0;
                                  qfree(v198);
                                }
                                if ( v196 )
                                {
                                  v81 = 0;
                                  if ( (_QWORD)v197 )
                                  {
                                    v177.m128i_i64[0] = v3;
                                    v82 = v197;
                                    do
                                    {
                                      v83 = (__int64 *)(v196 + 40 * v81);
                                      v84 = v83[2];
                                      if ( v84 )
                                      {
                                        v83[3] = 0;
                                        qfree(v84);
                                      }
                                      ++v81;
                                      qfree(*v83);
                                    }
                                    while ( v82 != v81 );
                                    v3 = v177.m128i_i64[0];
                                  }
                                  *(_QWORD *)&v197 = 0;
                                  qfree(v196);
                                }
                                if ( v166 == -1 )
                                  goto LABEL_209;
                                v85 = *(_QWORD *)(v194 + 8LL * v166);
                                if ( v10 != v3 )
                                  sub_11D890(v10, v3);
                                if ( (get_tinfo_property() & 0x2F) == 0xD )
                                {
                                  if ( *(_DWORD *)v10 == 2 )
                                    goto LABEL_310;
                                  v86 = *(__m128i **)(v179 + 64);
                                  v87 = v186;
                                  if ( (v186 & 0xFB) == 1 )
                                  {
                                    sub_1C9210(&v186, *(_QWORD *)(v179 + 64), v151);
                                    v87 = v186;
                                  }
                                  v187 |= 2u;
                                  if ( v87 == 15 )
                                  {
                                    if ( *(_DWORD *)v10 == 1 )
                                      goto LABEL_193;
LABEL_310:
                                    if ( (v190 & 0xFB) == 1 )
                                      sub_1C9210(v142, *(_QWORD *)(v179 + 64), v151);
                                    v191 |= 2u;
                                    if ( v190 != 15 || v186 != 15 )
                                      goto LABEL_194;
LABEL_199:
                                    v89 = v188;
LABEL_200:
                                    v90 = (__int64)v178;
                                    sub_12AB50(&v186, v178, v89, 2);
                                    sub_12AB50(v142, v90, (unsigned int)v192, 2);
                                    v91 = v176;
                                    sub_11CA10(v176, &v186);
                                    sub_11CA10(v163, v142);
                                    v92 = get_tinfo_property();
                                    v93 = *(_DWORD *)(v10 + 4);
                                    if ( (v92 & 0xF) == 9 )
                                    {
                                      *(_DWORD *)(v10 + 4) = v93 | 0x10;
                                      if ( *v91 == 2 )
                                      {
                                        v125 = *((int *)v176 + 1);
                                        v126 = *((_QWORD *)v176 + 1) + 16LL;
                                        v177.m128i_i64[0] = *((_QWORD *)v176 + 1);
                                        if ( (unsigned __int8)sub_11D360(&v186, v178, v126, v125) )
                                          sub_11CA10(v176, &v186);
                                      }
                                    }
                                    else
                                    {
                                      *(_BYTE *)(v10 + 33) &= ~4u;
                                      *(_BYTE *)(v10 + 65) &= ~4u;
                                      *(_DWORD *)(v10 + 4) = v93 & 0xFFFFFFEF;
                                    }
                                    sub_11D5D0(v10, v178);
                                    if ( v85 != v10 )
                                    {
                                      sub_11D890(v85, v10);
                                      *(_QWORD *)(v85 + 24) = *(_QWORD *)(v10 + 24);
                                    }
                                    v94 = 0;
                                    if ( (_QWORD)v195 )
                                    {
                                      do
                                      {
                                        if ( v166 != v174 )
                                          sub_11D5A0(*(_QWORD *)(v194 + 8 * v94));
                                        v94 = ++v174;
                                      }
                                      while ( v174 < (unsigned __int64)v195 );
                                    }
                                    v95 = v179;
                                    v96 = *(_DWORD *)(v179 + 24);
                                    v97 = *(_QWORD *)(v179 + 64);
                                    LODWORD(v179) = v96;
                                    BYTE1(v96) &= ~2u;
                                    *(_DWORD *)(v95 + 24) = v96 | 0x180;
                                    sub_66FA0(v97, 1u, (__int64)"recognized structure copy");
                                    v5 = v148;
                                    goto LABEL_209;
                                  }
                                  if ( v87 != 4 || (v127 = v189, *(_DWORD *)v189 != 2) || !v189 )
                                  {
                                    if ( *(_DWORD *)v10 != 1 )
                                      goto LABEL_310;
                                    goto LABEL_194;
                                  }
                                  v213 = (_QWORD *)(v189 + 24);
                                  v172 = (__int64 *)&v213;
                                  sub_C7FB0(v86 + 87, (unsigned __int64 *)(v189 + 24), &v213);
                                  copy_tinfo_t();
                                  *(_BYTE *)(v127 + 65) |= 2u;
                                  *(_DWORD *)(v127 + 4) &= ~0x10u;
                                  if ( *(_BYTE *)(v127 + 48) == 10 )
                                  {
                                    v133 = *(_QWORD *)(v127 + 56);
                                    if ( *(_BYTE *)v133 == 6 )
                                    {
                                      v213 = nullptr;
                                      v134 = *(_QWORD *)(v133 + 8);
                                      if ( !(unsigned __int8)sub_3810A0(v86[93].m128i_i64[1], v134, v172, 3)
                                        || (get_tinfo_property() & 0x2F) != 0xD )
                                      {
                                        sub_381E90(
                                          v86[93].m128i_i64[1],
                                          v134,
                                          (_DWORD)v151,
                                          3,
                                          0,
                                          v135,
                                          v136,
                                          (unsigned int)&v196,
                                          v137,
                                          (__int64)&v198,
                                          (unsigned int)&v200,
                                          (unsigned int)&v202,
                                          v140,
                                          (_DWORD)v141,
                                          (unsigned int)&v190,
                                          (_DWORD)v143,
                                          v145);
                                      }
                                      clear_tinfo_t();
                                    }
                                  }
                                  if ( *(_DWORD *)v10 != 1 )
                                    goto LABEL_310;
                                  if ( v186 == 15 )
                                  {
LABEL_193:
                                    if ( v190 != 15 )
                                      goto LABEL_194;
                                    goto LABEL_199;
                                  }
LABEL_194:
                                  v210[0] = (_QWORD *)(v85 + 24);
                                  v88 = (__m128i *)(*(_QWORD *)(v179 + 64) + 1392LL);
                                  v177.m128i_i64[0] = *(_QWORD *)(v179 + 64);
                                  sub_C7FB0(v88, (unsigned __int64 *)(v85 + 24), v210);
                                  copy_tinfo_t();
                                }
                                v89 = v188;
                                if ( v186 == 2 && tinfo_size > (int)v188 )
                                {
                                  if ( v188 != 8 )
                                  {
                                    if ( !under_debugger )
                                      sub_383060(51791);
                                    goto LABEL_348;
                                  }
                                  sub_1207E0(&v186, v178, 9, *(_QWORD *)(v10 + 24), (unsigned int)tinfo_size);
                                  goto LABEL_199;
                                }
                                goto LABEL_200;
                              }
                            }
                            else
                            {
LABEL_292:
                              v185 = 0;
                            }
                            v120 = sub_64BA0(v193, 0);
                            if ( v120 == (unsigned int)sub_64B20((__int64)v193) )
                            {
                              v121 = &v190;
                              if ( v151 != &v181 )
                                v121 = &v186;
                              if ( *v121 == 4
                                || (v177.m128i_i64[0] = *(_QWORD *)(v179 + 480),
                                    (unsigned __int8)sub_11CC50(v121, v177.m128i_i64[0], 0) == *(_BYTE *)(v177.m128i_i64[0] + 145)) )
                              {
                                v122 = 0;
                              }
                              else
                              {
                                v122 = tinfo_size - v120;
                              }
                              if ( (unsigned __int8)sub_B80A0(v151, v122, 0, v120, &v185)
                                && (get_tinfo_property() & 0xF) != 0xB )
                              {
                                if ( *(_DWORD *)v10 == 2 )
                                  goto LABEL_302;
                                sub_125180(&v186);
                                if ( !(unsigned __int8)sub_B8C10(
                                                         (__int64)v178,
                                                         &v186,
                                                         &v183,
                                                         n,
                                                         v176,
                                                         v120,
                                                         (__int64)&v185) )
                                  goto LABEL_209;
                                if ( *(_DWORD *)v10 != 1 )
                                {
LABEL_302:
                                  sub_125180(&v190);
                                  if ( !(unsigned __int8)sub_B8C10(
                                                           (__int64)v178,
                                                           &v190,
                                                           &v184,
                                                           n,
                                                           v163,
                                                           v120,
                                                           (__int64)&v185) )
                                    goto LABEL_209;
                                }
                                tinfo_size = v120;
                                v151 = &v185;
                                goto LABEL_101;
                              }
                            }
LABEL_209:
                            clear_tinfo_t();
                          }
                        }
                        else
                        {
                          v5 = 0;
                        }
                        sub_11CDA0(v223);
                        sub_11CDA0(v222);
                        sub_11CDA0(v221);
                        if ( v194 )
                        {
                          *(_QWORD *)&v195 = 0;
                          qfree(v194);
                        }
                        qfree(v193[0]);
LABEL_213:
                        sub_11CDA0(v142);
LABEL_214:
                        sub_11CDA0(&v186);
                        goto LABEL_215;
                      }
                      v32 = v220;
                      if ( !(unsigned __int8)sub_B7CB0((__int64)v178, v220, v31) )
                        v32 = (_QWORD *)v30;
                      if ( *(_DWORD *)v32 == 2 || (unsigned int)(*(_DWORD *)v32 - 8) <= 1 )
                        v170 = *((_DWORD *)v32 + 17);
                      else
                        v170 = *((_DWORD *)v32 + 9);
                      if ( !(unsigned __int8)sub_11CC50(v32 + 8, *(_QWORD *)(v179 + 480), 0) )
                        v177.m128i_i32[0] = *((_DWORD *)v32 + 9) + (int)v172 >= v156;
                    }
                    while ( !(unsigned __int8)sub_B9940(v210, v179, v167, (int *)v10, (int *)v32, 0, v177.m128i_i8[0])
                         || !(unsigned __int8)sub_B9940(
                                                &v213,
                                                v179,
                                                (__int64)v184,
                                                (int *)v10,
                                                (int *)v32,
                                                1u,
                                                v177.m128i_i8[0]) );
                    if ( v210[0] == v213 )
                    {
                      v33 = tinfo_size;
LABEL_83:
                      if ( (__int64)v213 + v170 <= v33 )
                      {
                        if ( sub_A2650(*(_QWORD *)(v179 + 64), v30) || (*((_BYTE *)v32 + 32) == 2) != (_BYTE)v143 )
                          goto LABEL_140;
                        if ( v144 == 2 )
                        {
                          if ( (unsigned __int8)sub_64A60(v193, (int)v213, v170) || v210[0] )
                            goto LABEL_140;
                          v102 = *((unsigned int *)v32 + 9);
                          LODWORD(v140) = (_DWORD)v213;
                          v103 = v32[5];
                          v177.m128i_i32[0] = (int)v213;
                          v139 = *(_QWORD *)(v179 + 480);
                          v138 = sub_32ABC0(*(_QWORD *)(v103 + 16), v102, 0);
                          if ( (unsigned __int8)sub_11CC50(&v190, v139, 0) )
                            v177.m128i_i32[0] = v192 - v140 - *((_DWORD *)v32 + 9);
                          if ( v192 > 8 && *((_DWORD *)v32 + 9) + v177.m128i_i32[0] > 7 && v138 )
                            goto LABEL_140;
                          v104 = 0;
                          if ( (unsigned __int64)(8 * v177.m128i_i32[0]) < 0x40 )
                            v104 = v138 << (8 * v177.m128i_i8[0]);
                          *(_QWORD *)(v189 + 16) |= v104;
                        }
                        else
                        {
                          v34 = sub_64A10(v193, (int)v213, v170);
                          if ( v170 == tinfo_size || v34 )
                            goto LABEL_140;
                        }
                        if ( !v148 )
                          v148 = sub_B80A0(v151, v213, 0, (unsigned int)v170, 0) ^ 1;
                        sub_63E80(v193, (int)v213, v170);
                        v35 = v195;
                        if ( v171.m128i_i8[0] )
                        {
                          v36 = 8 * v195;
                          v37 = v194 + 8 * v195;
                        }
                        else
                        {
                          v37 = v194;
                          v36 = 0;
                        }
                        if ( *((_QWORD *)&v195 + 1) < (unsigned __int64)(v195 + 1) )
                        {
                          v194 = qvector_reserve((__int64)&v194, v194, v195 + 1, 8);
                          v37 = v194 + v36;
                          v35 = v195;
                        }
                        v177.m128i_i64[0] = v37;
                        memmove((void *)(v37 + 8), (const void *)v37, 8 * v35 - v36);
                        *(_QWORD *)v177.m128i_i64[0] = v30;
                        *(_QWORD *)&v195 = v195 + 1;
                        v38 = sub_64B20((__int64)v193);
                        LODWORD(v172) = v38;
                        if ( v38 > tinfo_size )
                        {
                          if ( !under_debugger )
                            sub_383060(52796);
                          goto LABEL_348;
                        }
                        if ( v38 == tinfo_size )
                          goto LABEL_97;
                      }
                    }
                    else if ( !v210[0] && v186 == 2 )
                    {
                      v33 = tinfo_size;
                      if ( (__int64)v213 < tinfo_size )
                        goto LABEL_83;
                    }
                  }
                }
              }
              if ( !*(_QWORD *)(v167 + 8) )
              {
                v109 = *(_QWORD *)v167;
                v110 = *(int *)(v167 + 16);
                if ( *(_QWORD *)(*(_QWORD *)v167 + 440LL) < v110 )
                  sub_B7BC0(v26, v25, v109, v27, v28);
                v28 = *(_QWORD *)(v109 + 432);
                v27 = (unsigned int)tinfo_size;
                if ( tinfo_size == *(_DWORD *)(v28 + 104 * v110 + 88) )
                {
                  v148 = v171.m128i_i8[0];
                  goto LABEL_64;
                }
              }
              goto LABEL_62;
            }
LABEL_216:
            v23 = &v180;
            v151 = &v181;
            goto LABEL_48;
          }
        }
LABEL_25:
        clear_tinfo_t();
        clear_tinfo_t();
        goto LABEL_26;
      }
      if ( v6 - 1 > 1 )
      {
        v7 = 0;
        goto LABEL_8;
      }
    }
    v7 = 1;
LABEL_6:
    if ( (unsigned __int8)sub_186F90(v179, a2) )
    {
      sub_66FA0(*(_QWORD *)(v179 + 64), 1u, (__int64)"handle_inlined_memcpy_strcpy33");
      return 1;
    }
LABEL_7:
    if ( !(unsigned __int8)sub_188F40(v179, a2) )
      goto LABEL_8;
    sub_66FA0(*(_QWORD *)(v179 + 64), 1u, (__int64)"handle_inlined_memset58");
    return 1;
  }
  return v5;
}
