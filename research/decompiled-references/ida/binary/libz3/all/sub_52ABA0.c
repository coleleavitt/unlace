_QWORD *__fastcall sub_52ABA0(__int64 **a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  char **v5; // r15
  char **exception; // r15
  __int64 *v8; // r13
  __int64 v10; // r15
  _OWORD *v11; // rax
  __int64 v12; // r14
  __int64 v13; // r13
  char *v14; // rax
  unsigned int v15; // r12d
  __int64 *v16; // r14
  __int64 *j; // rcx
  __int64 v18; // rax
  char *v19; // rdx
  char *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // r12d
  __int64 v24; // rax
  unsigned int v25; // r14d
  __int64 v26; // rax
  __m128i *v27; // rax
  __int64 v28; // r8
  __m128i *v29; // r15
  __m128i *v30; // rdx
  __int64 m128i_i64; // rdx
  __m128i *v32; // rcx
  const __m128i *v33; // r13
  const __m128i *k; // r12
  __int64 v35; // rax
  __m128i *v36; // rax
  __m128i v37; // xmm0
  __m128i *v38; // rax
  __int64 v39; // rcx
  __m128i *v40; // r8
  __m128i *v41; // rdx
  const __m128i *v42; // r12
  const __m128i *m; // r14
  __int64 v44; // rax
  __m128i *v45; // rax
  __m128i v46; // xmm0
  __int64 *v47; // r12
  __int64 *v48; // rdi
  __int64 *v49; // r15
  __int64 v50; // r15
  unsigned int v51; // r14d
  int v52; // esi
  __int64 v53; // rdx
  __m128i *v54; // rcx
  __m128i *ii; // rax
  __int64 v56; // rdx
  __int64 v57; // r12
  __int64 *v58; // rax
  __int64 *v59; // r15
  __int64 v60; // rsi
  __int64 v61; // r13
  _QWORD *v62; // rdx
  unsigned int v63; // eax
  __int64 v64; // rcx
  int v65; // eax
  __int64 *v66; // rcx
  __int64 v67; // rdi
  __int64 *v68; // rax
  _QWORD *result; // rax
  __int64 v70; // rsi
  __int64 v71; // rax
  int v72; // r8d
  __int64 *v73; // rcx
  unsigned int v74; // edx
  __int64 *v75; // rdi
  __int64 v76; // rdx
  __int64 *v77; // r9
  __int64 *i; // rax
  __int64 v79; // rdx
  __int64 *v80; // rax
  int v81; // r9d
  __int64 v82; // rax
  __int64 *v83; // rcx
  unsigned int v84; // r10d
  __int64 *v85; // rdi
  __int64 v86; // r10
  __int64 *v87; // r8
  __int64 *v88; // rdx
  __int64 *v89; // rax
  __int64 v90; // r15
  _QWORD *v91; // rdx
  unsigned int v92; // eax
  __int64 v93; // rcx
  int v94; // eax
  __int64 *v95; // rcx
  __int64 v96; // rdi
  __int64 v97; // rdx
  unsigned int v98; // r12d
  unsigned int v99; // ecx
  unsigned int *v100; // rax
  unsigned int v101; // r14d
  unsigned int v102; // ecx
  unsigned int *v103; // rax
  __int64 v104; // rax
  _QWORD *v105; // rax
  _QWORD *v106; // rax
  _OWORD *v107; // [rsp+18h] [rbp-218h]
  void *v108; // [rsp+28h] [rbp-208h]
  __m128i *v109; // [rsp+30h] [rbp-200h]
  __m128i *v110; // [rsp+40h] [rbp-1F0h]
  _OWORD *ptr; // [rsp+48h] [rbp-1E8h]
  char *v112; // [rsp+50h] [rbp-1E0h]
  __m128i *v114; // [rsp+60h] [rbp-1D0h]
  __int64 v115; // [rsp+68h] [rbp-1C8h]
  unsigned int v117; // [rsp+74h] [rbp-1BCh]
  size_t v118; // [rsp+78h] [rbp-1B8h]
  __m128i *v119; // [rsp+80h] [rbp-1B0h]
  _QWORD *v120; // [rsp+88h] [rbp-1A8h]
  __int64 v121; // [rsp+90h] [rbp-1A0h]
  int v123; // [rsp+A0h] [rbp-190h]
  __int64 *v124; // [rsp+A0h] [rbp-190h]
  int v125; // [rsp+A8h] [rbp-188h]
  unsigned int v126; // [rsp+A8h] [rbp-188h]
  unsigned int n; // [rsp+A8h] [rbp-188h]
  int v128[2]; // [rsp+B8h] [rbp-178h] BYREF
  void *v129[2]; // [rsp+C0h] [rbp-170h] BYREF
  int v130; // [rsp+D0h] [rbp-160h]
  _QWORD v131[2]; // [rsp+E0h] [rbp-150h] BYREF
  int v132; // [rsp+F0h] [rbp-140h]
  char *v133; // [rsp+100h] [rbp-130h] BYREF
  int v134; // [rsp+108h] [rbp-128h]
  int v135; // [rsp+10Ch] [rbp-124h]
  int v136; // [rsp+110h] [rbp-120h]
  __m128i *v137; // [rsp+120h] [rbp-110h] BYREF
  __int64 v138; // [rsp+128h] [rbp-108h]
  int v139; // [rsp+130h] [rbp-100h]
  __m128i *v140; // [rsp+140h] [rbp-F0h] BYREF
  __int64 v141; // [rsp+148h] [rbp-E8h]
  int v142; // [rsp+150h] [rbp-E0h]
  _QWORD v143[2]; // [rsp+160h] [rbp-D0h] BYREF
  int v144; // [rsp+170h] [rbp-C0h]
  __m128i *v145; // [rsp+180h] [rbp-B0h] BYREF
  unsigned int v146; // [rsp+188h] [rbp-A8h]
  int v147; // [rsp+18Ch] [rbp-A4h]
  int v148; // [rsp+190h] [rbp-A0h]
  __m128i *v149; // [rsp+1A0h] [rbp-90h] BYREF
  unsigned int v150; // [rsp+1A8h] [rbp-88h]
  int v151; // [rsp+1ACh] [rbp-84h]
  int v152; // [rsp+1B0h] [rbp-80h]
  int v153[2]; // [rsp+1C0h] [rbp-70h] BYREF
  __int64 v154; // [rsp+1C8h] [rbp-68h]
  int v155; // [rsp+1D0h] [rbp-60h]
  __int64 v156[10]; // [rsp+1E0h] [rbp-50h] BYREF

  if ( *(_DWORD *)(a3 + 12) )
  {
    v8 = *(__int64 **)a2;
    v10 = *(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8);
    if ( *(_QWORD *)a2 != v10 )
    {
      while ( (unsigned __int64)*v8 <= 1 )
      {
        if ( (__int64 *)v10 == ++v8 )
          goto LABEL_3;
      }
      if ( (__int64 *)v10 != v8 )
      {
        v70 = *v8;
        do
        {
          v71 = *(unsigned int *)(a3 + 8);
          v72 = *(_DWORD *)(v70 + 12);
          v73 = *(__int64 **)a3;
          v74 = v71 - 1;
          v71 *= 16;
          v75 = (__int64 *)(*(_QWORD *)a3 + v71);
          v76 = 16LL * (v72 & v74);
          v77 = (__int64 *)(*(_QWORD *)a3 + v76);
          if ( v76 != v71 )
          {
            for ( i = (__int64 *)(*(_QWORD *)a3 + v76); v75 != i; i += 2 )
            {
              v79 = *i;
              if ( (unsigned __int64)*i > 1 )
              {
                if ( *(_DWORD *)(v79 + 12) == v72 && v79 == v70 )
                {
LABEL_170:
                  sub_1872CE0("");
                  sub_1873130(107, 1139);
                }
              }
              else if ( !v79 )
              {
                goto LABEL_96;
              }
            }
          }
          for ( ; v77 != v73; v73 += 2 )
          {
            v104 = *v73;
            if ( (unsigned __int64)*v73 > 1 )
            {
              if ( *(_DWORD *)(v104 + 12) == v72 && v104 == v70 )
                goto LABEL_170;
            }
            else if ( !v104 )
            {
              break;
            }
          }
LABEL_96:
          v80 = v8 + 1;
          if ( (__int64 *)v10 == v8 + 1 )
            break;
          while ( 1 )
          {
            v70 = *v80;
            v8 = v80;
            if ( (unsigned __int64)*v80 > 1 )
              break;
            if ( (__int64 *)v10 == ++v80 )
              goto LABEL_3;
          }
        }
        while ( (__int64 *)v10 != v80 );
      }
    }
  }
LABEL_3:
  *(_QWORD *)v128 = 0;
  v11 = (_OWORD *)sub_186B270(0x40u);
  v129[0] = v11;
  *v11 = 0;
  v11[1] = 0;
  v11[2] = 0;
  v11[3] = 0;
  v130 = 0;
  v129[1] = &byte_8;
  sub_51CCF0((__int64)a1, a2, (unsigned int **)v128, (__int64)v129);
  v107 = (_OWORD *)sub_186B270(0x40u);
  *v107 = 0;
  v131[0] = v107;
  v107[1] = 0;
  v107[2] = 0;
  v107[3] = 0;
  v132 = 0;
  v131[1] = 8;
  v12 = *(unsigned int *)(a2 + 8);
  v13 = 8 * v12;
  v134 = *(_DWORD *)(a2 + 8);
  v14 = (char *)sub_186B270(8 * v12);
  v112 = v14;
  if ( (_DWORD)v12 )
    memset(v14, 0, 8 * v12);
  v15 = v12 - 1;
  v16 = *(__int64 **)a2;
  v133 = v112;
  for ( j = &v16[(unsigned __int64)v13 / 8]; j != v16; *(_QWORD *)v20 = v21 )
  {
    while ( (unsigned __int64)*v16 <= 1 )
    {
      if ( j == ++v16 )
        goto LABEL_14;
    }
    v18 = 8LL * (*(_DWORD *)(*v16 + 12) & v15);
    v19 = &v112[v18];
    if ( v13 == v18 )
    {
LABEL_102:
      v20 = v112;
      if ( v112 == v19 )
      {
LABEL_159:
        sub_1872CE0("");
        sub_1873130(114, 181);
      }
      while ( *(_QWORD *)v20 )
      {
        v20 += 8;
        if ( v19 == v20 )
          goto LABEL_159;
      }
    }
    else
    {
      v20 = &v112[v18];
      while ( *(_QWORD *)v20 )
      {
        v20 += 8;
        if ( &v112[v13] == v20 )
          goto LABEL_102;
      }
    }
    v21 = *v16++;
  }
LABEL_14:
  v136 = 0;
  v135 = *(_DWORD *)(a2 + 12);
  v22 = sub_186B270(0x80u);
  *(_QWORD *)v22 = 0;
  *(_DWORD *)(v22 + 8) = 0;
  *(_QWORD *)(v22 + 16) = 0;
  *(_DWORD *)(v22 + 24) = 0;
  *(_QWORD *)(v22 + 32) = 0;
  *(_DWORD *)(v22 + 40) = 0;
  *(_QWORD *)(v22 + 48) = 0;
  *(_DWORD *)(v22 + 56) = 0;
  *(_QWORD *)(v22 + 64) = 0;
  *(_DWORD *)(v22 + 72) = 0;
  *(_QWORD *)(v22 + 80) = 0;
  *(_DWORD *)(v22 + 88) = 0;
  *(_QWORD *)(v22 + 96) = 0;
  *(_DWORD *)(v22 + 104) = 0;
  *(_QWORD *)(v22 + 112) = 0;
  *(_DWORD *)(v22 + 120) = 0;
  v137 = (__m128i *)v22;
  v139 = 0;
  v138 = 8;
  sub_51D2B0((__int64)a1, (__int64)&v133, (__int64)&v137);
  v23 = v138;
  v119 = v137;
  v125 = HIDWORD(v138);
  v24 = sub_186B270(0x80u);
  *(_QWORD *)v24 = 0;
  *(_DWORD *)(v24 + 8) = 0;
  *(_QWORD *)(v24 + 16) = 0;
  *(_DWORD *)(v24 + 24) = 0;
  *(_QWORD *)(v24 + 32) = 0;
  *(_DWORD *)(v24 + 40) = 0;
  *(_QWORD *)(v24 + 48) = 0;
  *(_DWORD *)(v24 + 56) = 0;
  *(_QWORD *)(v24 + 64) = 0;
  *(_DWORD *)(v24 + 72) = 0;
  *(_QWORD *)(v24 + 80) = 0;
  *(_DWORD *)(v24 + 88) = 0;
  *(_QWORD *)(v24 + 96) = 0;
  *(_DWORD *)(v24 + 104) = 0;
  *(_QWORD *)(v24 + 112) = 0;
  *(_DWORD *)(v24 + 120) = 0;
  v140 = (__m128i *)v24;
  v142 = 0;
  v141 = 8;
  sub_51D2B0((__int64)a1, (__int64)&v133, (__int64)&v140);
  v25 = v141;
  v110 = v140;
  v123 = HIDWORD(v141);
  v26 = sub_186B270(0x80u);
  *(_QWORD *)v26 = 0;
  *(_DWORD *)(v26 + 8) = 0;
  *(_QWORD *)(v26 + 16) = 0;
  *(_DWORD *)(v26 + 24) = 0;
  *(_QWORD *)(v26 + 32) = 0;
  *(_DWORD *)(v26 + 40) = 0;
  *(_QWORD *)(v26 + 48) = 0;
  *(_DWORD *)(v26 + 56) = 0;
  *(_QWORD *)(v26 + 64) = 0;
  *(_DWORD *)(v26 + 72) = 0;
  *(_QWORD *)(v26 + 80) = 0;
  *(_DWORD *)(v26 + 88) = 0;
  *(_QWORD *)(v26 + 96) = 0;
  *(_DWORD *)(v26 + 104) = 0;
  *(_QWORD *)(v26 + 112) = 0;
  *(_DWORD *)(v26 + 120) = 0;
  v143[0] = v26;
  v143[1] = 8;
  v144 = 0;
  sub_51D2B0((__int64)a1, (__int64)v131, (__int64)v143);
  v146 = v23;
  v108 = (void *)v143[0];
  v118 = 16LL * v23;
  v27 = (__m128i *)sub_186B270(v118);
  v29 = v27;
  v30 = &v27[v118 / 0x10];
  if ( v23 )
  {
    do
    {
      v27->m128i_i64[0] = 0;
      ++v27;
      v27[-1].m128i_i32[2] = 0;
    }
    while ( v27 != v30 );
  }
  m128i_i64 = 16LL * v23;
  v117 = v23 - 1;
  v32 = &v29[v118 / 0x10];
  v33 = &v119[v118 / 0x10];
  for ( k = v119; v33 != k; *v36 = v37 )
  {
    while ( k->m128i_i64[0] <= 1uLL )
    {
      if ( v33 == ++k )
        goto LABEL_25;
    }
    v35 = 16LL * (*(_DWORD *)(k->m128i_i64[0] + 12) & v117);
    m128i_i64 = (__int64)v29[(unsigned __int64)v35 / 0x10].m128i_i64;
    if ( v118 == v35 )
    {
LABEL_107:
      if ( v29 == (__m128i *)m128i_i64 )
      {
LABEL_160:
        sub_1872CE0("");
        sub_1873130(114, 181);
      }
      v36 = v29;
      while ( v36->m128i_i64[0] )
      {
        if ( (__m128i *)m128i_i64 == ++v36 )
          goto LABEL_160;
      }
    }
    else
    {
      v36 = &v29[(unsigned __int64)v35 / 0x10];
      while ( v36->m128i_i64[0] )
      {
        if ( v32 == ++v36 )
          goto LABEL_107;
      }
    }
    v37 = _mm_loadu_si128(k++);
  }
LABEL_25:
  v148 = 0;
  v145 = v29;
  v147 = v125;
  sub_52C2E0(&v145, v143, m128i_i64, v32, v28);
  v150 = v25;
  v109 = v145;
  v38 = (__m128i *)sub_186B270(16LL * v25);
  v39 = 16LL * v25;
  v40 = v38;
  v41 = &v38[(unsigned __int64)v39 / 0x10];
  if ( v25 )
  {
    do
    {
      v38->m128i_i64[0] = 0;
      ++v38;
      v38[-1].m128i_i32[2] = 0;
    }
    while ( v38 != v41 );
  }
  v126 = v25 - 1;
  v42 = &v110[(unsigned __int64)v39 / 0x10];
  for ( m = v110; v42 != m; *v45 = v46 )
  {
    while ( m->m128i_i64[0] <= 1uLL )
    {
      if ( v42 == ++m )
        goto LABEL_36;
    }
    v44 = 16LL * (*(_DWORD *)(m->m128i_i64[0] + 12) & v126);
    v41 = &v40[(unsigned __int64)v44 / 0x10];
    if ( v39 == v44 )
    {
LABEL_112:
      if ( v40 == v41 )
      {
LABEL_158:
        sub_1872CE0("");
        sub_1873130(114, 181);
      }
      v45 = v40;
      while ( v45->m128i_i64[0] )
      {
        if ( v41 == ++v45 )
          goto LABEL_158;
      }
    }
    else
    {
      v45 = &v40[(unsigned __int64)v44 / 0x10];
      while ( v45->m128i_i64[0] )
      {
        if ( &v40[(unsigned __int64)v39 / 0x10] == ++v45 )
          goto LABEL_112;
      }
    }
    v46 = _mm_loadu_si128(m++);
  }
LABEL_36:
  v152 = 0;
  v149 = v40;
  v151 = v123;
  sub_52C2E0(&v149, v143, v41, v39, v40);
  v114 = v149;
  ptr = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)v153 = ptr;
  *ptr = 0;
  ptr[1] = 0;
  ptr[2] = 0;
  ptr[3] = 0;
  v155 = 0;
  v154 = 8;
  v120 = *(_QWORD **)v128;
  if ( *(_QWORD *)v128 )
  {
    v115 = *(_QWORD *)v128 + 8LL * *(unsigned int *)(*(_QWORD *)v128 - 4LL);
    if ( *(_QWORD *)v128 != v115 )
    {
      do
      {
        v121 = *v120;
        v47 = *(__int64 **)sub_63BA90(a1[1], *v120);
        v48 = a1[1];
        if ( v47 )
        {
          v49 = &v47[*((unsigned int *)v47 - 1)];
          v124 = v49;
          for ( n = sub_63BB50(v48, v121); v124 != v47; ++v47 )
          {
            while ( 1 )
            {
              v50 = *v47;
              v51 = 0;
              if ( *(_DWORD *)(*v47 + 68) )
                break;
LABEL_117:
              sub_52A8F0((__int64)a1, v50, 0xFFFFFFFF, (__int64)a5, (__m128)0LL);
              if ( v124 == ++v47 )
                goto LABEL_45;
            }
            while ( (unsigned int)sub_63BB50(
                                    a1[1],
                                    *(_QWORD *)((*(_QWORD *)(v50 + 8LL * v51 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16)) < n )
            {
              if ( ++v51 >= *(_DWORD *)(v50 + 68) )
                goto LABEL_117;
            }
          }
        }
        else
        {
          sub_63BB50(v48, v121);
        }
LABEL_45:
        v52 = *(_DWORD *)(v121 + 12);
        v53 = 16LL * (v52 & v117);
        v54 = &v119[(unsigned __int64)v53 / 0x10];
        ii = &v119[(unsigned __int64)v53 / 0x10];
        if ( v118 != v53 )
        {
          do
          {
            v56 = ii->m128i_i64[0];
            if ( ii->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v56 + 12) == v52 && v121 == v56 )
              {
LABEL_119:
                v81 = ii->m128i_i32[2];
                v82 = *((unsigned int *)a1 + 8);
                v83 = a1[3];
                v84 = v82 - 1;
                v82 *= 16;
                v85 = (__int64 *)((char *)v83 + v82);
                v86 = 16LL * (v52 & v84);
                v87 = &v83[(unsigned __int64)v86 / 8];
                v88 = &v83[(unsigned __int64)v86 / 8];
                if ( v86 != v82 )
                {
                  do
                  {
                    v89 = (__int64 *)*v88;
                    if ( (unsigned __int64)*v88 > 1 )
                    {
                      if ( *((_DWORD *)v89 + 3) == v52 && (__int64 *)v121 == v89 )
                      {
                        v89 = v88;
                        goto LABEL_126;
                      }
                    }
                    else if ( !v89 )
                    {
                      goto LABEL_126;
                    }
                    v88 += 2;
                  }
                  while ( v85 != v88 );
                }
                if ( v83 == v87 )
                {
LABEL_149:
                  v89 = nullptr;
                }
                else
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      v89 = (__int64 *)*v83;
                      if ( (unsigned __int64)*v83 > 1 )
                        break;
                      if ( !v89 )
                        goto LABEL_126;
                      v83 += 2;
                      if ( v87 == v83 )
                        goto LABEL_149;
                    }
                    if ( *((_DWORD *)v89 + 3) == v52 && (__int64 *)v121 == v89 )
                      break;
                    v83 += 2;
                    if ( v87 == v83 )
                      goto LABEL_149;
                  }
                  v89 = v83;
                }
LABEL_126:
                v90 = sub_4DABC0(*((_DWORD *)v89 + 2), v81);
                v91 = (_QWORD *)*a5;
                if ( *a5 )
                {
                  v92 = *((_DWORD *)v91 - 1);
                  if ( v92 == *((_DWORD *)v91 - 2) )
                  {
                    v98 = (3 * v92 + 1) >> 1;
                    v99 = 8 * v98 + 8;
                    if ( 8 * v92 + 8 >= v99 || v92 >= v98 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v156, "Overflow encountered when expanding vector");
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, v156);
                      sub_233E40((__int64)v156);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v100 = (unsigned int *)sub_186B300(v91 - 1, v99);
                    v91 = v100 + 2;
                    *v100 = v98;
                    *a5 = v100 + 2;
                    LODWORD(v100) = v100[1];
                    v95 = &v91[(unsigned int)v100];
                    v94 = (_DWORD)v100 + 1;
                  }
                  else
                  {
                    v93 = v92;
                    v94 = v92 + 1;
                    v95 = &v91[v93];
                  }
                }
                else
                {
                  v105 = (_QWORD *)sub_186B270(0x18u);
                  *v105 = 2;
                  v91 = v105 + 1;
                  *a5 = v105 + 1;
                  v95 = v105 + 1;
                  v94 = 1;
                }
                *v95 = v90;
                *((_DWORD *)v91 - 1) = v94;
                v96 = a5[1];
                if ( v96 )
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v96 + 16LL))(v96, v90);
                goto LABEL_52;
              }
            }
            else if ( !v56 )
            {
              goto LABEL_52;
            }
            ++ii;
          }
          while ( v33 != ii );
        }
        for ( ii = v119; v54 != ii; ++ii )
        {
          v97 = ii->m128i_i64[0];
          if ( ii->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v97 + 12) == v52 && v121 == v97 )
              goto LABEL_119;
          }
          else if ( !v97 )
          {
            break;
          }
        }
LABEL_52:
        ++v120;
      }
      while ( (_QWORD *)v115 != v120 );
    }
  }
  if ( (unsigned __int8)sub_64B1A0(*a1) )
    sub_528E40(
      a1,
      (_QWORD **)v128,
      (__int64)&v133,
      (__int64)&v140,
      (__int64)&v137,
      (__int64)v143,
      (__m128)0LL,
      (__int64)a5);
  else
    sub_528E40(
      a1,
      (_QWORD **)v128,
      (__int64)v153,
      (__int64)&v140,
      (__int64)&v137,
      (__int64)v143,
      (__m128)0LL,
      (__int64)a5);
  if ( a4 )
  {
    v57 = *(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8);
    v58 = *(__int64 **)a2;
    if ( *(_QWORD *)a2 != v57 )
    {
      while ( (unsigned __int64)*v58 <= 1 )
      {
        if ( (__int64 *)v57 == ++v58 )
          goto LABEL_70;
      }
      v59 = v58;
      if ( (__int64 *)v57 != v58 )
      {
        v60 = *v58;
LABEL_62:
        v61 = sub_4DB350(**a1, v60);
        v62 = (_QWORD *)*a5;
        if ( *a5 )
        {
          v63 = *((_DWORD *)v62 - 1);
          if ( v63 == *((_DWORD *)v62 - 2) )
          {
            v101 = (3 * v63 + 1) >> 1;
            v102 = 8 * v101 + 8;
            if ( 8 * v63 + 8 >= v102 || v63 >= v101 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v156, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, v156);
              sub_233E40((__int64)v156);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v103 = (unsigned int *)sub_186B300(v62 - 1, v102);
            v62 = v103 + 2;
            *v103 = v101;
            *a5 = v103 + 2;
            LODWORD(v103) = v103[1];
            v66 = &v62[(unsigned int)v103];
            v65 = (_DWORD)v103 + 1;
          }
          else
          {
            v64 = v63;
            v65 = v63 + 1;
            v66 = &v62[v64];
          }
        }
        else
        {
          v106 = (_QWORD *)sub_186B270(0x18u);
          *v106 = 2;
          v62 = v106 + 1;
          *a5 = v106 + 1;
          v66 = v106 + 1;
          v65 = 1;
        }
        *v66 = v61;
        *((_DWORD *)v62 - 1) = v65;
        v67 = a5[1];
        if ( v67 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v67 + 16LL))(v67, v61);
        v68 = v59;
        while ( (__int64 *)v57 != ++v68 )
        {
          v60 = *v68;
          if ( (unsigned __int64)*v68 > 1 )
          {
            v59 = v68;
            if ( (__int64 *)v57 != v68 )
              goto LABEL_62;
            break;
          }
        }
      }
    }
  }
LABEL_70:
  sub_186B220(ptr);
  if ( v114 )
    sub_186B220(v114);
  if ( v109 )
    sub_186B220(v109);
  if ( v108 )
    sub_186B220(v108);
  if ( v110 )
    sub_186B220(v110);
  if ( v119 )
    sub_186B220(v119);
  sub_186B220(v112);
  sub_186B220(v107);
  if ( v129[0] )
    sub_186B220(v129[0]);
  result = *(_QWORD **)v128;
  if ( *(_QWORD *)v128 )
    return (_QWORD *)sub_186B220((void *)(*(_QWORD *)v128 - 8LL));
  return result;
}

