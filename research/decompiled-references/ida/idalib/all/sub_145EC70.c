unsigned __int64 __fastcall sub_145EC70(__int64 a1, char a2)
{
  __int64 v2; // r12
  __int64 v3; // rdi
  char v4; // al
  __m128 *v5; // r13
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned int v13; // eax
  __m128 *v14; // rsi
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r14
  __m128 *v18; // rbx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r11
  __m128 *v24; // r10
  _QWORD *i; // rdx
  __int64 *v26; // r14
  __m128 *v27; // r9
  __int64 v28; // r13
  __m128 *v29; // r12
  __int64 *v30; // rbx
  __int64 v31; // rax
  int v32; // edi
  int v33; // edi
  __m128 *v34; // r10
  unsigned int v35; // esi
  __m128 *v36; // rdx
  unsigned __int64 v37; // r8
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rdi
  void **v41; // rdi
  void **v42; // rdx
  void **v43; // rdi
  __int64 v44; // rdi
  void **v45; // rax
  void *v46; // rdi
  int v47; // edi
  int v48; // r10d
  unsigned int v49; // r9d
  unsigned __int64 v50; // rdi
  int v51; // ebx
  __m128 *v52; // rbp
  __int64 v53; // rcx
  int v55; // r9d
  __m128 *v56; // r11
  __int64 v57; // r9
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r11
  __m128 *v64; // r10
  _QWORD *j; // rdx
  __m128 *v66; // r14
  unsigned __int64 v67; // rax
  int v68; // edi
  int v69; // edi
  __m128 *v70; // r9
  unsigned int v71; // esi
  __m128 *v72; // rdx
  unsigned __int64 v73; // r8
  __int64 v74; // rax
  unsigned __int64 v75; // rax
  __int64 v76; // rdi
  void **v77; // rdi
  void **v78; // rdx
  void **v79; // rdi
  __int64 v80; // rdi
  void **v81; // rax
  void *v82; // rdi
  int v83; // r9d
  __int64 v84; // r11
  int v85; // r9d
  unsigned int v86; // r10d
  int v87; // r14d
  __m128 *v88; // rbp
  __int64 v89; // rsi
  _QWORD *v90; // rsi
  _QWORD *v91; // rdx
  __int64 v92; // rsi
  _QWORD *v93; // rsi
  _QWORD *v94; // rdx
  int v95; // ebp
  unsigned int v96; // ebx
  __m128 *v97; // r11
  __int64 *v98; // rbx
  __int128 v99; // [rsp+0h] [rbp-98h] BYREF
  __m128 *v100; // [rsp+18h] [rbp-80h]
  void **v101; // [rsp+20h] [rbp-78h]
  __int64 v102; // [rsp+28h] [rbp-70h]
  __int64 v103; // [rsp+30h] [rbp-68h]
  __m128 *v104; // [rsp+38h] [rbp-60h]
  __int64 v105; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v106[9]; // [rsp+50h] [rbp-48h] BYREF

  v2 = a1;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 120);
    if ( v3 )
    {
      v4 = *(_BYTE *)(v2 + 544);
      if ( v4 >= 0 )
      {
        *(_BYTE *)(v2 + 544) = v4 | 0x80;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      }
    }
  }
  v5 = (__m128 *)v106;
  sub_22232E0(v106, *(_QWORD *)(v2 + 1792));
  v6 = *(unsigned int *)(v2 + 1800);
  v105 = v106[0];
  sub_22232E0(v106, *(_QWORD *)(v2 + 1792) + 8 * v6);
  v9 = v105;
  *(_QWORD *)&v99 = &v105;
  v10 = v106[0];
  if ( v106[0] != v105 )
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(v2 + 1704);
      v17 = *(unsigned int *)(v16 + 16);
      v18 = *(__m128 **)v16;
      if ( !(_DWORD)v17 )
        goto LABEL_11;
      v11 = *(_QWORD *)(v9 + 8);
      v12 = (unsigned int)(v17 - 1);
      v13 = v12 & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
      v14 = &v18[v13];
      v15 = v14->m128_u64[0];
      if ( v11 != v14->m128_u64[0] )
        break;
LABEL_8:
      sub_13C4310(v5, v14, (__m128 *)v18[(unsigned int)v17].m128_u64, v16, 1);
LABEL_9:
      sub_2223310(v99);
      v9 = v105;
      if ( v10 == v105 )
        goto LABEL_44;
    }
    v55 = 1;
    v56 = nullptr;
    if ( v15 != -4096 )
    {
      while ( 1 )
      {
        if ( v15 == -8192 && !v56 )
          v56 = v14;
        v13 = v12 & (v55 + v13);
        v14 = &v18[v13];
        v15 = v14->m128_u64[0];
        if ( v11 == v14->m128_u64[0] )
          goto LABEL_8;
        if ( v15 == -4096 )
          break;
        ++v55;
      }
      if ( v56 )
        v14 = v56;
    }
    v7 = (unsigned int)(*(_DWORD *)(v16 + 8) + 1);
    v8 = (unsigned int)(4 * v7);
    if ( (unsigned int)v8 >= 3 * (int)v17 )
    {
LABEL_11:
      v100 = *(__m128 **)(v2 + 1704);
      v19 = ((((((((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v17 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 4)
             | (((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v17 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 8)
           | (((((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v17 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v17 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 16;
      v20 = (v19
           | (((((((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v17 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 4)
             | (((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v17 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 8)
           | (((((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v17 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v17 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1))
          + 1;
      if ( (unsigned int)v20 < 0x40 )
        LODWORD(v20) = 64;
      *(_DWORD *)(v16 + 16) = v20;
      v21 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v20, 8, v19, v16, v7, v8);
      v16 = (__int64)v100;
      v100->m128_u64[0] = (unsigned __int64)v21;
      if ( v18 )
      {
        v22 = *(unsigned int *)(v16 + 16);
        *(_QWORD *)(v16 + 8) = 0;
        v23 = 16 * v17;
        v24 = &v18[v17];
        for ( i = &v21[2 * v22]; i != v21; v21 += 2 )
          *v21 = -4096;
        v26 = (__int64 *)v18;
        if ( v18 != v24 )
        {
          v27 = v5;
          v28 = v2;
          v29 = v18;
          v30 = (__int64 *)v24;
          do
          {
            v31 = *v26;
            if ( *v26 != -8192 && v31 != -4096 )
            {
              v32 = *(_DWORD *)(v16 + 16);
              if ( !v32 )
              {
                *(_QWORD *)&dword_0 = *v26;
                BUG();
              }
              v33 = v32 - 1;
              v34 = *(__m128 **)v16;
              v35 = v33 & (((unsigned int)v31 >> 9) ^ ((unsigned int)v31 >> 4));
              v36 = (__m128 *)(*(_QWORD *)v16 + 16LL * v35);
              v37 = v36->m128_u64[0];
              if ( v36->m128_u64[0] != v31 && v37 != -4096 )
              {
                LODWORD(v101) = 1;
                v100 = nullptr;
                LODWORD(v102) = v33;
                while ( 1 )
                {
                  if ( !v100 )
                  {
                    if ( v37 != -8192 )
                      v36 = v100;
                    v100 = v36;
                  }
                  v35 = v102 & ((_DWORD)v101 + v35);
                  v36 = &v34[v35];
                  v37 = v36->m128_u64[0];
                  if ( v31 == v36->m128_u64[0] )
                    break;
                  if ( v37 == -4096 )
                  {
                    if ( v100 )
                      v36 = v100;
                    break;
                  }
                  LODWORD(v101) = (_DWORD)v101 + 1;
                }
              }
              v36->m128_u64[0] = v31;
              v36->m128_u64[1] = v26[1];
              v26[1] = 0;
              ++*(_DWORD *)(v16 + 8);
              v38 = v26[1];
              if ( v38 )
              {
                if ( (v38 & 4) != 0 )
                {
                  v39 = v38 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v39 )
                  {
                    v40 = *(_QWORD *)(v39 + 24);
                    if ( v40 )
                    {
                      if ( (v40 & 4) != 0 )
                      {
                        v41 = (void **)(v40 & 0xFFFFFFFFFFFFFFF8LL);
                        v42 = v41;
                        if ( v41 )
                        {
                          v43 = (void **)*v41;
                          if ( v43 != v42 + 2 )
                          {
                            v104 = v27;
                            v103 = v23;
                            v102 = v16;
                            v101 = v42;
                            v100 = (__m128 *)v39;
                            free(v43);
                            v27 = v104;
                            v23 = v103;
                            v16 = v102;
                            v42 = v101;
                            v39 = (unsigned __int64)v100;
                          }
                          v103 = (__int64)v27;
                          v102 = v23;
                          v101 = (void **)v16;
                          v100 = (__m128 *)v39;
                          operator delete(v42, 0x30u);
                          v27 = (__m128 *)v103;
                          v23 = v102;
                          v16 = (__int64)v101;
                          v39 = (unsigned __int64)v100;
                        }
                      }
                    }
                    v44 = *(_QWORD *)(v39 + 8);
                    if ( v44 )
                    {
                      if ( (v44 & 4) != 0 )
                      {
                        v45 = (void **)(v44 & 0xFFFFFFFFFFFFFFF8LL);
                        if ( (v44 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                        {
                          v46 = *v45;
                          if ( *v45 != v45 + 2 )
                          {
                            v103 = (__int64)v27;
                            v102 = v23;
                            v101 = (void **)v16;
                            v100 = (__m128 *)v45;
                            free(v46);
                            v27 = (__m128 *)v103;
                            v23 = v102;
                            v16 = (__int64)v101;
                            v45 = (void **)v100;
                          }
                          v102 = (__int64)v27;
                          v101 = (void **)v23;
                          v100 = (__m128 *)v16;
                          operator delete(v45, 0x30u);
                          v27 = (__m128 *)v102;
                          v23 = (__int64)v101;
                          v16 = (__int64)v100;
                        }
                      }
                    }
                  }
                }
              }
            }
            v26 += 2;
          }
          while ( v30 != v26 );
          v18 = v29;
          v2 = v28;
          v5 = v27;
        }
        v100 = (__m128 *)v16;
        operator delete(v18, v23, 8);
        v16 = (__int64)v100;
        v21 = (_QWORD *)v100->m128_u64[0];
        v47 = v100[1].m128_i32[0];
        LODWORD(v7) = v100->m128_i32[2] + 1;
      }
      else
      {
        v89 = *(unsigned int *)(v16 + 16);
        *(_QWORD *)(v16 + 8) = 0;
        v47 = v89;
        v90 = &v21[2 * v89];
        if ( v21 != v90 )
        {
          v91 = v21;
          do
          {
            *v91 = -4096;
            v91 += 2;
          }
          while ( v90 != v91 );
        }
        LODWORD(v7) = 1;
      }
      if ( !v47 )
        goto LABEL_147;
      v11 = *(_QWORD *)(v9 + 8);
      v48 = v47 - 1;
      v49 = (v47 - 1) & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
      v14 = (__m128 *)&v21[2 * v49];
      v50 = v14->m128_u64[0];
      if ( v14->m128_u64[0] == v11 )
        goto LABEL_51;
      v51 = 1;
      v52 = nullptr;
      if ( v50 != -4096 )
      {
        while ( 1 )
        {
          if ( v50 != -8192 || v52 )
            v14 = v52;
          v95 = v51 + 1;
          v96 = v48 & (v49 + v51);
          v49 = v96;
          v97 = (__m128 *)&v21[2 * v96];
          v50 = v97->m128_u64[0];
          if ( v11 == v97->m128_u64[0] )
          {
            v14 = (__m128 *)&v21[2 * v96];
            goto LABEL_51;
          }
          if ( v50 == -4096 )
            break;
          v51 = v95;
          v52 = v14;
          v14 = v97;
        }
        if ( v14 )
          goto LABEL_50;
        v14 = (__m128 *)&v21[2 * v96];
      }
    }
    else
    {
      v57 = (unsigned int)v17 >> 3;
      if ( (int)v17 - *(_DWORD *)(v16 + 12) - (int)v7 > (unsigned int)v57 )
      {
LABEL_50:
        v50 = v14->m128_u64[0];
        goto LABEL_51;
      }
      v100 = *(__m128 **)(v2 + 1704);
      v58 = (((((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4) | (v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 8)
          | (((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4)
          | (v12 >> 1)
          | v12
          | (((v12 >> 1) | v12) >> 2);
      v59 = v58 >> 16;
      v60 = ((v58 >> 16) | v58) + 1;
      if ( (unsigned int)v60 < 0x40 )
        LODWORD(v60) = 64;
      *(_DWORD *)(v16 + 16) = v60;
      v61 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v60, 8, v59, v16, v7, v57);
      v16 = (__int64)v100;
      v100->m128_u64[0] = (unsigned __int64)v61;
      if ( v18 )
      {
        v62 = *(unsigned int *)(v16 + 16);
        *(_QWORD *)(v16 + 8) = 0;
        v63 = 16 * v17;
        v64 = &v18[v17];
        for ( j = &v61[2 * v62]; j != v61; v61 += 2 )
          *v61 = -4096;
        v66 = v18;
        do
        {
          v67 = v66->m128_u64[0];
          if ( v66->m128_u64[0] != -4096 && v67 != -8192 )
          {
            v68 = *(_DWORD *)(v16 + 16);
            if ( !v68 )
            {
              *(_QWORD *)&dword_0 = v66->m128_u64[0];
              BUG();
            }
            v69 = v68 - 1;
            v70 = *(__m128 **)v16;
            v71 = v69 & (((unsigned int)v67 >> 9) ^ ((unsigned int)v67 >> 4));
            v72 = (__m128 *)(*(_QWORD *)v16 + 16LL * v71);
            v73 = v72->m128_u64[0];
            if ( v67 != v72->m128_u64[0] && v73 != -4096 )
            {
              LODWORD(v101) = 1;
              v100 = nullptr;
              LODWORD(v102) = v69;
              while ( 1 )
              {
                if ( v73 == -8192 )
                {
                  if ( v100 )
                    v72 = v100;
                  v100 = v72;
                }
                v71 = v102 & ((_DWORD)v101 + v71);
                v72 = &v70[v71];
                v73 = v72->m128_u64[0];
                if ( v67 == v72->m128_u64[0] )
                  break;
                if ( v73 == -4096 )
                {
                  if ( v100 )
                    v72 = v100;
                  break;
                }
                LODWORD(v101) = (_DWORD)v101 + 1;
              }
            }
            v72->m128_u64[0] = v67;
            v72->m128_u64[1] = v66->m128_u64[1];
            v66->m128_u64[1] = 0;
            ++*(_DWORD *)(v16 + 8);
            v74 = v66->m128_i64[1];
            if ( v74 )
            {
              if ( (v74 & 4) != 0 )
              {
                v75 = v74 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v75 )
                {
                  v76 = *(_QWORD *)(v75 + 24);
                  if ( v76 )
                  {
                    if ( (v76 & 4) != 0 )
                    {
                      v77 = (void **)(v76 & 0xFFFFFFFFFFFFFFF8LL);
                      v78 = v77;
                      if ( v77 )
                      {
                        v79 = (void **)*v77;
                        if ( v79 != v78 + 2 )
                        {
                          v104 = v64;
                          v103 = v63;
                          v102 = v16;
                          v101 = v78;
                          v100 = (__m128 *)v75;
                          free(v79);
                          v64 = v104;
                          v63 = v103;
                          v16 = v102;
                          v78 = v101;
                          v75 = (unsigned __int64)v100;
                        }
                        v103 = (__int64)v64;
                        v102 = v63;
                        v101 = (void **)v16;
                        v100 = (__m128 *)v75;
                        operator delete(v78, 0x30u);
                        v64 = (__m128 *)v103;
                        v63 = v102;
                        v16 = (__int64)v101;
                        v75 = (unsigned __int64)v100;
                      }
                    }
                  }
                  v80 = *(_QWORD *)(v75 + 8);
                  if ( v80 )
                  {
                    if ( (v80 & 4) != 0 )
                    {
                      v81 = (void **)(v80 & 0xFFFFFFFFFFFFFFF8LL);
                      if ( (v80 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                      {
                        v82 = *v81;
                        if ( *v81 != v81 + 2 )
                        {
                          v103 = (__int64)v64;
                          v102 = v63;
                          v101 = (void **)v16;
                          v100 = (__m128 *)v81;
                          free(v82);
                          v64 = (__m128 *)v103;
                          v63 = v102;
                          v16 = (__int64)v101;
                          v81 = (void **)v100;
                        }
                        v102 = (__int64)v64;
                        v101 = (void **)v63;
                        v100 = (__m128 *)v16;
                        operator delete(v81, 0x30u);
                        v64 = (__m128 *)v102;
                        v63 = (__int64)v101;
                        v16 = (__int64)v100;
                      }
                    }
                  }
                }
              }
            }
          }
          ++v66;
        }
        while ( v64 != v66 );
        v100 = (__m128 *)v16;
        operator delete(v18, v63, 8);
        v16 = (__int64)v100;
        v61 = (_QWORD *)v100->m128_u64[0];
        v83 = v100[1].m128_i32[0];
        LODWORD(v7) = v100->m128_i32[2] + 1;
      }
      else
      {
        v92 = *(unsigned int *)(v16 + 16);
        *(_QWORD *)(v16 + 8) = 0;
        v83 = v92;
        v93 = &v61[2 * v92];
        if ( v61 != v93 )
        {
          v94 = v61;
          do
          {
            *v94 = -4096;
            v94 += 2;
          }
          while ( v93 != v94 );
        }
        LODWORD(v7) = 1;
      }
      if ( !v83 )
      {
LABEL_147:
        ++*(_DWORD *)(v16 + 8);
        BUG();
      }
      v84 = *(_QWORD *)(v9 + 8);
      v85 = v83 - 1;
      v86 = v85 & (((unsigned int)v84 >> 9) ^ ((unsigned int)v84 >> 4));
      v14 = (__m128 *)&v61[2 * v86];
      v11 = v14->m128_u64[0];
      v50 = v14->m128_u64[0];
      if ( v84 == v14->m128_u64[0] )
        goto LABEL_51;
      v87 = 1;
      v88 = nullptr;
      if ( v11 == -4096 )
      {
        v11 = v84;
      }
      else
      {
        while ( 1 )
        {
          if ( v11 != -8192 || v88 )
            v14 = v88;
          v86 = v85 & (v87 + v86);
          v98 = &v61[2 * v86];
          v50 = *v98;
          if ( v84 == *v98 )
          {
            v11 = *v98;
            v14 = (__m128 *)&v61[2 * v86];
            goto LABEL_51;
          }
          if ( v50 == -4096 )
            break;
          ++v87;
          v88 = v14;
          v11 = *v98;
          v14 = (__m128 *)&v61[2 * v86];
        }
        if ( v14 )
        {
          v50 = v14->m128_u64[0];
          v11 = v84;
LABEL_51:
          *(_DWORD *)(v16 + 8) = v7;
          if ( v50 != -4096 )
            --*(_DWORD *)(v16 + 12);
          goto LABEL_53;
        }
        v11 = v84;
        v14 = (__m128 *)&v61[2 * v86];
      }
    }
    *(_DWORD *)(v16 + 8) = v7;
LABEL_53:
    v14->m128_u64[0] = v11;
    v14->m128_u64[1] = 0;
    sub_13C4310(v5, v14, (_QWORD *)(*(_QWORD *)v16 + 16LL * *(unsigned int *)(v16 + 16)), v16, 1);
    goto LABEL_9;
  }
LABEL_44:
  v53 = *(_QWORD *)(v2 + 1704);
  if ( *(_DWORD *)(v53 + 8) )
    sub_13C4310(v5, *(_QWORD **)v53, (_QWORD *)(*(_QWORD *)v53 + 16LL * *(unsigned int *)(v53 + 16)), v53, 0);
  else
    sub_13C4310(
      v5,
      (_QWORD *)(*(_QWORD *)v53 + 16LL * *(unsigned int *)(v53 + 16)),
      (_QWORD *)(*(_QWORD *)v53 + 16LL * *(unsigned int *)(v53 + 16)),
      v53,
      1);
  *(_QWORD *)&v99 = v106[1];
  return _mm_loadh_ps((const double *)&v99).m128_u64[0];
}
