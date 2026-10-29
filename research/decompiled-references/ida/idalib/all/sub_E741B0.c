_QWORD *__fastcall sub_E741B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rcx
  __int64 *v10; // r14
  int v11; // r15d
  unsigned int v12; // r12d
  unsigned int v13; // esi
  __int64 *v14; // rax
  __int64 v15; // rdx
  _QWORD *result; // rax
  unsigned int v17; // r15d
  int v18; // edi
  __int64 *v19; // r8
  __int64 v20; // rdx
  unsigned int v21; // esi
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned __int64 v24; // r14
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
  __int64 v42; // r11
  __int64 v43; // r15
  __int64 *v44; // rdi
  _QWORD *v45; // rax
  __int64 v46; // rdx
  _QWORD *k; // rdx
  __int64 *m; // rax
  __int64 v49; // r8
  int v50; // r9d
  unsigned int v51; // esi
  _QWORD *v52; // rcx
  __int64 v53; // r10
  __int64 v54; // rdx
  char v55; // di
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
  __int64 *v72; // r12
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rsi
  _QWORD *v78; // rsi
  _QWORD *v79; // rdx
  __int64 v80; // rcx
  _QWORD *v81; // rcx
  __int64 *v82; // rdx
  __int64 v83; // r9
  int v84; // r8d
  unsigned int v85; // edi
  __int64 v86; // r10
  __int64 v87; // rcx
  int v88; // r8d
  _QWORD *v89; // r11
  __int64 v90; // rax
  __int64 *v91; // rdi
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rcx
  char v96; // si
  _QWORD *v97; // rax
  __int64 v98; // rdx
  _QWORD *v99; // rdx
  __int64 *v100; // rax
  _QWORD *v101; // r9
  int v102; // r8d
  unsigned int v103; // esi
  __int64 v104; // r10
  __int64 v105; // rdx
  int v106; // r8d
  int v107; // r15d
  _QWORD *v108; // r11
  __int64 v109; // r15
  __int64 v110; // rdi
  __int64 *v111; // [rsp+0h] [rbp-A8h]
  int v112; // [rsp+0h] [rbp-A8h]
  _QWORD *v113; // [rsp+10h] [rbp-98h]
  int v114; // [rsp+18h] [rbp-90h]
  _QWORD *v115; // [rsp+18h] [rbp-90h]
  int v116; // [rsp+20h] [rbp-88h]
  __int64 v117; // [rsp+30h] [rbp-78h] BYREF
  __int64 v118; // [rsp+38h] [rbp-70h]
  _BYTE v119[104]; // [rsp+40h] [rbp-68h] BYREF

  v9 = *(_BYTE *)(a1 + 16) & 1;
  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
  {
    v10 = (__int64 *)(a1 + 24);
    v11 = 3;
  }
  else
  {
    v17 = *(_DWORD *)(a1 + 32);
    v10 = *(__int64 **)(a1 + 24);
    if ( !v17 )
      goto LABEL_35;
    v11 = v17 - 1;
  }
  v12 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
  v13 = v11 & v12;
  v14 = &v10[2 * (v11 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)))];
  v15 = *v14;
  if ( *v14 == a2 )
    goto LABEL_4;
  v18 = 1;
  v19 = nullptr;
  if ( v15 != -4096 )
  {
    while ( 1 )
    {
      if ( v15 == -8192 && !v19 )
        v19 = v14;
      a6 = (unsigned int)(v18 + 1);
      v13 = v11 & (v18 + v13);
      v14 = &v10[2 * v13];
      v15 = *v14;
      if ( *v14 == a2 )
        goto LABEL_4;
      if ( v15 == -4096 )
        break;
      ++v18;
    }
    if ( v19 )
      v14 = v19;
  }
  v20 = (unsigned int)((*(_DWORD *)(a1 + 16) >> 1) + 1);
  v21 = 4 * v20;
  if ( !(_BYTE)v9 )
  {
    v17 = *(_DWORD *)(a1 + 32);
    v22 = 2 * v17;
    if ( 3 * v17 > v21 )
    {
      v23 = v17 >> 3;
      if ( v17 - ((_DWORD)v20 + *(_DWORD *)(a1 + 20)) > (unsigned int)v23 )
        goto LABEL_11;
      v111 = *(__int64 **)(a1 + 24);
      if ( v17 <= 4 )
      {
        v27 = *(_QWORD **)(a1 + 24);
        *(_BYTE *)(a1 + 16) |= 1u;
        LODWORD(v24) = v17;
      }
      else
      {
        v24 = ((((((((((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2)
                   | (v17 - 1)
                   | ((unsigned __int64)(v17 - 1) >> 1)) >> 4)
                 | (((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2)
                 | (v17 - 1)
                 | ((unsigned __int64)(v17 - 1) >> 1)) >> 8)
               | (((((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2)
                 | (v17 - 1)
                 | ((unsigned __int64)(v17 - 1) >> 1)) >> 4)
               | (((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2)
               | (v17 - 1)
               | ((unsigned __int64)(v17 - 1) >> 1)) >> 16)
             | (((((((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2)
                 | (v17 - 1)
                 | ((unsigned __int64)(v17 - 1) >> 1)) >> 4)
               | (((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2)
               | (v17 - 1)
               | ((unsigned __int64)(v17 - 1) >> 1)) >> 8)
             | (((((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2) | (v17 - 1)
                                                                         | ((unsigned __int64)(v17 - 1) >> 1)) >> 4)
             | (((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2)
             | (v17 - 1)
             | ((unsigned __int64)(v17 - 1) >> 1))
            + 1;
        v25 = 16LL * (unsigned int)v24;
        if ( (unsigned int)v24 <= 0x40 )
        {
          v25 = 1024;
          LODWORD(v24) = 64;
        }
        v26 = sub_22300B0(v25, 8, v20, v23, v19, a6);
        *(_QWORD *)(a1 + 24) = v26;
        v27 = (_QWORD *)v26;
        *(_DWORD *)(a1 + 32) = v24;
      }
      v28 = (*(_QWORD *)(a1 + 16) & 1LL) == 0;
      *(_QWORD *)(a1 + 16) &= 1uLL;
      v29 = 2LL * v17;
      v30 = &v111[v29];
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
      for ( j = v111; v30 != j; j += 2 )
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
      operator delete(v111, v29 * 8, 8);
      LOBYTE(v63) = *(_BYTE *)(a1 + 16) & 1;
      goto LABEL_76;
    }
    v10 = *(__int64 **)(a1 + 24);
    if ( (unsigned int)v22 > 4 )
    {
      v41 = ((((((unsigned int)(v22 - 1) | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 2)
             | (unsigned int)(v22 - 1)
             | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)
             | (((((unsigned int)(v22 - 1) | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 2)
               | (unsigned int)(v22 - 1)
               | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 4)) >> 8)
           | (((unsigned int)(v22 - 1) | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 2)
           | (unsigned int)(v22 - 1)
           | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)
           | (((((unsigned int)(v22 - 1) | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 2)
             | (unsigned int)(v22 - 1)
             | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 4)
           | (((((((unsigned int)(v22 - 1) | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 2)
               | (unsigned int)(v22 - 1)
               | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)
               | (((((unsigned int)(v22 - 1) | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 2)
                 | (unsigned int)(v22 - 1)
                 | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 4)) >> 8)
             | (((unsigned int)(v22 - 1) | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 2)
             | (unsigned int)(v22 - 1)
             | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)
             | (((((unsigned int)(v22 - 1) | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 2)
               | (unsigned int)(v22 - 1)
               | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 4)) >> 16))
          + 1;
      v110 = 16LL * (unsigned int)v41;
      if ( (unsigned int)v41 <= 0x40 )
      {
        v110 = 1024;
        LODWORD(v41) = 64;
      }
      v42 = sub_22300B0(v110, 8, v20, v22, v19, a6);
      *(_QWORD *)(a1 + 24) = v42;
      *(_DWORD *)(a1 + 32) = v41;
      goto LABEL_36;
    }
LABEL_35:
    *(_BYTE *)(a1 + 16) |= 1u;
    LODWORD(v41) = v17;
    v42 = (__int64)v10;
LABEL_36:
    v28 = (*(_QWORD *)(a1 + 16) & 1LL) == 0;
    *(_QWORD *)(a1 + 16) &= 1uLL;
    v43 = 2LL * v17;
    v44 = &v10[v43];
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
    for ( m = v10; v44 != m; m += 2 )
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
    operator delete(v10, v43 * 8, 8);
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
        goto LABEL_204;
      v57 = v62 - 1;
    }
    v58 = v57 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    LODWORD(v20) = (*(_DWORD *)(a1 + 16) >> 1) + 1;
    v14 = (__int64 *)(v56 + 16LL * v58);
    v59 = *v14;
    if ( *v14 != a2 )
    {
      v60 = 1;
      v61 = nullptr;
      if ( v59 != -4096 )
      {
        while ( 1 )
        {
          if ( !v61 && v59 == -8192 )
            v61 = v14;
          v58 = v57 & (v60 + v58);
          v14 = (__int64 *)(v56 + 16LL * v58);
          v59 = *v14;
          if ( *v14 == a2 )
            break;
          if ( v59 == -4096 )
          {
            if ( v61 )
              v14 = v61;
            goto LABEL_11;
          }
          ++v60;
        }
      }
    }
    goto LABEL_11;
  }
  if ( v21 > 0xB )
  {
    v71 = *(_QWORD *)(a1 + 24);
    if ( v71 == -4096 || v71 == -8192 )
    {
      v72 = &v117;
    }
    else
    {
      v117 = *(_QWORD *)(a1 + 24);
      v72 = (__int64 *)v119;
      v118 = *(_QWORD *)(a1 + 32);
    }
    v73 = *(_QWORD *)(a1 + 40);
    if ( v73 != -4096 && v73 != -8192 )
    {
      *v72 = v73;
      v72 += 2;
      *(v72 - 1) = *(_QWORD *)(a1 + 48);
    }
    v74 = *(_QWORD *)(a1 + 56);
    if ( v74 != -4096 && v74 != -8192 )
    {
      *v72 = v74;
      v72 += 2;
      *(v72 - 1) = *(_QWORD *)(a1 + 64);
    }
    v75 = *(_QWORD *)(a1 + 72);
    if ( v75 != -4096 && v75 != -8192 )
    {
      *v72 = v75;
      v72 += 2;
      *(v72 - 1) = *(_QWORD *)(a1 + 80);
    }
    *(_BYTE *)(a1 + 16) &= ~1u;
    v76 = sub_22300B0(1024, 8, v20, v9, v19, a6);
    v77 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 32) = 64;
    *(_QWORD *)(a1 + 24) = v76;
    v78 = (_QWORD *)(v77 & 1);
    *(_QWORD *)(a1 + 16) = v78;
    v55 = (unsigned __int8)v78 & 1;
    if ( ((unsigned __int8)v78 & 1) != 0 )
    {
      v79 = (_QWORD *)(a1 + 24);
      v80 = 8;
    }
    else
    {
      v80 = 128;
      v79 = (_QWORD *)v76;
    }
    v81 = &v79[v80];
    if ( v81 != v79 )
    {
      do
      {
        *v79 = -4096;
        v79 += 2;
      }
      while ( v81 != v79 );
      LOBYTE(v78) = *(_BYTE *)(a1 + 16);
      v55 = (unsigned __int8)v78 & 1;
    }
    if ( v72 != &v117 )
    {
      v82 = &v117;
      do
      {
        v87 = *v82;
        v55 = (unsigned __int8)v78 & 1;
        if ( *v82 != -8192 && v87 != -4096 )
        {
          if ( v55 )
          {
            v83 = a1 + 24;
            v84 = 3;
          }
          else
          {
            v88 = *(_DWORD *)(a1 + 32);
            if ( !v88 )
            {
              *(_QWORD *)&dword_0 = *v82;
              BUG();
            }
            v84 = v88 - 1;
            v83 = v76;
          }
          v85 = v84 & (((unsigned int)v87 >> 9) ^ ((unsigned int)v87 >> 4));
          v78 = (_QWORD *)(v83 + 16LL * v85);
          v86 = *v78;
          if ( *v78 != v87 )
          {
            v107 = 1;
            v108 = nullptr;
            if ( v86 != -4096 )
            {
              while ( 1 )
              {
                if ( v86 == -8192 && !v108 )
                  v108 = v78;
                v85 = v84 & (v107 + v85);
                v78 = (_QWORD *)(v83 + 16LL * v85);
                v86 = *v78;
                if ( v87 == *v78 )
                  break;
                if ( v86 == -4096 )
                {
                  if ( v108 )
                    v78 = v108;
                  break;
                }
                ++v107;
              }
            }
          }
          *v78 = v87;
          v78[1] = v82[1];
          LODWORD(v78) = (2 * (*(_DWORD *)(a1 + 16) >> 1) + 2) | *(_DWORD *)(a1 + 16) & 1;
          *(_DWORD *)(a1 + 16) = (_DWORD)v78;
          v55 = (unsigned __int8)v78 & 1;
        }
        v82 += 2;
      }
      while ( v82 != v72 );
    }
    goto LABEL_61;
  }
  if ( (_DWORD)v20 + *(_DWORD *)(a1 + 20) == 4 )
  {
    v89 = *(_QWORD **)(a1 + 24);
    if ( v89 == (_QWORD *)-4096LL || v89 == (_QWORD *)-8192LL )
    {
      v91 = &v117;
    }
    else
    {
      v90 = *(_QWORD *)(a1 + 32);
      v117 = *(_QWORD *)(a1 + 24);
      v91 = (__int64 *)v119;
      v118 = v90;
    }
    v92 = *(_QWORD *)(a1 + 40);
    if ( v92 != -4096 && v92 != -8192 )
    {
      *v91 = v92;
      v91 += 2;
      *(v91 - 1) = *(_QWORD *)(a1 + 48);
    }
    v93 = *(_QWORD *)(a1 + 56);
    if ( v93 != -4096 && v93 != -8192 )
    {
      *v91 = v93;
      v91 += 2;
      *(v91 - 1) = *(_QWORD *)(a1 + 64);
    }
    v94 = *(_QWORD *)(a1 + 72);
    if ( v94 != -4096 && v94 != -8192 )
    {
      *v91 = v94;
      v91 += 2;
      *(v91 - 1) = *(_QWORD *)(a1 + 80);
    }
    v95 = *(_QWORD *)(a1 + 16) & 1LL;
    v96 = *(_BYTE *)(a1 + 16) & 1;
    *(_QWORD *)(a1 + 16) = v95;
    v63 = v96 & 1;
    if ( v63 )
    {
      v97 = (_QWORD *)(a1 + 24);
      v98 = 8;
    }
    else
    {
      v97 = v89;
      v98 = 2LL * *(unsigned int *)(a1 + 32);
    }
    v99 = &v97[v98];
    if ( v99 != v97 )
    {
      do
      {
        *v97 = -4096;
        v97 += 2;
      }
      while ( v99 != v97 );
      LOBYTE(v95) = *(_BYTE *)(a1 + 16);
      LOBYTE(v63) = v95 & 1;
    }
    if ( v91 != &v117 )
    {
      v100 = &v117;
      do
      {
        v105 = *v100;
        LOBYTE(v63) = v95 & 1;
        if ( *v100 != -4096 && v105 != -8192 )
        {
          if ( (_BYTE)v63 )
          {
            v101 = (_QWORD *)(a1 + 24);
            v102 = 3;
          }
          else
          {
            v106 = *(_DWORD *)(a1 + 32);
            if ( !v106 )
            {
              *(_QWORD *)&dword_0 = *v100;
              BUG();
            }
            v102 = v106 - 1;
            v101 = v89;
          }
          v103 = v102 & (((unsigned int)v105 >> 9) ^ ((unsigned int)v105 >> 4));
          v95 = (__int64)&v101[2 * v103];
          v104 = *(_QWORD *)v95;
          if ( v105 != *(_QWORD *)v95 && v104 != -4096 )
          {
            v112 = 1;
            v109 = 0;
            while ( 1 )
            {
              if ( !v109 && v104 == -8192 )
                v109 = v95;
              v103 = v102 & (v112 + v103);
              v95 = (__int64)&v101[2 * v103];
              v104 = *(_QWORD *)v95;
              if ( v105 == *(_QWORD *)v95 )
                break;
              if ( v104 == -4096 )
              {
                if ( v109 )
                  v95 = v109;
                break;
              }
              ++v112;
            }
          }
          *(_QWORD *)v95 = v105;
          *(_QWORD *)(v95 + 8) = v100[1];
          LODWORD(v95) = (2 * (*(_DWORD *)(a1 + 16) >> 1) + 2) | *(_DWORD *)(a1 + 16) & 1;
          *(_DWORD *)(a1 + 16) = v95;
          LOBYTE(v63) = v95 & 1;
        }
        v100 += 2;
      }
      while ( v100 != v91 );
    }
LABEL_76:
    if ( (_BYTE)v63 )
    {
      v64 = a1 + 24;
      v65 = 3;
LABEL_78:
      v66 = v65 & v12;
      v14 = (__int64 *)(v64 + 16LL * v66);
      LODWORD(v20) = (*(_DWORD *)(a1 + 16) >> 1) + 1;
      v67 = *v14;
      if ( *v14 != a2 )
      {
        v68 = 1;
        v69 = nullptr;
        if ( v67 != -4096 )
        {
          while ( 1 )
          {
            if ( !v69 && v67 == -8192 )
              v69 = v14;
            v66 = v65 & (v68 + v66);
            v14 = (__int64 *)(v64 + 16LL * v66);
            v67 = *v14;
            if ( *v14 == a2 )
              break;
            if ( v67 == -4096 )
            {
              if ( v69 )
                v14 = v69;
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
LABEL_204:
    *(_DWORD *)(a1 + 16) = (2 * (*(_DWORD *)(a1 + 16) >> 1) + 2) | *(_DWORD *)(a1 + 16) & 1;
    BUG();
  }
LABEL_11:
  *(_DWORD *)(a1 + 16) = (2 * v20) | *(_DWORD *)(a1 + 16) & 1;
  if ( *v14 != -4096 )
    --*(_DWORD *)(a1 + 20);
  *v14 = a2;
  v14[1] = 0;
LABEL_4:
  result = v14 + 1;
  *result = a3;
  return result;
}
