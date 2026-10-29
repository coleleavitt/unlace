void __fastcall sub_11877D0(__int64 a1, __int64 *a2, _DWORD *a3, __int64 a4)
{
  __m128i *v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // r15
  _QWORD *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  _QWORD *v16; // rdi
  size_t v17; // r12
  void *v18; // r14
  char *v19; // r12
  __int64 v20; // rax
  size_t v21; // r12
  const void *v22; // rax
  __int64 v23; // rdx
  void **v24; // r12
  __int64 v25; // rax
  void **v26; // r15
  void **v27; // r13
  void **v28; // rdi
  void **v29; // rdi
  void **v30; // r15
  void **v31; // r13
  void (__fastcall *v32)(_BYTE *, __m128i *, __int64); // rax
  __int64 v33; // rdx
  __m128i si128; // xmm0
  __m128i v35; // xmm2
  void (__fastcall *v36)(_BYTE *, _BYTE *, __int64); // rcx
  __int64 v37; // rax
  void (__fastcall *v38)(_BYTE *, __m128i *, __int64); // rax
  __int64 v39; // rdx
  __m128i v40; // xmm0
  __m128i v41; // xmm3
  void (__fastcall *v42)(_BYTE *, _BYTE *, __int64); // rcx
  __int64 v43; // rax
  __int64 v44; // r13
  __int64 v45; // r12
  void *v46; // rdi
  void *v47; // rdi
  void **v48; // rdi
  void **v49; // r15
  void **v50; // r14
  void *v51; // rdi
  void *v52; // rdi
  __int32 v53; // r12d
  __int64 v54; // r15
  unsigned __int64 v55; // r13
  __int64 v56; // rdx
  unsigned __int64 v57; // rdx
  _QWORD *v58; // r12
  __m128i v59; // xmm0
  __int64 v60; // r8
  _BYTE *v61; // rsi
  signed __int64 v62; // r14
  __int64 v63; // r13
  _BYTE *v64; // rax
  __int64 m128i_i64; // r14
  _BYTE *v66; // r13
  __int64 v67; // r12
  void **v68; // r15
  void **v69; // rbx
  void **v70; // r12
  __int64 v71; // rax
  unsigned __int64 v72; // r12
  __m128i *v73; // rcx
  unsigned __int64 v74; // rsi
  __m128i *v75; // rax
  _BYTE *v76; // rdi
  __int64 v77; // rdx
  __int64 v78; // rsi
  __int64 v79; // rcx
  __m128i *v80; // rax
  __m128i *v81; // rdx
  _BYTE *v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rsi
  __int64 v87; // rcx
  __m128i *v88; // rax
  __m128i *v89; // rdx
  __int64 v90; // rax
  void *v91; // rdi
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rsi
  __int64 v96; // rcx
  __m128i *p_ptr; // rax
  __m128i *v98; // rdx
  void **v99; // rdi
  __int64 v100; // r12
  __m128i *v101; // rdi
  __int32 v102; // r15d
  __int64 v103; // rax
  unsigned __int64 v104; // r14
  __int64 v105; // rdx
  __int64 v106; // rsi
  __int64 v107; // rcx
  __m128i *v108; // rax
  __m128i *v109; // rdx
  _QWORD *v110; // rdi
  __int64 v111; // rdx
  __int64 v112; // rsi
  __int64 v113; // rcx
  __m128i *v114; // rax
  __m128i *v115; // rdx
  _QWORD *v116; // rdi
  char *v117; // rdi
  unsigned __int64 v118; // rax
  unsigned __int64 v119; // rax
  unsigned __int64 v120; // r15
  __int64 v121; // rax
  __int64 v122; // rdx
  unsigned __int64 v123; // rbp
  __int64 v124; // rdi
  unsigned __int64 v125; // r12
  unsigned __int64 v126; // r14
  __int64 v127; // r15
  __int64 v128; // rdi
  __int64 v129; // rdx
  __m128i v131; // [rsp+10h] [rbp-2C8h] BYREF
  void **v132; // [rsp+20h] [rbp-2B8h]
  unsigned __int64 *v133; // [rsp+28h] [rbp-2B0h]
  char **v134; // [rsp+30h] [rbp-2A8h]
  __m128i *v135; // [rsp+38h] [rbp-2A0h]
  __m128i *v136; // [rsp+40h] [rbp-298h]
  __int64 v137; // [rsp+48h] [rbp-290h]
  __m128 v138; // [rsp+50h] [rbp-288h] BYREF
  void *v139[4]; // [rsp+60h] [rbp-278h] BYREF
  unsigned __int64 v140; // [rsp+80h] [rbp-258h] BYREF
  __int16 v141; // [rsp+A0h] [rbp-238h]
  char *v142; // [rsp+B0h] [rbp-228h] BYREF
  __int16 v143; // [rsp+D0h] [rbp-208h]
  void *v144[4]; // [rsp+E0h] [rbp-1F8h] BYREF
  __int16 v145; // [rsp+100h] [rbp-1D8h]
  void *v146[2]; // [rsp+110h] [rbp-1C8h] BYREF
  _QWORD v147[2]; // [rsp+120h] [rbp-1B8h] BYREF
  __int16 v148; // [rsp+130h] [rbp-1A8h]
  void *ptr; // [rsp+140h] [rbp-198h] BYREF
  void *v150[2]; // [rsp+148h] [rbp-190h] BYREF
  _WORD v151[68]; // [rsp+158h] [rbp-180h] BYREF
  _BYTE n[24]; // [rsp+1E0h] [rbp-F8h] BYREF
  __int64 v153; // [rsp+1F8h] [rbp-E0h] BYREF
  void *v154; // [rsp+200h] [rbp-D8h]
  __int64 v155; // [rsp+208h] [rbp-D0h]
  __int64 v156; // [rsp+210h] [rbp-C8h] BYREF
  _BYTE *v157; // [rsp+220h] [rbp-B8h]
  __int64 v158; // [rsp+228h] [rbp-B0h]
  __int64 v159; // [rsp+240h] [rbp-98h]
  __int64 v160; // [rsp+248h] [rbp-90h]
  _BYTE *v161; // [rsp+258h] [rbp-80h]
  __int64 v162; // [rsp+260h] [rbp-78h]
  _BYTE *v163; // [rsp+278h] [rbp-60h]
  __int64 v164; // [rsp+280h] [rbp-58h]
  char v165; // [rsp+298h] [rbp-40h]

  v6 = (__m128i *)a1;
  sub_121FCF0(a1, a2, a3, a4);
  *(_QWORD *)(a1 + 4992) = 0;
  *(_QWORD *)a1 = off_2C378E8;
  *(_QWORD *)(a1 + 4984) = a1 + 5000;
  *(_QWORD *)(a1 + 5024) = a1 + 5040;
  *(_BYTE *)(a1 + 5000) = 0;
  *(_QWORD *)(a1 + 5032) = 0x100000000LL;
  *(_DWORD *)n = 1991;
  v7 = sub_21B6DA0(a4, n, 1);
  v8 = *(_QWORD *)(a4 + 8);
  v9 = (_QWORD *)(v8 + 8LL * (unsigned int)v7);
  v10 = (_QWORD *)(v8 + 8 * HIDWORD(v7));
  if ( v9 == v10 )
    goto LABEL_5;
  while ( !*v9 || !(unsigned __int8)sub_21B9810(*v9, 1991) )
  {
    if ( v10 == ++v9 )
      goto LABEL_5;
  }
  if ( v10 == v9 )
  {
LABEL_5:
    v11 = sub_10DCD30(a4, 0x7C6u);
    if ( !v11 )
      goto LABEL_7;
  }
  else
  {
    do
    {
      v20 = *v9;
      if ( *(_QWORD *)(*v9 + 16LL) )
        v20 = *(_QWORD *)(*v9 + 16LL);
      ++v9;
      *(_BYTE *)(v20 + 44) |= 1u;
      if ( v9 == v10 )
        break;
      while ( !*v9 || !(unsigned __int8)sub_21B9810(*v9, 1991) )
      {
        if ( v10 == ++v9 )
          goto LABEL_6;
      }
    }
    while ( v10 != v9 );
  }
LABEL_6:
  sub_122CEF0(a1 + 2384, a3, a4);
  LOBYTE(v11) = *(_BYTE *)(a1 + 2384);
LABEL_7:
  *(_BYTE *)(a1 + 5016) = v11;
  v132 = v139;
  sub_117EC00(v139, a1);
  if ( !*(_BYTE *)(a1 + 5016) )
  {
    v12 = *(unsigned int *)(a1 + 1160);
    v13 = v6->m128i_i64[1] + 104;
    v14 = v6[72].m128i_u64[0];
    v15 = v12 + 1;
    v16 = (_QWORD *)(v14 + 32 * v12);
    if ( v15 > v6[72].m128i_u32[3] )
    {
      if ( v14 > v13 || (unsigned __int64)v16 <= v13 )
      {
        sub_A8C1F0((__int64)v6[72].m128i_i64, v15);
        v16 = (_QWORD *)(v6[72].m128i_i64[0] + 32LL * v6[72].m128i_u32[2]);
      }
      else
      {
        v120 = v13 - v14;
        sub_A8C1F0((__int64)v6[72].m128i_i64, v15);
        v121 = v6[72].m128i_i64[0];
        v13 = v121 + v120;
        v16 = (_QWORD *)(v121 + 32LL * v6[72].m128i_u32[2]);
      }
    }
    *v16 = v16 + 2;
    sub_117E3B0(v16, *(_BYTE **)v13, *(_QWORD *)v13 + *(_QWORD *)(v13 + 8));
    ++v6[72].m128i_i32[2];
    sub_1184370(v6, a2, a3, a4);
    sub_117EC00(n, (__int64)v6);
    v17 = *(_QWORD *)&n[8];
    v18 = *(void **)n;
    ptr = v151;
    *(__m128i *)v150 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( *(_QWORD *)&n[8] > 0x80u )
    {
      sub_2236E10(&ptr, v151, *(_QWORD *)&n[8], 1);
      v117 = (char *)ptr + (unsigned __int64)v150[0];
    }
    else
    {
      if ( !*(_QWORD *)&n[8] )
      {
        v150[0] = nullptr;
        if ( *(_BYTE **)n == &n[16] )
        {
LABEL_14:
          if ( ptr != v151 )
            free(ptr);
          goto LABEL_16;
        }
LABEL_12:
        operator delete(v18);
        v19 = (char *)v150[0];
LABEL_13:
        if ( v19 )
        {
          sub_11824E0(&v138, (__int64)v6);
          v131.m128i_i64[1] = v138.m128_i64[1];
          v104 = v138.m128_u64[0];
          if ( v138.m128_u64[1] != v138.m128_u64[0] )
          {
            v136 = v6 + 39;
            v135 = v6 + 6;
            v131.m128i_i64[0] = (__int64)v144;
            v134 = &v142;
            v133 = &v140;
            do
            {
              while ( 1 )
              {
                *(_QWORD *)n = &v153;
                *(__m128i *)&n[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
                if ( v150[0] )
                  sub_9C3DB0((void **)n, (const void **)&ptr);
                v148 = 257;
                v145 = 257;
                v143 = 259;
                v141 = 260;
                v142 = "lib";
                v140 = v104 - 160;
                sub_228A3B0(n, v133, v134, v131.m128i_i64[0], v146);
                v146[0] = v147;
                sub_117E5C0(v146, *(_BYTE **)n, *(_QWORD *)n + *(_QWORD *)&n[8]);
                v105 = v6[39].m128i_u32[2];
                v106 = v105 + 1;
                if ( v105 + 1 > (unsigned __int64)v6[39].m128i_u32[3] )
                {
                  v118 = v6[39].m128i_u64[0];
                  if ( v118 > (unsigned __int64)v146
                    || (v137 = v6[39].m128i_i64[0], (unsigned __int64)v146 >= v118 + 32 * v105) )
                  {
                    sub_A8C1F0((__int64)v136, v106);
                    v107 = v6[39].m128i_i64[0];
                    v105 = v6[39].m128i_u32[2];
                    v108 = (__m128i *)v146;
                  }
                  else
                  {
                    sub_A8C1F0((__int64)v136, v106);
                    v107 = v6[39].m128i_i64[0];
                    v105 = v6[39].m128i_u32[2];
                    v108 = (__m128i *)((char *)v146 + v107 - v137);
                  }
                }
                else
                {
                  v107 = v6[39].m128i_i64[0];
                  v108 = (__m128i *)v146;
                }
                v109 = (__m128i *)(v107 + 32 * v105);
                v109->m128i_i64[0] = (__int64)v109[1].m128i_i64;
                if ( (__m128i *)v108->m128i_i64[0] == &v108[1] )
                {
                  v109[1] = _mm_loadu_si128(v108 + 1);
                }
                else
                {
                  v109->m128i_i64[0] = v108->m128i_i64[0];
                  v109[1].m128i_i64[0] = v108[1].m128i_i64[0];
                }
                v109->m128i_i64[1] = v108->m128i_i64[1];
                v108->m128i_i64[0] = (__int64)v108[1].m128i_i64;
                v108->m128i_i64[1] = 0;
                v108[1].m128i_i8[0] = 0;
                v110 = v146[0];
                ++v6[39].m128i_i32[2];
                if ( v110 != v147 )
                  operator delete(v110);
                v146[0] = v147;
                sub_117E5C0(v146, *(_BYTE **)n, *(_QWORD *)n + *(_QWORD *)&n[8]);
                v111 = v6[6].m128i_u32[2];
                v112 = v111 + 1;
                if ( v111 + 1 > (unsigned __int64)v6[6].m128i_u32[3] )
                {
                  v119 = v6[6].m128i_u64[0];
                  if ( v119 > (unsigned __int64)v146
                    || (v137 = v6[6].m128i_i64[0], (unsigned __int64)v146 >= v119 + 32 * v111) )
                  {
                    sub_A8C1F0((__int64)v135, v112);
                    v113 = v6[6].m128i_i64[0];
                    v111 = v6[6].m128i_u32[2];
                    v114 = (__m128i *)v146;
                  }
                  else
                  {
                    sub_A8C1F0((__int64)v135, v112);
                    v111 = v6[6].m128i_u32[2];
                    v113 = v6[6].m128i_i64[0];
                    v114 = (__m128i *)((char *)v146 + v113 - v137);
                  }
                }
                else
                {
                  v113 = v6[6].m128i_i64[0];
                  v114 = (__m128i *)v146;
                }
                v115 = (__m128i *)(v113 + 32 * v111);
                v115->m128i_i64[0] = (__int64)v115[1].m128i_i64;
                if ( (__m128i *)v114->m128i_i64[0] == &v114[1] )
                {
                  v115[1] = _mm_loadu_si128(v114 + 1);
                }
                else
                {
                  v115->m128i_i64[0] = v114->m128i_i64[0];
                  v115[1].m128i_i64[0] = v114[1].m128i_i64[0];
                }
                v115->m128i_i64[1] = v114->m128i_i64[1];
                v114->m128i_i64[0] = (__int64)v114[1].m128i_i64;
                v114->m128i_i64[1] = 0;
                v114[1].m128i_i8[0] = 0;
                v116 = v146[0];
                ++v6[6].m128i_i32[2];
                if ( v116 != v147 )
                  operator delete(v116);
                if ( *(__int64 **)n == &v153 )
                  break;
                free(*(void **)n);
                v104 -= 192LL;
                if ( v131.m128i_i64[1] == v104 )
                  goto LABEL_14;
              }
              v104 -= 192LL;
            }
            while ( v131.m128i_i64[1] != v104 );
          }
        }
        goto LABEL_14;
      }
      v117 = (char *)v151;
    }
    memcpy(v117, v18, v17);
    v18 = *(void **)n;
    v19 = (char *)v150[0] + v17;
    v150[0] = v19;
    if ( *(_BYTE **)n == &n[16] )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( (unsigned int)(a3[8] - 27) > 1
    || a3[10]
    || a3[11]
    || (v21 = j__strlen("elf"), v22 = (const void *)sub_22B76B0(a3), v21 != v23)
    || v21 && memcmp(v22, "elf", v21) )
  {
    sub_FC70B0((__int64)n, *a2, 0, 577);
    if ( (_BYTE)v157 )
    {
      sub_FC7790(*(__int64 *)&n[16], (__int64 *)n, SBYTE1(v157));
      *(_QWORD *)&n[16] = 0;
      LOWORD(v157) = 0;
    }
    if ( v154 != &v156 )
      operator delete(v154);
    v24 = *(void ***)n;
    if ( *(_QWORD *)n )
    {
      v25 = *(_QWORD *)&n[8];
      if ( *(_QWORD *)&n[8] )
      {
        if ( *(_QWORD *)n >= *(_QWORD *)&n[8] && *(_QWORD *)n <= (unsigned __int64)(*(_QWORD *)&n[8] + 14848LL) )
        {
          v129 = *(unsigned int *)(*(_QWORD *)&n[8] + 14976LL);
          *(_DWORD *)(*(_QWORD *)&n[8] + 14976LL) = v129 + 1;
          *(_QWORD *)(v25 + 8 * v129 + 14848) = v24;
        }
        else
        {
          v26 = *(void ***)(*(_QWORD *)n + 528LL);
          v27 = &v26[8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)n + 536LL)];
          if ( v26 != v27 )
          {
            do
            {
              while ( 1 )
              {
                v27 -= 8;
                v28 = (void **)v27[3];
                if ( v28 == v27 + 5 )
                  break;
                operator delete(v28);
                if ( v26 == v27 )
                  goto LABEL_44;
              }
            }
            while ( v26 != v27 );
LABEL_44:
            v27 = (void **)v24[66];
          }
          if ( v27 != v24 + 68 )
            free(v27);
          v29 = (void **)v24[52];
          if ( v29 != v24 + 54 )
            free(v29);
          v30 = v24 + 48;
          v31 = v24 + 8;
          do
          {
            while ( *v30 != v30 + 2 )
            {
              operator delete(*v30);
              v30 -= 4;
              if ( v30 == v31 )
                goto LABEL_52;
            }
            v30 -= 4;
          }
          while ( v31 != v30 );
LABEL_52:
          operator delete(v24, 0x3A0u);
        }
      }
    }
  }
  sub_117F8A0(v6[115].m128i_i64, v6[194].m128i_i64);
  sub_1180210((__int64)&v6[116].m128i_i64[1], (__int64)&v6[195].m128i_i64[1]);
  sub_1180630((__int64)v6[121].m128i_i64, (__int64)v6[200].m128i_i64);
  v32 = (void (__fastcall *)(_BYTE *, __m128i *, __int64))v6[212].m128i_i64[0];
  *(_QWORD *)&n[16] = 0;
  v33 = v153;
  if ( v32 )
  {
    v32(n, v6 + 211, 2);
    v33 = v6[212].m128i_i64[1];
    v32 = (void (__fastcall *)(_BYTE *, __m128i *, __int64))v6[212].m128i_i64[0];
  }
  si128 = _mm_load_si128((const __m128i *)n);
  v35 = _mm_loadu_si128(v6 + 132);
  v36 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))v6[133].m128i_i64[0];
  v6[133].m128i_i64[0] = (__int64)v32;
  v37 = v6[133].m128i_i64[1];
  *(__m128i *)n = v35;
  v6[132] = si128;
  *(_QWORD *)&n[16] = v36;
  v153 = v37;
  v6[133].m128i_i64[1] = v33;
  if ( v36 )
    v36(n, n, 3);
  v38 = (void (__fastcall *)(_BYTE *, __m128i *, __int64))v6[214].m128i_i64[0];
  v39 = v153;
  *(_QWORD *)&n[16] = 0;
  if ( v38 )
  {
    v38(n, v6 + 213, 2);
    v39 = v6[214].m128i_i64[1];
    v38 = (void (__fastcall *)(_BYTE *, __m128i *, __int64))v6[214].m128i_i64[0];
  }
  v40 = _mm_load_si128((const __m128i *)n);
  v41 = _mm_loadu_si128(v6 + 134);
  v42 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))v6[135].m128i_i64[0];
  v6[135].m128i_i64[0] = (__int64)v38;
  v43 = v6[135].m128i_i64[1];
  *(__m128i *)n = v41;
  v6[134] = v40;
  *(_QWORD *)&n[16] = v42;
  v153 = v43;
  v6[135].m128i_i64[1] = v39;
  if ( v42 )
    v42(n, n, 3);
  sub_110AD80((__int64)n, (__int64)&v6[157].m128i_i64[1]);
  v44 = v6[136].m128i_i64[0];
  v45 = v44 + 192LL * v6[136].m128i_u32[2];
  while ( v44 != v45 )
  {
    while ( 1 )
    {
      v45 -= 192;
      if ( *(_BYTE *)(v45 + 184) )
      {
        v46 = *(void **)(v45 + 152);
        if ( v46 != (void *)(v45 + 168) )
          operator delete(v46);
      }
      v47 = *(void **)(v45 + 120);
      if ( v47 != (void *)(v45 + 136) )
        operator delete(v47);
      v48 = *(void ***)(v45 + 96);
      v49 = *(void ***)(v45 + 104);
      v50 = v48;
      if ( v49 != v48 )
      {
        do
        {
          while ( *v50 != v50 + 2 )
          {
            operator delete(*v50);
            v50 += 4;
            if ( v49 == v50 )
              goto LABEL_71;
          }
          v50 += 4;
        }
        while ( v49 != v50 );
LABEL_71:
        v48 = *(void ***)(v45 + 96);
      }
      if ( v48 )
        operator delete(v48);
      v51 = *(void **)(v45 + 64);
      if ( v51 != (void *)(v45 + 80) )
        operator delete(v51);
      v52 = *(void **)(v45 + 32);
      if ( v52 != (void *)(v45 + 48) )
        operator delete(v52);
      if ( *(_QWORD *)v45 == v45 + 16 )
        break;
      operator delete(*(void **)v45);
      if ( v44 == v45 )
        goto LABEL_80;
    }
  }
LABEL_80:
  v53 = v6[136].m128i_i32[3];
  v6[136].m128i_i32[2] = 0;
  if ( v53 )
  {
    v54 = v6[136].m128i_i64[0];
  }
  else
  {
    v100 = sub_2237400(&v6[136], &v6[137], 1, 192, &ptr);
    sub_11821E0(v6[136].m128i_i64, v100);
    v101 = (__m128i *)v6[136].m128i_i64[0];
    v102 = (int)ptr;
    if ( &v6[137] != v101 )
      free(v101);
    v103 = v6[136].m128i_u32[2];
    v6[136].m128i_i32[3] = v102;
    v6[136].m128i_i64[0] = v100;
    v54 = v100 + 192 * v103;
  }
  *(_QWORD *)v54 = v54 + 16;
  sub_117E3B0((_QWORD *)v54, *(_BYTE **)n, *(_QWORD *)n + *(_QWORD *)&n[8]);
  *(_QWORD *)(v54 + 32) = v54 + 48;
  sub_117E3B0((_QWORD *)(v54 + 32), v154, (__int64)v154 + v155);
  *(_QWORD *)(v54 + 64) = v54 + 80;
  sub_117E3B0((_QWORD *)(v54 + 64), v157, (__int64)&v157[v158]);
  v55 = v160 - v159;
  v56 = v160 - v159;
  *(_OWORD *)(v54 + 96) = 0;
  v57 = v56 >> 5;
  *(_QWORD *)(v54 + 112) = 0;
  if ( v57 )
  {
    if ( v57 > 0x7FFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v58 = (_QWORD *)operator new(v55);
  }
  else
  {
    v58 = nullptr;
  }
  v131.m128i_i64[0] = (__int64)v58;
  v59 = _mm_loadl_epi64(&v131);
  *(_QWORD *)(v54 + 112) = (char *)v58 + v55;
  *(__m128i *)(v54 + 96) = _mm_unpacklo_epi64(v59, v59);
  v60 = v159;
  v131.m128i_i64[0] = v160;
  if ( v160 != v159 )
  {
    *v58 = v58 + 2;
    v61 = *(_BYTE **)v60;
    v62 = *(_QWORD *)(v60 + 8);
    if ( v62 + *(_QWORD *)v60 && !v61 )
LABEL_95:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v63 = v60 + 32;
    while ( (unsigned __int64)v62 <= 0xF )
    {
      v64 = (_BYTE *)*v58;
      if ( v62 == 1 )
      {
        *v64 = *v61;
        v64 = (_BYTE *)*v58;
      }
      else if ( v62 )
      {
        goto LABEL_141;
      }
LABEL_92:
      v58[1] = v62;
      v58 += 4;
      v64[v62] = 0;
      if ( v131.m128i_i64[0] == v63 )
        goto LABEL_96;
      v63 += 32;
      *v58 = v58 + 2;
      v61 = *(_BYTE **)(v63 - 32);
      v62 = *(_QWORD *)(v63 - 24);
      if ( &v61[v62] && !v61 )
        goto LABEL_95;
    }
    if ( v62 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v131.m128i_i64[1] = (__int64)v61;
    v64 = (_BYTE *)operator new(v62 + 1);
    v58[2] = v62;
    v61 = (_BYTE *)v131.m128i_i64[1];
    *v58 = v64;
LABEL_141:
    memcpy(v64, v61, v62);
    v64 = (_BYTE *)*v58;
    goto LABEL_92;
  }
LABEL_96:
  *(_QWORD *)(v54 + 104) = v58;
  *(_QWORD *)(v54 + 120) = v54 + 136;
  sub_117E3B0((_QWORD *)(v54 + 120), v161, (__int64)&v161[v162]);
  *(_BYTE *)(v54 + 184) = 0;
  if ( v165 )
  {
    *(_QWORD *)(v54 + 152) = v54 + 168;
    sub_117E3B0((_QWORD *)(v54 + 152), v163, (__int64)&v163[v164]);
    *(_BYTE *)(v54 + 184) = 1;
  }
  ++v6[136].m128i_i32[2];
  m128i_i64 = (__int64)v6[39].m128i_i64;
  sub_110AEF0((__int64)n);
  v66 = (_BYTE *)v6[153].m128i_i64[1];
  v67 = v6[154].m128i_i64[0];
  if ( v6[135].m128i_i64[0] )
  {
    ((void (__fastcall *)(void **, __int64 *, __int64))v6[135].m128i_i64[1])(
      &ptr,
      v6[134].m128i_i64,
      v6[136].m128i_i64[0] + 192LL * v6[136].m128i_u32[2] - 192);
    v68 = (void **)v150[0];
    if ( ptr != v150[0] )
    {
      v131.m128i_i64[0] = (__int64)v6;
      v69 = (void **)ptr;
      do
      {
        *(_QWORD *)&n[16] = v69;
        v69 += 4;
        *(_QWORD *)n = v66;
        *(_QWORD *)&n[8] = v67;
        LOWORD(v154) = 1029;
        sub_11C52D0(a2, n, m128i_i64);
      }
      while ( v68 != v69 );
      v70 = (void **)v150[0];
      v68 = (void **)ptr;
      v6 = (__m128i *)v131.m128i_i64[0];
      if ( v150[0] != ptr )
      {
        do
        {
          while ( *v68 != v68 + 2 )
          {
            operator delete(*v68);
            v68 += 4;
            if ( v68 == v70 )
              goto LABEL_105;
          }
          v68 += 4;
        }
        while ( v70 != v68 );
LABEL_105:
        v68 = (void **)ptr;
      }
    }
    if ( v68 )
      operator delete(v68);
    v66 = (_BYTE *)v6[153].m128i_i64[1];
    v67 = v6[154].m128i_i64[0];
  }
  *(_QWORD *)n = &n[16];
  if ( v66 )
  {
    sub_117E5C0(n, v66, (__int64)&v66[v67]);
  }
  else
  {
    *(_QWORD *)&n[8] = 0;
    n[16] = 0;
  }
  v71 = v6[39].m128i_u32[2];
  v72 = v6[39].m128i_u64[0];
  v73 = (__m128i *)n;
  v74 = v71 + 1;
  v75 = (__m128i *)(v72 + 32 * v71);
  if ( v74 > v6[39].m128i_u32[3] )
  {
    if ( v72 > (unsigned __int64)n || v75 <= (__m128i *)n )
    {
      sub_A8C1F0(m128i_i64, v74);
      v73 = (__m128i *)n;
      v75 = (__m128i *)(v6[39].m128i_i64[0] + 32LL * v6[39].m128i_u32[2]);
    }
    else
    {
      sub_A8C1F0(m128i_i64, v74);
      v122 = v6[39].m128i_i64[0];
      v73 = (__m128i *)&n[v122 - v72];
      v75 = (__m128i *)(v122 + 32LL * v6[39].m128i_u32[2]);
    }
  }
  v75->m128i_i64[0] = (__int64)v75[1].m128i_i64;
  if ( (__m128i *)v73->m128i_i64[0] == &v73[1] )
  {
    v75[1] = _mm_loadu_si128(v73 + 1);
  }
  else
  {
    v75->m128i_i64[0] = v73->m128i_i64[0];
    v75[1].m128i_i64[0] = v73[1].m128i_i64[0];
  }
  v75->m128i_i64[1] = v73->m128i_i64[1];
  v73->m128i_i64[0] = (__int64)v73[1].m128i_i64;
  v73->m128i_i64[1] = 0;
  v73[1].m128i_i8[0] = 0;
  v76 = *(_BYTE **)n;
  ++v6[39].m128i_i32[2];
  if ( v76 != &n[16] )
    operator delete(v76);
  *(_QWORD *)n = &n[16];
  sub_117E3B0(n, (_BYTE *)v139[0], (__int64)v139[0] + (unsigned __int64)v139[1]);
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)&n[8]) <= 3 )
    std::__throw_length_error("basic_string::append");
  sub_9EE560(n, "/lib", 4u);
  v77 = v6[39].m128i_u32[2];
  v78 = v77 + 1;
  if ( v77 + 1 > (unsigned __int64)v6[39].m128i_u32[3] )
  {
    v125 = v6[39].m128i_u64[0];
    if ( v125 > (unsigned __int64)n || (unsigned __int64)n >= v125 + 32 * v77 )
    {
      sub_A8C1F0(m128i_i64, v78);
      v79 = v6[39].m128i_i64[0];
      v77 = v6[39].m128i_u32[2];
      v80 = (__m128i *)n;
    }
    else
    {
      sub_A8C1F0(m128i_i64, v78);
      v79 = v6[39].m128i_i64[0];
      v77 = v6[39].m128i_u32[2];
      v80 = (__m128i *)&n[v79 - v125];
    }
  }
  else
  {
    v79 = v6[39].m128i_i64[0];
    v80 = (__m128i *)n;
  }
  v81 = (__m128i *)(v79 + 32 * v77);
  v81->m128i_i64[0] = (__int64)v81[1].m128i_i64;
  if ( (__m128i *)v80->m128i_i64[0] == &v80[1] )
  {
    v81[1] = _mm_loadu_si128(v80 + 1);
  }
  else
  {
    v81->m128i_i64[0] = v80->m128i_i64[0];
    v81[1].m128i_i64[0] = v80[1].m128i_i64[0];
  }
  v81->m128i_i64[1] = v80->m128i_i64[1];
  v80->m128i_i64[0] = (__int64)v80[1].m128i_i64;
  v80->m128i_i64[1] = 0;
  v80[1].m128i_i8[0] = 0;
  v82 = *(_BYTE **)n;
  ++v6[39].m128i_i32[2];
  if ( v82 != &n[16] )
    operator delete(v82);
  v83 = v6[156].m128i_i64[0];
  v84 = v6[155].m128i_i64[1];
  v131.m128i_i64[0] = (__int64)v144;
  *(_QWORD *)&n[8] = v83;
  *(_QWORD *)&n[16] = "/../";
  v150[1] = &v6[149].m128i_u64[1];
  *(_QWORD *)n = v84;
  v147[0] = "/bin";
  LOWORD(v154) = 773;
  ptr = n;
  v151[4] = 1026;
  v146[0] = &ptr;
  v148 = 770;
  sub_2253560(v144, v146);
  v85 = v6[72].m128i_u32[2];
  v86 = v85 + 1;
  if ( v85 + 1 > (unsigned __int64)v6[72].m128i_u32[3] )
  {
    v126 = v6[72].m128i_u64[0];
    v127 = v131.m128i_i64[0];
    v128 = (__int64)v6[72].m128i_i64;
    if ( v126 > v131.m128i_i64[0] || v131.m128i_i64[0] >= v126 + 32 * v85 )
    {
      sub_A8C1F0(v128, v86);
      v85 = v6[72].m128i_u32[2];
      v88 = (__m128i *)v131.m128i_i64[0];
      v87 = v6[72].m128i_i64[0];
    }
    else
    {
      sub_A8C1F0(v128, v86);
      v87 = v6[72].m128i_i64[0];
      v85 = v6[72].m128i_u32[2];
      v88 = (__m128i *)(v87 + v127 - v126);
    }
  }
  else
  {
    v87 = v6[72].m128i_i64[0];
    v88 = (__m128i *)v144;
  }
  v89 = (__m128i *)(v87 + 32 * v85);
  v89->m128i_i64[0] = (__int64)v89[1].m128i_i64;
  if ( (__m128i *)v88->m128i_i64[0] == &v88[1] )
  {
    v89[1] = _mm_loadu_si128(v88 + 1);
  }
  else
  {
    v89->m128i_i64[0] = v88->m128i_i64[0];
    v89[1].m128i_i64[0] = v88[1].m128i_i64[0];
  }
  v89->m128i_i64[1] = v88->m128i_i64[1];
  v88->m128i_i64[0] = (__int64)v88[1].m128i_i64;
  v88->m128i_i64[1] = 0;
  v88[1].m128i_i8[0] = 0;
  v90 = v131.m128i_i64[0];
  v91 = v144[0];
  ++v6[72].m128i_i32[2];
  if ( v91 != (void *)(v90 + 16) )
    operator delete(v91);
  v92 = v6[156].m128i_i64[0];
  v93 = v6[155].m128i_i64[1];
  LOWORD(v154) = 773;
  *(_QWORD *)&n[8] = v92;
  *(_QWORD *)n = v93;
  *(_QWORD *)&n[16] = "/../bin";
  sub_2253560(&ptr, n);
  v94 = v6[72].m128i_u32[2];
  v95 = v94 + 1;
  if ( v94 + 1 > (unsigned __int64)v6[72].m128i_u32[3] )
  {
    v123 = v6[72].m128i_u64[0];
    v124 = (__int64)v6[72].m128i_i64;
    if ( v123 > (unsigned __int64)&ptr || (unsigned __int64)&ptr >= v123 + 32 * v94 )
    {
      sub_A8C1F0(v124, v95);
      v96 = v6[72].m128i_i64[0];
      v94 = v6[72].m128i_u32[2];
      p_ptr = (__m128i *)&ptr;
    }
    else
    {
      sub_A8C1F0(v124, v95);
      v96 = v6[72].m128i_i64[0];
      v94 = v6[72].m128i_u32[2];
      p_ptr = (__m128i *)((char *)&v150[-1] + v96 - v123);
    }
  }
  else
  {
    v96 = v6[72].m128i_i64[0];
    p_ptr = (__m128i *)&ptr;
  }
  v98 = (__m128i *)(v96 + 32 * v94);
  v98->m128i_i64[0] = (__int64)v98[1].m128i_i64;
  if ( (__m128i *)p_ptr->m128i_i64[0] == &p_ptr[1] )
  {
    v98[1] = _mm_loadu_si128(p_ptr + 1);
  }
  else
  {
    v98->m128i_i64[0] = p_ptr->m128i_i64[0];
    v98[1].m128i_i64[0] = p_ptr[1].m128i_i64[0];
  }
  v98->m128i_i64[1] = p_ptr->m128i_i64[1];
  p_ptr->m128i_i64[0] = (__int64)p_ptr[1].m128i_i64;
  p_ptr->m128i_i64[1] = 0;
  p_ptr[1].m128i_i8[0] = 0;
  v99 = (void **)ptr;
  ++v6[72].m128i_i32[2];
  if ( v99 != &v150[1] )
    operator delete(v99);
LABEL_16:
  if ( v139[0] != v132 + 2 )
    operator delete(v139[0]);
}
