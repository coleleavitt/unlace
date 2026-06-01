_QWORD *__fastcall sub_E50470(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v41; // r11
  __int64 *v42; // rdi
  _QWORD *v43; // rax
  __int64 v44; // rdx
  _QWORD *k; // rdx
  __int64 *m; // rax
  __int64 v47; // r8
  int v48; // r9d
  unsigned int v49; // esi
  _QWORD *v50; // rcx
  __int64 v51; // r10
  __int64 v52; // rdx
  char v53; // di
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
  __int64 *v70; // r12
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rsi
  _QWORD *v76; // rsi
  _QWORD *v77; // rdx
  __int64 v78; // rcx
  _QWORD *v79; // rcx
  __int64 *v80; // rdx
  __int64 v81; // r9
  int v82; // r8d
  unsigned int v83; // edi
  __int64 v84; // r10
  __int64 v85; // rcx
  int v86; // r8d
  _QWORD *v87; // r11
  __int64 v88; // rax
  __int64 *v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rcx
  char v94; // si
  _QWORD *v95; // rax
  __int64 v96; // rdx
  _QWORD *v97; // rdx
  __int64 *v98; // rax
  _QWORD *v99; // r9
  int v100; // r8d
  unsigned int v101; // esi
  __int64 v102; // r10
  __int64 v103; // rdx
  int v104; // r8d
  int v105; // r15d
  _QWORD *v106; // r11
  __int64 v107; // r15
  __int64 v108; // rdi
  __int64 *v109; // [rsp+0h] [rbp-A8h]
  int v110; // [rsp+0h] [rbp-A8h]
  _QWORD *v111; // [rsp+10h] [rbp-98h]
  int v112; // [rsp+18h] [rbp-90h]
  _QWORD *v113; // [rsp+18h] [rbp-90h]
  int v114; // [rsp+20h] [rbp-88h]
  __int64 v115; // [rsp+30h] [rbp-78h] BYREF
  __int64 v116; // [rsp+38h] [rbp-70h]
  _BYTE v117[104]; // [rsp+40h] [rbp-68h] BYREF

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
      v109 = *(__int64 **)(a1 + 24);
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
        v26 = sub_220C370(v25, 8, v20, v23, v19, a6);
        *(_QWORD *)(a1 + 24) = v26;
        v27 = (_QWORD *)v26;
        *(_DWORD *)(a1 + 32) = v24;
      }
      v28 = (*(_QWORD *)(a1 + 16) & 1LL) == 0;
      *(_QWORD *)(a1 + 16) &= 1uLL;
      v29 = &v109[2 * v17];
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
      for ( j = v109; v29 != j; j += 2 )
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
    v10 = *(__int64 **)(a1 + 24);
    if ( (unsigned int)v22 > 4 )
    {
      v40 = ((((((unsigned int)(v22 - 1) | ((unsigned __int64)(unsigned int)(v22 - 1) >> 1)) >> 2)
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
      v108 = 16LL * (unsigned int)v40;
      if ( (unsigned int)v40 <= 0x40 )
      {
        v108 = 1024;
        LODWORD(v40) = 64;
      }
      v41 = sub_220C370(v108, 8, v20, v22, v19, a6);
      *(_QWORD *)(a1 + 24) = v41;
      *(_DWORD *)(a1 + 32) = v40;
      goto LABEL_36;
    }
LABEL_35:
    *(_BYTE *)(a1 + 16) |= 1u;
    LODWORD(v40) = v17;
    v41 = (__int64)v10;
LABEL_36:
    v28 = (*(_QWORD *)(a1 + 16) & 1LL) == 0;
    *(_QWORD *)(a1 + 16) &= 1uLL;
    v42 = &v10[2 * v17];
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
    for ( m = v10; v42 != m; m += 2 )
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
        goto LABEL_204;
      v55 = v60 - 1;
    }
    v56 = v55 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    LODWORD(v20) = (*(_DWORD *)(a1 + 16) >> 1) + 1;
    v14 = (__int64 *)(v54 + 16LL * v56);
    v57 = *v14;
    if ( *v14 != a2 )
    {
      v58 = 1;
      v59 = nullptr;
      if ( v57 != -4096 )
      {
        while ( 1 )
        {
          if ( !v59 && v57 == -8192 )
            v59 = v14;
          v56 = v55 & (v58 + v56);
          v14 = (__int64 *)(v54 + 16LL * v56);
          v57 = *v14;
          if ( *v14 == a2 )
            break;
          if ( v57 == -4096 )
          {
            if ( v59 )
              v14 = v59;
            goto LABEL_11;
          }
          ++v58;
        }
      }
    }
    goto LABEL_11;
  }
  if ( v21 > 0xB )
  {
    v69 = *(_QWORD *)(a1 + 24);
    if ( v69 == -4096 || v69 == -8192 )
    {
      v70 = &v115;
    }
    else
    {
      v115 = *(_QWORD *)(a1 + 24);
      v70 = (__int64 *)v117;
      v116 = *(_QWORD *)(a1 + 32);
    }
    v71 = *(_QWORD *)(a1 + 40);
    if ( v71 != -4096 && v71 != -8192 )
    {
      *v70 = v71;
      v70 += 2;
      *(v70 - 1) = *(_QWORD *)(a1 + 48);
    }
    v72 = *(_QWORD *)(a1 + 56);
    if ( v72 != -4096 && v72 != -8192 )
    {
      *v70 = v72;
      v70 += 2;
      *(v70 - 1) = *(_QWORD *)(a1 + 64);
    }
    v73 = *(_QWORD *)(a1 + 72);
    if ( v73 != -4096 && v73 != -8192 )
    {
      *v70 = v73;
      v70 += 2;
      *(v70 - 1) = *(_QWORD *)(a1 + 80);
    }
    *(_BYTE *)(a1 + 16) &= ~1u;
    v74 = sub_220C370(1024, 8, v20, v9, v19, a6);
    v75 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 32) = 64;
    *(_QWORD *)(a1 + 24) = v74;
    v76 = (_QWORD *)(v75 & 1);
    *(_QWORD *)(a1 + 16) = v76;
    v53 = (unsigned __int8)v76 & 1;
    if ( ((unsigned __int8)v76 & 1) != 0 )
    {
      v77 = (_QWORD *)(a1 + 24);
      v78 = 8;
    }
    else
    {
      v78 = 128;
      v77 = (_QWORD *)v74;
    }
    v79 = &v77[v78];
    if ( v79 != v77 )
    {
      do
      {
        *v77 = -4096;
        v77 += 2;
      }
      while ( v79 != v77 );
      LOBYTE(v76) = *(_BYTE *)(a1 + 16);
      v53 = (unsigned __int8)v76 & 1;
    }
    if ( v70 != &v115 )
    {
      v80 = &v115;
      do
      {
        v85 = *v80;
        v53 = (unsigned __int8)v76 & 1;
        if ( *v80 != -8192 && v85 != -4096 )
        {
          if ( v53 )
          {
            v81 = a1 + 24;
            v82 = 3;
          }
          else
          {
            v86 = *(_DWORD *)(a1 + 32);
            if ( !v86 )
            {
              *(_QWORD *)&dword_0 = *v80;
              BUG();
            }
            v82 = v86 - 1;
            v81 = v74;
          }
          v83 = v82 & (((unsigned int)v85 >> 9) ^ ((unsigned int)v85 >> 4));
          v76 = (_QWORD *)(v81 + 16LL * v83);
          v84 = *v76;
          if ( *v76 != v85 )
          {
            v105 = 1;
            v106 = nullptr;
            if ( v84 != -4096 )
            {
              while ( 1 )
              {
                if ( v84 == -8192 && !v106 )
                  v106 = v76;
                v83 = v82 & (v105 + v83);
                v76 = (_QWORD *)(v81 + 16LL * v83);
                v84 = *v76;
                if ( v85 == *v76 )
                  break;
                if ( v84 == -4096 )
                {
                  if ( v106 )
                    v76 = v106;
                  break;
                }
                ++v105;
              }
            }
          }
          *v76 = v85;
          v76[1] = v80[1];
          LODWORD(v76) = (2 * (*(_DWORD *)(a1 + 16) >> 1) + 2) | *(_DWORD *)(a1 + 16) & 1;
          *(_DWORD *)(a1 + 16) = (_DWORD)v76;
          v53 = (unsigned __int8)v76 & 1;
        }
        v80 += 2;
      }
      while ( v80 != v70 );
    }
    goto LABEL_61;
  }
  if ( (_DWORD)v20 + *(_DWORD *)(a1 + 20) == 4 )
  {
    v87 = *(_QWORD **)(a1 + 24);
    if ( v87 == (_QWORD *)-4096LL || v87 == (_QWORD *)-8192LL )
    {
      v89 = &v115;
    }
    else
    {
      v88 = *(_QWORD *)(a1 + 32);
      v115 = *(_QWORD *)(a1 + 24);
      v89 = (__int64 *)v117;
      v116 = v88;
    }
    v90 = *(_QWORD *)(a1 + 40);
    if ( v90 != -4096 && v90 != -8192 )
    {
      *v89 = v90;
      v89 += 2;
      *(v89 - 1) = *(_QWORD *)(a1 + 48);
    }
    v91 = *(_QWORD *)(a1 + 56);
    if ( v91 != -4096 && v91 != -8192 )
    {
      *v89 = v91;
      v89 += 2;
      *(v89 - 1) = *(_QWORD *)(a1 + 64);
    }
    v92 = *(_QWORD *)(a1 + 72);
    if ( v92 != -4096 && v92 != -8192 )
    {
      *v89 = v92;
      v89 += 2;
      *(v89 - 1) = *(_QWORD *)(a1 + 80);
    }
    v93 = *(_QWORD *)(a1 + 16) & 1LL;
    v94 = *(_BYTE *)(a1 + 16) & 1;
    *(_QWORD *)(a1 + 16) = v93;
    v61 = v94 & 1;
    if ( v61 )
    {
      v95 = (_QWORD *)(a1 + 24);
      v96 = 8;
    }
    else
    {
      v95 = v87;
      v96 = 2LL * *(unsigned int *)(a1 + 32);
    }
    v97 = &v95[v96];
    if ( v97 != v95 )
    {
      do
      {
        *v95 = -4096;
        v95 += 2;
      }
      while ( v97 != v95 );
      LOBYTE(v93) = *(_BYTE *)(a1 + 16);
      LOBYTE(v61) = v93 & 1;
    }
    if ( v89 != &v115 )
    {
      v98 = &v115;
      do
      {
        v103 = *v98;
        LOBYTE(v61) = v93 & 1;
        if ( *v98 != -4096 && v103 != -8192 )
        {
          if ( (_BYTE)v61 )
          {
            v99 = (_QWORD *)(a1 + 24);
            v100 = 3;
          }
          else
          {
            v104 = *(_DWORD *)(a1 + 32);
            if ( !v104 )
            {
              *(_QWORD *)&dword_0 = *v98;
              BUG();
            }
            v100 = v104 - 1;
            v99 = v87;
          }
          v101 = v100 & (((unsigned int)v103 >> 9) ^ ((unsigned int)v103 >> 4));
          v93 = (__int64)&v99[2 * v101];
          v102 = *(_QWORD *)v93;
          if ( v103 != *(_QWORD *)v93 && v102 != -4096 )
          {
            v110 = 1;
            v107 = 0;
            while ( 1 )
            {
              if ( !v107 && v102 == -8192 )
                v107 = v93;
              v101 = v100 & (v110 + v101);
              v93 = (__int64)&v99[2 * v101];
              v102 = *(_QWORD *)v93;
              if ( v103 == *(_QWORD *)v93 )
                break;
              if ( v102 == -4096 )
              {
                if ( v107 )
                  v93 = v107;
                break;
              }
              ++v110;
            }
          }
          *(_QWORD *)v93 = v103;
          *(_QWORD *)(v93 + 8) = v98[1];
          LODWORD(v93) = (2 * (*(_DWORD *)(a1 + 16) >> 1) + 2) | *(_DWORD *)(a1 + 16) & 1;
          *(_DWORD *)(a1 + 16) = v93;
          LOBYTE(v61) = v93 & 1;
        }
        v98 += 2;
      }
      while ( v98 != v89 );
    }
LABEL_76:
    if ( (_BYTE)v61 )
    {
      v62 = a1 + 24;
      v63 = 3;
LABEL_78:
      v64 = v63 & v12;
      v14 = (__int64 *)(v62 + 16LL * v64);
      LODWORD(v20) = (*(_DWORD *)(a1 + 16) >> 1) + 1;
      v65 = *v14;
      if ( *v14 != a2 )
      {
        v66 = 1;
        v67 = nullptr;
        if ( v65 != -4096 )
        {
          while ( 1 )
          {
            if ( !v67 && v65 == -8192 )
              v67 = v14;
            v64 = v63 & (v66 + v64);
            v14 = (__int64 *)(v62 + 16LL * v64);
            v65 = *v14;
            if ( *v14 == a2 )
              break;
            if ( v65 == -4096 )
            {
              if ( v67 )
                v14 = v67;
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

