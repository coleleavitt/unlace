__int64 __fastcall sub_7EBA80(__int64 *a1, __int64 a2)
{
  unsigned int v3; // ebp
  unsigned __int64 v4; // rbx
  _QWORD *v5; // r15
  int v6; // eax
  _WORD *v7; // rbx
  __m128i *v8; // r12
  __int64 v9; // r12
  int v10; // edx
  unsigned int v11; // r9d
  __int64 v12; // r8
  unsigned __int64 v13; // rsi
  int v14; // r10d
  _QWORD *v15; // rax
  unsigned int v16; // r13d
  __int64 v17; // rdi
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 *v21; // r13
  __int64 v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // r13
  const __m128i *v25; // r12
  _QWORD *v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r13
  const __m128i *v32; // r9
  __int64 v33; // rcx
  bool v34; // al
  __int64 v35; // r9
  int v36; // edx
  int v37; // eax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned int v40; // r15d
  __int64 v41; // rbp
  unsigned __int64 v42; // r14
  _WORD *v43; // r13
  unsigned int j; // ebx
  __int64 v45; // r10
  int v46; // eax
  __int64 v47; // rax
  char v48; // al
  __int32 v49; // eax
  unsigned __int64 v50; // rcx
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  __int64 v53; // rsi
  __m128i *v54; // rax
  __int64 v55; // r12
  __int64 result; // rax
  __int64 v57; // r12
  __int64 *v58; // rax
  __int64 v59; // rdx
  __int64 *v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rsi
  __m128i *v63; // rdx
  int v64; // eax
  unsigned int v65; // esi
  unsigned int v66; // edi
  __int64 v67; // rax
  unsigned __int64 v68; // rdx
  __int64 v69; // rdi
  __m128i *v70; // rax
  int v71; // edi
  int v72; // ecx
  int v73; // esi
  __int64 v74; // rax
  __int32 v75; // eax
  int v76; // esi
  __int64 v77; // rax
  __int8 *v78; // r12
  __int64 v79; // rax
  __int64 v80; // rdx
  void *v81; // rdi
  __int64 v82; // rax
  __int32 v83; // eax
  __int64 v84; // rax
  unsigned __int64 v85; // rax
  unsigned int v86; // eax
  _QWORD *v87; // rax
  __int64 v88; // rcx
  int v89; // esi
  __int64 v90; // rcx
  _QWORD *v91; // rdx
  __int64 *v92; // r11
  __int64 *i; // rax
  __int64 v94; // r13
  int v95; // edi
  int v96; // edi
  unsigned int v97; // ecx
  _QWORD *v98; // rdx
  __int64 v99; // r9
  int v100; // esi
  __int64 v101; // rdi
  __int64 v102; // r8
  int v103; // r10d
  _QWORD *v104; // r9
  unsigned __int64 v105; // rsi
  unsigned __int64 v106; // rax
  __int64 v107; // rax
  _QWORD *v108; // rax
  __int64 v109; // rcx
  int v110; // esi
  __int64 v111; // rcx
  _QWORD *v112; // rdx
  __int64 *v113; // rax
  __int64 v114; // r10
  int v115; // edi
  int v116; // edi
  unsigned int v117; // ecx
  _QWORD *v118; // rdx
  __int64 v119; // r8
  int v120; // esi
  int v121; // r10d
  __int64 v122; // r8
  _WORD *v123; // rdi
  bool v124; // al
  int v125; // esi
  __int64 v126; // rax
  __int64 v127; // rdx
  _QWORD *v128; // rsi
  _QWORD *v129; // rsi
  unsigned int v130; // ebx
  unsigned __int8 v131; // [rsp+0h] [rbp-110h]
  _QWORD *v132; // [rsp+8h] [rbp-108h]
  _QWORD *v133; // [rsp+8h] [rbp-108h]
  unsigned __int64 v134; // [rsp+8h] [rbp-108h]
  __int64 v135; // [rsp+8h] [rbp-108h]
  __int64 v136; // [rsp+8h] [rbp-108h]
  __int64 v137; // [rsp+8h] [rbp-108h]
  __int64 *v138; // [rsp+8h] [rbp-108h]
  __int8 *v139; // [rsp+8h] [rbp-108h]
  const __m128i *v140; // [rsp+8h] [rbp-108h]
  __int64 *v141; // [rsp+8h] [rbp-108h]
  unsigned __int64 v142; // [rsp+18h] [rbp-F8h]
  __int64 v143; // [rsp+18h] [rbp-F8h]
  unsigned int v144; // [rsp+18h] [rbp-F8h]
  unsigned int v145; // [rsp+18h] [rbp-F8h]
  int v146; // [rsp+18h] [rbp-F8h]
  __int64 v147; // [rsp+20h] [rbp-F0h]
  _QWORD *v148; // [rsp+20h] [rbp-F0h]
  __int64 *v149; // [rsp+28h] [rbp-E8h]
  int v150; // [rsp+28h] [rbp-E8h]
  int v151; // [rsp+38h] [rbp-D8h]
  int v152; // [rsp+38h] [rbp-D8h]
  int v153; // [rsp+3Ch] [rbp-D4h]
  __int64 v154; // [rsp+40h] [rbp-D0h]
  __int64 v155; // [rsp+48h] [rbp-C8h] BYREF
  __int64 v156; // [rsp+50h] [rbp-C0h] BYREF
  __m128i v157[2]; // [rsp+58h] [rbp-B8h] BYREF
  __int64 v158; // [rsp+78h] [rbp-98h]
  _QWORD *v159; // [rsp+88h] [rbp-88h] BYREF
  __int64 v160; // [rsp+90h] [rbp-80h]
  _QWORD ptr[15]; // [rsp+98h] [rbp-78h] BYREF

  if ( !a2 )
    return 1;
  v3 = 1;
  v4 = a2 & 0xFFFFFFFFFFFFFFFBLL;
  ptr[0] = a2 & 0xFFFFFFFFFFFFFFFBLL;
  v160 = 0x800000001LL;
  v5 = ptr;
  v159 = ptr;
  while ( 2 )
  {
    v6 = *((_DWORD *)a1 + 4);
    if ( (v4 & 4) != 0 )
    {
      LODWORD(v160) = --v3;
      *((_DWORD *)a1 + 4) = v6 - 1;
LABEL_4:
      if ( !v3 )
        goto LABEL_45;
      goto LABEL_5;
    }
    v7 = (_WORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
    v8 = v157;
    if ( !v6 )
      goto LABEL_39;
    v9 = *a1;
    v10 = 0;
    v11 = *(_DWORD *)(*a1 + 16);
    v12 = *(_QWORD *)*a1;
    if ( !v11 )
      goto LABEL_99;
    v13 = v11 - 1;
    v14 = 1;
    v15 = nullptr;
    v16 = ((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4);
    LODWORD(v17) = v13 & v16;
    v18 = (_QWORD *)(v12 + 16LL * ((unsigned int)v13 & v16));
    v19 = *v18;
    if ( v7 != (_WORD *)*v18 )
    {
      while ( v19 != -4096 )
      {
        if ( v19 == -8192 && !v15 )
          v15 = v18;
        v17 = (unsigned int)v13 & ((_DWORD)v17 + v14);
        v18 = (_QWORD *)(v12 + 16 * v17);
        v19 = *v18;
        if ( v7 == (_WORD *)*v18 )
          goto LABEL_10;
        ++v14;
      }
      v71 = *(_DWORD *)(v9 + 8);
      if ( !v15 )
        v15 = v18;
      v10 = 2 * v11;
      v72 = v71 + 1;
      if ( 4 * (v71 + 1) < 3 * v11 )
      {
        if ( v11 >> 3 < v11 - *(_DWORD *)(v9 + 12) - v72 )
        {
LABEL_68:
          *(_DWORD *)(v9 + 8) = v72;
          if ( *v15 != -4096 )
            --*(_DWORD *)(v9 + 12);
          *v15 = v7;
          v21 = v15 + 1;
          v15[1] = 0;
LABEL_71:
          v8 = v157;
          v73 = *(_DWORD *)(a1[1] + 40LL * *((unsigned int *)a1 + 4) - 40);
          v136 = a1[1] + 40LL * *((unsigned int *)a1 + 4) - 40;
          v157[0].m128i_i32[0] = 77;
          if ( sub_7204C0(v157[0].m128i_i32, v73) && (v74 = *(_QWORD *)(v136 + 8)) != 0 )
          {
            *v21 = v74 & 0xFFFFFFFFFFFFFFF9LL;
          }
          else
          {
            v76 = *(_DWORD *)(a1[1] + 40LL * *((unsigned int *)a1 + 4) - 40);
            v137 = a1[1] + 40LL * *((unsigned int *)a1 + 4) - 40;
            v157[0].m128i_i32[0] = 176;
            if ( sub_7204C0(v157[0].m128i_i32, v76) && (v77 = *(_QWORD *)(v137 + 8)) != 0 )
            {
              *v21 = v77 & 0xFFFFFFFFFFFFFFF9LL | 2;
            }
            else
            {
              v79 = operator new(0x28u);
              v80 = a1[1] + 40LL * *((unsigned int *)a1 + 4);
              *(__m128i *)v79 = _mm_loadu_si128((const __m128i *)(v80 - 40));
              *(__m128i *)(v79 + 16) = _mm_loadu_si128((const __m128i *)(v80 - 24));
              *(_QWORD *)(v79 + 32) = *(_QWORD *)(v80 - 8);
              *v21 = v79 & 0xFFFFFFFFFFFFFFF9LL | 4;
            }
          }
          goto LABEL_39;
        }
        v145 = *(_DWORD *)(*a1 + 16);
        v141 = *(__int64 **)*a1;
        v106 = ((((v13 | (v13 >> 1)) >> 2) | v13 | (v13 >> 1)) >> 4) | ((v13 | (v13 >> 1)) >> 2) | v13 | (v13 >> 1);
        v107 = ((((v106 >> 8) | v106) >> 16) | (v106 >> 8) | v106) + 1;
        if ( (unsigned int)v107 < 0x40 )
          LODWORD(v107) = 64;
        *(_DWORD *)(v9 + 16) = v107;
        v108 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v107, 8);
        v109 = *(unsigned int *)(v9 + 16);
        *(_QWORD *)v9 = v108;
        v110 = v109;
        v111 = 16 * v109;
        v112 = &v108[(unsigned __int64)v111 / 8];
        if ( v141 )
        {
          *(_QWORD *)(v9 + 8) = 0;
          if ( v111 )
          {
            if ( (v111 & 0x10) == 0 || (*v108 = -4096, v108 += 2, v108 != v112) )
            {
              do
              {
                *v108 = -4096;
                v108 += 4;
                *(v108 - 2) = -4096;
              }
              while ( v108 != v112 );
            }
          }
          v113 = v141;
          do
          {
            v114 = *v113;
            if ( *v113 != -8192 && v114 != -4096 )
            {
              v115 = *(_DWORD *)(v9 + 16);
              if ( !v115 )
              {
                *(_QWORD *)&dword_0 = *v113;
                BUG();
              }
              v116 = v115 - 1;
              v117 = v116 & (((unsigned int)v114 >> 9) ^ ((unsigned int)v114 >> 4));
              v118 = (_QWORD *)(*(_QWORD *)v9 + 16LL * v117);
              v119 = *v118;
              if ( v114 != *v118 )
              {
                v152 = 1;
                v128 = nullptr;
                while ( v119 != -4096 )
                {
                  if ( v119 == -8192 && !v128 )
                    v128 = v118;
                  v117 = v116 & (v152 + v117);
                  v118 = (_QWORD *)(*(_QWORD *)v9 + 16LL * v117);
                  v119 = *v118;
                  if ( v114 == *v118 )
                    goto LABEL_138;
                  ++v152;
                }
                if ( v128 )
                  v118 = v128;
              }
LABEL_138:
              *v118 = v114;
              v118[1] = v113[1];
              ++*(_DWORD *)(v9 + 8);
            }
            v113 += 2;
          }
          while ( &v141[2 * v145] != v113 );
          operator delete();
        }
        else
        {
          *(_QWORD *)(v9 + 8) = 0;
          if ( v108 == v112 )
          {
            v72 = 1;
LABEL_142:
            if ( v110 )
            {
              v120 = v110 - 1;
              v121 = 1;
              v104 = nullptr;
              LODWORD(v122) = v120 & v16;
              v15 = &v112[2 * (v120 & v16)];
              v123 = (_WORD *)*v15;
              if ( v7 == (_WORD *)*v15 )
                goto LABEL_68;
              while ( v123 != (_WORD *)-4096LL )
              {
                if ( !v104 && v123 == (_WORD *)-8192LL )
                  v104 = v15;
                v122 = v120 & (unsigned int)(v122 + v121);
                v15 = &v112[2 * v122];
                v123 = (_WORD *)*v15;
                if ( v7 == (_WORD *)*v15 )
                  goto LABEL_68;
                ++v121;
              }
              goto LABEL_119;
            }
            goto LABEL_208;
          }
          if ( (v111 & 0x10) == 0 || (*v108 = -4096, v108 += 2, v108 != v112) )
          {
            do
            {
              *v108 = -4096;
              v108 += 4;
              *(v108 - 2) = -4096;
            }
            while ( v108 != v112 );
          }
        }
        v112 = *(_QWORD **)v9;
        v110 = *(_DWORD *)(v9 + 16);
        v72 = *(_DWORD *)(v9 + 8) + 1;
        goto LABEL_142;
      }
LABEL_99:
      v144 = *(_DWORD *)(*a1 + 16);
      v138 = *(__int64 **)*a1;
      v85 = (((((((((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
                | (unsigned int)(v10 - 1)
                | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 4)
              | (((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
              | (unsigned int)(v10 - 1)
              | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 8)
            | (((((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
              | (unsigned int)(v10 - 1)
              | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 4)
            | (((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
            | (unsigned int)(v10 - 1)
            | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 16)
          | (((((((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
              | (unsigned int)(v10 - 1)
              | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 4)
            | (((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
            | (unsigned int)(v10 - 1)
            | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 8)
          | (((((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
            | (unsigned int)(v10 - 1)
            | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 4)
          | (((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
          | (unsigned int)(v10 - 1)
          | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1);
      v86 = v85 + 1;
      if ( v86 < 0x40 )
        v86 = 64;
      *(_DWORD *)(v9 + 16) = v86;
      v87 = (_QWORD *)sub_25CC9C0(16LL * v86, 8);
      v88 = *(unsigned int *)(v9 + 16);
      *(_QWORD *)v9 = v87;
      v89 = v88;
      v90 = 16 * v88;
      v91 = &v87[(unsigned __int64)v90 / 8];
      if ( v138 )
      {
        *(_QWORD *)(v9 + 8) = 0;
        v92 = &v138[2 * v144];
        if ( v90 )
        {
          if ( (v90 & 0x10) == 0 || (*v87 = -4096, v87 += 2, v87 != v91) )
          {
            do
            {
              *v87 = -4096;
              v87 += 4;
              *(v87 - 2) = -4096;
            }
            while ( v87 != v91 );
          }
        }
        for ( i = v138; v92 != i; i += 2 )
        {
          v94 = *i;
          if ( *i != -4096 && v94 != -8192 )
          {
            v95 = *(_DWORD *)(v9 + 16);
            if ( !v95 )
            {
              *(_QWORD *)&dword_0 = *i;
              BUG();
            }
            v96 = v95 - 1;
            v97 = v96 & (((unsigned int)v94 >> 9) ^ ((unsigned int)v94 >> 4));
            v98 = (_QWORD *)(*(_QWORD *)v9 + 16LL * v97);
            v99 = *v98;
            if ( *v98 != v94 )
            {
              v146 = 1;
              v129 = nullptr;
              while ( v99 != -4096 )
              {
                if ( v99 == -8192 && !v129 )
                  v129 = v98;
                v97 = v96 & (v146 + v97);
                v98 = (_QWORD *)(*(_QWORD *)v9 + 16LL * v97);
                v99 = *v98;
                if ( v94 == *v98 )
                  goto LABEL_111;
                ++v146;
              }
              if ( v129 )
                v98 = v129;
            }
LABEL_111:
            *v98 = v94;
            v98[1] = i[1];
            ++*(_DWORD *)(v9 + 8);
          }
        }
        operator delete();
      }
      else
      {
        *(_QWORD *)(v9 + 8) = 0;
        if ( v87 == v91 )
        {
          v72 = 1;
LABEL_115:
          if ( v89 )
          {
            v100 = v89 - 1;
            LODWORD(v101) = v100 & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
            v15 = &v91[2 * (unsigned int)v101];
            v102 = *v15;
            if ( v7 == (_WORD *)*v15 )
              goto LABEL_68;
            v103 = 1;
            v104 = nullptr;
            while ( v102 != -4096 )
            {
              if ( v102 == -8192 && !v104 )
                v104 = v15;
              v101 = v100 & (unsigned int)(v101 + v103);
              v15 = &v91[2 * v101];
              v102 = *v15;
              if ( v7 == (_WORD *)*v15 )
                goto LABEL_68;
              ++v103;
            }
LABEL_119:
            if ( v104 )
              v15 = v104;
            goto LABEL_68;
          }
LABEL_208:
          *(_DWORD *)(v9 + 8) = v72;
          BUG();
        }
        if ( (v90 & 0x10) == 0 || (*v87 = -4096, v87 += 2, v87 != v91) )
        {
          do
          {
            *v87 = -4096;
            v87 += 4;
            *(v87 - 2) = -4096;
          }
          while ( v87 != v91 );
        }
      }
      v91 = *(_QWORD **)v9;
      v89 = *(_DWORD *)(v9 + 16);
      v72 = *(_DWORD *)(v9 + 8) + 1;
      goto LABEL_115;
    }
LABEL_10:
    v20 = v18[1];
    v21 = v18 + 1;
    if ( v20 <= 7 )
      goto LABEL_71;
    v132 = v18;
    v8 = v157;
    if ( (~(_BYTE)v20 & 6) != 0 )
    {
      v22 = operator new(0xB8u);
      v23 = v132;
      v24 = v22;
      v25 = (const __m128i *)(v132[1] & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v132[1] & 6) != 0 )
      {
        if ( (v132[1] & 6LL) != 2 || !v25 )
          goto LABEL_14;
        v75 = sub_720B10((_WORD *)(v132[1] & 0xFFFFFFFFFFFFFFF8LL));
        v157[0].m128i_i64[1] = (__int64)v25;
        v23 = v132;
        v157[0].m128i_i32[0] = v75;
      }
      else
      {
        if ( !v25 )
        {
LABEL_14:
          v157[0] = _mm_loadu_si128(v25);
          v157[1] = _mm_loadu_si128(v25 + 1);
          v158 = v25[2].m128i_i64[0];
          goto LABEL_15;
        }
        v83 = sub_720580(v132[1] & 0xFFFFFFFFFFFFFFF8LL);
        v157[0].m128i_i64[1] = (__int64)v25;
        v23 = v132;
        v157[0].m128i_i32[0] = v83;
      }
LABEL_15:
      v8 = v157;
      v133 = v23;
      sub_7DD830(v24, v157);
      v26 = v133;
      v27 = v133[1];
      if ( v27 )
      {
        if ( (v133[1] & 6LL) == 4 )
        {
          v81 = (void *)(v27 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v81 )
          {
            operator delete(v81, 0x28u);
            v26 = v133;
          }
        }
      }
      v20 = v24 | 6;
      v26[1] = v24 | 6;
    }
    v28 = *((unsigned int *)a1 + 4);
    v29 = a1[1];
    v30 = v20 & 0xFFFFFFFFFFFFFFF8LL;
    v31 = v30;
    v32 = (const __m128i *)(v29 + 40 * v28 - 40);
    if ( v32->m128i_i32[0] <= 73 || !v32->m128i_i64[1] )
      goto LABEL_56;
    if ( (*(_BYTE *)(v30 + 96) & 1) != 0 )
    {
      v151 = 1;
      v142 = v30 + 104;
      v134 = v30 + 184;
      goto LABEL_23;
    }
    v33 = *(unsigned int *)(v30 + 112);
    v142 = *(_QWORD *)(v30 + 104);
    v134 = v142 + 40 * v33;
    if ( !(_DWORD)v33 )
    {
LABEL_36:
      v47 = 5 * v28;
      v32 = (const __m128i *)(v29 + 8 * v47 - 40);
      if ( v32->m128i_i32[0] <= 73 || !v32->m128i_i64[1] )
      {
LABEL_56:
        v67 = *(unsigned int *)(v31 + 8);
        v68 = *(_QWORD *)v31;
        v69 = v67 + 1;
        if ( *(unsigned int *)(v31 + 12) < (unsigned __int64)(v67 + 1) )
        {
          v105 = v31 + 16;
          if ( (unsigned __int64)v32 < v68 || (unsigned __int64)v32 >= v68 + 40 * v67 )
          {
            v140 = v32;
            sub_25D6060(v31, v105, v69, 40);
            v68 = *(_QWORD *)v31;
            v67 = *(unsigned int *)(v31 + 8);
            v32 = v140;
          }
          else
          {
            v139 = &v32->m128i_i8[-v68];
            sub_25D6060(v31, v105, v69, 40);
            v68 = *(_QWORD *)v31;
            v67 = *(unsigned int *)(v31 + 8);
            v32 = (const __m128i *)&v139[*(_QWORD *)v31];
          }
        }
        v70 = (__m128i *)(v68 + 40 * v67);
        *v70 = _mm_loadu_si128(v32);
        v70[1] = _mm_loadu_si128(v32 + 1);
        v70[2].m128i_i64[0] = v32[2].m128i_i64[0];
        ++*(_DWORD *)(v31 + 8);
        goto LABEL_39;
      }
      v135 = v29 + 8 * v47 - 40;
      v143 = v31 + 96;
      v48 = sub_7DB920(v31 + 96, v135, &v156);
      v32 = (const __m128i *)v135;
      if ( v48 )
        goto LABEL_39;
      v63 = (__m128i *)v156;
      v157[0].m128i_i64[0] = v156;
      v64 = (*(_DWORD *)(v31 + 96) >> 1) + 1;
      if ( (*(_BYTE *)(v31 + 96) & 1) != 0 )
      {
        v66 = 6;
        v65 = 2;
      }
      else
      {
        v65 = *(_DWORD *)(v31 + 112);
        v66 = 3 * v65;
      }
      if ( 4 * v64 >= v66 )
      {
        v65 *= 2;
      }
      else if ( v65 >> 3 < v65 - (v64 + *(_DWORD *)(v31 + 100)) )
      {
LABEL_53:
        *(_DWORD *)(v31 + 96) = *(_DWORD *)(v31 + 96) & 1 | (2 * v64);
        if ( v63->m128i_i32[0] )
          --*(_DWORD *)(v31 + 100);
        *v63 = _mm_loadu_si128(v32);
        v63[1] = _mm_loadu_si128(v32 + 1);
        v63[2].m128i_i64[0] = v32[2].m128i_i64[0];
        goto LABEL_56;
      }
      sub_7DD180(v143, v65);
      sub_7DB920(v143, v135, v157);
      v63 = (__m128i *)v157[0].m128i_i64[0];
      v32 = (const __m128i *)v135;
      v64 = (*(_DWORD *)(v31 + 96) >> 1) + 1;
      goto LABEL_53;
    }
    v151 = v33 - 1;
LABEL_23:
    v157[0].m128i_i32[0] = 0;
    LODWORD(v156) = 73;
    v147 = v29 + 40 * v28 - 40;
    v34 = sub_7204C0((int *)&v156, v32->m128i_i32[0]);
    v35 = v147;
    v36 = *(_DWORD *)v147;
    if ( v34 )
    {
      v82 = *(_QWORD *)(v147 + 8);
      v150 = *(_DWORD *)v147;
      v156 = *(_QWORD *)(v147 + 16);
      v155 = v82;
      v37 = sub_7DB4D0(&v155, &v156);
      v35 = v147;
      v36 = v150;
    }
    else if ( v36 == 5 )
    {
      v84 = *(_QWORD *)(v147 + 8);
      v155 = *(_QWORD *)(v147 + 16);
      v156 = v84;
      v37 = sub_7DB530(&v156, &v155);
      v35 = v147;
      v36 = 5;
    }
    else
    {
      v37 = -1916529075;
      if ( v36 > 73 )
      {
        v38 = *(_QWORD *)(v147 + 8);
        v39 = 0x9DDFEA08EB382D69LL
            * (((0x9DDFEA08EB382D69LL * (HIDWORD(v38) ^ (8LL * (unsigned int)v38 - 0xAE502812AA7333LL))) >> 47)
             ^ (0x9DDFEA08EB382D69LL * (HIDWORD(v38) ^ (8LL * (unsigned int)v38 - 0xAE502812AA7333LL)))
             ^ HIDWORD(v38));
        v37 = -348639895 * (v39 ^ (HIDWORD(v39) >> 15));
      }
    }
    v153 = 1;
    v148 = v5;
    v40 = v3;
    v41 = v35;
    v149 = a1;
    v42 = v31;
    v43 = v7;
    for ( j = v37 & v151; ; j = v151 & v130 )
    {
      v45 = v142 + 40LL * j;
      v46 = *(_DWORD *)v45;
      if ( !v36 )
      {
        if ( !v46 )
          goto LABEL_82;
        goto LABEL_31;
      }
      if ( v36 == 1045 )
      {
        if ( v46 == 1045 )
          goto LABEL_82;
        goto LABEL_31;
      }
      if ( v36 != v46 )
        goto LABEL_31;
      if ( v36 == 6 )
      {
        if ( *(_QWORD *)(v41 + 8) == *(_QWORD *)(v45 + 8) )
          goto LABEL_82;
        goto LABEL_31;
      }
      LODWORD(v156) = 73;
      v154 = v142 + 40LL * j;
      v124 = sub_7204C0((int *)&v156, *(_DWORD *)v41);
      v45 = v154;
      if ( v124 )
      {
        if ( *(_QWORD *)(v41 + 8) == *(_QWORD *)(v154 + 8) && *(_QWORD *)(v41 + 16) == *(_QWORD *)(v154 + 16) )
          goto LABEL_82;
      }
      else
      {
        if ( *(_DWORD *)v41 != 5 )
        {
          v125 = *(_DWORD *)v154;
          if ( *(int *)v41 <= 73 )
          {
            if ( v125 <= 73 )
              goto LABEL_82;
            v126 = 0;
LABEL_168:
            v127 = *(_QWORD *)(v154 + 8);
          }
          else
          {
            v126 = *(_QWORD *)(v41 + 8);
            v127 = 0;
            if ( v125 > 73 )
              goto LABEL_168;
          }
          if ( v127 == v126 )
            goto LABEL_82;
          goto LABEL_31;
        }
        if ( *(_QWORD *)(v41 + 16) == *(_QWORD *)(v154 + 16) && *(_QWORD *)(v41 + 8) == *(_QWORD *)(v154 + 8) )
        {
LABEL_82:
          v7 = v43;
          v3 = v40;
          v31 = v42;
          v5 = v148;
          a1 = v149;
          goto LABEL_34;
        }
      }
LABEL_31:
      if ( sub_7DAF90((_DWORD *)v45) )
        break;
      v36 = *(_DWORD *)v41;
      v130 = v153 + j;
      ++v153;
    }
    v7 = v43;
    v31 = v42;
    v3 = v40;
    a1 = v149;
    v5 = v148;
    v45 = v31 + 184;
    if ( (*(_BYTE *)(v31 + 96) & 1) == 0 )
      v45 = *(_QWORD *)(v31 + 104) + 40LL * *(unsigned int *)(v31 + 112);
LABEL_34:
    if ( v45 == v134 )
    {
      v28 = *((unsigned int *)a1 + 4);
      v29 = a1[1];
      goto LABEL_36;
    }
LABEL_39:
    v49 = sub_720B10(v7);
    v50 = *((unsigned int *)a1 + 5);
    v157[0].m128i_i64[1] = (__int64)v7;
    v157[0].m128i_i32[0] = v49;
    v51 = *((unsigned int *)a1 + 4);
    v52 = a1[1];
    v53 = v51 + 1;
    if ( v50 < v51 + 1 )
    {
      if ( (unsigned __int64)v157 < v52 || (unsigned __int64)v157 >= v52 + 40 * v51 )
      {
        sub_25D6060(a1 + 1, a1 + 3, v53, 40);
        v52 = a1[1];
        v51 = *((unsigned int *)a1 + 4);
      }
      else
      {
        v78 = &v157[0].m128i_i8[-v52];
        sub_25D6060(a1 + 1, a1 + 3, v53, 40);
        v52 = a1[1];
        v51 = *((unsigned int *)a1 + 4);
        v8 = (__m128i *)&v78[v52];
      }
    }
    v54 = (__m128i *)(v52 + 40 * v51);
    *v54 = _mm_loadu_si128(v8);
    v54[1] = _mm_loadu_si128(v8 + 1);
    v54[2].m128i_i64[0] = v8[2].m128i_i64[0];
    ++*((_DWORD *)a1 + 4);
    v5[v3 - 1] |= 4uLL;
    v55 = (unsigned int)v160;
    result = sub_7E2410(a1, (unsigned __int64)v7, (__int64)&v159);
    v5 = v159;
    if ( (_BYTE)result )
    {
      v57 = 8 * v55;
      v58 = &v159[(unsigned __int64)v57 / 8];
      v3 = v160;
      v59 = 8LL * (unsigned int)v160;
      if ( v59 == v57 )
        goto LABEL_4;
      v60 = &v159[(unsigned __int64)v59 / 8 - 1];
      if ( v58 >= v60 )
        goto LABEL_4;
      do
      {
        v61 = *v58;
        v62 = *v60;
        ++v58;
        --v60;
        *(v58 - 1) = v62;
        v60[1] = v61;
      }
      while ( v58 < v60 );
      v3 = v160;
      v5 = v159;
      if ( !(_DWORD)v160 )
      {
LABEL_45:
        result = 1;
        break;
      }
LABEL_5:
      v4 = v5[v3 - 1];
      continue;
    }
    break;
  }
  if ( v5 != ptr )
  {
    v131 = result;
    free(v5);
    return v131;
  }
  return result;
}

