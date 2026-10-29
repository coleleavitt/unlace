__int64 __fastcall sub_7C1E00(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // r13
  __int64 v4; // rdx
  char **v5; // r13
  __int64 v6; // rdx
  char **v7; // r13
  __int64 v8; // rdx
  char **exception; // r13
  __int64 v10; // rdx
  char **v11; // r13
  __int64 v12; // rdx
  char **v13; // r13
  __int64 v14; // rdx
  char **v15; // r13
  __int64 v16; // rdx
  char **v17; // r13
  __int64 v18; // rdx
  char **v19; // r13
  __int64 v20; // rdx
  char **v21; // r13
  __int64 v22; // rdx
  char **v23; // r13
  __int64 v24; // rdx
  __int64 *v25; // rax
  _QWORD *v26; // rbx
  unsigned int *v27; // rbp
  __int64 v28; // rdi
  int v29; // eax
  __int64 v30; // rax
  _DWORD *v31; // r13
  unsigned int *v32; // r12
  int v33; // esi
  __int64 v34; // rax
  unsigned int *v35; // rcx
  char *v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  __m128i v39; // xmm1
  char *v40; // rdx
  __m128 v41; // xmm0
  __m128 v42; // xmm2
  unsigned int *v43; // rdx
  __m128i v44; // xmm1
  int v45; // eax
  unsigned int v46; // r14d
  int v47; // r15d
  __int64 v48; // rax
  unsigned int *v49; // rax
  __int64 v50; // rax
  unsigned int v51; // r8d
  size_t v52; // rsi
  unsigned int *v53; // rax
  _QWORD *v54; // rax
  int v55; // eax
  __int64 v56; // rax
  int v57; // eax
  bool v58; // zf
  unsigned int v60; // ecx
  size_t v61; // rsi
  unsigned int v62; // r15d
  unsigned int *v63; // rax
  _DWORD *v64; // r13
  unsigned int v65; // r14d
  unsigned int v66; // eax
  unsigned int *v67; // r15
  __int64 v68; // rax
  unsigned int v69; // r12d
  __int64 v70; // rax
  unsigned int *v71; // rax
  __int64 v72; // rax
  unsigned int v73; // r8d
  size_t v74; // rsi
  unsigned int *v75; // rax
  _QWORD *v76; // rax
  unsigned int v77; // ecx
  size_t v78; // rsi
  unsigned int v79; // r12d
  unsigned int *v80; // rax
  int v81; // eax
  _QWORD *v82; // rbx
  unsigned int v83; // r15d
  __int64 v84; // rax
  int v85; // eax
  _DWORD *v86; // r12
  __int64 v87; // rax
  _DWORD *v88; // r15
  int v89; // edx
  __int64 v90; // rax
  __int64 v91; // rax
  unsigned int *v92; // rdx
  unsigned int v93; // edx
  size_t v94; // rsi
  unsigned int *v95; // rax
  unsigned int v96; // ecx
  size_t v97; // rsi
  unsigned int *v98; // rax
  _QWORD *v99; // rbx
  unsigned int v100; // r14d
  __int64 v101; // rax
  __int64 v102; // rax
  unsigned int v103; // r15d
  unsigned int *v104; // r14
  int v105; // ecx
  __int64 v106; // rax
  __int64 v107; // rax
  unsigned int *v108; // rcx
  unsigned int v109; // ecx
  size_t v110; // rsi
  unsigned int *v111; // rax
  unsigned int v112; // r9d
  size_t v113; // rsi
  unsigned int *v114; // rax
  _QWORD *v115; // rax
  int *v116; // rax
  _QWORD *v117; // rax
  unsigned int *v118; // rax
  int v119; // r15d
  int v120; // eax
  int v121; // eax
  int v122; // eax
  int v123; // r14d
  __int64 v124; // rax
  __int64 v125; // rax
  unsigned int *v126; // r14
  __int64 v127; // rdx
  unsigned int v128; // r13d
  __int64 v129; // rax
  __int64 v130; // rax
  unsigned int v131; // edx
  size_t v132; // rsi
  unsigned int *v133; // rax
  int v134; // eax
  unsigned int v135; // ecx
  size_t v136; // rsi
  unsigned int *v137; // rax
  unsigned int v138; // r15d
  __int64 v139; // rax
  __int64 v140; // r12
  unsigned int *v141; // rax
  int v142; // eax
  unsigned int v143; // edx
  size_t v144; // rsi
  unsigned int *v145; // rax
  _QWORD *v146; // rax
  int *v147; // rax
  _QWORD *v148; // rax
  unsigned int *v149; // rax
  _QWORD *v150; // rax
  int *v151; // rax
  int v152; // r14d
  _QWORD *v153; // rax
  unsigned int v154; // r14d
  __int64 *v155; // [rsp+0h] [rbp-138h]
  unsigned int *v156; // [rsp+8h] [rbp-130h]
  unsigned int *v157; // [rsp+8h] [rbp-130h]
  unsigned int v158; // [rsp+8h] [rbp-130h]
  unsigned int v159; // [rsp+8h] [rbp-130h]
  unsigned int *v160; // [rsp+8h] [rbp-130h]
  int v161; // [rsp+8h] [rbp-130h]
  unsigned int v162; // [rsp+8h] [rbp-130h]
  unsigned int v163; // [rsp+8h] [rbp-130h]
  unsigned int v164; // [rsp+8h] [rbp-130h]
  int v165; // [rsp+Ch] [rbp-12Ch]
  int v167; // [rsp+1Ch] [rbp-11Ch]
  unsigned int v168; // [rsp+1Ch] [rbp-11Ch]
  int v169; // [rsp+1Ch] [rbp-11Ch]
  __int64 *v170; // [rsp+20h] [rbp-118h]
  unsigned int v171; // [rsp+28h] [rbp-110h]
  unsigned int v172; // [rsp+28h] [rbp-110h]
  unsigned int v173; // [rsp+28h] [rbp-110h]
  unsigned int v174; // [rsp+28h] [rbp-110h]
  int v175; // [rsp+28h] [rbp-110h]
  int v176; // [rsp+2Ch] [rbp-10Ch]
  int v177; // [rsp+30h] [rbp-108h]
  int v179; // [rsp+50h] [rbp-E8h] BYREF
  int v180; // [rsp+54h] [rbp-E4h] BYREF
  int v181; // [rsp+58h] [rbp-E0h] BYREF
  unsigned int v182; // [rsp+5Ch] [rbp-DCh] BYREF
  int v183; // [rsp+60h] [rbp-D8h] BYREF
  unsigned int v184; // [rsp+64h] [rbp-D4h] BYREF
  int v185; // [rsp+68h] [rbp-D0h] BYREF
  int v186; // [rsp+6Ch] [rbp-CCh] BYREF
  int v187; // [rsp+70h] [rbp-C8h] BYREF
  int v188; // [rsp+74h] [rbp-C4h] BYREF
  int v189; // [rsp+78h] [rbp-C0h] BYREF
  int v190; // [rsp+7Ch] [rbp-BCh] BYREF
  unsigned int *v191; // [rsp+80h] [rbp-B8h] BYREF
  _QWORD *v192; // [rsp+88h] [rbp-B0h] BYREF
  _QWORD *v193; // [rsp+90h] [rbp-A8h] BYREF
  _QWORD *v194; // [rsp+98h] [rbp-A0h] BYREF
  unsigned int *v195; // [rsp+A0h] [rbp-98h] BYREF
  _QWORD *v196; // [rsp+A8h] [rbp-90h] BYREF
  unsigned int *v197; // [rsp+B0h] [rbp-88h] BYREF
  _QWORD *v198; // [rsp+B8h] [rbp-80h] BYREF
  unsigned int *v199; // [rsp+C0h] [rbp-78h] BYREF
  _QWORD *v200; // [rsp+C8h] [rbp-70h] BYREF
  unsigned int *v201; // [rsp+D0h] [rbp-68h] BYREF
  _QWORD *v202; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v203[11]; // [rsp+E0h] [rbp-58h] BYREF

  v25 = *(__int64 **)(a1 + 744);
  if ( !v25 )
    return 1;
  v155 = *(__int64 **)(a1 + 744);
  v26 = nullptr;
  v27 = nullptr;
  v170 = &v25[*((unsigned int *)v25 - 1)];
  if ( v25 == v170 )
    return 1;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v28 = *v155;
          v29 = *(_DWORD *)(*v155 + 8);
          if ( v29 )
            break;
          v64 = (_DWORD *)sub_828140(v28);
          v65 = v64[8];
          v66 = v64[15];
          v172 = v66;
          if ( v64[4] != -2 )
          {
            if ( v26 )
              *((_DWORD *)v26 - 1) = 0;
            if ( v27 )
              *(v27 - 1) = 0;
            v67 = v64 + 16;
            v68 = (unsigned int)v64[8];
            v157 = &v64[v68 + 16];
            if ( v68 * 4 )
            {
              v69 = v64[16];
              if ( v26 )
              {
                while ( 1 )
                {
                  v72 = *((unsigned int *)v26 - 1);
                  if ( (_DWORD)v72 != *((_DWORD *)v26 - 2) )
                    break;
                  v73 = (unsigned int)(3 * v72 + 1) >> 1;
                  v74 = 4 * v73 + 8;
                  if ( 4 * (int)v72 + 8 >= (unsigned int)v74 || (unsigned int)v72 >= v73 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_113C8C(v203, "Overflow encountered when expanding vector", v10);
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v203);
                    sub_233E40((__int64)v203);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v168 = (unsigned int)(3 * v72 + 1) >> 1;
                  v75 = (unsigned int *)sub_186B300(v26 - 1, v74);
                  v26 = v75 + 2;
                  *v75 = v168;
                  v75[v75[1]++ + 2] = v69;
                  if ( v27 )
                    goto LABEL_58;
LABEL_66:
                  v76 = (_QWORD *)sub_186B270(0x10u);
                  v27 = (unsigned int *)(v76 + 1);
                  *v76 = 2;
                  v71 = (unsigned int *)(v76 + 1);
LABEL_60:
                  *v71 = 1;
                  ++v67;
                  ++*(v27 - 1);
                  if ( v157 == v67 )
                    goto LABEL_70;
                  v69 = *v67;
                }
                v118 = (unsigned int *)v26 + v72;
              }
              else
              {
                v117 = (_QWORD *)sub_186B270(0x10u);
                v26 = v117 + 1;
                *v117 = 2;
                v118 = (unsigned int *)(v117 + 1);
              }
              *v118 = v69;
              ++*((_DWORD *)v26 - 1);
              if ( !v27 )
                goto LABEL_66;
LABEL_58:
              v70 = *(v27 - 1);
              if ( (_DWORD)v70 == *(v27 - 2) )
              {
                v77 = (unsigned int)(3 * v70 + 1) >> 1;
                v78 = 4 * v77 + 8;
                v79 = v77;
                if ( 4 * (int)v70 + 8 >= (unsigned int)v78 || (unsigned int)v70 >= v77 )
                {
                  v7 = (char **)__cxa_allocate_exception(0x28u);
                  sub_113C8C(v203, "Overflow encountered when expanding vector", v8);
                  *v7 = (char *)off_1C63128;
                  sub_2333C0(v7 + 1, v203);
                  sub_233E40((__int64)v203);
                  __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v80 = (unsigned int *)sub_186B300(v27 - 2, v78);
                v27 = v80 + 2;
                *v80 = v79;
                v71 = &v80[v80[1] + 2];
              }
              else
              {
                v71 = &v27[v70];
              }
              goto LABEL_60;
            }
LABEL_70:
            v81 = v64[4];
            v192 = v26;
            LODWORD(v203[0]) = v81 ^ 1;
            sub_7B5E20(&v192, (unsigned int *)v203);
            v82 = v192;
            v83 = v65 + 1 - v172;
            if ( !v27 || (v84 = *(v27 - 1), (_DWORD)v84 == *(v27 - 2)) )
            {
              v191 = v27;
              sub_2FD3F0(&v191);
              v27 = v191;
              v191[*(v191 - 1)] = v83;
              ++*(v27 - 1);
              if ( v82 )
                goto LABEL_73;
            }
            else
            {
              v27[v84] = v83;
              ++*(v27 - 1);
              if ( v82 )
              {
LABEL_73:
                v85 = *((_DWORD *)v82 - 1);
LABEL_74:
                v181 = v85;
                v194 = v82;
                v58 = *(_QWORD *)(a3 + 16) == 0;
                v195 = v27;
                v182 = v65;
                if ( v58 )
                  std::__throw_bad_function_call();
                (*(void (__fastcall **)(__int64, int *, _QWORD **, unsigned int **, unsigned int *))(a3 + 24))(
                  a3,
                  &v181,
                  &v194,
                  &v195,
                  &v182);
                if ( v82 )
                  *((_DWORD *)v82 - 1) = 0;
                *(v27 - 1) = 0;
                v86 = v64 + 16;
                v87 = (unsigned int)v64[8];
                v88 = &v64[v87 + 16];
                if ( v87 * 4 )
                {
                  v89 = v64[16] ^ 1;
                  if ( !v82 )
                  {
                    v161 = v64[16] ^ 1;
                    v115 = (_QWORD *)sub_186B270(0x10u);
                    v82 = v115 + 1;
                    v89 = v161;
                    *v115 = 2;
                    v116 = (int *)(v115 + 1);
                    goto LABEL_84;
                  }
                  while ( 1 )
                  {
                    v90 = *((unsigned int *)v82 - 1);
                    if ( (_DWORD)v90 == *((_DWORD *)v82 - 2) )
                    {
                      v96 = (unsigned int)(3 * v90 + 1) >> 1;
                      v97 = 4 * v96 + 8;
                      if ( 4 * (int)v90 + 8 >= (unsigned int)v97 || (unsigned int)v90 >= v96 )
                      {
                        v3 = (char **)__cxa_allocate_exception(0x28u);
                        sub_113C8C(v203, "Overflow encountered when expanding vector", v4);
                        *v3 = (char *)off_1C63128;
                        sub_2333C0(v3 + 1, v203);
                        sub_233E40((__int64)v203);
                        __cxa_throw(
                          v3,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v169 = v89;
                      v159 = (unsigned int)(3 * v90 + 1) >> 1;
                      v98 = (unsigned int *)sub_186B300(v82 - 1, v97);
                      v82 = v98 + 2;
                      v89 = v169;
                      *v98 = v159;
                      v116 = (int *)&v98[v98[1] + 2];
                    }
                    else
                    {
                      v116 = (int *)v82 + v90;
                    }
LABEL_84:
                    *v116 = v89;
                    ++*((_DWORD *)v82 - 1);
                    v91 = *(v27 - 1);
                    v92 = &v27[v91];
                    if ( (_DWORD)v91 == *(v27 - 2) )
                    {
                      v93 = (unsigned int)(3 * v91 + 1) >> 1;
                      v94 = 4 * v93 + 8;
                      if ( 4 * (int)v91 + 8 >= (unsigned int)v94 || (unsigned int)v91 >= v93 )
                      {
                        v5 = (char **)__cxa_allocate_exception(0x28u);
                        sub_113C8C(v203, "Overflow encountered when expanding vector", v6);
                        *v5 = (char *)off_1C63128;
                        sub_2333C0(v5 + 1, v203);
                        sub_233E40((__int64)v203);
                        __cxa_throw(
                          v5,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v158 = (unsigned int)(3 * v91 + 1) >> 1;
                      v95 = (unsigned int *)sub_186B300(v27 - 2, v94);
                      v27 = v95 + 2;
                      *v95 = v158;
                      v92 = &v95[v95[1] + 2];
                    }
                    ++v86;
                    *v92 = 1;
                    ++*(v27 - 1);
                    if ( v88 == v86 )
                      break;
                    v89 = *v86 ^ 1;
                  }
                  v55 = v64[4];
                  v192 = v82;
                  LODWORD(v203[0]) = v55;
                  sub_7B5E20(&v192, (unsigned int *)v203);
                }
                else
                {
                  LODWORD(v203[0]) = v64[4];
                  sub_7B5E20(&v192, (unsigned int *)v203);
                }
                v26 = v192;
                v56 = *(v27 - 1);
                if ( (_DWORD)v56 == *(v27 - 2) )
                {
                  v191 = v27;
                  sub_2FD3F0(&v191);
                  v27 = v191;
                  v56 = *(v191 - 1);
                }
                v27[v56] = v172;
                ++*(v27 - 1);
                if ( v26 )
                  v57 = *((_DWORD *)v26 - 1);
                else
                  v57 = 0;
                v183 = v57;
                v196 = v26;
                v58 = *(_QWORD *)(a3 + 16) == 0;
                v197 = v27;
                v184 = v65;
                if ( v58 )
                  std::__throw_bad_function_call();
                (*(void (__fastcall **)(__int64, int *, _QWORD **, unsigned int **, unsigned int *))(a3 + 24))(
                  a3,
                  &v183,
                  &v196,
                  &v197,
                  &v184);
                goto LABEL_39;
              }
            }
            v85 = 0;
            goto LABEL_74;
          }
          if ( v26 )
          {
            *((_DWORD *)v26 - 1) = 0;
            if ( v65 )
            {
              v138 = v64[16];
              v139 = *((unsigned int *)v26 - 1);
              v140 = 0;
              if ( (_DWORD)v139 == *((_DWORD *)v26 - 2) )
                goto LABEL_144;
LABEL_141:
              v141 = (unsigned int *)v26 + v139;
              goto LABEL_142;
            }
          }
          else if ( v65 )
          {
            v138 = v64[16];
            v153 = (_QWORD *)sub_186B270(0x10u);
            v26 = v153 + 1;
            *v153 = 2;
            v140 = 0;
            v141 = (unsigned int *)(v153 + 1);
LABEL_142:
            while ( 1 )
            {
              *v141 = v138;
              ++v140;
              v142 = *((_DWORD *)v26 - 1) + 1;
              *((_DWORD *)v26 - 1) = v142;
              if ( (unsigned int)v140 >= v65 )
                break;
              v138 = v64[v140 + 16];
              v139 = *((unsigned int *)v26 - 1);
              if ( (_DWORD)v139 != *((_DWORD *)v26 - 2) )
                goto LABEL_141;
LABEL_144:
              v143 = (unsigned int)(3 * v139 + 1) >> 1;
              v144 = 4 * v143 + 8;
              if ( 4 * (int)v139 + 8 >= (unsigned int)v144 || (unsigned int)v139 >= v143 )
              {
                v13 = (char **)__cxa_allocate_exception(0x28u);
                sub_113C8C(v203, "Overflow encountered when expanding vector", v14);
                *v13 = (char *)off_1C63128;
                sub_2333C0(v13 + 1, v203);
                sub_233E40((__int64)v203);
                __cxa_throw(v13, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v164 = (unsigned int)(3 * v139 + 1) >> 1;
              v145 = (unsigned int *)sub_186B300(v26 - 1, v144);
              v26 = v145 + 2;
              *v145 = v164;
              v141 = &v145[v145[1] + 2];
            }
            v152 = v65 - v172;
            goto LABEL_148;
          }
          v154 = v66;
          v142 = 0;
          v152 = -v154;
LABEL_148:
          v179 = v142;
          v193 = v26;
          v58 = *(_QWORD *)(a2 + 16) == 0;
          v180 = v152;
          if ( v58 )
            std::__throw_bad_function_call();
          (*(void (__fastcall **)(__int64, int *, _QWORD **, int *))(a2 + 24))(a2, &v179, &v193, &v180);
          if ( v170 == ++v155 )
            goto LABEL_40;
        }
        if ( v29 == 1 )
          break;
LABEL_39:
        if ( v170 == ++v155 )
          goto LABEL_40;
      }
      v30 = sub_81AF20(v28);
      v31 = (_DWORD *)v30;
      if ( v26 )
        *((_DWORD *)v26 - 1) = 0;
      if ( v27 )
        *(v27 - 1) = 0;
      v32 = (unsigned int *)(v30 + 76);
      v33 = *(_DWORD *)(v30 + 16);
      v34 = 2LL * *(unsigned int *)(v30 + 32);
      v35 = &v31[v34 + 19];
      v156 = v35;
      if ( v34 * 4 )
        break;
      if ( v33 != -2 )
      {
        v167 = 0;
        goto LABEL_93;
      }
      v119 = -v31[15];
      if ( v26 )
LABEL_110:
        v120 = *((_DWORD *)v26 - 1);
      else
        v120 = 0;
      v185 = v120;
      v198 = v26;
      v58 = *(_QWORD *)(a3 + 16) == 0;
      v199 = v27;
      v186 = v119;
      if ( v58 )
        std::__throw_bad_function_call();
      (*(void (__fastcall **)(__int64, int *, _QWORD **, unsigned int **, int *))(a3 + 24))(
        a3,
        &v185,
        &v198,
        &v199,
        &v186);
      if ( v170 == ++v155 )
        goto LABEL_40;
    }
    v36 = (char *)v31;
    v37 = (char *)v35 - (char *)v31 - 84;
    v38 = v37 >> 3;
    if ( v37 <= 0x18 )
    {
      v43 = v31 + 19;
      v45 = 0;
    }
    else
    {
      v39 = 0;
      v40 = (char *)v31 + (v37 & 0xFFFFFFFFFFFFFFE0LL);
      do
      {
        v41 = (__m128)_mm_loadu_si128((const __m128i *)(v36 + 76));
        v42 = (__m128)_mm_loadu_si128((const __m128i *)(v36 + 92));
        v36 += 32;
        v39 = _mm_add_epi32(v39, (__m128i)_mm_shuffle_ps(v41, v42, 136));
      }
      while ( v36 != v40 );
      v43 = &v32[2 * (v38 & 0xFFFFFFFFFFFFFFFCLL)];
      v44 = _mm_add_epi32(v39, _mm_srli_si128(v39, 8));
      v45 = _mm_cvtsi128_si32(_mm_add_epi32(v44, _mm_srli_si128(v44, 4)));
    }
    v167 = *v43 + v45;
    if ( v156 != v43 + 2 )
    {
      v167 = v43[2] + *v43 + v45;
      if ( v156 != v43 + 4 )
      {
        v167 = v43[4] + v43[2] + *v43 + v45;
        if ( v156 != v43 + 6 )
          v167 = v43[6] + v43[4] + v43[2] + *v43 + v45;
      }
    }
    if ( v33 == -2 )
    {
      v46 = v31[19];
      v47 = v31[20] ^ 1;
      if ( v26 )
      {
        while ( 1 )
        {
          v50 = *((unsigned int *)v26 - 1);
          if ( (_DWORD)v50 != *((_DWORD *)v26 - 2) )
            break;
          v51 = (unsigned int)(3 * v50 + 1) >> 1;
          v52 = 4 * v51 + 8;
          if ( 4 * (int)v50 + 8 >= (unsigned int)v52 || (unsigned int)v50 >= v51 )
          {
            v23 = (char **)__cxa_allocate_exception(0x28u);
            sub_113C8C(v203, "Overflow encountered when expanding vector", v24);
            *v23 = (char *)off_1C63128;
            sub_2333C0(v23 + 1, v203);
            sub_233E40((__int64)v203);
            __cxa_throw(v23, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v171 = (unsigned int)(3 * v50 + 1) >> 1;
          v53 = (unsigned int *)sub_186B300(v26 - 1, v52);
          v26 = v53 + 2;
          *v53 = v171;
          v53[v53[1]++ + 2] = v47;
          if ( v27 )
            goto LABEL_23;
LABEL_31:
          v54 = (_QWORD *)sub_186B270(0x10u);
          v27 = (unsigned int *)(v54 + 1);
          *v54 = 2;
          v49 = (unsigned int *)(v54 + 1);
LABEL_25:
          *v49 = v46;
          v32 += 2;
          ++*(v27 - 1);
          if ( v156 == v32 )
          {
            v119 = v167 - v31[15];
            goto LABEL_110;
          }
          v46 = *v32;
          v47 = v32[1] ^ 1;
        }
        v147 = (int *)v26 + v50;
      }
      else
      {
        v146 = (_QWORD *)sub_186B270(0x10u);
        v26 = v146 + 1;
        *v146 = 2;
        v147 = (int *)(v146 + 1);
      }
      *v147 = v47;
      ++*((_DWORD *)v26 - 1);
      if ( !v27 )
        goto LABEL_31;
LABEL_23:
      v48 = *(v27 - 1);
      if ( (_DWORD)v48 == *(v27 - 2) )
      {
        v60 = (unsigned int)(3 * v48 + 1) >> 1;
        v61 = 4 * v60 + 8;
        v62 = v60;
        if ( 4 * (int)v48 + 8 >= (unsigned int)v61 || (unsigned int)v48 >= v60 )
        {
          v11 = (char **)__cxa_allocate_exception(0x28u);
          sub_113C8C(v203, "Overflow encountered when expanding vector", v12);
          *v11 = (char *)off_1C63128;
          sub_2333C0(v11 + 1, v203);
          sub_233E40((__int64)v203);
          __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v63 = (unsigned int *)sub_186B300(v27 - 2, v61);
        v27 = v63 + 2;
        *v63 = v62;
        v49 = &v63[v63[1] + 2];
      }
      else
      {
        v49 = &v27[v48];
      }
      goto LABEL_25;
    }
LABEL_93:
    LODWORD(v203[0]) = v33;
    v192 = v26;
    sub_7B5E20(&v192, (unsigned int *)v203);
    v99 = v192;
    v100 = v31[15];
    if ( !v27 || (v101 = *(v27 - 1), (_DWORD)v101 == *(v27 - 2)) )
    {
      v191 = v27;
      sub_2FD3F0(&v191);
      v27 = v191;
      v101 = *(v191 - 1);
    }
    v27[v101] = v100;
    ++*(v27 - 1);
    v102 = 2LL * (unsigned int)v31[8];
    v160 = &v32[v102];
    if ( v102 * 4 )
    {
      v103 = v31[19];
      v104 = v31 + 19;
      v105 = v31[20] ^ 1;
      if ( !v99 )
      {
        v175 = v32[1] ^ 1;
        v150 = (_QWORD *)sub_186B270(0x10u);
        v99 = v150 + 1;
        *v150 = 2;
        v105 = v175;
        v151 = (int *)(v150 + 1);
        goto LABEL_102;
      }
      while ( 1 )
      {
        v106 = *((unsigned int *)v99 - 1);
        if ( (_DWORD)v106 == *((_DWORD *)v99 - 2) )
        {
          v112 = (unsigned int)(3 * v106 + 1) >> 1;
          v113 = 4 * v112 + 8;
          if ( 4 * (int)v106 + 8 >= (unsigned int)v113 || (unsigned int)v106 >= v112 )
          {
            v15 = (char **)__cxa_allocate_exception(0x28u);
            sub_113C8C(v203, "Overflow encountered when expanding vector", v16);
            *v15 = (char *)off_1C63128;
            sub_2333C0(v15 + 1, v203);
            sub_233E40((__int64)v203);
            __cxa_throw(v15, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v177 = v105;
          v174 = (unsigned int)(3 * v106 + 1) >> 1;
          v114 = (unsigned int *)sub_186B300(v99 - 1, v113);
          v99 = v114 + 2;
          v105 = v177;
          *v114 = v174;
          v151 = (int *)&v114[v114[1] + 2];
        }
        else
        {
          v151 = (int *)v99 + v106;
        }
LABEL_102:
        *v151 = v105;
        ++*((_DWORD *)v99 - 1);
        v107 = *(v27 - 1);
        v108 = &v27[v107];
        if ( (_DWORD)v107 == *(v27 - 2) )
        {
          v109 = (unsigned int)(3 * v107 + 1) >> 1;
          v110 = 4 * v109 + 8;
          if ( 4 * (int)v107 + 8 >= (unsigned int)v110 || (unsigned int)v107 >= v109 )
          {
            v17 = (char **)__cxa_allocate_exception(0x28u);
            sub_113C8C(v203, "Overflow encountered when expanding vector", v18);
            *v17 = (char *)off_1C63128;
            sub_2333C0(v17 + 1, v203);
            sub_233E40((__int64)v203);
            __cxa_throw(v17, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v173 = (unsigned int)(3 * v107 + 1) >> 1;
          v111 = (unsigned int *)sub_186B300(v27 - 2, v110);
          v27 = v111 + 2;
          *v111 = v173;
          v108 = &v111[v111[1] + 2];
        }
        *v108 = v103;
        v104 += 2;
        ++*(v27 - 1);
        if ( v160 == v104 )
          break;
        v103 = *v104;
        v105 = v104[1] ^ 1;
      }
LABEL_114:
      v121 = *((_DWORD *)v99 - 1);
      goto LABEL_115;
    }
    if ( v99 )
      goto LABEL_114;
    v121 = 0;
LABEL_115:
    v187 = v121;
    v200 = v99;
    v188 = v167;
    v201 = v27;
    if ( !*(_QWORD *)(a3 + 16) )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, int *, _QWORD **, unsigned int **, int *))(a3 + 24))(
      a3,
      &v187,
      &v200,
      &v201,
      &v188);
    if ( v99 )
      *((_DWORD *)v99 - 1) = 0;
    *(v27 - 1) = 0;
    v122 = v31[4];
    v192 = v99;
    LODWORD(v203[0]) = v122 ^ 1;
    sub_7B5E20(&v192, (unsigned int *)v203);
    v123 = v167 - v31[15] + 1;
    v26 = v192;
    v124 = *(v27 - 1);
    if ( (_DWORD)v124 == *(v27 - 2) )
    {
      v191 = v27;
      sub_2FD3F0(&v191);
      v27 = v191;
      v124 = *(v191 - 1);
    }
    v27[v124] = v123;
    ++*(v27 - 1);
    v125 = 2LL * (unsigned int)v31[8];
    v126 = &v32[v125];
    if ( v125 * 4 )
    {
      v127 = *(_QWORD *)(v31 + 19);
      v128 = v31[19];
      if ( !v26 )
      {
        v165 = HIDWORD(v127);
        v148 = (_QWORD *)sub_186B270(0x10u);
        v26 = v148 + 1;
        HIDWORD(v127) = v165;
        *v148 = 2;
        v149 = (unsigned int *)(v148 + 1);
        goto LABEL_127;
      }
      while ( 1 )
      {
        v129 = *((unsigned int *)v26 - 1);
        if ( (_DWORD)v129 == *((_DWORD *)v26 - 2) )
        {
          v135 = (unsigned int)(3 * v129 + 1) >> 1;
          v136 = 4 * v135 + 8;
          if ( 4 * (int)v129 + 8 >= (unsigned int)v136 || (unsigned int)v129 >= v135 )
          {
            v19 = (char **)__cxa_allocate_exception(0x28u);
            sub_113C8C(v203, "Overflow encountered when expanding vector", v20);
            *v19 = (char *)off_1C63128;
            sub_2333C0(v19 + 1, v203);
            sub_233E40((__int64)v203);
            __cxa_throw(v19, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v176 = HIDWORD(v127);
          v163 = (unsigned int)(3 * v129 + 1) >> 1;
          v137 = (unsigned int *)sub_186B300(v26 - 1, v136);
          v26 = v137 + 2;
          HIDWORD(v127) = v176;
          *v137 = v163;
          v149 = &v137[v137[1] + 2];
        }
        else
        {
          v149 = (unsigned int *)v26 + v129;
        }
LABEL_127:
        *v149 = HIDWORD(v127);
        ++*((_DWORD *)v26 - 1);
        v130 = *(v27 - 1);
        if ( (_DWORD)v130 == *(v27 - 2) )
        {
          v131 = (unsigned int)(3 * v130 + 1) >> 1;
          v132 = 4 * v131 + 8;
          if ( 4 * (int)v130 + 8 >= (unsigned int)v132 || (unsigned int)v130 >= v131 )
          {
            v21 = (char **)__cxa_allocate_exception(0x28u);
            sub_113C8C(v203, "Overflow encountered when expanding vector", v22);
            *v21 = (char *)off_1C63128;
            sub_2333C0(v21 + 1, v203);
            sub_233E40((__int64)v203);
            __cxa_throw(v21, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v162 = (unsigned int)(3 * v130 + 1) >> 1;
          v133 = (unsigned int *)sub_186B300(v27 - 2, v132);
          v27 = v133 + 2;
          v32 += 2;
          *v133 = v162;
          v133[v133[1]++ + 2] = v128;
          if ( v126 == v32 )
            goto LABEL_131;
        }
        else
        {
          v32 += 2;
          v27[v130] = v128;
          ++*(v27 - 1);
          if ( v126 == v32 )
            goto LABEL_131;
        }
        v127 = *(_QWORD *)v32;
        v128 = *v32;
      }
    }
    if ( v26 )
LABEL_131:
      v134 = *((_DWORD *)v26 - 1);
    else
      v134 = 0;
    v189 = v134;
    v202 = v26;
    v190 = v167;
    v203[0] = (__int64)v27;
    if ( !*(_QWORD *)(a3 + 16) )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, int *, _QWORD **, __int64 *, int *))(a3 + 24))(a3, &v189, &v202, v203, &v190);
    ++v155;
  }
  while ( v170 != v155 );
LABEL_40:
  if ( v26 )
    sub_186B220(v26 - 1);
  if ( v27 )
    sub_186B220(v27 - 2);
  return 1;
}

