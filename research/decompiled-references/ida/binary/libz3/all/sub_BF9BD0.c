__int64 __fastcall sub_BF9BD0(__m128 *a1, __int64 a2)
{
  char **v2; // rbx
  char **exception; // rbx
  __m128 *v5; // rdi
  __int64 v6; // rax
  _DWORD *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 *v10; // r15
  int v11; // ecx
  int v12; // eax
  void *v13; // r13
  void *v14; // r12
  void *v15; // r12
  void *v16; // rbx
  unsigned int *v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  unsigned int *v20; // rsi
  __int64 v21; // rdi
  unsigned int *v22; // rsi
  __int64 v23; // rdi
  unsigned int *v24; // rsi
  __int64 v25; // rdi
  __int64 *v26; // rbx
  unsigned __int64 v27; // r12
  char v28; // r14
  __int64 v29; // rsi
  __int64 *v30; // rbx
  unsigned __int64 v31; // r12
  char v32; // r14
  __int64 v33; // rsi
  unsigned int v35; // eax
  int v36; // r8d
  __int64 v37; // rcx
  unsigned int *v38; // rcx
  _QWORD *v39; // rax
  unsigned int **v40; // rsi
  __int64 v41; // r8
  unsigned int *v42; // rcx
  _QWORD *v43; // rdi
  __int64 v44; // r8
  int i; // eax
  unsigned int *v46; // rcx
  unsigned int v47; // eax
  __int64 *v48; // rdx
  unsigned __int64 v49; // r15
  __int64 v50; // rsi
  unsigned __int64 v51; // rdi
  __int64 v52; // rcx
  __int64 v53; // r8
  _QWORD *v54; // rax
  unsigned int *v55; // rcx
  unsigned int **v56; // rsi
  int j; // eax
  unsigned int v58; // eax
  __int64 *v59; // rax
  char v60; // r13
  __int64 *v61; // r14
  unsigned int v62; // r9d
  size_t v63; // rsi
  _DWORD *v64; // rax
  __int64 v65; // rsi
  unsigned int v66; // r9d
  size_t v67; // rsi
  _DWORD *v68; // rax
  __int64 v69; // rsi
  __int64 *v70; // r14
  __int64 *v71; // r15
  __int64 v72; // rsi
  unsigned __int64 v73; // rdi
  __int64 *v74; // r15
  __int64 v75; // rsi
  unsigned __int64 v76; // rdi
  int v77; // eax
  int v78; // edx
  unsigned int v79; // eax
  __int64 v80; // rdx
  unsigned int v81; // eax
  __int64 v82; // rsi
  unsigned int v83; // r13d
  __int64 v84; // rdi
  unsigned __int64 v85; // r14
  char v86; // al
  __int64 v87; // rax
  unsigned __int64 v88; // rsi
  unsigned __int64 v89; // rdi
  unsigned int v90; // r15d
  unsigned __int64 v91; // rax
  int v92; // edx
  int v93; // ecx
  int v94; // r8d
  int v95; // r9d
  int v96; // eax
  __int64 v97; // rsi
  __int64 v98; // rdi
  unsigned __int64 v99; // rsi
  unsigned __int64 v100; // rdi
  unsigned __int64 v101; // rsi
  unsigned __int64 v102; // rdi
  unsigned int v103; // r15d
  unsigned __int64 v104; // rax
  int v105; // edx
  int v106; // ecx
  int v107; // r8d
  int v108; // r9d
  int v109; // eax
  __int64 v110; // rsi
  __int64 v111; // rdi
  unsigned __int64 v112; // rsi
  unsigned __int64 v113; // rdi
  unsigned __int64 v114; // rsi
  unsigned __int64 v115; // rdi
  __int64 v116; // r15
  __int64 v117; // rcx
  char v118; // al
  unsigned __int64 v119; // rdi
  unsigned __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // r15
  unsigned __int64 v123; // rdi
  __int64 v124; // rax
  unsigned __int64 v125; // rdi
  __int64 v126; // rax
  __int64 v127; // r14
  unsigned __int64 v128; // rdi
  __m128i v129; // xmm0
  __int64 v130; // rax
  __int64 v131; // r13
  __int64 v132; // rax
  char v133; // dl
  __int64 v134; // rcx
  __int64 v135; // rcx
  char v136; // dl
  int v137; // edx
  unsigned int *v138; // rcx
  char v139; // al
  char v140; // dl
  char v141; // al
  int v142; // edx
  unsigned int *v143; // rcx
  unsigned __int64 v144; // [rsp+8h] [rbp-290h]
  unsigned __int64 v145; // [rsp+10h] [rbp-288h]
  unsigned __int64 v146; // [rsp+18h] [rbp-280h]
  unsigned __int64 v147; // [rsp+20h] [rbp-278h]
  __int64 v148; // [rsp+28h] [rbp-270h]
  __int64 v149; // [rsp+30h] [rbp-268h]
  unsigned int v150; // [rsp+3Ch] [rbp-25Ch]
  __int64 v151; // [rsp+40h] [rbp-258h]
  __int64 v152; // [rsp+48h] [rbp-250h]
  __int64 v153; // [rsp+48h] [rbp-250h]
  __int64 v154; // [rsp+48h] [rbp-250h]
  unsigned int v155; // [rsp+50h] [rbp-248h]
  __int64 v156; // [rsp+50h] [rbp-248h]
  __int64 v157; // [rsp+50h] [rbp-248h]
  unsigned int v158; // [rsp+58h] [rbp-240h]
  unsigned int *v159; // [rsp+58h] [rbp-240h]
  unsigned int *v160; // [rsp+58h] [rbp-240h]
  _DWORD *v161; // [rsp+60h] [rbp-238h]
  __m128 *v162; // [rsp+68h] [rbp-230h] BYREF
  void *v163; // [rsp+70h] [rbp-228h]
  __int64 *v164; // [rsp+78h] [rbp-220h]
  __int64 *v165; // [rsp+80h] [rbp-218h]
  unsigned int *v166; // [rsp+88h] [rbp-210h] BYREF
  __m128i *v167; // [rsp+90h] [rbp-208h]
  _QWORD *v168; // [rsp+98h] [rbp-200h]
  void *v169; // [rsp+A0h] [rbp-1F8h]
  void *v170; // [rsp+A8h] [rbp-1F0h]
  unsigned int **v171; // [rsp+B0h] [rbp-1E8h]
  unsigned int v172; // [rsp+C4h] [rbp-1D4h] BYREF
  int v173; // [rsp+C8h] [rbp-1D0h] BYREF
  int v174; // [rsp+CCh] [rbp-1CCh] BYREF
  unsigned int *v175; // [rsp+D0h] [rbp-1C8h] BYREF
  __int64 v176; // [rsp+D8h] [rbp-1C0h] BYREF
  unsigned __int64 v177; // [rsp+E0h] [rbp-1B8h]
  __int64 v178; // [rsp+E8h] [rbp-1B0h] BYREF
  _QWORD *v179; // [rsp+F0h] [rbp-1A8h]
  unsigned int *v180; // [rsp+F8h] [rbp-1A0h] BYREF
  __int64 v181; // [rsp+100h] [rbp-198h]
  unsigned int *v182; // [rsp+108h] [rbp-190h] BYREF
  __int64 v183; // [rsp+110h] [rbp-188h]
  unsigned int *v184; // [rsp+118h] [rbp-180h] BYREF
  __int64 v185; // [rsp+120h] [rbp-178h]
  unsigned int *v186; // [rsp+128h] [rbp-170h] BYREF
  __int64 v187; // [rsp+130h] [rbp-168h]
  _QWORD v188[2]; // [rsp+138h] [rbp-160h] BYREF
  _QWORD v189[2]; // [rsp+148h] [rbp-150h] BYREF
  __m128i v190; // [rsp+158h] [rbp-140h] BYREF
  __m128i v191; // [rsp+168h] [rbp-130h] BYREF
  __m128i v192; // [rsp+178h] [rbp-120h] BYREF
  __m128i v193[2]; // [rsp+188h] [rbp-110h] BYREF
  __m128 v194; // [rsp+1A8h] [rbp-F0h] BYREF
  __m128 v195; // [rsp+1B8h] [rbp-E0h] BYREF
  _QWORD v196[2]; // [rsp+1C8h] [rbp-D0h] BYREF
  _QWORD v197[2]; // [rsp+1D8h] [rbp-C0h] BYREF
  _QWORD v198[2]; // [rsp+1E8h] [rbp-B0h] BYREF
  _QWORD v199[2]; // [rsp+1F8h] [rbp-A0h] BYREF
  _QWORD v200[2]; // [rsp+208h] [rbp-90h] BYREF
  _QWORD v201[2]; // [rsp+218h] [rbp-80h] BYREF
  _QWORD v202[2]; // [rsp+228h] [rbp-70h] BYREF
  _QWORD v203[2]; // [rsp+238h] [rbp-60h] BYREF
  __m128i v204; // [rsp+248h] [rbp-50h] BYREF

  v5 = a1 + 214;
  v6 = v5[-213].m128_i64[1];
  v177 = 0;
  v179 = nullptr;
  v176 = v6;
  v178 = v6;
  v181 = v6;
  v183 = v6;
  v185 = v6;
  v187 = v6;
  v180 = nullptr;
  v182 = nullptr;
  v184 = nullptr;
  v186 = nullptr;
  v164 = &v176;
  v165 = &v178;
  LOBYTE(v171) = sub_1467ED0(
                   (_DWORD)v5,
                   a2,
                   (int)a2 + 16,
                   (unsigned int)&v180,
                   (unsigned int)&v176,
                   (unsigned int)&v182,
                   (__int64)&v184,
                   (__int64)&v178,
                   (__int64)&v186);
  if ( !(_BYTE)v171 )
    goto LABEL_17;
  v7 = *(_DWORD **)(a2 + 40);
  v169 = v200;
  v161 = v7;
  v8 = a1->m128_u64[0];
  v196[0] = 0;
  v196[1] = 0;
  v197[0] = 1;
  v197[1] = 0;
  v198[0] = 0;
  v198[1] = 0;
  v199[0] = 1;
  v199[1] = 0;
  v200[0] = 0;
  v200[1] = 0;
  v201[0] = 1;
  v201[1] = 0;
  v202[0] = 0;
  v202[1] = 0;
  v203[0] = 1;
  v203[1] = 0;
  v163 = v196;
  v170 = v198;
  if ( !(*(unsigned __int8 (__fastcall **)(__m128 *, unsigned int *))(v8 + 416))(a1, v180) )
  {
    v169 = v200;
    v170 = v198;
    sub_BBB240((__int64)a1, v180);
  }
  v9 = a1->m128_u64[0];
  v169 = v200;
  v170 = v198;
  if ( !(*(unsigned __int8 (__fastcall **)(__m128 *, unsigned int *))(v9 + 416))(a1, v184) )
  {
    v170 = v198;
    sub_BBB240((__int64)a1, v184);
  }
  v170 = v198;
  if ( !(*(unsigned __int8 (__fastcall **)(__m128 *, unsigned int *, _QWORD *))(a1->m128_u64[0] + 416))(a1, v182, v198) )
    sub_BBB240((__int64)a1, v182);
  if ( !(*(unsigned __int8 (__fastcall **)(__m128 *, unsigned int *, _QWORD *))(a1->m128_u64[0] + 416))(a1, v186, v202) )
    sub_BBB240((__int64)a1, v186);
  v10 = (__int64 *)v177;
  if ( v179 )
  {
    v11 = *((_DWORD *)v179 - 1);
    if ( !v177 )
    {
      v12 = 0;
LABEL_13:
      if ( v12 == v11 )
      {
        v35 = v12 - 1;
        v36 = v35;
        goto LABEL_50;
      }
LABEL_14:
      if ( (unsigned __int8)sub_BF6590((__int64)a1, (__int64)v164, (__int64)v165)
        || (unsigned __int8)sub_BF6CB0((__int64)a1, (__int64)v164, (__int64)v165)
        || (unsigned __int8)sub_BF6590((__int64)a1, (__int64)v165, (__int64)v164)
        || (unsigned __int8)sub_BF6CB0((__int64)a1, (__int64)v165, (__int64)v164) )
      {
        goto LABEL_15;
      }
LABEL_119:
      if ( v179 )
      {
        v77 = *((_DWORD *)v179 - 1);
        if ( !v177 )
        {
          v78 = 0;
LABEL_122:
          v168 = nullptr;
          if ( v78 != v77 )
            goto LABEL_134;
          goto LABEL_123;
        }
      }
      else
      {
        v77 = 0;
        if ( !v177 )
        {
LABEL_123:
          v79 = v77 - 1;
          while ( v79 != -1 )
          {
            v80 = v79--;
            if ( v179[v80] != *(_QWORD *)(v177 + 8 * v80) )
            {
              v168 = nullptr;
              goto LABEL_134;
            }
          }
          sub_BB1EF0((__int64)&v195, (__int64)a1);
          sub_BB1EF0((__int64)&v204, (__int64)a1);
          v81 = sub_966380((__int64)a1, v195.m128_u64[0], v204.m128i_i64[0]);
          v82 = v204.m128i_i64[0];
          v83 = v81;
          if ( v204.m128i_i64[0] )
          {
            v84 = v204.m128i_i64[1];
            v19 = (*(_DWORD *)(v204.m128i_i64[0] + 8))-- == 1;
            if ( v19 )
              sub_15D7BC0(v84, v82);
          }
          v85 = a1[1].m128_u64[0];
          v86 = *(_BYTE *)(*(_QWORD *)(v85 + 8848) + v83);
          if ( v86 )
          {
            if ( v86 != 1 )
            {
              v87 = sub_186B270(0x10u);
              v88 = v195.m128_u64[0];
              *(_DWORD *)(v87 + 8) = v83 ^ 1;
              v168 = (_QWORD *)(v87 + 8);
              *(_QWORD *)v87 = 0x100000002LL;
              if ( v88 )
              {
                v89 = v195.m128_u64[1];
                v19 = (*(_DWORD *)(v88 + 8))-- == 1;
                if ( v19 )
                  sub_15D7BC0(v89, v88);
              }
LABEL_134:
              v172 = sub_BF73D0((__int64)a1, (__int64)v180, (__int64)v184);
              v166 = &a1[136].m128_u32[2];
              if ( v177 )
                v90 = *(_DWORD *)(v177 - 4);
              else
                v90 = 0;
              sub_BB1EF0((__int64)&v195, (__int64)a1);
              sub_BB1EF0((__int64)&v194, (__int64)a1);
              v167 = &v204;
              sub_BB1E10(&v204, (__int64)a1);
              v162 = a1 + 138;
              sub_993400((__int64)&a1[138], v90);
              v91 = sub_15E1B70(a1[138].m128_u64[0]);
              v96 = sub_BF5550((__int64)v166, v91, v92, v93, v94, v95);
              v97 = v204.m128i_i64[0];
              v155 = v96;
              v173 = v96;
              if ( v204.m128i_i64[0] )
              {
                v98 = v204.m128i_i64[1];
                v19 = (*(_DWORD *)(v204.m128i_i64[0] + 8))-- == 1;
                if ( v19 )
                  sub_15D7BC0(v98, v97);
              }
              v99 = v194.m128_u64[0];
              if ( v194.m128_u64[0] )
              {
                v100 = v194.m128_u64[1];
                v19 = (*(_DWORD *)(v194.m128_u64[0] + 8))-- == 1;
                if ( v19 )
                  sub_15D7BC0(v100, v99);
              }
              v101 = v195.m128_u64[0];
              if ( v195.m128_u64[0] )
              {
                v102 = v195.m128_u64[1];
                v19 = (*(_DWORD *)(v195.m128_u64[0] + 8))-- == 1;
                if ( v19 )
                  sub_15D7BC0(v102, v101);
              }
              if ( v179 )
                v103 = *((_DWORD *)v179 - 1);
              else
                v103 = 0;
              sub_BB1EF0((__int64)&v195, (__int64)a1);
              sub_BB1EF0((__int64)&v194, (__int64)a1);
              sub_BB1E10(v167, (__int64)a1);
              sub_993400((__int64)v162, v103);
              v104 = sub_15E1B70(a1[138].m128_u64[0]);
              v109 = sub_BF5550((__int64)v166, v104, v105, v106, v107, v108);
              v110 = v204.m128i_i64[0];
              v158 = v109;
              v174 = v109;
              if ( v204.m128i_i64[0] )
              {
                v111 = v204.m128i_i64[1];
                v19 = (*(_DWORD *)(v204.m128i_i64[0] + 8))-- == 1;
                if ( v19 )
                  sub_15D7BC0(v111, v110);
              }
              v112 = v194.m128_u64[0];
              if ( v194.m128_u64[0] )
              {
                v113 = v194.m128_u64[1];
                v19 = (*(_DWORD *)(v194.m128_u64[0] + 8))-- == 1;
                if ( v19 )
                  sub_15D7BC0(v113, v112);
              }
              v114 = v195.m128_u64[0];
              if ( v195.m128_u64[0] )
              {
                v115 = v195.m128_u64[1];
                v19 = (*(_DWORD *)(v195.m128_u64[0] + 8))-- == 1;
                if ( v19 )
                  sub_15D7BC0(v115, v114);
              }
              v116 = a1[1].m128_i64[0];
              v117 = *(_QWORD *)(v116 + 8848);
              v150 = v172;
              v152 = v172;
              v118 = *(_BYTE *)(v117 + v172);
              if ( v118 )
              {
                if ( v118 == 1 )
                {
                  if ( *(_BYTE *)(v117 + v155) )
                  {
LABEL_159:
                    sub_C03ED0(v188, a1, v164);
                    v166 = (unsigned int *)v188[0];
                    v149 = v188[1];
                    sub_C03ED0(v189, a1, v165);
                    v119 = a1[108].m128_u64[1];
                    v162 = (__m128 *)v189[0];
                    v148 = v189[1];
                    v120 = a1[1].m128_u64[1];
                    v193[1] = (__m128i)_mm_loadh_ps((const double *)&v166);
                    v147 = v120;
                    v121 = sub_15E1AF0(v119);
                    v122 = v121;
                    if ( v121 )
                      ++*(_DWORD *)(v121 + 8);
                    v123 = a1[108].m128_u64[1];
                    v146 = a1[1].m128_u64[1];
                    v194 = _mm_loadh_ps((const double *)&v162);
                    v124 = sub_15E1AF0(v123);
                    v151 = v124;
                    if ( v124 )
                      ++*(_DWORD *)(v124 + 8);
                    v125 = a1[108].m128_u64[1];
                    v145 = a1[1].m128_u64[1];
                    v195 = _mm_loadh_ps((const double *)&v182);
                    v126 = sub_15E1AF0(v125);
                    v127 = v126;
                    if ( v126 )
                      ++*(_DWORD *)(v126 + 8);
                    v128 = a1[108].m128_u64[1];
                    v144 = a1[1].m128_u64[1];
                    v129 = (__m128i)_mm_loadh_ps((const double *)&v186);
                    v204 = v129;
                    v130 = sub_15E1AF0(v128);
                    v131 = v130;
                    if ( v130 )
                      ++*(_DWORD *)(v130 + 8);
                    v132 = *(_QWORD *)(a1[1].m128_u64[0] + 8848);
                    v133 = *(_BYTE *)(v132 + v152);
                    if ( v133 == 1 )
                    {
                      v136 = *(_BYTE *)(v132 + v155);
                      if ( v136 != 1 )
                      {
                        if ( *(_BYTE *)(v132 + v158) != 1 )
                        {
                          if ( v136 == -1 )
                          {
                            v175 = (unsigned int *)v168;
                            v171 = &v175;
                            sub_BF9280(&v175, &v172);
                            v204.m128i_i32[0] = v155 ^ 1;
                            sub_BF9B30(v171, (unsigned int *)v167);
LABEL_206:
                            v168 = v175;
                            if ( v175 )
                            {
                              v137 = *(v175 - 1);
                              v138 = v175;
                            }
                            else
                            {
                              v137 = 0;
                              v138 = nullptr;
                            }
                            v139 = sub_BC37F0(
                                     (__int64)a1,
                                     (__int64)v161,
                                     v137,
                                     v138,
                                     dword_1C7EDB8,
                                     *(double *)v129.m128i_i64);
LABEL_209:
                            LOBYTE(v171) = v139;
                            goto LABEL_170;
                          }
LABEL_169:
                          sub_1872CE0("");
                          sub_1873130(114, 791);
                        }
                        v175 = (unsigned int *)v168;
                        v171 = &v175;
                        sub_BF9280(&v175, &v172);
                        sub_BF9280(v171, (unsigned int *)&v174);
LABEL_235:
                        v168 = v175;
                        if ( v175 )
                        {
                          v142 = *(v175 - 1);
                          v143 = v175;
                        }
                        else
                        {
                          v142 = 0;
                          v143 = nullptr;
                        }
                        v139 = sub_BC37F0((__int64)a1, 0, v142, v143, dword_1C7EDB8, *(double *)v129.m128i_i64);
                        goto LABEL_209;
                      }
                      sub_C03DB0(v167, &a1[115].m128_u16[4], v184, v180, v166, v182, v144, v145, v146, v147, v148);
                      sub_BCEE10(&v190, (__int64)a1);
                      v154 = v190.m128i_i64[1];
                      v160 = (unsigned int *)v190.m128i_i64[0];
                      sub_BCEE10(&v191, (__int64)a1);
                      v157 = v191.m128i_i64[1];
                      v167 = (__m128i *)v191.m128i_i64[0];
                      sub_BC5860((__int64)a1, v161, v173, v160, v184, 1);
                      sub_BC5860((__int64)a1, v161, v173, v182, (unsigned int *)v167, 1);
                      sub_BF6100((__int64)v167, v157);
                      sub_BF6100((__int64)v160, v154);
                      sub_BF6100(v204.m128i_i64[0], v204.m128i_i64[1]);
                    }
                    else
                    {
                      if ( v133 != -1 )
                        goto LABEL_169;
                      v140 = *(_BYTE *)(v132 + v158);
                      if ( v140 != 1 )
                      {
                        if ( *(_BYTE *)(v132 + v155) != 1 )
                        {
                          if ( v140 == -1 )
                          {
                            v204.m128i_i32[0] = v150 ^ 1;
                            v175 = (unsigned int *)v168;
                            v171 = &v175;
                            sub_BF9B30(&v175, (unsigned int *)v167);
                            v204.m128i_i32[0] = v158 ^ 1;
                            sub_BF9B30(v171, (unsigned int *)v167);
                            goto LABEL_206;
                          }
                          goto LABEL_169;
                        }
                        v204.m128i_i32[0] = v150 ^ 1;
                        v175 = (unsigned int *)v168;
                        v171 = &v175;
                        sub_BF9B30(&v175, (unsigned int *)v167);
                        sub_BF9280(v171, (unsigned int *)&v173);
                        goto LABEL_235;
                      }
                      sub_C03DB0(v167, &a1[115].m128_u16[4], v180, v184, v162, v186, v144, v145, v146, v147, v148);
                      sub_BCEE10(&v192, (__int64)a1);
                      v153 = v192.m128i_i64[1];
                      v159 = (unsigned int *)v192.m128i_i64[0];
                      sub_BCEE10(v193, (__int64)a1);
                      v156 = v193[0].m128i_i64[1];
                      v167 = (__m128i *)v193[0].m128i_i64[0];
                      sub_BC5860((__int64)a1, v161, v174, v180, v159, 1);
                      sub_BC5860((__int64)a1, v161, v174, (unsigned int *)v167, v186, 1);
                      sub_BF6100((__int64)v167, v156);
                      sub_BF6100((__int64)v159, v153);
                      sub_BF6100(v204.m128i_i64[0], v204.m128i_i64[1]);
                    }
LABEL_170:
                    if ( v131 )
                    {
                      v19 = (*(_DWORD *)(v131 + 8))-- == 1;
                      if ( v19 )
                        sub_15D7BC0(v144, v131);
                    }
                    if ( v127 )
                    {
                      v19 = (*(_DWORD *)(v127 + 8))-- == 1;
                      if ( v19 )
                        sub_15D7BC0(v145, v127);
                    }
                    if ( v151 )
                    {
                      LODWORD(v167) = *(_DWORD *)(v151 + 8);
                      v19 = (_DWORD)v167 == 1;
                      *(_DWORD *)(v151 + 8) = (_DWORD)v167 - 1;
                      if ( v19 )
                        sub_15D7BC0(v146, v151);
                    }
                    if ( v122 )
                    {
                      v19 = (*(_DWORD *)(v122 + 8))-- == 1;
                      if ( v19 )
                        sub_15D7BC0(v147, v122);
                    }
                    v134 = (__int64)v162;
                    if ( v162 )
                    {
                      LODWORD(v167) = v162->m128_i32[2];
                      v19 = (_DWORD)v167 == 1;
                      v162->m128_i32[2] = (_DWORD)v167 - 1;
                      if ( v19 )
                        sub_15D7BC0(v148, v134);
                    }
                    v135 = (__int64)v166;
                    if ( v166 )
                    {
                      LODWORD(v167) = v166[2];
                      v19 = (_DWORD)v167 == 1;
                      v166[2] = (_DWORD)v167 - 1;
                      if ( v19 )
                        sub_15D7BC0(v149, v135);
                    }
                    goto LABEL_188;
                  }
                  sub_9936C0(v116, v155 >> 1);
                }
                else
                {
                  if ( *(_BYTE *)(v117 + v158) )
                    goto LABEL_159;
                  sub_9936C0(v116, v158 >> 1);
                }
              }
              else
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v116 + 7488) + 48LL))(
                  *(_QWORD *)(v116 + 7488),
                  *(_QWORD *)(*(_QWORD *)(v116 + 8840) + 8LL * (v172 >> 1)));
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v116 + 7488) + 64LL))(*(_QWORD *)(v116 + 7488));
              }
LABEL_188:
              if ( v168 )
                sub_186B220(v168 - 1);
              goto LABEL_16;
            }
            sub_BC5860((__int64)a1, v161, v83, v180, v184, 1);
            sub_BC5860((__int64)a1, v161, v83, v182, v186, 1);
          }
          else
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v85 + 7488) + 48LL))(
              *(_QWORD *)(v85 + 7488),
              *(_QWORD *)(*(_QWORD *)(v85 + 8840) + 8LL * (v83 >> 1)));
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v85 + 7488) + 64LL))(*(_QWORD *)(v85 + 7488));
          }
          sub_BF6100(v195.m128_i64[0], v195.m128_i64[1]);
          goto LABEL_16;
        }
      }
      v78 = *(_DWORD *)(v177 - 4);
      goto LABEL_122;
    }
LABEL_12:
    v12 = *(_DWORD *)(v177 - 4);
    goto LABEL_13;
  }
  if ( v177 )
  {
    v11 = 0;
    goto LABEL_12;
  }
  v36 = -1;
  v35 = -1;
LABEL_50:
  while ( v35 != -1 )
  {
    v37 = v35--;
    if ( v179[v37] != *(_QWORD *)(v177 + 8 * v37) )
      goto LABEL_14;
  }
  v194 = (__m128)a1[1].m128_u64[1];
  v195 = v194;
  if ( !v36 )
  {
LABEL_193:
    v48 = nullptr;
    if ( v10 )
      goto LABEL_69;
    goto LABEL_194;
  }
  v38 = *(unsigned int **)(v177 + 8);
  if ( v38 )
    ++v38[2];
  v167 = (__m128i *)v38;
  LODWORD(v168) = v36;
  v39 = (_QWORD *)sub_186B270(0x18u);
  v40 = (unsigned int **)(v39 + 1);
  v41 = (unsigned int)v168;
  v162 = &v195;
  v194.m128_u64[1] = (unsigned __int64)(v39 + 1);
  v42 = (unsigned int *)v167;
  v43 = v39 + 1;
  *v39 = 2;
  v44 = (__int64)&v10[v41];
  for ( i = 1; ; i = (_DWORD)v64 + 1 )
  {
    ++v10;
    *v40 = v42;
    *((_DWORD *)v43 - 1) = i;
    if ( (__int64 *)v44 == v10 )
      break;
    while ( 1 )
    {
      v46 = (unsigned int *)v10[1];
      if ( v46 )
        ++v46[2];
      v47 = *((_DWORD *)v43 - 1);
      if ( v47 == *((_DWORD *)v43 - 2) )
        break;
      ++v10;
      v43[v47] = v46;
      *((_DWORD *)v43 - 1) = v47 + 1;
      if ( (__int64 *)v44 == v10 )
        goto LABEL_60;
    }
    v62 = (3 * v47 + 1) >> 1;
    v63 = 8 * v62 + 8;
    if ( 8 * v47 + 8 >= (unsigned int)v63 || v47 >= v62 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v204.m128i_i64, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v204);
      sub_233E40((__int64)&v204);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v166 = (unsigned int *)v44;
    v167 = (__m128i *)v46;
    LODWORD(v168) = (3 * v47 + 1) >> 1;
    v64 = (_DWORD *)sub_186B300(v43 - 1, v63);
    v65 = (unsigned int)v64[1];
    v43 = v64 + 2;
    v194.m128_u64[1] = (unsigned __int64)(v64 + 2);
    v42 = (unsigned int *)v167;
    *v64 = (_DWORD)v168;
    LODWORD(v64) = v65;
    v44 = (__int64)v166;
    v40 = (unsigned int **)&v43[v65];
  }
LABEL_60:
  v48 = (__int64 *)v195.m128_u64[1];
  if ( !v195.m128_u64[1] )
  {
    v10 = (__int64 *)v177;
    goto LABEL_193;
  }
  v49 = v195.m128_u64[1] + 8LL * *(unsigned int *)(v195.m128_u64[1] - 4);
  if ( v195.m128_u64[1] < v49 )
  {
    v167 = (__m128i *)&v195;
    do
    {
      while ( 1 )
      {
        v50 = *v48;
        if ( *v48 )
        {
          v51 = v195.m128_u64[0];
          v19 = (*(_DWORD *)(v50 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( (unsigned __int64)++v48 >= v49 )
          goto LABEL_67;
      }
      v168 = v48;
      sub_15D7BC0(v51, v50);
      v48 = v168 + 1;
    }
    while ( (unsigned __int64)(v168 + 1) < v49 );
LABEL_67:
    v48 = (__int64 *)v195.m128_u64[1];
    if ( !v195.m128_u64[1] )
    {
      v10 = (__int64 *)v177;
      if ( v177 )
        goto LABEL_69;
LABEL_194:
      v52 = 0x3010102464C457FLL;
      v53 = 0x7FFFFFFF8LL;
      goto LABEL_71;
    }
  }
  v10 = (__int64 *)v177;
  *((_DWORD *)v48 - 1) = 0;
  if ( !v10 )
  {
    v52 = 0x3010102464C457FLL;
    v53 = 0x7FFFFFFF8LL;
    goto LABEL_71;
  }
LABEL_69:
  if ( *((_DWORD *)v10 - 1) != 1 )
  {
    v52 = *v10;
    v53 = (__int64)&v10[*((_DWORD *)v10 - 1) - 1];
    if ( !*v10 )
    {
LABEL_72:
      if ( v48 )
        goto LABEL_77;
      v167 = (__m128i *)v52;
      v168 = (_QWORD *)v53;
      v54 = (_QWORD *)sub_186B270(0x18u);
      v48 = v54 + 1;
      v53 = (__int64)v168;
      v55 = (unsigned int *)v167;
      *v54 = 2;
      v195.m128_u64[1] = (unsigned __int64)(v54 + 1);
      v56 = (unsigned int **)(v54 + 1);
      for ( j = 1; ; j = (_DWORD)v68 + 1 )
      {
        ++v10;
        *v56 = v55;
        *((_DWORD *)v48 - 1) = j;
        if ( (__int64 *)v53 == v10 )
          break;
        while ( 1 )
        {
          v52 = *v10;
          if ( *v10 )
            ++*(_DWORD *)(v52 + 8);
LABEL_77:
          v58 = *((_DWORD *)v48 - 1);
          if ( v58 == *((_DWORD *)v48 - 2) )
            break;
          ++v10;
          v48[v58] = v52;
          *((_DWORD *)v48 - 1) = v58 + 1;
          if ( (__int64 *)v53 == v10 )
            goto LABEL_79;
        }
        v66 = (3 * v58 + 1) >> 1;
        v67 = 8 * v66 + 8;
        if ( 8 * v58 + 8 >= (unsigned int)v67 || v58 >= v66 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v204.m128i_i64, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, &v204);
          sub_233E40((__int64)&v204);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v166 = (unsigned int *)v52;
        LODWORD(v167) = (3 * v58 + 1) >> 1;
        v168 = (_QWORD *)v53;
        v68 = (_DWORD *)sub_186B300(v48 - 1, v67);
        v69 = (unsigned int)v68[1];
        v48 = (__int64 *)(v68 + 2);
        v195.m128_u64[1] = (unsigned __int64)(v68 + 2);
        v53 = (__int64)v168;
        *v68 = (_DWORD)v167;
        LODWORD(v68) = v69;
        v55 = v166;
        v56 = (unsigned int **)&v48[v69];
      }
LABEL_79:
      v59 = (__int64 *)v194.m128_u64[1];
      if ( v194.m128_u64[1] )
      {
        if ( *(_DWORD *)(v194.m128_u64[1] - 4) )
          goto LABEL_81;
        goto LABEL_100;
      }
LABEL_190:
      v60 = (char)v171;
      if ( !v48 )
        goto LABEL_119;
      goto LABEL_101;
    }
LABEL_71:
    ++*(_DWORD *)(v52 + 8);
    goto LABEL_72;
  }
  v61 = (__int64 *)v194.m128_u64[1];
  v59 = (__int64 *)v194.m128_u64[1];
  if ( !v194.m128_u64[1] )
    goto LABEL_190;
  if ( *(_DWORD *)(v194.m128_u64[1] - 4) )
  {
    if ( !v48 )
    {
LABEL_199:
      v60 = (char)v171;
      goto LABEL_110;
    }
LABEL_81:
    if ( *((_DWORD *)v48 - 1) )
    {
      if ( (unsigned __int8)sub_BF6590((__int64)a1, (__int64)&v195, (__int64)v165) )
      {
        v48 = (__int64 *)v195.m128_u64[1];
        v60 = 0;
        if ( !v195.m128_u64[1] )
        {
          v61 = (__int64 *)v194.m128_u64[1];
          if ( !v194.m128_u64[1] )
            goto LABEL_15;
          goto LABEL_110;
        }
      }
      else
      {
        v141 = sub_BF6CB0((__int64)a1, (__int64)&v194, (__int64)v165);
        v48 = (__int64 *)v195.m128_u64[1];
        v60 = v141 ^ 1;
        if ( !v195.m128_u64[1] )
          goto LABEL_109;
      }
LABEL_101:
      v70 = &v48[*((unsigned int *)v48 - 1)];
      if ( v48 >= v70 )
        goto LABEL_108;
      v71 = v48;
      do
      {
        while ( 1 )
        {
          v72 = *v71;
          if ( *v71 )
          {
            v73 = v195.m128_u64[0];
            v19 = (*(_DWORD *)(v72 + 8))-- == 1;
            if ( v19 )
              break;
          }
          if ( ++v71 >= v70 )
            goto LABEL_107;
        }
        sub_15D7BC0(v73, v72);
        ++v71;
      }
      while ( v71 < v70 );
LABEL_107:
      v48 = (__int64 *)v195.m128_u64[1];
      if ( v195.m128_u64[1] )
LABEL_108:
        sub_186B220(v48 - 1);
LABEL_109:
      v61 = (__int64 *)v194.m128_u64[1];
      if ( !v194.m128_u64[1] )
        goto LABEL_118;
      goto LABEL_110;
    }
    sub_186B220(v48 - 1);
    v61 = (__int64 *)v194.m128_u64[1];
    if ( !v194.m128_u64[1] )
      goto LABEL_119;
    goto LABEL_199;
  }
LABEL_100:
  v60 = (char)v171;
  if ( v48 )
    goto LABEL_101;
  v61 = v59;
  if ( !v59 )
    goto LABEL_119;
LABEL_110:
  v74 = &v61[*((unsigned int *)v61 - 1)];
  if ( v61 >= v74 )
    goto LABEL_117;
  do
  {
    while ( 1 )
    {
      v75 = *v61;
      if ( *v61 )
      {
        v76 = v194.m128_u64[0];
        v19 = (*(_DWORD *)(v75 + 8))-- == 1;
        if ( v19 )
          break;
      }
      if ( ++v61 >= v74 )
        goto LABEL_116;
    }
    sub_15D7BC0(v76, v75);
    ++v61;
  }
  while ( v61 < v74 );
LABEL_116:
  v61 = (__int64 *)v194.m128_u64[1];
  if ( v194.m128_u64[1] )
LABEL_117:
    sub_186B220(v61 - 1);
LABEL_118:
  if ( v60 )
    goto LABEL_119;
LABEL_15:
  LOBYTE(v171) = 0;
LABEL_16:
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v202);
  sub_182CBA0(v13, v203);
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v169);
  sub_182CBA0(v14, v201);
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v170);
  sub_182CBA0(v15, v199);
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v163);
  sub_182CBA0(v16, v197);
LABEL_17:
  v17 = v186;
  if ( v186 )
  {
    v18 = v187;
    v19 = v186[2]-- == 1;
    if ( v19 )
      sub_15D7BC0(v18, v17);
  }
  v20 = v184;
  if ( v184 )
  {
    v21 = v185;
    v19 = v184[2]-- == 1;
    if ( v19 )
      sub_15D7BC0(v21, v20);
  }
  v22 = v182;
  if ( v182 )
  {
    v23 = v183;
    v19 = v182[2]-- == 1;
    if ( v19 )
      sub_15D7BC0(v23, v22);
  }
  v24 = v180;
  if ( v180 )
  {
    v25 = v181;
    v19 = v180[2]-- == 1;
    if ( v19 )
      sub_15D7BC0(v25, v24);
  }
  v26 = v179;
  if ( v179 )
  {
    v27 = (unsigned __int64)&v179[*((unsigned int *)v179 - 1)];
    if ( (unsigned __int64)v179 >= v27 )
      goto LABEL_37;
    v28 = (char)v171;
    do
    {
      while ( 1 )
      {
        v29 = *v26;
        if ( *v26 )
        {
          v19 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( (unsigned __int64)++v26 >= v27 )
          goto LABEL_36;
      }
      sub_15D7BC0(v178, v29);
      ++v26;
    }
    while ( (unsigned __int64)v26 < v27 );
LABEL_36:
    v26 = v179;
    LOBYTE(v171) = v28;
    if ( v179 )
LABEL_37:
      sub_186B220(v26 - 1);
  }
  v30 = (__int64 *)v177;
  if ( v177 )
  {
    v31 = v177 + 8LL * *(unsigned int *)(v177 - 4);
    if ( v177 >= v31 )
      goto LABEL_46;
    v32 = (char)v171;
    do
    {
      while ( 1 )
      {
        v33 = *v30;
        if ( *v30 )
        {
          v19 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( (unsigned __int64)++v30 >= v31 )
          goto LABEL_45;
      }
      sub_15D7BC0(v176, v33);
      ++v30;
    }
    while ( (unsigned __int64)v30 < v31 );
LABEL_45:
    v30 = (__int64 *)v177;
    LOBYTE(v171) = v32;
    if ( v177 )
LABEL_46:
      sub_186B220(v30 - 1);
  }
  return (unsigned __int8)v171;
}

