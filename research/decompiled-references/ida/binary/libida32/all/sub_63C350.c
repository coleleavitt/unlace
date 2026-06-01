__int64 __fastcall sub_63C350(
        __int64 *a1,
        __int64 *a2,
        char *a3,
        int a4,
        char *a5,
        char *a6,
        double a7,
        double a8,
        char *a9,
        char *a10,
        unsigned __int8 *a11,
        __int64 *a12,
        __int64 *a13,
        int a14,
        __int64 a15)
{
  __int64 *v15; // r15
  int v17; // r13d
  size_t v18; // rax
  char *v19; // r10
  int v20; // r9d
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  size_t v24; // r8
  __int64 v25; // r9
  unsigned int v26; // eax
  int v28; // eax
  const char *v29; // rbx
  size_t v30; // rax
  _BYTE *v31; // r9
  const char **p_dest; // r8
  char *v33; // rdi
  __int64 v34; // rax
  char v35; // al
  const char *v36; // rsi
  void *v37; // rdi
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __m128i v40; // xmm0
  char **v41; // r14
  void *v42; // rdi
  char *v43; // rdi
  char *v44; // r15
  __int64 v45; // r13
  char *i; // r12
  char *v47; // rbx
  void *v48; // rdi
  void *v49; // rdi
  char *v50; // rdx
  __int64 v51; // r12
  int v52; // r14d
  __int64 v53; // rbx
  char *v54; // rax
  void *v55; // rdi
  char *v56; // rdx
  __int64 v57; // r12
  int v58; // r15d
  __int64 v59; // rbx
  char *v60; // rax
  void *v61; // rdi
  __m128i v62; // xmm0
  char v63; // al
  char *v64; // rbx
  char *v65; // rdx
  __int64 v66; // rbx
  int *v67; // rsi
  _DWORD *v68; // rax
  __int32 v69; // r8d
  unsigned int v70; // ebx
  unsigned int v71; // r13d
  __int64 v72; // rcx
  int v73; // eax
  __int32 v74; // eax
  char *v75; // r15
  char *v76; // rdi
  __int64 v77; // r12
  __int64 v78; // r15
  char *v79; // rbx
  void *v80; // rdi
  void *v81; // rdi
  _QWORD *v82; // rbx
  void *v83; // rdi
  char *v84; // rdx
  __int64 v85; // rbx
  __int64 v86; // r14
  char *v87; // rax
  void *v88; // rdi
  __int64 v89; // rax
  char v90; // al
  __int64 v91; // r8
  void *v92; // rax
  char *v93; // rax
  _BYTE *v94; // r9
  char *v95; // rbx
  char *v96; // rsi
  size_t v97; // rdx
  unsigned __int64 j; // r8
  size_t v99; // rbx
  void *v100; // rbx
  __int16 v101; // ax
  size_t v102; // r9
  char *v103; // rdx
  __m128i si128; // xmm0
  __int64 v105; // rax
  __int64 *v106; // rbx
  __int64 *v107; // r12
  char *v108; // rax
  void *v109; // rdi
  __int64 v110; // rbx
  void **v111; // r12
  unsigned __int64 v112; // rax
  void *v113; // rax
  void *v114; // rcx
  __m128i v115; // xmm0
  const char *m128i_i8; // rsi
  _QWORD *v117; // r12
  __int64 *v118; // rbx
  void *v119; // rdi
  void *v120; // r12
  size_t v121; // rcx
  __m128i v122; // xmm0
  __int64 v123; // rax
  __m128i v124; // xmm0
  void *v125; // rdi
  __int64 v126; // r12
  __int64 v127; // rbx
  void *v128; // rdi
  void *v129; // rdi
  void *v130; // rdx
  size_t v131; // rbx
  __int64 v132; // rbx
  size_t v133; // rax
  size_t v134; // r12
  size_t v135; // r12
  __int64 v136; // rcx
  __m128i v137; // xmm0
  int v138; // eax
  __m128i v139; // xmm0
  int v140; // eax
  __m128i *v141; // rax
  __m128i v142; // xmm0
  void *v143; // rax
  size_t v144; // r12
  size_t v145; // rdx
  __int64 v146; // rdi
  void *v147; // rdi
  size_t v148; // rax
  __int64 v149; // rcx
  const __m128i *v150; // rcx
  __int64 v151; // rax
  __int64 v152; // r10
  __int64 v153; // rcx
  size_t v154; // rdx
  __int64 v155; // rdi
  void *v156; // rax
  _QWORD *v157; // r10
  size_t v158; // rdx
  const char *v159; // [rsp-10h] [rbp-280h]
  void *v160; // [rsp-8h] [rbp-278h]
  __int64 v161; // [rsp+0h] [rbp-270h]
  unsigned __int64 v162; // [rsp+0h] [rbp-270h]
  int v163; // [rsp+8h] [rbp-268h]
  const __m128i *v164; // [rsp+8h] [rbp-268h]
  const char **v165; // [rsp+8h] [rbp-268h]
  int v166; // [rsp+10h] [rbp-260h]
  void *v167; // [rsp+10h] [rbp-260h]
  size_t v168; // [rsp+10h] [rbp-260h]
  __m128i v169; // [rsp+18h] [rbp-258h] BYREF
  void **v170; // [rsp+28h] [rbp-248h]
  void *v171; // [rsp+30h] [rbp-240h]
  unsigned int *v172; // [rsp+38h] [rbp-238h]
  size_t v173[2]; // [rsp+40h] [rbp-230h] BYREF
  void *v174; // [rsp+50h] [rbp-220h]
  void *src; // [rsp+58h] [rbp-218h]
  unsigned int v176; // [rsp+64h] [rbp-20Ch]
  size_t n; // [rsp+68h] [rbp-208h]
  __int64 v178; // [rsp+70h] [rbp-200h]
  _BYTE *v179; // [rsp+78h] [rbp-1F8h]
  __m128i v180; // [rsp+80h] [rbp-1F0h] BYREF
  unsigned __int8 *v181; // [rsp+90h] [rbp-1E0h]
  char *v182; // [rsp+98h] [rbp-1D8h]
  char *v183; // [rsp+A0h] [rbp-1D0h]
  __int64 v184; // [rsp+A8h] [rbp-1C8h]
  char *v185; // [rsp+B0h] [rbp-1C0h]
  char *v186; // [rsp+B8h] [rbp-1B8h]
  char *v187; // [rsp+C0h] [rbp-1B0h]
  __int64 v188; // [rsp+C8h] [rbp-1A8h]
  unsigned int v189; // [rsp+D4h] [rbp-19Ch] BYREF
  void *v190; // [rsp+D8h] [rbp-198h] BYREF
  void *v191[2]; // [rsp+E0h] [rbp-190h] BYREF
  void *v192; // [rsp+F0h] [rbp-180h] BYREF
  __int128 v193; // [rsp+F8h] [rbp-178h]
  void *ptr; // [rsp+110h] [rbp-160h] BYREF
  __int128 v195; // [rsp+118h] [rbp-158h]
  void *dest; // [rsp+130h] [rbp-140h] BYREF
  __int128 v197; // [rsp+138h] [rbp-138h]
  void *v198; // [rsp+150h] [rbp-120h] BYREF
  __int128 v199; // [rsp+158h] [rbp-118h]
  void *v200; // [rsp+170h] [rbp-100h] BYREF
  __int128 v201; // [rsp+178h] [rbp-F8h]
  void *v202; // [rsp+190h] [rbp-E0h] BYREF
  __int128 v203; // [rsp+198h] [rbp-D8h]
  int v204; // [rsp+1A8h] [rbp-C8h]
  _WORD v205[2]; // [rsp+1ACh] [rbp-C4h] BYREF
  void *v206; // [rsp+1B0h] [rbp-C0h]
  __m128i v207; // [rsp+1B8h] [rbp-B8h]
  void *s; // [rsp+1C8h] [rbp-A8h] BYREF
  __int64 v209; // [rsp+1D0h] [rbp-A0h]
  void *v210; // [rsp+1D8h] [rbp-98h]
  __int64 v211; // [rsp+1E0h] [rbp-90h]
  __m128i v212; // [rsp+1E8h] [rbp-88h]
  void *v213[2]; // [rsp+1F8h] [rbp-78h] BYREF
  __m128i v214; // [rsp+208h] [rbp-68h]
  void *v215; // [rsp+218h] [rbp-58h]
  __m128i v216; // [rsp+220h] [rbp-50h]
  char v217[4]; // [rsp+234h] [rbp-3Ch] BYREF
  unsigned __int64 v218; // [rsp+238h] [rbp-38h]

  v188 = (__int64)a2;
  v15 = a12;
  v187 = a5;
  v183 = a9;
  v186 = a6;
  v182 = a10;
  v181 = a11;
  LODWORD(v184) = a14;
  v180.m128i_i64[0] = a15;
  v218 = __readfsqword(0x28u);
  if ( !a2 || !a5 || (LOBYTE(v179) = a3 == nullptr || *a5 == 0, (_BYTE)v179) || !*a3 )
  {
    LODWORD(v188) = 2;
    return (unsigned int)v188;
  }
  v185 = a3;
  v17 = a4;
  v193 = 0;
  LODWORD(v178) = a4 & 1;
  v192 = nullptr;
  if ( (a4 & 1) != 0 )
  {
    v18 = strlen(a3);
    v19 = v185;
    v20 = 8;
  }
  else
  {
    v18 = strlen(a3);
    v19 = v185;
    v20 = 6;
  }
  src = v19;
  v176 = v20;
  n = v18;
  v185 = (char *)(v18 + 1);
  v192 = (void *)qvector_reserve(&v192, 0, v18 + 1, 1);
  v21 = (__int64)src;
  *(_QWORD *)&v193 = v185;
  v185 = (char *)n;
  memmove(v192, src, n);
  v24 = n;
  v25 = v176;
  *((_BYTE *)v192 + n) = 0;
  if ( (v17 & 0x400) == 0 )
  {
    if ( (v17 & 0x80u) != 0 )
    {
      v21 = (unsigned int)v25;
      LODWORD(v185) = v25;
      validate_name(&v192, (unsigned int)v25, (4 * (_WORD)v17) & 0x400 | 1u);
      v25 = (unsigned int)v185;
    }
    if ( (_DWORD)v25 == 8 )
    {
      v33 = (char *)haystack;
      if ( (_QWORD)v193 )
        v33 = (char *)v192;
      if ( !(unsigned __int8)is_valid_typename(
                               v33,
                               v21,
                               v22,
                               v23,
                               v24,
                               v25,
                               v161,
                               v163,
                               v166,
                               v169.m128i_i32[0],
                               v169.m128i_i32[2],
                               (int)v170,
                               (int)v171,
                               (int)v172,
                               v173[0]) )
      {
        LODWORD(v188) = 10;
        goto LABEL_19;
      }
    }
    if ( (_DWORD)v178 )
    {
      v185 = (char *)haystack;
      if ( (_QWORD)v193 )
        v185 = (char *)v192;
      goto LABEL_14;
    }
    sub_62B950((char *)&v192, (const char *)v21);
    v185 = (char *)haystack;
    if ( (_QWORD)v193 )
      v185 = (char *)v192;
LABEL_26:
    v178 = *(_QWORD *)(v188 + 56);
    if ( v178 )
    {
      LODWORD(n) = *(_DWORD *)(v178 + 8) & 2;
      LOBYTE(v176) = (n & 2) != 0;
LABEL_28:
      ptr = nullptr;
      v195 = 0;
      if ( (v17 & 8) != 0 )
      {
        if ( !(unsigned __int8)sub_6319C0((__int64)&ptr, v188, (__int64)v185, (__int64)v187, 1u, 0, nullptr) )
        {
          LODWORD(v188) = 6;
LABEL_93:
          if ( ptr )
            qfree(ptr);
          goto LABEL_19;
        }
        v185 = (char *)haystack;
        if ( (_QWORD)v195 )
          v185 = (char *)ptr;
        v17 &= ~8u;
      }
      v189 = 0;
      dest = nullptr;
      v172 = &v189;
      v197 = 0;
      v28 = sub_632230((__int64)a1, v188, v185, v17 & 0xFFFFFFBD, nullptr, 0, 0, 0, 0, &v189);
      if ( v28 )
      {
        if ( (v17 & 4) == 0 )
        {
          LODWORD(v188) = 7;
          goto LABEL_91;
        }
        if ( v28 == 1 )
        {
          if ( !(_DWORD)n )
          {
            if ( !v185 )
              goto LABEL_41;
            v93 = (char *)strlen(v185);
            v94 = v93;
            if ( !v93 )
              goto LABEL_41;
            v95 = v93 + 1;
            if ( *((_QWORD *)&v197 + 1) < (unsigned __int64)(v93 + 1) )
            {
              src = v93;
              dest = (void *)qvector_reserve(&dest, dest, v93 + 1, 1);
              v94 = src;
            }
            src = &dest;
            v96 = v185;
            v97 = (size_t)v94;
            *(_QWORD *)&v197 = v95;
            v179 = v94;
            goto LABEL_186;
          }
          if ( !a12 || !*(_DWORD *)a12 || *(_DWORD *)a12 == v189 )
          {
            v29 = (const char *)(*(_QWORD *)(v178 + 32) + *(unsigned int *)(*(_QWORD *)(v178 + 40) + 4LL * v189) + 4LL);
            v30 = strlen(v29);
            v31 = (_BYTE *)v30;
            if ( !v30 )
            {
LABEL_41:
              *(_QWORD *)&v197 = 0;
              p_dest = (const char **)&dest;
LABEL_42:
              LOBYTE(v179) = 1;
              LOBYTE(src) = 1;
              goto LABEL_57;
            }
            v130 = (void *)(v30 + 1);
            if ( *((_QWORD *)&v197 + 1) < v30 + 1 )
            {
              v173[0] = v30;
              src = (void *)(v30 + 1);
              dest = (void *)qvector_reserve(&dest, dest, v130, 1);
              v31 = (_BYTE *)v173[0];
              v130 = src;
            }
            *(_QWORD *)&v197 = v130;
            v96 = (char *)v29;
            v97 = (size_t)v31;
            src = &dest;
            v179 = v31;
LABEL_186:
            memmove(dest, v96, v97);
            v179[(_QWORD)dest] = 0;
            p_dest = (const char **)src;
            goto LABEL_42;
          }
          goto LABEL_179;
        }
      }
      LOBYTE(src) = v176 & (a12 != nullptr);
      if ( (_BYTE)src )
      {
        v34 = *(unsigned int *)a12;
        if ( (_DWORD)v34 )
        {
          if ( (unsigned int)v34 >= *(_DWORD *)(v178 + 48) )
          {
LABEL_179:
            LODWORD(v188) = 3;
LABEL_91:
            if ( dest )
            {
              *(_QWORD *)&v197 = 0;
              qfree(dest);
            }
            goto LABEL_93;
          }
          if ( (_BYTE)v184 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(v178 + 40) + 4 * v34) != -1 )
            {
              LODWORD(v188) = 8;
              goto LABEL_91;
            }
          }
          else
          {
            LOBYTE(v179) = 0;
          }
          LOBYTE(src) = 0;
          p_dest = (const char **)&dest;
        }
        else
        {
          v90 = (char)src;
          p_dest = (const char **)&dest;
          LOBYTE(src) = 0;
          LOBYTE(v179) = v90;
        }
      }
      else
      {
        LOBYTE(v179) = 1;
        p_dest = (const char **)&dest;
      }
LABEL_57:
      v198 = nullptr;
      v200 = nullptr;
      v190 = nullptr;
      v171 = &v200;
      v174 = &v198;
      v199 = 0;
      v201 = 0;
      v35 = sub_632470((__int64)&v190, (__int64 *)&v198, (__int64)&v200, v188, p_dest, v187, (__int64)v186, v17);
      v36 = v159;
      v37 = v160;
      if ( !v35 )
      {
        if ( (_QWORD)v199 && a13 )
        {
          v38 = v198;
          v39 = *a13;
          v40 = _mm_loadu_si128((const __m128i *)(a13 + 1));
          *a13 = *(_QWORD *)v198;
          a13[1] = v38[1];
          a13[2] = v38[2];
          *v38 = v39;
          *(__m128i *)(v38 + 1) = v40;
        }
        LODWORD(v188) = 9;
LABEL_62:
        v41 = (char **)v190;
        if ( v190 )
        {
          v42 = *((void **)v190 + 3);
          if ( v42 )
          {
            *((_QWORD *)v190 + 4) = 0;
            qfree(v42);
          }
          v43 = *v41;
          if ( *v41 )
          {
            v44 = v41[1];
            if ( v44 )
            {
              v45 = 0;
              for ( i = nullptr; i != v44; ++i )
              {
                v47 = &v43[v45];
                v48 = *(void **)&v43[v45 + 24];
                if ( v48 )
                {
                  *((_QWORD *)v47 + 4) = 0;
                  qfree(v48);
                }
                v49 = *(void **)v47;
                if ( *(_QWORD *)v47 )
                {
                  *((_QWORD *)v47 + 1) = 0;
                  qfree(v49);
                }
                v43 = *v41;
                v45 += 56;
              }
            }
            v41[1] = nullptr;
            qfree(v43);
          }
          qfree(v41);
        }
        v50 = (char *)v200;
        if ( v200 )
        {
          v51 = v201;
          if ( (_QWORD)v201 )
          {
            v52 = v188;
            v53 = 0;
            do
            {
              v54 = &v50[24 * v53];
              v55 = *(void **)v54;
              if ( *(_QWORD *)v54 )
              {
                *((_QWORD *)v54 + 1) = 0;
                qfree(v55);
                v50 = (char *)v200;
              }
              ++v53;
            }
            while ( v51 != v53 );
            LODWORD(v188) = v52;
          }
          *(_QWORD *)&v201 = 0;
          qfree(v50);
        }
        v56 = (char *)v198;
        if ( v198 )
        {
          v57 = v199;
          if ( (_QWORD)v199 )
          {
            v58 = v188;
            v59 = 0;
            do
            {
              v60 = &v56[24 * v59];
              v61 = *(void **)v60;
              if ( *(_QWORD *)v60 )
              {
                *((_QWORD *)v60 + 1) = 0;
                qfree(v61);
                v56 = (char *)v198;
              }
              ++v59;
            }
            while ( v57 != v59 );
            LODWORD(v188) = v58;
          }
          *(_QWORD *)&v199 = 0;
          qfree(v56);
        }
        goto LABEL_91;
      }
      v62.m128i_i64[0] = 0;
      v202 = nullptr;
      memset(v205, 0, 3);
      v204 = -1;
      v206 = nullptr;
      v170 = v213;
      s = v213;
      v209 = 1;
      v210 = nullptr;
      v211 = 0;
      v212.m128i_i32[0] = 1065353216;
      v212.m128i_i64[1] = 0;
      v215 = nullptr;
      v203 = 0;
      v207 = 0;
      *(_OWORD *)v213 = 0;
      v214 = 0;
      v216 = 0;
      if ( !(_BYTE)src )
        goto LABEL_96;
      if ( (v17 & 1) != 0 )
      {
        if ( v190 )
        {
          if ( (*((_BYTE *)v190 + 52) & 7) != 0 )
            LODWORD(v91) = 1 << ((*((_BYTE *)v190 + 52) & 7) - 1);
          else
            LODWORD(v91) = (unsigned __int8)getinf(61);
          v91 = (int)v91;
        }
        else
        {
          v91 = -1;
        }
        sub_6A6710(a1, v188, &v202, dest, v91, v17 >= 0);
      }
      else
      {
        v36 = (const char *)v188;
        v37 = a1;
        if ( (unsigned __int8)sub_63B3D0((__int64)a1, v188, v185, nullptr, 0.0, a8) )
        {
LABEL_158:
          if ( (v205[0] & 0x2F) == 0xD )
          {
            LOBYTE(v173[0]) = *v187;
            if ( (v173[0] & 0x2F) == 0xD )
              goto LABEL_99;
          }
          else
          {
            v35 = LOBYTE(v205[0]) == 0;
            if ( (v205[0] & 0x3F) != 0x2D )
            {
LABEL_96:
              if ( v180.m128i_i64[0] )
              {
                if ( v35 )
                {
                  v63 = *(_BYTE *)(v180.m128i_i64[0] + 28);
                  if ( (v63 & 0x3F) == 0x2D )
                  {
                    j = *(_QWORD *)(v180.m128i_i64[0] + 8);
                    if ( j && (v99 = j - 1, j != 1) )
                    {
                      v173[0] = *(_QWORD *)v180.m128i_i64[0];
                      if ( *((_QWORD *)&v203 + 1) < j )
                      {
                        v169.m128i_i64[1] = j;
                        v202 = (void *)qvector_reserve(&v202, v202, j, 1);
                        j = v169.m128i_u64[1];
                      }
                      v36 = (const char *)v173[0];
                      v37 = v202;
                      *(_QWORD *)&v203 = j;
                      v169.m128i_i64[1] = j;
                      memmove(v202, (const void *)v173[0], v99);
                      j = v169.m128i_u64[1];
                      *((char *)v202 + v169.m128i_i64[1] - 1) = 0;
                      v63 = *(_BYTE *)(v180.m128i_i64[0] + 28);
                    }
                    else
                    {
                      *(_QWORD *)&v203 = 0;
                    }
                    LOBYTE(v205[0]) = v63;
                    v100 = nullptr;
                    v101 = *(_WORD *)(v180.m128i_i64[0] + 29);
                    v102 = *(_QWORD *)(v180.m128i_i64[0] + 40);
                    v204 = *(_DWORD *)(v180.m128i_i64[0] + 24);
                    *(_WORD *)((char *)v205 + 1) = v101;
                    if ( v102 )
                    {
                      v173[0] = v102;
                      v37 = (void *)(32 * v102);
                      v151 = qalloc_or_throw(32 * v102, v36);
                      v102 = v173[0];
                      v100 = (void *)v151;
                      v152 = v151;
                      for ( j = 0; j != v102; ++j )
                      {
                        a8 = 0.0;
                        v153 = *(_QWORD *)(v180.m128i_i64[0] + 32) + 32 * j;
                        *(_QWORD *)v152 = 0;
                        *(_OWORD *)(v152 + 8) = 0;
                        v154 = *(_QWORD *)(v153 + 8);
                        if ( v154 )
                        {
                          v155 = *(_QWORD *)(v153 + 8);
                          v162 = j;
                          v165 = (const char **)v153;
                          v168 = v102;
                          v169.m128i_i64[1] = v152;
                          v173[0] = v154;
                          v156 = (void *)qalloc_or_throw(v155, v36);
                          v157 = (_QWORD *)v169.m128i_i64[1];
                          v158 = v173[0];
                          v37 = v156;
                          *(_QWORD *)(v169.m128i_i64[1] + 16) = v173[0];
                          *v157 = v156;
                          v36 = *v165;
                          v169.m128i_i64[0] = (__int64)v157;
                          v169.m128i_i64[1] = (__int64)v165;
                          memcpy(v156, v36, v158);
                          v152 = v169.m128i_i64[0];
                          j = v162;
                          v102 = v168;
                          *(_QWORD *)(v169.m128i_i64[0] + 8) = v173[0];
                          v153 = v169.m128i_i64[1];
                        }
                        v152 += 32;
                        *(_DWORD *)(v152 - 8) = *(_DWORD *)(v153 + 24);
                      }
                    }
                    v103 = (char *)v206;
                    si128 = _mm_unpacklo_epi64((__m128i)v102, (__m128i)v102);
                    if ( v206 )
                    {
                      if ( v207.m128i_i64[0] )
                      {
                        v105 = v188;
                        v169.m128i_i64[1] = (__int64)v100;
                        v106 = (__int64 *)v207.m128i_i64[0];
                        v188 = 0;
                        *(__m128i *)v173 = si128;
                        v107 = (__int64 *)v105;
                        do
                        {
                          v108 = &v103[32 * v188];
                          v109 = *(void **)v108;
                          if ( *(_QWORD *)v108 )
                          {
                            *((_QWORD *)v108 + 1) = 0;
                            qfree(v109);
                            v103 = (char *)v206;
                          }
                          ++v188;
                        }
                        while ( v106 != (__int64 *)v188 );
                        v188 = (__int64)v107;
                        si128 = _mm_load_si128((const __m128i *)v173);
                        v100 = (void *)v169.m128i_i64[1];
                      }
                      v37 = v103;
                      *(__m128i *)v173 = si128;
                      v207.m128i_i64[0] = 0;
                      qfree(v103);
                      si128 = _mm_load_si128((const __m128i *)v173);
                    }
                    v206 = v100;
                    v110 = v209;
                    v111 = (void **)s;
                    v207 = si128;
                    v173[0] = v212.m128i_u64[1];
                    v112 = *(_QWORD *)(v180.m128i_i64[0] + 64);
                    if ( v209 == v112 )
                    {
                      v111 = nullptr;
                      memset(s, 0, 8 * v209);
                    }
                    else
                    {
                      if ( v112 == 1 )
                      {
                        v114 = v170;
                        v213[0] = nullptr;
                      }
                      else
                      {
                        if ( v112 >> 60 )
                        {
                          if ( v112 > 0x1FFFFFFFFFFFFFFFLL )
                            sub_2E883E(v37, v36, 0x1FFFFFFFFFFFFFFFLL, v112 >> 60, j);
                          std::__throw_bad_alloc();
                        }
                        v169.m128i_i64[1] = 8 * v112;
                        v113 = (void *)operator new(8 * v112);
                        v114 = memset(v113, 0, v169.m128i_u64[1]);
                        v112 = *(_QWORD *)(v180.m128i_i64[0] + 64);
                      }
                      s = v114;
                      v209 = v112;
                    }
                    v191[1] = &s;
                    v115 = _mm_loadu_si128((const __m128i *)(v180.m128i_i64[0] + 88));
                    m128i_i8 = (const char *)(v180.m128i_i64[0] + 56);
                    v211 = *(_QWORD *)(v180.m128i_i64[0] + 80);
                    v212 = v115;
                    v191[0] = v210;
                    v210 = nullptr;
                    sub_48B0D0(&s, v180.m128i_i64[0] + 56, (__int64 *)v191, v180.m128i_i64[0], j);
                    if ( v111 != v170 && v111 )
                    {
                      m128i_i8 = (const char *)(8 * v110);
                      operator delete(v111, 8 * v110);
                    }
                    v117 = v191[0];
                    v118 = (__int64 *)v188;
                    if ( v191[0] )
                    {
                      do
                      {
                        v119 = v117;
                        v117 = (_QWORD *)*v117;
                        m128i_i8 = (const char *)&qword_20;
                        operator delete(v119, 0x20u);
                      }
                      while ( v117 );
                      v188 = (__int64)v118;
                    }
                    v120 = nullptr;
                    v121 = *(_QWORD *)(v180.m128i_i64[0] + 120);
                    if ( v121 )
                    {
                      v131 = 8 * v121;
                      v173[0] = *(_QWORD *)(v180.m128i_i64[0] + 120);
                      v120 = (void *)qalloc_or_throw(8 * v121, m128i_i8);
                      m128i_i8 = *(const char **)(v180.m128i_i64[0] + 112);
                      memcpy(v120, m128i_i8, v131);
                      v121 = v173[0];
                    }
                    v122 = _mm_unpacklo_epi64((__m128i)v121, (__m128i)v121);
                    if ( v213[1] )
                    {
                      *(__m128i *)v173 = v122;
                      v214.m128i_i64[0] = 0;
                      qfree(v213[1]);
                      v122 = _mm_load_si128((const __m128i *)v173);
                    }
                    v213[1] = v120;
                    v167 = nullptr;
                    v123 = *(_QWORD *)(v180.m128i_i64[0] + 144);
                    v214 = v122;
                    v169.m128i_i64[0] = v123;
                    if ( v123 )
                    {
                      v167 = (void *)qalloc_or_throw(v123 << 7, m128i_i8);
                      v132 = 0;
                      v173[0] = (size_t)v167;
                      do
                      {
                        v150 = (const __m128i *)(*(_QWORD *)(v180.m128i_i64[0] + 136) + (v132 << 7));
                        v141 = (__m128i *)v173[0];
                        v142 = _mm_loadu_si128(v150);
                        *(_QWORD *)(v173[0] + 16) = 0;
                        *v141 = v142;
                        *(__m128i *)((char *)&v141[1] + 8) = 0;
                        if ( v150[1].m128i_i64[1] )
                        {
                          v164 = v150;
                          v169.m128i_i64[1] = v150[1].m128i_i64[1];
                          v143 = (void *)qalloc_or_throw(v169.m128i_i64[1], m128i_i8);
                          v144 = v173[0];
                          v145 = v169.m128i_u64[1];
                          *(_QWORD *)(v173[0] + 32) = v169.m128i_i64[1];
                          *(_QWORD *)(v144 + 16) = v143;
                          m128i_i8 = (const char *)v164[1].m128i_i64[0];
                          memcpy(v143, m128i_i8, v145);
                          v150 = v164;
                          *(_QWORD *)(v144 + 24) = v169.m128i_i64[1];
                        }
                        v133 = v173[0];
                        *(_QWORD *)(v173[0] + 40) = 0;
                        *(_OWORD *)(v133 + 48) = 0;
                        v134 = v150[3].m128i_u64[0];
                        if ( v134 )
                        {
                          v146 = v150[3].m128i_i64[0];
                          v169.m128i_i64[1] = (__int64)v150;
                          v147 = (void *)qalloc_or_throw(v146, m128i_i8);
                          v148 = v173[0];
                          v149 = v169.m128i_i64[1];
                          *(_QWORD *)(v173[0] + 40) = v147;
                          *(_QWORD *)(v148 + 56) = v134;
                          memcpy(v147, *(const void **)(v149 + 40), v134);
                          v150 = (const __m128i *)v169.m128i_i64[1];
                          *(_QWORD *)(v173[0] + 48) = v134;
                        }
                        v135 = v173[0];
                        m128i_i8 = v150[4].m128i_i8;
                        v169.m128i_i64[1] = (__int64)v150;
                        *(_QWORD *)(v173[0] + 64) = 0;
                        copy_tinfo_t(v135 + 64);
                        v136 = v169.m128i_i64[1];
                        v135 += 128LL;
                        ++v132;
                        v137 = _mm_loadu_si128((const __m128i *)(v169.m128i_i64[1] + 72));
                        *(_QWORD *)(v135 - 24) = *(_QWORD *)(v169.m128i_i64[1] + 104);
                        v138 = *(_DWORD *)(v136 + 112);
                        *(__m128i *)(v135 - 56) = v137;
                        v139 = _mm_loadu_si128((const __m128i *)(v136 + 88));
                        *(_DWORD *)(v135 - 16) = v138;
                        v140 = *(_DWORD *)(v136 + 116);
                        *(__m128i *)(v135 - 40) = v139;
                        *(_DWORD *)(v135 - 12) = v140;
                        *(_BYTE *)(v135 - 8) = *(_BYTE *)(v136 + 120);
                        *(_DWORD *)(v135 - 4) = *(_DWORD *)(v136 + 124);
                        v173[0] = v135;
                      }
                      while ( v169.m128i_i64[0] != v132 );
                    }
                    v124 = _mm_loadl_epi64(&v169);
                    v125 = v215;
                    v62 = _mm_unpacklo_epi64(v124, v124);
                    if ( v215 )
                    {
                      v126 = 0;
                      if ( v216.m128i_i64[0] )
                      {
                        v127 = v216.m128i_i64[0];
                        v180 = v62;
                        v173[0] = v188;
                        do
                        {
                          v188 = (__int64)v125 + 128 * v126;
                          clear_tinfo_t(v188 + 64);
                          v128 = *(void **)(v188 + 40);
                          if ( v128 )
                          {
                            *(_QWORD *)(v188 + 48) = 0;
                            qfree(v128);
                          }
                          v129 = *(void **)(v188 + 16);
                          if ( v129 )
                          {
                            *(_QWORD *)(v188 + 24) = 0;
                            qfree(v129);
                          }
                          ++v126;
                          v125 = v215;
                        }
                        while ( v127 != v126 );
                        v62 = _mm_load_si128(&v180);
                        v188 = v173[0];
                      }
                      v180 = v62;
                      v216.m128i_i64[0] = 0;
                      qfree(v125);
                      v62 = _mm_load_si128(&v180);
                    }
                    v216 = v62;
                    v215 = v167;
                  }
                }
              }
LABEL_99:
              if ( (_BYTE)v179 && (_BYTE)v176 )
              {
                if ( !v189 )
                  v189 = sub_62F600(a1, v178, 1);
                v15 = (__int64 *)v172;
              }
              v180.m128i_i32[0] = v17 & 1;
              if ( (v17 & 1) != 0 )
                v187 = (char *)sub_5CAFE0(*a1, (__int64)v217, v188, (__int64)v187, v185, 0, nullptr);
              v64 = v185;
              v179 = v190;
              sub_63E030(a1, v188, v185, v190, v174);
              v65 = v64;
              v66 = v178;
              v67 = sub_630670(a1, v178, v65, v187, v186, v183, v182, v181, v15, (v17 & 0x41) == 64);
              if ( (_DWORD)n )
              {
                v68 = (_DWORD *)(*(_QWORD *)(v66 + 40) + 4LL * *(unsigned int *)v15);
                if ( *v68 != -1 && (_BYTE)v184 )
                {
                  if ( !under_debugger )
                    interr(140);
                  BUG();
                }
                *v68 = (_DWORD)v67 - *(_DWORD *)(v178 + 32);
              }
              sub_631B60(v178, (const char *)v67);
              v69 = v180.m128i_i32[0];
              *(_DWORD *)(v188 + 32) |= 0x40u;
              if ( !v69 )
                goto LABEL_120;
              if ( (_BYTE)v184 )
              {
                v70 = 6;
                if ( !(_BYTE)src )
                {
                  LODWORD(v183) = 1;
                  v70 = 2;
                  goto LABEL_114;
                }
              }
              else
              {
                if ( !(_BYTE)src )
                {
                  LODWORD(v183) = 3;
                  v70 = 0;
LABEL_114:
                  v71 = 0;
                  if ( (_DWORD)n )
                    v71 = *(_DWORD *)v15;
                  v72 = *(_QWORD *)(*a1 + 1480);
                  v73 = *(_DWORD *)(v72 + 2484);
                  v184 = v72;
                  v74 = v73 + 1;
                  if ( !v74 )
                    v74 = v180.m128i_i32[0];
                  *(_DWORD *)(v72 + 2484) = v74;
                  mark_builtin_widgets(1024, 0, 1);
                  sub_698450(v184);
                  v75 = v185;
                  sub_63AF00(
                    a1,
                    v188,
                    (__int64)v185,
                    v187,
                    v186,
                    (__int64)&v202,
                    *(double *)v62.m128i_i64,
                    a8,
                    (__int64)v179);
                  sub_62F220(*a1, (unsigned int)v183, v70, v71, v75);
                  if ( (_QWORD)v201 )
                    sub_6354C0((__int64 *)v188, (__int64)v185, (__int64 *)v171);
LABEL_120:
                  v76 = (char *)v215;
                  if ( v215 )
                  {
                    v77 = v216.m128i_i64[0];
                    if ( v216.m128i_i64[0] )
                    {
                      v78 = 0;
                      do
                      {
                        v79 = &v76[128 * v78];
                        clear_tinfo_t(v79 + 64);
                        v80 = *((void **)v79 + 5);
                        if ( v80 )
                        {
                          *((_QWORD *)v79 + 6) = 0;
                          qfree(v80);
                        }
                        v81 = *((void **)v79 + 2);
                        if ( v81 )
                        {
                          *((_QWORD *)v79 + 3) = 0;
                          qfree(v81);
                        }
                        v76 = (char *)v215;
                        ++v78;
                      }
                      while ( v77 != v78 );
                    }
                    v216.m128i_i64[0] = 0;
                    qfree(v76);
                  }
                  if ( v213[1] )
                  {
                    v214.m128i_i64[0] = 0;
                    qfree(v213[1]);
                  }
                  v82 = v210;
                  if ( v210 )
                  {
                    do
                    {
                      v83 = v82;
                      v82 = (_QWORD *)*v82;
                      operator delete(v83, 0x20u);
                    }
                    while ( v82 );
                  }
                  memset(s, 0, 8 * v209);
                  v211 = 0;
                  v210 = nullptr;
                  if ( s != v170 )
                    operator delete(s, 8 * v209);
                  v84 = (char *)v206;
                  if ( v206 )
                  {
                    if ( v207.m128i_i64[0] )
                    {
                      v85 = 0;
                      v86 = v207.m128i_i64[0];
                      do
                      {
                        v87 = &v84[32 * v85];
                        v88 = *(void **)v87;
                        if ( *(_QWORD *)v87 )
                        {
                          *((_QWORD *)v87 + 1) = 0;
                          qfree(v88);
                          v84 = (char *)v206;
                        }
                        ++v85;
                      }
                      while ( v86 != v85 );
                    }
                    v207.m128i_i64[0] = 0;
                    qfree(v84);
                  }
                  if ( v202 )
                  {
                    *(_QWORD *)&v203 = 0;
                    qfree(v202);
                  }
                  LODWORD(v188) = 0;
                  goto LABEL_62;
                }
                v70 = 4;
              }
              LODWORD(v183) = 3;
              goto LABEL_114;
            }
            LOBYTE(v173[0]) = *v187;
            if ( (v173[0] & 0x3F) == 0x2D )
              goto LABEL_99;
          }
          v92 = v206;
          v169.m128i_i64[1] = (__int64)v206 + 32 * v207.m128i_i64[0];
          if ( (void *)v169.m128i_i64[1] == v206 )
            goto LABEL_99;
          do
          {
            v36 = (const char *)*a1;
            v37 = v92;
            v173[0] = (size_t)v92;
            sub_69E930(v92, v36, 1);
            v92 = (void *)(v173[0] + 32);
          }
          while ( v169.m128i_i64[1] != v173[0] + 32 );
          v35 = LOBYTE(v205[0]) == 0;
          goto LABEL_96;
        }
      }
      v37 = a1;
      v36 = (const char *)v188;
      sub_633EC0(a1, v188, v185, v17, nullptr);
      goto LABEL_158;
    }
    goto LABEL_165;
  }
  v185 = (char *)haystack;
  if ( (_QWORD)v193 )
    v185 = (char *)v192;
  if ( !(_DWORD)v178 )
    goto LABEL_26;
LABEL_14:
  v26 = sub_693310(a1, v188, v185);
  if ( v26 )
  {
    if ( a12 && *(_DWORD *)a12 && *(_DWORD *)a12 != v26 )
      LODWORD(v188) = 3;
    else
      LODWORD(v188) = sub_63E120(
                        a1,
                        v188,
                        v26,
                        (unsigned int)v17,
                        0,
                        v187,
                        v186,
                        v183,
                        v182,
                        v181,
                        0,
                        (unsigned __int8)v184);
    goto LABEL_19;
  }
  v89 = *(_QWORD *)(v188 + 64);
  v178 = v89;
  if ( !v89 )
  {
LABEL_165:
    LODWORD(v188) = 4;
    goto LABEL_19;
  }
  LODWORD(n) = *(_DWORD *)(v89 + 8) & 2;
  if ( (_DWORD)n || !a12 )
  {
    LOBYTE(v176) = (n & 2) != 0;
    goto LABEL_28;
  }
  if ( !*(_DWORD *)a12 )
  {
    LOBYTE(v176) = 0;
    LODWORD(n) = 0;
    goto LABEL_28;
  }
  LODWORD(v188) = 5;
LABEL_19:
  if ( v192 )
  {
    *(_QWORD *)&v193 = 0;
    qfree(v192);
  }
  return (unsigned int)v188;
}

