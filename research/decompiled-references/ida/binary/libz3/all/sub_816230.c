__int64 __fastcall sub_816230(__int64 a1, int *a2)
{
  char **v2; // r13
  char **v3; // r13
  char **v4; // r13
  char **v5; // r13
  char **v6; // r13
  char **v7; // r13
  char **v8; // r13
  char **v9; // r13
  char **v10; // r13
  char **v11; // r13
  char **v12; // r13
  char **v13; // r13
  char **exception; // r13
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // r15
  __int64 v25; // r14
  _QWORD *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 *v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r14
  __int64 v33; // rax
  int v34; // r15d
  __int64 v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rdx
  unsigned int v38; // eax
  __int64 v39; // rsi
  int v40; // eax
  __int64 *v41; // rsi
  unsigned int v42; // edx
  __int64 v43; // r15
  unsigned int v44; // r15d
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rsi
  unsigned int v48; // ecx
  size_t v49; // rsi
  unsigned int *v50; // rax
  const __m128i *v51; // rdx
  __int64 v52; // rax
  const __m128i *v53; // rsi
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rdi
  bool v56; // cc
  const __m128i *v57; // rax
  __m128i v58; // xmm1
  const __m128i *v59; // rcx
  __m128i v60; // xmm0
  unsigned int v61; // r15d
  __int32 *v62; // r8
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  unsigned int *v66; // rax
  __int32 v67; // ecx
  __int64 v68; // rax
  _QWORD *v69; // rdx
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rax
  int v73; // ecx
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rdi
  __int64 v77; // rdi
  __int64 result; // rax
  bool v79; // zf
  const __m128i *v80; // r15
  int v81; // edx
  __int64 v82; // rax
  int *v83; // rax
  __int64 v84; // rax
  __int32 v85; // esi
  __int64 v86; // rax
  const __m128i *v87; // rcx
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rsi
  const __m128i *v90; // rax
  __m128i v91; // xmm1
  __m128i v92; // xmm0
  _QWORD *v93; // rax
  unsigned int v94; // ecx
  unsigned int *v95; // rsi
  const __m128i *v96; // rax
  __int64 v97; // rax
  unsigned int v98; // r8d
  size_t v99; // rsi
  unsigned int *v100; // rax
  const __m128i *v101; // rdx
  __int64 v102; // rax
  const __m128i *v103; // rsi
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // rdi
  const __m128i *v106; // rax
  __m128i v107; // xmm1
  const __m128i *v108; // rcx
  __m128i v109; // xmm0
  unsigned int v110; // r15d
  __int32 *v111; // r8
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rax
  unsigned int *v115; // rax
  const __m128i *v116; // r15
  __int64 v117; // rax
  const __m128i *v118; // rcx
  unsigned __int64 v119; // rdx
  const __m128i *v120; // rax
  unsigned __int64 v121; // rsi
  __m128i v122; // xmm1
  const __m128i *v123; // rdx
  __m128i v124; // xmm0
  int v125; // ecx
  _QWORD *v126; // rax
  unsigned int v127; // ecx
  unsigned int *v128; // rsi
  const __m128i *v129; // rax
  __int64 v130; // rax
  unsigned int v131; // r8d
  size_t v132; // rsi
  unsigned int *v133; // rax
  __int64 v134; // rax
  __int64 *v135; // rcx
  unsigned int i; // edx
  unsigned int *v137; // r15
  __int64 v138; // rax
  __int64 v139; // rdi
  _QWORD *v140; // rax
  _QWORD *v141; // rsi
  unsigned int v142; // edx
  unsigned int *v143; // rdi
  unsigned int v144; // edx
  size_t v145; // rsi
  unsigned int *v146; // rax
  _QWORD *v147; // rcx
  unsigned int *v148; // r8
  unsigned int *v149; // rsi
  unsigned int v150; // ecx
  size_t v151; // rsi
  unsigned int *v152; // rax
  unsigned int v153; // edx
  size_t v154; // rsi
  unsigned int *v155; // rax
  _QWORD *v156; // rcx
  unsigned int *v157; // r8
  unsigned int *v158; // rsi
  __int64 v159; // rax
  int v160; // r15d
  int *v161; // rax
  _QWORD *v162; // rax
  _QWORD *v163; // rax
  unsigned int v164; // ecx
  size_t v165; // rsi
  unsigned int *v166; // rax
  unsigned int v167; // r15d
  size_t v168; // rsi
  unsigned int *v169; // rax
  __int64 v170; // rax
  unsigned int v171; // r15d
  size_t v172; // rsi
  unsigned int *v173; // rax
  unsigned int v174; // r15d
  size_t v175; // rsi
  unsigned int *v176; // rax
  __int64 v177; // rax
  unsigned int v178; // edx
  size_t v179; // rsi
  unsigned int *v180; // rax
  unsigned int v181; // ecx
  unsigned int v182; // edx
  size_t v183; // rsi
  unsigned int *v184; // rax
  _QWORD *v185; // rax
  _QWORD *v186; // rax
  _QWORD *v187; // rax
  _QWORD *v188; // rax
  _QWORD *v189; // rax
  __int64 v190; // rax
  int v191; // edx
  _QWORD *v192; // rax
  __int64 v193; // [rsp+8h] [rbp-B0h]
  int v194; // [rsp+10h] [rbp-A8h]
  int v195; // [rsp+14h] [rbp-A4h]
  __int64 v196; // [rsp+18h] [rbp-A0h]
  __int64 v197; // [rsp+20h] [rbp-98h]
  __int64 v198; // [rsp+28h] [rbp-90h]
  int v199; // [rsp+30h] [rbp-88h]
  __int64 v200; // [rsp+30h] [rbp-88h]
  unsigned int v201; // [rsp+30h] [rbp-88h]
  unsigned int v202; // [rsp+30h] [rbp-88h]
  unsigned int v203; // [rsp+30h] [rbp-88h]
  int v204; // [rsp+30h] [rbp-88h]
  unsigned int v205; // [rsp+30h] [rbp-88h]
  __int32 *v206; // [rsp+30h] [rbp-88h]
  unsigned int v207; // [rsp+30h] [rbp-88h]
  __int32 *v208; // [rsp+30h] [rbp-88h]
  int v209; // [rsp+30h] [rbp-88h]
  unsigned int v210; // [rsp+30h] [rbp-88h]
  unsigned int v211; // [rsp+30h] [rbp-88h]
  __int32 *v212; // [rsp+30h] [rbp-88h]
  __int32 *v213; // [rsp+30h] [rbp-88h]
  int v214; // [rsp+30h] [rbp-88h]
  __int64 v215; // [rsp+38h] [rbp-80h]
  unsigned int v216; // [rsp+38h] [rbp-80h]
  unsigned int v217; // [rsp+38h] [rbp-80h]
  unsigned int v218; // [rsp+38h] [rbp-80h]
  unsigned int v219; // [rsp+38h] [rbp-80h]
  unsigned int v220; // [rsp+38h] [rbp-80h]
  __int64 v221; // [rsp+38h] [rbp-80h]
  unsigned int v222; // [rsp+38h] [rbp-80h]
  int v223[2]; // [rsp+40h] [rbp-78h]
  unsigned int v224; // [rsp+48h] [rbp-70h]
  unsigned int v225; // [rsp+4Ch] [rbp-6Ch]
  const __m128i *v226; // [rsp+58h] [rbp-60h] BYREF
  __int64 v227[11]; // [rsp+60h] [rbp-58h] BYREF

  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 3296LL);
  if ( v17 )
  {
    v18 = *(_DWORD *)(v17 - 4);
    v194 = v18 + 2;
    v195 = v18 + 1;
    v224 = 2 * (v18 + 1);
    v225 = 2 * (v18 + 2);
  }
  else
  {
    v225 = 4;
    v224 = 2;
    v194 = 2;
    v195 = 1;
  }
  *(_QWORD *)v223 = *(_QWORD *)(a1 + 72);
  if ( *a2 == 4 )
  {
    v198 = **((_QWORD **)a2 + 3);
    v196 = v198;
    v197 = **((_QWORD **)a2 + 4);
    v193 = **((_QWORD **)a2 + 5);
    if ( !v198 )
    {
      v23 = 0;
      v21 = 0;
      goto LABEL_13;
    }
  }
  else
  {
    if ( *a2 == 3 )
    {
      v198 = 0;
      v23 = 0;
      v21 = 0;
      v197 = 0;
      v196 = 0;
      v193 = 0;
      goto LABEL_13;
    }
    v19 = *(_QWORD *)(a1 + 88);
    v198 = **(_QWORD **)(v19 + 8LL * (unsigned int)a2[2]);
    v197 = **(_QWORD **)(v19 + 8LL * (unsigned int)a2[3]);
    if ( !v198 )
    {
      v196 = 0;
      v23 = 0;
      v21 = 0;
      v193 = 0;
      goto LABEL_13;
    }
    v193 = 0;
    v196 = 0;
  }
  v20 = sub_15E1B70(v223[0]);
  v21 = v20;
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  sub_7A15C0(*(_QWORD *)(a1 + 80), v195 & 0x7FFFFFFF, v20);
  if ( v196 )
  {
    v22 = sub_15E1B70(*(_QWORD *)(a1 + 72));
    v23 = v22;
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    sub_7A15C0(*(_QWORD *)(a1 + 80), v194 & 0x7FFFFFFF, v22);
  }
  else
  {
    v23 = 0;
  }
LABEL_13:
  v24 = *(_QWORD *)(a1 + 80);
  v199 = *(_DWORD *)(a1 + 124);
  v25 = sub_180C100(v24 + 2144, 24);
  *(_QWORD *)v25 = &off_1C4C070;
  *(_DWORD *)(v25 + 16) = v199;
  v26 = *(_QWORD **)(v24 + 2128);
  *(_QWORD *)(v25 + 8) = a1 + 124;
  if ( v26 )
  {
    v27 = *((_DWORD *)v26 - 1);
    if ( v27 == *((_DWORD *)v26 - 2) )
    {
      v48 = (3 * v27 + 1) >> 1;
      v49 = 8 * v48 + 8;
      if ( 8 * v27 + 8 >= (unsigned int)v49 || v27 >= v48 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v227, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v227);
        sub_233E40((__int64)v227);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v201 = (3 * v27 + 1) >> 1;
      v50 = (unsigned int *)sub_186B300(v26 - 1, v49);
      v26 = v50 + 2;
      *(_QWORD *)(v24 + 2128) = v50 + 2;
      *v50 = v201;
      LODWORD(v50) = v50[1];
      v30 = &v26[(unsigned int)v50];
      v29 = (_DWORD)v50 + 1;
    }
    else
    {
      v28 = v27;
      v29 = v27 + 1;
      v30 = &v26[v28];
    }
  }
  else
  {
    v162 = (_QWORD *)sub_186B270(0x18u);
    v26 = v162 + 1;
    *v162 = 2;
    v29 = 1;
    *(_QWORD *)(v24 + 2128) = v26;
    v30 = v26;
  }
  *v30 = v25;
  v31 = *(_QWORD *)(a1 + 80);
  v32 = a1 + 112;
  *((_DWORD *)v26 - 1) = v29;
  v33 = *(_QWORD *)(a1 + 112);
  if ( v33 )
    v34 = *(_DWORD *)(v33 - 4);
  else
    v34 = 0;
  v200 = v31;
  v35 = sub_180C100(v31 + 2144, 24);
  v36 = v35;
  *(_QWORD *)v35 = off_1C547E8;
  v37 = *(_QWORD **)(v200 + 2128);
  *(_QWORD *)(v35 + 8) = v32;
  *(_DWORD *)(v35 + 16) = v34;
  if ( v37 )
  {
    v38 = *((_DWORD *)v37 - 1);
    if ( v38 == *((_DWORD *)v37 - 2) )
    {
      v44 = (3 * v38 + 1) >> 1;
      v45 = 8 * v44 + 8;
      if ( 8 * v38 + 8 >= (unsigned int)v45 || v38 >= v44 )
      {
        v13 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v227, "Overflow encountered when expanding vector");
        *v13 = (char *)off_1C63128;
        sub_2333C0(v13 + 1, v227);
        sub_233E40((__int64)v227);
        __cxa_throw(v13, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v215 = v36;
      v46 = (unsigned int *)sub_186B300(v37 - 1, v45);
      v47 = v46[1];
      v37 = v46 + 2;
      v36 = v215;
      *(_QWORD *)(v200 + 2128) = v46 + 2;
      *v46 = v44;
      LODWORD(v46) = v47;
      v41 = &v37[v47];
      v40 = (_DWORD)v46 + 1;
    }
    else
    {
      v39 = v38;
      v40 = v38 + 1;
      v41 = &v37[v39];
    }
  }
  else
  {
    v221 = v35;
    v163 = (_QWORD *)sub_186B270(0x18u);
    v37 = v163 + 1;
    v36 = v221;
    *v163 = 2;
    v41 = v37;
    v40 = 1;
    *(_QWORD *)(v200 + 2128) = v37;
  }
  *v41 = v36;
  *((_DWORD *)v37 - 1) = v40;
  v42 = *a2;
  v226 = nullptr;
  v43 = v42;
  switch ( v42 )
  {
    case 0u:
      v218 = v42;
      v204 = a2[5] ^ 1;
      v134 = sub_186B270(0x10u);
      v135 = (__int64 *)(v134 + 8);
      i = v218;
      v226 = (const __m128i *)(v134 + 8);
      v137 = (unsigned int *)(v134 + 8 + 4 * v43);
      *(_DWORD *)(v134 + 8) = v204;
      *(_DWORD *)(v134 + 12) = a2[4];
      *(_QWORD *)v134 = 0x200000002LL;
      v138 = *(_QWORD *)(a1 + 112);
      if ( v138 )
        goto LABEL_126;
LABEL_130:
      v205 = i;
      v140 = (_QWORD *)sub_186B270(0x10u);
      v141 = v140 + 1;
      *v140 = 2;
      v135 = (__int64 *)v226;
      *(_QWORD *)(a1 + 112) = v140 + 1;
      v142 = v205;
      v143 = (unsigned int *)(v140 + 1);
LABEL_140:
      *v143 = *v137;
      ++*((_DWORD *)v141 - 1);
      if ( v135 )
      {
        for ( i = v142 + 1; i < *((_DWORD *)v135 - 1); ++i )
        {
          v138 = *(_QWORD *)(a1 + 112);
          v137 = (unsigned int *)v135 + i;
          if ( !v138 )
            goto LABEL_130;
LABEL_126:
          v139 = *(unsigned int *)(v138 - 4);
          if ( (_DWORD)v139 == *(_DWORD *)(v138 - 8) )
          {
            v150 = (unsigned int)(3 * v139 + 1) >> 1;
            v151 = 4 * v150 + 8;
            if ( 4 * (int)v139 + 8 >= (unsigned int)v151 || (unsigned int)v139 >= v150 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v227, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, v227);
              sub_233E40((__int64)v227);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v207 = i;
            v152 = (unsigned int *)sub_186B300((void *)(v138 - 8), v151);
            v141 = v152 + 2;
            v142 = v207;
            *(_QWORD *)(a1 + 112) = v152 + 2;
            *v152 = (unsigned int)(3 * v139 + 1) >> 1;
            v135 = (__int64 *)v226;
            v143 = &v152[v152[1] + 2];
            goto LABEL_140;
          }
          *(_DWORD *)(v138 + 4 * v139) = *v137;
          ++*(_DWORD *)(v138 - 4);
        }
        v159 = *((unsigned int *)v135 - 1);
        v160 = v224 ^ 1;
        if ( (_DWORD)v159 == *((_DWORD *)v135 - 2) )
        {
          v182 = (unsigned int)(3 * v159 + 1) >> 1;
          v183 = 4 * v182 + 8;
          if ( 4 * (int)v159 + 8 >= (unsigned int)v183 || (unsigned int)v159 >= v182 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v227, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v227);
            sub_233E40((__int64)v227);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v211 = (unsigned int)(3 * v159 + 1) >> 1;
          v184 = (unsigned int *)sub_186B300(v135 - 1, v183);
          v135 = (__int64 *)(v184 + 2);
          v226 = (const __m128i *)(v184 + 2);
          *v184 = v211;
          v161 = (int *)&v184[v184[1] + 2];
        }
        else
        {
          v161 = (int *)v135 + v159;
        }
      }
      else
      {
        v160 = v224 ^ 1;
        v192 = (_QWORD *)sub_186B270(0x10u);
        v135 = v192 + 1;
        *v192 = 2;
        v226 = (const __m128i *)(v192 + 1);
        v161 = (int *)(v192 + 1);
      }
      *v161 = v160;
      v69 = *(_QWORD **)(a1 + 112);
      ++*((_DWORD *)v135 - 1);
      goto LABEL_51;
    case 1u:
      (*(void (__fastcall **)(__int64, _QWORD, int *, const __m128i **, __int64))(*(_QWORD *)a1 + 80LL))(
        a1,
        (unsigned int)a2[4],
        a2 - 2,
        &v226,
        1);
      v116 = v226;
      if ( !v226 )
      {
        v190 = sub_186B270(0x10u);
        v191 = a2[4];
        v116 = (const __m128i *)(v190 + 8);
        v125 = 1;
        *(_QWORD *)v190 = 2;
        v226 = (const __m128i *)(v190 + 8);
        *(_DWORD *)(v190 + 8) = v191;
        v69 = *(_QWORD **)(a1 + 112);
        *(_DWORD *)(v190 + 4) = 1;
        goto LABEL_116;
      }
      v117 = v226[-1].m128i_u32[3];
      v118 = (const __m128i *)((char *)v226 + 4 * v117);
      if ( v226 == v118 )
        goto LABEL_114;
      v119 = 4 * v117 - 4;
      v120 = v226;
      v121 = (v119 >> 2) + 1;
      if ( v119 <= 8 )
        goto LABEL_110;
      v122 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
      v123 = &v226[v121 >> 2];
      do
      {
        v124 = _mm_loadu_si128(v120++);
        v120[-1] = _mm_xor_si128(v124, v122);
      }
      while ( v120 != v123 );
      if ( (v121 & 3) != 0 )
      {
        v120 = (const __m128i *)((char *)v116 + 4 * (v121 & 0xFFFFFFFFFFFFFFFCLL));
LABEL_110:
        v120->m128i_i32[0] ^= 1u;
        if ( v118 != (const __m128i *)((char *)v120->m128i_i64 + 4) )
        {
          v120->m128i_i32[1] ^= 1u;
          if ( v118 != (const __m128i *)&v120->m128i_u64[1] )
            v120->m128i_i32[2] ^= 1u;
        }
      }
      v117 = v116[-1].m128i_u32[3];
LABEL_114:
      if ( v116[-1].m128i_i32[2] == (_DWORD)v117 )
      {
        v178 = (unsigned int)(3 * v117 + 1) >> 1;
        v179 = 4 * v178 + 8;
        if ( 4 * (int)v117 + 8 >= (unsigned int)v179 || (unsigned int)v117 >= v178 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v227, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v227);
          sub_233E40((__int64)v227);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v210 = (unsigned int)(3 * v117 + 1) >> 1;
        v180 = (unsigned int *)sub_186B300(&v116[-1].m128i_u64[1], v179);
        v181 = a2[4];
        v116 = (const __m128i *)(v180 + 2);
        v226 = (const __m128i *)(v180 + 2);
        *v180 = v210;
        v180[v180[1] + 2] = v181;
        v69 = *(_QWORD **)(a1 + 112);
        v125 = v180[1] + 1;
        v180[1] = v125;
      }
      else
      {
        v116->m128i_i32[v117] = a2[4];
        v69 = *(_QWORD **)(a1 + 112);
        v125 = v116[-1].m128i_i32[3] + 1;
        v116[-1].m128i_i32[3] = v125;
      }
LABEL_116:
      if ( !v125 )
        goto LABEL_51;
      if ( !v69 )
      {
        v126 = (_QWORD *)sub_186B270(0x10u);
        v69 = v126 + 1;
        *v126 = 2;
        v127 = 0;
        *(_QWORD *)(a1 + 112) = v126 + 1;
        v128 = (unsigned int *)(v126 + 1);
        goto LABEL_119;
      }
      v127 = 0;
      do
      {
        v130 = *((unsigned int *)v69 - 1);
        v128 = (unsigned int *)v69 + v130;
        if ( (_DWORD)v130 == *((_DWORD *)v69 - 2) )
        {
          v131 = (unsigned int)(3 * v130 + 1) >> 1;
          v132 = 4 * v131 + 8;
          if ( 4 * (int)v130 + 8 >= (unsigned int)v132 || (unsigned int)v130 >= v131 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v227, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v227);
            sub_233E40((__int64)v227);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v217 = v127;
          v203 = (unsigned int)(3 * v130 + 1) >> 1;
          v133 = (unsigned int *)sub_186B300(v69 - 1, v132);
          v69 = v133 + 2;
          v127 = v217;
          *(_QWORD *)(a1 + 112) = v133 + 2;
          *v133 = v203;
          v128 = &v133[v133[1] + 2];
        }
LABEL_119:
        ++v127;
        *v128 = v116->m128i_i32[0];
        v129 = v226;
        ++*((_DWORD *)v69 - 1);
        if ( !v129 )
          break;
        v116 = (const __m128i *)((char *)v129 + 4 * v127);
      }
      while ( v127 < v129[-1].m128i_i32[3] );
      goto LABEL_131;
    case 2u:
      (*(void (__fastcall **)(__int64, _QWORD, int *, const __m128i **, __int64))(*(_QWORD *)a1 + 80LL))(
        a1,
        v224,
        a2 - 2,
        &v226,
        1);
      v101 = v226;
      if ( !v226 )
        goto LABEL_174;
      v102 = 4LL * v226[-1].m128i_u32[3];
      v103 = (const __m128i *)((char *)v226 + v102);
      if ( &v226->m128i_i8[v102] == (__int8 *)v226 )
        goto LABEL_95;
      v104 = v102 - 4;
      v105 = (v104 >> 2) + 1;
      v56 = v104 <= 8;
      v106 = v226;
      if ( v56 )
        goto LABEL_92;
      v107 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
      v108 = &v226[v105 >> 2];
      do
      {
        v109 = _mm_loadu_si128(v106++);
        v106[-1] = _mm_xor_si128(v109, v107);
      }
      while ( v106 != v108 );
      if ( (v105 & 3) != 0 )
      {
        v106 = (const __m128i *)((char *)v101 + 4 * (v105 & 0xFFFFFFFFFFFFFFFCLL));
LABEL_92:
        v106->m128i_i32[0] ^= 1u;
        if ( v103 != (const __m128i *)((char *)v106->m128i_i64 + 4) )
        {
          v106->m128i_i32[1] ^= 1u;
          if ( v103 != (const __m128i *)&v106->m128i_u64[1] )
            v106->m128i_i32[2] ^= 1u;
        }
      }
LABEL_95:
      v110 = 0;
      while ( 2 )
      {
        if ( v110 >= v101[-1].m128i_i32[3] )
          goto LABEL_100;
        while ( 2 )
        {
          v111 = &v101->m128i_i32[v110];
          v112 = *(_QWORD *)(a1 + 112);
          if ( v112 )
          {
            v113 = *(unsigned int *)(v112 - 4);
            if ( (_DWORD)v113 != *(_DWORD *)(v112 - 8) )
            {
              ++v110;
              *(_DWORD *)(v112 + 4 * v113) = *v111;
              ++*(_DWORD *)(v112 - 4);
              if ( v110 >= v101[-1].m128i_i32[3] )
              {
LABEL_100:
                v114 = v101[-1].m128i_u32[3];
                if ( (_DWORD)v114 == v101[-1].m128i_i32[2] )
                {
                  v167 = (unsigned int)(3 * v114 + 1) >> 1;
                  v168 = 4 * v167 + 8;
                  if ( 4 * (int)v114 + 8 >= (unsigned int)v168 || (unsigned int)v114 >= v167 )
                  {
                    v10 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v227, "Overflow encountered when expanding vector");
                    *v10 = (char *)off_1C63128;
                    sub_2333C0(v10 + 1, v227);
                    sub_233E40((__int64)v227);
                    __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v169 = (unsigned int *)sub_186B300(&v101[-1].m128i_u64[1], v168);
                  v101 = (const __m128i *)(v169 + 2);
                  *v169 = v167;
                  v170 = v169[1];
                  v226 = v101;
                  v115 = (unsigned int *)v101 + v170;
                }
                else
                {
                  v115 = (unsigned int *)v101 + v114;
                }
                goto LABEL_102;
              }
              continue;
            }
            v153 = (unsigned int)(3 * v113 + 1) >> 1;
            v154 = 4 * v153 + 8;
            if ( 4 * (int)v113 + 8 >= (unsigned int)v154 || (unsigned int)v113 >= v153 )
            {
              v12 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v227, "Overflow encountered when expanding vector");
              *v12 = (char *)off_1C63128;
              sub_2333C0(v12 + 1, v227);
              sub_233E40((__int64)v227);
              __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v220 = (unsigned int)(3 * v113 + 1) >> 1;
            v208 = v111;
            v155 = (unsigned int *)sub_186B300((void *)(v112 - 8), v154);
            v156 = v155 + 2;
            v157 = (unsigned int *)v208;
            *(_QWORD *)(a1 + 112) = v155 + 2;
            *v155 = v220;
            v101 = v226;
            v158 = &v155[v155[1] + 2];
          }
          else
          {
            v212 = &v101->m128i_i32[v110];
            v185 = (_QWORD *)sub_186B270(0x10u);
            v156 = v185 + 1;
            v101 = v226;
            v157 = (unsigned int *)v212;
            *v185 = 2;
            *(_QWORD *)(a1 + 112) = v185 + 1;
            v158 = (unsigned int *)(v185 + 1);
          }
          break;
        }
        *v158 = *v157;
        ++*((_DWORD *)v156 - 1);
        if ( v101 )
        {
          ++v110;
          continue;
        }
        break;
      }
LABEL_174:
      v187 = (_QWORD *)sub_186B270(0x10u);
      v101 = (const __m128i *)(v187 + 1);
      *v187 = 2;
      v226 = (const __m128i *)(v187 + 1);
      v115 = (unsigned int *)(v187 + 1);
LABEL_102:
      *v115 = v224;
      ++v101[-1].m128i_i32[3];
      v69 = *(_QWORD **)(a1 + 112);
      goto LABEL_51;
    case 3u:
      (*(void (__fastcall **)(__int64, _QWORD, int *, const __m128i **, __int64))(*(_QWORD *)a1 + 80LL))(
        a1,
        (unsigned int)a2[4],
        a2 - 2,
        &v226,
        1);
      v80 = v226;
      v81 = a2[4] ^ 1;
      if ( v226 )
      {
        v82 = v226[-1].m128i_u32[3];
        if ( (_DWORD)v82 == v226[-1].m128i_i32[2] )
        {
          v164 = (unsigned int)(3 * v82 + 1) >> 1;
          v165 = 4 * v164 + 8;
          if ( 4 * (int)v82 + 8 >= (unsigned int)v165 || (unsigned int)v82 >= v164 )
          {
            v11 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v227, "Overflow encountered when expanding vector");
            *v11 = (char *)off_1C63128;
            sub_2333C0(v11 + 1, v227);
            sub_233E40((__int64)v227);
            __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v222 = (unsigned int)(3 * v82 + 1) >> 1;
          v209 = a2[4] ^ 1;
          v166 = (unsigned int *)sub_186B300(&v226[-1].m128i_u64[1], v165);
          v80 = (const __m128i *)(v166 + 2);
          v81 = v209;
          v226 = (const __m128i *)(v166 + 2);
          *v166 = v222;
          v83 = (int *)&v166[v166[1] + 2];
        }
        else
        {
          v83 = &v226->m128i_i32[v82];
        }
      }
      else
      {
        v214 = a2[4] ^ 1;
        v189 = (_QWORD *)sub_186B270(0x10u);
        *v189 = 2;
        v83 = (int *)(v189 + 1);
        v81 = v214;
        v226 = (const __m128i *)v83;
        v80 = (const __m128i *)v83;
      }
      *v83 = v81;
      v84 = (unsigned int)(v80[-1].m128i_i32[3] + 1);
      v80[-1].m128i_i32[3] = v84;
      v85 = v84;
      v86 = 4 * v84;
      v87 = (const __m128i *)((char *)v80 + v86);
      if ( &v80->m128i_i8[v86] == (__int8 *)v80 )
        goto LABEL_76;
      v88 = v86 - 4;
      v89 = (v88 >> 2) + 1;
      v56 = v88 <= 8;
      v90 = v80;
      if ( v56 )
        goto LABEL_72;
      v91 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
      do
      {
        v92 = _mm_loadu_si128(v90++);
        v90[-1] = _mm_xor_si128(v92, v91);
      }
      while ( &v80[v89 >> 2] != v90 );
      if ( (v89 & 3) != 0 )
      {
        v90 = (const __m128i *)((char *)v80 + 4 * (v89 & 0xFFFFFFFFFFFFFFFCLL));
LABEL_72:
        v90->m128i_i32[0] ^= 1u;
        if ( v87 != (const __m128i *)((char *)v90->m128i_i64 + 4) )
        {
          v90->m128i_i32[1] ^= 1u;
          if ( v87 != (const __m128i *)&v90->m128i_u64[1] )
            v90->m128i_i32[2] ^= 1u;
        }
      }
      v85 = v80[-1].m128i_i32[3];
LABEL_76:
      v69 = *(_QWORD **)(a1 + 112);
      if ( !v85 )
        goto LABEL_51;
      if ( !v69 )
      {
        v93 = (_QWORD *)sub_186B270(0x10u);
        v69 = v93 + 1;
        *v93 = 2;
        v94 = 0;
        *(_QWORD *)(a1 + 112) = v93 + 1;
        v95 = (unsigned int *)(v93 + 1);
        goto LABEL_79;
      }
      v94 = 0;
      do
      {
        v97 = *((unsigned int *)v69 - 1);
        v95 = (unsigned int *)v69 + v97;
        if ( (_DWORD)v97 == *((_DWORD *)v69 - 2) )
        {
          v98 = (unsigned int)(3 * v97 + 1) >> 1;
          v99 = 4 * v98 + 8;
          if ( 4 * (int)v97 + 8 >= (unsigned int)v99 || (unsigned int)v97 >= v98 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v227, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v227);
            sub_233E40((__int64)v227);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v216 = v94;
          v202 = (unsigned int)(3 * v97 + 1) >> 1;
          v100 = (unsigned int *)sub_186B300(v69 - 1, v99);
          v69 = v100 + 2;
          v94 = v216;
          *(_QWORD *)(a1 + 112) = v100 + 2;
          *v100 = v202;
          v95 = &v100[v100[1] + 2];
        }
LABEL_79:
        ++v94;
        *v95 = v80->m128i_i32[0];
        v96 = v226;
        ++*((_DWORD *)v69 - 1);
        if ( !v96 )
          break;
        v80 = (const __m128i *)((char *)v96 + 4 * v94);
      }
      while ( v94 < v96[-1].m128i_i32[3] );
LABEL_131:
      *(_DWORD *)(a1 + 120) = *(_DWORD *)(a1 + 124);
      goto LABEL_52;
    case 4u:
      (*(void (__fastcall **)(__int64, _QWORD, int *, const __m128i **, __int64))(*(_QWORD *)a1 + 80LL))(
        a1,
        v224,
        a2 - 2,
        &v226,
        1);
      (*(void (__fastcall **)(__int64, _QWORD, int *, const __m128i **, __int64))(*(_QWORD *)a1 + 80LL))(
        a1,
        v225,
        a2 - 2,
        &v226,
        1);
      v51 = v226;
      if ( !v226 )
        goto LABEL_175;
      v52 = 4LL * v226[-1].m128i_u32[3];
      v53 = (const __m128i *)((char *)v226 + v52);
      if ( &v226->m128i_i8[v52] == (__int8 *)v226 )
        goto LABEL_41;
      v54 = v52 - 4;
      v55 = (v54 >> 2) + 1;
      v56 = v54 <= 8;
      v57 = v226;
      if ( v56 )
        goto LABEL_38;
      v58 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
      v59 = &v226[v55 >> 2];
      do
      {
        v60 = _mm_loadu_si128(v57++);
        v57[-1] = _mm_xor_si128(v60, v58);
      }
      while ( v59 != v57 );
      if ( (v55 & 3) != 0 )
      {
        v57 = (const __m128i *)((char *)v51 + 4 * (v55 & 0xFFFFFFFFFFFFFFFCLL));
LABEL_38:
        v57->m128i_i32[0] ^= 1u;
        if ( v53 != (const __m128i *)((char *)v57->m128i_i64 + 4) )
        {
          v57->m128i_i32[1] ^= 1u;
          if ( v53 != (const __m128i *)&v57->m128i_u64[1] )
            v57->m128i_i32[2] ^= 1u;
        }
      }
LABEL_41:
      v61 = 0;
LABEL_42:
      if ( v61 >= v51[-1].m128i_i32[3] )
        goto LABEL_46;
      break;
    default:
      goto LABEL_50;
  }
  while ( 1 )
  {
    v62 = &v51->m128i_i32[v61];
    v63 = *(_QWORD *)(a1 + 112);
    if ( !v63 )
    {
      v213 = &v51->m128i_i32[v61];
      v186 = (_QWORD *)sub_186B270(0x10u);
      v147 = v186 + 1;
      v51 = v226;
      v148 = (unsigned int *)v213;
      *v186 = 2;
      *(_QWORD *)(a1 + 112) = v186 + 1;
      v149 = (unsigned int *)(v186 + 1);
      goto LABEL_135;
    }
    v64 = *(unsigned int *)(v63 - 4);
    if ( (_DWORD)v64 == *(_DWORD *)(v63 - 8) )
      break;
    ++v61;
    *(_DWORD *)(v63 + 4 * v64) = *v62;
    ++*(_DWORD *)(v63 - 4);
    if ( v61 >= v51[-1].m128i_i32[3] )
    {
LABEL_46:
      v65 = v51[-1].m128i_u32[3];
      if ( (_DWORD)v65 == v51[-1].m128i_i32[2] )
      {
        v174 = (unsigned int)(3 * v65 + 1) >> 1;
        v175 = 4 * v174 + 8;
        if ( 4 * (int)v65 + 8 >= (unsigned int)v175 || (unsigned int)v65 >= v174 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v227, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v227);
          sub_233E40((__int64)v227);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v176 = (unsigned int *)sub_186B300(&v51[-1].m128i_u64[1], v175);
        v51 = (const __m128i *)(v176 + 2);
        *v176 = v174;
        v177 = v176[1];
        v226 = v51;
        v66 = (unsigned int *)v51 + v177;
      }
      else
      {
        v66 = (unsigned int *)v51 + v65;
      }
      goto LABEL_48;
    }
  }
  v144 = (unsigned int)(3 * v64 + 1) >> 1;
  v145 = 4 * v144 + 8;
  if ( 4 * (int)v64 + 8 >= (unsigned int)v145 || (unsigned int)v64 >= v144 )
  {
    v8 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v227, "Overflow encountered when expanding vector");
    *v8 = (char *)off_1C63128;
    sub_2333C0(v8 + 1, v227);
    sub_233E40((__int64)v227);
    __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v219 = (unsigned int)(3 * v64 + 1) >> 1;
  v206 = v62;
  v146 = (unsigned int *)sub_186B300((void *)(v63 - 8), v145);
  v147 = v146 + 2;
  v148 = (unsigned int *)v206;
  *(_QWORD *)(a1 + 112) = v146 + 2;
  *v146 = v219;
  v51 = v226;
  v149 = &v146[v146[1] + 2];
LABEL_135:
  *v149 = *v148;
  ++*((_DWORD *)v147 - 1);
  if ( v51 )
  {
    ++v61;
    goto LABEL_42;
  }
LABEL_175:
  v188 = (_QWORD *)sub_186B270(0x10u);
  v51 = (const __m128i *)(v188 + 1);
  *v188 = 2;
  v226 = (const __m128i *)(v188 + 1);
  v66 = (unsigned int *)(v188 + 1);
LABEL_48:
  *v66 = v224;
  v67 = v51[-1].m128i_i32[3];
  v68 = (unsigned int)(v67 + 1);
  v51[-1].m128i_i32[3] = v68;
  if ( (_DWORD)v68 == v51[-1].m128i_i32[2] )
  {
    v171 = (unsigned int)(3 * v68 + 1) >> 1;
    v172 = 4 * v171 + 8;
    if ( 4 * v67 + 12 >= (unsigned int)v172 || (unsigned int)v68 >= v171 )
    {
      v9 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v227, "Overflow encountered when expanding vector");
      *v9 = (char *)off_1C63128;
      sub_2333C0(v9 + 1, v227);
      sub_233E40((__int64)v227);
      __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v173 = (unsigned int *)sub_186B300(&v51[-1].m128i_u64[1], v172);
    v51 = (const __m128i *)(v173 + 2);
    *v173 = v171;
    v68 = v173[1];
    v226 = v51;
  }
  v51->m128i_i32[v68] = v225;
  ++v51[-1].m128i_i32[3];
LABEL_50:
  v69 = *(_QWORD **)(a1 + 112);
LABEL_51:
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a1 + 124);
  v70 = 0;
  if ( v69 )
LABEL_52:
    v70 = *((_DWORD *)v69 - 1);
  *(_DWORD *)(a1 + 124) = v70;
  v71 = sub_7E4EC0(a1);
  v72 = sub_180C100(v71, 64);
  v73 = *a2;
  v74 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(v72 + 16) = v32;
  *(_QWORD *)v72 = off_1C54E48;
  *(_QWORD *)(v72 + 24) = v74;
  v75 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(v72 + 32) = v198;
  v76 = *(_QWORD *)(v75 + 24);
  *(_DWORD *)(v72 + 8) = v73;
  *(_QWORD *)(v72 + 40) = v197;
  *(_QWORD *)(v72 + 48) = v196;
  *(_QWORD *)(v72 + 56) = v193;
  v227[0] = 1;
  v227[1] = v72;
  sub_11F1890(v76 + 552, &v226, v227);
  v77 = *(_QWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a1 + 124);
  sub_7A15C0(v77, v195 & 0x7FFFFFFF, 0);
  result = sub_7A15C0(*(_QWORD *)(a1 + 80), v194 & 0x7FFFFFFF, 0);
  if ( v226 )
    result = sub_186B220(&v226[-1].m128i_u64[1]);
  if ( v23 )
  {
    v79 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v79 )
      result = sub_15D7BC0(*(_QWORD *)v223, v23);
  }
  if ( v21 )
  {
    v79 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v79 )
      return sub_15D7BC0(*(_QWORD *)v223, v21);
  }
  return result;
}

