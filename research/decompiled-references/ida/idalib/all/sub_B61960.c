unsigned __int64 __fastcall sub_B61960(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // r13
  _BYTE *v7; // rsi
  __int64 v8; // rcx
  _BYTE *v9; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r15
  _BYTE *v12; // rsi
  unsigned __int64 v13; // r12
  __int64 v14; // rdi
  __int64 (*v15)(void); // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  int v18; // ebx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  const void *v21; // rsi
  const char *v22; // rax
  size_t v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v28; // rdx
  char *v29; // rcx
  __int64 v30; // r12
  unsigned int v31; // eax
  char *v32; // rsi
  char v33; // dl
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  _BYTE *v37; // rax
  __int64 v38; // rdx
  _BYTE *v39; // rdx
  char *v40; // r13
  char v41; // cl
  int v42; // r8d
  int v43; // r8d
  __int64 v44; // r9
  unsigned int v45; // edx
  char *v46; // r12
  char v47; // al
  __int64 v48; // rax
  void *v49; // r14
  unsigned int v50; // r15d
  void *v51; // rax
  void *v52; // rdi
  int v53; // ecx
  char *v54; // rdi
  int v55; // edx
  __int64 v56; // rcx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  _BYTE *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r15
  _BYTE *v63; // rdx
  char *v64; // r13
  char v65; // cl
  int v66; // edi
  int v67; // edi
  __int64 v68; // r9
  unsigned int v69; // eax
  char *v70; // rbx
  char v71; // dl
  __int64 v72; // rax
  void *v73; // r14
  unsigned int v74; // r12d
  void *v75; // rdi
  int v76; // ecx
  int v77; // ecx
  unsigned int v78; // r8d
  char v79; // si
  int v80; // r10d
  char *v81; // r9
  void *v82; // rdx
  int v83; // eax
  int v84; // edi
  char *v85; // rsi
  int v86; // ecx
  int v87; // ecx
  unsigned int v88; // r11d
  char v89; // si
  int v90; // r9d
  char *v91; // r8
  void *v92; // rax
  size_t v93; // rdx
  int v94; // r8d
  char *v95; // rsi
  __int64 v96; // rdx
  _BYTE *v97; // rdx
  _BYTE *v98; // rsi
  size_t v99; // rdx
  const void *v100; // rsi
  __int64 v101; // rdx
  _BYTE *v102; // rdx
  _BYTE *v103; // rsi
  __int64 v104; // [rsp+0h] [rbp-88h]
  __int64 v105; // [rsp+8h] [rbp-80h]
  char *v106; // [rsp+18h] [rbp-70h]
  char v107; // [rsp+26h] [rbp-62h]
  char v108; // [rsp+27h] [rbp-61h]
  char *i; // [rsp+28h] [rbp-60h]
  char *j; // [rsp+28h] [rbp-60h]
  __int64 v111; // [rsp+30h] [rbp-58h]
  int v112; // [rsp+38h] [rbp-50h]
  __int64 v113; // [rsp+38h] [rbp-50h]
  __m128 v114[4]; // [rsp+40h] [rbp-48h] BYREF

  v3 = sub_F63270(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
  v104 = v3;
  if ( !v3 )
    return 0;
  v4 = v3;
  v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL);
  if ( v5 == sub_A01140 )
    v6 = sub_B70A60(v4);
  else
    v6 = v5(v4);
  v7 = (_BYTE *)a1[1];
  v8 = (__int64)(a1 + 1);
  v105 = (__int64)(a1 + 1);
  v9 = &v7[128 * (unsigned __int64)*((unsigned int *)a1 + 6)];
  if ( *((_DWORD *)a1 + 4) )
    sub_B604E0(v114, v7, v9, v8, 0);
  else
    sub_B604E0(v114, v9, v9, v8, 1);
  v10 = v114[0].m128_u64[1];
  v11 = v114[0].m128_u64[0];
  v12 = (_BYTE *)(a1[1] + ((unsigned __int64)*((unsigned int *)a1 + 6) << 7));
  sub_B604E0(v114, v12, v12, v105, 1);
  v13 = v114[0].m128_u64[0];
  while ( v13 != v11 )
  {
    v14 = *(_QWORD *)(v11 + 112);
    v15 = *(__int64 (**)(void))(*(_QWORD *)v14 + 32LL);
    if ( (char *)v15 == (char *)sub_A01140 )
    {
      if ( v6 == sub_B70A60(v14) )
        return v11 + 8;
    }
    else if ( v6 == v15() )
    {
      return v11 + 8;
    }
    if ( v11 + 128 != v10 )
    {
      if ( *(_BYTE *)(v11 + 128) < 0xFEu )
      {
        v11 += 128LL;
        continue;
      }
      v16 = v11 + 256;
      while ( 1 )
      {
        v11 = v16;
        if ( v16 == v10 )
          break;
        v16 += 128LL;
        if ( *(_BYTE *)v11 < 0xFEu )
          goto LABEL_15;
      }
    }
    v11 = v10;
LABEL_15:
    ;
  }
  v17 = sub_B916A0(v104 + 64);
  if ( !(unsigned __int8)sub_B8EBA0(v17) )
    return 0;
  v18 = 0;
  while ( 1 )
  {
    v19 = *(_QWORD *)(v104 + 40);
    if ( (v19 & 7) == 0 )
    {
      v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v20 )
        break;
    }
    sub_B60230(v18);
    if ( !v28 )
      goto LABEL_29;
LABEL_23:
    if ( ++v18 == 3 )
      return 0;
  }
  v21 = (const void *)(*(_QWORD *)(v20 + 16) + 16LL);
  v22 = sub_B60230(v18);
  if ( v23 != v26 || v23 && memcmp(v22, v21, v23) )
    goto LABEL_23;
LABEL_29:
  v29 = (char *)a1[1];
  v108 = v18;
  v30 = *((unsigned int *)a1 + 6);
  v107 = v18;
  v111 = *a1;
  v106 = v29;
  if ( !(_DWORD)v30 )
    goto LABEL_35;
  v112 = 37 * v18;
  v31 = v30 - 1;
  v25 = ((_DWORD)v30 - 1) & (unsigned int)(37 * v18);
  v32 = &v29[128 * v25];
  v33 = *v32;
  if ( (_BYTE)v18 == *v32 )
  {
LABEL_31:
    sub_B604E0(v114, v32, &v106[128 * (unsigned __int64)(unsigned int)v30], v105, 1);
    v34 = v114[0].m128_u64[0];
    return v34 + 8;
  }
  v53 = 1;
  v54 = nullptr;
  if ( v33 == -1 )
    goto LABEL_50;
  while ( 1 )
  {
    if ( v33 == -2 && !v54 )
      v54 = v32;
    v24 = (unsigned int)(v53 + 1);
    v25 = v31 & (v53 + (_DWORD)v25);
    v32 = &v106[128 * (unsigned __int64)(unsigned int)v25];
    v33 = *v32;
    if ( (_BYTE)v18 == *v32 )
      goto LABEL_31;
    if ( v33 == -1 )
      break;
    ++v53;
  }
  if ( !v54 )
LABEL_50:
    v54 = v32;
  v55 = *((_DWORD *)a1 + 4) + 1;
  v29 = (char *)(unsigned int)(3 * v30);
  if ( 4 * v55 >= (unsigned int)v29 )
  {
LABEL_35:
    v35 = (((((((unsigned int)(2 * v30 - 1) | ((unsigned __int64)(unsigned int)(2 * v30 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v30 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v30 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v30 - 1) | ((unsigned __int64)(unsigned int)(2 * v30 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v30 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v30 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v30 - 1) | ((unsigned __int64)(unsigned int)(2 * v30 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v30 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v30 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v30 - 1) | ((unsigned __int64)(unsigned int)(2 * v30 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v30 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v30 - 1) >> 1);
    v36 = ((v35 >> 16) | v35) + 1;
    if ( (unsigned int)v36 < 0x40 )
      LODWORD(v36) = 64;
    *((_DWORD *)a1 + 6) = v36;
    v37 = (_BYTE *)sub_22300B0((unsigned __int64)(unsigned int)v36 << 7, 8, 64, v29, v24, v25);
    a1[1] = (__int64)v37;
    if ( !v106 )
    {
      v96 = *((unsigned int *)a1 + 6);
      a1[2] = 0;
      v76 = v96;
      v97 = &v37[128 * v96];
      if ( v37 != v97 )
      {
        v98 = v37;
        do
        {
          *v98 = -1;
          v98 += 128;
        }
        while ( v97 != v98 );
      }
      v55 = 1;
LABEL_70:
      if ( v76 )
      {
        v77 = v76 - 1;
        v78 = v77 & (37 * v18);
        v54 = &v37[128 * (unsigned __int64)v78];
        v79 = *v54;
        if ( (_BYTE)v18 != *v54 )
        {
          v80 = 1;
          v81 = nullptr;
          if ( v79 != -1 )
          {
            while ( 1 )
            {
              if ( v79 == -2 && !v81 )
                v81 = v54;
              v78 = v77 & (v80 + v78);
              v54 = &v37[128 * (unsigned __int64)v78];
              v79 = *v54;
              if ( (_BYTE)v18 == *v54 )
                break;
              if ( v79 == -1 )
              {
                if ( v81 )
                  v54 = v81;
                goto LABEL_53;
              }
              ++v80;
            }
          }
        }
        goto LABEL_53;
      }
      goto LABEL_150;
    }
    v38 = *((unsigned int *)a1 + 6);
    a1[2] = 0;
    v113 = v30 << 7;
    v39 = &v37[128 * v38];
    for ( i = &v106[128 * v30]; v39 != v37; v37 += 128 )
      *v37 = -1;
    v40 = v106;
    if ( v106 == i )
    {
LABEL_69:
      operator delete(v106, v113, 8);
      v37 = (_BYTE *)a1[1];
      v76 = *((_DWORD *)a1 + 6);
      v55 = *((_DWORD *)a1 + 4) + 1;
      goto LABEL_70;
    }
    while ( 1 )
    {
      v41 = *v40;
      if ( (unsigned __int8)(*v40 + 2) > 1u )
        break;
LABEL_42:
      v40 += 128;
      if ( i == v40 )
        goto LABEL_69;
    }
    v42 = *((_DWORD *)a1 + 6);
    if ( !v42 )
    {
      LOBYTE(dword_0) = 0;
      BUG();
    }
    v43 = v42 - 1;
    v44 = a1[1];
    v45 = v43 & (37 * v41);
    v46 = (char *)(v44 + ((unsigned __int64)v45 << 7));
    v47 = *v46;
    if ( *v46 != v41 )
    {
      v84 = 1;
      v85 = nullptr;
      if ( v47 != -1 )
      {
        while ( 1 )
        {
          if ( !v85 && v47 == -2 )
            v85 = v46;
          v45 = v43 & (v84 + v45);
          v46 = (char *)(v44 + ((unsigned __int64)v45 << 7));
          v47 = *v46;
          if ( v41 == *v46 )
            break;
          if ( v47 == -1 )
          {
            if ( v85 )
              v46 = v85;
            break;
          }
          ++v84;
        }
      }
    }
    *v46 = v41;
    v48 = *((_QWORD *)v40 + 1);
    v49 = v40 + 32;
    *((_QWORD *)v46 + 3) = 0x500000000LL;
    *((_QWORD *)v46 + 1) = v48;
    v50 = *((_DWORD *)v40 + 6);
    v51 = v46 + 32;
    *((_QWORD *)v46 + 2) = v46 + 32;
    if ( !v50 || v46 + 16 == v40 + 16 )
    {
LABEL_47:
      *((_QWORD *)v46 + 14) = *((_QWORD *)v40 + 14);
      v46[120] = v40[120];
      v52 = *((void **)v40 + 2);
      ++*((_DWORD *)a1 + 4);
      if ( v52 != v49 )
        free(v52);
      goto LABEL_42;
    }
    v82 = *((void **)v40 + 2);
    if ( v82 != v49 )
    {
      *((_DWORD *)v46 + 6) = v50;
      v83 = *((_DWORD *)v40 + 7);
      *((_QWORD *)v46 + 2) = v82;
      *((_DWORD *)v46 + 7) = v83;
      *((_QWORD *)v40 + 2) = v49;
      *((_DWORD *)v40 + 7) = 0;
      *((_DWORD *)v40 + 6) = 0;
      goto LABEL_47;
    }
    if ( v50 > 5uLL )
    {
      sub_2237220(v46 + 16, v46 + 32, v50, 16);
      v51 = *((void **)v46 + 2);
      v100 = *((const void **)v40 + 2);
      v99 = 16LL * *((unsigned int *)v40 + 6);
      if ( !v99 )
        goto LABEL_139;
    }
    else
    {
      v99 = 16LL * v50;
      v100 = v40 + 32;
    }
    memcpy(v51, v100, v99);
LABEL_139:
    *((_DWORD *)v46 + 6) = v50;
    *((_DWORD *)v40 + 6) = 0;
    goto LABEL_47;
  }
  v56 = (unsigned int)(v30 - *((_DWORD *)a1 + 5) - v55);
  if ( (unsigned int)v56 <= (unsigned int)v30 >> 3 )
  {
    v57 = ((v31 | ((unsigned __int64)v31 >> 1)) >> 2) | v31 | ((unsigned __int64)v31 >> 1);
    v58 = (((v57 >> 4) | v57) >> 8) | (v57 >> 4) | v57;
    v59 = ((v58 >> 16) | v58) + 1;
    if ( (unsigned int)v59 < 0x40 )
      LODWORD(v59) = 64;
    *((_DWORD *)a1 + 6) = v59;
    v60 = (_BYTE *)sub_22300B0((unsigned __int64)(unsigned int)v59 << 7, 8, 64, v56, v24, v25);
    a1[1] = (__int64)v60;
    if ( v106 )
    {
      v61 = *((unsigned int *)a1 + 6);
      a1[2] = 0;
      v62 = v30 << 7;
      v63 = &v60[128 * v61];
      for ( j = &v106[128 * v30]; v63 != v60; v60 += 128 )
        *v60 = -1;
      v64 = v106;
      do
      {
        v65 = *v64;
        if ( (unsigned __int8)(*v64 + 2) > 1u )
        {
          v66 = *((_DWORD *)a1 + 6);
          if ( !v66 )
          {
            LOBYTE(dword_0) = 0;
            BUG();
          }
          v67 = v66 - 1;
          v68 = a1[1];
          v69 = v67 & (37 * v65);
          v70 = (char *)(v68 + ((unsigned __int64)v69 << 7));
          v71 = *v70;
          if ( v65 != *v70 )
          {
            v94 = 1;
            v95 = nullptr;
            if ( v71 != -1 )
            {
              while ( 1 )
              {
                if ( !v95 && v71 == -2 )
                  v95 = v70;
                v69 = v67 & (v94 + v69);
                v70 = (char *)(v68 + ((unsigned __int64)v69 << 7));
                v71 = *v70;
                if ( v65 == *v70 )
                  break;
                if ( v71 == -1 )
                {
                  if ( v95 )
                    v70 = v95;
                  break;
                }
                ++v94;
              }
            }
          }
          *v70 = v65;
          v72 = *((_QWORD *)v64 + 1);
          v73 = v64 + 32;
          *((_QWORD *)v70 + 2) = v70 + 32;
          *((_QWORD *)v70 + 1) = v72;
          *((_QWORD *)v70 + 3) = 0x500000000LL;
          v74 = *((_DWORD *)v64 + 6);
          if ( v74 && v70 + 16 != v64 + 16 )
          {
            v92 = *((void **)v64 + 2);
            if ( v92 == v73 )
            {
              if ( v74 > 5uLL )
                sub_2237220(v70 + 16, v70 + 32, v74, 16);
              v93 = 16LL * *((unsigned int *)v64 + 6);
              if ( v93 )
                memcpy(*((void **)v70 + 2), *((const void **)v64 + 2), v93);
              *((_DWORD *)v70 + 6) = v74;
              *((_DWORD *)v64 + 6) = 0;
            }
            else
            {
              *((_QWORD *)v70 + 2) = v92;
              *((_DWORD *)v70 + 6) = v74;
              *((_DWORD *)v70 + 7) = *((_DWORD *)v64 + 7);
              *((_QWORD *)v64 + 2) = v73;
              *((_DWORD *)v64 + 7) = 0;
              *((_DWORD *)v64 + 6) = 0;
            }
          }
          *((_QWORD *)v70 + 14) = *((_QWORD *)v64 + 14);
          v70[120] = v64[120];
          v75 = *((void **)v64 + 2);
          ++*((_DWORD *)a1 + 4);
          if ( v75 != v73 )
            free(v75);
        }
        v64 += 128;
      }
      while ( j != v64 );
      operator delete(v106, v62, 8);
      v60 = (_BYTE *)a1[1];
      v86 = *((_DWORD *)a1 + 6);
      v55 = *((_DWORD *)a1 + 4) + 1;
    }
    else
    {
      v101 = *((unsigned int *)a1 + 6);
      a1[2] = 0;
      v86 = v101;
      v102 = &v60[128 * v101];
      if ( v60 != v102 )
      {
        v103 = v60;
        do
        {
          *v103 = -1;
          v103 += 128;
        }
        while ( v102 != v103 );
      }
      v55 = 1;
    }
    if ( v86 )
    {
      v87 = v86 - 1;
      v88 = v87 & v112;
      v54 = &v60[128 * (unsigned __int64)(v87 & (unsigned int)v112)];
      v89 = *v54;
      if ( v107 != *v54 )
      {
        v90 = 1;
        v91 = nullptr;
        if ( v89 != -1 )
        {
          while ( 1 )
          {
            if ( !v91 && v89 == -2 )
              v91 = v54;
            v88 = v87 & (v90 + v88);
            v54 = &v60[128 * (unsigned __int64)v88];
            v89 = *v54;
            if ( v107 == *v54 )
              break;
            if ( v89 == -1 )
            {
              if ( v91 )
                v54 = v91;
              goto LABEL_53;
            }
            ++v90;
          }
        }
      }
      goto LABEL_53;
    }
LABEL_150:
    ++*((_DWORD *)a1 + 4);
    BUG();
  }
LABEL_53:
  *((_DWORD *)a1 + 4) = v55;
  if ( *v54 != -1 )
    --*((_DWORD *)a1 + 5);
  *v54 = v107;
  *((_QWORD *)v54 + 1) = v111;
  *((_QWORD *)v54 + 2) = v54 + 32;
  *((_QWORD *)v54 + 3) = 0x500000000LL;
  *((_QWORD *)v54 + 14) = v104;
  v54[120] = v108;
  sub_B604E0(v114, v54, (_BYTE *)(a1[1] + ((unsigned __int64)*((unsigned int *)a1 + 6) << 7)), v105, 1);
  v34 = v114[0].m128_u64[0];
  return v34 + 8;
}
