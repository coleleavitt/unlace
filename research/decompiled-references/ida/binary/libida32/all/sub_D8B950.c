_DWORD *__fastcall sub_D8B950(__int64 a1, __int64 *a2, int a3, char a4)
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
  __int64 *j; // rdx
  __int64 *v66; // r15
  __int64 *v67; // r14
  __int64 v68; // rax
  int v69; // esi
  int v70; // esi
  unsigned int v71; // ecx
  __int64 v72; // rbx
  __int64 v73; // rdi
  void **v74; // r12
  void **v75; // rbx
  int v76; // edi
  int v77; // r10d
  __int64 v78; // rdi
  int v79; // r9d
  unsigned __int64 *v80; // r8
  unsigned __int64 v81; // rdi
  __int64 v82; // rax
  __int64 *v83; // rax
  __int64 *i; // rdx
  __int64 *v85; // r15
  __int64 *v86; // r14
  __int64 v87; // rax
  int v88; // esi
  int v89; // esi
  unsigned int v90; // ecx
  __int64 v91; // rbx
  __int64 v92; // rdi
  void **v93; // r12
  void **v94; // rbx
  int v95; // edi
  int v96; // r8d
  __int64 v97; // rdi
  int v98; // edx
  unsigned __int64 *v99; // r10
  unsigned __int64 v100; // rdx
  void *v101; // rcx
  __int64 v102; // rdx
  __int64 *v103; // rcx
  __int64 *v104; // rdx
  __int64 v105; // rdx
  __int64 *v106; // rcx
  __int64 *v107; // rdx
  int v108; // r10d
  __int64 v109; // r9
  int v110; // r10d
  int v111; // r10d
  __int64 v112; // r9
  unsigned int v113; // [rsp+0h] [rbp-108h]
  unsigned int v114; // [rsp+0h] [rbp-108h]
  _DWORD *v115; // [rsp+10h] [rbp-F8h]
  _DWORD *v116; // [rsp+10h] [rbp-F8h]
  __m128 v117; // [rsp+20h] [rbp-E8h] BYREF
  void **v118; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v119; // [rsp+38h] [rbp-D0h]
  int v120; // [rsp+3Ch] [rbp-CCh]
  _QWORD v121[6]; // [rsp+40h] [rbp-C8h] BYREF
  char v122; // [rsp+70h] [rbp-98h]
  __m128 v123; // [rsp+80h] [rbp-88h] BYREF
  __int64 v124; // [rsp+90h] [rbp-78h]
  _BYTE v125[48]; // [rsp+98h] [rbp-70h] BYREF
  char v126; // [rsp+C8h] [rbp-40h]

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
      sub_D8AA50(&v123, v19, &v15[10 * v17], a1, 1);
      v20 = v123.m128_u64[0];
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
  sub_D8AA50(&v123, &v15[10 * v17], &v15[10 * v17], a1, 1);
  v20 = v123.m128_u64[0];
LABEL_12:
  v21 = (_QWORD *)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 16));
  sub_D8AA50(&v123, v21, v21, a1, 1);
  if ( v123.m128_u64[0] != v20 )
  {
    v22 = *(unsigned int *)(v20 + 16);
    if ( *(_DWORD *)(v20 + 20) <= (unsigned int)v22 )
    {
      v43 = sub_22136C0(v20 + 8, v20 + 24, 0, 8, &v123);
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
          v100 = v43;
          do
          {
            v101 = *v48;
            *v48++ = nullptr;
            v100 += 8LL;
            *(_QWORD *)(v100 - 8) = v101;
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
      v57 = v123.m128_i32[0];
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
  v122 = a4;
  v120 = 6;
  v121[0] = v9;
  v25 = v24 & 0xFFFFFFFFFFFFFFFCLL;
  v119 = 1;
  if ( (v24 & 2) == 0 )
    v25 = 0;
  v118 = (void **)v121;
  v123.m128_u64[0] = v25;
  v123.m128_u64[1] = (unsigned __int64)v125;
  v124 = 0x600000000LL;
  sub_D8B5E0((__int64)&v123.m128_i64[1], (__int64)&v118);
  v28 = *(unsigned int *)(a1 + 16);
  v29 = *(__int64 **)a1;
  v126 = v122;
  if ( !(_DWORD)v28 )
    goto LABEL_67;
  v30 = v123.m128_u64[0];
  v31 = (unsigned int)(v28 - 1);
  v32 = v31 & (((unsigned __int32)v123.m128_i32[0] >> 9) ^ ((unsigned __int32)v123.m128_i32[0] >> 4));
  v33 = (unsigned __int64 *)&v29[10 * v32];
  v34 = *v33;
  if ( v123.m128_u64[0] != *v33 )
  {
    v27 = 1;
    v58 = nullptr;
    if ( v34 != -4096 )
    {
      while ( 1 )
      {
        if ( !v58 && v34 == -8192 )
          v58 = v33;
        v110 = v27 + 1;
        v27 = v32 + (unsigned int)v27;
        v32 = v31 & v27;
        v33 = (unsigned __int64 *)&v29[10 * ((unsigned int)v31 & (unsigned int)v27)];
        v34 = *v33;
        if ( v123.m128_u64[0] == *v33 )
          goto LABEL_20;
        if ( v34 == -4096 )
          break;
        LODWORD(v27) = v110;
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
      v114 = v28;
      v81 = (v31 >> 1) | v31;
      v82 = (((((((v81 | (v81 >> 2)) >> 4) | v81 | (v81 >> 2)) >> 8) | ((v81 | (v81 >> 2)) >> 4) | v81 | (v81 >> 2)) >> 16)
           | ((((v81 | (v81 >> 2)) >> 4) | v81 | (v81 >> 2)) >> 8)
           | ((v81 | (v81 >> 2)) >> 4)
           | v81
           | (v81 >> 2))
          + 1;
      if ( (unsigned int)v82 < 0x40 )
        LODWORD(v82) = 64;
      *(_DWORD *)(a1 + 16) = v82;
      v83 = (__int64 *)sub_220C370(80LL * (unsigned int)v82, 8, v28, 64, v60, v27);
      *(_QWORD *)a1 = v83;
      if ( v29 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        for ( i = &v83[10 * *(unsigned int *)(a1 + 16)]; i != v83; v83 += 10 )
          *v83 = -4096;
        v116 = v9;
        v85 = v29;
        v86 = &v29[10 * v114];
        do
        {
          v87 = *v85;
          if ( *v85 != -8192 && v87 != -4096 )
          {
            v88 = *(_DWORD *)(a1 + 16);
            if ( !v88 )
            {
              *(_QWORD *)&dword_0 = *v85;
              BUG();
            }
            v89 = v88 - 1;
            v90 = v89 & (((unsigned int)v87 >> 9) ^ ((unsigned int)v87 >> 4));
            v91 = *(_QWORD *)a1 + 80LL * v90;
            v92 = *(_QWORD *)v91;
            if ( *(_QWORD *)v91 != v87 )
            {
              v111 = 1;
              v112 = 0;
              if ( v92 != -4096 )
              {
                while ( 1 )
                {
                  if ( v92 == -8192 && !v112 )
                    v112 = v91;
                  v90 = v89 & (v111 + v90);
                  v91 = *(_QWORD *)a1 + 80LL * v90;
                  v92 = *(_QWORD *)v91;
                  if ( v87 == *(_QWORD *)v91 )
                    break;
                  if ( v92 == -4096 )
                  {
                    if ( v112 )
                      v91 = v112;
                    break;
                  }
                  ++v111;
                }
              }
            }
            *(_QWORD *)v91 = v87;
            *(_QWORD *)(v91 + 8) = v91 + 24;
            *(_QWORD *)(v91 + 16) = 0x600000000LL;
            if ( *((_DWORD *)v85 + 4) )
              sub_D8B5E0(v91 + 8, (__int64)(v85 + 1));
            *(_BYTE *)(v91 + 72) = *((_BYTE *)v85 + 72);
            v93 = (void **)v85[1];
            ++*(_DWORD *)(a1 + 8);
            v94 = &v93[*((unsigned int *)v85 + 4)];
            if ( v93 != v94 )
            {
              do
              {
                while ( *--v94 )
                {
                  operator delete[](*v94);
                  if ( v93 == v94 )
                    goto LABEL_110;
                }
              }
              while ( v93 != v94 );
LABEL_110:
              v94 = (void **)v85[1];
            }
            if ( v94 != (void **)(v85 + 3) )
              free(v94);
          }
          v85 += 10;
        }
        while ( v86 != v85 );
        v9 = v116;
        operator delete();
        v83 = *(__int64 **)a1;
        v95 = *(_DWORD *)(a1 + 16);
        v59 = *(_DWORD *)(a1 + 8) + 1;
      }
      else
      {
        v105 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v95 = v105;
        v106 = &v83[10 * v105];
        if ( v83 != v106 )
        {
          v107 = v83;
          do
          {
            *v107 = -4096;
            v107 += 10;
          }
          while ( v106 != v107 );
        }
        v59 = 1;
      }
      if ( v95 )
      {
        v96 = v95 - 1;
        LODWORD(v97) = (v95 - 1)
                     & (((unsigned __int32)v123.m128_i32[0] >> 9)
                      ^ ((unsigned __int32)v123.m128_i32[0] >> 4));
        v33 = (unsigned __int64 *)&v83[10 * (unsigned int)v97];
        v30 = *v33;
        v61 = *v33;
        if ( v123.m128_u64[0] == *v33 )
          goto LABEL_62;
        v98 = 1;
        v99 = nullptr;
        if ( v30 != -4096 )
        {
          while ( 1 )
          {
            if ( v30 == -8192 && !v99 )
              v99 = v33;
            v97 = v96 & (unsigned int)(v97 + v98);
            v33 = (unsigned __int64 *)&v83[10 * v97];
            v30 = *v33;
            if ( v123.m128_u64[0] == *v33 )
            {
              v61 = *v33;
              goto LABEL_62;
            }
            if ( v30 == -4096 )
              break;
            ++v98;
          }
          if ( v99 )
          {
            v61 = *v99;
            v30 = v123.m128_u64[0];
            v33 = v99;
LABEL_62:
            *(_DWORD *)(a1 + 8) = v59;
            if ( v61 != -4096 )
              --*(_DWORD *)(a1 + 12);
            goto LABEL_64;
          }
        }
        v30 = v123.m128_u64[0];
LABEL_92:
        *(_DWORD *)(a1 + 8) = v59;
LABEL_64:
        *v33 = v30;
        v33[1] = (unsigned __int64)(v33 + 3);
        v33[2] = 0x600000000LL;
        if ( (_DWORD)v124 )
          sub_D8B5E0((__int64)(v33 + 1), (__int64)&v123.m128_i64[1]);
        *((_BYTE *)v33 + 72) = v126;
        v35 = (__int64 *)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 16));
        goto LABEL_21;
      }
      goto LABEL_180;
    }
LABEL_67:
    v113 = v28;
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
    v64 = (__int64 *)sub_220C370(80LL * (unsigned int)v63, 8, v28, 64, v26, v27);
    *(_QWORD *)a1 = v64;
    if ( v29 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      for ( j = &v64[10 * *(unsigned int *)(a1 + 16)]; j != v64; v64 += 10 )
        *v64 = -4096;
      v66 = v29;
      if ( v29 != &v29[10 * v113] )
      {
        v115 = v9;
        v67 = &v29[10 * v113];
        do
        {
          v68 = *v66;
          if ( *v66 != -4096 && v68 != -8192 )
          {
            v69 = *(_DWORD *)(a1 + 16);
            if ( !v69 )
            {
              *(_QWORD *)&dword_0 = *v66;
              BUG();
            }
            v70 = v69 - 1;
            v71 = v70 & (((unsigned int)v68 >> 9) ^ ((unsigned int)v68 >> 4));
            v72 = *(_QWORD *)a1 + 80LL * v71;
            v73 = *(_QWORD *)v72;
            if ( *(_QWORD *)v72 != v68 )
            {
              v108 = 1;
              v109 = 0;
              if ( v73 != -4096 )
              {
                while ( 1 )
                {
                  if ( v73 == -8192 && !v109 )
                    v109 = v72;
                  v71 = v70 & (v108 + v71);
                  v72 = *(_QWORD *)a1 + 80LL * v71;
                  v73 = *(_QWORD *)v72;
                  if ( v68 == *(_QWORD *)v72 )
                    break;
                  if ( v73 == -4096 )
                  {
                    if ( v109 )
                      v72 = v109;
                    break;
                  }
                  ++v108;
                }
              }
            }
            *(_QWORD *)v72 = v68;
            *(_QWORD *)(v72 + 8) = v72 + 24;
            *(_QWORD *)(v72 + 16) = 0x600000000LL;
            if ( *((_DWORD *)v66 + 4) )
              sub_D8B5E0(v72 + 8, (__int64)(v66 + 1));
            *(_BYTE *)(v72 + 72) = *((_BYTE *)v66 + 72);
            v74 = (void **)v66[1];
            ++*(_DWORD *)(a1 + 8);
            v75 = &v74[*((unsigned int *)v66 + 4)];
            if ( v74 != v75 )
            {
              do
              {
                while ( *--v75 )
                {
                  operator delete[](*v75);
                  if ( v74 == v75 )
                    goto LABEL_83;
                }
              }
              while ( v74 != v75 );
LABEL_83:
              v75 = (void **)v66[1];
            }
            if ( v75 != (void **)(v66 + 3) )
              free(v75);
          }
          v66 += 10;
        }
        while ( v67 != v66 );
        v9 = v115;
      }
      operator delete();
      v64 = *(__int64 **)a1;
      v76 = *(_DWORD *)(a1 + 16);
      v59 = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v102 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v76 = v102;
      v103 = &v64[10 * v102];
      if ( v64 != v103 )
      {
        v104 = v64;
        do
        {
          *v104 = -4096;
          v104 += 10;
        }
        while ( v103 != v104 );
      }
      v59 = 1;
    }
    if ( v76 )
    {
      v30 = v123.m128_u64[0];
      v77 = v76 - 1;
      LODWORD(v78) = (v76 - 1) & (((unsigned __int32)v123.m128_i32[0] >> 9) ^ ((unsigned __int32)v123.m128_i32[0] >> 4));
      v33 = (unsigned __int64 *)&v64[10 * (unsigned int)v78];
      v61 = *v33;
      if ( *v33 == v123.m128_u64[0] )
        goto LABEL_62;
      v79 = 1;
      v80 = nullptr;
      if ( v61 != -4096 )
      {
        while ( 1 )
        {
          if ( v61 == -8192 && !v80 )
            v80 = v33;
          v78 = v77 & (unsigned int)(v78 + v79);
          v33 = (unsigned __int64 *)&v64[10 * v78];
          v61 = *v33;
          if ( v123.m128_u64[0] == *v33 )
            goto LABEL_62;
          if ( v61 == -4096 )
          {
            if ( !v80 )
              goto LABEL_92;
            v61 = *v80;
            v33 = v80;
            goto LABEL_62;
          }
          ++v79;
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
  sub_D8AA50(&v117, v33, v35, a1, 1);
  v36 = v123.m128_u64[1];
  v37 = (void **)(v123.m128_u64[1] + 8LL * (unsigned int)v124);
  if ( (void **)v123.m128_u64[1] != v37 )
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
    v37 = (void **)v123.m128_u64[1];
  }
  if ( v37 != (void **)v125 )
    free(v37);
  v38 = v118;
  v39 = &v118[v119];
  if ( v118 != v39 )
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
    v39 = v118;
  }
  if ( v39 != v121 )
    free(v39);
  return v9;
}

