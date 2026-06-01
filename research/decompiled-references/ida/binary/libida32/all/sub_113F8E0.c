__int64 __fastcall sub_113F8E0(__int64 a1, __int64 *a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  _QWORD *v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rbx
  _QWORD *v13; // r12
  int v14; // ebx
  unsigned __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  const char **v18; // rax
  char *v19; // rbx
  const char *v20; // rdi
  size_t v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v28; // r13
  __int64 v29; // rax
  const __m128i *v30; // rbx
  __m128i si128; // xmm3
  __int64 v32; // rdi
  unsigned int v33; // eax
  const void *v34; // r15
  _BYTE *v35; // rbp
  unsigned int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned int v40; // r14d
  __int64 *v41; // r13
  __int64 v42; // rax
  __int64 v43; // rcx
  __m128i v44; // xmm4
  unsigned int v45; // eax
  __int64 v46; // r13
  const char **v47; // rax
  size_t v48; // r14
  const char *v49; // rbx
  unsigned int v50; // eax
  int v51; // eax
  void *v52; // rbx
  __int64 v53; // rdx
  void *v54; // rdi
  __int64 v55; // rbx
  __int64 v56; // r12
  char *v57; // rax
  __int64 v58; // rdi
  char *v59; // r12
  char *v60; // r15
  char *v61; // rdx
  __int64 v62; // rdi
  __int64 v63; // rax
  char *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // r8
  __int64 *v68; // rax
  __int64 v69; // rdx
  char *v70; // rdx
  unsigned __int64 v71; // rax
  __m128i *v72; // rbp
  const void *v73; // r15
  size_t v74; // r13
  __m128i *i; // r12
  size_t v76; // r14
  size_t v77; // rdx
  int v78; // eax
  __m128i v79; // xmm5
  unsigned __int8 *v80; // r12
  __int64 v81; // rcx
  _QWORD *v82; // rdx
  __int64 v83; // rax
  unsigned __int8 *v84; // r12
  _BOOL8 v85; // rcx
  _QWORD *v86; // rdx
  __int64 v87; // rax
  __int8 *v88; // r13
  unsigned __int64 v89; // rdx
  __int64 v90; // r12
  __m128i *v91; // rax
  __m128i v92; // xmm1
  __m128i *v93; // rdx
  __m128i v94; // xmm0
  __m128i v95; // xmm6
  __int64 v96; // r12
  unsigned __int64 v97; // rax
  size_t v98; // rdx
  __m128i *v99; // r13
  size_t v100; // rdx
  _BYTE *v101; // rsi
  char *v102; // r12
  bool v103; // dl
  unsigned __int8 *v104; // rbx
  __m128i *v105; // rax
  _QWORD *v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rax
  __m128i **v110; // r12
  __m128i *v111; // rdi
  __int64 v112; // rax
  void **v113; // r12
  unsigned __int64 v114; // rax
  void **v115; // r13
  void **v116; // rbx
  void **v117; // rdi
  void **v118; // rdi
  void **v119; // rbx
  void **v120; // r13
  __int64 v121; // rdx
  __int64 v122; // r12
  __int64 v123; // rax
  __int64 v124; // rdx
  int v125; // eax
  __int64 v126; // rax
  const char *v127; // rax
  int v128; // edx
  char v129; // al
  const __m128i *v130; // rbp
  __m128i v131; // xmm7
  __int64 v132; // rdi
  unsigned int v133; // eax
  const void *v134; // rbx
  _BYTE *v135; // r14
  unsigned int v136; // eax
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  unsigned int v140; // r13d
  __int64 *v141; // r15
  __int64 v142; // rax
  __int64 v143; // rcx
  __m128i v144; // xmm1
  unsigned int v145; // eax
  _BYTE *v146; // rax
  size_t v147; // r13
  _QWORD *v148; // rcx
  void *v149; // r8
  void *v150; // rax
  __m128i *v151; // rdx
  __int64 v152; // rdx
  unsigned __int64 v153; // rdx
  int v154; // eax
  unsigned __int64 v155; // rdx
  int v156; // eax
  unsigned __int64 v157; // rcx
  int v158; // eax
  __int64 v159; // rax
  _BOOL8 v160; // r15
  __int64 v161; // r13
  __int64 v162; // rdx
  __int64 v163; // r14
  __int64 v164; // r13
  void *v165; // rdi
  __int64 v166; // rax
  __int64 v167; // r15
  __int64 v168; // r13
  __int64 v169; // rdx
  __int64 v170; // r14
  __int64 v171; // r13
  void *v172; // rdi
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rcx
  __int64 v176; // rax
  __int64 v177; // r15
  __int64 v178; // r14
  bool v179; // bp
  void *v180; // rdi
  const char *v181; // r12
  __int64 v182; // rbx
  size_t v183; // rax
  unsigned __int64 v184; // rsi
  const char *v185; // r12
  unsigned int v186; // ecx
  __int64 v187; // rdi
  _QWORD *v189; // [rsp+10h] [rbp-148h]
  void *v190; // [rsp+10h] [rbp-148h]
  _BOOL8 v191; // [rsp+10h] [rbp-148h]
  bool v192; // [rsp+10h] [rbp-148h]
  __int64 v193; // [rsp+10h] [rbp-148h]
  __int64 v194; // [rsp+18h] [rbp-140h]
  void *v195; // [rsp+20h] [rbp-138h]
  __m128i *v196; // [rsp+20h] [rbp-138h]
  __int64 v197; // [rsp+28h] [rbp-130h]
  _BYTE *v198; // [rsp+28h] [rbp-130h]
  __int64 v199; // [rsp+28h] [rbp-130h]
  __int64 v200; // [rsp+30h] [rbp-128h]
  __int64 v201; // [rsp+30h] [rbp-128h]
  __int64 v202; // [rsp+30h] [rbp-128h]
  __int64 v203; // [rsp+38h] [rbp-120h]
  __int64 v204; // [rsp+38h] [rbp-120h]
  void *ptr; // [rsp+40h] [rbp-118h] BYREF
  unsigned int v206; // [rsp+48h] [rbp-110h]
  int v207; // [rsp+4Ch] [rbp-10Ch]
  int v208; // [rsp+50h] [rbp-108h]
  void *v209; // [rsp+60h] [rbp-F8h] BYREF
  size_t n; // [rsp+68h] [rbp-F0h]
  _QWORD v211[2]; // [rsp+70h] [rbp-E8h] BYREF
  void *src[2]; // [rsp+80h] [rbp-D8h]
  __m128i v213; // [rsp+90h] [rbp-C8h] BYREF
  void *v214; // [rsp+A0h] [rbp-B8h] BYREF
  unsigned __int64 v215; // [rsp+A8h] [rbp-B0h]
  const char *v216; // [rsp+B0h] [rbp-A8h]
  __int64 v217; // [rsp+B8h] [rbp-A0h]
  void *v218; // [rsp+C0h] [rbp-98h]
  __int64 v219; // [rsp+C8h] [rbp-90h]
  const char *v220; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v221; // [rsp+D8h] [rbp-80h]
  const char *v222; // [rsp+E0h] [rbp-78h]
  __int64 v223; // [rsp+E8h] [rbp-70h]
  const char *v224; // [rsp+F0h] [rbp-68h]
  __int64 v225; // [rsp+F8h] [rbp-60h]
  _QWORD v226[4]; // [rsp+100h] [rbp-58h] BYREF
  char v227; // [rsp+120h] [rbp-38h] BYREF

  LODWORD(v214) = 2260;
  v6 = sub_2193060(a3, &v214, 1);
  v7 = *(_QWORD *)(a3 + 8);
  v8 = (_QWORD *)(v7 + 8LL * (unsigned int)v6);
  v9 = (_QWORD *)(v7 + 8 * HIDWORD(v6));
  if ( v8 != v9 )
  {
    while ( !*v8 || !(unsigned __int8)sub_2195AD0(*v8, 2260) )
    {
      if ( v9 == ++v8 )
        goto LABEL_5;
    }
    if ( v9 != v8 )
    {
      do
      {
        v16 = *v8;
        v17 = *(_QWORD *)(*v8 + 16LL);
        if ( !v17 )
          v17 = *v8;
        ++v8;
        *(_BYTE *)(v17 + 44) |= 1u;
        if ( v8 == v9 )
          break;
        while ( !*v8 || !(unsigned __int8)sub_2195AD0(*v8, 2260) )
        {
          if ( v9 == ++v8 )
            goto LABEL_24;
        }
      }
      while ( v9 != v8 );
LABEL_24:
      v18 = *(const char ***)(v16 + 48);
      v19 = (char *)*v18;
      if ( *v18 )
      {
        v20 = *v18;
        v21 = strlen(*v18);
        if ( v21 == 6 && *(_DWORD *)v19 == 1769234798 && *((_WORD *)v19 + 2) == 25974 )
        {
          v25 = sub_227F670(v20, 2260, v22, v23, v24);
          if ( v26
            && (v26 != 7 || *(_DWORD *)v25 != 1701733735 || *(_WORD *)(v25 + 4) != 26994 || *(_BYTE *)(v25 + 6) != 99) )
          {
            *(_QWORD *)a1 = a1 + 16;
            sub_113C350((_QWORD *)a1, (_BYTE *)v25, v25 + v26);
            return a1;
          }
          goto LABEL_5;
        }
      }
      else
      {
        v21 = 0;
      }
      *(_QWORD *)a1 = a1 + 16;
      sub_113C350((_QWORD *)a1, v19, (__int64)&v19[v21]);
      return a1;
    }
  }
LABEL_5:
  LODWORD(v214) = 126;
  v10 = sub_2193060(a3, &v214, 1);
  v11 = *(_QWORD *)(a3 + 8);
  v12 = (_QWORD *)(v11 + 8LL * (unsigned int)v10);
  v13 = (_QWORD *)(v11 + 8 * HIDWORD(v10));
  if ( v12 != v13 )
  {
    while ( !*v12 || !(unsigned __int8)sub_2195AD0(*v12, 126) )
    {
      if ( v13 == ++v12 )
        goto LABEL_9;
    }
    if ( v13 != v12 )
    {
      do
      {
        v28 = *v12;
        v29 = *(_QWORD *)(*v12 + 16LL);
        if ( !v29 )
          v29 = *v12;
        ++v12;
        *(_BYTE *)(v29 + 44) |= 1u;
        if ( v12 == v13 )
          break;
        while ( !*v12 || !(unsigned __int8)sub_2195AD0(*v12, 126) )
        {
          if ( v13 == ++v12 )
            goto LABEL_44;
        }
      }
      while ( v13 != v12 );
LABEL_44:
      v215 = 3;
      v217 = 11;
      v214 = "AVX";
      v216 = "sandybridge";
      v218 = "AVX2";
      v220 = "haswell";
      v222 = "AVX512F";
      v224 = "knl";
      v226[0] = "AVX512";
      v226[2] = "skylake-avx512";
      v219 = 4;
      v221 = 7;
      v223 = 7;
      v225 = 3;
      v226[1] = 6;
      v226[3] = 14;
      sub_2220E00(&ptr, 4, 24);
      v30 = (const __m128i *)&v214;
      v197 = v28;
      v200 = a1;
      while ( 1 )
      {
        si128 = _mm_load_si128(v30 + 1);
        v32 = v30->m128i_i64[0];
        *(__m128i *)src = _mm_load_si128(v30);
        v213 = si128;
        v33 = sub_2220DF0(v32, src[1]);
        v34 = src[0];
        v35 = src[1];
        v36 = sub_2220F70(&ptr, src[0], src[1], v33);
        v40 = v36;
        v41 = (__int64 *)((char *)ptr + 8 * v36);
        if ( !*v41 )
          goto LABEL_50;
        if ( *v41 == -8 )
          break;
        sub_10C6320((__int64 **)&v209, v41, 0);
LABEL_46:
        v30 += 2;
        if ( v30 == (const __m128i *)&v227 )
        {
          v46 = v197;
          a1 = v200;
          if ( a4[8] != 37 )
            goto LABEL_56;
          v204 = v200;
          v214 = "IA32";
          v216 = "i386";
          v218 = "SSE";
          v220 = "pentium3";
          v222 = "SSE2";
          v224 = "pentium4";
          v215 = 4;
          v217 = 4;
          v219 = 3;
          v130 = (const __m128i *)&v214;
          v221 = 8;
          v223 = 4;
          v225 = 8;
          v202 = v197;
          while ( 1 )
          {
            v131 = _mm_load_si128(v130 + 1);
            v132 = v130->m128i_i64[0];
            *(__m128i *)src = _mm_load_si128(v130);
            v213 = v131;
            v133 = sub_2220DF0(v132, src[1]);
            v134 = src[0];
            v135 = src[1];
            v136 = sub_2220F70(&ptr, src[0], src[1], v133);
            v140 = v136;
            v141 = (__int64 *)((char *)ptr + 8 * v136);
            if ( !*v141 )
              goto LABEL_182;
            if ( *v141 == -8 )
              break;
            sub_10C6320((__int64 **)&v209, v141, 0);
LABEL_178:
            v130 += 2;
            if ( v130 == (const __m128i *)v226 )
            {
              v46 = v202;
              a1 = v204;
LABEL_56:
              v47 = *(const char ***)(v46 + 48);
              v48 = 0;
              v49 = *v47;
              if ( *v47 )
                v48 = strlen(*v47);
              v50 = sub_2220DF0(v49, v48);
              v51 = sub_2221120(&ptr, v49, v48, v50);
              if ( v51 == -1 )
                sub_113F8A0((__int64 **)&v214, (__int64 *)ptr + v206, 1);
              else
                sub_113F8A0((__int64 **)&v214, (__int64 *)ptr + v51, 1);
              v52 = v214;
              sub_113F8A0((__int64 **)&v214, (__int64 *)ptr + v206, 1);
              if ( v52 == v214 )
              {
                v198 = nullptr;
              }
              else
              {
                v53 = *(_QWORD *)(*(_QWORD *)v52 + 16LL);
                v198 = *(_BYTE **)(*(_QWORD *)v52 + 8LL);
                if ( v53 )
                  goto LABEL_62;
              }
              sub_113F8A0((__int64 **)&v214, (__int64 *)ptr + v206, 1);
              sub_113F8A0((__int64 **)&v214, (__int64 *)ptr, v206 == 0);
              v59 = (char *)v214;
              sub_113F8A0((__int64 **)&v214, (__int64 *)ptr + v206, 1);
              v60 = (char *)v214;
              sub_113F8A0((__int64 **)&v214, (__int64 *)ptr, v206 == 0);
              if ( v60 == v59 )
              {
                v196 = nullptr;
                v66 = 0;
                goto LABEL_105;
              }
              v61 = v59;
              v62 = 0;
              do
              {
                v63 = *((_QWORD *)v61 + 1);
                if ( v63 && v63 != -8 )
                {
                  v61 += 8;
                }
                else
                {
                  v64 = v61 + 16;
                  do
                  {
                    do
                    {
                      v65 = *(_QWORD *)v64;
                      v61 = v64;
                      v64 += 8;
                    }
                    while ( v65 == -8 );
                  }
                  while ( !v65 );
                }
                ++v62;
              }
              while ( v61 != v60 );
              if ( v62 > 0xFFFFFFFFFFFFFFFLL )
                std::__throw_bad_alloc();
              v66 = operator new(16 * v62);
              v196 = (__m128i *)v66;
              v68 = *(__int64 **)v59;
              do
              {
                v69 = *v68;
                *(_QWORD *)v66 = v68 + 3;
                v68 = *((__int64 **)v59 + 1);
                *(_QWORD *)(v66 + 8) = v69;
                if ( v68 != (__int64 *)-8LL && v68 )
                {
                  v59 += 8;
                }
                else
                {
                  v70 = v59 + 16;
                  do
                  {
                    do
                    {
                      v68 = *(__int64 **)v70;
                      v59 = v70;
                      v70 += 8;
                    }
                    while ( v68 == (__int64 *)-8LL );
                  }
                  while ( !v68 );
                }
                v66 += 16;
              }
              while ( v60 != v59 );
              if ( (__m128i *)v66 != v196 )
              {
                _BitScanReverse64(&v71, (v66 - (__int64)v196) >> 4);
                sub_113C780(v196, (const void **)v66, 2LL * (int)(63 - (v71 ^ 0x3F)), (__int64)v196, v67);
                if ( v66 - (__int64)v196 <= 256 )
                {
                  sub_113C410((__int64)v196, v66);
                  goto LABEL_105;
                }
                sub_113C410((__int64)v196, (__int64)v196[16].m128i_i64);
                if ( (__m128i *)v66 == &v196[16] )
                  goto LABEL_105;
                v203 = a1;
                v72 = v196 + 16;
                v201 = v46;
LABEL_96:
                v73 = (const void *)v72->m128i_i64[0];
                v74 = v72->m128i_u64[1];
                for ( i = v72; ; i[1] = v79 )
                {
                  v76 = i[-1].m128i_u64[1];
                  v77 = v76;
                  if ( v74 <= v76 )
                    v77 = v74;
                  if ( v77 && (v78 = memcmp(v73, (const void *)i[-1].m128i_i64[0], v77)) != 0 )
                  {
                    if ( v78 >= 0 )
                      goto LABEL_95;
                  }
                  else if ( v74 == v76 || v74 >= v76 )
                  {
LABEL_95:
                    ++v72;
                    i->m128i_i64[0] = (__int64)v73;
                    i->m128i_i64[1] = v74;
                    if ( (__m128i *)v66 != v72 )
                      goto LABEL_96;
                    v46 = v201;
                    a1 = v203;
                    break;
                  }
                  v79 = _mm_loadu_si128(--i);
                }
              }
LABEL_105:
              sub_FA3370((__int64)&v214, *a2, 0, 561);
              v80 = (unsigned __int8 *)v214;
              v81 = **(_QWORD **)(v46 + 48);
              if ( !v214 )
              {
                v155 = v215;
                v156 = *(_DWORD *)(v215 + 14976);
                if ( v156 )
                {
                  v166 = (unsigned int)(v156 - 1);
                  v167 = **(_QWORD **)(v46 + 48);
                  *(_DWORD *)(v215 + 14976) = v166;
                  v80 = *(unsigned __int8 **)(v155 + 8 * v166 + 14848);
                  v168 = *((unsigned int *)v80 + 134);
                  v169 = *((_QWORD *)v80 + 66);
                  *v80 = 0;
                  *((_DWORD *)v80 + 106) = 0;
                  v170 = v169;
                  v171 = v169 + (v168 << 6);
                  if ( v169 != v171 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v171 -= 64;
                        v172 = *(void **)(v171 + 24);
                        if ( v172 == (void *)(v171 + 40) )
                          break;
                        operator delete(v172);
                        if ( v170 == v171 )
                          goto LABEL_251;
                      }
                    }
                    while ( v170 != v171 );
LABEL_251:
                    v81 = v167;
                  }
                  *((_DWORD *)v80 + 134) = 0;
                }
                else
                {
                  v194 = **(_QWORD **)(v46 + 48);
                  v80 = (unsigned __int8 *)operator new(0x3A0u);
                  *v80 = 0;
                  *((_QWORD *)v80 + 12) = v80 + 112;
                  *((_QWORD *)v80 + 16) = v80 + 144;
                  *((_QWORD *)v80 + 20) = v80 + 176;
                  *((_QWORD *)v80 + 24) = v80 + 208;
                  *((_QWORD *)v80 + 28) = v80 + 240;
                  *((_QWORD *)v80 + 32) = v80 + 272;
                  *((_QWORD *)v80 + 36) = v80 + 304;
                  *((_QWORD *)v80 + 40) = v80 + 336;
                  *((_QWORD *)v80 + 44) = v80 + 368;
                  *((_QWORD *)v80 + 48) = v80 + 400;
                  *((_QWORD *)v80 + 52) = v80 + 432;
                  *((_QWORD *)v80 + 13) = 0;
                  v80[112] = 0;
                  *((_QWORD *)v80 + 17) = 0;
                  v80[144] = 0;
                  *((_QWORD *)v80 + 21) = 0;
                  v80[176] = 0;
                  *((_QWORD *)v80 + 25) = 0;
                  v80[208] = 0;
                  *((_QWORD *)v80 + 29) = 0;
                  v80[240] = 0;
                  *((_QWORD *)v80 + 33) = 0;
                  v80[272] = 0;
                  *((_QWORD *)v80 + 37) = 0;
                  v80[304] = 0;
                  *((_QWORD *)v80 + 41) = 0;
                  v80[336] = 0;
                  *((_QWORD *)v80 + 45) = 0;
                  v80[368] = 0;
                  *((_QWORD *)v80 + 49) = 0;
                  v80[400] = 0;
                  *((_QWORD *)v80 + 53) = 0x800000000LL;
                  v81 = v194;
                  *((_QWORD *)v80 + 66) = v80 + 544;
                  *((_QWORD *)v80 + 67) = 0x600000000LL;
                }
                v214 = v80;
              }
              v80[*v80 + 1] = 1;
              v82 = v214;
              v83 = *(unsigned __int8 *)v214;
              *(_BYTE *)v214 = v83 + 1;
              v82[v83 + 2] = v81;
              v84 = (unsigned __int8 *)v214;
              v85 = a4[8] == 37;
              if ( !v214 )
              {
                v153 = v215;
                v154 = *(_DWORD *)(v215 + 14976);
                if ( v154 )
                {
                  v159 = (unsigned int)(v154 - 1);
                  v160 = a4[8] == 37;
                  *(_DWORD *)(v215 + 14976) = v159;
                  v84 = *(unsigned __int8 **)(v153 + 8 * v159 + 14848);
                  v161 = *((unsigned int *)v84 + 134);
                  v162 = *((_QWORD *)v84 + 66);
                  *v84 = 0;
                  *((_DWORD *)v84 + 106) = 0;
                  v163 = v162;
                  v164 = v162 + (v161 << 6);
                  if ( v162 != v164 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v164 -= 64;
                        v165 = *(void **)(v164 + 24);
                        if ( v165 == (void *)(v164 + 40) )
                          break;
                        operator delete(v165);
                        if ( v163 == v164 )
                          goto LABEL_244;
                      }
                    }
                    while ( v163 != v164 );
LABEL_244:
                    v85 = v160;
                  }
                  *((_DWORD *)v84 + 134) = 0;
                }
                else
                {
                  v191 = a4[8] == 37;
                  v84 = (unsigned __int8 *)operator new(0x3A0u);
                  *v84 = 0;
                  *((_QWORD *)v84 + 12) = v84 + 112;
                  *((_QWORD *)v84 + 16) = v84 + 144;
                  *((_QWORD *)v84 + 20) = v84 + 176;
                  *((_QWORD *)v84 + 24) = v84 + 208;
                  *((_QWORD *)v84 + 28) = v84 + 240;
                  *((_QWORD *)v84 + 32) = v84 + 272;
                  *((_QWORD *)v84 + 36) = v84 + 304;
                  *((_QWORD *)v84 + 40) = v84 + 336;
                  *((_QWORD *)v84 + 44) = v84 + 368;
                  *((_QWORD *)v84 + 48) = v84 + 400;
                  *((_QWORD *)v84 + 52) = v84 + 432;
                  *((_QWORD *)v84 + 13) = 0;
                  v84[112] = 0;
                  *((_QWORD *)v84 + 17) = 0;
                  v84[144] = 0;
                  *((_QWORD *)v84 + 21) = 0;
                  v84[176] = 0;
                  *((_QWORD *)v84 + 25) = 0;
                  v84[208] = 0;
                  *((_QWORD *)v84 + 29) = 0;
                  v84[240] = 0;
                  *((_QWORD *)v84 + 33) = 0;
                  v84[272] = 0;
                  *((_QWORD *)v84 + 37) = 0;
                  v84[304] = 0;
                  *((_QWORD *)v84 + 41) = 0;
                  v84[336] = 0;
                  *((_QWORD *)v84 + 45) = 0;
                  v84[368] = 0;
                  *((_QWORD *)v84 + 49) = 0;
                  v84[400] = 0;
                  *((_QWORD *)v84 + 53) = 0x800000000LL;
                  v85 = v191;
                  *((_QWORD *)v84 + 66) = v84 + 544;
                  *((_QWORD *)v84 + 67) = 0x600000000LL;
                }
                v214 = v84;
              }
              v84[*v84 + 1] = 2;
              v86 = v214;
              v87 = *(unsigned __int8 *)v214;
              *(_BYTE *)v214 = v87 + 1;
              v86[v87 + 2] = v85;
              n = 0;
              v88 = (__int8 *)v211;
              LOBYTE(v211[0]) = 0;
              v209 = v211;
              if ( (__m128i *)v66 == v196 )
              {
                v103 = 0;
                v102 = nullptr;
                goto LABEL_126;
              }
              v89 = v66 - 16 - (_QWORD)v196;
              v90 = 2 * ((v66 - (__int64)v196) >> 4) - 2;
              v91 = v196;
              if ( v89 > 0x40 )
              {
                v92 = 0;
                v93 = (__m128i *)((char *)v196 + (v89 & 0xFFFFFFFFFFFFFFE0LL));
                do
                {
                  v94 = _mm_loadu_si128((const __m128i *)&v91->m128i_u64[1]);
                  v95 = _mm_loadu_si128((__m128i *)((char *)v91 + 24));
                  v91 += 2;
                  v92 = _mm_add_epi64(v92, _mm_unpacklo_epi64(v94, v95));
                }
                while ( v91 != v93 );
                v90 += _mm_add_epi64(v92, _mm_srli_si128(v92, 8)).m128i_u64[0];
                v91 = &v196[((unsigned __int64)(v66 - 16 - (_QWORD)v196) >> 4) & 0xFFFFFFFFFFFFFFFELL];
              }
              v96 = v91->m128i_i64[1] + v90;
              if ( (__m128i *)v66 != &v91[1] )
              {
                v96 += v91[1].m128i_i64[1];
                if ( (__m128i *)v66 != &v91[2] )
                {
                  v96 += v91[2].m128i_i64[1];
                  if ( (__m128i *)v66 != &v91[3] )
                  {
                    v96 += v91[3].m128i_i64[1];
                    if ( (__m128i *)v66 != &v91[4] )
                      v96 += v91[4].m128i_i64[1];
                  }
                }
              }
              v97 = 0x7FFFFFFFFFFFFFFFLL;
              if ( (unsigned __int64)v96 > 0xF )
              {
                if ( v96 >= 0 )
                {
                  if ( (unsigned __int64)v96 < 0x1E )
                    v96 = 30;
                  v146 = (_BYTE *)operator new(v96 + 1);
                  v147 = n;
                  v148 = v209;
                  v149 = v146;
                  if ( n )
                  {
                    if ( n != -1 )
                    {
                      v189 = v209;
                      v150 = memcpy(v146, v209, n + 1);
                      v148 = v189;
                      v149 = v150;
                    }
                  }
                  else
                  {
                    *v146 = *(_BYTE *)v209;
                  }
                  if ( v148 != v211 )
                  {
                    v190 = v149;
                    operator delete(v148);
                    v147 = n;
                    v149 = v190;
                  }
                  v209 = v149;
                  v211[0] = v96;
                  v97 = 0x7FFFFFFFFFFFFFFFLL - v147;
                  goto LABEL_118;
                }
              }
              else
              {
LABEL_118:
                v98 = v196->m128i_u64[1];
                if ( v98 > v97 )
                  goto LABEL_281;
                sub_9CA820(&v209, v196->m128i_i64[0], v98);
                v99 = v196 + 1;
                if ( (__m128i *)v66 != &v196[1] )
                {
                  if ( n != 0x7FFFFFFFFFFFFFFFLL && n != 9223372036854775806LL )
                  {
                    do
                    {
                      sub_9CA820(&v209, ", ", 2u);
                      v100 = v99->m128i_u64[1];
                      v101 = (_BYTE *)v99->m128i_i64[0];
                      if ( v100 > 0x7FFFFFFFFFFFFFFFLL - n )
                        break;
                      ++v99;
                      sub_9CA820(&v209, v101, v100);
                      if ( (__m128i *)v66 == v99 )
                        goto LABEL_125;
                    }
                    while ( 0x7FFFFFFFFFFFFFFFLL - n > 1 );
                  }
LABEL_281:
                  std::__throw_length_error("basic_string::append");
                }
LABEL_125:
                v88 = (__int8 *)v209;
                v102 = (char *)n;
                v103 = v209 == nullptr && (char *)v209 + n != nullptr;
LABEL_126:
                v104 = (unsigned __int8 *)v214;
                if ( !v214 )
                {
                  v157 = v215;
                  v158 = *(_DWORD *)(v215 + 14976);
                  if ( v158 )
                  {
                    v173 = (unsigned int)(v158 - 1);
                    *(_DWORD *)(v215 + 14976) = v173;
                    v104 = *(unsigned __int8 **)(v157 + 8 * v173 + 14848);
                    v174 = *((unsigned int *)v104 + 134);
                    *v104 = 0;
                    v175 = *((_QWORD *)v104 + 66);
                    *((_DWORD *)v104 + 106) = 0;
                    v176 = v175 + (v174 << 6);
                    if ( v175 != v176 )
                    {
                      v193 = a1;
                      v177 = v175;
                      v178 = v176;
                      v179 = v103;
                      do
                      {
                        while ( 1 )
                        {
                          v178 -= 64;
                          v180 = *(void **)(v178 + 24);
                          if ( v180 == (void *)(v178 + 40) )
                            break;
                          operator delete(v180);
                          if ( v177 == v178 )
                            goto LABEL_259;
                        }
                      }
                      while ( v177 != v178 );
LABEL_259:
                      v103 = v179;
                      a1 = v193;
                    }
                    *((_DWORD *)v104 + 134) = 0;
                  }
                  else
                  {
                    v192 = v103;
                    v104 = (unsigned __int8 *)operator new(0x3A0u);
                    *v104 = 0;
                    *((_QWORD *)v104 + 12) = v104 + 112;
                    *((_QWORD *)v104 + 16) = v104 + 144;
                    *((_QWORD *)v104 + 20) = v104 + 176;
                    *((_QWORD *)v104 + 24) = v104 + 208;
                    *((_QWORD *)v104 + 28) = v104 + 240;
                    *((_QWORD *)v104 + 32) = v104 + 272;
                    *((_QWORD *)v104 + 36) = v104 + 304;
                    *((_QWORD *)v104 + 40) = v104 + 336;
                    *((_QWORD *)v104 + 44) = v104 + 368;
                    *((_QWORD *)v104 + 48) = v104 + 400;
                    *((_QWORD *)v104 + 52) = v104 + 432;
                    *((_QWORD *)v104 + 13) = 0;
                    v104[112] = 0;
                    *((_QWORD *)v104 + 17) = 0;
                    v104[144] = 0;
                    *((_QWORD *)v104 + 21) = 0;
                    v104[176] = 0;
                    *((_QWORD *)v104 + 25) = 0;
                    v104[208] = 0;
                    *((_QWORD *)v104 + 29) = 0;
                    v104[240] = 0;
                    *((_QWORD *)v104 + 33) = 0;
                    v104[272] = 0;
                    *((_QWORD *)v104 + 37) = 0;
                    v104[304] = 0;
                    *((_QWORD *)v104 + 41) = 0;
                    v104[336] = 0;
                    *((_QWORD *)v104 + 45) = 0;
                    v104[368] = 0;
                    *((_QWORD *)v104 + 49) = 0;
                    v104[400] = 0;
                    *((_QWORD *)v104 + 53) = 0x800000000LL;
                    v103 = v192;
                    *((_QWORD *)v104 + 66) = v104 + 544;
                    *((_QWORD *)v104 + 67) = 0x600000000LL;
                  }
                  v214 = v104;
                }
                v104[*v104 + 1] = 0;
                v105 = &v213;
                src[0] = &v213;
                if ( v103 )
                  std::__throw_logic_error("basic_string::_M_construct null not valid");
                if ( (unsigned __int64)v102 <= 0xF )
                {
                  if ( v102 == (_BYTE *)&dword_0 + 1 )
                  {
                    v213.m128i_i8[0] = *v88;
                    goto LABEL_131;
                  }
                  if ( v102 )
                  {
LABEL_204:
                    memcpy(v105, v88, (size_t)v102);
                    v105 = (__m128i *)src[0];
                  }
LABEL_131:
                  src[1] = v102;
                  v102[(_QWORD)v105] = 0;
                  v106 = v214;
                  v107 = *(unsigned __int8 *)v214;
                  *(_BYTE *)v214 = v107 + 1;
                  v108 = (unsigned __int8)v107;
                  v109 = 4 * (v107 + 3);
                  v110 = (__m128i **)&v106[v109];
                  v111 = (__m128i *)v106[v109];
                  if ( src[0] == &v213 )
                  {
                    v151 = (__m128i *)src[1];
                    if ( src[1] )
                    {
                      if ( src[1] == (char *)&dword_0 + 1 )
                        v111->m128i_i8[0] = v213.m128i_i8[0];
                      else
                        memcpy(v111, src[0], (size_t)src[1]);
                      v151 = (__m128i *)src[1];
                      v111 = *v110;
                    }
                    v110[1] = v151;
                    v151->m128i_i8[(_QWORD)v111] = 0;
                    v111 = (__m128i *)src[0];
                    goto LABEL_135;
                  }
                  if ( v111 == (__m128i *)&v106[v109 + 2] )
                  {
                    *v110 = (__m128i *)src[0];
                    v110[1] = (__m128i *)src[1];
                    v110[2] = (__m128i *)v213.m128i_i64[0];
                  }
                  else
                  {
                    v112 = v106[4 * v108 + 14];
                    *v110 = (__m128i *)src[0];
                    v110[1] = (__m128i *)src[1];
                    v110[2] = (__m128i *)v213.m128i_i64[0];
                    if ( v111 )
                    {
                      src[0] = v111;
                      v213.m128i_i64[0] = v112;
LABEL_135:
                      src[1] = nullptr;
                      v111->m128i_i8[0] = 0;
                      if ( src[0] != &v213 )
                        operator delete(src[0]);
                      if ( v209 != v211 )
                        operator delete(v209);
                      if ( (_BYTE)v222 )
                      {
                        sub_FA3A50((__int64)v216, (__int64)&v214, SBYTE1(v222));
                        v216 = nullptr;
                        LOWORD(v222) = 0;
                      }
                      if ( v218 != &v220 )
                        operator delete(v218);
                      v113 = (void **)v214;
                      if ( v214 )
                      {
                        v114 = v215;
                        if ( v215 )
                        {
                          if ( (unsigned __int64)v214 < v215 || (unsigned __int64)v214 > v215 + 14848 )
                          {
                            v115 = *((void ***)v214 + 66);
                            v116 = &v115[8 * (unsigned __int64)*((unsigned int *)v214 + 134)];
                            if ( v115 != v116 )
                            {
                              do
                              {
                                while ( 1 )
                                {
                                  v116 -= 8;
                                  v117 = (void **)v116[3];
                                  if ( v117 == v116 + 5 )
                                    break;
                                  operator delete(v117);
                                  if ( v115 == v116 )
                                    goto LABEL_149;
                                }
                              }
                              while ( v115 != v116 );
LABEL_149:
                              v116 = (void **)v113[66];
                            }
                            if ( v116 != v113 + 68 )
                              free(v116);
                            v118 = (void **)v113[52];
                            if ( v118 != v113 + 54 )
                              free(v118);
                            v119 = v113 + 48;
                            v120 = v113 + 8;
                            do
                            {
                              while ( *v119 != v119 + 2 )
                              {
                                operator delete(*v119);
                                v119 -= 4;
                                if ( v119 == v120 )
                                  goto LABEL_157;
                              }
                              v119 -= 4;
                            }
                            while ( v119 != v120 );
LABEL_157:
                            operator delete(v113, 0x3A0u);
                          }
                          else
                          {
                            v152 = *(unsigned int *)(v215 + 14976);
                            *(_DWORD *)(v215 + 14976) = v152 + 1;
                            *(_QWORD *)(v114 + 8 * v152 + 14848) = v113;
                          }
                        }
                      }
                      if ( v196 )
                        operator delete(v196);
                      v53 = 0;
LABEL_62:
                      *(_QWORD *)a1 = a1 + 16;
                      sub_113C350((_QWORD *)a1, v198, (__int64)&v198[v53]);
                      if ( v207 )
                      {
                        v54 = ptr;
                        if ( v206 )
                        {
                          v55 = 0;
                          v56 = 8LL * (v206 - 1) + 8;
                          v57 = (char *)ptr;
                          do
                          {
                            v58 = *(_QWORD *)&v57[v55];
                            if ( v58 != -8 && v58 )
                            {
                              operator delete();
                              v57 = (char *)ptr;
                            }
                            v55 += 8;
                          }
                          while ( v56 != v55 );
                          v54 = v57;
                        }
                      }
                      else
                      {
                        v54 = ptr;
                      }
                      free(v54);
                      return a1;
                    }
                  }
                  v111 = &v213;
                  src[0] = &v213;
                  goto LABEL_135;
                }
                if ( (__int64)v102 >= 0 )
                {
                  v105 = (__m128i *)operator new((unsigned __int64)(v102 + 1));
                  v213.m128i_i64[0] = (__int64)v102;
                  src[0] = v105;
                  goto LABEL_204;
                }
              }
              std::__throw_length_error("basic_string::_M_create");
            }
          }
          --v208;
LABEL_182:
          v142 = sub_220C370(v135 + 25, 8, v136, v137, v138, v139);
          v143 = v142;
          if ( v135 )
          {
            v199 = v142;
            memcpy((void *)(v142 + 24), v134, (size_t)v135);
            v143 = v199;
          }
          v144 = _mm_load_si128(&v213);
          v135[v143 + 24] = 0;
          *(_QWORD *)v143 = v135;
          *(__m128i *)(v143 + 8) = v144;
          *v141 = v143;
          ++v207;
          v145 = sub_2221390(&ptr, v140);
          sub_10C6320((__int64 **)&v209, (__int64 *)ptr + v145, 0);
          goto LABEL_178;
        }
      }
      --v208;
LABEL_50:
      v42 = sub_220C370(v35 + 25, 8, v36, v37, v38, v39);
      v43 = v42;
      if ( v35 )
      {
        v195 = (void *)v42;
        memcpy((void *)(v42 + 24), v34, (size_t)v35);
        v43 = (__int64)v195;
      }
      v44 = _mm_load_si128(&v213);
      v35[v43 + 24] = 0;
      *(_QWORD *)v43 = v35;
      *(__m128i *)(v43 + 8) = v44;
      *v41 = v43;
      ++v207;
      v45 = sub_2221390(&ptr, v40);
      sub_10C6320((__int64 **)&v209, (__int64 *)ptr + v45, 0);
      goto LABEL_46;
    }
  }
LABEL_9:
  v14 = a4[8];
  if ( (unsigned int)(v14 - 37) > 1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = a1 + 16;
    *(_BYTE *)(a1 + 16) = 0;
    return a1;
  }
  v15 = (unsigned int)a4[11];
  if ( (unsigned int)v15 > 0x1F )
  {
    if ( v14 != 38 )
    {
LABEL_12:
      if ( a4[12] != 17 )
      {
        if ( (_DWORD)v15 == 11 )
        {
          sub_113CBC0((__int64 *)a1, "i486");
          return a1;
        }
        if ( (unsigned int)v15 > 0xB )
        {
          if ( (_DWORD)v15 == 12 || (_DWORD)v15 == 17 )
          {
            sub_113CBC0((__int64 *)a1, "i586");
            return a1;
          }
        }
        else if ( (_DWORD)v15 == 3 )
        {
          sub_113CBC0((__int64 *)a1, "i686");
          return a1;
        }
        sub_113CBC0((__int64 *)a1, "pentium4");
        return a1;
      }
      v181 = "i686";
      goto LABEL_268;
    }
LABEL_186:
    if ( a4[12] != 17 )
    {
      sub_113CBC0((__int64 *)a1, "x86-64");
      return a1;
    }
    v181 = "x86-64";
LABEL_268:
    v182 = a1 + 16;
    *(_QWORD *)a1 = a1 + 16;
    v183 = strlen(v181);
    if ( (unsigned int)v183 >= 8 )
    {
      v184 = (a1 + 24) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)(a1 + 16) = *(_QWORD *)v181;
      *(_QWORD *)(v182 + (unsigned int)v183 - 8) = *(_QWORD *)&v181[(unsigned int)v183 - 8];
      v185 = &v181[-(v182 - v184)];
      if ( (((_DWORD)v183 + (_DWORD)v182 - (_DWORD)v184) & 0xFFFFFFF8) >= 8 )
      {
        v186 = 0;
        do
        {
          v187 = v186;
          v186 += 8;
          *(_QWORD *)(v184 + v187) = *(_QWORD *)&v185[v187];
        }
        while ( v186 < (((_DWORD)v183 + (_DWORD)v182 - (_DWORD)v184) & 0xFFFFFFF8) );
      }
    }
    else if ( (v183 & 4) != 0 )
    {
      *(_DWORD *)(a1 + 16) = *(_DWORD *)v181;
      *(_DWORD *)(v182 + (unsigned int)v183 - 4) = *(_DWORD *)&v181[(unsigned int)v183 - 4];
    }
    else if ( (_DWORD)v183 )
    {
      *(_BYTE *)(a1 + 16) = *v181;
      if ( (v183 & 2) != 0 )
        *(_WORD *)(v182 + (unsigned int)v183 - 2) = *(_WORD *)&v181[(unsigned int)v183 - 2];
    }
    *(_QWORD *)(a1 + 8) = v183;
    *(_BYTE *)(a1 + v183 + 16) = 0;
    return a1;
  }
  v121 = 4160750114LL;
  if ( !_bittest64(&v121, v15) )
  {
    if ( v14 != 38 )
      goto LABEL_12;
    if ( (_DWORD)v15 == 24 && a4[10] == 3 )
    {
      sub_113CBC0((__int64 *)a1, "btver2");
      return a1;
    }
    if ( (_DWORD)v15 == 25 && a4[10] == 3 )
    {
      sub_113CBC0((__int64 *)a1, "znver2");
      return a1;
    }
    goto LABEL_186;
  }
  v122 = a1 + 16;
  v123 = sub_2293740(a4);
  if ( v124 == 7 && *(_DWORD *)v123 == 1597388920 && *(_WORD *)(v123 + 4) == 13366 && *(_BYTE *)(v123 + 6) == 104 )
  {
    *(_QWORD *)a1 = v122;
    strcpy((char *)(a1 + 16), "core-avx2");
    *(_QWORD *)(a1 + 8) = 9;
  }
  else
  {
    v125 = a4[11];
    if ( (v125 & 0xFFFFFFF7) == 1 )
    {
      v126 = sub_2293DC0(a4);
      if ( (unsigned int)v126 <= 9 )
      {
        v125 = a4[11];
      }
      else
      {
        if ( (_DWORD)v126 != 10 || (HIDWORD(v126) & 0x7FFFFFFFu) > 0xB )
        {
          *(_QWORD *)a1 = v122;
          strcpy((char *)(a1 + 16), "penryn");
          *(_QWORD *)(a1 + 8) = 6;
          return a1;
        }
        v125 = a4[11];
      }
    }
    if ( v125 == 30 )
    {
      *(_QWORD *)a1 = v122;
      *(_DWORD *)(a1 + 16) = 1634231662;
      *(_WORD *)(a1 + 20) = 25964;
      *(_BYTE *)(a1 + 22) = 109;
      *(_QWORD *)(a1 + 8) = 7;
      *(_BYTE *)(a1 + 23) = 0;
    }
    else
    {
      v127 = "core2";
      *(_QWORD *)a1 = v122;
      if ( v14 != 38 )
        v127 = "yonah";
      v128 = *(_DWORD *)v127;
      v129 = v127[4];
      *(_DWORD *)(a1 + 16) = v128;
      *(_BYTE *)(a1 + 20) = v129;
      *(_QWORD *)(a1 + 8) = 5;
      *(_BYTE *)(a1 + 21) = 0;
    }
  }
  return a1;
}

