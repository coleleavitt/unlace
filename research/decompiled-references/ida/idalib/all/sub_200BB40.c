__int64 __fastcall sub_200BB40(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r14
  unsigned __int64 v4; // r15
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebp
  __int64 *v11; // rbx
  unsigned __int64 v12; // rsi
  _QWORD *v13; // rbx
  _QWORD *v14; // r14
  __m128i *v15; // r13
  __m128i *v16; // rsi
  __int64 *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __m128i *v21; // rcx
  __int64 v22; // rbp
  void *v23; // rdx
  __int64 v24; // rax
  _BYTE *v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  __int64 *v28; // rsi
  size_t *v29; // r12
  size_t *v30; // rbx
  size_t v31; // rsi
  size_t v32; // rdx
  void ***v33; // rax
  size_t v34; // rax
  __int64 *v35; // rsi
  std::_V2 *v36; // rdi
  __int64 v37; // rax
  _BYTE *v38; // rdi
  size_t v39; // rdx
  __int64 v40; // rax
  __int64 *v41; // rsi
  void **v42; // rdi
  void *v43; // rdx
  __int64 v44; // rax
  char *v45; // rbx
  __int64 v46; // rdi
  unsigned int (__fastcall *v47)(__int64, __int64); // rax
  const void *v48; // r12
  size_t v49; // rbp
  unsigned int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 *v54; // r14
  _QWORD *v55; // rdi
  __int64 *v56; // rsi
  __int64 v57; // rbp
  __int64 v58; // r14
  __int64 v59; // r13
  __int64 *v60; // rax
  __int64 *v61; // r12
  __m128i v62; // xmm0
  signed __int64 v63; // r13
  __int64 v64; // r14
  _BYTE *v65; // rax
  __m128i si128; // xmm0
  bool v67; // zf
  size_t v68; // rax
  void **v69; // r12
  void **v70; // rbp
  void *v71; // rax
  void **v72; // r13
  __int64 v73; // rax
  size_t v74; // rbp
  _QWORD *v75; // r12
  __int64 *v76; // rax
  __int64 v77; // rdx
  unsigned __int64 v78; // rbp
  volatile signed __int32 *v79; // rax
  __int64 v80; // rdx
  void *v81; // rdi
  void *v82; // r8
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rdi
  __int64 v86; // rsi
  volatile signed __int32 *v87; // r12
  size_t v88; // r12
  void **v89; // rbp
  void **v90; // r12
  void **v91; // rbp
  char *v92; // r12
  char *v93; // rbx
  char *v94; // rdi
  char *v95; // rdi
  void **v96; // r13
  void **v97; // rbp
  char *v98; // rdi
  __int64 v99; // rdi
  __int64 v100; // rsi
  __int64 (__fastcall *v101)(__int64, __int64); // rax
  unsigned int v102; // ebp
  __int64 v103; // rdx
  __int64 v104; // rbx
  unsigned int v105; // ebp
  void **v106; // r12
  void **v107; // rbx
  __int64 v109; // rax
  unsigned __int32 v110; // ecx
  _QWORD *v111; // r13
  unsigned __int64 v112; // rdi
  unsigned int v113; // eax
  __int64 v114; // r13
  size_t *v115; // rbp
  size_t *v116; // r14
  size_t *v117; // rbx
  size_t v118; // rax
  size_t v119; // rsi
  size_t v120; // rdx
  __int64 v121; // r14
  _QWORD *v122; // r14
  __m128i *v123; // rax
  void **v124; // r14
  void **v125; // rbp
  void *v126; // rax
  void **v127; // r13
  __int64 v128; // rax
  void **v129; // rbp
  void **v130; // r14
  __int64 v131; // r14
  __m128i *v132; // rax
  size_t v133; // rcx
  size_t v134; // r12
  unsigned __int64 v135; // rdx
  _BYTE *v136; // rdi
  size_t v137; // rsi
  unsigned __int64 v138; // rax
  size_t v139; // r8
  size_t v140; // r12
  unsigned __int64 v141; // rax
  __m128i *v142; // rax
  void *v143; // r12
  char *v144; // r10
  unsigned __int64 v145; // rdx
  char *v146; // rax
  __m128i v147; // xmm0
  void *v148; // rax
  char v149; // al
  void *v150; // rdx
  _WORD *v151; // rdx
  int v152; // eax
  signed __int32 v153; // eax
  _BYTE *v154; // rdi
  __int64 v155; // rax
  __m128i *v156; // rdx
  __int64 v157; // rbp
  __int64 v158; // rax
  _WORD *v159; // rdi
  size_t v160; // rax
  __m128i v161; // xmm3
  __int64 v162; // rax
  size_t v163; // r14
  __int64 v164; // rax
  __m128i v165; // xmm0
  __int64 v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rbx
  __int64 v169; // rax
  __m128i *v170; // rdi
  size_t v171; // rax
  char *v172; // r12
  char *v173; // rbx
  char *v174; // rdi
  char *v175; // rdi
  void **v176; // r13
  void **v177; // rbp
  char *v178; // rdi
  __int64 v179; // rax
  __m128i v180; // xmm0
  __int64 v181; // rbp
  __m128i *v182; // rax
  __int64 v183; // rdx
  size_t v184; // rax
  __int64 v185; // rax
  _BYTE *v186; // rdx
  size_t v187; // r14
  __int64 v188; // rax
  __int64 v189; // r12
  __m128i *v190; // rax
  __int64 v191; // rax
  _BYTE *v192; // rdx
  __m128i v193; // xmm0
  __m128i v194; // xmm0
  __int64 v195; // [rsp-8h] [rbp-2B0h]
  __m128i src; // [rsp+0h] [rbp-2A8h] BYREF
  unsigned __int64 v197; // [rsp+10h] [rbp-298h]
  __int64 v198; // [rsp+18h] [rbp-290h]
  __int64 v199; // [rsp+20h] [rbp-288h]
  __int64 v200; // [rsp+28h] [rbp-280h]
  __int64 v201; // [rsp+30h] [rbp-278h]
  void ***v202; // [rsp+38h] [rbp-270h]
  unsigned __int64 v203; // [rsp+40h] [rbp-268h]
  unsigned __int64 v204; // [rsp+48h] [rbp-260h]
  __int64 v205; // [rsp+50h] [rbp-258h]
  unsigned __int64 v206; // [rsp+58h] [rbp-250h]
  size_t v207; // [rsp+60h] [rbp-248h]
  void **v208; // [rsp+68h] [rbp-240h]
  void *v209; // [rsp+70h] [rbp-238h]
  void **v210; // [rsp+78h] [rbp-230h]
  char *v211; // [rsp+80h] [rbp-228h]
  void **v212; // [rsp+88h] [rbp-220h]
  void **v213; // [rsp+90h] [rbp-218h]
  __int64 v214; // [rsp+98h] [rbp-210h]
  char v215; // [rsp+A6h] [rbp-202h]
  char v216; // [rsp+A7h] [rbp-201h]
  void **p_dest; // [rsp+A8h] [rbp-200h]
  void *v218[2]; // [rsp+B0h] [rbp-1F8h] BYREF
  void *v219; // [rsp+C0h] [rbp-1E8h]
  void *v220; // [rsp+D0h] [rbp-1D8h] BYREF
  char *v221; // [rsp+D8h] [rbp-1D0h]
  void *v222[2]; // [rsp+F0h] [rbp-1B8h] BYREF
  __int64 i; // [rsp+100h] [rbp-1A8h]
  void *dest; // [rsp+110h] [rbp-198h] BYREF
  __m128 v225; // [rsp+118h] [rbp-190h] BYREF
  void *v226[4]; // [rsp+130h] [rbp-178h] BYREF
  void *v227; // [rsp+150h] [rbp-158h] BYREF
  size_t v228; // [rsp+158h] [rbp-150h]
  __m128i v229; // [rsp+160h] [rbp-148h] BYREF
  void *v230; // [rsp+170h] [rbp-138h] BYREF
  size_t v231; // [rsp+178h] [rbp-130h]
  __m128i v232; // [rsp+180h] [rbp-128h] BYREF
  void *v233; // [rsp+190h] [rbp-118h] BYREF
  size_t n; // [rsp+198h] [rbp-110h]
  unsigned __int64 v235; // [rsp+1A0h] [rbp-108h]
  void *v236[2]; // [rsp+1B0h] [rbp-F8h] BYREF
  __m128i v237; // [rsp+1C0h] [rbp-E8h] BYREF
  void *v238[2]; // [rsp+1D0h] [rbp-D8h] BYREF
  __m128i v239; // [rsp+1E0h] [rbp-C8h] BYREF
  void *v240; // [rsp+1F0h] [rbp-B8h] BYREF
  size_t v241; // [rsp+1F8h] [rbp-B0h]
  __m128i v242; // [rsp+200h] [rbp-A8h] BYREF
  __int16 v243; // [rsp+210h] [rbp-98h]
  size_t v244[2]; // [rsp+220h] [rbp-88h] BYREF
  __m128i v245; // [rsp+230h] [rbp-78h] BYREF
  __int16 v246; // [rsp+240h] [rbp-68h]
  __int64 v247; // [rsp+248h] [rbp-60h]
  __int64 v248; // [rsp+250h] [rbp-58h]
  volatile signed __int32 *v249; // [rsp+258h] [rbp-50h]
  __int64 v250; // [rsp+260h] [rbp-48h]
  __int64 v251; // [rsp+268h] [rbp-40h]

  v4 = a1;
  v205 = a2;
  v197 = a1 + 96;
  v5 = sub_2244B30("/", 1);
  v6 = (unsigned int)sub_2244CB0(a1 + 96, "/", 1, v5);
  v10 = v6;
  v11 = (__int64 *)(*(_QWORD *)(a1 + 96) + 8 * v6);
  if ( *v11 )
  {
    if ( *v11 != -8 )
    {
      src.m128i_i64[1] = (__int64)v244;
      sub_A45C10((__int64 **)v244, v11, 0);
      goto LABEL_4;
    }
    --*(_DWORD *)(a1 + 112);
  }
  v26 = sub_22300B0(10, 8, v6, v7, v8, v9);
  v27 = v197;
  *(_BYTE *)(v26 + 8) = 47;
  *(_BYTE *)(v26 + 9) = 0;
  *(_QWORD *)v26 = 1;
  *v11 = v26;
  ++*(_DWORD *)(v4 + 108);
  v28 = (__int64 *)(*(_QWORD *)(v4 + 96) + 8LL * (unsigned int)sub_22450D0(v27, v10));
  src.m128i_i64[1] = (__int64)v244;
  sub_A45C10((__int64 **)v244, v28, 0);
  v29 = *(size_t **)(v4 + 80);
  v30 = *(size_t **)(v4 + 72);
  src.m128i_i64[0] = (__int64)&v240;
  if ( v30 != v29 )
  {
    v206 = v4;
    do
    {
      while ( 1 )
      {
        v246 = 261;
        v244[0] = *v30;
        v244[1] = v30[1];
        if ( (unsigned __int8)sub_228B020(src.m128i_i64[1], 0) )
        {
          v2 &= 0xFFFFFF00FFFFFFFFLL;
          v31 = v30[2];
          v32 = v30[3];
          v3 &= 0xFFFFFF00FFFFFFFFLL;
          v33 = *(void ****)(v206 + 56);
          v204 &= 0xFFFFFF00FFFFFFFFLL;
          v203 &= 0xFFFFFF00FFFFFFFFLL;
          v202 = v33;
          sub_2230330(src.m128i_i64[0], v31, v32, &byte_22F0C30, 0, 1);
          v34 = *v30;
          v246 = 261;
          v244[0] = v34;
          v244[1] = v30[1];
          sub_2264550((_DWORD)v202, src.m128i_i32[2], 0, src.m128i_i32[0], v203, v204, v3, v2);
          if ( v240 )
            break;
        }
        v30 += 4;
        if ( v29 == v30 )
          goto LABEL_31;
      }
      v30 += 4;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v240 + 8LL))(v240);
    }
    while ( v29 != v30 );
LABEL_31:
    v4 = v206;
  }
LABEL_4:
  v12 = (__int64)(*(_QWORD *)(v4 + 16) - *(_QWORD *)(v4 + 8)) >> 5;
  *(_OWORD *)v218 = 0;
  v219 = nullptr;
  v202 = (void ***)v218;
  sub_F95480((void ***)v218, v12);
  v13 = *(_QWORD **)(v4 + 16);
  v14 = *(_QWORD **)(v4 + 8);
  if ( v14 != v13 )
  {
    v15 = (__m128i *)src.m128i_i64[1];
    src.m128i_i64[0] = (__int64)&v240;
    do
    {
      v17 = *(__int64 **)(v4 + 48);
      sub_2008B90(v15, v17, (_WORD *)*v14, v14[1]);
      if ( (v246 & 1) != 0 )
      {
        v18 = sub_227D6D0(v15, v17);
        v19 = *(_QWORD *)(v18 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v18 + 24) - v19) > 8 )
        {
          *(_BYTE *)(v19 + 8) = 32;
          *(_QWORD *)v19 = 0x676E697070696B53LL;
          *(_QWORD *)(v18 + 32) += 9LL;
        }
        else
        {
          v18 = sub_227BF10(v18, "Skipping ", 9);
        }
        v20 = sub_227BF10(v18, *v14, v14[1]);
        v21 = *(__m128i **)(v20 + 32);
        v22 = v20;
        if ( *(_QWORD *)(v20 + 24) - (_QWORD)v21 > 0x27u )
        {
          si128 = _mm_load_si128((const __m128i *)&xmmword_23AAEE0);
          v21[2].m128i_i64[0] = 0x203A687461702065LL;
          *v21 = si128;
          v21[1] = _mm_load_si128((const __m128i *)&xmmword_23AAEF0);
          *(_QWORD *)(v20 + 32) += 40LL;
        }
        else
        {
          v22 = sub_227BF10(v20, ". Error while getting an absolute path: ", 40);
        }
        if ( (v246 & 1) != 0 )
        {
          v23 = (void *)v244[0];
          v244[0] = 0;
          v238[0] = v23;
        }
        else
        {
          v238[0] = nullptr;
        }
        sub_2221210(src.m128i_i64[0], v238);
        v24 = sub_227BF10(v22, v240, v241);
        v25 = *(_BYTE **)(v24 + 32);
        if ( *(_BYTE **)(v24 + 24) == v25 )
        {
          sub_227BF10(v24, "\n", 1);
        }
        else
        {
          *v25 = 10;
          ++*(_QWORD *)(v24 + 32);
        }
        if ( v240 != &v242 )
          operator delete(v240);
        if ( v238[0] )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v238[0] + 8LL))(v238[0]);
      }
      else
      {
        v16 = (__m128i *)v218[1];
        if ( v218[1] == v219 )
        {
          sub_A82970(v202, (const __m128i *)v218[1], v15);
        }
        else
        {
          *(_QWORD *)v218[1] = (char *)v218[1] + 16;
          if ( (__m128i *)v244[0] == &v15[1] )
          {
            v16[1] = _mm_load_si128(&v245);
          }
          else
          {
            v16->m128i_i64[0] = v244[0];
            v16[1].m128i_i64[0] = v245.m128i_i64[0];
          }
          v16->m128i_i64[1] = v244[1];
          v218[1] = (char *)v218[1] + 32;
          v244[0] = (size_t)&v15[1];
          v244[1] = 0;
          v245.m128i_i8[0] = 0;
        }
      }
      v14 += 4;
      sub_111E030((__int64)v15);
    }
    while ( v13 != v14 );
  }
  v35 = *(__int64 **)(v4 + 48);
  v225.m128_i8[8] = 0;
  p_dest = &dest;
  v36 = (std::_V2 *)src.m128i_i64[1];
  v37 = *v35;
  dest = &v225.m128_u16[4];
  v225.m128_u64[0] = 0;
  (*(void (__fastcall **)(__int64))(v37 + 80))(src.m128i_i64[1]);
  if ( (v246 & 1) == 0 )
  {
    v38 = dest;
    v39 = v244[1];
    if ( v244[0] == src.m128i_i64[1] + 16 )
    {
      if ( v244[1] )
      {
        if ( v244[1] == 1 )
          *(_BYTE *)dest = v245.m128i_i8[0];
        else
          memcpy(dest, (const void *)v244[0], v244[1]);
        v39 = v244[1];
        v38 = dest;
      }
      v225.m128_u64[0] = v39;
      v38[v39] = 0;
      v38 = (_BYTE *)v244[0];
      goto LABEL_39;
    }
    src.m128i_i64[0] = v245.m128i_i64[0];
    if ( dest == &v225.m128_u16[4] )
    {
      v202 = (void ***)v244[1];
      dest = (void *)v244[0];
      v225 = _mm_loadh_ps((const double *)src.m128i_i64);
    }
    else
    {
      v202 = (void ***)v244[1];
      v40 = v225.m128_i64[1];
      dest = (void *)v244[0];
      v225 = _mm_loadh_ps((const double *)src.m128i_i64);
      if ( v38 )
      {
        v244[0] = (size_t)v38;
        v245.m128i_i64[0] = v40;
LABEL_39:
        v244[1] = 0;
        *v38 = 0;
        goto LABEL_40;
      }
    }
    v38 = (_BYTE *)(src.m128i_i64[1] + 16);
    v244[0] = src.m128i_i64[1] + 16;
    goto LABEL_39;
  }
  v181 = sub_227D6D0(src.m128i_i64[1], v35);
  v182 = *(__m128i **)(v181 + 32);
  if ( *(_QWORD *)(v181 + 24) - (_QWORD)v182 > 0x20u )
  {
    v193 = _mm_load_si128((const __m128i *)&xmmword_23AAF00);
    v182[2].m128i_i8[0] = 32;
    *v182 = v193;
    v182[1] = _mm_load_si128((const __m128i *)&xmmword_23AAF10);
    *(_QWORD *)(v181 + 32) += 33LL;
  }
  else
  {
    v36 = (std::_V2 *)v181;
    v181 = sub_227BF10(v181, "Could not get working directory: ", 33);
  }
  if ( (v246 & 1) != 0 )
  {
    v183 = LODWORD(v244[0]);
    v184 = v244[1];
  }
  else
  {
    v184 = std::_V2::system_category(v36);
    v183 = 0;
  }
  (*(void (__fastcall **)(void **, size_t, __int64))(*(_QWORD *)v184 + 32LL))(&v240, v184, v183);
  v185 = sub_227BF10(v181, v240, v241);
  v186 = *(_BYTE **)(v185 + 32);
  if ( *(_BYTE **)(v185 + 24) == v186 )
  {
    sub_227BF10(v185, "\n", 1);
  }
  else
  {
    *v186 = 10;
    ++*(_QWORD *)(v185 + 32);
  }
  if ( v240 != &v242 )
    operator delete(v240);
LABEL_40:
  if ( (v246 & 1) == 0 && v244[0] != src.m128i_i64[1] + 16 )
    operator delete((void *)v244[0]);
  v213 = (void **)v218[1];
  v206 = ((char *)v218[1] - (char *)v218[0]) >> 5;
  if ( v218[0] != v218[1] )
  {
    v210 = (void **)v218[0];
    LODWORD(v202) = 0;
    v216 = 0;
    v215 = 0;
    v212 = &v220;
LABEL_45:
    v41 = *(__int64 **)v4;
    v42 = v212;
    v43 = *v210;
    v207 = (size_t)v210[1];
    v44 = *v41;
    v209 = v43;
    (*(void (__fastcall **)(void **, __int64 *, void *, size_t))(v44 + 16))(v212, v41, v43, v207);
    v204 = (unsigned __int64)v221;
    v45 = (char *)v220;
    if ( v221 == v220 )
    {
      v166 = sub_227D6D0(v42, v41);
      v167 = *(_QWORD *)(v166 + 32);
      v168 = v166;
      if ( (unsigned __int64)(*(_QWORD *)(v166 + 24) - v167) > 8 )
      {
        *(_BYTE *)(v167 + 8) = 32;
        *(_QWORD *)v167 = 0x676E697070696B53LL;
        v170 = (__m128i *)(*(_QWORD *)(v166 + 32) + 9LL);
        *(_QWORD *)(v166 + 32) = v170;
      }
      else
      {
        v169 = sub_227BF10(v166, "Skipping ", 9);
        v170 = *(__m128i **)(v169 + 32);
        v168 = v169;
      }
      v171 = *(_QWORD *)(v168 + 24) - (_QWORD)v170;
      if ( v207 > v171 )
      {
        v179 = sub_227BF10(v168, v209, v207);
        v170 = *(__m128i **)(v179 + 32);
        v168 = v179;
        if ( *(_QWORD *)(v179 + 24) - (_QWORD)v170 <= 0x1Cu )
          goto LABEL_286;
      }
      else
      {
        if ( v207 )
        {
          v187 = v207;
          memcpy(v170, v209, v207);
          v188 = *(_QWORD *)(v168 + 24);
          v170 = (__m128i *)(v187 + *(_QWORD *)(v168 + 32));
          *(_QWORD *)(v168 + 32) = v170;
          v171 = v188 - (_QWORD)v170;
        }
        if ( v171 <= 0x1C )
        {
LABEL_286:
          sub_227BF10(v168, ". Compile command not found.\n", 29);
          goto LABEL_287;
        }
      }
      v180 = _mm_load_si128((const __m128i *)&xmmword_23AAF20);
      qmemcpy(&v170[1], "d not found.\n", 13);
      *v170 = v180;
      *(_QWORD *)(v168 + 32) += 29LL;
LABEL_287:
      v172 = v221;
      v173 = (char *)v220;
      if ( v221 != v220 )
      {
        do
        {
          while ( 1 )
          {
            v174 = *((char **)v173 + 15);
            if ( v174 != v173 + 136 )
              operator delete(v174);
            v175 = *((char **)v173 + 11);
            if ( v175 != v173 + 104 )
              operator delete(v175);
            v176 = *((void ***)v173 + 9);
            v177 = *((void ***)v173 + 8);
            if ( v176 != v177 )
            {
              do
              {
                while ( *v177 != v177 + 2 )
                {
                  operator delete(*v177);
                  v177 += 4;
                  if ( v176 == v177 )
                    goto LABEL_295;
                }
                v177 += 4;
              }
              while ( v176 != v177 );
LABEL_295:
              v177 = *((void ***)v173 + 8);
            }
            if ( v177 )
              operator delete(v177);
            v178 = *((char **)v173 + 4);
            if ( v178 != v173 + 48 )
              operator delete(v178);
            if ( *(char **)v173 == v173 + 16 )
              break;
            operator delete(*(void **)v173);
            v173 += 152;
            if ( v172 == v173 )
              goto LABEL_302;
          }
          v173 += 152;
        }
        while ( v172 != v173 );
LABEL_302:
        v173 = (char *)v220;
      }
      if ( v173 )
        operator delete(v173);
      v216 = 1;
      goto LABEL_136;
    }
    while ( 1 )
    {
      v46 = *(_QWORD *)(v4 + 48);
      v47 = *(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v46 + 72LL);
      v244[0] = (size_t)v45;
      v246 = 260;
      if ( v47(v46, src.m128i_i64[1]) )
      {
        v242.m128i_i64[0] = (__int64)v45;
        v240 = "Cannot chdir into \"";
        v246 = 770;
        v243 = 1027;
        v244[0] = (size_t)&v240;
        v245.m128i_i64[0] = (__int64)"\"!";
        sub_2221AD0(src.m128i_i64[1], 1);
      }
      v48 = *(const void **)v45;
      v49 = *((_QWORD *)v45 + 1);
      v50 = sub_2244B30(*(_QWORD *)v45, v49);
      v51 = (unsigned int)sub_2244CB0(v197, v48, v49, v50);
      v54 = (__int64 *)(*(_QWORD *)(v4 + 96) + 8 * v51);
      if ( *v54 )
      {
        if ( *v54 != -8 )
        {
          v55 = (_QWORD *)src.m128i_i64[1];
          v56 = (__int64 *)(*(_QWORD *)(v4 + 96) + 8 * v51);
          sub_A45C10((__int64 **)src.m128i_i64[1], v54, 0);
          goto LABEL_50;
        }
        --*(_DWORD *)(v4 + 112);
      }
      src.m128i_i32[0] = v51;
      v109 = sub_22300B0(v49 + 9, 8, v51, v51, v52, v53);
      v110 = src.m128i_i32[0];
      v111 = (_QWORD *)v109;
      if ( v49 )
      {
        memcpy((void *)(v109 + 8), v48, v49);
        v110 = src.m128i_i32[0];
      }
      *((_BYTE *)v111 + v49 + 8) = 0;
      v112 = v197;
      *v111 = v49;
      *v54 = (__int64)v111;
      ++*(_DWORD *)(v4 + 108);
      v113 = sub_22450D0(v112, v110);
      v114 = src.m128i_i64[1];
      v56 = (__int64 *)(*(_QWORD *)(v4 + 96) + 8LL * v113);
      v55 = (_QWORD *)src.m128i_i64[1];
      sub_A45C10((__int64 **)src.m128i_i64[1], v56, 0);
      v115 = *(size_t **)(v4 + 80);
      v116 = *(size_t **)(v4 + 72);
      if ( v115 != v116 )
      {
        src.m128i_i64[0] = (__int64)v45;
        v117 = v116;
        do
        {
          while ( 1 )
          {
            v118 = *v117;
            v56 = nullptr;
            v55 = (_QWORD *)v114;
            v246 = 261;
            v244[0] = v118;
            v244[1] = v117[1];
            if ( !(unsigned __int8)sub_228B020(v114, 0) )
            {
              v119 = v117[2];
              v120 = v117[3];
              v121 = *(_QWORD *)(v4 + 56);
              v201 &= 0xFFFFFF00FFFFFFFFLL;
              v200 &= 0xFFFFFF00FFFFFFFFLL;
              v199 &= 0xFFFFFF00FFFFFFFFLL;
              v198 &= 0xFFFFFF00FFFFFFFFLL;
              sub_2230330(&v240, v119, v120, &byte_22F0C30, 0, 1);
              v246 = 261;
              v56 = (__int64 *)v114;
              v244[0] = *v117;
              v244[1] = v117[1];
              sub_2264550(v121, v114, 0, (unsigned int)&v240, v198, v199, v200, v201);
              v55 = v240;
              if ( v240 )
                break;
            }
            v117 += 4;
            if ( v115 == v117 )
              goto LABEL_170;
          }
          v117 += 4;
          (*(void (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v240 + 8LL))(v240, v114, v195);
        }
        while ( v115 != v117 );
LABEL_170:
        v45 = (char *)src.m128i_i64[0];
      }
LABEL_50:
      v57 = *((_QWORD *)v45 + 9);
      v58 = *((_QWORD *)v45 + 8);
      i = 0;
      *(_OWORD *)v222 = 0;
      v59 = v57 - v58;
      if ( (v57 - v58) >> 5 )
      {
        if ( (unsigned __int64)((v57 - v58) >> 5) > 0x7FFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
        v55 = (_QWORD *)(v57 - v58);
        v60 = (__int64 *)operator new(v57 - v58);
        v57 = *((_QWORD *)v45 + 9);
        v58 = *((_QWORD *)v45 + 8);
        v61 = v60;
      }
      else
      {
        v61 = nullptr;
      }
      src.m128i_i64[0] = (__int64)v61;
      v62 = _mm_loadl_epi64(&src);
      i = (__int64)v61 + v59;
      *(__m128i *)v222 = _mm_unpacklo_epi64(v62, v62);
      if ( v57 != v58 )
      {
        *v61 = (__int64)(v61 + 2);
        v56 = *(__int64 **)v58;
        v63 = *(_QWORD *)(v58 + 8);
        if ( v63 + *(_QWORD *)v58 && !v56 )
LABEL_63:
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        v64 = v58 + 32;
        while ( 2 )
        {
          if ( (unsigned __int64)v63 <= 0xF )
          {
            v65 = (_BYTE *)*v61;
            if ( v63 == 1 )
            {
              *v65 = *(_BYTE *)v56;
              v65 = (_BYTE *)*v61;
              goto LABEL_60;
            }
            if ( v63 )
            {
LABEL_72:
              v55 = v65;
              memcpy(v65, v56, v63);
              v65 = (_BYTE *)*v61;
            }
LABEL_60:
            v61[1] = v63;
            v61 += 4;
            v65[v63] = 0;
            if ( v57 == v64 )
              goto LABEL_73;
            v64 += 32;
            *v61 = (__int64)(v61 + 2);
            v56 = *(__int64 **)(v64 - 32);
            v63 = *(_QWORD *)(v64 - 24);
            if ( (__int64 *)((char *)v56 + v63) && !v56 )
              goto LABEL_63;
            continue;
          }
          break;
        }
        if ( v63 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        src.m128i_i64[0] = (__int64)v56;
        v65 = (_BYTE *)operator new(v63 + 1);
        v61[2] = v63;
        v56 = (__int64 *)src.m128i_i64[0];
        *v61 = (__int64)v65;
        goto LABEL_72;
      }
LABEL_73:
      v67 = *(_QWORD *)(v4 + 136) == 0;
      v222[1] = v61;
      if ( !v67 )
      {
        v68 = *((_QWORD *)v45 + 5);
        v56 = (__int64 *)(v4 + 120);
        v55 = (_QWORD *)src.m128i_i64[1];
        v240 = *((void **)v45 + 4);
        v241 = v68;
        (*(void (__fastcall **)(__int64, unsigned __int64, void **, void **))(v4 + 144))(
          src.m128i_i64[1],
          v4 + 120,
          v222,
          &v240);
        v69 = (void **)v222[0];
        v70 = (void **)v222[1];
        v222[0] = (void *)v244[0];
        v71 = (void *)v244[1];
        v72 = v69;
        *(_OWORD *)v244 = 0;
        v222[1] = v71;
        v73 = v245.m128i_i64[0];
        v245.m128i_i64[0] = 0;
        for ( i = v73; v70 != v72; v72 += 4 )
        {
          while ( 1 )
          {
            v55 = *v72;
            if ( *v72 == v72 + 2 )
              break;
            operator delete(v55);
            v72 += 4;
            if ( v70 == v72 )
              goto LABEL_77;
          }
        }
LABEL_77:
        if ( v69 )
        {
          v55 = v69;
          operator delete(v69);
        }
        v74 = v244[1];
        v75 = (_QWORD *)v244[0];
        if ( v244[1] != v244[0] )
        {
          do
          {
            while ( 1 )
            {
              v55 = (_QWORD *)*v75;
              if ( (_QWORD *)*v75 == v75 + 2 )
                break;
              operator delete(v55);
              v75 += 4;
              if ( (_QWORD *)v74 == v75 )
                goto LABEL_82;
            }
            v75 += 4;
          }
          while ( (_QWORD *)v74 != v75 );
LABEL_82:
          v75 = (_QWORD *)v244[0];
        }
        if ( v75 )
        {
          v55 = v75;
          operator delete(v75);
        }
        v61 = (__int64 *)v222[1];
      }
      v76 = (__int64 *)v222[0];
      if ( v222[0] != v61 )
      {
        while ( 1 )
        {
          v77 = *v76;
          if ( (unsigned __int64)v76[1] > 0xC
            && *(_QWORD *)v77 == 0x6372756F7365722DLL
            && *(_DWORD *)(v77 + 8) == 1768172901
            && *(_BYTE *)(v77 + 12) == 114 )
          {
            break;
          }
          v76 += 4;
          if ( v61 == v76 )
            goto LABEL_171;
        }
LABEL_93:
        v78 = v206;
        if ( v206 <= 1 )
          goto LABEL_94;
        goto LABEL_191;
      }
LABEL_171:
      v122 = (_QWORD *)src.m128i_i64[1];
      sub_1300E20((_QWORD *)src.m128i_i64[1]);
      v123 = (__m128i *)sub_99BDC0(v122, 0, 0, "-resource-dir=", 0xEu);
      v240 = &v242;
      src.m128i_i64[0] = (__int64)&v240;
      if ( (__m128i *)v123->m128i_i64[0] == &v123[1] )
      {
        v242 = _mm_loadu_si128(v123 + 1);
      }
      else
      {
        v240 = (void *)v123->m128i_i64[0];
        v242.m128i_i64[0] = v123[1].m128i_i64[0];
      }
      v241 = v123->m128i_u64[1];
      v123->m128i_i64[0] = (__int64)v123[1].m128i_i64;
      v123->m128i_i64[1] = 0;
      v123[1].m128i_i8[0] = 0;
      sub_1FF1160((__m128i **)v238, (const char *)v240, 1);
      n = 0;
      v233 = (void *)&byte_22F0C30;
      if ( !v239.m128i_i64[0] )
        std::__throw_bad_function_call();
      v56 = (__int64 *)v238;
      ((void (__fastcall *)(void **, void **, void **, void **))v239.m128i_i64[1])(v236, v238, v222, &v233);
      v124 = (void **)v222[0];
      v125 = (void **)v222[1];
      v222[0] = v236[0];
      v126 = v236[1];
      v127 = v124;
      *(_OWORD *)v236 = 0;
      v222[1] = v126;
      v128 = v237.m128i_i64[0];
      v237.m128i_i64[0] = 0;
      for ( i = v128; v125 != v127; v127 += 4 )
      {
        while ( *v127 != v127 + 2 )
        {
          operator delete(*v127);
          v127 += 4;
          if ( v127 == v125 )
            goto LABEL_177;
        }
      }
LABEL_177:
      if ( v124 )
        operator delete(v124);
      v129 = (void **)v236[1];
      v130 = (void **)v236[0];
      if ( v236[1] != v236[0] )
      {
        do
        {
          while ( *v130 != v130 + 2 )
          {
            operator delete(*v130);
            v130 += 4;
            if ( v130 == v129 )
              goto LABEL_182;
          }
          v130 += 4;
        }
        while ( v129 != v130 );
LABEL_182:
        v130 = (void **)v236[0];
      }
      if ( v130 )
        operator delete(v130);
      if ( v239.m128i_i64[0] )
      {
        v56 = (__int64 *)v238;
        ((void (__fastcall *)(void **, void **, __int64))v239.m128i_i64[0])(v238, v238, 3);
      }
      if ( v240 != (void *)(src.m128i_i64[0] + 16) )
        operator delete(v240);
      v55 = (_QWORD *)v244[0];
      if ( v244[0] == src.m128i_i64[1] + 16 )
        goto LABEL_93;
      operator delete((void *)v244[0]);
      v78 = v206;
      if ( v206 <= 1 )
        goto LABEL_94;
LABEL_191:
      v131 = sub_227D6D0(v55, v56);
      v203 = (unsigned __int64)&v233;
      v240 = v209;
      v243 = 261;
      v241 = v207;
      sub_2007FD0(&v233, (__int64)&vsnprintf, 0x20u, "%lu", v78);
      LODWORD(v202) = (_DWORD)v202 + 1;
      v208 = v226;
      sub_2007FD0(v226, (__int64)&vsnprintf, 0x10u, "%u", (_DWORD)v202);
      v132 = (__m128i *)sub_99BDC0(v226, 0, 0, "[", 1u);
      v227 = &v229;
      if ( (__m128i *)v132->m128i_i64[0] == &v132[1] )
      {
        v229 = _mm_loadu_si128(v132 + 1);
      }
      else
      {
        v227 = (void *)v132->m128i_i64[0];
        v229.m128i_i64[0] = v132[1].m128i_i64[0];
      }
      v133 = v132->m128i_u64[1];
      v132[1].m128i_i8[0] = 0;
      v228 = v133;
      v132->m128i_i64[0] = (__int64)v132[1].m128i_i64;
      v132->m128i_i64[1] = 0;
      v134 = v228;
      if ( v228 == 0x7FFFFFFFFFFFFFFFLL )
LABEL_346:
        std::__throw_length_error("basic_string::append");
      if ( v227 == &v229 )
        v135 = 15;
      else
        v135 = v229.m128i_i64[0];
      if ( v228 + 1 > v135 )
        sub_998B30((__int64)&v227, v228, 0, "/", 1u);
      else
        *((_BYTE *)v227 + v228) = 47;
      v228 = v134 + 1;
      *((_BYTE *)v227 + v134 + 1) = 0;
      v136 = v227;
      src.m128i_i64[0] = (__int64)&v230;
      v230 = &v232;
      if ( v227 == &v229 )
      {
        v137 = v228;
        v139 = n;
        v136 = &v232;
        v138 = 15;
        v161 = _mm_load_si128(&v229);
        v228 = 0;
        v231 = v137;
        v140 = n + v137;
        v232 = v161;
        v229.m128i_i8[0] = 0;
      }
      else
      {
        v137 = v228;
        v138 = v229.m128i_i64[0];
        v67 = v227 == &v232;
        v230 = v227;
        v139 = n;
        v227 = &v229;
        v231 = v228;
        v228 = 0;
        v140 = n + v231;
        v229.m128i_i8[0] = 0;
        v232.m128i_i64[0] = v138;
        if ( v67 )
          v138 = 15;
      }
      if ( v140 <= v138 )
      {
        if ( v139 )
        {
          v154 = &v136[v137];
          if ( v139 == 1 )
            *v154 = *(_BYTE *)v233;
          else
            memcpy(v154, v233, v139);
          v136 = v230;
        }
      }
      else
      {
        if ( v233 == (void *)(v203 + 16) )
          v141 = 15;
        else
          v141 = v235;
        if ( v140 <= v141 )
        {
          v142 = (__m128i *)sub_99BDC0((_QWORD *)v203, 0, 0, v136, v137);
          goto LABEL_207;
        }
        sub_998B30(src.m128i_i64[0], v137, 0, v233, v139);
        v136 = v230;
      }
      v231 = v140;
      v142 = (__m128i *)src.m128i_i64[0];
      v136[v140] = 0;
LABEL_207:
      v236[0] = &v237;
      if ( (__m128i *)v142->m128i_i64[0] == &v142[1] )
      {
        v237 = _mm_loadu_si128(v142 + 1);
      }
      else
      {
        v236[0] = (void *)v142->m128i_i64[0];
        v237.m128i_i64[0] = v142[1].m128i_i64[0];
      }
      v236[1] = (void *)v142->m128i_i64[1];
      v142->m128i_i64[0] = (__int64)v142[1].m128i_i64;
      v142->m128i_i64[1] = 0;
      v142[1].m128i_i8[0] = 0;
      v143 = v236[1];
      if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v236[1] <= 0x11 )
        goto LABEL_346;
      v144 = (char *)v236[1] + 18;
      if ( v236[0] == &v237 )
        v145 = 15;
      else
        v145 = v237.m128i_i64[0];
      if ( (unsigned __int64)v144 > v145 )
      {
        v211 = (char *)v236[1] + 18;
        sub_998B30((__int64)v236, (size_t)v236[1], 0, "] Processing file ", 0x12u);
        v144 = v211;
      }
      else
      {
        v146 = (char *)v236[1] + (unsigned __int64)v236[0];
        v147 = _mm_load_si128((const __m128i *)&xmmword_23AAE70);
        *((_WORD *)v146 + 8) = 8293;
        *(__m128i *)v146 = v147;
      }
      v236[1] = v144;
      *((_BYTE *)v236[0] + (unsigned __int64)v143 + 18) = 0;
      v238[0] = &v239;
      if ( v236[0] == &v237 )
      {
        v239 = _mm_load_si128(&v237);
      }
      else
      {
        v238[0] = v236[0];
        v239.m128i_i64[0] = v237.m128i_i64[0];
      }
      v148 = v236[1];
      v237.m128i_i8[0] = 0;
      v236[1] = nullptr;
      v238[1] = v148;
      v236[0] = &v237;
      v149 = v243;
      if ( (_BYTE)v243 )
      {
        if ( (_BYTE)v243 == 1 )
        {
          v244[0] = (size_t)v238;
          v246 = 260;
        }
        else
        {
          if ( HIBYTE(v243) == 1 )
          {
            v150 = v240;
            v214 = v241;
          }
          else
          {
            v150 = &v240;
            v149 = 2;
          }
          v244[0] = (size_t)v238;
          v245.m128i_i64[0] = (__int64)v150;
          v245.m128i_i64[1] = v214;
          LOBYTE(v246) = 4;
          HIBYTE(v246) = v149;
        }
      }
      else
      {
        v246 = 256;
      }
      sub_2254180(src.m128i_i64[1], v131);
      v151 = *(_WORD **)(v131 + 32);
      if ( *(_QWORD *)(v131 + 24) - (_QWORD)v151 > 1u )
      {
        *v151 = 2606;
        *(_QWORD *)(v131 + 32) += 2LL;
      }
      else
      {
        sub_227BF10(v131, ".\n", 2);
      }
      if ( v238[0] != &v239 )
        operator delete(v238[0]);
      if ( v236[0] != &v237 )
        operator delete(v236[0]);
      if ( v230 != (void *)(src.m128i_i64[0] + 16) )
        operator delete(v230);
      if ( v227 != &v229 )
        operator delete(v227);
      if ( v226[0] != v208 + 2 )
        operator delete(v226[0]);
      if ( v233 != (void *)(v203 + 16) )
        operator delete(v233);
LABEL_94:
      v79 = *(volatile signed __int32 **)(v4 + 40);
      v80 = *(_QWORD *)(v4 + 32);
      if ( v79 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd(v79 + 2, 1u);
        else
          ++*((_DWORD *)v79 + 2);
      }
      v81 = v222[1];
      v249 = v79;
      v82 = v222[0];
      v83 = *(_QWORD *)(v4 + 64);
      *(_OWORD *)v222 = 0;
      v244[1] = (size_t)v81;
      v84 = *(_QWORD *)(v4 + 152);
      v245.m128i_i64[0] = i;
      v85 = src.m128i_i64[1];
      v86 = v205;
      v244[0] = (size_t)v82;
      i = 0;
      v245.m128i_i64[1] = v205;
      LOBYTE(v246) = 0;
      v247 = v83;
      v248 = v80;
      v251 = 0;
      v250 = v84;
      if ( !(unsigned __int8)sub_2009F40((void **)src.m128i_i64[1]) )
      {
        v215 = *(_BYTE *)(v4 + 160);
        if ( v215 )
        {
          v155 = sub_227D6D0(v85, v86);
          v156 = *(__m128i **)(v155 + 32);
          v157 = v155;
          if ( *(_QWORD *)(v155 + 24) - (_QWORD)v156 > 0x16u )
          {
            v165 = _mm_load_si128((const __m128i *)&xmmword_23AAF30);
            v156[1].m128i_i32[0] = 1769173861;
            v156[1].m128i_i16[2] = 26478;
            *v156 = v165;
            v156[1].m128i_i8[6] = 32;
            v159 = (_WORD *)(*(_QWORD *)(v155 + 32) + 23LL);
            *(_QWORD *)(v155 + 32) = v159;
          }
          else
          {
            v158 = sub_227BF10(v155, "Error while processing ", 23);
            v159 = *(_WORD **)(v158 + 32);
            v157 = v158;
          }
          v160 = *(_QWORD *)(v157 + 24) - (_QWORD)v159;
          if ( v207 > v160 )
          {
            v162 = sub_227BF10(v157, v209, v207);
            v159 = *(_WORD **)(v162 + 32);
            v157 = v162;
            if ( *(_QWORD *)(v162 + 24) - (_QWORD)v159 > 1u )
              goto LABEL_275;
          }
          else
          {
            if ( v207 )
            {
              v163 = v207;
              memcpy(v159, v209, v207);
              v164 = *(_QWORD *)(v157 + 24);
              v159 = (_WORD *)(v163 + *(_QWORD *)(v157 + 32));
              *(_QWORD *)(v157 + 32) = v159;
              v160 = v164 - (_QWORD)v159;
            }
            if ( v160 > 1 )
            {
LABEL_275:
              *v159 = 2606;
              *(_QWORD *)(v157 + 32) += 2LL;
              goto LABEL_100;
            }
          }
          sub_227BF10(v157, ".\n", 2);
        }
        else
        {
          v215 = 1;
        }
      }
LABEL_100:
      if ( (_BYTE)v246 && v245.m128i_i64[1] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v245.m128i_i64[1] + 8LL))(v245.m128i_i64[1]);
      v87 = v249;
      if ( !v249 )
        goto LABEL_106;
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v249 + 2, 0xFFFFFFFF) == 1 )
          goto LABEL_245;
      }
      else
      {
        v152 = *((_DWORD *)v249 + 2);
        *((_DWORD *)v249 + 2) = v152 - 1;
        if ( v152 == 1 )
        {
LABEL_245:
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 16LL))(v87);
          if ( &_pthread_key_create )
          {
            v153 = _InterlockedExchangeAdd(v87 + 3, 0xFFFFFFFF);
          }
          else
          {
            v153 = *((_DWORD *)v87 + 3);
            *((_DWORD *)v87 + 3) = v153 - 1;
          }
          if ( v153 == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 24LL))(v87);
        }
      }
LABEL_106:
      v88 = v244[1];
      v89 = (void **)v244[0];
      if ( v244[1] != v244[0] )
      {
        do
        {
          while ( *v89 != v89 + 2 )
          {
            operator delete(*v89);
            v89 += 4;
            if ( (void **)v88 == v89 )
              goto LABEL_109;
          }
          v89 += 4;
        }
        while ( (void **)v88 != v89 );
LABEL_109:
        v89 = (void **)v244[0];
      }
      if ( v89 )
        operator delete(v89);
      v90 = (void **)v222[1];
      v91 = (void **)v222[0];
      if ( v222[1] != v222[0] )
      {
        do
        {
          while ( *v91 != v91 + 2 )
          {
            operator delete(*v91);
            v91 += 4;
            if ( v90 == v91 )
              goto LABEL_115;
          }
          v91 += 4;
        }
        while ( v90 != v91 );
LABEL_115:
        v91 = (void **)v222[0];
      }
      if ( v91 )
      {
        v45 += 152;
        operator delete(v91);
        if ( (char *)v204 == v45 )
          goto LABEL_118;
      }
      else
      {
        v45 += 152;
        if ( (char *)v204 == v45 )
        {
LABEL_118:
          v92 = v221;
          v93 = (char *)v220;
          if ( v221 != v220 )
          {
            do
            {
              while ( 1 )
              {
                v94 = *((char **)v93 + 15);
                if ( v94 != v93 + 136 )
                  operator delete(v94);
                v95 = *((char **)v93 + 11);
                if ( v95 != v93 + 104 )
                  operator delete(v95);
                v96 = *((void ***)v93 + 9);
                v97 = *((void ***)v93 + 8);
                if ( v96 != v97 )
                {
                  do
                  {
                    while ( *v97 != v97 + 2 )
                    {
                      operator delete(*v97);
                      v97 += 4;
                      if ( v97 == v96 )
                        goto LABEL_126;
                    }
                    v97 += 4;
                  }
                  while ( v96 != v97 );
LABEL_126:
                  v97 = *((void ***)v93 + 8);
                }
                if ( v97 )
                  operator delete(v97);
                v98 = *((char **)v93 + 4);
                if ( v98 != v93 + 48 )
                  operator delete(v98);
                if ( *(char **)v93 == v93 + 16 )
                  break;
                operator delete(*(void **)v93);
                v93 += 152;
                if ( v93 == v92 )
                  goto LABEL_133;
              }
              v93 += 152;
            }
            while ( v92 != v93 );
LABEL_133:
            v93 = (char *)v220;
          }
          if ( v93 )
            operator delete(v93);
LABEL_136:
          v210 += 4;
          if ( v213 == v210 )
          {
            if ( v225.m128_u64[0] )
              goto LABEL_138;
            goto LABEL_139;
          }
          goto LABEL_45;
        }
      }
    }
  }
  if ( !v225.m128_u64[0] )
    goto LABEL_141;
  v215 = 0;
  v216 = 0;
LABEL_138:
  v99 = *(_QWORD *)(v4 + 48);
  v100 = src.m128i_i64[1];
  v101 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v99 + 72LL);
  v246 = 260;
  v244[0] = (size_t)p_dest;
  v102 = v101(v99, src.m128i_i64[1]);
  v104 = v103;
  if ( v102 )
  {
    v189 = sub_227D6D0(v99, v100);
    v190 = *(__m128i **)(v189 + 32);
    if ( *(_QWORD *)(v189 + 24) - (_QWORD)v190 > 0x29u )
    {
      v194 = _mm_load_si128((const __m128i *)&xmmword_23AAF40);
      qmemcpy(&v190[2], "king dir: ", 10);
      *v190 = v194;
      v190[1] = _mm_load_si128((const __m128i *)&xmmword_23AAF50);
      *(_QWORD *)(v189 + 32) += 42LL;
    }
    else
    {
      v189 = sub_227BF10(v189, "Error when trying to restore working dir: ", 42);
    }
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v104 + 32LL))(src.m128i_i64[1], v104, v102);
    v191 = sub_227BF10(v189, v244[0], v244[1]);
    v192 = *(_BYTE **)(v191 + 32);
    if ( *(_BYTE **)(v191 + 24) == v192 )
    {
      sub_227BF10(v191, "\n", 1);
    }
    else
    {
      *v192 = 10;
      ++*(_QWORD *)(v191 + 32);
    }
    if ( v244[0] != src.m128i_i64[1] + 16 )
      operator delete((void *)v244[0]);
  }
LABEL_139:
  v105 = 1;
  if ( !v215 )
  {
    v105 = 2;
    if ( !v216 )
LABEL_141:
      v105 = 0;
  }
  if ( dest != p_dest + 2 )
    operator delete(dest);
  v106 = (void **)v218[1];
  v107 = (void **)v218[0];
  if ( v218[1] != v218[0] )
  {
    do
    {
      while ( *v107 != v107 + 2 )
      {
        operator delete(*v107);
        v107 += 4;
        if ( v107 == v106 )
          goto LABEL_147;
      }
      v107 += 4;
    }
    while ( v106 != v107 );
LABEL_147:
    v107 = (void **)v218[0];
  }
  if ( v107 )
    operator delete(v107);
  return v105;
}
