__int64 __fastcall sub_1CC8440(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __m128i *a5,
        __m128i *a6,
        __m128 a7,
        __m128 a8)
{
  int v8; // r12d
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  unsigned __int64 v13; // r12
  __int16 v14; // ax
  unsigned int v15; // eax
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  unsigned __int8 v18; // r15
  __int64 v19; // r12
  __int64 v20; // rdx
  char v21; // al
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int8 v26; // al
  int v27; // edx
  unsigned int v28; // eax
  __int64 *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned int v35; // eax
  __int64 *v36; // rsi
  __m128i *v37; // rdi
  __int64 v38; // rax
  __m128i *v39; // rdi
  unsigned int v41; // ecx
  char v42; // bp
  int v43; // r15d
  _WORD *v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // r10
  unsigned int v47; // eax
  __int64 *v48; // rsi
  __int64 v49; // rax
  __int64 v50; // r13
  unsigned int v51; // eax
  unsigned int v52; // eax
  __int64 v53; // rsi
  unsigned __int64 v54; // rax
  unsigned int v55; // eax
  __m128i v56; // xmm1
  __int64 v57; // rax
  __int64 v58; // rax
  int v59; // eax
  __int64 v60; // rax
  __int64 *v61; // rsi
  __int64 v62; // rax
  __int64 v63; // r15
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 v66; // rsi
  __m128i v67; // xmm3
  __int64 v68; // rax
  unsigned __int64 v69; // r13
  __int64 v70; // rsi
  __m128i v71; // xmm4
  unsigned int v72; // eax
  __int64 v73; // r8
  __int64 v74; // r9
  _QWORD *v75; // rdi
  unsigned int v76; // eax
  unsigned int v77; // eax
  __int64 v78; // rsi
  __int64 *v79; // rbx
  unsigned int v80; // eax
  unsigned int v81; // edx
  unsigned int v82; // eax
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // r13
  __int64 v90; // rax
  _QWORD *v91; // rax
  unsigned int v92; // eax
  __int64 v93; // rax
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rax
  _QWORD *v99; // rax
  unsigned int v100; // eax
  unsigned int v101; // eax
  unsigned int v102; // eax
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // r13
  __int64 v109; // rax
  _QWORD *v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // r15
  __int64 v116; // rax
  _QWORD *v117; // rax
  unsigned int v118; // eax
  int v119; // eax
  unsigned int v120; // eax
  unsigned __int8 v121; // [rsp+8h] [rbp-1B0h]
  unsigned __int64 v122; // [rsp+8h] [rbp-1B0h]
  unsigned __int64 v123; // [rsp+8h] [rbp-1B0h]
  __int64 v124; // [rsp+10h] [rbp-1A8h]
  unsigned int v125; // [rsp+18h] [rbp-1A0h]
  __int64 v126; // [rsp+18h] [rbp-1A0h]
  unsigned __int64 v129; // [rsp+30h] [rbp-188h]
  __int64 v130; // [rsp+38h] [rbp-180h]
  size_t v131; // [rsp+38h] [rbp-180h]
  char v132; // [rsp+40h] [rbp-178h]
  __int64 v133; // [rsp+48h] [rbp-170h]
  __int64 v134; // [rsp+50h] [rbp-168h]
  __int64 v135; // [rsp+50h] [rbp-168h]
  __int64 v136; // [rsp+50h] [rbp-168h]
  unsigned int v137; // [rsp+58h] [rbp-160h]
  __int64 v138; // [rsp+58h] [rbp-160h]
  __int64 v139; // [rsp+58h] [rbp-160h]
  __m128i v140; // [rsp+60h] [rbp-158h] BYREF
  __int64 v141; // [rsp+70h] [rbp-148h]
  __int64 v142[2]; // [rsp+88h] [rbp-130h] BYREF
  char v143; // [rsp+9Fh] [rbp-119h] BYREF
  __int64 v144; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v145; // [rsp+A8h] [rbp-110h] BYREF
  __int64 v146; // [rsp+B0h] [rbp-108h] BYREF
  char v147; // [rsp+B8h] [rbp-100h]
  __int64 v148; // [rsp+BCh] [rbp-FCh]
  char v149; // [rsp+C4h] [rbp-F4h]
  void *v150; // [rsp+C8h] [rbp-F0h]
  __int64 v151; // [rsp+D0h] [rbp-E8h]
  _BYTE v152[24]; // [rsp+D8h] [rbp-E0h] BYREF
  __m128i v153; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v154; // [rsp+100h] [rbp-B8h]
  unsigned __int8 *v155[11]; // [rsp+110h] [rbp-A8h] BYREF
  char v156; // [rsp+168h] [rbp-50h]
  unsigned int v157; // [rsp+170h] [rbp-48h]
  char v158; // [rsp+174h] [rbp-44h]

  v11 = *(_QWORD *)(a4 + 8);
  v142[0] = a3;
  v129 = v11;
  v124 = a2;
  if ( **(char **)(a1 + 232) >= 0 )
  {
    v13 = sub_BFB840(a4);
    v14 = *(_WORD *)v13 & 0x1FF;
    if ( v14 == 20 )
    {
      v15 = sub_EEB7E0(v13, a2, *(double *)a7.m128_u64);
      sub_168BB30((__int64)&v153, (__int64 *)(a1 + 8), v15, 4u, 0);
      a2 = (__int64)&v146;
      v146 = sub_EEC8C0(v13, a1 + 8, *(double *)a7.m128_u64);
      sub_1587DB0((__int64)&v153, &v146);
      sub_15F7200(&v153);
      do
      {
        v13 = *(_QWORD *)(v13 + 24);
        v14 = *(_WORD *)v13 & 0x1FF;
      }
      while ( v14 == 20 );
    }
    if ( v14 == 8 )
    {
      v16 = v13;
      do
        v16 = sub_BFB840(*(_QWORD *)(v16 + 16));
      while ( (*(_WORD *)v16 & 0x1FF) == 8 );
      v13 = v16;
      v14 = *(_WORD *)v16 & 0x1FF;
    }
    if ( v14 == 4 )
    {
      if ( *(_BYTE *)(v13 + 2) >> 3 == 4 )
      {
        v17 = *(_QWORD *)(v13 + 16);
        v125 = *(_DWORD *)(v13 + 4);
        v14 = *(_WORD *)v17 & 0x1FF;
        if ( v14 == 8 )
        {
          v45 = *(_QWORD *)(v13 + 16);
          do
            v45 = sub_BFB840(*(_QWORD *)(v45 + 16));
          while ( (*(_WORD *)v45 & 0x1FF) == 8 );
          v17 = v45;
          v18 = 1;
          v14 = *(_WORD *)v45 & 0x1FF;
        }
        else
        {
          v18 = 1;
        }
        goto LABEL_15;
      }
      v125 = 0;
      v17 = v13;
      v18 = 0;
      goto LABEL_12;
    }
    v17 = v13;
LABEL_14:
    v125 = 0;
    v18 = 0;
    goto LABEL_15;
  }
  v17 = sub_BFD550(a4);
  v14 = *(_WORD *)v17 & 0x1FF;
  if ( v14 != 4 )
    goto LABEL_14;
  v41 = 0;
  v42 = 0;
  while ( 1 )
  {
    v43 = *(_BYTE *)(v17 + 2) >> 3;
    if ( v43 != 5 )
      break;
    v42 = 1;
LABEL_48:
    v8 = *(_BYTE *)(v17 + 2) >> 3;
    v44 = (_WORD *)sub_BFD550(*(_QWORD *)(v17 + 16));
    v41 = *(_DWORD *)(v17 + 4);
    if ( (*v44 & 0x1FF) != 4 )
    {
      v125 = *(_DWORD *)(v17 + 4);
      v46 = (unsigned __int64)v44;
      goto LABEL_55;
    }
    v17 = (unsigned __int64)v44;
  }
  if ( (unsigned int)(v43 - 4) <= 1 )
    goto LABEL_48;
  v125 = v41;
  v43 = v8;
  v46 = v17;
LABEL_55:
  if ( v125 )
  {
    if ( v42 )
    {
      v122 = v46;
      v51 = sub_EEB7E0(a4, a2, *(double *)a7.m128_u64);
      sub_168B9F0((__int64)&v153, (__int64 *)(a1 + 8), v51, 0x15F1u, 0);
      a2 = (__int64)&v146;
      v146 = sub_EEC8C0(a4, a1 + 8, *(double *)a7.m128_u64);
      sub_1587DB0((__int64)&v153, &v146);
      sub_15F7200(&v153);
      v46 = v122;
    }
    if ( v43 == 4 )
    {
      v17 = v46;
      v125 = 0;
      v18 = 1;
      v14 = *(_WORD *)v46 & 0x1FF;
    }
    else
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 42 )
      {
        v123 = v46;
        v100 = sub_EEB7E0(v46, a2, *(double *)a7.m128_u64);
        sub_168B9F0((__int64)&v153, (__int64 *)(a1 + 8), v100, 0x13EEu, 0);
        a2 = (__int64)&v146;
        v146 = sub_EEC8C0(v123, a1 + 8, *(double *)a7.m128_u64);
        sub_1587DB0((__int64)&v153, &v146);
        sub_15F7200(&v153);
        v46 = v123;
      }
      v17 = v46;
      v125 = 0;
      v18 = 0;
      v14 = *(_WORD *)v46 & 0x1FF;
    }
  }
  else
  {
    v17 = v46;
    v18 = 0;
    v14 = *(_WORD *)v46 & 0x1FF;
  }
LABEL_15:
  if ( v14 == 71 )
  {
    v19 = *(_QWORD *)(v17 + 16);
    goto LABEL_17;
  }
  if ( v14 == 94 )
  {
    v19 = *(_QWORD *)(v17 + 24);
    goto LABEL_17;
  }
LABEL_12:
  v19 = 0;
LABEL_17:
  v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v142[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v21 = *(_BYTE *)(v20 + 16);
  if ( v21 != 42 && (v21 != 13 || ((*(_WORD *)(v20 + 18) >> 3) & 0x1FF) != 0x1E8) )
  {
LABEL_22:
    if ( (*(_DWORD *)v17 & 0x20000) != 0 )
    {
      v54 = a5->m128i_i64[0] & 0xFFFFFFFE00000000LL;
      a5->m128i_i64[1] = a4;
      a5->m128i_i64[0] = v54 | 8;
      sub_AB6BB0(&v140, *(_QWORD **)(a1 + 248), a5);
      v121 = 0;
      *a6 = _mm_loadu_si128(&v140);
      a6[1].m128i_i64[0] = v141;
      return v121;
    }
    if ( !v19 )
    {
      v76 = sub_EEB7E0(v17, a2, *(double *)a7.m128_u64);
      sub_168B9F0((__int64)&v153, (__int64 *)(a1 + 8), v76, 0x13EEu, 0);
      v39 = &v153;
      v146 = sub_EEC8C0(v17, a1 + 8, *(double *)a7.m128_u64);
      goto LABEL_39;
    }
    v26 = *(_BYTE *)(v19 + 28) & 0x7F;
    v27 = v26;
    LOBYTE(a2) = v26 == 32 || (unsigned int)v26 - 49 <= 2;
    v121 = a2;
    if ( (_BYTE)a2 )
    {
      v52 = sub_EEB7E0(v17, a2, *(double *)a7.m128_u64);
      v53 = a1 + 8;
      sub_168B9F0((__int64)&v153, (__int64 *)(a1 + 8), v52, 0x13E0u, 0);
      if ( v156 )
      {
        v53 = v19;
        sub_AE9DF0(v155, v19, 0xAu);
      }
      else if ( v158 )
      {
        v89 = sub_168B9E0(&v153);
        v90 = v154;
        if ( v154 )
          v90 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v154 + 32LL))(v154);
        v146 = v90;
        v91 = sub_1587BC0(v89, &v146, v85, v86, v87, v88);
        v53 = v19;
        sub_AE9DF0((unsigned __int8 **)(*v91 + 32LL * v157 + 8), v19, 0xAu);
      }
      v146 = sub_EEC8C0(v17, v53, *(double *)a7.m128_u64);
      sub_1587DB0((__int64)&v153, &v146);
      sub_15F7200(&v153);
      sub_1CC6E20(a1, v124);
      return v121;
    }
    if ( (unsigned int)v26 - 35 <= 3 )
    {
      if ( !sub_B979F0((_QWORD *)v19) )
      {
        v77 = sub_EEB7E0(v17, a2, *(double *)a7.m128_u64);
        v78 = a1 + 8;
        sub_168B9F0((__int64)&v153, (__int64 *)(a1 + 8), v77, 0x13E4u, 0);
        if ( v156 )
        {
          v78 = v19;
          sub_AE9DF0(v155, v19, 0xAu);
        }
        else if ( v158 )
        {
          v108 = sub_168B9E0(&v153);
          v109 = v154;
          if ( v154 )
            v109 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v154 + 32LL))(v154);
          v146 = v109;
          v110 = sub_1587BC0(v108, &v146, v104, v105, v106, v107);
          v78 = v19;
          sub_AE9DF0((unsigned __int8 **)(*v110 + 32LL * v157 + 8), v19, 0xAu);
        }
        v39 = &v153;
        v146 = sub_EEC8C0(v17, v78, *(double *)a7.m128_u64);
        goto LABEL_39;
      }
      v26 = *(_BYTE *)(v19 + 28) & 0x7F;
      v27 = v26;
    }
    if ( (unsigned int)(v27 - 34) > 5 )
    {
      if ( (unsigned int)(v27 - 40) > 6 )
      {
        if ( v26 != 31 )
        {
          v79 = (__int64 *)(a1 + 8);
          v101 = sub_EEB7E0(v17, a2, *(double *)a7.m128_u64);
          sub_168B9F0((__int64)&v153, (__int64 *)(a1 + 8), v101, 0x13F1u, 0);
          v146 = sub_EEC8C0(v17, a1 + 8, *(double *)a7.m128_u64);
          sub_1587DB0((__int64)&v153, &v146);
          sub_15F7200(&v153);
          v81 = *(_DWORD *)(v19 + 24);
          goto LABEL_98;
        }
        v133 = 0;
        v130 = 0;
        v132 = 1;
      }
      else
      {
        v130 = v19;
        v133 = 0;
        v132 = 1;
      }
    }
    else
    {
      v133 = v19;
      v132 = 0;
      v130 = 0;
    }
    if ( (unsigned __int8)sub_B844D0((_BYTE *)v19) == 2 )
    {
      v137 = (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) == 0 ? 5680 : 6781;
      v28 = sub_EEB7E0(v17, a2, *(double *)a7.m128_u64);
      sub_168B9F0((__int64)&v153, (__int64 *)(a1 + 8), v28, v137, 0);
      v29 = &v145;
      LOBYTE(v145) = v132;
      v30 = sub_1588420((__int64)&v153, (unsigned __int8 *)&v145);
      v31 = v30;
      if ( *(_BYTE *)(v30 + 120) )
      {
        v29 = (__int64 *)v19;
        v134 = v30;
        sub_AE9DF0((unsigned __int8 **)(v30 + 32), v19, 0xAu);
        v31 = v134;
      }
      else if ( *(_BYTE *)(v30 + 132) )
      {
        v135 = v30;
        v93 = sub_168B9E0((_QWORD *)v30);
        v96 = v135;
        v97 = v93;
        v98 = *(_QWORD *)(v135 + 16);
        if ( v98 )
        {
          v139 = v97;
          v98 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v98 + 32LL))(v98);
          v97 = v139;
          v96 = v135;
        }
        v136 = v96;
        v146 = v98;
        v99 = sub_1587BC0(v97, &v146, v97, v96, v94, v95);
        v29 = (__int64 *)v19;
        sub_AE9DF0((unsigned __int8 **)(*v99 + 32LL * *(unsigned int *)(v136 + 128) + 8), v19, 0xAu);
        v31 = v136;
      }
      v138 = v31;
      v146 = sub_EEC8C0(v17, (__int64)v29, *(double *)a7.m128_u64);
      sub_1587DB0(v138, &v146);
      sub_15F7200(&v153);
      sub_168B9F0((__int64)&v153, (__int64 *)(a1 + 8), *(_DWORD *)(v19 + 24), 0x18EDu, 0);
      a2 = (__int64)&v146;
      LOBYTE(v146) = v132;
      sub_1588420((__int64)&v153, (unsigned __int8 *)&v146);
      sub_15F7200(&v153);
    }
    else if ( !(unsigned __int8)sub_B843B0((_BYTE *)v19) )
    {
      v47 = sub_EEB7E0(v17, a2, *(double *)a7.m128_u64);
      sub_168B9F0((__int64)&v153, (__int64 *)(a1 + 8), v47, 0x13F4u, 0);
      v48 = &v145;
      LOBYTE(v145) = v132;
      v49 = sub_1588420((__int64)&v153, (unsigned __int8 *)&v145);
      v50 = v49;
      if ( *(_BYTE *)(v49 + 120) )
      {
        v48 = (__int64 *)v19;
        sub_AE9DF0((unsigned __int8 **)(v49 + 32), v19, 0xAu);
      }
      else if ( *(_BYTE *)(v49 + 132) )
      {
        v115 = sub_168B9E0((_QWORD *)v49);
        v116 = *(_QWORD *)(v50 + 16);
        if ( v116 )
          v116 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v116 + 32LL))(*(_QWORD *)(v50 + 16));
        v146 = v116;
        v117 = sub_1587BC0(v115, &v146, v111, v112, v113, v114);
        v48 = (__int64 *)v19;
        sub_AE9DF0((unsigned __int8 **)(*v117 + 32LL * *(unsigned int *)(v50 + 128) + 8), v19, 0xAu);
      }
      v146 = sub_EEC8C0(v17, (__int64)v48, *(double *)a7.m128_u64);
      sub_1587DB0(v50, &v146);
      sub_15F7200(&v153);
      sub_168B9F0((__int64)&v153, (__int64 *)(a1 + 8), *(_DWORD *)(v19 + 24), 0x18EDu, 0);
      LOBYTE(v146) = v132;
      sub_1588420((__int64)&v153, (unsigned __int8 *)&v146);
      sub_15F7200(&v153);
      return 1;
    }
    if ( !v130 )
      goto LABEL_74;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v130 + 48)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 43 <= 1 )
    {
      v35 = sub_EEB7E0(v17, a2, *(double *)a7.m128_u64);
      sub_168B9F0((__int64)&v153, (__int64 *)(a1 + 8), v35, 0x13F7u, 0);
      v36 = &v145;
      v37 = &v153;
      v145 = *(_QWORD *)(v130 + 48);
LABEL_37:
      v38 = sub_162B6D0((__int64)v37, &v145);
LABEL_38:
      v39 = (__m128i *)v38;
      v146 = sub_EEC8C0(v17, (__int64)v36, *(double *)a7.m128_u64);
LABEL_39:
      sub_1587DB0((__int64)v39, &v146);
LABEL_40:
      sub_15F7200(&v153);
      sub_1CC6E20(a1, v124);
      return 1;
    }
    if ( !(unsigned int)sub_B73370(v130) )
    {
LABEL_74:
      v59 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v142[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                           & 0xFFFFFFFFFFFFFFF0LL)
                               + 16LL);
      if ( v18 )
      {
        if ( (unsigned int)(v59 - 43) <= 1 )
        {
          v60 = sub_C1BEF0((__int64)v142, a2, v32, v33);
          v61 = (__int64 *)(a1 + 8);
          if ( !sub_1CAFE20(*(_QWORD *)(v19 + 48), v60) )
          {
            sub_168B9F0((__int64)&v153, v61, v125, 0x13DEu, 0);
            sub_1605D30((__int64)&v153, v142);
            sub_15F7200(&v153);
            sub_1CC6E20(a1, v124);
            return v18;
          }
          sub_168B9F0((__int64)&v153, v61, v125, 0x13DEu, 0);
          v62 = sub_1605D30((__int64)&v153, v142);
          v148 = 0;
          v149 = 0;
          v150 = v152;
          v151 = 0;
          v152[0] = 0;
          v152[16] = 0;
          LODWORD(v146) = v125;
          HIDWORD(v146) = v125;
          v147 = 1;
          sub_1589170(v62, &v146);
          if ( v150 != v152 )
            operator delete(v150);
          sub_15F7200(&v153);
          a2 = v124;
          sub_1CC6E20(a1, v124);
          v129 = *(_QWORD *)(v19 + 48);
        }
      }
      else if ( (_BYTE)v59 == 42 )
      {
        v75 = *(_QWORD **)(a1 + 248);
        if ( v133 )
        {
          a2 = *(_QWORD *)(v133 + 48);
          v129 = sub_A70010((__int64)v75, a2);
        }
        else
        {
          a2 = *(_QWORD *)(v19 + 48);
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
                               - 2) > 4u )
          {
            v129 = sub_A70010((__int64)v75, a2);
            if ( !sub_1CAFE20(v129, v142[0]) )
            {
              v120 = sub_EEB7E0(v17, v142[0], *(double *)a7.m128_u64);
              sub_168B9F0((__int64)&v153, (__int64 *)(a1 + 8), v120, 0x13ECu, 0);
              sub_1605D30((__int64)&v153, v142);
              goto LABEL_40;
            }
            v118 = sub_EEB7E0(v17, v142[0], *(double *)a7.m128_u64);
            sub_168B9F0((__int64)&v153, (__int64 *)(a1 + 8), v118, 0x13ECu, 0);
            v126 = sub_1605D30((__int64)&v153, v142);
            v131 = j__strlen("&");
            v119 = sub_EEB7E0(v17, (__int64)v142, *(double *)a7.m128_u64);
            sub_9EC740((__int64)&v146, v119, "&", v131, 0);
            sub_1589170(v126, &v146);
            if ( v150 != v152 )
              operator delete(v150);
            sub_15F7200(&v153);
            a2 = v124;
            sub_1CC6E20(a1, v124);
          }
          else
          {
            v129 = sub_A72210(v75, a2);
          }
        }
      }
      v144 = v142[0];
      v63 = *(_QWORD *)(v142[0] & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v63 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
      {
        if ( *(_BYTE *)(v63 + 16) != 42 )
          v63 = sub_F63050(*(_QWORD *)(v142[0] & 0xFFFFFFFFFFFFFFF0LL), a2, v32, v33);
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v63 + 32)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 25 > 1 )
        {
          a2 = v129;
          if ( sub_1BD41F0(a1, v129, v144, 0, &v143) )
            goto LABEL_85;
        }
        v63 = *(_QWORD *)(v144 & 0xFFFFFFFFFFFFFFF0LL);
      }
      if ( ((unsigned int)*(unsigned __int8 *)(v63 + 16) - 43 <= 1
         || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v63 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1
         && (v63 = sub_F63050(v63, a2, v32, v33)) != 0)
        && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_9B4870(v63, a2, v32, v33, v34)
                                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                                              + 8LL)
                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                      + 16LL)
                           - 25) > 1u
        && (v65 = sub_9B4870(v63, a2, v32, v33, v64),
            LODWORD(v65) = (*(_DWORD *)&byte_8[v65 & 0xFFFFFFFFFFFFFFF0LL] | v65) & 7,
            v33 = *(_DWORD *)&byte_8[v129 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned int)v129,
            v32 = (unsigned int)v65 | ((unsigned __int8)byte_8[v129 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v129) & 7,
            (_DWORD)v65 != (_DWORD)v32) )
      {
        v82 = sub_EEB7E0(v17, a2, *(double *)a7.m128_u64);
        sub_168B9F0((__int64)&v153, (__int64 *)(a1 + 8), v82, 0x13F6u, 0);
        v83 = sub_1605D30((__int64)&v153, &v144);
        v84 = *(_QWORD *)(v17 + 8);
      }
      else
      {
        v66 = sub_C1BEF0((__int64)&v144, a2, v32, v33);
        if ( sub_1CAFE20(v129, v66) )
        {
LABEL_85:
          sub_F1D290(v153.m128i_i32, v19, v142[0], 0);
          v67 = _mm_load_si128(&v153);
          a5[1].m128i_i64[0] = v154;
          v68 = v142[0];
          *a5 = v67;
          v69 = *(_QWORD *)&byte_8[v68 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[v68 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v68) & 7;
          v70 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 32LL))(v19);
          sub_F1D290(v153.m128i_i32, v70, v69, 0);
          v71 = _mm_load_si128(&v153);
          a6[1].m128i_i64[0] = v154;
          *a6 = v71;
          v72 = sub_EEB7E0(v17, v70, *(double *)a7.m128_u64);
          sub_19116A0((__m128 *)a1, v72, v19, 0, v73, v74, a7, a8);
          return v121;
        }
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v144 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 > 1 )
        {
          v102 = sub_EEB7E0(v17, v66, *(double *)a7.m128_u64);
          sub_168B9F0((__int64)&v153, (__int64 *)(a1 + 8), v102, 0x13EDu, 0);
          v145 = *(_QWORD *)(a4 + 8);
          v103 = sub_162B6D0((__int64)&v153, &v145);
          v36 = &v144;
          v38 = sub_1605D30(v103, &v144);
          goto LABEL_38;
        }
        v92 = sub_EEB7E0(v17, v66, *(double *)a7.m128_u64);
        sub_168B9F0((__int64)&v153, (__int64 *)(a1 + 8), v92, 0x13E9u, 0);
        v83 = sub_1605D30((__int64)&v153, &v144);
        v84 = *(_QWORD *)(a4 + 8);
      }
      v145 = v84;
      v36 = &v145;
      v37 = (__m128i *)v83;
      goto LABEL_37;
    }
    v79 = (__int64 *)(a1 + 8);
    v80 = sub_EEB7E0(v17, a2, *(double *)a7.m128_u64);
    sub_168B9F0((__int64)&v153, (__int64 *)(a1 + 8), v80, 0x13F9u, 0);
    v146 = sub_EEC8C0(v17, a1 + 8, *(double *)a7.m128_u64);
    sub_1587DB0((__int64)&v153, &v146);
    sub_15F7200(&v153);
    v81 = *(_DWORD *)(v130 + 24);
LABEL_98:
    sub_168B9F0((__int64)&v153, v79, v81, 0x18EEu, 0);
    sub_15F7200(&v153);
    return 1;
  }
  a2 = v124;
  v22 = sub_1CC7360((__int64 *)a1, v124, v142[0], a4, v19, v12, (__m128i)a7, a8);
  if ( v22 == 1 )
  {
    v55 = sub_C00A40(v17, v124, v23, v24, v25);
    sub_168B9F0((__int64)&v153, (__int64 *)(a1 + 8), v55, 0x1A7Cu, 0);
    sub_15F7200(&v153);
    sub_F1D250((__int64)&v153, v142[0], 1, 0);
    v56 = _mm_load_si128(&v153);
    a5[1].m128i_i64[0] = v154;
    v57 = v142[0];
    *a5 = v56;
    sub_F1D250(
      (__int64)&v153,
      *(_QWORD *)&byte_8[v57 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
    | ((unsigned __int8)*(_QWORD *)&byte_8[v57 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v57) & 7,
      1,
      0);
    v121 = 0;
    v58 = v154;
    *a6 = _mm_load_si128(&v153);
    a6[1].m128i_i64[0] = v58;
  }
  else
  {
    v121 = 1;
    if ( v22 != 2 )
      goto LABEL_22;
  }
  return v121;
}
