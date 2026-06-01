unsigned __int64 __fastcall sub_4C3AC0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  char *v8; // rdx
  __int64 *v9; // r14
  int v10; // eax
  __int64 v11; // r8
  char *v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rdx
  int v15; // r13d
  __int64 v16; // r14
  __int64 v17; // rbx
  unsigned __int64 v18; // r12
  __int64 v19; // r15
  unsigned __int64 v20; // rdi
  __int64 *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 i; // rax
  __int64 v26; // rdx
  _QWORD *v27; // r15
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  _QWORD *v30; // rdi
  char *v31; // rax
  __int64 v32; // rbx
  char *v33; // rax
  __m128i *v34; // rbp
  __int64 v35; // r13
  __m128i *v36; // r12
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 m128i_i64; // r13
  __m128i **v40; // rbp
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // r10
  __m128i v43; // xmm2
  __m128i v44; // xmm1
  int v45; // edi
  __int64 v46; // rsi
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // r8
  int v50; // ebp
  __int64 v51; // r13
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  char *v55; // rax
  __int64 k; // r14
  char *v57; // rbp
  char *v58; // rdi
  __int64 v59; // r12
  __int64 v60; // r13
  __int64 m; // r15
  char *v62; // rbx
  void *v63; // rdi
  void *v64; // rdi
  __int64 v66; // r12
  const __m128i *v67; // rbx
  __int64 v68; // rax
  const __m128i *v69; // rcx
  __int64 j; // rax
  __int8 *v71; // rsi
  __m128i *v72; // r9
  __m128i *v73; // rdi
  unsigned __int64 v74; // r10
  size_t v75; // r11
  unsigned __int64 v76; // r13
  unsigned __int64 v77; // rbx
  __int64 v78; // r12
  __int64 *v79; // rdi
  __m128i si128; // xmm1
  __m128i v81; // xmm1
  __int64 v82; // rcx
  __m128i *v83; // rax
  __int64 v84; // rsi
  unsigned __int64 v85; // r12
  __int64 v86; // rbx
  char *v87; // rdi
  __int64 v88; // rbp
  __int64 v89; // r13
  __int64 v90; // r14
  char *v91; // rdi
  void *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  int v95; // eax
  __int64 v96; // rax
  __m128i *v97; // r12
  __m128i *v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rdi
  __int64 v101; // rax
  __int64 v102; // rax
  __m128i v103; // xmm0
  __int64 *v104; // rdi
  __int64 v105; // rax
  __int64 v106; // rax
  __m128i *v107; // rdx
  __m128i *v108; // rcx
  __int64 v109; // rcx
  __m128i v110; // xmm0
  __int64 v111; // rcx
  __int64 v112; // [rsp+0h] [rbp-178h]
  int v113; // [rsp+0h] [rbp-178h]
  __int64 v114; // [rsp+0h] [rbp-178h]
  int src; // [rsp+8h] [rbp-170h]
  __m128i *srca; // [rsp+8h] [rbp-170h]
  void *srcb; // [rsp+8h] [rbp-170h]
  __int64 v118; // [rsp+10h] [rbp-168h]
  __m128i *v119; // [rsp+10h] [rbp-168h]
  __int64 v120; // [rsp+10h] [rbp-168h]
  int v121; // [rsp+18h] [rbp-160h]
  __int64 v122; // [rsp+18h] [rbp-160h]
  __m128i *v123; // [rsp+18h] [rbp-160h]
  unsigned __int64 v124; // [rsp+18h] [rbp-160h]
  unsigned __int64 v125; // [rsp+18h] [rbp-160h]
  __m128i *v126; // [rsp+18h] [rbp-160h]
  __int64 v127; // [rsp+18h] [rbp-160h]
  __int64 v128; // [rsp+18h] [rbp-160h]
  unsigned __int64 v129; // [rsp+18h] [rbp-160h]
  __int64 v130; // [rsp+18h] [rbp-160h]
  __int64 *v131; // [rsp+20h] [rbp-158h]
  __int64 v132; // [rsp+20h] [rbp-158h]
  __m128i *v133; // [rsp+20h] [rbp-158h]
  __int64 v134; // [rsp+28h] [rbp-150h]
  __int64 v135; // [rsp+28h] [rbp-150h]
  __int64 v136; // [rsp+28h] [rbp-150h]
  size_t v137; // [rsp+28h] [rbp-150h]
  __int64 v138; // [rsp+28h] [rbp-150h]
  unsigned __int64 v140; // [rsp+30h] [rbp-148h]
  __int64 v141; // [rsp+38h] [rbp-140h]
  __m128i *v142; // [rsp+38h] [rbp-140h]
  __m128i *v143; // [rsp+40h] [rbp-138h]
  __int64 v144; // [rsp+40h] [rbp-138h]
  __m128i *v145; // [rsp+48h] [rbp-130h]
  void *ptr; // [rsp+50h] [rbp-128h] BYREF
  __int128 v147; // [rsp+58h] [rbp-120h]
  _BYTE v148[24]; // [rsp+70h] [rbp-108h] BYREF
  __int64 v149; // [rsp+88h] [rbp-F0h]
  __int64 v150; // [rsp+90h] [rbp-E8h]
  __int128 v151; // [rsp+98h] [rbp-E0h]
  __int128 v152; // [rsp+A8h] [rbp-D0h]
  __int64 v153; // [rsp+B8h] [rbp-C0h]
  __int64 v154; // [rsp+C0h] [rbp-B8h]
  __m256i v155; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v156; // [rsp+F0h] [rbp-88h]
  __int128 v157; // [rsp+F8h] [rbp-80h]
  __int128 v158; // [rsp+108h] [rbp-70h]
  __int64 v159; // [rsp+118h] [rbp-60h]
  int v160; // [rsp+120h] [rbp-58h]
  __int64 v161; // [rsp+130h] [rbp-48h] BYREF
  unsigned __int64 v162; // [rsp+138h] [rbp-40h] BYREF

  v6 = a1[1];
  v162 = __readfsqword(0x28u);
  v147 = 0;
  ptr = nullptr;
  src = *(_DWORD *)(v6 + 28);
  if ( src )
  {
    memset(&v155, 0, 24);
    sub_4C1C00(&ptr, src, &v155);
    v7 = 0;
    if ( src > 0 )
    {
      do
      {
        switch_dbctx(*(int *)(a1[1] + 4LL * (int)v7 + 16));
        sub_4C31A0((__int64)a1, (__int64)ptr + 24 * v7++);
      }
      while ( src != v7 );
    }
    v8 = (char *)ptr;
  }
  else
  {
    v8 = nullptr;
  }
  v9 = &v161;
  v161 = 0x100000000LL;
  v10 = 0;
  while ( 1 )
  {
    v11 = *(int *)v9;
    v12 = &v8[24 * v11];
    v13 = *(_QWORD *)v12;
    v14 = *(_QWORD *)v12 + 88LL * *((_QWORD *)v12 + 1);
    if ( v13 != v14 )
    {
      v15 = v11 + 1;
      v131 = v9;
      v16 = v14;
      v112 = 24LL * ((int)v11 + 1);
      v17 = v13;
      v18 = 24 * ((int)v11 + 1 + (unsigned __int64)(unsigned int)(src - 2 - v11) + 1);
      do
      {
        while ( *(_DWORD *)(v17 + 80) != -1 )
        {
          v17 += 88;
          if ( v16 == v17 )
            goto LABEL_22;
        }
        *(_DWORD *)(v17 + 80) = v10;
        v121 = v10 + 1;
        if ( src > v15 )
        {
          v19 = v112;
          do
          {
            v20 = *(_QWORD *)(v17 + 72);
            memset(&v155, 0, 24);
            v155.m256i_i64[3] = -1;
            v21 = (__int64 *)((char *)ptr + v19);
            v156 = 0;
            v160 = -1;
            v159 = v20;
            v157 = 0;
            v158 = 0;
            if ( v20 == -1 )
            {
              sub_4C0590(&v155);
            }
            else
            {
              v22 = *v21;
              v23 = 88 * v21[1];
              v24 = v22 + v23;
              for ( i = 0x2E8BA2E8BA2E8BA3LL * (v23 >> 3); i > 0; i = i - 1 - v26 )
              {
                while ( 1 )
                {
                  v26 = i >> 1;
                  v11 = v22 + 88 * (i >> 1);
                  if ( *(_QWORD *)(v11 + 72) < v20 )
                    break;
                  i >>= 1;
                  if ( v26 <= 0 )
                    goto LABEL_17;
                }
                v22 = v11 + 88;
              }
LABEL_17:
              if ( v24 != v22 && *(_QWORD *)(v22 + 72) == v20 )
                *(_DWORD *)(v22 + 80) = *(_DWORD *)(v17 + 80);
            }
            v19 += 24;
          }
          while ( v18 != v19 );
        }
        v17 += 88;
        v10 = v121;
      }
      while ( v16 != v17 );
LABEL_22:
      v9 = v131;
    }
    v9 = (__int64 *)((char *)v9 + 4);
    if ( v9 == (__int64 *)&v162 )
      break;
    v8 = (char *)ptr;
  }
  v27 = a1;
  v113 = v10;
  if ( src == 3 )
  {
    v31 = (char *)ptr;
    v93 = *((_QWORD *)ptr + 6);
    v94 = v93 + 88LL * *((_QWORD *)ptr + 7);
    if ( v94 == v93 )
    {
      v28 = a1[23];
      if ( v28 == 3 )
        goto LABEL_34;
    }
    else
    {
      v95 = v113;
      do
      {
        if ( *(_DWORD *)(v93 + 80) == -1 )
          *(_DWORD *)(v93 + 80) = v95++;
        v93 += 88;
      }
      while ( v93 != v94 );
      v28 = a1[23];
      v113 = v95;
      v31 = (char *)ptr;
      if ( v28 == 3 )
        goto LABEL_34;
    }
  }
  else
  {
    v28 = a1[23];
    if ( src == v28 )
      goto LABEL_33;
  }
  memset(v148, 0, sizeof(v148));
  if ( src < v28 )
  {
    v124 = v28;
    v85 = src;
    do
    {
      v86 = a1[22] + 24 * v85;
      v87 = *(char **)v86;
      if ( *(_QWORD *)v86 )
      {
        v88 = *(_QWORD *)(v86 + 8);
        if ( v88 )
        {
          v89 = 0;
          v90 = 0;
          do
          {
            v91 = &v87[v89];
            ++v90;
            v89 += 88;
            sub_4C0590(v91);
            v87 = *(char **)v86;
          }
          while ( v88 != v90 );
        }
        *(_QWORD *)(v86 + 8) = 0;
        qfree(v87);
      }
      ++v85;
    }
    while ( v85 < v124 );
    a1[23] = src;
  }
  else
  {
    v29 = a1[22];
    v30 = a1 + 22;
    if ( (unsigned __int64)v148 < v29 || (unsigned __int64)v148 >= v29 + 24LL * a1[24] )
    {
      sub_4C1C00(v30, src, v148);
    }
    else
    {
      memset(&v155, 0, 24);
      sub_4C1C00(v30, src, &v155);
    }
  }
LABEL_33:
  v11 = (unsigned int)src;
  v31 = (char *)ptr;
  if ( src > 0 )
  {
LABEL_34:
    v32 = 0;
    while ( 1 )
    {
      v33 = &v31[v32];
      v34 = *(__m128i **)v33;
      v35 = 88LL * *((_QWORD *)v33 + 1);
      v36 = (__m128i *)(*(_QWORD *)v33 + v35);
      if ( *(__m128i **)v33 == v36 )
        goto LABEL_40;
      v37 = 0x2E8BA2E8BA2E8BA3LL * (v35 >> 3);
      if ( !v37 )
        break;
      _BitScanReverse64(&v38, v37);
      sub_4C36A0((__int64)v34, (__int64)v36, 2LL * (int)v38, 0x2E8BA2E8BA2E8BA3LL, v11, a6);
      if ( v35 <= 1408 )
        goto LABEL_51;
      m128i_i64 = (__int64)v34[88].m128i_i64;
      sub_4C1890(v34, v34 + 88);
      do
      {
        sub_4C12A0(m128i_i64);
        m128i_i64 += 88;
      }
      while ( v36 != (__m128i *)m128i_i64 );
LABEL_40:
      v40 = (__m128i **)(v32 + v27[22]);
      v41 = (unsigned __int64)v40[1];
      if ( v113 == v41 )
        goto LABEL_48;
      memset(v148, 0, sizeof(v148));
      v149 = -1;
      v150 = 0;
      v153 = -1;
      v154 = 0xFFFFFFFFLL;
      v151 = 0;
      v152 = 0;
      if ( v113 < v41 )
      {
        v122 = v32;
        v76 = v113;
        v77 = v41;
        v78 = 11LL * v113;
        do
        {
          ++v76;
          v79 = &(*v40)->m128i_i64[v78];
          v78 += 11;
          sub_4C0590(v79);
        }
        while ( v76 < v77 );
        v40[1] = (__m128i *)v113;
        v32 = v122;
LABEL_92:
        sub_4C0590(v148);
        goto LABEL_48;
      }
      v42 = (unsigned __int64)v40[2];
      if ( v148 >= (_BYTE *)*v40 && v148 < &(*v40)->m128i_i8[88 * v42] )
      {
        si128 = _mm_load_si128((const __m128i *)v148);
        v157 = 0u;
        *(__m128i *)v155.m256i_i8 = si128;
        v81 = _mm_load_si128((const __m128i *)&v148[16]);
        LODWORD(v156) = v150;
        v159 = -1;
        v160 = -1;
        *(__m128i *)&v155.m256i_u64[2] = v81;
        v158 = 0;
        if ( v42 < v113 )
        {
          v129 = v42;
          v106 = qvector_reserve(v40, 0, v113, 88);
          v138 = v106;
          v107 = *v40;
          v142 = v40[2];
          v108 = v40[1];
          v40[2] = (__m128i *)v129;
          v130 = (__int64)&v108[-1].m128i_i64[1] + 7;
          if ( (__int64)&v108[-1].m128i_i64[1] + 7 >= 0 )
          {
            do
            {
              *(_QWORD *)(v106 + 16) = 0;
              *(_OWORD *)v106 = 0;
              *(_DWORD *)(v106 + 24) = -1;
              *(_QWORD *)(v106 + 28) = 0xFFFFFFFFLL;
              *(_QWORD *)(v106 + 40) = 0;
              v145 = v107;
              v144 = v106;
              sub_4B50E0((__m128i *)v106, v107);
              v109 = v145[3].m128i_i64[0];
              v110 = _mm_loadu_si128((__m128i *)((char *)v145 + 56));
              v145[3].m128i_i64[0] = 0;
              *(__m128i *)(v144 + 56) = v110;
              *(_QWORD *)(v144 + 48) = v109;
              v111 = v145[4].m128i_i64[1];
              *(__m128i *)((char *)&v145[3] + 8) = 0;
              *(_QWORD *)(v144 + 72) = v111;
              *(_DWORD *)(v144 + 80) = v145[5].m128i_i32[0];
              sub_4C0590(v145);
              --v130;
              v107 = (__m128i *)((char *)v145 + 88);
              v106 = v144 + 88;
            }
            while ( v130 != -1 );
            v107 = *v40;
          }
          qfree(v107);
          v41 = (unsigned __int64)v40[1];
          *v40 = (__m128i *)v138;
          v40[2] = v142;
        }
        if ( v41 < v113 )
        {
          v82 = 88 * v41;
          do
          {
            v83 = (__m128i *)((char *)*v40 + v82);
            v83[1].m128i_i64[0] = 0;
            v83[1].m128i_i64[1] = -1;
            v83[2].m128i_i64[0] = 0;
            v83[2].m128i_i64[1] = 0;
            *v83 = 0;
            v140 = v41;
            v134 = v82;
            v123 = v83;
            sub_4B50E0(v83, (const __m128i *)&v155);
            v84 = v159;
            v41 = v140 + 1;
            v123[3].m128i_i64[0] = 0;
            v123[4].m128i_i64[1] = v84;
            v82 = v134 + 88;
            v123[5].m128i_i32[0] = -1;
            *(__m128i *)((char *)&v123[3] + 8) = 0;
          }
          while ( v140 + 1 < v113 );
        }
        v40[1] = (__m128i *)v113;
        sub_4C0590(&v155);
        goto LABEL_92;
      }
      if ( v42 < v113 )
      {
        v126 = v40[2];
        v96 = qvector_reserve(v40, 0, v113, 88);
        v141 = v96;
        v97 = *v40;
        v143 = v40[2];
        v98 = v40[1];
        v40[2] = v126;
        v127 = (__int64)&v98[-1].m128i_i64[1] + 7;
        if ( (__int64)&v98[-1].m128i_i64[1] + 7 >= 0 )
        {
          v99 = v96;
          do
          {
            *(_QWORD *)(v99 + 16) = 0;
            *(_DWORD *)(v99 + 24) = -1;
            *(_QWORD *)(v99 + 28) = 0xFFFFFFFFLL;
            *(_QWORD *)(v99 + 40) = 0;
            *(_OWORD *)v99 = 0;
            if ( (__m128i *)v99 != v97 )
            {
              *(__m128i *)v99 = _mm_loadu_si128(v97);
              *(__m128i *)(v99 + 16) = _mm_loadu_si128(v97 + 1);
              *(_DWORD *)(v99 + 32) = v97[2].m128i_i32[0];
              v100 = v97[2].m128i_i64[1];
              if ( v100 )
              {
                v135 = v99;
                v101 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v100 + 16LL))(v100);
                v99 = v135;
                *(_QWORD *)(v135 + 40) = v101;
              }
            }
            v102 = v97[3].m128i_i64[0];
            v103 = _mm_loadu_si128((__m128i *)((char *)v97 + 56));
            v104 = (__int64 *)v97;
            v97[3].m128i_i64[0] = 0;
            v136 = v99;
            v97 = (__m128i *)((char *)v97 + 88);
            *(__m128i *)(v99 + 56) = v103;
            *(_QWORD *)(v99 + 48) = v102;
            v105 = v97[-1].m128i_i64[0];
            v97[-2] = 0;
            *(_QWORD *)(v99 + 72) = v105;
            *(_DWORD *)(v99 + 80) = v97[-1].m128i_i32[2];
            sub_4C0590(v104);
            --v127;
            v99 = v136 + 88;
          }
          while ( v127 != -1 );
          v97 = *v40;
        }
        qfree(v97);
        v41 = (unsigned __int64)v40[1];
        *v40 = (__m128i *)v141;
        v40[2] = v143;
      }
      if ( v41 < v113 )
      {
        v43 = _mm_load_si128((const __m128i *)v148);
        v44 = _mm_load_si128((const __m128i *)&v148[16]);
        v45 = v150;
        v46 = v153;
        v47 = 11 * v41;
        do
        {
          ++v41;
          v48 = (__int64)&(*v40)->m128i_i64[v47];
          v47 += 11;
          *(_QWORD *)(v48 + 40) = 0;
          *(_DWORD *)(v48 + 32) = v45;
          *(_QWORD *)(v48 + 48) = 0;
          *(_QWORD *)(v48 + 72) = v46;
          *(_DWORD *)(v48 + 80) = -1;
          *(__m128i *)v48 = v43;
          *(__m128i *)(v48 + 16) = v44;
          *(_OWORD *)(v48 + 56) = 0;
        }
        while ( v113 != v41 );
      }
      v40[1] = (__m128i *)v113;
      sub_4C0590(v148);
LABEL_48:
      v32 += 24;
      if ( 24LL * src == v32 )
        goto LABEL_52;
      v31 = (char *)ptr;
    }
    sub_4C36A0((__int64)v34, (__int64)v36, -2, 0x2E8BA2E8BA2E8BA3LL, v11, a6);
LABEL_51:
    sub_4C1890(v34, v36);
    goto LABEL_40;
  }
LABEL_52:
  memset(&v155, 0, 24);
  v155.m256i_i64[3] = -1;
  v156 = 0;
  v159 = -1;
  v160 = -1;
  v157 = 0;
  v158 = 0;
  if ( v113 > 0 )
  {
    v49 = 0;
    v50 = 0;
    v51 = 24LL * src;
    while ( 1 )
    {
      v160 = v50;
      if ( src > 0 )
        break;
      ++v50;
      v49 += 88;
      if ( v50 == v113 )
        goto LABEL_56;
    }
    while ( 1 )
    {
      v66 = 0;
      do
      {
        v67 = *(const __m128i **)((char *)ptr + v66);
        v68 = 88LL * *(_QWORD *)((char *)ptr + v66 + 8);
        v69 = (const __m128i *)((char *)v67 + v68);
        for ( j = 0x2E8BA2E8BA2E8BA3LL * (v68 >> 3); j > 0; j >>= 1 )
        {
          while ( 1 )
          {
            v71 = &v67->m128i_i8[88 * (j >> 1)];
            if ( *((_DWORD *)v71 + 20) >= v50 )
              break;
            v67 = (const __m128i *)(v71 + 88);
            j = j - 1 - (j >> 1);
            if ( j <= 0 )
              goto LABEL_78;
          }
        }
LABEL_78:
        if ( v69 != v67 && v67[5].m128i_i32[0] == v50 )
        {
          v118 = v49;
          srca = (__m128i *)(*(_QWORD *)(v27[22] + v66) + v49);
          sub_4B50E0(srca, v67);
          v72 = srca;
          v49 = v118;
          v73 = srca + 3;
          if ( &srca[3] != &v67[3] )
          {
            v74 = v67[3].m128i_u64[1];
            if ( v74 && (v75 = v74 - 1, v74 != 1) )
            {
              srcb = (void *)v67[3].m128i_i64[0];
              v92 = (void *)v72[3].m128i_i64[0];
              if ( v72[4].m128i_i64[0] < v74 )
              {
                v137 = v74 - 1;
                v133 = v72;
                v128 = v118;
                v120 = v67[3].m128i_i64[1];
                v92 = (void *)qvector_reserve(v73, v72[3].m128i_i64[0], v74, 1);
                v72 = v133;
                v75 = v137;
                v49 = v128;
                v74 = v120;
                v133[3].m128i_i64[0] = (__int64)v92;
              }
              v72[3].m128i_i64[1] = v74;
              v132 = v49;
              v125 = v74;
              v119 = v72;
              memmove(v92, srcb, v75);
              v72 = v119;
              v49 = v132;
              *(_BYTE *)(v119[3].m128i_i64[0] + v125 - 1) = 0;
            }
            else
            {
              srca[3].m128i_i64[1] = 0;
            }
          }
          v72[4].m128i_i64[1] = v67[4].m128i_i64[1];
          v72[5].m128i_i32[0] = v67[5].m128i_i32[0];
        }
        v66 += 24;
      }
      while ( v51 != v66 );
      ++v50;
      v49 += 88;
      if ( v113 == v50 )
        break;
      v160 = v50;
    }
  }
LABEL_56:
  v52 = v27[22];
  v53 = v27[8];
  v54 = v27[9];
  *(_QWORD *)(v27[7] + 40LL) = v52;
  *(_QWORD *)(v53 + 40) = v52 + 24;
  if ( v54 )
    *(_QWORD *)(v54 + 40) = v27[22] + 48LL;
  sub_4C0590(&v155);
  v55 = (char *)ptr;
  if ( ptr )
  {
    if ( (_QWORD)v147 )
    {
      v114 = v147;
      for ( k = 0; k != v114; ++k )
      {
        v57 = &v55[24 * k];
        v58 = *(char **)v57;
        if ( *(_QWORD *)v57 )
        {
          v59 = *((_QWORD *)v57 + 1);
          if ( v59 )
          {
            v60 = 0;
            for ( m = 0; m != v59; ++m )
            {
              v62 = &v58[v60];
              v63 = *(void **)&v58[v60 + 48];
              if ( v63 )
              {
                *((_QWORD *)v62 + 7) = 0;
                qfree(v63);
              }
              v64 = *((void **)v62 + 5);
              if ( v64 )
                qfree(v64);
              v58 = *(char **)v57;
              v60 += 88;
            }
          }
          *((_QWORD *)v57 + 1) = 0;
          qfree(v58);
          v55 = (char *)ptr;
        }
      }
    }
    *(_QWORD *)&v147 = 0;
    qfree(v55);
  }
  return v162 - __readfsqword(0x28u);
}
