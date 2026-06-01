_DWORD *__fastcall sub_DAF690(__int64 a1, __int64 *a2, int a3, char a4)
{
  unsigned __int64 v8; // r12
  _DWORD *v9; // rbx
  size_t v10; // rdx
  void (__fastcall *v11)(_DWORD *, char *, _QWORD, _QWORD, _QWORD, __int64, _QWORD, __int64 *); // rax
  __int16 v12; // ax
  bool v13; // zf
  __int64 v14; // rax
  __int64 *v15; // r8
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // edi
  __int64 *v19; // rsi
  unsigned __int64 v20; // r15
  _QWORD *v21; // rdx
  __int64 v22; // rdx
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 *v29; // r14
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdi
  unsigned int v32; // eax
  unsigned __int64 *v33; // r15
  unsigned __int64 v34; // rsi
  __int64 *v35; // rdx
  unsigned __int64 v36; // r14
  void **v37; // rbp
  void **v38; // r12
  void **v39; // rbp
  int v40; // edx
  int v41; // r10d
  __int64 v42; // rdx
  unsigned __int64 v43; // r12
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  __int64 v46; // rsi
  void **v47; // rbp
  void **v48; // rax
  unsigned __int64 v49; // rdi
  __int64 v50; // rax
  __m128i v51; // xmm0
  unsigned __int64 v52; // rcx
  __int64 *v53; // rax
  _QWORD *v54; // rcx
  __int64 v55; // rdx
  void **v56; // r14
  __int32 v57; // r14d
  unsigned __int64 *v58; // r8
  int v59; // esi
  __int64 v60; // r8
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  __int64 *v64; // rax
  __int64 v65; // rdx
  __int64 *v66; // rsi
  __int64 *j; // rdx
  __int64 *v68; // r15
  __int64 *v69; // r14
  __int64 v70; // rax
  int v71; // esi
  int v72; // esi
  unsigned int v73; // ecx
  __int64 v74; // rbx
  __int64 v75; // rdi
  void **v76; // r12
  void **v77; // rbx
  int v78; // edi
  int v79; // r10d
  __int64 v80; // rdi
  int v81; // r9d
  unsigned __int64 *v82; // r8
  unsigned __int64 v83; // rdi
  __int64 v84; // rax
  __int64 *v85; // rax
  __int64 v86; // rdx
  __int64 *v87; // rsi
  __int64 *i; // rdx
  __int64 *v89; // r15
  __int64 *v90; // r14
  __int64 v91; // rax
  int v92; // esi
  int v93; // esi
  unsigned int v94; // ecx
  __int64 v95; // rbx
  __int64 v96; // rdi
  void **v97; // r12
  void **v98; // rbx
  int v99; // edi
  int v100; // r8d
  __int64 v101; // rdi
  int v102; // edx
  unsigned __int64 *v103; // r10
  unsigned __int64 v104; // rdx
  void *v105; // rcx
  __int64 v106; // rdx
  __int64 *v107; // rcx
  __int64 *v108; // rdx
  __int64 v109; // rdx
  __int64 *v110; // rcx
  __int64 *v111; // rdx
  int v112; // r10d
  __int64 v113; // r9
  int v114; // r10d
  int v115; // r10d
  __int64 v116; // r9
  unsigned int v117; // [rsp+0h] [rbp-108h]
  __int64 v118; // [rsp+0h] [rbp-108h]
  unsigned int v119; // [rsp+0h] [rbp-108h]
  __int64 v120; // [rsp+0h] [rbp-108h]
  __int64 *v121; // [rsp+8h] [rbp-100h]
  __int64 *v122; // [rsp+8h] [rbp-100h]
  _DWORD *v123; // [rsp+10h] [rbp-F8h]
  _DWORD *v124; // [rsp+10h] [rbp-F8h]
  __m128 v125; // [rsp+20h] [rbp-E8h] BYREF
  void **v126; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v127; // [rsp+38h] [rbp-D0h]
  int v128; // [rsp+3Ch] [rbp-CCh]
  _QWORD v129[6]; // [rsp+40h] [rbp-C8h] BYREF
  char v130; // [rsp+70h] [rbp-98h]
  __m128 v131; // [rsp+80h] [rbp-88h] BYREF
  __int64 v132; // [rsp+90h] [rbp-78h]
  _BYTE v133[48]; // [rsp+98h] [rbp-70h] BYREF
  char v134; // [rsp+C8h] [rbp-40h]

  v8 = *((unsigned int *)a2 + 7) + 40LL;
  v9 = (_DWORD *)operator new[](v8);
  memset(v9, 0, v8);
  *v9 = a3;
  v10 = *((unsigned int *)a2 + 7);
  *((_QWORD *)v9 + 1) = 0;
  v9[4] = -1;
  *((_BYTE *)v9 + 20) = 1;
  v9[6] = 0;
  *((_WORD *)v9 + 14) = 0;
  *((_QWORD *)v9 + 4) = a2;
  memset(v9 + 10, 0, v10);
  v11 = (void (__fastcall *)(_DWORD *, char *, _QWORD, _QWORD, _QWORD, __int64, _QWORD, __int64 *))a2[8];
  if ( v11 )
    v11(
      v9,
      (char *)v9 + *((unsigned int *)a2 + 6) + 40,
      *((unsigned __int8 *)a2 + 56),
      *((unsigned __int8 *)a2 + 57),
      *((unsigned __int8 *)a2 + 59),
      1,
      0,
      a2);
  v12 = *((_WORD *)v9 + 22);
  *((_BYTE *)v9 + 27) = 1;
  *((_QWORD *)v9 + 6) = a2;
  v9[10] = 16;
  v13 = a2[5] == 0;
  *((_WORD *)v9 + 22) = v12 & 0xFEA8 | 0x10;
  *((_BYTE *)v9 + 46) = (v13 || !*((_BYTE *)a2 + 60)) && a4 == 2;
  v14 = *a2;
  v15 = *(__int64 **)a1;
  *((_BYTE *)v9 + 28) = 1;
  v16 = v14 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v14 & 2) == 0 )
    v16 = 0;
  v17 = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)v17 )
  {
    v18 = (v17 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
    v19 = &v15[10 * v18];
    if ( v16 == *v19 )
    {
LABEL_11:
      sub_DAE790(&v131, v19, &v15[10 * v17], a1, 1);
      v20 = v131.m128_u64[0];
      goto LABEL_12;
    }
    if ( *v19 != -4096 )
    {
      v40 = 1;
      do
      {
        v41 = v40 + 1;
        v42 = ((_DWORD)v17 - 1) & (v18 + v40);
        v18 = v42;
        v19 = &v15[10 * v42];
        if ( v16 == *v19 )
          goto LABEL_11;
        v40 = v41;
      }
      while ( *v19 != -4096 );
    }
  }
  sub_DAE790(&v131, &v15[10 * v17], &v15[10 * v17], a1, 1);
  v20 = v131.m128_u64[0];
LABEL_12:
  v21 = (_QWORD *)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 16));
  sub_DAE790(&v131, v21, v21, a1, 1);
  if ( v131.m128_u64[0] != v20 )
  {
    v22 = *(unsigned int *)(v20 + 16);
    if ( *(_DWORD *)(v20 + 20) <= (unsigned int)v22 )
    {
      v43 = sub_2237400(v20 + 8, v20 + 24, 0, 8, &v131);
      v44 = *(unsigned int *)(v20 + 16);
      *(_QWORD *)(v43 + 8 * v44) = v9;
      v45 = *(_QWORD *)(v20 + 8);
      v46 = v44;
      v47 = (void **)(v45 + 8 * v44);
      if ( (void **)v45 != v47 )
      {
        v48 = *(void ***)(v20 + 8);
        if ( (v45 >= v43 + 16 || v43 >= v45 + 16) && (unsigned __int64)v47 - v45 - 8 > 0x10 )
        {
          v49 = (((unsigned __int64)v47 - v45 - 8) >> 3) + 1;
          v50 = 0;
          do
          {
            v51 = _mm_loadu_si128((const __m128i *)(v45 + v50));
            *(_OWORD *)(v45 + v50) = 0;
            *(__m128i *)(v43 + v50) = v51;
            v50 += 16;
          }
          while ( v50 != 16 * (v49 >> 1) );
          v52 = 8 * (v49 & 0xFFFFFFFFFFFFFFFELL);
          v53 = (__int64 *)(v45 + v52);
          v54 = (_QWORD *)(v43 + v52);
          if ( (v49 & 0xFFFFFFFFFFFFFFFELL) != v49 )
          {
            v55 = *v53;
            *v53 = 0;
            *v54 = v55;
          }
        }
        else
        {
          v104 = v43;
          do
          {
            v105 = *v48;
            *v48++ = nullptr;
            v104 += 8LL;
            *(_QWORD *)(v104 - 8) = v105;
          }
          while ( v47 != v48 );
        }
        v56 = *(void ***)(v20 + 8);
        v47 = &v56[v46];
        if ( v56 != &v56[v46] )
        {
          do
          {
            while ( *--v47 )
            {
              operator delete[](*v47);
              if ( v56 == v47 )
                goto LABEL_52;
            }
          }
          while ( v56 != v47 );
LABEL_52:
          v47 = *(void ***)(v20 + 8);
        }
      }
      v57 = v131.m128_i32[0];
      if ( (void **)(v20 + 24) != v47 )
        free(v47);
      *(_QWORD *)(v20 + 8) = v43;
      *(_DWORD *)(v20 + 20) = v57;
      ++*(_DWORD *)(v20 + 16);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(v20 + 8) + 8 * v22) = v9;
      *(_DWORD *)(v20 + 16) = v22 + 1;
    }
    return v9;
  }
  v24 = *a2;
  v130 = a4;
  v128 = 6;
  v129[0] = v9;
  v25 = v24 & 0xFFFFFFFFFFFFFFFCLL;
  v127 = 1;
  if ( (v24 & 2) == 0 )
    v25 = 0;
  v126 = (void **)v129;
  v131.m128_u64[0] = v25;
  v131.m128_u64[1] = (unsigned __int64)v133;
  v132 = 0x600000000LL;
  sub_DAF320((__int64)&v131.m128_i64[1], (__int64)&v126);
  v28 = *(unsigned int *)(a1 + 16);
  v29 = *(__int64 **)a1;
  v134 = v130;
  if ( !(_DWORD)v28 )
    goto LABEL_67;
  v30 = v131.m128_u64[0];
  v31 = (unsigned int)(v28 - 1);
  v32 = v31 & (((unsigned __int32)v131.m128_i32[0] >> 9) ^ ((unsigned __int32)v131.m128_i32[0] >> 4));
  v33 = (unsigned __int64 *)&v29[10 * v32];
  v34 = *v33;
  if ( v131.m128_u64[0] != *v33 )
  {
    v27 = 1;
    v58 = nullptr;
    if ( v34 != -4096 )
    {
      while ( 1 )
      {
        if ( !v58 && v34 == -8192 )
          v58 = v33;
        v114 = v27 + 1;
        v27 = v32 + (unsigned int)v27;
        v32 = v31 & v27;
        v33 = (unsigned __int64 *)&v29[10 * ((unsigned int)v31 & (unsigned int)v27)];
        v34 = *v33;
        if ( v131.m128_u64[0] == *v33 )
          goto LABEL_20;
        if ( v34 == -4096 )
          break;
        LODWORD(v27) = v114;
      }
      if ( v58 )
        v33 = v58;
    }
    v59 = *(_DWORD *)(a1 + 8) + 1;
    v26 = (unsigned int)(4 * v59);
    if ( (unsigned int)v26 < 3 * (int)v28 )
    {
      v60 = (unsigned int)v28 >> 3;
      if ( (int)v28 - *(_DWORD *)(a1 + 12) - v59 > (unsigned int)v60 )
      {
        v61 = *v33;
        goto LABEL_62;
      }
      v119 = v28;
      v83 = (v31 >> 1) | v31;
      v84 = (((((((v83 | (v83 >> 2)) >> 4) | v83 | (v83 >> 2)) >> 8) | ((v83 | (v83 >> 2)) >> 4) | v83 | (v83 >> 2)) >> 16)
           | ((((v83 | (v83 >> 2)) >> 4) | v83 | (v83 >> 2)) >> 8)
           | ((v83 | (v83 >> 2)) >> 4)
           | v83
           | (v83 >> 2))
          + 1;
      if ( (unsigned int)v84 < 0x40 )
        LODWORD(v84) = 64;
      *(_DWORD *)(a1 + 16) = v84;
      v85 = (__int64 *)sub_22300B0(80LL * (unsigned int)v84, 8, v28, 64, v60, v27);
      v86 = v119;
      *(_QWORD *)a1 = v85;
      if ( v29 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        v120 = 80LL * v119;
        v87 = &v29[10 * v86];
        for ( i = &v85[10 * *(unsigned int *)(a1 + 16)]; i != v85; v85 += 10 )
          *v85 = -4096;
        v124 = v9;
        v89 = v29;
        v122 = v29;
        v90 = v87;
        do
        {
          v91 = *v89;
          if ( *v89 != -8192 && v91 != -4096 )
          {
            v92 = *(_DWORD *)(a1 + 16);
            if ( !v92 )
            {
              *(_QWORD *)&dword_0 = *v89;
              BUG();
            }
            v93 = v92 - 1;
            v94 = v93 & (((unsigned int)v91 >> 9) ^ ((unsigned int)v91 >> 4));
            v95 = *(_QWORD *)a1 + 80LL * v94;
            v96 = *(_QWORD *)v95;
            if ( *(_QWORD *)v95 != v91 )
            {
              v115 = 1;
              v116 = 0;
              if ( v96 != -4096 )
              {
                while ( 1 )
                {
                  if ( v96 == -8192 && !v116 )
                    v116 = v95;
                  v94 = v93 & (v115 + v94);
                  v95 = *(_QWORD *)a1 + 80LL * v94;
                  v96 = *(_QWORD *)v95;
                  if ( v91 == *(_QWORD *)v95 )
                    break;
                  if ( v96 == -4096 )
                  {
                    if ( v116 )
                      v95 = v116;
                    break;
                  }
                  ++v115;
                }
              }
            }
            *(_QWORD *)v95 = v91;
            *(_QWORD *)(v95 + 8) = v95 + 24;
            *(_QWORD *)(v95 + 16) = 0x600000000LL;
            if ( *((_DWORD *)v89 + 4) )
              sub_DAF320(v95 + 8, (__int64)(v89 + 1));
            *(_BYTE *)(v95 + 72) = *((_BYTE *)v89 + 72);
            v97 = (void **)v89[1];
            ++*(_DWORD *)(a1 + 8);
            v98 = &v97[*((unsigned int *)v89 + 4)];
            if ( v97 != v98 )
            {
              do
              {
                while ( *--v98 )
                {
                  operator delete[](*v98);
                  if ( v97 == v98 )
                    goto LABEL_110;
                }
              }
              while ( v97 != v98 );
LABEL_110:
              v98 = (void **)v89[1];
            }
            if ( v98 != (void **)(v89 + 3) )
              free(v98);
          }
          v89 += 10;
        }
        while ( v90 != v89 );
        v9 = v124;
        operator delete(v122, v120, 8);
        v85 = *(__int64 **)a1;
        v99 = *(_DWORD *)(a1 + 16);
        v59 = *(_DWORD *)(a1 + 8) + 1;
      }
      else
      {
        v109 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v99 = v109;
        v110 = &v85[10 * v109];
        if ( v85 != v110 )
        {
          v111 = v85;
          do
          {
            *v111 = -4096;
            v111 += 10;
          }
          while ( v110 != v111 );
        }
        v59 = 1;
      }
      if ( v99 )
      {
        v100 = v99 - 1;
        LODWORD(v101) = (v99 - 1)
                      & (((unsigned __int32)v131.m128_i32[0] >> 9)
                       ^ ((unsigned __int32)v131.m128_i32[0] >> 4));
        v33 = (unsigned __int64 *)&v85[10 * (unsigned int)v101];
        v30 = *v33;
        v61 = *v33;
        if ( v131.m128_u64[0] == *v33 )
          goto LABEL_62;
        v102 = 1;
        v103 = nullptr;
        if ( v30 != -4096 )
        {
          while ( 1 )
          {
            if ( v30 == -8192 && !v103 )
              v103 = v33;
            v101 = v100 & (unsigned int)(v101 + v102);
            v33 = (unsigned __int64 *)&v85[10 * v101];
            v30 = *v33;
            if ( v131.m128_u64[0] == *v33 )
            {
              v61 = *v33;
              goto LABEL_62;
            }
            if ( v30 == -4096 )
              break;
            ++v102;
          }
          if ( v103 )
          {
            v61 = *v103;
            v30 = v131.m128_u64[0];
            v33 = v103;
LABEL_62:
            *(_DWORD *)(a1 + 8) = v59;
            if ( v61 != -4096 )
              --*(_DWORD *)(a1 + 12);
            goto LABEL_64;
          }
        }
        v30 = v131.m128_u64[0];
LABEL_92:
        *(_DWORD *)(a1 + 8) = v59;
LABEL_64:
        *v33 = v30;
        v33[1] = (unsigned __int64)(v33 + 3);
        v33[2] = 0x600000000LL;
        if ( (_DWORD)v132 )
          sub_DAF320((__int64)(v33 + 1), (__int64)&v131.m128_i64[1]);
        *((_BYTE *)v33 + 72) = v134;
        v35 = (__int64 *)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 16));
        goto LABEL_21;
      }
      goto LABEL_180;
    }
LABEL_67:
    v117 = v28;
    v62 = (((((((unsigned int)(2 * v28 - 1) | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v28 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v28 - 1) | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v28 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v28 - 1) | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v28 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v28 - 1) | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v28 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1);
    v63 = ((v62 >> 16) | v62) + 1;
    if ( (unsigned int)v63 < 0x40 )
      LODWORD(v63) = 64;
    *(_DWORD *)(a1 + 16) = v63;
    v64 = (__int64 *)sub_22300B0(80LL * (unsigned int)v63, 8, v28, 64, v26, v27);
    v65 = v117;
    *(_QWORD *)a1 = v64;
    if ( v29 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      v118 = 80LL * v117;
      v66 = &v29[10 * v65];
      for ( j = &v64[10 * *(unsigned int *)(a1 + 16)]; j != v64; v64 += 10 )
        *v64 = -4096;
      v68 = v29;
      if ( v29 != v66 )
      {
        v123 = v9;
        v121 = v29;
        v69 = v66;
        do
        {
          v70 = *v68;
          if ( *v68 != -4096 && v70 != -8192 )
          {
            v71 = *(_DWORD *)(a1 + 16);
            if ( !v71 )
            {
              *(_QWORD *)&dword_0 = *v68;
              BUG();
            }
            v72 = v71 - 1;
            v73 = v72 & (((unsigned int)v70 >> 9) ^ ((unsigned int)v70 >> 4));
            v74 = *(_QWORD *)a1 + 80LL * v73;
            v75 = *(_QWORD *)v74;
            if ( *(_QWORD *)v74 != v70 )
            {
              v112 = 1;
              v113 = 0;
              if ( v75 != -4096 )
              {
                while ( 1 )
                {
                  if ( v75 == -8192 && !v113 )
                    v113 = v74;
                  v73 = v72 & (v112 + v73);
                  v74 = *(_QWORD *)a1 + 80LL * v73;
                  v75 = *(_QWORD *)v74;
                  if ( v70 == *(_QWORD *)v74 )
                    break;
                  if ( v75 == -4096 )
                  {
                    if ( v113 )
                      v74 = v113;
                    break;
                  }
                  ++v112;
                }
              }
            }
            *(_QWORD *)v74 = v70;
            *(_QWORD *)(v74 + 8) = v74 + 24;
            *(_QWORD *)(v74 + 16) = 0x600000000LL;
            if ( *((_DWORD *)v68 + 4) )
              sub_DAF320(v74 + 8, (__int64)(v68 + 1));
            *(_BYTE *)(v74 + 72) = *((_BYTE *)v68 + 72);
            v76 = (void **)v68[1];
            ++*(_DWORD *)(a1 + 8);
            v77 = &v76[*((unsigned int *)v68 + 4)];
            if ( v76 != v77 )
            {
              do
              {
                while ( *--v77 )
                {
                  operator delete[](*v77);
                  if ( v76 == v77 )
                    goto LABEL_83;
                }
              }
              while ( v76 != v77 );
LABEL_83:
              v77 = (void **)v68[1];
            }
            if ( v77 != (void **)(v68 + 3) )
              free(v77);
          }
          v68 += 10;
        }
        while ( v69 != v68 );
        v29 = v121;
        v9 = v123;
      }
      operator delete(v29, v118, 8);
      v64 = *(__int64 **)a1;
      v78 = *(_DWORD *)(a1 + 16);
      v59 = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v106 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v78 = v106;
      v107 = &v64[10 * v106];
      if ( v64 != v107 )
      {
        v108 = v64;
        do
        {
          *v108 = -4096;
          v108 += 10;
        }
        while ( v107 != v108 );
      }
      v59 = 1;
    }
    if ( v78 )
    {
      v30 = v131.m128_u64[0];
      v79 = v78 - 1;
      LODWORD(v80) = (v78 - 1) & (((unsigned __int32)v131.m128_i32[0] >> 9) ^ ((unsigned __int32)v131.m128_i32[0] >> 4));
      v33 = (unsigned __int64 *)&v64[10 * (unsigned int)v80];
      v61 = *v33;
      if ( *v33 == v131.m128_u64[0] )
        goto LABEL_62;
      v81 = 1;
      v82 = nullptr;
      if ( v61 != -4096 )
      {
        while ( 1 )
        {
          if ( v61 == -8192 && !v82 )
            v82 = v33;
          v80 = v79 & (unsigned int)(v80 + v81);
          v33 = (unsigned __int64 *)&v64[10 * v80];
          v61 = *v33;
          if ( v131.m128_u64[0] == *v33 )
            goto LABEL_62;
          if ( v61 == -4096 )
          {
            if ( !v82 )
              goto LABEL_92;
            v61 = *v82;
            v33 = v82;
            goto LABEL_62;
          }
          ++v81;
        }
      }
      goto LABEL_92;
    }
LABEL_180:
    ++*(_DWORD *)(a1 + 8);
    BUG();
  }
LABEL_20:
  v35 = &v29[10 * v28];
LABEL_21:
  sub_DAE790(&v125, v33, v35, a1, 1);
  v36 = v131.m128_u64[1];
  v37 = (void **)(v131.m128_u64[1] + 8LL * (unsigned int)v132);
  if ( (void **)v131.m128_u64[1] != v37 )
  {
    do
    {
      while ( *--v37 )
      {
        operator delete[](*v37);
        if ( (void **)v36 == v37 )
          goto LABEL_24;
      }
    }
    while ( (void **)v36 != v37 );
LABEL_24:
    v37 = (void **)v131.m128_u64[1];
  }
  if ( v37 != (void **)v133 )
    free(v37);
  v38 = v126;
  v39 = &v126[v127];
  if ( v126 != v39 )
  {
    do
    {
      while ( *--v39 )
      {
        operator delete[](*v39);
        if ( v38 == v39 )
          goto LABEL_30;
      }
    }
    while ( v38 != v39 );
LABEL_30:
    v39 = v126;
  }
  if ( v39 != v129 )
    free(v39);
  return v9;
}
