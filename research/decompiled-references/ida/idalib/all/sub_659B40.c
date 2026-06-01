__int64 __fastcall sub_659B40(
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
  char *v16; // rbx
  int v18; // r13d
  size_t v19; // rax
  char *v20; // r10
  int v21; // r9d
  const char *v22; // rsi
  unsigned int v23; // r9d
  unsigned int v24; // eax
  int v26; // eax
  size_t v27; // rax
  void **v28; // r9
  char *v29; // rdi
  __int64 v30; // rax
  char v31; // al
  const void *v32; // rsi
  void *v33; // rdi
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __m128i v36; // xmm0
  char **v37; // r14
  void *v38; // rdi
  char *v39; // rdi
  char *v40; // r15
  __int64 v41; // r13
  char *i; // r12
  char *v43; // rbx
  void *v44; // rdi
  void *v45; // rdi
  char *v46; // rdx
  __int64 v47; // r12
  int v48; // r15d
  __int64 v49; // rbx
  char *v50; // rax
  void *v51; // rdi
  char *v52; // rdx
  __int64 v53; // r12
  int v54; // r15d
  __int64 v55; // rbx
  char *v56; // rax
  void *v57; // rdi
  __m128i v58; // xmm0
  char v59; // al
  __int64 v60; // r13
  int *v61; // rsi
  _DWORD *v62; // rax
  __int32 v63; // r8d
  unsigned int v64; // r13d
  __int64 v65; // rcx
  int v66; // eax
  __int32 v67; // eax
  char *v68; // rcx
  char *v69; // rbx
  char *v70; // rdi
  __int64 v71; // r12
  __int64 v72; // r15
  char *v73; // rbx
  void *v74; // rdi
  void *v75; // rdi
  _QWORD *v76; // rbx
  void *v77; // rdi
  char *v78; // rdx
  __int64 v79; // rbx
  __int64 v80; // r14
  char *v81; // rax
  void *v82; // rdi
  __int64 v83; // rax
  char v84; // al
  __int64 v85; // r8
  char *v86; // rax
  char *v87; // rax
  void *v88; // r9
  void **v89; // rdx
  unsigned __int64 j; // r8
  __int16 v91; // ax
  size_t v92; // r9
  char *v93; // rdx
  __m128i si128; // xmm0
  __int64 v95; // rax
  char *v96; // r12
  __int64 *v97; // rbx
  char *v98; // rax
  void *v99; // rdi
  void **v100; // r12
  unsigned __int64 v101; // rax
  void *v102; // rax
  void **v103; // rcx
  __m128i v104; // xmm0
  _QWORD *v105; // r12
  void *v106; // rdi
  void *v107; // r12
  size_t v108; // rcx
  __m128i v109; // xmm0
  __int64 v110; // rax
  __m128i v111; // xmm0
  void *v112; // rdi
  __int64 v113; // r12
  __int64 v114; // rbx
  void *v115; // rdi
  void *v116; // rdi
  void *v117; // rdx
  __int64 v118; // rax
  __m128i *v119; // rcx
  size_t v120; // r12
  __int64 v121; // r8
  __m128i v122; // xmm0
  __int32 v123; // eax
  __m128i v124; // xmm0
  __int32 v125; // eax
  __m128i v126; // xmm0
  __m128i v127; // xmm0
  size_t v128; // rdx
  __int64 v129; // rdi
  void *v130; // rax
  size_t v131; // rdx
  __int64 v132; // r8
  __int64 v133; // rdi
  void *v134; // rax
  __int64 v135; // rcx
  size_t v136; // r8
  const __m128i *v137; // r8
  char *v138; // r10
  __int64 v139; // rcx
  size_t v140; // rdx
  __int64 v141; // rdi
  void *v142; // rax
  _QWORD *v143; // r10
  size_t v144; // rdx
  const void *v145; // [rsp-10h] [rbp-2A0h]
  void *v146; // [rsp-8h] [rbp-298h]
  char v147; // [rsp-8h] [rbp-298h]
  __int64 v148; // [rsp+0h] [rbp-290h]
  __m128i *v149; // [rsp+0h] [rbp-290h]
  int v150; // [rsp+8h] [rbp-288h]
  void *v151; // [rsp+8h] [rbp-288h]
  unsigned __int64 v152; // [rsp+8h] [rbp-288h]
  int v153; // [rsp+10h] [rbp-280h]
  __int64 v154; // [rsp+10h] [rbp-280h]
  const void **v155; // [rsp+10h] [rbp-280h]
  int v156; // [rsp+18h] [rbp-278h]
  size_t v157; // [rsp+18h] [rbp-278h]
  __m128i v158; // [rsp+20h] [rbp-270h] BYREF
  size_t v159[2]; // [rsp+30h] [rbp-260h] BYREF
  void **v160; // [rsp+40h] [rbp-250h]
  void *v161; // [rsp+48h] [rbp-248h]
  unsigned int *v162; // [rsp+50h] [rbp-240h]
  void *v163; // [rsp+58h] [rbp-238h]
  void *src[2]; // [rsp+60h] [rbp-230h] BYREF
  void **p_dest; // [rsp+70h] [rbp-220h]
  size_t n; // [rsp+78h] [rbp-218h]
  size_t v167; // [rsp+80h] [rbp-210h]
  __int64 v168; // [rsp+88h] [rbp-208h]
  __m128i v169; // [rsp+90h] [rbp-200h] BYREF
  void *v170; // [rsp+A0h] [rbp-1F0h]
  unsigned __int8 *v171; // [rsp+A8h] [rbp-1E8h]
  char *v172; // [rsp+B0h] [rbp-1E0h]
  char *v173; // [rsp+B8h] [rbp-1D8h]
  __int64 v174; // [rsp+C0h] [rbp-1D0h]
  char *v175; // [rsp+C8h] [rbp-1C8h]
  char *v176; // [rsp+D0h] [rbp-1C0h]
  __int64 v177; // [rsp+D8h] [rbp-1B8h]
  unsigned int v178; // [rsp+E4h] [rbp-1ACh] BYREF
  void *v179; // [rsp+E8h] [rbp-1A8h] BYREF
  void *v180[2]; // [rsp+F0h] [rbp-1A0h] BYREF
  void *v181; // [rsp+100h] [rbp-190h] BYREF
  __int128 v182; // [rsp+108h] [rbp-188h]
  void *ptr; // [rsp+120h] [rbp-170h] BYREF
  __int128 v184; // [rsp+128h] [rbp-168h]
  void *dest; // [rsp+140h] [rbp-150h] BYREF
  __int128 v186; // [rsp+148h] [rbp-148h]
  void *v187; // [rsp+160h] [rbp-130h] BYREF
  __int128 v188; // [rsp+168h] [rbp-128h]
  void *v189; // [rsp+180h] [rbp-110h] BYREF
  __int128 v190; // [rsp+188h] [rbp-108h]
  void *v191; // [rsp+1A0h] [rbp-F0h] BYREF
  __int128 v192; // [rsp+1A8h] [rbp-E8h]
  __int64 v193; // [rsp+1B8h] [rbp-D8h]
  _WORD v194[4]; // [rsp+1C0h] [rbp-D0h] BYREF
  void *v195; // [rsp+1C8h] [rbp-C8h]
  __m128i v196; // [rsp+1D0h] [rbp-C0h]
  void *s; // [rsp+1E0h] [rbp-B0h] BYREF
  __int64 v198; // [rsp+1E8h] [rbp-A8h]
  void *v199; // [rsp+1F0h] [rbp-A0h]
  __int64 v200; // [rsp+1F8h] [rbp-98h]
  __m128i v201; // [rsp+200h] [rbp-90h]
  void *v202[2]; // [rsp+210h] [rbp-80h] BYREF
  __m128i v203; // [rsp+220h] [rbp-70h]
  void *v204; // [rsp+230h] [rbp-60h]
  __m128i v205; // [rsp+238h] [rbp-58h]
  char v206[4]; // [rsp+254h] [rbp-3Ch] BYREF
  unsigned __int64 v207; // [rsp+258h] [rbp-38h]

  v15 = a12;
  v177 = (__int64)a2;
  v176 = a6;
  v173 = a9;
  v172 = a10;
  v171 = a11;
  LODWORD(v174) = a14;
  v169.m128i_i64[0] = a15;
  v207 = __readfsqword(0x28u);
  if ( !a2 || (v16 = a5) == nullptr || (LOBYTE(v170) = a3 == nullptr || *a5 == 0, (_BYTE)v170) || !*a3 )
  {
    LODWORD(v177) = 2;
    return (unsigned int)v177;
  }
  v175 = a3;
  v18 = a4;
  v182 = 0;
  LODWORD(v168) = a4 & 1;
  v181 = nullptr;
  if ( (a4 & 1) != 0 )
  {
    v19 = strlen(a3);
    v20 = v175;
    v21 = 8;
  }
  else
  {
    v19 = strlen(a3);
    v20 = v175;
    v21 = 6;
  }
  src[0] = v20;
  LODWORD(p_dest) = v21;
  n = v19;
  v175 = (char *)&v181;
  v167 = v19 + 1;
  v181 = (void *)qvector_reserve(&v181, 0, v19 + 1, 1);
  v22 = (const char *)src[0];
  *(_QWORD *)&v182 = v167;
  v167 = n;
  memmove(v181, src[0], n);
  v23 = (unsigned int)p_dest;
  *((_BYTE *)v181 + n) = 0;
  if ( (v18 & 0x400) == 0 )
  {
    if ( (v18 & 0x80u) != 0 )
    {
      v22 = (const char *)v23;
      LODWORD(v167) = v23;
      validate_name(v175, v23, (4 * (_WORD)v18) & 0x400 | 1);
      v23 = v167;
    }
    if ( v23 == 8 )
    {
      v29 = (char *)haystack;
      if ( (_QWORD)v182 )
        v29 = (char *)v181;
      if ( !(unsigned __int8)is_valid_typename(
                               v29,
                               v148,
                               v150,
                               v153,
                               v156,
                               v158.m128i_i32[0],
                               v158.m128i_i32[2],
                               v159[0],
                               v159[1],
                               (__int64)v160) )
      {
        LODWORD(v177) = 10;
        goto LABEL_19;
      }
    }
    if ( (_DWORD)v168 )
    {
      v175 = (char *)haystack;
      if ( (_QWORD)v182 )
        v175 = (char *)v181;
      goto LABEL_14;
    }
    sub_648F50(v175, v22);
    v175 = (char *)haystack;
    if ( (_QWORD)v182 )
      v175 = (char *)v181;
LABEL_26:
    v168 = *(_QWORD *)(v177 + 56);
    if ( v168 )
    {
      LODWORD(v167) = *(_DWORD *)(v168 + 8) & 2;
      LOBYTE(n) = (v167 & 2) != 0;
LABEL_28:
      ptr = nullptr;
      v184 = 0;
      if ( (v18 & 8) != 0 )
      {
        if ( !(unsigned __int8)sub_64EFC0((__int64)&ptr, v177, (__int64)v175, (__int64)v16, 1u, 0, nullptr) )
        {
          LODWORD(v177) = 6;
LABEL_93:
          if ( ptr )
            qfree(ptr);
          goto LABEL_19;
        }
        v175 = (char *)haystack;
        if ( (_QWORD)v184 )
          v175 = (char *)ptr;
        v18 &= ~8u;
      }
      v178 = 0;
      dest = nullptr;
      v162 = &v178;
      v186 = 0;
      v26 = sub_64F830((__int64)a1, v177, v175, v18 & 0xFFFFFFBD, nullptr, 0, 0, 0, 0, &v178);
      if ( v26 )
      {
        if ( (v18 & 4) == 0 )
        {
          LODWORD(v177) = 7;
          goto LABEL_91;
        }
        if ( v26 == 1 )
        {
          if ( !(_DWORD)v167 )
          {
            if ( v175 )
            {
              v87 = (char *)strlen(v175);
              v88 = v87;
              if ( v87 )
              {
                v89 = (void **)(v87 + 1);
                if ( *((_QWORD *)&v186 + 1) < (unsigned __int64)(v87 + 1) )
                {
                  src[0] = v87;
                  p_dest = (void **)(v87 + 1);
                  dest = (void *)qvector_reserve(&dest, dest, v89, 1);
                  v88 = src[0];
                  v89 = p_dest;
                }
                *(_QWORD *)&v186 = v89;
                p_dest = &dest;
                v170 = v88;
                memmove(dest, v175, (size_t)v88);
                *((_BYTE *)v170 + (_QWORD)dest) = 0;
                goto LABEL_42;
              }
            }
            goto LABEL_41;
          }
          if ( !a12 || !*(_DWORD *)a12 || *(_DWORD *)a12 == v178 )
          {
            v170 = (void *)(*(_QWORD *)(v168 + 32) + *(unsigned int *)(*(_QWORD *)(v168 + 40) + 4LL * v178) + 4LL);
            v27 = strlen((const char *)v170);
            v28 = (void **)v27;
            if ( v27 )
            {
              v117 = (void *)(v27 + 1);
              if ( *((_QWORD *)&v186 + 1) < v27 + 1 )
              {
                v163 = (void *)v27;
                src[0] = (void *)(v27 + 1);
                dest = (void *)qvector_reserve(&dest, dest, v117, 1);
                v28 = (void **)v163;
                v117 = src[0];
              }
              *(_QWORD *)&v186 = v117;
              src[0] = &dest;
              p_dest = v28;
              memmove(dest, v170, (size_t)v28);
              *((_BYTE *)p_dest + (_QWORD)dest) = 0;
              goto LABEL_42;
            }
LABEL_41:
            *(_QWORD *)&v186 = 0;
LABEL_42:
            LOBYTE(v170) = 1;
            LOBYTE(p_dest) = 1;
            goto LABEL_57;
          }
          goto LABEL_179;
        }
      }
      LOBYTE(p_dest) = n & (a12 != nullptr);
      if ( (_BYTE)p_dest )
      {
        v30 = *(unsigned int *)a12;
        if ( (_DWORD)v30 )
        {
          if ( (unsigned int)v30 >= *(_DWORD *)(v168 + 48) )
          {
LABEL_179:
            LODWORD(v177) = 3;
LABEL_91:
            if ( dest )
            {
              *(_QWORD *)&v186 = 0;
              qfree(dest);
            }
            goto LABEL_93;
          }
          if ( (_BYTE)v174 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(v168 + 40) + 4 * v30) != -1 )
            {
              LODWORD(v177) = 8;
              goto LABEL_91;
            }
          }
          else
          {
            LOBYTE(v170) = 0;
          }
          LOBYTE(p_dest) = 0;
        }
        else
        {
          v84 = (char)p_dest;
          LOBYTE(p_dest) = 0;
          LOBYTE(v170) = v84;
        }
      }
      else
      {
        LOBYTE(v170) = 1;
      }
LABEL_57:
      v187 = nullptr;
      v163 = &v187;
      v189 = nullptr;
      v179 = nullptr;
      v161 = &v189;
      v188 = 0;
      v190 = 0;
      v31 = sub_64FA70((__int64)&v179, (__int64 *)&v187, (__int64)&v189, v177, (__int64)&dest, v16, (__int64)v176, v18);
      v32 = v145;
      v33 = v146;
      if ( !v31 )
      {
        if ( (_QWORD)v188 && a13 )
        {
          v34 = v187;
          v35 = *a13;
          v36 = _mm_loadu_si128((const __m128i *)(a13 + 1));
          *a13 = *(_QWORD *)v187;
          a13[1] = v34[1];
          a13[2] = v34[2];
          *v34 = v35;
          *(__m128i *)(v34 + 1) = v36;
        }
        LODWORD(v177) = 9;
LABEL_62:
        v37 = (char **)v179;
        if ( v179 )
        {
          v38 = *((void **)v179 + 3);
          if ( v38 )
          {
            *((_QWORD *)v179 + 4) = 0;
            qfree(v38);
          }
          v39 = *v37;
          if ( *v37 )
          {
            v40 = v37[1];
            if ( v40 )
            {
              v41 = 0;
              for ( i = nullptr; i != v40; ++i )
              {
                v43 = &v39[v41];
                v44 = *(void **)&v39[v41 + 24];
                if ( v44 )
                {
                  *((_QWORD *)v43 + 4) = 0;
                  qfree(v44);
                }
                v45 = *(void **)v43;
                if ( *(_QWORD *)v43 )
                {
                  *((_QWORD *)v43 + 1) = 0;
                  qfree(v45);
                }
                v39 = *v37;
                v41 += 56;
              }
            }
            v37[1] = nullptr;
            qfree(v39);
          }
          qfree(v37);
        }
        v46 = (char *)v189;
        if ( v189 )
        {
          v47 = v190;
          if ( (_QWORD)v190 )
          {
            v48 = v177;
            v49 = 0;
            do
            {
              v50 = &v46[24 * v49];
              v51 = *(void **)v50;
              if ( *(_QWORD *)v50 )
              {
                *((_QWORD *)v50 + 1) = 0;
                qfree(v51);
                v46 = (char *)v189;
              }
              ++v49;
            }
            while ( v47 != v49 );
            LODWORD(v177) = v48;
          }
          *(_QWORD *)&v190 = 0;
          qfree(v46);
        }
        v52 = (char *)v187;
        if ( v187 )
        {
          v53 = v188;
          if ( (_QWORD)v188 )
          {
            v54 = v177;
            v55 = 0;
            do
            {
              v56 = &v52[24 * v55];
              v57 = *(void **)v56;
              if ( *(_QWORD *)v56 )
              {
                *((_QWORD *)v56 + 1) = 0;
                qfree(v57);
                v52 = (char *)v187;
              }
              ++v55;
            }
            while ( v53 != v55 );
            LODWORD(v177) = v54;
          }
          *(_QWORD *)&v188 = 0;
          qfree(v52);
        }
        goto LABEL_91;
      }
      v58.m128i_i64[0] = 0;
      v191 = nullptr;
      memset(v194, 0, 3);
      v193 = -1;
      v195 = nullptr;
      v160 = v202;
      s = v202;
      v198 = 1;
      v199 = nullptr;
      v200 = 0;
      v201.m128i_i32[0] = 1065353216;
      v201.m128i_i64[1] = 0;
      v204 = nullptr;
      v192 = 0;
      v196 = 0;
      *(_OWORD *)v202 = 0;
      v203 = 0;
      v205 = 0;
      if ( !(_BYTE)p_dest )
        goto LABEL_96;
      if ( (v18 & 1) != 0 )
      {
        if ( v179 )
        {
          if ( (*((_BYTE *)v179 + 52) & 7) != 0 )
            LODWORD(v85) = 1 << ((*((_BYTE *)v179 + 52) & 7) - 1);
          else
            LODWORD(v85) = (unsigned __int8)getinf(61);
          v85 = (int)v85;
        }
        else
        {
          v85 = -1;
        }
        sub_6C7610(a1, v177, &v191, dest, v85, v18 >= 0);
      }
      else
      {
        v32 = (const void *)v177;
        v33 = a1;
        if ( (unsigned __int8)sub_658BB0((__int64)a1, v177, v175, nullptr, 0.0, a8) )
        {
LABEL_158:
          if ( (v194[0] & 0x2F) == 0xD )
          {
            if ( (*v16 & 0x2F) == 0xD )
              goto LABEL_99;
          }
          else
          {
            v31 = LOBYTE(v194[0]) == 0;
            if ( (v194[0] & 0x3F) != 0x2D )
            {
LABEL_96:
              if ( v169.m128i_i64[0] )
              {
                if ( v31 )
                {
                  v59 = *(_BYTE *)(v169.m128i_i64[0] + 32);
                  if ( (v59 & 0x3F) == 0x2D )
                  {
                    j = *(_QWORD *)(v169.m128i_i64[0] + 8);
                    if ( j && (src[0] = (void *)(j - 1), j != 1) )
                    {
                      v159[0] = *(_QWORD *)v169.m128i_i64[0];
                      if ( *((_QWORD *)&v192 + 1) < j )
                      {
                        v158.m128i_i64[1] = j;
                        v191 = (void *)qvector_reserve(&v191, v191, j, 1);
                        j = v158.m128i_u64[1];
                      }
                      v32 = (const void *)v159[0];
                      *(_QWORD *)&v192 = j;
                      v33 = v191;
                      v158.m128i_i64[1] = j;
                      memmove(v191, (const void *)v159[0], (size_t)src[0]);
                      j = v158.m128i_u64[1];
                      *((char *)v191 + v158.m128i_i64[1] - 1) = 0;
                      v59 = *(_BYTE *)(v169.m128i_i64[0] + 32);
                    }
                    else
                    {
                      *(_QWORD *)&v192 = 0;
                    }
                    LOBYTE(v194[0]) = v59;
                    src[0] = nullptr;
                    v91 = *(_WORD *)(v169.m128i_i64[0] + 33);
                    v92 = *(_QWORD *)(v169.m128i_i64[0] + 48);
                    v193 = *(_QWORD *)(v169.m128i_i64[0] + 24);
                    *(_WORD *)((char *)v194 + 1) = v91;
                    if ( v92 )
                    {
                      v159[0] = v92;
                      v33 = (void *)(32 * v92);
                      src[0] = (void *)qalloc_or_throw(32 * v92);
                      v92 = v159[0];
                      v138 = (char *)src[0];
                      for ( j = 0; j != v92; ++j )
                      {
                        a8 = 0.0;
                        v139 = *(_QWORD *)(v169.m128i_i64[0] + 40) + 32 * j;
                        *(_QWORD *)v138 = 0;
                        *(_OWORD *)(v138 + 8) = 0;
                        v140 = *(_QWORD *)(v139 + 8);
                        if ( v140 )
                        {
                          v141 = *(_QWORD *)(v139 + 8);
                          v152 = j;
                          v155 = (const void **)v139;
                          v157 = v92;
                          v158.m128i_i64[1] = (__int64)v138;
                          v159[0] = v140;
                          v142 = (void *)qalloc_or_throw(v141);
                          v143 = (_QWORD *)v158.m128i_i64[1];
                          v144 = v159[0];
                          v33 = v142;
                          *(_QWORD *)(v158.m128i_i64[1] + 16) = v159[0];
                          *v143 = v142;
                          v32 = *v155;
                          v158.m128i_i64[0] = (__int64)v143;
                          v158.m128i_i64[1] = (__int64)v155;
                          memcpy(v142, v32, v144);
                          v138 = (char *)v158.m128i_i64[0];
                          j = v152;
                          v92 = v157;
                          *(_QWORD *)(v158.m128i_i64[0] + 8) = v159[0];
                          v139 = v158.m128i_i64[1];
                        }
                        v138 += 32;
                        *((_QWORD *)v138 - 1) = *(_QWORD *)(v139 + 24);
                      }
                    }
                    v93 = (char *)v195;
                    si128 = _mm_unpacklo_epi64((__m128i)v92, (__m128i)v92);
                    if ( v195 )
                    {
                      if ( v196.m128i_i64[0] )
                      {
                        v95 = v177;
                        *(__m128i *)v159 = si128;
                        v177 = 0;
                        v96 = v16;
                        v97 = (__int64 *)v196.m128i_i64[0];
                        v158.m128i_i64[1] = v95;
                        do
                        {
                          v98 = &v93[32 * v177];
                          v99 = *(void **)v98;
                          if ( *(_QWORD *)v98 )
                          {
                            *((_QWORD *)v98 + 1) = 0;
                            qfree(v99);
                            v93 = (char *)v195;
                          }
                          ++v177;
                        }
                        while ( v97 != (__int64 *)v177 );
                        si128 = _mm_load_si128((const __m128i *)v159);
                        v16 = v96;
                        v177 = v158.m128i_i64[1];
                      }
                      v33 = v93;
                      *(__m128i *)v159 = si128;
                      v196.m128i_i64[0] = 0;
                      qfree(v93);
                      si128 = _mm_load_si128((const __m128i *)v159);
                    }
                    v196 = si128;
                    v100 = (void **)s;
                    v195 = src[0];
                    src[0] = (void *)v198;
                    v159[0] = v201.m128i_u64[1];
                    v101 = *(_QWORD *)(v169.m128i_i64[0] + 72);
                    if ( v198 == v101 )
                    {
                      v100 = nullptr;
                      memset(s, 0, 8 * (__int64)src[0]);
                    }
                    else
                    {
                      if ( v101 == 1 )
                      {
                        v103 = v160;
                        v202[0] = nullptr;
                      }
                      else
                      {
                        if ( v101 >> 60 )
                        {
                          if ( v101 > 0x1FFFFFFFFFFFFFFFLL )
                            sub_2EBC5E(v33, v32, 0x1FFFFFFFFFFFFFFFLL, v101 >> 60, j);
                          std::__throw_bad_alloc();
                        }
                        v158.m128i_i64[1] = 8 * v101;
                        v102 = (void *)operator new(8 * v101);
                        v103 = (void **)memset(v102, 0, v158.m128i_u64[1]);
                        v101 = *(_QWORD *)(v169.m128i_i64[0] + 72);
                      }
                      s = v103;
                      v198 = v101;
                    }
                    v180[1] = &s;
                    v104 = _mm_loadu_si128((const __m128i *)(v169.m128i_i64[0] + 96));
                    v200 = *(_QWORD *)(v169.m128i_i64[0] + 88);
                    v201 = v104;
                    v180[0] = v199;
                    v199 = nullptr;
                    sub_49FEB0(&s, v169.m128i_i64[0] + 64, (__int64 *)v180, v169.m128i_i64[0], j);
                    if ( v100 != v160 && v100 )
                      operator delete(v100, 8 * (__int64)src[0]);
                    v105 = v180[0];
                    if ( v180[0] )
                    {
                      do
                      {
                        v106 = v105;
                        v105 = (_QWORD *)*v105;
                        operator delete(v106, 0x20u);
                      }
                      while ( v105 );
                    }
                    v107 = nullptr;
                    v108 = *(_QWORD *)(v169.m128i_i64[0] + 128);
                    if ( v108 )
                    {
                      v159[0] = *(_QWORD *)(v169.m128i_i64[0] + 128);
                      src[0] = (void *)(8 * v108);
                      v107 = (void *)qalloc_or_throw(8 * v108);
                      memcpy(v107, *(const void **)(v169.m128i_i64[0] + 120), (size_t)src[0]);
                      v108 = v159[0];
                    }
                    v109 = _mm_unpacklo_epi64((__m128i)v108, (__m128i)v108);
                    if ( v202[1] )
                    {
                      *(__m128i *)src = v109;
                      v203.m128i_i64[0] = 0;
                      qfree(v202[1]);
                      v109 = _mm_load_si128((const __m128i *)src);
                    }
                    v202[1] = v107;
                    v151 = nullptr;
                    v110 = *(_QWORD *)(v169.m128i_i64[0] + 152);
                    v203 = v109;
                    v158.m128i_i64[0] = v110;
                    if ( v110 )
                    {
                      v118 = qalloc_or_throw(144 * v110);
                      v119 = (__m128i *)(v118 + 64);
                      v151 = (void *)v118;
                      src[0] = nullptr;
                      v154 = -64 - v118;
                      do
                      {
                        v137 = (__m128i *)((char *)v119 + v154 + *(_QWORD *)(v169.m128i_i64[0] + 144));
                        v127 = _mm_loadu_si128(v137);
                        v119[-3].m128i_i64[0] = 0;
                        v119[-4] = v127;
                        *(__m128i *)((char *)&v119[-3] + 8) = 0;
                        v128 = v137[1].m128i_u64[1];
                        if ( v128 )
                        {
                          v129 = v137[1].m128i_i64[1];
                          v149 = v119;
                          v158.m128i_i64[1] = (__int64)v137;
                          v159[0] = v128;
                          v130 = (void *)qalloc_or_throw(v129);
                          v131 = v159[0];
                          v132 = v158.m128i_i64[1];
                          v149[-2].m128i_i64[0] = v159[0];
                          v149[-3].m128i_i64[0] = (__int64)v130;
                          memcpy(v130, *(const void **)(v132 + 16), v131);
                          v119 = v149;
                          v137 = (const __m128i *)v158.m128i_i64[1];
                          v149[-3].m128i_i64[1] = v159[0];
                        }
                        v119[-2].m128i_i64[1] = 0;
                        v119[-1] = 0;
                        v120 = v137[3].m128i_u64[0];
                        if ( v120 )
                        {
                          v133 = v137[3].m128i_i64[0];
                          v158.m128i_i64[1] = (__int64)v119;
                          v159[0] = (size_t)v137;
                          v134 = (void *)qalloc_or_throw(v133);
                          v135 = v158.m128i_i64[1];
                          v136 = v159[0];
                          *(_QWORD *)(v158.m128i_i64[1] - 24) = v134;
                          *(_QWORD *)(v135 - 8) = v120;
                          memcpy(v134, *(const void **)(v136 + 40), v120);
                          v119 = (__m128i *)v158.m128i_i64[1];
                          v137 = (const __m128i *)v159[0];
                          *(_QWORD *)(v158.m128i_i64[1] - 16) = v120;
                        }
                        v119->m128i_i64[0] = 0;
                        v158.m128i_i64[1] = (__int64)v137;
                        v159[0] = (size_t)v119;
                        copy_tinfo_t(v119);
                        v121 = v158.m128i_i64[1];
                        ++src[0];
                        v122 = _mm_loadu_si128((const __m128i *)(v158.m128i_i64[1] + 72));
                        v119 = (__m128i *)(v159[0] + 144);
                        *(_QWORD *)(v159[0] + 56) = *(_QWORD *)(v158.m128i_i64[1] + 120);
                        v123 = *(_DWORD *)(v121 + 128);
                        *(__m128i *)((char *)v119 - 136) = v122;
                        v124 = _mm_loadu_si128((const __m128i *)(v121 + 88));
                        v119[-5].m128i_i32[0] = v123;
                        v125 = *(_DWORD *)(v121 + 132);
                        *(__m128i *)((char *)v119 - 120) = v124;
                        v126 = _mm_loadu_si128((const __m128i *)(v121 + 104));
                        v119[-5].m128i_i32[1] = v125;
                        LOBYTE(v125) = *(_BYTE *)(v121 + 136);
                        *(__m128i *)((char *)v119 - 104) = v126;
                        v119[-5].m128i_i8[8] = v125;
                        v119[-5].m128i_i32[3] = *(_DWORD *)(v121 + 140);
                      }
                      while ( (void *)v158.m128i_i64[0] != src[0] );
                    }
                    v111 = _mm_loadl_epi64(&v158);
                    v112 = v204;
                    v58 = _mm_unpacklo_epi64(v111, v111);
                    if ( v204 )
                    {
                      if ( v205.m128i_i64[0] )
                      {
                        v159[0] = (size_t)v16;
                        v113 = v205.m128i_i64[0];
                        v114 = 0;
                        v169 = v58;
                        src[0] = (void *)v177;
                        do
                        {
                          v177 = (__int64)v112 + 144 * v114;
                          clear_tinfo_t(v177 + 64);
                          v115 = *(void **)(v177 + 40);
                          if ( v115 )
                          {
                            *(_QWORD *)(v177 + 48) = 0;
                            qfree(v115);
                          }
                          v116 = *(void **)(v177 + 16);
                          if ( v116 )
                          {
                            *(_QWORD *)(v177 + 24) = 0;
                            qfree(v116);
                          }
                          ++v114;
                          v112 = v204;
                        }
                        while ( v113 != v114 );
                        v58 = _mm_load_si128(&v169);
                        v16 = (char *)v159[0];
                        v177 = (__int64)src[0];
                      }
                      v169 = v58;
                      v205.m128i_i64[0] = 0;
                      qfree(v112);
                      v58 = _mm_load_si128(&v169);
                    }
                    v205 = v58;
                    v204 = v151;
                  }
                }
              }
LABEL_99:
              if ( (_BYTE)v170 && (_BYTE)n )
              {
                if ( !v178 )
                  v178 = sub_64CC00(a1, v168, 1);
                v15 = (__int64 *)v162;
              }
              v169.m128i_i32[0] = v18 & 1;
              if ( (v18 & 1) != 0 )
                v16 = (char *)sub_5E6DC0(*a1, (__int64)v206, v177, (__int64)v16, v175, 0, nullptr);
              v170 = v179;
              sub_65B8F0(a1, v177, v175, v179, v163);
              v147 = (v18 & 0x41) == 64;
              v60 = v168;
              v61 = sub_64DC80(a1, v168, v175, v16, v176, v173, v172, v171, v15, v147);
              if ( (_DWORD)v167 )
              {
                v62 = (_DWORD *)(*(_QWORD *)(v60 + 40) + 4LL * *(unsigned int *)v15);
                if ( *v62 != -1 && (_BYTE)v174 )
                {
                  if ( !under_debugger )
                    interr(140);
                  BUG();
                }
                *v62 = (_DWORD)v61 - *(_DWORD *)(v168 + 32);
              }
              sub_64F160(v168, (const char *)v61);
              v63 = v169.m128i_i32[0];
              *(_DWORD *)(v177 + 32) |= 0x40u;
              if ( !v63 )
                goto LABEL_120;
              if ( (_BYTE)v174 )
              {
                if ( !(_BYTE)p_dest )
                {
                  LODWORD(v172) = 2;
                  LODWORD(v173) = 1;
                  goto LABEL_114;
                }
                LODWORD(v172) = 6;
              }
              else
              {
                if ( !(_BYTE)p_dest )
                {
                  LODWORD(v172) = 0;
                  LODWORD(v173) = 3;
LABEL_114:
                  v64 = 0;
                  if ( (_DWORD)v167 )
                    v64 = *(_DWORD *)v15;
                  v65 = *(_QWORD *)(*a1 + 1672);
                  v66 = *(_DWORD *)(v65 + 2608);
                  v174 = v65;
                  v67 = v66 + 1;
                  if ( !v67 )
                    v67 = v169.m128i_i32[0];
                  *(_DWORD *)(v65 + 2608) = v67;
                  mark_builtin_widgets(1024, 0, 1);
                  sub_6B8D40(v174);
                  v68 = v16;
                  v69 = v175;
                  sub_6586E0(
                    a1,
                    v177,
                    (__int64)v175,
                    v68,
                    v176,
                    (__int64)&v191,
                    *(double *)v58.m128i_i64,
                    a8,
                    (__int64)v170);
                  sub_64C820(*a1, (unsigned int)v173, (unsigned int)v172, v64, v69);
                  if ( (_QWORD)v190 )
                    sub_652AD0((__int64 *)v177, (__int64)v175, (__int64 *)v161);
LABEL_120:
                  v70 = (char *)v204;
                  if ( v204 )
                  {
                    v71 = v205.m128i_i64[0];
                    if ( v205.m128i_i64[0] )
                    {
                      v72 = 0;
                      do
                      {
                        v73 = &v70[144 * v72];
                        clear_tinfo_t(v73 + 64);
                        v74 = *((void **)v73 + 5);
                        if ( v74 )
                        {
                          *((_QWORD *)v73 + 6) = 0;
                          qfree(v74);
                        }
                        v75 = *((void **)v73 + 2);
                        if ( v75 )
                        {
                          *((_QWORD *)v73 + 3) = 0;
                          qfree(v75);
                        }
                        v70 = (char *)v204;
                        ++v72;
                      }
                      while ( v71 != v72 );
                    }
                    v205.m128i_i64[0] = 0;
                    qfree(v70);
                  }
                  if ( v202[1] )
                  {
                    v203.m128i_i64[0] = 0;
                    qfree(v202[1]);
                  }
                  v76 = v199;
                  if ( v199 )
                  {
                    do
                    {
                      v77 = v76;
                      v76 = (_QWORD *)*v76;
                      operator delete(v77, 0x20u);
                    }
                    while ( v76 );
                  }
                  memset(s, 0, 8 * v198);
                  v200 = 0;
                  v199 = nullptr;
                  if ( s != v160 )
                    operator delete(s, 8 * v198);
                  v78 = (char *)v195;
                  if ( v195 )
                  {
                    if ( v196.m128i_i64[0] )
                    {
                      v79 = 0;
                      v80 = v196.m128i_i64[0];
                      do
                      {
                        v81 = &v78[32 * v79];
                        v82 = *(void **)v81;
                        if ( *(_QWORD *)v81 )
                        {
                          *((_QWORD *)v81 + 1) = 0;
                          qfree(v82);
                          v78 = (char *)v195;
                        }
                        ++v79;
                      }
                      while ( v80 != v79 );
                    }
                    v196.m128i_i64[0] = 0;
                    qfree(v78);
                  }
                  if ( v191 )
                  {
                    *(_QWORD *)&v192 = 0;
                    qfree(v191);
                  }
                  LODWORD(v177) = 0;
                  goto LABEL_62;
                }
                LODWORD(v172) = 4;
              }
              LODWORD(v173) = 3;
              goto LABEL_114;
            }
            if ( (*v16 & 0x3F) == 0x2D )
              goto LABEL_99;
          }
          v86 = (char *)v195;
          v159[0] = (size_t)v195 + 32 * v196.m128i_i64[0];
          if ( (void *)v159[0] == v195 )
            goto LABEL_99;
          v158.m128i_i64[1] = (__int64)&v191;
          do
          {
            v32 = (const void *)*a1;
            v33 = v86;
            src[0] = v86;
            sub_6BF400(v86, v32, 1);
            v86 = (char *)src[0] + 32;
          }
          while ( (void *)v159[0] != (char *)src[0] + 32 );
          v31 = LOBYTE(v194[0]) == 0;
          goto LABEL_96;
        }
      }
      v33 = a1;
      v32 = (const void *)v177;
      sub_6514C0(a1, v177, v175, v18, nullptr);
      goto LABEL_158;
    }
    goto LABEL_166;
  }
  v175 = (char *)haystack;
  if ( (_QWORD)v182 )
    v175 = (char *)v181;
  if ( !(_DWORD)v168 )
    goto LABEL_26;
LABEL_14:
  v24 = sub_6B3A90(a1, v177, v175);
  if ( v24 )
  {
    if ( a12 && *(_DWORD *)a12 && *(_DWORD *)a12 != v24 )
      LODWORD(v177) = 3;
    else
      LODWORD(v177) = sub_65B9E0(
                        a1,
                        v177,
                        v24,
                        (unsigned int)v18,
                        0,
                        v16,
                        v176,
                        v173,
                        v172,
                        v171,
                        0,
                        (unsigned __int8)v174);
    goto LABEL_19;
  }
  v83 = *(_QWORD *)(v177 + 64);
  v168 = v83;
  if ( !v83 )
  {
LABEL_166:
    LODWORD(v177) = 4;
    goto LABEL_19;
  }
  LODWORD(v167) = *(_DWORD *)(v83 + 8) & 2;
  if ( (_DWORD)v167 || !a12 )
  {
    LOBYTE(n) = (v167 & 2) != 0;
    goto LABEL_28;
  }
  if ( !*(_DWORD *)a12 )
  {
    LOBYTE(n) = 0;
    LODWORD(v167) = 0;
    goto LABEL_28;
  }
  LODWORD(v177) = 5;
LABEL_19:
  if ( v181 )
  {
    *(_QWORD *)&v182 = 0;
    qfree(v181);
  }
  return (unsigned int)v177;
}
