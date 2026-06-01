void __fastcall sub_12859D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void **a4,
        __int64 a5,
        void **a6,
        double a7,
        __m128 si128)
{
  __int64 *v8; // r13
  __int64 v10; // rsi
  char *p_ptr; // r12
  char *v12; // rdx
  void **v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  char *v16; // rdx
  void ***v17; // r15
  void **v18; // rdx
  void ***v19; // rbp
  void **v20; // rbx
  unsigned int *v21; // r14
  __int64 v22; // rsi
  void **v23; // rdx
  void **v24; // rcx
  char *v25; // r8
  void ***v27; // rbx
  void **v28; // rdi
  void **v29; // rax
  void ***v30; // r15
  void **v31; // r12
  void **v32; // r14
  __int64 v33; // rsi
  char v34; // al
  unsigned __int64 v35; // rax
  char *v36; // rdx
  char *v37; // r14
  char *v38; // r15
  unsigned __int64 v39; // rax
  char *v40; // rdx
  void **v41; // r15
  void **v42; // r14
  void *v43; // rbx
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  _BYTE *v46; // rax
  void ***v47; // r15
  void **v48; // rax
  void **v49; // rbx
  void **v50; // r14
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned __int64 v53; // rax
  char *v54; // rdx
  void ***v55; // r15
  void **v56; // rdx
  void **v57; // rbp
  void **v58; // r12
  void **v59; // rbx
  void **v60; // r14
  __int64 v61; // rsi
  unsigned __int64 v62; // rax
  char *v63; // rcx
  void **v64; // r14
  __m128 v65; // xmm0
  void **v66; // rbp
  void *v67; // r12
  void **v68; // r13
  __int64 v69; // rsi
  void **v70; // rax
  void **v71; // rdx
  char *v72; // r8
  void **v73; // rcx
  void **v74; // r12
  void ***v75; // rbx
  void **v76; // rax
  void ***v77; // r15
  void **v78; // rbp
  void **v79; // r14
  __int64 v80; // rsi
  char v81; // al
  __int64 v82; // rax
  unsigned __int64 v83; // rdx
  void *v84; // r14
  __int64 v85; // rax
  __int64 v86; // rbp
  const __m128i *v87; // r14
  __int64 v88; // r15
  __int64 v89; // rax
  __int64 v90; // rdx
  unsigned __int64 v91; // rcx
  __int64 v92; // rsi
  int v93; // eax
  __int64 v94; // rcx
  void *v95; // rsi
  _QWORD *v96; // rbx
  void (__fastcall *v97)(_QWORD *); // rax
  __int64 v98; // r13
  __int64 v99; // rbp
  void *v100; // rdi
  _QWORD *v101; // rdi
  _QWORD *v102; // rdi
  void **v103; // r13
  void **v104; // rbp
  void *v105; // rdi
  _QWORD *v106; // rdi
  __int64 v107; // rax
  __int64 v108; // rax
  unsigned __int64 v109; // rdx
  void **v110; // rdx
  void **v111; // r15
  void *v112; // rbp
  void **v113; // r14
  _BYTE *v114; // rax
  void *v115; // r13
  void **v116; // r12
  __int64 v117; // rsi
  void *v118; // r15
  __int64 v119; // r14
  unsigned __int64 v120; // rbp
  __int64 v121; // rdi
  void **v122; // r10
  size_t v123; // r14
  void *v124; // rax
  __int64 v125; // rax
  void *v126; // rdx
  size_t v127; // rax
  __int64 v128; // rax
  void *v129; // rdi
  __int64 v130; // [rsp-18h] [rbp-2F0h]
  void **v131; // [rsp+0h] [rbp-2D8h] BYREF
  __int64 v132; // [rsp+8h] [rbp-2D0h]
  __int64 v133; // [rsp+10h] [rbp-2C8h]
  __int64 v134; // [rsp+18h] [rbp-2C0h]
  void **v135; // [rsp+20h] [rbp-2B8h]
  __int64 v136; // [rsp+28h] [rbp-2B0h]
  void **v137; // [rsp+30h] [rbp-2A8h] BYREF
  void *src; // [rsp+38h] [rbp-2A0h]
  void **v139; // [rsp+40h] [rbp-298h]
  void **v140; // [rsp+48h] [rbp-290h]
  void **v141; // [rsp+50h] [rbp-288h]
  char v142; // [rsp+5Fh] [rbp-279h]
  __int64 v143; // [rsp+60h] [rbp-278h]
  char *v144; // [rsp+68h] [rbp-270h]
  void *v145[4]; // [rsp+70h] [rbp-268h] BYREF
  void *v146; // [rsp+90h] [rbp-248h] BYREF
  size_t n; // [rsp+98h] [rbp-240h]
  _BYTE v148[16]; // [rsp+A0h] [rbp-238h] BYREF
  char *v149; // [rsp+B0h] [rbp-228h] BYREF
  __int16 v150; // [rsp+D0h] [rbp-208h]
  char v151[32]; // [rsp+E0h] [rbp-1F8h] BYREF
  __int16 v152; // [rsp+100h] [rbp-1D8h]
  _QWORD v153[4]; // [rsp+110h] [rbp-1C8h] BYREF
  __int16 v154; // [rsp+130h] [rbp-1A8h]
  _QWORD v155[2]; // [rsp+140h] [rbp-198h] BYREF
  char *v156; // [rsp+150h] [rbp-188h]
  __int64 v157; // [rsp+158h] [rbp-180h]
  __int16 v158; // [rsp+160h] [rbp-178h]
  void *ptr; // [rsp+170h] [rbp-168h] BYREF
  __int64 v160; // [rsp+178h] [rbp-160h]
  __int64 v161; // [rsp+180h] [rbp-158h] BYREF
  _BYTE v162[192]; // [rsp+200h] [rbp-D8h] BYREF

  v8 = (__int64 *)a1;
  v133 = a2;
  v10 = *(_QWORD *)(a1 + 24);
  p_ptr = (char *)&ptr;
  v134 = a3;
  v12 = *(char **)(a1 + 16);
  v13 = (void **)v162;
  v14 = *(_QWORD *)(v10 + 8);
  v136 = a5;
  v135 = a4;
  v139 = (void **)v10;
  v143 = v14;
  v140 = v145;
  sub_112D530(v145, v10, v12);
  ptr = &v161;
  v160 = 0x1000000000LL;
  v142 = sub_21B7850(a6, 663, 1121, 0);
  *(_QWORD *)v162 = 0xCA400000BF0LL;
  *(_DWORD *)&v162[8] = 3051;
  v15 = sub_21B6DA0(a6, v162, 3);
  v16 = (char *)a6[1];
  *(_QWORD *)&v162[16] = 0xCA400000BF0LL;
  *(_DWORD *)&v162[24] = 3051;
  v17 = (void ***)&v16[8 * (unsigned int)v15];
  v18 = (void **)&v16[8 * HIDWORD(v15)];
  v131 = v18;
  *(__m128 *)v162 = _mm_loadh_ps((const double *)&v131);
  if ( v17 != (void ***)v18 )
  {
    v131 = a6;
    v19 = (void ***)v18;
    src = &v162[12];
    v137 = &ptr;
    do
    {
      v20 = *v17;
      v21 = (unsigned int *)v162;
      if ( *v17 )
      {
        do
        {
          v22 = v21[4];
          if ( !(_DWORD)v22 )
            break;
          if ( (unsigned __int8)sub_21B9810(v20, v22) )
          {
            v23 = (void **)v19;
            a6 = v131;
            v131 = v23;
            v13 = (void **)v162;
            *(_QWORD *)&v162[16] = 0xCA400000BF0LL;
            p_ptr = (char *)v137;
            *(_DWORD *)&v162[24] = 3051;
            *(__m128 *)v162 = _mm_loadh_ps((const double *)&v131);
            if ( v23 == (void **)v17 )
              goto LABEL_9;
            v24 = a6;
            v25 = (char *)v137;
            v141 = (void **)&v162[12];
            v27 = (void ***)v23;
            do
            {
              v28 = *v17;
              v29 = (void **)(*v17)[2];
              v131 = *v17;
              if ( !v29 )
                v29 = v28;
              v30 = v17 + 1;
              *((_BYTE *)v29 + 44) |= 1u;
              *(_QWORD *)v162 = v30;
              if ( v30 == v27 )
                break;
              while ( 1 )
              {
                v31 = (void **)v162;
                if ( *v30 )
                  break;
LABEL_21:
                *(_QWORD *)v162 = ++v30;
                if ( v27 == v30 )
                  goto LABEL_22;
              }
              v137 = *v30;
              v32 = v24;
              while ( 1 )
              {
                v33 = *((unsigned int *)v31 + 4);
                if ( !(_DWORD)v33 )
                {
LABEL_20:
                  v24 = v32;
                  goto LABEL_21;
                }
                src = v25;
                v34 = sub_21B9810(v137, v33);
                v25 = (char *)src;
                if ( v34 )
                  break;
                v31 = (void **)((char *)v31 + 4);
                if ( v31 == v141 )
                  goto LABEL_20;
              }
              v17 = *(void ****)v162;
              v24 = v32;
            }
            while ( v27 != *(void ****)v162 );
LABEL_22:
            v13 = (void **)v162;
            p_ptr = v25;
            v8 = (__int64 *)a1;
            a6 = v24;
            goto LABEL_23;
          }
          ++v21;
        }
        while ( v21 != src );
      }
      *(_QWORD *)v162 = ++v17;
    }
    while ( v19 != v17 );
    v13 = (void **)v162;
    a6 = v131;
    p_ptr = (char *)v137;
  }
LABEL_9:
  v131 = nullptr;
LABEL_23:
  *(_DWORD *)v162 = 2839;
  v35 = sub_21B6DA0(a6, v162, 1);
  v36 = (char *)a6[1];
  v37 = &v36[8 * (unsigned int)v35];
  v38 = &v36[8 * HIDWORD(v35)];
  if ( v37 != v38 )
  {
    while ( !*(_QWORD *)v37 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v37, 2839) )
    {
      v37 += 8;
      if ( v38 == v37 )
        goto LABEL_27;
    }
    if ( v38 != v37 )
    {
      do
      {
        v107 = *(_QWORD *)v37;
        if ( *(_QWORD *)(*(_QWORD *)v37 + 16LL) )
          v107 = *(_QWORD *)(*(_QWORD *)v37 + 16LL);
        v37 += 8;
        *(_BYTE *)(v107 + 44) |= 1u;
        if ( v37 == v38 )
          break;
        while ( !*(_QWORD *)v37 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v37, 2839) )
        {
          v37 += 8;
          if ( v38 == v37 )
            goto LABEL_137;
        }
      }
      while ( v38 != v37 );
LABEL_137:
      v108 = (unsigned int)v160;
      v109 = (unsigned int)v160 + 1LL;
      if ( v109 > HIDWORD(v160) )
      {
        sub_2237220(p_ptr, p_ptr + 16, v109, 8);
        v108 = (unsigned int)v160;
      }
      *((_QWORD *)ptr + v108) = "--relax";
      LODWORD(v160) = v160 + 1;
    }
  }
LABEL_27:
  *(_QWORD *)v162 = 0x2400000CA4LL;
  v39 = sub_21B6DA0(a6, v162, 2);
  v40 = (char *)a6[1];
  *(_QWORD *)&v162[16] = 0x2400000CA4LL;
  v41 = (void **)&v40[8 * (unsigned int)v39];
  v42 = (void **)&v40[8 * HIDWORD(v39)];
  v137 = v42;
  *(__m128 *)v162 = _mm_loadh_ps((const double *)&v137);
  if ( v41 == v42 )
    goto LABEL_34;
  v137 = (void **)v162;
  while ( 1 )
  {
    v43 = *v41;
    if ( *v41 )
    {
      if ( (unsigned __int8)sub_21B9810(*v41, 3236) || (unsigned __int8)sub_21B9810(v43, 36) )
        break;
    }
    *(_QWORD *)v162 = ++v41;
    if ( v42 == v41 )
    {
      v13 = v137;
      goto LABEL_34;
    }
  }
  v13 = v137;
  v137 = v42;
  *(_QWORD *)&v162[16] = 0x2400000CA4LL;
  *(__m128 *)v162 = _mm_loadh_ps((const double *)&v137);
  if ( v42 == v41 )
  {
LABEL_34:
    v44 = (unsigned int)v160;
    v45 = (unsigned int)v160 + 1LL;
    if ( v45 > HIDWORD(v160) )
    {
      sub_2237220(p_ptr, p_ptr + 16, v45, 8);
      v44 = (unsigned int)v160;
    }
    *((_QWORD *)ptr + v44) = "--gc-sections";
    LODWORD(v160) = v160 + 1;
  }
  else
  {
    do
    {
      v46 = *v41;
      if ( *((_QWORD *)*v41 + 2) )
        v46 = *((_BYTE **)*v41 + 2);
      v47 = (void ***)(v41 + 1);
      v46[44] |= 1u;
      *(_QWORD *)v162 = v47;
      if ( v47 == (void ***)v42 )
        break;
      v48 = v13;
      v49 = v42;
      v50 = v48;
      while ( 1 )
      {
        if ( *v47 )
        {
          v137 = *v47;
          if ( (unsigned __int8)sub_21B9810(v137, 3236) || (unsigned __int8)sub_21B9810(v137, 36) )
            break;
        }
        *(_QWORD *)v162 = ++v47;
        if ( v49 == (void **)v47 )
        {
          v13 = v50;
          goto LABEL_49;
        }
      }
      v41 = *(void ***)v162;
      v70 = v50;
      v42 = v49;
      v13 = v70;
    }
    while ( v42 != *(void ***)v162 );
  }
LABEL_49:
  *(_QWORD *)v162 = 0xCF900000BF3LL;
  *(_QWORD *)&v162[8] = 0xD2500000D17LL;
  sub_21B6650(a6, p_ptr, v13, 4);
  if ( !v131 )
    sub_1280190((__int64)v8, v142, (__int64)a6, (__int64)p_ptr);
  sub_21B7F70(a6, p_ptr, 2204);
  sub_112D940((__int64)v139, (__int64)a6, (__int64)p_ptr, v51, v52);
  sub_11C3660(v8[3], v136, (__int64)a6, (__int64)p_ptr, v134);
  *(_QWORD *)v162 = 0xCA400000BF0LL;
  *(_DWORD *)&v162[8] = 3037;
  v53 = sub_21B6DA0(a6, v13, 3);
  v54 = (char *)a6[1];
  *(_QWORD *)&v162[16] = 0xCA400000BF0LL;
  *(_DWORD *)&v162[24] = 3037;
  v55 = (void ***)&v54[8 * (unsigned int)v53];
  v56 = (void **)&v54[8 * HIDWORD(v53)];
  v137 = v56;
  *(__m128 *)v162 = _mm_loadh_ps((const double *)&v137);
  if ( v55 != (void ***)v56 )
  {
    v137 = a6;
    v57 = v56;
    v141 = (void **)((char *)v13 + 12);
    src = p_ptr;
    v58 = v13;
    do
    {
      v59 = *v55;
      v60 = v58;
      if ( *v55 )
      {
        do
        {
          v61 = *((unsigned int *)v60 + 4);
          if ( !(_DWORD)v61 )
            break;
          if ( (unsigned __int8)sub_21B9810(v59, v61) )
          {
            v71 = v57;
            a6 = v137;
            v137 = v71;
            v13 = v58;
            *(_QWORD *)&v162[16] = 0xCA400000BF0LL;
            p_ptr = (char *)src;
            *(_DWORD *)&v162[24] = 3037;
            v65 = _mm_loadh_ps((const double *)&v137);
            *(__m128 *)v162 = v65;
            if ( v71 == (void **)v55 )
              goto LABEL_59;
            v72 = (char *)src;
            v73 = a6;
            v74 = v13;
            v139 = (void **)((char *)v13 + 12);
            v75 = (void ***)v71;
            do
            {
              v76 = *v55;
              if ( (*v55)[2] )
                v76 = (void **)(*v55)[2];
              v77 = v55 + 1;
              *((_BYTE *)v76 + 44) |= 1u;
              *(_QWORD *)v162 = v77;
              if ( v77 == v75 )
                break;
              while ( 1 )
              {
                v78 = v74;
                if ( *v77 )
                  break;
LABEL_84:
                *(_QWORD *)v162 = ++v77;
                if ( v75 == v77 )
                  goto LABEL_85;
              }
              v137 = *v77;
              v79 = v73;
              while ( 1 )
              {
                v80 = *((unsigned int *)v78 + 4);
                if ( !(_DWORD)v80 )
                {
LABEL_83:
                  v73 = v79;
                  goto LABEL_84;
                }
                src = v72;
                v81 = sub_21B9810(v137, v80);
                v72 = (char *)src;
                if ( v81 )
                  break;
                v78 = (void **)((char *)v78 + 4);
                if ( v139 == v78 )
                  goto LABEL_83;
              }
              v55 = *(void ****)v162;
              v73 = v79;
            }
            while ( v75 != *(void ****)v162 );
LABEL_85:
            v13 = v74;
            a6 = v73;
            p_ptr = v72;
            goto LABEL_86;
          }
          v60 = (void **)((char *)v60 + 4);
        }
        while ( v141 != v60 );
      }
      *(_QWORD *)v162 = ++v55;
    }
    while ( v57 != (void **)v55 );
    v13 = v58;
    a6 = v137;
    p_ptr = (char *)src;
  }
LABEL_59:
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A9E30);
  *(__m128 *)v162 = si128;
  v62 = sub_21B6DA0(a6, v13, 4);
  v63 = (char *)a6[1];
  v64 = (void **)&v63[8 * HIDWORD(v62)];
  *(__m128i *)&v162[16] = _mm_load_si128((const __m128i *)&xmmword_23A9E30);
  v137 = v64;
  v65 = _mm_loadh_ps((const double *)&v137);
  *(__m128 *)v162 = v65;
  if ( &v63[8 * (unsigned int)v62] != (char *)v64 )
  {
    v137 = (void **)v8;
    v141 = (void **)p_ptr;
    src = a6;
    v66 = (void **)&v63[8 * (unsigned int)v62];
    do
    {
      v67 = *v66;
      v68 = v13;
      if ( *v66 )
      {
        do
        {
          v69 = *((unsigned int *)v68 + 4);
          if ( !(_DWORD)v69 )
            break;
          if ( (unsigned __int8)sub_21B9810(v67, v69) )
          {
            v110 = v66;
            v8 = (__int64 *)v137;
            a6 = (void **)src;
            v137 = v64;
            p_ptr = (char *)v141;
            *(__m128i *)&v162[16] = _mm_load_si128((const __m128i *)&xmmword_23A9E30);
            v65 = _mm_loadh_ps((const double *)&v137);
            *(__m128 *)v162 = v65;
            if ( v64 != v110 )
            {
              src = v8;
              v111 = v64;
              v137 = v13 + 2;
              v141 = a6;
              v144 = p_ptr;
LABEL_144:
              v112 = *v110;
              v113 = v110 + 1;
              v114 = *((_BYTE **)*v110 + 2);
              if ( !v114 )
                v114 = *v110;
              v114[44] |= 1u;
              for ( *(_QWORD *)v162 = v110 + 1; v111 != v113; *(_QWORD *)v162 = v113 )
              {
                v115 = *v113;
                v116 = v13;
                if ( *v113 )
                {
                  do
                  {
                    v117 = *((unsigned int *)v116 + 4);
                    if ( !(_DWORD)v117 )
                      break;
                    if ( (unsigned __int8)sub_21B9810(v115, v117) )
                    {
                      v110 = *(void ***)v162;
                      if ( *(void ***)v162 != v111 )
                        goto LABEL_144;
                      goto LABEL_152;
                    }
                    v116 = (void **)((char *)v116 + 4);
                  }
                  while ( v116 != v137 );
                }
                ++v113;
              }
LABEL_152:
              v118 = v112;
              v8 = (__int64 *)src;
              a6 = v141;
              p_ptr = v144;
              if ( !(unsigned __int8)sub_21B9810(v118, 1417) )
              {
                sub_10DC5D0((__int64)p_ptr, (__int64)"-lssp_nonshared");
                sub_10DC5D0((__int64)p_ptr, (__int64)"-lssp");
              }
            }
            goto LABEL_67;
          }
          v68 = (void **)((char *)v68 + 4);
        }
        while ( v13 + 2 != v68 );
      }
      *(_QWORD *)v162 = ++v66;
    }
    while ( v64 != v66 );
    v8 = (__int64 *)v137;
    a6 = (void **)src;
    p_ptr = (char *)v141;
  }
LABEL_67:
  sub_11BEF20((__int64)v139, v143, (__int64)p_ptr, (__int64)a6);
  if ( !sub_10DCD30((__int64)a6, 0xBE4u) )
  {
    sub_1280380((__int64)v8, a6, (__int64)p_ptr);
    v146 = v148;
    sub_127AFA0(&v146, *(_BYTE **)(v143 + 488), *(_QWORD *)(v143 + 488) + *(_QWORD *)(v143 + 496));
    if ( sub_10DCD30((__int64)a6, 0xD15u) )
      goto LABEL_69;
    if ( sub_10DCD30((__int64)a6, 0xB32u) )
    {
      sub_10DC5D0((__int64)p_ptr, (__int64)"-Tmsp430-sim.ld");
      goto LABEL_69;
    }
    v122 = (void **)sub_10DCD30((__int64)a6, 0x9B3u);
    if ( !v122 )
    {
LABEL_69:
      if ( v146 != v148 )
        operator delete(v146);
      goto LABEL_86;
    }
    v65 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v123 = n;
    v124 = v146;
    *(_QWORD *)v162 = v13 + 3;
    *(__m128 *)&v162[8] = v65;
    if ( n > 0x80 )
    {
      src = v146;
      v137 = v122;
      sub_2236E10(v13, v13 + 3, n, 1);
      v122 = v137;
      v124 = src;
      v129 = (void *)(*(_QWORD *)v162 + *(_QWORD *)&v162[8]);
    }
    else
    {
      if ( !n )
      {
LABEL_168:
        *(_QWORD *)&v162[8] = v123;
        v149 = "include";
        src = v122;
        v137 = (void **)v153;
        v158 = 257;
        v154 = 257;
        v150 = 259;
        v152 = 257;
        sub_228A3B0(v13, &v149, v151, v153, v155);
        v155[0] = "-L";
        v158 = 1283;
        v156 = *(char **)v162;
        v157 = *(_QWORD *)&v162[8];
        v125 = sub_10DA6C0((__int64)a6, (__int64)v155);
        sub_10DC5D0((__int64)p_ptr, v125);
        v126 = **((void ***)src + 6);
        v127 = 0;
        if ( v126 )
        {
          src = **((void ***)src + 6);
          v127 = j__strlen((const char *)src);
          v126 = src;
        }
        v153[3] = v127;
        v154 = 1283;
        v155[0] = v137;
        v158 = 770;
        v153[0] = "-T";
        v153[2] = v126;
        v156 = ".ld";
        v128 = sub_10DA6C0((__int64)a6, (__int64)v155);
        sub_10DC5D0((__int64)p_ptr, v128);
        if ( *(void ***)v162 != v13 + 3 )
          free(*(void **)v162);
        goto LABEL_69;
      }
      v129 = v13 + 3;
    }
    v137 = v122;
    memcpy(v129, v124, v123);
    v123 += *(_QWORD *)&v162[8];
    v122 = v137;
    goto LABEL_168;
  }
LABEL_86:
  if ( !v131 )
    sub_12802C0((__int64)v8, v142, (__int64)a6, (__int64)p_ptr);
  v82 = (unsigned int)v160;
  v83 = (unsigned int)v160 + 1LL;
  if ( v83 > HIDWORD(v160) )
  {
    sub_2237220(p_ptr, p_ptr + 16, v83, 8);
    v82 = (unsigned int)v160;
  }
  *((_QWORD *)ptr + v82) = "-o";
  v84 = *v135;
  LODWORD(v160) = v160 + 1;
  v85 = (unsigned int)v160;
  if ( (unsigned __int64)(unsigned int)v160 + 1 > HIDWORD(v160) )
  {
    sub_2237220(p_ptr, p_ptr + 16, (unsigned int)v160 + 1LL, 8);
    v85 = (unsigned int)v160;
  }
  *((_QWORD *)ptr + v85) = v84;
  LODWORD(v160) = v160 + 1;
  sub_21B7F70(a6, p_ptr, 3349);
  v86 = (*((__int64 (__fastcall **)(void **, void *, void *))*a6 + 2))(a6, v145[0], v145[1]);
  v132 = 1;
  v131 = v135;
  v87 = *(const __m128i **)v136;
  v88 = *(unsigned int *)(v136 + 8);
  v89 = operator new(0x208u);
  v130 = (__int64)v131;
  v131 = (void **)v89;
  sub_1106AE0(v89, v134, (__int64)v8, 0x100000000LL, (__int64)"@", v86, (__int64)p_ptr, v87, v88, v130, v132, 0);
  v90 = *(unsigned int *)(v133 + 160);
  v91 = *(unsigned int *)(v133 + 164);
  *(_QWORD *)v162 = v131;
  v92 = v90 + 1;
  v93 = v90;
  if ( v90 + 1 > v91 )
  {
    v119 = v133;
    v120 = *(_QWORD *)(v133 + 152);
    v121 = v133 + 152;
    if ( v120 > (unsigned __int64)v13 )
    {
      sub_11673D0(v121, v92, v65, *(double *)si128.m128_u64);
      v90 = *(unsigned int *)(v119 + 160);
      v94 = *(_QWORD *)(v119 + 152);
      v93 = *(_DWORD *)(v119 + 160);
    }
    else
    {
      if ( (unsigned __int64)v13 < v120 + 8 * v90 )
      {
        sub_11673D0(v121, v92, v65, *(double *)si128.m128_u64);
        v94 = *(_QWORD *)(v133 + 152);
        v90 = *(unsigned int *)(v133 + 160);
        v13 = (void **)((char *)v13 + v94 - v120);
      }
      else
      {
        sub_11673D0(v121, v92, v65, *(double *)si128.m128_u64);
        v90 = *(unsigned int *)(v133 + 160);
        v94 = *(_QWORD *)(v133 + 152);
      }
      v93 = *(_DWORD *)(v133 + 160);
    }
  }
  else
  {
    v94 = *(_QWORD *)(v133 + 152);
  }
  v95 = *v13;
  *v13 = nullptr;
  *(_QWORD *)(v94 + 8 * v90) = v95;
  v96 = *(_QWORD **)v162;
  *(_DWORD *)(v133 + 160) = v93 + 1;
  if ( v96 )
  {
    v97 = *(void (__fastcall **)(_QWORD *))(*v96 + 8LL);
    if ( v97 == sub_10D4290 )
    {
      v98 = v96[58];
      v99 = v96[57];
      *v96 = &off_2BA8F30;
      if ( v98 != v99 )
      {
        do
        {
          if ( *(_BYTE *)(v99 + 32) && *(_QWORD *)v99 != v99 + 16 )
            operator delete(*(void **)v99);
          v99 += 40;
        }
        while ( v98 != v99 );
        v99 = v96[57];
      }
      if ( v99 )
        operator delete((void *)v99);
      v100 = (void *)v96[54];
      if ( v100 )
        operator delete(v100);
      v101 = (_QWORD *)v96[50];
      if ( v101 != v96 + 52 )
        operator delete(v101);
      v102 = (_QWORD *)v96[32];
      if ( v102 != v96 + 34 )
        free(v102);
      v103 = (void **)v96[29];
      v104 = (void **)v96[28];
      if ( v103 != v104 )
      {
        do
        {
          while ( *v104 != v104 + 2 )
          {
            operator delete(*v104);
            v104 += 4;
            if ( v104 == v103 )
            {
              v104 = (void **)v96[28];
              goto LABEL_114;
            }
          }
          v104 += 4;
        }
        while ( v103 != v104 );
        v104 = (void **)v96[28];
      }
LABEL_114:
      if ( v104 )
        operator delete(v104);
      v105 = (void *)v96[25];
      if ( v105 )
        operator delete(v105);
      v106 = (_QWORD *)v96[7];
      if ( v106 != v96 + 9 )
        free(v106);
      operator delete(v96, 0x208u);
    }
    else
    {
      v97(v96);
    }
  }
  if ( ptr != p_ptr + 16 )
    free(ptr);
  if ( v145[0] != v140 + 2 )
    operator delete(v145[0]);
}
