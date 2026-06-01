__int64 __fastcall file_history_chooser_t__::vfunc_4(char *a1, const char *a2)
{
  __int64 v2; // r14
  __int64 v3; // r13
  char *v4; // rbp
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  _QWORD *v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rdi
  unsigned __int8 (*v17)(void); // rax
  const char *v18; // rsi
  bool v19; // zf
  __int64 v20; // rsi
  unsigned int v21; // r12d
  bool v22; // r15
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r14
  char *v25; // rdx
  __int64 v26; // r14
  __int64 v27; // rbx
  char *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  char *v31; // r13
  char *v32; // r12
  unsigned __int64 v33; // r12
  __m128i v34; // xmm0
  const void *v35; // r15
  __int64 v36; // rbp
  __m128i si128; // xmm2
  __int64 v38; // r14
  __m128i v39; // xmm3
  void *v40; // rcx
  __m128i v41; // xmm1
  char v42; // bl
  __m128i v43; // xmm4
  const void *v44; // rdi
  __m128i v45; // xmm4
  __int64 v46; // rcx
  void *v47; // rdi
  const void **v48; // rax
  __int64 v49; // r12
  __int64 v50; // rbx
  char *v51; // r14
  __int64 v52; // rdi
  __int64 v53; // rax
  const void **v54; // rdx
  __int64 v55; // rsi
  size_t v56; // rbx
  __int64 v57; // r15
  __int64 v58; // r14
  __int64 v59; // rbp
  const char *v60; // rsi
  const char *v61; // rdi
  char *v63; // rdx
  __int64 v64; // rbp
  __int64 v65; // rbx
  char *v66; // rax
  __int64 v67; // rdi
  const char *v68; // rbx
  void *v69; // rax
  size_t v70; // r8
  const char *v71; // r13
  void *v72; // rax
  void *v73; // r14
  __int64 v74; // rax
  __int64 v75; // r14
  __int64 (__fastcall *v76)(__int64 *, __int64, __int64, __int64, __int64); // rax
  __int64 v77; // rdi
  __int64 (*v78)(); // rax
  __int64 *v79; // r14
  const char *v80; // r12
  __int64 v81; // rdx
  __int64 v82; // r13
  __int64 v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rdi
  __int64 v86; // r14
  __int64 v87; // rax
  int v88; // r8d
  __int128 *v89; // r15
  __int64 v90; // rcx
  __int64 v91; // rdx
  char *v92; // rax
  const void **v93; // rsi
  char *v94; // r12
  int v95; // r9d
  __int128 *v96; // rdx
  __int64 v97; // rax
  _BOOL8 v98; // rdi
  bool v99; // cf
  __int64 v100; // rdx
  __int64 *v101; // rbx
  __int64 v102; // rbp
  _QWORD *v103; // r8
  char *v104; // r12
  _QWORD *v105; // rax
  __int128 *v106; // rdi
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rdi
  __int64 v110; // r13
  __int64 v111; // r12
  __int64 v112; // rbp
  _QWORD *v113; // rbx
  __int64 v114; // rdi
  __int64 v115; // rdi
  __int64 v116; // rdi
  __int64 v117; // rdx
  __int64 v118; // rbp
  __int64 v119; // rbx
  __int64 *v120; // rax
  __int64 v121; // rdi
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // r14
  __int64 v125; // rsi
  void *v126[2]; // [rsp+0h] [rbp-1F8h] BYREF
  const void **v127; // [rsp+10h] [rbp-1E8h]
  unsigned __int8 v128; // [rsp+1Fh] [rbp-1D9h]
  __int64 *v129; // [rsp+20h] [rbp-1D8h]
  const char *v130; // [rsp+28h] [rbp-1D0h]
  __m128i v131; // [rsp+30h] [rbp-1C8h] BYREF
  __m128i v132; // [rsp+40h] [rbp-1B8h] BYREF
  __m128i v133; // [rsp+50h] [rbp-1A8h] BYREF
  __m128i v134; // [rsp+60h] [rbp-198h] BYREF
  char **v135; // [rsp+70h] [rbp-188h]
  char *v136; // [rsp+78h] [rbp-180h]
  char *v137; // [rsp+80h] [rbp-178h] BYREF
  __int128 v138; // [rsp+88h] [rbp-170h]
  __int64 v139; // [rsp+A0h] [rbp-158h] BYREF
  __int128 v140; // [rsp+A8h] [rbp-150h]
  __int64 v141; // [rsp+C0h] [rbp-138h] BYREF
  __int128 v142; // [rsp+C8h] [rbp-130h]
  __int64 v143; // [rsp+E0h] [rbp-118h] BYREF
  __int128 v144; // [rsp+E8h] [rbp-110h] BYREF
  __int128 *v145; // [rsp+F8h] [rbp-100h]
  __int128 *v146; // [rsp+100h] [rbp-F8h]
  __int64 v147; // [rsp+108h] [rbp-F0h]
  __int64 v148; // [rsp+110h] [rbp-E8h] BYREF
  __int128 v149; // [rsp+118h] [rbp-E0h]
  __int64 v150; // [rsp+128h] [rbp-D0h]
  __int128 v151; // [rsp+130h] [rbp-C8h]
  __int64 v152; // [rsp+140h] [rbp-B8h]
  __int128 v153; // [rsp+148h] [rbp-B0h]
  __int64 v154; // [rsp+158h] [rbp-A0h]
  const void *v155; // [rsp+160h] [rbp-98h] BYREF
  __m128i v156; // [rsp+168h] [rbp-90h]
  __m128i v157; // [rsp+178h] [rbp-80h]
  __int64 v158; // [rsp+188h] [rbp-70h]
  __int64 v159; // [rsp+190h] [rbp-68h]
  __m128i v160; // [rsp+198h] [rbp-60h]
  char v161; // [rsp+1A8h] [rbp-50h]
  unsigned __int64 v162; // [rsp+1B8h] [rbp-40h]

  v2 = 0;
  v3 = 0;
  v162 = __readfsqword(0x28u);
  v4 = a1;
  v5 = sub_426230(a1, a2);
  v6 = sub_4170A0((__int64)v5);
  v7 = *((_QWORD *)v4 + 30);
  if ( v7 )
  {
    do
    {
      v8 = v2 + *((_QWORD *)v4 + 29);
      v9 = *(_QWORD *)(v8 + 120);
      if ( v9 )
      {
        *(_QWORD *)(v8 + 128) = 0;
        qfree(v9, a2);
      }
      v10 = *(_QWORD *)(v8 + 96);
      if ( v10 )
      {
        *(_QWORD *)(v8 + 104) = 0;
        qfree(v10, a2);
      }
      v11 = *(_QWORD *)(v8 + 72);
      if ( v11 )
      {
        *(_QWORD *)(v8 + 80) = 0;
        qfree(v11, a2);
      }
      v12 = *(_QWORD *)(v8 + 48);
      if ( v12 )
      {
        *(_QWORD *)(v8 + 56) = 0;
        qfree(v12, a2);
      }
      v13 = *(_QWORD *)(v8 + 24);
      if ( v13 )
      {
        *(_QWORD *)(v8 + 32) = 0;
        qfree(v13, a2);
      }
      v5 = *(_QWORD **)v8;
      if ( *(_QWORD *)v8 )
      {
        *(_QWORD *)(v8 + 8) = 0;
        qfree(v5, a2);
      }
      ++v3;
      v2 += 152;
    }
    while ( v7 != v3 );
  }
  *((_QWORD *)v4 + 30) = 0;
  v14 = sub_426230(v5, a2);
  v15 = (__int64 *)sub_417080((__int64)v14);
  v16 = v15[1];
  v129 = v15;
  if ( !v16 )
    goto LABEL_72;
  v17 = *(unsigned __int8 (**)(void))(*(_QWORD *)v16 + 480LL);
  if ( (char *)v17 != (char *)sub_178B60 )
  {
    if ( v17() )
      goto LABEL_72;
  }
  if ( *((_QWORD *)v4 + 27) > 1u )
  {
    v18 = &s1;
    if ( *(_QWORD *)(v6 + 8) )
      v18 = *(const char **)v6;
    if ( strcmp(*((const char **)v4 + 26), v18) )
    {
LABEL_72:
      sub_4A04A0(*((_QWORD *)v4 + 5));
      return 0;
    }
  }
  v19 = *((_QWORD *)v4 + 37) == 0;
  v137 = nullptr;
  v130 = &s1;
  v138 = 0;
  if ( !v19 )
    v130 = *((const char **)v4 + 36);
  v20 = (__int64)&v137;
  v135 = &v137;
  if ( (unsigned __int8)sub_43DB00((__int64)v4, (const char *)&v137, v129, v130, 0xFFFFFFFD) )
  {
    v21 = *((_DWORD *)v137 + 15);
    if ( v21 )
    {
      v22 = v137[72] != 2;
    }
    else
    {
      v21 = *((_DWORD *)v137 + 16);
      v22 = 0;
    }
    if ( v137 != v4 + 256 )
    {
      v23 = *((_QWORD *)v137 + 1);
      if ( !v23 || (v70 = v23 - 1, v23 == 1) )
      {
        *((_QWORD *)v4 + 33) = 0;
      }
      else
      {
        v71 = *(const char **)v137;
        v72 = *((void **)v4 + 32);
        if ( *((_QWORD *)v4 + 34) < v23 )
        {
          v125 = *((_QWORD *)v4 + 32);
          v127 = (const void **)(v23 - 1);
          v72 = (void *)qvector_reserve(v4 + 256, v125, v23, 1);
          *((_QWORD *)v4 + 32) = v72;
          v70 = (size_t)v127;
        }
        *((_QWORD *)v4 + 33) = v23;
        v20 = (__int64)v71;
        memmove(v72, v71, v70);
        *(_BYTE *)(*((_QWORD *)v4 + 32) + v23 - 1) = 0;
      }
    }
    *((_DWORD *)v4 + 70) = v21;
    v4[284] = v22;
    if ( v4 + 208 != (char *)v6 )
    {
      v24 = *(_QWORD *)(v6 + 8);
      if ( v24 > 1 )
      {
        v68 = *(const char **)v6;
        v69 = *((void **)v4 + 26);
        if ( *((_QWORD *)v4 + 28) < v24 )
        {
          v69 = (void *)qvector_reserve(v4 + 208, *((_QWORD *)v4 + 26), v24, 1);
          *((_QWORD *)v4 + 26) = v69;
        }
        *((_QWORD *)v4 + 27) = v24;
        v20 = (__int64)v68;
        memmove(v69, v68, v24 - 1);
        *(_BYTE *)(*((_QWORD *)v4 + 26) + v24 - 1) = 0;
      }
      else
      {
        *((_QWORD *)v4 + 27) = 0;
      }
    }
    v25 = v137;
    if ( v137 )
    {
      v26 = v138;
      if ( (_QWORD)v138 )
      {
        v27 = 0;
        do
        {
          v28 = &v25[80 * v27];
          v29 = *(_QWORD *)v28;
          if ( *(_QWORD *)v28 )
          {
            *((_QWORD *)v28 + 1) = 0;
            qfree(v29, (const char *)v20);
            v25 = v137;
          }
          ++v27;
        }
        while ( v26 != v27 );
      }
      *(_QWORD *)&v138 = 0;
      qfree(v25, (const char *)v20);
      v137 = nullptr;
      *((_QWORD *)&v138 + 1) = 0;
    }
    v20 = (__int64)v135;
    v128 = sub_43DB00((__int64)v4, (const char *)v135, v129, v130, v21);
    if ( v128 )
    {
      v30 = v138;
      v31 = v137;
      v32 = &v137[80 * v138];
      if ( v137 != v32 )
      {
        v33 = (unsigned __int64)(v32 - 80);
        if ( (unsigned __int64)v137 < v33 )
        {
          v136 = v4;
          v34 = 0;
          v127 = &v155;
          do
          {
            v35 = *(const void **)v31;
            v36 = *((_QWORD *)v31 + 5);
            *(_QWORD *)v31 = 0;
            si128 = _mm_loadu_si128((const __m128i *)(v31 + 8));
            v38 = *((_QWORD *)v31 + 6);
            *(__m128i *)(v31 + 8) = v34;
            v39 = _mm_loadu_si128((const __m128i *)(v31 + 24));
            v40 = *(void **)v33;
            v155 = v35;
            v41 = _mm_loadu_si128((const __m128i *)(v31 + 56));
            v42 = v31[72];
            *(_QWORD *)v33 = 0;
            v43 = _mm_loadu_si128((const __m128i *)(v33 + 8));
            *(__m128i *)(v33 + 8) = v34;
            v44 = *(const void **)v31;
            v158 = v36;
            v159 = v38;
            v161 = v42;
            v156 = si128;
            v157 = v39;
            v160 = v41;
            if ( v44 )
            {
              *((_QWORD *)v31 + 1) = 0;
              v126[0] = v40;
              v134 = v39;
              v133 = v43;
              v132 = v41;
              v131 = si128;
              qfree(v44, (const char *)v20);
              v39 = _mm_load_si128(&v134);
              v40 = v126[0];
              v34 = 0;
              v43 = _mm_load_si128(&v133);
              v41 = _mm_load_si128(&v132);
              si128 = _mm_load_si128(&v131);
            }
            *(_QWORD *)v31 = v40;
            *(__m128i *)(v31 + 8) = v43;
            v45 = _mm_loadu_si128((const __m128i *)(v33 + 24));
            v155 = nullptr;
            *(__m128i *)(v31 + 24) = v45;
            v46 = *(_QWORD *)(v33 + 40);
            v156 = v34;
            *((_QWORD *)v31 + 5) = v46;
            *((_QWORD *)v31 + 6) = *(_QWORD *)(v33 + 48);
            *((_DWORD *)v31 + 14) = *(_DWORD *)(v33 + 56);
            *((_DWORD *)v31 + 15) = *(_DWORD *)(v33 + 60);
            *((_DWORD *)v31 + 16) = *(_DWORD *)(v33 + 64);
            *((_DWORD *)v31 + 17) = *(_DWORD *)(v33 + 68);
            v31[72] = *(_BYTE *)(v33 + 72);
            v47 = *(void **)v33;
            if ( *(_QWORD *)v33 )
            {
              *(_QWORD *)(v33 + 8) = 0;
              v132 = v39;
              v131 = v41;
              *(__m128i *)v126 = si128;
              qfree(v47, (const char *)v20);
              v39 = _mm_load_si128(&v132);
              v41 = _mm_load_si128(&v131);
              v34 = 0;
              si128 = _mm_load_si128((const __m128i *)v126);
            }
            v48 = v127;
            *(_QWORD *)v33 = v35;
            *(__m128i *)(v33 + 8) = si128;
            if ( (const void **)v33 != v48 )
              *(__m128i *)(v33 + 24) = v39;
            *(_QWORD *)(v33 + 40) = v36;
            v31 += 80;
            v33 -= 80LL;
            *(_QWORD *)(v33 + 128) = v38;
            *(__m128i *)(v33 + 136) = v41;
            *(_BYTE *)(v33 + 152) = v42;
          }
          while ( (unsigned __int64)v31 < v33 );
          v4 = v136;
          v30 = v138;
          v31 = v137;
        }
      }
      v49 = v30 - 1;
      if ( v30 == 1 )
      {
        v53 = 1;
      }
      else
      {
        v50 = 80 * v30 - 80;
        do
        {
          while ( 1 )
          {
            v51 = &v31[v50];
            --v49;
            if ( v31[v50 + 72] == 2 && v31[v50 - 8] == 8 )
              break;
            v50 -= 80;
            if ( !v49 )
              goto LABEL_59;
          }
          v52 = *(_QWORD *)v51;
          if ( *(_QWORD *)v51 )
          {
            *((_QWORD *)v51 + 1) = 0;
            qfree(v52, (const char *)v20);
            v31 = v137;
          }
          v20 = (__int64)(v51 + 80);
          v50 -= 80;
          memmove(v51, v51 + 80, v31 - v51 + 80 * v138 - 80);
          v31 = v137;
          *(_QWORD *)&v138 = v138 - 1;
        }
        while ( v49 );
LABEL_59:
        v53 = v138;
      }
      v139 = 0;
      v140 = 0;
      v131.m128i_i64[0] = (__int64)&v31[80 * v53];
      if ( (char *)v131.m128i_i64[0] != v31 )
      {
        v54 = nullptr;
        v55 = 0;
        while ( 1 )
        {
          v56 = *((_QWORD *)v31 + 1);
          v57 = v55 + 24LL * (_QWORD)v54;
          if ( v55 != v57 )
            break;
LABEL_91:
          v73 = nullptr;
          if ( v56 )
          {
            v73 = (void *)qalloc_or_throw(v56);
            memcpy(v73, *(const void **)v31, v56);
            v54 = (const void **)v140;
            v55 = v139;
          }
LABEL_93:
          if ( *((_QWORD *)&v140 + 1) < (unsigned __int64)v54 + 1 )
          {
            v126[0] = &v139;
            v139 = qvector_reserve(&v139, v55, (char *)v54 + 1, 24);
            v54 = (const void **)v140;
            v55 = v139;
          }
          v74 = v55 + 24LL * (_QWORD)v54;
          *(_QWORD *)v74 = v73;
          *(__m128i *)(v74 + 8) = _mm_unpacklo_epi64((__m128i)v56, (__m128i)v56);
          *(_QWORD *)&v140 = v140 + 1;
LABEL_96:
          v31 += 80;
          if ( v31 == (char *)v131.m128i_i64[0] )
            goto LABEL_100;
          v55 = v139;
          v54 = (const void **)v140;
        }
        v126[0] = v4;
        v58 = v55;
        v59 = v55;
        v127 = v54;
        while ( 1 )
        {
          if ( *(_QWORD *)(v59 + 8) )
          {
            v60 = *(const char **)v59;
            v61 = &s1;
            if ( !v56 )
              goto LABEL_65;
          }
          else
          {
            if ( !v56 )
            {
              v55 = v58;
              v75 = v59;
              v54 = v127;
              v4 = (char *)v126[0];
              if ( v57 != v75 )
                goto LABEL_96;
              v73 = nullptr;
              goto LABEL_93;
            }
            v60 = &s1;
          }
          v61 = *(const char **)v31;
LABEL_65:
          if ( !strcmp(v61, v60) )
          {
            v55 = v58;
            v124 = v59;
            v54 = v127;
            v4 = (char *)v126[0];
            if ( v57 != v124 )
              goto LABEL_96;
            goto LABEL_91;
          }
          v59 += 24;
          if ( v57 == v59 )
          {
            v54 = v127;
            v4 = (char *)v126[0];
            v55 = v58;
            goto LABEL_91;
          }
        }
      }
LABEL_100:
      v141 = 0;
      v142 = 0;
      v148 = 0x7FFFFFFF00000000LL;
      v150 = 0;
      v152 = 0;
      v154 = 0x2FFFFFFFFLL;
      v149 = 0;
      v151 = 0;
      v153 = 0;
      v76 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64, __int64))(*v129 + 216);
      if ( v76 == vault_with_events_t__::vfunc_27 )
      {
        v77 = v129[1];
        if ( !v77
          || (v78 = *(__int64 (**)())(*(_QWORD *)v77 + 480LL), v78 != sub_178B60)
          && (v126[0] = &v139, ((unsigned __int8 (__fastcall *)(__int64))v78)(v77)) )
        {
          LODWORD(v80) = 52;
          goto LABEL_184;
        }
        v79 = v129;
        v143 = 0;
        v144 = 0;
        v80 = (const char *)(*(unsigned int (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *, __int64, __int64 *))(*(_QWORD *)v129[1] + 184LL))(
                              v129[1],
                              &v143,
                              &v141,
                              &v139,
                              &v148,
                              0xFFFFFFFFLL,
                              &v139);
        v20 = (__int64)v80;
        (*(void (__fastcall **)(__int64 *, const char *, __int64 *))(*v79 + 24))(v79, v80, &v143);
        v81 = v143;
        if ( v143 )
        {
          v82 = v144;
          if ( (_QWORD)v144 )
          {
            v83 = 0;
            do
            {
              v84 = v81 + 32 * v83;
              v85 = *(_QWORD *)(v84 + 8);
              if ( v85 )
              {
                *(_QWORD *)(v84 + 16) = 0;
                qfree(v85, v80);
                v81 = v143;
              }
              ++v83;
            }
            while ( v82 != v83 );
          }
          *(_QWORD *)&v144 = 0;
          qfree(v81, v80);
        }
      }
      else
      {
        v126[0] = &v139;
        v20 = (__int64)&v141;
        LODWORD(v80) = v76(v129, (__int64)&v141, (__int64)&v139, (__int64)&v148, 0xFFFFFFFFLL);
      }
      if ( (_DWORD)v80 )
      {
LABEL_184:
        v20 = (__int64)"File history, commits for \"%s\"";
        v126[0] = &v139;
        sub_416980((unsigned int)v80, (__int64)"File history, commits for \"%s\"", v130);
        v128 = 0;
LABEL_148:
        if ( v152 )
        {
          *(_QWORD *)&v153 = 0;
          qfree(v152, (const char *)v20);
        }
        if ( v150 )
        {
          *(_QWORD *)&v151 = 0;
          qfree(v150, (const char *)v20);
        }
        v109 = v141;
        if ( v141 )
        {
          v110 = v142;
          if ( (_QWORD)v142 )
          {
            v111 = 0;
            v112 = 0;
            do
            {
              v113 = (_QWORD *)(v109 + v111);
              v114 = *(_QWORD *)(v109 + v111 + 64);
              if ( v114 )
              {
                v113[9] = 0;
                qfree(v114, (const char *)v20);
              }
              v115 = v113[5];
              if ( v115 )
              {
                v113[6] = 0;
                qfree(v115, (const char *)v20);
              }
              v116 = v113[2];
              if ( v116 )
              {
                v113[3] = 0;
                qfree(v116, (const char *)v20);
              }
              ++v112;
              v109 = v141;
              v111 += 88;
            }
            while ( v110 != v112 );
          }
          *(_QWORD *)&v142 = 0;
          qfree(v109, (const char *)v20);
        }
        v117 = v139;
        if ( v139 )
        {
          v118 = v140;
          if ( (_QWORD)v140 )
          {
            v119 = 0;
            do
            {
              v120 = (__int64 *)(v117 + 24 * v119);
              v121 = *v120;
              if ( *v120 )
              {
                v120[1] = 0;
                qfree(v121, (const char *)v20);
                v117 = v139;
              }
              ++v119;
            }
            while ( v118 != v119 );
          }
          *(_QWORD *)&v140 = 0;
          qfree(v117, (const char *)v20);
        }
        goto LABEL_75;
      }
      LODWORD(v144) = 0;
      *((_QWORD *)&v144 + 1) = 0;
      v145 = &v144;
      v146 = &v144;
      v147 = 0;
      v86 = v142 - 1;
      if ( (__int64)v142 - 1 < 0 )
      {
LABEL_136:
        v100 = v138;
        v101 = (__int64 *)(v4 + 232);
        if ( *((_QWORD *)v4 + 31) < (unsigned __int64)v138 )
        {
          v20 = *((_QWORD *)v4 + 29);
          *((_QWORD *)v4 + 29) = qvector_reserve(v4 + 232, v20, v138, 152);
          v100 = v138;
        }
        v102 = (__int64)v137;
        v103 = *((_QWORD **)&v144 + 1);
        v104 = &v137[80 * v100];
        if ( v104 != v137 )
        {
          do
          {
            if ( v103 )
            {
              while ( 1 )
              {
                v20 = *(unsigned int *)(v102 + 68);
                v105 = v103;
                v106 = &v144;
                do
                {
                  while ( 1 )
                  {
                    v107 = v105[2];
                    v108 = v105[3];
                    if ( *((_DWORD *)v105 + 8) < (int)v20 )
                      break;
                    v106 = (__int128 *)v105;
                    v105 = (_QWORD *)v105[2];
                    if ( !v107 )
                      goto LABEL_144;
                  }
                  v105 = (_QWORD *)v105[3];
                }
                while ( v108 );
LABEL_144:
                if ( v106 != &v144 && *((_DWORD *)v106 + 8) <= (int)v20 )
                  break;
                v102 += 80;
                if ( v104 == (char *)v102 )
                  goto LABEL_147;
              }
              v20 = v102;
              sub_43FBD0(v101, v102, (_QWORD *)(v141 + 88LL * *((int *)v106 + 9)));
              v103 = *((_QWORD **)&v144 + 1);
            }
            v102 += 80;
          }
          while ( (char *)v102 != v104 );
        }
LABEL_147:
        sub_43D1E0(v103);
        goto LABEL_148;
      }
      v87 = 0;
      v129 = &v143;
      while ( 1 )
      {
        v20 = v141 + 88 * v86;
        if ( v87 )
        {
          v88 = *(_DWORD *)v20;
          v89 = &v144;
          do
          {
            while ( 1 )
            {
              v90 = *(_QWORD *)(v87 + 16);
              v91 = *(_QWORD *)(v87 + 24);
              if ( v88 > *(_DWORD *)(v87 + 32) )
                break;
              v89 = (__int128 *)v87;
              v87 = *(_QWORD *)(v87 + 16);
              if ( !v90 )
                goto LABEL_118;
            }
            v87 = *(_QWORD *)(v87 + 24);
          }
          while ( v91 );
LABEL_118:
          if ( v89 != &v144 && v88 >= *((_DWORD *)v89 + 8) )
            goto LABEL_131;
        }
        else
        {
          v89 = &v144;
        }
        v127 = (const void **)(v141 + 88 * v86);
        v92 = (char *)operator new(0x28u);
        v93 = v127;
        *((_DWORD *)v92 + 9) = 0;
        v94 = v92;
        v20 = *(unsigned int *)v93;
        *((_DWORD *)v92 + 8) = v20;
        if ( v89 == &v144 )
        {
          if ( !v147 )
            goto LABEL_172;
          v96 = v146;
          v89 = nullptr;
          if ( (int)v20 <= *((_DWORD *)v146 + 8) )
            goto LABEL_172;
        }
        else
        {
          v95 = *((_DWORD *)v89 + 8);
          if ( (int)v20 >= v95 )
          {
            if ( (int)v20 <= v95 )
              goto LABEL_134;
            if ( v146 == v89 )
            {
LABEL_133:
              v96 = v89;
              if ( v89 )
                goto LABEL_186;
              goto LABEL_134;
            }
            LODWORD(v127) = v20;
            LODWORD(v130) = v95;
            v123 = std::_Rb_tree_increment(v89);
            v20 = (unsigned int)v127;
            v96 = (__int128 *)v123;
            if ( (int)v127 >= *(_DWORD *)(v123 + 32) )
              goto LABEL_172;
            v95 = (int)v130;
            if ( !*((_QWORD *)v89 + 3) )
              goto LABEL_133;
            v89 = (__int128 *)v123;
          }
          else
          {
            v96 = v89;
            if ( v145 == v89 )
              goto LABEL_126;
            LODWORD(v127) = v20;
            v97 = std::_Rb_tree_decrement(v89);
            v20 = (unsigned int)v127;
            v96 = (__int128 *)v97;
            if ( (int)v127 <= *(_DWORD *)(v97 + 32) )
            {
LABEL_172:
              LODWORD(v127) = v20;
              v122 = sub_43C9C0((__int64)v129, v20);
              v20 = (unsigned int)v127;
              v89 = (__int128 *)v122;
              goto LABEL_126;
            }
            if ( *(_QWORD *)(v97 + 24) )
              v96 = v89;
            else
              v89 = nullptr;
          }
        }
LABEL_126:
        if ( v96 )
        {
          if ( v89 || v96 == &v144 )
          {
            v98 = 1;
          }
          else
          {
            v95 = *((_DWORD *)v96 + 8);
LABEL_186:
            v98 = v95 > (int)v20;
          }
          v20 = (__int64)v94;
          v89 = (__int128 *)v94;
          std::_Rb_tree_insert_and_rebalance(v98, v94, v96, &v144);
          ++v147;
LABEL_131:
          *((_DWORD *)v89 + 9) = v86;
          v99 = v86-- == 0;
          if ( v99 )
            goto LABEL_136;
          goto LABEL_132;
        }
LABEL_134:
        if ( !v94 )
          goto LABEL_131;
        v20 = 40;
        operator delete(v94, 0x28u);
        *((_DWORD *)v89 + 9) = v86;
        v99 = v86-- == 0;
        if ( v99 )
          goto LABEL_136;
LABEL_132:
        v87 = *((_QWORD *)&v144 + 1);
      }
    }
  }
  v128 = 0;
LABEL_75:
  v63 = v137;
  if ( v137 )
  {
    v64 = v138;
    if ( (_QWORD)v138 )
    {
      v65 = 0;
      do
      {
        v66 = &v63[80 * v65];
        v67 = *(_QWORD *)v66;
        if ( *(_QWORD *)v66 )
        {
          *((_QWORD *)v66 + 1) = 0;
          qfree(v67, (const char *)v20);
          v63 = v137;
        }
        ++v65;
      }
      while ( v64 != v65 );
    }
    *(_QWORD *)&v138 = 0;
    qfree(v63, (const char *)v20);
  }
  return v128;
}
