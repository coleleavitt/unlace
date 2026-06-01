void __fastcall sub_12AD6E0(__int64 a1, __int64 *a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6, char *name)
{
  __m128i si128; // xmm1
  __m128i v11; // xmm2
  char *v12; // rax
  size_t v13; // rax
  __int64 v14; // rdi
  size_t v15; // r15
  void *v16; // r9
  size_t v17; // rax
  __int64 v18; // r15
  __int64 *v19; // rsi
  __m128i v20; // xmm0
  __m256i *v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  void ****v24; // r15
  size_t v25; // rcx
  void ***v26; // rdi
  char v27; // al
  __int64 *v28; // rdi
  __int64 v29; // rdx
  size_t v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  char *v33; // r15
  char *v34; // rcx
  char *v35; // rdi
  char v36; // al
  __int64 *v37; // rdi
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  char *v41; // rdx
  char *v42; // r14
  __int64 v43; // r15
  __m256i *v44; // r8
  __int64 v45; // rsi
  char v46; // al
  size_t v47; // r8
  void *v48; // rax
  __int64 v49; // r15
  size_t v50; // rcx
  char *v51; // rax
  __int64 v52; // rdx
  __m256i *v53; // rdi
  void ***v54; // r8
  void ***v55; // rax
  void ***v56; // rdi
  char v57; // al
  size_t v58; // rax
  void **v59; // r15
  __int64 v60; // rax
  char *v61; // rcx
  char *v62; // rax
  char *v63; // rdi
  void **v64; // rdi
  void **v65; // rax
  _QWORD *v66; // rdi
  char *v67; // r8
  char *v68; // rax
  char *v69; // rdi
  char v70; // al
  size_t v71; // rax
  __int64 v72; // rax
  char *v73; // rcx
  char *v74; // rax
  char *v75; // rdi
  void *v76; // rdi
  char *v77; // rax
  char *v78; // r15
  void *v79; // rdi
  __int64 v80; // rax
  char **v81; // r15
  char *v82; // r9
  __m256i *v83; // r8
  __int64 v84; // rsi
  char v85; // al
  __int64 v86; // rdx
  __int64 v87; // rsi
  __int64 v88; // rcx
  __m128i *v89; // rax
  __m128i *v90; // rdx
  __m256i *v91; // rdi
  unsigned __int64 v92; // rax
  __int64 v93; // rdx
  _QWORD *v94; // r15
  _QWORD *v95; // r12
  __int64 v96; // r14
  size_t v97; // r12
  const void *v98; // r15
  _BYTE *v99; // rsi
  __int64 v100; // rdx
  __int64 v101; // r15
  void *v102; // r9
  unsigned __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rdi
  void *v106; // rax
  size_t v107; // r15
  size_t v108; // rax
  __m128i v109; // xmm0
  char *v110; // rax
  __int64 v111; // rax
  _QWORD *v112; // r15
  __int64 v113; // r14
  __int64 v114; // rdx
  __int64 v115; // rdx
  unsigned __int64 v116; // r12
  __int64 v117; // rdx
  size_t v118; // r9
  __int64 v119; // rsi
  __int64 v120; // rcx
  __m128i *v121; // rax
  __m128i *v122; // rdx
  void *v123; // rdi
  __int64 *v124; // rdi
  __int64 *v125; // rdi
  __int64 v126; // rdx
  __int64 v127; // rdx
  size_t v128; // r8
  void *src; // [rsp+8h] [rbp-310h] BYREF
  void **v130; // [rsp+10h] [rbp-308h]
  char *v131; // [rsp+18h] [rbp-300h] BYREF
  size_t v132; // [rsp+20h] [rbp-2F8h]
  void *v133; // [rsp+28h] [rbp-2F0h]
  __int64 *v134; // [rsp+30h] [rbp-2E8h]
  __int64 v135; // [rsp+38h] [rbp-2E0h]
  _QWORD v136[2]; // [rsp+40h] [rbp-2D8h] BYREF
  _QWORD v137[4]; // [rsp+50h] [rbp-2C8h] BYREF
  _QWORD v138[4]; // [rsp+70h] [rbp-2A8h] BYREF
  __int16 v139; // [rsp+90h] [rbp-288h]
  _BYTE v140[32]; // [rsp+A0h] [rbp-278h] BYREF
  __int16 v141; // [rsp+C0h] [rbp-258h]
  _BYTE v142[32]; // [rsp+D0h] [rbp-248h] BYREF
  __int16 v143; // [rsp+F0h] [rbp-228h]
  void *v144[2]; // [rsp+100h] [rbp-218h] BYREF
  void *v145; // [rsp+110h] [rbp-208h]
  size_t v146; // [rsp+118h] [rbp-200h]
  void *v147; // [rsp+120h] [rbp-1F8h]
  size_t v148; // [rsp+128h] [rbp-1F0h]
  void *ptr; // [rsp+130h] [rbp-1E8h] BYREF
  size_t n[2]; // [rsp+138h] [rbp-1E0h]
  _BYTE v151[88]; // [rsp+148h] [rbp-1D0h] BYREF
  void *v152; // [rsp+1A0h] [rbp-178h] BYREF
  __m128i v153; // [rsp+1A8h] [rbp-170h]
  _BYTE v154[136]; // [rsp+1B8h] [rbp-160h] BYREF
  __m256i v155; // [rsp+240h] [rbp-D8h] BYREF
  void *v156; // [rsp+260h] [rbp-B8h]
  _BYTE v157[16]; // [rsp+270h] [rbp-A8h] BYREF
  __int16 v158; // [rsp+280h] [rbp-98h]

  v136[0] = a5;
  v136[1] = a6;
  sub_121FCF0(a1, (__int64)a2, a3, a4);
  *(_QWORD *)(a1 + 4992) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  *(_QWORD *)a1 = off_2C3F860;
  v11 = _mm_load_si128((const __m128i *)&xmmword_23A9F40);
  v134 = (__int64 *)(a1 + 5000);
  *(_QWORD *)(a1 + 4984) = a1 + 5000;
  *(_QWORD *)(a1 + 5016) = a1 + 5032;
  *(_BYTE *)(a1 + 5000) = 0;
  *(_QWORD *)(a1 + 5024) = 0;
  *(_BYTE *)(a1 + 5032) = 0;
  v133 = (void *)(a1 + 5032);
  v130 = &v152;
  v152 = v154;
  v153 = si128;
  ptr = v151;
  *(__m128i *)n = v11;
  v12 = getenv(name);
  if ( !v12 )
  {
    v99 = (_BYTE *)a2[13];
    v100 = (__int64)&v99[a2[14]];
    v155.m256i_i64[0] = (__int64)&v155.m256i_i64[2];
    src = &v155.m256i_u64[2];
    sub_12A5420(&v155, v99, v100);
    v101 = v155.m256i_i64[1];
    if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v155.m256i_i64[1]) <= 6 )
      std::__throw_length_error("basic_string::append");
    v102 = (void *)(v155.m256i_i64[1] + 7);
    if ( (void *)v155.m256i_i64[0] == src )
      v103 = 15;
    else
      v103 = v155.m256i_u64[2];
    if ( (unsigned __int64)v102 > v103 )
    {
      src = (void *)(v155.m256i_i64[1] + 7);
      sub_998B30((__int64)&v155, v155.m256i_u64[1], 0, "/../../", 7u);
      v102 = src;
    }
    else
    {
      v104 = v155.m256i_i64[1] + v155.m256i_i64[0];
      *(_DWORD *)v104 = 791555631;
      *(_WORD *)(v104 + 4) = 11822;
      *(_BYTE *)(v104 + 6) = 47;
    }
    v155.m256i_i64[1] = (__int64)v102;
    v105 = 0;
    *(_BYTE *)(v155.m256i_i64[0] + v101 + 7) = 0;
    v107 = v155.m256i_u64[1];
    v106 = (void *)v155.m256i_i64[0];
    v153.m128i_i64[0] = 0;
    if ( v155.m256i_i64[1] > (unsigned __int64)v153.m128i_i64[1] )
    {
      src = (void *)v155.m256i_i64[0];
      sub_2236E10(v130, v130 + 3, v155.m256i_i64[1], 1);
      v105 = v153.m128i_i64[0];
      v106 = src;
    }
    if ( v107 )
    {
      memcpy((char *)v152 + v105, v106, v107);
      v105 = v153.m128i_i64[0];
    }
    v153.m128i_i64[0] = v107 + v105;
    if ( (unsigned __int64 *)v155.m256i_i64[0] != &v155.m256i_u64[2] )
      operator delete((void *)v155.m256i_i64[0]);
    n[0] = 0;
    v108 = 0;
    if ( n[1] <= 0x12 )
    {
      sub_2236E10(&ptr, v151, 19, 1);
      v108 = n[0];
    }
    v109 = _mm_load_si128((const __m128i *)&xmmword_23A9F70);
    v110 = (char *)ptr + v108;
    *((_WORD *)v110 + 8) = 28521;
    *(__m128i *)v110 = v109;
    v110[18] = 110;
    n[0] += 19LL;
    goto LABEL_14;
  }
  src = v12;
  v13 = strlen(v12);
  v14 = 0;
  v153.m128i_i64[0] = 0;
  v15 = v13;
  v16 = src;
  if ( v153.m128i_i64[1] >= v13 )
  {
    if ( !v13 )
      goto LABEL_5;
    goto LABEL_4;
  }
  sub_2236E10(v130, v154, v13, 1);
  v14 = v153.m128i_i64[0];
  v16 = src;
  if ( v15 )
  {
LABEL_4:
    memcpy((char *)v152 + v14, v16, v15);
    v14 = v153.m128i_i64[0];
  }
LABEL_5:
  v144[1] = &dword_14 + 2;
  v144[0] = "environment variable '";
  v153.m128i_i64[0] = v15 + v14;
  v145 = name;
  v17 = strlen(name);
  v148 = 1;
  v147 = "'";
  v18 = v17 + 23;
  v19 = &v155.m256i_i64[3];
  v146 = v17;
  v155.m256i_i64[0] = (__int64)&v155.m256i_i64[3];
  *(__m128i *)&v155.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A9F40);
  if ( v17 + 23 > 0x50 )
  {
    sub_2236E10(&v155, &v155.m256i_u64[3], v17 + 23, 1);
    v19 = (__int64 *)v155.m256i_i64[0];
  }
  v20 = _mm_load_si128((const __m128i *)&xmmword_23A9F60);
  v155.m256i_i64[1] = v18;
  *((_DWORD *)v19 + 4) = 1701601889;
  *(__m128i *)v19 = v20;
  *((_WORD *)v19 + 10) = 10016;
  v21 = (__m256i *)v155.m256i_i64[0];
  if ( v146 )
  {
    memmove((void *)(v155.m256i_i64[0] + 22), v145, v146);
    v21 = (__m256i *)v155.m256i_i64[0];
  }
  if ( v148 )
  {
    memmove((char *)&v21->m256i_u64[2] + v146 + 6, v147, v148);
    v21 = (__m256i *)v155.m256i_i64[0];
    if ( (unsigned __int64 *)v155.m256i_i64[0] != &v155.m256i_u64[3] )
      goto LABEL_11;
LABEL_50:
    v49 = v155.m256i_i64[1];
    v50 = n[0];
    if ( v155.m256i_i64[1] <= n[0] )
    {
      v53 = v21;
      if ( v155.m256i_i64[1] )
      {
        memmove(ptr, v21, v155.m256i_u64[1]);
        v53 = (__m256i *)v155.m256i_i64[0];
      }
    }
    else
    {
      if ( v155.m256i_i64[1] > n[1] )
      {
        n[0] = 0;
        sub_2236E10(&ptr, v151, v155.m256i_i64[1], 1);
        v52 = v155.m256i_i64[1];
        v53 = (__m256i *)v155.m256i_i64[0];
        v50 = 0;
        v51 = (char *)ptr;
        v21 = (__m256i *)v155.m256i_i64[0];
      }
      else
      {
        v51 = (char *)ptr;
        if ( n[0] )
        {
          memmove(ptr, v21, n[0]);
          v50 = n[0];
          v52 = v155.m256i_i64[1];
          v53 = (__m256i *)v155.m256i_i64[0];
          v21 = (__m256i *)(v155.m256i_i64[0] + n[0]);
          v51 = (char *)ptr + n[0];
        }
        else
        {
          v52 = v155.m256i_i64[1];
          v53 = v21;
        }
      }
      if ( v21 != (__m256i *)&v53->m256i_i8[v52] )
      {
        memcpy(v51, v21, v52 - v50);
        v53 = (__m256i *)v155.m256i_i64[0];
      }
    }
    n[0] = v49;
    v155.m256i_i64[1] = 0;
    if ( v53 != (__m256i *)&v155.m256i_u64[3] )
      free(v53);
    goto LABEL_14;
  }
  if ( v21 == (__m256i *)&v155.m256i_u64[3] )
    goto LABEL_50;
LABEL_11:
  if ( ptr != v151 )
  {
    free(ptr);
    v21 = (__m256i *)v155.m256i_i64[0];
  }
  ptr = v21;
  *(__m128i *)n = _mm_loadu_si128((const __m128i *)&v155.m256i_u64[1]);
LABEL_14:
  v155.m256i_i32[0] = 3316;
  v135 = v153.m128i_i64[0];
  src = v152;
  v22 = sub_21B6DA0(a4, &v155, 1);
  v23 = *(_QWORD *)(a4 + 8);
  v24 = (void ****)(v23 + 8LL * (unsigned int)v22);
  v25 = v23 + 8 * HIDWORD(v22);
  if ( v24 == (void ****)v25 )
    goto LABEL_18;
  while ( 1 )
  {
    v26 = *v24;
    if ( *v24 )
    {
      v132 = v25;
      v27 = sub_21B9810(v26, 3316);
      v25 = v132;
      LOBYTE(v131) = v27;
      if ( v27 )
        break;
    }
    if ( (void ****)v25 == ++v24 )
      goto LABEL_18;
  }
  if ( (void ****)v132 == v24 )
  {
LABEL_18:
    if ( src )
    {
      v155.m256i_i64[0] = (__int64)&v155.m256i_i64[2];
      v131 = &v155.m256i_i8[16];
      sub_12A54E0(&v155, src, (__int64)src + v135);
      v28 = *(__int64 **)(a1 + 5016);
      if ( (unsigned __int64 *)v155.m256i_i64[0] != &v155.m256i_u64[2] )
      {
        if ( v133 == v28 )
        {
          src = (void *)v155.m256i_i64[2];
          *(_QWORD *)(a1 + 5016) = v155.m256i_i64[0];
          *(__m128 *)(a1 + 5024) = _mm_loadh_ps((const double *)&src);
        }
        else
        {
          src = (void *)v155.m256i_i64[2];
          v29 = *(_QWORD *)(a1 + 5032);
          *(_QWORD *)(a1 + 5016) = v155.m256i_i64[0];
          *(__m128 *)(a1 + 5024) = _mm_loadh_ps((const double *)&src);
          if ( v28 )
          {
            v155.m256i_i64[0] = (__int64)v28;
            v155.m256i_i64[2] = v29;
LABEL_23:
            v155.m256i_i64[1] = 0;
            *(_BYTE *)v28 = 0;
            if ( (unsigned __int64 *)v155.m256i_i64[0] != &v155.m256i_u64[2] )
              operator delete((void *)v155.m256i_i64[0]);
            LOBYTE(v131) = 0;
            goto LABEL_26;
          }
        }
        v28 = &v155.m256i_i64[2];
        v155.m256i_i64[0] = (__int64)&v155.m256i_i64[2];
        goto LABEL_23;
      }
      v115 = v155.m256i_i64[1];
      if ( v155.m256i_i64[1] )
      {
        if ( v155.m256i_i64[1] == 1 )
          *(_BYTE *)v28 = v155.m256i_i8[16];
        else
          memcpy(v28, (const void *)v155.m256i_i64[0], v155.m256i_u64[1]);
        v115 = v155.m256i_i64[1];
        v28 = *(__int64 **)(a1 + 5016);
      }
    }
    else
    {
      v155.m256i_i8[16] = 0;
      v28 = *(__int64 **)(a1 + 5016);
      v115 = 0;
      v155.m256i_i64[0] = (__int64)&v155.m256i_i64[2];
    }
    *(_QWORD *)(a1 + 5024) = v115;
    *((_BYTE *)v28 + v115) = 0;
    v28 = (__int64 *)v155.m256i_i64[0];
    goto LABEL_23;
  }
  do
  {
    v54 = *v24;
    v55 = (void ***)(*v24)[2];
    if ( !v55 )
      v55 = *v24;
    ++v24;
    *((_BYTE *)v55 + 44) |= 1u;
    if ( v24 == (void ****)v25 )
      break;
    while ( 1 )
    {
      v56 = *v24;
      if ( *v24 )
      {
        v132 = v25;
        src = v54;
        v57 = sub_21B9810(v56, 3316);
        v54 = (void ***)src;
        v25 = v132;
        if ( v57 )
          break;
      }
      if ( (void ****)v25 == ++v24 )
        goto LABEL_67;
    }
  }
  while ( (void ****)v132 != v24 );
LABEL_67:
  src = *v54[6];
  v58 = strlen((const char *)src);
  sub_99BDC0((_QWORD *)(a1 + 5016), 0, *(_QWORD *)(a1 + 5024), src, v58);
  LOWORD(v156) = 260;
  v155.m256i_i64[0] = a1 + 5016;
  if ( (unsigned int)sub_228C1E0(&v155, 0) )
  {
    sub_FC70B0((__int64)&v155, *a2, 0, 623);
    sub_AEC220((unsigned __int8 **)&v155, *(_BYTE **)(a1 + 5016), *(_QWORD *)(a1 + 5024));
    if ( (_BYTE)v158 )
    {
      sub_FC7790(v155.m256i_i64[2], v155.m256i_i64, SHIBYTE(v158));
      v155.m256i_i64[2] = 0;
      v158 = 0;
    }
    if ( v156 != v157 )
      operator delete(v156);
    v59 = (void **)v155.m256i_i64[0];
    if ( v155.m256i_i64[0] )
    {
      v60 = v155.m256i_i64[1];
      if ( v155.m256i_i64[1] )
      {
        if ( v155.m256i_i64[0] >= (unsigned __int64)v155.m256i_i64[1]
          && v155.m256i_i64[0] <= (unsigned __int64)(v155.m256i_i64[1] + 14848) )
        {
          v127 = *(unsigned int *)(v155.m256i_i64[1] + 14976);
          *(_DWORD *)(v155.m256i_i64[1] + 14976) = v127 + 1;
          *(_QWORD *)(v60 + 8 * v127 + 14848) = v59;
        }
        else
        {
          v61 = *(char **)(v155.m256i_i64[0] + 528);
          v62 = &v61[64 * (unsigned __int64)*(unsigned int *)(v155.m256i_i64[0] + 536)];
          if ( v61 != v62 )
          {
            do
            {
              while ( 1 )
              {
                v62 -= 64;
                v63 = *((char **)v62 + 3);
                if ( v63 == v62 + 40 )
                  break;
                v132 = (size_t)v62;
                src = v61;
                operator delete(v63);
                v61 = (char *)src;
                v62 = (char *)v132;
                if ( src == (void *)v132 )
                  goto LABEL_79;
              }
            }
            while ( v61 != v62 );
LABEL_79:
            v62 = (char *)v59[66];
          }
          if ( v62 != (char *)(v59 + 68) )
            free(v62);
          v64 = (void **)v59[52];
          if ( v64 != v59 + 54 )
            free(v64);
          v65 = v59 + 48;
          src = v59 + 8;
          do
          {
            while ( 1 )
            {
              v66 = *v65;
              if ( *v65 == v65 + 2 )
                break;
              v132 = (size_t)v65;
              operator delete(v66);
              v65 = (void **)(v132 - 32);
              if ( src == (void *)(v132 - 32) )
                goto LABEL_87;
            }
            v65 -= 4;
          }
          while ( src != v65 );
LABEL_87:
          operator delete(v59, 0x3A0u);
        }
      }
    }
  }
LABEL_26:
  v30 = *(_QWORD *)(a1 + 5016);
  v155.m256i_i32[0] = 2168;
  v132 = v30;
  v135 = *(_QWORD *)(a1 + 5024);
  v31 = sub_21B6DA0(a4, &v155, 1);
  v32 = *(_QWORD *)(a4 + 8);
  v33 = (char *)(v32 + 8LL * (unsigned int)v31);
  v34 = (char *)(v32 + 8 * HIDWORD(v31));
  if ( v33 == v34 )
    goto LABEL_30;
  while ( 1 )
  {
    v35 = *(char **)v33;
    if ( *(_QWORD *)v33 )
    {
      v133 = v34;
      v36 = sub_21B9810(v35, 2168);
      v34 = (char *)v133;
      LOBYTE(src) = v36;
      if ( v36 )
        break;
    }
    v33 += 8;
    if ( v34 == v33 )
      goto LABEL_30;
  }
  if ( v133 == v33 )
  {
LABEL_30:
    if ( v132 )
    {
      v155.m256i_i64[0] = (__int64)&v155.m256i_i64[2];
      sub_12A54E0(&v155, (_BYTE *)v132, v132 + v135);
      v37 = *(__int64 **)(a1 + 4984);
      if ( (unsigned __int64 *)v155.m256i_i64[0] != &v155.m256i_u64[2] )
      {
        if ( v134 == v37 )
        {
          src = (void *)v155.m256i_i64[2];
          *(_QWORD *)(a1 + 4984) = v155.m256i_i64[0];
          *(__m128 *)(a1 + 4992) = _mm_loadh_ps((const double *)&src);
        }
        else
        {
          src = (void *)v155.m256i_i64[2];
          v38 = *(_QWORD *)(a1 + 5000);
          *(_QWORD *)(a1 + 4984) = v155.m256i_i64[0];
          *(__m128 *)(a1 + 4992) = _mm_loadh_ps((const double *)&src);
          if ( v37 )
          {
            v155.m256i_i64[0] = (__int64)v37;
            v155.m256i_i64[2] = v38;
LABEL_35:
            v155.m256i_i64[1] = 0;
            *(_BYTE *)v37 = 0;
            if ( (unsigned __int64 *)v155.m256i_i64[0] != &v155.m256i_u64[2] )
              operator delete((void *)v155.m256i_i64[0]);
            LOBYTE(src) = (_BYTE)v131;
            goto LABEL_38;
          }
        }
        v37 = &v155.m256i_i64[2];
        v155.m256i_i64[0] = (__int64)&v155.m256i_i64[2];
        goto LABEL_35;
      }
      v114 = v155.m256i_i64[1];
      if ( v155.m256i_i64[1] )
      {
        if ( v155.m256i_i64[1] == 1 )
          *(_BYTE *)v37 = v155.m256i_i8[16];
        else
          memcpy(v37, (const void *)v155.m256i_i64[0], v155.m256i_u64[1]);
        v114 = v155.m256i_i64[1];
        v37 = *(__int64 **)(a1 + 4984);
      }
    }
    else
    {
      v155.m256i_i8[16] = 0;
      v37 = *(__int64 **)(a1 + 4984);
      v114 = 0;
      v155.m256i_i64[0] = (__int64)&v155.m256i_i64[2];
    }
    *(_QWORD *)(a1 + 4992) = v114;
    *((_BYTE *)v37 + v114) = 0;
    v37 = (__int64 *)v155.m256i_i64[0];
    goto LABEL_35;
  }
  do
  {
    v67 = *(char **)v33;
    v68 = *(char **)(*(_QWORD *)v33 + 16LL);
    if ( !v68 )
      v68 = *(char **)v33;
    v33 += 8;
    v68[44] |= 1u;
    if ( v33 == v34 )
      break;
    while ( 1 )
    {
      v69 = *(char **)v33;
      if ( *(_QWORD *)v33 )
      {
        v132 = (size_t)v34;
        v131 = v67;
        v70 = sub_21B9810(v69, 2168);
        v67 = v131;
        v34 = (char *)v132;
        if ( v70 )
          break;
      }
      v33 += 8;
      if ( v34 == v33 )
        goto LABEL_97;
    }
  }
  while ( (char *)v132 != v33 );
LABEL_97:
  v131 = **((char ***)v67 + 6);
  v71 = strlen(v131);
  sub_99BDC0((_QWORD *)(a1 + 4984), 0, *(_QWORD *)(a1 + 4992), v131, v71);
  LOWORD(v156) = 260;
  v155.m256i_i64[0] = a1 + 4984;
  if ( (unsigned int)sub_228C1E0(&v155, 0) )
  {
    sub_FC70B0((__int64)&v155, *a2, 0, 623);
    sub_AEC220((unsigned __int8 **)&v155, *(_BYTE **)(a1 + 4984), *(_QWORD *)(a1 + 4992));
    if ( (_BYTE)v158 )
    {
      sub_FC7790(v155.m256i_i64[2], v155.m256i_i64, SHIBYTE(v158));
      v155.m256i_i64[2] = 0;
      v158 = 0;
    }
    if ( v156 != v157 )
      operator delete(v156);
    v132 = v155.m256i_i64[0];
    if ( v155.m256i_i64[0] )
    {
      v72 = v155.m256i_i64[1];
      if ( v155.m256i_i64[1] )
      {
        if ( v155.m256i_i64[0] >= (unsigned __int64)v155.m256i_i64[1]
          && v155.m256i_i64[0] <= (unsigned __int64)(v155.m256i_i64[1] + 14848) )
        {
          v126 = *(unsigned int *)(v155.m256i_i64[1] + 14976);
          *(_DWORD *)(v155.m256i_i64[1] + 14976) = v126 + 1;
          *(_QWORD *)(v72 + 8 * v126 + 14848) = v132;
        }
        else
        {
          v73 = *(char **)(v132 + 528);
          v74 = &v73[64 * (unsigned __int64)*(unsigned int *)(v132 + 536)];
          if ( v73 != v74 )
          {
            do
            {
              while ( 1 )
              {
                v74 -= 64;
                v75 = *((char **)v74 + 3);
                if ( v75 == v74 + 40 )
                  break;
                v133 = v74;
                v131 = v73;
                operator delete(v75);
                v73 = v131;
                v74 = (char *)v133;
                if ( v131 == v133 )
                  goto LABEL_109;
              }
            }
            while ( v73 != v74 );
LABEL_109:
            v74 = *(char **)(v132 + 528);
          }
          if ( v74 != (char *)(v132 + 544) )
            free(v74);
          v76 = *(void **)(v132 + 416);
          if ( v76 != (void *)(v132 + 432) )
            free(v76);
          v77 = (char *)(v132 + 384);
          v78 = (char *)(v132 + 64);
          do
          {
            while ( 1 )
            {
              v79 = *(void **)v77;
              if ( *(char **)v77 == v77 + 16 )
                break;
              v131 = v77;
              operator delete(v79);
              v77 = v131 - 32;
              if ( v78 == v131 - 32 )
                goto LABEL_117;
            }
            v77 -= 32;
          }
          while ( v78 != v77 );
LABEL_117:
          operator delete((void *)v132, 0x3A0u);
        }
      }
    }
  }
LABEL_38:
  v137[0] = a2;
  v137[1] = v136;
  v137[2] = &ptr;
  *(__m128i *)v155.m256i_i8 = _mm_load_si128((const __m128i *)&xmmword_23A9F50);
  v39 = sub_21B6DA0(a4, &v155, 4);
  v40 = *(_QWORD *)(a4 + 8);
  v41 = (char *)(v40 + 8LL * (unsigned int)v39);
  v42 = (char *)(v40 + 8 * HIDWORD(v39));
  *(__m128i *)&v155.m256i_u64[2] = _mm_load_si128((const __m128i *)&xmmword_23A9F50);
  v131 = v42;
  *(__m128 *)v155.m256i_i8 = _mm_loadh_ps((const double *)&v131);
  if ( v41 != v42 )
  {
    v133 = &v155.m256i_u64[2];
    do
    {
      v43 = *(_QWORD *)v41;
      v44 = &v155;
      if ( *(_QWORD *)v41 )
      {
        do
        {
          v45 = v44->m256i_u32[4];
          v132 = (size_t)v44;
          if ( !(_DWORD)v45 )
            break;
          v131 = v41;
          v46 = sub_21B9810(v43, v45);
          v41 = v131;
          if ( v46 )
          {
            v131 = v42;
            *(__m128i *)&v155.m256i_u64[2] = _mm_load_si128((const __m128i *)&xmmword_23A9F50);
            *(__m128 *)v155.m256i_i8 = _mm_loadh_ps((const double *)&v131);
            if ( v42 == v41 )
              goto LABEL_45;
            v133 = &v155.m256i_u64[2];
LABEL_122:
            v80 = *(_QWORD *)v41;
            v81 = (char **)(v41 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v41 + 16LL) )
              v80 = *(_QWORD *)(*(_QWORD *)v41 + 16LL);
            *(_BYTE *)(v80 + 44) |= 1u;
            for ( v155.m256i_i64[0] = (__int64)(v41 + 8); v42 != (char *)v81; v155.m256i_i64[0] = (__int64)v81 )
            {
              v82 = *v81;
              v83 = &v155;
              if ( *v81 )
              {
                do
                {
                  v84 = v83->m256i_u32[4];
                  v132 = (size_t)v83;
                  if ( !(_DWORD)v84 )
                    break;
                  v131 = v82;
                  v85 = sub_21B9810(v82, v84);
                  v82 = v131;
                  if ( v85 )
                  {
                    v41 = (char *)v155.m256i_i64[0];
                    if ( v42 != (char *)v155.m256i_i64[0] )
                      goto LABEL_122;
                    goto LABEL_130;
                  }
                  v83 = (__m256i *)(v132 + 4);
                }
                while ( (void *)(v132 + 4) != v133 );
              }
              ++v81;
            }
LABEL_130:
            v131 = (char *)(a1 + 624);
            goto LABEL_131;
          }
          v44 = (__m256i *)(v132 + 4);
        }
        while ( (void *)(v132 + 4) != v133 );
      }
      v41 += 8;
      v155.m256i_i64[0] = (__int64)v41;
    }
    while ( v42 != v41 );
  }
LABEL_45:
  v47 = *(_QWORD *)(a1 + 5024);
  v131 = (char *)(a1 + 624);
  v48 = *(void **)(a1 + 5016);
  v155.m256i_i64[0] = (__int64)&v155.m256i_i64[3];
  *(__m128i *)&v155.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v47 > 0x80 )
  {
    v133 = v48;
    v132 = v47;
    sub_2236E10(&v155, &v155.m256i_u64[3], v47, 1);
    v47 = v132;
    v48 = v133;
    v124 = (__int64 *)(v155.m256i_i64[0] + v155.m256i_i64[1]);
  }
  else
  {
    if ( !v47 )
      goto LABEL_47;
    v124 = &v155.m256i_i64[3];
  }
  v132 = v47;
  memcpy(v124, v48, v47);
  v47 = v155.m256i_i64[1] + v132;
LABEL_47:
  v155.m256i_i64[1] = v47;
  v143 = 257;
  LOWORD(v147) = 257;
  v132 = (size_t)v144;
  v141 = 257;
  v138[0] = "target/lib";
  v139 = 259;
  sub_228A3B0(&v155, v138, v140, v142, v144);
  if ( (unsigned __int8)sub_12A6080(
                          (__int64)v137,
                          v155.m256i_i64[0],
                          v155.m256i_i64[1],
                          (__int64)"system libraries",
                          16) )
  {
    v144[0] = (void *)(v132 + 16);
    sub_12A54E0((_QWORD *)v132, v155.m256i_i64[0], v155.m256i_i64[0] + v155.m256i_i64[1]);
    v117 = *(unsigned int *)(a1 + 632);
    v118 = v132;
    v119 = v117 + 1;
    if ( v117 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
    {
      v128 = *(_QWORD *)(a1 + 624);
      if ( v128 > v132 || (v133 = *(void **)(a1 + 624), v132 >= v128 + 32 * v117) )
      {
        sub_A8C1F0(a1 + 624, v119);
        v118 = v132;
        v120 = *(_QWORD *)(a1 + 624);
        v117 = *(unsigned int *)(a1 + 632);
        v121 = (__m128i *)v132;
      }
      else
      {
        sub_A8C1F0(a1 + 624, v119);
        v118 = v132;
        v120 = *(_QWORD *)(a1 + 624);
        v117 = *(unsigned int *)(a1 + 632);
        v121 = (__m128i *)(v120 + v132 - (_QWORD)v133);
      }
    }
    else
    {
      v120 = *(_QWORD *)(a1 + 624);
      v121 = (__m128i *)v132;
    }
    v122 = (__m128i *)(v120 + 32 * v117);
    v122->m128i_i64[0] = (__int64)v122[1].m128i_i64;
    if ( (__m128i *)v121->m128i_i64[0] == &v121[1] )
    {
      v122[1] = _mm_loadu_si128(v121 + 1);
    }
    else
    {
      v122->m128i_i64[0] = v121->m128i_i64[0];
      v122[1].m128i_i64[0] = v121[1].m128i_i64[0];
    }
    v122->m128i_i64[1] = v121->m128i_i64[1];
    v121->m128i_i64[0] = (__int64)v121[1].m128i_i64;
    v121->m128i_i64[1] = 0;
    v121[1].m128i_i8[0] = 0;
    v123 = v144[0];
    ++*(_DWORD *)(a1 + 632);
    if ( v123 != (void *)(v118 + 16) )
      operator delete(v123);
  }
  if ( (unsigned __int64 *)v155.m256i_i64[0] != &v155.m256i_u64[3] )
    free((void *)v155.m256i_i64[0]);
LABEL_131:
  if ( !(_BYTE)src )
  {
    v155.m256i_i64[0] = 0xBEF00000BEDLL;
    v92 = sub_21B6DA0(a4, &v155, 2);
    v93 = *(_QWORD *)(a4 + 8);
    v155.m256i_i64[2] = 0xBEF00000BEDLL;
    v94 = (_QWORD *)(v93 + 8LL * (unsigned int)v92);
    v95 = (_QWORD *)(v93 + 8 * HIDWORD(v92));
    src = v95;
    *(__m128 *)v155.m256i_i8 = _mm_loadh_ps((const double *)&src);
    if ( v94 != v95 )
    {
      while ( 1 )
      {
        v96 = *v94;
        if ( *v94 )
        {
          if ( (unsigned __int8)sub_21B9810(*v94, 3053) || (unsigned __int8)sub_21B9810(v96, 3055) )
            break;
        }
        v155.m256i_i64[0] = (__int64)++v94;
        if ( v95 == v94 )
          goto LABEL_150;
      }
      src = v95;
      v155.m256i_i64[2] = 0xBEF00000BEDLL;
      *(__m128 *)v155.m256i_i8 = _mm_loadh_ps((const double *)&src);
      if ( v95 != v94 )
      {
        do
        {
          v111 = *v94;
          if ( *(_QWORD *)(*v94 + 16LL) )
            v111 = *(_QWORD *)(*v94 + 16LL);
          v112 = v94 + 1;
          *(_BYTE *)(v111 + 44) |= 1u;
          v155.m256i_i64[0] = (__int64)v112;
          if ( v112 == v95 )
            break;
          while ( 1 )
          {
            v113 = *v112;
            if ( *v112 )
            {
              if ( (unsigned __int8)sub_21B9810(*v112, 3053) || (unsigned __int8)sub_21B9810(v113, 3055) )
                break;
            }
            v155.m256i_i64[0] = (__int64)++v112;
            if ( v95 == v112 )
              goto LABEL_132;
          }
          v94 = (_QWORD *)v155.m256i_i64[0];
        }
        while ( (_QWORD *)v155.m256i_i64[0] != v95 );
        goto LABEL_132;
      }
    }
LABEL_150:
    v97 = *(_QWORD *)(a1 + 4992);
    v98 = *(const void **)(a1 + 4984);
    v155.m256i_i64[0] = (__int64)&v155.m256i_i64[3];
    *(__m128i *)&v155.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v97 > 0x80 )
    {
      sub_2236E10(&v155, &v155.m256i_u64[3], v97, 1);
      v125 = (__int64 *)(v155.m256i_i64[0] + v155.m256i_i64[1]);
    }
    else
    {
      if ( !v97 )
        goto LABEL_152;
      v125 = &v155.m256i_i64[3];
    }
    memcpy(v125, v98, v97);
    v97 += v155.m256i_u64[1];
LABEL_152:
    LOWORD(v147) = 257;
    v143 = 257;
    v141 = 257;
    v139 = 259;
    v138[0] = "target/include";
    v155.m256i_i64[1] = v97;
    sub_228A3B0(&v155, v138, v140, v142, v144);
    sub_12A6080((__int64)v137, v155.m256i_i64[0], v155.m256i_i64[1], (__int64)"system headers", 14);
    if ( (unsigned __int64 *)v155.m256i_i64[0] != &v155.m256i_u64[3] )
      free((void *)v155.m256i_i64[0]);
  }
LABEL_132:
  v86 = *(unsigned int *)(a1 + 632);
  v155.m256i_i64[1] = 1;
  v155.m256i_i64[0] = (__int64)&v155.m256i_i64[2];
  v155.m256i_i16[8] = 46;
  v87 = v86 + 1;
  if ( v86 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
  {
    v116 = *(_QWORD *)(a1 + 624);
    if ( v116 > (unsigned __int64)&v155 || (unsigned __int64)&v155 >= v116 + 32 * v86 )
    {
      sub_A8C1F0((__int64)v131, v87);
      v88 = *(_QWORD *)(a1 + 624);
      v86 = *(unsigned int *)(a1 + 632);
      v89 = (__m128i *)&v155;
    }
    else
    {
      sub_A8C1F0((__int64)v131, v87);
      v88 = *(_QWORD *)(a1 + 624);
      v86 = *(unsigned int *)(a1 + 632);
      v89 = (__m128i *)&v155.m256i_i8[v88 - v116];
    }
  }
  else
  {
    v88 = *(_QWORD *)(a1 + 624);
    v89 = (__m128i *)&v155;
  }
  v90 = (__m128i *)(v88 + 32 * v86);
  v90->m128i_i64[0] = (__int64)v90[1].m128i_i64;
  if ( (__m128i *)v89->m128i_i64[0] == &v89[1] )
  {
    v90[1] = _mm_loadu_si128(v89 + 1);
  }
  else
  {
    v90->m128i_i64[0] = v89->m128i_i64[0];
    v90[1].m128i_i64[0] = v89[1].m128i_i64[0];
  }
  v90->m128i_i64[1] = v89->m128i_i64[1];
  v89->m128i_i64[0] = (__int64)v89[1].m128i_i64;
  v89->m128i_i64[1] = 0;
  v89[1].m128i_i8[0] = 0;
  v91 = (__m256i *)v155.m256i_i64[0];
  ++*(_DWORD *)(a1 + 632);
  if ( v91 != (__m256i *)&v155.m256i_u64[2] )
    operator delete(v91);
  if ( ptr != v151 )
    free(ptr);
  if ( v152 != v130 + 3 )
    free(v152);
}
