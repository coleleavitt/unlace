__int64 *__fastcall sub_20C1010(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 v2; // r13
  __int64 v3; // rcx
  __int64 **v4; // rbp
  __int64 **v5; // r9
  int v6; // eax
  __int64 v7; // r15
  __int64 v8; // r8
  unsigned __int64 v9; // rsi
  unsigned int v10; // r12d
  unsigned int v11; // ecx
  __int64 **v12; // rax
  __int64 *v13; // rdx
  __int64 *v14; // r14
  void **v15; // rbp
  int v17; // edi
  __int64 *v18; // rdx
  void *v19; // r14
  size_t v20; // rdx
  size_t v21; // r12
  __int64 v22; // rax
  size_t v23; // rbx
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // r15d
  __int64 *v30; // r14
  __int64 *v31; // rax
  __int64 v32; // rdx
  unsigned int v33; // eax
  size_t v34; // r15
  _QWORD *v35; // rax
  __int64 **v36; // rcx
  __int64 v37; // r12
  unsigned int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 *v43; // rax
  __int64 v44; // r9
  __int64 **v45; // rcx
  void *v46; // rsi
  void *v47; // rbx
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 *v51; // r8
  __int64 v52; // rdx
  __int64 v53; // r15
  __int64 *v54; // r12
  _QWORD *k; // rdx
  __int64 *v56; // rbp
  __int64 *v57; // r14
  __int64 v58; // rax
  int v59; // edx
  int v60; // edi
  __int64 v61; // rsi
  __int64 v62; // rcx
  _QWORD *v63; // rdx
  __int64 v64; // r8
  __int64 v65; // rax
  void *v66; // rbx
  int v67; // esi
  int v68; // edi
  __int64 v69; // r9
  unsigned __int64 v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 *v73; // r8
  char *v74; // r15
  _QWORD *i; // rdx
  __int64 *v76; // r14
  __int64 *v77; // rbx
  __int64 *v78; // r15
  int v79; // esi
  int v80; // esi
  __int64 v81; // r9
  __int64 v82; // rcx
  _QWORD *v83; // rdx
  __int64 v84; // rdi
  __int64 v85; // rax
  void *v86; // rbp
  int v87; // esi
  __int64 v88; // rdi
  unsigned int v89; // r12d
  int v90; // r9d
  __int64 v91; // rdx
  _QWORD *m; // rdx
  __int64 v93; // rdx
  _QWORD *j; // rdx
  _QWORD *v95; // r9
  int v96; // r10d
  _QWORD *v97; // r8
  int v98; // r10d
  __int64 **v99; // r10
  int v100; // r11d
  pthread_mutex_t *mutex; // [rsp+0h] [rbp-128h]
  void *src; // [rsp+8h] [rbp-120h]
  __int64 **v103; // [rsp+10h] [rbp-118h]
  __int64 *v104; // [rsp+18h] [rbp-110h]
  void *v105; // [rsp+20h] [rbp-108h] BYREF
  size_t n; // [rsp+28h] [rbp-100h]
  void *v107; // [rsp+30h] [rbp-F8h] BYREF
  size_t v108; // [rsp+38h] [rbp-F0h]
  _QWORD v109[2]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 (__fastcall **v110)(); // [rsp+50h] [rbp-D8h] BYREF
  int v111; // [rsp+58h] [rbp-D0h]
  __int128 v112; // [rsp+60h] [rbp-C8h]
  __int64 v113; // [rsp+70h] [rbp-B8h]
  char v114; // [rsp+78h] [rbp-B0h]
  int v115; // [rsp+7Ch] [rbp-ACh]
  void **v116; // [rsp+80h] [rbp-A8h]
  __int64 *v117[4]; // [rsp+90h] [rbp-98h] BYREF
  char v118; // [rsp+B0h] [rbp-78h]
  _QWORD v119[2]; // [rsp+B8h] [rbp-70h] BYREF
  _QWORD v120[2]; // [rsp+C8h] [rbp-60h] BYREF
  _QWORD v121[10]; // [rsp+D8h] [rbp-50h] BYREF

  v1 = a1;
  v2 = qword_2CFDB00;
  if ( !qword_2CFDB00 )
  {
    if ( !byte_2CFDCD9[0] )
      return nullptr;
    sub_20C0B40();
    v2 = qword_2CFDB00;
    if ( !qword_2CFDB00 )
      return nullptr;
  }
  v4 = (__int64 **)(*(__int64 (__fastcall **)(__int64 *))(*a1 + 104))(a1);
  if ( v4 )
    return nullptr;
  if ( qword_2CFDB00 || !byte_2CFDCD9[0] )
  {
    if ( !qword_2CFDB30 )
LABEL_18:
      sub_2230020(&qword_2CFDB30, sub_20C09B0, sub_20C0990);
  }
  else
  {
    sub_20C0B40();
    if ( !qword_2CFDB30 )
      goto LABEL_18;
  }
  mutex = qword_2CFDB30;
  if ( &_pthread_key_create )
  {
    v6 = pthread_mutex_lock(qword_2CFDB30);
    if ( v6 )
      std::__throw_system_error(v6);
  }
  v7 = *(unsigned int *)(v2 + 40);
  v8 = *(_QWORD *)(v2 + 24);
  if ( !(_DWORD)v7 )
    goto LABEL_50;
  v9 = (unsigned int)(v7 - 1);
  v10 = ((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4);
  v11 = v9 & v10;
  v12 = (__int64 **)(v8 + 16LL * ((unsigned int)v9 & v10));
  v13 = *v12;
  if ( a1 != *v12 )
  {
    v5 = nullptr;
    v17 = 1;
    if ( v13 != (__int64 *)-4096LL )
    {
      while ( 1 )
      {
        if ( !v5 && v13 == (__int64 *)-8192LL )
          v5 = v12;
        v11 = v9 & (v17 + v11);
        v12 = (__int64 **)(v8 + 16LL * v11);
        v13 = *v12;
        if ( v1 == *v12 )
          goto LABEL_9;
        if ( v13 == (__int64 *)-4096LL )
          break;
        ++v17;
      }
      if ( v5 )
        v12 = v5;
    }
    v3 = (unsigned int)(*(_DWORD *)(v2 + 32) + 1);
    if ( 4 * (int)v3 < (unsigned int)(3 * v7) )
    {
      if ( (int)v7 - *(_DWORD *)(v2 + 36) - (int)v3 > (unsigned int)v7 >> 3 )
      {
LABEL_22:
        v18 = *v12;
        goto LABEL_23;
      }
      src = *(void **)(v2 + 24);
      v70 = (((v9 >> 1) | v9 | (((v9 >> 1) | v9) >> 2)) >> 4) | (v9 >> 1) | v9 | (((v9 >> 1) | v9) >> 2);
      v71 = ((((v70 >> 8) | v70) >> 16) | (v70 >> 8) | v70) + 1;
      if ( (unsigned int)v71 < 0x40 )
        LODWORD(v71) = 64;
      *(_DWORD *)(v2 + 40) = v71;
      v72 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v71, 8, 64, v3, v8, v5);
      v73 = (__int64 *)src;
      *(_QWORD *)(v2 + 24) = v72;
      if ( v73 )
      {
        *(_QWORD *)(v2 + 32) = 0;
        src = (void *)(16LL * (unsigned int)v7);
        v74 = (char *)src + (_QWORD)v73;
        for ( i = &v72[2 * *(unsigned int *)(v2 + 40)]; i != v72; v72 += 2 )
          *v72 = -4096;
        v103 = nullptr;
        v76 = v73;
        v104 = v1;
        v77 = (__int64 *)v74;
        v78 = v73;
        do
        {
          v58 = *v76;
          if ( *v76 != -4096 && v58 != -8192 )
          {
            v79 = *(_DWORD *)(v2 + 40);
            if ( !v79 )
              goto LABEL_147;
            v80 = v79 - 1;
            v81 = *(_QWORD *)(v2 + 24);
            LODWORD(v82) = v80 & (((unsigned int)v58 >> 9) ^ ((unsigned int)v58 >> 4));
            v83 = (_QWORD *)(v81 + 16LL * (unsigned int)v82);
            v84 = *v83;
            if ( v58 != *v83 )
            {
              v97 = nullptr;
              v98 = 1;
              if ( v84 != -4096 )
              {
                while ( 1 )
                {
                  if ( v84 == -8192 && !v97 )
                    v97 = v83;
                  v82 = v80 & (unsigned int)(v82 + v98);
                  v83 = (_QWORD *)(v81 + 16 * v82);
                  v84 = *v83;
                  if ( v58 == *v83 )
                    break;
                  if ( v84 == -4096 )
                  {
                    if ( v97 )
                      v83 = v97;
                    break;
                  }
                  ++v98;
                }
              }
            }
            *v83 = v58;
            v85 = v76[1];
            v76[1] = 0;
            v83[1] = v85;
            v86 = (void *)v76[1];
            ++*(_DWORD *)(v2 + 32);
            if ( v86 )
            {
              sub_224F490(v86);
              operator delete(v86, 0xB0u);
            }
          }
          v76 += 2;
        }
        while ( v77 != v76 );
        v4 = v103;
        v1 = v104;
        operator delete(v78, src, 8);
        v87 = *(_DWORD *)(v2 + 40);
        LODWORD(v3) = *(_DWORD *)(v2 + 32) + 1;
      }
      else
      {
        v93 = *(unsigned int *)(v2 + 40);
        *(_QWORD *)(v2 + 32) = 0;
        v87 = v93;
        for ( j = &v72[2 * v93]; j != v72; v72 += 2 )
          *v72 = -4096;
        LODWORD(v3) = 1;
      }
      if ( v87 )
      {
        v9 = (unsigned int)(v87 - 1);
        v88 = *(_QWORD *)(v2 + 24);
        v89 = v9 & v10;
        v12 = (__int64 **)(v88 + 16LL * v89);
        v18 = *v12;
        if ( v1 != *v12 )
        {
          v90 = 1;
          if ( v18 != (__int64 *)-4096LL )
          {
            while ( 1 )
            {
              if ( v18 == (__int64 *)-8192LL && !v4 )
                v4 = v12;
              v89 = v9 & (v90 + v89);
              v12 = (__int64 **)(v88 + 16LL * v89);
              v18 = *v12;
              if ( v1 == *v12 )
                goto LABEL_23;
              if ( v18 == (__int64 *)-4096LL )
              {
                if ( !v4 )
                  goto LABEL_69;
                v18 = *v4;
                v12 = v4;
                goto LABEL_23;
              }
              ++v90;
            }
          }
          goto LABEL_69;
        }
        goto LABEL_23;
      }
      goto LABEL_146;
    }
LABEL_50:
    src = *(void **)(v2 + 24);
    v48 = (((((((unsigned int)(2 * v7 - 1) | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v7 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v7 - 1) | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v7 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v7 - 1) | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v7 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v7 - 1) | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v7 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1);
    v49 = ((v48 >> 16) | v48) + 1;
    if ( (unsigned int)v49 < 0x40 )
      LODWORD(v49) = 64;
    *(_DWORD *)(v2 + 40) = v49;
    v50 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v49, 8, 64, v3, v8, v5);
    v51 = (__int64 *)src;
    *(_QWORD *)(v2 + 24) = v50;
    if ( v51 )
    {
      v52 = *(unsigned int *)(v2 + 40);
      v53 = 2 * v7;
      *(_QWORD *)(v2 + 32) = 0;
      v54 = &v51[v53];
      for ( k = &v50[2 * v52]; k != v50; v50 += 2 )
        *v50 = -4096;
      v56 = v51;
      if ( v51 != v54 )
      {
        src = v1;
        v57 = v51;
        do
        {
          v58 = *v56;
          if ( *v56 != -8192 && v58 != -4096 )
          {
            v59 = *(_DWORD *)(v2 + 40);
            if ( !v59 )
            {
LABEL_147:
              *(_QWORD *)&dword_0 = v58;
              BUG();
            }
            v60 = v59 - 1;
            v61 = *(_QWORD *)(v2 + 24);
            LODWORD(v62) = (v59 - 1) & (((unsigned int)v58 >> 9) ^ ((unsigned int)v58 >> 4));
            v63 = (_QWORD *)(v61 + 16LL * (unsigned int)v62);
            v64 = *v63;
            if ( *v63 != v58 )
            {
              v95 = nullptr;
              v96 = 1;
              if ( v64 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v95 && v64 == -8192 )
                    v95 = v63;
                  v62 = v60 & (unsigned int)(v62 + v96);
                  v63 = (_QWORD *)(v61 + 16 * v62);
                  v64 = *v63;
                  if ( v58 == *v63 )
                    break;
                  if ( v64 == -4096 )
                  {
                    if ( v95 )
                      v63 = v95;
                    break;
                  }
                  ++v96;
                }
              }
            }
            *v63 = v58;
            v65 = v56[1];
            v56[1] = 0;
            v63[1] = v65;
            v66 = (void *)v56[1];
            ++*(_DWORD *)(v2 + 32);
            if ( v66 )
            {
              sub_224F490(v66);
              operator delete(v66, 0xB0u);
            }
          }
          v56 += 2;
        }
        while ( v54 != v56 );
        v1 = (__int64 *)src;
        v51 = v57;
      }
      operator delete(v51, v53 * 8, 8);
      v67 = *(_DWORD *)(v2 + 40);
      LODWORD(v3) = *(_DWORD *)(v2 + 32) + 1;
    }
    else
    {
      v91 = *(unsigned int *)(v2 + 40);
      *(_QWORD *)(v2 + 32) = 0;
      v67 = v91;
      for ( m = &v50[2 * v91]; m != v50; v50 += 2 )
        *v50 = -4096;
      LODWORD(v3) = 1;
    }
    if ( v67 )
    {
      v68 = v67 - 1;
      v69 = *(_QWORD *)(v2 + 24);
      v9 = (v67 - 1) & (((unsigned int)v1 >> 9) ^ ((unsigned int)v1 >> 4));
      v12 = (__int64 **)(v69 + 16 * v9);
      v18 = *v12;
      if ( v1 != *v12 )
      {
        if ( v18 != (__int64 *)-4096LL )
        {
          v99 = (__int64 **)(v69 + 16LL * (v68 & (((unsigned int)v1 >> 9) ^ ((unsigned int)v1 >> 4))));
          v100 = 1;
          v12 = nullptr;
          while ( 1 )
          {
            if ( v18 == (__int64 *)-8192LL && !v12 )
              v12 = v99;
            v9 = v68 & (unsigned int)(v100 + v9);
            v99 = (__int64 **)(v69 + 16LL * (unsigned int)v9);
            v18 = *v99;
            if ( v1 == *v99 )
            {
              v12 = (__int64 **)(v69 + 16LL * (unsigned int)v9);
              goto LABEL_23;
            }
            if ( v18 == (__int64 *)-4096LL )
              break;
            ++v100;
          }
          if ( v12 )
            goto LABEL_22;
          v12 = (__int64 **)(v69 + 16LL * (unsigned int)v9);
        }
LABEL_69:
        *(_DWORD *)(v2 + 32) = v3;
LABEL_25:
        *v12 = v1;
        v15 = (void **)(v12 + 1);
        v12[1] = nullptr;
        goto LABEL_26;
      }
LABEL_23:
      *(_DWORD *)(v2 + 32) = v3;
      if ( v18 != (__int64 *)-4096LL )
        --*(_DWORD *)(v2 + 36);
      goto LABEL_25;
    }
LABEL_146:
    ++*(_DWORD *)(v2 + 32);
    BUG();
  }
LABEL_9:
  v14 = v12[1];
  v15 = (void **)(v12 + 1);
  if ( !v14 )
  {
LABEL_26:
    v19 = (void *)(*(__int64 (__fastcall **)(__int64 *))(*v1 + 16))(v1);
    v21 = v20;
    v22 = sub_20BFA70(v1[2], v9);
    if ( !v22 || (v23 = *(_QWORD *)(v22 + 24), src = *(void **)(v22 + 16), !v23) )
    {
      src = v19;
      v23 = v21;
    }
    v105 = v19;
    n = v21;
    v24 = sub_2244B30(src, v23);
    v25 = sub_2244CB0(v2, src, v23, v24);
    v29 = v25;
    v30 = (__int64 *)(*(_QWORD *)v2 + 8LL * v25);
    if ( *v30 )
    {
      if ( *v30 != -8 )
      {
        sub_E37610(v117, v30, 0);
        v31 = v117[0];
        goto LABEL_31;
      }
      --*(_DWORD *)(v2 + 16);
    }
    v37 = sub_22300B0(v23 + 17, 8, v25, v26, v27, v28);
    if ( v23 )
      memcpy((void *)(v37 + 16), src, v23);
    *(_BYTE *)(v37 + v23 + 16) = 0;
    *(_QWORD *)v37 = v23;
    *(_DWORD *)(v37 + 8) = 0;
    *v30 = v37;
    ++*(_DWORD *)(v2 + 12);
    v38 = sub_22450D0(v2, v29);
    sub_E37610(v117, (__int64 *)(*(_QWORD *)v2 + 8LL * v38), 0);
    v31 = v117[0];
LABEL_31:
    v32 = *v31;
    v33 = *(_DWORD *)(*v31 + 8) + 1;
    *(_DWORD *)(v32 + 8) = v33;
    if ( v33 > 1 )
    {
      v117[0] = (__int64 *)"{0} #{1}";
      v117[2] = v121;
      v119[1] = v32 + 8;
      v112 = 0;
      v119[0] = off_2C72810;
      v117[1] = (_QWORD *)byte_8;
      LOBYTE(v109[0]) = 0;
      v120[0] = off_2C71488;
      v120[1] = &v105;
      v121[0] = v120;
      v121[1] = v119;
      v107 = v109;
      v117[3] = (_QWORD *)(&dword_0 + 2);
      v118 = 1;
      v110 = &off_2BEBE68;
      v108 = 0;
      v111 = 0;
      v114 = 0;
      v115 = 1;
      v113 = 0;
      v116 = &v107;
      sub_227B8B0(&v110, 0, 0, 0);
      sub_227C750(&v110, v117);
      if ( v113 != (_QWORD)v112 )
        sub_227B9F0(&v110, v117, v39, v40, v41, v42, mutex);
      v110 = &off_2BEBE68;
      sub_227B7A0(&v110);
      v36 = (__int64 **)v107;
      v34 = v108;
      goto LABEL_45;
    }
    v34 = (size_t)v105;
    if ( !v105 )
    {
      LOBYTE(v109[0]) = 0;
      v108 = 0;
      v36 = (__int64 **)v109;
      v107 = v109;
      goto LABEL_45;
    }
    v35 = v109;
    v107 = v109;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v35 = (_QWORD *)operator new(n + 1);
      v109[0] = n;
      v107 = v35;
    }
    else
    {
      if ( n == 1 )
      {
        LOBYTE(v109[0]) = *(_BYTE *)v105;
LABEL_36:
        v108 = n;
        *((_BYTE *)v35 + n) = 0;
        v36 = (__int64 **)v107;
        v34 = v108;
LABEL_45:
        v103 = v36;
        v43 = (__int64 *)operator new(0xB0u);
        v44 = *(_QWORD *)(v2 + 48);
        *(_OWORD *)v43 = 0;
        v14 = v43;
        v43 += 12;
        v45 = v103;
        *(_OWORD *)(v43 - 7) = 0;
        v46 = src;
        *(v43 - 10) = 0;
        *(v43 - 9) = 0;
        *(v43 - 8) = 0;
        *(v43 - 5) = 0;
        *(v43 - 4) = 0;
        *(v43 - 3) = 0;
        v14[10] = (__int64)v43;
        v14[14] = (__int64)(v14 + 16);
        v14[11] = 0;
        *((_BYTE *)v14 + 96) = 0;
        v14[15] = 0;
        *((_BYTE *)v14 + 128) = 0;
        *((_WORD *)v14 + 72) = 0;
        v14[21] = 0;
        *(_OWORD *)(v14 + 19) = 0;
        sub_2253190(v14, v46, v23, v45, v34, v44);
        if ( v107 != v109 )
          operator delete(v107);
        v47 = *v15;
        *v15 = v14;
        if ( v47 )
        {
          sub_224F490(v47);
          operator delete(v47, 0xB0u);
          v14 = (__int64 *)*v15;
        }
        goto LABEL_10;
      }
      if ( !n )
        goto LABEL_36;
    }
    memcpy(v35, v105, n);
    v35 = v107;
    goto LABEL_36;
  }
LABEL_10:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(mutex);
  return v14;
}
