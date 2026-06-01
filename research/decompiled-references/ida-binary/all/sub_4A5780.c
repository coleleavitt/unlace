void __fastcall sub_4A5780(
        __int64 a1,
        void **a2,
        __int64 a3,
        char a4,
        __int64 *a5,
        unsigned __int8 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  void ***v14; // rbx
  __int64 *v15; // rbp
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // r14
  void **v19; // rax
  __int64 v20; // r15
  void **v21; // rsi
  __int64 v22; // r12
  unsigned __int64 v23; // rdx
  size_t v24; // rax
  void **v25; // r12
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  bool v29; // zf
  char v30; // al
  __int64 v31; // r10
  __int64 v32; // r14
  __int64 v33; // r15
  void *v34; // r8
  void **v35; // rax
  void *v36; // rcx
  void *v37; // rdx
  __int64 v38; // rax
  _QWORD *v39; // rsi
  __int64 v40; // rax
  void **v41; // rdx
  char *v42; // r14
  __int64 *v43; // r15
  __int64 v44; // r8
  void **v45; // rdx
  __int64 *v46; // rcx
  void **v47; // rax
  __int64 v48; // rdx
  void ***v49; // r12
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // r10
  unsigned __int64 v54; // rdx
  size_t v55; // rax
  __int64 v56; // r15
  _QWORD *v57; // r15
  size_t v58; // r14
  void *v59; // rax
  __int64 v60; // r14
  __int64 v61; // r13
  __int64 *v62; // rax
  __int64 v63; // rdi
  _QWORD **v64; // r13
  void *v65; // rdi
  __int64 v66; // rax
  _QWORD *v67; // rdx
  __int64 rank; // rax
  unsigned __int64 v69; // rdx
  QT::QAbstractItemView *v70; // rdi
  __int64 v71; // rax
  void **v72; // rdx
  void **v73; // rdx
  __int64 v74; // rax
  void **v75; // r13
  __int64 v76; // rbp
  __int64 v77; // rax
  void **v78; // r15
  __int64 v79; // r12
  __int64 v80; // rax
  void *v81; // r14
  void *v82; // rax
  __int64 v83; // rax
  __m128i *v84; // rbp
  __int64 v85; // rax
  unsigned __int64 *v86; // rbx
  unsigned __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rax
  __m128i *v91; // r14
  __int64 v92; // rbp
  char *v93; // r12
  unsigned __int64 v94; // rdx
  __m128i *v95; // rbp
  void *v96; // rcx
  unsigned __int64 v97; // rdx
  void **v98; // rax
  int v99; // eax
  unsigned __int64 v100; // rdx
  __int64 v101; // r12
  void **v102; // rdi
  void **v103; // r15
  __int64 i; // rax
  void ***v105; // r12
  void **v106; // rbp
  void **v107; // rdi
  __int64 v108; // r13
  __int8 *v109; // rcx
  void **v110; // r13
  unsigned __int64 v111; // r8
  void ***v112; // r9
  void ***v113; // r10
  __int64 v114; // rax
  void **v115; // rdi
  __int64 v116; // r9
  char *v117; // r10
  size_t v118; // rdx
  void **v119; // r13
  unsigned __int64 v120; // rdx
  char *v121; // rcx
  __m128i *v122; // r13
  _QWORD *m128i_i64; // rdi
  __int64 v124; // rbp
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __m128 v128; // xmm4
  __m128 v129; // xmm5
  __int64 v130; // rax
  unsigned __int64 v131; // [rsp+0h] [rbp-128h]
  __int64 v132; // [rsp+0h] [rbp-128h]
  __m128i *v133; // [rsp+0h] [rbp-128h]
  void ***v134; // [rsp+8h] [rbp-120h]
  __int64 v135; // [rsp+8h] [rbp-120h]
  __int64 v136; // [rsp+8h] [rbp-120h]
  char v137; // [rsp+10h] [rbp-118h]
  unsigned __int64 v138; // [rsp+10h] [rbp-118h]
  __int64 v139; // [rsp+10h] [rbp-118h]
  char *v140; // [rsp+10h] [rbp-118h]
  char *v141; // [rsp+10h] [rbp-118h]
  __int64 v143; // [rsp+18h] [rbp-110h]
  __int64 v144; // [rsp+20h] [rbp-108h]
  void *v150; // [rsp+48h] [rbp-E0h]
  __int64 v151; // [rsp+58h] [rbp-D0h] BYREF
  void *src[4]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v153; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v154; // [rsp+88h] [rbp-A0h]
  void *v155; // [rsp+A0h] [rbp-88h] BYREF
  __int128 v156; // [rsp+A8h] [rbp-80h]
  __int64 v157; // [rsp+B8h] [rbp-70h] BYREF
  int v158; // [rsp+C0h] [rbp-68h] BYREF
  void *v159; // [rsp+C8h] [rbp-60h]
  int *v160; // [rsp+D0h] [rbp-58h]
  int *v161; // [rsp+D8h] [rbp-50h]
  __int64 v162; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v163; // [rsp+E8h] [rbp-40h]

  v14 = (void ***)a2;
  v163 = __readfsqword(0x28u);
  a2[3] = (void *)-1LL;
  v15 = *(__int64 **)a3;
  v144 = *(_QWORD *)a3 + 32LL * *(_QWORD *)(a3 + 8);
  if ( *(_QWORD *)a3 != v144 )
  {
    do
    {
      while ( 1 )
      {
        v16 = *v15;
        if ( v15[1] != -2 )
          break;
        if ( !v16 )
          goto LABEL_4;
        v17 = 8LL * *(_QWORD *)(v16 + 16);
        v18 = v17 >> 3;
        if ( !(v17 >> 3) )
          goto LABEL_4;
        v19 = v14[1];
        v20 = *(_QWORD *)(v16 + 8);
        v21 = *v14;
        v22 = (__int64)v19;
        v23 = (unsigned __int64)v19 + v18;
        v24 = 0;
        if ( (unsigned __int64)v14[2] < v23 )
        {
          v89 = qvector_reserve(v14, v21, v23, 8);
          *v14 = (void **)v89;
          v21 = (void **)v89;
          v24 = 8LL * (_QWORD)v14[1] - v22 * 8;
        }
        v25 = &v21[v22];
        a2 = v25;
        memmove(&v25[(unsigned __int64)v17 / 8], v25, v24);
        v26 = 0;
        if ( v17 )
        {
          do
          {
            v25[v26 / 8] = *(void **)(v20 + v26);
            v26 += 8LL;
          }
          while ( v17 != v26 );
        }
        v14[1] = (void **)((char *)v14[1] + v18);
        v15 += 4;
        if ( (__int64 *)v144 == v15 )
          goto LABEL_13;
      }
      if ( !v16 )
        goto LABEL_4;
      a9 = 0;
      v155 = nullptr;
      v29 = *(_DWORD *)(a1 + 2376) == 2;
      v160 = &v158;
      v161 = &v158;
      v30 = a4;
      v158 = 0;
      v159 = nullptr;
      v162 = 0;
      v153 = 0;
      v156 = 0;
      v154 = 0;
      if ( !v29 )
        v30 = 0;
      v31 = *(_QWORD *)(v16 + 8);
      v137 = v30 & 1;
      v32 = v31 + 9LL * *(_QWORD *)(v16 + 16);
      if ( v31 == v32 )
      {
        v41 = v14[1];
        if ( v14[2] >= v41 )
        {
          if ( a5 )
          {
            v49 = nullptr;
            v50 = 24 * v154;
            v138 = 0xAAAAAAAAAAAAAAABLL * ((24 * (__int64)v154) >> 3);
            if ( v138 )
              goto LABEL_49;
          }
          goto LABEL_63;
        }
LABEL_78:
        a2 = *v14;
        *v14 = (void **)qvector_reserve(v14, *v14, v41, 8);
        v40 = v156;
        goto LABEL_38;
      }
      v33 = *(_QWORD *)(v16 + 8);
      while ( 1 )
      {
        while ( !*(_BYTE *)(v33 + 8) )
        {
LABEL_27:
          v34 = *(void **)v33;
          v35 = (void **)v159;
          src[0] = *(void **)v33;
          if ( v159 )
          {
            a2 = (void **)&v158;
            do
            {
              while ( 1 )
              {
                v36 = v35[2];
                v37 = v35[3];
                if ( v35[4] < v34 )
                  break;
                a2 = v35;
                v35 = (void **)v35[2];
                if ( !v36 )
                  goto LABEL_32;
              }
              v35 = (void **)v35[3];
            }
            while ( v37 );
LABEL_32:
            if ( a2 != (void **)&v158 && v34 >= a2[4] )
              goto LABEL_25;
          }
          v38 = v156;
          v39 = v155;
          if ( *((_QWORD *)&v156 + 1) < (unsigned __int64)(v156 + 1) )
          {
            v150 = v34;
            v155 = (void *)qvector_reserve(&v155, v155, v156 + 1, 8);
            v39 = v155;
            v34 = v150;
            v38 = v156;
          }
          v39[v38] = v34;
          a2 = src;
          *(_QWORD *)&v156 = v156 + 1;
          sub_2AB280(&v157, (unsigned __int64 *)src);
          v33 += 9;
          if ( v32 == v33 )
            goto LABEL_37;
        }
        if ( v137 )
          break;
LABEL_25:
        v33 += 9;
        if ( v32 == v33 )
          goto LABEL_37;
      }
      while ( 1 )
      {
        v66 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a1 + 2384));
        v67 = *(_QWORD **)(v66 + 216);
        if ( !v67 )
          v67 = *(_QWORD **)(v66 + 208);
        a2 = *(void ***)(v16 + 56);
        rank = dirtree_get_rank(*v67, a2, v33);
        if ( rank >= 0 )
        {
          a10 = (__m128)(unsigned __int64)rank;
          a2 = &v155;
          v70 = *(QT::QAbstractItemView **)(a1 + 2384);
          a7 = (__m128)_mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(v16 + 56)), (__m128i)(unsigned __int64)rank);
          *(__m128 *)src = a7;
          sub_48E9B0(v70, (__int64)&v155, (__int64)src, -1, (__int64)&v153);
        }
        v33 += 9;
        if ( v32 == v33 )
          break;
        if ( !*(_BYTE *)(v33 + 8) )
          goto LABEL_27;
      }
LABEL_37:
      v40 = v156;
      v41 = (void **)((char *)v14[1] + v156);
      if ( v14[2] < v41 )
        goto LABEL_78;
LABEL_38:
      v42 = (char *)v155 + 8 * v40;
      if ( v42 != v155 )
      {
        v43 = (__int64 *)v155;
        do
        {
          a2 = (void **)*v43;
          v44 = sub_498880(*(_QWORD *)(v16 + 96), *v43, a6);
          if ( v44 != -1 )
          {
            a2 = *v14;
            v45 = v14[1];
            v46 = (__int64 *)&(*v14)[(_QWORD)v45];
            if ( *v14 == (void **)v46 )
              goto LABEL_74;
            v47 = *v14;
            while ( (void *)v44 != *v47 )
            {
              if ( v46 == (__int64 *)++v47 )
                goto LABEL_74;
            }
            if ( v46 == (__int64 *)v47 )
            {
LABEL_74:
              v69 = (unsigned __int64)v45 + 1;
              if ( (unsigned __int64)v14[2] < v69 )
              {
                v139 = v44;
                v71 = qvector_reserve(v14, a2, v69, 8);
                v72 = v14[1];
                v44 = v139;
                *v14 = (void **)v71;
                v46 = (__int64 *)(v71 + 8LL * (_QWORD)v72);
              }
              *v46 = v44;
              v14[1] = (void **)((char *)v14[1] + 1);
            }
          }
          ++v43;
        }
        while ( v42 != (char *)v43 );
      }
      v48 = v153;
      v49 = (void ***)v153;
      if ( a5 )
      {
        v50 = 24 * v154;
        v138 = 0xAAAAAAAAAAAAAAABLL * ((24 * (__int64)v154) >> 3);
        if ( v138 )
        {
LABEL_49:
          v51 = a5[1];
          v52 = *a5;
          v53 = 3 * v51;
          v54 = v51 + v138;
          v55 = 0;
          v56 = 8 * v53;
          if ( a5[2] < v54 )
          {
            v135 = v50;
            v83 = qvector_reserve(a5, v52, v54, 24);
            *a5 = v83;
            v52 = v83;
            v50 = v135;
            v55 = 24 * a5[1] - v56;
          }
          v57 = (_QWORD *)(v52 + v56);
          v134 = (void ***)((char *)v49 + v50);
          a2 = (void **)v57;
          memmove((char *)v57 + v50, v57, v55);
          do
          {
            while ( 1 )
            {
              a8 = 0;
              *v57 = 0;
              *(_OWORD *)(v57 + 1) = 0;
              v58 = (size_t)v49[1];
              if ( v58 )
                break;
              v57 += 3;
              v49 += 3;
              if ( v134 == v49 )
                goto LABEL_55;
            }
            v59 = (void *)qalloc_or_throw(v49[1]);
            *v57 = v59;
            v57 += 3;
            *(v57 - 1) = v58;
            a2 = *v49;
            v49 += 3;
            memcpy(v59, a2, v58);
            *(v57 - 2) = v58;
          }
          while ( v134 != v49 );
LABEL_55:
          v48 = v153;
          a5[1] += v138;
        }
      }
      if ( v48 )
      {
        v60 = v154;
        if ( (_QWORD)v154 )
        {
          v61 = 0;
          do
          {
            v62 = (__int64 *)(v48 + 24 * v61);
            v63 = *v62;
            if ( *v62 )
            {
              v62[1] = 0;
              qfree(v63, (const char *)a2);
              v48 = v153;
            }
            ++v61;
          }
          while ( v60 != v61 );
        }
        *(_QWORD *)&v154 = 0;
        *(double *)a7.m128_u64 = qfree(v48, (const char *)a2);
      }
LABEL_63:
      v64 = (_QWORD **)v159;
      if ( v159 )
      {
        do
        {
          sub_49CE10(v64[3]);
          v65 = v64;
          v64 = (_QWORD **)v64[2];
          a2 = (void **)&qword_28;
          operator delete(v65, 0x28u);
        }
        while ( v64 );
      }
      if ( v155 )
      {
        *(_QWORD *)&v156 = 0;
        *(double *)a7.m128_u64 = qfree(v155, (const char *)a2);
      }
LABEL_4:
      v15 += 4;
    }
    while ( (__int64 *)v144 != v15 );
  }
LABEL_13:
  v27 = *(_QWORD *)(a3 + 24);
  if ( v27 )
  {
    v28 = *(_QWORD *)(v27 + 8);
    if ( *(_QWORD *)(a3 + 32) == -2 )
    {
      v14[3] = *(void ***)v28;
    }
    else if ( !*(_BYTE *)(v28 + 8) )
    {
      a2 = *(void ***)v28;
      v90 = sub_498880(*(_QWORD *)(v27 + 96), *(_QWORD *)v28, a6);
      if ( v90 != -1 )
        v14[3] = (void **)v90;
    }
  }
  if ( (*(_BYTE *)(a1 + 1785) & 0x10) == 0 || (a4 & 2) == 0 )
    goto LABEL_18;
  v73 = v14[1];
  if ( v73 )
  {
    a2 = nullptr;
    memset(src, 0, 24);
    src[0] = (void *)qvector_reserve(src, 0, v73, 8);
  }
  else
  {
    if ( v14[3] == (void **)-1LL )
      return;
    memset(src, 0, 24);
  }
  v74 = sub_4DFB30(a1 + 104);
  v151 = 0;
  v75 = v14[3];
  v76 = v74;
  if ( v75 != (void **)-1LL )
  {
    a2 = v14[3];
    v77 = sub_4D8990(v74);
    if ( v77 )
      v151 = *(_QWORD *)(v77 + 120);
  }
  v78 = *v14;
  v79 = (__int64)&(*v14)[(_QWORD)v14[1]];
  if ( (void **)v79 != *v14 )
  {
    do
    {
      a2 = (void **)*v78;
      v80 = sub_4D8990(v76);
      if ( v80 )
      {
        v81 = *(void **)(v80 + 120);
        v82 = src[1];
        a2 = (void **)src[0];
        if ( src[2] < (char *)src[1] + 1 )
        {
          src[0] = (void *)qvector_reserve(src, src[0], (char *)src[1] + 1, 8);
          a2 = (void **)src[0];
          v82 = src[1];
        }
        a2[(_QWORD)v82] = v81;
        ++src[1];
      }
      ++v78;
    }
    while ( (void **)v79 != v78 );
  }
  v91 = (__m128i *)src[0];
  v92 = 8 * (__int64)src[1];
  v93 = (char *)src[0] + 8 * (__int64)src[1];
  if ( src[0] != v93 )
  {
    if ( v92 >> 3 )
    {
      _BitScanReverse64(&v94, v92 >> 3);
      sub_49BAF0(
        (__m128i *)src[0],
        (unsigned __int64 *)src[0] + (__int64)src[1],
        2LL * (int)v94,
        0.0,
        *(double *)a8.m128_u64,
        a9);
      if ( v92 > 128 )
      {
        v95 = v91 + 8;
        sub_49B380(v91->m128i_i8, v91[8].m128i_i8);
        do
        {
          v96 = (void *)v95->m128i_i64[0];
          v97 = v95[-1].m128i_u64[1];
          v98 = (void **)&v95[-1].m128i_i64[1];
          if ( v95->m128i_i64[0] >= v97 )
          {
            a2 = (void **)v95;
          }
          else
          {
            do
            {
              v98[1] = (void *)v97;
              a2 = v98;
              v97 = (unsigned __int64)*--v98;
            }
            while ( (unsigned __int64)v96 < v97 );
          }
          v95 = (__m128i *)((char *)v95 + 8);
          *a2 = v96;
        }
        while ( v93 != (char *)v95 );
        goto LABEL_110;
      }
    }
    else
    {
      sub_49BAF0((__m128i *)src[0], (unsigned __int64 *)src[0] + (__int64)src[1], -2, 0.0, *(double *)a8.m128_u64, a9);
    }
    a2 = (void **)v93;
    sub_49B380(v91->m128i_i8, v93);
  }
LABEL_110:
  v99 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2392) + 40LL))(*(_QWORD *)(a1 + 2392));
  v101 = v99;
  v153 = 0;
  v154 = 0;
  if ( v99 )
  {
    v124 = 0;
    v153 = qvector_reserve(&v153, 0, v99, 8);
    memset((void *)(v153 + 8 * v154), 0, 8 * (v101 - v154));
    *(_QWORD *)&v154 = v101;
    do
    {
      a2 = (void **)v124;
      v130 = sub_4A0960(a1, v124, 0, (__m128)0LL, a8, a9, a10, v128, v129, a13, a14, v125, v126, v127);
      v100 = v153;
      *(_QWORD *)(v153 + 8 * v124++) = v130;
    }
    while ( v101 != v124 );
  }
  v102 = *v14;
  if ( *v14 )
  {
    v14[1] = nullptr;
    qfree(v102, (const char *)a2);
    *v14 = nullptr;
    v14[2] = nullptr;
  }
  v103 = (void **)src[1];
  LODWORD(i) = 0;
  v105 = (void ***)&v151;
  a7.m128_u64[0] = 0;
  v14[3] = (void **)-1LL;
  if ( v75 == (void **)-1LL )
    v105 = nullptr;
  v106 = (void **)v154;
  v155 = nullptr;
  v156 = 0;
  if ( v103 )
  {
    a2 = nullptr;
    v155 = (void *)qvector_reserve(&v155, 0, v103, 8);
    v91 = (__m128i *)v155;
    if ( !v14 )
      goto LABEL_148;
    v115 = *v14;
    if ( *v14 )
    {
      v14[1] = nullptr;
      *(double *)a7.m128_u64 = qfree(v115, nullptr, 0.0);
      *v14 = nullptr;
      v14[2] = nullptr;
    }
    else if ( v14[2] >= v103 )
    {
LABEL_148:
      v116 = 8 * (__int64)src[1];
      LODWORD(i) = v156;
      v108 = 8 * v156;
      v132 = (8 * (__int64)src[1]) >> 3;
      if ( v132 )
      {
        v117 = (char *)src[0];
        v118 = 0;
        if ( *((_QWORD *)&v156 + 1) < (unsigned __int64)(((8 * (__int64)src[1]) >> 3) + v156) )
        {
          v143 = 8 * (__int64)src[1];
          v141 = (char *)src[0];
          v155 = (void *)qvector_reserve(&v155, v91, ((8 * (__int64)src[1]) >> 3) + v156, 8);
          v91 = (__m128i *)v155;
          v116 = v143;
          v117 = v141;
          v118 = 8 * v156 - v108;
        }
        v119 = (void **)&v91->m128i_i64[(unsigned __int64)v108 / 8];
        v140 = v117;
        a2 = v119;
        v136 = v116;
        memmove((char *)v119 + v116, v119, v118);
        i = 0;
        if ( v136 )
        {
          do
          {
            v100 = *(_QWORD *)&v140[i];
            *(void **)((char *)v119 + i) = (void *)v100;
            i += 8;
          }
          while ( i != v136 );
        }
        *(_QWORD *)&v156 = v156 + v132;
        v91 = (__m128i *)v155;
        v108 = 8 * v156;
      }
LABEL_154:
      v109 = &v91->m128i_i8[v108];
      if ( v91 != (__m128i *)&v91->m128i_i8[v108] )
      {
        if ( v108 >> 3 )
        {
          _BitScanReverse64(&v120, v108 >> 3);
          v133 = (__m128i *)((char *)v91 + v108);
          sub_49BAF0(
            v91,
            &v91->m128i_u64[(unsigned __int64)v108 / 8],
            2LL * (int)v120,
            *(double *)a7.m128_u64,
            *(double *)a8.m128_u64,
            a9);
          v121 = &v91->m128i_i8[v108];
          if ( v108 > 128 )
          {
            v122 = v91 + 8;
            sub_49B380(v91->m128i_i8, v91[8].m128i_i8);
            do
            {
              a2 = (void **)v122->m128i_i64[0];
              v100 = v122[-1].m128i_u64[1];
              i = (__int64)&v122[-1].m128i_i64[1];
              if ( v122->m128i_i64[0] >= v100 )
              {
                m128i_i64 = v122->m128i_i64;
              }
              else
              {
                do
                {
                  *(_QWORD *)(i + 8) = v100;
                  m128i_i64 = (_QWORD *)i;
                  v100 = *(_QWORD *)(i - 8);
                  i -= 8;
                }
                while ( (unsigned __int64)a2 < v100 );
              }
              v122 = (__m128i *)((char *)v122 + 8);
              *m128i_i64 = a2;
            }
            while ( v133 != v122 );
            v109 = (__int8 *)v155;
            LOBYTE(v91) = v105 == nullptr;
LABEL_162:
            v14[3] = (void **)-1LL;
            if ( !v106 )
            {
LABEL_132:
              if ( v109 )
              {
                *(_QWORD *)&v156 = 0;
                *(double *)a7.m128_u64 = qfree(v109, (const char *)a2, *(double *)a7.m128_u64);
              }
              goto LABEL_134;
            }
LABEL_120:
            v110 = nullptr;
            v111 = 0;
            do
            {
              v100 = (unsigned int)v91 ^ 1;
              if ( !((unsigned __int8)v91 ^ 1 | (v111 < (unsigned __int64)v103)) )
                break;
              v100 = v153 + 8LL * (_QWORD)v110;
              a2 = *(void ***)v100;
              if ( !(_BYTE)v91 && *v105 == a2 )
              {
                v14[3] = v110;
                a2 = *(void ***)v100;
                LOBYTE(i) = (unsigned __int8)v91 ^ 1 | (v111 < (unsigned __int64)v103);
                LODWORD(v91) = i;
              }
              v112 = (void ***)v109;
              for ( i = (8 * (__int64)v156) >> 3; i > 0; i >>= 1 )
              {
                while ( 1 )
                {
                  v100 = i >> 1;
                  v113 = &v112[i >> 1];
                  if ( *v113 >= a2 )
                    break;
                  v112 = v113 + 1;
                  i = i - 1 - v100;
                  if ( i <= 0 )
                    goto LABEL_129;
                }
              }
LABEL_129:
              if ( &v109[8 * (_QWORD)v156] != (__int8 *)v112 && *v112 == a2 )
              {
                if ( v14 )
                {
                  i = (__int64)v14[1];
                  a2 = *v14;
                  v100 = i + 1;
                  if ( (unsigned __int64)v14[2] < i + 1 )
                  {
                    v131 = v111;
                    v114 = qvector_reserve(v14, a2, v100, 8);
                    *v14 = (void **)v114;
                    a2 = (void **)v114;
                    v111 = v131;
                    i = (__int64)v14[1];
                  }
                  a2[i] = v110;
                  v109 = (__int8 *)v155;
                  v14[1] = (void **)((char *)v14[1] + 1);
                }
                ++v111;
              }
              v110 = (void **)((char *)v110 + 1);
            }
            while ( v106 != v110 );
            goto LABEL_132;
          }
        }
        else
        {
          sub_49BAF0(
            v91,
            &v91->m128i_u64[(unsigned __int64)v108 / 8],
            -2,
            *(double *)a7.m128_u64,
            *(double *)a8.m128_u64,
            a9);
          v121 = &v91->m128i_i8[v108];
        }
        a2 = (void **)v121;
        sub_49B380(v91->m128i_i8, v121);
        v109 = (__int8 *)v155;
        LOBYTE(v91) = v105 == nullptr;
        goto LABEL_162;
      }
      LOBYTE(v91) = v105 == nullptr;
      goto LABEL_162;
    }
    a2 = nullptr;
    *v14 = (void **)qvector_reserve(v14, 0, v103, 8);
    v91 = (__m128i *)v155;
    goto LABEL_148;
  }
  if ( v14 )
  {
    v107 = *v14;
    if ( *v14 )
    {
      v14[1] = nullptr;
      *(double *)a7.m128_u64 = qfree(v107, (const char *)a2, 0.0);
      i = v156;
      *v14 = nullptr;
      v14[2] = nullptr;
      v91 = (__m128i *)v155;
      v108 = 8 * i;
      goto LABEL_154;
    }
  }
  v14[3] = (void **)-1LL;
  LOBYTE(v91) = v105 == nullptr;
  v109 = nullptr;
  if ( v106 )
    goto LABEL_120;
LABEL_134:
  if ( v153 )
  {
    *(_QWORD *)&v154 = 0;
    *(double *)a7.m128_u64 = qfree(v153, (const char *)a2, v100, v109, *(double *)a7.m128_u64);
  }
  if ( src[0] )
  {
    src[1] = nullptr;
    *(double *)a7.m128_u64 = qfree(src[0], (const char *)a2, v100, v109, *(double *)a7.m128_u64);
  }
LABEL_18:
  if ( (a4 & 4) == 0 )
  {
    v84 = (__m128i *)*v14;
    v85 = (__int64)v14[1];
    v86 = (unsigned __int64 *)&(*v14)[v85];
    if ( v84 != (__m128i *)v86 )
    {
      v87 = (v85 * 8) >> 3;
      v88 = -2;
      if ( v87 )
      {
        _BitScanReverse64(&v87, v87);
        v88 = 2LL * (int)v87;
      }
      sub_49B930(v84, v86, v88, *(double *)a7.m128_u64, *(double *)a8.m128_u64, a9);
      sub_49BFE0(v84->m128i_i8, (char *)v86);
    }
  }
}
