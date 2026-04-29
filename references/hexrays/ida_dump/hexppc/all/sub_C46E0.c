__int64 __fastcall sub_C46E0(__int64 a1, __int64 a2)
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
  __int64 *v32; // r14
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
  __int64 *v53; // r13
  __int64 v54; // r9
  unsigned __int64 v55; // r8
  __int64 v56; // rdi
  __m128i v57; // xmm0
  __int64 v58; // rax
  __int64 *v59; // r13
  __int64 v60; // r9
  size_t v61; // r8
  __int64 v62; // rdi
  __m128i v63; // xmm0
  __int64 v64; // rdx
  __int64 v65; // r13
  __int64 v66; // r14
  _QWORD *v67; // rbx
  __int64 v68; // rdi
  __int64 v69; // r13
  __int64 v70; // r14
  _QWORD *v71; // rbx
  __int64 v72; // rdi
  __int64 v73; // r13
  __int64 v74; // r14
  _QWORD *v75; // rbx
  __int64 v76; // rdi
  __int64 v77; // r13
  __int64 v78; // r14
  _QWORD *v79; // rbx
  __int64 v80; // rdi
  __int64 v81; // r12
  __m128i *v82; // rbx
  char v83; // al
  __m128i *v84; // rdi
  unsigned __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // r14
  char *v88; // rbx
  char v89; // dl
  int v90; // eax
  __int64 v91; // rax
  __int64 v92; // rcx
  int v93; // eax
  __int64 v94; // rdi
  __int64 v95; // rax
  __int64 *v96; // rdx
  __int64 v97; // rax
  int v98; // ecx
  __int64 v99; // rsi
  __int64 v100; // rax
  __int64 v101; // rax
  void *v102; // rax
  void *v103; // rax
  void *v104; // rax
  void *v105; // rax
  __int64 v106; // rdx
  unsigned __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // r14
  size_t v110; // r13
  __int64 v111; // r13
  __int64 v112; // rsi
  __int64 *v113; // r13
  size_t v114; // r13
  size_t v115; // r13
  size_t v116; // r13
  __int64 v117; // rsi
  unsigned int v118; // r14d
  char *v119; // rdi
  int v120; // eax
  __int64 v121; // rdx
  unsigned __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // r14
  unsigned __int64 v126; // rax
  _QWORD *v127; // r14
  _QWORD *v128; // rcx
  __int64 v129; // rax
  int v130; // edx
  char v131; // r13
  __int64 v132; // rax
  __int64 v133; // r13
  int v134; // r9d
  __int64 v135; // [rsp+0h] [rbp-3C0h]
  __int64 v136; // [rsp+10h] [rbp-3B0h]
  __int64 v137; // [rsp+20h] [rbp-3A0h]
  __int64 v138; // [rsp+28h] [rbp-398h]
  size_t v139; // [rsp+30h] [rbp-390h]
  __int64 *v140; // [rsp+38h] [rbp-388h]
  char *v141; // [rsp+40h] [rbp-380h]
  __int64 *v142; // [rsp+48h] [rbp-378h]
  char v143; // [rsp+50h] [rbp-370h]
  __int64 v144; // [rsp+50h] [rbp-370h]
  int v145; // [rsp+58h] [rbp-368h]
  size_t v146; // [rsp+58h] [rbp-368h]
  unsigned __int8 v147; // [rsp+67h] [rbp-359h]
  size_t v148; // [rsp+68h] [rbp-358h]
  unsigned __int64 v149; // [rsp+68h] [rbp-358h]
  __int64 *v150; // [rsp+78h] [rbp-348h]
  size_t v151; // [rsp+80h] [rbp-340h]
  size_t v152; // [rsp+80h] [rbp-340h]
  __int64 v153; // [rsp+80h] [rbp-340h]
  int v154; // [rsp+80h] [rbp-340h]
  int v155; // [rsp+90h] [rbp-330h]
  __int64 v156; // [rsp+90h] [rbp-330h]
  size_t n; // [rsp+98h] [rbp-328h]
  __int64 *na; // [rsp+98h] [rbp-328h]
  size_t nb; // [rsp+98h] [rbp-328h]
  __int64 nd; // [rsp+98h] [rbp-328h]
  size_t nc; // [rsp+98h] [rbp-328h]
  char *v162; // [rsp+A8h] [rbp-318h]
  __int64 v163; // [rsp+B0h] [rbp-310h]
  __int64 *v164; // [rsp+B0h] [rbp-310h]
  int v165; // [rsp+B0h] [rbp-310h]
  __int64 v166; // [rsp+B8h] [rbp-308h]
  __int64 v167; // [rsp+B8h] [rbp-308h]
  int v168; // [rsp+B8h] [rbp-308h]
  int v169; // [rsp+C8h] [rbp-2F8h]
  __m128i v170; // [rsp+D0h] [rbp-2F0h] BYREF
  __int64 *v171; // [rsp+E0h] [rbp-2E0h]
  int tinfo_size; // [rsp+E8h] [rbp-2D8h]
  int v173; // [rsp+ECh] [rbp-2D4h]
  _DWORD *v174; // [rsp+F0h] [rbp-2D0h]
  char *v175; // [rsp+F8h] [rbp-2C8h]
  __m128i v176; // [rsp+100h] [rbp-2C0h] BYREF
  char *v177; // [rsp+110h] [rbp-2B0h]
  __int64 v178; // [rsp+118h] [rbp-2A8h]
  __int64 v179; // [rsp+120h] [rbp-2A0h] BYREF
  __int64 v180; // [rsp+128h] [rbp-298h] BYREF
  __int64 v181; // [rsp+130h] [rbp-290h] BYREF
  __int64 v182; // [rsp+138h] [rbp-288h] BYREF
  __int64 *v183; // [rsp+140h] [rbp-280h] BYREF
  __int64 v184; // [rsp+148h] [rbp-278h] BYREF
  char v185; // [rsp+150h] [rbp-270h] BYREF
  char v186; // [rsp+151h] [rbp-26Fh]
  unsigned int v187; // [rsp+154h] [rbp-26Ch]
  __int64 v188; // [rsp+158h] [rbp-268h]
  char v189; // [rsp+160h] [rbp-260h] BYREF
  char v190; // [rsp+161h] [rbp-25Fh]
  int v191; // [rsp+164h] [rbp-25Ch]
  __int64 v192[2]; // [rsp+170h] [rbp-250h] BYREF
  __int64 v193; // [rsp+180h] [rbp-240h] BYREF
  __int128 v194; // [rsp+188h] [rbp-238h]
  __int64 v195; // [rsp+1A0h] [rbp-220h] BYREF
  __int128 v196; // [rsp+1A8h] [rbp-218h]
  __int64 v197; // [rsp+1C0h] [rbp-200h] BYREF
  __int128 v198; // [rsp+1C8h] [rbp-1F8h]
  __int64 v199; // [rsp+1E0h] [rbp-1E0h] BYREF
  __int128 v200; // [rsp+1E8h] [rbp-1D8h]
  __int64 v201; // [rsp+200h] [rbp-1C0h] BYREF
  __int128 v202; // [rsp+208h] [rbp-1B8h]
  __int64 v203[2]; // [rsp+220h] [rbp-1A0h] BYREF
  __int64 v204; // [rsp+230h] [rbp-190h] BYREF
  __int128 v205; // [rsp+238h] [rbp-188h]
  _QWORD v206[2]; // [rsp+250h] [rbp-170h] BYREF
  __int64 v207; // [rsp+260h] [rbp-160h] BYREF
  __int128 v208; // [rsp+268h] [rbp-158h]
  _QWORD *v209[2]; // [rsp+280h] [rbp-140h] BYREF
  __int64 v210; // [rsp+290h] [rbp-130h] BYREF
  __int64 v211; // [rsp+298h] [rbp-128h]
  _QWORD *v212; // [rsp+2B0h] [rbp-110h] BYREF
  __int128 v213; // [rsp+2B8h] [rbp-108h] BYREF
  __m128i v214; // [rsp+2C8h] [rbp-F8h] BYREF
  _DWORD v215[8]; // [rsp+2E0h] [rbp-E0h] BYREF
  _QWORD v216[2]; // [rsp+300h] [rbp-C0h] BYREF
  _QWORD v217[2]; // [rsp+310h] [rbp-B0h] BYREF
  _QWORD v218[2]; // [rsp+320h] [rbp-A0h] BYREF
  __int64 v219[4]; // [rsp+330h] [rbp-90h] BYREF
  _QWORD v220[2]; // [rsp+350h] [rbp-70h] BYREF
  _QWORD v221[2]; // [rsp+360h] [rbp-60h] BYREF
  _QWORD v222[10]; // [rsp+370h] [rbp-50h] BYREF

  v178 = a1;
  v2 = *(_QWORD *)(a1 + 64);
  v222[3] = __readfsqword(0x28u);
  v3 = a2;
  LOBYTE(v4) = sub_9EC10(v2, a2);
  if ( (_BYTE)v4 )
    return 0;
  v5 = v4;
  v173 = *(_DWORD *)(a2 + 4) & 0x80;
  if ( !v173 )
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
        v216[1] = 0;
        v217[1] = 0;
        v9 = *(_QWORD *)(v178 + 480);
        v218[1] = 0;
        v177 = *(char **)(v9 + 112);
        v216[0] = 0xFFFFFFFF00000000LL;
        v217[0] = 0xFFFFFFFF00000000LL;
        v218[0] = 0xFFFFFFFF00000000LL;
        v174 = v215;
        sub_32C520(v215, v8);
        if ( (unsigned __int8)sub_B4270((__int64)v177, v215, v3) )
        {
          v10 = (__int64)v174;
        }
        else
        {
          v10 = v3;
          if ( !v7 )
          {
LABEL_26:
            sub_119360(v218);
            sub_119360(v217);
            sub_119360(v216);
            return v5;
          }
        }
        if ( *(_DWORD *)v10 == 2 )
        {
          v175 = (char *)(v10 + 48);
          v162 = (char *)(v10 + 64);
          LODWORD(v171) = *(_DWORD *)(v10 + 68);
        }
        else
        {
          v175 = (char *)(v10 + 32);
          v162 = (char *)(v10 + 64);
          LODWORD(v171) = *(_DWORD *)(v10 + 36);
        }
        if ( *v175 == 1 && (unsigned __int8)sub_119290(v177, *((unsigned int *)v175 + 2))
          || *(_BYTE *)(v10 + 64) == 1 && (unsigned __int8)sub_119290(v177, *(unsigned int *)(v10 + 72))
          || ((v175[1] & 0x40) != 0 || (*(_BYTE *)(v10 + 65) & 0x40) != 0) && (*(_BYTE *)(v10 + 6) & 4) != 0 )
        {
          goto LABEL_26;
        }
        v11 = *(_DWORD *)v10 == 2;
        v179 = 0;
        v180 = 0;
        v12 = *(_QWORD *)(v178 + 64);
        n = *(_QWORD *)(v12 + 800);
        v13 = 1;
        if ( !v11 )
        {
          v13 = 0;
          if ( *v175 == 4 )
            v13 = **((_DWORD **)v175 + 1) == 2;
        }
        v14 = sub_B6C30(v12, &v179, v178, v10, v175, n, v13, 1, nullptr);
        v15 = 1;
        if ( *(_DWORD *)v10 != 1 )
        {
          v15 = 0;
          if ( *(_BYTE *)(v10 + 64) == 4 )
            v15 = **(_DWORD **)(v10 + 72) == 2;
        }
        v16 = sub_B6C30(*(_QWORD *)(v178 + 64), &v180, v178, v3, v162, n, v15, 1, nullptr);
        if ( v10 == v3 || (unsigned int)(*(_DWORD *)v3 - 56) <= 1 )
          goto LABEL_36;
        if ( *(_DWORD *)v3 != 10 )
        {
          if ( !under_debugger )
            sub_37EEE0(52920);
LABEL_348:
          BUG();
        }
        if ( v16 && ((get_tinfo_property(v180, 2) & 0x2F) == 0xD || (get_tinfo_property(v180, 2) & 0xF) == 9)
          || (unsigned __int8)sub_B6C30(
                                *(_QWORD *)(v178 + 64),
                                &v179,
                                v178,
                                v3,
                                (char *)(*(_QWORD *)(v3 + 40) + 32LL),
                                n,
                                0,
                                0,
                                nullptr)
          && ((get_tinfo_property(v179, 2) & 0x2F) == 0xD || (get_tinfo_property(v179, 2) & 0xF) == 9) )
        {
          sub_119E50(v3, v10);
          v17 = v178;
          v18 = *(_DWORD *)(v178 + 24);
          v19 = *(_QWORD *)(v178 + 64);
          LODWORD(v178) = v18;
          BYTE1(v18) &= ~2u;
          LOBYTE(v18) = v18 | 0x80;
          *(_DWORD *)(v17 + 24) = v18;
          sub_63560(v19, 1u, (__int64)"recognized structure copy: flatten low(shr)");
          v5 = 1;
        }
        else
        {
LABEL_36:
          v170.m128i_i8[0] = v16 | v14;
          if ( v16 | v14 )
          {
            if ( sub_B59E0((__int64)v177, &v179) )
              v176.m128i_i32[0] = get_tinfo_size(0, v179, 0);
            else
              v176.m128i_i32[0] = 0;
            tinfo_size = 0;
            if ( sub_B59E0((__int64)v177, &v180) )
              tinfo_size = get_tinfo_size(0, v180, 0);
            if ( v14 == 1 && (int)v171 < v176.m128i_i32[0] )
            {
              if ( (int)v171 >= tinfo_size )
              {
                v22 = tinfo_size;
                v21 = v176.m128i_i32[0];
                goto LABEL_47;
              }
            }
            else
            {
              if ( v16 != 1 || (int)v171 >= tinfo_size )
                goto LABEL_25;
              if ( (int)v171 >= v176.m128i_i32[0] )
                goto LABEL_216;
            }
            v21 = v176.m128i_i32[0];
            v22 = tinfo_size;
            if ( v176.m128i_i32[0] <= tinfo_size )
            {
LABEL_47:
              v176.m128i_i32[0] = v22;
              tinfo_size = v21;
              v23 = &v180;
              v150 = &v179;
LABEL_48:
              v181 = 0;
              if ( (get_tinfo_property(*v150, 2) & 0x2F) == 0xD
                && (get_tinfo_property(*v23, 2) & 0x2F) == 0xD
                && !(unsigned __int8)sub_B4660(v23, 0, 0, (unsigned int)tinfo_size, &v181) )
              {
                v147 = sub_B4660(v150, 0, 0, (unsigned int)v171, 0) ^ 1;
              }
              else if ( (_BYTE)v181 )
              {
                v95 = get_tinfo_size(0, v181, 0);
                v96 = v150;
                if ( tinfo_size == v95 )
                  v96 = &v181;
                v147 = v170.m128i_i8[0];
                v150 = v96;
              }
              else
              {
                v147 = v170.m128i_i8[0];
              }
              if ( *v175 == 2 && (get_tinfo_property(*v150, 2) & 0xF) != 9 && !(unsigned __int8)sub_B45F0(*v150) )
              {
                v219[0] = 0;
                tinfo_get_innermost_udm(v219, v150, 0, 0, &v212, 1);
                if ( !LOBYTE(v219[0])
                  || v212
                  || (get_tinfo_property(v219[0], 2) & 0xF) != 9 && !(unsigned __int8)sub_B45F0(v219[0])
                  || (tinfo_size = get_tinfo_size(0, v219[0], 0), tinfo_size <= v176.m128i_i32[0]) )
                {
                  clear_tinfo_t(v219);
                  goto LABEL_215;
                }
                copy_tinfo_t(&v180, v219);
                clear_tinfo_t(v219);
              }
              tinfo_property = get_tinfo_property(*v150, 15);
              if ( *v175 == 5
                && *(_QWORD *)(*((_QWORD *)v175 + 1) + 8LL) >= *(_QWORD *)(*(_QWORD *)(v178 + 64) + 144LL)
                && (!sub_B59E0((__int64)v177, &v179) || get_tinfo_size(0, v179, 0) < (unsigned __int64)tinfo_size) )
              {
LABEL_215:
                clear_tinfo_t(&v181);
                goto LABEL_25;
              }
              sub_120000(&v185, v175);
              v182 = 0;
              if ( *(_DWORD *)v10 != 2
                && !(unsigned __int8)sub_B51D0((__int64)v177, (__int64)&v185, &v182, n, v175, tinfo_size, v150) )
              {
                v5 = 0;
                goto LABEL_214;
              }
              if ( v185 == 2 && (unsigned __int8)sub_119210(v162, *(_QWORD *)(v178 + 480), 0) )
              {
                v97 = 0;
                v98 = 8 * (tinfo_size - *((_DWORD *)v175 + 1));
                if ( (unsigned __int64)v98 <= 0x3F )
                  v97 = *(_QWORD *)(v188 + 16) << v98;
                *(_QWORD *)(v188 + 16) = v97;
              }
              v25 = v162;
              v26 = &v189;
              v141 = &v189;
              sub_120000(&v189, v162);
              v183 = nullptr;
              if ( *(_DWORD *)v10 == 1 )
              {
                v166 = v182;
                if ( !v182 )
                  goto LABEL_64;
              }
              else
              {
                v25 = &v189;
                v26 = v177;
                if ( !(unsigned __int8)sub_B51D0((__int64)v177, (__int64)&v189, &v183, n, v162, tinfo_size, v150) )
                {
                  v5 = 0;
                  goto LABEL_213;
                }
                v166 = v182;
                if ( !v182 )
                {
LABEL_62:
                  if ( v183 && !v183[1] )
                  {
                    v121 = *v183;
                    v122 = *((int *)v183 + 4);
                    if ( *(_QWORD *)(*v183 + 440) < v122 )
                      sub_B4180(v26, v25, v121, v27, v28);
                    v147 |= *(_DWORD *)(*(_QWORD *)(v121 + 432) + 104 * v122 + 88) == tinfo_size;
                  }
LABEL_64:
                  v192[0] = 0;
                  v192[1] = 0;
                  sub_60440(v192, 0, (int)v171);
                  v194 = 0;
                  v140 = &v193;
                  v193 = 0;
                  v193 = qvector_reserve(&v193, 0, 1, 8);
                  *(_QWORD *)(v193 + 8 * v194) = v10;
                  *(_QWORD *)&v194 = v194 + 1;
                  v29 = *(_QWORD *)(v10 + 24);
                  v143 = v185;
                  v220[0] = 0xFFFFFFFF00000000LL;
                  v221[0] = 0xFFFFFFFF00000000LL;
                  v222[0] = 0xFFFFFFFF00000000LL;
                  v220[1] = 0;
                  v221[1] = 0;
                  v222[1] = 0;
                  LOBYTE(v142) = v185 == 2;
                  sub_32C520(v219, v29);
                  v155 = tinfo_property;
                  v145 = 2;
LABEL_65:
                  v30 = v10;
                  while ( 1 )
                  {
                    do
                    {
                      v31 = *(_QWORD *)(v30 + 16);
                      if ( v170.m128i_i8[0] )
                        v31 = *(_QWORD *)(v30 + 8);
                      v30 = v31;
                      if ( !v31 || (v176.m128i_i32[0] = *(_DWORD *)(v31 + 4) & 0x80) != 0 )
                      {
LABEL_140:
                        if ( (_DWORD)v171 != tinfo_size && v145 != 1 )
                        {
                          v145 = 1;
                          v170.m128i_i8[0] = 0;
                          goto LABEL_65;
                        }
LABEL_97:
                        if ( v147 )
                        {
                          if ( (_QWORD)v194 != 1 )
                          {
                            sub_61160(v192, 0);
                            if ( (unsigned __int8)sub_60FD0(v192, 0, v155) )
                            {
                              v184 = 0;
                              goto LABEL_101;
                            }
                            if ( (get_tinfo_property(*v150, 2) & 0x2F) == 0xD )
                            {
                              v117 = *v150;
                              v212 = nullptr;
                              v214.m128i_i64[0] = 0;
                              v214.m128i_i32[2] = -1;
                              v213 = 0;
                              if ( !(unsigned __int8)calc_tinfo_gaps(&v212, v117) )
                              {
                                if ( v212 )
                                {
                                  *(_QWORD *)&v213 = 0;
                                  qfree(v212);
                                }
                                goto LABEL_292;
                              }
                              v209[0] = nullptr;
                              v209[1] = nullptr;
                              sub_60440((__int64 *)v209, 0, v155);
                              v127 = v212;
                              v128 = &v212[2 * v213];
                              if ( v128 != v212 )
                              {
                                do
                                {
                                  v129 = *v127;
                                  v130 = *((_DWORD *)v127 + 2);
                                  v176.m128i_i64[0] = (__int64)v128;
                                  sub_60A00((__int64 *)v209, v129, v130 - v129);
                                  v128 = (_QWORD *)v176.m128i_i64[0];
                                  v127 += 2;
                                }
                                while ( (_QWORD *)v176.m128i_i64[0] != v127 );
                              }
                              v131 = sub_60DE0(v209, v192);
                              qfree(v209[0]);
                              if ( v212 )
                              {
                                *(_QWORD *)&v213 = 0;
                                qfree(v212);
                              }
                              v184 = 0;
                              if ( v131 )
                              {
LABEL_101:
                                v39 = v194;
                                v40 = (int)v194;
                                v195 = 0;
                                v197 = 0;
                                v199 = 0;
                                v201 = 0;
                                v144 = v194;
                                v196 = 0;
                                v198 = 0;
                                v200 = 0;
                                v202 = 0;
                                sub_BFE00(&v195, (int)v194);
                                sub_BFE00(&v197, v40);
                                sub_BFE00(&v199, v40);
                                sub_BFE00(&v201, v40);
                                v203[0] = 0;
                                v203[1] = 0;
                                v204 = 0;
                                v206[0] = 0;
                                v206[1] = 0;
                                v207 = 0;
                                v205 = 0;
                                v208 = 0;
                                if ( v39 <= 0 )
                                {
                                  v165 = 0;
                                }
                                else
                                {
                                  v163 = -40;
                                  v41 = v39;
                                  v42 = 0;
                                  LODWORD(v142) = v41 - 1;
                                  v156 = (unsigned int)(v41 - 1);
                                  v171 = (__int64 *)&v212;
                                  while ( 1 )
                                  {
                                    v43 = *(_QWORD *)(v193 + 8 * v42);
                                    v170.m128i_i64[0] = (__int64)v203;
                                    v176.m128i_i64[0] = (__int64)v206;
                                    sub_120C40(v171, v178, v43, 1);
                                    v44 = (__int64 *)(v163 + 40 + v195);
                                    v167 = v163 + 40;
                                    sub_60E90(v44, v171);
                                    v45 = *((_QWORD *)&v213 + 1);
                                    v46 = _mm_loadu_si128(&v214);
                                    *((_QWORD *)&v213 + 1) = 0;
                                    v214 = 0;
                                    v47 = v44[2];
                                    if ( v47 )
                                    {
                                      v44[3] = 0;
                                      v170.m128i_i64[0] = v45;
                                      v176 = v46;
                                      qfree(v47);
                                      v45 = v170.m128i_i64[0];
                                      v46 = _mm_load_si128(&v176);
                                    }
                                    v44[2] = v45;
                                    *(__m128i *)(v44 + 3) = v46;
                                    if ( *((_QWORD *)&v213 + 1) )
                                    {
                                      v214.m128i_i64[0] = 0;
                                      qfree(*((_QWORD *)&v213 + 1));
                                    }
                                    qfree(v212);
                                    v48 = *(_QWORD *)(v193 + 8 * v42);
                                    v170.m128i_i64[0] = (__int64)v203;
                                    v176.m128i_i64[0] = (__int64)v206;
                                    sub_123FE0(v171, v178, v48, 1);
                                    v49 = v197 + v167;
                                    sub_60E90((__int64 *)(v197 + v167), v171);
                                    v50 = *((_QWORD *)&v213 + 1);
                                    v51 = _mm_loadu_si128(&v214);
                                    *((_QWORD *)&v213 + 1) = 0;
                                    v214 = 0;
                                    v52 = *(_QWORD *)(v49 + 16);
                                    if ( v52 )
                                    {
                                      *(_QWORD *)(v49 + 24) = 0;
                                      v170.m128i_i64[0] = v50;
                                      v176 = v51;
                                      qfree(v52);
                                      v50 = v170.m128i_i64[0];
                                      v51 = _mm_load_si128(&v176);
                                    }
                                    *(_QWORD *)(v49 + 16) = v50;
                                    *(__m128i *)(v49 + 24) = v51;
                                    if ( *((_QWORD *)&v213 + 1) )
                                    {
                                      v214.m128i_i64[0] = 0;
                                      qfree(*((_QWORD *)&v213 + 1));
                                    }
                                    qfree(v212);
                                    if ( v42 )
                                    {
                                      na = (__int64 *)(v163 + v195);
                                      v151 = v199 + v163;
                                      v53 = (__int64 *)(v199 + v167);
                                      v170.m128i_i64[0] = (__int64)v203;
                                      v176.m128i_i64[0] = (__int64)v206;
                                      sub_60E90((__int64 *)(v199 + v167), (__int64 *)(v199 + v163));
                                      v54 = 0;
                                      v55 = *(_QWORD *)(v151 + 24);
                                      if ( v55 )
                                      {
                                        v146 = v151;
                                        v149 = *(_QWORD *)(v151 + 24);
                                        v170.m128i_i64[0] = (__int64)v203;
                                        v176.m128i_i64[0] = (__int64)v206;
                                        v153 = 16 * v55;
                                        v104 = (void *)qalloc_or_throw(16 * v55);
                                        v105 = memcpy(v104, *(const void **)(v146 + 16), v153);
                                        v55 = v149;
                                        v54 = (__int64)v105;
                                      }
                                      v56 = v53[2];
                                      v57 = _mm_unpacklo_epi64((__m128i)v55, (__m128i)v55);
                                      if ( v56 )
                                      {
                                        v53[3] = 0;
                                        v176.m128i_i64[0] = v54;
                                        v170 = v57;
                                        qfree(v56);
                                        v57 = _mm_load_si128(&v170);
                                        v54 = v176.m128i_i64[0];
                                      }
                                      v53[2] = v54;
                                      *(__m128i *)(v53 + 3) = v57;
                                      v170.m128i_i64[0] = (__int64)v203;
                                      v176.m128i_i64[0] = (__int64)v206;
                                      sub_60840(v53, na);
                                      v176.m128i_i64[0] = (__int64)v206;
                                      v170.m128i_i64[0] = (__int64)v203;
                                      sub_312B30(v53 + 2, na + 2);
                                      v58 = v163;
                                      v164 = (__int64 *)(v163 + v197);
                                      v59 = (__int64 *)(v201 + v167);
                                      nb = v201 + v58;
                                      v170.m128i_i64[0] = (__int64)v203;
                                      v176.m128i_i64[0] = (__int64)v206;
                                      sub_60E90((__int64 *)(v201 + v167), (__int64 *)(v201 + v58));
                                      v60 = 0;
                                      v61 = *(_QWORD *)(nb + 24);
                                      if ( v61 )
                                      {
                                        v148 = nb;
                                        v152 = *(_QWORD *)(nb + 24);
                                        v170.m128i_i64[0] = (__int64)v203;
                                        v176.m128i_i64[0] = (__int64)v206;
                                        nd = 16 * v61;
                                        v102 = (void *)qalloc_or_throw(16 * v61);
                                        v103 = memcpy(v102, *(const void **)(v148 + 16), nd);
                                        v61 = v152;
                                        v60 = (__int64)v103;
                                      }
                                      v62 = v59[2];
                                      v63 = _mm_unpacklo_epi64((__m128i)v61, (__m128i)v61);
                                      if ( v62 )
                                      {
                                        v59[3] = 0;
                                        v176.m128i_i64[0] = v60;
                                        v170 = v63;
                                        qfree(v62);
                                        v63 = _mm_load_si128(&v170);
                                        v60 = v176.m128i_i64[0];
                                      }
                                      v59[2] = v60;
                                      *(__m128i *)(v59 + 3) = v63;
                                      v170.m128i_i64[0] = (__int64)v203;
                                      v176.m128i_i64[0] = (__int64)v206;
                                      sub_60840(v59, v164);
                                      v170.m128i_i64[0] = (__int64)v203;
                                      v176.m128i_i64[0] = (__int64)v206;
                                      sub_312B30(v59 + 2, v164 + 2);
                                    }
                                    if ( v156 == v42 )
                                      break;
                                    ++v42;
                                    v163 = v167;
                                  }
                                  v168 = (int)v142;
                                  if ( (_DWORD)v144 == 1 )
                                  {
                                    v165 = 0;
                                  }
                                  else
                                  {
                                    v135 = (unsigned int)v142;
                                    v108 = v193;
                                    v64 = 0;
                                    v165 = 0;
                                    while ( 1 )
                                    {
                                      v154 = v64;
                                      LODWORD(v140) = v64 + 1;
                                      v109 = *(_QWORD *)(*(_QWORD *)(v108 + 8 * v64) + 8LL);
                                      v144 = 8 * v64 + 8;
                                      if ( *(_QWORD *)(v108 + 8 * v64 + 8) != v109 )
                                        break;
                                      v136 = v64 + 1;
LABEL_147:
                                      v64 = v136;
                                      if ( v135 == v136 )
                                        goto LABEL_148;
                                    }
                                    v136 = v64 + 1;
                                    nc = 40 * (v64 + 1);
                                    v170.m128i_i64[0] = (__int64)v203;
                                    v176.m128i_i64[0] = (__int64)v206;
                                    while ( 1 )
                                    {
                                      v111 = v178;
                                      sub_123FE0(v209, v178, v109, 1);
                                      v112 = v111;
                                      v113 = v171;
                                      sub_120C40(v171, v112, v109, 1);
                                      sub_60840(v203, v113);
                                      v142 = &v204;
                                      sub_312B30(&v204, (char *)&v213 + 8);
                                      sub_60840((__int64 *)v176.m128i_i64[0], (__int64 *)v209);
                                      sub_312B30(&v207, &v210);
                                      if ( v154 < v168 )
                                      {
                                        v139 = v199 + nc;
                                        if ( (unsigned __int8)sub_60D40(v209, (_QWORD *)(v199 + nc))
                                          || (unsigned __int8)sub_3142F0(&v210, v139 + 16)
                                          || (v139 = v201 + nc, (unsigned __int8)sub_60D40(v209, (_QWORD *)(v201 + nc)))
                                          || (unsigned __int8)sub_3142F0(&v210, v139 + 16)
                                          || (v116 = v201 + nc, (unsigned __int8)sub_60D40(v171, (_QWORD *)(v201 + nc)))
                                          || (unsigned __int8)sub_3142F0((char *)&v213 + 8, v116 + 16) )
                                        {
                                          v168 = v154;
                                        }
                                      }
                                      v110 = v195 + nc;
                                      if ( (unsigned __int8)sub_60D40(v176.m128i_i64[0], (_QWORD *)(v195 + nc))
                                        || (unsigned __int8)sub_3142F0(&v207, v110 + 16)
                                        || (v114 = v197 + nc,
                                            (unsigned __int8)sub_60D40(v176.m128i_i64[0], (_QWORD *)(v197 + nc)))
                                        || (unsigned __int8)sub_3142F0(&v207, v114 + 16)
                                        || (v115 = v197 + nc, (unsigned __int8)sub_60D40(v203, (_QWORD *)(v197 + nc)))
                                        || (unsigned __int8)sub_3142F0(&v204, v115 + 16) )
                                      {
                                        v165 = (int)v140;
                                      }
                                      if ( v165 > v168 )
                                        break;
                                      if ( *((_QWORD *)&v213 + 1) )
                                      {
                                        v214.m128i_i64[0] = 0;
                                        qfree(*((_QWORD *)&v213 + 1));
                                      }
                                      qfree(v212);
                                      if ( v210 )
                                      {
                                        v211 = 0;
                                        qfree(v210);
                                      }
                                      qfree(v209[0]);
                                      v108 = v193;
                                      v109 = *(_QWORD *)(v109 + 8);
                                      if ( v109 == *(_QWORD *)(v193 + v144) )
                                        goto LABEL_147;
                                    }
                                    if ( *((_QWORD *)&v213 + 1) )
                                    {
                                      v214.m128i_i64[0] = 0;
                                      qfree(*((_QWORD *)&v213 + 1));
                                    }
                                    qfree(v212);
                                    if ( v210 )
                                    {
                                      v211 = 0;
                                      qfree(v210);
                                    }
                                    qfree(v209[0]);
                                    v165 = -1;
                                  }
LABEL_148:
                                  if ( v207 )
                                  {
                                    *(_QWORD *)&v208 = 0;
                                    qfree(v207);
                                  }
                                }
                                qfree(v206[0]);
                                if ( v204 )
                                {
                                  *(_QWORD *)&v205 = 0;
                                  qfree(v204);
                                }
                                qfree(v203[0]);
                                if ( v201 )
                                {
                                  v65 = 0;
                                  if ( (_QWORD)v202 )
                                  {
                                    v176.m128i_i64[0] = v3;
                                    v66 = v202;
                                    do
                                    {
                                      v67 = (_QWORD *)(v201 + 40 * v65);
                                      v68 = v67[2];
                                      if ( v68 )
                                      {
                                        v67[3] = 0;
                                        qfree(v68);
                                      }
                                      ++v65;
                                      qfree(*v67);
                                    }
                                    while ( v66 != v65 );
                                    v3 = v176.m128i_i64[0];
                                  }
                                  *(_QWORD *)&v202 = 0;
                                  qfree(v201);
                                }
                                if ( v199 )
                                {
                                  v69 = 0;
                                  if ( (_QWORD)v200 )
                                  {
                                    v176.m128i_i64[0] = v3;
                                    v70 = v200;
                                    do
                                    {
                                      v71 = (_QWORD *)(v199 + 40 * v69);
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
                                    v3 = v176.m128i_i64[0];
                                  }
                                  *(_QWORD *)&v200 = 0;
                                  qfree(v199);
                                }
                                if ( v197 )
                                {
                                  v73 = 0;
                                  if ( (_QWORD)v198 )
                                  {
                                    v176.m128i_i64[0] = v3;
                                    v74 = v198;
                                    do
                                    {
                                      v75 = (_QWORD *)(v197 + 40 * v73);
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
                                    v3 = v176.m128i_i64[0];
                                  }
                                  *(_QWORD *)&v198 = 0;
                                  qfree(v197);
                                }
                                if ( v195 )
                                {
                                  v77 = 0;
                                  if ( (_QWORD)v196 )
                                  {
                                    v176.m128i_i64[0] = v3;
                                    v78 = v196;
                                    do
                                    {
                                      v79 = (_QWORD *)(v195 + 40 * v77);
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
                                    v3 = v176.m128i_i64[0];
                                  }
                                  *(_QWORD *)&v196 = 0;
                                  qfree(v195);
                                }
                                if ( v165 == -1 )
                                  goto LABEL_209;
                                v81 = *(_QWORD *)(v193 + 8LL * v165);
                                if ( v10 != v3 )
                                  sub_119E50(v10, v3);
                                if ( (get_tinfo_property(*v150, 2) & 0x2F) == 0xD )
                                {
                                  if ( *(_DWORD *)v10 == 2 )
                                    goto LABEL_310;
                                  v82 = *(__m128i **)(v178 + 64);
                                  v83 = v185;
                                  if ( (v185 & 0xFB) == 1 )
                                  {
                                    sub_1C57D0(&v185, *(_QWORD *)(v178 + 64), v150);
                                    v83 = v185;
                                  }
                                  v186 |= 2u;
                                  if ( v83 == 15 )
                                  {
                                    if ( *(_DWORD *)v10 == 1 )
                                      goto LABEL_193;
LABEL_310:
                                    if ( (v189 & 0xFB) == 1 )
                                      sub_1C57D0(v141, *(_QWORD *)(v178 + 64), v150);
                                    v190 |= 2u;
                                    if ( v189 != 15 || v185 != 15 )
                                      goto LABEL_194;
LABEL_199:
                                    v86 = v187;
LABEL_200:
                                    v87 = (__int64)v177;
                                    sub_127110(&v185, v177, v86, 2);
                                    sub_127110(v141, v87, (unsigned int)v191, 2);
                                    v88 = v175;
                                    sub_118FD0(v175, &v185);
                                    sub_118FD0(v162, v141);
                                    v89 = get_tinfo_property(*v150, 2);
                                    v90 = *(_DWORD *)(v10 + 4);
                                    if ( (v89 & 0xF) == 9 )
                                    {
                                      *(_DWORD *)(v10 + 4) = v90 | 0x10;
                                      if ( *v88 == 2 )
                                      {
                                        v123 = *((int *)v175 + 1);
                                        v124 = *((_QWORD *)v175 + 1) + 16LL;
                                        v176.m128i_i64[0] = *((_QWORD *)v175 + 1);
                                        if ( (unsigned __int8)sub_119920(&v185, v177, v124, v123) )
                                          sub_118FD0(v175, &v185);
                                      }
                                    }
                                    else
                                    {
                                      *(_BYTE *)(v10 + 33) &= ~4u;
                                      *(_BYTE *)(v10 + 65) &= ~4u;
                                      *(_DWORD *)(v10 + 4) = v90 & 0xFFFFFFEF;
                                    }
                                    sub_119B90(v10, v177);
                                    if ( v81 != v10 )
                                    {
                                      sub_119E50(v81, v10);
                                      *(_QWORD *)(v81 + 24) = *(_QWORD *)(v10 + 24);
                                    }
                                    v91 = 0;
                                    if ( (_QWORD)v194 )
                                    {
                                      do
                                      {
                                        if ( v165 != v173 )
                                          sub_119B60(*(_QWORD *)(v193 + 8 * v91));
                                        v91 = ++v173;
                                      }
                                      while ( v173 < (unsigned __int64)v194 );
                                    }
                                    v92 = v178;
                                    v93 = *(_DWORD *)(v178 + 24);
                                    v94 = *(_QWORD *)(v178 + 64);
                                    LODWORD(v178) = v93;
                                    BYTE1(v93) &= ~2u;
                                    *(_DWORD *)(v92 + 24) = v93 | 0x180;
                                    sub_63560(v94, 1u, (__int64)"recognized structure copy");
                                    v5 = v147;
                                    goto LABEL_209;
                                  }
                                  if ( v83 != 4 || (v125 = v188, *(_DWORD *)v188 != 2) || !v188 )
                                  {
                                    if ( *(_DWORD *)v10 != 1 )
                                      goto LABEL_310;
                                    goto LABEL_194;
                                  }
                                  v212 = (_QWORD *)(v188 + 24);
                                  v171 = (__int64 *)&v212;
                                  v126 = sub_C4570(v82 + 87, (unsigned __int64 *)(v188 + 24), &v212);
                                  copy_tinfo_t(v126 + 32, v150);
                                  *(_BYTE *)(v125 + 65) |= 2u;
                                  *(_DWORD *)(v125 + 4) &= ~0x10u;
                                  if ( *(_BYTE *)(v125 + 48) == 10 )
                                  {
                                    v132 = *(_QWORD *)(v125 + 56);
                                    if ( *(_BYTE *)v132 == 6 )
                                    {
                                      v212 = nullptr;
                                      v133 = *(_QWORD *)(v132 + 8);
                                      if ( !(unsigned __int8)sub_37CF20(v82[93].m128i_i64[1], v133, v171, 3)
                                        || (get_tinfo_property(v212, 2) & 0x2F) != 0xD )
                                      {
                                        sub_37DD10(
                                          v82[93].m128i_i64[1],
                                          v133,
                                          (_DWORD)v150,
                                          3,
                                          0,
                                          v134,
                                          v135,
                                          (unsigned int)&v195,
                                          v136,
                                          (__int64)&v197,
                                          (unsigned int)&v199,
                                          (unsigned int)&v201,
                                          v139,
                                          (_DWORD)v140,
                                          (unsigned int)&v189,
                                          (_DWORD)v142,
                                          v144);
                                      }
                                      clear_tinfo_t(v171);
                                    }
                                  }
                                  if ( *(_DWORD *)v10 != 1 )
                                    goto LABEL_310;
                                  if ( v185 == 15 )
                                  {
LABEL_193:
                                    if ( v189 != 15 )
                                      goto LABEL_194;
                                    goto LABEL_199;
                                  }
LABEL_194:
                                  v209[0] = (_QWORD *)(v81 + 24);
                                  v84 = (__m128i *)(*(_QWORD *)(v178 + 64) + 1392LL);
                                  v176.m128i_i64[0] = *(_QWORD *)(v178 + 64);
                                  v85 = sub_C4570(v84, (unsigned __int64 *)(v81 + 24), v209);
                                  copy_tinfo_t(v85 + 32, v150);
                                }
                                v86 = v187;
                                if ( v185 == 2 && tinfo_size > (int)v187 )
                                {
                                  if ( v187 != 8 )
                                  {
                                    if ( !under_debugger )
                                      sub_37EEE0(51791);
                                    goto LABEL_348;
                                  }
                                  sub_11CDA0(&v185, v177, 9, *(_QWORD *)(v10 + 24), (unsigned int)tinfo_size);
                                  goto LABEL_199;
                                }
                                goto LABEL_200;
                              }
                            }
                            else
                            {
LABEL_292:
                              v184 = 0;
                            }
                            v118 = sub_61160(v192, 0);
                            if ( v118 == (unsigned int)sub_610E0((__int64)v192) )
                            {
                              v119 = &v189;
                              if ( v150 != &v180 )
                                v119 = &v185;
                              if ( *v119 == 4
                                || (v176.m128i_i64[0] = *(_QWORD *)(v178 + 480),
                                    (unsigned __int8)sub_119210(v119, v176.m128i_i64[0], 0) == *(_BYTE *)(v176.m128i_i64[0] + 145)) )
                              {
                                v120 = 0;
                              }
                              else
                              {
                                v120 = tinfo_size - v118;
                              }
                              if ( (unsigned __int8)sub_B4660(v150, v120, 0, v118, &v184)
                                && (get_tinfo_property(v184, 2) & 0xF) != 0xB )
                              {
                                if ( *(_DWORD *)v10 == 2 )
                                  goto LABEL_302;
                                sub_121740(&v185);
                                if ( !(unsigned __int8)sub_B51D0(
                                                         (__int64)v177,
                                                         (__int64)&v185,
                                                         &v182,
                                                         n,
                                                         v175,
                                                         v118,
                                                         &v184) )
                                  goto LABEL_209;
                                if ( *(_DWORD *)v10 != 1 )
                                {
LABEL_302:
                                  sub_121740(&v189);
                                  if ( !(unsigned __int8)sub_B51D0(
                                                           (__int64)v177,
                                                           (__int64)&v189,
                                                           &v183,
                                                           n,
                                                           v162,
                                                           v118,
                                                           &v184) )
                                    goto LABEL_209;
                                }
                                tinfo_size = v118;
                                v150 = &v184;
                                goto LABEL_101;
                              }
                            }
LABEL_209:
                            clear_tinfo_t(&v184);
                          }
                        }
                        else
                        {
                          v5 = 0;
                        }
                        sub_119360(v222);
                        sub_119360(v221);
                        sub_119360(v220);
                        if ( v193 )
                        {
                          *(_QWORD *)&v194 = 0;
                          qfree(v193);
                        }
                        qfree(v192[0]);
LABEL_213:
                        sub_119360(v141);
LABEL_214:
                        sub_119360(&v185);
                        goto LABEL_215;
                      }
                      v32 = v219;
                      if ( !(unsigned __int8)sub_B4270((__int64)v177, v219, v31) )
                        v32 = (__int64 *)v30;
                      if ( *(_DWORD *)v32 == 2 || (unsigned int)(*(_DWORD *)v32 - 8) <= 1 )
                        v169 = *((_DWORD *)v32 + 17);
                      else
                        v169 = *((_DWORD *)v32 + 9);
                      if ( !(unsigned __int8)sub_119210(v32 + 8, *(_QWORD *)(v178 + 480), 0) )
                        v176.m128i_i32[0] = *((_DWORD *)v32 + 9) + (int)v171 >= v155;
                    }
                    while ( !(unsigned __int8)sub_B5F00(v209, v178, v166, (int *)v10, (int *)v32, 0, v176.m128i_i8[0])
                         || !(unsigned __int8)sub_B5F00(
                                                &v212,
                                                v178,
                                                (__int64)v183,
                                                (int *)v10,
                                                (int *)v32,
                                                1u,
                                                v176.m128i_i8[0]) );
                    if ( v209[0] == v212 )
                    {
                      v33 = tinfo_size;
LABEL_83:
                      if ( (__int64)v212 + v169 <= v33 )
                      {
                        if ( sub_9EC10(*(_QWORD *)(v178 + 64), v30) || (*((_BYTE *)v32 + 32) == 2) != (_BYTE)v142 )
                          goto LABEL_140;
                        if ( v143 == 2 )
                        {
                          if ( (unsigned __int8)sub_61020(v192, (int)v212, v169) || v209[0] )
                            goto LABEL_140;
                          v99 = *((unsigned int *)v32 + 9);
                          LODWORD(v139) = (_DWORD)v212;
                          v100 = v32[5];
                          v176.m128i_i32[0] = (int)v212;
                          v138 = *(_QWORD *)(v178 + 480);
                          v137 = sub_326890(*(_QWORD *)(v100 + 16), v99, 0);
                          if ( (unsigned __int8)sub_119210(&v189, v138, 0) )
                            v176.m128i_i32[0] = v191 - v139 - *((_DWORD *)v32 + 9);
                          if ( v191 > 8 && *((_DWORD *)v32 + 9) + v176.m128i_i32[0] > 7 && v137 )
                            goto LABEL_140;
                          v101 = 0;
                          if ( (unsigned __int64)(8 * v176.m128i_i32[0]) < 0x40 )
                            v101 = v137 << (8 * v176.m128i_i8[0]);
                          *(_QWORD *)(v188 + 16) |= v101;
                        }
                        else
                        {
                          v34 = sub_60FD0(v192, (int)v212, v169);
                          if ( v169 == tinfo_size || v34 )
                            goto LABEL_140;
                        }
                        if ( !v147 )
                          v147 = sub_B4660(v150, v212, 0, (unsigned int)v169, 0) ^ 1;
                        sub_60440(v192, (int)v212, v169);
                        v35 = v194;
                        if ( v170.m128i_i8[0] )
                        {
                          v36 = 8 * v194;
                          v37 = v193 + 8 * v194;
                        }
                        else
                        {
                          v37 = v193;
                          v36 = 0;
                        }
                        if ( *((_QWORD *)&v194 + 1) < (unsigned __int64)(v194 + 1) )
                        {
                          v193 = qvector_reserve(&v193, v193, v194 + 1, 8);
                          v37 = v193 + v36;
                          v35 = v194;
                        }
                        v176.m128i_i64[0] = v37;
                        memmove((void *)(v37 + 8), (const void *)v37, 8 * v35 - v36);
                        *(_QWORD *)v176.m128i_i64[0] = v30;
                        *(_QWORD *)&v194 = v194 + 1;
                        v38 = sub_610E0((__int64)v192);
                        LODWORD(v171) = v38;
                        if ( v38 > tinfo_size )
                        {
                          if ( !under_debugger )
                            sub_37EEE0(52796);
                          goto LABEL_348;
                        }
                        if ( v38 == tinfo_size )
                          goto LABEL_97;
                      }
                    }
                    else if ( !v209[0] && v185 == 2 )
                    {
                      v33 = tinfo_size;
                      if ( (__int64)v212 < tinfo_size )
                        goto LABEL_83;
                    }
                  }
                }
              }
              if ( !*(_QWORD *)(v166 + 8) )
              {
                v106 = *(_QWORD *)v166;
                v107 = *(int *)(v166 + 16);
                if ( *(_QWORD *)(*(_QWORD *)v166 + 440LL) < v107 )
                  sub_B4180(v26, v25, v106, v27, v28);
                v28 = *(_QWORD *)(v106 + 432);
                v27 = (unsigned int)tinfo_size;
                if ( tinfo_size == *(_DWORD *)(v28 + 104 * v107 + 88) )
                {
                  v147 = v170.m128i_i8[0];
                  goto LABEL_64;
                }
              }
              goto LABEL_62;
            }
LABEL_216:
            v23 = &v179;
            v150 = &v180;
            goto LABEL_48;
          }
        }
LABEL_25:
        clear_tinfo_t(&v180);
        clear_tinfo_t(&v179);
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
    if ( (unsigned __int8)sub_183550(v178, a2) )
    {
      sub_63560(*(_QWORD *)(v178 + 64), 1u, (__int64)"handle_inlined_memcpy_strcpy33");
      return 1;
    }
LABEL_7:
    if ( !(unsigned __int8)sub_185500(v178, a2) )
      goto LABEL_8;
    sub_63560(*(_QWORD *)(v178 + 64), 1u, (__int64)"handle_inlined_memset58");
    return 1;
  }
  return v5;
}
