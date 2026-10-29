unsigned __int64 __fastcall sub_B3DC20(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 (*v5)(); // rax
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
  _BYTE *v62; // rdx
  char *v63; // r13
  char v64; // cl
  int v65; // edi
  int v66; // edi
  __int64 v67; // r9
  unsigned int v68; // eax
  char *v69; // rbx
  char v70; // dl
  __int64 v71; // rax
  void *v72; // r14
  unsigned int v73; // r12d
  void *v74; // rdi
  int v75; // ecx
  int v76; // ecx
  unsigned int v77; // r8d
  char v78; // si
  int v79; // r10d
  char *v80; // r9
  void *v81; // rdx
  int v82; // eax
  int v83; // edi
  char *v84; // rsi
  int v85; // ecx
  int v86; // ecx
  unsigned int v87; // r11d
  char v88; // si
  int v89; // r9d
  char *v90; // r8
  void *v91; // rax
  size_t v92; // rdx
  int v93; // r8d
  char *v94; // rsi
  __int64 v95; // rdx
  _BYTE *v96; // rdx
  _BYTE *v97; // rsi
  size_t v98; // rdx
  const void *v99; // rsi
  __int64 v100; // rdx
  _BYTE *v101; // rdx
  _BYTE *v102; // rsi
  __int64 v103; // [rsp+0h] [rbp-88h]
  __int64 v104; // [rsp+8h] [rbp-80h]
  char *v105; // [rsp+18h] [rbp-70h]
  char v106; // [rsp+26h] [rbp-62h]
  char v107; // [rsp+27h] [rbp-61h]
  char *i; // [rsp+28h] [rbp-60h]
  char *j; // [rsp+28h] [rbp-60h]
  __int64 v110; // [rsp+30h] [rbp-58h]
  int v111; // [rsp+38h] [rbp-50h]
  __m128 v112[4]; // [rsp+40h] [rbp-48h] BYREF

  v3 = sub_F3F530(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
  v103 = v3;
  if ( !v3 )
    return 0;
  v4 = v3;
  v5 = *(__int64 (**)())(*(_QWORD *)v3 + 32LL);
  if ( v5 == sub_9DD400 )
    v6 = sub_B4CD20(v4);
  else
    v6 = ((__int64 (__fastcall *)(__int64))v5)(v4);
  v7 = (_BYTE *)a1[1];
  v8 = (__int64)(a1 + 1);
  v104 = (__int64)(a1 + 1);
  v9 = &v7[128 * (unsigned __int64)*((unsigned int *)a1 + 6)];
  if ( *((_DWORD *)a1 + 4) )
    sub_B3C7A0(v112, v7, v9, v8, 0);
  else
    sub_B3C7A0(v112, v9, v9, v8, 1);
  v10 = v112[0].m128_u64[1];
  v11 = v112[0].m128_u64[0];
  v12 = (_BYTE *)(a1[1] + ((unsigned __int64)*((unsigned int *)a1 + 6) << 7));
  sub_B3C7A0(v112, v12, v12, v104, 1);
  v13 = v112[0].m128_u64[0];
  while ( v13 != v11 )
  {
    v14 = *(_QWORD *)(v11 + 112);
    v15 = *(__int64 (**)(void))(*(_QWORD *)v14 + 32LL);
    if ( v15 == sub_9DD400 )
    {
      if ( v6 == sub_B4CD20(v14) )
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
  v17 = sub_B6D960(v103 + 64);
  if ( !(unsigned __int8)sub_B6AE60(v17) )
    return 0;
  v18 = 0;
  while ( 1 )
  {
    v19 = *(_QWORD *)(v103 + 40);
    if ( (v19 & 7) == 0 )
    {
      v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v20 )
        break;
    }
    sub_B3C4F0(v18);
    if ( !v28 )
      goto LABEL_29;
LABEL_23:
    if ( ++v18 == 3 )
      return 0;
  }
  v21 = (const void *)(*(_QWORD *)(v20 + 16) + 16LL);
  v22 = sub_B3C4F0(v18);
  if ( v23 != v26 || v23 && memcmp(v22, v21, v23) )
    goto LABEL_23;
LABEL_29:
  v29 = (char *)a1[1];
  v107 = v18;
  v30 = *((unsigned int *)a1 + 6);
  v106 = v18;
  v110 = *a1;
  v105 = v29;
  if ( !(_DWORD)v30 )
    goto LABEL_35;
  v111 = 37 * v18;
  v31 = v30 - 1;
  v25 = ((_DWORD)v30 - 1) & (unsigned int)(37 * v18);
  v32 = &v29[128 * v25];
  v33 = *v32;
  if ( (_BYTE)v18 == *v32 )
  {
LABEL_31:
    sub_B3C7A0(v112, v32, &v105[128 * (unsigned __int64)(unsigned int)v30], v104, 1);
    v34 = v112[0].m128_u64[0];
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
    v32 = &v105[128 * (unsigned __int64)(unsigned int)v25];
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
    v37 = (_BYTE *)sub_220C370((unsigned __int64)(unsigned int)v36 << 7, 8, 64, v29, v24, v25);
    a1[1] = (__int64)v37;
    if ( !v105 )
    {
      v95 = *((unsigned int *)a1 + 6);
      a1[2] = 0;
      v75 = v95;
      v96 = &v37[128 * v95];
      if ( v37 != v96 )
      {
        v97 = v37;
        do
        {
          *v97 = -1;
          v97 += 128;
        }
        while ( v96 != v97 );
      }
      v55 = 1;
LABEL_70:
      if ( v75 )
      {
        v76 = v75 - 1;
        v77 = v76 & (37 * v18);
        v54 = &v37[128 * (unsigned __int64)v77];
        v78 = *v54;
        if ( (_BYTE)v18 != *v54 )
        {
          v79 = 1;
          v80 = nullptr;
          if ( v78 != -1 )
          {
            while ( 1 )
            {
              if ( v78 == -2 && !v80 )
                v80 = v54;
              v77 = v76 & (v79 + v77);
              v54 = &v37[128 * (unsigned __int64)v77];
              v78 = *v54;
              if ( (_BYTE)v18 == *v54 )
                break;
              if ( v78 == -1 )
              {
                if ( v80 )
                  v54 = v80;
                goto LABEL_53;
              }
              ++v79;
            }
          }
        }
        goto LABEL_53;
      }
      goto LABEL_150;
    }
    v38 = *((unsigned int *)a1 + 6);
    a1[2] = 0;
    v39 = &v37[128 * v38];
    for ( i = &v105[128 * v30]; v39 != v37; v37 += 128 )
      *v37 = -1;
    v40 = v105;
    if ( v105 == i )
    {
LABEL_69:
      operator delete();
      v37 = (_BYTE *)a1[1];
      v75 = *((_DWORD *)a1 + 6);
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
      v83 = 1;
      v84 = nullptr;
      if ( v47 != -1 )
      {
        while ( 1 )
        {
          if ( !v84 && v47 == -2 )
            v84 = v46;
          v45 = v43 & (v83 + v45);
          v46 = (char *)(v44 + ((unsigned __int64)v45 << 7));
          v47 = *v46;
          if ( v41 == *v46 )
            break;
          if ( v47 == -1 )
          {
            if ( v84 )
              v46 = v84;
            break;
          }
          ++v83;
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
    v81 = *((void **)v40 + 2);
    if ( v81 != v49 )
    {
      *((_DWORD *)v46 + 6) = v50;
      v82 = *((_DWORD *)v40 + 7);
      *((_QWORD *)v46 + 2) = v81;
      *((_DWORD *)v46 + 7) = v82;
      *((_QWORD *)v40 + 2) = v49;
      *((_DWORD *)v40 + 7) = 0;
      *((_DWORD *)v40 + 6) = 0;
      goto LABEL_47;
    }
    if ( v50 > 5uLL )
    {
      sub_22134E0(v46 + 16, v46 + 32, v50, 16);
      v51 = *((void **)v46 + 2);
      v99 = *((const void **)v40 + 2);
      v98 = 16LL * *((unsigned int *)v40 + 6);
      if ( !v98 )
        goto LABEL_139;
    }
    else
    {
      v98 = 16LL * v50;
      v99 = v40 + 32;
    }
    memcpy(v51, v99, v98);
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
    v60 = (_BYTE *)sub_220C370((unsigned __int64)(unsigned int)v59 << 7, 8, 64, v56, v24, v25);
    a1[1] = (__int64)v60;
    if ( v105 )
    {
      v61 = *((unsigned int *)a1 + 6);
      a1[2] = 0;
      v62 = &v60[128 * v61];
      for ( j = &v105[128 * v30]; v62 != v60; v60 += 128 )
        *v60 = -1;
      v63 = v105;
      do
      {
        v64 = *v63;
        if ( (unsigned __int8)(*v63 + 2) > 1u )
        {
          v65 = *((_DWORD *)a1 + 6);
          if ( !v65 )
          {
            LOBYTE(dword_0) = 0;
            BUG();
          }
          v66 = v65 - 1;
          v67 = a1[1];
          v68 = v66 & (37 * v64);
          v69 = (char *)(v67 + ((unsigned __int64)v68 << 7));
          v70 = *v69;
          if ( v64 != *v69 )
          {
            v93 = 1;
            v94 = nullptr;
            if ( v70 != -1 )
            {
              while ( 1 )
              {
                if ( !v94 && v70 == -2 )
                  v94 = v69;
                v68 = v66 & (v93 + v68);
                v69 = (char *)(v67 + ((unsigned __int64)v68 << 7));
                v70 = *v69;
                if ( v64 == *v69 )
                  break;
                if ( v70 == -1 )
                {
                  if ( v94 )
                    v69 = v94;
                  break;
                }
                ++v93;
              }
            }
          }
          *v69 = v64;
          v71 = *((_QWORD *)v63 + 1);
          v72 = v63 + 32;
          *((_QWORD *)v69 + 2) = v69 + 32;
          *((_QWORD *)v69 + 1) = v71;
          *((_QWORD *)v69 + 3) = 0x500000000LL;
          v73 = *((_DWORD *)v63 + 6);
          if ( v73 && v69 + 16 != v63 + 16 )
          {
            v91 = *((void **)v63 + 2);
            if ( v91 == v72 )
            {
              if ( v73 > 5uLL )
                sub_22134E0(v69 + 16, v69 + 32, v73, 16);
              v92 = 16LL * *((unsigned int *)v63 + 6);
              if ( v92 )
                memcpy(*((void **)v69 + 2), *((const void **)v63 + 2), v92);
              *((_DWORD *)v69 + 6) = v73;
              *((_DWORD *)v63 + 6) = 0;
            }
            else
            {
              *((_QWORD *)v69 + 2) = v91;
              *((_DWORD *)v69 + 6) = v73;
              *((_DWORD *)v69 + 7) = *((_DWORD *)v63 + 7);
              *((_QWORD *)v63 + 2) = v72;
              *((_DWORD *)v63 + 7) = 0;
              *((_DWORD *)v63 + 6) = 0;
            }
          }
          *((_QWORD *)v69 + 14) = *((_QWORD *)v63 + 14);
          v69[120] = v63[120];
          v74 = *((void **)v63 + 2);
          ++*((_DWORD *)a1 + 4);
          if ( v74 != v72 )
            free(v74);
        }
        v63 += 128;
      }
      while ( j != v63 );
      operator delete();
      v60 = (_BYTE *)a1[1];
      v85 = *((_DWORD *)a1 + 6);
      v55 = *((_DWORD *)a1 + 4) + 1;
    }
    else
    {
      v100 = *((unsigned int *)a1 + 6);
      a1[2] = 0;
      v85 = v100;
      v101 = &v60[128 * v100];
      if ( v60 != v101 )
      {
        v102 = v60;
        do
        {
          *v102 = -1;
          v102 += 128;
        }
        while ( v101 != v102 );
      }
      v55 = 1;
    }
    if ( v85 )
    {
      v86 = v85 - 1;
      v87 = v86 & v111;
      v54 = &v60[128 * (unsigned __int64)(v86 & (unsigned int)v111)];
      v88 = *v54;
      if ( v106 != *v54 )
      {
        v89 = 1;
        v90 = nullptr;
        if ( v88 != -1 )
        {
          while ( 1 )
          {
            if ( !v90 && v88 == -2 )
              v90 = v54;
            v87 = v86 & (v89 + v87);
            v54 = &v60[128 * (unsigned __int64)v87];
            v88 = *v54;
            if ( v106 == *v54 )
              break;
            if ( v88 == -1 )
            {
              if ( v90 )
                v54 = v90;
              goto LABEL_53;
            }
            ++v89;
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
  *v54 = v106;
  *((_QWORD *)v54 + 1) = v110;
  *((_QWORD *)v54 + 2) = v54 + 32;
  *((_QWORD *)v54 + 3) = 0x500000000LL;
  *((_QWORD *)v54 + 14) = v103;
  v54[120] = v107;
  sub_B3C7A0(v112, v54, (_BYTE *)(a1[1] + ((unsigned __int64)*((unsigned int *)a1 + 6) << 7)), v104, 1);
  v34 = v112[0].m128_u64[0];
  return v34 + 8;
}

