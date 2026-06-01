void __fastcall sub_1EE5540(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rbp
  __int64 i; // r14
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 j; // rsi
  void **v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  void **v30; // rax
  int v31; // r15d
  __int64 v32; // r12
  void **v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rdx
  char *v36; // rsi
  const __m128i *v37; // rdx
  __m128i *v38; // rcx
  __int64 v39; // rdx
  _QWORD *v40; // rbx
  unsigned __int64 v41; // rax
  __int64 v42; // rdi
  __int64 *v43; // rsi
  __int64 v44; // rcx
  int v45; // r10d
  __int64 *v46; // r11
  int v47; // ecx
  __int64 v48; // r8
  __int64 v49; // rax
  unsigned int v50; // eax
  __int64 *v51; // rdx
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // r12
  __int64 v56; // r9
  _QWORD *v57; // r11
  __int64 v58; // r8
  _QWORD *m; // rdx
  _QWORD *v60; // rax
  int n; // edi
  __int64 v62; // r10
  unsigned int v63; // ecx
  _QWORD *v64; // rdx
  __int64 v65; // rsi
  int v66; // ecx
  int v67; // r11d
  int v68; // r11d
  unsigned int v69; // edx
  int v70; // r8d
  __int64 *v71; // rdi
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rax
  __int64 v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rdx
  _QWORD *v77; // r9
  _QWORD *v78; // r11
  __int64 v79; // rdi
  _QWORD *k; // rdx
  _QWORD *v81; // rax
  int v82; // r8d
  __int64 v83; // r10
  unsigned int v84; // ecx
  _QWORD *v85; // rdx
  __int64 v86; // rsi
  int v87; // ecx
  int v88; // r10d
  int v89; // r10d
  unsigned int v90; // r12d
  int v91; // edi
  __int64 *v92; // rdx
  unsigned __int64 v93; // r12
  __int64 v94; // rsi
  __int64 *v95; // rax
  unsigned __int64 v96; // rcx
  __int64 *v97; // r15
  __int64 *v98; // rdx
  unsigned __int64 v99; // r8
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // rdx
  __m128i v102; // xmm1
  __m128i v103; // xmm0
  unsigned __int64 v104; // rdx
  _QWORD *v105; // rax
  _QWORD *v106; // rdx
  __int64 v107; // rcx
  __int64 *v108; // rbx
  void **v109; // rbp
  __int32 v110; // ebx
  __int64 v111; // rbx
  __int64 v112; // rbp
  __int64 v113; // rbx
  void *v114; // rdi
  __int64 v115; // rbx
  unsigned __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rax
  int v119; // [rsp+0h] [rbp-B8h]
  unsigned int v120; // [rsp+0h] [rbp-B8h]
  unsigned int v121; // [rsp+0h] [rbp-B8h]
  __int64 v122; // [rsp+0h] [rbp-B8h]
  _QWORD *v123; // [rsp+0h] [rbp-B8h]
  _QWORD *v125; // [rsp+18h] [rbp-A0h]
  _QWORD *v126; // [rsp+18h] [rbp-A0h]
  int v127; // [rsp+18h] [rbp-A0h]
  _QWORD *v128; // [rsp+18h] [rbp-A0h]
  __int64 v129; // [rsp+20h] [rbp-98h]
  __int64 v130; // [rsp+28h] [rbp-90h]
  unsigned int v131; // [rsp+34h] [rbp-84h]
  _BYTE *v132; // [rsp+38h] [rbp-80h]
  int v133; // [rsp+38h] [rbp-80h]
  int v134; // [rsp+38h] [rbp-80h]
  __int64 v135; // [rsp+40h] [rbp-78h]
  unsigned int v136; // [rsp+5Ch] [rbp-5Ch] BYREF
  __m128 v137[5]; // [rsp+60h] [rbp-58h] BYREF

  v2 = (_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 8880);
  v4 = 32LL * *(unsigned int *)(a1 + 8888);
  v135 = v3 + v4;
  if ( v3 + v4 == v3 )
    goto LABEL_109;
  v5 = (_QWORD *)a1;
  for ( i = v3 + 8; ; i += 32 )
  {
    v7 = *(_QWORD *)(i - 8);
    v136 = 0;
    v130 = v7;
    v131 = *(_DWORD *)(i + 8);
    if ( v131 )
    {
      v8 = 0;
LABEL_27:
      v136 = v8 + 1;
      for ( j = sub_1EE1310((__int64)v5, v130, *(_QWORD *)(*(_QWORD *)i + 8 * v8)); ; j = 0 )
      {
        v129 = sub_1EDB980(v5, j, v9, v10, v11, v12);
        v14 = (void **)operator new(0x80u);
        memset(v14, 0, 0x80u);
        *((_DWORD *)v14 + 30) = 248;
        v125 = v14 + 2;
        *v14 = v14 + 2;
        v14[1] = (void *)0x400000000LL;
        v15 = v136;
        if ( v136 < *(_DWORD *)(i + 8) )
        {
          ++v136;
          v20 = sub_1EE1310((__int64)v5, v130, *(_QWORD *)(*(_QWORD *)i + 8 * v15));
        }
        else
        {
          sub_1EAD680((__int64)v5, "Corrupted AST file", 18);
          v20 = 0;
        }
        v21 = 0;
        v22 = sub_1EDB980(v5, v20, v16, v17, v18, v19);
        v25 = v136;
        v14[14] = (void *)v22;
        v26 = (unsigned int)(v25 + 1);
        v27 = *(_QWORD *)(*(_QWORD *)i + 8 * v25);
        v136 = v26;
        *((_DWORD *)v14 + 30) = v27;
        if ( *(char *)(v22 + 29) < 0 )
        {
          v28 = sub_B88050(v22);
          if ( v28 > 0x13 )
            v21 = *(_QWORD *)(v5[20] + 8LL * (unsigned int)(HIDWORD(v28) - 1));
          v26 = v136;
        }
        v136 = v26 + 1;
        v29 = *(_QWORD *)(*(_QWORD *)i + 8 * v26);
        v119 = v29;
        if ( *((_DWORD *)v14 + 3) < (unsigned int)v29 )
        {
          v133 = *(_QWORD *)(*(_QWORD *)i + 8 * v26);
          sub_2237220(v14, v125, (unsigned int)v29, 24);
          LODWORD(v29) = v133;
        }
        if ( (_DWORD)v29 )
        {
          v30 = v14;
          v31 = 0;
          v32 = v21;
          v33 = v30;
          do
          {
            sub_1EE50A0((__int64)v137, v5, v32, (__int64 *)i, &v136);
            v34 = *((unsigned int *)v33 + 2);
            v35 = v34 + 1;
            if ( v34 + 1 > (unsigned __int64)*((unsigned int *)v33 + 3) )
            {
              if ( *v33 > v137 || v137 >= (__m128 *)((char *)*v33 + 24 * v34) )
              {
                sub_2237220(v33, v125, v35, 24);
                v36 = (char *)*v33;
                v34 = *((unsigned int *)v33 + 2);
                v37 = (const __m128i *)v137;
              }
              else
              {
                v132 = *v33;
                sub_2237220(v33, v125, v35, 24);
                v23 = (__int64)v132;
                v36 = (char *)*v33;
                v34 = *((unsigned int *)v33 + 2);
                v37 = (const __m128i *)((char *)*v33 + (char *)v137 - v132);
              }
            }
            else
            {
              v36 = (char *)*v33;
              v37 = (const __m128i *)v137;
            }
            ++v31;
            v38 = (__m128i *)&v36[24 * v34];
            *v38 = _mm_loadu_si128(v37);
            v38[1].m128i_i64[0] = v37[1].m128i_i64[0];
            ++*((_DWORD *)v33 + 2);
          }
          while ( v119 != v31 );
          v14 = v33;
        }
        v39 = *(unsigned int *)(a2 + 16);
        v40 = *(_QWORD **)a2;
        if ( !(_DWORD)v39 )
          goto LABEL_43;
        v24 = v129;
        v41 = (unsigned int)(v39 - 1);
        LODWORD(v42) = v41 & (((unsigned int)v129 >> 4) ^ ((unsigned int)v129 >> 9));
        v43 = &v40[2 * (unsigned int)v42];
        v44 = *v43;
        if ( v129 == *v43 )
        {
LABEL_22:
          sub_13BE860(v137, v43, &v40[2 * v39], a2, 1);
          if ( v125 != *v14 )
            free(*v14);
          operator delete(v14, 0x80u);
          goto LABEL_25;
        }
        v45 = 1;
        v46 = nullptr;
        if ( v44 != -4096 )
        {
          while ( 1 )
          {
            if ( !v46 && v44 == -8192 )
              v46 = v43;
            v42 = (unsigned int)v41 & ((_DWORD)v42 + v45);
            v43 = &v40[2 * v42];
            v44 = *v43;
            if ( v129 == *v43 )
              goto LABEL_22;
            if ( v44 == -4096 )
              break;
            ++v45;
          }
          if ( v46 )
            v43 = v46;
        }
        v47 = *(_DWORD *)(a2 + 8) + 1;
        v23 = (unsigned int)(4 * v47);
        if ( (unsigned int)v23 < 3 * (int)v39 )
        {
          v48 = (unsigned int)v39 >> 3;
          if ( (int)v39 - *(_DWORD *)(a2 + 12) - v47 > (unsigned int)v48 )
          {
            v49 = *v43;
LABEL_39:
            *(_DWORD *)(a2 + 8) = v47;
            if ( v49 != -4096 )
              --*(_DWORD *)(a2 + 12);
            goto LABEL_41;
          }
          v121 = *(_DWORD *)(a2 + 16);
          v72 = (((v41 >> 1) | v41) >> 2) | (v41 >> 1) | v41;
          v73 = (((v72 >> 4) | v72) >> 8) | (v72 >> 4) | v72;
          v74 = ((v73 >> 16) | v73) + 1;
          if ( (unsigned int)v74 < 0x40 )
            LODWORD(v74) = 64;
          *(_DWORD *)(a2 + 16) = v74;
          v75 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v74, 8, v39, 64, v48, v129);
          v76 = v121;
          v77 = v75;
          *(_QWORD *)a2 = v75;
          if ( v40 )
          {
            *(_QWORD *)(a2 + 8) = 0;
            v122 = 16LL * v121;
            v78 = &v40[2 * v76];
            v79 = *(unsigned int *)(a2 + 16);
            for ( k = &v75[2 * v79]; k != v75; v75 += 2 )
              *v75 = -4096;
            v81 = v40;
            v82 = v79 - 1;
            do
            {
              v83 = *v81;
              if ( *v81 != -4096 && v83 != -8192 )
              {
                if ( !(_DWORD)v79 )
                {
                  *(_QWORD *)&dword_0 = *v81;
                  BUG();
                }
                v84 = v82 & (((unsigned int)v83 >> 9) ^ ((unsigned int)v83 >> 4));
                v85 = &v77[2 * v84];
                v86 = *v85;
                if ( *v85 != v83 && v86 != -4096 )
                {
                  v134 = 1;
                  v128 = nullptr;
                  while ( 1 )
                  {
                    if ( !v128 )
                    {
                      if ( v86 != -8192 )
                        v85 = nullptr;
                      v128 = v85;
                    }
                    v84 = v82 & (v134 + v84);
                    v85 = &v77[2 * v84];
                    v86 = *v85;
                    if ( v83 == *v85 )
                      break;
                    if ( v86 == -4096 )
                    {
                      if ( v128 )
                        v85 = v128;
                      break;
                    }
                    ++v134;
                  }
                }
                v87 = *((_DWORD *)v81 + 2);
                *v85 = v83;
                ++*(_DWORD *)(a2 + 8);
                *((_DWORD *)v85 + 2) = v87;
              }
              v81 += 2;
            }
            while ( v78 != v81 );
            operator delete(v40, v122, 8);
            v40 = *(_QWORD **)a2;
            v88 = *(_DWORD *)(a2 + 16);
            v47 = *(_DWORD *)(a2 + 8) + 1;
          }
          else
          {
            v115 = *(unsigned int *)(a2 + 16);
            *(_QWORD *)(a2 + 8) = 0;
            v88 = v115;
            v40 = &v75[2 * v115];
            if ( v75 != v40 )
            {
              do
              {
                *v75 = -4096;
                v75 += 2;
              }
              while ( v40 != v75 );
              v40 = v77;
            }
            v47 = 1;
          }
          if ( !v88 )
            goto LABEL_161;
          v89 = v88 - 1;
          v90 = v89 & (((unsigned int)v129 >> 4) ^ ((unsigned int)v129 >> 9));
          v43 = &v40[2 * v90];
          v49 = *v43;
          if ( v129 == *v43 )
            goto LABEL_39;
          v91 = 1;
          v92 = nullptr;
          if ( v49 != -4096 )
          {
            while ( 1 )
            {
              if ( v49 == -8192 && !v92 )
                v92 = v43;
              v90 = v89 & (v91 + v90);
              v43 = &v40[2 * v90];
              v49 = *v43;
              if ( v129 == *v43 )
                goto LABEL_39;
              if ( v49 == -4096 )
              {
                if ( !v92 )
                  break;
                v49 = *v92;
                v43 = v92;
                goto LABEL_39;
              }
              ++v91;
            }
          }
        }
        else
        {
LABEL_43:
          v120 = *(_DWORD *)(a2 + 16);
          v52 = (((((((unsigned int)(2 * v39 - 1) | ((unsigned __int64)(unsigned int)(2 * v39 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v39 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v39 - 1) >> 1)) >> 4)
                | (((unsigned int)(2 * v39 - 1) | ((unsigned __int64)(unsigned int)(2 * v39 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v39 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v39 - 1) >> 1)) >> 8)
              | (((((unsigned int)(2 * v39 - 1) | ((unsigned __int64)(unsigned int)(2 * v39 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v39 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v39 - 1) >> 1)) >> 4)
              | (((unsigned int)(2 * v39 - 1) | ((unsigned __int64)(unsigned int)(2 * v39 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v39 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v39 - 1) >> 1);
          v53 = ((v52 >> 16) | v52) + 1;
          if ( (unsigned int)v53 < 0x40 )
            LODWORD(v53) = 64;
          *(_DWORD *)(a2 + 16) = v53;
          v54 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v53, 8, v39, 64, v23, v24);
          v55 = v54;
          *(_QWORD *)a2 = v54;
          if ( v40 )
          {
            *(_QWORD *)(a2 + 8) = 0;
            v56 = 2LL * v120;
            v57 = &v40[v56];
            v58 = *(unsigned int *)(a2 + 16);
            for ( m = &v54[2 * v58]; m != v54; v54 += 2 )
              *v54 = -4096;
            v60 = v40;
            for ( n = v58 - 1; v57 != v60; v60 += 2 )
            {
              v62 = *v60;
              if ( *v60 != -8192 && v62 != -4096 )
              {
                if ( !(_DWORD)v58 )
                {
                  *(_QWORD *)&dword_0 = *v60;
                  BUG();
                }
                v63 = n & (((unsigned int)v62 >> 9) ^ ((unsigned int)v62 >> 4));
                v64 = &v55[2 * v63];
                v65 = *v64;
                if ( *v64 != v62 && v65 != -4096 )
                {
                  v127 = 1;
                  v123 = nullptr;
                  while ( 1 )
                  {
                    if ( !v123 )
                    {
                      if ( v65 != -8192 )
                        v64 = nullptr;
                      v123 = v64;
                    }
                    v63 = n & (v127 + v63);
                    v64 = &v55[2 * v63];
                    v65 = *v64;
                    if ( v62 == *v64 )
                      break;
                    if ( v65 == -4096 )
                    {
                      if ( v123 )
                        v64 = v123;
                      break;
                    }
                    ++v127;
                  }
                }
                v66 = *((_DWORD *)v60 + 2);
                *v64 = v62;
                ++*(_DWORD *)(a2 + 8);
                *((_DWORD *)v64 + 2) = v66;
              }
            }
            operator delete(v40, v56 * 8, 8);
            v40 = *(_QWORD **)a2;
            v67 = *(_DWORD *)(a2 + 16);
            v47 = *(_DWORD *)(a2 + 8) + 1;
          }
          else
          {
            v111 = *(unsigned int *)(a2 + 16);
            *(_QWORD *)(a2 + 8) = 0;
            v67 = v111;
            v40 = &v54[2 * v111];
            if ( v54 != v40 )
            {
              do
              {
                *v54 = -4096;
                v54 += 2;
              }
              while ( v40 != v54 );
              v40 = v55;
            }
            v47 = 1;
          }
          if ( !v67 )
          {
LABEL_161:
            ++*(_DWORD *)(a2 + 8);
            BUG();
          }
          v68 = v67 - 1;
          v69 = v68 & (((unsigned int)v129 >> 9) ^ ((unsigned int)v129 >> 4));
          v43 = &v40[2 * v69];
          v49 = *v43;
          if ( v129 == *v43 )
            goto LABEL_39;
          v70 = 1;
          v71 = nullptr;
          if ( v49 != -4096 )
          {
            while ( 1 )
            {
              if ( !v71 && v49 == -8192 )
                v71 = v43;
              v69 = v68 & (v70 + v69);
              v43 = &v40[2 * v69];
              v49 = *v43;
              if ( v129 == *v43 )
                goto LABEL_39;
              if ( v49 == -4096 )
              {
                if ( !v71 )
                  break;
                v49 = *v71;
                v43 = v71;
                goto LABEL_39;
              }
              ++v70;
            }
          }
        }
        *(_DWORD *)(a2 + 8) = v47;
LABEL_41:
        *((_DWORD *)v43 + 2) = 0;
        *v43 = v129;
        sub_13BE860(v137, v43, &v40[2 * *(unsigned int *)(a2 + 16)], a2, 1);
        v50 = *(_DWORD *)(a2 + 32);
        *(_DWORD *)(v137[0].m128_u64[0] + 8) = v50;
        if ( *(_DWORD *)(a2 + 36) <= v50 )
        {
          v93 = sub_2237400(a2 + 24, a2 + 40, 0, 16, v137);
          v94 = 16LL * *(unsigned int *)(a2 + 32);
          v95 = (__int64 *)(v93 + v94);
          v95[1] = (__int64)v14;
          *v95 = v129;
          v96 = *(_QWORD *)(a2 + 24);
          v97 = (__int64 *)(v96 + v94);
          if ( v96 != v96 + v94 )
          {
            v98 = *(__int64 **)(a2 + 24);
            if ( (v96 >= v93 + 32 || v93 >= v96 + 32) && (unsigned __int64)(v94 - 16) > 0x20 )
            {
              v99 = ((unsigned __int64)(v94 - 16) >> 4) + 1;
              v100 = v96 + 8;
              v101 = v93;
              do
              {
                v102 = _mm_loadu_si128((const __m128i *)(v100 - 8));
                v103 = _mm_loadu_si128((const __m128i *)(v100 + 8));
                v101 += 32LL;
                v100 += 32LL;
                *(_QWORD *)(v100 - 32) = 0;
                *(_QWORD *)(v100 - 16) = 0;
                *(__m128i *)(v101 - 32) = v102;
                *(__m128i *)(v101 - 16) = v103;
              }
              while ( v101 != v93 + 32 * (v99 >> 1) );
              v104 = 16 * (v99 & 0xFFFFFFFFFFFFFFFELL);
              v105 = (_QWORD *)(v96 + v104);
              v106 = (_QWORD *)(v93 + v104);
              if ( (v99 & 0xFFFFFFFFFFFFFFFELL) != v99 )
              {
                *v106 = *v105;
                v107 = v105[1];
                v105[1] = 0;
                v106[1] = v107;
              }
            }
            else
            {
              v116 = v93;
              do
              {
                v117 = *v98;
                v98 += 2;
                v116 += 16LL;
                *(_QWORD *)(v116 - 16) = v117;
                v118 = *(v98 - 1);
                *(v98 - 1) = 0;
                *(_QWORD *)(v116 - 8) = v118;
              }
              while ( v97 != v98 );
            }
            v108 = *(__int64 **)(a2 + 24);
            v97 = &v108[(unsigned __int64)v94 / 8];
            if ( v108 != &v108[(unsigned __int64)v94 / 8] )
            {
              v126 = v5;
              do
              {
                v97 -= 2;
                v109 = (void **)v97[1];
                if ( v109 )
                {
                  if ( *v109 != v109 + 2 )
                    free(*v109);
                  operator delete(v109, 0x80u);
                }
              }
              while ( v108 != v97 );
              v5 = v126;
              v97 = *(__int64 **)(a2 + 24);
            }
          }
          v110 = v137[0].m128_i32[0];
          if ( v97 != (__int64 *)(a2 + 40) )
            free(v97);
          *(_QWORD *)(a2 + 24) = v93;
          *(_DWORD *)(a2 + 36) = v110;
          ++*(_DWORD *)(a2 + 32);
        }
        else
        {
          v51 = (__int64 *)(*(_QWORD *)(a2 + 24) + 16LL * v50);
          *v51 = v129;
          v51[1] = (__int64)v14;
          *(_DWORD *)(a2 + 32) = v50 + 1;
        }
LABEL_25:
        v8 = v136;
        if ( v136 >= v131 )
          break;
        if ( v136 < *(_DWORD *)(i + 8) )
          goto LABEL_27;
        sub_1EAD680((__int64)v5, "Corrupted AST file", 18);
      }
    }
    if ( v135 == i + 24 )
      break;
  }
  v2 = v5;
  v112 = v5[1110];
  v113 = v112 + 32LL * *((unsigned int *)v2 + 2222);
  while ( v112 != v113 )
  {
    while ( 1 )
    {
      v113 -= 32;
      v114 = *(void **)(v113 + 8);
      if ( v114 == (void *)(v113 + 24) )
        break;
      free(v114);
      if ( v112 == v113 )
        goto LABEL_109;
    }
  }
LABEL_109:
  *((_DWORD *)v2 + 2222) = 0;
}
