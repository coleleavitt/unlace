char __fastcall sub_19DDEC0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned int *a9,
        __int64 a10,
        __int64 a11,
        unsigned __int8 a12,
        char a13,
        unsigned int a14,
        unsigned __int64 a15,
        unsigned __int64 *a16,
        int *a17)
{
  __int64 *v17; // r15
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rsi
  _QWORD *v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  unsigned int v32; // ebp
  _QWORD *v33; // r13
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // r15
  __int64 v37; // rsi
  char result; // al
  unsigned __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r15
  __int64 v44; // rsi
  unsigned __int64 v45; // rsi
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  char **v48; // r12
  char *v49; // r14
  __int64 v50; // rdx
  __int64 v51; // rbx
  __int64 *v52; // rax
  __int64 *v53; // rax
  bool v54; // zf
  __int64 v55; // rdx
  char **i; // r14
  char *v57; // rdx
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  _WORD *v64; // rax
  unsigned __int64 *v65; // rax
  unsigned __int64 v66; // rsi
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rax
  unsigned int v69; // r14d
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  unsigned __int64 *v74; // rax
  __int64 *v75; // rdx
  unsigned __int64 v76; // rcx
  __int64 *v77; // rax
  __int64 v78; // rcx
  unsigned int v79; // eax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rbp
  __int64 (__fastcall *v83)(__int64); // rax
  __int64 v84; // rax
  __int64 v85; // rbp
  unsigned int v86; // r12d
  __int64 *v87; // rdi
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rbp
  unsigned __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rbx
  __int64 v94; // rax
  __int64 v95; // rax
  unsigned int v96; // edx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // rdi
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // rax
  __int64 v106; // rbp
  unsigned __int64 v107; // rax
  char v108; // r12
  char **v109; // rbp
  unsigned __int64 v110; // rbx
  unsigned __int64 v111; // rax
  int v112; // edx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // r13
  __int64 v118; // rax
  _QWORD *v119; // rax
  __int64 v120; // rax
  unsigned int v121; // ecx
  __int64 v122; // rax
  __int64 v123; // rax
  unsigned int v124; // r14d
  unsigned int v125; // r13d
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // [rsp+8h] [rbp-1B0h]
  __int64 v129; // [rsp+8h] [rbp-1B0h]
  char v131; // [rsp+2Bh] [rbp-18Dh]
  _QWORD *v134; // [rsp+38h] [rbp-180h]
  unsigned __int64 v135; // [rsp+38h] [rbp-180h]
  char v136; // [rsp+53h] [rbp-165h]
  unsigned __int8 v137[4]; // [rsp+54h] [rbp-164h] BYREF
  __int64 v138; // [rsp+58h] [rbp-160h] BYREF
  unsigned int v139; // [rsp+64h] [rbp-154h] BYREF
  int v140; // [rsp+68h] [rbp-150h] BYREF
  unsigned int v141; // [rsp+6Ch] [rbp-14Ch] BYREF
  char *v142; // [rsp+70h] [rbp-148h] BYREF
  char v143; // [rsp+78h] [rbp-140h]
  unsigned __int64 v144; // [rsp+80h] [rbp-138h] BYREF
  char v145; // [rsp+88h] [rbp-130h]
  void *v146; // [rsp+90h] [rbp-128h] BYREF
  signed __int64 v147; // [rsp+98h] [rbp-120h]
  _BYTE v148[16]; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v149[2]; // [rsp+B0h] [rbp-108h] BYREF
  char v150; // [rsp+C0h] [rbp-F8h]
  void *v151; // [rsp+C8h] [rbp-F0h]
  _BYTE v152[24]; // [rsp+D8h] [rbp-E0h] BYREF
  __int64 (__fastcall **v153)(); // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v154; // [rsp+F8h] [rbp-C0h]
  char **v155; // [rsp+100h] [rbp-B8h]
  int v156; // [rsp+108h] [rbp-B0h]
  unsigned __int64 v157; // [rsp+110h] [rbp-A8h]

  v17 = a1;
  v137[0] = a12;
  v138 = a6;
  v134 = (_QWORD *)sub_168B6C0((__int64)a1);
  if ( !a10 || !*a9 )
  {
    if ( a11 )
      goto LABEL_4;
LABEL_43:
    if ( (_DWORD)a5 )
    {
      for ( i = (char **)a4; (char **)(a4 + 8LL * (unsigned int)(a5 - 1) + 8) != i; ++i )
      {
        if ( (*(_DWORD *)*i & 0x10000) == 0 )
        {
          if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 105) & 0x40) != 0 )
          {
            v57 = *i;
            v153 = nullptr;
            a2 = a14;
            v58 = sub_1924920(*a1, a14, v57, (__int64 *)&v153, a7, a8);
            if ( v58 == 1 )
              return 1;
          }
          else
          {
            a2 = (__int64)*i;
            v58 = sub_19245F0(*a1, *i, v59, v60, v61, v62, a7, a8);
            if ( v58 == 1 )
              return 1;
          }
          *i = (char *)(v58 & 0xFFFFFFFFFFFFFFFELL);
        }
      }
    }
    v69 = 3031;
    if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) != 0 )
    {
      if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 105) & 0x40) != 0 )
      {
LABEL_74:
        if ( (*(_BYTE *)(sub_168B6E0((__int64)v17) + 105) & 0x40) != 0 )
          *a16 = v134[2388];
        else
          *a16 = sub_A8A430(v134, a2, v70, v71, v72, v73);
        *a17 = 0;
        return 0;
      }
    }
    else
    {
      v69 = v137[0] == 0 ? 7053 : 6668;
      if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 105) & 0x40) != 0 )
        goto LABEL_74;
    }
    v92 = sub_18979A0(a1, v138, a3);
    v93 = v92;
    if ( v92 && *(char *)(v92 + 28) >= 0 )
    {
      v120 = sub_168B6E0((__int64)a1);
      v121 = 4169;
      if ( (*(_BYTE *)(v120 + 107) & 4) == 0 )
        v121 = v137[0] == 0 ? 7054 : 6669;
      v142 = *(char **)(v93 + 40);
      if ( ((unsigned __int8)v142 & 3) == 1 )
      {
        v124 = *a9;
        v125 = a9[a10 - 1];
        sub_168B9F0((__int64)&v153, a1, a14, v121, 0);
        v126 = sub_19D3F70((__int64)&v153, &v138);
        v127 = sub_15890D0(v126, v137);
        v129 = sub_19D3F70(v127, (__int64 *)&v142);
        sub_FDEB80((__int64)&v146, (__int64 *)&v142);
        v144 = __PAIR64__(v125, v124);
        v145 = 1;
        sub_19CF590((__int64)v149, __SPAIR64__(v125, v124), 1, v146, v147);
        a2 = (__int64)v149;
        sub_1589170(v129, v149);
        if ( v151 != v152 )
          operator delete(v151);
        if ( v146 != v148 )
          operator delete(v146);
      }
      else
      {
        sub_168B9F0((__int64)&v153, a1, a14, v121, 0);
        v122 = sub_19D3F70((__int64)&v153, &v138);
        v123 = sub_15890D0(v122, v137);
        a2 = (__int64)&v142;
        sub_19D3F70(v123, (__int64 *)&v142);
      }
      sub_15F7200(&v153);
    }
    else
    {
      sub_168B9F0((__int64)&v153, a1, a14, v69, 0);
      v94 = sub_19D3F70((__int64)&v153, &v138);
      v95 = sub_15890D0(v94, v137);
      v96 = a9[a10 - 1];
      a2 = (__int64)v149;
      LODWORD(v149[0]) = *a9;
      HIDWORD(v149[0]) = v96;
      sub_1587DB0(v95, v149);
      sub_15F7200(&v153);
    }
    v100 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v100 + 16) == 34 || (v100 = sub_19CD690(v100, a2, v97, v98)) != 0 )
    {
      v101 = sub_A5E7C0(v100, a2, v97, v98, v99);
      v105 = sub_9C7D40(v101, a2, v102, v103, v104);
      v106 = v105;
      if ( v105 )
      {
        a2 = (__int64)v17;
        sub_168B9F0((__int64)&v153, v17, *(_DWORD *)(v105 + 24), 0x18BEu, 0);
        sub_15F7200(&v153);
        if ( (_DWORD)a15 )
        {
          if ( HIDWORD(a15) )
          {
            a2 = v138;
            if ( sub_BAD910(v106, v138, 0, 0, 1, 0) )
            {
              sub_168B9F0((__int64)&v153, v17, a15, 0x18BFu, 0);
              sub_B86A00((__int64)&v146, (__int64 *)(v106 + 40));
              v143 = 1;
              v142 = (char *)a15;
              sub_19CF590((__int64)v149, a15, 1, v146, v147);
              a2 = (__int64)v149;
              sub_1589170((__int64)&v153, v149);
              if ( v151 != v152 )
                operator delete(v151);
              if ( v146 != v148 )
                operator delete(v146);
              sub_15F7200(&v153);
            }
          }
        }
      }
    }
    goto LABEL_74;
  }
  a14 = *a9;
  if ( !a11 )
    goto LABEL_43;
LABEL_4:
  *a16 = sub_19CFBF0(a1, a2, a3, a11, v137[0], a13);
  v128 = *(_QWORD *)(a11 + 80);
  v19 = *(_QWORD *)(v128 & 0xFFFFFFFFFFFFFFF0LL);
  v20 = *(unsigned __int8 *)(v19 + 16);
  if ( (unsigned int)(v20 - 43) > 1 )
  {
    v63 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
    if ( (unsigned int)v63 > 1 || (v19 = sub_F63050(*(_QWORD *)(v128 & 0xFFFFFFFFFFFFFFF0LL), a2, v63, v20)) == 0 )
    {
      v21 = 0;
      goto LABEL_7;
    }
    v20 = *(unsigned __int8 *)(v19 + 16);
  }
  if ( (_BYTE)v20 == 43 )
    goto LABEL_6;
  while ( 1 )
  {
    v54 = (*(_BYTE *)(v19 + 18) & 0x10) == 0;
    v19 = *(_QWORD *)(*(_QWORD *)(v19 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( v54 )
      break;
    v55 = (unsigned int)*(unsigned __int8 *)(v19 + 16) - 43;
    if ( (unsigned int)v55 > 1 )
      v19 = sub_F63050(v19, a2, v55, v20);
  }
  v112 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  v21 = 2;
  if ( (unsigned int)(v112 - 25) <= 1 )
LABEL_6:
    v21 = 1;
LABEL_7:
  *a17 = v21;
  v139 = sub_FDE930(&v138);
  v22 = *(_DWORD *)(a11 + 104);
  if ( v22 > (unsigned int)sub_FDE930(&v138) )
  {
    v139 = *(_DWORD *)(a11 + 104);
    if ( a5 >= v139 )
      goto LABEL_9;
LABEL_93:
    sub_168B9F0((__int64)&v153, a1, a14, 0x1468u, 0);
    LODWORD(v146) = 2;
    v88 = sub_1587D10((__int64)&v153, (int *)&v146);
    v89 = sub_1588370(v88, &v139);
    v90 = v89;
    if ( *(_BYTE *)(v89 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v89 + 32), a5, 3u);
    }
    else if ( *(_BYTE *)(v89 + 132) )
    {
      v117 = sub_168B9E0((_QWORD *)v89);
      v118 = *(_QWORD *)(v90 + 16);
      if ( v118 )
        v118 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v118 + 32LL))(*(_QWORD *)(v90 + 16));
      v149[0] = v118;
      v119 = sub_1587BC0(v117, v149, v113, v114, v115, v116);
      sub_AE9DF0((unsigned __int8 **)(*v119 + 32LL * *(unsigned int *)(v90 + 128) + 8), a5, 3u);
    }
    LODWORD(v149[0]) = 0;
    sub_1587D10(v90, (int *)v149);
    sub_15F7200(&v153);
    return 0;
  }
  if ( a5 < v139 )
    goto LABEL_93;
LABEL_9:
  v26 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v27 = (_QWORD *)(*(_QWORD *)(a11 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a11 + 16) & 4) != 0 )
    v27 = (_QWORD *)*v27;
  sub_F69E10((__int64)v149, v26, (__int64)v27, v23, v24, v25);
  v31 = v139;
  v136 = 0;
  v131 = v150;
  if ( v139 )
  {
    v32 = 0;
    v33 = v134;
    while ( 1 )
    {
      v26 = a4;
      v48 = (char **)(a4 + 8LL * v32);
      v49 = *v48;
      if ( (*(_DWORD *)*v48 & 0x10000) != 0 )
        goto LABEL_31;
      v142 = *v48;
      v50 = *(_QWORD *)(a11 + 96);
      v51 = *(_QWORD *)(v50 + 8LL * v32);
      if ( (*(_BYTE *)(v51 + 29) & 1) != 0 )
      {
        v52 = sub_B8C3D0(*(_QWORD *)(v50 + 8LL * v32), a4, v50, v28, v29, v30);
        v50 = *v52;
        v28 = *v52 + 8LL * *((unsigned int *)v52 + 2);
        if ( *v52 >= v28 )
        {
          v49 = v142;
          if ( v50 == v28 )
            goto LABEL_13;
          while ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 421 )
          {
            v28 += 8LL;
            if ( v50 == v28 )
              goto LABEL_13;
          }
LABEL_62:
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v51 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) == 11 )
          {
            v26 = (unsigned __int64)v33;
            v64 = sub_BFD8A0(v49, (__int64)v33, *(double *)a7.m128_u64);
            v50 = (unsigned __int16)*v64;
            LOWORD(v50) = v50 & 0x1FF;
            if ( (_WORD)v50 == 117 )
              *(_BYTE *)(*((_QWORD *)v64 + 2) + 50LL) |= 2u;
          }
          goto LABEL_13;
        }
        v53 = (__int64 *)*v52;
        while ( 1 )
        {
          v50 = *v53;
          if ( *(_WORD *)(*v53 + 36) == 421 )
            break;
          if ( (__int64 *)v28 == ++v53 )
          {
            v49 = v142;
            goto LABEL_13;
          }
        }
        v49 = v142;
        if ( (__int64 *)v28 != v53 )
          goto LABEL_62;
      }
LABEL_13:
      v34 = *(_QWORD *)(*((_QWORD *)v49 + 1) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v34 + 16) == 13 && ((*(_WORD *)(v34 + 18) >> 3) & 0x1FF) == 0x1F8 )
      {
        if ( (*(_BYTE *)(v51 + 29) & 1) == 0 )
          goto LABEL_16;
        v74 = sub_B8C3D0(v51, v26, v50, v28, v29, v30);
        v75 = (__int64 *)*v74;
        v76 = *v74 + 8LL * *((unsigned int *)v74 + 2);
        if ( *v74 < v76 )
        {
          v107 = *v74;
          while ( *(_WORD *)(*(_QWORD *)v107 + 36LL) != 97 )
          {
            v107 += 8LL;
            if ( v76 == v107 )
              goto LABEL_83;
          }
          if ( v76 == v107 )
            goto LABEL_83;
        }
        else
        {
          if ( v75 == (__int64 *)v76 )
            goto LABEL_83;
          if ( *(_WORD *)(*(_QWORD *)v76 + 36LL) != 97 )
          {
            v77 = (__int64 *)(v76 + 8);
            while ( v77 != v75 )
            {
              v78 = *v77++;
              if ( *(_WORD *)(v78 + 36) == 97 )
                goto LABEL_17;
            }
LABEL_83:
            v49 = v142;
LABEL_16:
            v26 = (unsigned __int64)v49;
            v142 = (char *)sub_19D0DD0((__int64)a1, (__int64)v49);
          }
        }
      }
LABEL_17:
      v35 = *(_QWORD *)(v51 + 48);
      if ( v33[2388] != v35 )
      {
        v144 = *(_QWORD *)(v51 + 48);
        if ( v131 )
        {
          v26 = (unsigned __int64)v33;
          v144 = sub_F69C10((__int64 *)&v144, (__int64)v33, v149[0], v149[1], 2);
        }
        v36 = *a1;
        v37 = (unsigned int)sub_EEC8C0((unsigned __int64)v142, v26, *(double *)a7.m128_u64);
        LODWORD(v154) = 3380;
        v155 = &v142;
        v153 = off_2BC64D8;
        result = sub_1E63C20(v36, v37, v144, 1, &v153);
        if ( result )
          return result;
        v42 = v144;
        if ( (*(_BYTE *)(v33[290] + 107LL) & 4) != 0 && (*(_BYTE *)(v51 + 29) & 1) != 0 )
        {
          v135 = v144;
          v65 = sub_B8C3D0(v51, v37, v144, v39, v40, v41);
          v42 = v135;
          v66 = *v65;
          v39 = *v65 + 8LL * *((unsigned int *)v65 + 2);
          if ( *v65 >= v39 )
          {
            if ( v66 == v39 )
              goto LABEL_23;
            if ( *(_WORD *)(*(_QWORD *)v39 + 36LL) != 99 )
            {
              v91 = v39 + 8;
              do
              {
                v39 = v91;
                if ( v66 == v91 )
                  goto LABEL_23;
                v91 += 8LL;
              }
              while ( *(_WORD *)(*(_QWORD *)v39 + 36LL) != 99 );
            }
          }
          else
          {
            v67 = *v65;
            while ( 1 )
            {
              v66 = v67;
              if ( *(_WORD *)(*(_QWORD *)v67 + 36LL) == 99 )
                break;
              v67 += 8LL;
              if ( v39 == v67 )
                goto LABEL_23;
            }
          }
          v43 = 4LL * (v66 != v39);
        }
        else
        {
LABEL_23:
          v43 = 0;
        }
        v154 = 0;
        v156 = 0;
        LODWORD(v153) = 1;
        v44 = *(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v44 + 8) & 0xF) != 0 )
          v45 = sub_F64F00(v42, v44, v42, v39, v40) & 0xFFFFFFFFFFFFFFF0LL;
        else
          v45 = v44 & 0xFFFFFFFFFFFFFFF0LL;
        v155 = (char **)sub_A73320(v33, v45);
        v26 = (unsigned __int64)&v153;
        v157 = v51 & 0xFFFFFFFFFFFFFFFBLL | v43;
        v46 = sub_1A24E20(*a1, &v153, 0, v142, 0, 0);
        if ( v46 != 1 )
        {
          v47 = v46 & 0xFFFFFFFFFFFFFFFELL;
          *v48 = (char *)v47;
          if ( v131
            && (*(_BYTE *)(v47 + 1) & 6) == 0
            && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v144 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) == 11
            && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v47 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) == 11
            && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) == 34 )
          {
            v146 = (void *)v47;
            v26 = (unsigned __int64)&v146;
            sub_18C2180(*a1, (unsigned __int64 *)&v146);
            *v48 = (char *)((unsigned __int64)v146 & 0xFFFFFFFFFFFFFFFELL);
          }
          goto LABEL_30;
        }
        goto LABEL_57;
      }
      v153 = nullptr;
      v26 = a14;
      v68 = sub_1924920(*a1, a14, v142, (__int64 *)&v153, a7, a8);
      if ( v68 != 1 )
      {
        *v48 = (char *)(v68 & 0xFFFFFFFFFFFFFFFELL);
        *(_QWORD *)(v51 + 48) = v153;
        goto LABEL_30;
      }
LABEL_57:
      v136 = 1;
LABEL_30:
      v31 = v139;
LABEL_31:
      if ( ++v32 >= (unsigned int)v31 )
      {
        v17 = a1;
        break;
      }
    }
  }
  if ( (*(_BYTE *)(a11 + 58) & 4) != 0 )
  {
    v87 = (__int64 *)*v17;
    if ( (unsigned int)a5 > (unsigned int)v31 )
    {
      v108 = v136;
      v109 = (char **)(a4 + 8LL * (unsigned int)v31);
      v110 = a4 + 8 * ((unsigned int)v31 + (unsigned __int64)(unsigned int)(a5 - 1 - v31)) + 8;
      do
      {
        if ( (*(_DWORD *)*v109 & 0x10000) == 0 )
        {
          v111 = sub_192BE00((__int64)v87, *v109, 2, nullptr, v29, v30, a7, a8);
          *v109 = (char *)(v111 & 0xFFFFFFFFFFFFFFFELL);
          v87 = (__int64 *)*v17;
          v108 |= v111 == 1;
        }
        ++v109;
      }
      while ( (char **)v110 != v109 );
      v136 = v108;
    }
  }
  else
  {
    if ( a5 != v31 )
    {
      v79 = sub_EEB7E0(*(_QWORD *)(a4 + 8 * v31), v26, *(double *)a7.m128_u64);
      sub_168B9F0((__int64)&v153, v17, v79, 0x146Eu, 0);
      LODWORD(v142) = 2;
      v80 = sub_1587D10((__int64)&v153, (int *)&v142);
      v81 = sub_1588370(v80, &v139);
      v141 = a5;
      v82 = sub_16CF160(v81, &v141);
      v83 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a11 + 16LL);
      if ( v83 == sub_9C4AE0 )
      {
        HIDWORD(v146) = sub_BA8020(a11);
        LODWORD(v146) = *(_DWORD *)(a11 + 24);
      }
      else
      {
        v146 = (void *)v83(a11);
      }
      v84 = sub_1587DB0(v82, (__int64 *)&v146);
      v140 = 0;
      v85 = sub_1587D10(v84, &v140);
      v86 = sub_EEC140(*(_QWORD *)(a4 + 8 * a5 - 8));
      v144 = __PAIR64__(v86, sub_EEB7E0(*(_QWORD *)(a4 + 8LL * v139), (__int64)&v140, *(double *)a7.m128_u64));
      sub_1587DB0(v85, (__int64 *)&v144);
      sub_15F7200(&v153);
    }
    v87 = (__int64 *)*v17;
  }
  sub_18CE000(v87, a11, a14, a4, a5, v30, (__m128i)a7, *(double *)a8.m128_u64);
  return v136 | sub_1A864B0(v17, a11, a14, a4, a5);
}
