__int64 __fastcall sub_91C0(std::chrono::_V2::steady_clock *a1)
{
  bool v1; // zf
  int v2; // eax
  __int64 v3; // rbp
  std::chrono::_V2::steady_clock *v4; // r10
  __int64 v5; // rax
  _QWORD *v6; // rsi
  __int64 v7; // r9
  unsigned __int64 v8; // r14
  __int64 v9; // r11
  __int64 v10; // r13
  unsigned __int64 v11; // rbp
  size_t v12; // rdx
  __int64 v13; // r14
  char *v14; // rbp
  __int64 v15; // r12
  size_t v16; // rbx
  __int64 v17; // rbx
  int v18; // eax
  size_t v19; // r14
  void *v20; // rax
  void *v21; // rax
  void *v22; // rax
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdx
  size_t v28; // rax
  __int64 v29; // rbp
  _QWORD *v30; // rbp
  __int64 v31; // r15
  __int64 v32; // r15
  __m128i v33; // xmm0
  size_t v34; // r13
  void *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // r14
  __int64 v39; // r9
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // r13
  void *v43; // rax
  void *v44; // rax
  void *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // r13
  __int64 v49; // r9
  __int64 v50; // rbx
  __int64 v51; // rcx
  __int64 v52; // r14
  void *v53; // rax
  void *v54; // rax
  void *v55; // rax
  std::chrono::_V2::steady_clock *v56; // rcx
  std::chrono::_V2::steady_clock *v57; // rax
  unsigned __int64 v58; // rdx
  __int64 v59; // rax
  size_t v60; // r14
  __int64 v61; // r12
  __int64 v62; // r8
  _QWORD *v63; // rbx
  __int64 v64; // rbp
  char *v65; // rbp
  char *v66; // r15
  size_t v67; // r13
  __int64 v68; // r13
  int v69; // eax
  size_t v70; // r13
  void *v71; // rax
  size_t v72; // rax
  size_t v73; // r12
  size_t v74; // rbx
  const char *v75; // rsi
  void *v77; // rax
  void *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rbp
  _QWORD *v81; // rdi
  __int64 v82; // r12
  __int64 v83; // rbp
  __int64 *v84; // rbx
  __int64 v85; // rdi
  __int64 v86; // rdi
  __int64 v87; // rdi
  __int64 v88; // r13
  size_t v89; // rbx
  __int64 v90; // r14
  __int64 v91; // r14
  __int64 v92; // rax
  __int64 v93; // rbx
  unsigned __int64 v94; // r14
  __int64 v95; // r15
  __int64 v96; // r13
  __int64 *v97; // rbp
  __int64 v98; // r12
  __int64 v99; // rdi
  __int64 v100; // rdi
  __int64 v101; // rdi
  __int64 v102; // r13
  __int64 *v103; // r12
  __int64 v104; // rbp
  __int64 v105; // rdi
  __int64 v106; // rdi
  __int64 v107; // rdi
  _QWORD *v108; // rdi
  __int64 v109; // r12
  __int64 v110; // rbp
  __int64 *v111; // rbx
  __int64 v112; // rdi
  __int64 v113; // rdi
  __int64 v114; // rdi
  __int64 v115; // rdi
  __int64 v116; // r13
  __int64 i; // r12
  __int64 *v118; // rbp
  __int64 v119; // rdi
  __int64 v120; // r14
  __int64 j; // r15
  __int64 *v122; // rbx
  __int64 v123; // rdi
  __int64 v124; // rdi
  __int64 v125; // rdi
  __int64 v126; // rdi
  __int64 v127; // r14
  __int64 k; // r15
  __int64 *v129; // rbx
  __int64 v130; // rdi
  __int64 v131; // rdi
  __int64 v132; // rdi
  __int64 v133; // rdi
  std::chrono::_V2::steady_clock *v134; // rdi
  __int64 v135; // r12
  __int64 v136; // rbp
  __int64 *v137; // rbx
  __int64 v138; // rdi
  __int64 v139; // rdi
  __int64 v140; // rdi
  int v141; // eax
  __int64 v142; // rbx
  __int64 v143; // r12
  __int64 v144; // r8
  __int64 v145; // r15
  void *v146; // rax
  void *v147; // rax
  void *v148; // rax
  __int64 v149; // rbx
  __int64 v150; // r12
  __int64 v151; // r8
  __int64 v152; // r15
  void *v153; // rax
  void *v154; // rax
  void *v155; // rax
  __int64 v156; // rdx
  __int64 v157; // r13
  __int64 v158; // r14
  __int64 v159; // r15
  __int64 *v160; // rbx
  __int64 v161; // rdi
  __int64 v162; // rdi
  __int64 v163; // rdi
  __int64 *v164; // r14
  __int64 v165; // r13
  __int64 v166; // r15
  __int64 v167; // rdi
  __int64 v168; // rdi
  __int64 v169; // rdi
  _QWORD *v170; // rdi
  __int64 v171; // r14
  __int64 v172; // r13
  __int64 *v173; // rbx
  __int64 v174; // rdi
  __int64 v175; // rdi
  __int64 v176; // rdi
  unsigned int v177; // eax
  unsigned __int64 n; // [rsp+0h] [rbp-178h]
  size_t nf; // [rsp+0h] [rbp-178h]
  __int64 ng; // [rsp+0h] [rbp-178h]
  size_t ne; // [rsp+0h] [rbp-178h]
  size_t ni; // [rsp+0h] [rbp-178h]
  __int64 nj; // [rsp+0h] [rbp-178h]
  size_t nh; // [rsp+0h] [rbp-178h]
  std::chrono::_V2::steady_clock *na; // [rsp+0h] [rbp-178h]
  __m128i nb; // [rsp+0h] [rbp-178h]
  __int64 nc; // [rsp+0h] [rbp-178h]
  size_t nm; // [rsp+0h] [rbp-178h]
  __int64 nl; // [rsp+0h] [rbp-178h]
  size_t nk; // [rsp+0h] [rbp-178h]
  size_t np; // [rsp+0h] [rbp-178h]
  __int64 no; // [rsp+0h] [rbp-178h]
  size_t nn; // [rsp+0h] [rbp-178h]
  __int64 nd; // [rsp+0h] [rbp-178h]
  __int64 v195; // [rsp+18h] [rbp-160h]
  __int64 v196; // [rsp+18h] [rbp-160h]
  size_t v197; // [rsp+18h] [rbp-160h]
  size_t v198; // [rsp+18h] [rbp-160h]
  __int64 v199; // [rsp+18h] [rbp-160h]
  __int64 v200; // [rsp+18h] [rbp-160h]
  __int64 v201; // [rsp+20h] [rbp-158h]
  unsigned __int64 v202; // [rsp+20h] [rbp-158h]
  __int64 v203; // [rsp+20h] [rbp-158h]
  _QWORD *v204; // [rsp+28h] [rbp-150h]
  __int64 v205; // [rsp+30h] [rbp-148h]
  __int64 v206; // [rsp+30h] [rbp-148h]
  _QWORD *v207; // [rsp+38h] [rbp-140h]
  __int64 v208; // [rsp+38h] [rbp-140h]
  int v209; // [rsp+40h] [rbp-138h]
  __int64 v210; // [rsp+48h] [rbp-130h]
  __int64 v211; // [rsp+58h] [rbp-120h] BYREF
  std::chrono::_V2::steady_clock *v212; // [rsp+60h] [rbp-118h] BYREF
  __int128 v213; // [rsp+68h] [rbp-110h]
  __int64 v214; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v215; // [rsp+88h] [rbp-F0h]
  _QWORD *v216; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v217; // [rsp+A8h] [rbp-D0h]
  void *v218; // [rsp+C0h] [rbp-B8h] BYREF
  __int128 v219; // [rsp+C8h] [rbp-B0h]
  __int64 *v220; // [rsp+D8h] [rbp-A0h] BYREF
  __int128 v221; // [rsp+E0h] [rbp-98h]
  __int64 *v222; // [rsp+F0h] [rbp-88h] BYREF
  __int128 v223; // [rsp+F8h] [rbp-80h]
  __m128i v224; // [rsp+108h] [rbp-70h]
  char s[24]; // [rsp+120h] [rbp-58h] BYREF
  unsigned __int64 v226; // [rsp+138h] [rbp-40h]

  v1 = *((_QWORD *)a1 + 23) == 0;
  v226 = __readfsqword(0x28u);
  if ( v1 )
  {
    sub_65D0(a1);
    if ( !*((_QWORD *)a1 + 23) )
    {
      if ( !getinf_buf(1, s, 16) )
        s[0] = 0;
      v218 = nullptr;
      v219 = 0;
      v72 = strlen(s);
      v73 = v72 + 1;
      v74 = v72;
      v218 = (void *)qvector_reserve(&v218, 0, v72 + 1, 1);
      *(_QWORD *)&v219 = v73;
      memmove(v218, s, v74);
      v75 = s1;
      *((_BYTE *)v218 + v74) = 0;
      if ( (_QWORD)v219 )
        v75 = (const char *)v218;
      sub_42F0((__int64)"Patfind: No pattern definition file found for processor: %s\n", v75);
      if ( v218 )
      {
        *(_QWORD *)&v219 = 0;
        qfree(v218);
      }
      return 1;
    }
  }
  v2 = std::chrono::_V2::steady_clock::now(a1);
  v3 = 0;
  v4 = nullptr;
  v209 = v2;
  v5 = *((_QWORD *)a1 + 23);
  v6 = *((_QWORD **)a1 + 22);
  v213 = 0;
  v215 = 0;
  v204 = v6;
  v212 = nullptr;
  v214 = 0;
  v207 = &v6[12 * v5];
  if ( v6 == v207 )
    goto LABEL_249;
  do
  {
    v7 = 80LL * v204[4];
    v8 = 0xCCCCCCCCCCCCCCCDLL * (v7 >> 4);
    n = v8;
    if ( v8 )
    {
      v9 = 5 * v3;
      v10 = v204[3];
      v11 = v8 + v3;
      v12 = 0;
      v13 = 16 * v9;
      if ( *((_QWORD *)&v213 + 1) < v11 )
      {
        v198 = 80LL * v204[4];
        v212 = (std::chrono::_V2::steady_clock *)qvector_reserve(&v212, v4, v11, 80);
        v4 = v212;
        v7 = v198;
        v12 = 80 * v213 - v13;
      }
      v14 = (char *)v4 + v13;
      v15 = v10 + v7;
      memmove((char *)v4 + v13 + v7, (char *)v4 + v13, v12);
      for ( ; v15 != v10; *((_DWORD *)v14 - 2) = v18 )
      {
        *(_QWORD *)v14 = 0;
        *(_OWORD *)(v14 + 8) = 0;
        v19 = *(_QWORD *)(v10 + 8);
        if ( v19 )
        {
          v20 = (void *)qalloc_or_throw(*(_QWORD *)(v10 + 8));
          *(_QWORD *)v14 = v20;
          *((_QWORD *)v14 + 2) = v19;
          memcpy(v20, *(const void **)v10, v19);
          *((_QWORD *)v14 + 1) = v19;
        }
        *((_QWORD *)v14 + 3) = 0;
        *((_OWORD *)v14 + 2) = 0;
        v16 = *(_QWORD *)(v10 + 32);
        if ( v16 )
        {
          v22 = (void *)qalloc_or_throw(*(_QWORD *)(v10 + 32));
          *((_QWORD *)v14 + 3) = v22;
          *((_QWORD *)v14 + 5) = v16;
          memcpy(v22, *(const void **)(v10 + 24), v16);
          *((_QWORD *)v14 + 4) = v16;
        }
        *((_QWORD *)v14 + 6) = 0;
        *(_OWORD *)(v14 + 56) = 0;
        v17 = *(_QWORD *)(v10 + 56);
        if ( v17 )
        {
          v21 = (void *)qalloc_or_throw(16 * v17);
          *((_QWORD *)v14 + 6) = v21;
          *((_QWORD *)v14 + 8) = v17;
          memcpy(v21, *(const void **)(v10 + 48), 16 * v17);
          *((_QWORD *)v14 + 7) = v17;
        }
        v18 = *(_DWORD *)(v10 + 72);
        v10 += 80;
        v14 += 80;
      }
      *(_QWORD *)&v213 = n + v213;
    }
    v23 = 88LL * v204[10];
    v24 = 0x2E8BA2E8BA2E8BA3LL * (v23 >> 3);
    v205 = v24;
    if ( v24 )
    {
      v25 = v204[9];
      v26 = v214;
      v27 = v24 + v215;
      v28 = 0;
      v29 = 88 * v215;
      if ( *((_QWORD *)&v215 + 1) < (unsigned __int64)(0x2E8BA2E8BA2E8BA3LL * (v23 >> 3) + v215) )
      {
        v214 = qvector_reserve(&v214, v214, v27, 88);
        v26 = v214;
        v28 = 88 * v215 - v29;
      }
      v30 = (_QWORD *)(v26 + v29);
      v201 = v25 + v23;
      memmove(&v30[(unsigned __int64)v23 / 8], v30, v28);
      if ( v25 == v25 + v23 )
      {
LABEL_46:
        *(_QWORD *)&v215 = v205 + v215;
        goto LABEL_47;
      }
LABEL_24:
      *v30 = 0;
      *(_OWORD *)(v30 + 1) = 0;
      v34 = *(_QWORD *)(v25 + 8);
      if ( v34 )
      {
        v35 = (void *)qalloc_or_throw(*(_QWORD *)(v25 + 8));
        *v30 = v35;
        v30[2] = v34;
        memcpy(v35, *(const void **)v25, v34);
        v30[1] = v34;
      }
      v30[3] = 0;
      *((_OWORD *)v30 + 2) = 0;
      v31 = *(_QWORD *)(v25 + 32);
      if ( v31 )
      {
        v46 = qalloc_or_throw(80 * v31);
        v30[3] = v46;
        v47 = v46;
        v48 = 0;
        v30[5] = v31;
        while ( 1 )
        {
          v50 = 80 * v48 + v47;
          v51 = *(_QWORD *)(v25 + 24) + 80 * v48;
          *(_QWORD *)v50 = 0;
          v52 = v51;
          *(_OWORD *)(v50 + 8) = 0;
          if ( *(_QWORD *)(v51 + 8) )
          {
            ni = *(_QWORD *)(v51 + 8);
            v53 = (void *)qalloc_or_throw(ni);
            *(_QWORD *)v50 = v53;
            *(_QWORD *)(v50 + 16) = ni;
            memcpy(v53, *(const void **)v52, ni);
            *(_QWORD *)(v50 + 8) = ni;
          }
          *(_QWORD *)(v50 + 24) = 0;
          *(_OWORD *)(v50 + 32) = 0;
          if ( *(_QWORD *)(v52 + 32) )
          {
            nh = *(_QWORD *)(v52 + 32);
            v55 = (void *)qalloc_or_throw(nh);
            *(_QWORD *)(v50 + 24) = v55;
            *(_QWORD *)(v50 + 40) = nh;
            memcpy(v55, *(const void **)(v52 + 24), nh);
            *(_QWORD *)(v50 + 32) = nh;
          }
          *(_QWORD *)(v50 + 48) = 0;
          *(_OWORD *)(v50 + 56) = 0;
          v49 = *(_QWORD *)(v52 + 56);
          if ( v49 )
          {
            nj = *(_QWORD *)(v52 + 56);
            v196 = 16 * v49;
            v54 = (void *)qalloc_or_throw(16 * v49);
            *(_QWORD *)(v50 + 48) = v54;
            ++v48;
            *(_QWORD *)(v50 + 64) = nj;
            memcpy(v54, *(const void **)(v52 + 48), v196);
            *(_QWORD *)(v50 + 56) = nj;
            *(_DWORD *)(v50 + 72) = *(_DWORD *)(v52 + 72);
            if ( v31 == v48 )
            {
LABEL_45:
              v30[4] = v31;
              break;
            }
          }
          else
          {
            ++v48;
            *(_DWORD *)(v50 + 72) = *(_DWORD *)(v52 + 72);
            if ( v31 == v48 )
              goto LABEL_45;
          }
          v47 = v30[3];
        }
      }
      v30[6] = 0;
      *(_OWORD *)(v30 + 7) = 0;
      v32 = *(_QWORD *)(v25 + 56);
      if ( !v32 )
        goto LABEL_23;
      v36 = qalloc_or_throw(80 * v32);
      v30[6] = v36;
      v37 = v36;
      v38 = 0;
      v30[8] = v32;
      while ( 1 )
      {
        v40 = 80 * v38 + v37;
        v41 = *(_QWORD *)(v25 + 48) + 80 * v38;
        *(_QWORD *)v40 = 0;
        v42 = v41;
        *(_OWORD *)(v40 + 8) = 0;
        if ( *(_QWORD *)(v41 + 8) )
        {
          nf = *(_QWORD *)(v41 + 8);
          v43 = (void *)qalloc_or_throw(nf);
          *(_QWORD *)v40 = v43;
          *(_QWORD *)(v40 + 16) = nf;
          memcpy(v43, *(const void **)v42, nf);
          *(_QWORD *)(v40 + 8) = nf;
        }
        *(_QWORD *)(v40 + 24) = 0;
        *(_OWORD *)(v40 + 32) = 0;
        if ( *(_QWORD *)(v42 + 32) )
        {
          ne = *(_QWORD *)(v42 + 32);
          v45 = (void *)qalloc_or_throw(ne);
          *(_QWORD *)(v40 + 24) = v45;
          *(_QWORD *)(v40 + 40) = ne;
          memcpy(v45, *(const void **)(v42 + 24), ne);
          *(_QWORD *)(v40 + 32) = ne;
        }
        *(_QWORD *)(v40 + 48) = 0;
        *(_OWORD *)(v40 + 56) = 0;
        v39 = *(_QWORD *)(v42 + 56);
        if ( v39 )
        {
          ng = *(_QWORD *)(v42 + 56);
          v195 = 16 * v39;
          v44 = (void *)qalloc_or_throw(16 * v39);
          *(_QWORD *)(v40 + 48) = v44;
          ++v38;
          *(_QWORD *)(v40 + 64) = ng;
          memcpy(v44, *(const void **)(v42 + 48), v195);
          *(_QWORD *)(v40 + 56) = ng;
          *(_DWORD *)(v40 + 72) = *(_DWORD *)(v42 + 72);
          if ( v32 == v38 )
          {
LABEL_35:
            v30[7] = v32;
LABEL_23:
            v33 = _mm_loadu_si128((const __m128i *)(v25 + 72));
            v30 += 11;
            v25 += 88;
            *((__m128i *)v30 - 1) = v33;
            if ( v201 == v25 )
              goto LABEL_46;
            goto LABEL_24;
          }
        }
        else
        {
          ++v38;
          *(_DWORD *)(v40 + 72) = *(_DWORD *)(v42 + 72);
          if ( v32 == v38 )
            goto LABEL_35;
        }
        v37 = v30[6];
      }
    }
LABEL_47:
    v204 += 12;
    v4 = v212;
    v3 = v213;
  }
  while ( v207 != v204 );
  v56 = (std::chrono::_V2::steady_clock *)((char *)v212 + 80 * v213);
  if ( v56 != v212 )
  {
    v57 = v212;
    v58 = 0;
    if ( ((80 * (_BYTE)v213) & 0x10) == 0 )
      goto LABEL_252;
    v59 = *((_QWORD *)v212 + 1);
    if ( !v59 )
      v59 = 0;
    v208 = v59;
    v57 = (std::chrono::_V2::steady_clock *)((char *)v212 + 80);
    v58 = v208;
    if ( v56 != (std::chrono::_V2::steady_clock *)((char *)v212 + 80) )
    {
LABEL_252:
      do
      {
        if ( v58 < *((_QWORD *)v57 + 1) )
          v58 = *((_QWORD *)v57 + 1);
        if ( v58 < *((_QWORD *)v57 + 11) )
          v58 = *((_QWORD *)v57 + 11);
        v57 = (std::chrono::_V2::steady_clock *)((char *)v57 + 160);
      }
      while ( v56 != v57 );
      v208 = v58;
    }
    goto LABEL_59;
  }
LABEL_249:
  v208 = 0;
LABEL_59:
  v60 = 0;
  v61 = 0;
  v210 = 0;
  v197 = -1;
  while ( 1 )
  {
    na = v4;
    v217 = 0;
    v216 = nullptr;
    v62 = 80 * (v3 - v61);
    v206 = v62;
    v202 = 0xCCCCCCCCCCCCCCCDLL * (v62 >> 4);
    if ( v202 )
    {
      v63 = (_QWORD *)qvector_reserve(&v216, 0, 0xCCCCCCCCCCCCCCCDLL * (v62 >> 4), 80);
      v216 = v63;
      v64 = 80 * v3;
      memmove((char *)v63 + v206, v63, 80 * v217);
      if ( v64 != 80 * v61 )
      {
        v65 = (char *)na + v64;
        v66 = (char *)na + 80 * v61;
        do
        {
          *v63 = 0;
          *(_OWORD *)(v63 + 1) = 0;
          v70 = *((_QWORD *)v66 + 1);
          if ( v70 )
          {
            v71 = (void *)qalloc_or_throw(*((_QWORD *)v66 + 1));
            *v63 = v71;
            v63[2] = v70;
            memcpy(v71, *(const void **)v66, v70);
            v63[1] = v70;
          }
          v63[3] = 0;
          *((_OWORD *)v63 + 2) = 0;
          v67 = *((_QWORD *)v66 + 4);
          if ( v67 )
          {
            v78 = (void *)qalloc_or_throw(*((_QWORD *)v66 + 4));
            v63[3] = v78;
            v63[5] = v67;
            memcpy(v78, *((const void **)v66 + 3), v67);
            v63[4] = v67;
          }
          v63[6] = 0;
          *(_OWORD *)(v63 + 7) = 0;
          v68 = *((_QWORD *)v66 + 7);
          if ( v68 )
          {
            v77 = (void *)qalloc_or_throw(16 * v68);
            v63[6] = v77;
            v63[8] = v68;
            memcpy(v77, *((const void **)v66 + 6), 16 * v68);
            v63[7] = v68;
          }
          v69 = *((_DWORD *)v66 + 18);
          v66 += 80;
          v63 += 10;
          *((_DWORD *)v63 - 2) = v69;
        }
        while ( v65 != v66 );
      }
      *(_QWORD *)&v217 = v202 + v217;
    }
    v211 = 0;
    v79 = bin_search(v60, v197, &v216, 32, &v211);
    v80 = v79;
    if ( !v61 )
      break;
    if ( v79 != v60 )
    {
      ++v60;
      goto LABEL_84;
    }
LABEL_98:
    v218 = nullptr;
    v219 = 0;
    v203 = v211 + v61;
    v88 = v214 + 88 * (v211 + v61);
    v89 = *(_QWORD *)(v88 + 8);
    if ( v89 )
    {
      v218 = (void *)qalloc_or_throw(*(_QWORD *)(v88 + 8));
      *((_QWORD *)&v219 + 1) = v89;
      memcpy(v218, *(const void **)v88, v89);
      *(_QWORD *)&v219 = v89;
    }
    v220 = nullptr;
    v221 = 0;
    v90 = *(_QWORD *)(v88 + 32);
    if ( v90 )
    {
      v220 = (__int64 *)qalloc_or_throw(80 * v90);
      v149 = (__int64)v220;
      v150 = 0;
      *((_QWORD *)&v221 + 1) = v90;
      do
      {
        v152 = *(_QWORD *)(v88 + 24) + 80 * v150;
        *(_QWORD *)v149 = 0;
        *(_OWORD *)(v149 + 8) = 0;
        if ( *(_QWORD *)(v152 + 8) )
        {
          np = *(_QWORD *)(v152 + 8);
          v153 = (void *)qalloc_or_throw(np);
          *(_QWORD *)v149 = v153;
          *(_QWORD *)(v149 + 16) = np;
          memcpy(v153, *(const void **)v152, np);
          *(_QWORD *)(v149 + 8) = np;
        }
        *(_QWORD *)(v149 + 24) = 0;
        *(_OWORD *)(v149 + 32) = 0;
        if ( *(_QWORD *)(v152 + 32) )
        {
          nn = *(_QWORD *)(v152 + 32);
          v155 = (void *)qalloc_or_throw(nn);
          *(_QWORD *)(v149 + 24) = v155;
          *(_QWORD *)(v149 + 40) = nn;
          memcpy(v155, *(const void **)(v152 + 24), nn);
          *(_QWORD *)(v149 + 32) = nn;
        }
        *(_QWORD *)(v149 + 48) = 0;
        *(_OWORD *)(v149 + 56) = 0;
        v151 = *(_QWORD *)(v152 + 56);
        if ( v151 )
        {
          no = *(_QWORD *)(v152 + 56);
          v200 = 16 * v151;
          v154 = (void *)qalloc_or_throw(16 * v151);
          *(_QWORD *)(v149 + 48) = v154;
          *(_QWORD *)(v149 + 64) = no;
          memcpy(v154, *(const void **)(v152 + 48), v200);
          *(_QWORD *)(v149 + 56) = no;
        }
        ++v150;
        v149 += 80;
        *(_DWORD *)(v149 - 8) = *(_DWORD *)(v152 + 72);
      }
      while ( v90 != v150 );
      *(_QWORD *)&v221 = v90;
    }
    v222 = nullptr;
    v223 = 0;
    v91 = *(_QWORD *)(v88 + 56);
    if ( v91 )
    {
      v222 = (__int64 *)qalloc_or_throw(80 * v91);
      v142 = (__int64)v222;
      v143 = 0;
      *((_QWORD *)&v223 + 1) = v91;
      do
      {
        v145 = *(_QWORD *)(v88 + 48) + 80 * v143;
        *(_QWORD *)v142 = 0;
        *(_OWORD *)(v142 + 8) = 0;
        if ( *(_QWORD *)(v145 + 8) )
        {
          nm = *(_QWORD *)(v145 + 8);
          v146 = (void *)qalloc_or_throw(nm);
          *(_QWORD *)v142 = v146;
          *(_QWORD *)(v142 + 16) = nm;
          memcpy(v146, *(const void **)v145, nm);
          *(_QWORD *)(v142 + 8) = nm;
        }
        *(_QWORD *)(v142 + 24) = 0;
        *(_OWORD *)(v142 + 32) = 0;
        if ( *(_QWORD *)(v145 + 32) )
        {
          nk = *(_QWORD *)(v145 + 32);
          v148 = (void *)qalloc_or_throw(nk);
          *(_QWORD *)(v142 + 24) = v148;
          *(_QWORD *)(v142 + 40) = nk;
          memcpy(v148, *(const void **)(v145 + 24), nk);
          *(_QWORD *)(v142 + 32) = nk;
        }
        *(_QWORD *)(v142 + 48) = 0;
        *(_OWORD *)(v142 + 56) = 0;
        v144 = *(_QWORD *)(v145 + 56);
        if ( v144 )
        {
          nl = *(_QWORD *)(v145 + 56);
          v199 = 16 * v144;
          v147 = (void *)qalloc_or_throw(16 * v144);
          *(_QWORD *)(v142 + 48) = v147;
          *(_QWORD *)(v142 + 64) = nl;
          memcpy(v147, *(const void **)(v145 + 48), v199);
          *(_QWORD *)(v142 + 56) = nl;
        }
        ++v143;
        v142 += 80;
        *(_DWORD *)(v142 - 8) = *(_DWORD *)(v145 + 72);
      }
      while ( v91 != v143 );
      *(_QWORD *)&v223 = v91;
    }
    nb = _mm_loadu_si128((const __m128i *)(v88 + 72));
    v224 = nb;
    v92 = sub_4C50((__int64)&v218, (__int64 *)&v222, v80);
    v93 = v221;
    v94 = v92;
    if ( v92 == -1 )
      v94 = v80;
    if ( !(_QWORD)v221 || sub_4C50((__int64)&v218, (__int64 *)&v220, v94) != -1 )
    {
      if ( (get_flags_ex(v94, 4) & 0x600) != 0
        && ((~(unsigned __int16)get_flags_ex(v94, 4) & 0x600) != 0 || (unsigned int)get_func_num(v94) != -1)
        || v94 % nb.m128i_i64[1] )
      {
        v60 = v80 + 1;
      }
      else
      {
        get_dword(v94);
        sub_42F0((__int64)"Patfind: Possible function found at %08a, pattern %x.\n", 0.0, v94);
        if ( nb.m128i_i64[0] != -1 )
        {
          v177 = str2reg("T");
          split_sreg_range(v94, v177, nb.m128i_i64[0], 2, 0);
        }
        auto_mark_range(v94, v94 + 1, 20);
        auto_mark_range(v94, v94 + 1, 30);
        ++v210;
        v60 = v80 + v216[10 * v211 + 1];
      }
      v95 = (__int64)v222;
      if ( !v222 )
      {
LABEL_117:
        v102 = (__int64)v220;
        if ( v220 )
        {
          if ( v93 )
          {
LABEL_119:
            v103 = (__int64 *)v102;
            v104 = 0;
            do
            {
              v105 = v103[6];
              if ( v105 )
              {
                v103[7] = 0;
                qfree(v105);
              }
              v106 = v103[3];
              if ( v106 )
              {
                v103[4] = 0;
                qfree(v106);
              }
              v107 = *v103;
              if ( *v103 )
              {
                v103[1] = 0;
                qfree(v107);
              }
              ++v104;
              v103 += 10;
            }
            while ( v93 != v104 );
          }
          qfree(v102);
        }
LABEL_128:
        if ( v218 )
          qfree(v218);
LABEL_84:
        v81 = v216;
        if ( v216 )
        {
          v82 = v217;
          if ( (_QWORD)v217 )
          {
            v83 = 0;
            do
            {
              v84 = &v81[10 * v83];
              v85 = v84[6];
              if ( v85 )
              {
                v84[7] = 0;
                qfree(v85);
              }
              v86 = v84[3];
              if ( v86 )
              {
                v84[4] = 0;
                qfree(v86);
              }
              v87 = *v84;
              if ( *v84 )
              {
                v84[1] = 0;
                qfree(v87);
              }
              ++v83;
              v81 = v216;
            }
            while ( v82 != v83 );
          }
          *(_QWORD *)&v217 = 0;
          qfree(v81);
        }
        v197 = -1;
        v61 = 0;
        goto LABEL_96;
      }
LABEL_108:
      v96 = v223;
      v97 = (__int64 *)v95;
      v98 = 0;
      if ( (_QWORD)v223 )
      {
        do
        {
          v99 = v97[6];
          if ( v99 )
          {
            v97[7] = 0;
            qfree(v99);
          }
          v100 = v97[3];
          if ( v100 )
          {
            v97[4] = 0;
            qfree(v100);
          }
          v101 = *v97;
          if ( *v97 )
          {
            v97[1] = 0;
            qfree(v101);
          }
          ++v98;
          v97 += 10;
        }
        while ( v96 != v98 );
      }
      qfree(v95);
      goto LABEL_117;
    }
    v61 = v203 + 1;
    if ( v203 + 1 >= (unsigned __int64)v213 )
    {
      v95 = (__int64)v222;
      v60 = v80 + 1;
      if ( !v222 )
      {
        v102 = (__int64)v220;
        if ( v220 )
          goto LABEL_119;
        goto LABEL_128;
      }
      goto LABEL_108;
    }
    v156 = (__int64)v222;
    v197 = v80 + v208;
    if ( v222 )
    {
      v157 = 0;
      if ( (_QWORD)v223 )
      {
        nd = (__int64)v222;
        v158 = v93;
        v159 = v223;
        v160 = v222;
        do
        {
          v161 = v160[6];
          if ( v161 )
          {
            v160[7] = 0;
            qfree(v161);
          }
          v162 = v160[3];
          if ( v162 )
          {
            v160[4] = 0;
            qfree(v162);
          }
          v163 = *v160;
          if ( *v160 )
          {
            v160[1] = 0;
            qfree(v163);
          }
          ++v157;
          v160 += 10;
        }
        while ( v159 != v157 );
        v156 = nd;
        v93 = v158;
      }
      qfree(v156);
    }
    if ( v220 )
    {
      v164 = v220;
      v165 = 0;
      v166 = (__int64)v220;
      do
      {
        v167 = v164[6];
        if ( v167 )
        {
          v164[7] = 0;
          qfree(v167);
        }
        v168 = v164[3];
        if ( v168 )
        {
          v164[4] = 0;
          qfree(v168);
        }
        v169 = *v164;
        if ( *v164 )
        {
          v164[1] = 0;
          qfree(v169);
        }
        ++v165;
        v164 += 10;
      }
      while ( v93 != v165 );
      qfree(v166);
    }
    if ( v218 )
      qfree(v218);
    v170 = v216;
    if ( v216 )
    {
      v171 = v217;
      if ( (_QWORD)v217 )
      {
        v172 = 0;
        do
        {
          v173 = &v170[10 * v172];
          v174 = v173[6];
          if ( v174 )
          {
            v173[7] = 0;
            qfree(v174);
          }
          v175 = v173[3];
          if ( v175 )
          {
            v173[4] = 0;
            qfree(v175);
          }
          v176 = *v173;
          if ( *v173 )
          {
            v173[1] = 0;
            qfree(v176);
          }
          ++v172;
          v170 = v216;
        }
        while ( v171 != v172 );
      }
      *(_QWORD *)&v217 = 0;
      qfree(v170);
    }
    v60 = v80;
LABEL_96:
    if ( v60 >= v197 )
      goto LABEL_146;
    v4 = v212;
    v3 = v213;
  }
  if ( v79 != -1 )
    goto LABEL_98;
  v108 = v216;
  if ( v216 )
  {
    v109 = v217;
    if ( (_QWORD)v217 )
    {
      v110 = 0;
      do
      {
        v111 = &v108[10 * v110];
        v112 = v111[6];
        if ( v112 )
        {
          v111[7] = 0;
          qfree(v112);
        }
        v113 = v111[3];
        if ( v113 )
        {
          v111[4] = 0;
          qfree(v113);
        }
        v114 = *v111;
        if ( *v111 )
        {
          v111[1] = 0;
          qfree(v114);
        }
        ++v110;
        v108 = v216;
      }
      while ( v109 != v110 );
    }
    *(_QWORD *)&v217 = 0;
    qfree(v108);
  }
LABEL_146:
  v115 = v214;
  if ( v214 )
  {
    if ( (_QWORD)v215 )
    {
      nc = v215;
      v116 = 0;
      for ( i = 0; i != nc; ++i )
      {
        v118 = (__int64 *)(v115 + v116);
        v119 = *(_QWORD *)(v115 + v116 + 48);
        if ( v119 )
        {
          v120 = v118[7];
          if ( v120 )
          {
            for ( j = 0; j != v120; ++j )
            {
              v122 = (__int64 *)(v119 + 80 * j);
              v123 = v122[6];
              if ( v123 )
              {
                v122[7] = 0;
                qfree(v123);
              }
              v124 = v122[3];
              if ( v124 )
              {
                v122[4] = 0;
                qfree(v124);
              }
              v125 = *v122;
              if ( *v122 )
              {
                v122[1] = 0;
                qfree(v125);
              }
              v119 = v118[6];
            }
          }
          v118[7] = 0;
          qfree(v119);
        }
        v126 = v118[3];
        if ( v126 )
        {
          v127 = v118[4];
          if ( v127 )
          {
            for ( k = 0; k != v127; ++k )
            {
              v129 = (__int64 *)(v126 + 80 * k);
              v130 = v129[6];
              if ( v130 )
              {
                v129[7] = 0;
                qfree(v130);
              }
              v131 = v129[3];
              if ( v131 )
              {
                v129[4] = 0;
                qfree(v131);
              }
              v132 = *v129;
              if ( *v129 )
              {
                v129[1] = 0;
                qfree(v132);
              }
              v126 = v118[3];
            }
          }
          v118[4] = 0;
          qfree(v126);
        }
        v133 = *v118;
        if ( *v118 )
        {
          v118[1] = 0;
          qfree(v133);
        }
        v115 = v214;
        v116 += 88;
      }
    }
    *(_QWORD *)&v215 = 0;
    qfree(v115);
  }
  v134 = v212;
  if ( v212 )
  {
    v135 = v213;
    if ( (_QWORD)v213 )
    {
      v136 = 0;
      do
      {
        v137 = (__int64 *)((char *)v134 + 80 * v136);
        v138 = v137[6];
        if ( v138 )
        {
          v137[7] = 0;
          qfree(v138);
        }
        v139 = v137[3];
        if ( v139 )
        {
          v137[4] = 0;
          qfree(v139);
        }
        v140 = *v137;
        if ( *v137 )
        {
          v137[1] = 0;
          qfree(v140);
        }
        ++v136;
        v134 = v212;
      }
      while ( v135 != v136 );
    }
    *(_QWORD *)&v213 = 0;
    qfree(v134);
  }
  v141 = std::chrono::_V2::steady_clock::now(v134);
  sub_42F0((__int64)"Patfind: Found %zu functions, in %f seconds\n", v210, (double)(v141 - v209) / 1000000000.0);
  return 1;
}
