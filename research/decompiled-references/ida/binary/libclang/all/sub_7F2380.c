__int64 __fastcall sub_7F2380(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 *a5, __int64 a6)
{
  __m128i *v10; // rbx
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  __m128i *v16; // rax
  __int64 result; // rax
  unsigned int v18; // ebx
  int v20; // edx
  unsigned __int64 v21; // rsi
  int v22; // ecx
  __int64 v23; // r8
  __int64 *v24; // rdx
  __int64 *v25; // rax
  __int64 v26; // rdi
  unsigned __int64 v27; // r8
  unsigned __int64 *v28; // r13
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // r8
  const __m128i *v32; // r13
  __int64 v33; // r13
  __int64 *v34; // rdx
  __int64 v35; // rdi
  char v36; // al
  __m128i *v37; // rcx
  int v38; // eax
  unsigned int v39; // esi
  unsigned int v40; // edi
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // rsi
  __m128i *v44; // rax
  __int64 v45; // rsi
  bool v46; // al
  int v47; // edx
  int v48; // eax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  int v51; // r10d
  unsigned int j; // ecx
  __int64 v53; // r9
  int v54; // esi
  unsigned int v55; // ecx
  int k; // eax
  int v57; // ecx
  int v58; // edi
  int v59; // esi
  __int64 v60; // rax
  __int8 *v61; // rbx
  int v62; // esi
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  void *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned __int64 v69; // rax
  unsigned int v70; // eax
  __int64 v71; // rax
  _QWORD *v72; // rdx
  __int64 v73; // rsi
  int v74; // r8d
  __int64 v75; // rsi
  _QWORD *v76; // rax
  __int64 *v77; // r10
  __int64 *i; // rax
  __int64 v79; // rdx
  int v80; // esi
  int v81; // esi
  unsigned int v82; // ebx
  _QWORD *v83; // rcx
  __int64 v84; // r8
  int v85; // r8d
  __int64 v86; // rcx
  __int64 v87; // rsi
  int v88; // r11d
  __int64 *v89; // r10
  __int8 *v90; // r13
  unsigned __int64 v91; // rax
  __int64 v92; // rax
  _QWORD *v93; // rax
  unsigned int v94; // r11d
  _QWORD *v95; // rdx
  __int64 v96; // rsi
  _QWORD *v97; // rdi
  __int64 *v98; // rax
  __int64 *v99; // rcx
  __int64 v100; // r10
  int v101; // edx
  int v102; // ebx
  unsigned int v103; // esi
  _QWORD *v104; // rdx
  __int64 v105; // rdi
  int v106; // esi
  int v107; // r10d
  __int64 *v108; // r8
  __int64 v109; // r11
  __int64 v110; // rcx
  _QWORD *v111; // rcx
  unsigned int v112; // ecx
  bool v113; // al
  __int64 v114; // rax
  unsigned int v115; // ecx
  __int64 *v116; // [rsp+0h] [rbp-B0h]
  __int64 *v117; // [rsp+0h] [rbp-B0h]
  int v118; // [rsp+0h] [rbp-B0h]
  _DWORD *v119; // [rsp+0h] [rbp-B0h]
  __int64 v120; // [rsp+0h] [rbp-B0h]
  __int64 v121; // [rsp+0h] [rbp-B0h]
  unsigned __int64 v122; // [rsp+0h] [rbp-B0h]
  unsigned __int64 v123; // [rsp+0h] [rbp-B0h]
  unsigned __int64 v124; // [rsp+8h] [rbp-A8h]
  __int64 v125; // [rsp+8h] [rbp-A8h]
  __int64 v126; // [rsp+8h] [rbp-A8h]
  __int64 v127; // [rsp+8h] [rbp-A8h]
  __int64 v128; // [rsp+8h] [rbp-A8h]
  _QWORD *v129; // [rsp+8h] [rbp-A8h]
  unsigned __int64 v130; // [rsp+10h] [rbp-A0h]
  int v131; // [rsp+10h] [rbp-A0h]
  _QWORD *v132; // [rsp+10h] [rbp-A0h]
  unsigned __int64 v133; // [rsp+18h] [rbp-98h]
  unsigned __int64 v134; // [rsp+18h] [rbp-98h]
  int v135; // [rsp+18h] [rbp-98h]
  int v136; // [rsp+20h] [rbp-90h]
  unsigned int v137; // [rsp+20h] [rbp-90h]
  int v138; // [rsp+2Ch] [rbp-84h]
  __int64 v139; // [rsp+30h] [rbp-80h]
  __int64 v140; // [rsp+40h] [rbp-70h] BYREF
  __m128i v141[6]; // [rsp+48h] [rbp-68h] BYREF

  if ( !a2 )
    return 1;
  v10 = v141;
  if ( !*(_DWORD *)(a1 + 16) )
    goto LABEL_3;
  v18 = *(_DWORD *)(a6 + 16);
  v20 = 0;
  v116 = *(__int64 **)a6;
  if ( !v18 )
    goto LABEL_79;
  v21 = v18 - 1;
  v22 = 1;
  LODWORD(v23) = v21 & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
  v24 = &v116[2 * (unsigned int)v23];
  v25 = nullptr;
  v26 = *v24;
  if ( a3 != *v24 )
  {
    while ( v26 != -4096 )
    {
      if ( v26 == -8192 && !v25 )
        v25 = v24;
      v23 = (unsigned int)v21 & ((_DWORD)v23 + v22);
      v24 = &v116[2 * v23];
      v26 = *v24;
      if ( a3 == *v24 )
        goto LABEL_7;
      ++v22;
    }
    v57 = *(_DWORD *)(a6 + 8);
    if ( !v25 )
      v25 = v24;
    v20 = 2 * v18;
    v58 = v57 + 1;
    if ( 4 * (v57 + 1) < 3 * v18 )
    {
      if ( v18 >> 3 < v18 - *(_DWORD *)(a6 + 12) - v58 )
      {
LABEL_56:
        *(_DWORD *)(a6 + 8) = v58;
        if ( *v25 != -4096 )
          --*(_DWORD *)(a6 + 12);
        v25[1] = 0;
        *v25 = a3;
        v28 = (unsigned __int64 *)(v25 + 1);
        goto LABEL_59;
      }
      v128 = a6;
      v91 = ((((v21 | (v21 >> 1)) >> 2) | v21 | (v21 >> 1)) >> 4) | ((v21 | (v21 >> 1)) >> 2) | v21 | (v21 >> 1);
      v92 = ((((v91 >> 8) | v91) >> 16) | (v91 >> 8) | v91) + 1;
      if ( (unsigned int)v92 < 0x40 )
        LODWORD(v92) = 64;
      *(_DWORD *)(a6 + 16) = v92;
      v93 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v92, 8);
      a6 = v128;
      v94 = ((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4);
      v95 = v93;
      *(_QWORD *)v128 = v93;
      v96 = *(unsigned int *)(v128 + 16);
      v97 = &v93[2 * v96];
      if ( v116 )
      {
        *(_QWORD *)(v128 + 8) = 0;
        if ( 16 * v96 )
        {
          if ( ((16 * (_BYTE)v96) & 0x10) == 0 || (*v93 = -4096, v95 = v93 + 2, v93 + 2 != v97) )
          {
            do
            {
              *v95 = -4096;
              v95 += 4;
              *(v95 - 2) = -4096;
            }
            while ( v95 != v97 );
          }
        }
        v98 = v116;
        v99 = &v116[2 * v18];
        do
        {
          v100 = *v98;
          if ( *v98 != -4096 && v100 != -8192 )
          {
            v101 = *(_DWORD *)(v128 + 16);
            if ( !v101 )
            {
              *(_QWORD *)&dword_0 = *v98;
              BUG();
            }
            v102 = v101 - 1;
            v103 = (v101 - 1) & (((unsigned int)v100 >> 9) ^ ((unsigned int)v100 >> 4));
            v104 = (_QWORD *)(*(_QWORD *)v128 + 16LL * v103);
            v105 = *v104;
            if ( v100 != *v104 )
            {
              v135 = 1;
              v132 = nullptr;
              while ( v105 != -4096 )
              {
                if ( v105 == -8192 )
                {
                  if ( v132 )
                    v104 = v132;
                  v132 = v104;
                }
                v103 = v102 & (v135 + v103);
                v104 = (_QWORD *)(*(_QWORD *)v128 + 16LL * v103);
                v105 = *v104;
                if ( v100 == *v104 )
                  goto LABEL_116;
                ++v135;
              }
              if ( v132 )
                v104 = v132;
            }
LABEL_116:
            *v104 = v100;
            v104[1] = v98[1];
            ++*(_DWORD *)(v128 + 8);
          }
          v98 += 2;
        }
        while ( v99 != v98 );
        operator delete();
        a6 = v128;
        v94 = ((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4);
        v95 = *(_QWORD **)v128;
        LODWORD(v96) = *(_DWORD *)(v128 + 16);
        v58 = *(_DWORD *)(v128 + 8) + 1;
      }
      else
      {
        *(_QWORD *)(v128 + 8) = 0;
        if ( v93 != v97 )
        {
          if ( ((16 * (_BYTE)v96) & 0x10) == 0 || (v93 += 2, *v95 = -4096, v95 + 2 != v97) )
          {
            do
            {
              *v93 = -4096;
              v93 += 4;
              *(v93 - 2) = -4096;
            }
            while ( v93 != v97 );
          }
        }
        v58 = 1;
      }
      if ( (_DWORD)v96 )
      {
        v106 = v96 - 1;
        v107 = 1;
        v108 = nullptr;
        LODWORD(v109) = v106 & v94;
        v25 = &v95[2 * (unsigned int)v109];
        v110 = *v25;
        if ( a3 != *v25 )
        {
          while ( v110 != -4096 )
          {
            if ( !v108 && v110 == -8192 )
              v108 = v25;
            v109 = v106 & (unsigned int)(v109 + v107);
            v25 = &v95[2 * v109];
            v110 = *v25;
            if ( a3 == *v25 )
              goto LABEL_56;
            ++v107;
          }
          if ( v108 )
            v25 = v108;
        }
        goto LABEL_56;
      }
LABEL_195:
      *(_DWORD *)(a6 + 8) = v58;
      BUG();
    }
LABEL_79:
    v126 = a6;
    v69 = (((((((((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
              | (unsigned int)(v20 - 1)
              | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 4)
            | (((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
            | (unsigned int)(v20 - 1)
            | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 8)
          | (((((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
            | (unsigned int)(v20 - 1)
            | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 4)
          | (((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
          | (unsigned int)(v20 - 1)
          | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 16)
        | (((((((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
            | (unsigned int)(v20 - 1)
            | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 4)
          | (((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
          | (unsigned int)(v20 - 1)
          | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 8)
        | (((((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
          | (unsigned int)(v20 - 1)
          | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 4)
        | (((unsigned int)(v20 - 1) | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1)) >> 2)
        | (unsigned int)(v20 - 1)
        | ((unsigned __int64)(unsigned int)(v20 - 1) >> 1);
    v70 = v69 + 1;
    if ( v70 < 0x40 )
      v70 = 64;
    *(_DWORD *)(a6 + 16) = v70;
    v71 = sub_25CC9C0(16LL * v70, 8);
    a6 = v126;
    v72 = (_QWORD *)v71;
    v73 = *(unsigned int *)(v126 + 16);
    *(_QWORD *)v126 = v71;
    v74 = v73;
    v75 = 16 * v73;
    v76 = (_QWORD *)(v71 + v75);
    if ( v116 )
    {
      *(_QWORD *)(v126 + 8) = 0;
      v77 = &v116[2 * v18];
      if ( v75 )
      {
        if ( (((_BYTE)v76 - (_BYTE)v72) & 0x10) == 0 || (*v72 = -4096, v72 += 2, v72 != v76) )
        {
          do
          {
            *v72 = -4096;
            v72 += 4;
            *(v72 - 2) = -4096;
          }
          while ( v72 != v76 );
        }
      }
      for ( i = v116; v77 != i; i += 2 )
      {
        v79 = *i;
        if ( *i != -4096 && v79 != -8192 )
        {
          v80 = *(_DWORD *)(a6 + 16);
          if ( !v80 )
          {
            *(_QWORD *)&dword_0 = *i;
            BUG();
          }
          v81 = v80 - 1;
          v82 = v81 & (((unsigned int)v79 >> 9) ^ ((unsigned int)v79 >> 4));
          v83 = (_QWORD *)(*(_QWORD *)a6 + 16LL * v82);
          v84 = *v83;
          if ( v79 != *v83 )
          {
            v131 = 1;
            v129 = nullptr;
            while ( v84 != -4096 )
            {
              if ( v84 == -8192 )
              {
                if ( v129 )
                  v83 = v129;
                v129 = v83;
              }
              v82 = v81 & (v131 + v82);
              v83 = (_QWORD *)(*(_QWORD *)a6 + 16LL * v82);
              v84 = *v83;
              if ( v79 == *v83 )
                goto LABEL_91;
              ++v131;
            }
            if ( v129 )
              v83 = v129;
          }
LABEL_91:
          *v83 = v79;
          v83[1] = i[1];
          ++*(_DWORD *)(a6 + 8);
        }
      }
      v127 = a6;
      operator delete();
      a6 = v127;
      v72 = *(_QWORD **)v127;
      v74 = *(_DWORD *)(v127 + 16);
      v58 = *(_DWORD *)(v127 + 8) + 1;
    }
    else
    {
      *(_QWORD *)(v126 + 8) = 0;
      if ( v72 != v76 )
      {
        v111 = v72;
        if ( (((_BYTE)v76 - (_BYTE)v72) & 0x10) == 0 || (v111 = v72 + 2, *v72 = -4096, v72 + 2 != v76) )
        {
          do
          {
            *v111 = -4096;
            v111 += 4;
            *(v111 - 2) = -4096;
          }
          while ( v111 != v76 );
        }
      }
      v58 = 1;
    }
    if ( v74 )
    {
      v85 = v74 - 1;
      LODWORD(v86) = v85 & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
      v25 = &v72[2 * (unsigned int)v86];
      v87 = *v25;
      if ( a3 != *v25 )
      {
        v88 = 1;
        v89 = nullptr;
        while ( v87 != -4096 )
        {
          if ( !v89 && v87 == -8192 )
            v89 = v25;
          v86 = v85 & (unsigned int)(v86 + v88);
          v25 = &v72[2 * v86];
          v87 = *v25;
          if ( a3 == *v25 )
            goto LABEL_56;
          ++v88;
        }
        if ( v89 )
          v25 = v89;
      }
      goto LABEL_56;
    }
    goto LABEL_195;
  }
LABEL_7:
  v27 = v24[1];
  v28 = (unsigned __int64 *)(v24 + 1);
  if ( v27 <= 7 )
  {
LABEL_59:
    v10 = v141;
    v59 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 40LL * *(unsigned int *)(a1 + 16) - 40);
    v120 = *(_QWORD *)(a1 + 8) + 40LL * *(unsigned int *)(a1 + 16) - 40;
    v141[0].m128i_i32[0] = 77;
    if ( sub_7204C0(v141[0].m128i_i32, v59) && (v60 = *(_QWORD *)(v120 + 8)) != 0 )
    {
      *v28 = v60 & 0xFFFFFFFFFFFFFFF9LL;
    }
    else
    {
      v62 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 40LL * *(unsigned int *)(a1 + 16) - 40);
      v121 = *(_QWORD *)(a1 + 8) + 40LL * *(unsigned int *)(a1 + 16) - 40;
      v141[0].m128i_i32[0] = 176;
      if ( sub_7204C0(v141[0].m128i_i32, v62) && (v63 = *(_QWORD *)(v121 + 8)) != 0 )
      {
        *v28 = v63 & 0xFFFFFFFFFFFFFFF9LL | 2;
      }
      else
      {
        v64 = operator new(0x28u);
        v65 = *(_QWORD *)(a1 + 8) + 40LL * *(unsigned int *)(a1 + 16);
        *(__m128i *)v64 = _mm_loadu_si128((const __m128i *)(v65 - 40));
        *(__m128i *)(v64 + 16) = _mm_loadu_si128((const __m128i *)(v65 - 24));
        *(_QWORD *)(v64 + 32) = *(_QWORD *)(v65 - 8);
        *v28 = v64 & 0xFFFFFFFFFFFFFFF9LL | 4;
      }
    }
    goto LABEL_3;
  }
  v117 = v24;
  v10 = v141;
  if ( (~(_BYTE)v27 & 6) != 0 )
  {
    v33 = operator new(0xB8u);
    sub_7DB1A0(v141, v117[1]);
    sub_7DD830(v33, v141);
    v34 = v117;
    v35 = v117[1];
    if ( v35 )
    {
      if ( (v117[1] & 6) == 4 )
      {
        v66 = (void *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v66 )
        {
          operator delete(v66, 0x28u);
          v34 = v117;
        }
      }
    }
    v27 = v33 | 6;
    v34[1] = v33 | 6;
  }
  v29 = *(unsigned int *)(a1 + 16);
  v30 = *(_QWORD *)(a1 + 8);
  v31 = v27 & 0xFFFFFFFFFFFFFFF8LL;
  v32 = (const __m128i *)(v30 + 40 * v29 - 40);
  if ( v32->m128i_i32[0] <= 73 || !v32->m128i_i64[1] )
    goto LABEL_31;
  if ( (*(_BYTE *)(v31 + 96) & 1) != 0 )
  {
    v118 = 1;
    v124 = v31 + 104;
    v130 = v31 + 184;
  }
  else
  {
    v45 = *(unsigned int *)(v31 + 112);
    v124 = *(_QWORD *)(v31 + 104);
    v130 = v124 + 40 * v45;
    if ( !(_DWORD)v45 )
      goto LABEL_21;
    v118 = v45 - 1;
  }
  v141[0].m128i_i32[0] = 73;
  v133 = v31;
  v46 = sub_7204C0(v141[0].m128i_i32, v32->m128i_i32[0]);
  v47 = v32->m128i_i32[0];
  v31 = v133;
  if ( v46 )
  {
    v67 = v32->m128i_i64[1];
    v136 = v32->m128i_i32[0];
    v141[0].m128i_i64[0] = v32[1].m128i_i64[0];
    v140 = v67;
    v48 = sub_7DB4D0(&v140, v141);
    v31 = v133;
    v47 = v136;
  }
  else if ( v47 == 5 )
  {
    v68 = v32->m128i_i64[1];
    v140 = v32[1].m128i_i64[0];
    v141[0].m128i_i64[0] = v68;
    v48 = sub_7DB530(v141, &v140);
    v31 = v133;
    v47 = 5;
  }
  else
  {
    v48 = -1916529075;
    if ( v47 > 73 )
    {
      v49 = v32->m128i_u64[1];
      v50 = 0x9DDFEA08EB382D69LL
          * (((0x9DDFEA08EB382D69LL * (HIDWORD(v49) ^ (8LL * (unsigned int)v49 - 0xAE502812AA7333LL))) >> 47)
           ^ (0x9DDFEA08EB382D69LL * (HIDWORD(v49) ^ (8LL * (unsigned int)v49 - 0xAE502812AA7333LL)))
           ^ HIDWORD(v49));
      v48 = -348639895 * (v50 ^ (v50 >> 47));
    }
  }
  v51 = 1;
  for ( j = v48 & v118; ; j = v118 & v115 )
  {
    v53 = v124 + 40LL * j;
    v54 = *(_DWORD *)v53;
    if ( !v47 )
    {
      if ( v54 )
      {
        v55 = v118 & (v51 + j);
        v53 = v124 + 40LL * v55;
        if ( *(_DWORD *)v53 )
        {
          for ( k = v51 + 1; ; ++k )
          {
            v55 = v118 & (k + v55);
            v53 = v124 + 40LL * v55;
            if ( !*(_DWORD *)v53 )
              break;
          }
        }
      }
      goto LABEL_19;
    }
    if ( v47 == 1045 )
    {
      if ( v54 == 1045 )
        goto LABEL_18;
      goto LABEL_72;
    }
    while ( 1 )
    {
      if ( v47 != v54 )
        goto LABEL_72;
      if ( v47 != 6 )
        break;
      if ( *(_QWORD *)(v53 + 8) == v32->m128i_i64[1] )
        goto LABEL_19;
      v112 = v51 + j;
      ++v51;
      j = v118 & v112;
      v53 = v124 + 40LL * j;
      v54 = *(_DWORD *)v53;
    }
    v141[0].m128i_i32[0] = 73;
    v139 = v53;
    v138 = v51;
    v137 = j;
    v134 = v31;
    v113 = sub_7204C0(v141[0].m128i_i32, v32->m128i_i32[0]);
    v31 = v134;
    j = v137;
    v51 = v138;
    v53 = v139;
    if ( v113 )
    {
      if ( v32->m128i_i64[1] == *(_QWORD *)(v139 + 8) && v32[1].m128i_i64[0] == *(_QWORD *)(v139 + 16) )
        goto LABEL_19;
LABEL_137:
      v54 = *(_DWORD *)v139;
      goto LABEL_72;
    }
    if ( v32->m128i_i32[0] == 5 )
      break;
    v54 = *(_DWORD *)v139;
    if ( v32->m128i_i32[0] > 73 )
    {
      v114 = v32->m128i_i64[1];
      if ( v54 > 73 )
      {
        if ( v114 == *(_QWORD *)(v139 + 8) )
          goto LABEL_19;
        goto LABEL_147;
      }
      if ( !v114 )
      {
LABEL_18:
        if ( !v53 )
        {
LABEL_73:
          v53 = v31 + 184;
          if ( (*(_BYTE *)(v31 + 96) & 1) == 0 )
            v53 = *(_QWORD *)(v31 + 104) + 40LL * *(unsigned int *)(v31 + 112);
        }
        goto LABEL_19;
      }
LABEL_72:
      if ( !v54 )
        goto LABEL_73;
      goto LABEL_147;
    }
    if ( v54 <= 73 )
      goto LABEL_18;
    if ( !*(_QWORD *)(v139 + 8) )
      goto LABEL_19;
LABEL_147:
    v115 = v51 + j;
    v47 = v32->m128i_i32[0];
    ++v51;
  }
  if ( v32[1].m128i_i64[0] != *(_QWORD *)(v139 + 16) || v32->m128i_i64[1] != *(_QWORD *)(v139 + 8) )
    goto LABEL_137;
LABEL_19:
  if ( v53 == v130 )
  {
    v29 = *(unsigned int *)(a1 + 16);
    v30 = *(_QWORD *)(a1 + 8);
LABEL_21:
    v32 = (const __m128i *)(v30 + 40 * v29 - 40);
    if ( v32->m128i_i32[0] <= 73 || !v32->m128i_i64[1] )
      goto LABEL_31;
    v119 = (_DWORD *)v31;
    v125 = v31 + 96;
    v36 = sub_7DB920(v31 + 96, (__int64)v32, &v140);
    v31 = (unsigned __int64)v119;
    if ( !v36 )
    {
      v37 = (__m128i *)v140;
      v141[0].m128i_i64[0] = v140;
      v38 = (v119[24] >> 1) + 1;
      if ( (v119[24] & 1) != 0 )
      {
        v40 = 6;
        v39 = 2;
      }
      else
      {
        v39 = v119[28];
        v40 = 3 * v39;
      }
      if ( 4 * v38 >= v40 )
      {
        v39 *= 2;
      }
      else if ( v39 >> 3 < v39 - (v38 + v119[25]) )
      {
        goto LABEL_28;
      }
      sub_7DD180(v125, v39);
      sub_7DB920(v125, (__int64)v32, v141);
      v31 = (unsigned __int64)v119;
      v37 = (__m128i *)v141[0].m128i_i64[0];
      v38 = (v119[24] >> 1) + 1;
LABEL_28:
      *(_DWORD *)(v31 + 96) = *(_DWORD *)(v31 + 96) & 1 | (2 * v38);
      if ( v37->m128i_i32[0] )
        --*(_DWORD *)(v31 + 100);
      *v37 = _mm_loadu_si128(v32);
      v37[1] = _mm_loadu_si128(v32 + 1);
      v37[2].m128i_i64[0] = v32[2].m128i_i64[0];
LABEL_31:
      v41 = *(unsigned int *)(v31 + 8);
      v42 = *(_QWORD *)v31;
      v43 = v41 + 1;
      if ( *(unsigned int *)(v31 + 12) < (unsigned __int64)(v41 + 1) )
      {
        if ( (unsigned __int64)v32 < v42 || (unsigned __int64)v32 >= v42 + 40 * v41 )
        {
          v123 = v31;
          sub_25D6060(v31, v31 + 16, v43, 40);
          v31 = v123;
          v42 = *(_QWORD *)v123;
          v41 = *(unsigned int *)(v123 + 8);
        }
        else
        {
          v90 = &v32->m128i_i8[-v42];
          v122 = v31;
          sub_25D6060(v31, v31 + 16, v43, 40);
          v31 = v122;
          v42 = *(_QWORD *)v122;
          v41 = *(unsigned int *)(v122 + 8);
          v32 = (const __m128i *)&v90[*(_QWORD *)v122];
        }
      }
      v44 = (__m128i *)(v42 + 40 * v41);
      *v44 = _mm_loadu_si128(v32);
      v44[1] = _mm_loadu_si128(v32 + 1);
      v44[2].m128i_i64[0] = v32[2].m128i_i64[0];
      ++*(_DWORD *)(v31 + 8);
    }
  }
LABEL_3:
  v11 = (unsigned int)sub_721720(a2);
  v12 = *(unsigned int *)(a1 + 20);
  v141[0].m128i_i64[1] = a2;
  v141[0].m128i_i32[0] = v11;
  v13 = *(unsigned int *)(a1 + 16);
  v14 = *(_QWORD *)(a1 + 8);
  v15 = v13 + 1;
  if ( v12 < v13 + 1 )
  {
    if ( (unsigned __int64)v141 < v14 || (unsigned __int64)v141 >= v14 + 40 * v13 )
    {
      sub_25D6060(a1 + 8, a1 + 24, v15, 40);
      v14 = *(_QWORD *)(a1 + 8);
      v13 = *(unsigned int *)(a1 + 16);
    }
    else
    {
      v61 = &v141[0].m128i_i8[-v14];
      sub_25D6060(a1 + 8, a1 + 24, v15, 40);
      v14 = *(_QWORD *)(a1 + 8);
      v13 = *(unsigned int *)(a1 + 16);
      v10 = (__m128i *)&v61[v14];
    }
  }
  v16 = (__m128i *)(v14 + 40 * v13);
  *v16 = _mm_loadu_si128(v10);
  v16[1] = _mm_loadu_si128(v10 + 1);
  v16[2].m128i_i64[0] = v10[2].m128i_i64[0];
  ++*(_DWORD *)(a1 + 16);
  result = sub_7F1D90(a5, *a4);
  --*(_DWORD *)(a1 + 16);
  return result;
}

