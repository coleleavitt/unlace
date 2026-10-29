__int64 __fastcall sub_989930(void *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  double v6; // xmm0_8
  unsigned int v7; // eax
  __int64 *v8; // rax
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 *v12; // rbx
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v15; // rax
  __m128i *v16; // rcx
  __int64 v17; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rbx
  __int64 v37; // r15
  int v38; // eax
  unsigned int v39; // r14d
  __int64 v40; // rcx
  __int64 v41; // r8
  double v42; // xmm0_8
  unsigned int v43; // eax
  __int64 v44; // r12
  __int64 v45; // rbx
  _QWORD *v46; // r13
  __int64 v47; // rax
  unsigned __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // rbx
  __int64 *v52; // r13
  __int64 v53; // rdx
  __int64 *v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rcx
  char v60; // al
  unsigned __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // r8
  __int64 v65; // rax
  unsigned __int64 v66; // rdx
  __int64 v67; // rax
  __m128i *v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rdi
  __int64 v73; // rcx
  __int64 v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // rax
  unsigned __int64 v77; // rsi
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rdi
  __m128i si128; // xmm0
  __m128i v83; // xmm0
  int v84; // r14d
  int v85; // ebp
  __int64 v86; // rax
  int v87; // eax
  __int64 v88; // rcx
  __int64 v89; // r8
  int v90; // ebp
  void *v91; // rsi
  __int64 v92; // r12
  __int64 v93; // rax
  __int64 v94; // rbp
  __int64 v95; // r13
  int v96; // r12d
  int v97; // eax
  int v98; // eax
  int v99; // eax
  __int64 v100; // r14
  int v101; // r13d
  __int64 v102; // rax
  int v103; // edi
  __int64 v104; // rax
  unsigned __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // rdi
  __int64 v110; // r12
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r13
  __int64 v114; // rax
  __int64 v115; // rdi
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // rdx
  unsigned __int64 v119; // r12
  __int64 v120; // rdx
  __int64 v121; // rdx
  unsigned __int64 v122; // r12
  __int64 v123; // rdx
  int v124; // eax
  __int64 v126; // [rsp+20h] [rbp-F8h] BYREF
  __int64 *v127; // [rsp+28h] [rbp-F0h]
  void **p_ptr; // [rsp+30h] [rbp-E8h]
  _QWORD *v129; // [rsp+38h] [rbp-E0h]
  __int64 v130; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v131; // [rsp+48h] [rbp-D0h]
  char v132; // [rsp+57h] [rbp-C1h]
  void **v133; // [rsp+58h] [rbp-C0h]
  __int64 v134; // [rsp+60h] [rbp-B8h]
  __int64 v135; // [rsp+68h] [rbp-B0h]
  void *v136; // [rsp+78h] [rbp-A0h] BYREF
  void *v137[2]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v138; // [rsp+90h] [rbp-88h] BYREF
  void *ptr; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v140; // [rsp+A8h] [rbp-70h]
  _BYTE v141[104]; // [rsp+B0h] [rbp-68h] BYREF

  v6 = sub_B76070(a2);
  if ( v7 <= 1 )
    return 0;
  v136 = a1;
  v8 = *(__int64 **)(a2 + 120);
  v9 = v8[1];
  v10 = *v8;
  v11 = *(_QWORD *)(v9 + 48);
  v126 = *v8;
  v12 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *v12;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
  {
    v15 = sub_221A480(v6);
    v16 = *(__m128i **)(v15 + 32);
    if ( *(_QWORD *)(v15 + 24) - (_QWORD)v16 > 0x31u )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C20);
      v16[3].m128i_i16[0] = 2606;
      *v16 = si128;
      v16[1] = _mm_load_si128((const __m128i *)&xmmword_23A8C30);
      v16[2] = _mm_load_si128((const __m128i *)&xmmword_23A8C40);
      *(_QWORD *)(v15 + 32) += 50LL;
    }
    else
    {
      sub_227BF10(v15, "libcxx03 std::call_once implementation, skipping.\n", 50);
    }
    return 0;
  }
  v127 = *(__int64 **)(v10 + 48);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((unsigned __int64)v127
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 43 > 1 )
  {
    v67 = sub_221A480(v6);
    v68 = *(__m128i **)(v67 + 32);
    if ( *(_QWORD *)(v67 + 24) - (_QWORD)v68 > 0x30u )
    {
      v83 = _mm_load_si128((const __m128i *)&xmmword_23A8C50);
      v68[3].m128i_i8[0] = 10;
      *v68 = v83;
      v68[1] = _mm_load_si128((const __m128i *)&xmmword_23A8C60);
      v68[2] = _mm_load_si128((const __m128i *)&xmmword_23A8C70);
      *(_QWORD *)(v67 + 32) += 49LL;
    }
    else
    {
      sub_227BF10(v67, "unknown std::call_once implementation, skipping.\n", 49);
    }
    return 0;
  }
  if ( (unsigned int)*(unsigned __int8 *)(v13 + 16) - 43 <= 1 || (v13 = sub_F63050(v13, v10, v3, v4, v5)) != 0 )
  {
    while ( 1 )
    {
      v12 = (__int64 *)(*(_QWORD *)(v13 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      v14 = (*(_BYTE *)(v13 + 18) & 0x10) == 0;
      v13 = *v12;
      if ( v14 )
        break;
      if ( (unsigned int)*(unsigned __int8 *)(v13 + 16) - 43 > 1 )
        v13 = sub_F63050(v13, v10, v3, v4, v5);
    }
  }
  else
  {
    v13 = *v12;
  }
  v17 = sub_F63270(v13);
  v127 = *(__int64 **)(v126 + 48);
  v22 = *(_QWORD *)((unsigned __int64)v127 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v22 + 16) - 43 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
      goto LABEL_21;
    v22 = sub_F63050(v22, v10, v19, v20, v21);
    if ( !v22 )
    {
      v22 = *(_QWORD *)((unsigned __int64)v127 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_21;
    }
  }
  while ( 1 )
  {
    v14 = (*(_BYTE *)(v22 + 18) & 0x10) == 0;
    v22 = *(_QWORD *)(*(_QWORD *)(v22 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( v14 )
      break;
    if ( (unsigned int)*(unsigned __int8 *)(v22 + 16) - 43 > 1 )
      v22 = sub_F63050(v22, v10, v19, v20, v21);
  }
LABEL_21:
  v23 = sub_F63240(v22, v10, v19, v20, v21);
  if ( !v23 )
    return 0;
  v24 = v23;
  v127 = (__int64 *)&v136;
  v129 = sub_9894D0((__int64 *)&v136, v23, "__state_", 8u);
  if ( !v129 )
  {
    v24 = v23;
    v129 = sub_9894D0(v127, v23, "_M_once", 7u);
    if ( !v129 )
      return 0;
  }
  if ( v17 )
  {
    v28 = *(_QWORD *)(v17 + 128);
    if ( !v28 || (*(_BYTE *)(v28 + 10) & 0x20) == 0 )
      return 0;
    p_ptr = &ptr;
    ptr = v141;
    v140 = 0x500000000LL;
    v29 = sub_9872C0(v127, v9, 1u, v26, v27);
    v30 = (unsigned int)v140;
    v24 = HIDWORD(v140);
    v31 = (unsigned int)v140 + 1LL;
    if ( v31 > HIDWORD(v140) )
    {
      v24 = (__int64)v141;
      v130 = v29;
      sub_2237220(p_ptr, v141, v31, 8);
      v30 = (unsigned int)v140;
      v29 = v130;
    }
    *((_QWORD *)ptr + v30) = v29;
    LODWORD(v140) = v140 + 1;
    v132 = 1;
    v32 = *(_QWORD *)(*(_QWORD *)(sub_B96F60(v17) + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v36 = v32;
    if ( *(_BYTE *)(v32 + 16) == 26 )
    {
LABEL_29:
      v37 = v36;
      sub_B76070(a2);
      if ( v38 == *(unsigned __int16 *)(v36 + 22) + 2 )
      {
        v134 = v9;
        v39 = 2;
        v135 = v17;
        v133 = p_ptr + 2;
        while ( 1 )
        {
          v42 = sub_B76070(a2);
          if ( v43 <= v39 )
            break;
          v44 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8LL * v39);
          v45 = *(_QWORD *)(v44 + 48);
          v46 = (_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0LL);
          v47 = *(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v47 + 16) - 43 <= 1
            || (v75 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v47 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                    - 43,
                (unsigned int)v75 <= 1)
            && (v47 = sub_F63050(*v46, v24, v75, v40, v41)) != 0 )
          {
            while ( 1 )
            {
              v45 = *(_QWORD *)(v47 + 32);
              if ( (*(_BYTE *)(v47 + 18) & 0x10) == 0 )
                break;
              while ( 1 )
              {
                v48 = v45 & 0xFFFFFFFFFFFFFFF0LL;
                v47 = *(_QWORD *)v48;
                v49 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v48 + 16LL) - 43;
                if ( (unsigned int)v49 <= 1 )
                  break;
                v50 = sub_F63050(v47, v24, v49, v40, v41);
                v45 = *(_QWORD *)(v50 + 32);
                if ( (*(_BYTE *)(v50 + 18) & 0x10) == 0 )
                  goto LABEL_36;
              }
            }
LABEL_36:
            v46 = (_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0LL);
          }
          v51 = v46[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v46[1] | (unsigned __int8)v45) & 7;
          v52 = (__int64 *)(v37 + 8LL * (v39 - 2) + 48);
          v53 = *v52;
          v54 = (__int64 *)(*v52 & 0xFFFFFFFFFFFFFFF0LL);
          v55 = *v54;
          v56 = (unsigned int)*(unsigned __int8 *)(*v54 + 16) - 43;
          if ( (unsigned int)v56 <= 1
            || (v73 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v55 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                    - 43,
                (unsigned int)v73 <= 1)
            && (v74 = *v54,
                v131 = *v52 & 0xFFFFFFFFFFFFFFF0LL,
                v130 = v53,
                v55 = sub_F63050(v74, v54, v53, v73, v41),
                LOBYTE(v53) = v130,
                v54 = (__int64 *)v131,
                v55) )
          {
            while ( 1 )
            {
              v53 = *(_QWORD *)(v55 + 32);
              if ( (*(_BYTE *)(v55 + 18) & 0x10) == 0 )
                break;
              while ( 1 )
              {
                v55 = *(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFF0LL);
                v57 = (unsigned int)*(unsigned __int8 *)(v55 + 16) - 43;
                if ( (unsigned int)v57 <= 1 )
                  break;
                v58 = sub_F63050(v55, v54, v57, v56, v41);
                v53 = *(_QWORD *)(v58 + 32);
                if ( (*(_BYTE *)(v58 + 18) & 0x10) == 0 )
                  goto LABEL_41;
              }
            }
LABEL_41:
            v54 = (__int64 *)(v53 & 0xFFFFFFFFFFFFFFF0LL);
          }
          v59 = v54[1];
          v60 = v59 | v53;
          v61 = v59 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v61 | v60 & 7) != v51 )
            goto LABEL_67;
          v24 = v44;
          v63 = sub_9872C0(v127, v44, 0, v61, v41);
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v52 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
             - 43 > 1 )
          {
            v24 = *(_QWORD *)(v44 + 48);
            v76 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(v76 + 16) - 43 <= 1
              || (v80 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v76 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                         + 16LL)
                      - 43,
                  (unsigned int)v80 <= 1)
              && (v81 = *(_QWORD *)(*(_QWORD *)(v44 + 48) & 0xFFFFFFFFFFFFFFF0LL),
                  v130 = *(_QWORD *)(v44 + 48),
                  v76 = sub_F63050(v81, v24, v80, v62, v64),
                  v24 = v130,
                  v76) )
            {
              while ( 1 )
              {
                v24 = *(_QWORD *)(v76 + 32);
                if ( (*(_BYTE *)(v76 + 18) & 0x10) == 0 )
                  break;
                while ( 1 )
                {
                  v77 = v24 & 0xFFFFFFFFFFFFFFF0LL;
                  v76 = *(_QWORD *)v77;
                  v78 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v77 + 16LL) - 43;
                  if ( (unsigned int)v78 <= 1 )
                    break;
                  v79 = sub_F63050(v76, v77, v78, v62, v64);
                  v24 = *(_QWORD *)(v79 + 32);
                  if ( (*(_BYTE *)(v79 + 18) & 0x10) == 0 )
                    goto LABEL_63;
                }
              }
            }
LABEL_63:
            v63 = sub_C0A3E0((_DWORD)v136, v24, 4, v63, 0, 0, 0);
          }
          v65 = (unsigned int)v140;
          v66 = (unsigned int)v140 + 1LL;
          if ( v66 > HIDWORD(v140) )
          {
            v24 = (__int64)v133;
            sub_2237220(p_ptr, v133, v66, 8);
            v65 = (unsigned int)v140;
          }
          ++v39;
          *((_QWORD *)ptr + v65) = v63;
          LODWORD(v140) = v140 + 1;
        }
        v84 = (int)ptr;
        v85 = v140;
        if ( v132 )
        {
          v86 = sub_B96F60(v135);
          v87 = sub_C09130((_DWORD)a1, 0, 0, 0, v86, 0, 0, *(_QWORD *)(v86 + 48), 1, 0, 0, 0);
          v130 = sub_C98520((_DWORD)a1, 42, v87, v84, v85, *((_QWORD *)a1 + 2329), 0, 0, 0, 0);
        }
        else
        {
          v137[0] = v136;
          v110 = *(_QWORD *)(v134 + 48);
          v113 = sub_9872C0(v137, v134, 0, v40, v41);
          v114 = *(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v114 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 44 )
          {
            v121 = (unsigned int)*(unsigned __int8 *)(v114 + 16) - 43;
            if ( (unsigned int)v121 <= 1
              || (v114 = sub_F63050(*(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF0LL), v134, v121, v111, v112)) != 0 )
            {
              while ( 1 )
              {
                v110 = *(_QWORD *)(v114 + 32);
                if ( (*(_BYTE *)(v114 + 18) & 0x10) == 0 )
                  break;
                v122 = v110 & 0xFFFFFFFFFFFFFFF0LL;
                v114 = *(_QWORD *)v122;
                v123 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v122 + 16LL) - 43;
                if ( (unsigned int)v123 > 1 )
                  v114 = sub_F63050(v114, v134, v123, v111, v112);
              }
            }
            LODWORD(v113) = sub_C0A3E0(v137[0], v110, 4, v113, 0, 0, 0);
          }
          else
          {
            while ( 1 )
            {
              v115 = *(_QWORD *)(*(_QWORD *)(v113 + 8) & 0xFFFFFFFFFFFFFFF0LL);
              v116 = *(_QWORD *)(*(_QWORD *)(v115 + 8) & 0xFFFFFFFFFFFFFFF0LL);
              v117 = (unsigned int)*(unsigned __int8 *)(v116 + 16) - 25;
              if ( (unsigned int)v117 <= 1 )
                break;
              if ( *(_BYTE *)(v116 + 16) == 42 )
              {
                sub_F68450(v115, v134, v116, v117, v112);
                goto LABEL_99;
              }
            }
            v118 = (unsigned int)*(unsigned __int8 *)(v114 + 16) - 43;
            if ( (unsigned int)v118 <= 1
              || (v114 = sub_F63050(*(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF0LL), v134, v118, v117, v112)) != 0 )
            {
              while ( 1 )
              {
                v110 = *(_QWORD *)(v114 + 32);
                if ( (*(_BYTE *)(v114 + 18) & 0x10) == 0 )
                  break;
                v119 = v110 & 0xFFFFFFFFFFFFFFF0LL;
                v114 = *(_QWORD *)v119;
                v120 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v119 + 16LL) - 43;
                if ( (unsigned int)v120 > 1 )
                  v114 = sub_F63050(v114, v134, v120, v117, v112);
              }
            }
            v124 = sub_A70010(a1, v110);
            LODWORD(v113) = sub_C0A3E0(v137[0], v124, 12, v113, 0, 0, 0);
          }
LABEL_99:
          v130 = sub_C0BFD0((_DWORD)a1, v113, v84, v85, *((_QWORD *)a1 + 2329), 0, 0, 0, 0, 0);
        }
        v90 = sub_9872C0(v127, v126, 1u, v88, v89);
        v91 = (void *)v129[5];
        v92 = v129[6];
        LODWORD(v137[1]) = 0;
        v137[0] = v91;
        sub_B85890(&v138, v42);
        v93 = sub_C0C460(
                (_DWORD)v136,
                v90,
                0,
                0,
                0,
                0,
                0,
                (__int64)v129,
                (__int64)v129,
                (char)v137[0],
                v137[1],
                v138,
                0,
                v92,
                1,
                0,
                0);
        v94 = *(_QWORD *)(v93 + 8);
        v95 = *((_QWORD *)a1 + 2340);
        v96 = v93;
        v97 = sub_C0A3E0((_DWORD)v136, v94, 4, v93, 0, 0, 0);
        v98 = sub_C0A3E0((_DWORD)v136, v94, 28, v97, 0, 0, 0);
        v99 = sub_C09D40((_DWORD)a1, v98, 9, v95, 0, 0, 0, 0, 0);
        v100 = *((_QWORD *)a1 + 2340);
        v101 = v99;
        LODWORD(v137[1]) = sub_A97D20(v136, *(_QWORD *)(v100 & 0xFFFFFFFFFFFFFFF0LL));
        if ( LODWORD(v137[1]) > 0x40 )
          sub_2205470(v137, 1, 0);
        else
          v137[0] = &dword_0 + 1;
        v102 = sub_C0C5D0(v136, v137, v100, 0, v42);
        if ( LODWORD(v137[1]) > 0x40 && v137[0] )
        {
          v126 = v102;
          operator delete[](v137[0]);
          v102 = v126;
        }
        v103 = (int)v136;
        if ( *(_QWORD *)(v102 + 8) != v94 )
        {
          LODWORD(v102) = sub_C0A3E0((_DWORD)v136, v94, 27, v102, 0, 0, 0);
          v103 = (int)v136;
        }
        v126 = sub_C09F10(v103, v96, v102, 21, v94, 0, 0, 0, 0);
        *(__m128 *)v137 = _mm_loadh_ps((const double *)&v126);
        v104 = sub_EEF560(v136, v137, 2, 0, 0, 0);
        v17 = sub_EEFAF0((_DWORD)a1, 0, 0, 0, 0, v101, 0, 0, v104, 0, 0);
        goto LABEL_68;
      }
      goto LABEL_67;
    }
    v130 = *(_QWORD *)(v32 + 8);
    if ( *(_BYTE *)(*(_QWORD *)(v130 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
    {
LABEL_67:
      v17 = 0;
      goto LABEL_68;
    }
    v36 = sub_F63050(v32, v24, v33, v34, v35);
LABEL_66:
    if ( v36 )
      goto LABEL_29;
    goto LABEL_67;
  }
  p_ptr = &ptr;
  ptr = v141;
  v140 = 0x500000000LL;
  if ( (sub_F68450(*v12, v24, v25, v26, v27) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v72 = *v12;
    v132 = 0;
    v36 = v72;
    if ( *(_BYTE *)(v72 + 16) == 26 )
      goto LABEL_29;
    v130 = *(_QWORD *)(v72 + 8);
    if ( *(_BYTE *)(*(_QWORD *)(v130 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
      goto LABEL_67;
    v36 = sub_F63050(v72, v24, v69, v70, v71);
    goto LABEL_66;
  }
  v105 = sub_F68450(*v12, v24, v69, v70, v71) & 0xFFFFFFFFFFFFFFF0LL;
  v109 = *(_QWORD *)v105;
  v36 = *(_QWORD *)v105;
  if ( *(_BYTE *)(*(_QWORD *)v105 + 16LL) == 26 )
  {
LABEL_88:
    v132 = 0;
    goto LABEL_66;
  }
  v130 = *(_QWORD *)(v109 + 8);
  if ( *(_BYTE *)(*(_QWORD *)(v130 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
  {
    v36 = sub_F63050(v109, v24, v106, v107, v108);
    goto LABEL_88;
  }
LABEL_68:
  if ( ptr != p_ptr + 2 )
    free(ptr);
  return v17;
}
