_DWORD *__fastcall sub_9A2420(__int64 a1, __int64 a2, int a3, char a4)
{
  unsigned __int64 v7; // r14
  _DWORD *v8; // rbx
  size_t v9; // rdx
  void (__fastcall *v10)(_DWORD *, char *, _QWORD, _QWORD, __int64, _QWORD, __int64); // rax
  char v11; // al
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 *v14; // rdi
  unsigned __int64 v15; // rcx
  int v16; // r9d
  unsigned int v17; // eax
  __int64 *v18; // r12
  __int64 v19; // rsi
  unsigned __int64 v20; // rax
  unsigned int v22; // ecx
  int v23; // edx
  __int64 *v24; // r8
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdi
  __int64 v27; // rdx
  unsigned __int64 *v28; // rax
  unsigned __int64 v29; // r9
  __int64 v30; // rax
  _QWORD *v31; // r12
  _QWORD *v32; // rbp
  void *v33; // rdi
  _QWORD *v34; // r12
  _QWORD *v35; // rbp
  void *v36; // rdi
  __int64 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 *v40; // rbp
  __int64 v41; // rax
  __int64 *v42; // r15
  void *v43; // rdi
  int v44; // r15d
  unsigned __int64 v45; // rax
  unsigned int v46; // eax
  __int64 *v47; // rdx
  unsigned int v48; // edi
  __int64 v49; // rsi
  __int64 *v50; // rax
  __int64 *v51; // r10
  unsigned __int64 *v52; // r12
  __int64 *v53; // rbx
  unsigned __int64 v54; // r11
  int v55; // esi
  int v56; // esi
  int v57; // eax
  __int64 v58; // r8
  unsigned int v59; // ecx
  __int64 v60; // r13
  __int64 v61; // rdi
  __int64 *v62; // r14
  __int64 *v63; // r13
  void *v64; // rdi
  int v65; // eax
  unsigned int v66; // edi
  __int64 v67; // rcx
  unsigned __int64 *v68; // r12
  unsigned __int64 v69; // r10
  int v70; // r10d
  __int64 v71; // rax
  __int64 *v72; // rdx
  unsigned int v73; // edi
  __int64 v74; // r9
  __int64 *v75; // rax
  __int64 *v76; // r12
  unsigned __int64 *v77; // rbx
  unsigned __int64 v78; // r11
  int v79; // esi
  int v80; // esi
  int v81; // eax
  __int64 v82; // r8
  unsigned int v83; // ecx
  __int64 v84; // r13
  __int64 v85; // rdi
  __int64 *v86; // r14
  __int64 *v87; // r13
  void *v88; // rdi
  unsigned int v89; // edi
  int v90; // r10d
  unsigned __int64 *v91; // r9
  __int64 v92; // rcx
  __int64 *v93; // rcx
  __int64 *v94; // rcx
  int v95; // r9d
  unsigned __int64 *v96; // r8
  __int64 *v97; // [rsp+8h] [rbp-100h]
  unsigned __int64 *v98; // [rsp+8h] [rbp-100h]
  unsigned int v99; // [rsp+10h] [rbp-F8h]
  _DWORD *v100; // [rsp+10h] [rbp-F8h]
  unsigned int v101; // [rsp+10h] [rbp-F8h]
  _DWORD *v102; // [rsp+10h] [rbp-F8h]
  _QWORD *v103; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v104; // [rsp+38h] [rbp-D0h]
  _QWORD v105[6]; // [rsp+40h] [rbp-C8h] BYREF
  char v106; // [rsp+70h] [rbp-98h]
  unsigned __int64 v107; // [rsp+80h] [rbp-88h] BYREF
  _BYTE *v108; // [rsp+88h] [rbp-80h] BYREF
  __int64 v109; // [rsp+90h] [rbp-78h]
  _BYTE v110[48]; // [rsp+98h] [rbp-70h] BYREF
  char v111; // [rsp+C8h] [rbp-40h]

  v7 = *(unsigned int *)(a2 + 20) + 40LL;
  v8 = (_DWORD *)operator new[](v7);
  memset(v8, 0, v7);
  *v8 = a3;
  v9 = *(unsigned int *)(a2 + 20);
  *((_QWORD *)v8 + 1) = 0;
  v8[4] = -1;
  *((_BYTE *)v8 + 20) = 1;
  v8[6] = 0;
  *((_WORD *)v8 + 14) = 0;
  *((_QWORD *)v8 + 4) = a2;
  memset(v8 + 10, 0, v9);
  v10 = *(void (__fastcall **)(_DWORD *, char *, _QWORD, _QWORD, __int64, _QWORD, __int64))(a2 + 56);
  if ( v10 )
    v10(
      v8,
      (char *)v8 + *(unsigned int *)(a2 + 16) + 40,
      *(unsigned __int8 *)(a2 + 48),
      *(unsigned __int8 *)(a2 + 49),
      1,
      0,
      a2);
  v11 = *((_BYTE *)v8 + 44);
  *((_QWORD *)v8 + 6) = a2;
  v8[10] = 16;
  *(_WORD *)((char *)v8 + 27) = 257;
  *((_BYTE *)v8 + 44) = v11 & 0xA8 | 0x10;
  if ( (*(_QWORD *)a2 & 2) != 0 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    v13 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFFFCLL;
    v14 = *(__int64 **)a1;
    v15 = v13;
    if ( !(_DWORD)v12 )
      goto LABEL_11;
  }
  else
  {
    v12 = *(unsigned int *)(a1 + 16);
    v14 = *(__int64 **)a1;
    v15 = 0;
    LODWORD(v13) = 0;
    if ( !(_DWORD)v12 )
      goto LABEL_11;
  }
  v16 = 1;
  v17 = (v12 - 1) & (((unsigned int)v13 >> 4) ^ ((unsigned int)v13 >> 9));
  v18 = &v14[10 * v17];
  v19 = *v18;
  if ( v15 == *v18 )
  {
LABEL_6:
    if ( v18 != &v14[10 * v12] )
    {
      v20 = *((unsigned int *)v18 + 4);
      if ( v20 >= *((unsigned int *)v18 + 5) )
      {
        v37 = sub_25D5F70(v18 + 1, v18 + 3, 0, 8, &v107);
        *(_QWORD *)(v37 + 8LL * *((unsigned int *)v18 + 4)) = v8;
        v38 = v18[1];
        v39 = 8LL * *((unsigned int *)v18 + 4);
        v40 = (__int64 *)(v38 + v39);
        if ( v38 != v38 + v39 )
        {
          v41 = 0;
          do
          {
            *(_QWORD *)(v37 + v41) = *(_QWORD *)(v38 + v41);
            *(_QWORD *)(v38 + v41) = 0;
            v41 += 8;
          }
          while ( v39 != v41 );
          v42 = (__int64 *)v18[1];
          v40 = &v42[*((unsigned int *)v18 + 4)];
          if ( v42 != v40 )
          {
            do
            {
              while ( 1 )
              {
                v43 = (void *)*--v40;
                if ( !v43 )
                  break;
                operator delete[](v43);
                *v40 = 0;
                if ( v42 == v40 )
                  goto LABEL_40;
              }
            }
            while ( v42 != v40 );
LABEL_40:
            v40 = (__int64 *)v18[1];
          }
        }
        v44 = v107;
        if ( v18 + 3 != v40 )
          free(v40);
        ++*((_DWORD *)v18 + 4);
        v18[1] = v37;
        *((_DWORD *)v18 + 5) = v44;
      }
      else
      {
        *(_QWORD *)(v18[1] + 8 * v20) = v8;
        ++*((_DWORD *)v18 + 4);
      }
      return v8;
    }
  }
  else
  {
    while ( v19 != -4096 )
    {
      v17 = (v12 - 1) & (v16 + v17);
      v18 = &v14[10 * v17];
      v19 = *v18;
      if ( *v18 == v15 )
        goto LABEL_6;
      ++v16;
    }
  }
LABEL_11:
  v106 = a4;
  v103 = v105;
  v104 = 0x600000001LL;
  v107 = v15;
  v105[0] = v8;
  v108 = v110;
  v109 = 0x600000000LL;
  sub_9A20E0((__int64)&v108, (__int64)&v103);
  v22 = *(_DWORD *)(a1 + 16);
  v23 = 0;
  v24 = *(__int64 **)a1;
  v111 = v106;
  if ( !v22 )
    goto LABEL_46;
  v25 = v107;
  v26 = v22 - 1;
  LODWORD(v27) = v26 & (((unsigned int)v107 >> 9) ^ ((unsigned int)v107 >> 4));
  v28 = (unsigned __int64 *)&v24[10 * (unsigned int)v27];
  v29 = *v28;
  if ( *v28 != v107 )
  {
    v70 = 1;
    v68 = nullptr;
    while ( v29 != -4096 )
    {
      if ( v29 == -8192 && !v68 )
        v68 = v28;
      v27 = (unsigned int)v26 & ((_DWORD)v27 + v70);
      v28 = (unsigned __int64 *)&v24[10 * v27];
      v29 = *v28;
      if ( v107 == *v28 )
        goto LABEL_13;
      ++v70;
    }
    v23 = 2 * v22;
    if ( !v68 )
      v68 = v28;
    v65 = *(_DWORD *)(a1 + 8) + 1;
    if ( 4 * v65 < 3 * v22 )
    {
      if ( v22 >> 3 < v22 - *(_DWORD *)(a1 + 12) - v65 )
      {
LABEL_72:
        *(_DWORD *)(a1 + 8) = v65;
        if ( *v68 != -4096 )
          --*(_DWORD *)(a1 + 12);
        *v68 = v25;
        v68[1] = (unsigned __int64)(v68 + 3);
        v68[2] = 0x600000000LL;
        v30 = (unsigned int)v109;
        if ( (_DWORD)v109 )
        {
          sub_9A20E0((__int64)(v68 + 1), (__int64)&v108);
          v30 = (unsigned int)v109;
        }
        *((_BYTE *)v68 + 72) = v111;
        goto LABEL_14;
      }
      v101 = v22;
      v98 = (unsigned __int64 *)v24;
      v71 = (((((((((v26 | (v26 >> 1)) >> 2) | v26 | (v26 >> 1)) >> 4) | ((v26 | (v26 >> 1)) >> 2) | v26 | (v26 >> 1)) >> 8)
             | ((((v26 | (v26 >> 1)) >> 2) | v26 | (v26 >> 1)) >> 4)
             | ((v26 | (v26 >> 1)) >> 2)
             | v26
             | (v26 >> 1)) >> 16)
           | ((((((v26 | (v26 >> 1)) >> 2) | v26 | (v26 >> 1)) >> 4) | ((v26 | (v26 >> 1)) >> 2) | v26 | (v26 >> 1)) >> 8)
           | ((((v26 | (v26 >> 1)) >> 2) | v26 | (v26 >> 1)) >> 4)
           | ((v26 | (v26 >> 1)) >> 2)
           | v26
           | (v26 >> 1))
          + 1;
      if ( (unsigned int)v71 < 0x40 )
        LODWORD(v71) = 64;
      *(_DWORD *)(a1 + 16) = v71;
      v72 = (__int64 *)sub_25CC9C0(80LL * (unsigned int)v71, 8);
      *(_QWORD *)a1 = v72;
      v73 = *(_DWORD *)(a1 + 16);
      v74 = 10LL * v73;
      v75 = &v72[v74];
      if ( v98 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        if ( v74 * 8 )
        {
          if ( ((80 * (_BYTE)v73) & 0x10) == 0 || (*v72 = -4096, v72 += 10, v72 != v75) )
          {
            do
            {
              *v72 = -4096;
              v72 += 20;
              *(v72 - 10) = -4096;
            }
            while ( v72 != v75 );
          }
        }
        v76 = (__int64 *)&v98[10 * v101];
        v102 = v8;
        v77 = v98;
        do
        {
          v78 = *v77;
          if ( *v77 != -4096 && v78 != -8192 )
          {
            v79 = *(_DWORD *)(a1 + 16);
            if ( !v79 )
            {
              *(_QWORD *)&dword_0 = *v77;
              BUG();
            }
            v80 = v79 - 1;
            v81 = 1;
            v82 = 0;
            v83 = v80 & (((unsigned int)v78 >> 9) ^ ((unsigned int)v78 >> 4));
            v84 = *(_QWORD *)a1 + 80LL * v83;
            v85 = *(_QWORD *)v84;
            if ( v78 != *(_QWORD *)v84 )
            {
              while ( v85 != -4096 )
              {
                if ( !v82 && v85 == -8192 )
                  v82 = v84;
                v83 = v80 & (v81 + v83);
                v84 = *(_QWORD *)a1 + 80LL * v83;
                v85 = *(_QWORD *)v84;
                if ( v78 == *(_QWORD *)v84 )
                  goto LABEL_97;
                ++v81;
              }
              if ( v82 )
                v84 = v82;
            }
LABEL_97:
            *(_QWORD *)(v84 + 16) = 0x600000000LL;
            *(__m128i *)v84 = _mm_unpacklo_epi64((__m128i)v78, (__m128i)(unsigned __int64)(v84 + 24));
            if ( *((_DWORD *)v77 + 4) )
              sub_9A20E0(v84 + 8, (__int64)(v77 + 1));
            *(_BYTE *)(v84 + 72) = *((_BYTE *)v77 + 72);
            ++*(_DWORD *)(a1 + 8);
            v86 = (__int64 *)v77[1];
            v87 = &v86[*((unsigned int *)v77 + 4)];
            if ( v86 != v87 )
            {
              do
              {
                while ( 1 )
                {
                  v88 = (void *)*--v87;
                  if ( !v88 )
                    break;
                  operator delete[](v88);
                  *v87 = 0;
                  if ( v86 == v87 )
                    goto LABEL_102;
                }
              }
              while ( v86 != v87 );
LABEL_102:
              v87 = (__int64 *)v77[1];
            }
            if ( v87 != (__int64 *)(v77 + 3) )
              free(v87);
          }
          v77 += 10;
        }
        while ( v76 != (__int64 *)v77 );
        v8 = v102;
        operator delete();
        v72 = *(__int64 **)a1;
        v73 = *(_DWORD *)(a1 + 16);
        v65 = *(_DWORD *)(a1 + 8) + 1;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 0;
        if ( v72 != v75 )
        {
          v93 = v72;
          if ( ((80 * (_BYTE)v73) & 0x10) == 0 || (v93 = v72 + 10, *v72 = -4096, v72 + 10 != v75) )
          {
            do
            {
              *v93 = -4096;
              v93 += 20;
              *(v93 - 10) = -4096;
            }
            while ( v93 != v75 );
          }
        }
        v65 = 1;
      }
      if ( v73 )
      {
        v89 = v73 - 1;
        v90 = 1;
        v91 = nullptr;
        LODWORD(v92) = v89 & (((unsigned int)v107 >> 9) ^ ((unsigned int)v107 >> 4));
        v68 = (unsigned __int64 *)&v72[10 * (unsigned int)v92];
        v25 = *v68;
        if ( v107 != *v68 )
        {
          while ( v25 != -4096 )
          {
            if ( !v91 && v25 == -8192 )
              v91 = v68;
            v92 = v89 & ((_DWORD)v92 + v90);
            v68 = (unsigned __int64 *)&v72[10 * v92];
            v25 = *v68;
            if ( v107 == *v68 )
              goto LABEL_72;
            ++v90;
          }
          v25 = v107;
          if ( v91 )
            v68 = v91;
        }
        goto LABEL_72;
      }
LABEL_162:
      *(_DWORD *)(a1 + 8) = v65;
      BUG();
    }
LABEL_46:
    v99 = v22;
    v97 = v24;
    v45 = (((((((((unsigned int)(v23 - 1) | ((unsigned __int64)(unsigned int)(v23 - 1) >> 1)) >> 2)
              | (unsigned int)(v23 - 1)
              | ((unsigned __int64)(unsigned int)(v23 - 1) >> 1)) >> 4)
            | (((unsigned int)(v23 - 1) | ((unsigned __int64)(unsigned int)(v23 - 1) >> 1)) >> 2)
            | (unsigned int)(v23 - 1)
            | ((unsigned __int64)(unsigned int)(v23 - 1) >> 1)) >> 8)
          | (((((unsigned int)(v23 - 1) | ((unsigned __int64)(unsigned int)(v23 - 1) >> 1)) >> 2)
            | (unsigned int)(v23 - 1)
            | ((unsigned __int64)(unsigned int)(v23 - 1) >> 1)) >> 4)
          | (((unsigned int)(v23 - 1) | ((unsigned __int64)(unsigned int)(v23 - 1) >> 1)) >> 2)
          | (unsigned int)(v23 - 1)
          | ((unsigned __int64)(unsigned int)(v23 - 1) >> 1)) >> 16)
        | (((((((unsigned int)(v23 - 1) | ((unsigned __int64)(unsigned int)(v23 - 1) >> 1)) >> 2)
            | (unsigned int)(v23 - 1)
            | ((unsigned __int64)(unsigned int)(v23 - 1) >> 1)) >> 4)
          | (((unsigned int)(v23 - 1) | ((unsigned __int64)(unsigned int)(v23 - 1) >> 1)) >> 2)
          | (unsigned int)(v23 - 1)
          | ((unsigned __int64)(unsigned int)(v23 - 1) >> 1)) >> 8)
        | (((((unsigned int)(v23 - 1) | ((unsigned __int64)(unsigned int)(v23 - 1) >> 1)) >> 2)
          | (unsigned int)(v23 - 1)
          | ((unsigned __int64)(unsigned int)(v23 - 1) >> 1)) >> 4)
        | (((unsigned int)(v23 - 1) | ((unsigned __int64)(unsigned int)(v23 - 1) >> 1)) >> 2)
        | (unsigned int)(v23 - 1)
        | ((unsigned __int64)(unsigned int)(v23 - 1) >> 1);
    v46 = v45 + 1;
    if ( v46 < 0x40 )
      v46 = 64;
    *(_DWORD *)(a1 + 16) = v46;
    v47 = (__int64 *)sub_25CC9C0(80LL * v46, 8);
    *(_QWORD *)a1 = v47;
    v48 = *(_DWORD *)(a1 + 16);
    v49 = 10LL * v48;
    v50 = &v47[v49];
    if ( v97 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      v51 = &v97[10 * v99];
      if ( v49 * 8 )
      {
        if ( ((80 * (_BYTE)v48) & 0x10) == 0 || (*v47 = -4096, v47 += 10, v47 != v50) )
        {
          do
          {
            *v47 = -4096;
            v47 += 20;
            *(v47 - 10) = -4096;
          }
          while ( v47 != v50 );
        }
      }
      v52 = (unsigned __int64 *)v97;
      if ( v97 != v51 )
      {
        v100 = v8;
        v53 = v51;
        do
        {
          v54 = *v52;
          if ( *v52 != -4096 && v54 != -8192 )
          {
            v55 = *(_DWORD *)(a1 + 16);
            if ( !v55 )
            {
              *(_QWORD *)&dword_0 = *v52;
              BUG();
            }
            v56 = v55 - 1;
            v57 = 1;
            v58 = 0;
            v59 = v56 & (((unsigned int)v54 >> 9) ^ ((unsigned int)v54 >> 4));
            v60 = *(_QWORD *)a1 + 80LL * v59;
            v61 = *(_QWORD *)v60;
            if ( v54 != *(_QWORD *)v60 )
            {
              while ( v61 != -4096 )
              {
                if ( v61 == -8192 && !v58 )
                  v58 = v60;
                v59 = v56 & (v57 + v59);
                v60 = *(_QWORD *)a1 + 80LL * v59;
                v61 = *(_QWORD *)v60;
                if ( v54 == *(_QWORD *)v60 )
                  goto LABEL_59;
                ++v57;
              }
              if ( v58 )
                v60 = v58;
            }
LABEL_59:
            *(_QWORD *)(v60 + 16) = 0x600000000LL;
            *(__m128i *)v60 = _mm_unpacklo_epi64((__m128i)v54, (__m128i)(unsigned __int64)(v60 + 24));
            if ( *((_DWORD *)v52 + 4) )
              sub_9A20E0(v60 + 8, (__int64)(v52 + 1));
            *(_BYTE *)(v60 + 72) = *((_BYTE *)v52 + 72);
            ++*(_DWORD *)(a1 + 8);
            v62 = (__int64 *)v52[1];
            v63 = &v62[*((unsigned int *)v52 + 4)];
            if ( v62 != v63 )
            {
              do
              {
                while ( 1 )
                {
                  v64 = (void *)*--v63;
                  if ( !v64 )
                    break;
                  operator delete[](v64);
                  *v63 = 0;
                  if ( v62 == v63 )
                    goto LABEL_64;
                }
              }
              while ( v62 != v63 );
LABEL_64:
              v63 = (__int64 *)v52[1];
            }
            if ( v63 != (__int64 *)(v52 + 3) )
              free(v63);
          }
          v52 += 10;
        }
        while ( v53 != (__int64 *)v52 );
        v8 = v100;
      }
      operator delete();
      v47 = *(__int64 **)a1;
      v48 = *(_DWORD *)(a1 + 16);
      v65 = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
      if ( v47 != v50 )
      {
        v94 = v47;
        if ( ((80 * (_BYTE)v48) & 0x10) == 0 || (v94 = v47 + 10, *v47 = -4096, v47 + 10 != v50) )
        {
          do
          {
            *v94 = -4096;
            v94 += 20;
            *(v94 - 10) = -4096;
          }
          while ( v94 != v50 );
        }
      }
      v65 = 1;
    }
    if ( v48 )
    {
      v25 = v107;
      v66 = v48 - 1;
      LODWORD(v67) = v66 & (((unsigned int)v107 >> 9) ^ ((unsigned int)v107 >> 4));
      v68 = (unsigned __int64 *)&v47[10 * (unsigned int)v67];
      v69 = *v68;
      if ( *v68 != v107 )
      {
        v95 = 1;
        v96 = nullptr;
        while ( v69 != -4096 )
        {
          if ( v69 == -8192 && !v96 )
            v96 = v68;
          v67 = v66 & ((_DWORD)v67 + v95);
          v68 = (unsigned __int64 *)&v47[10 * v67];
          v69 = *v68;
          if ( v107 == *v68 )
            goto LABEL_72;
          ++v95;
        }
        if ( v96 )
          v68 = v96;
      }
      goto LABEL_72;
    }
    goto LABEL_162;
  }
LABEL_13:
  v30 = (unsigned int)v109;
LABEL_14:
  v31 = v108;
  v32 = &v108[8 * v30];
  if ( v108 != (_BYTE *)v32 )
  {
    do
    {
      while ( 1 )
      {
        v33 = (void *)*--v32;
        if ( !v33 )
          break;
        operator delete[](v33);
        *v32 = 0;
        if ( v31 == v32 )
          goto LABEL_17;
      }
    }
    while ( v31 != v32 );
LABEL_17:
    v32 = v108;
  }
  if ( v32 != (_QWORD *)v110 )
    free(v32);
  v34 = v103;
  v35 = &v103[(unsigned int)v104];
  if ( v103 != v35 )
  {
    do
    {
      while ( 1 )
      {
        v36 = (void *)*--v35;
        if ( !v36 )
          break;
        operator delete[](v36);
        *v35 = 0;
        if ( v34 == v35 )
          goto LABEL_23;
      }
    }
    while ( v34 != v35 );
LABEL_23:
    v35 = v103;
  }
  if ( v35 != v105 )
    free(v35);
  return v8;
}

