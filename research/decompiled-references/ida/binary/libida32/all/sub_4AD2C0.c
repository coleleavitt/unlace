unsigned __int64 __fastcall sub_4AD2C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rcx
  int v9; // eax
  __int64 *v10; // r13
  __int64 v11; // rdi
  __int64 *v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rdx
  int v15; // ebp
  __int64 v16; // r13
  __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // r15
  unsigned int v20; // esi
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 i; // rdx
  __int64 v25; // rax
  _QWORD *v26; // rbx
  int v27; // r13d
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  char *v30; // rdi
  char *v31; // rax
  __int64 v32; // rbp
  char *v33; // rax
  __m128i *v34; // r12
  __int64 v35; // r15
  __m128i *v36; // r14
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 m128i_i64; // r15
  __int64 *v40; // r12
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // r14
  __m128i v43; // xmm2
  __m128i v44; // xmm1
  int v45; // edi
  int v46; // esi
  __int64 v47; // rcx
  __int64 v48; // rax
  char *v49; // r9
  __int32 v50; // r12d
  __int64 v51; // r15
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  char *v55; // rax
  __int64 v56; // r15
  __int64 v57; // r14
  char *v58; // rbp
  char *v59; // rdi
  __int64 v60; // r12
  __int64 m; // r13
  char *v62; // rbx
  void *v63; // rdi
  void *v64; // rdi
  __int64 v66; // r14
  const __m128i *v67; // rbp
  __int64 v68; // rax
  const __m128i *v69; // rcx
  __int64 k; // rdx
  const __m128i *v71; // rax
  __m128i *v72; // r10
  __m128i *v73; // rdi
  unsigned __int64 v74; // r11
  _QWORD *v75; // r14
  unsigned __int64 v76; // rbp
  unsigned __int64 v77; // rbx
  __int64 v78; // rdi
  __m128i si128; // xmm1
  __m128i v80; // xmm1
  unsigned __int64 v81; // r14
  unsigned __int64 v82; // r15
  __int64 v83; // rbp
  _QWORD *v84; // rdi
  __int64 v85; // r12
  __int64 j; // r13
  __int64 v87; // rdx
  void *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rdi
  __int64 v92; // r14
  __int64 v93; // rdx
  __int64 v94; // rdi
  __int64 v95; // rax
  __int64 v96; // rax
  __m128i v97; // xmm0
  _QWORD *v98; // rdi
  int n; // [rsp+0h] [rbp-148h]
  __m128i *nb; // [rsp+0h] [rbp-148h]
  size_t na; // [rsp+0h] [rbp-148h]
  char *srca; // [rsp+8h] [rbp-140h]
  void *src; // [rsp+8h] [rbp-140h]
  __int64 v104; // [rsp+10h] [rbp-138h]
  __int64 v105; // [rsp+10h] [rbp-138h]
  int v106; // [rsp+10h] [rbp-138h]
  __m128i *v107; // [rsp+10h] [rbp-138h]
  __int64 v108; // [rsp+10h] [rbp-138h]
  __int64 v109; // [rsp+10h] [rbp-138h]
  int v110; // [rsp+18h] [rbp-130h]
  unsigned __int64 v111; // [rsp+18h] [rbp-130h]
  __m128i *v112; // [rsp+18h] [rbp-130h]
  __int64 *v113; // [rsp+20h] [rbp-128h]
  char *v114; // [rsp+20h] [rbp-128h]
  char *v115; // [rsp+20h] [rbp-128h]
  __int64 v116; // [rsp+28h] [rbp-120h]
  __int64 v117; // [rsp+28h] [rbp-120h]
  __int64 v119; // [rsp+30h] [rbp-118h]
  __int64 v120; // [rsp+38h] [rbp-110h]
  void *ptr; // [rsp+40h] [rbp-108h] BYREF
  __int128 v122; // [rsp+48h] [rbp-100h]
  _BYTE v123[24]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v124; // [rsp+78h] [rbp-D0h]
  __int64 v125; // [rsp+80h] [rbp-C8h]
  __int128 v126; // [rsp+88h] [rbp-C0h]
  __int128 v127; // [rsp+98h] [rbp-B0h]
  __int64 v128; // [rsp+A8h] [rbp-A0h]
  __m256i v129; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v130; // [rsp+D0h] [rbp-78h]
  __int128 v131; // [rsp+D8h] [rbp-70h]
  __int128 v132; // [rsp+E8h] [rbp-60h]
  unsigned __int64 v133; // [rsp+F8h] [rbp-50h]
  __int64 v134; // [rsp+100h] [rbp-48h] BYREF
  unsigned __int64 v135; // [rsp+108h] [rbp-40h] BYREF

  v6 = a1[1];
  v135 = __readfsqword(0x28u);
  v122 = 0;
  ptr = nullptr;
  n = *(_DWORD *)(v6 + 28);
  if ( n )
  {
    memset(&v129, 0, 24);
    sub_4AB080((char *)&ptr, n, &v129);
    v7 = 0;
    if ( n > 0 )
    {
      do
      {
        switch_dbctx(*(int *)(a1[1] + 4LL * (int)v7 + 16));
        sub_4ACA20((__int64)a1, (__int64)ptr + 24 * v7++);
      }
      while ( n != v7 );
    }
    v8 = (__int64)ptr;
  }
  else
  {
    v8 = 0;
  }
  v134 = 0x100000000LL;
  v9 = 0;
  v10 = &v134;
  while ( 1 )
  {
    v11 = *(int *)v10;
    v12 = (__int64 *)(v8 + 24 * v11);
    v13 = *v12;
    v14 = v12[1];
    if ( v13 != v13 + 80 * v14 )
    {
      v15 = v11 + 1;
      v113 = v10;
      v16 = v13 + 80 * v14;
      v8 = (int)v11 + 1;
      v104 = 24 * v8;
      v17 = v13;
      v18 = 24 * (v8 + (unsigned int)(n - 2 - v11) + 1);
      do
      {
        while ( *(_DWORD *)(v17 + 76) != -1 )
        {
          v17 += 80;
          if ( v16 == v17 )
            goto LABEL_22;
        }
        *(_DWORD *)(v17 + 76) = v9;
        v110 = v9 + 1;
        if ( n > v15 )
        {
          v19 = v104;
          do
          {
            v20 = *(_DWORD *)(v17 + 72);
            memset(&v129, 0, 24);
            v129.m256i_i64[3] = -1;
            v21 = (__int64 *)((char *)ptr + v19);
            v130 = 0;
            v133 = v20 | 0xFFFFFFFF00000000LL;
            v131 = 0;
            v132 = 0;
            if ( v20 == -1 )
            {
              sub_4A9B00(&v129);
            }
            else
            {
              v8 = *v21;
              v22 = v21[1];
              v23 = v8 + 80 * v22;
              for ( i = 0xCCCCCCCCCCCCCCCDLL * ((80 * v22) >> 4); i > 0; i = i - 1 - a5 )
              {
                while ( 1 )
                {
                  a5 = i >> 1;
                  v25 = v8 + 80 * (i >> 1);
                  if ( *(_DWORD *)(v25 + 72) < v20 )
                    break;
                  i >>= 1;
                  if ( a5 <= 0 )
                    goto LABEL_17;
                }
                v8 = v25 + 80;
              }
LABEL_17:
              if ( v23 != v8 && *(_DWORD *)(v8 + 72) == v20 )
                *(_DWORD *)(v8 + 76) = *(_DWORD *)(v17 + 76);
            }
            v19 += 24;
          }
          while ( v18 != v19 );
        }
        v17 += 80;
        v9 = v110;
      }
      while ( v16 != v17 );
LABEL_22:
      v10 = v113;
    }
    v10 = (__int64 *)((char *)v10 + 4);
    if ( &v135 == (unsigned __int64 *)v10 )
      break;
    v8 = (__int64)ptr;
  }
  v26 = a1;
  v27 = v9;
  if ( n == 3 )
  {
    v31 = (char *)ptr;
    v89 = *((_QWORD *)ptr + 6);
    v8 = v89 + 80LL * *((_QWORD *)ptr + 7);
    if ( v8 == v89 )
    {
      v28 = a1[23];
      if ( v28 == 3 )
        goto LABEL_34;
    }
    else
    {
      do
      {
        if ( *(_DWORD *)(v89 + 76) == -1 )
          *(_DWORD *)(v89 + 76) = v27++;
        v89 += 80;
      }
      while ( v89 != v8 );
      v28 = a1[23];
      v31 = (char *)ptr;
      if ( v28 == 3 )
        goto LABEL_34;
    }
  }
  else
  {
    v28 = a1[23];
    if ( n == v28 )
      goto LABEL_33;
  }
  memset(v123, 0, sizeof(v123));
  if ( n < v28 )
  {
    v106 = v27;
    v81 = n;
    v82 = v28;
    do
    {
      v83 = a1[22] + 24 * v81;
      v84 = *(_QWORD **)v83;
      if ( *(_QWORD *)v83 )
      {
        v85 = *(_QWORD *)(v83 + 8);
        if ( v85 )
        {
          for ( j = 0; j != v85; ++j )
          {
            v87 = 5 * j;
            sub_4A9B00(&v84[2 * v87]);
            v84 = *(_QWORD **)v83;
          }
        }
        *(_QWORD *)(v83 + 8) = 0;
        qfree(v84);
      }
      ++v81;
    }
    while ( v81 < v82 );
    v27 = v106;
    a1[23] = n;
  }
  else
  {
    v29 = a1[22];
    v30 = (char *)(a1 + 22);
    if ( (unsigned __int64)v123 < v29 || (unsigned __int64)v123 >= v29 + 24LL * a1[24] )
    {
      sub_4AB080(v30, n, v123);
    }
    else
    {
      memset(&v129, 0, 24);
      sub_4AB080(v30, n, &v129);
    }
  }
LABEL_33:
  v31 = (char *)ptr;
  if ( n > 0 )
  {
LABEL_34:
    v32 = 0;
    while ( 1 )
    {
      v33 = &v31[v32];
      v34 = *(__m128i **)v33;
      v35 = 80LL * *((_QWORD *)v33 + 1);
      v36 = (__m128i *)(*(_QWORD *)v33 + v35);
      if ( *(__m128i **)v33 == v36 )
        goto LABEL_40;
      v37 = 0xCCCCCCCCCCCCCCCDLL * (v35 >> 4);
      if ( !v37 )
        break;
      _BitScanReverse64(&v38, v37);
      sub_4ACEC0((__int64)v34, (__int64)v36, 2LL * (int)v38, v8, a5, a6);
      if ( v35 <= 1280 )
        goto LABEL_51;
      m128i_i64 = (__int64)v34[80].m128i_i64;
      sub_4AAD10(v34, v34 + 80);
      do
      {
        sub_4AA730(m128i_i64);
        m128i_i64 += 80;
      }
      while ( v36 != (__m128i *)m128i_i64 );
LABEL_40:
      v40 = (__int64 *)(v32 + v26[22]);
      v41 = v40[1];
      if ( v27 == v41 )
        goto LABEL_48;
      memset(v123, 0, sizeof(v123));
      v124 = -1;
      v125 = 0;
      v128 = -1;
      v126 = 0;
      v127 = 0;
      if ( v27 < v41 )
      {
        v105 = v32;
        v75 = v26;
        v76 = v27;
        v77 = v41;
        do
        {
          v78 = 5 * v76++;
          sub_4A9B00((_QWORD *)(*v40 + 16 * v78));
        }
        while ( v76 < v77 );
        v40[1] = v27;
        v32 = v105;
        v26 = v75;
        goto LABEL_92;
      }
      v42 = v40[2];
      if ( (unsigned __int64)v123 >= *v40 && (unsigned __int64)v123 < 80 * v42 + *v40 )
      {
        si128 = _mm_load_si128((const __m128i *)v123);
        v131 = 0u;
        LODWORD(v130) = v125;
        *(__m128i *)v129.m256i_i8 = si128;
        v80 = _mm_load_si128((const __m128i *)&v123[16]);
        v133 = v128 | 0xFFFFFFFF00000000LL;
        *(__m128i *)&v129.m256i_u64[2] = v80;
        v132 = 0;
        sub_4AB270(v40, (const char *)v27, (const __m128i *)&v129);
        sub_4A9B00(&v129);
LABEL_92:
        sub_4A9B00(v123);
        goto LABEL_48;
      }
      if ( v42 < v27 )
      {
        v90 = qvector_reserve(v40, 0, v27, 80);
        v91 = v40[2];
        v119 = v90;
        v40[2] = v42;
        v92 = *v40;
        v120 = v91;
        v108 = v40[1] - 1;
        if ( v108 >= 0 )
        {
          v93 = v90;
          do
          {
            *(_QWORD *)(v93 + 16) = 0;
            *(_DWORD *)(v93 + 24) = -1;
            *(_QWORD *)(v93 + 28) = 0xFFFFFFFFLL;
            *(_QWORD *)(v93 + 40) = 0;
            *(_OWORD *)v93 = 0;
            if ( v93 != v92 )
            {
              *(__m128i *)v93 = _mm_loadu_si128((const __m128i *)v92);
              *(__m128i *)(v93 + 16) = _mm_loadu_si128((const __m128i *)(v92 + 16));
              *(_DWORD *)(v93 + 32) = *(_DWORD *)(v92 + 32);
              v94 = *(_QWORD *)(v92 + 40);
              if ( v94 )
              {
                v116 = v93;
                v95 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v94 + 16LL))(v94);
                v93 = v116;
                *(_QWORD *)(v116 + 40) = v95;
              }
            }
            v96 = *(_QWORD *)(v92 + 48);
            v97 = _mm_loadu_si128((const __m128i *)(v92 + 56));
            v98 = (_QWORD *)v92;
            *(_QWORD *)(v92 + 48) = 0;
            v117 = v93;
            v92 += 80;
            *(__m128i *)(v93 + 56) = v97;
            *(_QWORD *)(v93 + 48) = v96;
            LODWORD(v96) = *(_DWORD *)(v92 - 8);
            *(_OWORD *)(v92 - 24) = 0;
            *(_DWORD *)(v93 + 72) = v96;
            *(_DWORD *)(v93 + 76) = *(_DWORD *)(v92 - 4);
            sub_4A9B00(v98);
            --v108;
            v93 = v117 + 80;
          }
          while ( v108 != -1 );
          v92 = *v40;
        }
        qfree((void *)v92);
        v41 = v40[1];
        *v40 = v119;
        v40[2] = v120;
      }
      if ( v41 < v27 )
      {
        v43 = _mm_load_si128((const __m128i *)v123);
        v44 = _mm_load_si128((const __m128i *)&v123[16]);
        v45 = v125;
        v46 = v128;
        v47 = 80 * v41;
        do
        {
          ++v41;
          v48 = v47 + *v40;
          v47 += 80;
          *(_QWORD *)(v48 + 40) = 0;
          *(_DWORD *)(v48 + 32) = v45;
          *(_QWORD *)(v48 + 48) = 0;
          *(_DWORD *)(v48 + 72) = v46;
          *(_DWORD *)(v48 + 76) = -1;
          *(__m128i *)v48 = v43;
          *(__m128i *)(v48 + 16) = v44;
          *(_OWORD *)(v48 + 56) = 0;
        }
        while ( v27 != v41 );
      }
      v40[1] = v27;
      sub_4A9B00(v123);
LABEL_48:
      v32 += 24;
      if ( 24LL * n == v32 )
        goto LABEL_52;
      v31 = (char *)ptr;
    }
    sub_4ACEC0((__int64)v34, (__int64)v36, -2, v8, a5, a6);
LABEL_51:
    sub_4AAD10(v34, v36);
    goto LABEL_40;
  }
LABEL_52:
  memset(&v129, 0, 24);
  v129.m256i_i64[3] = -1;
  v130 = 0;
  v133 = -1;
  v131 = 0;
  v132 = 0;
  if ( v27 > 0 )
  {
    v49 = nullptr;
    v50 = 0;
    v51 = 24LL * n;
    while ( 1 )
    {
      HIDWORD(v133) = v50;
      if ( n > 0 )
        break;
      ++v50;
      v49 += 80;
      if ( v50 == v27 )
        goto LABEL_56;
    }
    while ( 1 )
    {
      v66 = 0;
      do
      {
        v67 = *(const __m128i **)((char *)ptr + v66);
        v68 = *(_QWORD *)((char *)ptr + v66 + 8);
        v69 = &v67[5 * v68];
        for ( k = 0xCCCCCCCCCCCCCCCDLL * ((80 * v68) >> 4); k > 0; k >>= 1 )
        {
          while ( 1 )
          {
            v71 = &v67[5 * (k >> 1)];
            if ( v71[4].m128i_i32[3] >= v50 )
              break;
            v67 = v71 + 5;
            k = k - 1 - (k >> 1);
            if ( k <= 0 )
              goto LABEL_78;
          }
        }
LABEL_78:
        if ( v69 != v67 && v67[4].m128i_i32[3] == v50 )
        {
          srca = v49;
          nb = (__m128i *)&v49[*(_QWORD *)(v26[22] + v66)];
          sub_49FBF0(nb, v67);
          v72 = nb;
          v49 = srca;
          v73 = nb + 3;
          if ( &nb[3] != &v67[3] )
          {
            v74 = v67[3].m128i_u64[1];
            if ( v74 && (na = v74 - 1, v74 != 1) )
            {
              src = (void *)v67[3].m128i_i64[0];
              v88 = (void *)v72[3].m128i_i64[0];
              if ( v72[4].m128i_i64[0] < v74 )
              {
                v115 = v49;
                v112 = v72;
                v109 = v67[3].m128i_i64[1];
                v88 = (void *)qvector_reserve(v73, v72[3].m128i_i64[0], v74, 1);
                v72 = v112;
                v49 = v115;
                v74 = v109;
                v112[3].m128i_i64[0] = (__int64)v88;
              }
              v72[3].m128i_i64[1] = v74;
              v114 = v49;
              v111 = v74;
              v107 = v72;
              memmove(v88, src, na);
              v72 = v107;
              v49 = v114;
              *(_BYTE *)(v107[3].m128i_i64[0] + v111 - 1) = 0;
            }
            else
            {
              v72[3].m128i_i64[1] = 0;
            }
          }
          v72[4].m128i_i32[2] = v67[4].m128i_i32[2];
          v72[4].m128i_i32[3] = v67[4].m128i_i32[3];
        }
        v66 += 24;
      }
      while ( v51 != v66 );
      ++v50;
      v49 += 80;
      if ( v50 == v27 )
        break;
      HIDWORD(v133) = v50;
    }
  }
LABEL_56:
  v52 = v26[22];
  v53 = v26[8];
  v54 = v26[9];
  *(_QWORD *)(v26[7] + 40LL) = v52;
  *(_QWORD *)(v53 + 40) = v52 + 24;
  if ( v54 )
    *(_QWORD *)(v54 + 40) = v26[22] + 48LL;
  sub_4A9B00(&v129);
  v55 = (char *)ptr;
  if ( ptr )
  {
    v56 = v122;
    if ( (_QWORD)v122 )
    {
      v57 = 0;
      do
      {
        v58 = &v55[24 * v57];
        v59 = *(char **)v58;
        if ( *(_QWORD *)v58 )
        {
          v60 = *((_QWORD *)v58 + 1);
          if ( v60 )
          {
            for ( m = 0; m != v60; ++m )
            {
              v62 = &v59[80 * m];
              v63 = *((void **)v62 + 6);
              if ( v63 )
              {
                *((_QWORD *)v62 + 7) = 0;
                qfree(v63);
              }
              v64 = *((void **)v62 + 5);
              if ( v64 )
                qfree(v64);
              v59 = *(char **)v58;
            }
          }
          *((_QWORD *)v58 + 1) = 0;
          qfree(v59);
          v55 = (char *)ptr;
        }
        ++v57;
      }
      while ( v56 != v57 );
    }
    *(_QWORD *)&v122 = 0;
    qfree(v55);
  }
  return v135 - __readfsqword(0x28u);
}

