bool __fastcall sub_B42070(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // r14d
  unsigned int v7; // edi
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // rsi
  _DWORD *v10; // rcx
  int v11; // edx
  unsigned int v13; // r14d
  __int64 v14; // r8
  unsigned __int64 *v15; // r9
  int v16; // edx
  unsigned int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 *v20; // r13
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r15
  __int64 v24; // rdi
  unsigned __int64 *v25; // rax
  __int64 v26; // r15
  __int64 v27; // rdx
  unsigned __int64 *v28; // rdi
  unsigned __int64 *i; // rdx
  unsigned __int64 *j; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // r10
  int v33; // r9d
  unsigned int v34; // r8d
  __int64 *v35; // rcx
  __int64 v36; // r11
  unsigned __int64 *v37; // rax
  __int64 v38; // r13
  unsigned __int64 *v39; // r12
  __int64 v40; // r13
  __int64 v41; // rdx
  unsigned __int64 *v42; // rdi
  unsigned __int64 *k; // rdx
  unsigned __int64 *m; // rax
  unsigned __int64 v45; // rdx
  __int64 v46; // r10
  int v47; // r9d
  unsigned int v48; // r8d
  __int64 *v49; // rcx
  __int64 v50; // r11
  int v51; // r9d
  int v52; // r9d
  char v53; // cl
  __int64 v54; // r8
  int v55; // esi
  unsigned int v56; // ecx
  unsigned __int64 v57; // rdi
  int v58; // r10d
  unsigned __int64 *v59; // r9
  int v60; // eax
  int v61; // ecx
  __int64 v62; // rdi
  int v63; // ecx
  unsigned int v64; // r12d
  unsigned __int64 v65; // rsi
  int v66; // r9d
  unsigned __int64 *v67; // r8
  int v68; // ecx
  __int64 *v69; // r12
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rsi
  __int64 v80; // rdx
  _QWORD *v81; // rsi
  unsigned __int64 *v82; // rax
  unsigned __int64 v83; // rsi
  __int64 v84; // r8
  int v85; // edi
  unsigned int v86; // ecx
  __int64 v87; // r9
  char v88; // cl
  int v89; // edi
  __int64 *v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rdx
  char v99; // cl
  _QWORD *v100; // rax
  __int64 v101; // rsi
  _QWORD *v102; // rsi
  unsigned __int64 *v103; // rax
  unsigned __int64 v104; // rsi
  __int64 v105; // r10
  int v106; // r9d
  unsigned int v107; // ecx
  __int64 v108; // r11
  char v109; // cl
  int v110; // r9d
  int v111; // r15d
  __int64 *v112; // r14
  __int64 *v113; // r14
  int v114; // r11d
  __int64 v115; // r10
  int v116; // r14d
  __int64 v117; // r13
  unsigned __int64 v118; // rdx
  __int64 v119; // rax
  __int64 v120; // rdi
  int v121; // [rsp+4h] [rbp-C4h]
  __int64 v122; // [rsp+10h] [rbp-B8h] BYREF
  int v123; // [rsp+18h] [rbp-B0h]
  _BYTE v124[168]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
  v4 = *(_BYTE *)(a1 + 32) & 1;
  if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
  {
    v5 = a1 + 40;
    v6 = 7;
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 48);
    v5 = *(_QWORD *)(a1 + 40);
    if ( !v13 )
      goto LABEL_33;
    v6 = v13 - 1;
  }
  v7 = v6 & (v3 ^ (v3 >> 9));
  v8 = (unsigned __int64 *)(v5 + 16LL * v7);
  v9 = *v8;
  if ( v3 == *v8 )
  {
LABEL_4:
    v10 = v8 + 1;
    v11 = *((_DWORD *)v8 + 2) >> 1;
    return v11 + (*v10 & 1) > 1;
  }
  v14 = 1;
  v15 = nullptr;
  if ( v9 )
  {
    while ( 1 )
    {
      if ( v9 == -1 && !v15 )
        v15 = v8;
      v7 = v6 & (v14 + v7);
      v8 = (unsigned __int64 *)(v5 + 16LL * v7);
      v9 = *v8;
      if ( v3 == *v8 )
        goto LABEL_4;
      if ( !v9 )
        break;
      v14 = (unsigned int)(v14 + 1);
    }
    if ( v15 )
      v8 = v15;
  }
  v16 = (*(_DWORD *)(a1 + 32) >> 1) + 1;
  v17 = 4 * v16;
  if ( !(_BYTE)v4 )
  {
    v13 = *(_DWORD *)(a1 + 48);
    v18 = 2 * v13;
    if ( 3 * v13 > v17 )
    {
      v19 = v13 >> 3;
      if ( v13 - (v16 + *(_DWORD *)(a1 + 36)) > (unsigned int)v19 )
        goto LABEL_12;
      if ( v13 <= 8 )
      {
        v25 = *(unsigned __int64 **)(a1 + 40);
        *(_BYTE *)(a1 + 32) |= 1u;
        v23 = v13;
        v20 = v25;
      }
      else
      {
        v20 = *(unsigned __int64 **)(a1 + 40);
        v21 = ((((((((v13 - 1) | ((unsigned __int64)(v13 - 1) >> 1)) >> 2)
                 | (v13 - 1)
                 | ((unsigned __int64)(v13 - 1) >> 1)) >> 4)
               | (((v13 - 1) | ((unsigned __int64)(v13 - 1) >> 1)) >> 2)
               | (v13 - 1)
               | ((unsigned __int64)(v13 - 1) >> 1)) >> 8)
             | (((((v13 - 1) | ((unsigned __int64)(v13 - 1) >> 1)) >> 2) | (v13 - 1)
                                                                         | ((unsigned __int64)(v13 - 1) >> 1)) >> 4)
             | (((v13 - 1) | ((unsigned __int64)(v13 - 1) >> 1)) >> 2)
             | (v13 - 1)
             | ((unsigned __int64)(v13 - 1) >> 1)) >> 16;
        v22 = (v21
             | (((((((v13 - 1) | ((unsigned __int64)(v13 - 1) >> 1)) >> 2)
                 | (v13 - 1)
                 | ((unsigned __int64)(v13 - 1) >> 1)) >> 4)
               | (((v13 - 1) | ((unsigned __int64)(v13 - 1) >> 1)) >> 2)
               | (v13 - 1)
               | ((unsigned __int64)(v13 - 1) >> 1)) >> 8)
             | (((((v13 - 1) | ((unsigned __int64)(v13 - 1) >> 1)) >> 2) | (v13 - 1)
                                                                         | ((unsigned __int64)(v13 - 1) >> 1)) >> 4)
             | (((v13 - 1) | ((unsigned __int64)(v13 - 1) >> 1)) >> 2)
             | (v13 - 1)
             | ((unsigned __int64)(v13 - 1) >> 1))
            + 1;
        v23 = ((unsigned int)v21
             | (((((((v13 - 1) | ((unsigned __int64)(v13 - 1) >> 1)) >> 2)
                 | (v13 - 1)
                 | ((unsigned __int64)(v13 - 1) >> 1)) >> 4)
               | (((v13 - 1) | ((unsigned __int64)(v13 - 1) >> 1)) >> 2)
               | (v13 - 1)
               | ((unsigned __int64)(v13 - 1) >> 1)) >> 8)
             | (((((v13 - 1) | ((unsigned __int64)(v13 - 1) >> 1)) >> 2) | (v13 - 1)
                                                                         | ((unsigned __int64)(v13 - 1) >> 1)) >> 4)
             | (((v13 - 1) | ((unsigned __int64)(v13 - 1) >> 1)) >> 2)
             | (v13 - 1)
             | ((v13 - 1) >> 1))
            + 1;
        v24 = 16LL * (unsigned int)v22;
        if ( (unsigned int)v22 <= 0x40 )
        {
          v24 = 1024;
          v23 = 64;
        }
        v25 = (unsigned __int64 *)sub_220C370(v24, 8, v21, v19, v14, v15);
        *(_DWORD *)(a1 + 48) = v23;
        *(_QWORD *)(a1 + 40) = v25;
      }
      v26 = 2 * v23;
      v27 = *(_QWORD *)(a1 + 32) & 1LL;
      v28 = &v20[2 * v13];
      *(_QWORD *)(a1 + 32) = v27;
      if ( v27 )
      {
        v25 = (unsigned __int64 *)(a1 + 40);
        v26 = 16;
      }
      for ( i = &v25[v26]; i != v25; v25 += 2 )
        *v25 = 0;
      for ( j = v20; v28 != j; j += 2 )
      {
        v31 = *j;
        if ( *j - 1 <= 0xFFFFFFFFFFFFFFFDLL )
        {
          if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
          {
            v32 = a1 + 40;
            v33 = 7;
          }
          else
          {
            v52 = *(_DWORD *)(a1 + 48);
            v32 = *(_QWORD *)(a1 + 40);
            if ( !v52 )
            {
              *(_QWORD *)&dword_0 = *j;
              BUG();
            }
            v33 = v52 - 1;
          }
          v34 = v33 & (v31 ^ (v31 >> 9));
          v35 = (__int64 *)(v32 + 16LL * v34);
          v36 = *v35;
          if ( v31 != *v35 && v36 )
          {
            v121 = 1;
            v113 = nullptr;
            while ( 1 )
            {
              if ( !v113 && v36 == -1 )
                v113 = v35;
              v34 = v33 & (v121 + v34);
              v35 = (__int64 *)(v32 + 16LL * v34);
              v36 = *v35;
              if ( v31 == *v35 )
                break;
              if ( !v36 )
              {
                if ( v113 )
                  v35 = v113;
                break;
              }
              ++v121;
            }
          }
          *v35 = *j;
          *((_DWORD *)v35 + 2) = *((_DWORD *)j + 2);
          *(_DWORD *)(a1 + 32) = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1;
        }
      }
      operator delete();
      LOBYTE(v61) = *(_BYTE *)(a1 + 32) & 1;
      goto LABEL_75;
    }
    if ( (unsigned int)v18 > 8 )
    {
      v118 = (((((unsigned int)(v18 - 1) | ((unsigned __int64)(unsigned int)(v18 - 1) >> 1)) >> 2)
             | (unsigned int)(v18 - 1)
             | ((unsigned __int64)(unsigned int)(v18 - 1) >> 1)
             | (((((unsigned int)(v18 - 1) | ((unsigned __int64)(unsigned int)(v18 - 1) >> 1)) >> 2)
               | (unsigned int)(v18 - 1)
               | ((unsigned __int64)(unsigned int)(v18 - 1) >> 1)) >> 4)) >> 8)
           | (((unsigned int)(v18 - 1) | ((unsigned __int64)(unsigned int)(v18 - 1) >> 1)) >> 2)
           | (unsigned int)(v18 - 1)
           | ((unsigned __int64)(unsigned int)(v18 - 1) >> 1)
           | (((((unsigned int)(v18 - 1) | ((unsigned __int64)(unsigned int)(v18 - 1) >> 1)) >> 2)
             | (unsigned int)(v18 - 1)
             | ((unsigned __int64)(unsigned int)(v18 - 1) >> 1)) >> 4);
      v119 = (v118 | (v118 >> 16)) + 1;
      v38 = (unsigned int)v119;
      v39 = *(unsigned __int64 **)(a1 + 40);
      if ( (unsigned int)v119 <= 0x40 )
      {
        v120 = 1024;
        v38 = 64;
      }
      else
      {
        v120 = 16LL * (unsigned int)v119;
      }
      v37 = (unsigned __int64 *)sub_220C370(v120, 8, v118, v18, v14, v15);
      *(_DWORD *)(a1 + 48) = v38;
      *(_QWORD *)(a1 + 40) = v37;
      goto LABEL_34;
    }
LABEL_33:
    *(_BYTE *)(a1 + 32) |= 1u;
    v37 = *(unsigned __int64 **)(a1 + 40);
    v38 = v13;
    v39 = v37;
LABEL_34:
    v40 = 2 * v38;
    v41 = *(_QWORD *)(a1 + 32) & 1LL;
    v42 = &v39[2 * v13];
    *(_QWORD *)(a1 + 32) = v41;
    if ( v41 )
    {
      v37 = (unsigned __int64 *)(a1 + 40);
      v40 = 16;
    }
    for ( k = &v37[v40]; k != v37; v37 += 2 )
      *v37 = 0;
    for ( m = v39; v42 != m; m += 2 )
    {
      v45 = *m;
      if ( *m - 1 <= 0xFFFFFFFFFFFFFFFDLL )
      {
        if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
        {
          v46 = a1 + 40;
          v47 = 7;
        }
        else
        {
          v51 = *(_DWORD *)(a1 + 48);
          v46 = *(_QWORD *)(a1 + 40);
          if ( !v51 )
          {
            *(_QWORD *)&dword_0 = *m;
            BUG();
          }
          v47 = v51 - 1;
        }
        v48 = v47 & (v45 ^ (v45 >> 9));
        v49 = (__int64 *)(v46 + 16LL * v48);
        v50 = *v49;
        if ( *v49 != v45 )
        {
          v111 = 1;
          v112 = nullptr;
          if ( v50 )
          {
            while ( 1 )
            {
              if ( !v112 && v50 == -1 )
                v112 = v49;
              v48 = v47 & (v111 + v48);
              v49 = (__int64 *)(v46 + 16LL * v48);
              v50 = *v49;
              if ( v45 == *v49 )
                break;
              if ( !v50 )
              {
                if ( v112 )
                  v49 = v112;
                break;
              }
              ++v111;
            }
          }
        }
        *v49 = *m;
        *((_DWORD *)v49 + 2) = *((_DWORD *)m + 2);
        *(_DWORD *)(a1 + 32) = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1;
      }
    }
    operator delete();
    v53 = *(_BYTE *)(a1 + 32) & 1;
LABEL_60:
    if ( v53 )
    {
      v54 = a1 + 40;
      v55 = 7;
    }
    else
    {
      v60 = *(_DWORD *)(a1 + 48);
      v54 = *(_QWORD *)(a1 + 40);
      if ( !v60 )
        goto LABEL_207;
      v55 = v60 - 1;
    }
    v56 = v55 & (v3 ^ (v3 >> 9));
    v16 = (*(_DWORD *)(a1 + 32) >> 1) + 1;
    v8 = (unsigned __int64 *)(v54 + 16LL * v56);
    v57 = *v8;
    if ( v3 != *v8 )
    {
      v58 = 1;
      v59 = nullptr;
      if ( v57 )
      {
        while ( 1 )
        {
          if ( v57 == -1 && !v59 )
            v59 = v8;
          v56 = v55 & (v58 + v56);
          v8 = (unsigned __int64 *)(v54 + 16LL * v56);
          v57 = *v8;
          if ( v3 == *v8 )
            break;
          if ( !v57 )
          {
            if ( v59 )
              v8 = v59;
            goto LABEL_12;
          }
          ++v58;
        }
      }
    }
    goto LABEL_12;
  }
  if ( v17 > 0x17 )
  {
    if ( (unsigned __int64)(*(_QWORD *)(a1 + 40) - 1LL) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      v122 = *(_QWORD *)(a1 + 40);
      v69 = (__int64 *)v124;
      v123 = *(_DWORD *)(a1 + 48);
    }
    else
    {
      v69 = &v122;
    }
    v70 = *(_QWORD *)(a1 + 56);
    if ( (unsigned __int64)(v70 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v69 = v70;
      v69 += 2;
      *((_DWORD *)v69 - 2) = *(_DWORD *)(a1 + 64);
    }
    v71 = *(_QWORD *)(a1 + 72);
    if ( (unsigned __int64)(v71 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v69 = v71;
      v69 += 2;
      *((_DWORD *)v69 - 2) = *(_DWORD *)(a1 + 80);
    }
    v72 = *(_QWORD *)(a1 + 88);
    if ( (unsigned __int64)(v72 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v69 = v72;
      v69 += 2;
      *((_DWORD *)v69 - 2) = *(_DWORD *)(a1 + 96);
    }
    v73 = *(_QWORD *)(a1 + 104);
    if ( (unsigned __int64)(v73 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v69 = v73;
      v69 += 2;
      *((_DWORD *)v69 - 2) = *(_DWORD *)(a1 + 112);
    }
    v74 = *(_QWORD *)(a1 + 120);
    if ( (unsigned __int64)(v74 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v69 = v74;
      v69 += 2;
      *((_DWORD *)v69 - 2) = *(_DWORD *)(a1 + 128);
    }
    v75 = *(_QWORD *)(a1 + 136);
    if ( (unsigned __int64)(v75 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v69 = v75;
      v69 += 2;
      *((_DWORD *)v69 - 2) = *(_DWORD *)(a1 + 144);
    }
    v76 = *(_QWORD *)(a1 + 152);
    if ( (unsigned __int64)(v76 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v69 = v76;
      v69 += 2;
      *((_DWORD *)v69 - 2) = *(_DWORD *)(a1 + 160);
    }
    *(_BYTE *)(a1 + 32) &= ~1u;
    v77 = (_QWORD *)sub_220C370(1024, 8, v76 - 1, v4, v14, v15);
    v78 = *(_QWORD *)(a1 + 32);
    v79 = 128;
    *(_DWORD *)(a1 + 48) = 64;
    *(_QWORD *)(a1 + 40) = v77;
    v80 = v78 & 1;
    *(_QWORD *)(a1 + 32) = v80;
    v53 = v80 & 1;
    if ( (v80 & 1) != 0 )
    {
      v77 = (_QWORD *)(a1 + 40);
      v79 = 16;
    }
    v81 = &v77[v79];
    if ( v81 != v77 )
    {
      do
      {
        *v77 = 0;
        v77 += 2;
      }
      while ( v81 != v77 );
      LOBYTE(v80) = *(_BYTE *)(a1 + 32);
      v53 = v80 & 1;
    }
    if ( v69 != &v122 )
    {
      v82 = (unsigned __int64 *)&v122;
      do
      {
        v83 = *v82;
        v53 = v80 & 1;
        if ( *v82 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
        {
          if ( v53 )
          {
            v84 = a1 + 40;
            v85 = 7;
          }
          else
          {
            v89 = *(_DWORD *)(a1 + 48);
            v84 = *(_QWORD *)(a1 + 40);
            if ( !v89 )
            {
              *(_QWORD *)&dword_0 = *v82;
              BUG();
            }
            v85 = v89 - 1;
          }
          v86 = v85 & (v83 ^ (v83 >> 9));
          v80 = v84 + 16LL * v86;
          v87 = *(_QWORD *)v80;
          if ( v83 != *(_QWORD *)v80 )
          {
            v114 = 1;
            v115 = 0;
            if ( v87 )
            {
              while ( 1 )
              {
                if ( !v115 && v87 == -1 )
                  v115 = v80;
                v86 = v85 & (v114 + v86);
                v80 = v84 + 16LL * v86;
                v87 = *(_QWORD *)v80;
                if ( v83 == *(_QWORD *)v80 )
                  break;
                if ( !v87 )
                {
                  if ( v115 )
                    v80 = v115;
                  break;
                }
                ++v114;
              }
            }
          }
          *(_QWORD *)v80 = *v82;
          *(_DWORD *)(v80 + 8) = *((_DWORD *)v82 + 2);
          LODWORD(v80) = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1;
          v88 = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_BYTE *)(a1 + 32) & 1;
          *(_DWORD *)(a1 + 32) = v80;
          v53 = v88 & 1;
        }
        v82 += 2;
      }
      while ( v82 != (unsigned __int64 *)v69 );
    }
    goto LABEL_60;
  }
  if ( v16 + *(_DWORD *)(a1 + 36) == 8 || v16 + *(_DWORD *)(a1 + 36) == 7 )
  {
    if ( (unsigned __int64)(*(_QWORD *)(a1 + 40) - 1LL) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      v122 = *(_QWORD *)(a1 + 40);
      v90 = (__int64 *)v124;
      v123 = *(_DWORD *)(a1 + 48);
    }
    else
    {
      v90 = &v122;
    }
    v91 = *(_QWORD *)(a1 + 56);
    if ( (unsigned __int64)(v91 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v90 = v91;
      v90 += 2;
      *((_DWORD *)v90 - 2) = *(_DWORD *)(a1 + 64);
    }
    v92 = *(_QWORD *)(a1 + 72);
    if ( (unsigned __int64)(v92 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v90 = v92;
      v90 += 2;
      *((_DWORD *)v90 - 2) = *(_DWORD *)(a1 + 80);
    }
    v93 = *(_QWORD *)(a1 + 88);
    if ( (unsigned __int64)(v93 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v90 = v93;
      v90 += 2;
      *((_DWORD *)v90 - 2) = *(_DWORD *)(a1 + 96);
    }
    v94 = *(_QWORD *)(a1 + 104);
    if ( (unsigned __int64)(v94 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v90 = v94;
      v90 += 2;
      *((_DWORD *)v90 - 2) = *(_DWORD *)(a1 + 112);
    }
    v95 = *(_QWORD *)(a1 + 120);
    if ( (unsigned __int64)(v95 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v90 = v95;
      v90 += 2;
      *((_DWORD *)v90 - 2) = *(_DWORD *)(a1 + 128);
    }
    v96 = *(_QWORD *)(a1 + 136);
    if ( (unsigned __int64)(v96 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v90 = v96;
      v90 += 2;
      *((_DWORD *)v90 - 2) = *(_DWORD *)(a1 + 144);
    }
    v97 = *(_QWORD *)(a1 + 152);
    if ( (unsigned __int64)(v97 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v90 = v97;
      v90 += 2;
      *((_DWORD *)v90 - 2) = *(_DWORD *)(a1 + 160);
    }
    v98 = *(_QWORD *)(a1 + 32) & 1LL;
    v99 = *(_BYTE *)(a1 + 32) & 1;
    *(_QWORD *)(a1 + 32) = v98;
    v61 = v99 & 1;
    if ( v61 )
    {
      v100 = (_QWORD *)(a1 + 40);
      v101 = 16;
    }
    else
    {
      v100 = *(_QWORD **)(a1 + 40);
      v101 = 2LL * *(unsigned int *)(a1 + 48);
    }
    v102 = &v100[v101];
    if ( v102 != v100 )
    {
      do
      {
        *v100 = 0;
        v100 += 2;
      }
      while ( v102 != v100 );
      LOBYTE(v98) = *(_BYTE *)(a1 + 32);
      LOBYTE(v61) = v98 & 1;
    }
    if ( v90 != &v122 )
    {
      v103 = (unsigned __int64 *)&v122;
      do
      {
        v104 = *v103;
        LOBYTE(v61) = v98 & 1;
        if ( *v103 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
        {
          if ( (_BYTE)v61 )
          {
            v105 = a1 + 40;
            v106 = 7;
          }
          else
          {
            v110 = *(_DWORD *)(a1 + 48);
            v105 = *(_QWORD *)(a1 + 40);
            if ( !v110 )
            {
              *(_QWORD *)&dword_0 = *v103;
              BUG();
            }
            v106 = v110 - 1;
          }
          v107 = v106 & (v104 ^ (v104 >> 9));
          v98 = v105 + 16LL * v107;
          v108 = *(_QWORD *)v98;
          if ( *(_QWORD *)v98 != v104 )
          {
            v116 = 1;
            v117 = 0;
            if ( v108 )
            {
              while ( 1 )
              {
                if ( v108 == -1 && !v117 )
                  v117 = v98;
                v107 = v106 & (v116 + v107);
                v98 = v105 + 16LL * v107;
                v108 = *(_QWORD *)v98;
                if ( v104 == *(_QWORD *)v98 )
                  break;
                if ( !v108 )
                {
                  if ( v117 )
                    v98 = v117;
                  break;
                }
                ++v116;
              }
            }
          }
          *(_QWORD *)v98 = *v103;
          *(_DWORD *)(v98 + 8) = *((_DWORD *)v103 + 2);
          LODWORD(v98) = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1;
          v109 = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_BYTE *)(a1 + 32) & 1;
          *(_DWORD *)(a1 + 32) = v98;
          LOBYTE(v61) = v109 & 1;
        }
        v103 += 2;
      }
      while ( v103 != (unsigned __int64 *)v90 );
    }
LABEL_75:
    if ( (_BYTE)v61 )
    {
      v62 = a1 + 40;
      v63 = 7;
LABEL_77:
      v64 = v63 & (v3 ^ (v3 >> 9));
      v8 = (unsigned __int64 *)(v62 + 16LL * v64);
      v16 = (*(_DWORD *)(a1 + 32) >> 1) + 1;
      v65 = *v8;
      if ( v3 != *v8 )
      {
        v66 = 1;
        v67 = nullptr;
        if ( v65 )
        {
          while ( 1 )
          {
            if ( !v67 && v65 == -1 )
              v67 = v8;
            v64 = v63 & (v66 + v64);
            v8 = (unsigned __int64 *)(v62 + 16LL * v64);
            v65 = *v8;
            if ( v3 == *v8 )
              break;
            if ( !v65 )
            {
              if ( v67 )
                v8 = v67;
              goto LABEL_12;
            }
            ++v66;
          }
        }
      }
      goto LABEL_12;
    }
    v68 = *(_DWORD *)(a1 + 48);
    v62 = *(_QWORD *)(a1 + 40);
    if ( v68 )
    {
      v63 = v68 - 1;
      goto LABEL_77;
    }
LABEL_207:
    *(_DWORD *)(a1 + 32) = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1;
    BUG();
  }
LABEL_12:
  *(_DWORD *)(a1 + 32) = (2 * v16) | *(_DWORD *)(a1 + 32) & 1;
  if ( *v8 )
    --*(_DWORD *)(a1 + 36);
  *v8 = v3;
  v10 = v8 + 1;
  v11 = 0;
  *((_DWORD *)v8 + 2) = 0;
  return v11 + (*v10 & 1) > 1;
}

