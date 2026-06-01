__int64 __fastcall sub_E19F80(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v3)(__int64); // rax
  char *m128i_i8; // rsi
  unsigned __int64 *v5; // rbx
  __int64 v6; // rax
  char *v7; // rsi
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 v10; // r15
  __int64 (__fastcall *v11)(__int64); // rax
  __int64 v12; // r13
  __int64 v13; // rbp
  void *v14; // r13
  void *v15; // rbp
  __int64 (__fastcall *v16)(__int64); // rax
  unsigned __int64 v17; // r12
  __int64 v18; // rbx
  __int64 v19; // r12
  _QWORD *v20; // rax
  __int64 *v21; // r8
  __int64 v22; // r9
  __m128i *v23; // rcx
  __m128i v24; // xmm1
  unsigned int v25; // edx
  __m128i v26; // xmm0
  __m128i *v27; // r15
  __int64 v28; // rax
  unsigned int v29; // eax
  unsigned int v30; // ebp
  size_t v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // xmm0_8
  _DWORD *v35; // r13
  void *v36; // rsi
  __int64 v37; // xmm1_8
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __m128i *v41; // rsi
  int v42; // eax
  __int64 v43; // rbx
  __int64 (__fastcall *v44)(__int64); // rax
  unsigned __int64 v46; // rdx
  size_t v47; // rdx
  __int64 v48; // rcx
  __int64 *v49; // r8
  __int64 v50; // r9
  int v51; // edx
  int v52; // ecx
  int v53; // r8d
  int v54; // r9d
  size_t v55; // rbx
  size_t v56; // rbp
  __int64 *v57; // rdi
  int v58; // eax
  int v59; // r13d
  __int64 v60; // rbx
  __m128i v61; // xmm0
  __int64 v62; // rbx
  __int64 v63; // rax
  int v64; // edx
  int v65; // ecx
  int v66; // r8d
  int v67; // r9d
  __int64 *v68; // rdi
  int v69; // eax
  int v70; // r13d
  __int64 v71; // rsi
  __m128i v72; // xmm0
  __int64 v73; // rbx
  __int64 v74; // rax
  int v75; // edx
  int v76; // ecx
  int v77; // r8d
  int v78; // r9d
  __int64 *v79; // rdi
  int v80; // eax
  int v81; // r13d
  __int64 *v82; // rbx
  char *v83; // rsi
  __int64 v84; // rdx
  __int64 (__fastcall *v85)(__int64); // rax
  __int64 v86; // r13
  __int64 (__fastcall *v87)(__int64); // rax
  __int64 v88; // r12
  __int64 v89; // rbp
  void *v90; // r12
  void *v91; // rbp
  __int64 (__fastcall *v92)(__int64); // rax
  __m128i v93; // xmm0
  _QWORD *v94; // rax
  __int64 v95; // rcx
  int v96; // edx
  int v97; // ecx
  int v98; // r8d
  int v99; // r9d
  size_t v100; // rbx
  size_t v101; // rbp
  __int64 *v102; // rdi
  int v103; // eax
  int v104; // r13d
  __int64 v105; // rbx
  __m128i v106; // xmm0
  __int64 v107; // rbx
  __int64 v108; // rax
  int v109; // edx
  int v110; // ecx
  int v111; // r8d
  int v112; // r9d
  __int64 *v113; // rdi
  int v114; // eax
  int v115; // r13d
  const __m128i *v116; // rsi
  __m128i v117; // xmm0
  _QWORD *v118; // rax
  __int64 v119; // rcx
  char **exception; // rbp
  __m128i v121; // [rsp+0h] [rbp-D8h] BYREF
  void *v122; // [rsp+10h] [rbp-C8h]
  void *v123; // [rsp+18h] [rbp-C0h]
  int v124[2]; // [rsp+20h] [rbp-B8h]
  int v125[2]; // [rsp+28h] [rbp-B0h]
  int v126[2]; // [rsp+30h] [rbp-A8h]
  int v127[2]; // [rsp+38h] [rbp-A0h]
  int v128[2]; // [rsp+40h] [rbp-98h]
  int v129[2]; // [rsp+48h] [rbp-90h]
  __m128i v130; // [rsp+50h] [rbp-88h] BYREF
  void *s2; // [rsp+60h] [rbp-78h] BYREF
  int v132[2]; // [rsp+68h] [rbp-70h]
  __int64 v133; // [rsp+70h] [rbp-68h] BYREF
  int v134; // [rsp+78h] [rbp-60h]
  void *s1; // [rsp+80h] [rbp-58h] BYREF
  size_t n; // [rsp+88h] [rbp-50h]
  __int64 v137; // [rsp+90h] [rbp-48h] BYREF
  int v138; // [rsp+98h] [rbp-40h]
  int v139; // [rsp+A0h] [rbp-38h]
  void *v140; // [rsp+A8h] [rbp-30h]
  int v141; // [rsp+B0h] [rbp-28h]
  __int64 v142; // [rsp+B8h] [rbp-20h]

  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
  if ( v3 != sub_305010 )
    v3(a2);
  m128i_i8 = "\"";
  std::__ostream_insert<char,std::char_traits<char>>();
  v5 = *(unsigned __int64 **)(a1 + 24);
  if ( v5 && (v6 = *((unsigned int *)v5 - 1), (_DWORD)v6) )
  {
    v121.m128i_i64[0] = (__int64)&v5[v6];
    do
    {
      v13 = sub_DF8AC0(a2, v5);
      v14 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v13);
      v15 = (void *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 48LL))(v13, a2);
      v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
      if ( v16 != sub_305010 )
        v16(a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v17 = *v5;
      if ( (*v5 & 7) != 0 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        v7 = (char *)(v17 >> 3);
        std::ostream::operator<<();
      }
      else
      {
        if ( v17 )
        {
          strlen((const char *)*v5);
          v7 = (char *)v17;
        }
        else
        {
          v7 = "null";
        }
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
      if ( v14 )
      {
        if ( v9 == sub_305010 )
          v10 = *(_QWORD *)(a2 + 408);
        else
          v10 = ((__int64 (__fastcall *)(__int64, char *, __int64, __int64 (__fastcall *)(__int64)))v9)(
                  a2,
                  v7,
                  v8,
                  sub_305010);
        std::__ostream_insert<char,std::char_traits<char>>();
        s1 = v14;
        LOBYTE(n) = 1;
        HIDWORD(n) = 0;
        sub_180B300(&s1, v10);
        m128i_i8 = ")\n";
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        if ( v9 != sub_305010 )
          ((void (__fastcall *)(__int64, char *, __int64, __int64 (__fastcall *)(__int64)))v9)(a2, v7, v8, sub_305010);
        m128i_i8 = ")\n";
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      if ( v15 )
      {
        v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
        if ( v11 == sub_305010 )
          v12 = *(_QWORD *)(a2 + 408);
        else
          v12 = ((__int64 (__fastcall *)(__int64, char *))v11)(a2, ")\n");
        std::__ostream_insert<char,std::char_traits<char>>();
        s1 = v15;
        LOBYTE(n) = 1;
        HIDWORD(n) = 4;
        sub_180B300(&s1, v12);
        m128i_i8 = "\n";
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      ++v5;
    }
    while ( (unsigned __int64 *)v121.m128i_i64[0] != v5 );
  }
  else
  {
    v18 = *(_QWORD *)(a2 + 512);
    v19 = v18 + 24LL * *(unsigned int *)(a2 + 520);
    if ( v18 != v19 )
    {
      while ( *(_DWORD *)(v18 + 4) != 2 )
      {
        v18 += 24;
        if ( v19 == v18 )
          goto LABEL_42;
      }
      if ( v19 != v18 )
      {
        v121.m128i_i64[1] = *(_QWORD *)(v18 + 8);
        v121.m128i_i64[0] = *(_QWORD *)(v18 + 16);
        v20 = (_QWORD *)sub_186B270(0x28u);
        *v20 = 2;
        v23 = (__m128i *)(v20 + 1);
        v24 = _mm_loadl_epi64(&v121);
        v25 = 1;
        v26 = _mm_loadl_epi64((const __m128i *)&v121.m128i_u64[1]);
        v27 = (__m128i *)(v20 + 1);
        while ( 1 )
        {
          v28 = v18 + 24;
          *v23 = _mm_unpacklo_epi64(v26, v24);
          v27[-1].m128i_i32[3] = v25;
          if ( v19 == v18 + 24 )
            break;
          while ( 1 )
          {
            v18 = v28;
            if ( *(_DWORD *)(v28 + 4) == 2 )
              break;
            v28 += 24;
            if ( v19 == v28 )
              goto LABEL_40;
          }
          if ( v19 == v28 )
            break;
          v26 = _mm_loadl_epi64((const __m128i *)(v28 + 8));
          v24 = _mm_loadl_epi64((const __m128i *)(v28 + 16));
          v29 = v27[-1].m128i_u32[3];
          if ( v29 == v27[-1].m128i_i32[2] )
          {
            v30 = (3 * v29 + 1) >> 1;
            v31 = 16 * v30 + 8;
            if ( 16 * v29 + 8 >= (unsigned int)v31 || v29 >= v30 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)&s1, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &s1);
              sub_233E40((__int64)&s1);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v121.m128i_i64[1] = v26.m128i_i64[0];
            v121.m128i_i64[0] = v24.m128i_i64[0];
            v32 = sub_186B270(v31);
            v33 = v27[-1].m128i_u32[3];
            v34 = v121.m128i_i64[1];
            v35 = (_DWORD *)v32;
            v36 = (void *)(v32 + 8);
            v37 = v121.m128i_i64[0];
            *(_DWORD *)(v32 + 4) = v33;
            v38 = 0;
            v39 = 16 * v33;
            if ( v39 )
            {
              do
              {
                *(__m128i *)&v35[v38 / 4 + 2] = _mm_loadu_si128(&v27[v38 / 0x10]);
                v38 += 16LL;
              }
              while ( v38 != v39 );
            }
            v122 = v36;
            v121.m128i_i64[1] = v34;
            v121.m128i_i64[0] = v37;
            sub_186B220(&v27[-1].m128i_u64[1]);
            v40 = (unsigned int)v35[1];
            v41 = (__m128i *)v122;
            *v35 = v30;
            v24 = _mm_loadl_epi64(&v121);
            v26 = _mm_loadl_epi64((const __m128i *)&v121.m128i_u64[1]);
            v42 = v40;
            v27 = v41;
            v23 = &v41[v40];
            v25 = v42 + 1;
          }
          else
          {
            v25 = v29 + 1;
            v23 = &v27[v29];
          }
        }
LABEL_40:
        v43 = v25;
        m128i_i8 = v27[v43].m128i_i8;
        *(_QWORD *)v129 = &v27[v43];
        if ( v27 != &v27[v43] )
        {
          _BitScanReverse64(&v46, (v43 * 16) >> 4);
          sub_E18DD0((__int64)v27, (__int64)m128i_i8, 2LL * (int)v46, (int)v23, v21, v22);
          if ( (unsigned __int64)v43 <= 16 )
          {
            if ( v43 != 1 )
            {
              *(_QWORD *)v127 = v27 + 1;
              v121.m128i_i64[0] = (__int64)&s2;
              *(_QWORD *)v125 = &s1;
              do
              {
                sub_180CE20(
                  v121.m128i_i32[0],
                  (int)v27,
                  v47,
                  v48,
                  (int)v49,
                  v50,
                  v121.m128i_i32[0],
                  (void *)v121.m128i_i64[1],
                  (int)v122,
                  (__int64)v123,
                  v124[0],
                  v125[0],
                  v126[0],
                  v127[0],
                  v128[0],
                  v129[0],
                  v130.m128i_i32[0],
                  v130.m128i_i32[2],
                  (int)s2,
                  v132[0],
                  v133,
                  v134,
                  (int)s1,
                  n,
                  v137,
                  v138,
                  v139,
                  v140,
                  v141,
                  v142);
                sub_180CE20(
                  v125[0],
                  v127[0],
                  v96,
                  v97,
                  v98,
                  v99,
                  v121.m128i_i32[0],
                  (void *)v121.m128i_i64[1],
                  (int)v122,
                  (__int64)v123,
                  v124[0],
                  v125[0],
                  v126[0],
                  v127[0],
                  v128[0],
                  v129[0],
                  v130.m128i_i32[0],
                  v130.m128i_i32[2],
                  (int)s2,
                  v132[0],
                  v133,
                  v134,
                  (int)s1,
                  n,
                  v137,
                  v138,
                  v139,
                  v140,
                  v141,
                  v142);
                v100 = n;
                v101 = *(_QWORD *)v132;
                v102 = (__int64 *)s1;
                v48 = (__int64)s2;
                v47 = *(_QWORD *)v132;
                if ( n <= *(_QWORD *)v132 )
                  v47 = n;
                if ( !v47
                  || (v122 = s2,
                      v121.m128i_i64[1] = (__int64)s1,
                      v103 = memcmp(s1, s2, v47),
                      v102 = (__int64 *)v121.m128i_i64[1],
                      v48 = (__int64)v122,
                      (v104 = v103) == 0) )
                {
                  v105 = v100 - v101;
                  v104 = 0x7FFFFFFF;
                  if ( v105 < 0x80000000LL )
                  {
                    if ( v105 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
                      v104 = 0x80000000;
                    else
                      v104 = v105;
                  }
                }
                if ( v102 != &v137 )
                {
                  operator delete(v102, v137 + 1);
                  v48 = (__int64)s2;
                }
                if ( (__int64 *)v48 != &v133 )
                  operator delete((void *)v48, v133 + 1);
                if ( v104 < 0 )
                {
                  m128i_i8 = (char *)(*(_QWORD *)v127 + 16LL);
                  v117 = _mm_loadu_si128(*(const __m128i **)v127);
                  v118 = (_QWORD *)(*(_QWORD *)v127 + 16LL);
                  v47 = (__int64)(*(_QWORD *)v127 - (_QWORD)v27) >> 4;
                  if ( (__int64)(*(_QWORD *)v127 - (_QWORD)v27) > 0 )
                  {
                    do
                    {
                      v119 = *(v118 - 4);
                      v118 -= 2;
                      *v118 = v119;
                      v48 = *(v118 - 1);
                      v118[1] = v48;
                      --v47;
                    }
                    while ( v47 );
                  }
                  *v27 = v117;
                }
                else
                {
                  v106 = _mm_loadu_si128(*(const __m128i **)v127);
                  v107 = *(_QWORD *)v127 - 16LL;
                  *(_QWORD *)v126 = &v130;
                  v130 = v106;
                  while ( 1 )
                  {
                    sub_180CE20(
                      v121.m128i_i32[0],
                      v107,
                      v47,
                      v48,
                      (int)v49,
                      v50,
                      v121.m128i_i32[0],
                      (void *)v121.m128i_i64[1],
                      (int)v122,
                      (__int64)v123,
                      v124[0],
                      v125[0],
                      v126[0],
                      v127[0],
                      v128[0],
                      v129[0],
                      v130.m128i_i32[0],
                      v130.m128i_i32[2],
                      (int)s2,
                      v132[0],
                      v133,
                      v134,
                      (int)s1,
                      n,
                      v137,
                      v138,
                      v139,
                      v140,
                      v141,
                      v142);
                    sub_180CE20(
                      v125[0],
                      v126[0],
                      v109,
                      v110,
                      v111,
                      v112,
                      v121.m128i_i32[0],
                      (void *)v121.m128i_i64[1],
                      (int)v122,
                      (__int64)v123,
                      v124[0],
                      v125[0],
                      v126[0],
                      v127[0],
                      v128[0],
                      v129[0],
                      v130.m128i_i32[0],
                      v130.m128i_i32[2],
                      (int)s2,
                      v132[0],
                      v133,
                      v134,
                      (int)s1,
                      n,
                      v137,
                      v138,
                      v139,
                      v140,
                      v141,
                      v142);
                    v48 = n;
                    v50 = *(_QWORD *)v132;
                    v113 = (__int64 *)s1;
                    v49 = (__int64 *)s2;
                    v47 = *(_QWORD *)v132;
                    if ( n <= *(_QWORD *)v132 )
                      v47 = n;
                    if ( !v47
                      || (*(_QWORD *)v124 = *(_QWORD *)v132,
                          v123 = (void *)n,
                          v122 = s2,
                          v121.m128i_i64[1] = (__int64)s1,
                          v114 = memcmp(s1, s2, v47),
                          v113 = (__int64 *)v121.m128i_i64[1],
                          v49 = (__int64 *)v122,
                          v48 = (__int64)v123,
                          v50 = *(_QWORD *)v124,
                          (v115 = v114) == 0) )
                    {
                      v48 -= v50;
                      v115 = 0x7FFFFFFF;
                      if ( v48 < 0x80000000LL )
                      {
                        if ( v48 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
                          v115 = 0x80000000;
                        else
                          v115 = v48;
                      }
                    }
                    if ( v113 != &v137 )
                    {
                      operator delete(v113, v137 + 1);
                      v49 = (__int64 *)s2;
                    }
                    if ( v49 != &v133 )
                      operator delete(v49, v133 + 1);
                    if ( v115 >= 0 )
                      break;
                    v108 = *(_QWORD *)v107;
                    v107 -= 16;
                    *(_QWORD *)(v107 + 32) = v108;
                    *(_QWORD *)(v107 + 40) = *(_QWORD *)(v107 + 24);
                  }
                  v116 = *(const __m128i **)v127;
                  *(__m128i *)(v107 + 16) = v130;
                  m128i_i8 = v116[1].m128i_i8;
                }
                *(_QWORD *)v127 = m128i_i8;
              }
              while ( m128i_i8 != *(char **)v129 );
            }
          }
          else
          {
            *(_QWORD *)v128 = v27 + 1;
            *(_QWORD *)v127 = v27 + 16;
            v121.m128i_i64[0] = (__int64)&s2;
            v121.m128i_i64[1] = (__int64)&s1;
            do
            {
              sub_180CE20(
                v121.m128i_i32[0],
                (int)v27,
                v47,
                v48,
                (int)v49,
                v50,
                v121.m128i_i32[0],
                (void *)v121.m128i_i64[1],
                (int)v122,
                (__int64)v123,
                v124[0],
                v125[0],
                v126[0],
                v127[0],
                v128[0],
                v129[0],
                v130.m128i_i32[0],
                v130.m128i_i32[2],
                (int)s2,
                v132[0],
                v133,
                v134,
                (int)s1,
                n,
                v137,
                v138,
                v139,
                v140,
                v141,
                v142);
              sub_180CE20(
                v121.m128i_i32[2],
                v128[0],
                v51,
                v52,
                v53,
                v54,
                v121.m128i_i32[0],
                (void *)v121.m128i_i64[1],
                (int)v122,
                (__int64)v123,
                v124[0],
                v125[0],
                v126[0],
                v127[0],
                v128[0],
                v129[0],
                v130.m128i_i32[0],
                v130.m128i_i32[2],
                (int)s2,
                v132[0],
                v133,
                v134,
                (int)s1,
                n,
                v137,
                v138,
                v139,
                v140,
                v141,
                v142);
              v55 = n;
              v56 = *(_QWORD *)v132;
              v57 = (__int64 *)s1;
              v48 = (__int64)s2;
              v47 = *(_QWORD *)v132;
              if ( n <= *(_QWORD *)v132 )
                v47 = n;
              if ( !v47
                || (v123 = s2,
                    v122 = s1,
                    v58 = memcmp(s1, s2, v47),
                    v57 = (__int64 *)v122,
                    v48 = (__int64)v123,
                    (v59 = v58) == 0) )
              {
                v60 = v55 - v56;
                v59 = 0x7FFFFFFF;
                if ( v60 < 0x80000000LL )
                {
                  if ( v60 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
                    v59 = 0x80000000;
                  else
                    v59 = v60;
                }
              }
              if ( v57 != &v137 )
              {
                operator delete(v57, v137 + 1);
                v48 = (__int64)s2;
              }
              if ( (__int64 *)v48 != &v133 )
                operator delete((void *)v48, v133 + 1);
              if ( v59 < 0 )
              {
                v71 = *(_QWORD *)v128 + 16LL;
                v93 = _mm_loadu_si128(*(const __m128i **)v128);
                v94 = (_QWORD *)(*(_QWORD *)v128 + 16LL);
                v47 = (__int64)(*(_QWORD *)v128 - (_QWORD)v27) >> 4;
                if ( (__int64)(*(_QWORD *)v128 - (_QWORD)v27) > 0 )
                {
                  do
                  {
                    v95 = *(v94 - 4);
                    v94 -= 2;
                    *v94 = v95;
                    v48 = *(v94 - 1);
                    v94[1] = v48;
                    --v47;
                  }
                  while ( v47 );
                }
                *v27 = v93;
              }
              else
              {
                v61 = _mm_loadu_si128(*(const __m128i **)v128);
                v62 = *(_QWORD *)v128 - 16LL;
                *(_QWORD *)v126 = &v130;
                v130 = v61;
                while ( 1 )
                {
                  sub_180CE20(
                    v121.m128i_i32[0],
                    v62,
                    v47,
                    v48,
                    (int)v49,
                    v50,
                    v121.m128i_i32[0],
                    (void *)v121.m128i_i64[1],
                    (int)v122,
                    (__int64)v123,
                    v124[0],
                    v125[0],
                    v126[0],
                    v127[0],
                    v128[0],
                    v129[0],
                    v130.m128i_i32[0],
                    v130.m128i_i32[2],
                    (int)s2,
                    v132[0],
                    v133,
                    v134,
                    (int)s1,
                    n,
                    v137,
                    v138,
                    v139,
                    v140,
                    v141,
                    v142);
                  sub_180CE20(
                    v121.m128i_i32[2],
                    v126[0],
                    v64,
                    v65,
                    v66,
                    v67,
                    v121.m128i_i32[0],
                    (void *)v121.m128i_i64[1],
                    (int)v122,
                    (__int64)v123,
                    v124[0],
                    v125[0],
                    v126[0],
                    v127[0],
                    v128[0],
                    v129[0],
                    v130.m128i_i32[0],
                    v130.m128i_i32[2],
                    (int)s2,
                    v132[0],
                    v133,
                    v134,
                    (int)s1,
                    n,
                    v137,
                    v138,
                    v139,
                    v140,
                    v141,
                    v142);
                  v48 = n;
                  v50 = *(_QWORD *)v132;
                  v68 = (__int64 *)s1;
                  v49 = (__int64 *)s2;
                  v47 = *(_QWORD *)v132;
                  if ( n <= *(_QWORD *)v132 )
                    v47 = n;
                  if ( !v47
                    || (*(_QWORD *)v125 = *(_QWORD *)v132,
                        *(_QWORD *)v124 = n,
                        v123 = s2,
                        v122 = s1,
                        v69 = memcmp(s1, s2, v47),
                        v68 = (__int64 *)v122,
                        v49 = (__int64 *)v123,
                        v48 = *(_QWORD *)v124,
                        v50 = *(_QWORD *)v125,
                        (v70 = v69) == 0) )
                  {
                    v48 -= v50;
                    v70 = 0x7FFFFFFF;
                    if ( v48 < 0x80000000LL )
                    {
                      if ( v48 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
                        v70 = 0x80000000;
                      else
                        v70 = v48;
                    }
                  }
                  if ( v68 != &v137 )
                  {
                    operator delete(v68, v137 + 1);
                    v49 = (__int64 *)s2;
                  }
                  if ( v49 != &v133 )
                    operator delete(v49, v133 + 1);
                  if ( v70 >= 0 )
                    break;
                  v63 = *(_QWORD *)v62;
                  v62 -= 16;
                  *(_QWORD *)(v62 + 32) = v63;
                  *(_QWORD *)(v62 + 40) = *(_QWORD *)(v62 + 24);
                }
                *(__m128i *)(v62 + 16) = v130;
                v71 = *(_QWORD *)v128 + 16LL;
              }
              *(_QWORD *)v128 = v71;
            }
            while ( *(_QWORD *)v127 != v71 );
            do
            {
              v72 = _mm_loadu_si128(*(const __m128i **)v127);
              v73 = *(_QWORD *)v127 - 16LL;
              *(_QWORD *)v126 = &v130;
              v130 = v72;
              while ( 1 )
              {
                sub_180CE20(
                  v121.m128i_i32[0],
                  v73,
                  v47,
                  v48,
                  (int)v49,
                  v50,
                  v121.m128i_i32[0],
                  (void *)v121.m128i_i64[1],
                  (int)v122,
                  (__int64)v123,
                  v124[0],
                  v125[0],
                  v126[0],
                  v127[0],
                  v128[0],
                  v129[0],
                  v130.m128i_i32[0],
                  v130.m128i_i32[2],
                  (int)s2,
                  v132[0],
                  v133,
                  v134,
                  (int)s1,
                  n,
                  v137,
                  v138,
                  v139,
                  v140,
                  v141,
                  v142);
                m128i_i8 = *(char **)v126;
                sub_180CE20(
                  v121.m128i_i32[2],
                  v126[0],
                  v75,
                  v76,
                  v77,
                  v78,
                  v121.m128i_i32[0],
                  (void *)v121.m128i_i64[1],
                  (int)v122,
                  (__int64)v123,
                  v124[0],
                  v125[0],
                  v126[0],
                  v127[0],
                  v128[0],
                  v129[0],
                  v130.m128i_i32[0],
                  v130.m128i_i32[2],
                  (int)s2,
                  v132[0],
                  v133,
                  v134,
                  (int)s1,
                  n,
                  v137,
                  v138,
                  v139,
                  v140,
                  v141,
                  v142);
                v48 = n;
                v50 = *(_QWORD *)v132;
                v79 = (__int64 *)s1;
                v49 = (__int64 *)s2;
                v47 = *(_QWORD *)v132;
                if ( n <= *(_QWORD *)v132 )
                  v47 = n;
                if ( !v47
                  || (m128i_i8 = (char *)s2,
                      *(_QWORD *)v125 = *(_QWORD *)v132,
                      *(_QWORD *)v124 = n,
                      v123 = s2,
                      v122 = s1,
                      v80 = memcmp(s1, s2, v47),
                      v79 = (__int64 *)v122,
                      v49 = (__int64 *)v123,
                      v48 = *(_QWORD *)v124,
                      v50 = *(_QWORD *)v125,
                      (v81 = v80) == 0) )
                {
                  v48 -= v50;
                  v81 = 0x7FFFFFFF;
                  if ( v48 < 0x80000000LL )
                  {
                    if ( v48 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
                      v81 = 0x80000000;
                    else
                      v81 = v48;
                  }
                }
                if ( v79 != &v137 )
                {
                  m128i_i8 = (char *)(v137 + 1);
                  operator delete(v79, v137 + 1);
                  v49 = (__int64 *)s2;
                }
                if ( v49 != &v133 )
                {
                  m128i_i8 = (char *)(v133 + 1);
                  operator delete(v49, v133 + 1);
                }
                if ( v81 >= 0 )
                  break;
                v74 = *(_QWORD *)v73;
                v73 -= 16;
                *(_QWORD *)(v73 + 32) = v74;
                *(_QWORD *)(v73 + 40) = *(_QWORD *)(v73 + 24);
              }
              *(_QWORD *)v127 += 16LL;
              *(__m128i *)(v73 + 16) = v130;
            }
            while ( *(_QWORD *)v127 != *(_QWORD *)v129 );
          }
          v121.m128i_i64[0] = (__int64)v27[v27[-1].m128i_u32[3]].m128i_i64;
          if ( v27 != (__m128i *)v121.m128i_i64[0] )
          {
            v82 = (__int64 *)v27;
            do
            {
              v89 = v82[1];
              v90 = (void *)(*(__int64 (__fastcall **)(__int64, char *, size_t, __int64, __int64 *, __int64))(*(_QWORD *)v89 + 40LL))(
                              v89,
                              m128i_i8,
                              v47,
                              v48,
                              v49,
                              v50);
              v91 = (void *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v89 + 48LL))(v89, a2);
              v92 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
              if ( v92 != sub_305010 )
                v92(a2);
              std::__ostream_insert<char,std::char_traits<char>>();
              if ( (*v82 & 7) != 0 )
              {
                v121.m128i_i64[1] = *v82;
                std::__ostream_insert<char,std::char_traits<char>>();
                v83 = (char *)((unsigned __int64)v121.m128i_i64[1] >> 3);
                std::ostream::operator<<();
              }
              else
              {
                if ( *v82 )
                {
                  v121.m128i_i64[1] = *v82;
                  strlen((const char *)v121.m128i_i64[1]);
                  v83 = (char *)v121.m128i_i64[1];
                }
                else
                {
                  v83 = "null";
                }
                std::__ostream_insert<char,std::char_traits<char>>();
              }
              v85 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
              if ( v90 )
              {
                if ( v85 == sub_305010 )
                  v86 = *(_QWORD *)(a2 + 408);
                else
                  v86 = ((__int64 (__fastcall *)(__int64, char *, __int64, __int64 (__fastcall *)(__int64)))v85)(
                          a2,
                          v83,
                          v84,
                          sub_305010);
                std::__ostream_insert<char,std::char_traits<char>>();
                s2 = v90;
                LOBYTE(v132[0]) = 1;
                v132[1] = 0;
                sub_180B300(&s2, v86);
                m128i_i8 = ")\n";
                std::__ostream_insert<char,std::char_traits<char>>();
              }
              else
              {
                if ( v85 != sub_305010 )
                  ((void (__fastcall *)(__int64, char *, __int64, __int64 (__fastcall *)(__int64)))v85)(
                    a2,
                    v83,
                    v84,
                    sub_305010);
                m128i_i8 = ")\n";
                std::__ostream_insert<char,std::char_traits<char>>();
              }
              if ( v91 )
              {
                v87 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
                if ( v87 == sub_305010 )
                  v88 = *(_QWORD *)(a2 + 408);
                else
                  v88 = ((__int64 (__fastcall *)(__int64, char *))v87)(a2, ")\n");
                std::__ostream_insert<char,std::char_traits<char>>();
                s1 = v91;
                LOBYTE(n) = 1;
                HIDWORD(n) = 4;
                sub_180B300(&s1, v88);
                m128i_i8 = "\n";
                std::__ostream_insert<char,std::char_traits<char>>();
              }
              v82 += 2;
            }
            while ( (__int64 *)v121.m128i_i64[0] != v82 );
          }
        }
        sub_186B220(&v27[-1].m128i_u64[1]);
      }
    }
  }
LABEL_42:
  v44 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
  if ( v44 != sub_305010 )
    ((void (__fastcall *)(__int64, char *))v44)(a2, m128i_i8);
  return std::__ostream_insert<char,std::char_traits<char>>();
}

