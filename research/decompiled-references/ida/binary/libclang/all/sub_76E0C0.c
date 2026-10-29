bool __fastcall sub_76E0C0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  char v4; // dl
  unsigned __int64 *v5; // rcx
  int v6; // r13d
  int v7; // r9d
  unsigned __int64 *v8; // rdi
  unsigned int v9; // r8d
  unsigned __int64 *v10; // rax
  unsigned __int64 v11; // rsi
  _DWORD *v12; // rax
  __int64 v14; // r13
  int v15; // eax
  unsigned int v16; // esi
  unsigned int v17; // r14d
  unsigned int v18; // edx
  unsigned __int64 *v19; // r13
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // edi
  _QWORD *v30; // rdx
  _QWORD *v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // r9
  int v34; // r8d
  int v35; // r14d
  __int64 *v36; // r11
  __int64 v37; // rdi
  __int64 *v38; // rdx
  __int64 v39; // r10
  unsigned __int64 *v40; // r12
  __int64 v41; // r13
  __int64 v42; // rax
  unsigned __int64 *v43; // rdi
  unsigned __int64 *v44; // rax
  unsigned __int64 *i; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // r10
  int v48; // r9d
  int v49; // r15d
  __int64 *v50; // r14
  __int64 v51; // r8
  __int64 *v52; // rcx
  __int64 v53; // r11
  int v54; // r9d
  int v55; // eax
  __int64 v56; // rsi
  int v57; // ecx
  unsigned int v58; // edx
  unsigned __int64 v59; // r8
  int v60; // r10d
  unsigned __int64 *v61; // r9
  int v62; // eax
  _QWORD *v63; // r13
  unsigned int v64; // edx
  unsigned __int64 v65; // rax
  unsigned int v66; // r15d
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r8
  unsigned __int64 *v70; // rdi
  _QWORD *v71; // rdx
  unsigned __int64 *j; // rax
  unsigned __int64 v73; // rdx
  __int64 v74; // r10
  int v75; // r9d
  unsigned int v76; // r8d
  __int64 *v77; // rcx
  __int64 v78; // r11
  int v79; // r9d
  char v80; // al
  _QWORD *v81; // r8
  int v82; // edx
  _QWORD *v83; // rcx
  int v84; // edx
  unsigned int v85; // r12d
  int v86; // r9d
  unsigned __int64 *v87; // r8
  unsigned __int64 v88; // rsi
  int v89; // r8d
  unsigned __int64 *v90; // r13
  __int64 *v91; // r12
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  _QWORD *v99; // rax
  bool v100; // zf
  _QWORD *v101; // rdx
  unsigned __int64 v102; // rdx
  __int64 v103; // rdi
  int v104; // esi
  int v105; // r10d
  __int64 *v106; // r9
  __int64 v107; // rcx
  __int64 *v108; // rax
  __int64 v109; // r8
  int v110; // esi
  __int64 *v111; // r14
  unsigned __int64 v112; // rdx
  __int64 v113; // rax
  int v114; // [rsp+4h] [rbp-C4h]
  __int64 v115; // [rsp+10h] [rbp-B8h] BYREF
  int v116; // [rsp+18h] [rbp-B0h]
  _BYTE v117[168]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
  v4 = *(_BYTE *)(a1 + 32) & 1;
  if ( v4 )
  {
    v5 = (unsigned __int64 *)(a1 + 40);
    v6 = 7;
  }
  else
  {
    LODWORD(v14) = *(_DWORD *)(a1 + 48);
    v5 = *(unsigned __int64 **)(a1 + 40);
    if ( !(_DWORD)v14 )
      goto LABEL_56;
    v6 = v14 - 1;
  }
  v7 = 1;
  v8 = nullptr;
  v9 = v6 & (v3 ^ (v3 >> 9));
  v10 = &v5[2 * v9];
  v11 = *v10;
  if ( v3 == *v10 )
  {
LABEL_4:
    v12 = v10 + 1;
    return (*v12 & 1) + (*v12 >> 1) > 1;
  }
  while ( v11 )
  {
    if ( v11 == -1 && !v8 )
      v8 = v10;
    v9 = v6 & (v7 + v9);
    v10 = &v5[2 * v9];
    v11 = *v10;
    if ( v3 == *v10 )
      goto LABEL_4;
    ++v7;
  }
  if ( !v8 )
    v8 = v10;
  v15 = (*(_DWORD *)(a1 + 32) >> 1) + 1;
  v16 = 4 * v15;
  if ( v4 )
  {
    if ( v16 > 0x17 )
    {
      v90 = (unsigned __int64 *)&v115;
      v91 = &v115;
      if ( a1 + 40 != a1 + 168 )
      {
        v90 = (unsigned __int64 *)&v115;
        v91 = &v115;
        if ( (unsigned __int64)(*(_QWORD *)(a1 + 40) - 1LL) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          v115 = *(_QWORD *)(a1 + 40);
          v91 = (__int64 *)v117;
          v116 = *(_DWORD *)(a1 + 48);
        }
        v92 = *(_QWORD *)(a1 + 56);
        if ( (unsigned __int64)(v92 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *v91 = v92;
          v91 += 2;
          *((_DWORD *)v91 - 2) = *(_DWORD *)(a1 + 64);
        }
        v93 = *(_QWORD *)(a1 + 72);
        if ( (unsigned __int64)(v93 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *v91 = v93;
          v91 += 2;
          *((_DWORD *)v91 - 2) = *(_DWORD *)(a1 + 80);
        }
        v94 = *(_QWORD *)(a1 + 88);
        if ( (unsigned __int64)(v94 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *v91 = v94;
          v91 += 2;
          *((_DWORD *)v91 - 2) = *(_DWORD *)(a1 + 96);
        }
        v95 = *(_QWORD *)(a1 + 104);
        if ( (unsigned __int64)(v95 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *v91 = v95;
          v91 += 2;
          *((_DWORD *)v91 - 2) = *(_DWORD *)(a1 + 112);
        }
        v96 = *(_QWORD *)(a1 + 120);
        if ( (unsigned __int64)(v96 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *v91 = v96;
          v91 += 2;
          *((_DWORD *)v91 - 2) = *(_DWORD *)(a1 + 128);
        }
        v97 = *(_QWORD *)(a1 + 136);
        if ( (unsigned __int64)(v97 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *v91 = v97;
          v91 += 2;
          *((_DWORD *)v91 - 2) = *(_DWORD *)(a1 + 144);
        }
        v98 = *(_QWORD *)(a1 + 152);
        if ( (unsigned __int64)(v98 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *v91 = v98;
          v91 += 2;
          *((_DWORD *)v91 - 2) = *(_DWORD *)(a1 + 160);
        }
      }
      *(_BYTE *)(a1 + 32) &= ~1u;
      v99 = (_QWORD *)sub_25CC9C0(1024, 8);
      v100 = (*(_QWORD *)(a1 + 32) & 1LL) == 0;
      *(_QWORD *)(a1 + 32) &= 1uLL;
      *(_QWORD *)(a1 + 40) = v99;
      v101 = v99 + 128;
      *(_DWORD *)(a1 + 48) = 64;
      if ( !v100 )
      {
        v101 = (_QWORD *)(a1 + 168);
        v99 = (_QWORD *)(a1 + 40);
      }
      if ( (((_BYTE)v101 - (_BYTE)v99) & 0x10) == 0 || (*v99 = 0, v99 += 2, v99 != v101) )
      {
        do
        {
          *v99 = 0;
          v99 += 4;
          *(v99 - 2) = 0;
        }
        while ( v99 != v101 );
      }
      LOBYTE(v55) = *(_BYTE *)(a1 + 32);
      if ( v91 != &v115 )
      {
        do
        {
          v102 = *v90;
          if ( *v90 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            if ( (v55 & 1) != 0 )
            {
              v103 = a1 + 40;
              v104 = 7;
            }
            else
            {
              v110 = *(_DWORD *)(a1 + 48);
              v103 = *(_QWORD *)(a1 + 40);
              if ( !v110 )
              {
                *(_QWORD *)&dword_0 = *v90;
                BUG();
              }
              v104 = v110 - 1;
            }
            v105 = 1;
            v106 = nullptr;
            LODWORD(v107) = v104 & (v102 ^ (v102 >> 9));
            v108 = (__int64 *)(v103 + 16LL * (unsigned int)v107);
            v109 = *v108;
            if ( v102 != *v108 )
            {
              while ( v109 )
              {
                if ( v109 == -1 && !v106 )
                  v106 = v108;
                v107 = v104 & (unsigned int)(v107 + v105);
                v108 = (__int64 *)(v103 + 16 * v107);
                v109 = *v108;
                if ( v102 == *v108 )
                  goto LABEL_156;
                ++v105;
              }
              if ( v106 )
                v108 = v106;
            }
LABEL_156:
            *v108 = *v90;
            *((_DWORD *)v108 + 2) = *((_DWORD *)v90 + 2);
            v55 = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1;
            *(_DWORD *)(a1 + 32) = v55;
          }
          v90 += 2;
        }
        while ( v91 != (__int64 *)v90 );
      }
LABEL_83:
      if ( (v55 & 1) != 0 )
      {
        v56 = a1 + 40;
        v57 = 7;
      }
      else
      {
        v62 = *(_DWORD *)(a1 + 48);
        v56 = *(_QWORD *)(a1 + 40);
        if ( !v62 )
          goto LABEL_205;
        v57 = v62 - 1;
      }
      v58 = v57 & (v3 ^ (v3 >> 9));
      v15 = (*(_DWORD *)(a1 + 32) >> 1) + 1;
      v8 = (unsigned __int64 *)(v56 + 16LL * v58);
      v59 = *v8;
      if ( v3 != *v8 )
      {
        v60 = 1;
        v61 = nullptr;
        while ( v59 )
        {
          if ( v59 == -1 && !v61 )
            v61 = v8;
          v58 = v57 & (v60 + v58);
          v8 = (unsigned __int64 *)(v56 + 16LL * v58);
          v59 = *v8;
          if ( v3 == *v8 )
            goto LABEL_19;
          ++v60;
        }
        if ( v61 )
          v8 = v61;
      }
      goto LABEL_19;
    }
    if ( (unsigned int)(8 - *(_DWORD *)(a1 + 36) - v15) > 1 )
      goto LABEL_19;
    v19 = (unsigned __int64 *)&v115;
    v20 = &v115;
    if ( a1 + 40 != a1 + 168 )
    {
      v19 = (unsigned __int64 *)&v115;
      v20 = &v115;
      if ( (unsigned __int64)(*(_QWORD *)(a1 + 40) - 1LL) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        v115 = *(_QWORD *)(a1 + 40);
        v20 = (__int64 *)v117;
        v116 = *(_DWORD *)(a1 + 48);
      }
      v21 = *(_QWORD *)(a1 + 56);
      if ( (unsigned __int64)(v21 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        *v20 = v21;
        v20 += 2;
        *((_DWORD *)v20 - 2) = *(_DWORD *)(a1 + 64);
      }
      v22 = *(_QWORD *)(a1 + 72);
      if ( (unsigned __int64)(v22 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        *v20 = v22;
        v20 += 2;
        *((_DWORD *)v20 - 2) = *(_DWORD *)(a1 + 80);
      }
      v23 = *(_QWORD *)(a1 + 88);
      if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        *v20 = v23;
        v20 += 2;
        *((_DWORD *)v20 - 2) = *(_DWORD *)(a1 + 96);
      }
      v24 = *(_QWORD *)(a1 + 104);
      if ( (unsigned __int64)(v24 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        *v20 = v24;
        v20 += 2;
        *((_DWORD *)v20 - 2) = *(_DWORD *)(a1 + 112);
      }
      v25 = *(_QWORD *)(a1 + 120);
      if ( (unsigned __int64)(v25 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        *v20 = v25;
        v20 += 2;
        *((_DWORD *)v20 - 2) = *(_DWORD *)(a1 + 128);
      }
      v26 = *(_QWORD *)(a1 + 136);
      if ( (unsigned __int64)(v26 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        *v20 = v26;
        v20 += 2;
        *((_DWORD *)v20 - 2) = *(_DWORD *)(a1 + 144);
      }
      v27 = *(_QWORD *)(a1 + 152);
      if ( (unsigned __int64)(v27 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        *v20 = v27;
        v20 += 2;
        *((_DWORD *)v20 - 2) = *(_DWORD *)(a1 + 160);
      }
    }
    v28 = *(_QWORD *)(a1 + 32) & 1LL;
    *(_QWORD *)(a1 + 32) = v28;
    LOBYTE(v29) = v28;
    if ( (_BYTE)v28 )
    {
      v30 = (_QWORD *)(a1 + 168);
      v31 = (_QWORD *)(a1 + 40);
    }
    else
    {
      v81 = *(_QWORD **)(a1 + 40);
      v31 = v81;
      v30 = &v81[2 * *(unsigned int *)(a1 + 48)];
      if ( v81 == v30 )
      {
        if ( v20 == &v115 )
        {
LABEL_116:
          v82 = *(_DWORD *)(a1 + 48);
          v83 = v81;
          if ( v82 )
          {
            v84 = v82 - 1;
            goto LABEL_118;
          }
LABEL_205:
          *(_DWORD *)(a1 + 32) = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1;
          BUG();
        }
        goto LABEL_49;
      }
    }
    if ( (((_BYTE)v30 - (_BYTE)v31) & 0x10) == 0 || (*v31 = 0, v31 += 2, v31 != v30) )
    {
      do
      {
        *v31 = 0;
        v31 += 4;
        *(v31 - 2) = 0;
      }
      while ( v31 != v30 );
    }
    LOBYTE(v29) = *(_BYTE *)(a1 + 32);
    if ( v20 == &v115 )
    {
LABEL_159:
      v80 = v29 & 1;
LABEL_114:
      if ( v80 )
      {
        v83 = (_QWORD *)(a1 + 40);
        v84 = 7;
LABEL_118:
        v85 = v84 & (v3 ^ (v3 >> 9));
        v86 = 1;
        v87 = nullptr;
        v8 = &v83[2 * v85];
        v15 = (*(_DWORD *)(a1 + 32) >> 1) + 1;
        v88 = *v8;
        if ( v3 != *v8 )
        {
          while ( v88 )
          {
            if ( v88 == -1 && !v87 )
              v87 = v8;
            v85 = v84 & (v86 + v85);
            v8 = &v83[2 * v85];
            v88 = *v8;
            if ( v3 == *v8 )
              goto LABEL_19;
            ++v86;
          }
          if ( v87 )
            v8 = v87;
        }
        goto LABEL_19;
      }
      v81 = *(_QWORD **)(a1 + 40);
      goto LABEL_116;
    }
    do
    {
LABEL_49:
      v32 = *v19;
      if ( *v19 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
      {
        if ( (v29 & 1) != 0 )
        {
          v33 = a1 + 40;
          v34 = 7;
        }
        else
        {
          v89 = *(_DWORD *)(a1 + 48);
          v33 = *(_QWORD *)(a1 + 40);
          if ( !v89 )
          {
            *(_QWORD *)&dword_0 = *v19;
            BUG();
          }
          v34 = v89 - 1;
        }
        v35 = 1;
        v36 = nullptr;
        LODWORD(v37) = v34 & (v32 ^ (v32 >> 9));
        v38 = (__int64 *)(v33 + 16LL * (unsigned int)v37);
        v39 = *v38;
        if ( *v38 != v32 )
        {
          while ( v39 )
          {
            if ( !v36 && v39 == -1 )
              v36 = v38;
            v37 = v34 & (unsigned int)(v37 + v35);
            v38 = (__int64 *)(v33 + 16 * v37);
            v39 = *v38;
            if ( v32 == *v38 )
              goto LABEL_53;
            ++v35;
          }
          if ( v36 )
            v38 = v36;
        }
LABEL_53:
        *v38 = *v19;
        *((_DWORD *)v38 + 2) = *((_DWORD *)v19 + 2);
        v29 = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1;
        *(_DWORD *)(a1 + 32) = v29;
      }
      v19 += 2;
    }
    while ( v20 != (__int64 *)v19 );
    goto LABEL_159;
  }
  v17 = *(_DWORD *)(a1 + 48);
  v18 = 2 * v17;
  if ( v16 >= 3 * v17 )
  {
    v40 = *(unsigned __int64 **)(a1 + 40);
    if ( v18 > 8 )
    {
      v112 = (v18 - 1) | ((unsigned __int64)(v18 - 1) >> 1);
      v14 = (((((v112 | (v112 >> 2)) >> 4)
             | v112
             | (v112 >> 2)
             | ((((v112 | (v112 >> 2)) >> 4) | v112 | (v112 >> 2)) >> 8)) >> 16)
           | ((v112 | (v112 >> 2)) >> 4)
           | v112
           | (v112 >> 2)
           | ((((v112 | (v112 >> 2)) >> 4) | v112 | (v112 >> 2)) >> 8))
          + 1;
      if ( (unsigned int)v14 < 0x40 )
        LODWORD(v14) = 64;
      v113 = sub_25CC9C0(16LL * (unsigned int)v14, 8);
      *(_DWORD *)(a1 + 48) = v14;
      *(_QWORD *)(a1 + 40) = v113;
      v5 = (unsigned __int64 *)v113;
      goto LABEL_57;
    }
    v5 = *(unsigned __int64 **)(a1 + 40);
    LODWORD(v14) = *(_DWORD *)(a1 + 48);
LABEL_56:
    *(_BYTE *)(a1 + 32) |= 1u;
    v40 = v5;
    v17 = v14;
LABEL_57:
    v41 = 2LL * (unsigned int)v14;
    v42 = *(_QWORD *)(a1 + 32) & 1LL;
    v43 = &v40[2 * v17];
    *(_QWORD *)(a1 + 32) = v42;
    if ( v42 )
    {
      v5 = (unsigned __int64 *)(a1 + 40);
      v41 = 16;
    }
    v44 = &v5[v41];
    if ( v5 != &v5[v41] )
    {
      if ( ((v41 * 8) & 0x10) == 0 || (*v5 = 0, v5 += 2, v44 != v5) )
      {
        do
        {
          *v5 = 0;
          v5 += 4;
          *(v5 - 2) = 0;
        }
        while ( v44 != v5 );
      }
    }
    for ( i = v40; v43 != i; i += 2 )
    {
      v46 = *i;
      if ( *i - 1 <= 0xFFFFFFFFFFFFFFFDLL )
      {
        if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
        {
          v47 = a1 + 40;
          v48 = 7;
        }
        else
        {
          v54 = *(_DWORD *)(a1 + 48);
          v47 = *(_QWORD *)(a1 + 40);
          if ( !v54 )
          {
            *(_QWORD *)&dword_0 = *i;
            BUG();
          }
          v48 = v54 - 1;
        }
        v49 = 1;
        v50 = nullptr;
        LODWORD(v51) = v48 & (v46 ^ (v46 >> 9));
        v52 = (__int64 *)(v47 + 16LL * (unsigned int)v51);
        v53 = *v52;
        if ( *v52 != v46 )
        {
          while ( v53 )
          {
            if ( v53 == -1 && !v50 )
              v50 = v52;
            v51 = v48 & (unsigned int)(v51 + v49);
            v52 = (__int64 *)(v47 + 16 * v51);
            v53 = *v52;
            if ( v46 == *v52 )
              goto LABEL_70;
            ++v49;
          }
          if ( v50 )
            v52 = v50;
        }
LABEL_70:
        *v52 = *i;
        *((_DWORD *)v52 + 2) = *((_DWORD *)i + 2);
        *(_DWORD *)(a1 + 32) = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1;
      }
    }
    operator delete();
    LOBYTE(v55) = *(_BYTE *)(a1 + 32);
    goto LABEL_83;
  }
  if ( v17 >> 3 >= v17 - *(_DWORD *)(a1 + 36) - v15 )
  {
    v63 = *(_QWORD **)(a1 + 40);
    if ( v17 <= 8 )
    {
      *(_BYTE *)(a1 + 32) |= 1u;
      v66 = v17;
      v67 = v63;
    }
    else
    {
      v64 = 64;
      v65 = ((((((((((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2)
                 | (v17 - 1)
                 | ((unsigned __int64)(v17 - 1) >> 1)) >> 4)
               | (((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2)
               | (v17 - 1)
               | ((unsigned __int64)(v17 - 1) >> 1)) >> 8)
             | (((((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2) | (v17 - 1)
                                                                         | ((unsigned __int64)(v17 - 1) >> 1)) >> 4)
             | (((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2)
             | (v17 - 1)
             | ((unsigned __int64)(v17 - 1) >> 1)) >> 16)
           | (((((((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2) | (v17 - 1)
                                                                         | ((unsigned __int64)(v17 - 1) >> 1)) >> 4)
             | (((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2)
             | (v17 - 1)
             | ((unsigned __int64)(v17 - 1) >> 1)) >> 8)
           | (((((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2) | (v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 4)
           | (((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2)
           | (v17 - 1)
           | ((unsigned __int64)(v17 - 1) >> 1))
          + 1;
      if ( (unsigned int)v65 >= 0x40 )
        v64 = v65;
      v66 = v64;
      v67 = (_QWORD *)sub_25CC9C0(16LL * v64, 8);
      *(_DWORD *)(a1 + 48) = v66;
      *(_QWORD *)(a1 + 40) = v67;
    }
    v68 = 2LL * v66;
    v69 = *(_QWORD *)(a1 + 32) & 1LL;
    v70 = &v63[2 * v17];
    *(_QWORD *)(a1 + 32) = v69;
    if ( v69 )
    {
      v67 = (_QWORD *)(a1 + 40);
      v68 = 16;
    }
    v71 = &v67[v68];
    if ( v67 != v71 )
    {
      if ( (((_BYTE)v71 - (_BYTE)v67) & 0x10) == 0 || (*v67 = 0, v67 += 2, v71 != v67) )
      {
        do
        {
          *v67 = 0;
          v67 += 4;
          *(v67 - 2) = 0;
        }
        while ( v71 != v67 );
      }
    }
    for ( j = v63; v70 != j; j += 2 )
    {
      v73 = *j;
      if ( *j - 1 <= 0xFFFFFFFFFFFFFFFDLL )
      {
        if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
        {
          v74 = a1 + 40;
          v75 = 7;
        }
        else
        {
          v79 = *(_DWORD *)(a1 + 48);
          v74 = *(_QWORD *)(a1 + 40);
          if ( !v79 )
          {
            *(_QWORD *)&dword_0 = *j;
            BUG();
          }
          v75 = v79 - 1;
        }
        v76 = v75 & (v73 ^ (v73 >> 9));
        v77 = (__int64 *)(v74 + 16LL * v76);
        v78 = *v77;
        if ( v73 != *v77 )
        {
          v114 = 1;
          v111 = nullptr;
          while ( v78 )
          {
            if ( !v111 && v78 == -1 )
              v111 = v77;
            v76 = v75 & (v114 + v76);
            v77 = (__int64 *)(v74 + 16LL * v76);
            v78 = *v77;
            if ( v73 == *v77 )
              goto LABEL_110;
            ++v114;
          }
          if ( v111 )
            v77 = v111;
        }
LABEL_110:
        *v77 = *j;
        *((_DWORD *)v77 + 2) = *((_DWORD *)j + 2);
        *(_DWORD *)(a1 + 32) = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1;
      }
    }
    operator delete();
    v80 = *(_BYTE *)(a1 + 32) & 1;
    goto LABEL_114;
  }
LABEL_19:
  *(_DWORD *)(a1 + 32) = (2 * v15) | *(_DWORD *)(a1 + 32) & 1;
  if ( *v8 )
    --*(_DWORD *)(a1 + 36);
  *v8 = v3;
  v12 = v8 + 1;
  *((_DWORD *)v8 + 2) = 0;
  return (*v12 & 1) + (*v12 >> 1) > 1;
}

