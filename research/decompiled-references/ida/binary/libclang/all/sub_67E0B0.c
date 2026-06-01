__int64 __fastcall sub_67E0B0(__int64 a1, __int64 a2, int a3)
{
  int v4; // r13d
  unsigned int v5; // r12d
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int8 v12; // dl
  __int64 v13; // r12
  unsigned int v14; // r13d
  int v15; // r15d
  _DWORD *v16; // rax
  _DWORD *v17; // rax
  bool v18; // al
  int v19; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // r12
  unsigned __int64 v24; // r13
  unsigned int v25; // ecx
  _QWORD *v26; // r14
  int v27; // edx
  unsigned __int64 v28; // r8
  unsigned __int64 *v29; // rdi
  int v30; // esi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r15
  unsigned int m; // edx
  unsigned int v34; // edx
  unsigned __int64 *v35; // rax
  unsigned __int64 v36; // r9
  int v37; // eax
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  _DWORD *v40; // rax
  unsigned __int64 v41; // r12
  __int64 v42; // rax
  __int64 *v43; // r15
  __int64 v44; // rax
  unsigned __int64 v45; // r12
  __int64 v46; // r15
  unsigned __int64 v47; // r13
  __int64 v48; // rax
  _QWORD *v49; // rcx
  __int64 *v50; // rdi
  __int64 v51; // rsi
  _DWORD *v52; // rax
  char v53; // dl
  _DWORD *v54; // rsi
  __int64 v55; // rax
  _QWORD *v56; // r8
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // r13
  char v60; // dl
  unsigned __int64 v61; // rax
  unsigned int v62; // eax
  _QWORD *v63; // r8
  __int64 v64; // rsi
  _QWORD *v65; // rdx
  _QWORD *v66; // rcx
  _QWORD *v67; // r8
  __int64 v68; // rdi
  int v69; // r11d
  __int64 v70; // r15
  int v71; // r11d
  __int64 v72; // rbx
  __int64 *v73; // r14
  int v74; // r10d
  unsigned int i; // edx
  unsigned int v76; // edx
  __int64 *v77; // rax
  __int64 v78; // r8
  int v79; // esi
  int v80; // r9d
  unsigned __int64 *v81; // rcx
  unsigned int k; // edx
  unsigned int v83; // edx
  unsigned __int64 v84; // r10
  __int64 v85; // rax
  _QWORD *v86; // rdx
  __int64 v87; // rsi
  _QWORD *v88; // rdi
  _QWORD *v89; // r8
  __int64 v90; // rcx
  __int64 v91; // rdi
  int v92; // r10d
  __int64 v93; // rsi
  int v94; // r10d
  __int64 v95; // r11
  int v96; // r9d
  __int64 *v97; // rbx
  unsigned int n; // edx
  unsigned int v99; // edx
  __int64 *v100; // rax
  __int64 v101; // r8
  int v102; // esi
  int v103; // r8d
  unsigned int jj; // r15d
  unsigned int v105; // r15d
  unsigned __int64 v106; // r9
  __int64 *v107; // rdi
  __int64 v108; // rsi
  _DWORD *v109; // rax
  _DWORD *v110; // rdx
  _QWORD *j; // rax
  _QWORD *ii; // rax
  __int64 *v113; // rdi
  __int64 v114; // rcx
  _DWORD *v115; // rax
  _DWORD *v116; // rdx
  __int64 *v117; // rdi
  __int64 v118; // rcx
  _DWORD *v119; // rax
  _DWORD *v120; // rcx
  unsigned int v121; // [rsp+8h] [rbp-60h]
  _QWORD *v122; // [rsp+8h] [rbp-60h]
  unsigned int v123; // [rsp+8h] [rbp-60h]
  _QWORD *v124; // [rsp+8h] [rbp-60h]
  _QWORD *v125; // [rsp+8h] [rbp-60h]
  __int64 v126; // [rsp+10h] [rbp-58h]
  _QWORD *v127; // [rsp+10h] [rbp-58h]
  _QWORD *v128; // [rsp+10h] [rbp-58h]
  _BYTE v129[57]; // [rsp+2Fh] [rbp-39h] BYREF

  if ( !a2 )
    return 1;
  v4 = a3;
  if ( !a3 )
    return 1;
  v8 = a2;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 2152LL);
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
          v11 = v10;
          v12 = *(_BYTE *)(v10 + 28) & 0x7F;
          if ( v12 != 19 )
            break;
          v8 = *(_QWORD *)(v10 + 88);
        }
        if ( v12 != 20 )
          break;
        v8 = sub_7BB6B0(v10);
      }
      if ( (unsigned int)v12 - 32 > 5 )
        break;
      v8 = sub_780E20(v10);
      if ( !v8 )
        goto LABEL_12;
    }
    if ( (unsigned int)v12 - 57 > 2 )
      break;
    v8 = sub_7A47A0(v10);
  }
  while ( v8 );
LABEL_12:
  if ( a3 < 0 )
    v4 = sub_CADBE0(v9, (unsigned int)a3);
  v13 = *(int *)(v9 + 408);
  v14 = v4 & 0x7FFFFFFF;
  v15 = v13 + 1;
  if ( (unsigned int)(v13 + 1) <= 1 )
  {
    v16 = *(_DWORD **)(v9 + 184);
    if ( v14 < (*v16 & 0x7FFFFFFFu) )
      goto LABEL_59;
    goto LABEL_17;
  }
  if ( (int)v13 >= 0 )
  {
    v16 = *(_DWORD **)(v9 + 184);
    if ( v14 < (v16[6 * v13] & 0x7FFFFFFFu) )
      goto LABEL_59;
LABEL_17:
    if ( v15 != *(_DWORD *)(v9 + 192) )
    {
      v17 = &v16[6 * v15];
LABEL_19:
      v18 = v14 < (*v17 & 0x7FFFFFFFu);
      goto LABEL_20;
    }
    goto LABEL_64;
  }
  v38 = (unsigned int)(-2 - v13);
  v39 = *(_QWORD *)(*(_QWORD *)(v9 + 256) + 8LL * ((unsigned int)(-2 - v13) >> 6));
  if ( _bittest64(&v39, v38) )
  {
    v56 = (_QWORD *)(*(_QWORD *)(v9 + 208) + 8 * ((unsigned __int64)(int)v38 >> 5));
    v57 = *v56;
    if ( !*v56 )
    {
      v107 = (__int64 *)(*(_QWORD *)(v9 + 224) & 0xFFFFFFFFFFFFFFF8LL);
      v108 = *v107;
      v107[10] += 768;
      v109 = (_DWORD *)((v108 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v107[1] >= (unsigned __int64)(v109 + 192) && v108 )
      {
        *v107 = (__int64)(v109 + 192);
      }
      else
      {
        v128 = v56;
        v109 = (_DWORD *)sub_67A630((__int64)v107, 768, 3);
        v56 = v128;
        LOBYTE(v38) = -2 - v13;
      }
      *v56 = v109;
      v110 = v109 + 192;
      do
      {
        *v109 = 0;
        v109 += 6;
        *((_OWORD *)v109 - 1) = 0;
      }
      while ( v110 != v109 );
      v57 = *v56;
    }
    v40 = (_DWORD *)(v57 + 24 * (v38 & 0x1F));
  }
  else
  {
    v40 = (_DWORD *)sub_CA9380(v9, (unsigned int)v38, 0);
  }
  if ( v14 < (*v40 & 0x7FFFFFFFu) )
    goto LABEL_59;
  if ( (_DWORD)v13 == -2 )
    goto LABEL_21;
  if ( v15 != *(_DWORD *)(v9 + 192) )
  {
    v41 = (unsigned int)(-2 - v15);
    v42 = *(_QWORD *)(*(_QWORD *)(v9 + 256) + 8LL * ((unsigned int)(-2 - v15) >> 6));
    if ( _bittest64(&v42, v41) )
    {
      v43 = (__int64 *)(*(_QWORD *)(v9 + 208) + 8 * ((unsigned __int64)(int)v41 >> 5));
      v44 = *v43;
      if ( !*v43 )
      {
        v113 = (__int64 *)(*(_QWORD *)(v9 + 224) & 0xFFFFFFFFFFFFFFF8LL);
        v114 = *v113;
        v113[10] += 768;
        v115 = (_DWORD *)((v114 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v113[1] >= (unsigned __int64)(v115 + 192) && v114 )
          *v113 = (__int64)(v115 + 192);
        else
          v115 = (_DWORD *)sub_67A630((__int64)v113, 768, 3);
        *v43 = (__int64)v115;
        v116 = v115 + 192;
        do
        {
          *v115 = 0;
          v115 += 6;
          *((_OWORD *)v115 - 1) = 0;
        }
        while ( v116 != v115 );
        v44 = *v43;
      }
      v17 = (_DWORD *)(v44 + 24 * (v41 & 0x1F));
    }
    else
    {
      v17 = (_DWORD *)sub_CA9380(v9, (unsigned int)v41, 0);
    }
    goto LABEL_19;
  }
LABEL_64:
  v18 = v14 < *(_DWORD *)(v9 + 248);
LABEL_20:
  if ( v18 )
  {
LABEL_21:
    v19 = *(_DWORD *)(v9 + 408);
    goto LABEL_22;
  }
LABEL_59:
  v19 = sub_CA9700(v9, v14);
LABEL_22:
  v129[0] = 0;
  if ( (unsigned int)(v19 + 1) <= 1 )
    return 1;
  if ( v19 >= 0 )
  {
    v20 = *(_QWORD *)(v9 + 184) + 24LL * v19;
    goto LABEL_25;
  }
  v45 = (unsigned int)(-2 - v19);
  v46 = (unsigned int)v45 >> 6;
  v47 = (-2 - (_BYTE)v19) & 0x3F;
  v48 = *(_QWORD *)(*(_QWORD *)(v9 + 256) + 8 * v46);
  if ( _bittest64(&v48, v45) )
  {
    v49 = (_QWORD *)(*(_QWORD *)(v9 + 208) + 8 * ((unsigned __int64)(int)v45 >> 5));
    if ( *v49 )
      goto LABEL_78;
    v50 = (__int64 *)(*(_QWORD *)(v9 + 224) & 0xFFFFFFFFFFFFFFF8LL);
    v51 = *v50;
    v50[10] += 768;
    v52 = (_DWORD *)((v51 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v50[1] >= (unsigned __int64)(v52 + 192) && v51 )
    {
      *v50 = (__int64)(v52 + 192);
      v53 = 0;
    }
    else
    {
      v125 = v49;
      v52 = (_DWORD *)sub_67A630((__int64)v50, 768, 3);
      v53 = v129[0];
      v49 = v125;
    }
    *v49 = v52;
    v54 = v52 + 192;
    do
    {
      *v52 = 0;
      v52 += 6;
      *((_OWORD *)v52 - 1) = 0;
    }
    while ( v54 != v52 );
    v55 = *v49 + 24 * (v45 & 0x1F);
  }
  else
  {
    v55 = sub_CA9380(v9, (unsigned int)v45, v129);
    v53 = v129[0];
  }
  if ( v53 || !v55 )
    return 1;
LABEL_78:
  v129[0] = 0;
  v58 = *(_QWORD *)(*(_QWORD *)(v9 + 256) + 8 * v46);
  if ( _bittest64(&v58, v47) )
  {
    v59 = (_QWORD *)(*(_QWORD *)(v9 + 208) + 8 * ((unsigned __int64)(int)v45 >> 5));
    if ( *v59 )
    {
      v20 = *v59 + 24 * (v45 & 0x1F);
      goto LABEL_25;
    }
    v117 = (__int64 *)(*(_QWORD *)(v9 + 224) & 0xFFFFFFFFFFFFFFF8LL);
    v118 = *v117;
    v117[10] += 768;
    v119 = (_DWORD *)((v118 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v117[1] >= (unsigned __int64)(v119 + 192) && v118 )
    {
      *v117 = (__int64)(v119 + 192);
      v60 = 0;
    }
    else
    {
      v119 = (_DWORD *)sub_67A630((__int64)v117, 768, 3);
      v60 = v129[0];
    }
    *v59 = v119;
    v120 = v119 + 192;
    do
    {
      *v119 = 0;
      v119 += 6;
      *((_OWORD *)v119 - 1) = 0;
    }
    while ( v120 != v119 );
    v20 = *v59 + 24 * (v45 & 0x1F);
  }
  else
  {
    v20 = sub_CA9380(v9, (unsigned int)v45, v129);
    v60 = v129[0];
  }
  if ( v60 || !v20 )
    return 1;
LABEL_25:
  if ( *(char *)(v20 + 3) < 0 )
    return 1;
  v21 = *(_QWORD *)((*(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
  do
  {
    if ( !v21 )
      return 1;
    v22 = *(_QWORD *)(v21 + 8);
    if ( !v22 )
      return 1;
    v23 = *(_QWORD *)(v21 + 8);
    v24 = v22 & 0xFFFFFFFFFFFFFFF8LL;
    v21 = v24;
    v5 = (v23 >> 2) & 1;
  }
  while ( v5 );
  if ( !v24 )
    return 1;
  v25 = *(_DWORD *)(a1 + 136);
  v26 = *(_QWORD **)(a1 + 120);
  v27 = 0;
  if ( !v25 )
  {
LABEL_88:
    v121 = *(_DWORD *)(a1 + 136);
    v61 = (((((((((unsigned int)(v27 - 1) | ((unsigned __int64)(unsigned int)(v27 - 1) >> 1)) >> 2)
              | (unsigned int)(v27 - 1)
              | ((unsigned __int64)(unsigned int)(v27 - 1) >> 1)) >> 4)
            | (((unsigned int)(v27 - 1) | ((unsigned __int64)(unsigned int)(v27 - 1) >> 1)) >> 2)
            | (unsigned int)(v27 - 1)
            | ((unsigned __int64)(unsigned int)(v27 - 1) >> 1)) >> 8)
          | (((((unsigned int)(v27 - 1) | ((unsigned __int64)(unsigned int)(v27 - 1) >> 1)) >> 2)
            | (unsigned int)(v27 - 1)
            | ((unsigned __int64)(unsigned int)(v27 - 1) >> 1)) >> 4)
          | (((unsigned int)(v27 - 1) | ((unsigned __int64)(unsigned int)(v27 - 1) >> 1)) >> 2)
          | (unsigned int)(v27 - 1)
          | ((unsigned __int64)(unsigned int)(v27 - 1) >> 1)) >> 16)
        | (((((((unsigned int)(v27 - 1) | ((unsigned __int64)(unsigned int)(v27 - 1) >> 1)) >> 2)
            | (unsigned int)(v27 - 1)
            | ((unsigned __int64)(unsigned int)(v27 - 1) >> 1)) >> 4)
          | (((unsigned int)(v27 - 1) | ((unsigned __int64)(unsigned int)(v27 - 1) >> 1)) >> 2)
          | (unsigned int)(v27 - 1)
          | ((unsigned __int64)(unsigned int)(v27 - 1) >> 1)) >> 8)
        | (((((unsigned int)(v27 - 1) | ((unsigned __int64)(unsigned int)(v27 - 1) >> 1)) >> 2)
          | (unsigned int)(v27 - 1)
          | ((unsigned __int64)(unsigned int)(v27 - 1) >> 1)) >> 4)
        | (((unsigned int)(v27 - 1) | ((unsigned __int64)(unsigned int)(v27 - 1) >> 1)) >> 2)
        | (unsigned int)(v27 - 1)
        | ((unsigned __int64)(unsigned int)(v27 - 1) >> 1);
    v62 = v61 + 1;
    if ( v62 < 0x40 )
      v62 = 64;
    *(_DWORD *)(a1 + 136) = v62;
    v63 = (_QWORD *)sub_25CC9C0(16LL * v62, 8);
    *(_QWORD *)(a1 + 120) = v63;
    v64 = *(unsigned int *)(a1 + 136);
    v65 = &v63[2 * v64];
    if ( v26 )
    {
      *(_QWORD *)(a1 + 128) = 0;
      v66 = &v26[2 * v121];
      if ( 16 * v64 )
      {
        do
        {
          *v63 = -4096;
          v63 += 2;
          *(v63 - 1) = -4096;
        }
        while ( v63 != v65 );
      }
      v67 = v26;
      if ( v26 != v66 )
      {
        v126 = v11;
        while ( 1 )
        {
          v68 = *v67;
          if ( *v67 == -4096 )
          {
            if ( v67[1] == -4096 )
              goto LABEL_106;
          }
          else if ( v68 == -8192 && v67[1] == -8192 )
          {
            goto LABEL_106;
          }
          v69 = *(_DWORD *)(a1 + 136);
          if ( !v69 )
          {
            *(_QWORD *)&dword_0 = *v67;
            BUG();
          }
          v70 = v67[1];
          v71 = v69 - 1;
          v122 = v67;
          v73 = nullptr;
          v74 = 1;
          for ( i = v71
                  & (((0xBF58476D1CE4E5B9LL
                     * (((unsigned int)v70 >> 9) ^ ((unsigned int)v70 >> 4)
                      | ((unsigned __int64)(((unsigned int)v68 >> 9) ^ ((unsigned int)v68 >> 4)) << 32))) >> 31)
                   ^ (484763065 * (((unsigned int)v70 >> 9) ^ ((unsigned int)v70 >> 4)))); ; i = v71 & v76 )
          {
            v72 = *(_QWORD *)(a1 + 120);
            v77 = (__int64 *)(v72 + 16LL * i);
            v78 = *v77;
            if ( v68 == *v77 && v70 == v77[1] )
            {
              v67 = v122;
              goto LABEL_105;
            }
            if ( v78 == -4096 )
              break;
            if ( v78 == -8192 && v77[1] == -8192 && !v73 )
              v73 = (__int64 *)(v72 + 16LL * i);
LABEL_101:
            v76 = v74 + i;
            ++v74;
          }
          if ( v77[1] != -4096 )
            goto LABEL_101;
          v67 = v122;
          if ( v73 )
            v77 = v73;
LABEL_105:
          *v77 = v68;
          v77[1] = v67[1];
          ++*(_DWORD *)(a1 + 128);
LABEL_106:
          v67 += 2;
          if ( v66 == v67 )
          {
            v11 = v126;
            break;
          }
        }
      }
      operator delete();
      v63 = *(_QWORD **)(a1 + 120);
      LODWORD(v64) = *(_DWORD *)(a1 + 136);
      v37 = *(_DWORD *)(a1 + 128) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 128) = 0;
      for ( j = v63; j != v65; *(j - 1) = -4096 )
      {
        *j = -4096;
        j += 2;
      }
      v37 = 1;
    }
    if ( (_DWORD)v64 )
    {
      v79 = v64 - 1;
      v80 = 1;
      v81 = nullptr;
      for ( k = v79
              & (((0xBF58476D1CE4E5B9LL
                 * (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4)
                  | ((unsigned __int64)(((unsigned int)v24 >> 9) ^ ((unsigned int)v24 >> 4)) << 32))) >> 31)
               ^ (484763065 * (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4)))); ; k = v79 & v83 )
      {
        v29 = &v63[2 * k];
        v84 = *v29;
        if ( *v29 == v24 && v11 == v29[1] )
          break;
        if ( v84 == -4096 )
        {
          if ( v29[1] == -4096 )
          {
LABEL_134:
            if ( v81 )
              v29 = v81;
            goto LABEL_44;
          }
        }
        else if ( v84 == -8192 && v29[1] == -8192 && !v81 )
        {
          v81 = &v63[2 * k];
        }
        v83 = v80 + k;
        ++v80;
      }
      goto LABEL_44;
    }
LABEL_211:
    *(_DWORD *)(a1 + 128) = v37;
    BUG();
  }
  v28 = v25 - 1;
  v29 = nullptr;
  v30 = 1;
  v31 = 0xBF58476D1CE4E5B9LL
      * (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4)
       | ((unsigned __int64)(((unsigned int)v24 >> 4) ^ ((unsigned int)v24 >> 9)) << 32));
  v32 = (v31 >> 31) ^ v31;
  for ( m = v32 & (v25 - 1); ; m = v28 & v34 )
  {
    v35 = &v26[2 * m];
    v36 = *v35;
    if ( *v35 == v24 )
      break;
    if ( v36 == -4096 )
      goto LABEL_39;
LABEL_34:
    if ( v36 == -8192 && v35[1] == -8192 && !v29 )
      v29 = &v26[2 * m];
LABEL_35:
    v34 = v30 + m;
    ++v30;
  }
  if ( v11 == v35[1] )
    return 1;
  if ( v36 != -4096 )
    goto LABEL_34;
LABEL_39:
  if ( v35[1] != -4096 )
    goto LABEL_35;
  v27 = 2 * v25;
  if ( !v29 )
    v29 = v35;
  v37 = *(_DWORD *)(a1 + 128) + 1;
  if ( 4 * v37 >= 3 * v25 )
    goto LABEL_88;
  if ( v25 >> 3 < v25 - *(_DWORD *)(a1 + 132) - v37 )
    goto LABEL_44;
  v123 = *(_DWORD *)(a1 + 136);
  v85 = (((((((((v28 | (v28 >> 1)) >> 2) | v28 | (v28 >> 1)) >> 4) | ((v28 | (v28 >> 1)) >> 2) | v28 | (v28 >> 1)) >> 8)
         | ((((v28 | (v28 >> 1)) >> 2) | v28 | (v28 >> 1)) >> 4)
         | ((v28 | (v28 >> 1)) >> 2)
         | v28
         | (v28 >> 1)) >> 16)
       | ((((((v28 | (v28 >> 1)) >> 2) | v28 | (v28 >> 1)) >> 4) | ((v28 | (v28 >> 1)) >> 2) | v28 | (v28 >> 1)) >> 8)
       | ((((v28 | (v28 >> 1)) >> 2) | v28 | (v28 >> 1)) >> 4)
       | ((v28 | (v28 >> 1)) >> 2)
       | v28
       | (v28 >> 1))
      + 1;
  if ( (unsigned int)v85 < 0x40 )
    LODWORD(v85) = 64;
  *(_DWORD *)(a1 + 136) = v85;
  v86 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v85, 8);
  *(_QWORD *)(a1 + 120) = v86;
  v87 = *(unsigned int *)(a1 + 136);
  v88 = &v86[2 * v87];
  if ( v26 )
  {
    *(_QWORD *)(a1 + 128) = 0;
    v124 = &v26[2 * v123];
    if ( 16 * v87 )
    {
      do
      {
        *v86 = -4096;
        v86 += 2;
        *(v86 - 1) = -4096;
      }
      while ( v86 != v88 );
    }
    v89 = v26;
    v90 = v11;
    while ( 1 )
    {
      v91 = *v89;
      if ( *v89 == -4096 )
      {
        if ( v89[1] == -4096 )
          goto LABEL_154;
      }
      else if ( v91 == -8192 && v89[1] == -8192 )
      {
        goto LABEL_154;
      }
      v92 = *(_DWORD *)(a1 + 136);
      if ( !v92 )
      {
        *(_QWORD *)&dword_0 = *v89;
        BUG();
      }
      v93 = v89[1];
      v94 = v92 - 1;
      v127 = v89;
      v95 = *(_QWORD *)(a1 + 120);
      v96 = 1;
      v97 = nullptr;
      for ( n = v94
              & (((0xBF58476D1CE4E5B9LL
                 * (((unsigned int)v93 >> 9) ^ ((unsigned int)v93 >> 4)
                  | ((unsigned __int64)(((unsigned int)v91 >> 9) ^ ((unsigned int)v91 >> 4)) << 32))) >> 31)
               ^ (484763065 * (((unsigned int)v93 >> 9) ^ ((unsigned int)v93 >> 4)))); ; n = v94 & v99 )
      {
        v100 = (__int64 *)(v95 + 16LL * n);
        v101 = *v100;
        if ( v91 == *v100 && v93 == v100[1] )
        {
          v89 = v127;
          goto LABEL_153;
        }
        if ( v101 == -4096 )
          break;
        if ( v101 == -8192 && v100[1] == -8192 && !v97 )
          v97 = (__int64 *)(v95 + 16LL * n);
LABEL_149:
        v99 = v96 + n;
        ++v96;
      }
      if ( v100[1] != -4096 )
        goto LABEL_149;
      v89 = v127;
      if ( v97 )
        v100 = v97;
LABEL_153:
      *v100 = v91;
      v100[1] = v89[1];
      ++*(_DWORD *)(a1 + 128);
LABEL_154:
      v89 += 2;
      if ( v124 == v89 )
      {
        v11 = v90;
        operator delete();
        v86 = *(_QWORD **)(a1 + 120);
        LODWORD(v87) = *(_DWORD *)(a1 + 136);
        v37 = *(_DWORD *)(a1 + 128) + 1;
        goto LABEL_156;
      }
    }
  }
  *(_QWORD *)(a1 + 128) = 0;
  for ( ii = v86; ii != v88; *(ii - 1) = -4096 )
  {
    *ii = -4096;
    ii += 2;
  }
  v37 = 1;
LABEL_156:
  if ( !(_DWORD)v87 )
    goto LABEL_211;
  v102 = v87 - 1;
  v103 = 1;
  v81 = nullptr;
  for ( jj = v102 & v32; ; jj = v102 & v105 )
  {
    v29 = &v86[2 * jj];
    v106 = *v29;
    if ( *v29 == v24 && v11 == v29[1] )
      break;
    if ( v106 == -4096 )
    {
      if ( v29[1] == -4096 )
        goto LABEL_134;
    }
    else if ( v106 == -8192 && v29[1] == -8192 && !v81 )
    {
      v81 = &v86[2 * jj];
    }
    v105 = v103 + jj;
    ++v103;
  }
LABEL_44:
  *(_DWORD *)(a1 + 128) = v37;
  if ( *v29 != -4096 || v29[1] != -4096 )
    --*(_DWORD *)(a1 + 132);
  *v29 = v24;
  v29[1] = v11;
  return v5;
}

