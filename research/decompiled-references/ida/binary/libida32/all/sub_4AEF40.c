unsigned __int64 __fastcall sub_4AEF40(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  signed __int64 v8; // rcx
  int v9; // eax
  __int64 *v10; // r13
  __int64 v11; // rsi
  __int64 *v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rdx
  int v15; // ebp
  __int64 v16; // r13
  __int64 v17; // r15
  __int64 v18; // r14
  unsigned __int32 v19; // esi
  __int64 *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int32 v25; // r10d
  int v26; // r13d
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  char *v29; // rdi
  char *v30; // rax
  __int64 v31; // rbx
  char *v32; // rax
  __m128i *v33; // r15
  __int64 v34; // r14
  __m128i *v35; // r12
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 m128i_i64; // r14
  __int64 *v39; // r15
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r12
  __m128i v42; // xmm3
  __m128i v43; // xmm2
  int v44; // esi
  __int64 v45; // rcx
  __m128i v46; // xmm1
  __int64 v47; // rax
  __int64 v48; // r10
  int v49; // r12d
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  char *v53; // rax
  __int64 v54; // r15
  __int64 v55; // r14
  char *v56; // rbp
  char *v57; // rdi
  __int64 v58; // r12
  __int64 k; // r13
  char *v60; // rbx
  void *v61; // rdi
  void *v62; // rdi
  __int64 v64; // r15
  __int64 v65; // r14
  const __m128i *v66; // rbx
  __int64 v67; // rdx
  const __m128i *v68; // rax
  __int64 j; // rdx
  const __m128i *v70; // rcx
  __m128i *v71; // r9
  __m128i *v72; // rdi
  unsigned __int64 v73; // r11
  size_t v74; // rbp
  unsigned __int64 v75; // r12
  unsigned __int64 v76; // rbp
  __int64 v77; // rdi
  __m128i si128; // xmm1
  __m128i v79; // xmm0
  __m128i v80; // xmm1
  unsigned __int64 v81; // r14
  unsigned __int64 v82; // r12
  __int64 v83; // rbx
  _QWORD *v84; // rdi
  __int64 v85; // rbp
  __int64 i; // r13
  __int64 v87; // rdx
  void *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rdi
  __int64 v92; // rbp
  __int64 v93; // r12
  __int64 v94; // rbp
  __int64 v95; // rdx
  __int64 v96; // rdi
  __int64 v97; // rax
  __int64 v98; // rax
  __m128i v99; // xmm0
  _QWORD *v100; // rdi
  __m128i v101; // xmm0
  int src; // [rsp+8h] [rbp-160h]
  __m128i *srca; // [rsp+8h] [rbp-160h]
  void *srcb; // [rsp+8h] [rbp-160h]
  __int64 v107; // [rsp+10h] [rbp-158h]
  __m128i *v108; // [rsp+10h] [rbp-158h]
  __int64 v109; // [rsp+10h] [rbp-158h]
  __int64 v110; // [rsp+18h] [rbp-150h]
  int v111; // [rsp+18h] [rbp-150h]
  unsigned __int64 v112; // [rsp+18h] [rbp-150h]
  __m128i *v113; // [rsp+18h] [rbp-150h]
  int v114; // [rsp+20h] [rbp-148h]
  __int64 v115; // [rsp+20h] [rbp-148h]
  __int64 v116; // [rsp+20h] [rbp-148h]
  __int64 *v117; // [rsp+28h] [rbp-140h]
  __int64 v118; // [rsp+28h] [rbp-140h]
  __int64 v119; // [rsp+28h] [rbp-140h]
  __int64 v120; // [rsp+30h] [rbp-138h]
  __int64 v121; // [rsp+38h] [rbp-130h]
  void *ptr; // [rsp+40h] [rbp-128h] BYREF
  __int128 v123; // [rsp+48h] [rbp-120h]
  _BYTE v124[24]; // [rsp+60h] [rbp-108h] BYREF
  __int64 v125; // [rsp+78h] [rbp-F0h]
  __int64 v126; // [rsp+80h] [rbp-E8h]
  __int128 v127; // [rsp+88h] [rbp-E0h]
  __int128 v128; // [rsp+98h] [rbp-D0h]
  __m128i v129; // [rsp+A8h] [rbp-C0h] BYREF
  __int64 v130; // [rsp+B8h] [rbp-B0h]
  __m256i v131; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v132; // [rsp+E0h] [rbp-88h]
  __int128 v133; // [rsp+E8h] [rbp-80h]
  __int128 v134; // [rsp+F8h] [rbp-70h]
  __m128i v135; // [rsp+108h] [rbp-60h]
  int v136; // [rsp+118h] [rbp-50h]
  __int64 v137; // [rsp+120h] [rbp-48h] BYREF
  unsigned __int64 v138; // [rsp+128h] [rbp-40h] BYREF

  v138 = __readfsqword(0x28u);
  v6 = a1[1];
  v123 = 0;
  ptr = nullptr;
  src = *(_DWORD *)(v6 + 28);
  if ( src )
  {
    memset(&v131, 0, 24);
    sub_4AB500((char *)&ptr, src, &v131);
    v7 = 0;
    if ( src > 0 )
    {
      do
      {
        switch_dbctx(*(int *)(a1[1] + 4LL * (int)v7 + 16));
        sub_4AE660((__int64)a1, (__int64)ptr + 24 * v7++);
      }
      while ( src != v7 );
    }
    v8 = (signed __int64)ptr;
  }
  else
  {
    v8 = 0;
  }
  v137 = 0x100000000LL;
  v9 = 0;
  v10 = &v137;
  while ( 1 )
  {
    v11 = *(int *)v10;
    v12 = (__int64 *)(v8 + 24 * v11);
    v13 = *v12;
    v14 = v12[1];
    if ( v13 != v13 + 96 * v14 )
    {
      v15 = v11 + 1;
      v117 = v10;
      v16 = v13 + 96 * v14;
      v110 = 24LL * ((int)v11 + 1);
      v8 = (int)v11 + 1 + (unsigned __int64)(unsigned int)(src - 2 - v11) + 1;
      v17 = 24 * v8;
      do
      {
        while ( *(_DWORD *)(v13 + 88) != -1 )
        {
          v13 += 96;
          if ( v16 == v13 )
            goto LABEL_24;
        }
        *(_DWORD *)(v13 + 88) = v9;
        v114 = v9 + 1;
        if ( src > v15 )
        {
          v18 = v110;
          do
          {
            a5 = *(_QWORD *)(v13 + 72);
            v19 = *(_DWORD *)(v13 + 80);
            memset(&v131, 0, 24);
            v131.m256i_i64[3] = -1;
            v20 = (__int64 *)((char *)ptr + v18);
            v132 = 0;
            v136 = -1;
            v135.m128i_i64[0] = a5;
            v135.m128i_i32[2] = v19;
            v133 = 0;
            v134 = 0;
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
                    v8 = v23 >> 1;
                    v24 = v21 + 32 * ((v23 >> 1) + (v23 & 0xFFFFFFFFFFFFFFFELL));
                    v25 = *(_DWORD *)(v24 + 80);
                    if ( v25 < v19 || v19 >= v25 && *(_QWORD *)(v24 + 72) < a5 )
                      break;
                    v23 >>= 1;
                    if ( v8 <= 0 )
                      goto LABEL_20;
                  }
                  v21 = v24 + 96;
                  v23 = v23 - 1 - v8;
                }
                while ( v23 > 0 );
              }
LABEL_20:
              if ( a6 != v21 && v19 == *(_DWORD *)(v21 + 80) && a5 == *(_QWORD *)(v21 + 72) )
                *(_DWORD *)(v21 + 88) = *(_DWORD *)(v13 + 88);
            }
            else
            {
              sub_4A82A0(&v131);
            }
            v18 += 24;
          }
          while ( v17 != v18 );
        }
        v13 += 96;
        v9 = v114;
      }
      while ( v16 != v13 );
LABEL_24:
      v10 = v117;
    }
    v10 = (__int64 *)((char *)v10 + 4);
    if ( &v138 == (unsigned __int64 *)v10 )
      break;
    v8 = (signed __int64)ptr;
  }
  v26 = v9;
  if ( src == 3 )
  {
    v30 = (char *)ptr;
    v89 = *((_QWORD *)ptr + 6);
    v8 = v89 + 96LL * *((_QWORD *)ptr + 7);
    if ( v8 == v89 )
    {
      v27 = a1[23];
      if ( v27 == 3 )
        goto LABEL_37;
    }
    else
    {
      do
      {
        if ( *(_DWORD *)(v89 + 88) == -1 )
          *(_DWORD *)(v89 + 88) = v26++;
        v89 += 96;
      }
      while ( v89 != v8 );
      v27 = a1[23];
      v30 = (char *)ptr;
      if ( v27 == 3 )
        goto LABEL_37;
    }
  }
  else
  {
    v27 = a1[23];
    if ( src == v27 )
      goto LABEL_36;
  }
  memset(v124, 0, sizeof(v124));
  if ( src < v27 )
  {
    v111 = v26;
    v81 = src;
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
            sub_4A82A0(&v84[4 * v87]);
            v84 = *(_QWORD **)v83;
          }
        }
        *(_QWORD *)(v83 + 8) = 0;
        qfree(v84);
      }
      ++v81;
    }
    while ( v81 < v82 );
    v26 = v111;
    a1[23] = src;
  }
  else
  {
    v28 = a1[22];
    v29 = (char *)(a1 + 22);
    if ( (unsigned __int64)v124 < v28 || (unsigned __int64)v124 >= v28 + 24LL * a1[24] )
    {
      sub_4AB500(v29, src, v124);
    }
    else
    {
      memset(&v131, 0, 24);
      sub_4AB500(v29, src, &v131);
    }
  }
LABEL_36:
  v30 = (char *)ptr;
  if ( src > 0 )
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
      sub_4AEB20((__int64)v33, (__int64)v35, 2LL * (int)v37, v8, a5, a6);
      if ( v34 <= 1536 )
        goto LABEL_54;
      m128i_i64 = (__int64)v33[96].m128i_i64;
      sub_4A9780(v33, v33 + 96);
      do
      {
        sub_4A9140(m128i_i64);
        m128i_i64 += 96;
      }
      while ( v35 != (__m128i *)m128i_i64 );
LABEL_43:
      v39 = (__int64 *)(v31 + a1[22]);
      v40 = v39[1];
      if ( v26 == v40 )
        goto LABEL_51;
      memset(v124, 0, sizeof(v124));
      v125 = -1;
      v126 = 0;
      v129 = (__m128i)0xFFFFFFFFFFFFFFFELL;
      v130 = 0xFFFFFFFFLL;
      v127 = 0;
      v128 = 0;
      if ( v26 < v40 )
      {
        v75 = v26;
        v76 = v40;
        do
        {
          v77 = 3 * v75++;
          sub_4A82A0((_QWORD *)(*v39 + 32 * v77));
        }
        while ( v75 < v76 );
        v39[1] = v26;
        goto LABEL_95;
      }
      v41 = v39[2];
      if ( (unsigned __int64)v124 >= *v39 && (unsigned __int64)v124 < 96 * v41 + *v39 )
      {
        si128 = _mm_load_si128((const __m128i *)v124);
        v134 = 0;
        v79 = _mm_loadu_si128(&v129);
        *(__m128i *)v131.m256i_i8 = si128;
        v80 = _mm_load_si128((const __m128i *)&v124[16]);
        v133 = 0u;
        LODWORD(v132) = v126;
        v136 = -1;
        *(__m128i *)&v131.m256i_u64[2] = v80;
        v135 = v79;
        sub_4AB6F0(v39, (const char *)v26, (__int64)&v131);
        sub_4A82A0(&v131);
LABEL_95:
        sub_4A82A0(v124);
        goto LABEL_51;
      }
      if ( v41 < v26 )
      {
        v90 = qvector_reserve(v39, 0, v26, 96);
        v91 = v39[2];
        v92 = v39[1];
        v39[2] = v41;
        v120 = v90;
        v93 = *v39;
        v121 = v91;
        v94 = v92 - 1;
        if ( v94 >= 0 )
        {
          v95 = v90;
          do
          {
            *(_QWORD *)(v95 + 16) = 0;
            *(_DWORD *)(v95 + 24) = -1;
            *(_QWORD *)(v95 + 28) = 0xFFFFFFFFLL;
            *(_QWORD *)(v95 + 40) = 0;
            *(_OWORD *)v95 = 0;
            if ( v95 != v93 )
            {
              *(__m128i *)v95 = _mm_loadu_si128((const __m128i *)v93);
              *(__m128i *)(v95 + 16) = _mm_loadu_si128((const __m128i *)(v93 + 16));
              *(_DWORD *)(v95 + 32) = *(_DWORD *)(v93 + 32);
              v96 = *(_QWORD *)(v93 + 40);
              if ( v96 )
              {
                v118 = v95;
                v97 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v96 + 16LL))(v96);
                v95 = v118;
                *(_QWORD *)(v118 + 40) = v97;
              }
            }
            v98 = *(_QWORD *)(v93 + 48);
            v99 = _mm_loadu_si128((const __m128i *)(v93 + 56));
            v100 = (_QWORD *)v93;
            *(_QWORD *)(v93 + 48) = 0;
            v119 = v95;
            v93 += 96;
            *(__m128i *)(v95 + 56) = v99;
            *(_QWORD *)(v95 + 48) = v98;
            LODWORD(v98) = *(_DWORD *)(v93 - 8);
            *(_OWORD *)(v93 - 40) = 0;
            v101 = _mm_loadu_si128((const __m128i *)(v93 - 24));
            *(_DWORD *)(v95 + 88) = v98;
            *(__m128i *)(v95 + 72) = v101;
            sub_4A82A0(v100);
            v95 = v119 + 96;
          }
          while ( v94-- != 0 );
          v93 = *v39;
        }
        qfree((void *)v93);
        v40 = v39[1];
        *v39 = v120;
        v39[2] = v121;
      }
      if ( v40 < v26 )
      {
        v42 = _mm_load_si128((const __m128i *)v124);
        v43 = _mm_load_si128((const __m128i *)&v124[16]);
        v44 = v126;
        v45 = 96 * v40;
        v46 = _mm_loadu_si128(&v129);
        do
        {
          ++v40;
          v47 = v45 + *v39;
          v45 += 96;
          *(_QWORD *)(v47 + 40) = 0;
          *(_DWORD *)(v47 + 32) = v44;
          *(_QWORD *)(v47 + 48) = 0;
          *(_DWORD *)(v47 + 88) = -1;
          *(__m128i *)v47 = v42;
          *(__m128i *)(v47 + 16) = v43;
          *(_OWORD *)(v47 + 56) = 0;
          *(__m128i *)(v47 + 72) = v46;
        }
        while ( v26 != v40 );
      }
      v39[1] = v26;
      sub_4A82A0(v124);
LABEL_51:
      v31 += 24;
      if ( 24LL * src == v31 )
        goto LABEL_55;
      v30 = (char *)ptr;
    }
    sub_4AEB20((__int64)v33, (__int64)v35, -2, v8, a5, a6);
LABEL_54:
    sub_4A9780(v33, v35);
    goto LABEL_43;
  }
LABEL_55:
  v48 = 0;
  v49 = 0;
  memset(&v131, 0, 24);
  v131.m256i_i64[3] = -1;
  v132 = 0;
  v135.m128i_i64[0] = -2;
  v135.m128i_i32[2] = 0;
  v136 = -1;
  v133 = 0;
  v134 = 0;
  if ( v26 > 0 )
  {
    while ( 1 )
    {
      v136 = v49;
      if ( src > 0 )
        break;
      ++v49;
      v48 += 96;
      if ( v49 == v26 )
        goto LABEL_58;
    }
    v64 = 24LL * src;
    while ( 1 )
    {
      v65 = 0;
      do
      {
        v66 = *(const __m128i **)((char *)ptr + v65);
        v67 = 6LL * *(_QWORD *)((char *)ptr + v65 + 8);
        v68 = &v66[v67];
        for ( j = 0xAAAAAAAAAAAAAAABLL * ((v67 * 16) >> 5); j > 0; j >>= 1 )
        {
          while ( 1 )
          {
            v70 = &v66[2 * (j >> 1) + 2 * (j & 0xFFFFFFFFFFFFFFFELL)];
            if ( v70[5].m128i_i32[2] >= v49 )
              break;
            v66 = v70 + 6;
            j = j - 1 - (j >> 1);
            if ( j <= 0 )
              goto LABEL_81;
          }
        }
LABEL_81:
        if ( v68 != v66 && v66[5].m128i_i32[2] == v49 )
        {
          v107 = v48;
          srca = (__m128i *)(*(_QWORD *)(a1[22] + v65) + v48);
          sub_49FBF0(srca, v66);
          v71 = srca;
          v48 = v107;
          v72 = srca + 3;
          if ( &srca[3] != &v66[3] )
          {
            v73 = v66[3].m128i_u64[1];
            if ( v73 && (v74 = v73 - 1, v73 != 1) )
            {
              srcb = (void *)v66[3].m128i_i64[0];
              v88 = (void *)v71[3].m128i_i64[0];
              if ( v71[4].m128i_i64[0] < v73 )
              {
                v116 = v107;
                v113 = v71;
                v109 = v66[3].m128i_i64[1];
                v88 = (void *)qvector_reserve(v72, v71[3].m128i_i64[0], v73, 1);
                v71 = v113;
                v48 = v116;
                v73 = v109;
                v113[3].m128i_i64[0] = (__int64)v88;
              }
              v71[3].m128i_i64[1] = v73;
              v115 = v48;
              v112 = v73;
              v108 = v71;
              memmove(v88, srcb, v74);
              v71 = v108;
              v48 = v115;
              *(_BYTE *)(v108[3].m128i_i64[0] + v112 - 1) = 0;
            }
            else
            {
              srca[3].m128i_i64[1] = 0;
            }
          }
          v71[4].m128i_i64[1] = v66[4].m128i_i64[1];
          v71[5].m128i_i32[0] = v66[5].m128i_i32[0];
          v71[5].m128i_i32[2] = v66[5].m128i_i32[2];
        }
        v65 += 24;
      }
      while ( v64 != v65 );
      ++v49;
      v48 += 96;
      if ( v26 == v49 )
        break;
      v136 = v49;
    }
  }
LABEL_58:
  v50 = a1[8];
  v51 = a1[9];
  v52 = a1[22];
  *(_QWORD *)(a1[7] + 40LL) = v52;
  *(_QWORD *)(v50 + 40) = v52 + 24;
  if ( v51 )
    *(_QWORD *)(v51 + 40) = a1[22] + 48LL;
  sub_4A82A0(&v131);
  v53 = (char *)ptr;
  if ( ptr )
  {
    v54 = v123;
    if ( (_QWORD)v123 )
    {
      v55 = 0;
      do
      {
        v56 = &v53[24 * v55];
        v57 = *(char **)v56;
        if ( *(_QWORD *)v56 )
        {
          v58 = *((_QWORD *)v56 + 1);
          if ( v58 )
          {
            for ( k = 0; k != v58; ++k )
            {
              v60 = &v57[96 * k];
              v61 = *((void **)v60 + 6);
              if ( v61 )
              {
                *((_QWORD *)v60 + 7) = 0;
                qfree(v61);
              }
              v62 = *((void **)v60 + 5);
              if ( v62 )
                qfree(v62);
              v57 = *(char **)v56;
            }
          }
          *((_QWORD *)v56 + 1) = 0;
          qfree(v57);
          v53 = (char *)ptr;
        }
        ++v55;
      }
      while ( v54 != v55 );
    }
    *(_QWORD *)&v123 = 0;
    qfree(v53);
  }
  return v138 - __readfsqword(0x28u);
}

