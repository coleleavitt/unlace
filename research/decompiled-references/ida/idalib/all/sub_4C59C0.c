unsigned __int64 __fastcall sub_4C59C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  char *v8; // rcx
  __int64 *v9; // r14
  int v10; // eax
  __int64 v11; // rdx
  char *v12; // rcx
  __int64 v13; // r12
  unsigned __int64 v14; // rcx
  int v15; // ebp
  __int64 v16; // r14
  unsigned __int64 v17; // r15
  __int64 v18; // r13
  unsigned __int32 v19; // esi
  __int64 *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int32 v25; // r10d
  __int64 v26; // r15
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  _QWORD *v29; // rdi
  char *v30; // rax
  __int64 v31; // rbx
  char *v32; // rax
  __m128i *v33; // r14
  __int64 v34; // r13
  __m128i *v35; // r12
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 m128i_i64; // r13
  __m128i **v39; // r13
  unsigned __int64 v40; // r9
  __m128i v41; // xmm3
  __m128i v42; // xmm2
  int v43; // edi
  __int64 v44; // rsi
  __m128i v45; // xmm1
  __int64 v46; // rax
  __int64 v47; // r9
  int v48; // r12d
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rax
  char *v52; // rax
  __int64 v53; // r15
  __int64 v54; // r14
  char *v55; // rbp
  char *v56; // rdi
  __int64 v57; // r12
  __int64 k; // r13
  char *v59; // rbx
  void *v60; // rdi
  void *v61; // rdi
  __int64 v63; // r13
  const __m128i *v64; // rbx
  __int64 v65; // rdx
  const __m128i *v66; // rax
  __int64 j; // rdx
  const __m128i *v68; // rcx
  __m128i *v69; // r8
  __m128i *v70; // rdi
  unsigned __int64 v71; // r10
  size_t v72; // r11
  unsigned __int64 v73; // r12
  unsigned __int64 v74; // rbx
  __int64 v75; // rdi
  __m128i si128; // xmm1
  __m128i v77; // xmm0
  __m128i v78; // xmm1
  __m128i *v79; // rax
  __m128i v80; // xmm0
  unsigned __int64 v81; // r13
  unsigned __int64 v82; // r12
  __int64 v83; // rbx
  _QWORD *v84; // rdi
  __int64 v85; // rbp
  __int64 i; // r15
  __int64 v87; // rdx
  const void *v88; // rbp
  void *v89; // rax
  __int64 v90; // rdx
  int v91; // eax
  __int64 v92; // rax
  __m128i *v93; // r12
  __m128i *v94; // rdi
  __int64 v95; // rcx
  __int64 v96; // rdi
  __int64 v97; // rax
  __int64 v98; // rax
  __m128i v99; // xmm0
  __int64 *v100; // rdi
  __m128i v101; // xmm0
  __int64 v102; // rsi
  __m128i *v103; // rax
  __m128i *v104; // rcx
  __m128i *v105; // rdi
  __int64 v106; // rsi
  __m128i v107; // xmm0
  __m128i v108; // xmm0
  __int64 v110; // [rsp+8h] [rbp-170h]
  int v111; // [rsp+8h] [rbp-170h]
  int v112; // [rsp+10h] [rbp-168h]
  __m128i *v113; // [rsp+10h] [rbp-168h]
  __m128i *v114; // [rsp+10h] [rbp-168h]
  __int64 v115; // [rsp+10h] [rbp-168h]
  int v116; // [rsp+18h] [rbp-160h]
  __int64 v117; // [rsp+18h] [rbp-160h]
  __int64 v118; // [rsp+18h] [rbp-160h]
  __m128i *v119; // [rsp+18h] [rbp-160h]
  unsigned __int64 v120; // [rsp+18h] [rbp-160h]
  __m128i *v121; // [rsp+18h] [rbp-160h]
  __int64 v122; // [rsp+18h] [rbp-160h]
  unsigned __int64 v123; // [rsp+18h] [rbp-160h]
  __int64 v124; // [rsp+18h] [rbp-160h]
  __int64 *v125; // [rsp+20h] [rbp-158h]
  __int64 v126; // [rsp+20h] [rbp-158h]
  __m128i *v127; // [rsp+20h] [rbp-158h]
  unsigned __int64 v128; // [rsp+28h] [rbp-150h]
  __int64 v129; // [rsp+28h] [rbp-150h]
  __int64 v130; // [rsp+28h] [rbp-150h]
  size_t v131; // [rsp+28h] [rbp-150h]
  __m128i *v132; // [rsp+28h] [rbp-150h]
  __int64 v133; // [rsp+38h] [rbp-140h]
  __m128i *v134; // [rsp+38h] [rbp-140h]
  __m128i *v135; // [rsp+40h] [rbp-138h]
  __m128i *v136; // [rsp+40h] [rbp-138h]
  __m128i *v137; // [rsp+48h] [rbp-130h]
  void *ptr; // [rsp+50h] [rbp-128h] BYREF
  __int128 v139; // [rsp+58h] [rbp-120h]
  _BYTE v140[24]; // [rsp+70h] [rbp-108h] BYREF
  __int64 v141; // [rsp+88h] [rbp-F0h]
  __int64 v142; // [rsp+90h] [rbp-E8h]
  __int128 v143; // [rsp+98h] [rbp-E0h]
  __int128 v144; // [rsp+A8h] [rbp-D0h]
  __m128i v145; // [rsp+B8h] [rbp-C0h] BYREF
  __int64 v146; // [rsp+C8h] [rbp-B0h]
  __m256i v147; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v148; // [rsp+F0h] [rbp-88h]
  __int128 v149; // [rsp+F8h] [rbp-80h]
  __int128 v150; // [rsp+108h] [rbp-70h]
  __m128i v151; // [rsp+118h] [rbp-60h] BYREF
  int v152; // [rsp+128h] [rbp-50h]
  __int64 v153; // [rsp+130h] [rbp-48h] BYREF
  unsigned __int64 v154; // [rsp+138h] [rbp-40h] BYREF

  v154 = __readfsqword(0x28u);
  v6 = a1[1];
  v139 = 0;
  ptr = nullptr;
  v112 = *(_DWORD *)(v6 + 28);
  if ( v112 )
  {
    memset(&v147, 0, 24);
    sub_4C1E00(&ptr, v112, &v147);
    v7 = 0;
    if ( v112 > 0 )
    {
      do
      {
        switch_dbctx(*(int *)(a1[1] + 4LL * (int)v7 + 16));
        sub_4C50E0((__int64)a1, (__int64)ptr + 24 * v7++);
      }
      while ( v112 != v7 );
    }
    v8 = (char *)ptr;
  }
  else
  {
    v8 = nullptr;
  }
  v9 = &v153;
  v153 = 0x100000000LL;
  v10 = 0;
  while ( 1 )
  {
    v11 = *(int *)v9;
    v12 = &v8[24 * v11];
    v13 = *(_QWORD *)v12;
    v14 = *((_QWORD *)v12 + 1);
    if ( v13 != v13 + 96 * v14 )
    {
      v15 = v11 + 1;
      v125 = v9;
      v16 = v13 + 96 * v14;
      v110 = 24LL * ((int)v11 + 1);
      v17 = 24 * ((int)v11 + 1 + (unsigned __int64)(unsigned int)(v112 - 2 - v11) + 1);
      do
      {
        while ( *(_DWORD *)(v13 + 88) != -1 )
        {
          v13 += 96;
          if ( v16 == v13 )
            goto LABEL_24;
        }
        *(_DWORD *)(v13 + 88) = v10;
        v116 = v10 + 1;
        if ( v112 > v15 )
        {
          v18 = v110;
          do
          {
            a5 = *(_QWORD *)(v13 + 72);
            v19 = *(_DWORD *)(v13 + 80);
            memset(&v147, 0, 24);
            v147.m256i_i64[3] = -1;
            v20 = (__int64 *)((char *)ptr + v18);
            v148 = 0;
            v152 = -1;
            v151.m128i_i64[0] = a5;
            v151.m128i_i32[2] = v19;
            v149 = 0;
            v150 = 0;
            if ( v19 )
            {
              v21 = *v20;
              v22 = 96 * v20[1];
              a6 = v21 + v22;
              v23 = 0xAAAAAAAAAAAAAAABLL * (v22 >> 5);
              if ( v22 > 0 )
              {
                do
                {
                  while ( 1 )
                  {
                    v14 = v23 >> 1;
                    v24 = v21 + 32 * ((v23 >> 1) + (v23 & 0xFFFFFFFFFFFFFFFELL));
                    v25 = *(_DWORD *)(v24 + 80);
                    if ( v25 < v19 || v19 >= v25 && *(_QWORD *)(v24 + 72) < a5 )
                      break;
                    v23 >>= 1;
                    if ( (__int64)v14 <= 0 )
                      goto LABEL_20;
                  }
                  v21 = v24 + 96;
                  v23 = v23 - 1 - v14;
                }
                while ( v23 > 0 );
              }
LABEL_20:
              if ( a6 != v21 && v19 == *(_DWORD *)(v21 + 80) && a5 == *(_QWORD *)(v21 + 72) )
                *(_DWORD *)(v21 + 88) = *(_DWORD *)(v13 + 88);
            }
            else
            {
              sub_4BED10(&v147);
            }
            v18 += 24;
          }
          while ( v17 != v18 );
        }
        v13 += 96;
        v10 = v116;
      }
      while ( v16 != v13 );
LABEL_24:
      v9 = v125;
    }
    v9 = (__int64 *)((char *)v9 + 4);
    if ( &v154 == (unsigned __int64 *)v9 )
      break;
    v8 = (char *)ptr;
  }
  v26 = v112;
  v111 = v10;
  if ( v112 == 3 )
  {
    v30 = (char *)ptr;
    v90 = *((_QWORD *)ptr + 6);
    v14 = v90 + 96LL * *((_QWORD *)ptr + 7);
    if ( v14 == v90 )
    {
      v27 = a1[23];
      if ( v27 == 3 )
        goto LABEL_37;
    }
    else
    {
      v91 = v111;
      do
      {
        if ( *(_DWORD *)(v90 + 88) == -1 )
          *(_DWORD *)(v90 + 88) = v91++;
        v90 += 96;
      }
      while ( v90 != v14 );
      v111 = v91;
      v27 = a1[23];
      v30 = (char *)ptr;
      if ( v27 == 3 )
        goto LABEL_37;
    }
  }
  else
  {
    v27 = a1[23];
    if ( v112 == v27 )
      goto LABEL_36;
  }
  memset(v140, 0, sizeof(v140));
  if ( v112 < v27 )
  {
    v81 = v112;
    v82 = v27;
    do
    {
      v83 = a1[22] + 24 * v81;
      v84 = *(_QWORD **)v83;
      if ( *(_QWORD *)v83 )
      {
        v85 = *(_QWORD *)(v83 + 8);
        if ( v85 )
        {
          for ( i = 0; i != v85; ++i )
          {
            v87 = 3 * i;
            sub_4BED10(&v84[4 * v87]);
            v84 = *(_QWORD **)v83;
          }
        }
        *(_QWORD *)(v83 + 8) = 0;
        qfree(v84);
      }
      ++v81;
    }
    while ( v81 < v82 );
    v26 = v112;
    a1[23] = v112;
  }
  else
  {
    v28 = a1[22];
    v29 = a1 + 22;
    if ( (unsigned __int64)v140 < v28 || (unsigned __int64)v140 >= v28 + 24LL * a1[24] )
    {
      sub_4C1E00(v29, v112, v140);
    }
    else
    {
      memset(&v147, 0, 24);
      sub_4C1E00(v29, v112, &v147);
    }
  }
LABEL_36:
  a5 = (unsigned int)v112;
  v30 = (char *)ptr;
  if ( v112 > 0 )
  {
LABEL_37:
    v31 = 0;
    while ( 1 )
    {
      v32 = &v30[v31];
      v33 = *(__m128i **)v32;
      v34 = 96LL * *((_QWORD *)v32 + 1);
      v35 = (__m128i *)(*(_QWORD *)v32 + v34);
      if ( *(__m128i **)v32 == v35 )
        goto LABEL_43;
      v36 = 0xAAAAAAAAAAAAAAABLL * (v34 >> 5);
      if ( !v36 )
        break;
      _BitScanReverse64(&v37, v36);
      sub_4C55A0((__int64)v33, (__int64)v35, 2LL * (int)v37, v14, a5, a6);
      if ( v34 <= 1536 )
        goto LABEL_54;
      m128i_i64 = (__int64)v33[96].m128i_i64;
      sub_4C0210(v33, v33 + 96);
      do
      {
        sub_4BFBD0(m128i_i64);
        m128i_i64 += 96;
      }
      while ( v35 != (__m128i *)m128i_i64 );
LABEL_43:
      v39 = (__m128i **)(v31 + a1[22]);
      v14 = (unsigned __int64)v39[1];
      if ( v111 == v14 )
        goto LABEL_51;
      memset(v140, 0, sizeof(v140));
      v141 = -1;
      v142 = 0;
      v145 = (__m128i)0xFFFFFFFFFFFFFFFELL;
      v146 = 0xFFFFFFFFLL;
      v143 = 0;
      v144 = 0;
      if ( v111 < v14 )
      {
        v118 = v31;
        v73 = v14;
        v74 = v111;
        do
        {
          v75 = 3 * v74++;
          sub_4BED10((__m128i *)(*v39)[2 * v75].m128i_i64);
        }
        while ( v74 < v73 );
        v39[1] = (__m128i *)v111;
        v31 = v118;
LABEL_94:
        sub_4BED10(v140);
        goto LABEL_51;
      }
      v40 = (unsigned __int64)v39[2];
      if ( v140 >= (_BYTE *)*v39 && v140 < (*v39)[6 * v40].m128i_i8 )
      {
        si128 = _mm_load_si128((const __m128i *)v140);
        v150 = 0;
        v77 = _mm_loadu_si128(&v145);
        v149 = 0u;
        *(__m128i *)v147.m256i_i8 = si128;
        v78 = _mm_load_si128((const __m128i *)&v140[16]);
        LODWORD(v148) = v142;
        v152 = -1;
        *(__m128i *)&v147.m256i_u64[2] = v78;
        v151 = v77;
        if ( v40 < v111 )
        {
          v123 = v40;
          v103 = (__m128i *)qvector_reserve(v39, 0, v111, 96);
          v132 = v103;
          v104 = *v39;
          v134 = v39[2];
          v105 = v39[1];
          v39[2] = (__m128i *)v123;
          v124 = (__int64)&v105[-1].m128i_i64[1] + 7;
          if ( (__int64)&v105[-1].m128i_i64[1] + 7 >= 0 )
          {
            do
            {
              v103[1].m128i_i64[0] = 0;
              v103[1].m128i_i32[2] = -1;
              v103[1].m128i_i32[3] = -1;
              v103[2].m128i_i32[0] = 0;
              v103[2].m128i_i64[1] = 0;
              *v103 = 0;
              v137 = v104;
              v136 = v103;
              sub_4B50E0(v103, v104);
              v106 = v137[3].m128i_i64[0];
              v107 = _mm_loadu_si128((__m128i *)((char *)v137 + 56));
              v137[3].m128i_i64[0] = 0;
              *(__m128i *)((char *)v136 + 56) = v107;
              v136[3].m128i_i64[0] = v106;
              LODWORD(v106) = v137[5].m128i_i32[2];
              *(__m128i *)((char *)&v137[3] + 8) = 0;
              v108 = _mm_loadu_si128((__m128i *)((char *)v137 + 72));
              v136[5].m128i_i32[2] = v106;
              *(__m128i *)((char *)v136 + 72) = v108;
              sub_4BED10(v137);
              --v124;
              v104 = v137 + 6;
              v103 = v136 + 6;
            }
            while ( v124 != -1 );
            v104 = *v39;
          }
          qfree(v104);
          v14 = (unsigned __int64)v39[1];
          *v39 = v132;
          v39[2] = v134;
        }
        if ( v14 < v111 )
        {
          do
          {
            v128 = v14;
            v79 = &(*v39)[6 * v14];
            v79[1].m128i_i64[0] = 0;
            v79[1].m128i_i64[1] = -1;
            v79[2].m128i_i64[0] = 0;
            v79[2].m128i_i64[1] = 0;
            *v79 = 0;
            v119 = v79;
            sub_4B50E0(v79, (const __m128i *)&v147);
            *(__m128i *)((char *)&v119[3] + 8) = 0;
            v14 = v128 + 1;
            v80 = _mm_loadu_si128(&v151);
            v119[3].m128i_i64[0] = 0;
            v119[5].m128i_i32[2] = -1;
            *(__m128i *)((char *)v119 + 72) = v80;
          }
          while ( v128 + 1 < v111 );
        }
        v39[1] = (__m128i *)v111;
        sub_4BED10(&v147);
        goto LABEL_94;
      }
      if ( v40 < v111 )
      {
        v121 = v39[2];
        v92 = qvector_reserve(v39, 0, v111, 96);
        v133 = v92;
        v93 = *v39;
        v135 = v39[2];
        v94 = v39[1];
        v39[2] = v121;
        v122 = (__int64)&v94[-1].m128i_i64[1] + 7;
        if ( (__int64)&v94[-1].m128i_i64[1] + 7 >= 0 )
        {
          v95 = v92;
          do
          {
            *(_QWORD *)(v95 + 16) = 0;
            *(_DWORD *)(v95 + 24) = -1;
            *(_QWORD *)(v95 + 28) = 0xFFFFFFFFLL;
            *(_QWORD *)(v95 + 40) = 0;
            *(_OWORD *)v95 = 0;
            if ( (__m128i *)v95 != v93 )
            {
              *(__m128i *)v95 = _mm_loadu_si128(v93);
              *(__m128i *)(v95 + 16) = _mm_loadu_si128(v93 + 1);
              *(_DWORD *)(v95 + 32) = v93[2].m128i_i32[0];
              v96 = v93[2].m128i_i64[1];
              if ( v96 )
              {
                v129 = v95;
                v97 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v96 + 16LL))(v96);
                v95 = v129;
                *(_QWORD *)(v129 + 40) = v97;
              }
            }
            v98 = v93[3].m128i_i64[0];
            v99 = _mm_loadu_si128((__m128i *)((char *)v93 + 56));
            v100 = (__int64 *)v93;
            v93[3].m128i_i64[0] = 0;
            v130 = v95;
            v93 += 6;
            *(__m128i *)(v95 + 56) = v99;
            *(_QWORD *)(v95 + 48) = v98;
            LODWORD(v98) = v93[-1].m128i_i32[2];
            *(__m128i *)((char *)&v93[-3] + 8) = 0;
            v101 = _mm_loadu_si128((__m128i *)((char *)v93 - 24));
            *(_DWORD *)(v95 + 88) = v98;
            *(__m128i *)(v95 + 72) = v101;
            sub_4BED10(v100);
            --v122;
            v95 = v130 + 96;
          }
          while ( v122 != -1 );
          v93 = *v39;
        }
        qfree(v93);
        v14 = (unsigned __int64)v39[1];
        *v39 = (__m128i *)v133;
        v39[2] = v135;
      }
      if ( v14 < v111 )
      {
        v41 = _mm_load_si128((const __m128i *)v140);
        v42 = _mm_load_si128((const __m128i *)&v140[16]);
        v43 = v142;
        v44 = 6 * v14;
        v45 = _mm_loadu_si128(&v145);
        do
        {
          ++v14;
          v46 = (__int64)(*v39)[v44].m128i_i64;
          v44 += 6;
          *(_QWORD *)(v46 + 40) = 0;
          *(_DWORD *)(v46 + 32) = v43;
          *(_QWORD *)(v46 + 48) = 0;
          *(_DWORD *)(v46 + 88) = -1;
          *(__m128i *)v46 = v41;
          *(__m128i *)(v46 + 16) = v42;
          *(_OWORD *)(v46 + 56) = 0;
          *(__m128i *)(v46 + 72) = v45;
        }
        while ( v111 != v14 );
      }
      v39[1] = (__m128i *)v111;
      sub_4BED10(v140);
LABEL_51:
      v31 += 24;
      if ( 24 * v26 == v31 )
        goto LABEL_55;
      v30 = (char *)ptr;
    }
    sub_4C55A0((__int64)v33, (__int64)v35, -2, v14, a5, a6);
LABEL_54:
    sub_4C0210(v33, v35);
    goto LABEL_43;
  }
LABEL_55:
  v47 = 0;
  v48 = 0;
  memset(&v147, 0, 24);
  v147.m256i_i64[3] = -1;
  v148 = 0;
  v151.m128i_i64[0] = -2;
  v151.m128i_i32[2] = 0;
  v152 = -1;
  v149 = 0;
  v150 = 0;
  if ( v111 > 0 )
  {
    while ( 1 )
    {
      v152 = v48;
      if ( v112 > 0 )
        break;
      ++v48;
      v47 += 96;
      if ( v48 == v111 )
        goto LABEL_58;
    }
    while ( 1 )
    {
      v63 = 0;
      do
      {
        v64 = *(const __m128i **)((char *)ptr + v63);
        v65 = 6LL * *(_QWORD *)((char *)ptr + v63 + 8);
        v66 = &v64[v65];
        for ( j = 0xAAAAAAAAAAAAAAABLL * ((v65 * 16) >> 5); j > 0; j >>= 1 )
        {
          while ( 1 )
          {
            v68 = &v64[2 * (j >> 1) + 2 * (j & 0xFFFFFFFFFFFFFFFELL)];
            if ( v68[5].m128i_i32[2] >= v48 )
              break;
            v64 = v68 + 6;
            j = j - 1 - (j >> 1);
            if ( j <= 0 )
              goto LABEL_80;
          }
        }
LABEL_80:
        if ( v66 != v64 && v64[5].m128i_i32[2] == v48 )
        {
          v117 = v47;
          v113 = (__m128i *)(*(_QWORD *)(a1[22] + v63) + v47);
          sub_4B50E0(v113, v64);
          v69 = v113;
          v47 = v117;
          v70 = v113 + 3;
          if ( &v113[3] != &v64[3] )
          {
            v71 = v64[3].m128i_u64[1];
            if ( v71 && (v72 = v71 - 1, v71 != 1) )
            {
              v88 = (const void *)v64[3].m128i_i64[0];
              v89 = (void *)v113[3].m128i_i64[0];
              if ( v113[4].m128i_i64[0] < v71 )
              {
                v102 = v113[3].m128i_i64[0];
                v131 = v71 - 1;
                v127 = v113;
                v115 = v64[3].m128i_i64[1];
                v89 = (void *)qvector_reserve(v70, v102, v115, 1);
                v69 = v127;
                v72 = v131;
                v47 = v117;
                v71 = v115;
                v127[3].m128i_i64[0] = (__int64)v89;
              }
              v69[3].m128i_i64[1] = v71;
              v126 = v47;
              v120 = v71;
              v114 = v69;
              memmove(v89, v88, v72);
              v69 = v114;
              v47 = v126;
              *(_BYTE *)(v114[3].m128i_i64[0] + v120 - 1) = 0;
            }
            else
            {
              v113[3].m128i_i64[1] = 0;
            }
          }
          v69[4].m128i_i64[1] = v64[4].m128i_i64[1];
          v69[5].m128i_i32[0] = v64[5].m128i_i32[0];
          v69[5].m128i_i32[2] = v64[5].m128i_i32[2];
        }
        v63 += 24;
      }
      while ( 24 * v26 != v63 );
      ++v48;
      v47 += 96;
      if ( v111 == v48 )
        break;
      v152 = v48;
    }
  }
LABEL_58:
  v49 = a1[8];
  v50 = a1[9];
  v51 = a1[22];
  *(_QWORD *)(a1[7] + 40LL) = v51;
  *(_QWORD *)(v49 + 40) = v51 + 24;
  if ( v50 )
    *(_QWORD *)(v50 + 40) = a1[22] + 48LL;
  sub_4BED10(&v147);
  v52 = (char *)ptr;
  if ( ptr )
  {
    v53 = v139;
    if ( (_QWORD)v139 )
    {
      v54 = 0;
      do
      {
        v55 = &v52[24 * v54];
        v56 = *(char **)v55;
        if ( *(_QWORD *)v55 )
        {
          v57 = *((_QWORD *)v55 + 1);
          if ( v57 )
          {
            for ( k = 0; k != v57; ++k )
            {
              v59 = &v56[96 * k];
              v60 = *((void **)v59 + 6);
              if ( v60 )
              {
                *((_QWORD *)v59 + 7) = 0;
                qfree(v60);
              }
              v61 = *((void **)v59 + 5);
              if ( v61 )
                qfree(v61);
              v56 = *(char **)v55;
            }
          }
          *((_QWORD *)v55 + 1) = 0;
          qfree(v56);
          v52 = (char *)ptr;
        }
        ++v54;
      }
      while ( v53 != v54 );
    }
    *(_QWORD *)&v139 = 0;
    qfree(v52);
  }
  return v154 - __readfsqword(0x28u);
}
