__int64 __fastcall sub_1FFD0E0(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __m128i *v6; // r8
  __m128i *v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rbp
  __m128i *v11; // r11
  __m128i *v12; // rcx
  __int64 v13; // r10
  __m128i *v14; // rdx
  __int64 v15; // r9
  __m128 v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __m128i v20; // xmm2
  unsigned int v21; // eax
  __int64 *v22; // rcx
  __m128i v23; // xmm2
  char *v24; // rdx
  __int64 v25; // rax
  __int64 *v26; // r12
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r13
  const char **v30; // rsi
  const char *v31; // r12
  const char **v32; // r13
  __int64 v33; // rbp
  size_t v34; // rsi
  char *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r14
  void *v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  char *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // r14
  __int64 v45; // r13
  _QWORD *v46; // rdi
  _QWORD *v47; // r12
  __m128i v48; // xmm0
  __int64 v49; // rdx
  __int64 v50; // rdx
  void **v51; // r14
  void **v52; // rdi
  void **v53; // r12
  __int64 *v54; // rax
  _QWORD *v55; // rcx
  _QWORD *v56; // rdi
  __int64 v57; // r14
  __int64 v58; // r12
  __int64 v59; // r12
  int v60; // eax
  void *v61; // r12
  unsigned int v62; // eax
  __int64 v63; // rax
  __int64 v64; // r13
  void **v65; // r14
  void **v66; // r13
  void **v67; // rdi
  void **v68; // r12
  void **v69; // r12
  __int64 v70; // rax
  __m128i *v71; // rax
  __int64 v72; // r12
  void *v73; // rax
  __int64 v74; // rax
  __m128i *v75; // rax
  __int64 v76; // rax
  __int64 v77; // r12
  __m128i *v78; // rdi
  __int64 v79; // rdx
  _BYTE *v80; // r12
  __m128i *v81; // rdi
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rdi
  unsigned int v86; // eax
  unsigned int v87; // r14d
  __int64 v88; // r12
  const char **v89; // rax
  size_t v90; // rsi
  const char *v91; // r12
  int v92; // eax
  __m128i *v93; // rsi
  const char *v94; // rax
  __int64 v95; // rdx
  char *v96; // rsi
  size_t v97; // rax
  __m128i *v98; // rsi
  __int64 v99; // rax
  int v100; // edi
  __int64 v101; // r14
  char v102; // dl
  int v103; // eax
  __m128i *v104; // rsi
  __m128i *v105; // rsi
  void **v106; // r12
  void **v107; // rbp
  void **v108; // r12
  void **v109; // rbp
  unsigned __int8 v111; // al
  __int64 v112; // rax
  __int64 v113; // r13
  char *v114; // r14
  char *v115; // r12
  __int64 v116; // r13
  const __m128i *v117; // rbx
  unsigned __int64 v118; // rdx
  const __m128i *v119; // rax
  __int64 *v120; // rdi
  _BYTE *v121; // rax
  __int64 v122; // r9
  __m128i *v123; // r8
  __int64 v124; // rcx
  __int64 v125; // rdx
  __int64 v126; // rax
  int v127; // r12d
  char *v128; // rdi
  __int64 v129; // r13
  char *v130; // rcx
  __int64 v131; // rdx
  __int64 v132; // rdx
  __int64 v133; // rax
  __int32 v134; // r12d
  char *v135; // rdi
  __int64 v136; // r13
  __int64 v137; // rcx
  __int64 v138; // rdx
  __m128i v139; // xmm6
  __int64 v140; // rdx
  __int64 v141; // rdx
  char *v142; // rsi
  __int64 v143; // rcx
  void *v144; // rax
  char *v145; // rax
  char *v146; // rdx
  __int64 v147; // r14
  __m128i *v148; // rsi
  void *v149; // r12
  const __m128i *v150; // rsi
  unsigned __int64 v151; // rax
  bool v152; // cf
  unsigned __int64 v153; // rax
  __m128i *v154; // rdx
  const __m128i *v155; // rax
  __m128i *v156; // rdi
  const __m128i *v157; // rcx
  void *v158; // rdi
  __m128i *v159; // r9
  char *v160; // r13
  __int64 *v161; // rbx
  _QWORD *v162; // rax
  __int64 *v163; // rdi
  const __m128i *v164; // rbx
  signed __int64 v165; // r12
  void **v166; // r14
  unsigned __int64 v167; // r12
  const __m128i *v168; // rax
  __m128i *v169; // rdx
  __m128i *v170; // rdi
  const __m128i *v171; // rcx
  unsigned __int64 v172; // rsi
  void **v173; // r13
  __m128 v174; // xmm0
  __int64 v175; // r14
  char *v176; // rax
  unsigned __int64 v177; // r13
  __m128i *v178; // rax
  __m128i v179; // [rsp+10h] [rbp-548h] BYREF
  void *v180; // [rsp+20h] [rbp-538h]
  _BYTE *v181; // [rsp+28h] [rbp-530h]
  void **v182; // [rsp+30h] [rbp-528h]
  __int64 v183; // [rsp+38h] [rbp-520h]
  __m128i v184; // [rsp+40h] [rbp-518h] BYREF
  unsigned __int64 v185; // [rsp+50h] [rbp-508h]
  __int64 v186; // [rsp+58h] [rbp-500h]
  __m128i *v187; // [rsp+60h] [rbp-4F8h] BYREF
  __m128i *v188; // [rsp+68h] [rbp-4F0h]
  __m128i *v189; // [rsp+70h] [rbp-4E8h]
  const __m128i *v190; // [rsp+78h] [rbp-4E0h]
  void *v191; // [rsp+80h] [rbp-4D8h] BYREF
  __int64 v192; // [rsp+88h] [rbp-4D0h]
  _QWORD v193[16]; // [rsp+90h] [rbp-4C8h] BYREF
  void *v194; // [rsp+110h] [rbp-448h]
  __int64 v195; // [rsp+118h] [rbp-440h]
  __m128i v196; // [rsp+120h] [rbp-438h] BYREF
  void *v197; // [rsp+130h] [rbp-428h]
  __int64 v198; // [rsp+138h] [rbp-420h]
  __m128i v199; // [rsp+140h] [rbp-418h] BYREF
  void *v200[2]; // [rsp+150h] [rbp-408h]
  __int64 v201; // [rsp+160h] [rbp-3F8h]
  void *v202; // [rsp+168h] [rbp-3F0h]
  __int64 v203; // [rsp+170h] [rbp-3E8h]
  __m128i v204; // [rsp+178h] [rbp-3E0h] BYREF
  void *v205; // [rsp+188h] [rbp-3D0h]
  __int64 v206; // [rsp+190h] [rbp-3C8h]
  __m128i v207; // [rsp+198h] [rbp-3C0h] BYREF
  void *v208; // [rsp+1B0h] [rbp-3A8h]
  __int64 v209; // [rsp+1B8h] [rbp-3A0h]
  __m128i v210; // [rsp+1C0h] [rbp-398h] BYREF
  void *v211; // [rsp+1D0h] [rbp-388h]
  __int64 v212; // [rsp+1D8h] [rbp-380h]
  __m128i v213; // [rsp+1E0h] [rbp-378h] BYREF
  void *v214[2]; // [rsp+1F0h] [rbp-368h] BYREF
  __m128i *v215; // [rsp+200h] [rbp-358h]
  void *v216; // [rsp+208h] [rbp-350h]
  __int64 v217; // [rsp+210h] [rbp-348h]
  __m128i v218; // [rsp+218h] [rbp-340h] BYREF
  void *v219; // [rsp+228h] [rbp-330h]
  __int64 v220; // [rsp+230h] [rbp-328h]
  __m128i v221; // [rsp+238h] [rbp-320h] BYREF
  unsigned int v222; // [rsp+248h] [rbp-310h]
  char v223; // [rsp+24Ch] [rbp-30Ch]
  int v224; // [rsp+250h] [rbp-308h]
  char v225; // [rsp+254h] [rbp-304h]
  void *v226; // [rsp+260h] [rbp-2F8h] BYREF
  void *ptr; // [rsp+268h] [rbp-2F0h]
  __m128i v228; // [rsp+270h] [rbp-2E8h] BYREF
  __int64 v229; // [rsp+2F8h] [rbp-260h]
  __int64 v230; // [rsp+300h] [rbp-258h]
  unsigned int v231; // [rsp+308h] [rbp-250h]
  void *dest; // [rsp+310h] [rbp-248h]
  __int64 v233; // [rsp+318h] [rbp-240h]
  __int64 v234; // [rsp+320h] [rbp-238h] BYREF
  void *v235[2]; // [rsp+3A0h] [rbp-1B8h] BYREF
  __int64 v236; // [rsp+3B0h] [rbp-1A8h]
  int v237; // [rsp+3B8h] [rbp-1A0h]
  __m128i v238; // [rsp+3C0h] [rbp-198h] BYREF
  __m128i v239; // [rsp+3D0h] [rbp-188h] BYREF
  __int16 v240; // [rsp+3E0h] [rbp-178h]
  __int64 v241; // [rsp+458h] [rbp-100h]
  __int64 v242; // [rsp+460h] [rbp-F8h]
  unsigned int v243; // [rsp+468h] [rbp-F0h]
  void *src; // [rsp+470h] [rbp-E8h]
  __int64 v245; // [rsp+478h] [rbp-E0h]
  _BYTE v246[128]; // [rsp+480h] [rbp-D8h] BYREF
  void *v247[2]; // [rsp+500h] [rbp-58h] BYREF
  __int64 v248; // [rsp+510h] [rbp-48h]
  int v249; // [rsp+518h] [rbp-40h]

  v6 = *(__m128i **)a2;
  v181 = a3;
  v183 = a4;
  if ( v6 == (__m128i *)(a2 + 16) )
  {
    v6 = &v196;
    v196 = _mm_loadu_si128((const __m128i *)(a2 + 16));
  }
  else
  {
    v196.m128i_i64[0] = *(_QWORD *)(a2 + 16);
  }
  v7 = *(__m128i **)(a2 + 32);
  *(_QWORD *)a2 = a2 + 16;
  v8 = *(_QWORD *)(a2 + 8);
  *(_BYTE *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 8) = 0;
  if ( v7 == (__m128i *)(a2 + 48) )
  {
    v7 = &v199;
    v199 = _mm_loadu_si128((const __m128i *)(a2 + 48));
  }
  else
  {
    v199.m128i_i64[0] = *(_QWORD *)(a2 + 48);
  }
  v9 = *(_QWORD *)(a2 + 40);
  v10 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 32) = a2 + 48;
  v11 = *(__m128i **)(a2 + 80);
  *(_BYTE *)(a2 + 48) = 0;
  *(_QWORD *)(a2 + 40) = 0;
  v12 = *(__m128i **)(a2 + 88);
  *(_OWORD *)(a2 + 64) = 0;
  *(_QWORD *)(a2 + 80) = 0;
  if ( v12 == (__m128i *)(a2 + 104) )
  {
    v12 = &v204;
    v204 = _mm_loadu_si128((const __m128i *)(a2 + 104));
  }
  else
  {
    v204.m128i_i64[0] = *(_QWORD *)(a2 + 104);
  }
  *(_QWORD *)(a2 + 88) = a2 + 104;
  v13 = *(_QWORD *)(a2 + 96);
  *(_BYTE *)(a2 + 104) = 0;
  v14 = *(__m128i **)(a2 + 120);
  *(_QWORD *)(a2 + 96) = 0;
  if ( v14 == (__m128i *)(a2 + 136) )
  {
    v14 = &v207;
    v207 = _mm_loadu_si128((const __m128i *)(a2 + 136));
  }
  else
  {
    v207.m128i_i64[0] = *(_QWORD *)(a2 + 136);
  }
  v15 = *(_QWORD *)(a2 + 128);
  *(_QWORD *)(a2 + 120) = a2 + 136;
  *(_QWORD *)(a2 + 128) = 0;
  *(_BYTE *)(a2 + 136) = 0;
  v208 = &v210;
  if ( v6 == &v196 )
  {
    v210 = _mm_load_si128(&v196);
  }
  else
  {
    v208 = v6;
    v210.m128i_i64[0] = v196.m128i_i64[0];
  }
  v209 = v8;
  v195 = 0;
  v196.m128i_i8[0] = 0;
  v194 = &v196;
  v211 = &v213;
  if ( v7 == &v199 )
  {
    v7 = &v213;
    v213 = _mm_load_si128(&v199);
  }
  else
  {
    v211 = v7;
    v213.m128i_i64[0] = v199.m128i_i64[0];
  }
  v179.m128i_i64[0] = v10;
  v212 = v9;
  v199.m128i_i8[0] = 0;
  v16 = _mm_loadh_ps((const double *)v179.m128i_i64);
  v197 = &v199;
  *(__m128 *)v214 = v16;
  v216 = &v218;
  v198 = 0;
  *(_OWORD *)v200 = 0;
  v215 = v11;
  v201 = 0;
  if ( v12 == &v204 )
  {
    v218 = _mm_loadu_si128(&v204);
  }
  else
  {
    v216 = v12;
    v218.m128i_i64[0] = v204.m128i_i64[0];
  }
  v217 = v13;
  v202 = &v204;
  v219 = &v221;
  v203 = 0;
  v204.m128i_i8[0] = 0;
  if ( v14 == &v207 )
  {
    v221 = _mm_loadu_si128(&v207);
  }
  else
  {
    v219 = v14;
    v221.m128i_i64[0] = v207.m128i_i64[0];
  }
  v220 = v15;
  v205 = &v207;
  v206 = 0;
  v207.m128i_i8[0] = 0;
  v17 = sub_228AB90(v7, v9, 0);
  v19 = 0;
  if ( v18 )
  {
    --v18;
    v19 = 1;
  }
  v179.m128i_i64[0] = (__int64)v235;
  v20 = _mm_loadl_epi64(&v179);
  v179.m128i_i64[1] = (__int64)&v226;
  v184 = _mm_unpacklo_epi64(v20, v20);
  v21 = sub_12CCD10((unsigned __int8 *)(v17 + v19), v18);
  v22 = (__int64 *)v214[0];
  v222 = v21;
  v23 = _mm_load_si128(&v184);
  ptr = &v228.m128i_u64[1];
  v226 = off_2BE9900;
  dest = &v234;
  v182 = &v191;
  v24 = (char *)v193;
  v223 = 1;
  v224 = 42;
  v180 = v214[0];
  v179.m128i_i64[0] = (__int64)v214[1];
  *(_OWORD *)v214 = 0;
  v215 = nullptr;
  v228.m128i_i64[0] = 0x1000000000LL;
  v229 = 0;
  v230 = 0;
  v231 = 0;
  v233 = 0x1000000000LL;
  *(__m128i *)v235 = v23;
  v236 = 0;
  v237 = 0;
  v191 = v193;
  v192 = 0x1000000000LL;
  if ( v180 == (void *)v179.m128i_i64[0] )
  {
    v30 = (const char **)v193;
    LOBYTE(v28) = 0;
  }
  else
  {
    v25 = *v22;
    v26 = v22 + 4;
    v27 = 1;
    LODWORD(v192) = 1;
    v193[0] = v25;
    v28 = 1;
    if ( (__int64 *)v179.m128i_i64[0] == v26 )
    {
      v30 = (const char **)v193;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v29 = *v26;
          if ( v27 + 1 > (unsigned __int64)HIDWORD(v192) )
            break;
          v26 += 4;
          *((_QWORD *)v191 + v28) = v29;
          v28 = (unsigned int)(v192 + 1);
          LODWORD(v192) = v28;
          v27 = (unsigned int)v28;
          if ( (__int64 *)v179.m128i_i64[0] == v26 )
            goto LABEL_23;
        }
        v26 += 4;
        sub_2237220(v182, v193, v27 + 1, 8);
        *((_QWORD *)v191 + (unsigned int)v192) = v29;
        v27 = (unsigned int)(v192 + 1);
        v28 = v27;
        LODWORD(v192) = v192 + 1;
      }
      while ( (__int64 *)v179.m128i_i64[0] != v26 );
LABEL_23:
      v30 = (const char **)v191;
      if ( !(_DWORD)v28 )
      {
        v24 = (char *)v191 + 8 * v27;
        goto LABEL_30;
      }
    }
    v31 = *v30;
    v32 = v30 + 1;
    v33 = v27 - 1;
    v34 = 0;
    if ( v31 )
      v34 = strlen(v31);
    v35 = (char *)sub_10DBAA0((__int64)v31, v34, v32, v33);
    LOBYTE(v28) = sub_10DBCC0(v35, v36);
    v30 = (const char **)v191;
    v24 = (char *)v191 + 8 * (unsigned int)v192;
  }
LABEL_30:
  v225 = v28;
  sub_21B6800(&v238, v30, v24);
  v37 = v179.m128i_i64[1];
  sub_21B6780(v179.m128i_i64[1]);
  v38 = (void *)v238.m128i_i64[1];
  if ( (unsigned __int64 *)v238.m128i_i64[1] == &v239.m128i_u64[1] )
  {
    v132 = v239.m128i_u32[0];
    v133 = v228.m128i_u32[0];
    v134 = v239.m128i_i32[0];
    if ( v239.m128i_u32[0] <= (unsigned __int64)v228.m128i_u32[0] )
    {
      if ( v239.m128i_i32[0] )
        memmove(ptr, (const void *)v238.m128i_i64[1], 8LL * v239.m128i_u32[0]);
    }
    else
    {
      if ( v239.m128i_u32[0] > (unsigned __int64)v228.m128i_u32[1] )
      {
        v228.m128i_i32[0] = 0;
        sub_2237220(v179.m128i_i64[1] + 8, v179.m128i_i64[1] + 24, v239.m128i_u32[0], 8);
        v137 = v238.m128i_i64[1];
        v132 = v239.m128i_u32[0];
        v133 = 0;
        v135 = (char *)ptr;
        v38 = (void *)v238.m128i_i64[1];
      }
      else
      {
        v135 = (char *)ptr;
        v136 = 8LL * v228.m128i_u32[0];
        v137 = v238.m128i_i64[1];
        if ( v228.m128i_i32[0] )
        {
          memmove(ptr, (const void *)v238.m128i_i64[1], 8LL * v228.m128i_u32[0]);
          v137 = v238.m128i_i64[1];
          v133 = v136;
          v132 = v239.m128i_u32[0];
          v38 = (void *)(v238.m128i_i64[1] + v136);
          v135 = (char *)ptr + v136;
        }
      }
      v138 = 8 * v132;
      if ( v38 != (void *)(v138 + v137) )
        memcpy(v135, v38, v138 - v133);
    }
    v228.m128i_i32[0] = v134;
  }
  else
  {
    if ( ptr != (void *)(v37 + 24) )
    {
      free(ptr);
      v38 = (void *)v238.m128i_i64[1];
    }
    v39 = v239.m128i_i64[0];
    ptr = v38;
    v239.m128i_i32[1] = 0;
    v228.m128i_i64[0] = v39;
    v238.m128i_i64[1] = (__int64)&v239.m128i_i64[1];
  }
  v239.m128i_i32[0] = 0;
  operator delete(v229, 12LL * v231, 4);
  v40 = v241;
  v41 = (char *)src;
  v241 = 0;
  v229 = v40;
  v42 = v242;
  v242 = 0;
  v230 = v42;
  LODWORD(v42) = v243;
  v243 = 0;
  v231 = v42;
  if ( src == v246 )
  {
    v125 = (unsigned int)v245;
    v126 = (unsigned int)v233;
    v127 = v245;
    if ( (unsigned int)v245 <= (unsigned __int64)(unsigned int)v233 )
    {
      if ( (_DWORD)v245 )
        memmove(dest, src, 8LL * (unsigned int)v245);
    }
    else
    {
      if ( (unsigned int)v245 > (unsigned __int64)HIDWORD(v233) )
      {
        LODWORD(v233) = 0;
        sub_2237220(v179.m128i_i64[1] + 176, v179.m128i_i64[1] + 192, (unsigned int)v245, 8);
        v130 = (char *)src;
        v125 = (unsigned int)v245;
        v126 = 0;
        v128 = (char *)dest;
        v41 = (char *)src;
      }
      else
      {
        v128 = (char *)dest;
        v129 = 8LL * (unsigned int)v233;
        v130 = (char *)src;
        if ( (_DWORD)v233 )
        {
          memmove(dest, src, 8LL * (unsigned int)v233);
          v130 = (char *)src;
          v126 = v129;
          v125 = (unsigned int)v245;
          v41 = (char *)src + v129;
          v128 = (char *)dest + v129;
        }
      }
      v131 = 8 * v125;
      if ( v41 != &v130[v131] )
        memcpy(v128, v41, v131 - v126);
    }
    LODWORD(v233) = v127;
    LODWORD(v245) = 0;
  }
  else
  {
    if ( dest != (void *)(v179.m128i_i64[1] + 192) )
    {
      free(dest);
      v41 = (char *)src;
    }
    v43 = v245;
    dest = v41;
    v245 = 0;
    v233 = v43;
    src = v246;
  }
  v44 = v235[0];
  v45 = v179.m128i_i64[1] + 320;
  if ( v235[0] != (void *)(v179.m128i_i64[1] + 320) )
  {
    while ( 1 )
    {
      v46 = (_QWORD *)v44[2];
      v47 = (_QWORD *)*v44;
      if ( v46 == v44 + 4 )
      {
        operator delete(v44);
        if ( v47 == (_QWORD *)v45 )
          break;
      }
      else
      {
        operator delete(v46);
        operator delete(v44);
        if ( v47 == (_QWORD *)v45 )
          break;
      }
      v44 = v47;
    }
  }
  if ( v247[0] == v247 )
  {
    v139 = _mm_load_si128(&v184);
    v236 = 0;
    *(__m128i *)v235 = v139;
  }
  else
  {
    v184.m128i_i64[0] = (__int64)v247;
    v235[0] = v247[0];
    v48 = _mm_loadl_epi64(&v184);
    v49 = v179.m128i_i64[1] + 320;
    v235[1] = v247[1];
    *(_QWORD *)v247[1] = v179.m128i_i64[1] + 320;
    *((_QWORD *)v235[0] + 1) = v49;
    v50 = v248;
    v248 = 0;
    v236 = v50;
    *(__m128i *)v247 = _mm_unpacklo_epi64(v48, v48);
  }
  v237 = v249;
  v238.m128i_i64[0] = (__int64)off_2BE9900;
  sub_21B6780(&v238);
  v51 = (void **)v247[0];
  if ( v247[0] != v247 )
  {
    while ( 1 )
    {
      v52 = (void **)v51[2];
      v53 = (void **)*v51;
      if ( v52 == v51 + 4 )
      {
        operator delete(v51);
        if ( v53 == v247 )
          break;
      }
      else
      {
        operator delete(v52);
        operator delete(v51);
        if ( v53 == v247 )
          break;
      }
      v51 = v53;
    }
  }
  if ( src != v246 )
    free(src);
  v238.m128i_i64[0] = (__int64)&off_2C35EF8;
  operator delete(v241, 12LL * v243, 4);
  if ( (unsigned __int64 *)v238.m128i_i64[1] != &v239.m128i_u64[1] )
    free((void *)v238.m128i_i64[1]);
  if ( v191 != v182 + 2 )
    free(v191);
  v54 = sub_1105E80();
  v55 = v180;
  v184.m128i_i64[0] = (__int64)v54;
  if ( v180 != (void *)v179.m128i_i64[0] )
  {
    v56 = v214[1];
    if ( v214[1] == v215 )
    {
      sub_E709F0((void ***)v214, (const __m128i *)v214[1], (__int64)v180);
    }
    else
    {
      *(_QWORD *)v214[1] = (char *)v214[1] + 16;
      sub_1FFB870(v56, (_BYTE *)*v55, *v55 + v55[1]);
      v214[1] = (char *)v214[1] + 32;
    }
  }
  LODWORD(v191) = 1;
  v185 = (v179.m128i_i64[0] - (__int64)v180) >> 5;
  if ( v185 > 1 )
  {
    v186 = a1;
    v57 = 1;
    while ( 1 )
    {
      sub_21BC730(&v238, v184.m128i_i64[0], v179.m128i_i64[1], v182, 2 - (unsigned int)(v225 == 0));
      v58 = v238.m128i_i64[0];
      if ( v238.m128i_i64[0] )
        break;
LABEL_78:
      v57 = (unsigned int)v191;
      if ( (unsigned int)v191 >= v185 )
      {
        a1 = v186;
        goto LABEL_80;
      }
    }
    if ( (unsigned __int8)sub_21B9810(v238.m128i_i64[0], 70)
      || (unsigned __int8)sub_21B9810(v58, 3116)
      || v225
      && ((unsigned __int8)sub_21B9810(v58, 456)
       || (unsigned __int8)sub_21B9810(v58, 693)
       || (unsigned __int8)sub_21B9810(v58, 887)
       || (unsigned __int8)sub_21B9810(v58, 1580)) )
    {
      goto LABEL_76;
    }
    if ( (unsigned __int8)sub_21B9810(v58, 3567) )
    {
      v149 = (void *)v238.m128i_i64[0];
      a1 = v186;
      if ( v238.m128i_i64[0] )
      {
        sub_21B59C0(v238.m128i_i64[0]);
        operator delete(v149, 0x58u);
      }
      goto LABEL_80;
    }
    v59 = v238.m128i_i64[0];
    if ( v225 )
    {
      if ( !(unsigned __int8)sub_21B9810(v238.m128i_i64[0], 3330) && !(unsigned __int8)sub_21B9810(v59, 3331) )
      {
        if ( (unsigned __int8)sub_21B9810(v59, 3335) || (unsigned __int8)sub_21B9810(v59, 3336) )
        {
          v60 = 17;
          goto LABEL_75;
        }
LABEL_130:
        v88 = v238.m128i_i64[0];
        if ( (unsigned __int8)sub_21B9810(v238.m128i_i64[0], 3304 - (unsigned int)(v225 != 0)) )
        {
          v89 = *(const char ***)(v88 + 48);
          v90 = 0;
          v91 = *v89;
          if ( *v89 )
            v90 = strlen(*v89);
          v92 = sub_FEBA50((__int64)v91, v90);
          if ( v92 != 42 )
            v224 = v92;
          goto LABEL_76;
        }
        v112 = 32 * v57;
        v113 = 32LL * (unsigned int)v191;
        v114 = (char *)v180 + 32 * v57;
        v115 = (char *)v180 + v113;
        if ( (char *)v180 + v113 != v114 )
        {
          v116 = v113 - v112;
          v117 = (const __m128i *)v214[1];
          v118 = v116 >> 5;
          if ( v116 >> 5 <= (unsigned __int64)(((char *)v215 - (char *)v214[1]) >> 5) )
          {
            do
            {
              v119 = v117 + 1;
              v120 = (__int64 *)v117;
              v114 += 32;
              v117 += 2;
              v117[-2].m128i_i64[0] = (__int64)v119;
              sub_1FFB870(v120, *((_BYTE **)v114 - 4), *((_QWORD *)v114 - 4) + *((_QWORD *)v114 - 3));
            }
            while ( v115 != v114 );
            v214[1] = (char *)v214[1] + v116;
            goto LABEL_76;
          }
          v150 = (const __m128i *)v214[0];
          v151 = ((char *)v214[1] - (char *)v214[0]) >> 5;
          if ( v118 > 0x7FFFFFFFFFFFFFFLL - v151 )
            std::__throw_length_error("vector::_M_range_insert");
          if ( v118 < v151 )
            v118 = ((char *)v214[1] - (char *)v214[0]) >> 5;
          v152 = __CFADD__(v118, v151);
          v153 = v118 + v151;
          if ( v152 || v153 > 0x7FFFFFFFFFFFFFFLL )
          {
            v177 = 0xFFFFFFFFFFFFFFELL;
          }
          else
          {
            v189 = nullptr;
            v187 = nullptr;
            if ( !v153 )
            {
LABEL_303:
              if ( v117 == v150 )
              {
                v188 = v187;
                v159 = v187;
              }
              else
              {
                v154 = v187;
                v155 = v150 + 1;
                v156 = &v187[2 * ((unsigned __int64)((char *)&v117[-2] - (char *)v150) >> 5) + 2];
                do
                {
                  v154->m128i_i64[0] = (__int64)v154[1].m128i_i64;
                  v157 = (const __m128i *)v155[-1].m128i_i64[0];
                  if ( v157 == v155 )
                  {
                    v154[1] = _mm_loadu_si128(v155);
                  }
                  else
                  {
                    v154->m128i_i64[0] = (__int64)v157;
                    v154[1].m128i_i64[0] = v155->m128i_i64[0];
                  }
                  v154 += 2;
                  v154[-2].m128i_i64[1] = v155[-1].m128i_i64[1];
                  v155[-1].m128i_i64[0] = (__int64)v155;
                  v155 += 2;
                  v155[-3].m128i_i64[1] = 0;
                  v155[-2].m128i_i8[0] = 0;
                }
                while ( v154 != v156 );
                v188 = &v187[2 * ((unsigned __int64)((char *)&v117[-2] - (char *)v150) >> 5) + 2];
                v159 = v188;
              }
              v190 = v117;
              v160 = v114;
              v161 = (__int64 *)v159;
              do
              {
                v162 = v161 + 2;
                v163 = v161;
                v160 += 32;
                v161 += 4;
                *(v161 - 4) = (__int64)v162;
                sub_1FFB870(v163, *((_BYTE **)v160 - 4), *((_QWORD *)v160 - 4) + *((_QWORD *)v160 - 3));
              }
              while ( v115 != v160 );
              v164 = v190;
              v165 = v115 - 32 - v114;
              v166 = (void **)v214[1];
              v167 = (unsigned __int64)v188[2].m128i_u64 + (v165 & 0xFFFFFFFFFFFFFFE0LL);
              if ( v190 != v214[1] )
              {
                v168 = v190 + 1;
                v169 = (__m128i *)v167;
                v170 = (__m128i *)(v167 + 32 * (((unsigned __int64)((char *)v214[1] - 32 - (char *)v190) >> 5) + 1));
                do
                {
                  v169->m128i_i64[0] = (__int64)v169[1].m128i_i64;
                  v171 = (const __m128i *)v168[-1].m128i_i64[0];
                  if ( v171 == v168 )
                  {
                    v169[1] = _mm_loadu_si128(v168);
                  }
                  else
                  {
                    v169->m128i_i64[0] = (__int64)v171;
                    v169[1].m128i_i64[0] = v168->m128i_i64[0];
                  }
                  v169 += 2;
                  v169[-2].m128i_i64[1] = v168[-1].m128i_i64[1];
                  v168[-1].m128i_i64[0] = (__int64)v168;
                  v168 += 2;
                  v168[-3].m128i_i64[1] = 0;
                  v168[-2].m128i_i8[0] = 0;
                }
                while ( v169 != v170 );
                v172 = 32 * (((unsigned __int64)((char *)(v166 - 4) - (char *)v164) >> 5) + 1);
                v166 = (void **)v214[1];
                v167 += v172;
              }
              v173 = (void **)v214[0];
              if ( v214[0] != v166 )
              {
                do
                {
                  while ( *v173 != v173 + 2 )
                  {
                    operator delete(*v173);
                    v173 += 4;
                    if ( v173 == v166 )
                      goto LABEL_327;
                  }
                  v173 += 4;
                }
                while ( v173 != v166 );
LABEL_327:
                v166 = (void **)v214[0];
              }
              if ( v166 )
                operator delete(v166);
              v187 = (__m128i *)v167;
              v174 = _mm_loadh_ps((const double *)&v187);
              v215 = v189;
              *(__m128 *)v214 = v174;
              goto LABEL_76;
            }
            v177 = 2 * v153;
          }
          v178 = (__m128i *)operator new(v177 * 16);
          v150 = (const __m128i *)v214[0];
          v187 = v178;
          v189 = &v178[v177];
          goto LABEL_303;
        }
LABEL_76:
        v61 = (void *)v238.m128i_i64[0];
        if ( v238.m128i_i64[0] )
        {
          sub_21B59C0(v238.m128i_i64[0]);
          operator delete(v61, 0x58u);
        }
        goto LABEL_78;
      }
      v60 = 2;
    }
    else
    {
      if ( !(unsigned __int8)sub_21B9810(v238.m128i_i64[0], 3510) )
        goto LABEL_130;
      v60 = sub_12CD410(**(char ***)(v59 + 48));
    }
LABEL_75:
    v222 = v60;
    v223 = 1;
    goto LABEL_76;
  }
LABEL_80:
  v62 = v222;
  if ( v223 && !v222 )
  {
    if ( v224 == 42 )
      goto LABEL_200;
    v111 = *((_BYTE *)sub_FEB790(v224) + 20) - 4;
    if ( v111 > 3u )
      goto LABEL_200;
    v62 = dword_2671F80[v111];
  }
  v63 = v62 - 2;
  if ( (unsigned int)v63 <= 0x20 )
  {
    v223 = 1;
    v222 = byte_2671FA0[v63];
    if ( v222 )
      goto LABEL_84;
    goto LABEL_201;
  }
LABEL_200:
  v222 = 0;
LABEL_201:
  v223 = 0;
LABEL_84:
  v64 = v179.m128i_i64[1];
  v226 = off_2BE9900;
  sub_21B6780(v179.m128i_i64[1]);
  v65 = (void **)v235[0];
  v66 = (void **)(v64 + 320);
  if ( v235[0] != v66 )
  {
    while ( 1 )
    {
      v67 = (void **)v65[2];
      v68 = (void **)*v65;
      if ( v67 == v65 + 4 )
      {
        operator delete(v65);
        if ( v68 == v66 )
          break;
      }
      else
      {
        operator delete(v67);
        operator delete(v65);
        if ( v68 == v66 )
          break;
      }
      v65 = v68;
    }
  }
  if ( dest != (void *)(v179.m128i_i64[1] + 192) )
    free(dest);
  v226 = &off_2C35EF8;
  operator delete(v229, 12LL * v231, 4);
  if ( ptr != (void *)(v179.m128i_i64[1] + 24) )
    free(ptr);
  v69 = (void **)v180;
  if ( v180 != (void *)v179.m128i_i64[0] )
  {
    do
    {
      while ( *v69 != v69 + 2 )
      {
        operator delete(*v69);
        v69 += 4;
        if ( (void **)v179.m128i_i64[0] == v69 )
          goto LABEL_97;
      }
      v69 += 4;
    }
    while ( (void **)v179.m128i_i64[0] != v69 );
  }
LABEL_97:
  if ( v180 )
    operator delete(v180);
  *(_QWORD *)a1 = a1 + 16;
  if ( v208 == &v210 )
  {
    *(__m128i *)(a1 + 16) = _mm_load_si128(&v210);
  }
  else
  {
    *(_QWORD *)a1 = v208;
    *(_QWORD *)(a1 + 16) = v210.m128i_i64[0];
  }
  v70 = v209;
  v209 = 0;
  v210.m128i_i8[0] = 0;
  *(_QWORD *)(a1 + 8) = v70;
  v208 = &v210;
  v71 = (__m128i *)v211;
  *(_QWORD *)(a1 + 32) = a1 + 48;
  if ( v71 == &v213 )
  {
    *(__m128i *)(a1 + 48) = _mm_load_si128(&v213);
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v71;
    *(_QWORD *)(a1 + 48) = v213.m128i_i64[0];
  }
  v72 = v212;
  v211 = &v213;
  v73 = v214[0];
  *(_QWORD *)(a1 + 40) = v212;
  *(_QWORD *)(a1 + 64) = v73;
  v212 = 0;
  *(void **)(a1 + 72) = v214[1];
  v213.m128i_i8[0] = 0;
  *(_QWORD *)(a1 + 80) = v215;
  *(_QWORD *)(a1 + 88) = a1 + 104;
  *(_OWORD *)v214 = 0;
  v215 = nullptr;
  if ( v216 == &v218 )
  {
    *(__m128i *)(a1 + 104) = _mm_loadu_si128(&v218);
  }
  else
  {
    *(_QWORD *)(a1 + 88) = v216;
    *(_QWORD *)(a1 + 104) = v218.m128i_i64[0];
  }
  v74 = v217;
  v217 = 0;
  v218.m128i_i8[0] = 0;
  *(_QWORD *)(a1 + 96) = v74;
  v216 = &v218;
  v75 = (__m128i *)v219;
  *(_QWORD *)(a1 + 120) = a1 + 136;
  if ( v75 == &v221 )
  {
    *(__m128i *)(a1 + 136) = _mm_loadu_si128(&v221);
  }
  else
  {
    *(_QWORD *)(a1 + 120) = v75;
    *(_QWORD *)(a1 + 136) = v221.m128i_i64[0];
  }
  v76 = v220;
  v77 = v72 + 14;
  v220 = 0;
  v221.m128i_i8[0] = 0;
  *(_QWORD *)(a1 + 128) = v76;
  v219 = &v221;
  v238.m128i_i64[0] = (__int64)&v239;
  v238.m128i_i64[1] = 0;
  v239.m128i_i8[0] = 0;
  if ( (unsigned __int64)v77 > 0xF )
  {
    if ( v77 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v179.m128i_i64[0] = (__int64)&v239;
    if ( (unsigned __int64)v77 < 0x1E )
      v77 = 30;
    v121 = (_BYTE *)operator new(v77 + 1);
    v122 = (__int64)v121;
    v123 = (__m128i *)v238.m128i_i64[0];
    if ( v238.m128i_i64[1] )
    {
      v180 = (void *)v179.m128i_i64[0];
      v179.m128i_i64[0] = v238.m128i_i64[1];
      if ( v238.m128i_i64[1] != -1 )
      {
        v182 = (void **)v238.m128i_i64[0];
        v144 = memcpy(v121, (const void *)v238.m128i_i64[0], v238.m128i_i64[1] + 1);
        v123 = (__m128i *)v182;
        v122 = (__int64)v144;
        v124 = v179.m128i_i64[0];
        if ( v182 == v180 )
        {
LABEL_213:
          v238.m128i_i64[0] = v122;
          v239.m128i_i64[0] = v77;
          if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v124) <= 0xD )
            std::__throw_length_error("basic_string::append");
          goto LABEL_108;
        }
LABEL_212:
        v179.m128i_i64[0] = v122;
        operator delete(v123);
        v124 = v238.m128i_i64[1];
        v122 = v179.m128i_i64[0];
        goto LABEL_213;
      }
      if ( (__m128i *)v238.m128i_i64[0] != &v239 )
        goto LABEL_212;
    }
    else
    {
      *v121 = *(_BYTE *)v238.m128i_i64[0];
      if ( v123 != &v239 )
        goto LABEL_212;
    }
    v238.m128i_i64[0] = (__int64)v121;
    v239.m128i_i64[0] = v77;
  }
LABEL_108:
  sub_9EE560(&v238, "inferred from ", 0xEu);
  sub_9EE560(&v238, *(_BYTE **)(a1 + 32), *(_QWORD *)(a1 + 40));
  v78 = *(__m128i **)(a1 + 120);
  if ( (__m128i *)v238.m128i_i64[0] == &v239 )
  {
    v141 = v238.m128i_i64[1];
    if ( v238.m128i_i64[1] )
    {
      if ( v238.m128i_i64[1] == 1 )
        v78->m128i_i8[0] = v239.m128i_i8[0];
      else
        memcpy(v78, (const void *)v238.m128i_i64[0], v238.m128i_u64[1]);
      v141 = v238.m128i_i64[1];
      v78 = *(__m128i **)(a1 + 120);
    }
    *(_QWORD *)(a1 + 128) = v141;
    v78->m128i_i8[v141] = 0;
    v78 = (__m128i *)v238.m128i_i64[0];
  }
  else
  {
    if ( v78 == (__m128i *)(a1 + 136) )
    {
      v179.m128i_i64[0] = v239.m128i_i64[0];
      *(_QWORD *)(a1 + 120) = v238.m128i_i64[0];
      *(__m128 *)(a1 + 128) = _mm_loadh_ps((const double *)v179.m128i_i64);
    }
    else
    {
      v179.m128i_i64[0] = v239.m128i_i64[0];
      v79 = *(_QWORD *)(a1 + 136);
      *(_QWORD *)(a1 + 120) = v238.m128i_i64[0];
      *(__m128 *)(a1 + 128) = _mm_loadh_ps((const double *)v179.m128i_i64);
      if ( v78 )
      {
        v238.m128i_i64[0] = (__int64)v78;
        v239.m128i_i64[0] = v79;
        goto LABEL_112;
      }
    }
    v78 = &v239;
    v238.m128i_i64[0] = (__int64)&v239;
  }
LABEL_112:
  v238.m128i_i64[1] = 0;
  v78->m128i_i8[0] = 0;
  if ( (__m128i *)v238.m128i_i64[0] != &v239 )
    operator delete((void *)v238.m128i_i64[0]);
  v238.m128i_i64[0] = (__int64)&v239;
  v80 = &v181[v183];
  sub_1FFB7B0(&v238, v181, (__int64)&v181[v183]);
  v81 = *(__m128i **)(a1 + 32);
  if ( (__m128i *)v238.m128i_i64[0] == &v239 )
  {
    v140 = v238.m128i_i64[1];
    if ( v238.m128i_i64[1] )
    {
      if ( v238.m128i_i64[1] == 1 )
        v81->m128i_i8[0] = v239.m128i_i8[0];
      else
        memcpy(v81, (const void *)v238.m128i_i64[0], v238.m128i_u64[1]);
      v140 = v238.m128i_i64[1];
      v81 = *(__m128i **)(a1 + 32);
    }
    *(_QWORD *)(a1 + 40) = v140;
    v81->m128i_i8[v140] = 0;
    v81 = (__m128i *)v238.m128i_i64[0];
  }
  else
  {
    if ( (__m128i *)(a1 + 48) == v81 )
    {
      v179.m128i_i64[0] = v239.m128i_i64[0];
      *(_QWORD *)(a1 + 32) = v238.m128i_i64[0];
      *(__m128 *)(a1 + 40) = _mm_loadh_ps((const double *)v179.m128i_i64);
    }
    else
    {
      v179.m128i_i64[0] = v239.m128i_i64[0];
      v82 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) = v238.m128i_i64[0];
      *(__m128 *)(a1 + 40) = _mm_loadh_ps((const double *)v179.m128i_i64);
      if ( v81 )
      {
        v238.m128i_i64[0] = (__int64)v81;
        v239.m128i_i64[0] = v82;
        goto LABEL_118;
      }
    }
    v81 = &v239;
    v238.m128i_i64[0] = (__int64)&v239;
  }
LABEL_118:
  v238.m128i_i64[1] = 0;
  v81->m128i_i8[0] = 0;
  if ( (__m128i *)v238.m128i_i64[0] != &v239 )
    operator delete((void *)v238.m128i_i64[0]);
  v83 = sub_228AB90(v181, v183, 0);
  v85 = 0;
  if ( v84 )
  {
    --v84;
    v85 = 1;
  }
  v86 = sub_12CCD10((unsigned __int8 *)(v83 + v85), v84);
  v87 = v86;
  if ( !v86 )
  {
    if ( !v223 )
      goto LABEL_153;
    goto LABEL_136;
  }
  if ( v86 != 23 )
    goto LABEL_148;
  if ( v223 )
  {
    if ( !sub_12CC9A0(23) )
    {
      v87 = v222;
      goto LABEL_137;
    }
LABEL_136:
    v87 = sub_12CD680(v222);
LABEL_137:
    if ( !v225 )
    {
      v238.m128i_i64[1] = 2;
      strcpy(v239.m128i_i8, "-x");
      v93 = *(__m128i **)(a1 + 72);
      v238.m128i_i64[0] = (__int64)&v239;
      if ( v93 == *(__m128i **)(a1 + 80) )
      {
        v179.m128i_i64[0] = (__int64)&v239;
        sub_A82970((void ***)(a1 + 64), v93, &v238);
        if ( v238.m128i_i64[0] != v179.m128i_i64[0] )
          operator delete((void *)v238.m128i_i64[0]);
      }
      else
      {
        v93->m128i_i64[0] = (__int64)v93[1].m128i_i64;
        if ( (__m128i *)v238.m128i_i64[0] == &v239 )
        {
          v93[1] = _mm_load_si128(&v239);
        }
        else
        {
          v93->m128i_i64[0] = v238.m128i_i64[0];
          v93[1].m128i_i64[0] = v239.m128i_i64[0];
        }
        v93->m128i_i64[1] = v238.m128i_i64[1];
        *(_QWORD *)(a1 + 72) += 32LL;
      }
      v94 = (const char *)sub_12CC8C0(v87);
      v95 = -1;
      v96 = (char *)v94;
      v238.m128i_i64[0] = (__int64)&v239;
      if ( v94 )
      {
        v179.m128i_i64[0] = (__int64)v94;
        v97 = strlen(v94);
        v96 = (char *)v179.m128i_i64[0];
        v95 = v179.m128i_i64[0] + v97;
      }
      sub_1FFB7B0(&v238, v96, v95);
      v98 = *(__m128i **)(a1 + 72);
      if ( v98 != *(__m128i **)(a1 + 80) )
      {
        v98->m128i_i64[0] = (__int64)v98[1].m128i_i64;
        v99 = v238.m128i_i64[0];
        if ( (__m128i *)v238.m128i_i64[0] != &v239 )
        {
LABEL_146:
          v98->m128i_i64[0] = v99;
          v98[1].m128i_i64[0] = v239.m128i_i64[0];
LABEL_147:
          v98->m128i_i64[1] = v238.m128i_i64[1];
          *(_QWORD *)(a1 + 72) += 32LL;
          goto LABEL_148;
        }
LABEL_269:
        v98[1] = _mm_load_si128(&v239);
        goto LABEL_147;
      }
      sub_A82970((void ***)(a1 + 64), v98, &v238);
      v158 = (void *)v238.m128i_i64[0];
      if ( (__m128i *)v238.m128i_i64[0] != &v239 )
LABEL_312:
        operator delete(v158);
LABEL_148:
      v100 = v224;
      if ( v224 == 42 )
        goto LABEL_153;
      v101 = v87 - 2;
      v102 = v223;
      v103 = 0;
      if ( (unsigned int)v101 > 0x20 )
        goto LABEL_151;
      goto LABEL_150;
    }
    if ( v87 == 17 )
      goto LABEL_266;
    if ( v87 <= 0x11 )
    {
      if ( v87 != 2 )
        goto LABEL_148;
    }
    else if ( v87 != 23 )
    {
      if ( v87 != 28 )
        goto LABEL_148;
LABEL_266:
      v142 = "/TP";
      goto LABEL_267;
    }
    v142 = "/TC";
LABEL_267:
    v238.m128i_i64[0] = (__int64)&v239;
    v179.m128i_i64[0] = (__int64)&v239;
    sub_1FFB7B0(&v238, v142, (__int64)(v142 + 3));
    v98 = *(__m128i **)(a1 + 72);
    v143 = v179.m128i_i64[0];
    if ( v98 != *(__m128i **)(a1 + 80) )
    {
      v98->m128i_i64[0] = (__int64)v98[1].m128i_i64;
      v99 = v238.m128i_i64[0];
      if ( v238.m128i_i64[0] != v143 )
        goto LABEL_146;
      goto LABEL_269;
    }
    sub_A82970((void ***)(a1 + 64), v98, &v238);
    v158 = (void *)v238.m128i_i64[0];
    if ( v238.m128i_i64[0] != v179.m128i_i64[0] )
      goto LABEL_312;
    goto LABEL_148;
  }
  v100 = v224;
  v102 = 0;
  v101 = 21;
  if ( v224 == 42 )
    goto LABEL_153;
LABEL_150:
  v103 = byte_2671FA0[v101];
LABEL_151:
  if ( v102 && v222 == v103 )
  {
    v145 = *sub_FEB790(v100);
    if ( *v145 )
    {
      v146 = "-std=";
      v239.m128i_i64[0] = (__int64)v145;
      if ( v225 )
        v146 = "/std:";
      v240 = 771;
      v238.m128i_i64[0] = (__int64)v146;
    }
    else
    {
      v176 = "-std=";
      if ( v225 )
        v176 = "/std:";
      v240 = 259;
      v238.m128i_i64[0] = (__int64)v176;
    }
    v147 = v179.m128i_i64[1];
    sub_2253560(v179.m128i_i64[1], &v238);
    v148 = *(__m128i **)(a1 + 72);
    if ( v148 == *(__m128i **)(a1 + 80) )
    {
      v175 = v179.m128i_i64[1];
      sub_A82970((void ***)(a1 + 64), v148, (__m128i *)v179.m128i_i64[1]);
      if ( v226 != (void *)(v175 + 16) )
        operator delete(v226);
    }
    else
    {
      v148->m128i_i64[0] = (__int64)v148[1].m128i_i64;
      if ( v226 == (void *)(v147 + 16) )
      {
        v148[1] = _mm_load_si128(&v228);
      }
      else
      {
        v148->m128i_i64[0] = (__int64)v226;
        v148[1].m128i_i64[0] = v228.m128i_i64[0];
      }
      v148->m128i_i64[1] = (__int64)ptr;
      *(_QWORD *)(a1 + 72) += 32LL;
    }
  }
LABEL_153:
  v104 = *(__m128i **)(a1 + 72);
  v238.m128i_i64[1] = 2;
  v238.m128i_i64[0] = (__int64)&v239;
  strcpy(v239.m128i_i8, "--");
  if ( v104 == *(__m128i **)(a1 + 80) )
  {
    sub_A82970((void ***)(a1 + 64), v104, &v238);
    if ( (__m128i *)v238.m128i_i64[0] != &v239 )
      operator delete((void *)v238.m128i_i64[0]);
  }
  else
  {
    v104->m128i_i64[0] = (__int64)v104[1].m128i_i64;
    if ( (__m128i *)v238.m128i_i64[0] == &v239 )
    {
      v104[1] = _mm_load_si128(&v239);
    }
    else
    {
      v104->m128i_i64[0] = v238.m128i_i64[0];
      v104[1].m128i_i64[0] = v239.m128i_i64[0];
    }
    v104->m128i_i64[1] = v238.m128i_i64[1];
    *(_QWORD *)(a1 + 72) += 32LL;
  }
  v238.m128i_i64[0] = (__int64)&v239;
  sub_1FFB7B0(&v238, v181, (__int64)v80);
  v105 = *(__m128i **)(a1 + 72);
  if ( v105 == *(__m128i **)(a1 + 80) )
  {
    sub_A82970((void ***)(a1 + 64), v105, &v238);
    if ( (__m128i *)v238.m128i_i64[0] != &v239 )
      operator delete((void *)v238.m128i_i64[0]);
  }
  else
  {
    v105->m128i_i64[0] = (__int64)v105[1].m128i_i64;
    if ( (__m128i *)v238.m128i_i64[0] == &v239 )
    {
      v105[1] = _mm_load_si128(&v239);
    }
    else
    {
      v105->m128i_i64[0] = v238.m128i_i64[0];
      v105[1].m128i_i64[0] = v239.m128i_i64[0];
    }
    v105->m128i_i64[1] = v238.m128i_i64[1];
    *(_QWORD *)(a1 + 72) += 32LL;
  }
  if ( v219 != &v221 )
    operator delete(v219);
  if ( v216 != &v218 )
    operator delete(v216);
  v106 = (void **)v214[1];
  v107 = (void **)v214[0];
  if ( v214[1] != v214[0] )
  {
    do
    {
      while ( *v107 != v107 + 2 )
      {
        operator delete(*v107);
        v107 += 4;
        if ( v107 == v106 )
          goto LABEL_168;
      }
      v107 += 4;
    }
    while ( v106 != v107 );
LABEL_168:
    v107 = (void **)v214[0];
  }
  if ( v107 )
    operator delete(v107);
  if ( v211 != &v213 )
    operator delete(v211);
  if ( v208 != &v210 )
    operator delete(v208);
  if ( v205 != &v207 )
    operator delete(v205);
  if ( v202 != &v204 )
    operator delete(v202);
  v108 = (void **)v200[1];
  v109 = (void **)v200[0];
  if ( v200[1] != v200[0] )
  {
    do
    {
      while ( *v109 != v109 + 2 )
      {
        operator delete(*v109);
        v109 += 4;
        if ( v108 == v109 )
          goto LABEL_182;
      }
      v109 += 4;
    }
    while ( v108 != v109 );
LABEL_182:
    v109 = (void **)v200[0];
  }
  if ( v109 )
    operator delete(v109);
  if ( v197 != &v199 )
    operator delete(v197);
  if ( v194 != &v196 )
    operator delete(v194);
  return a1;
}
