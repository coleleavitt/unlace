__int64 __fastcall sub_191AF90(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned int v8; // r14d
  int v10; // r12d
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // r13
  __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  __int64 v25; // rdx
  unsigned __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rsi
  int v33; // edx
  unsigned int v34; // eax
  __int64 *v35; // rsi
  unsigned int v36; // ecx
  unsigned int v37; // edx
  __int64 v38; // rbp
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __m128 *v45; // r15
  char v46; // r12
  __int64 v47; // r15
  __int64 v48; // rbp
  char v49; // dl
  char v50; // al
  char v51; // r12
  unsigned __int8 v52; // al
  __int64 v53; // rdi
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  bool v58; // zf
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int64 v61; // rax
  __int64 *v62; // r8
  __int64 v63; // r15
  __int64 v64; // rcx
  __int64 v65; // r15
  char v66; // al
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rsi
  unsigned __int64 v70; // rax
  const __m128i *v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rax
  __int64 v74; // r9
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  unsigned __int64 v78; // rcx
  __int64 v79; // rdi
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rax
  bool v88; // al
  __int64 *v89; // rsi
  unsigned int v90; // eax
  __int64 *v91; // rsi
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rax
  __int64 v94; // rdi
  __int64 v95; // rax
  unsigned int v96; // eax
  __int64 *v97; // rsi
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rbx
  __int64 v103; // rbx
  __int64 v104; // [rsp-10h] [rbp-138h]
  __int64 v105; // [rsp-10h] [rbp-138h]
  unsigned __int64 v106; // [rsp-8h] [rbp-130h]
  __int64 i; // [rsp+0h] [rbp-128h]
  __m128 *v109; // [rsp+8h] [rbp-120h] BYREF
  __int64 *v110; // [rsp+10h] [rbp-118h]
  __m128 *v111; // [rsp+18h] [rbp-110h]
  unsigned __int64 v112; // [rsp+28h] [rbp-100h] BYREF
  unsigned __int64 v113; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v114; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v115; // [rsp+40h] [rbp-E8h] BYREF
  char v116; // [rsp+4Ch] [rbp-DCh]
  char v117; // [rsp+50h] [rbp-D8h]
  __m128 v118; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 *v119; // [rsp+70h] [rbp-B8h]

  v8 = a5;
  LOBYTE(v10) = 1;
  v12 = (unsigned __int64)a2;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) != 0 )
  {
    v109 = (__m128 *)a4;
    a7 = _mm_loadh_ps((const double *)&v109);
    v118 = a7;
    v13 = sub_BFB900(a7.m128_u64[0]);
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                            + 8LL)
                                                & 0xFFFFFFFFFFFFFFF0LL)
                                    + 16LL)
                         - 2) <= 4u )
      LOBYTE(v10) = (((*(_BYTE *)(v13 + 1) >> 1) & 3) != 1) + 1;
    v14 = sub_BFB900(v118.m128_u64[1]);
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                            + 8LL)
                                                & 0xFFFFFFFFFFFFFFF0LL)
                                    + 16LL)
                         - 2) <= 4u
      && ((*(_BYTE *)(v14 + 1) >> 1) & 3) != 1 )
    {
      LOBYTE(v10) = 2;
    }
  }
  v15 = *(_QWORD *)(a2[1] & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1
    && !sub_F58380(v15) )
  {
    v41 = sub_19179A0(a1, a2, 1u, (__int64)a4, a5, a6, a7, a8);
    v12 = v41 & 0xFFFFFFFFFFFFFFFELL;
    if ( v41 == 1 )
      return 1;
  }
  v16 = sub_19179A0(a1, a4, 1u, (__int64)a4, a5, a6, a7, a8);
  if ( v16 == 1 )
    return 1;
  v19 = *(_QWORD *)(v12 + 8);
  v113 = 0;
  v20 = v16 & 0xFFFFFFFFFFFFFFFELL;
  v21 = *(_QWORD *)((v16 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v22 = v19 & 0xFFFFFFFFFFFFFFF0LL;
  v23 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v23 + 17) & 4) != 0
    || (v17 = v21 & 0xFFFFFFFFFFFFFFF0LL, v24 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL), (*(_BYTE *)(v24 + 17) & 4) != 0) )
  {
    v25 = *(_QWORD *)(a1 + 248);
    v24 = v20;
    v26 = v20;
    v112 = v12;
    v27 = sub_18BE970(v12, v20, v25, v17, v18, v19);
    LODWORD(v109) = 0;
    v113 = v27;
    goto LABEL_12;
  }
  if ( *(_BYTE *)(v23 + 16) == 42
    || (v53 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL),
        v111 = (__m128 *)v19,
        v110 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFF0LL),
        v109 = (__m128 *)(v21 & 0xFFFFFFFFFFFFFFF0LL),
        v23 = sub_18BBDD0(v53, v24, v22, v17),
        v17 = (__int64)v109,
        v22 = (__int64)v110,
        v54 = (__int64)v111,
        v23) )
  {
    v112 = v12;
    v42 = *(_QWORD *)(v23 + 32);
    v26 = v20;
    LODWORD(v109) = 0;
    v113 = v42;
    goto LABEL_12;
  }
  v55 = *v110;
  if ( *(_BYTE *)(*v110 + 16) == 34
    || (v24 = *(_QWORD *)(*(_QWORD *)(v55 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v24 + 16) == 34)
    && (v55 = sub_F63050(*v110, v24, v110, v109), v17 = (__int64)v109, v22 = (__int64)v110, v54 = (__int64)v111, v55) )
  {
    v24 = *(_QWORD *)(a1 + 232);
    v112 = v12;
    v17 = *(unsigned int *)(v24 + 368);
    v22 = (1LL << v17) & 0x6D;
    if ( ((1LL << v17) & 0x6D) != 0 || (*(_BYTE *)(v24 + 107) & 0x20) != 0 )
      return sub_19CFAC0(*(_QWORD *)(a1 + 736), v8, v12, v20, 0, 0);
    goto LABEL_49;
  }
  v57 = *(_QWORD *)v17;
  v111 = (__m128 *)v54;
  v110 = (__int64 *)v22;
  v58 = *(_BYTE *)(v57 + 16) == 42;
  v109 = (__m128 *)v17;
  if ( v58
    || (v57 = sub_18BBDD0(v57, v24, v22, v17), v17 = (__int64)v109, v22 = (__int64)v110, v74 = (__int64)v111, v57) )
  {
    v112 = v20;
    v59 = *(_QWORD *)(v57 + 32);
    v26 = v12;
    LODWORD(v109) = 0;
    v113 = v59;
    goto LABEL_12;
  }
  v75 = v109->m128_u64[0];
  if ( *(_BYTE *)(v109->m128_u64[0] + 16) == 34
    || (v24 = *(_QWORD *)(*(_QWORD *)(v75 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v24 + 16) == 34)
    && (v75 = sub_F63050(v109->m128_u64[0], v24, v110, v109),
        v17 = (__int64)v109,
        v22 = (__int64)v110,
        v74 = (__int64)v111,
        v75) )
  {
    v22 = *(_QWORD *)(a1 + 232);
    v76 = *(_QWORD *)(v75 + 32);
    v112 = v20;
    v17 = *(unsigned int *)(v22 + 368);
    v113 = v76;
    if ( ((1LL << v17) & 0x6D) != 0 || (*(_BYTE *)(v22 + 107) & 0x20) != 0 )
    {
      v35 = (__int64 *)(a1 + 8);
      v37 = a3;
      v36 = 5041;
      goto LABEL_19;
    }
    v26 = v12;
    LODWORD(v109) = 0;
  }
  else
  {
    v77 = *(_QWORD *)v22;
    v111 = (__m128 *)v74;
    v110 = (__int64 *)v17;
    v24 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v77 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57;
    if ( (unsigned int)v24 <= 1 )
    {
LABEL_84:
      v78 = *(_QWORD *)(v77 + 8) & 0xFFFFFFFFFFFFFFF0LL;
      v79 = *(_QWORD *)v78;
      if ( *(_BYTE *)(*(_QWORD *)v78 + 16LL) != 13
        || (v109 = (__m128 *)v22, v58 = !sub_F58380(v79), v77 = v109->m128_u64[0], v58) )
      {
        v80 = (unsigned int)*(unsigned __int8 *)(v77 + 16) - 57;
        if ( (unsigned int)v80 > 1 )
          v77 = sub_18BBF30(v77, v24, v80, v78);
        v113 = *(_QWORD *)(v77 + 32);
      }
      else
      {
        v93 = *(_QWORD *)(v77 + 8) & 0xFFFFFFFFFFFFFFF0LL;
        v94 = *(_QWORD *)v93;
        if ( *(_BYTE *)(*(_QWORD *)v93 + 16LL) != 13 )
          BUG();
        if ( ((*(_WORD *)(v94 + 18) >> 3) & 0x1FF) == 0x64 )
        {
          sub_168B9F0((__int64)&v118, (__int64 *)(a1 + 8), a3, 0x13B2u, 0);
          v114 = sub_EEC8C0(v12, a1 + 8, *(double *)a7.m128_u64);
          v103 = sub_1587DB0((__int64)&v118, &v114);
          v115 = sub_EEC8C0(v20, (__int64)&v114, *(double *)a7.m128_u64);
          sub_1587DB0(v103, &v115);
          sub_15F7200(&v118);
          return 1;
        }
        v24 = *(_QWORD *)(a1 + 248);
        v113 = sub_F583D0(v94, (_QWORD *)v24);
      }
      v81 = *(_QWORD *)(a1 + 232);
      v112 = v12;
      if ( (*(_BYTE *)(v81 + 1) & 0x10) != 0 && (*(_BYTE *)(v12 + 1) & 6) == 0 )
      {
        v24 = v12;
        v95 = sub_1A0BEA0(a1, v12);
        if ( v95 == 1 )
          return 1;
        v12 = v95 & 0xFFFFFFFFFFFFFFFELL;
      }
      v10 = (*(_BYTE *)(v12 + 1) >> 1) & 3;
      v82 = 0;
      LODWORD(v109) = v10 != 0 ? 2 : 0;
      v83 = *(_QWORD *)(v112 + 8);
      v84 = *(_QWORD *)&byte_8[v83 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v84 & 8) != 0 )
        v82 = *(__int64 *)((char *)&qword_18 + (v84 & 0xFFFFFFFFFFFFFFF0LL));
      v85 = v82 | ((unsigned __int8)v84 | (unsigned __int8)v83) & 7;
      v17 = v113;
      v86 = *(_QWORD *)&byte_8[v113 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v86 & 8) != 0 )
      {
        v17 = v113 & 7;
        v24 = v86 & 0xFFFFFFFFFFFFFFF0LL;
        v87 = v17
            | *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v113 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
            | *(_QWORD *)&byte_8[v113 & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
        if ( (*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v113 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
            & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v17 = v113 & 7
              | *((_BYTE *)&qword_18 + (*(_QWORD *)&byte_8[v113 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)) & 7
              | byte_8[v113 & 0xFFFFFFFFFFFFFFF0LL] & 7u;
          v22 = v17 | v85;
          if ( (v87 & 0xFFFFFE00) != 0 )
          {
            v17 = (unsigned int)v87 & 0xFFFFFE00;
            v22 = v17 | v22 & 0xFFFFFFFF000001FFLL;
          }
          if ( (v87 & 0x30) != 0 )
          {
            v17 = v87 & 0x30;
            v22 = v17 | v22 & 0xFFFFFFFFFFFFFFCFLL;
          }
          if ( (v87 & 0x1C0) != 0 )
          {
            v17 = v87 & 0x1C0;
            v22 |= v17;
          }
          v24 = v87 & 0xFFFFFFFF00000000LL;
          if ( (v87 & 0xFFFFFFFF00000000LL) != 0 )
            v22 = v24 | (unsigned int)v22;
          goto LABEL_95;
        }
      }
      else
      {
        v87 = ((unsigned __int8)v113 | (unsigned __int8)v86) & 7;
      }
      v22 = v87 | v85;
LABEL_95:
      v26 = v20;
      if ( v22 != v87 )
      {
        v24 = v113;
        v113 = sub_A70F20(*(_QWORD *)(a1 + 248), v113, v22);
      }
      goto LABEL_12;
    }
    v109 = (__m128 *)v22;
    v88 = sub_F58380(v77);
    v22 = (__int64)v109;
    if ( v88 )
    {
      v77 = v109->m128_u64[0];
      goto LABEL_84;
    }
    v89 = (__int64 *)(a1 + 8);
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v109->m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
    {
      v110 = (__int64 *)v111;
      v109 = (__m128 *)(a1 + 8);
      v90 = sub_EEB7E0(v12, (__int64)v89, *(double *)a7.m128_u64);
      v91 = (__int64 *)v109;
      sub_168B9F0((__int64)&v118, (__int64 *)v109, v90, 0x162Cu, 0);
      v115 = sub_EEC8C0(v12, (__int64)v91, *(double *)a7.m128_u64);
      sub_1587DB0((__int64)&v118, &v115);
      sub_15F7200(&v118);
      v92 = sub_A72210(*(_QWORD **)(a1 + 248), (__int64)v110);
      v24 = v12;
      v112 = sub_160A600(a1, v12, v92, 0xBu, 0, 0, *(double *)a7.m128_u64, *(double *)a8.m128_u64, 0)
           & 0xFFFFFFFFFFFFFFFELL;
      v12 = v112;
      v18 = v104;
      v55 = *(_QWORD *)(*(_QWORD *)(v112 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v55 + 16) != 42 )
        v55 = sub_F63050(v55, v24, v22, v17);
LABEL_49:
      v56 = *(_QWORD *)(v55 + 32);
      v26 = v20;
      LODWORD(v109) = 0;
      v113 = v56;
      goto LABEL_12;
    }
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v110 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
    {
      sub_168B9F0((__int64)&v118, v89, a3, 0x14C2u, 0);
      v114 = sub_EEC8C0(v12, (__int64)v89, *(double *)a7.m128_u64);
      v102 = sub_1587DB0((__int64)&v118, &v114);
      v115 = sub_EEC8C0(v20, (__int64)&v114, *(double *)a7.m128_u64);
      sub_1587DB0(v102, &v115);
      sub_15F7200(&v118);
      return 1;
    }
    v109 = (__m128 *)(a1 + 8);
    v96 = sub_EEB7E0(v20, (__int64)v89, *(double *)a7.m128_u64);
    v97 = (__int64 *)v109;
    v109 = &v118;
    sub_168B9F0((__int64)&v118, v97, v96, 0x162Cu, 0);
    v115 = sub_EEC8C0(v20, (__int64)v97, *(double *)a7.m128_u64);
    sub_1587DB0((__int64)v109, &v115);
    sub_15F7200(v109);
    v98 = sub_A72210(*(_QWORD **)(a1 + 248), v21);
    v106 = v99;
    v112 = sub_160A600(a1, v20, v98, 0xBu, 0, 0, *(double *)a7.m128_u64, *(double *)a8.m128_u64, 0)
         & 0xFFFFFFFFFFFFFFFELL;
    v20 = v112;
    v17 = v105;
    v24 = v106;
    v100 = *(_QWORD *)(*(_QWORD *)(v112 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v100 + 16) != 42 )
      v100 = sub_F63050(v100, v106, v22, v105);
    v101 = *(_QWORD *)(v100 + 32);
    v26 = v12;
    LODWORD(v109) = 0;
    v113 = v101;
  }
LABEL_12:
  if ( !sub_9EC890(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL), v24, v22, v17, v18)
    && (*(_DWORD *)v26 & 0x10000) == 0 )
  {
    sub_168B9F0((__int64)&v118, (__int64 *)(a1 + 8), a3, 0x14C1u, 0);
    v115 = sub_EEC8C0(v26, a1 + 8, *(double *)a7.m128_u64);
    sub_1587DB0((__int64)&v118, &v115);
    sub_15F7200(&v118);
    return 1;
  }
  v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v30 + 16) == 13 && ((*(_WORD *)(v30 + 18) >> 3) & 0x1FF) == 0x1C0
    || (v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v40 + 16) == 13)
    && ((*(_WORD *)(v40 + 18) >> 3) & 0x1FF) == 0x1B5 )
  {
    if ( (*(_DWORD *)v26 & 0x10000) == 0 )
    {
      v43 = *(_QWORD *)(a1 + 248);
      v110 = &v115;
      sub_C3EB00((__int64)&v115, v26, v43, nullptr, v28, v29);
      if ( !v117 || !v116 && sub_18BB800(v110) )
      {
        v111 = &v118;
        sub_168B9F0((__int64)&v118, (__int64 *)(a1 + 8), a3, 0x1CE6u, 0);
        v44 = sub_EEC8C0(v26, a1 + 8, *(double *)a7.m128_u64);
        v45 = v111;
        v114 = v44;
        sub_1587DB0((__int64)v111, &v114);
        sub_15F7200(v45);
      }
      sub_98E4B0((__int64)v110);
    }
  }
  v31 = *(_QWORD *)(v113 & 0xFFFFFFFFFFFFFFF0LL);
  v32 = *(_QWORD *)(*(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v33 = *(unsigned __int8 *)(v32 + 16);
  if ( (unsigned int)(v33 - 25) <= 1 )
  {
    v34 = sub_EEB7E0(v112, v32, *(double *)a7.m128_u64);
    v35 = (__int64 *)(a1 + 8);
    v36 = 5039;
    v37 = v34;
LABEL_19:
    sub_168B9F0((__int64)&v118, v35, v37, v36, 0);
    v38 = sub_1605D30((__int64)&v118, (__int64 *)&v113);
    v115 = sub_EEC8C0(v112, (__int64)&v113, *(double *)a7.m128_u64);
    sub_1587DB0(v38, &v115);
    sub_15F7200(&v118);
    return 1;
  }
  if ( (_BYTE)v33 == 13
    && ((*(_WORD *)(v32 + 18) >> 3) & 0x1FF) == 0x1B3
    && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
  {
    LOBYTE(v110) = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8;
    sub_168B9F0((__int64)&v118, (__int64 *)(a1 + 8), a3, 0x15C3u, 0);
    v115 = sub_EEC8C0(v112, a1 + 8, *(double *)a7.m128_u64);
    sub_1587DB0((__int64)&v118, &v115);
    sub_15F7200(&v118);
    if ( (v113 & 7) == 0 && (v113 & 8) == 0 )
    {
      v46 = v10 & 3;
      v60 = *(_QWORD *)&byte_8[v113 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v60 & 7) == 0 && (v60 & 8) == 0 )
        v46 = (char)v110;
      goto LABEL_40;
    }
  }
  else if ( (*(_BYTE *)(v31 + 17) & 4) == 0 && !sub_F65EB0(&v113) )
  {
    v119 = &v112;
    v118.m128_i32[2] = 5040;
    v118.m128_u64[0] = (unsigned __int64)off_2BC6F90;
    if ( (unsigned __int8)sub_1E63C20(a1, a3, v113, 0, &v118) )
      return 1;
  }
  v46 = v10 & 3;
LABEL_40:
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(sub_BFBAE0(v12) + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8) != 0
    && *(_DWORD *)(a1 + 40) > 1u )
  {
    v61 = sub_BFBAE0(v12);
    v62 = (__int64 *)sub_F6AC00(*(_QWORD *)(*(_QWORD *)(v61 + 8) & 0xFFFFFFFFFFFFFFF0LL));
    if ( v62 )
    {
      v63 = *(_QWORD *)(a1 + 32);
      v64 = v63 + 8LL * *(unsigned int *)(a1 + 40);
      for ( i = v63 + 8; i != v64; v64 -= 8 )
      {
        v65 = *(_QWORD *)(v64 - 8);
        v66 = *(_BYTE *)(v65 + 8) & 7;
        if ( (unsigned __int8)(v66 - 1) > 2u )
          break;
        if ( v66 == 2 )
        {
          v67 = *(_QWORD *)(v65 + 1592);
          v68 = v67 + 72;
          if ( v67 )
            goto LABEL_68;
        }
        else
        {
          v73 = *(_QWORD *)(v65 + 1528);
          if ( v73 )
          {
            v68 = v73 + 40;
LABEL_68:
            v69 = v62[4];
            v111 = (__m128 *)v64;
            v110 = v62;
            if ( sub_B8E9C0(v68, v69) )
              break;
            v70 = sub_BFBAE0(v12);
            sub_18BE2C0(*(_QWORD **)(a1 + 248), *(_QWORD *)(v70 + 8), v65, v71, v72);
            v64 = (__int64)v111;
            v62 = v110;
          }
        }
      }
    }
  }
  v47 = v113;
  v48 = sub_EEE9A0(32, *(_QWORD **)(a1 + 248), 8u);
  *(_WORD *)v48 = *(_WORD *)v48 & 0xFE00 | 0x7B;
  if ( unk_2CD7484 )
    sub_EE9B50(123);
  *(_BYTE *)(v48 + 2) &= 0xF8u;
  v49 = (char)v109;
  v50 = 2 * (v46 & 3);
  v51 = *(_BYTE *)(v48 + 1);
  *(_QWORD *)(v48 + 8) = v47;
  *(_QWORD *)(v48 + 16) = v12;
  *(_QWORD *)(v48 + 24) = v20;
  *(_DWORD *)(v48 + 4) = v8;
  *(_BYTE *)(v48 + 1) = (8 * (v49 & 7)) | v50 | v51 & 1;
  v52 = sub_B62950(v48);
  *(_BYTE *)(v48 + 1) = (v52 << 6) | *(_BYTE *)(v48 + 1) & 0x3F;
  *(_BYTE *)(v48 + 2) = *(_BYTE *)(v48 + 2) & 0xF8 | (v52 >> 2) & 7;
  return v48;
}
