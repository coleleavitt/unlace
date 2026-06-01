__int64 __fastcall sub_E52930(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 *v29; // rdi
  _QWORD *v30; // rax
  __int64 v31; // rdx
  _QWORD *i; // rdx
  __int64 *j; // rax
  _QWORD *v34; // r8
  int v35; // r9d
  unsigned int v36; // esi
  _QWORD *v37; // rcx
  __int64 v38; // r10
  __int64 v39; // rdx
  unsigned __int64 v40; // r12
  __int64 v41; // rax
  __int64 *v42; // r8
  _QWORD *v43; // rdx
  __int64 v44; // rcx
  _QWORD *k; // rcx
  __int64 *m; // rdx
  __int64 v47; // r9
  int v48; // r10d
  unsigned int v49; // edi
  _QWORD *v50; // rsi
  __int64 v51; // r11
  __int64 v52; // rcx
  char v53; // si
  __int64 v54; // rdi
  int v55; // esi
  unsigned int v56; // ecx
  __int64 v57; // r8
  int v58; // r10d
  __int64 *v59; // r9
  int v60; // esi
  int v61; // esi
  __int64 v62; // rsi
  int v63; // ecx
  unsigned int v64; // r12d
  __int64 v65; // rdi
  int v66; // r9d
  __int64 *v67; // r8
  int v68; // ecx
  __int64 v69; // rax
  __int64 *v70; // r14
  __int64 *v71; // r12
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdx
  _QWORD *v77; // rdx
  _QWORD *v78; // rcx
  __int64 v79; // rdi
  _QWORD *v80; // rdi
  __int64 v81; // r8
  int v82; // esi
  unsigned int v83; // ecx
  __int64 v84; // r9
  __int64 v85; // rcx
  __int64 v86; // rdi
  int v87; // esi
  _QWORD *v88; // r11
  __int64 v89; // rax
  __int64 *v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rcx
  char v95; // si
  _QWORD *v96; // rax
  __int64 v97; // rdx
  _QWORD *v98; // rdx
  __int64 *v99; // rax
  _QWORD *v100; // r9
  int v101; // r8d
  unsigned int v102; // esi
  __int64 v103; // r10
  __int64 v104; // rdx
  int v105; // r8d
  int v106; // r11d
  _QWORD *v107; // r10
  int v108; // r15d
  __int64 v109; // r14
  __int64 v110; // rdi
  _QWORD *v111; // [rsp+10h] [rbp-98h]
  int v112; // [rsp+18h] [rbp-90h]
  _QWORD *v113; // [rsp+18h] [rbp-90h]
  int v114; // [rsp+20h] [rbp-88h]
  __int64 v115; // [rsp+30h] [rbp-78h] BYREF
  __int64 v116; // [rsp+38h] [rbp-70h]
  _BYTE v117[104]; // [rsp+40h] [rbp-68h] BYREF

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
        v26 = sub_220C370(v25, 8, v19, v22, v18, a6);
        *(_QWORD *)(a1 + 24) = v26;
        v27 = (_QWORD *)v26;
        *(_DWORD *)(a1 + 32) = v24;
      }
      v28 = (*(_QWORD *)(a1 + 16) & 1LL) == 0;
      *(_QWORD *)(a1 + 16) &= 1uLL;
      v29 = &v23[2 * v16];
      if ( v28 )
      {
        v30 = v27;
        v31 = 2LL * (unsigned int)v24;
      }
      else
      {
        v30 = (_QWORD *)(a1 + 24);
        v31 = 8;
      }
      for ( i = &v30[v31]; i != v30; v30 += 2 )
        *v30 = -4096;
      for ( j = v23; v29 != j; j += 2 )
      {
        v39 = *j;
        if ( *j != -4096 && v39 != -8192 )
        {
          if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
          {
            v34 = (_QWORD *)(a1 + 24);
            v35 = 3;
          }
          else
          {
            if ( !(_DWORD)v24 )
            {
              *(_QWORD *)&dword_0 = *j;
              BUG();
            }
            v35 = v24 - 1;
            v34 = v27;
          }
          v36 = v35 & (((unsigned int)v39 >> 9) ^ ((unsigned int)v39 >> 4));
          v37 = &v34[2 * v36];
          v38 = *v37;
          if ( v39 != *v37 && v38 != -4096 )
          {
            v114 = 1;
            v113 = nullptr;
            while ( 1 )
            {
              if ( !v113 )
              {
                if ( v38 != -8192 )
                  v37 = nullptr;
                v113 = v37;
              }
              v36 = v35 & (v114 + v36);
              v37 = &v34[2 * v36];
              v38 = *v37;
              if ( v39 == *v37 )
                break;
              if ( v38 == -4096 )
              {
                if ( v113 )
                  v37 = v113;
                break;
              }
              ++v114;
            }
          }
          *v37 = v39;
          v37[1] = j[1];
          *(_DWORD *)(a1 + 16) = (2 * (*(_DWORD *)(a1 + 16) >> 1) + 2) | *(_DWORD *)(a1 + 16) & 1;
        }
      }
      operator delete();
      LOBYTE(v61) = *(_BYTE *)(a1 + 16) & 1;
      goto LABEL_76;
    }
    v9 = *(__int64 **)(a1 + 24);
    if ( (unsigned int)v21 > 4 )
    {
      v40 = ((((((unsigned int)(v21 - 1) | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1)) >> 2)
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
      v110 = 16LL * (unsigned int)v40;
      if ( (unsigned int)v40 <= 0x40 )
      {
        v110 = 1024;
        LODWORD(v40) = 64;
      }
      v41 = sub_220C370(v110, 8, v19, v21, v18, a6);
      *(_QWORD *)(a1 + 24) = v41;
      *(_DWORD *)(a1 + 32) = v40;
      goto LABEL_36;
    }
LABEL_35:
    *(_BYTE *)(a1 + 16) |= 1u;
    LODWORD(v40) = v16;
    v41 = (__int64)v9;
LABEL_36:
    v28 = (*(_QWORD *)(a1 + 16) & 1LL) == 0;
    *(_QWORD *)(a1 + 16) &= 1uLL;
    v42 = &v9[2 * v16];
    if ( v28 )
    {
      v43 = (_QWORD *)v41;
      v44 = 2LL * (unsigned int)v40;
    }
    else
    {
      v43 = (_QWORD *)(a1 + 24);
      v44 = 8;
    }
    for ( k = &v43[v44]; k != v43; v43 += 2 )
      *v43 = -4096;
    for ( m = v9; v42 != m; m += 2 )
    {
      v52 = *m;
      if ( *m != -4096 && v52 != -8192 )
      {
        if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
        {
          v47 = a1 + 24;
          v48 = 3;
        }
        else
        {
          if ( !(_DWORD)v40 )
          {
            *(_QWORD *)&dword_0 = *m;
            BUG();
          }
          v48 = v40 - 1;
          v47 = v41;
        }
        v49 = v48 & (((unsigned int)v52 >> 9) ^ ((unsigned int)v52 >> 4));
        v50 = (_QWORD *)(v47 + 16LL * v49);
        v51 = *v50;
        if ( v52 != *v50 && v51 != -4096 )
        {
          v112 = 1;
          v111 = nullptr;
          while ( 1 )
          {
            if ( v51 == -8192 )
            {
              if ( v111 )
                v50 = v111;
              v111 = v50;
            }
            v49 = v48 & (v112 + v49);
            v50 = (_QWORD *)(v47 + 16LL * v49);
            v51 = *v50;
            if ( v52 == *v50 )
              break;
            if ( v51 == -4096 )
            {
              if ( v111 )
                v50 = v111;
              break;
            }
            ++v112;
          }
        }
        *v50 = v52;
        v50[1] = m[1];
        *(_DWORD *)(a1 + 16) = (2 * (*(_DWORD *)(a1 + 16) >> 1) + 2) | *(_DWORD *)(a1 + 16) & 1;
      }
    }
    operator delete();
    v53 = *(_BYTE *)(a1 + 16) & 1;
LABEL_61:
    if ( v53 )
    {
      v54 = a1 + 24;
      v55 = 3;
    }
    else
    {
      v60 = *(_DWORD *)(a1 + 32);
      v54 = *(_QWORD *)(a1 + 24);
      if ( !v60 )
        goto LABEL_203;
      v55 = v60 - 1;
    }
    v56 = v55 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    LODWORD(v19) = (*(_DWORD *)(a1 + 16) >> 1) + 1;
    v13 = (__int64 *)(v54 + 16LL * v56);
    v57 = *v13;
    if ( *v13 != a2 )
    {
      v58 = 1;
      v59 = nullptr;
      if ( v57 != -4096 )
      {
        while ( 1 )
        {
          if ( !v59 && v57 == -8192 )
            v59 = v13;
          v56 = v55 & (v58 + v56);
          v13 = (__int64 *)(v54 + 16LL * v56);
          v57 = *v13;
          if ( *v13 == a2 )
            break;
          if ( v57 == -4096 )
          {
            if ( v59 )
              v13 = v59;
            goto LABEL_11;
          }
          ++v58;
        }
      }
    }
    goto LABEL_11;
  }
  if ( v20 > 0xB )
  {
    v69 = *(_QWORD *)(a1 + 24);
    if ( v69 == -4096 || v69 == -8192 )
    {
      v70 = &v115;
      v71 = &v115;
    }
    else
    {
      v115 = *(_QWORD *)(a1 + 24);
      v70 = &v115;
      v71 = (__int64 *)v117;
      v116 = *(_QWORD *)(a1 + 32);
    }
    v72 = *(_QWORD *)(a1 + 40);
    if ( v72 != -4096 && v72 != -8192 )
    {
      *v71 = v72;
      v71 += 2;
      *(v71 - 1) = *(_QWORD *)(a1 + 48);
    }
    v73 = *(_QWORD *)(a1 + 56);
    if ( v73 != -4096 && v73 != -8192 )
    {
      *v71 = v73;
      v71 += 2;
      *(v71 - 1) = *(_QWORD *)(a1 + 64);
    }
    v74 = *(_QWORD *)(a1 + 72);
    if ( v74 != -4096 && v74 != -8192 )
    {
      *v71 = v74;
      v71 += 2;
      *(v71 - 1) = *(_QWORD *)(a1 + 80);
    }
    *(_BYTE *)(a1 + 16) &= ~1u;
    v75 = sub_220C370(1024, 8, v19, v8, v18, a6);
    v76 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 32) = 64;
    *(_QWORD *)(a1 + 24) = v75;
    v77 = (_QWORD *)(v76 & 1);
    *(_QWORD *)(a1 + 16) = v77;
    v53 = (unsigned __int8)v77 & 1;
    if ( ((unsigned __int8)v77 & 1) != 0 )
    {
      v78 = (_QWORD *)(a1 + 24);
      v79 = 8;
    }
    else
    {
      v79 = 128;
      v78 = (_QWORD *)v75;
    }
    v80 = &v78[v79];
    if ( v80 != v78 )
    {
      do
      {
        *v78 = -4096;
        v78 += 2;
      }
      while ( v80 != v78 );
      LOBYTE(v77) = *(_BYTE *)(a1 + 16);
      v53 = (unsigned __int8)v77 & 1;
    }
    if ( v71 != &v115 )
    {
      do
      {
        v86 = *v70;
        v53 = (unsigned __int8)v77 & 1;
        if ( *v70 != -8192 && v86 != -4096 )
        {
          if ( v53 )
          {
            v81 = a1 + 24;
            v82 = 3;
          }
          else
          {
            v87 = *(_DWORD *)(a1 + 32);
            if ( !v87 )
            {
              *(_QWORD *)&dword_0 = *v70;
              BUG();
            }
            v82 = v87 - 1;
            v81 = v75;
          }
          v83 = v82 & (((unsigned int)v86 >> 9) ^ ((unsigned int)v86 >> 4));
          v77 = (_QWORD *)(v81 + 16LL * v83);
          v84 = *v77;
          if ( *v77 != v86 )
          {
            v106 = 1;
            v107 = nullptr;
            if ( v84 != -4096 )
            {
              while ( 1 )
              {
                if ( v84 == -8192 && !v107 )
                  v107 = v77;
                v83 = v82 & (v106 + v83);
                v77 = (_QWORD *)(v81 + 16LL * v83);
                v84 = *v77;
                if ( v86 == *v77 )
                  break;
                if ( v84 == -4096 )
                {
                  if ( v107 )
                    v77 = v107;
                  break;
                }
                ++v106;
              }
            }
          }
          v85 = v70[1];
          *v77 = v86;
          v77[1] = v85;
          LODWORD(v77) = (2 * (*(_DWORD *)(a1 + 16) >> 1) + 2) | *(_DWORD *)(a1 + 16) & 1;
          *(_DWORD *)(a1 + 16) = (_DWORD)v77;
          v53 = (unsigned __int8)v77 & 1;
        }
        v70 += 2;
      }
      while ( v70 != v71 );
    }
    goto LABEL_61;
  }
  if ( (_DWORD)v19 + *(_DWORD *)(a1 + 20) == 4 )
  {
    v88 = *(_QWORD **)(a1 + 24);
    if ( v88 == (_QWORD *)-4096LL || v88 == (_QWORD *)-8192LL )
    {
      v90 = &v115;
    }
    else
    {
      v89 = *(_QWORD *)(a1 + 32);
      v115 = *(_QWORD *)(a1 + 24);
      v90 = (__int64 *)v117;
      v116 = v89;
    }
    v91 = *(_QWORD *)(a1 + 40);
    if ( v91 != -4096 && v91 != -8192 )
    {
      *v90 = v91;
      v90 += 2;
      *(v90 - 1) = *(_QWORD *)(a1 + 48);
    }
    v92 = *(_QWORD *)(a1 + 56);
    if ( v92 != -4096 && v92 != -8192 )
    {
      *v90 = v92;
      v90 += 2;
      *(v90 - 1) = *(_QWORD *)(a1 + 64);
    }
    v93 = *(_QWORD *)(a1 + 72);
    if ( v93 != -4096 && v93 != -8192 )
    {
      *v90 = v93;
      v90 += 2;
      *(v90 - 1) = *(_QWORD *)(a1 + 80);
    }
    v94 = *(_QWORD *)(a1 + 16) & 1LL;
    v95 = *(_BYTE *)(a1 + 16) & 1;
    *(_QWORD *)(a1 + 16) = v94;
    v61 = v95 & 1;
    if ( v61 )
    {
      v96 = (_QWORD *)(a1 + 24);
      v97 = 8;
    }
    else
    {
      v96 = v88;
      v97 = 2LL * *(unsigned int *)(a1 + 32);
    }
    v98 = &v96[v97];
    if ( v98 != v96 )
    {
      do
      {
        *v96 = -4096;
        v96 += 2;
      }
      while ( v98 != v96 );
      LOBYTE(v94) = *(_BYTE *)(a1 + 16);
      LOBYTE(v61) = v94 & 1;
    }
    if ( v90 != &v115 )
    {
      v99 = &v115;
      do
      {
        v104 = *v99;
        LOBYTE(v61) = v94 & 1;
        if ( *v99 != -4096 && v104 != -8192 )
        {
          if ( (_BYTE)v61 )
          {
            v100 = (_QWORD *)(a1 + 24);
            v101 = 3;
          }
          else
          {
            v105 = *(_DWORD *)(a1 + 32);
            if ( !v105 )
            {
              *(_QWORD *)&dword_0 = *v99;
              BUG();
            }
            v101 = v105 - 1;
            v100 = v88;
          }
          v102 = v101 & (((unsigned int)v104 >> 9) ^ ((unsigned int)v104 >> 4));
          v94 = (__int64)&v100[2 * v102];
          v103 = *(_QWORD *)v94;
          if ( v104 != *(_QWORD *)v94 )
          {
            v108 = 1;
            v109 = 0;
            if ( v103 != -4096 )
            {
              while ( 1 )
              {
                if ( !v109 && v103 == -8192 )
                  v109 = v94;
                v102 = v101 & (v108 + v102);
                v94 = (__int64)&v100[2 * v102];
                v103 = *(_QWORD *)v94;
                if ( v104 == *(_QWORD *)v94 )
                  break;
                if ( v103 == -4096 )
                {
                  if ( v109 )
                    v94 = v109;
                  break;
                }
                ++v108;
              }
            }
          }
          *(_QWORD *)v94 = v104;
          *(_QWORD *)(v94 + 8) = v99[1];
          LODWORD(v94) = (2 * (*(_DWORD *)(a1 + 16) >> 1) + 2) | *(_DWORD *)(a1 + 16) & 1;
          *(_DWORD *)(a1 + 16) = v94;
          LOBYTE(v61) = v94 & 1;
        }
        v99 += 2;
      }
      while ( v99 != v90 );
    }
LABEL_76:
    if ( (_BYTE)v61 )
    {
      v62 = a1 + 24;
      v63 = 3;
LABEL_78:
      v64 = v63 & v11;
      v13 = (__int64 *)(v62 + 16LL * v64);
      LODWORD(v19) = (*(_DWORD *)(a1 + 16) >> 1) + 1;
      v65 = *v13;
      if ( *v13 != a2 )
      {
        v66 = 1;
        v67 = nullptr;
        if ( v65 != -4096 )
        {
          while ( 1 )
          {
            if ( !v67 && v65 == -8192 )
              v67 = v13;
            v64 = v63 & (v66 + v64);
            v13 = (__int64 *)(v62 + 16LL * v64);
            v65 = *v13;
            if ( *v13 == a2 )
              break;
            if ( v65 == -4096 )
            {
              if ( v67 )
                v13 = v67;
              goto LABEL_11;
            }
            ++v66;
          }
        }
      }
      goto LABEL_11;
    }
    v68 = *(_DWORD *)(a1 + 32);
    v62 = *(_QWORD *)(a1 + 24);
    if ( v68 )
    {
      v63 = v68 - 1;
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

