void __fastcall sub_124A4D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  __m128i *v8; // rbx
  __int64 v9; // r14
  _BYTE *v10; // rbp
  __int64 v11; // rax
  const char *v12; // r12
  char v13; // r15
  size_t v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  const char *v17; // r13
  size_t v18; // rsi
  __int64 v19; // rax
  size_t v20; // rdx
  size_t v21; // r13
  __int64 v22; // r12
  size_t v23; // rax
  const char *v24; // rax
  void **v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 *v32; // r13
  __int64 v33; // rax
  __int64 *v34; // r15
  __int64 v35; // r12
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // r12d
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __int64 v48; // r12
  __int64 v49; // rax
  int v50; // eax
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  __int64 *v53; // r15
  __int64 v54; // r12
  __m128 v55; // xmm0
  __int64 v56; // r13
  __m128i *v57; // rbx
  __int64 v58; // rsi
  const char *v59; // rdx
  __int64 v60; // r12
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  __int64 v69; // rcx
  unsigned __int64 v70; // rdx
  int v71; // r12d
  __int64 v72; // r15
  __int64 i; // r12
  __int64 v74; // rax
  __int64 v75; // rcx
  unsigned __int64 v76; // rdx
  __int64 v77; // rbx
  const __m128i *v78; // r13
  __int64 v79; // r14
  __int64 v80; // r12
  __int64 v81; // rdx
  __int64 v82; // rsi
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rsi
  _QWORD *v86; // rbx
  void (__fastcall *v87)(_QWORD *); // rax
  __int64 v88; // r12
  __int64 v89; // rbp
  void *v90; // rdi
  _QWORD *v91; // rdi
  _QWORD *v92; // rdi
  void **v93; // r12
  void **v94; // rbp
  void *v95; // rdi
  _QWORD *v96; // rdi
  __int64 v97; // rax
  unsigned __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rcx
  unsigned __int64 v103; // rdx
  __int64 *v104; // rbp
  __int64 v105; // rax
  __int64 *v106; // r15
  __int64 v107; // r12
  __m128i *v108; // rbx
  __int64 v109; // rsi
  __int64 v110; // rax
  __int64 v111; // r14
  unsigned __int64 v112; // rbx
  __int64 v113; // rdi
  unsigned __int64 v114; // rax
  __int64 v115; // rdx
  _QWORD *v116; // r15
  _QWORD *v117; // r12
  __m128i *v118; // r13
  __m128i *v119; // rax
  __int64 v120; // rcx
  __int64 v121; // r12
  unsigned __int64 v122; // rdx
  __int64 v123; // rax
  __int64 v124; // r12
  unsigned __int64 v125; // rdx
  __m128i *v126; // rdx
  __int64 v127; // rax
  __int64 v128; // r8
  __int64 v129; // r12
  __int64 v130; // r12
  __int64 v131; // rax
  __int64 (__fastcall *v132)(__m128i *, _QWORD, _QWORD); // r15
  __int64 v133; // r15
  unsigned __int64 v134; // rdx
  __int64 v135; // rax
  unsigned __int64 v136; // rdx
  __int64 v137; // rax
  void **v138; // r13
  void **v139; // r12
  __int64 v140; // rdx
  __int64 v141; // rax
  char *v142; // rbx
  __int64 v143; // rdx
  size_t v144; // rax
  __m128i *v145; // rsi
  unsigned __int64 v146; // rbx
  size_t v147; // rdx
  signed __int64 v148; // rcx
  __int64 v149; // rax
  __int64 *v150; // r12
  __int64 *v151; // r15
  __int64 v152; // rdx
  void **v153; // rax
  __int64 v154; // rax
  __int64 v155; // rcx
  unsigned __int64 v156; // rdx
  __int64 v157; // rax
  __int64 v158; // [rsp+10h] [rbp-398h]
  __int64 v159; // [rsp+10h] [rbp-398h]
  __m128i *v160; // [rsp+20h] [rbp-388h] BYREF
  __int64 v161; // [rsp+28h] [rbp-380h]
  __int64 *v162; // [rsp+30h] [rbp-378h]
  __int64 v163; // [rsp+38h] [rbp-370h]
  __int64 v164; // [rsp+40h] [rbp-368h]
  __m128i *v165; // [rsp+48h] [rbp-360h]
  __int64 v166; // [rsp+50h] [rbp-358h]
  __int64 v167; // [rsp+58h] [rbp-350h]
  __m128i *v168; // [rsp+60h] [rbp-348h]
  __int64 v169; // [rsp+68h] [rbp-340h]
  __m128i *v170; // [rsp+70h] [rbp-338h]
  __m128i *v171; // [rsp+78h] [rbp-330h]
  __int64 v172; // [rsp+80h] [rbp-328h]
  void **v173; // [rsp+88h] [rbp-320h]
  __int64 v174; // [rsp+90h] [rbp-318h]
  __int64 v175; // [rsp+98h] [rbp-310h]
  void ***v176; // [rsp+A0h] [rbp-308h]
  char v177; // [rsp+AFh] [rbp-2F9h]
  char v178; // [rsp+B7h] [rbp-2F1h] BYREF
  __int64 v179; // [rsp+B8h] [rbp-2F0h] BYREF
  void *v180[2]; // [rsp+C0h] [rbp-2E8h] BYREF
  __m128i *v181; // [rsp+D0h] [rbp-2D8h]
  void *v182; // [rsp+E0h] [rbp-2C8h] BYREF
  __int64 v183; // [rsp+E8h] [rbp-2C0h]
  __m128i v184; // [rsp+F0h] [rbp-2B8h] BYREF
  __m128i v185; // [rsp+100h] [rbp-2A8h] BYREF
  _QWORD v186[2]; // [rsp+110h] [rbp-298h] BYREF
  __int16 v187; // [rsp+120h] [rbp-288h]
  __m128i v188; // [rsp+130h] [rbp-278h] BYREF
  __m128i si128; // [rsp+140h] [rbp-268h] BYREF
  __int16 v190; // [rsp+150h] [rbp-258h]
  __m128i v191[2]; // [rsp+160h] [rbp-248h] BYREF
  __int16 v192; // [rsp+180h] [rbp-228h]
  __m128i v193; // [rsp+190h] [rbp-218h] BYREF
  _QWORD v194[2]; // [rsp+1A0h] [rbp-208h] BYREF
  __int16 v195; // [rsp+1B0h] [rbp-1F8h]
  void *ptr; // [rsp+1C0h] [rbp-1E8h] BYREF
  __int64 v197; // [rsp+1C8h] [rbp-1E0h]
  _BYTE v198[128]; // [rsp+1D0h] [rbp-1D8h] BYREF
  _BYTE v199[24]; // [rsp+250h] [rbp-158h] BYREF
  void **v200; // [rsp+268h] [rbp-140h] BYREF
  __int16 v201; // [rsp+270h] [rbp-138h]

  v8 = (__m128i *)a6;
  v9 = *(_QWORD *)(a1 + 24);
  v172 = a1;
  v10 = v199;
  ptr = v198;
  v197 = 0x1000000000LL;
  v11 = *(_QWORD *)(v9 + 8);
  v161 = a2;
  v162 = a4;
  v164 = a5;
  v163 = a3;
  v166 = v11;
  v167 = sub_10DCD30(a6, 0xCE3u);
  v160 = (__m128i *)sub_10DCD30((__int64)v8, 0xCC0u);
  LOBYTE(v170) = sub_10DCD30((__int64)v8, 0xC3Cu) != 0;
  v169 = sub_10DCD30((__int64)v8, 0xBF0u);
  v174 = sub_10DCD30((__int64)v8, 0xBEBu);
  v175 = sub_10DCD30((__int64)v8, 0xBDDu);
  v178 = 0;
  sub_1132E50(&v193, v9, &v178);
  v201 = 260;
  *(_QWORD *)v199 = &v193;
  v12 = (const char *)sub_10DA6C0((__int64)v8, (__int64)v199);
  if ( (_QWORD *)v193.m128i_i64[0] != v194 )
    operator delete((void *)v193.m128i_i64[0]);
  v13 = v178;
  if ( !v178 )
  {
    if ( v12 )
    {
      v14 = j__strlen(v12);
      v15 = sub_228AA60(v12, v14, 0);
      if ( v16 > 5 )
      {
        v110 = v15 + v16 - 6;
        if ( *(_DWORD *)v110 == 1814979692 && *(_WORD *)(v110 + 4) == 25708 )
          goto LABEL_128;
      }
      v17 = v12;
      v18 = j__strlen(v12);
    }
    else
    {
      v97 = sub_228AA60(0, 0, 0);
      if ( v98 > 5 )
      {
        v99 = v97 + v98 - 6;
        if ( *(_DWORD *)v99 == 1814979692 && *(_WORD *)(v99 + 4) == 25708 )
          goto LABEL_128;
      }
      v17 = nullptr;
      v18 = 0;
    }
    v19 = sub_228AAA0(v17, v18, 0);
    v21 = v20;
    v22 = v19;
    v23 = j__strlen("ld.lld");
    if ( v23 <= v21 && (!v23 || !memcmp((const void *)(v21 - v23 + v22), "ld.lld", v23)) )
LABEL_128:
      v13 = 1;
  }
  v178 = v13;
  v24 = sub_1245260((__int64)v8);
  v173 = v25;
  v168 = (__m128i *)v24;
  LOBYTE(v176) = sub_11C3BD0((__int64 **)v9, (__int64)v8, (__int64)&ptr);
  v177 = sub_11BDB50(v9, (__int64)v8, (__int64)&ptr);
  sub_21B7CF0(v8, 36);
  sub_21B7CF0(v8, 345);
  sub_21B7CF0(v8, 3480);
  sub_21B7CF0(v8, 3293);
  v26 = (unsigned int)v197;
  v27 = (unsigned int)v197 + 1LL;
  if ( v27 > HIDWORD(v197) )
  {
    sub_2237220(&ptr, v198, v27, 8);
    v26 = (unsigned int)v197;
  }
  *((_QWORD *)ptr + v26) = "--eh-frame-hdr";
  LODWORD(v197) = v197 + 1;
  if ( sub_10DCD30((__int64)v8, 0xCF9u) )
  {
    v28 = (unsigned int)v197;
    v29 = (unsigned int)v197 + 1LL;
    if ( v29 > HIDWORD(v197) )
    {
      sub_2237220(&ptr, v198, v29, 8);
      v28 = (unsigned int)v197;
    }
    *((_QWORD *)ptr + v28) = "-s";
    LODWORD(v197) = v197 + 1;
  }
  if ( sub_10DCD30((__int64)v8, 0xCA4u) )
  {
    v30 = (unsigned int)v197;
    v31 = (unsigned int)v197 + 1LL;
    if ( v31 > HIDWORD(v197) )
    {
      sub_2237220(&ptr, v198, v31, 8);
      v30 = (unsigned int)v197;
    }
    *((_QWORD *)ptr + v30) = "-r";
    LODWORD(v197) = v197 + 1;
  }
  v32 = *(__int64 **)(v9 + 4992);
  if ( *(__int64 **)(v9 + 4984) != v32 )
  {
    v33 = (unsigned int)v197;
    v34 = *(__int64 **)(v9 + 4984);
    v165 = (__m128i *)v198;
    do
    {
      v35 = *v34;
      if ( v33 + 1 > (unsigned __int64)HIDWORD(v197) )
      {
        sub_2237220(&ptr, v165, v33 + 1, 8);
        *((_QWORD *)ptr + (unsigned int)v197) = v35;
      }
      else
      {
        *((_QWORD *)ptr + v33) = v35;
      }
      v34 += 4;
      v33 = (unsigned int)(v197 + 1);
      LODWORD(v197) = v197 + 1;
    }
    while ( v32 != v34 );
  }
  if ( !v178 )
  {
    sub_10DC5D0((__int64)&ptr, (__int64)"-march=hexagon");
    v201 = 1283;
    *(_QWORD *)v199 = "-mcpu=hexagon";
    *(_QWORD *)&v199[16] = v168;
    v200 = v173;
    v100 = sub_10DA6C0((__int64)v8, (__int64)v199);
    sub_10DC5D0((__int64)&ptr, v100);
  }
  if ( !v160 )
  {
    if ( !v167 )
      goto LABEL_33;
    v39 = (unsigned int)v197;
    v40 = (unsigned int)v197 + 1LL;
    if ( v40 <= HIDWORD(v197) )
    {
LABEL_32:
      *((_QWORD *)ptr + v39) = "-static";
      LODWORD(v197) = v197 + 1;
LABEL_33:
      if ( !v160 && (_BYTE)v170 )
        sub_10DC5D0((__int64)&ptr, (__int64)"-pie");
      goto LABEL_36;
    }
LABEL_132:
    sub_2237220(&ptr, v198, v40, 8);
    v39 = (unsigned int)v197;
    goto LABEL_32;
  }
  v36 = (unsigned int)v197;
  v37 = (unsigned int)v197 + 1LL;
  if ( v37 > HIDWORD(v197) )
  {
    sub_2237220(&ptr, v198, v37, 8);
    v36 = (unsigned int)v197;
  }
  *((_QWORD *)ptr + v36) = "-shared";
  LODWORD(v197) = v197 + 1;
  v38 = (unsigned int)v197;
  if ( (unsigned __int64)(unsigned int)v197 + 1 > HIDWORD(v197) )
  {
    sub_2237220(&ptr, v198, (unsigned int)v197 + 1LL, 8);
    v38 = (unsigned int)v197;
  }
  *((_QWORD *)ptr + v38) = "-call_shared";
  v39 = (unsigned int)(v197 + 1);
  LODWORD(v197) = v197 + 1;
  if ( v167 )
  {
    v40 = v39 + 1;
    if ( v39 + 1 <= (unsigned __int64)HIDWORD(v197) )
      goto LABEL_32;
    goto LABEL_132;
  }
LABEL_36:
  v41 = sub_1244F90((__int64)v8);
  v45 = v41;
  LOBYTE(v171) = BYTE4(v41);
  if ( !BYTE4(v41) )
  {
    v46 = (unsigned int)v197;
    v47 = (unsigned int)v197 + 1LL;
    if ( v47 <= HIDWORD(v197) )
      goto LABEL_38;
    goto LABEL_108;
  }
  v195 = 265;
  v191[0].m128i_i64[0] = (__int64)"-G";
  v192 = 259;
  v193.m128i_i32[0] = v41;
  sub_A41580((__m128i *)v199, v191, &v193, v42, v43, v44);
  v101 = sub_10DA6C0((__int64)v8, (__int64)v199);
  v102 = (unsigned int)v197;
  v103 = (unsigned int)v197 + 1LL;
  if ( v103 > HIDWORD(v197) )
  {
    v165 = (__m128i *)v101;
    sub_2237220(&ptr, v198, v103, 8);
    v102 = (unsigned int)v197;
    v101 = (__int64)v165;
  }
  *((_QWORD *)ptr + v102) = v101;
  v46 = (unsigned int)(v197 + 1);
  v47 = v46 + 1;
  LODWORD(v197) = v197 + 1;
  LOBYTE(v171) = v45 == 0;
  if ( v46 + 1 > (unsigned __int64)HIDWORD(v197) )
  {
LABEL_108:
    sub_2237220(&ptr, v198, v47, 8);
    v46 = (unsigned int)v197;
  }
LABEL_38:
  *((_QWORD *)ptr + v46) = "-o";
  v48 = *v162;
  LODWORD(v197) = v197 + 1;
  v49 = (unsigned int)v197;
  if ( (unsigned __int64)(unsigned int)v197 + 1 > HIDWORD(v197) )
  {
    sub_2237220(&ptr, v198, (unsigned int)v197 + 1LL, 8);
    v49 = (unsigned int)v197;
  }
  *((_QWORD *)ptr + v49) = v48;
  v50 = *(_DWORD *)(v9 + 64);
  LODWORD(v197) = v197 + 1;
  LOBYTE(v165) = v50 == 49 || (unsigned int)(v50 - 18) <= 7;
  if ( !(_BYTE)v165 && *(_DWORD *)(v9 + 60) != 39 )
  {
    v55 = 0;
    *(_OWORD *)v180 = 0;
    v181 = nullptr;
    *(_DWORD *)v199 = 2790;
    v114 = sub_21B6DA0(v8, v199, 1);
    v115 = v8->m128i_i64[1];
    v116 = (_QWORD *)(v115 + 8LL * (unsigned int)v114);
    v117 = (_QWORD *)(v115 + 8 * HIDWORD(v114));
    if ( v116 == v117 )
    {
LABEL_153:
      v118 = (__m128i *)v180[1];
      goto LABEL_154;
    }
    while ( !*v116 || !(unsigned __int8)sub_21B9810(*v116, 2790) )
    {
      if ( v117 == ++v116 )
        goto LABEL_153;
    }
    v118 = (__m128i *)v180[1];
    if ( v116 == v117 )
    {
LABEL_154:
      if ( v180[0] == v118 )
      {
LABEL_231:
        *(_QWORD *)v199 = &v199[16];
        v144 = j__strlen("standalone");
        sub_1244700(v199, "standalone", (__int64)&aDebugInfoKindS[v144 + 17]);
        v145 = (__m128i *)v180[1];
        if ( v180[1] == v181 )
        {
          sub_A82970((void ***)v180, (const __m128i *)v180[1], (__m128i *)v199);
          if ( *(_BYTE **)v199 != &v199[16] )
            operator delete(*(void **)v199);
        }
        else
        {
          *(_QWORD *)v180[1] = (char *)v180[1] + 16;
          if ( *(_BYTE **)v199 == &v199[16] )
          {
            v145[1] = _mm_load_si128((const __m128i *)&v199[16]);
          }
          else
          {
            v145->m128i_i64[0] = *(_QWORD *)v199;
            v145[1].m128i_i64[0] = *(_QWORD *)&v199[16];
          }
          v145->m128i_i64[1] = *(_QWORD *)&v199[8];
          v180[1] = (char *)v180[1] + 32;
        }
        LOBYTE(v165) = 1;
      }
LABEL_155:
      *(_QWORD *)v199 = &v199[16];
      if ( v168 )
      {
        sub_1244700(v199, v168, (__int64)v173 + (_QWORD)v168);
      }
      else
      {
        *(_QWORD *)&v199[8] = 0;
        v199[16] = 0;
      }
      v119 = (__m128i *)sub_99BDC0(v199, 0, 0, "/", 1u);
      v182 = &v184;
      v173 = &v182;
      if ( (__m128i *)v119->m128i_i64[0] == &v119[1] )
      {
        v184 = _mm_loadu_si128(v119 + 1);
      }
      else
      {
        v182 = (void *)v119->m128i_i64[0];
        v184.m128i_i64[0] = v119[1].m128i_i64[0];
      }
      v120 = v119->m128i_i64[1];
      v119[1].m128i_i8[0] = 0;
      v183 = v120;
      v119->m128i_i64[0] = (__int64)v119[1].m128i_i64;
      v119->m128i_i64[1] = 0;
      if ( *(_BYTE **)v199 != &v199[16] )
        operator delete(*(void **)v199);
      v168 = &v185;
      v185.m128i_i64[0] = (__int64)v186;
      sub_1244640(&v185, v182, (__int64)v182 + v183);
      v121 = v185.m128i_i64[1];
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v185.m128i_i64[1]) <= 2 )
        goto LABEL_273;
      v122 = (_QWORD *)v185.m128i_i64[0] == v186 ? 15LL : v186[0];
      if ( v185.m128i_i64[1] + 3 > v122 )
      {
        sub_998B30((__int64)v168, v185.m128i_u64[1], 0, "/G0", 3u);
      }
      else
      {
        v123 = v185.m128i_i64[1] + v185.m128i_i64[0];
        *(_WORD *)v123 = 18223;
        *(_BYTE *)(v123 + 2) = 48;
      }
      v185.m128i_i64[1] = v121 + 3;
      *(_BYTE *)(v185.m128i_i64[0] + v121 + 3) = 0;
      sub_1246300((__m128i *)v199, v9, (_BYTE **)(v166 + 104), (__int64 *)(v166 + 344));
      v124 = *(_QWORD *)&v199[8];
      if ( *(_QWORD *)&v199[8] == 0x7FFFFFFFFFFFFFFFLL )
LABEL_273:
        std::__throw_length_error("basic_string::append");
      if ( *(_BYTE **)v199 == &v199[16] )
        v125 = 15;
      else
        v125 = *(_QWORD *)&v199[16];
      if ( *(_QWORD *)&v199[8] + 1LL > v125 )
        sub_998B30((__int64)v199, *(size_t *)&v199[8], 0, "/", 1u);
      else
        *(_BYTE *)(*(_QWORD *)v199 + *(_QWORD *)&v199[8]) = 47;
      *(_QWORD *)&v199[8] = v124 + 1;
      *(_BYTE *)(*(_QWORD *)v199 + v124 + 1) = 0;
      v170 = &v188;
      v188.m128i_i64[0] = (__int64)&si128;
      if ( *(_BYTE **)v199 == &v199[16] )
      {
        si128 = _mm_load_si128((const __m128i *)&v199[16]);
      }
      else
      {
        v188.m128i_i64[0] = *(_QWORD *)v199;
        si128.m128i_i64[0] = *(_QWORD *)&v199[16];
      }
      v126 = (__m128i *)v173;
      if ( (_BYTE)v171 )
        v126 = v168;
      v188.m128i_i64[1] = *(_QWORD *)&v199[8];
      v174 |= v169;
      LOBYTE(v176) = v167 == 0 && v160 != nullptr;
      v171 = v191;
      sub_C05100((__int64)v191, "hexagon/lib", (__int64)v126);
      v179 = v9;
      if ( v174 )
        goto LABEL_182;
      if ( v160 )
      {
        if ( (_BYTE)v176 )
        {
          sub_F7DA00((size_t *)v199, (__int64)v171, "/pic");
          sub_12460B0(&v193, &v179, (__int64)v170, (__int64)v199, "/initS.o");
          if ( *(_BYTE **)v199 != &v199[16] )
            operator delete(*(void **)v199);
          goto LABEL_180;
        }
      }
      else
      {
        if ( (_BYTE)v165 )
        {
          sub_12460B0(&v193, &v179, (__int64)v170, (__int64)v171, "/crt0_standalone.o");
          v201 = 260;
          *(_QWORD *)v199 = &v193;
          v157 = sub_10DA6C0((__int64)v8, (__int64)v199);
          sub_10DC5D0((__int64)&ptr, v157);
          if ( (_QWORD *)v193.m128i_i64[0] != v194 )
            operator delete((void *)v193.m128i_i64[0]);
        }
        sub_12460B0(&v193, &v179, (__int64)v170, (__int64)v171, "/crt0.o");
        v201 = 260;
        *(_QWORD *)v199 = &v193;
        v149 = sub_10DA6C0((__int64)v8, (__int64)v199);
        sub_10DC5D0((__int64)&ptr, v149);
        if ( (_QWORD *)v193.m128i_i64[0] != v194 )
          operator delete((void *)v193.m128i_i64[0]);
      }
      sub_12460B0(&v193, &v179, (__int64)v170, (__int64)v171, "/init.o");
LABEL_180:
      v201 = 260;
      *(_QWORD *)v199 = &v193;
      v127 = sub_10DA6C0((__int64)v8, (__int64)v199);
      sub_10DC5D0((__int64)&ptr, v127);
      if ( (_QWORD *)v193.m128i_i64[0] != v194 )
        operator delete((void *)v193.m128i_i64[0]);
LABEL_182:
      v128 = *(_QWORD *)(v9 + 624);
      v129 = 32LL * *(unsigned int *)(v9 + 632);
      v167 = v128 + v129;
      if ( v128 != v128 + v129 )
      {
        v130 = v128;
        v165 = (__m128i *)&v200;
        do
        {
          while ( 1 )
          {
            a8 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8DE0);
            v193.m128i_i64[0] = (__int64)"-L";
            v195 = 1029;
            *(_QWORD *)v199 = v165;
            v131 = v8->m128i_i64[0];
            *(__m128 *)&v199[8] = a8;
            v132 = *(__int64 (__fastcall **)(__m128i *, _QWORD, _QWORD))(v131 + 16);
            v194[0] = v130;
            v193.m128i_i64[1] = 2;
            sub_22538C0(&v193, v199);
            v133 = v132(v8, *(_QWORD *)v199, *(_QWORD *)&v199[8]);
            if ( *(__m128i **)v199 != v165 )
              free(*(void **)v199);
            v134 = (unsigned int)v197 + 1LL;
            if ( v134 > HIDWORD(v197) )
              break;
            v130 += 32;
            *((_QWORD *)ptr + (unsigned int)v197) = v133;
            LODWORD(v197) = v197 + 1;
            if ( v167 == v130 )
              goto LABEL_189;
          }
          v130 += 32;
          sub_2237220(&ptr, v198, v134, 8);
          *((_QWORD *)ptr + (unsigned int)v197) = v133;
          LODWORD(v197) = v197 + 1;
        }
        while ( v167 != v130 );
      }
LABEL_189:
      sub_21B7CF0(v8, 2204);
      *(_QWORD *)v199 = 0xCF90000000FLL;
      *(_QWORD *)&v199[8] = 0x4500000D17LL;
      sub_21B6650(v8, &ptr, v199, 4);
      sub_11C3660(v9, v164, (__int64)v8, (__int64)&ptr, v163);
      if ( !(v175 | v169) )
      {
        if ( *(_DWORD *)(v166 + 16) == 1 )
        {
          if ( sub_112D7B0(v9, (__int64)v8) )
            (*(void (__fastcall **)(__int64, __m128i *, void **))(*(_QWORD *)v9 + 640LL))(v9, v8, &ptr);
          sub_10DC5D0((__int64)&ptr, (__int64)"-lm");
        }
        sub_10DC5D0((__int64)&ptr, (__int64)"--start-group");
        if ( !v160 )
        {
          v150 = (__int64 *)v180[1];
          v151 = (__int64 *)v180[0];
          v160 = (__m128i *)v198;
          if ( v180[0] != v180[1] )
          {
            do
            {
              v152 = *v151;
              v153 = (void **)v151[1];
              v201 = 1283;
              *(_QWORD *)&v199[16] = v152;
              *(_QWORD *)v199 = "-l";
              v200 = v153;
              v154 = sub_10DA6C0((__int64)v8, (__int64)v199);
              v155 = (unsigned int)v197;
              v156 = (unsigned int)v197 + 1LL;
              if ( v156 > HIDWORD(v197) )
              {
                v165 = (__m128i *)v154;
                sub_2237220(&ptr, v160, v156, 8);
                v155 = (unsigned int)v197;
                v154 = (__int64)v165;
              }
              v151 += 4;
              *((_QWORD *)ptr + v155) = v154;
              LODWORD(v197) = v197 + 1;
            }
            while ( v150 != v151 );
          }
          if ( !sub_10DCD30((__int64)v8, 0xBE4u) )
            sub_10DC5D0((__int64)&ptr, (__int64)"-lc");
        }
        sub_10DC5D0((__int64)&ptr, (__int64)"-lgcc");
        v135 = (unsigned int)v197;
        v136 = (unsigned int)v197 + 1LL;
        if ( v136 > HIDWORD(v197) )
        {
          sub_2237220(&ptr, v198, v136, 8);
          v135 = (unsigned int)v197;
        }
        *((_QWORD *)ptr + v135) = "--end-group";
        LODWORD(v197) = v197 + 1;
      }
      if ( !v174 )
      {
        if ( (_BYTE)v176 )
        {
          sub_F7DA00((size_t *)v199, (__int64)v171, "/pic");
          sub_12460B0(&v193, &v179, (__int64)v170, (__int64)v199, "/finiS.o");
          if ( *(_BYTE **)v199 != &v199[16] )
            operator delete(*(void **)v199);
        }
        else
        {
          sub_12460B0(&v193, &v179, (__int64)v170, (__int64)v171, "/fini.o");
        }
        v201 = 260;
        *(_QWORD *)v199 = &v193;
        v137 = sub_10DA6C0((__int64)v8, (__int64)v199);
        sub_10DC5D0((__int64)&ptr, v137);
        if ( (_QWORD *)v193.m128i_i64[0] != v194 )
          operator delete((void *)v193.m128i_i64[0]);
      }
      if ( (__m128i *)v191[0].m128i_i64[0] != &v171[1] )
        operator delete((void *)v191[0].m128i_i64[0]);
      if ( (__m128i *)v188.m128i_i64[0] != &v170[1] )
        operator delete((void *)v188.m128i_i64[0]);
      if ( (__m128i *)v185.m128i_i64[0] != &v168[1] )
        operator delete((void *)v185.m128i_i64[0]);
      if ( v182 != v173 + 2 )
        operator delete(v182);
      v138 = (void **)v180[1];
      v139 = (void **)v180[0];
      if ( v180[1] != v180[0] )
      {
        do
        {
          while ( *v139 != v139 + 2 )
          {
            operator delete(*v139);
            v139 += 4;
            if ( v138 == v139 )
              goto LABEL_212;
          }
          v139 += 4;
        }
        while ( v138 != v139 );
LABEL_212:
        v139 = (void **)v180[0];
      }
      if ( v139 )
        operator delete(v139);
      goto LABEL_63;
    }
    v170 = v8;
    v176 = (void ***)v180;
    while ( 2 )
    {
      v140 = *v116;
      v141 = *(_QWORD *)(*v116 + 16LL);
      if ( !v141 )
        v141 = *v116;
      *(_BYTE *)(v141 + 44) |= 1u;
      v142 = **(char ***)(v140 + 48);
      *(_QWORD *)v199 = v142;
      if ( v181 == v118 )
      {
        sub_1245DD0(v176, v118, (char **)v199);
        v118 = (__m128i *)v180[1];
      }
      else
      {
        v143 = -1;
        v118->m128i_i64[0] = (__int64)v118[1].m128i_i64;
        if ( v142 )
          v143 = (__int64)&v142[strlen(v142)];
        sub_1244700(v118, v142, v143);
        v118 = (__m128i *)((char *)v180[1] + 32);
        v180[1] = (char *)v180[1] + 32;
      }
      if ( !(_BYTE)v165 )
      {
        v146 = v118[-2].m128i_u64[1];
        if ( v146 )
        {
          v147 = 10;
          if ( v146 <= 0xA )
            v147 = v118[-2].m128i_u64[1];
          if ( memcmp((const void *)v118[-2].m128i_i64[0], "standalone", v147) )
            goto LABEL_226;
          v148 = v146 - 10;
          if ( (__int64)(v146 - 10) > 0x7FFFFFFF || v148 < (__int64)0xFFFFFFFF80000000LL )
            goto LABEL_226;
        }
        else
        {
          LODWORD(v148) = -10;
        }
        LOBYTE(v165) = (_DWORD)v148 == 0;
      }
LABEL_226:
      if ( ++v116 != v117 )
      {
        while ( !*v116 || !(unsigned __int8)sub_21B9810(*v116, 2790) )
        {
          if ( v117 == ++v116 )
          {
            v8 = v170;
            if ( v180[0] != v180[1] )
              goto LABEL_155;
            goto LABEL_231;
          }
        }
        v118 = (__m128i *)v180[1];
        if ( v117 != v116 )
          continue;
      }
      break;
    }
    v8 = v170;
    goto LABEL_154;
  }
  if ( !sub_10DE660((__int64)v8, 0xCC0u, 0xCE3u) )
    sub_10DC5D0((__int64)&ptr, (__int64)"-dynamic-linker=/lib/ld-musl-hexagon.so.1");
  *(_QWORD *)v199 = 0xBEB00000CC0LL;
  *(_DWORD *)&v199[8] = 3056;
  v51 = sub_21B6DA0(v8, v199, 3);
  v52 = v8->m128i_i64[1];
  *(_QWORD *)&v199[16] = 0xBEB00000CC0LL;
  LODWORD(v200) = 3056;
  v53 = (__int64 *)(v52 + 8LL * (unsigned int)v51);
  v54 = v52 + 8 * HIDWORD(v51);
  v160 = (__m128i *)v54;
  v55 = _mm_loadh_ps((const double *)&v160);
  *(__m128 *)v199 = v55;
  if ( v53 != (__int64 *)v54 )
  {
    v165 = v8;
    v160 = (__m128i *)&v199[12];
    do
    {
      v56 = *v53;
      v57 = (__m128i *)v199;
      if ( *v53 )
      {
        do
        {
          v58 = v57[1].m128i_u32[0];
          if ( !(_DWORD)v58 )
            break;
          if ( (unsigned __int8)sub_21B9810(v56, v58) )
          {
            v8 = v165;
            v160 = (__m128i *)v54;
            *(_QWORD *)&v199[16] = 0xBEB00000CC0LL;
            LODWORD(v200) = 3056;
            v55 = _mm_loadh_ps((const double *)&v160);
            *(__m128 *)v199 = v55;
            if ( (__int64 *)v54 == v53 )
              goto LABEL_51;
            v160 = v165;
            v104 = (__int64 *)v54;
            v165 = (__m128i *)&v199[12];
LABEL_111:
            v105 = *v53;
            if ( *(_QWORD *)(*v53 + 16) )
              v105 = *(_QWORD *)(*v53 + 16);
            v106 = v53 + 1;
            *(_BYTE *)(v105 + 44) |= 1u;
            for ( *(_QWORD *)v199 = v106; v104 != v106; *(_QWORD *)v199 = v106 )
            {
              v107 = *v106;
              v108 = (__m128i *)v199;
              if ( *v106 )
              {
                do
                {
                  v109 = v108[1].m128i_u32[0];
                  if ( !(_DWORD)v109 )
                    break;
                  if ( (unsigned __int8)sub_21B9810(v107, v109) )
                  {
                    v53 = *(__int64 **)v199;
                    if ( v104 != *(__int64 **)v199 )
                      goto LABEL_111;
                    goto LABEL_119;
                  }
                  v108 = (__m128i *)((char *)v108 + 4);
                }
                while ( v108 != v165 );
              }
              ++v106;
            }
LABEL_119:
            v8 = v160;
            v10 = v199;
            v60 = v166 + 488;
            if ( sub_10DCD30((__int64)v160, 0xCC0u) && !sub_10DE660((__int64)v8, 0xBEBu, 0xBF0u) )
            {
              v59 = "/usr/lib/crti.o";
              goto LABEL_52;
            }
            goto LABEL_54;
          }
          v57 = (__m128i *)((char *)v57 + 4);
        }
        while ( v160 != v57 );
      }
      *(_QWORD *)v199 = ++v53;
    }
    while ( (__int64 *)v54 != v53 );
    v8 = v165;
  }
LABEL_51:
  v59 = "/usr/lib/crt1.o";
  v60 = v166 + 488;
LABEL_52:
  sub_F7DA00((size_t *)&v193, v60, v59);
  v201 = 260;
  *(_QWORD *)v199 = &v193;
  v61 = sub_10DA6C0((__int64)v8, (__int64)v199);
  sub_10DC5D0((__int64)&ptr, v61);
  if ( (_QWORD *)v193.m128i_i64[0] != v194 )
    operator delete((void *)v193.m128i_i64[0]);
LABEL_54:
  v188.m128i_i64[0] = v60;
  v193.m128i_i64[0] = (__int64)"/usr/lib";
  v195 = 259;
  v187 = 261;
  v190 = 260;
  v185.m128i_i64[0] = (__int64)"-L";
  v185.m128i_i64[1] = 2;
  sub_A41580(v191, &v185, &v188, v62, v63, v64);
  sub_A41580((__m128i *)v199, v191, &v193, v65, v66, v67);
  v68 = sub_10DA6C0((__int64)v8, (__int64)v199);
  v69 = (unsigned int)v197;
  v70 = (unsigned int)v197 + 1LL;
  if ( v70 > HIDWORD(v197) )
  {
    v159 = v68;
    sub_2237220(&ptr, v198, v70, 8);
    v69 = (unsigned int)v197;
    v68 = v159;
  }
  *((_QWORD *)ptr + v69) = v68;
  LODWORD(v197) = v197 + 1;
  *(_QWORD *)v199 = 0xCF90000000FLL;
  *(_QWORD *)&v199[8] = 0x4500000D17LL;
  sub_21B6650(v8, &ptr, v199, 4);
  sub_11C3660(v9, v164, (__int64)v8, (__int64)&ptr, v163);
  v71 = (*(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v9 + 616LL))(v9, v8);
  if ( !sub_10DE660((__int64)v8, 0xBF0u, 0xBDDu) )
  {
    if ( (_BYTE)v176 )
    {
      sub_11BC1D0(v9, (__int64)v8, (__int64)&ptr);
      if ( v71 )
        sub_10DC5D0((__int64)&ptr, (__int64)"-lunwind");
    }
    if ( v177 )
      sub_11BC020(v9, (__int64)v8, (__int64)&ptr);
    if ( !sub_10DCD30((__int64)v8, 0xBE4u) )
      sub_10DC5D0((__int64)&ptr, (__int64)"-lc");
    sub_10DC5D0((__int64)&ptr, (__int64)"-lclang_rt.builtins-hexagon");
  }
  if ( *(_DWORD *)(v166 + 16) == 1 && sub_112D7B0(v9, (__int64)v8) )
    (*(void (__fastcall **)(__int64, __m128i *, void **))(*(_QWORD *)v9 + 640LL))(v9, v8, &ptr);
  v72 = *(_QWORD *)(v9 + 624);
  for ( i = v72 + 32LL * *(unsigned int *)(v9 + 632); i != v72; LODWORD(v197) = v197 + 1 )
  {
    *(_QWORD *)v199 = "-L";
    *(_QWORD *)&v199[8] = 2;
    *(_QWORD *)&v199[16] = v72;
    v201 = 1029;
    v74 = sub_10DA6C0((__int64)v8, (__int64)v199);
    v75 = (unsigned int)v197;
    v76 = (unsigned int)v197 + 1LL;
    if ( v76 > HIDWORD(v197) )
    {
      v160 = (__m128i *)v74;
      sub_2237220(&ptr, v198, v76, 8);
      v75 = (unsigned int)v197;
      v74 = (__int64)v160;
    }
    v72 += 32;
    *((_QWORD *)ptr + v75) = v74;
  }
  sub_21B7CF0(v8, 2204);
LABEL_63:
  sub_1132E50((__m128i *)v199, v9, nullptr);
  v77 = (*(__int64 (__fastcall **)(__m128i *, _QWORD, _QWORD))(v8->m128i_i64[0] + 16))(
          v8,
          *(_QWORD *)v199,
          *(_QWORD *)&v199[8]);
  if ( *(_BYTE **)v199 != &v199[16] )
    operator delete(*(void **)v199);
  v78 = *(const __m128i **)v164;
  v79 = *(unsigned int *)(v164 + 8);
  v158 = (__int64)v162;
  v80 = operator new(0x208u);
  sub_1106AE0(v80, v163, v172, 0x100000000LL, (__int64)"@", v77, (__int64)&ptr, v78, v79, v158, 1, 0);
  *(_QWORD *)v199 = v80;
  v81 = *(unsigned int *)(v161 + 160);
  v82 = v81 + 1;
  v83 = *(_DWORD *)(v161 + 160);
  if ( v81 + 1 > (unsigned __int64)*(unsigned int *)(v161 + 164) )
  {
    v111 = v161;
    v112 = *(_QWORD *)(v161 + 152);
    v113 = v161 + 152;
    if ( v112 > (unsigned __int64)v199 || (unsigned __int64)v199 >= v112 + 8 * v81 )
    {
      sub_11673D0(v113, v82, v55, *(double *)a8.m128_u64);
      v81 = *(unsigned int *)(v161 + 160);
      v84 = *(_QWORD *)(v161 + 152);
      v83 = *(_DWORD *)(v161 + 160);
    }
    else
    {
      sub_11673D0(v113, v82, v55, *(double *)a8.m128_u64);
      v84 = *(_QWORD *)(v111 + 152);
      v81 = *(unsigned int *)(v111 + 160);
      v10 = &v199[v84 - v112];
      v83 = *(_DWORD *)(v111 + 160);
    }
  }
  else
  {
    v84 = *(_QWORD *)(v161 + 152);
  }
  v85 = *(_QWORD *)v10;
  *(_QWORD *)v10 = 0;
  *(_QWORD *)(v84 + 8 * v81) = v85;
  v86 = *(_QWORD **)v199;
  *(_DWORD *)(v161 + 160) = v83 + 1;
  if ( v86 )
  {
    v87 = *(void (__fastcall **)(_QWORD *))(*v86 + 8LL);
    if ( v87 == sub_10D4290 )
    {
      v88 = v86[58];
      v89 = v86[57];
      *v86 = &off_2BA8F30;
      if ( v88 != v89 )
      {
        do
        {
          if ( *(_BYTE *)(v89 + 32) && *(_QWORD *)v89 != v89 + 16 )
            operator delete(*(void **)v89);
          v89 += 40;
        }
        while ( v88 != v89 );
        v89 = v86[57];
      }
      if ( v89 )
        operator delete((void *)v89);
      v90 = (void *)v86[54];
      if ( v90 )
        operator delete(v90);
      v91 = (_QWORD *)v86[50];
      if ( v91 != v86 + 52 )
        operator delete(v91);
      v92 = (_QWORD *)v86[32];
      if ( v92 != v86 + 34 )
        free(v92);
      v93 = (void **)v86[29];
      v94 = (void **)v86[28];
      if ( v93 != v94 )
      {
        do
        {
          while ( *v94 != v94 + 2 )
          {
            operator delete(*v94);
            v94 += 4;
            if ( v94 == v93 )
              goto LABEL_86;
          }
          v94 += 4;
        }
        while ( v93 != v94 );
LABEL_86:
        v94 = (void **)v86[28];
      }
      if ( v94 )
        operator delete(v94);
      v95 = (void *)v86[25];
      if ( v95 )
        operator delete(v95);
      v96 = (_QWORD *)v86[7];
      if ( v96 != v86 + 9 )
        free(v96);
      operator delete(v86, 0x208u);
    }
    else
    {
      v87(v86);
    }
  }
  if ( ptr != v198 )
    free(ptr);
}
