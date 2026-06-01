__int64 __fastcall sub_100F450(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  void *v8; // rbp
  int v9; // eax
  char *v10; // rbp
  __int64 v11; // rbx
  size_t v12; // rdx
  unsigned __int64 v13; // rcx
  void **v14; // r8
  size_t v15; // r9
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // r12
  unsigned __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rbp
  __int64 v22; // r14
  unsigned __int64 v23; // rbx
  void **v24; // r13
  void **v25; // r15
  void *v26; // rax
  _QWORD *v27; // r15
  void *v28; // rbx
  __int64 v29; // r14
  bool v30; // al
  void **v31; // rbx
  char *v32; // r15
  void *v33; // rbx
  bool v34; // al
  __int64 v35; // rbx
  void **v36; // rax
  void **v37; // r15
  __int64 v38; // rdi
  __m128i *v39; // rbp
  __m128i *v40; // r12
  int v41; // eax
  void **v42; // r10
  __int64 v43; // r12
  unsigned __int64 v44; // r15
  unsigned int v45; // ecx
  __m128i *v46; // rax
  void **v47; // r14
  unsigned int v48; // ebp
  void **v49; // rcx
  unsigned __int64 v50; // rbx
  char *v51; // r13
  int v52; // eax
  bool v53; // al
  bool v54; // al
  char v55; // r15
  void **v56; // rbp
  void **v57; // r12
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rbx
  void **v62; // r12
  void **v63; // rbp
  void **v64; // r12
  void *v65; // rax
  void ***v66; // rax
  void ***v67; // rbx
  void **v68; // rbp
  __int64 v69; // rsi
  __int64 v70; // rbp
  unsigned __int64 v71; // rbx
  bool v72; // al
  void **v73; // r12
  char *v74; // r13
  void *v75; // r12
  bool v76; // al
  void *v77; // rbx
  void *v78; // rbx
  __int64 v79; // rsi
  __int64 v80; // rbp
  __int64 v81; // rbx
  bool v82; // al
  void **v83; // r12
  char *v84; // r13
  void *v85; // r12
  bool v86; // al
  void *v87; // rbx
  void *v88; // rbx
  __int64 v89; // rsi
  __int64 v90; // rbp
  __int64 v91; // rbx
  bool v92; // al
  void **v93; // r12
  char *v94; // r13
  void *v95; // r12
  bool v96; // al
  void *v97; // rbx
  void *v98; // rbx
  void ***v99; // rdx
  __int64 v100; // rax
  void **v101; // rbx
  __int64 v102; // rbx
  void ***v103; // rbx
  void *v104; // rax
  void *v105; // rax
  char *v106; // rbp
  char *v107; // rbx
  char *v108; // rdi
  size_t v110; // rdx
  const void *v111; // rsi
  int v112; // eax
  __m128i *v113; // rax
  __m128i *v114; // rdi
  __m128i *v115; // rax
  __int64 v116; // rax
  void *v117; // rsi
  __m128i *v118; // rax
  __m128i *v119; // rax
  __m128i *v120; // rdi
  __m128i *v121; // rax
  __int64 v122; // rax
  void *v123; // rsi
  __m128i *v124; // rax
  __m128i *v125; // rax
  __m128i *v126; // rdi
  __m128i *v127; // r13
  __int64 *v128; // rbp
  void *v129; // rsi
  __m128i *v130; // rax
  __m128i *v131; // r15
  size_t v132; // r14
  const void *v133; // r12
  char *v134; // rdi
  bool v135; // al
  unsigned __int64 v136; // rdi
  __int64 v137; // rbp
  __int64 v138; // r14
  unsigned __int64 v139; // rbx
  void **v140; // r13
  void **v141; // r15
  void *v142; // rax
  _QWORD *v143; // r15
  void *v144; // rbx
  __int64 v145; // r14
  bool v146; // al
  void **v147; // rbx
  char *v148; // r15
  void *v149; // rbx
  bool v150; // al
  __int64 v151; // rbx
  void **v152; // rax
  void **v153; // r15
  __int64 v154; // rdi
  void *v155; // rbx
  void *v156; // rbx
  bool v157; // al
  unsigned __int64 v158; // r11
  __m128i *v159; // rax
  __m128i *v160; // rdi
  __m128i *v161; // rbx
  __m128i *v162; // rax
  __int64 v163; // rax
  void *v164; // rsi
  __m128i *v165; // rax
  void **v166; // rdi
  const char *v167; // r12
  __int64 v168; // rbp
  __m128i *v169; // rax
  __m128i *v170; // rdi
  __m128i *v171; // rbx
  __m128i *v172; // rax
  __int64 v173; // rax
  void *v174; // rsi
  __m128i *v175; // rax
  void **v176; // rdi
  void *v177; // r12
  void *v178; // rbp
  int v179; // eax
  __int64 v180; // rbx
  unsigned __int64 v181; // r13
  void **v182; // rbp
  void **v183; // r12
  void *v184; // rax
  _QWORD *v185; // r12
  __int64 v186; // rbx
  unsigned __int64 v187; // r13
  void **v188; // rbp
  void **v189; // r12
  void *v190; // rax
  _QWORD *v191; // r12
  void ***v192; // [rsp+0h] [rbp-2A8h] BYREF
  int *v193; // [rsp+8h] [rbp-2A0h]
  __m128i *v194; // [rsp+10h] [rbp-298h]
  void ***v195; // [rsp+18h] [rbp-290h]
  void *v196[2]; // [rsp+20h] [rbp-288h]
  void **v197; // [rsp+30h] [rbp-278h]
  __int64 *v198; // [rsp+38h] [rbp-270h]
  void ***v199; // [rsp+40h] [rbp-268h]
  __int64 v200; // [rsp+48h] [rbp-260h]
  void *v201; // [rsp+50h] [rbp-258h]
  size_t n; // [rsp+58h] [rbp-250h]
  _QWORD *v203; // [rsp+60h] [rbp-248h]
  size_t v204; // [rsp+68h] [rbp-240h]
  void **v205; // [rsp+70h] [rbp-238h]
  void **v206; // [rsp+78h] [rbp-230h]
  int v207; // [rsp+80h] [rbp-228h]
  int v208; // [rsp+84h] [rbp-224h]
  __int64 v209; // [rsp+88h] [rbp-220h]
  int *v210; // [rsp+90h] [rbp-218h]
  __int64 *v211; // [rsp+98h] [rbp-210h]
  __int64 *v212; // [rsp+A0h] [rbp-208h]
  char **v213; // [rsp+A8h] [rbp-200h]
  __int64 v214; // [rsp+B0h] [rbp-1F8h]
  __int64 *v215; // [rsp+B8h] [rbp-1F0h]
  void *v216; // [rsp+C0h] [rbp-1E8h] BYREF
  void *v217; // [rsp+C8h] [rbp-1E0h]
  int v218; // [rsp+D0h] [rbp-1D8h]
  void *v219[2]; // [rsp+E0h] [rbp-1C8h] BYREF
  __int64 v220; // [rsp+F0h] [rbp-1B8h]
  __int64 v221; // [rsp+100h] [rbp-1A8h] BYREF
  unsigned int v222; // [rsp+110h] [rbp-198h]
  __int128 v223; // [rsp+120h] [rbp-188h] BYREF
  unsigned int v224; // [rsp+130h] [rbp-178h]
  __int64 v225; // [rsp+140h] [rbp-168h] BYREF
  __int64 v226; // [rsp+148h] [rbp-160h]
  unsigned int v227; // [rsp+150h] [rbp-158h]
  _QWORD v228[4]; // [rsp+160h] [rbp-148h] BYREF
  __int64 v229; // [rsp+180h] [rbp-128h] BYREF
  __int64 v230; // [rsp+188h] [rbp-120h]
  __int64 v231; // [rsp+190h] [rbp-118h]
  void *v232; // [rsp+1A0h] [rbp-108h] BYREF
  void *s2; // [rsp+1A8h] [rbp-100h]
  __m128i v234; // [rsp+1B0h] [rbp-F8h] BYREF
  void *v235; // [rsp+1C0h] [rbp-E8h] BYREF
  void *v236[2]; // [rsp+1C8h] [rbp-E0h] BYREF
  void *v237; // [rsp+1F0h] [rbp-B8h] BYREF
  void *v238[2]; // [rsp+1F8h] [rbp-B0h]
  __int64 v239; // [rsp+208h] [rbp-A0h] BYREF
  __int128 v240; // [rsp+210h] [rbp-98h]
  __int64 v241; // [rsp+220h] [rbp-88h]
  void *v242; // [rsp+230h] [rbp-78h]
  const char *v243; // [rsp+238h] [rbp-70h]
  __int64 v244; // [rsp+240h] [rbp-68h]
  __int16 v245; // [rsp+248h] [rbp-60h]
  char *v246; // [rsp+250h] [rbp-58h]
  __int64 v247; // [rsp+258h] [rbp-50h]
  _BYTE v248[56]; // [rsp+270h] [rbp-38h] BYREF

  v214 = a1;
  v209 = a2;
  v195 = (void ***)&v237;
  sub_E59B60((void ***)&v237, "locations");
  LOWORD(v239) = 8;
  v240 = 0;
  v215 = (__int64 *)&v216;
  v241 = 0;
  sub_100D6D0((__int64)&v216, (__int64)&v237, 1, v6, v7, 8);
  sub_222B2A0(&v239);
  v8 = v237;
  if ( v237 )
  {
    if ( *(void **)v237 != (char *)v237 + 16 )
      operator delete(*(void **)v237);
    operator delete(v8, 0x20u);
  }
  v220 = 0;
  *(_OWORD *)v219 = 0;
  v210 = &a3[12 * a4];
  if ( a3 != v210 )
  {
    v193 = a3;
    v211 = &v221;
    v212 = (__int64 *)&v223;
    v197 = &v235;
    v198 = &v225;
    v213 = (char **)v219;
    v199 = (void ***)&v232;
    v194 = &v234;
    while ( 1 )
    {
      sub_100E1E0((__int64)v211, v209, v193);
      sub_100D960(v212, (__int64)v211, *((_BYTE **)v193 + 2), *((_QWORD *)v193 + 3));
      v237 = nullptr;
      v238[0] = "location";
      v238[1] = byte_8;
      if ( !(unsigned __int8)sub_22296D0("location", 8, 0) )
      {
        sub_222A8E0(v199, "location", 8);
        v169 = (__m128i *)operator new(0x20u);
        v170 = (__m128i *)v232;
        v171 = v169;
        v172 = v169 + 1;
        v171->m128i_i64[0] = (__int64)v172;
        if ( v170 == v194 )
        {
          v170 = v172;
          v171[1] = _mm_load_si128(&v234);
        }
        else
        {
          v173 = v234.m128i_i64[0];
          v171->m128i_i64[0] = (__int64)v170;
          v171[1].m128i_i64[0] = v173;
        }
        v174 = s2;
        v175 = v194;
        s2 = nullptr;
        v234.m128i_i8[0] = 0;
        v171->m128i_i64[1] = (__int64)v174;
        v232 = v175;
        if ( !(unsigned __int8)sub_22296D0(v170, v174, 0) )
        {
          sub_222A8E0(v197, v171->m128i_i64[0], v171->m128i_i64[1]);
          sub_A0AAD0((__int64)v171, v197);
          if ( v235 != v197 + 2 )
            operator delete(v235);
        }
        v176 = (void **)v237;
        v177 = (void *)v171->m128i_i64[0];
        v237 = v171;
        v178 = (void *)v171->m128i_i64[1];
        if ( v176 )
          sub_100CA80(v176);
        v238[0] = v177;
        v238[1] = v178;
        if ( v232 != v194 )
          operator delete(v232);
      }
      LOWORD(v239) = 7;
      v240 = v223;
      v223 = 0u;
      LODWORD(v241) = v224;
      v243 = "importance";
      v224 = 0;
      v242 = nullptr;
      v244 = 10;
      if ( !(unsigned __int8)sub_22296D0("importance", 10, 0) )
      {
        sub_222A8E0(v199, "importance", 10);
        v159 = (__m128i *)operator new(0x20u);
        v160 = (__m128i *)v232;
        v161 = v159;
        v162 = v159 + 1;
        v161->m128i_i64[0] = (__int64)v162;
        if ( v160 == v194 )
        {
          v160 = v162;
          v161[1] = _mm_load_si128(&v234);
        }
        else
        {
          v163 = v234.m128i_i64[0];
          v161->m128i_i64[0] = (__int64)v160;
          v161[1].m128i_i64[0] = v163;
        }
        v164 = s2;
        v165 = v194;
        s2 = nullptr;
        v234.m128i_i8[0] = 0;
        v161->m128i_i64[1] = (__int64)v164;
        v232 = v165;
        if ( !(unsigned __int8)sub_22296D0(v160, v164, 0) )
        {
          sub_222A8E0(v197, v161->m128i_i64[0], v161->m128i_i64[1]);
          sub_A0AAD0((__int64)v161, v197);
          if ( v235 != v197 + 2 )
            operator delete(v235);
        }
        v166 = (void **)v242;
        v167 = (const char *)v161->m128i_i64[0];
        v242 = v161;
        v168 = v161->m128i_i64[1];
        if ( v166 )
          sub_100CA80(v166);
        v243 = v167;
        v244 = v168;
        if ( v232 != v194 )
          operator delete(v232);
      }
      v9 = v193[3];
      if ( v9 == 1 )
      {
        v11 = 9;
        v10 = "essential";
      }
      else
      {
        v10 = "unimportant";
        if ( v9 != 2 )
          v10 = "important";
        v11 = 2LL * (v9 == 2) + 9;
      }
      v246 = v10;
      v245 = 5;
      v247 = v11;
      if ( !(unsigned __int8)sub_22296D0(v10, v11, 0) )
      {
        sub_222A8E0(v199, v10, v11);
        sub_E59390((__int64)v197, (__m128i *)v199);
        sub_222B2A0(v195 + 11);
        sub_2229580(v195 + 11, v197);
        sub_222B2A0(v197);
        if ( v232 != v194 )
          operator delete(v232);
      }
      v16 = 0;
      v225 = 0;
      v17 = 0;
      v226 = 0;
      v192 = v195;
      v227 = 0;
      v203 = v228;
      while ( 2 )
      {
        if ( !(_DWORD)v16 )
        {
          v228[0] = 0;
          goto LABEL_17;
        }
        v39 = nullptr;
        v228[1] = -1;
        v228[2] = 0;
        v200 = 0;
        v196[0] = (void *)-1LL;
        if ( !(unsigned __int8)sub_22296D0(-1, 0, 0) )
        {
          sub_222A8E0(v199, -1, 0);
          v119 = (__m128i *)operator new(0x20u);
          v120 = (__m128i *)v232;
          v39 = v119;
          v121 = v119 + 1;
          v39->m128i_i64[0] = (__int64)v121;
          if ( v120 == v194 )
          {
            v120 = v121;
            v39[1] = _mm_load_si128(&v234);
          }
          else
          {
            v122 = v234.m128i_i64[0];
            v39->m128i_i64[0] = (__int64)v120;
            v39[1].m128i_i64[0] = v122;
          }
          v123 = s2;
          v124 = v194;
          s2 = nullptr;
          v234.m128i_i8[0] = 0;
          v39->m128i_i64[1] = (__int64)v123;
          v232 = v124;
          if ( !(unsigned __int8)sub_22296D0(v120, v123, 0) )
          {
            sub_222A8E0(v197, v39->m128i_i64[0], v39->m128i_i64[1]);
            sub_A0AAD0((__int64)v39, v197);
            if ( v235 != v197 + 2 )
              operator delete(v235);
          }
          v196[0] = (void *)v39->m128i_i64[0];
          v200 = v39->m128i_i64[1];
          if ( v232 != v194 )
            operator delete(v232);
        }
        v40 = nullptr;
        v230 = -2;
        v231 = 0;
        v201 = (void *)-2LL;
        n = 0;
        if ( !(unsigned __int8)sub_22296D0(-2, 0, 0) )
        {
          sub_222A8E0(v199, -2, 0);
          v113 = (__m128i *)operator new(0x20u);
          v114 = (__m128i *)v232;
          v40 = v113;
          v115 = v113 + 1;
          v40->m128i_i64[0] = (__int64)v115;
          if ( v114 == v194 )
          {
            v114 = v115;
            v40[1] = _mm_load_si128(&v234);
          }
          else
          {
            v116 = v234.m128i_i64[0];
            v40->m128i_i64[0] = (__int64)v114;
            v40[1].m128i_i64[0] = v116;
          }
          v117 = s2;
          v118 = v194;
          s2 = nullptr;
          v234.m128i_i8[0] = 0;
          v40->m128i_i64[1] = (__int64)v117;
          v232 = v118;
          if ( !(unsigned __int8)sub_22296D0(v114, v117, 0) )
          {
            sub_222A8E0(v197, v40->m128i_i64[0], v40->m128i_i64[1]);
            sub_A0AAD0((__int64)v40, v197);
            if ( v235 != v197 + 2 )
              operator delete(v235);
          }
          v201 = (void *)v40->m128i_i64[0];
          n = v40->m128i_u64[1];
          if ( v232 != v194 )
            operator delete(v232);
        }
        v41 = sub_2248890(v192[1], v192[2]);
        v42 = v192[1];
        v14 = (void **)v40;
        v208 = v16 - 1;
        v43 = v17;
        v44 = 0;
        v207 = 1;
        v45 = (v16 - 1) & v41;
        v46 = v39;
        v47 = v42;
        v48 = v45;
        v49 = (void **)v46;
        while ( 1 )
        {
          v50 = v43 + ((unsigned __int64)v48 << 6);
          v51 = *(char **)(v50 + 8);
          v15 = *(_QWORD *)(v50 + 16);
          if ( v51 == (char *)-1LL )
          {
            v54 = (void **)((char *)v47 + 1) == nullptr;
          }
          else if ( v51 == (char *)-2LL )
          {
            v54 = (void **)((char *)v47 + 2) == nullptr;
          }
          else
          {
            if ( (void **)v15 != v192[2] )
              goto LABEL_64;
            if ( !v15 )
            {
              v56 = v49;
              v57 = v14;
              v55 = 1;
              goto LABEL_79;
            }
            v110 = *(_QWORD *)(v50 + 16);
            v111 = *(const void **)(v50 + 8);
            v206 = v14;
            v205 = v49;
            v204 = v15;
            v112 = memcmp(v47, v111, v110);
            v14 = v206;
            v49 = v205;
            v15 = v204;
            v54 = v112 == 0;
          }
          if ( v54 )
          {
            v55 = v54;
            v56 = v49;
            v57 = v14;
            goto LABEL_79;
          }
LABEL_64:
          if ( v196[0] == (void *)-1LL )
          {
            v157 = v51 + 1 == nullptr;
            goto LABEL_310;
          }
          if ( v196[0] != (void *)-2LL )
            break;
          v157 = v51 + 2 == nullptr;
LABEL_310:
          if ( v157 )
            goto LABEL_311;
LABEL_67:
          if ( v201 == (void *)-1LL )
          {
            v53 = v51 + 1 == nullptr;
            goto LABEL_72;
          }
          if ( v201 == (void *)-2LL )
          {
            v53 = v51 + 2 == nullptr;
LABEL_72:
            if ( !v53 )
              goto LABEL_75;
            goto LABEL_73;
          }
          v12 = n;
          if ( v15 != n )
            goto LABEL_75;
          if ( n )
          {
            v205 = v14;
            v204 = (size_t)v49;
            v52 = memcmp(v51, v201, n);
            v14 = v205;
            v49 = (void **)v204;
            v53 = v52 == 0;
            goto LABEL_72;
          }
LABEL_73:
          if ( !v44 )
            v44 = v43 + ((unsigned __int64)v48 << 6);
LABEL_75:
          v48 = v208 & (v207 + v48);
          ++v207;
        }
        if ( v15 != v200 )
          goto LABEL_67;
        if ( v15 )
        {
          v206 = v14;
          v205 = v49;
          v204 = v15;
          v179 = memcmp(v51, v196[0], v15);
          v14 = v206;
          v49 = v205;
          v15 = v204;
          v157 = v179 == 0;
          goto LABEL_310;
        }
LABEL_311:
        v158 = v44;
        v55 = 0;
        v56 = v49;
        v57 = v14;
        if ( v158 )
          v50 = v158;
LABEL_79:
        if ( v57 )
        {
          if ( *v57 != v57 + 2 )
            operator delete(*v57);
          operator delete(v57, 0x20u);
        }
        if ( v56 )
        {
          if ( *v56 != v56 + 2 )
            operator delete(*v56);
          operator delete(v56, 0x20u);
        }
        if ( !v55 )
        {
          v16 = v227;
          v228[0] = v50;
          v58 = v226 + 1;
          v12 = 3 * v227;
          v13 = (unsigned int)(4 * (v226 + 1));
          if ( (unsigned int)v13 < (unsigned int)v12 )
          {
            v59 = v227 - (v58 + HIDWORD(v226));
            v60 = v227 >> 3;
            if ( (unsigned int)v59 > (unsigned int)v60 )
              goto LABEL_92;
            v18 = v225;
            v136 = ((((((((((v227 - 1) | ((unsigned __int64)(v227 - 1) >> 1)) >> 2)
                        | (v227 - 1)
                        | ((unsigned __int64)(v227 - 1) >> 1)) >> 4)
                      | (((v227 - 1) | ((unsigned __int64)(v227 - 1) >> 1)) >> 2)
                      | (v227 - 1)
                      | ((unsigned __int64)(v227 - 1) >> 1)) >> 8)
                    | (((((v227 - 1) | ((unsigned __int64)(v227 - 1) >> 1)) >> 2)
                      | (v227 - 1)
                      | ((unsigned __int64)(v227 - 1) >> 1)) >> 4)
                    | (((v227 - 1) | ((unsigned __int64)(v227 - 1) >> 1)) >> 2)
                    | (v227 - 1)
                    | ((unsigned __int64)(v227 - 1) >> 1)) >> 16)
                  | (((((((v227 - 1) | ((unsigned __int64)(v227 - 1) >> 1)) >> 2)
                      | (v227 - 1)
                      | ((unsigned __int64)(v227 - 1) >> 1)) >> 4)
                    | (((v227 - 1) | ((unsigned __int64)(v227 - 1) >> 1)) >> 2)
                    | (v227 - 1)
                    | ((unsigned __int64)(v227 - 1) >> 1)) >> 8)
                  | (((((v227 - 1) | ((unsigned __int64)(v227 - 1) >> 1)) >> 2)
                    | (v227 - 1)
                    | ((unsigned __int64)(v227 - 1) >> 1)) >> 4)
                  | (((v227 - 1) | ((unsigned __int64)(v227 - 1) >> 1)) >> 2)
                  | (v227 - 1)
                  | ((unsigned __int64)(v227 - 1) >> 1))
                 + 1;
            if ( (unsigned int)v136 < 0x40 )
              LODWORD(v136) = 64;
            v227 = v136;
            v225 = sub_22300B0((unsigned __int64)(unsigned int)v136 << 6, 8, v60, v59, v14, v15);
            if ( v18 )
            {
              v196[0] = (void *)(v16 << 6);
              v137 = v18 + (v16 << 6);
              v226 = 0;
              sub_E59960((void ***)v197, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
              v138 = v225;
              v139 = v225 + ((unsigned __int64)v227 << 6);
              if ( v225 != v139 )
              {
                do
                {
                  while ( 1 )
                  {
                    *(_QWORD *)(v138 + 16) = 0;
                    *(_OWORD *)v138 = 0;
                    v143 = v235;
                    if ( v235 )
                      break;
                    v138 += 64;
                    *(__m128i *)(v138 - 56) = _mm_loadu_si128((const __m128i *)v236);
                    if ( v139 == v138 )
                      goto LABEL_264;
                  }
                  v140 = (void **)operator new(0x20u);
                  *v140 = v140 + 2;
                  sub_100CAC0(v140, (_BYTE *)*v143, *v143 + v143[1]);
                  v141 = *(void ***)v138;
                  *(_QWORD *)v138 = v140;
                  if ( v141 )
                  {
                    if ( *v141 != v141 + 2 )
                      operator delete(*v141);
                    operator delete(v141, 0x20u);
                    v140 = *(void ***)v138;
                  }
                  v142 = v140[1];
                  v138 += 64;
                  *(_QWORD *)(v138 - 56) = *v140;
                  *(_QWORD *)(v138 - 48) = v142;
                }
                while ( v139 != v138 );
              }
LABEL_264:
              v144 = v235;
              if ( v235 )
              {
                if ( *(void **)v235 != (char *)v235 + 16 )
                  operator delete(*(void **)v235);
                operator delete(v144, 0x20u);
              }
              v145 = v18;
              sub_E59960(v199, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
              sub_E59960((void ***)v197, (void **)0xFFFFFFFFFFFFFFFELL, nullptr);
              if ( v18 == v137 )
              {
LABEL_293:
                v155 = v235;
                if ( v235 )
                {
                  if ( *(void **)v235 != (char *)v235 + 16 )
                    operator delete(*(void **)v235);
                  operator delete(v155, 0x20u);
                }
                v156 = v232;
                if ( v232 )
                {
                  if ( *(void **)v232 != (char *)v232 + 16 )
                    operator delete(*(void **)v232);
                  operator delete(v156, 0x20u);
                }
                operator delete(v18, v196[0], 8);
LABEL_302:
                sub_E5E370(v198, (__int64)v192, v203);
                v58 = v226 + 1;
LABEL_92:
                LODWORD(v226) = v58;
                v230 = -1;
                v231 = 0;
                if ( (unsigned __int8)sub_22296D0(-1, 0, 0) )
                {
                  v61 = v228[0];
                  if ( *(_QWORD *)(v228[0] + 8LL) != -1 )
                    --HIDWORD(v226);
LABEL_95:
                  v62 = *v192;
                  if ( *v192 )
                  {
                    v63 = (void **)operator new(0x20u);
                    *v63 = v63 + 2;
                    sub_100CAC0(v63, *v62, (__int64)v62[1] + (_QWORD)*v62);
                    v64 = *(void ***)v61;
                    *(_QWORD *)v61 = v63;
                    if ( v64 )
                    {
                      if ( *v64 != v64 + 2 )
                        operator delete(*v64);
                      operator delete(v64, 0x20u);
                      v63 = *(void ***)v61;
                    }
                    v65 = v63[1];
                    *(_QWORD *)(v61 + 8) = *v63;
                    *(_QWORD *)(v61 + 16) = v65;
                  }
                  else
                  {
                    *(__m128i *)v196 = _mm_loadu_si128((const __m128i *)(v192 + 1));
                    *(_OWORD *)(v61 + 8) = *(_OWORD *)v196;
                  }
                  v66 = v192;
                  *(_WORD *)(v61 + 24) = 0;
                  sub_2229580(v61 + 24, v66 + 3);
                  goto LABEL_88;
                }
                sub_222A8E0(v199, -1, 0);
                v125 = (__m128i *)operator new(0x20u);
                v126 = (__m128i *)v232;
                v127 = v125 + 1;
                v128 = (__int64 *)v125;
                v125->m128i_i64[0] = (__int64)v125[1].m128i_i64;
                if ( v126 == v194 )
                {
                  v126 = v125 + 1;
                  v125[1] = _mm_load_si128(&v234);
                }
                else
                {
                  v125->m128i_i64[0] = (__int64)v126;
                  v125[1].m128i_i64[0] = v234.m128i_i64[0];
                }
                v129 = s2;
                v130 = v194;
                s2 = nullptr;
                v234.m128i_i8[0] = 0;
                v128[1] = (__int64)v129;
                v232 = v130;
                if ( !(unsigned __int8)sub_22296D0(v126, v129, 0) )
                {
                  sub_222A8E0(v197, *v128, v128[1]);
                  sub_A0AAD0((__int64)v128, v197);
                  if ( v235 != v197 + 2 )
                    operator delete(v235);
                }
                v131 = (__m128i *)*v128;
                v132 = v128[1];
                v133 = (const void *)*v128;
                if ( v232 != v194 )
                {
                  operator delete(v232);
                  v131 = (__m128i *)*v128;
                }
                v61 = v228[0];
                v134 = *(char **)(v228[0] + 8LL);
                if ( v133 == (const void *)-1LL )
                {
                  v135 = v134 + 1 == nullptr;
                }
                else
                {
                  if ( v133 != (const void *)-2LL )
                  {
                    if ( *(_QWORD *)(v228[0] + 16LL) == v132 )
                    {
                      if ( v132 )
                      {
                        v135 = memcmp(v134, v133, v132) == 0;
                        goto LABEL_246;
                      }
LABEL_247:
                      if ( v131 != v127 )
                        operator delete(v131);
                      operator delete(v128, 0x20u);
                      goto LABEL_95;
                    }
LABEL_250:
                    --HIDWORD(v226);
                    goto LABEL_247;
                  }
                  v135 = v134 + 2 == nullptr;
                }
LABEL_246:
                if ( v135 )
                  goto LABEL_247;
                goto LABEL_250;
              }
              while ( 2 )
              {
                v148 = *(char **)(v145 + 8);
                v149 = *(void **)(v145 + 16);
                if ( s2 != (void *)-1LL )
                {
                  if ( s2 == (void *)-2LL )
                  {
                    v146 = v148 + 2 == nullptr;
                  }
                  else
                  {
                    if ( (void *)v234.m128i_i64[0] != v149 )
                      goto LABEL_282;
                    if ( !v149 )
                      goto LABEL_275;
                    v146 = memcmp(*(const void **)(v145 + 8), s2, *(_QWORD *)(v145 + 16)) == 0;
                  }
                  if ( !v146 )
                    goto LABEL_282;
LABEL_275:
                  v147 = *(void ***)v145;
                  if ( *(_QWORD *)v145 )
                  {
                    if ( *v147 != v147 + 2 )
                      operator delete(*v147);
                    operator delete(v147, 0x20u);
                  }
                  v145 += 64;
                  if ( v137 == v145 )
                    goto LABEL_293;
                  continue;
                }
                break;
              }
              if ( v148 == (char *)-1LL )
                goto LABEL_275;
LABEL_282:
              if ( v236[0] == (void *)-1LL )
              {
                v150 = v148 + 1 == nullptr;
              }
              else
              {
                if ( v236[0] != (void *)-2LL )
                {
                  if ( v149 == v236[1] )
                  {
                    if ( v149 )
                    {
                      v150 = memcmp(v148, v236[0], (size_t)v149) == 0;
                      goto LABEL_287;
                    }
                    goto LABEL_275;
                  }
LABEL_288:
                  sub_E5E370(v198, v145, &v229);
                  v151 = v229;
                  v152 = *(void ***)v145;
                  *(_QWORD *)v145 = 0;
                  v153 = *(void ***)v151;
                  v154 = v151;
                  *(_QWORD *)v151 = v152;
                  if ( v153 )
                  {
                    if ( *v153 != v153 + 2 )
                      operator delete(*v153);
                    operator delete(v153, 0x20u);
                    v154 = v229;
                  }
                  *(__m128i *)(v151 + 8) = _mm_loadu_si128((const __m128i *)(v145 + 8));
                  sub_2229580(v154 + 24, v145 + 24);
                  LODWORD(v226) = v226 + 1;
                  sub_222B2A0(v145 + 24);
                  goto LABEL_275;
                }
                v150 = v148 + 2 == nullptr;
              }
LABEL_287:
              if ( v150 )
                goto LABEL_275;
              goto LABEL_288;
            }
            v226 = 0;
            sub_E59960((void ***)v197, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
            v186 = v225;
            v187 = v225 + ((unsigned __int64)v227 << 6);
            if ( v225 != v187 )
            {
              do
              {
                *(_QWORD *)(v186 + 16) = 0;
                *(_OWORD *)v186 = 0;
                v191 = v235;
                if ( v235 )
                {
                  v188 = (void **)operator new(0x20u);
                  *v188 = v188 + 2;
                  sub_100CAC0(v188, (_BYTE *)*v191, *v191 + v191[1]);
                  v189 = *(void ***)v186;
                  *(_QWORD *)v186 = v188;
                  if ( v189 )
                  {
                    if ( *v189 != v189 + 2 )
                      operator delete(*v189);
                    operator delete(v189, 0x20u);
                    v188 = *(void ***)v186;
                  }
                  v190 = v188[1];
                  *(_QWORD *)(v186 + 8) = *v188;
                  *(_QWORD *)(v186 + 16) = v190;
                }
                else
                {
                  *(__m128i *)(v186 + 8) = _mm_loadu_si128((const __m128i *)v236);
                }
                v186 += 64;
              }
              while ( v187 != v186 );
            }
LABEL_345:
            if ( v235 )
              sub_100CA80((void **)v235);
            goto LABEL_302;
          }
LABEL_17:
          v18 = v225;
          v19 = (((((((unsigned int)(2 * v16 - 1) | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v16 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 4)
                | (((unsigned int)(2 * v16 - 1) | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v16 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 8)
              | (((((unsigned int)(2 * v16 - 1) | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v16 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 4)
              | (((unsigned int)(2 * v16 - 1) | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v16 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1);
          v20 = ((v19 >> 16) | v19) + 1;
          if ( (unsigned int)v20 < 0x40 )
            LODWORD(v20) = 64;
          v227 = v20;
          v225 = sub_22300B0((unsigned __int64)(unsigned int)v20 << 6, 8, v12, v13, v14, v15);
          if ( !v18 )
          {
            v226 = 0;
            sub_E59960((void ***)v197, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
            v180 = v225;
            v181 = v225 + ((unsigned __int64)v227 << 6);
            if ( v225 != v181 )
            {
              do
              {
                while ( 1 )
                {
                  *(_QWORD *)(v180 + 16) = 0;
                  *(_OWORD *)v180 = 0;
                  v185 = v235;
                  if ( v235 )
                    break;
                  v180 += 64;
                  *(__m128i *)(v180 - 56) = _mm_loadu_si128((const __m128i *)v236);
                  if ( v181 == v180 )
                    goto LABEL_345;
                }
                v182 = (void **)operator new(0x20u);
                *v182 = v182 + 2;
                sub_100CAC0(v182, (_BYTE *)*v185, *v185 + v185[1]);
                v183 = *(void ***)v180;
                *(_QWORD *)v180 = v182;
                if ( v183 )
                {
                  if ( *v183 != v183 + 2 )
                    operator delete(*v183);
                  operator delete(v183, 0x20u);
                  v182 = *(void ***)v180;
                }
                v184 = v182[1];
                v180 += 64;
                *(_QWORD *)(v180 - 56) = *v182;
                *(_QWORD *)(v180 - 48) = v184;
              }
              while ( v181 != v180 );
            }
            goto LABEL_345;
          }
          v196[0] = (void *)(v16 << 6);
          v21 = v18 + (v16 << 6);
          v226 = 0;
          sub_E59960((void ***)v197, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
          v22 = v225;
          v23 = v225 + ((unsigned __int64)v227 << 6);
          if ( v225 != v23 )
          {
            do
            {
              while ( 1 )
              {
                *(_QWORD *)(v22 + 16) = 0;
                *(_OWORD *)v22 = 0;
                v27 = v235;
                if ( v235 )
                  break;
                v22 += 64;
                *(__m128i *)(v22 - 56) = _mm_loadu_si128((const __m128i *)v236);
                if ( v23 == v22 )
                  goto LABEL_29;
              }
              v24 = (void **)operator new(0x20u);
              *v24 = v24 + 2;
              sub_100CAC0(v24, (_BYTE *)*v27, *v27 + v27[1]);
              v25 = *(void ***)v22;
              *(_QWORD *)v22 = v24;
              if ( v25 )
              {
                if ( *v25 != v25 + 2 )
                  operator delete(*v25);
                operator delete(v25, 0x20u);
                v24 = *(void ***)v22;
              }
              v26 = v24[1];
              v22 += 64;
              *(_QWORD *)(v22 - 56) = *v24;
              *(_QWORD *)(v22 - 48) = v26;
            }
            while ( v23 != v22 );
          }
LABEL_29:
          v28 = v235;
          if ( v235 )
          {
            if ( *(void **)v235 != (char *)v235 + 16 )
              operator delete(*(void **)v235);
            operator delete(v28, 0x20u);
          }
          v29 = v18;
          sub_E59960(v199, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
          sub_E59960((void ***)v197, (void **)0xFFFFFFFFFFFFFFFELL, nullptr);
          if ( v18 == v21 )
            goto LABEL_293;
          while ( 2 )
          {
            v32 = *(char **)(v29 + 8);
            v33 = *(void **)(v29 + 16);
            if ( s2 != (void *)-1LL )
            {
              if ( s2 == (void *)-2LL )
              {
                v30 = v32 + 2 == nullptr;
              }
              else
              {
                if ( (void *)v234.m128i_i64[0] != v33 )
                  goto LABEL_47;
                if ( !v33 )
                  goto LABEL_40;
                v30 = memcmp(*(const void **)(v29 + 8), s2, *(_QWORD *)(v29 + 16)) == 0;
              }
              if ( !v30 )
                goto LABEL_47;
LABEL_40:
              v31 = *(void ***)v29;
              if ( *(_QWORD *)v29 )
              {
                if ( *v31 != v31 + 2 )
                  operator delete(*v31);
                operator delete(v31, 0x20u);
              }
              v29 += 64;
              if ( v21 == v29 )
                goto LABEL_293;
              continue;
            }
            break;
          }
          if ( v32 == (char *)-1LL )
            goto LABEL_40;
LABEL_47:
          if ( v236[0] == (void *)-1LL )
          {
            v34 = v32 + 1 == nullptr;
          }
          else
          {
            if ( v236[0] != (void *)-2LL )
            {
              if ( v33 == v236[1] )
              {
                if ( v33 )
                {
                  v34 = memcmp(v32, v236[0], (size_t)v33) == 0;
                  goto LABEL_52;
                }
                goto LABEL_40;
              }
LABEL_53:
              sub_E5E370(v198, v29, &v229);
              v35 = v229;
              v36 = *(void ***)v29;
              *(_QWORD *)v29 = 0;
              v37 = *(void ***)v35;
              v38 = v35;
              *(_QWORD *)v35 = v36;
              if ( v37 )
              {
                if ( *v37 != v37 + 2 )
                  operator delete(*v37);
                operator delete(v37, 0x20u);
                v38 = v229;
              }
              *(__m128i *)(v35 + 8) = _mm_loadu_si128((const __m128i *)(v29 + 8));
              sub_2229580(v38 + 24, v29 + 24);
              LODWORD(v226) = v226 + 1;
              sub_222B2A0(v29 + 24);
              goto LABEL_40;
            }
            v34 = v32 + 2 == nullptr;
          }
LABEL_52:
          if ( v34 )
            goto LABEL_40;
          goto LABEL_53;
        }
LABEL_88:
        v192 += 8;
        v13 = (unsigned __int64)v248;
        if ( v192 != (void ***)v248 )
        {
          v17 = v225;
          v16 = v227;
          continue;
        }
        break;
      }
      v67 = (void ***)v248;
      do
      {
        v67 -= 8;
        sub_222B2A0(v67 + 3);
        v68 = *v67;
        if ( *v67 )
        {
          if ( *v68 != v68 + 2 )
            operator delete(*v68);
          operator delete(v68, 0x20u);
        }
      }
      while ( v67 != v195 );
      sub_100CE90(v213, v198);
      v69 = v227;
      if ( v227 )
      {
        sub_E59960((void ***)v197, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
        sub_E59960(v195, (void **)0xFFFFFFFFFFFFFFFELL, nullptr);
        v70 = v225;
        v71 = v225 + ((unsigned __int64)v227 << 6);
        if ( v225 == v71 )
        {
LABEL_131:
          v77 = v237;
          if ( v237 )
          {
            if ( *(void **)v237 != (char *)v237 + 16 )
              operator delete(*(void **)v237);
            operator delete(v77, 0x20u);
          }
          v78 = v235;
          if ( v235 )
          {
            if ( *(void **)v235 != (char *)v235 + 16 )
              operator delete(*(void **)v235);
            operator delete(v78, 0x20u);
          }
          v69 = v227;
          goto LABEL_140;
        }
        while ( 2 )
        {
          v74 = *(char **)(v70 + 8);
          v75 = *(void **)(v70 + 16);
          if ( v236[0] != (void *)-1LL )
          {
            if ( v236[0] == (void *)-2LL )
            {
              v72 = v74 + 2 == nullptr;
            }
            else
            {
              if ( v236[1] != v75 )
                goto LABEL_124;
              if ( !v75 )
                goto LABEL_117;
              v72 = memcmp(*(const void **)(v70 + 8), v236[0], *(_QWORD *)(v70 + 16)) == 0;
            }
            if ( !v72 )
              goto LABEL_124;
LABEL_117:
            v73 = *(void ***)v70;
            if ( *(_QWORD *)v70 )
            {
              if ( *v73 != v73 + 2 )
                operator delete(*v73);
              operator delete(v73, 0x20u);
            }
            v70 += 64;
            if ( v71 == v70 )
              goto LABEL_131;
            continue;
          }
          break;
        }
        if ( v74 == (char *)-1LL )
          goto LABEL_117;
LABEL_124:
        if ( v238[0] == (void *)-1LL )
        {
          v76 = v74 + 1 == nullptr;
        }
        else
        {
          if ( v238[0] != (void *)-2LL )
          {
            if ( v75 == v238[1] )
            {
              if ( v75 )
              {
                v76 = memcmp(v74, v238[0], (size_t)v75) == 0;
                goto LABEL_129;
              }
              goto LABEL_117;
            }
LABEL_130:
            sub_222B2A0(v70 + 24);
            goto LABEL_117;
          }
          v76 = v74 + 2 == nullptr;
        }
LABEL_129:
        if ( v76 )
          goto LABEL_117;
        goto LABEL_130;
      }
LABEL_140:
      operator delete(v225, v69 << 6, 8);
      v79 = v224;
      if ( v224 )
      {
        sub_E59960((void ***)v197, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
        sub_E59960(v195, (void **)0xFFFFFFFFFFFFFFFELL, nullptr);
        v80 = v223;
        v81 = v223 + ((unsigned __int64)v224 << 6);
        if ( (_QWORD)v223 == v81 )
        {
LABEL_162:
          v87 = v237;
          if ( v237 )
          {
            if ( *(void **)v237 != (char *)v237 + 16 )
              operator delete(*(void **)v237);
            operator delete(v87, 0x20u);
          }
          v88 = v235;
          if ( v235 )
          {
            if ( *(void **)v235 != (char *)v235 + 16 )
              operator delete(*(void **)v235);
            operator delete(v88, 0x20u);
          }
          v79 = v224;
          goto LABEL_171;
        }
        while ( 2 )
        {
          v84 = *(char **)(v80 + 8);
          v85 = *(void **)(v80 + 16);
          if ( v236[0] != (void *)-1LL )
          {
            if ( v236[0] == (void *)-2LL )
            {
              v82 = v84 + 2 == nullptr;
            }
            else
            {
              if ( v236[1] != v85 )
                goto LABEL_155;
              if ( !v85 )
                goto LABEL_148;
              v82 = memcmp(*(const void **)(v80 + 8), v236[0], *(_QWORD *)(v80 + 16)) == 0;
            }
            if ( !v82 )
              goto LABEL_155;
LABEL_148:
            v83 = *(void ***)v80;
            if ( *(_QWORD *)v80 )
            {
              if ( *v83 != v83 + 2 )
                operator delete(*v83);
              operator delete(v83, 0x20u);
            }
            v80 += 64;
            if ( v81 == v80 )
              goto LABEL_162;
            continue;
          }
          break;
        }
        if ( v84 == (char *)-1LL )
          goto LABEL_148;
LABEL_155:
        if ( v238[0] == (void *)-1LL )
        {
          v86 = v84 + 1 == nullptr;
        }
        else
        {
          if ( v238[0] != (void *)-2LL )
          {
            if ( v85 == v238[1] )
            {
              if ( v85 )
              {
                v86 = memcmp(v84, v238[0], (size_t)v85) == 0;
                goto LABEL_160;
              }
              goto LABEL_148;
            }
LABEL_161:
            sub_222B2A0(v80 + 24);
            goto LABEL_148;
          }
          v86 = v84 + 2 == nullptr;
        }
LABEL_160:
        if ( v86 )
          goto LABEL_148;
        goto LABEL_161;
      }
LABEL_171:
      operator delete(v223, v79 << 6, 8);
      v89 = v222;
      if ( v222 )
      {
        sub_E59960((void ***)v197, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
        sub_E59960(v195, (void **)0xFFFFFFFFFFFFFFFELL, nullptr);
        v90 = v221;
        v91 = v221 + ((unsigned __int64)v222 << 6);
        if ( v221 == v91 )
        {
LABEL_193:
          v97 = v237;
          if ( v237 )
          {
            if ( *(void **)v237 != (char *)v237 + 16 )
              operator delete(*(void **)v237);
            operator delete(v97, 0x20u);
          }
          v98 = v235;
          if ( v235 )
          {
            if ( *(void **)v235 != (char *)v235 + 16 )
              operator delete(*(void **)v235);
            operator delete(v98, 0x20u);
          }
          v89 = v222;
          goto LABEL_202;
        }
        while ( 2 )
        {
          v94 = *(char **)(v90 + 8);
          v95 = *(void **)(v90 + 16);
          if ( v236[0] != (void *)-1LL )
          {
            if ( v236[0] == (void *)-2LL )
            {
              v92 = v94 + 2 == nullptr;
            }
            else
            {
              if ( v236[1] != v95 )
                goto LABEL_186;
              if ( !v95 )
                goto LABEL_179;
              v92 = memcmp(*(const void **)(v90 + 8), v236[0], *(_QWORD *)(v90 + 16)) == 0;
            }
            if ( !v92 )
              goto LABEL_186;
LABEL_179:
            v93 = *(void ***)v90;
            if ( *(_QWORD *)v90 )
            {
              if ( *v93 != v93 + 2 )
                operator delete(*v93);
              operator delete(v93, 0x20u);
            }
            v90 += 64;
            if ( v91 == v90 )
              goto LABEL_193;
            continue;
          }
          break;
        }
        if ( v94 == (char *)-1LL )
          goto LABEL_179;
LABEL_186:
        if ( v238[0] == (void *)-1LL )
        {
          v96 = v94 + 1 == nullptr;
        }
        else
        {
          if ( v238[0] != (void *)-2LL )
          {
            if ( v95 == v238[1] )
            {
              if ( v95 )
              {
                v96 = memcmp(v94, v238[0], (size_t)v95) == 0;
                goto LABEL_191;
              }
              goto LABEL_179;
            }
LABEL_192:
            sub_222B2A0(v90 + 24);
            goto LABEL_179;
          }
          v96 = v94 + 2 == nullptr;
        }
LABEL_191:
        if ( v96 )
          goto LABEL_179;
        goto LABEL_192;
      }
LABEL_202:
      operator delete(v221, v89 << 6, 8);
      v193 += 12;
      if ( v210 == v193 )
      {
        v99 = (void ***)v219[1];
        v100 = v220;
        goto LABEL_204;
      }
    }
  }
  v100 = 0;
  v99 = nullptr;
  v197 = &v235;
LABEL_204:
  v192 = v99;
  v101 = v197;
  LOWORD(v237) = 8;
  v239 = v100;
  v220 = 0;
  *(__m128 *)v238 = _mm_loadh_ps((const double *)&v192);
  *(_OWORD *)v219 = 0;
  sub_E59B60((void ***)v197, "locations");
  v102 = sub_222E220(v215, v101);
  sub_222B2A0(v102);
  sub_2229580(v102, v195);
  if ( v235 )
    sub_100CA80((void **)v235);
  v103 = v195;
  sub_222B2A0(v195);
  LOWORD(v237) = 7;
  v104 = v216;
  v216 = nullptr;
  v238[0] = v104;
  v105 = v217;
  v217 = nullptr;
  v238[1] = v105;
  LODWORD(v105) = v218;
  v218 = 0;
  LODWORD(v239) = (_DWORD)v105;
  sub_222C3D0(v214, v103, 1);
  sub_222B2A0(v103);
  v106 = (char *)v219[1];
  v107 = (char *)v219[0];
  if ( v219[1] != v219[0] )
  {
    do
    {
      v108 = v107;
      v107 += 40;
      sub_222B2A0(v108);
    }
    while ( v106 != v107 );
    v107 = (char *)v219[0];
  }
  if ( v107 )
    operator delete(v107);
  sub_E5D2E0(v215);
  return v214;
}
