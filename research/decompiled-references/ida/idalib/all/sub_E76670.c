__int64 __fastcall sub_E76670(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rcx
  __int64 *v9; // r13
  int v10; // r15d
  unsigned int v11; // r12d
  unsigned int v12; // esi
  __int64 *v13; // rax
  __int64 v14; // rdx
  unsigned int v16; // r15d
  int v17; // edi
  __int64 *v18; // r8
  __int64 v19; // rdx
  unsigned int v20; // esi
  __int64 v21; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // r14
  unsigned __int64 v24; // r13
  __int64 v25; // rdi
  __int64 v26; // rax
  _QWORD *v27; // r11
  bool v28; // zf
  __int64 v29; // r15
  __int64 *v30; // rdi
  _QWORD *v31; // rax
  __int64 v32; // rdx
  _QWORD *i; // rdx
  __int64 *j; // rax
  _QWORD *v35; // r8
  int v36; // r9d
  unsigned int v37; // esi
  _QWORD *v38; // rcx
  __int64 v39; // r10
  __int64 v40; // rdx
  unsigned __int64 v41; // r12
  __int64 v42; // rax
  __int64 v43; // r15
  __int64 *v44; // r8
  _QWORD *v45; // rdx
  __int64 v46; // rcx
  _QWORD *k; // rcx
  __int64 *m; // rdx
  __int64 v49; // r9
  int v50; // r10d
  unsigned int v51; // edi
  _QWORD *v52; // rsi
  __int64 v53; // r11
  __int64 v54; // rcx
  char v55; // si
  __int64 v56; // rdi
  int v57; // esi
  unsigned int v58; // ecx
  __int64 v59; // r8
  int v60; // r10d
  __int64 *v61; // r9
  int v62; // esi
  int v63; // esi
  __int64 v64; // rsi
  int v65; // ecx
  unsigned int v66; // r12d
  __int64 v67; // rdi
  int v68; // r9d
  __int64 *v69; // r8
  int v70; // ecx
  __int64 v71; // rax
  __int64 *v72; // r14
  __int64 *v73; // r12
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  _QWORD *v79; // rdx
  _QWORD *v80; // rcx
  __int64 v81; // rdi
  _QWORD *v82; // rdi
  __int64 v83; // r8
  int v84; // esi
  unsigned int v85; // ecx
  __int64 v86; // r9
  __int64 v87; // rcx
  __int64 v88; // rdi
  int v89; // esi
  _QWORD *v90; // r11
  __int64 v91; // rax
  __int64 *v92; // rdi
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rcx
  char v97; // si
  _QWORD *v98; // rax
  __int64 v99; // rdx
  _QWORD *v100; // rdx
  __int64 *v101; // rax
  _QWORD *v102; // r9
  int v103; // r8d
  unsigned int v104; // esi
  __int64 v105; // r10
  __int64 v106; // rdx
  int v107; // r8d
  int v108; // r11d
  _QWORD *v109; // r10
  int v110; // r15d
  __int64 v111; // r14
  __int64 v112; // rdi
  _QWORD *v113; // [rsp+10h] [rbp-98h]
  int v114; // [rsp+18h] [rbp-90h]
  _QWORD *v115; // [rsp+18h] [rbp-90h]
  int v116; // [rsp+20h] [rbp-88h]
  __int64 v117; // [rsp+30h] [rbp-78h] BYREF
  __int64 v118; // [rsp+38h] [rbp-70h]
  _BYTE v119[104]; // [rsp+40h] [rbp-68h] BYREF

  v8 = *(_BYTE *)(a1 + 16) & 1;
  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
  {
    v9 = (__int64 *)(a1 + 24);
    v10 = 3;
  }
  else
  {
    v16 = *(_DWORD *)(a1 + 32);
    v9 = *(__int64 **)(a1 + 24);
    if ( !v16 )
      goto LABEL_35;
    v10 = v16 - 1;
  }
  v11 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
  v12 = v10 & v11;
  v13 = &v9[2 * (v10 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)))];
  v14 = *v13;
  if ( *v13 == a2 )
    return v13[1];
  v17 = 1;
  v18 = nullptr;
  if ( v14 != -4096 )
  {
    while ( 1 )
    {
      if ( v14 == -8192 && !v18 )
        v18 = v13;
      a6 = (unsigned int)(v17 + 1);
      v12 = v10 & (v17 + v12);
      v13 = &v9[2 * v12];
      v14 = *v13;
      if ( *v13 == a2 )
        return v13[1];
      if ( v14 == -4096 )
        break;
      ++v17;
    }
    if ( v18 )
      v13 = v18;
  }
  v19 = (unsigned int)((*(_DWORD *)(a1 + 16) >> 1) + 1);
  v20 = 4 * v19;
  if ( !(_BYTE)v8 )
  {
    v16 = *(_DWORD *)(a1 + 32);
    v21 = 2 * v16;
    if ( 3 * v16 > v20 )
    {
      v22 = v16 >> 3;
      if ( v16 - ((_DWORD)v19 + *(_DWORD *)(a1 + 20)) > (unsigned int)v22 )
        goto LABEL_11;
      v23 = *(_QWORD **)(a1 + 24);
      if ( v16 <= 4 )
      {
        *(_BYTE *)(a1 + 16) |= 1u;
        LODWORD(v24) = v16;
        v27 = v23;
      }
      else
      {
        v24 = ((((((((((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
                   | (v16 - 1)
                   | ((unsigned __int64)(v16 - 1) >> 1)) >> 4)
                 | (((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
                 | (v16 - 1)
                 | ((unsigned __int64)(v16 - 1) >> 1)) >> 8)
               | (((((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
                 | (v16 - 1)
                 | ((unsigned __int64)(v16 - 1) >> 1)) >> 4)
               | (((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
               | (v16 - 1)
               | ((unsigned __int64)(v16 - 1) >> 1)) >> 16)
             | (((((((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
                 | (v16 - 1)
                 | ((unsigned __int64)(v16 - 1) >> 1)) >> 4)
               | (((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
               | (v16 - 1)
               | ((unsigned __int64)(v16 - 1) >> 1)) >> 8)
             | (((((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2) | (v16 - 1)
                                                                         | ((unsigned __int64)(v16 - 1) >> 1)) >> 4)
             | (((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
             | (v16 - 1)
             | ((unsigned __int64)(v16 - 1) >> 1))
            + 1;
        v25 = 16LL * (unsigned int)v24;
        if ( (unsigned int)v24 <= 0x40 )
        {
          v25 = 1024;
          LODWORD(v24) = 64;
        }
        v26 = sub_22300B0(v25, 8, v19, v22, v18, a6);
        *(_QWORD *)(a1 + 24) = v26;
        v27 = (_QWORD *)v26;
        *(_DWORD *)(a1 + 32) = v24;
      }
      v28 = (*(_QWORD *)(a1 + 16) & 1LL) == 0;
      *(_QWORD *)(a1 + 16) &= 1uLL;
      v29 = 2LL * v16;
      v30 = &v23[v29];
      if ( v28 )
      {
        v31 = v27;
        v32 = 2LL * (unsigned int)v24;
      }
      else
      {
        v31 = (_QWORD *)(a1 + 24);
        v32 = 8;
      }
      for ( i = &v31[v32]; i != v31; v31 += 2 )
        *v31 = -4096;
      for ( j = v23; v30 != j; j += 2 )
      {
        v40 = *j;
        if ( *j != -4096 && v40 != -8192 )
        {
          if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
          {
            v35 = (_QWORD *)(a1 + 24);
            v36 = 3;
          }
          else
          {
            if ( !(_DWORD)v24 )
            {
              *(_QWORD *)&dword_0 = *j;
              BUG();
            }
            v36 = v24 - 1;
            v35 = v27;
          }
          v37 = v36 & (((unsigned int)v40 >> 9) ^ ((unsigned int)v40 >> 4));
          v38 = &v35[2 * v37];
          v39 = *v38;
          if ( v40 != *v38 && v39 != -4096 )
          {
            v116 = 1;
            v115 = nullptr;
            while ( 1 )
            {
              if ( !v115 )
              {
                if ( v39 != -8192 )
                  v38 = nullptr;
                v115 = v38;
              }
              v37 = v36 & (v116 + v37);
              v38 = &v35[2 * v37];
              v39 = *v38;
              if ( v40 == *v38 )
                break;
              if ( v39 == -4096 )
              {
                if ( v115 )
                  v38 = v115;
                break;
              }
              ++v116;
            }
          }
          *v38 = v40;
          v38[1] = j[1];
          *(_DWORD *)(a1 + 16) = (2 * (*(_DWORD *)(a1 + 16) >> 1) + 2) | *(_DWORD *)(a1 + 16) & 1;
        }
      }
      operator delete(v23, v29 * 8, 8);
      LOBYTE(v63) = *(_BYTE *)(a1 + 16) & 1;
      goto LABEL_76;
    }
    v9 = *(__int64 **)(a1 + 24);
    if ( (unsigned int)v21 > 4 )
    {
      v41 = ((((((unsigned int)(v21 - 1) | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 2)
             | (unsigned int)(v21 - 1)
             | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)
             | (((((unsigned int)(v21 - 1) | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 2)
               | (unsigned int)(v21 - 1)
               | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 4)) >> 8)
           | (((unsigned int)(v21 - 1) | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 2)
           | (unsigned int)(v21 - 1)
           | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)
           | (((((unsigned int)(v21 - 1) | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 2)
             | (unsigned int)(v21 - 1)
             | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 4)
           | (((((((unsigned int)(v21 - 1) | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 2)
               | (unsigned int)(v21 - 1)
               | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)
               | (((((unsigned int)(v21 - 1) | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 2)
                 | (unsigned int)(v21 - 1)
                 | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 4)) >> 8)
             | (((unsigned int)(v21 - 1) | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 2)
             | (unsigned int)(v21 - 1)
             | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)
             | (((((unsigned int)(v21 - 1) | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 2)
               | (unsigned int)(v21 - 1)
               | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 4)) >> 16))
          + 1;
      v112 = 16LL * (unsigned int)v41;
      if ( (unsigned int)v41 <= 0x40 )
      {
        v112 = 1024;
        LODWORD(v41) = 64;
      }
      v42 = sub_22300B0(v112, 8, v19, v21, v18, a6);
      *(_QWORD *)(a1 + 24) = v42;
      *(_DWORD *)(a1 + 32) = v41;
      goto LABEL_36;
    }
LABEL_35:
    *(_BYTE *)(a1 + 16) |= 1u;
    LODWORD(v41) = v16;
    v42 = (__int64)v9;
LABEL_36:
    v28 = (*(_QWORD *)(a1 + 16) & 1LL) == 0;
    *(_QWORD *)(a1 + 16) &= 1uLL;
    v43 = 2LL * v16;
    v44 = &v9[v43];
    if ( v28 )
    {
      v45 = (_QWORD *)v42;
      v46 = 2LL * (unsigned int)v41;
    }
    else
    {
      v45 = (_QWORD *)(a1 + 24);
      v46 = 8;
    }
    for ( k = &v45[v46]; k != v45; v45 += 2 )
      *v45 = -4096;
    for ( m = v9; v44 != m; m += 2 )
    {
      v54 = *m;
      if ( *m != -4096 && v54 != -8192 )
      {
        if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
        {
          v49 = a1 + 24;
          v50 = 3;
        }
        else
        {
          if ( !(_DWORD)v41 )
          {
            *(_QWORD *)&dword_0 = *m;
            BUG();
          }
          v50 = v41 - 1;
          v49 = v42;
        }
        v51 = v50 & (((unsigned int)v54 >> 9) ^ ((unsigned int)v54 >> 4));
        v52 = (_QWORD *)(v49 + 16LL * v51);
        v53 = *v52;
        if ( v54 != *v52 && v53 != -4096 )
        {
          v114 = 1;
          v113 = nullptr;
          while ( 1 )
          {
            if ( v53 == -8192 )
            {
              if ( v113 )
                v52 = v113;
              v113 = v52;
            }
            v51 = v50 & (v114 + v51);
            v52 = (_QWORD *)(v49 + 16LL * v51);
            v53 = *v52;
            if ( v54 == *v52 )
              break;
            if ( v53 == -4096 )
            {
              if ( v113 )
                v52 = v113;
              break;
            }
            ++v114;
          }
        }
        *v52 = v54;
        v52[1] = m[1];
        *(_DWORD *)(a1 + 16) = (2 * (*(_DWORD *)(a1 + 16) >> 1) + 2) | *(_DWORD *)(a1 + 16) & 1;
      }
    }
    operator delete(v9, v43 * 8, 8);
    v55 = *(_BYTE *)(a1 + 16) & 1;
LABEL_61:
    if ( v55 )
    {
      v56 = a1 + 24;
      v57 = 3;
    }
    else
    {
      v62 = *(_DWORD *)(a1 + 32);
      v56 = *(_QWORD *)(a1 + 24);
      if ( !v62 )
        goto LABEL_203;
      v57 = v62 - 1;
    }
    v58 = v57 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    LODWORD(v19) = (*(_DWORD *)(a1 + 16) >> 1) + 1;
    v13 = (__int64 *)(v56 + 16LL * v58);
    v59 = *v13;
    if ( *v13 != a2 )
    {
      v60 = 1;
      v61 = nullptr;
      if ( v59 != -4096 )
      {
        while ( 1 )
        {
          if ( !v61 && v59 == -8192 )
            v61 = v13;
          v58 = v57 & (v60 + v58);
          v13 = (__int64 *)(v56 + 16LL * v58);
          v59 = *v13;
          if ( *v13 == a2 )
            break;
          if ( v59 == -4096 )
          {
            if ( v61 )
              v13 = v61;
            goto LABEL_11;
          }
          ++v60;
        }
      }
    }
    goto LABEL_11;
  }
  if ( v20 > 0xB )
  {
    v71 = *(_QWORD *)(a1 + 24);
    if ( v71 == -4096 || v71 == -8192 )
    {
      v72 = &v117;
      v73 = &v117;
    }
    else
    {
      v117 = *(_QWORD *)(a1 + 24);
      v72 = &v117;
      v73 = (__int64 *)v119;
      v118 = *(_QWORD *)(a1 + 32);
    }
    v74 = *(_QWORD *)(a1 + 40);
    if ( v74 != -4096 && v74 != -8192 )
    {
      *v73 = v74;
      v73 += 2;
      *(v73 - 1) = *(_QWORD *)(a1 + 48);
    }
    v75 = *(_QWORD *)(a1 + 56);
    if ( v75 != -4096 && v75 != -8192 )
    {
      *v73 = v75;
      v73 += 2;
      *(v73 - 1) = *(_QWORD *)(a1 + 64);
    }
    v76 = *(_QWORD *)(a1 + 72);
    if ( v76 != -4096 && v76 != -8192 )
    {
      *v73 = v76;
      v73 += 2;
      *(v73 - 1) = *(_QWORD *)(a1 + 80);
    }
    *(_BYTE *)(a1 + 16) &= ~1u;
    v77 = sub_22300B0(1024, 8, v19, v8, v18, a6);
    v78 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 32) = 64;
    *(_QWORD *)(a1 + 24) = v77;
    v79 = (_QWORD *)(v78 & 1);
    *(_QWORD *)(a1 + 16) = v79;
    v55 = (unsigned __int8)v79 & 1;
    if ( ((unsigned __int8)v79 & 1) != 0 )
    {
      v80 = (_QWORD *)(a1 + 24);
      v81 = 8;
    }
    else
    {
      v81 = 128;
      v80 = (_QWORD *)v77;
    }
    v82 = &v80[v81];
    if ( v82 != v80 )
    {
      do
      {
        *v80 = -4096;
        v80 += 2;
      }
      while ( v82 != v80 );
      LOBYTE(v79) = *(_BYTE *)(a1 + 16);
      v55 = (unsigned __int8)v79 & 1;
    }
    if ( v73 != &v117 )
    {
      do
      {
        v88 = *v72;
        v55 = (unsigned __int8)v79 & 1;
        if ( *v72 != -8192 && v88 != -4096 )
        {
          if ( v55 )
          {
            v83 = a1 + 24;
            v84 = 3;
          }
          else
          {
            v89 = *(_DWORD *)(a1 + 32);
            if ( !v89 )
            {
              *(_QWORD *)&dword_0 = *v72;
              BUG();
            }
            v84 = v89 - 1;
            v83 = v77;
          }
          v85 = v84 & (((unsigned int)v88 >> 9) ^ ((unsigned int)v88 >> 4));
          v79 = (_QWORD *)(v83 + 16LL * v85);
          v86 = *v79;
          if ( *v79 != v88 )
          {
            v108 = 1;
            v109 = nullptr;
            if ( v86 != -4096 )
            {
              while ( 1 )
              {
                if ( v86 == -8192 && !v109 )
                  v109 = v79;
                v85 = v84 & (v108 + v85);
                v79 = (_QWORD *)(v83 + 16LL * v85);
                v86 = *v79;
                if ( v88 == *v79 )
                  break;
                if ( v86 == -4096 )
                {
                  if ( v109 )
                    v79 = v109;
                  break;
                }
                ++v108;
              }
            }
          }
          v87 = v72[1];
          *v79 = v88;
          v79[1] = v87;
          LODWORD(v79) = (2 * (*(_DWORD *)(a1 + 16) >> 1) + 2) | *(_DWORD *)(a1 + 16) & 1;
          *(_DWORD *)(a1 + 16) = (_DWORD)v79;
          v55 = (unsigned __int8)v79 & 1;
        }
        v72 += 2;
      }
      while ( v72 != v73 );
    }
    goto LABEL_61;
  }
  if ( (_DWORD)v19 + *(_DWORD *)(a1 + 20) == 4 )
  {
    v90 = *(_QWORD **)(a1 + 24);
    if ( v90 == (_QWORD *)-4096LL || v90 == (_QWORD *)-8192LL )
    {
      v92 = &v117;
    }
    else
    {
      v91 = *(_QWORD *)(a1 + 32);
      v117 = *(_QWORD *)(a1 + 24);
      v92 = (__int64 *)v119;
      v118 = v91;
    }
    v93 = *(_QWORD *)(a1 + 40);
    if ( v93 != -4096 && v93 != -8192 )
    {
      *v92 = v93;
      v92 += 2;
      *(v92 - 1) = *(_QWORD *)(a1 + 48);
    }
    v94 = *(_QWORD *)(a1 + 56);
    if ( v94 != -4096 && v94 != -8192 )
    {
      *v92 = v94;
      v92 += 2;
      *(v92 - 1) = *(_QWORD *)(a1 + 64);
    }
    v95 = *(_QWORD *)(a1 + 72);
    if ( v95 != -4096 && v95 != -8192 )
    {
      *v92 = v95;
      v92 += 2;
      *(v92 - 1) = *(_QWORD *)(a1 + 80);
    }
    v96 = *(_QWORD *)(a1 + 16) & 1LL;
    v97 = *(_BYTE *)(a1 + 16) & 1;
    *(_QWORD *)(a1 + 16) = v96;
    v63 = v97 & 1;
    if ( v63 )
    {
      v98 = (_QWORD *)(a1 + 24);
      v99 = 8;
    }
    else
    {
      v98 = v90;
      v99 = 2LL * *(unsigned int *)(a1 + 32);
    }
    v100 = &v98[v99];
    if ( v100 != v98 )
    {
      do
      {
        *v98 = -4096;
        v98 += 2;
      }
      while ( v100 != v98 );
      LOBYTE(v96) = *(_BYTE *)(a1 + 16);
      LOBYTE(v63) = v96 & 1;
    }
    if ( v92 != &v117 )
    {
      v101 = &v117;
      do
      {
        v106 = *v101;
        LOBYTE(v63) = v96 & 1;
        if ( *v101 != -4096 && v106 != -8192 )
        {
          if ( (_BYTE)v63 )
          {
            v102 = (_QWORD *)(a1 + 24);
            v103 = 3;
          }
          else
          {
            v107 = *(_DWORD *)(a1 + 32);
            if ( !v107 )
            {
              *(_QWORD *)&dword_0 = *v101;
              BUG();
            }
            v103 = v107 - 1;
            v102 = v90;
          }
          v104 = v103 & (((unsigned int)v106 >> 9) ^ ((unsigned int)v106 >> 4));
          v96 = (__int64)&v102[2 * v104];
          v105 = *(_QWORD *)v96;
          if ( v106 != *(_QWORD *)v96 )
          {
            v110 = 1;
            v111 = 0;
            if ( v105 != -4096 )
            {
              while ( 1 )
              {
                if ( !v111 && v105 == -8192 )
                  v111 = v96;
                v104 = v103 & (v110 + v104);
                v96 = (__int64)&v102[2 * v104];
                v105 = *(_QWORD *)v96;
                if ( v106 == *(_QWORD *)v96 )
                  break;
                if ( v105 == -4096 )
                {
                  if ( v111 )
                    v96 = v111;
                  break;
                }
                ++v110;
              }
            }
          }
          *(_QWORD *)v96 = v106;
          *(_QWORD *)(v96 + 8) = v101[1];
          LODWORD(v96) = (2 * (*(_DWORD *)(a1 + 16) >> 1) + 2) | *(_DWORD *)(a1 + 16) & 1;
          *(_DWORD *)(a1 + 16) = v96;
          LOBYTE(v63) = v96 & 1;
        }
        v101 += 2;
      }
      while ( v101 != v92 );
    }
LABEL_76:
    if ( (_BYTE)v63 )
    {
      v64 = a1 + 24;
      v65 = 3;
LABEL_78:
      v66 = v65 & v11;
      v13 = (__int64 *)(v64 + 16LL * v66);
      LODWORD(v19) = (*(_DWORD *)(a1 + 16) >> 1) + 1;
      v67 = *v13;
      if ( *v13 != a2 )
      {
        v68 = 1;
        v69 = nullptr;
        if ( v67 != -4096 )
        {
          while ( 1 )
          {
            if ( !v69 && v67 == -8192 )
              v69 = v13;
            v66 = v65 & (v68 + v66);
            v13 = (__int64 *)(v64 + 16LL * v66);
            v67 = *v13;
            if ( *v13 == a2 )
              break;
            if ( v67 == -4096 )
            {
              if ( v69 )
                v13 = v69;
              goto LABEL_11;
            }
            ++v68;
          }
        }
      }
      goto LABEL_11;
    }
    v70 = *(_DWORD *)(a1 + 32);
    v64 = *(_QWORD *)(a1 + 24);
    if ( v70 )
    {
      v65 = v70 - 1;
      goto LABEL_78;
    }
LABEL_203:
    *(_DWORD *)(a1 + 16) = (2 * (*(_DWORD *)(a1 + 16) >> 1) + 2) | *(_DWORD *)(a1 + 16) & 1;
    BUG();
  }
LABEL_11:
  *(_DWORD *)(a1 + 16) = (2 * v19) | *(_DWORD *)(a1 + 16) & 1;
  if ( *v13 != -4096 )
    --*(_DWORD *)(a1 + 20);
  *v13 = a2;
  v13[1] = 0;
  return 0;
}
