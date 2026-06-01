__int64 __fastcall sub_98E100(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // edi
  __int64 *v14; // rsi
  __int64 v15; // r9
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 *v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 *v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 *v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned int v31; // edi
  __int64 *v32; // rsi
  __int64 v33; // r8
  unsigned __int64 v34; // r12
  _QWORD *v35; // rsi
  unsigned int v36; // eax
  __int64 v37; // rax
  __int64 v38; // r8
  unsigned __int64 v39; // r9
  unsigned __int64 *v40; // rdx
  unsigned __int64 v41; // rax
  unsigned __int64 *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  int v49; // esi
  __int64 v50; // r13
  __int64 *v51; // rax
  __int64 v52; // rdi
  int v53; // edi
  __int64 v54; // r13
  __int64 v55; // rdx
  int v56; // ecx
  __int64 v57; // rdx
  unsigned int v58; // eax
  __int64 *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 *v62; // rax
  __int64 *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 *v68; // r8
  __int64 v69; // r9
  int v70; // esi
  int v71; // r10d
  __int64 v72; // r8
  unsigned __int64 *v73; // rcx
  int v74; // r9d
  unsigned __int64 v75; // rcx
  unsigned __int64 *v76; // rax
  __int64 v77; // rbx
  __int64 v78; // rbp
  __int64 v79; // r15
  unsigned int v80; // r14d
  __int64 *v81; // r13
  int v82; // r12d
  unsigned int v83; // edi
  __int64 *v84; // rdx
  __int64 v85; // rsi
  unsigned int *v86; // rax
  __int64 v87; // rdx
  unsigned int v88; // ebp
  __int64 v89; // rdi
  __int64 v90; // rax
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 *v93; // rdx
  unsigned __int64 v94; // rax
  __int64 *v95; // rcx
  int v96; // eax
  int v97; // eax
  __int64 *v98; // rax
  int v99; // edx
  __int64 v100; // rcx
  __int64 v101; // rax
  _QWORD *v102; // rax
  _QWORD *v103; // rcx
  __int64 v104; // r11
  _QWORD *v105; // rdx
  __int64 *v106; // r8
  __int64 v107; // rcx
  unsigned int v108; // esi
  _QWORD *v109; // rdx
  __int64 v110; // rdi
  int v111; // r8d
  int v112; // r8d
  __int64 v113; // r9
  unsigned int v114; // r12d
  int v115; // edi
  __int64 *v116; // rsi
  unsigned __int64 v117; // rax
  __int64 v118; // rax
  _QWORD *v119; // rax
  __int64 v120; // rdx
  _QWORD *v121; // rcx
  int v122; // r12d
  __int64 *v123; // r15
  _QWORD *v124; // rdx
  __int64 *v125; // r9
  unsigned int v126; // edi
  _QWORD *v127; // rdx
  __int64 v128; // r8
  int v129; // r9d
  int v130; // r9d
  __int64 v131; // r10
  unsigned int v132; // esi
  int v133; // r8d
  __int64 *v134; // rdi
  __int64 v135; // rdx
  _QWORD *i; // rdx
  __int64 v137; // rdx
  _QWORD *k; // rdx
  __int64 *v139; // rax
  __int64 v140; // rcx
  int v141; // r10d
  _QWORD *v142; // r9
  int v143; // r11d
  _QWORD *v144; // r10
  int v145; // [rsp+0h] [rbp-128h]
  int j; // [rsp+0h] [rbp-128h]
  unsigned int v147; // [rsp+8h] [rbp-120h]
  __int64 v149; // [rsp+18h] [rbp-110h]
  char *v150; // [rsp+20h] [rbp-108h]
  __int64 v151; // [rsp+28h] [rbp-100h]
  void (*v153)(); // [rsp+38h] [rbp-F0h]
  char *v154; // [rsp+40h] [rbp-E8h]
  __int64 v155; // [rsp+48h] [rbp-E0h]
  __m128i v156[2]; // [rsp+50h] [rbp-D8h] BYREF
  _OWORD v157[3]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v158; // [rsp+A0h] [rbp-88h]
  __m128i v159; // [rsp+B0h] [rbp-78h] BYREF
  __m128i v160; // [rsp+C0h] [rbp-68h]
  __m128i v161; // [rsp+D0h] [rbp-58h]
  __int64 v162; // [rsp+E0h] [rbp-48h]

  v6 = 0;
  if ( (*(_WORD *)a2 & 0x1FF) == 0x5B )
    v6 = (*(_BYTE *)(a4 + 28) & 0x7Fu) - 35 <= 3;
  v147 = 0;
  if ( v6 < *(_DWORD *)(a2 + 16) )
  {
    while ( 1 )
    {
      sub_B52330(a4);
      if ( v7 <= v147 )
        goto LABEL_28;
      v8 = *(_QWORD *)(*(_QWORD *)(a4 + 120) + 8LL * v147);
      *(_QWORD *)&v157[0] = *(_QWORD *)(v8 + 48);
      v149 = 8LL * v6;
      v9 = *(_QWORD *)(v149 + a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
      if ( (*(_WORD *)v9 & 0x1FF) == 0x3C && (*(_DWORD *)v9 & 0x80000) == 0 )
        v9 = *(_QWORD *)(v9 + 16);
      v10 = sub_BD7CB0(v9);
      v11 = *((unsigned int *)a1 + 8);
      v12 = a1[2];
      if ( (_DWORD)v11 )
      {
        v13 = (v11 - 1) & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
        v14 = (__int64 *)(v12 + ((unsigned __int64)v13 << 6));
        v15 = *v14;
        if ( v10 == *v14 )
          goto LABEL_10;
        v49 = 1;
        if ( v15 != -4096 )
          break;
      }
LABEL_50:
      sub_9885F0(
        (__m128 *)&v159,
        (_QWORD *)(v12 + ((unsigned __int64)(unsigned int)v11 << 6)),
        (_QWORD *)(v12 + ((unsigned __int64)(unsigned int)v11 << 6)),
        (__int64)(a1 + 2),
        1);
      v16 = v159.m128i_i64[0];
LABEL_11:
      v17 = a1[2] + ((unsigned __int64)*((unsigned int *)a1 + 8) << 6);
      sub_9885F0((__m128 *)&v159, (_QWORD *)v17, (_QWORD *)v17, (__int64)(a1 + 2), 1);
      if ( v159.m128i_i64[0] == v16 || (unsigned int)(*(_DWORD *)(v16 + 8) - 2) <= 1 )
        goto LABEL_27;
      v159 = _mm_loadu_si128((const __m128i *)(v16 + 8));
      v160 = _mm_loadu_si128((const __m128i *)(v16 + 24));
      v161 = _mm_loadu_si128((const __m128i *)(v16 + 40));
      v162 = *(_QWORD *)(v16 + 56);
      if ( (*(_BYTE *)(v8 + 29) & 1) != 0 )
      {
        v21 = sub_B68690(v8);
        v22 = *(__int64 **)v21;
        v23 = *(_QWORD *)v21 + 8LL * *(unsigned int *)(v21 + 8);
        if ( (unsigned __int64)v22 < v23 )
        {
          v18 = (__int64)v22;
          while ( 1 )
          {
            v17 = *(_QWORD *)v18;
            if ( *(_WORD *)(*(_QWORD *)v18 + 36LL) == 326 )
              break;
            v18 += 8;
            if ( v23 == v18 )
              goto LABEL_18;
          }
          if ( v23 == v18 )
            goto LABEL_18;
          goto LABEL_55;
        }
        if ( v22 != (__int64 *)v23 )
        {
          if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) != 326 )
          {
            v59 = (__int64 *)(v23 + 8);
            do
            {
              v18 = (__int64)v59;
              if ( v22 == v59 )
                goto LABEL_18;
              v60 = *v59++;
            }
            while ( *(_WORD *)(v60 + 36) != 326 );
          }
LABEL_55:
          v50 = *v22;
          if ( *(_WORD *)(*v22 + 36) != 326 )
          {
            v51 = v22 + 1;
            do
              v50 = *v51++;
            while ( *(_WORD *)(v50 + 36) != 326 );
          }
          v52 = a1[1];
          if ( v159.m128i_i32[0] == 4 )
          {
            v17 = v159.m128i_u64[1];
            v53 = sub_98A100(v52, v159.m128i_i64[1]);
          }
          else if ( v159.m128i_i32[0] == 5 )
          {
            v17 = v159.m128i_u64[1];
            v53 = sub_98C240(v52, v159.m128i_i64[1]);
          }
          else
          {
            v53 = 0;
            if ( v159.m128i_i32[0] == 1 )
              v53 = v159.m128i_i32[2];
          }
          v18 = dword_23B6E18[*(unsigned int *)(v50 + 40)];
          if ( (_DWORD)v18 != v53 )
          {
            v54 = *(_QWORD *)(*a1 + 64LL);
            v153 = *(void (**)())(*(_QWORD *)v54 + 40LL);
            v154 = sub_986660(v53);
            v155 = v55;
            v150 = sub_986660(v56);
            v151 = v57;
            v58 = sub_BDCD00(*(_QWORD *)(v149 + a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32));
            v18 = v151;
            if ( v153 != nullsub_332 )
            {
              v17 = v58;
              ((void (__fastcall *)(__int64, _QWORD, char *, __int64, char *, __int64))v153)(
                v54,
                v58,
                v150,
                v151,
                v154,
                v155);
            }
          }
        }
LABEL_18:
        if ( (unsigned int)(*(_DWORD *)(v16 + 8) - 4) > 1 )
        {
LABEL_27:
          ++v6;
          ++v147;
          if ( v6 >= *(_DWORD *)(a2 + 16) )
            goto LABEL_28;
        }
        else
        {
          if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
            goto LABEL_24;
          v24 = sub_B68690(v8);
          v25 = *(__int64 **)v24;
          v26 = *(_QWORD *)v24 + 8LL * *(unsigned int *)(v24 + 8);
          if ( (unsigned __int64)v25 >= v26 )
          {
            if ( v25 == (__int64 *)v26 )
              goto LABEL_24;
            if ( *(_WORD *)(*(_QWORD *)v26 + 36LL) != 350 )
            {
              v63 = (__int64 *)(v26 + 8);
              do
              {
                v18 = (__int64)v63;
                if ( v25 == v63 )
                  goto LABEL_24;
                v64 = *v63++;
              }
              while ( *(_WORD *)(v64 + 36) != 350 );
            }
LABEL_72:
            v61 = *v25;
            if ( *(_WORD *)(*v25 + 36) != 350 )
            {
              v62 = v25 + 1;
              do
                v61 = *v62++;
              while ( *(_WORD *)(v61 + 36) != 350 );
            }
            ++v6;
            sub_9866B0(a1[1], (__int64)&v159, dword_23B6E18[*(unsigned int *)(v61 + 40)], v61, v19, v20);
            ++v147;
            if ( v6 >= *(_DWORD *)(a2 + 16) )
              goto LABEL_28;
          }
          else
          {
            v18 = (__int64)v25;
            while ( 1 )
            {
              v17 = *(_QWORD *)v18;
              if ( *(_WORD *)(*(_QWORD *)v18 + 36LL) == 350 )
                break;
              v18 += 8;
              if ( v26 == v18 )
                goto LABEL_24;
            }
            if ( v26 != v18 )
              goto LABEL_72;
LABEL_24:
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v157[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                      & 0xFFFFFFFFFFFFFFF0LL)
                          + 16LL) == 44
              || sub_986590(v157) )
            {
              sub_9866B0(a1[1], (__int64)&v159, 3, v18, v19, v20);
              goto LABEL_27;
            }
            v65 = *(_QWORD *)(*(_QWORD *)&v157[0] & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v65 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42) > 2u )
              goto LABEL_27;
            v66 = sub_F44710(v65, v17, v27, v18, v19);
            if ( ((v66 & 1) != 0 || (byte_8[v66 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0) && !sub_9864E0(v157) )
              goto LABEL_27;
            ++v6;
            sub_9866B0(a1[1], (__int64)&v159, 1, v67, v68, v69);
            ++v147;
            if ( v6 >= *(_DWORD *)(a2 + 16) )
              goto LABEL_28;
          }
        }
      }
      else
      {
        if ( (unsigned int)(*(_DWORD *)(v16 + 8) - 4) <= 1 )
          goto LABEL_24;
        ++v6;
        ++v147;
        if ( v6 >= *(_DWORD *)(a2 + 16) )
          goto LABEL_28;
      }
    }
    while ( 1 )
    {
      v74 = v49 + 1;
      v13 = (v11 - 1) & (v13 + v49);
      v14 = (__int64 *)(v12 + ((unsigned __int64)v13 << 6));
      if ( v10 == *v14 )
        break;
      if ( *v14 == -4096 )
        goto LABEL_50;
      v49 = v74;
    }
LABEL_10:
    sub_9885F0((__m128 *)&v159, v14, (_QWORD *)((v11 << 6) + v12), (__int64)(a1 + 2), 1);
    v16 = v159.m128i_i64[0];
    goto LABEL_11;
  }
LABEL_28:
  if ( !a3 )
    return 0;
  if ( (*(_WORD *)a3 & 0x1FF) == 0x3C && (*(_DWORD *)a3 & 0x80000) == 0 )
    a3 = *(_QWORD *)(a3 + 16);
  v28 = sub_BD7CB0(a3);
  v29 = *((unsigned int *)a1 + 8);
  v30 = a1[2];
  if ( !(_DWORD)v29 )
    goto LABEL_94;
  v31 = (v29 - 1) & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
  v32 = (__int64 *)(v30 + ((unsigned __int64)v31 << 6));
  v33 = *v32;
  if ( v28 != *v32 )
  {
    v70 = 1;
    if ( v33 != -4096 )
    {
      do
      {
        v71 = v70 + 1;
        v31 = (v29 - 1) & (v70 + v31);
        v32 = (__int64 *)(v30 + ((unsigned __int64)v31 << 6));
        v72 = *v32;
        if ( v28 == *v32 )
          goto LABEL_34;
        v70 = v71;
      }
      while ( v72 != -4096 );
    }
LABEL_94:
    sub_9885F0(
      (__m128 *)&v159,
      (_QWORD *)(v30 + ((unsigned __int64)(unsigned int)v29 << 6)),
      (_QWORD *)(v30 + ((unsigned __int64)(unsigned int)v29 << 6)),
      (__int64)(a1 + 2),
      1);
    v34 = v159.m128i_i64[0];
    goto LABEL_35;
  }
LABEL_34:
  sub_9885F0((__m128 *)&v159, v32, (_QWORD *)((v29 << 6) + v30), (__int64)(a1 + 2), 1);
  v34 = v159.m128i_i64[0];
LABEL_35:
  v35 = (_QWORD *)(a1[2] + ((unsigned __int64)*((unsigned int *)a1 + 8) << 6));
  sub_9885F0((__m128 *)&v159, v35, v35, (__int64)(a1 + 2), 1);
  if ( v159.m128i_i64[0] == v34 )
    return 0;
  v157[0] = _mm_loadu_si128((const __m128i *)(v34 + 8));
  v157[1] = _mm_loadu_si128((const __m128i *)(v34 + 24));
  v157[2] = _mm_loadu_si128((const __m128i *)(v34 + 40));
  v158 = *(_QWORD *)(v34 + 56);
  v36 = sub_BDCD00(a2);
  sub_98DE10(a1, (int *)v157, a4, v36);
  if ( (*(_BYTE *)(a4 + 29) & 1) == 0 )
    return 0;
  v37 = sub_B68690(a4);
  v40 = *(unsigned __int64 **)v37;
  v41 = *(_QWORD *)v37 + 8LL * *(unsigned int *)(v37 + 8);
  if ( (unsigned __int64)v40 < v41 )
  {
    v73 = v40;
    while ( *(_WORD *)(*v73 + 36) != 359 )
    {
      if ( (unsigned __int64 *)v41 == ++v73 )
        goto LABEL_43;
    }
    if ( (unsigned __int64 *)v41 == v73 )
      goto LABEL_43;
LABEL_104:
    v75 = *v40;
    if ( *(_WORD *)(*v40 + 36) != 359 )
    {
      v76 = v40 + 1;
      do
        v75 = *v76++;
      while ( *(_WORD *)(v75 + 36) != 359 );
    }
    if ( LODWORD(v157[0]) == 4 )
    {
      v87 = *(unsigned int *)(v75 + 40);
      v88 = dword_23B6E18[v87];
      v89 = a1[1] + 16LL;
      v159.m128i_i64[0] = *((_QWORD *)&v157[0] + 1);
      *(_DWORD *)sub_987DF0(v89, v159.m128i_i64, v87, v75, v38, (_QWORD *)v39) = v88;
      return 1;
    }
    if ( LODWORD(v157[0]) != 5 )
      return 0;
    v77 = a1[1];
    v78 = *((_QWORD *)&v157[0] + 1);
    v79 = *(unsigned int *)(v77 + 56);
    v80 = dword_23B6E18[*(unsigned int *)(v75 + 40)];
    v81 = *(__int64 **)(v77 + 40);
    if ( !(_DWORD)v79 )
      goto LABEL_159;
    v75 = (unsigned int)(v79 - 1);
    v82 = (DWORD2(v157[0]) >> 9) ^ (DWORD2(v157[0]) >> 4);
    v83 = v75 & v82;
    v84 = &v81[2 * ((unsigned int)v75 & v82)];
    v85 = *v84;
    if ( *((_QWORD *)&v157[0] + 1) == *v84 )
    {
LABEL_111:
      v86 = (unsigned int *)(v84 + 1);
LABEL_112:
      *v86 = v80;
      return 1;
    }
    v38 = 1;
    v98 = nullptr;
    if ( v85 == -4096 )
      goto LABEL_135;
    while ( 1 )
    {
      if ( !v98 && v85 == -8192 )
        v98 = v84;
      v39 = (unsigned int)(v38 + 1);
      v83 = v75 & (v38 + v83);
      v84 = &v81[2 * v83];
      v85 = *v84;
      if ( *((_QWORD *)&v157[0] + 1) == *v84 )
        goto LABEL_111;
      if ( v85 == -4096 )
        break;
      v38 = (unsigned int)v39;
    }
    if ( !v98 )
LABEL_135:
      v98 = v84;
    v99 = *(_DWORD *)(v77 + 48) + 1;
    if ( 4 * v99 < (unsigned int)(3 * v79) )
    {
      if ( (int)v79 - *(_DWORD *)(v77 + 52) - v99 > (unsigned int)v79 >> 3 )
      {
        v100 = *v98;
        goto LABEL_139;
      }
      v101 = (((((((((v75 | (v75 >> 1)) >> 2) | v75 | (v75 >> 1)) >> 4) | ((v75 | (v75 >> 1)) >> 2) | v75 | (v75 >> 1)) >> 8)
              | ((((v75 | (v75 >> 1)) >> 2) | v75 | (v75 >> 1)) >> 4)
              | ((v75 | (v75 >> 1)) >> 2)
              | v75
              | (v75 >> 1)) >> 16)
            | ((((((v75 | (v75 >> 1)) >> 2) | v75 | (v75 >> 1)) >> 4) | ((v75 | (v75 >> 1)) >> 2) | v75 | (v75 >> 1)) >> 8)
            | ((((v75 | (v75 >> 1)) >> 2) | v75 | (v75 >> 1)) >> 4)
            | ((v75 | (v75 >> 1)) >> 2)
            | v75
            | (v75 >> 1))
           + 1;
      if ( (unsigned int)v101 < 0x40 )
        LODWORD(v101) = 64;
      *(_DWORD *)(v77 + 56) = v101;
      v102 = (_QWORD *)sub_220C370(16LL * (unsigned int)v101, 8, 64, v75, v38, v39);
      *(_QWORD *)(v77 + 40) = v102;
      if ( v81 )
      {
        *(_QWORD *)(v77 + 48) = 0;
        v103 = v102;
        v104 = *(unsigned int *)(v77 + 56);
        v105 = &v102[2 * v104];
        if ( v102 != v105 )
        {
          do
          {
            *v103 = -4096;
            v103 += 2;
          }
          while ( v105 != v103 );
        }
        v106 = v81;
        v145 = v104 - 1;
        do
        {
          v107 = *v106;
          if ( *v106 != -8192 && v107 != -4096 )
          {
            if ( !(_DWORD)v104 )
              goto LABEL_237;
            v108 = v145 & (((unsigned int)v107 >> 9) ^ ((unsigned int)v107 >> 4));
            v109 = &v102[2 * v108];
            v110 = *v109;
            if ( *v109 != v107 )
            {
              v141 = 1;
              v142 = nullptr;
              if ( v110 != -4096 )
              {
                while ( 1 )
                {
                  if ( v110 == -8192 && !v142 )
                    v142 = v109;
                  v108 = v145 & (v141 + v108);
                  v109 = &v102[2 * v108];
                  v110 = *v109;
                  if ( v107 == *v109 )
                    break;
                  if ( v110 == -4096 )
                  {
                    if ( v142 )
                      v109 = v142;
                    break;
                  }
                  ++v141;
                }
              }
            }
            *v109 = v107;
            *((_DWORD *)v109 + 2) = *((_DWORD *)v106 + 2);
            ++*(_DWORD *)(v77 + 48);
          }
          v106 += 2;
        }
        while ( &v81[2 * v79] != v106 );
        operator delete();
      }
      else
      {
        v135 = *(unsigned int *)(v77 + 56);
        *(_QWORD *)(v77 + 48) = 0;
        for ( i = &v102[2 * v135]; i != v102; v102 += 2 )
          *v102 = -4096;
      }
      v111 = *(_DWORD *)(v77 + 56);
      v99 = *(_DWORD *)(v77 + 48) + 1;
      if ( v111 )
      {
        v112 = v111 - 1;
        v113 = *(_QWORD *)(v77 + 40);
        v114 = v112 & v82;
        v98 = (__int64 *)(v113 + 16LL * v114);
        v100 = *v98;
        if ( v78 != *v98 )
        {
          v115 = 1;
          v116 = nullptr;
          if ( v100 != -4096 )
          {
            while ( 1 )
            {
              if ( v100 == -8192 && !v116 )
                v116 = v98;
              v114 = v112 & (v115 + v114);
              v98 = (__int64 *)(v113 + 16LL * v114);
              v100 = *v98;
              if ( v78 == *v98 )
                goto LABEL_139;
              if ( v100 == -4096 )
              {
                if ( !v116 )
                  break;
                v100 = *v116;
                v98 = v116;
                goto LABEL_139;
              }
              ++v115;
            }
          }
LABEL_158:
          *(_DWORD *)(v77 + 48) = v99;
LABEL_141:
          *v98 = v78;
          v86 = (unsigned int *)(v98 + 1);
          *v86 = 0;
          goto LABEL_112;
        }
        goto LABEL_139;
      }
    }
    else
    {
LABEL_159:
      v117 = (((((((unsigned int)(2 * v79 - 1) | ((unsigned __int64)(unsigned int)(2 * v79 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v79 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v79 - 1) >> 1)) >> 4)
             | (((unsigned int)(2 * v79 - 1) | ((unsigned __int64)(unsigned int)(2 * v79 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v79 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v79 - 1) >> 1)) >> 8)
           | (((((unsigned int)(2 * v79 - 1) | ((unsigned __int64)(unsigned int)(2 * v79 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v79 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v79 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v79 - 1) | ((unsigned __int64)(unsigned int)(2 * v79 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v79 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v79 - 1) >> 1);
      v118 = ((v117 >> 16) | v117) + 1;
      if ( (unsigned int)v118 < 0x40 )
        LODWORD(v118) = 64;
      *(_DWORD *)(v77 + 56) = v118;
      v119 = (_QWORD *)sub_220C370(16LL * (unsigned int)v118, 8, 64, v75, v38, v39);
      *(_QWORD *)(v77 + 40) = v119;
      if ( v81 )
      {
        v120 = *(unsigned int *)(v77 + 56);
        v121 = v119;
        *(_QWORD *)(v77 + 48) = 0;
        v122 = v120;
        v123 = &v81[2 * (unsigned int)v79];
        v124 = &v119[2 * v120];
        if ( v119 != v124 )
        {
          do
          {
            *v121 = -4096;
            v121 += 2;
          }
          while ( v124 != v121 );
        }
        v125 = v81;
        for ( j = v122 - 1; v123 != v125; v125 += 2 )
        {
          v107 = *v125;
          if ( *v125 != -8192 && v107 != -4096 )
          {
            if ( !v122 )
            {
LABEL_237:
              *(_QWORD *)&dword_0 = v107;
              BUG();
            }
            v126 = j & (((unsigned int)v107 >> 9) ^ ((unsigned int)v107 >> 4));
            v127 = &v119[2 * v126];
            v128 = *v127;
            if ( *v127 != v107 )
            {
              v143 = 1;
              v144 = nullptr;
              if ( v128 != -4096 )
              {
                while ( 1 )
                {
                  if ( v128 == -8192 && !v144 )
                    v144 = v127;
                  v126 = j & (v143 + v126);
                  v127 = &v119[2 * v126];
                  v128 = *v127;
                  if ( v107 == *v127 )
                    break;
                  if ( v128 == -4096 )
                  {
                    if ( v144 )
                      v127 = v144;
                    break;
                  }
                  ++v143;
                }
              }
            }
            *v127 = v107;
            *((_DWORD *)v127 + 2) = *((_DWORD *)v125 + 2);
            ++*(_DWORD *)(v77 + 48);
          }
        }
        operator delete();
      }
      else
      {
        v137 = *(unsigned int *)(v77 + 56);
        *(_QWORD *)(v77 + 48) = 0;
        for ( k = &v119[2 * v137]; k != v119; v119 += 2 )
          *v119 = -4096;
      }
      v129 = *(_DWORD *)(v77 + 56);
      v99 = *(_DWORD *)(v77 + 48) + 1;
      if ( v129 )
      {
        v130 = v129 - 1;
        v131 = *(_QWORD *)(v77 + 40);
        v132 = v130 & (((unsigned int)v78 >> 9) ^ ((unsigned int)v78 >> 4));
        v98 = (__int64 *)(v131 + 16LL * v132);
        v100 = *v98;
        if ( v78 != *v98 )
        {
          v133 = 1;
          v134 = nullptr;
          if ( v100 != -4096 )
          {
            while ( 1 )
            {
              if ( !v134 && v100 == -8192 )
                v134 = v98;
              v132 = v130 & (v133 + v132);
              v98 = (__int64 *)(v131 + 16LL * v132);
              v100 = *v98;
              if ( v78 == *v98 )
                goto LABEL_139;
              if ( v100 == -4096 )
              {
                if ( !v134 )
                  goto LABEL_158;
                v100 = *v134;
                v98 = v134;
                goto LABEL_139;
              }
              ++v133;
            }
          }
          goto LABEL_158;
        }
LABEL_139:
        *(_DWORD *)(v77 + 48) = v99;
        if ( v100 != -4096 )
          --*(_DWORD *)(v77 + 52);
        goto LABEL_141;
      }
    }
    ++*(_DWORD *)(v77 + 48);
    BUG();
  }
  if ( v40 != (unsigned __int64 *)v41 )
  {
    if ( *(_WORD *)(*(_QWORD *)v41 + 36LL) != 359 )
    {
      v42 = (unsigned __int64 *)(v41 + 8);
      while ( v40 != v42 )
      {
        v43 = *v42++;
        if ( *(_WORD *)(v43 + 36) == 359 )
          goto LABEL_104;
      }
      goto LABEL_43;
    }
    goto LABEL_104;
  }
LABEL_43:
  if ( (*(_BYTE *)(a4 + 29) & 1) == 0 )
    return 0;
  v44 = sub_B68690(a4);
  v45 = *(_QWORD *)v44;
  v46 = *(_QWORD *)v44 + 8LL * *(unsigned int *)(v44 + 8);
  if ( *(_QWORD *)v44 >= v46 )
  {
    if ( v45 == v46 )
      return 0;
    while ( *(_WORD *)(*(_QWORD *)v46 + 36LL) != 379 )
    {
      v46 += 8LL;
      if ( v45 == v46 )
        return 0;
    }
  }
  else
  {
    v47 = *(_QWORD *)v44;
    while ( *(_WORD *)(*(_QWORD *)v47 + 36LL) != 379 )
    {
      v47 += 8;
      if ( v46 == v47 )
        return 0;
    }
    if ( v46 == v47 )
      return 0;
  }
  if ( LODWORD(v157[0]) != 4 )
    return 0;
  if ( (*(_BYTE *)(a4 + 29) & 1) == 0 )
    goto LABEL_235;
  v90 = sub_B68690(a4);
  v93 = *(__int64 **)v90;
  v94 = *(_QWORD *)v90 + 8LL * *(unsigned int *)(v90 + 8);
  if ( (unsigned __int64)v93 >= v94 )
  {
    if ( v93 == (__int64 *)v94 )
      goto LABEL_235;
    if ( *(_WORD *)(*(_QWORD *)v94 + 36LL) != 379 )
    {
      v139 = (__int64 *)(v94 + 8);
      while ( v93 != v139 )
      {
        v140 = *v139++;
        if ( *(_WORD *)(v140 + 36) == 379 )
          goto LABEL_128;
      }
LABEL_235:
      BUG();
    }
  }
  else
  {
    v95 = v93;
    while ( *(_WORD *)(*v95 + 36) != 379 )
    {
      if ( (__int64 *)v94 == ++v95 )
        goto LABEL_235;
    }
    if ( (__int64 *)v94 == v95 )
      goto LABEL_235;
  }
LABEL_128:
  while ( *(_WORD *)(*v93 + 36) != 379 )
    ++v93;
  v96 = *(_DWORD *)(*v93 + 40);
  if ( !v96 )
  {
    v97 = 3;
LABEL_131:
    v159.m128i_i64[0] = a2;
    v160.m128i_i64[0] = *((_QWORD *)&v157[0] + 1);
    v159.m128i_i32[2] = 2;
    v160.m128i_i32[2] = v97;
    sub_988660(v156, (__int64)(a1 + 2), v159.m128i_i64, (const __m128i *)&v159.m128i_u64[1], v91, v92);
    return 0;
  }
  if ( v96 == 1 )
  {
    v97 = 2;
    goto LABEL_131;
  }
  return sub_98F0E0();
}

