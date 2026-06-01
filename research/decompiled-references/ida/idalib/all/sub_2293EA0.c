__int64 __fastcall sub_2293EA0(
        __pid_t *a1,
        __int128 *a2,
        struct rlimit *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10,
        _QWORD *a11,
        __int64 a12,
        char a13)
{
  unsigned int v13; // r14d
  __int128 *v14; // rbx
  struct rlimit *v15; // rbp
  __int64 v16; // r8
  __int64 v17; // r9
  posix_spawn_file_actions_t *p_file_actions; // r12
  char **v19; // rsi
  int v20; // r13d
  __int128 *v21; // rbp
  int v22; // eax
  int v23; // r15d
  __m128i *v24; // rax
  void *v25; // rsi
  size_t v26; // r15
  _QWORD *v27; // rax
  size_t v28; // r15
  void *v29; // rax
  unsigned __int64 v30; // rcx
  _BYTE *v31; // rdi
  size_t v32; // r15
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  __m128i *v35; // rax
  _BYTE *v36; // rdi
  __int64 v37; // rax
  _QWORD *v38; // rax
  __m128i *v39; // rdi
  void **v40; // r12
  char *v41; // rbp
  char *v42; // r12
  _BYTE *i; // rax
  __int64 v44; // rdi
  unsigned int v45; // ecx
  __int64 v46; // rdi
  __m128i *v47; // rbp
  __m128i *v48; // r12
  __int64 v49; // rsi
  __int64 v50; // rdi
  bool v52; // zf
  size_t v53; // rdx
  int v54; // r12d
  void *v55; // rsi
  size_t v56; // r15
  _QWORD *v57; // rax
  size_t v58; // r15
  void *v59; // rax
  unsigned __int64 v60; // rcx
  _BYTE *v61; // rdi
  size_t v62; // r15
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rdx
  __m128i *v65; // rax
  _QWORD *v66; // rdx
  _BYTE *v67; // rdi
  _BYTE *v68; // rax
  __m128 v69; // xmm0
  __int64 v70; // rdx
  __pid_t v71; // eax
  __m128i *v72; // rax
  int v73; // esi
  void *v74; // r14
  size_t v75; // r15
  _QWORD *v76; // rax
  size_t v77; // r14
  unsigned __int64 v78; // rdx
  _BYTE *v79; // rdi
  size_t v80; // r14
  unsigned __int64 v81; // rdx
  unsigned __int64 v82; // rdx
  __m128i *v83; // rax
  struct rlimit *rlim_cur; // rdi
  rlim_t v85; // rdx
  void *v86; // rdi
  __pid_t *v87; // rdx
  int v88; // r14d
  int v89; // ebp
  _BYTE *v90; // rsi
  __int64 v91; // rdx
  _BYTE *v92; // rdi
  unsigned __int64 v93; // rdx
  _BYTE *v94; // rsi
  __int64 v95; // rdx
  _BYTE *v96; // rdi
  unsigned __int64 v97; // rdx
  _BYTE *v98; // rsi
  __int64 v99; // rdx
  _BYTE *pad; // rdi
  rlim_t v101; // rdx
  int *v102; // rax
  _QWORD *v103; // rsi
  size_t v104; // r15
  _QWORD *v105; // rax
  size_t v106; // r15
  _QWORD *v107; // rax
  unsigned __int64 v108; // rcx
  _BYTE *v109; // rdi
  size_t v110; // r15
  unsigned __int64 v111; // rdx
  unsigned __int64 v112; // rdx
  __m128i *v113; // rax
  struct rlimit *v114; // rdi
  rlim_t v115; // rdx
  _BYTE *v116; // rdi
  pid_t v117; // eax
  __pid_t *v118; // rdx
  size_t v119; // rdx
  _BYTE *v120; // rdi
  unsigned int v121; // r15d
  _BYTE *v122; // r9
  __int64 v123; // r10
  size_t v124; // rdx
  const void *v125; // rdi
  int v126; // eax
  int *v127; // rax
  void *v128; // r15
  size_t v129; // r14
  size_t v130; // r15
  _QWORD *v131; // r9
  unsigned __int64 v132; // rdx
  _BYTE *v133; // rax
  size_t v134; // r15
  unsigned __int64 v135; // rdi
  unsigned __int64 v136; // rdi
  __m128i *v137; // rax
  _BYTE *v138; // rdi
  __m128 v139; // xmm0
  rlim_t v140; // rax
  char *v141; // rdi
  struct __spawn_action *v142; // rdx
  struct __spawn_action *v143; // rdx
  struct __spawn_action *actions; // rdx
  rlim_t v145; // rdx
  rlim_t rlim_max; // rdx
  _BYTE *v147; // rdi
  size_t v148; // rdx
  __m128 v149; // xmm0
  int *v150; // rax
  _QWORD *v151; // rax
  rlim_t v152; // rdx
  _BYTE *v153; // rdi
  char **argv; // [rsp+0h] [rbp-3A0h]
  char **envp; // [rsp+8h] [rbp-398h]
  void *v156; // [rsp+10h] [rbp-390h] BYREF
  _QWORD *p_path; // [rsp+18h] [rbp-388h] BYREF
  __int128 *v158; // [rsp+20h] [rbp-380h] BYREF
  struct rlimit *v159; // [rsp+28h] [rbp-378h]
  __pid_t *v160; // [rsp+30h] [rbp-370h]
  __int128 *v161; // [rsp+38h] [rbp-368h]
  struct rlimit *v162; // [rsp+40h] [rbp-360h]
  pid_t pid; // [rsp+4Ch] [rbp-354h] BYREF
  char **v164; // [rsp+50h] [rbp-350h] BYREF
  __int128 v165; // [rsp+58h] [rbp-348h]
  void **v166; // [rsp+68h] [rbp-338h]
  void *v167; // [rsp+78h] [rbp-328h]
  size_t v168; // [rsp+80h] [rbp-320h]
  _QWORD v169[2]; // [rsp+88h] [rbp-318h] BYREF
  void *v170; // [rsp+98h] [rbp-308h] BYREF
  size_t v171; // [rsp+A0h] [rbp-300h]
  __int64 v172; // [rsp+A8h] [rbp-2F8h] BYREF
  void *v173; // [rsp+B8h] [rbp-2E8h]
  size_t v174; // [rsp+C0h] [rbp-2E0h]
  char v175[16]; // [rsp+C8h] [rbp-2D8h] BYREF
  __m128i *v176; // [rsp+D8h] [rbp-2C8h]
  size_t v177; // [rsp+E0h] [rbp-2C0h]
  _QWORD v178[2]; // [rsp+E8h] [rbp-2B8h] BYREF
  __m128i *v179; // [rsp+F8h] [rbp-2A8h]
  size_t v180; // [rsp+100h] [rbp-2A0h]
  _QWORD v181[2]; // [rsp+108h] [rbp-298h] BYREF
  void *v182; // [rsp+118h] [rbp-288h] BYREF
  size_t v183; // [rsp+120h] [rbp-280h]
  _QWORD v184[2]; // [rsp+128h] [rbp-278h] BYREF
  void *v185; // [rsp+138h] [rbp-268h] BYREF
  size_t v186; // [rsp+140h] [rbp-260h]
  _QWORD v187[2]; // [rsp+148h] [rbp-258h] BYREF
  void *v188; // [rsp+158h] [rbp-248h] BYREF
  size_t v189; // [rsp+160h] [rbp-240h]
  _QWORD v190[2]; // [rsp+168h] [rbp-238h] BYREF
  void *src; // [rsp+178h] [rbp-228h] BYREF
  size_t n; // [rsp+180h] [rbp-220h]
  _QWORD v193[2]; // [rsp+188h] [rbp-218h] BYREF
  void *v194; // [rsp+198h] [rbp-208h] BYREF
  size_t v195; // [rsp+1A0h] [rbp-200h]
  _QWORD v196[2]; // [rsp+1A8h] [rbp-1F8h] BYREF
  void *v197; // [rsp+1B8h] [rbp-1E8h] BYREF
  size_t v198; // [rsp+1C0h] [rbp-1E0h]
  _QWORD v199[2]; // [rsp+1C8h] [rbp-1D8h] BYREF
  void *v200; // [rsp+1D8h] [rbp-1C8h] BYREF
  size_t v201; // [rsp+1E0h] [rbp-1C0h]
  _QWORD v202[2]; // [rsp+1E8h] [rbp-1B8h] BYREF
  void *v203; // [rsp+1F8h] [rbp-1A8h] BYREF
  size_t v204; // [rsp+200h] [rbp-1A0h]
  _QWORD v205[2]; // [rsp+208h] [rbp-198h] BYREF
  void *v206; // [rsp+218h] [rbp-188h] BYREF
  size_t v207; // [rsp+220h] [rbp-180h]
  _QWORD v208[2]; // [rsp+228h] [rbp-178h] BYREF
  char *path; // [rsp+238h] [rbp-168h] BYREF
  size_t v210; // [rsp+240h] [rbp-160h]
  char v211[16]; // [rsp+248h] [rbp-158h] BYREF
  posix_spawn_file_actions_t file_actions; // [rsp+258h] [rbp-148h] BYREF
  __int128 v213; // [rsp+2A8h] [rbp-F8h] BYREF
  void *ptr; // [rsp+2B8h] [rbp-E8h]
  __int64 v215; // [rsp+2C0h] [rbp-E0h]
  __int64 v216; // [rsp+2C8h] [rbp-D8h] BYREF
  __m128i *v217; // [rsp+2E8h] [rbp-B8h]
  __int64 v218; // [rsp+2F0h] [rbp-B0h]
  __m128i si128; // [rsp+2F8h] [rbp-A8h] BYREF
  struct rlimit rlimits[2]; // [rsp+308h] [rbp-98h] BYREF
  void *dest; // [rsp+328h] [rbp-78h] BYREF
  __m128 v222; // [rsp+330h] [rbp-70h] BYREF
  void *v223; // [rsp+348h] [rbp-58h] BYREF
  __m128 v224; // [rsp+350h] [rbp-50h] BYREF
  char v225; // [rsp+368h] [rbp-38h] BYREF

  v13 = a6;
  v14 = &v213;
  v213 = 0;
  v15 = rlimits;
  v160 = a1;
  p_path = a11;
  ptr = &v216;
  v158 = a2;
  v159 = a3;
  v215 = 0x400000000LL;
  v217 = &si128;
  v218 = 0;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  v164 = (char **)&v213;
  sub_2293DB0((__int64)rlimits, a4, a5, &v164, a5, a6);
  envp = nullptr;
  argv = (char **)rlimits[0].rlim_cur;
  if ( a9 )
  {
    sub_2293DB0((__int64)rlimits, a7, a8, &v164, v16, v17);
    envp = (char **)rlimits[0].rlim_cur;
  }
  LOBYTE(v156) = (a13 ^ 1) & (v13 == 0);
  if ( !(_BYTE)v156 )
  {
    v71 = fork();
    if ( v71 != -1 )
    {
      if ( v71 )
      {
        v87 = v160;
        LOBYTE(v156) = 1;
        *v160 = v71;
        v87[1] = v71;
        goto LABEL_55;
      }
      if ( !p_path )
        goto LABEL_124;
      if ( (unsigned __int8)sub_2291A00(
                              *(_BYTE **)a10,
                              *(_QWORD *)(a10 + 8),
                              *(unsigned __int8 *)(a10 + 16),
                              0,
                              (void **)a12)
        || (unsigned __int8)sub_2291A00(
                              *(_BYTE **)(a10 + 24),
                              *(_QWORD *)(a10 + 32),
                              *(unsigned __int8 *)(a10 + 40),
                              1,
                              (void **)a12) )
      {
        goto LABEL_55;
      }
      v121 = *(unsigned __int8 *)(a10 + 64);
      v122 = *(_BYTE **)(a10 + 48);
      v123 = *(_QWORD *)(a10 + 56);
      if ( !*(_BYTE *)(a10 + 40)
        || !(_BYTE)v121
        || (v124 = *(_QWORD *)(a10 + 32), v124 != v123)
        || (v160 = *(__pid_t **)(a10 + 56), v124)
        && (v125 = *(const void **)(a10 + 24),
            p_path = v122,
            v126 = memcmp(v125, v122, v124),
            v122 = p_path,
            v123 = (__int64)v160,
            v126) )
      {
        if ( (unsigned __int8)sub_2291A00(v122, v123, v121, 2, (void **)a12) )
          goto LABEL_55;
LABEL_124:
        if ( !a13 || setsid() != -1 )
        {
          if ( v13 )
          {
            getrlimit(RLIMIT_DATA, rlimits);
            rlimits[0].rlim_cur = (unsigned __int64)v13 << 20;
            setrlimit(RLIMIT_DATA, rlimits);
            getrlimit(__RLIMIT_RSS, rlimits);
            rlimits[0].rlim_cur = (unsigned __int64)v13 << 20;
            setrlimit(__RLIMIT_RSS, rlimits);
          }
          rlimits[0].rlim_cur = (rlim_t)&rlimits[1];
          sub_2290E80(rlimits, v158, (__int64)v159 + (_QWORD)v158);
          if ( envp )
            execve((const char *)rlimits[0].rlim_cur, argv, envp);
          else
            execv((const char *)rlimits[0].rlim_cur, argv);
          v150 = __errno_location();
          _exit((*v150 == 2) + 126);
        }
        v167 = v169;
        v72 = (__m128i *)operator new(0x2Au);
        v167 = v72;
        *v72 = _mm_load_si128((const __m128i *)&xmmword_23ABDC0);
        v169[0] = 41;
        v72[1] = _mm_load_si128(xmmword_23ABDD0);
        strcpy(v72[2].m128i_i8, "id failed");
        v168 = 41;
        if ( a12 )
        {
          v73 = *__errno_location();
          p_path = &path;
          sub_2287FA0((__int64)&path, v73);
          v74 = v167;
          v75 = v168;
          v206 = v208;
          if ( (char *)v167 + v168 && !v167 )
            goto LABEL_193;
          if ( v168 > 0xF )
          {
            if ( (v168 & 0x8000000000000000LL) != 0LL )
              goto LABEL_398;
            v76 = (_QWORD *)operator new(v168 + 1);
            v208[0] = v75;
            v206 = v76;
          }
          else
          {
            if ( v168 == 1 )
            {
              LOBYTE(v208[0]) = *(_BYTE *)v167;
              v76 = v208;
              goto LABEL_132;
            }
            v76 = v208;
            if ( !v168 )
            {
LABEL_132:
              v207 = v75;
              *((_BYTE *)v76 + v75) = 0;
              v77 = v207;
              if ( v207 == 0x7FFFFFFFFFFFFFFFLL || v207 == 9223372036854775806LL )
                goto LABEL_392;
              if ( v206 == v208 )
                v78 = 15;
              else
                v78 = v208[0];
              if ( v207 + 2 > v78 )
                sub_998B30((__int64)&v206, v207, 0, ": ", 2u);
              else
                *(_WORD *)((char *)v206 + v207) = 8250;
              v207 = v77 + 2;
              *((_BYTE *)v206 + v77 + 2) = 0;
              v79 = v206;
              v80 = v207 + v210;
              if ( v206 == v208 )
                v81 = 15;
              else
                v81 = v208[0];
              if ( v80 <= v81 )
              {
                if ( v210 )
                {
                  v141 = (char *)v206 + v207;
                  if ( v210 == 1 )
                    *v141 = *path;
                  else
                    memcpy(v141, path, v210);
                  v79 = v206;
                }
              }
              else
              {
                if ( path == (char *)(p_path + 2) )
                  v82 = 15;
                else
                  v82 = *(_QWORD *)v211;
                if ( v80 <= v82 )
                {
                  v83 = (__m128i *)sub_99BDC0(p_path, 0, 0, v206, v207);
LABEL_145:
                  rlimits[0].rlim_cur = (rlim_t)&rlimits[1];
                  if ( (__m128i *)v83->m128i_i64[0] == &v83[1] )
                  {
                    rlimits[1] = (struct rlimit)_mm_loadu_si128(v83 + 1);
                  }
                  else
                  {
                    rlimits[0].rlim_cur = v83->m128i_i64[0];
                    rlimits[1].rlim_cur = v83[1].m128i_u64[0];
                  }
                  rlimits[0].rlim_max = v83->m128i_u64[1];
                  v83->m128i_i64[0] = (__int64)v83[1].m128i_i64;
                  v83->m128i_i64[1] = 0;
                  v83[1].m128i_i8[0] = 0;
                  rlim_cur = *(struct rlimit **)a12;
                  if ( (struct rlimit *)rlimits[0].rlim_cur == &rlimits[1] )
                  {
                    rlim_max = rlimits[0].rlim_max;
                    if ( rlimits[0].rlim_max )
                    {
                      if ( rlimits[0].rlim_max == 1 )
                        LOBYTE(rlim_cur->rlim_cur) = rlimits[1].rlim_cur;
                      else
                        memcpy(rlim_cur, (const void *)rlimits[0].rlim_cur, rlimits[0].rlim_max);
                      rlim_max = rlimits[0].rlim_max;
                      rlim_cur = *(struct rlimit **)a12;
                    }
                    *(_QWORD *)(a12 + 8) = rlim_max;
                    *((_BYTE *)&rlim_cur->rlim_cur + rlim_max) = 0;
                    rlim_cur = (struct rlimit *)rlimits[0].rlim_cur;
                  }
                  else
                  {
                    if ( rlim_cur == (struct rlimit *)(a12 + 16) )
                    {
                      v158 = (__int128 *)rlimits[1].rlim_cur;
                      *(_QWORD *)a12 = rlimits[0].rlim_cur;
                      *(__m128 *)(a12 + 8) = _mm_loadh_ps((const double *)&v158);
                    }
                    else
                    {
                      v158 = (__int128 *)rlimits[1].rlim_cur;
                      v85 = *(_QWORD *)(a12 + 16);
                      *(_QWORD *)a12 = rlimits[0].rlim_cur;
                      *(__m128 *)(a12 + 8) = _mm_loadh_ps((const double *)&v158);
                      if ( rlim_cur )
                      {
                        rlimits[0].rlim_cur = (rlim_t)rlim_cur;
                        rlimits[1].rlim_cur = v85;
                        goto LABEL_151;
                      }
                    }
                    rlim_cur = &rlimits[1];
                    rlimits[0].rlim_cur = (rlim_t)&rlimits[1];
                  }
LABEL_151:
                  rlimits[0].rlim_max = 0;
                  LOBYTE(rlim_cur->rlim_cur) = 0;
                  if ( (struct rlimit *)rlimits[0].rlim_cur != &rlimits[1] )
                    operator delete((void *)rlimits[0].rlim_cur);
                  if ( v206 != v208 )
                    operator delete(v206);
                  if ( path != (char *)(p_path + 2) )
                    operator delete(path);
                  v72 = (__m128i *)v167;
                  if ( v167 == v169 )
                    goto LABEL_55;
                  goto LABEL_158;
                }
                sub_998B30((__int64)&v206, v207, 0, path, v210);
                v79 = v206;
              }
              v207 = v80;
              v83 = (__m128i *)&v206;
              v79[v80] = 0;
              goto LABEL_145;
            }
          }
          memcpy(v76, v74, v75);
          v76 = v206;
          goto LABEL_132;
        }
LABEL_158:
        v86 = v72;
        goto LABEL_159;
      }
      if ( dup2(1, 2) != -1 )
        goto LABEL_124;
      v158 = (__int128 *)&v170;
      v170 = &v172;
      v72 = (__m128i *)operator new(0x20u);
      v170 = v72;
      strcpy(v72->m128i_i8, "Can't redirect stderr to stdout");
      v172 = 31;
      v171 = 31;
      if ( !a12 )
        goto LABEL_158;
      v127 = __errno_location();
      sub_2287FA0((__int64)&v203, *v127);
      v128 = v170;
      v129 = v171;
      v200 = v202;
      if ( (char *)v170 + v171 && !v170 )
        goto LABEL_193;
      if ( v171 > 0xF )
      {
        if ( (v171 & 0x8000000000000000LL) != 0LL )
          goto LABEL_398;
        v151 = (_QWORD *)operator new(v171 + 1);
        v202[0] = v129;
        v200 = v151;
      }
      else
      {
        if ( v171 == 1 )
        {
          LOBYTE(v202[0]) = *(_BYTE *)v170;
          goto LABEL_275;
        }
        if ( !v171 )
        {
LABEL_275:
          v201 = v129;
          *((_BYTE *)v200 + v129) = 0;
          v130 = v201;
          if ( v201 == 0x7FFFFFFFFFFFFFFFLL || v201 == 9223372036854775806LL )
            goto LABEL_392;
          v131 = (_QWORD *)(v201 + 2);
          if ( v200 == v202 )
            v132 = 15;
          else
            v132 = v202[0];
          if ( (unsigned __int64)v131 > v132 )
          {
            p_path = (_QWORD *)(v201 + 2);
            sub_998B30((__int64)&v200, v201, 0, ": ", 2u);
            v131 = p_path;
          }
          else
          {
            *(_WORD *)((char *)v200 + v201) = 8250;
          }
          v201 = (size_t)v131;
          *((_BYTE *)v200 + v130 + 2) = 0;
          v133 = v200;
          v134 = v201 + v204;
          if ( v200 == v202 )
            v135 = 15;
          else
            v135 = v202[0];
          if ( v134 <= v135 )
          {
            if ( v204 )
            {
              v153 = (char *)v200 + v201;
              if ( v204 == 1 )
                *v153 = *(_BYTE *)v203;
              else
                memcpy(v153, v203, v204);
              v133 = v200;
            }
          }
          else
          {
            if ( v203 == v205 )
              v136 = 15;
            else
              v136 = v205[0];
            if ( v134 <= v136 )
            {
              v137 = (__m128i *)sub_99BDC0(&v203, 0, 0, v200, v201);
LABEL_288:
              rlimits[0].rlim_cur = (rlim_t)&rlimits[1];
              if ( (__m128i *)v137->m128i_i64[0] == &v137[1] )
              {
                rlimits[1] = (struct rlimit)_mm_loadu_si128(v137 + 1);
              }
              else
              {
                rlimits[0].rlim_cur = v137->m128i_i64[0];
                rlimits[1].rlim_cur = v137[1].m128i_u64[0];
              }
              rlimits[0].rlim_max = v137->m128i_u64[1];
              v137->m128i_i64[0] = (__int64)v137[1].m128i_i64;
              v137->m128i_i64[1] = 0;
              v137[1].m128i_i8[0] = 0;
              v138 = *(_BYTE **)a12;
              if ( (struct rlimit *)rlimits[0].rlim_cur == &rlimits[1] )
              {
                v152 = rlimits[0].rlim_max;
                if ( rlimits[0].rlim_max )
                {
                  if ( rlimits[0].rlim_max == 1 )
                    *v138 = rlimits[1].rlim_cur;
                  else
                    memcpy(v138, (const void *)rlimits[0].rlim_cur, rlimits[0].rlim_max);
                  v152 = rlimits[0].rlim_max;
                  v138 = *(_BYTE **)a12;
                }
                *(_QWORD *)(a12 + 8) = v152;
                v138[v152] = 0;
              }
              else
              {
                p_path = (_QWORD *)rlimits[1].rlim_cur;
                if ( v138 == (_BYTE *)(a12 + 16) )
                {
                  *(_QWORD *)a12 = rlimits[0].rlim_cur;
                  *(__m128 *)(a12 + 8) = _mm_loadh_ps((const double *)&p_path);
                }
                else
                {
                  v139 = _mm_loadh_ps((const double *)&p_path);
                  v140 = *(_QWORD *)(a12 + 16);
                  *(_QWORD *)a12 = rlimits[0].rlim_cur;
                  *(__m128 *)(a12 + 8) = v139;
                  if ( v138 )
                  {
                    rlimits[0].rlim_cur = (rlim_t)v138;
                    rlimits[1].rlim_cur = v140;
                    goto LABEL_294;
                  }
                }
                rlimits[0].rlim_cur = (rlim_t)&rlimits[1];
              }
LABEL_294:
              rlimits[0].rlim_max = 0;
              *(_BYTE *)rlimits[0].rlim_cur = 0;
              if ( (struct rlimit *)rlimits[0].rlim_cur != &rlimits[1] )
                operator delete((void *)rlimits[0].rlim_cur);
              if ( v200 != v202 )
                operator delete(v200);
              if ( v203 != v205 )
                operator delete(v203);
              v86 = v170;
              if ( v170 == v158 + 1 )
                goto LABEL_55;
              goto LABEL_159;
            }
            sub_998B30((__int64)&v200, v201, 0, v203, v204);
            v133 = v200;
          }
          v201 = v134;
          v133[v134] = 0;
          v137 = (__m128i *)&v200;
          goto LABEL_288;
        }
        v151 = v202;
      }
      memcpy(v151, v128, v129);
      goto LABEL_275;
    }
    v174 = 13;
    strcpy(v175, "Couldn't fork");
    v173 = v175;
    if ( !a12 )
      goto LABEL_55;
    v102 = __errno_location();
    sub_2287FA0((__int64)&v197, *v102);
    v103 = v173;
    v104 = v174;
    v194 = v196;
    if ( (char *)v173 + v174 && !v173 )
      goto LABEL_193;
    if ( v174 > 0xF )
    {
      p_path = v173;
      if ( (v174 & 0x8000000000000000LL) != 0LL )
        goto LABEL_398;
      v105 = (_QWORD *)operator new(v174 + 1);
      v196[0] = v104;
      v103 = p_path;
      v194 = v105;
    }
    else
    {
      if ( v174 == 1 )
      {
        LOBYTE(v196[0]) = *(_BYTE *)v173;
        v105 = v196;
        goto LABEL_197;
      }
      v105 = v196;
      if ( !v174 )
      {
LABEL_197:
        v195 = v104;
        *((_BYTE *)v105 + v104) = 0;
        v106 = v195;
        if ( v195 == 0x7FFFFFFFFFFFFFFFLL || v195 == 9223372036854775806LL )
          goto LABEL_392;
        v107 = (_QWORD *)(v195 + 2);
        if ( v194 == v196 )
          v108 = 15;
        else
          v108 = v196[0];
        if ( (unsigned __int64)v107 > v108 )
        {
          p_path = (_QWORD *)(v195 + 2);
          sub_998B30((__int64)&v194, v195, 0, ": ", 2u);
          v107 = p_path;
        }
        else
        {
          *(_WORD *)((char *)v194 + v195) = 8250;
        }
        v195 = (size_t)v107;
        *((_BYTE *)v194 + v106 + 2) = 0;
        v109 = v194;
        v110 = v195 + v198;
        if ( v194 == v196 )
          v111 = 15;
        else
          v111 = v196[0];
        if ( v110 <= v111 )
        {
          if ( v198 )
          {
            v120 = (char *)v194 + v195;
            if ( v198 == 1 )
              *v120 = *(_BYTE *)v197;
            else
              memcpy(v120, v197, v198);
            v109 = v194;
          }
        }
        else
        {
          if ( v197 == v199 )
            v112 = 15;
          else
            v112 = v199[0];
          if ( v110 <= v112 )
          {
            v113 = (__m128i *)sub_99BDC0(&v197, 0, 0, v194, v195);
LABEL_210:
            rlimits[0].rlim_cur = (rlim_t)&rlimits[1];
            if ( (__m128i *)v113->m128i_i64[0] == &v113[1] )
            {
              rlimits[1] = (struct rlimit)_mm_loadu_si128(v113 + 1);
            }
            else
            {
              rlimits[0].rlim_cur = v113->m128i_i64[0];
              rlimits[1].rlim_cur = v113[1].m128i_u64[0];
            }
            rlimits[0].rlim_max = v113->m128i_u64[1];
            v113->m128i_i64[0] = (__int64)v113[1].m128i_i64;
            v113->m128i_i64[1] = 0;
            v113[1].m128i_i8[0] = 0;
            v114 = *(struct rlimit **)a12;
            if ( (struct rlimit *)rlimits[0].rlim_cur == &rlimits[1] )
            {
              v145 = rlimits[0].rlim_max;
              if ( rlimits[0].rlim_max )
              {
                if ( rlimits[0].rlim_max == 1 )
                  LOBYTE(v114->rlim_cur) = rlimits[1].rlim_cur;
                else
                  memcpy(v114, (const void *)rlimits[0].rlim_cur, rlimits[0].rlim_max);
                v145 = rlimits[0].rlim_max;
                v114 = *(struct rlimit **)a12;
              }
              *(_QWORD *)(a12 + 8) = v145;
              *((_BYTE *)&v114->rlim_cur + v145) = 0;
              v114 = (struct rlimit *)rlimits[0].rlim_cur;
            }
            else
            {
              if ( v114 == (struct rlimit *)(a12 + 16) )
              {
                p_path = (_QWORD *)rlimits[1].rlim_cur;
                *(_QWORD *)a12 = rlimits[0].rlim_cur;
                *(__m128 *)(a12 + 8) = _mm_loadh_ps((const double *)&p_path);
              }
              else
              {
                p_path = (_QWORD *)rlimits[1].rlim_cur;
                v115 = *(_QWORD *)(a12 + 16);
                *(_QWORD *)a12 = rlimits[0].rlim_cur;
                *(__m128 *)(a12 + 8) = _mm_loadh_ps((const double *)&p_path);
                if ( v114 )
                {
                  rlimits[0].rlim_cur = (rlim_t)v114;
                  rlimits[1].rlim_cur = v115;
                  goto LABEL_216;
                }
              }
              v114 = &rlimits[1];
              rlimits[0].rlim_cur = (rlim_t)&rlimits[1];
            }
LABEL_216:
            rlimits[0].rlim_max = 0;
            LOBYTE(v114->rlim_cur) = 0;
            if ( (struct rlimit *)rlimits[0].rlim_cur != &rlimits[1] )
              operator delete((void *)rlimits[0].rlim_cur);
            if ( v194 != v196 )
              operator delete(v194);
            if ( v197 != v199 )
              operator delete(v197);
            v86 = v173;
            if ( v173 == v175 )
              goto LABEL_55;
LABEL_159:
            operator delete(v86);
            goto LABEL_55;
          }
          sub_998B30((__int64)&v194, v195, 0, v197, v198);
          v109 = v194;
        }
        v195 = v110;
        v113 = (__m128i *)&v194;
        v109[v110] = 0;
        goto LABEL_210;
      }
    }
    memcpy(v105, v103, v104);
    v105 = v194;
    goto LABEL_197;
  }
  rlimits[0].rlim_max = 0;
  dest = &v222.m128_u16[4];
  rlimits[0].rlim_cur = (rlim_t)&rlimits[1];
  LOBYTE(rlimits[1].rlim_cur) = 0;
  v222.m128_u64[0] = 0;
  v222.m128_i8[8] = 0;
  v223 = &v224.m128_u16[4];
  v224.m128_u64[0] = 0;
  v224.m128_i8[8] = 0;
  if ( !p_path )
  {
    p_file_actions = nullptr;
LABEL_6:
    v19 = envp;
    if ( !envp )
      v19 = environ;
    if ( v158 )
    {
      v161 = &v213;
      p_path = &path;
      v20 = 8;
      v162 = rlimits;
      v21 = v158;
      v158 = (__int128 *)((char *)v159 + (_QWORD)v158);
      while ( 1 )
      {
        pid = 0;
        path = v211;
        sub_2290E80(p_path, v21, (__int64)v158);
        v22 = posix_spawn(&pid, path, p_file_actions, nullptr, argv, v19);
        if ( path != v211 )
        {
          LODWORD(v159) = v22;
          operator delete(path);
          v22 = (int)v159;
        }
        if ( v22 != 4 )
          break;
        if ( !--v20 )
        {
          v14 = v161;
          v15 = v162;
          goto LABEL_15;
        }
      }
      v14 = v161;
      v15 = v162;
      v23 = v22;
    }
    else
    {
      v159 = rlimits;
      v88 = 8;
      p_path = &path;
      v158 = &v213;
      while ( 1 )
      {
        pid = 0;
        path = v211;
        v210 = 0;
        v211[0] = 0;
        v89 = posix_spawn(&pid, v211, p_file_actions, nullptr, argv, v19);
        if ( path != v211 )
          operator delete(path);
        if ( v89 != 4 )
          break;
        if ( !--v88 )
        {
          v14 = v158;
          v15 = v159;
LABEL_15:
          if ( p_file_actions )
            posix_spawn_file_actions_destroy(p_file_actions);
          v23 = 4;
          v176 = (__m128i *)v178;
          v24 = (__m128i *)operator new(0x13u);
          v176 = v24;
          v178[0] = 18;
          *v24 = _mm_load_si128((const __m128i *)&xmmword_23ABDB0);
          strcpy(v24[1].m128i_i8, "ed");
          v177 = 18;
          if ( !a12 )
            goto LABEL_49;
LABEL_18:
          sub_2287FA0((__int64)&src, v23);
          v25 = v176;
          v26 = v177;
          v188 = v190;
          if ( !&v176->m128i_i8[v177] || v176 )
          {
            if ( v177 <= 0xF )
            {
              if ( v177 == 1 )
              {
                LOBYTE(v190[0]) = v176->m128i_i8[0];
                v27 = v190;
                goto LABEL_23;
              }
              v27 = v190;
              if ( v177 )
              {
LABEL_239:
                memcpy(v27, v25, v26);
                v27 = v188;
              }
LABEL_23:
              v189 = v26;
              *((_BYTE *)v27 + v26) = 0;
              v28 = v189;
              if ( v189 != 0x7FFFFFFFFFFFFFFFLL && v189 != 9223372036854775806LL )
              {
                v29 = (void *)(v189 + 2);
                if ( v188 == v190 )
                  v30 = 15;
                else
                  v30 = v190[0];
                if ( (unsigned __int64)v29 > v30 )
                {
                  v156 = (void *)(v189 + 2);
                  sub_998B30((__int64)&v188, v189, 0, ": ", 2u);
                  v29 = v156;
                }
                else
                {
                  *(_WORD *)((char *)v188 + v189) = 8250;
                }
                v189 = (size_t)v29;
                *((_BYTE *)v188 + v28 + 2) = 0;
                v31 = v188;
                v32 = v189 + n;
                if ( v188 == v190 )
                  v33 = 15;
                else
                  v33 = v190[0];
                if ( v32 <= v33 )
                {
                  if ( n )
                  {
                    v116 = (char *)v188 + v189;
                    if ( n == 1 )
                      *v116 = *(_BYTE *)src;
                    else
                      memcpy(v116, src, n);
                    v31 = v188;
                  }
LABEL_35:
                  v189 = v32;
                  v35 = (__m128i *)&v188;
                  v31[v32] = 0;
                }
                else
                {
                  if ( src == v193 )
                    v34 = 15;
                  else
                    v34 = v193[0];
                  if ( v32 > v34 )
                  {
                    sub_998B30((__int64)&v188, v189, 0, src, n);
                    v31 = v188;
                    goto LABEL_35;
                  }
                  v35 = (__m128i *)sub_99BDC0(&src, 0, 0, v188, v189);
                }
                path = (char *)(p_path + 2);
                if ( (__m128i *)v35->m128i_i64[0] == &v35[1] )
                {
                  *(__m128i *)v211 = _mm_loadu_si128(v35 + 1);
                }
                else
                {
                  path = (char *)v35->m128i_i64[0];
                  *(_QWORD *)v211 = v35[1].m128i_i64[0];
                }
                v210 = v35->m128i_u64[1];
                v35->m128i_i64[0] = (__int64)v35[1].m128i_i64;
                v35->m128i_i64[1] = 0;
                v35[1].m128i_i8[0] = 0;
                v36 = *(_BYTE **)a12;
                if ( path == (char *)(p_path + 2) )
                {
                  v119 = v210;
                  if ( v210 )
                  {
                    if ( v210 == 1 )
                      *v36 = v211[0];
                    else
                      memcpy(v36, path, v210);
                    v119 = v210;
                    v36 = *(_BYTE **)a12;
                  }
                  *(_QWORD *)(a12 + 8) = v119;
                  v36[v119] = 0;
                  v36 = path;
                }
                else
                {
                  if ( v36 == (_BYTE *)(a12 + 16) )
                  {
                    v156 = *(void **)v211;
                    *(_QWORD *)a12 = path;
                    *(__m128 *)(a12 + 8) = _mm_loadh_ps((const double *)&v156);
                  }
                  else
                  {
                    v156 = *(void **)v211;
                    v37 = *(_QWORD *)(a12 + 16);
                    *(_QWORD *)a12 = path;
                    *(__m128 *)(a12 + 8) = _mm_loadh_ps((const double *)&v156);
                    if ( v36 )
                    {
                      path = v36;
                      *(_QWORD *)v211 = v37;
                      goto LABEL_42;
                    }
                  }
                  v36 = p_path + 2;
                  path = (char *)(p_path + 2);
                }
LABEL_42:
                v38 = p_path;
                v210 = 0;
                *v36 = 0;
                if ( path != (char *)(v38 + 2) )
                  operator delete(path);
                if ( v188 != v190 )
                  operator delete(v188);
                if ( src != v193 )
                  operator delete(src);
                v24 = v176;
                if ( v176 != (__m128i *)v178 )
                {
LABEL_49:
                  v39 = v24;
                  goto LABEL_50;
                }
                goto LABEL_51;
              }
LABEL_392:
              std::__throw_length_error("basic_string::append");
            }
            v156 = v176;
            if ( (v177 & 0x8000000000000000LL) == 0LL )
            {
              v27 = (_QWORD *)operator new(v177 + 1);
              v190[0] = v26;
              v25 = v156;
              v188 = v27;
              goto LABEL_239;
            }
LABEL_398:
            std::__throw_length_error("basic_string::_M_create");
          }
LABEL_193:
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        }
      }
      v23 = v89;
      v14 = v158;
      v15 = v159;
    }
    if ( p_file_actions )
      posix_spawn_file_actions_destroy(p_file_actions);
    if ( v23 )
    {
      v176 = (__m128i *)v178;
      v24 = (__m128i *)operator new(0x13u);
      v178[0] = 18;
      v176 = v24;
      *v24 = _mm_load_si128((const __m128i *)&xmmword_23ABDB0);
      strcpy(v24[1].m128i_i8, "ed");
      v177 = 18;
      if ( a12 )
      {
        if ( v23 == -1 )
          v23 = *__errno_location();
        goto LABEL_18;
      }
      goto LABEL_49;
    }
    v117 = pid;
    v118 = v160;
    *v160 = pid;
    v118[1] = v117;
    goto LABEL_52;
  }
  v52 = *(_BYTE *)(a10 + 16) == 0;
  v166 = nullptr;
  v165 = 0;
  if ( !v52 )
  {
    v98 = *(_BYTE **)a10;
    v99 = *(_QWORD *)(a10 + 8);
    *(_QWORD *)&file_actions.__allocated = file_actions.__pad;
    sub_2290E80(&file_actions, v98, (__int64)&v98[v99]);
    pad = (_BYTE *)rlimits[0].rlim_cur;
    if ( *(posix_spawn_file_actions_t **)&file_actions.__allocated == (posix_spawn_file_actions_t *)file_actions.__pad )
    {
      actions = file_actions.__actions;
      if ( file_actions.__actions )
      {
        if ( file_actions.__actions == (struct __spawn_action *)((char *)&dword_0 + 1) )
          *(_BYTE *)rlimits[0].rlim_cur = file_actions.__pad[0];
        else
          memcpy((void *)rlimits[0].rlim_cur, *(const void **)&file_actions.__allocated, (size_t)file_actions.__actions);
        actions = file_actions.__actions;
        pad = (_BYTE *)rlimits[0].rlim_cur;
      }
      rlimits[0].rlim_max = (rlim_t)actions;
      *((_BYTE *)actions + (_QWORD)pad) = 0;
      pad = *(_BYTE **)&file_actions.__allocated;
      goto LABEL_187;
    }
    if ( (struct rlimit *)rlimits[0].rlim_cur == &rlimits[1] )
    {
      p_path = *(_QWORD **)file_actions.__pad;
      rlimits[0].rlim_cur = *(_QWORD *)&file_actions.__allocated;
      *(__m128 *)&rlimits[0].rlim_max = _mm_loadh_ps((const double *)&p_path);
    }
    else
    {
      p_path = *(_QWORD **)file_actions.__pad;
      v101 = rlimits[1].rlim_cur;
      rlimits[0].rlim_cur = *(_QWORD *)&file_actions.__allocated;
      *(__m128 *)&rlimits[0].rlim_max = _mm_loadh_ps((const double *)&p_path);
      if ( pad )
      {
        *(_QWORD *)&file_actions.__allocated = pad;
        *(_QWORD *)file_actions.__pad = v101;
LABEL_187:
        file_actions.__actions = nullptr;
        *pad = 0;
        if ( *(posix_spawn_file_actions_t **)&file_actions.__allocated != (posix_spawn_file_actions_t *)file_actions.__pad )
          operator delete(*(void **)&file_actions.__allocated);
        *(_QWORD *)&v165 = rlimits;
        goto LABEL_74;
      }
    }
    pad = file_actions.__pad;
    *(_QWORD *)&file_actions.__allocated = file_actions.__pad;
    goto LABEL_187;
  }
LABEL_74:
  if ( !*(_BYTE *)(a10 + 40) )
  {
    if ( !*(_BYTE *)(a10 + 64) )
      goto LABEL_76;
LABEL_176:
    v94 = *(_BYTE **)(a10 + 48);
    v95 = *(_QWORD *)(a10 + 56);
    *(_QWORD *)&file_actions.__allocated = file_actions.__pad;
    sub_2290E80(&file_actions, v94, (__int64)&v94[v95]);
    v96 = v223;
    if ( *(posix_spawn_file_actions_t **)&file_actions.__allocated == (posix_spawn_file_actions_t *)file_actions.__pad )
    {
      v143 = file_actions.__actions;
      if ( file_actions.__actions )
      {
        if ( file_actions.__actions == (struct __spawn_action *)((char *)&dword_0 + 1) )
          *(_BYTE *)v223 = file_actions.__pad[0];
        else
          memcpy(v223, *(const void **)&file_actions.__allocated, (size_t)file_actions.__actions);
        v143 = file_actions.__actions;
        v96 = v223;
      }
      v224.m128_u64[0] = (unsigned __int64)v143;
      *((_BYTE *)v143 + (_QWORD)v96) = 0;
      v96 = *(_BYTE **)&file_actions.__allocated;
      goto LABEL_180;
    }
    if ( v223 == &v224.m128_u16[4] )
    {
      p_path = *(_QWORD **)file_actions.__pad;
      v223 = *(void **)&file_actions.__allocated;
      v224 = _mm_loadh_ps((const double *)&p_path);
    }
    else
    {
      p_path = *(_QWORD **)file_actions.__pad;
      v97 = v224.m128_u64[1];
      v223 = *(void **)&file_actions.__allocated;
      v224 = _mm_loadh_ps((const double *)&p_path);
      if ( v96 )
      {
        *(_QWORD *)&file_actions.__allocated = v96;
        *(_QWORD *)file_actions.__pad = v97;
LABEL_180:
        file_actions.__actions = nullptr;
        *v96 = 0;
        if ( *(posix_spawn_file_actions_t **)&file_actions.__allocated != (posix_spawn_file_actions_t *)file_actions.__pad )
          operator delete(*(void **)&file_actions.__allocated);
        v166 = &v223;
        goto LABEL_76;
      }
    }
    v96 = file_actions.__pad;
    *(_QWORD *)&file_actions.__allocated = file_actions.__pad;
    goto LABEL_180;
  }
  v90 = *(_BYTE **)(a10 + 24);
  v91 = *(_QWORD *)(a10 + 32);
  *(_QWORD *)&file_actions.__allocated = file_actions.__pad;
  sub_2290E80(&file_actions, v90, (__int64)&v90[v91]);
  v92 = dest;
  if ( *(posix_spawn_file_actions_t **)&file_actions.__allocated == (posix_spawn_file_actions_t *)file_actions.__pad )
  {
    v142 = file_actions.__actions;
    if ( file_actions.__actions )
    {
      if ( file_actions.__actions == (struct __spawn_action *)((char *)&dword_0 + 1) )
        *(_BYTE *)dest = file_actions.__pad[0];
      else
        memcpy(dest, *(const void **)&file_actions.__allocated, (size_t)file_actions.__actions);
      v142 = file_actions.__actions;
      v92 = dest;
    }
    v222.m128_u64[0] = (unsigned __int64)v142;
    *((_BYTE *)v142 + (_QWORD)v92) = 0;
    v92 = *(_BYTE **)&file_actions.__allocated;
  }
  else
  {
    if ( dest == &v222.m128_u16[4] )
    {
      p_path = *(_QWORD **)file_actions.__pad;
      dest = *(void **)&file_actions.__allocated;
      v222 = _mm_loadh_ps((const double *)&p_path);
    }
    else
    {
      p_path = *(_QWORD **)file_actions.__pad;
      v93 = v222.m128_u64[1];
      dest = *(void **)&file_actions.__allocated;
      v222 = _mm_loadh_ps((const double *)&p_path);
      if ( v92 )
      {
        *(_QWORD *)&file_actions.__allocated = v92;
        *(_QWORD *)file_actions.__pad = v93;
        goto LABEL_173;
      }
    }
    v92 = file_actions.__pad;
    *(_QWORD *)&file_actions.__allocated = file_actions.__pad;
  }
LABEL_173:
  file_actions.__actions = nullptr;
  *v92 = 0;
  if ( *(posix_spawn_file_actions_t **)&file_actions.__allocated != (posix_spawn_file_actions_t *)file_actions.__pad )
    operator delete(*(void **)&file_actions.__allocated);
  v52 = *(_BYTE *)(a10 + 64) == 0;
  *((_QWORD *)&v165 + 1) = &dest;
  if ( !v52 )
    goto LABEL_176;
LABEL_76:
  posix_spawn_file_actions_init(&file_actions);
  if ( (unsigned __int8)sub_2291530(v165, 0, (_QWORD *)a12, &file_actions)
    || (unsigned __int8)sub_2291530(*((__int64 *)&v165 + 1), 1, (_QWORD *)a12, &file_actions) )
  {
    goto LABEL_51;
  }
  if ( !*(_BYTE *)(a10 + 40)
    || !*(_BYTE *)(a10 + 64)
    || (v53 = *(_QWORD *)(a10 + 32), v53 != *(_QWORD *)(a10 + 56))
    || v53 && memcmp(*(const void **)(a10 + 24), *(const void **)(a10 + 48), v53) )
  {
    if ( (unsigned __int8)sub_2291530((__int64)v166, 2, (_QWORD *)a12, &file_actions) )
      goto LABEL_51;
    goto LABEL_162;
  }
  v54 = posix_spawn_file_actions_adddup2(&file_actions, 1, 2);
  if ( !v54 )
  {
LABEL_162:
    p_file_actions = &file_actions;
    goto LABEL_6;
  }
  v179 = (__m128i *)v181;
  v24 = (__m128i *)operator new(0x20u);
  v179 = v24;
  v181[0] = 31;
  *v24 = _mm_load_si128((const __m128i *)&xmmword_23ABDA0);
  strcpy(v24[1].m128i_i8, "tderr to stdout");
  v180 = 31;
  if ( !a12 )
    goto LABEL_49;
  if ( v54 == -1 )
    v54 = *__errno_location();
  sub_2287FA0((__int64)&v185, v54);
  v55 = v179;
  v56 = v180;
  v182 = v184;
  if ( &v179->m128i_i8[v180] && !v179 )
    goto LABEL_193;
  if ( v180 > 0xF )
  {
    if ( (v180 & 0x8000000000000000LL) != 0LL )
      goto LABEL_398;
    v156 = v179;
    v57 = (_QWORD *)operator new(v180 + 1);
    v184[0] = v56;
    v55 = v156;
    v182 = v57;
LABEL_380:
    memcpy(v57, v55, v56);
    v57 = v182;
    goto LABEL_92;
  }
  if ( v180 == 1 )
  {
    LOBYTE(v184[0]) = v179->m128i_i8[0];
    v57 = v184;
    goto LABEL_92;
  }
  v57 = v184;
  if ( v180 )
    goto LABEL_380;
LABEL_92:
  v183 = v56;
  *((_BYTE *)v57 + v56) = 0;
  v58 = v183;
  if ( v183 == 0x7FFFFFFFFFFFFFFFLL || v183 == 9223372036854775806LL )
    goto LABEL_392;
  v59 = (void *)(v183 + 2);
  if ( v182 == v184 )
    v60 = 15;
  else
    v60 = v184[0];
  if ( (unsigned __int64)v59 > v60 )
  {
    v156 = (void *)(v183 + 2);
    sub_998B30((__int64)&v182, v183, 0, ": ", 2u);
    v59 = v156;
  }
  else
  {
    *(_WORD *)((char *)v182 + v183) = 8250;
  }
  v183 = (size_t)v59;
  *((_BYTE *)v182 + v58 + 2) = 0;
  v61 = v182;
  v62 = v183 + v186;
  if ( v182 == v184 )
    v63 = 15;
  else
    v63 = v184[0];
  if ( v62 <= v63 )
  {
    if ( v186 )
    {
      v147 = (char *)v182 + v183;
      if ( v186 == 1 )
        *v147 = *(_BYTE *)v185;
      else
        memcpy(v147, v185, v186);
      v61 = v182;
    }
    goto LABEL_104;
  }
  if ( v185 == v187 )
    v64 = 15;
  else
    v64 = v187[0];
  if ( v62 > v64 )
  {
    sub_998B30((__int64)&v182, v183, 0, v185, v186);
    v61 = v182;
LABEL_104:
    v183 = v62;
    v65 = (__m128i *)&v182;
    v61[v62] = 0;
    goto LABEL_105;
  }
  v65 = (__m128i *)sub_99BDC0(&v185, 0, 0, v182, v183);
LABEL_105:
  p_path = &path;
  path = v211;
  if ( (__m128i *)v65->m128i_i64[0] == &v65[1] )
  {
    *(__m128i *)v211 = _mm_loadu_si128(v65 + 1);
  }
  else
  {
    path = (char *)v65->m128i_i64[0];
    *(_QWORD *)v211 = v65[1].m128i_i64[0];
  }
  v210 = v65->m128i_u64[1];
  v65->m128i_i64[0] = (__int64)v65[1].m128i_i64;
  v66 = p_path;
  v65->m128i_i64[1] = 0;
  v65[1].m128i_i8[0] = 0;
  v67 = *(_BYTE **)a12;
  v68 = *(_BYTE **)a12;
  if ( path == (char *)(v66 + 2) )
  {
    v148 = v210;
    if ( v210 )
    {
      if ( v210 == 1 )
        *v67 = v211[0];
      else
        memcpy(v67, path, v210);
      v148 = v210;
      v67 = *(_BYTE **)a12;
    }
    *(_QWORD *)(a12 + 8) = v148;
    v67[v148] = 0;
    v68 = path;
    goto LABEL_111;
  }
  v156 = *(void **)v211;
  if ( v67 == (_BYTE *)(a12 + 16) )
  {
    v149 = _mm_loadh_ps((const double *)&v156);
    *(_QWORD *)a12 = path;
    *(__m128 *)(a12 + 8) = v149;
    goto LABEL_385;
  }
  v69 = _mm_loadh_ps((const double *)&v156);
  v70 = *(_QWORD *)(a12 + 16);
  *(_QWORD *)a12 = path;
  *(__m128 *)(a12 + 8) = v69;
  if ( !v67 )
  {
LABEL_385:
    v68 = p_path + 2;
    path = (char *)(p_path + 2);
    goto LABEL_111;
  }
  path = v67;
  *(_QWORD *)v211 = v70;
LABEL_111:
  v210 = 0;
  *v68 = 0;
  if ( path != (char *)(p_path + 2) )
    operator delete(path);
  if ( v182 != v184 )
    operator delete(v182);
  if ( v185 != v187 )
    operator delete(v185);
  v39 = v179;
  if ( v179 != (__m128i *)v181 )
LABEL_50:
    operator delete(v39);
LABEL_51:
  LOBYTE(v156) = 0;
LABEL_52:
  v40 = (void **)&v225;
  do
  {
    while ( 1 )
    {
      v40 -= 4;
      if ( *v40 == v40 + 2 )
        break;
      operator delete(*v40);
      if ( v40 == (void **)v15 )
        goto LABEL_55;
    }
  }
  while ( v40 != (void **)v15 );
LABEL_55:
  if ( envp )
    operator delete(envp);
  if ( argv )
    operator delete(argv);
  v41 = (char *)ptr;
  v42 = (char *)ptr + 8 * (unsigned int)v215;
  if ( ptr != v42 )
  {
    for ( i = ptr; ; i = ptr )
    {
      v45 = (unsigned int)((v41 - i) >> 3) >> 7;
      if ( v45 > 0x1D )
      {
        v44 = *(_QWORD *)v41;
        v41 += 8;
        operator delete(v44, 0x40000000000LL, 16);
        if ( v42 == v41 )
          break;
      }
      else
      {
        v46 = *(_QWORD *)v41;
        v41 += 8;
        operator delete(v46, 4096LL << v45, 16);
        if ( v41 == v42 )
          break;
      }
    }
  }
  v47 = v217;
  v48 = &v217[(unsigned int)v218];
  if ( v217 != v48 )
  {
    do
    {
      v49 = v47->m128i_i64[1];
      v50 = v47->m128i_i64[0];
      ++v47;
      operator delete(v50, v49, 16);
    }
    while ( v48 != v47 );
    v48 = v217;
  }
  if ( v48 != (__m128i *)(v14 + 5) )
    free(v48);
  if ( ptr != v14 + 2 )
    free(ptr);
  return (unsigned __int8)v156;
}
