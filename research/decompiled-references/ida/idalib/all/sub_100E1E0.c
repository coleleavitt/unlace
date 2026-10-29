__int64 __fastcall sub_100E1E0(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // rax
  size_t v4; // rdx
  _QWORD *v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rbx
  _QWORD *v9; // r12
  __int64 i; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  size_t v14; // r14
  size_t v15; // rdi
  void *v16; // rax
  size_t v17; // r14
  size_t v18; // rax
  __int64 *v19; // r8
  size_t v20; // rdx
  __int64 *v21; // rdi
  __int64 v22; // rax
  __m128i v23; // xmm2
  void *v24; // rsi
  size_t v25; // rcx
  unsigned __int8 *v26; // rdx
  __m128i v27; // xmm0
  char j; // al
  __int64 v29; // r12
  unsigned __int8 *v30; // rbx
  size_t v31; // rax
  unsigned __int8 *v32; // r12
  unsigned __int8 v33; // r13
  char *v34; // rax
  size_t v35; // rdx
  char *v36; // rdi
  size_t v37; // r13
  _BYTE *v38; // r15
  size_t v39; // rax
  char v40; // al
  __m128i *v41; // rax
  void *v42; // r14
  __int64 v43; // rbx
  unsigned int v44; // eax
  int v45; // eax
  __int64 *v46; // rbx
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned int v51; // edx
  unsigned int v52; // eax
  unsigned int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // r9
  __int64 v56; // rdi
  unsigned int v57; // eax
  __int64 v58; // rbx
  _QWORD *v59; // rsi
  unsigned int v60; // eax
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rcx
  size_t v64; // r8
  __int64 v65; // r9
  size_t v67; // rax
  __int64 v68; // rbx
  int v69; // r14d
  __int64 *v70; // rsi
  __int64 *v71; // rdx
  unsigned __int64 v72; // rax
  __int64 v73; // rdx
  size_t v74; // rax
  size_t v75; // rax
  unsigned int v76; // eax
  size_t v77; // r14
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 *v80; // rcx
  __int64 v81; // rax
  unsigned int v82; // r9d
  __int64 *v83; // rcx
  __int64 v84; // rbx
  size_t v85; // rax
  __m128i v86; // xmm4
  void **v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  int v90; // r10d
  unsigned int v91; // eax
  __int64 *v92; // [rsp+8h] [rbp-500h]
  void *v93; // [rsp+10h] [rbp-4F8h]
  unsigned int v94; // [rsp+20h] [rbp-4E8h]
  unsigned int v95; // [rsp+20h] [rbp-4E8h]
  __int64 *v96; // [rsp+30h] [rbp-4D8h]
  __int64 *v97; // [rsp+30h] [rbp-4D8h]
  const void *v98; // [rsp+38h] [rbp-4D0h]
  _QWORD *v102; // [rsp+58h] [rbp-4B0h]
  unsigned int v103; // [rsp+60h] [rbp-4A8h] BYREF
  __int64 v104; // [rsp+68h] [rbp-4A0h]
  unsigned int v105; // [rsp+70h] [rbp-498h] BYREF
  _QWORD *v106; // [rsp+78h] [rbp-490h]
  void *v107; // [rsp+80h] [rbp-488h] BYREF
  _QWORD *v108; // [rsp+88h] [rbp-480h]
  _BYTE v109[16]; // [rsp+90h] [rbp-478h] BYREF
  void *ptr; // [rsp+A0h] [rbp-468h] BYREF
  _BYTE v111[24]; // [rsp+A8h] [rbp-460h] BYREF
  void *v112; // [rsp+D0h] [rbp-438h] BYREF
  void *v113; // [rsp+D8h] [rbp-430h] BYREF
  __int64 v114; // [rsp+E0h] [rbp-428h]
  _BYTE v115[24]; // [rsp+E8h] [rbp-420h] BYREF
  __m128i v116; // [rsp+100h] [rbp-408h] BYREF
  __int64 v117; // [rsp+110h] [rbp-3F8h]
  __m128i v118; // [rsp+118h] [rbp-3F0h] BYREF
  int v119; // [rsp+128h] [rbp-3E0h] BYREF
  void *v120; // [rsp+138h] [rbp-3D0h]
  _QWORD *v121; // [rsp+140h] [rbp-3C8h] BYREF
  _QWORD v122[3]; // [rsp+150h] [rbp-3B8h] BYREF
  __int64 v123; // [rsp+168h] [rbp-3A0h]
  _QWORD v124[2]; // [rsp+170h] [rbp-398h] BYREF
  __int64 v125; // [rsp+180h] [rbp-388h] BYREF
  void *src; // [rsp+1F0h] [rbp-318h] BYREF
  size_t n; // [rsp+1F8h] [rbp-310h]
  unsigned __int8 *v128; // [rsp+200h] [rbp-308h] BYREF
  __m128i v129; // [rsp+208h] [rbp-300h]
  int v130; // [rsp+218h] [rbp-2F0h]
  __m128i v131; // [rsp+2E0h] [rbp-228h] BYREF
  __int64 v132; // [rsp+2F0h] [rbp-218h] BYREF
  __m128i v133; // [rsp+2F8h] [rbp-210h] BYREF
  void *v134; // [rsp+308h] [rbp-200h]
  int v135; // [rsp+310h] [rbp-1F8h]
  void *v136; // [rsp+320h] [rbp-1E8h] BYREF
  __int16 v137; // [rsp+338h] [rbp-1D0h] BYREF
  __int64 v138; // [rsp+340h] [rbp-1C8h]
  __int64 v139; // [rsp+348h] [rbp-1C0h]
  int v140; // [rsp+350h] [rbp-1B8h]
  void *v141; // [rsp+3D0h] [rbp-138h] BYREF
  size_t v142[2]; // [rsp+3D8h] [rbp-130h] BYREF
  __m128i v143; // [rsp+3E8h] [rbp-120h] BYREF
  void **v144; // [rsp+3F8h] [rbp-110h]
  __int64 v145; // [rsp+400h] [rbp-108h]
  void *v146[2]; // [rsp+408h] [rbp-100h] BYREF
  __int64 v147; // [rsp+418h] [rbp-F0h]
  __m128i *v148; // [rsp+420h] [rbp-E8h]
  __int64 v149; // [rsp+428h] [rbp-E0h] BYREF
  __m128i v150; // [rsp+430h] [rbp-D8h] BYREF
  _DWORD v151[50]; // [rsp+440h] [rbp-C8h] BYREF

  v3 = *(_QWORD *)(a2 + 32);
  v103 = *a3;
  v104 = v3;
  LODWORD(v141) = sub_101B2B0(&v103);
  v142[0] = v4;
  v5 = (_QWORD *)sub_101B8C0(&v141);
  v102 = v5;
  v6 = v5;
  while ( 1 )
  {
    v7 = v5[1];
    if ( !v7 )
      break;
    v5 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v7 & 4) == 0 || !v5 )
      goto LABEL_5;
  }
  v5 = nullptr;
LABEL_5:
  v8 = v5[1];
  v9 = (_QWORD *)*v5;
  if ( !v8 )
  {
    for ( i = v6[1]; i; i = *(_QWORD *)(v11 + 8) )
    {
      if ( (i & 4) == 0 )
        break;
      v11 = i & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v11 )
        break;
      v6 = (__int64 *)v11;
    }
    v8 = *v6;
    v9 = v6 + 4;
  }
  qmemcpy(&v143, "file://", 7);
  v142[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D20).m128i_u64[1];
  v141 = &v143;
  v142[0] = 7;
  v12 = sub_2289A60(v9, v8, 0, v6);
  if ( v13 <= 1 )
  {
    if ( v13 )
      goto LABEL_13;
  }
  else
  {
    if ( *(_WORD *)v12 != 12079 )
    {
LABEL_13:
      v132 = v12;
      v133.m128i_i64[0] = v13;
      v133.m128i_i16[4] = 1283;
      v131.m128i_i64[0] = (__int64)"/";
      sub_2253560(&src, &v131);
      v14 = n;
      v15 = v142[0];
      v16 = src;
      if ( n + v142[0] > v142[1] )
      {
        v93 = src;
        sub_2236E10(&v141, &v143, n + v142[0], 1);
        v15 = v142[0];
        v16 = v93;
      }
      if ( v14 )
      {
        memcpy((char *)v141 + v15, v16, v14);
        v15 = v142[0];
      }
      v142[0] = v15 + v14;
      if ( src != &v128 )
        operator delete(src);
      goto LABEL_25;
    }
    if ( v12 != -2 )
    {
      v131.m128i_i64[0] = (__int64)&v132;
      sub_100CB80(&v131, (_BYTE *)(v12 + 2), v12 + v13);
      v17 = v131.m128i_u64[1];
      v18 = v142[0];
      v19 = (__int64 *)v131.m128i_i64[0];
      v20 = v131.m128i_i64[1] + v142[0];
      if ( v131.m128i_i64[1] + v142[0] <= v142[1] )
        goto LABEL_21;
      goto LABEL_45;
    }
    v19 = &v132;
    LOBYTE(v132) = 0;
    v20 = v142[0];
    v131.m128i_i64[0] = (__int64)&v132;
    v131.m128i_i64[1] = 0;
    if ( v142[1] < v142[0] )
    {
      v17 = 0;
LABEL_45:
      v92 = v19;
      sub_2236E10(&v141, &v143, v20, 1);
      v18 = v142[0];
      v19 = v92;
LABEL_21:
      if ( v17 )
      {
        memcpy((char *)v141 + v18, v19, v17);
        v21 = (__int64 *)v131.m128i_i64[0];
        v18 = v17 + v142[0];
      }
      else
      {
        v21 = (__int64 *)v131.m128i_i64[0];
      }
      v142[0] = v18;
      if ( v21 != &v132 )
        operator delete(v21);
    }
  }
LABEL_25:
  sub_22892D0(&v112, v9, v8, 0);
  sub_2289320(&v116, v9, v8);
  v22 = sub_2289340(&v112);
  v23 = _mm_loadu_si128(&v118);
  v24 = *(void **)v22;
  v25 = *(_QWORD *)(v22 + 8);
  v26 = *(unsigned __int8 **)(v22 + 16);
  v27 = _mm_loadu_si128((const __m128i *)(v22 + 24));
  LODWORD(v22) = *(_DWORD *)(v22 + 40);
  src = v24;
  n = v25;
  v130 = v22;
  v128 = v26;
  v131 = v116;
  v129 = v27;
  v133 = v23;
  v132 = v117;
  LODWORD(v134) = v119;
  for ( j = sub_22895C0(&src, &v131); !j; j = sub_22895C0(&src, &v131) )
  {
    v29 = v129.m128i_i64[0];
    v30 = v128;
    if ( v129.m128i_i64[0] != 1 || *v128 != 92 )
    {
      v31 = v142[0];
      if ( v142[0] + 1 > v142[1] )
      {
        sub_2236E10(&v141, &v143, v142[0] + 1, 1);
        v31 = v142[0];
      }
      v32 = &v30[v29];
      *((_BYTE *)v141 + v31) = 47;
      ++v142[0];
      if ( v30 != v32 )
      {
        while ( 1 )
        {
          v33 = *v30;
          if ( (unsigned __int8)((*v30 & 0xDF) - 65) > 0x19u
            && (unsigned __int8)(v33 - 48) > 9u
            && ((v34 = (char *)memchr("-._~:@!$&'()*+,;=", (char)v33, 0x11u)) == nullptr || v34 == "") )
          {
            v40 = a0123456789abcd_3[v33 >> 4];
            ptr = &v111[16];
            *(__m128i *)v111 = _mm_load_si128((const __m128i *)&xmmword_23A9540);
            v111[16] = v40;
            v111[17] = a0123456789abcd_3[v33 & 0xF];
            v107 = v109;
            sub_100CB80(&v107, &v111[16], (__int64)&v111[18]);
            if ( ptr != &v111[16] )
              free(ptr);
            v41 = (__m128i *)sub_99BDC0(&v107, 0, 0, "%", 1u);
            ptr = &v111[8];
            if ( (__m128i *)v41->m128i_i64[0] == &v41[1] )
            {
              *(__m128i *)&v111[8] = _mm_loadu_si128(v41 + 1);
            }
            else
            {
              ptr = (void *)v41->m128i_i64[0];
              *(_QWORD *)&v111[8] = v41[1].m128i_i64[0];
            }
            *(_QWORD *)v111 = v41->m128i_i64[1];
            v41->m128i_i64[0] = (__int64)v41[1].m128i_i64;
            v41->m128i_i64[1] = 0;
            v41[1].m128i_i8[0] = 0;
            if ( v107 != v109 )
              operator delete(v107);
            v37 = *(_QWORD *)v111;
            v39 = v142[0];
            v38 = ptr;
            v35 = *(_QWORD *)v111 + v142[0];
            if ( *(_QWORD *)v111 + v142[0] <= v142[1] )
              goto LABEL_50;
          }
          else
          {
            ptr = &v111[8];
            *(_WORD *)&v111[8] = v33;
            *(_QWORD *)v111 = 1;
            v35 = v142[0] + 1;
            if ( v142[1] >= v142[0] + 1 )
            {
              v36 = (char *)v141 + v142[0];
              v37 = 1;
              v38 = &v111[8];
              goto LABEL_39;
            }
            v37 = 1;
            v38 = &v111[8];
          }
          sub_2236E10(&v141, &v143, v35, 1);
          v39 = v142[0];
LABEL_50:
          if ( !v37 )
            goto LABEL_40;
          v36 = (char *)v141 + v39;
LABEL_39:
          memcpy(v36, v38, v37);
          v39 = v142[0];
LABEL_40:
          v142[0] = v37 + v39;
          if ( ptr == &v111[8] )
          {
            if ( v32 == ++v30 )
              break;
          }
          else
          {
            operator delete(ptr);
            if ( ++v30 == v32 )
              break;
          }
        }
      }
    }
    sub_2289340(&src);
  }
  ptr = &v111[8];
  sub_100CB80(&ptr, v141, (__int64)v141 + v142[0]);
  if ( v141 != &v143 )
    free(v141);
  v42 = ptr;
  v43 = *(_QWORD *)v111;
  v44 = sub_2244B30(ptr, *(_QWORD *)v111);
  v45 = sub_2244E60(a2 + 4696, v42, v43, v44);
  if ( v45 == -1 )
    sub_100D170((__int64 **)&v141, (__int64 *)(*(_QWORD *)(a2 + 4696) + 8LL * *(unsigned int *)(a2 + 4704)), 1);
  else
    sub_100D170((__int64 **)&v141, (__int64 *)(*(_QWORD *)(a2 + 4696) + 8LL * v45), 1);
  v46 = (__int64 *)v141;
  sub_100D170((__int64 **)&v141, (__int64 *)(*(_QWORD *)(a2 + 4696) + 8LL * *(unsigned int *)(a2 + 4704)), 1);
  if ( v141 == v46 )
  {
    v69 = *(_DWORD *)(a2 + 4708);
    if ( ptr )
    {
      v131.m128i_i64[0] = (__int64)&v132;
      sub_100CB80(&v131, ptr, (__int64)ptr + *(_QWORD *)v111);
      v70 = (__int64 *)v131.m128i_i64[0];
      v71 = (__int64 *)(v131.m128i_i64[0] + v131.m128i_i64[1]);
    }
    else
    {
      v71 = &v132;
      LOBYTE(v132) = 0;
      v131.m128i_i64[0] = (__int64)&v132;
      v70 = &v132;
      v131.m128i_i64[1] = 0;
    }
    BYTE4(v141) = 0;
    v142[0] = (size_t)&v143;
    sub_100CAC0(v142, v70, (__int64)v71);
    if ( (__int64 *)v131.m128i_i64[0] != &v132 )
      operator delete((void *)v131.m128i_i64[0]);
    LODWORD(v141) = v69;
    BYTE4(v141) = 1;
    v112 = v141;
    v113 = v115;
    sub_100CAC0(&v113, (_BYTE *)v142[0], v142[0] + v142[1]);
    if ( (__m128i *)v142[0] != &v143 )
      operator delete((void *)v142[0]);
    v116.m128i_i8[4] = 0;
    LOBYTE(v117) = 0;
    v118 = (__m128i)(unsigned __int64)&v119;
    LOBYTE(v119) = 0;
    v120 = v112;
    v121 = v122;
    sub_100CAC0(&v121, v113, (__int64)v113 + v114);
    v123 = 0x400000000LL;
    v124[0] = &v125;
    v122[2] = v124;
    sub_100CB80(v124, "resultFile", (__int64)"");
    LODWORD(v123) = v123 + 1;
    sub_100D0D0(&src, (__int64)&v116);
    v72 = (unsigned __int64)v102;
    while ( 1 )
    {
      v73 = *(_QWORD *)(v72 + 8);
      if ( !v73 )
        break;
      v72 = v73 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v73 & 4) == 0 || !v72 )
        goto LABEL_107;
    }
    v72 = 0;
LABEL_107:
    v74 = *(_QWORD *)(v72 + 32);
    LOBYTE(v128) = 1;
    n = v74;
    sub_100D0D0(&v141, (__int64)&src);
    v75 = j__strlen("text/plain");
    v131.m128i_i64[0] = (__int64)&v132;
    sub_100CB80(&v131, "text/plain", (__int64)&aTextPlain[v75]);
    sub_A0AAD0((__int64)&v143, &v131);
    if ( (__int64 *)v131.m128i_i64[0] != &v132 )
      operator delete((void *)v131.m128i_i64[0]);
    sub_100D0D0(&v131, (__int64)&v141);
    sub_100CC40((__int64)&v141);
    sub_100CC40((__int64)&src);
    sub_100CC40((__int64)&v116);
    v141 = ptr;
    v142[0] = *(_QWORD *)v111;
    sub_100D0D0(&v142[1], (__int64)&v131);
    v76 = sub_2244B30(v141, v142[0]);
    v77 = v142[0];
    v98 = v141;
    v78 = (unsigned int)sub_2244CB0(a2 + 4696, v141, v142[0], v76);
    v80 = (__int64 *)(*(_QWORD *)(a2 + 4696) + 8 * v78);
    if ( *v80 )
    {
      if ( *v80 != -8 )
      {
        sub_100D170((__int64 **)&src, v80, 0);
        sub_100CC40((__int64)&v142[1]);
LABEL_112:
        sub_100CC40((__int64)&v131);
        if ( v113 != v115 )
          operator delete(v113);
        goto LABEL_65;
      }
      --*(_DWORD *)(a2 + 4712);
    }
    v96 = v80;
    v94 = v78;
    v81 = sub_22300B0(v77 + 249, 8, v78, v80, v79, v78);
    v82 = v94;
    v83 = v96;
    v84 = v81;
    if ( v77 )
    {
      memcpy((void *)(v81 + 248), v98, v77);
      v83 = v96;
      v82 = v94;
    }
    v85 = v142[1];
    *(_BYTE *)(v84 + v77 + 248) = 0;
    v86 = _mm_loadu_si128(&v143);
    *(_QWORD *)v84 = v77;
    *(_QWORD *)(v84 + 8) = v85;
    *(_QWORD *)(v84 + 32) = v84 + 48;
    v87 = v144;
    *(__m128i *)(v84 + 16) = v86;
    if ( v87 == v146 )
    {
      *(__m128i *)(v84 + 48) = _mm_loadu_si128((const __m128i *)v146);
    }
    else
    {
      *(_QWORD *)(v84 + 32) = v87;
      *(void **)(v84 + 48) = v146[0];
    }
    v88 = v145;
    v145 = 0;
    LOBYTE(v146[0]) = 0;
    *(_QWORD *)(v84 + 40) = v88;
    v144 = v146;
    *(_QWORD *)(v84 + 64) = v147;
    *(_QWORD *)(v84 + 72) = v84 + 88;
    if ( v148 == &v150 )
    {
      *(__m128i *)(v84 + 88) = _mm_load_si128(&v150);
    }
    else
    {
      *(_QWORD *)(v84 + 72) = v148;
      *(_QWORD *)(v84 + 88) = v150.m128i_i64[0];
    }
    v89 = v149;
    v90 = v151[2];
    v149 = 0;
    v150.m128i_i8[0] = 0;
    *(_QWORD *)(v84 + 80) = v89;
    v148 = &v150;
    *(_QWORD *)(v84 + 104) = v84 + 120;
    *(_QWORD *)(v84 + 112) = 0x400000000LL;
    if ( v90 )
    {
      v97 = v83;
      v95 = v82;
      sub_CEFDD0(v84 + 104, (__int64)v151);
      v83 = v97;
      v82 = v95;
    }
    *v83 = v84;
    ++*(_DWORD *)(a2 + 4708);
    v91 = sub_22450D0(a2 + 4696, v82);
    sub_100D170((__int64 **)&src, (__int64 *)(*(_QWORD *)(a2 + 4696) + 8LL * v91), 0);
    v46 = (__int64 *)src;
    sub_100CC40((__int64)&v142[1]);
    goto LABEL_112;
  }
LABEL_65:
  v47 = *v46;
  sub_E59B60((void ***)&v141, "uri");
  v131.m128i_i64[0] = (__int64)&v132;
  sub_100CAC0(&v131, *(_BYTE **)(v47 + 72), *(_QWORD *)(v47 + 72) + *(_QWORD *)(v47 + 80));
  sub_E59390((__int64)&v143, &v131);
  sub_100D6D0((__int64)&v112, (__int64)&v141, 1, v48, v49, v50);
  sub_222B2A0(&v143);
  if ( v141 )
    sub_100CA80((void **)v141);
  if ( (__int64 *)v131.m128i_i64[0] != &v132 )
    operator delete((void *)v131.m128i_i64[0]);
  if ( *(_BYTE *)(v47 + 68) )
  {
    v67 = *(unsigned int *)(v47 + 64);
    LOWORD(v141) = 3;
    v142[0] = v67;
    sub_E59B60((void ***)&v131, "index");
    v68 = sub_222E220(&v112, &v131);
    sub_222B2A0(v68);
    sub_2229580(v68, &v141);
    if ( v131.m128i_i64[0] )
      sub_100CA80((void **)v131.m128i_i64[0]);
    sub_222B2A0(&v141);
  }
  sub_E59B60((void ***)&v131, "artifactLocation");
  v133.m128i_i16[0] = 7;
  v133.m128i_i64[1] = (__int64)v112;
  v112 = nullptr;
  v134 = v113;
  v113 = nullptr;
  v135 = v114;
  LODWORD(v114) = 0;
  sub_E59B60((void ***)&v136, (char *)"region");
  v51 = *a3;
  v106 = *(_QWORD **)(a2 + 32);
  v108 = v106;
  v105 = v51;
  LODWORD(v107) = a3[1];
  sub_E59B60((void ***)&v141, "startLine");
  v52 = sub_101B450(&v105, 0);
  v143.m128i_i16[0] = 3;
  v143.m128i_i64[1] = v52;
  sub_E59B60((void ***)&v146[1], "startColumn");
  v53 = sub_100E000(v105, v106);
  LOWORD(v149) = 3;
  v150.m128i_i64[0] = v53;
  sub_100DB20((__int64)&v116, (__int64)&v141, 2, v54, 3u, v55);
  sub_222B2A0(&v149);
  if ( v146[1] )
    sub_100CA80((void **)v146[1]);
  sub_222B2A0(&v143);
  if ( v141 )
    sub_100CA80((void **)v141);
  v56 = v105;
  if ( v105 != (_DWORD)v107 || (v59 = v106, v106 != v108) )
  {
    v57 = sub_101B450(&v107, 0);
    LOWORD(v141) = 3;
    v142[0] = v57;
    sub_E59B60((void ***)&src, "endLine");
    v58 = sub_222E220(&v116, &src);
    sub_222B2A0(v58);
    sub_2229580(v58, &v141);
    if ( src )
      sub_100CA80((void **)src);
    sub_222B2A0(&v141);
    v56 = (unsigned int)v107;
    v59 = v108;
  }
  v60 = sub_100E000(v56, v59);
  LOWORD(v141) = 3;
  v142[0] = v60;
  sub_E59B60((void ***)&src, "endColumn");
  v61 = sub_222E220(&v116, &src);
  sub_222B2A0(v61);
  sub_2229580(v61, &v141);
  if ( src )
    sub_100CA80((void **)src);
  sub_222B2A0(&v141);
  v137 = 7;
  v62 = v116.m128i_i64[1];
  v138 = v116.m128i_i64[0];
  v116 = 0u;
  v139 = v62;
  LODWORD(v62) = v117;
  LODWORD(v117) = 0;
  v140 = v62;
  sub_100DB20(a1, (__int64)&v131, 2, v63, v64, v65);
  sub_222B2A0(&v137);
  if ( v136 )
    sub_100CA80((void **)v136);
  sub_222B2A0(&v133);
  if ( v131.m128i_i64[0] )
    sub_100CA80((void **)v131.m128i_i64[0]);
  sub_E5D2E0(v116.m128i_i64);
  sub_E5D2E0((__int64 *)&v112);
  if ( ptr != &v111[8] )
    operator delete(ptr);
  return a1;
}
