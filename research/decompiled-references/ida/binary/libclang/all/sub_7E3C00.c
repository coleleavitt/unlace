__int64 __fastcall sub_7E3C00(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 result; // rax
  unsigned int v8; // ebp
  _QWORD *v9; // r15
  int v10; // eax
  __m128i *v11; // r12
  __int64 v12; // r12
  int v13; // edx
  unsigned int v14; // r9d
  __int64 *v15; // rbx
  unsigned __int64 v16; // rsi
  int v17; // r10d
  __int64 *v18; // rax
  unsigned int v19; // r13d
  __int64 v20; // rdi
  __int64 *v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // r8
  unsigned __int64 *v24; // r13
  __int64 v25; // rax
  __int64 *v26; // rdx
  __int64 v27; // r13
  const __m128i *v28; // r12
  _QWORD *v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r13
  const __m128i *v35; // r9
  unsigned __int64 v36; // rbx
  __int64 v37; // rcx
  bool v38; // al
  __int64 v39; // r9
  int v40; // ecx
  int v41; // edx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rbp
  unsigned __int64 v45; // r14
  __int64 v46; // r13
  unsigned int j; // ebx
  __int64 v48; // r10
  int v49; // eax
  __int64 v50; // rax
  char v51; // al
  __m128i *v52; // rdx
  int v53; // eax
  unsigned int v54; // esi
  unsigned int v55; // ecx
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __int64 v58; // rdi
  __m128i *v59; // rax
  __int32 v60; // eax
  unsigned __int64 v61; // rcx
  __int64 v62; // rax
  unsigned __int64 v63; // rdx
  __int64 v64; // rsi
  __m128i *v65; // rax
  __int64 v66; // r12
  __int64 v67; // r12
  __int64 *v68; // rax
  __int64 v69; // rdx
  __int64 *v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rsi
  int v73; // edi
  int v74; // ecx
  int v75; // esi
  __int64 v76; // rax
  __int8 *v77; // r12
  __int32 v78; // eax
  int v79; // esi
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  void *v83; // rdi
  __int64 v84; // rax
  int v85; // eax
  __int32 v86; // eax
  __int64 v87; // rax
  int v88; // eax
  unsigned __int64 v89; // rax
  unsigned int v90; // eax
  _QWORD *v91; // rax
  __int64 v92; // rcx
  int v93; // esi
  __int64 v94; // rcx
  _QWORD *v95; // rdx
  __int64 *v96; // r11
  __int64 *i; // rax
  __int64 v98; // r13
  int v99; // edi
  int v100; // edi
  unsigned int v101; // ecx
  _QWORD *v102; // rdx
  __int64 v103; // r8
  int v104; // esi
  unsigned int v105; // edi
  __int64 v106; // r8
  __int64 *v107; // r9
  int v108; // r10d
  unsigned __int64 v109; // rsi
  __int8 *v110; // rbx
  unsigned __int64 v111; // rax
  __int64 v112; // rax
  _QWORD *v113; // rax
  __int64 v114; // rcx
  int v115; // esi
  __int64 v116; // rcx
  _QWORD *v117; // rdx
  __int64 *v118; // rax
  __int64 v119; // r10
  int v120; // edi
  int v121; // edi
  unsigned int v122; // ecx
  _QWORD *v123; // rdx
  __int64 v124; // r8
  int v125; // esi
  int v126; // r10d
  unsigned int v127; // r8d
  _WORD *v128; // rdi
  bool v129; // al
  int v130; // esi
  __int64 v131; // rax
  __int64 v132; // rcx
  _QWORD *v133; // r10
  _QWORD *v134; // rsi
  unsigned int v135; // ebx
  _WORD *v136; // [rsp+0h] [rbp-110h]
  unsigned __int8 v137; // [rsp+0h] [rbp-110h]
  __int64 *v138; // [rsp+10h] [rbp-100h]
  __int64 *v139; // [rsp+10h] [rbp-100h]
  unsigned __int64 v140; // [rsp+10h] [rbp-100h]
  __int64 v141; // [rsp+10h] [rbp-100h]
  __int64 v142; // [rsp+10h] [rbp-100h]
  __int64 v143; // [rsp+10h] [rbp-100h]
  unsigned int v144; // [rsp+10h] [rbp-100h]
  unsigned int v145; // [rsp+10h] [rbp-100h]
  const __m128i *v146; // [rsp+10h] [rbp-100h]
  int v147; // [rsp+10h] [rbp-100h]
  __int64 v148; // [rsp+20h] [rbp-F0h]
  unsigned int v149; // [rsp+20h] [rbp-F0h]
  __int64 *v150; // [rsp+28h] [rbp-E8h]
  int v151; // [rsp+28h] [rbp-E8h]
  int v152; // [rsp+38h] [rbp-D8h]
  int v153; // [rsp+38h] [rbp-D8h]
  int v154; // [rsp+3Ch] [rbp-D4h]
  __int64 v155; // [rsp+40h] [rbp-D0h]
  __int64 v156; // [rsp+48h] [rbp-C8h] BYREF
  __int64 v157; // [rsp+50h] [rbp-C0h] BYREF
  __m128i v158[2]; // [rsp+58h] [rbp-B8h] BYREF
  __int64 v159; // [rsp+78h] [rbp-98h]
  _QWORD *v160; // [rsp+88h] [rbp-88h] BYREF
  __int64 v161; // [rsp+90h] [rbp-80h]
  _QWORD ptr[15]; // [rsp+98h] [rbp-78h] BYREF

  if ( !a2 )
    return 1;
  v4 = a2 & 0xFFFFFFFFFFFFFFFBLL;
  if ( a3 )
  {
    v5 = *(unsigned int *)(a3 + 8);
    if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v5 + 1) )
    {
      sub_25D6060(a3, a3 + 16, v5 + 1, 8);
      v5 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v5) = v4;
    result = 1;
    ++*(_DWORD *)(a3 + 8);
    return result;
  }
  v8 = 1;
  v160 = ptr;
  v9 = ptr;
  v161 = 0x800000001LL;
  ptr[0] = a2 & 0xFFFFFFFFFFFFFFFBLL;
  while ( 2 )
  {
    v10 = *((_DWORD *)a1 + 4);
    if ( (v4 & 4) != 0 )
    {
      LODWORD(v161) = --v8;
      *((_DWORD *)a1 + 4) = v10 - 1;
LABEL_9:
      if ( !v8 )
        goto LABEL_59;
      goto LABEL_10;
    }
    v11 = v158;
    v136 = (_WORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v10 )
      goto LABEL_53;
    v12 = *a1;
    v13 = 0;
    v14 = *(_DWORD *)(*a1 + 16);
    v15 = *(__int64 **)*a1;
    if ( !v14 )
      goto LABEL_100;
    v16 = v14 - 1;
    v17 = 1;
    v18 = nullptr;
    v19 = ((unsigned int)v136 >> 9) ^ ((unsigned int)v136 >> 4);
    LODWORD(v20) = v16 & v19;
    v21 = &v15[2 * ((unsigned int)v16 & v19)];
    v22 = *v21;
    if ( v136 != (_WORD *)*v21 )
    {
      while ( v22 != -4096 )
      {
        if ( v22 == -8192 && !v18 )
          v18 = v21;
        v20 = (unsigned int)v16 & ((_DWORD)v20 + v17);
        v21 = &v15[2 * v20];
        v22 = *v21;
        if ( v136 == (_WORD *)*v21 )
          goto LABEL_15;
        ++v17;
      }
      v73 = *(_DWORD *)(v12 + 8);
      if ( !v18 )
        v18 = v21;
      v13 = 2 * v14;
      v74 = v73 + 1;
      if ( 4 * (v73 + 1) < 3 * v14 )
      {
        if ( v14 >> 3 < v14 - *(_DWORD *)(v12 + 12) - v74 )
        {
LABEL_72:
          *(_DWORD *)(v12 + 8) = v74;
          if ( *v18 != -4096 )
            --*(_DWORD *)(v12 + 12);
          v18[1] = 0;
          v24 = (unsigned __int64 *)(v18 + 1);
          *v18 = (__int64)v136;
LABEL_75:
          v11 = v158;
          v75 = *(_DWORD *)(a1[1] + 40LL * *((unsigned int *)a1 + 4) - 40);
          v142 = a1[1] + 40LL * *((unsigned int *)a1 + 4) - 40;
          v158[0].m128i_i32[0] = 77;
          if ( sub_7204C0(v158[0].m128i_i32, v75) && (v76 = *(_QWORD *)(v142 + 8)) != 0 )
          {
            *v24 = v76 & 0xFFFFFFFFFFFFFFF9LL;
          }
          else
          {
            v79 = *(_DWORD *)(a1[1] + 40LL * *((unsigned int *)a1 + 4) - 40);
            v143 = a1[1] + 40LL * *((unsigned int *)a1 + 4) - 40;
            v158[0].m128i_i32[0] = 176;
            if ( sub_7204C0(v158[0].m128i_i32, v79) && (v80 = *(_QWORD *)(v143 + 8)) != 0 )
            {
              *v24 = v80 & 0xFFFFFFFFFFFFFFF9LL | 2;
            }
            else
            {
              v81 = operator new(0x28u);
              v82 = a1[1] + 40LL * *((unsigned int *)a1 + 4);
              *(__m128i *)v81 = _mm_loadu_si128((const __m128i *)(v82 - 40));
              *(__m128i *)(v81 + 16) = _mm_loadu_si128((const __m128i *)(v82 - 24));
              *(_QWORD *)(v81 + 32) = *(_QWORD *)(v82 - 8);
              *v24 = v81 & 0xFFFFFFFFFFFFFFF9LL | 4;
            }
          }
          goto LABEL_53;
        }
        v145 = *(_DWORD *)(*a1 + 16);
        v111 = ((((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 4) | ((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1);
        v112 = ((((v111 >> 8) | v111) >> 16) | (v111 >> 8) | v111) + 1;
        if ( (unsigned int)v112 < 0x40 )
          LODWORD(v112) = 64;
        *(_DWORD *)(v12 + 16) = v112;
        v113 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v112, 8);
        v114 = *(unsigned int *)(v12 + 16);
        *(_QWORD *)v12 = v113;
        v115 = v114;
        v116 = 16 * v114;
        v117 = &v113[(unsigned __int64)v116 / 8];
        if ( v15 )
        {
          *(_QWORD *)(v12 + 8) = 0;
          if ( v116 )
          {
            if ( (v116 & 0x10) == 0 || (*v113 = -4096, v113 += 2, v113 != v117) )
            {
              do
              {
                *v113 = -4096;
                v113 += 4;
                *(v113 - 2) = -4096;
              }
              while ( v113 != v117 );
            }
          }
          v118 = v15;
          do
          {
            v119 = *v118;
            if ( *v118 != -8192 && v119 != -4096 )
            {
              v120 = *(_DWORD *)(v12 + 16);
              if ( !v120 )
              {
                *(_QWORD *)&dword_0 = *v118;
                BUG();
              }
              v121 = v120 - 1;
              v122 = v121 & (((unsigned int)v119 >> 9) ^ ((unsigned int)v119 >> 4));
              v123 = (_QWORD *)(*(_QWORD *)v12 + 16LL * v122);
              v124 = *v123;
              if ( v119 != *v123 )
              {
                v153 = 1;
                v134 = nullptr;
                while ( v124 != -4096 )
                {
                  if ( v124 == -8192 && !v134 )
                    v134 = v123;
                  v122 = v121 & (v153 + v122);
                  v123 = (_QWORD *)(*(_QWORD *)v12 + 16LL * v122);
                  v124 = *v123;
                  if ( v119 == *v123 )
                    goto LABEL_147;
                  ++v153;
                }
                if ( v134 )
                  v123 = v134;
              }
LABEL_147:
              *v123 = v119;
              v123[1] = v118[1];
              ++*(_DWORD *)(v12 + 8);
            }
            v118 += 2;
          }
          while ( &v15[2 * v145] != v118 );
          operator delete();
        }
        else
        {
          *(_QWORD *)(v12 + 8) = 0;
          if ( v113 == v117 )
          {
            v74 = 1;
LABEL_151:
            if ( v115 )
            {
              v125 = v115 - 1;
              v107 = nullptr;
              v126 = 1;
              v127 = v125 & v19;
              v18 = &v117[2 * (v125 & v19)];
              v128 = (_WORD *)*v18;
              if ( v136 == (_WORD *)*v18 )
                goto LABEL_72;
              while ( v128 != (_WORD *)-4096LL )
              {
                if ( !v107 && v128 == (_WORD *)-8192LL )
                  v107 = v18;
                v127 = v125 & (v126 + v127);
                v18 = &v117[2 * v127];
                v128 = (_WORD *)*v18;
                if ( v136 == (_WORD *)*v18 )
                  goto LABEL_72;
                ++v126;
              }
              goto LABEL_120;
            }
            goto LABEL_209;
          }
          if ( (v116 & 0x10) == 0 || (*v113 = -4096, v113 += 2, v113 != v117) )
          {
            do
            {
              *v113 = -4096;
              v113 += 4;
              *(v113 - 2) = -4096;
            }
            while ( v113 != v117 );
          }
        }
        v117 = *(_QWORD **)v12;
        v115 = *(_DWORD *)(v12 + 16);
        v74 = *(_DWORD *)(v12 + 8) + 1;
        goto LABEL_151;
      }
LABEL_100:
      v144 = *(_DWORD *)(*a1 + 16);
      v89 = (((((((((unsigned int)(v13 - 1) | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 2)
                | (unsigned int)(v13 - 1)
                | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 4)
              | (((unsigned int)(v13 - 1) | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 2)
              | (unsigned int)(v13 - 1)
              | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 8)
            | (((((unsigned int)(v13 - 1) | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 2)
              | (unsigned int)(v13 - 1)
              | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 4)
            | (((unsigned int)(v13 - 1) | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 2)
            | (unsigned int)(v13 - 1)
            | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 16)
          | (((((((unsigned int)(v13 - 1) | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 2)
              | (unsigned int)(v13 - 1)
              | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 4)
            | (((unsigned int)(v13 - 1) | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 2)
            | (unsigned int)(v13 - 1)
            | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 8)
          | (((((unsigned int)(v13 - 1) | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 2)
            | (unsigned int)(v13 - 1)
            | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 4)
          | (((unsigned int)(v13 - 1) | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 2)
          | (unsigned int)(v13 - 1)
          | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1);
      v90 = v89 + 1;
      if ( v90 < 0x40 )
        v90 = 64;
      *(_DWORD *)(v12 + 16) = v90;
      v91 = (_QWORD *)sub_25CC9C0(16LL * v90, 8);
      v92 = *(unsigned int *)(v12 + 16);
      *(_QWORD *)v12 = v91;
      v93 = v92;
      v94 = 16 * v92;
      v95 = &v91[(unsigned __int64)v94 / 8];
      if ( v15 )
      {
        *(_QWORD *)(v12 + 8) = 0;
        v96 = &v15[2 * v144];
        if ( v94 )
        {
          if ( (v94 & 0x10) == 0 || (*v91 = -4096, v91 += 2, v91 != v95) )
          {
            do
            {
              *v91 = -4096;
              v91 += 4;
              *(v91 - 2) = -4096;
            }
            while ( v91 != v95 );
          }
        }
        for ( i = v15; v96 != i; i += 2 )
        {
          v98 = *i;
          if ( *i != -4096 && v98 != -8192 )
          {
            v99 = *(_DWORD *)(v12 + 16);
            if ( !v99 )
            {
              *(_QWORD *)&dword_0 = *i;
              BUG();
            }
            v100 = v99 - 1;
            v101 = v100 & (((unsigned int)v98 >> 9) ^ ((unsigned int)v98 >> 4));
            v102 = (_QWORD *)(*(_QWORD *)v12 + 16LL * v101);
            v103 = *v102;
            if ( v98 != *v102 )
            {
              v147 = 1;
              v133 = nullptr;
              while ( v103 != -4096 )
              {
                if ( v103 == -8192 && !v133 )
                  v133 = v102;
                v101 = v100 & (v147 + v101);
                v102 = (_QWORD *)(*(_QWORD *)v12 + 16LL * v101);
                v103 = *v102;
                if ( v98 == *v102 )
                  goto LABEL_112;
                ++v147;
              }
              if ( v133 )
                v102 = v133;
            }
LABEL_112:
            *v102 = v98;
            v102[1] = i[1];
            ++*(_DWORD *)(v12 + 8);
          }
        }
        operator delete();
      }
      else
      {
        *(_QWORD *)(v12 + 8) = 0;
        if ( v91 == v95 )
        {
          v74 = 1;
LABEL_116:
          if ( v93 )
          {
            v104 = v93 - 1;
            v105 = v104 & (((unsigned int)v136 >> 9) ^ ((unsigned int)v136 >> 4));
            v18 = &v95[2 * v105];
            v106 = *v18;
            if ( v136 == (_WORD *)*v18 )
              goto LABEL_72;
            v107 = nullptr;
            v108 = 1;
            while ( v106 != -4096 )
            {
              if ( v106 == -8192 && !v107 )
                v107 = v18;
              v105 = v104 & (v108 + v105);
              v18 = &v95[2 * v105];
              v106 = *v18;
              if ( v136 == (_WORD *)*v18 )
                goto LABEL_72;
              ++v108;
            }
LABEL_120:
            if ( v107 )
              v18 = v107;
            goto LABEL_72;
          }
LABEL_209:
          *(_DWORD *)(v12 + 8) = v74;
          BUG();
        }
        if ( (v94 & 0x10) == 0 || (*v91 = -4096, v91 += 2, v91 != v95) )
        {
          do
          {
            *v91 = -4096;
            v91 += 4;
            *(v91 - 2) = -4096;
          }
          while ( v91 != v95 );
        }
      }
      v95 = *(_QWORD **)v12;
      v93 = *(_DWORD *)(v12 + 16);
      v74 = *(_DWORD *)(v12 + 8) + 1;
      goto LABEL_116;
    }
LABEL_15:
    v23 = v21[1];
    v24 = (unsigned __int64 *)(v21 + 1);
    if ( v23 <= 7 )
      goto LABEL_75;
    v138 = v21;
    v11 = v158;
    if ( (~(_BYTE)v23 & 6) != 0 )
    {
      v25 = operator new(0xB8u);
      v26 = v138;
      v27 = v25;
      v28 = (const __m128i *)(v138[1] & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v138[1] & 6) != 0 )
      {
        if ( (v138[1] & 6) != 2 || !v28 )
          goto LABEL_19;
        v78 = sub_720B10((_WORD *)(v138[1] & 0xFFFFFFFFFFFFFFF8LL));
        v158[0].m128i_i64[1] = (__int64)v28;
        v26 = v138;
        v158[0].m128i_i32[0] = v78;
      }
      else
      {
        if ( !v28 )
        {
LABEL_19:
          v158[0] = _mm_loadu_si128(v28);
          v158[1] = _mm_loadu_si128(v28 + 1);
          v159 = v28[2].m128i_i64[0];
          goto LABEL_20;
        }
        v86 = sub_720580(v138[1] & 0xFFFFFFFFFFFFFFF8LL);
        v158[0].m128i_i64[1] = (__int64)v28;
        v26 = v138;
        v158[0].m128i_i32[0] = v86;
      }
LABEL_20:
      v11 = v158;
      v139 = v26;
      sub_7DD830(v27, v158);
      v29 = v139;
      v30 = v139[1];
      if ( v30 )
      {
        if ( (v139[1] & 6LL) == 4 )
        {
          v83 = (void *)(v30 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v83 )
          {
            operator delete(v83, 0x28u);
            v29 = v139;
          }
        }
      }
      v23 = v27 | 6;
      v29[1] = v27 | 6;
    }
    v31 = *((unsigned int *)a1 + 4);
    v32 = a1[1];
    v33 = v23 & 0xFFFFFFFFFFFFFFF8LL;
    v34 = v33;
    v35 = (const __m128i *)(v32 + 40 * v31 - 40);
    if ( v35->m128i_i32[0] <= 73 || !v35->m128i_i64[1] )
      goto LABEL_51;
    if ( (*(_BYTE *)(v33 + 96) & 1) != 0 )
    {
      v152 = 1;
      v36 = v33 + 104;
      v140 = v33 + 184;
      goto LABEL_28;
    }
    v36 = *(_QWORD *)(v33 + 104);
    v37 = *(unsigned int *)(v33 + 112);
    v140 = v36 + 40 * v37;
    if ( !(_DWORD)v37 )
    {
LABEL_41:
      v50 = 5 * v31;
      v35 = (const __m128i *)(v32 + 8 * v50 - 40);
      if ( v35->m128i_i32[0] <= 73 || !v35->m128i_i64[1] )
      {
LABEL_51:
        v56 = *(unsigned int *)(v34 + 8);
        v57 = *(_QWORD *)v34;
        v58 = v56 + 1;
        if ( *(unsigned int *)(v34 + 12) < (unsigned __int64)(v56 + 1) )
        {
          v109 = v34 + 16;
          if ( (unsigned __int64)v35 < v57 || (unsigned __int64)v35 >= v57 + 40 * v56 )
          {
            v146 = v35;
            sub_25D6060(v34, v109, v58, 40);
            v57 = *(_QWORD *)v34;
            v56 = *(unsigned int *)(v34 + 8);
            v35 = v146;
          }
          else
          {
            v110 = &v35->m128i_i8[-v57];
            sub_25D6060(v34, v109, v58, 40);
            v57 = *(_QWORD *)v34;
            v56 = *(unsigned int *)(v34 + 8);
            v35 = (const __m128i *)&v110[*(_QWORD *)v34];
          }
        }
        v59 = (__m128i *)(v57 + 40 * v56);
        *v59 = _mm_loadu_si128(v35);
        v59[1] = _mm_loadu_si128(v35 + 1);
        v59[2].m128i_i64[0] = v35[2].m128i_i64[0];
        ++*(_DWORD *)(v34 + 8);
        goto LABEL_53;
      }
      v141 = v32 + 8 * v50 - 40;
      v51 = sub_7DB920(v34 + 96, v141, &v157);
      v35 = (const __m128i *)v141;
      if ( v51 )
        goto LABEL_53;
      v52 = (__m128i *)v157;
      v158[0].m128i_i64[0] = v157;
      v53 = (*(_DWORD *)(v34 + 96) >> 1) + 1;
      if ( (*(_BYTE *)(v34 + 96) & 1) != 0 )
      {
        v55 = 6;
        v54 = 2;
      }
      else
      {
        v54 = *(_DWORD *)(v34 + 112);
        v55 = 3 * v54;
      }
      if ( 4 * v53 >= v55 )
      {
        v54 *= 2;
      }
      else if ( v54 >> 3 < v54 - (v53 + *(_DWORD *)(v34 + 100)) )
      {
LABEL_48:
        *(_DWORD *)(v34 + 96) = *(_DWORD *)(v34 + 96) & 1 | (2 * v53);
        if ( v52->m128i_i32[0] )
          --*(_DWORD *)(v34 + 100);
        *v52 = _mm_loadu_si128(v35);
        v52[1] = _mm_loadu_si128(v35 + 1);
        v52[2].m128i_i64[0] = v35[2].m128i_i64[0];
        goto LABEL_51;
      }
      sub_7DD180(v34 + 96, v54);
      sub_7DB920(v34 + 96, v141, v158);
      v52 = (__m128i *)v158[0].m128i_i64[0];
      v35 = (const __m128i *)v141;
      v53 = (*(_DWORD *)(v34 + 96) >> 1) + 1;
      goto LABEL_48;
    }
    v152 = v37 - 1;
LABEL_28:
    v158[0].m128i_i32[0] = 0;
    LODWORD(v157) = 73;
    v148 = v32 + 40 * v31 - 40;
    v38 = sub_7204C0((int *)&v157, v35->m128i_i32[0]);
    v39 = v148;
    v40 = *(_DWORD *)v148;
    if ( v38 )
    {
      v84 = *(_QWORD *)(v148 + 8);
      v151 = *(_DWORD *)v148;
      v157 = *(_QWORD *)(v148 + 16);
      v156 = v84;
      v85 = sub_7DB4D0(&v156, &v157);
      v39 = v148;
      v40 = v151;
      v41 = v85;
    }
    else if ( v40 == 5 )
    {
      v87 = *(_QWORD *)(v148 + 8);
      v156 = *(_QWORD *)(v148 + 16);
      v157 = v87;
      v88 = sub_7DB530(&v157, &v156);
      v39 = v148;
      v40 = 5;
      v41 = v88;
    }
    else
    {
      v41 = -1916529075;
      if ( v40 > 73 )
      {
        v42 = *(_QWORD *)(v148 + 8);
        v43 = 0x9DDFEA08EB382D69LL
            * (((0x9DDFEA08EB382D69LL * (HIDWORD(v42) ^ (8LL * (unsigned int)v42 - 0xAE502812AA7333LL))) >> 47)
             ^ (0x9DDFEA08EB382D69LL * (HIDWORD(v42) ^ (8LL * (unsigned int)v42 - 0xAE502812AA7333LL)))
             ^ HIDWORD(v42));
        v41 = -348639895 * (v43 ^ (v43 >> 47));
      }
    }
    v154 = 1;
    v149 = v8;
    v44 = v36;
    v150 = a1;
    v45 = v34;
    v46 = v39;
    for ( j = v152 & v41; ; j = v152 & v135 )
    {
      v48 = v44 + 40LL * j;
      v49 = *(_DWORD *)v48;
      if ( !v40 )
      {
        if ( !v49 )
          goto LABEL_90;
        goto LABEL_36;
      }
      if ( v40 == 1045 )
      {
        if ( v49 == 1045 )
          goto LABEL_90;
        goto LABEL_36;
      }
      if ( v40 != v49 )
        goto LABEL_36;
      if ( v40 == 6 )
      {
        if ( *(_QWORD *)(v46 + 8) == *(_QWORD *)(v48 + 8) )
          goto LABEL_90;
        goto LABEL_36;
      }
      LODWORD(v157) = 73;
      v155 = v44 + 40LL * j;
      v129 = sub_7204C0((int *)&v157, *(_DWORD *)v46);
      v48 = v155;
      if ( !v129 && *(_DWORD *)v46 != 5 )
      {
        v130 = *(_DWORD *)v155;
        if ( *(int *)v46 <= 73 )
        {
          if ( v130 <= 73 )
            goto LABEL_90;
          v131 = 0;
        }
        else
        {
          v131 = *(_QWORD *)(v46 + 8);
          v132 = 0;
          if ( v130 <= 73 )
            goto LABEL_166;
        }
        v132 = *(_QWORD *)(v155 + 8);
LABEL_166:
        if ( v132 == v131 )
          goto LABEL_90;
        goto LABEL_36;
      }
      if ( *(_QWORD *)(v46 + 8) == *(_QWORD *)(v155 + 8) && *(_QWORD *)(v46 + 16) == *(_QWORD *)(v155 + 16) )
      {
LABEL_90:
        v34 = v45;
        v8 = v149;
        a1 = v150;
        goto LABEL_39;
      }
LABEL_36:
      if ( sub_7DAF90((_DWORD *)v48) )
        break;
      v40 = *(_DWORD *)v46;
      v135 = v154 + j;
      ++v154;
    }
    v34 = v45;
    v8 = v149;
    a1 = v150;
    v48 = v34 + 184;
    if ( (*(_BYTE *)(v34 + 96) & 1) == 0 )
      v48 = *(_QWORD *)(v34 + 104) + 40LL * *(unsigned int *)(v34 + 112);
LABEL_39:
    if ( v48 == v140 )
    {
      v31 = *((unsigned int *)a1 + 4);
      v32 = a1[1];
      goto LABEL_41;
    }
LABEL_53:
    v60 = sub_720B10(v136);
    v61 = *((unsigned int *)a1 + 5);
    v158[0].m128i_i64[1] = (__int64)v136;
    v158[0].m128i_i32[0] = v60;
    v62 = *((unsigned int *)a1 + 4);
    v63 = a1[1];
    v64 = v62 + 1;
    if ( v61 < v62 + 1 )
    {
      if ( (unsigned __int64)v158 < v63 || (unsigned __int64)v158 >= v63 + 40 * v62 )
      {
        sub_25D6060(a1 + 1, a1 + 3, v64, 40);
        v63 = a1[1];
        v62 = *((unsigned int *)a1 + 4);
      }
      else
      {
        v77 = &v158[0].m128i_i8[-v63];
        sub_25D6060(a1 + 1, a1 + 3, v64, 40);
        v63 = a1[1];
        v62 = *((unsigned int *)a1 + 4);
        v11 = (__m128i *)&v77[v63];
      }
    }
    v65 = (__m128i *)(v63 + 40 * v62);
    *v65 = _mm_loadu_si128(v11);
    v65[1] = _mm_loadu_si128(v11 + 1);
    v65[2].m128i_i64[0] = v11[2].m128i_i64[0];
    ++*((_DWORD *)a1 + 4);
    v9[v8 - 1] |= 4uLL;
    v66 = (unsigned int)v161;
    result = sub_7E2410(a1, (unsigned __int64)v136, (__int64)&v160);
    v9 = v160;
    if ( (_BYTE)result )
    {
      v67 = 8 * v66;
      v68 = &v160[(unsigned __int64)v67 / 8];
      v8 = v161;
      v69 = 8LL * (unsigned int)v161;
      if ( v67 == v69 )
        goto LABEL_9;
      v70 = &v160[(unsigned __int64)v69 / 8 - 1];
      if ( v68 >= v70 )
        goto LABEL_9;
      do
      {
        v71 = *v68;
        v72 = *v70;
        ++v68;
        --v70;
        *(v68 - 1) = v72;
        v70[1] = v71;
      }
      while ( v68 < v70 );
      v8 = v161;
      v9 = v160;
      if ( !(_DWORD)v161 )
      {
LABEL_59:
        result = 1;
        break;
      }
LABEL_10:
      v4 = v9[v8 - 1];
      continue;
    }
    break;
  }
  if ( v9 != ptr )
  {
    v137 = result;
    free(v9);
    return v137;
  }
  return result;
}

