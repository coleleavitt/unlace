bool __fastcall sub_B65DB0(__int64 a1, __int64 a2)
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
  __int64 v27; // rsi
  __int64 v28; // rdx
  unsigned __int64 *v29; // rdi
  unsigned __int64 *i; // rdx
  unsigned __int64 *j; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // r10
  int v34; // r9d
  unsigned int v35; // r8d
  __int64 *v36; // rcx
  __int64 v37; // r11
  unsigned __int64 *v38; // rax
  __int64 v39; // r13
  unsigned __int64 *v40; // r12
  __int64 v41; // r13
  __int64 v42; // rsi
  __int64 v43; // rdx
  unsigned __int64 *v44; // rdi
  unsigned __int64 *k; // rdx
  unsigned __int64 *m; // rax
  unsigned __int64 v47; // rdx
  __int64 v48; // r10
  int v49; // r9d
  unsigned int v50; // r8d
  __int64 *v51; // rcx
  __int64 v52; // r11
  int v53; // r9d
  int v54; // r9d
  char v55; // cl
  __int64 v56; // r8
  int v57; // esi
  unsigned int v58; // ecx
  unsigned __int64 v59; // rdi
  int v60; // r10d
  unsigned __int64 *v61; // r9
  int v62; // eax
  int v63; // ecx
  __int64 v64; // rdi
  int v65; // ecx
  unsigned int v66; // r12d
  unsigned __int64 v67; // rsi
  int v68; // r9d
  unsigned __int64 *v69; // r8
  int v70; // ecx
  __int64 *v71; // r12
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rsi
  __int64 v82; // rdx
  _QWORD *v83; // rsi
  unsigned __int64 *v84; // rax
  unsigned __int64 v85; // rsi
  __int64 v86; // r8
  int v87; // edi
  unsigned int v88; // ecx
  __int64 v89; // r9
  char v90; // cl
  int v91; // edi
  __int64 *v92; // rdi
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rdx
  char v101; // cl
  _QWORD *v102; // rax
  __int64 v103; // rsi
  _QWORD *v104; // rsi
  unsigned __int64 *v105; // rax
  unsigned __int64 v106; // rsi
  __int64 v107; // r10
  int v108; // r9d
  unsigned int v109; // ecx
  __int64 v110; // r11
  char v111; // cl
  int v112; // r9d
  int v113; // r15d
  __int64 *v114; // r14
  __int64 *v115; // r14
  int v116; // r11d
  __int64 v117; // r10
  int v118; // r14d
  __int64 v119; // r13
  unsigned __int64 v120; // rdx
  __int64 v121; // rax
  __int64 v122; // rdi
  int v123; // [rsp+4h] [rbp-C4h]
  __int64 v124; // [rsp+10h] [rbp-B8h] BYREF
  int v125; // [rsp+18h] [rbp-B0h]
  _BYTE v126[168]; // [rsp+20h] [rbp-A8h] BYREF

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
        v25 = (unsigned __int64 *)sub_22300B0(v24, 8, v21, v19, v14, v15);
        *(_DWORD *)(a1 + 48) = v23;
        *(_QWORD *)(a1 + 40) = v25;
      }
      v26 = 2 * v23;
      v27 = 2LL * v13;
      v28 = *(_QWORD *)(a1 + 32) & 1LL;
      v29 = &v20[v27];
      *(_QWORD *)(a1 + 32) = v28;
      if ( v28 )
      {
        v25 = (unsigned __int64 *)(a1 + 40);
        v26 = 16;
      }
      for ( i = &v25[v26]; i != v25; v25 += 2 )
        *v25 = 0;
      for ( j = v20; v29 != j; j += 2 )
      {
        v32 = *j;
        if ( *j - 1 <= 0xFFFFFFFFFFFFFFFDLL )
        {
          if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
          {
            v33 = a1 + 40;
            v34 = 7;
          }
          else
          {
            v54 = *(_DWORD *)(a1 + 48);
            v33 = *(_QWORD *)(a1 + 40);
            if ( !v54 )
            {
              *(_QWORD *)&dword_0 = *j;
              BUG();
            }
            v34 = v54 - 1;
          }
          v35 = v34 & (v32 ^ (v32 >> 9));
          v36 = (__int64 *)(v33 + 16LL * v35);
          v37 = *v36;
          if ( v32 != *v36 && v37 )
          {
            v123 = 1;
            v115 = nullptr;
            while ( 1 )
            {
              if ( !v115 && v37 == -1 )
                v115 = v36;
              v35 = v34 & (v123 + v35);
              v36 = (__int64 *)(v33 + 16LL * v35);
              v37 = *v36;
              if ( v32 == *v36 )
                break;
              if ( !v37 )
              {
                if ( v115 )
                  v36 = v115;
                break;
              }
              ++v123;
            }
          }
          *v36 = *j;
          *((_DWORD *)v36 + 2) = *((_DWORD *)j + 2);
          *(_DWORD *)(a1 + 32) = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1;
        }
      }
      operator delete(v20, v27 * 8, 8);
      LOBYTE(v63) = *(_BYTE *)(a1 + 32) & 1;
      goto LABEL_75;
    }
    if ( (unsigned int)v18 > 8 )
    {
      v120 = (((((unsigned int)(v18 - 1) | ((unsigned __int64)(unsigned int)(v18 - 1) >> 1)) >> 2)
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
      v121 = (v120 | (v120 >> 16)) + 1;
      v39 = (unsigned int)v121;
      v40 = *(unsigned __int64 **)(a1 + 40);
      if ( (unsigned int)v121 <= 0x40 )
      {
        v122 = 1024;
        v39 = 64;
      }
      else
      {
        v122 = 16LL * (unsigned int)v121;
      }
      v38 = (unsigned __int64 *)sub_22300B0(v122, 8, v120, v18, v14, v15);
      *(_DWORD *)(a1 + 48) = v39;
      *(_QWORD *)(a1 + 40) = v38;
      goto LABEL_34;
    }
LABEL_33:
    *(_BYTE *)(a1 + 32) |= 1u;
    v38 = *(unsigned __int64 **)(a1 + 40);
    v39 = v13;
    v40 = v38;
LABEL_34:
    v41 = 2 * v39;
    v42 = 2LL * v13;
    v43 = *(_QWORD *)(a1 + 32) & 1LL;
    v44 = &v40[v42];
    *(_QWORD *)(a1 + 32) = v43;
    if ( v43 )
    {
      v38 = (unsigned __int64 *)(a1 + 40);
      v41 = 16;
    }
    for ( k = &v38[v41]; k != v38; v38 += 2 )
      *v38 = 0;
    for ( m = v40; v44 != m; m += 2 )
    {
      v47 = *m;
      if ( *m - 1 <= 0xFFFFFFFFFFFFFFFDLL )
      {
        if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
        {
          v48 = a1 + 40;
          v49 = 7;
        }
        else
        {
          v53 = *(_DWORD *)(a1 + 48);
          v48 = *(_QWORD *)(a1 + 40);
          if ( !v53 )
          {
            *(_QWORD *)&dword_0 = *m;
            BUG();
          }
          v49 = v53 - 1;
        }
        v50 = v49 & (v47 ^ (v47 >> 9));
        v51 = (__int64 *)(v48 + 16LL * v50);
        v52 = *v51;
        if ( *v51 != v47 )
        {
          v113 = 1;
          v114 = nullptr;
          if ( v52 )
          {
            while ( 1 )
            {
              if ( !v114 && v52 == -1 )
                v114 = v51;
              v50 = v49 & (v113 + v50);
              v51 = (__int64 *)(v48 + 16LL * v50);
              v52 = *v51;
              if ( v47 == *v51 )
                break;
              if ( !v52 )
              {
                if ( v114 )
                  v51 = v114;
                break;
              }
              ++v113;
            }
          }
        }
        *v51 = *m;
        *((_DWORD *)v51 + 2) = *((_DWORD *)m + 2);
        *(_DWORD *)(a1 + 32) = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1;
      }
    }
    operator delete(v40, v42 * 8, 8);
    v55 = *(_BYTE *)(a1 + 32) & 1;
LABEL_60:
    if ( v55 )
    {
      v56 = a1 + 40;
      v57 = 7;
    }
    else
    {
      v62 = *(_DWORD *)(a1 + 48);
      v56 = *(_QWORD *)(a1 + 40);
      if ( !v62 )
        goto LABEL_207;
      v57 = v62 - 1;
    }
    v58 = v57 & (v3 ^ (v3 >> 9));
    v16 = (*(_DWORD *)(a1 + 32) >> 1) + 1;
    v8 = (unsigned __int64 *)(v56 + 16LL * v58);
    v59 = *v8;
    if ( v3 != *v8 )
    {
      v60 = 1;
      v61 = nullptr;
      if ( v59 )
      {
        while ( 1 )
        {
          if ( v59 == -1 && !v61 )
            v61 = v8;
          v58 = v57 & (v60 + v58);
          v8 = (unsigned __int64 *)(v56 + 16LL * v58);
          v59 = *v8;
          if ( v3 == *v8 )
            break;
          if ( !v59 )
          {
            if ( v61 )
              v8 = v61;
            goto LABEL_12;
          }
          ++v60;
        }
      }
    }
    goto LABEL_12;
  }
  if ( v17 > 0x17 )
  {
    if ( (unsigned __int64)(*(_QWORD *)(a1 + 40) - 1LL) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      v124 = *(_QWORD *)(a1 + 40);
      v71 = (__int64 *)v126;
      v125 = *(_DWORD *)(a1 + 48);
    }
    else
    {
      v71 = &v124;
    }
    v72 = *(_QWORD *)(a1 + 56);
    if ( (unsigned __int64)(v72 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v71 = v72;
      v71 += 2;
      *((_DWORD *)v71 - 2) = *(_DWORD *)(a1 + 64);
    }
    v73 = *(_QWORD *)(a1 + 72);
    if ( (unsigned __int64)(v73 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v71 = v73;
      v71 += 2;
      *((_DWORD *)v71 - 2) = *(_DWORD *)(a1 + 80);
    }
    v74 = *(_QWORD *)(a1 + 88);
    if ( (unsigned __int64)(v74 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v71 = v74;
      v71 += 2;
      *((_DWORD *)v71 - 2) = *(_DWORD *)(a1 + 96);
    }
    v75 = *(_QWORD *)(a1 + 104);
    if ( (unsigned __int64)(v75 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v71 = v75;
      v71 += 2;
      *((_DWORD *)v71 - 2) = *(_DWORD *)(a1 + 112);
    }
    v76 = *(_QWORD *)(a1 + 120);
    if ( (unsigned __int64)(v76 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v71 = v76;
      v71 += 2;
      *((_DWORD *)v71 - 2) = *(_DWORD *)(a1 + 128);
    }
    v77 = *(_QWORD *)(a1 + 136);
    if ( (unsigned __int64)(v77 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v71 = v77;
      v71 += 2;
      *((_DWORD *)v71 - 2) = *(_DWORD *)(a1 + 144);
    }
    v78 = *(_QWORD *)(a1 + 152);
    if ( (unsigned __int64)(v78 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v71 = v78;
      v71 += 2;
      *((_DWORD *)v71 - 2) = *(_DWORD *)(a1 + 160);
    }
    *(_BYTE *)(a1 + 32) &= ~1u;
    v79 = (_QWORD *)sub_22300B0(1024, 8, v78 - 1, v4, v14, v15);
    v80 = *(_QWORD *)(a1 + 32);
    v81 = 128;
    *(_DWORD *)(a1 + 48) = 64;
    *(_QWORD *)(a1 + 40) = v79;
    v82 = v80 & 1;
    *(_QWORD *)(a1 + 32) = v82;
    v55 = v82 & 1;
    if ( (v82 & 1) != 0 )
    {
      v79 = (_QWORD *)(a1 + 40);
      v81 = 16;
    }
    v83 = &v79[v81];
    if ( v83 != v79 )
    {
      do
      {
        *v79 = 0;
        v79 += 2;
      }
      while ( v83 != v79 );
      LOBYTE(v82) = *(_BYTE *)(a1 + 32);
      v55 = v82 & 1;
    }
    if ( v71 != &v124 )
    {
      v84 = (unsigned __int64 *)&v124;
      do
      {
        v85 = *v84;
        v55 = v82 & 1;
        if ( *v84 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
        {
          if ( v55 )
          {
            v86 = a1 + 40;
            v87 = 7;
          }
          else
          {
            v91 = *(_DWORD *)(a1 + 48);
            v86 = *(_QWORD *)(a1 + 40);
            if ( !v91 )
            {
              *(_QWORD *)&dword_0 = *v84;
              BUG();
            }
            v87 = v91 - 1;
          }
          v88 = v87 & (v85 ^ (v85 >> 9));
          v82 = v86 + 16LL * v88;
          v89 = *(_QWORD *)v82;
          if ( v85 != *(_QWORD *)v82 )
          {
            v116 = 1;
            v117 = 0;
            if ( v89 )
            {
              while ( 1 )
              {
                if ( !v117 && v89 == -1 )
                  v117 = v82;
                v88 = v87 & (v116 + v88);
                v82 = v86 + 16LL * v88;
                v89 = *(_QWORD *)v82;
                if ( v85 == *(_QWORD *)v82 )
                  break;
                if ( !v89 )
                {
                  if ( v117 )
                    v82 = v117;
                  break;
                }
                ++v116;
              }
            }
          }
          *(_QWORD *)v82 = *v84;
          *(_DWORD *)(v82 + 8) = *((_DWORD *)v84 + 2);
          LODWORD(v82) = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1;
          v90 = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_BYTE *)(a1 + 32) & 1;
          *(_DWORD *)(a1 + 32) = v82;
          v55 = v90 & 1;
        }
        v84 += 2;
      }
      while ( v84 != (unsigned __int64 *)v71 );
    }
    goto LABEL_60;
  }
  if ( v16 + *(_DWORD *)(a1 + 36) == 8 || v16 + *(_DWORD *)(a1 + 36) == 7 )
  {
    if ( (unsigned __int64)(*(_QWORD *)(a1 + 40) - 1LL) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      v124 = *(_QWORD *)(a1 + 40);
      v92 = (__int64 *)v126;
      v125 = *(_DWORD *)(a1 + 48);
    }
    else
    {
      v92 = &v124;
    }
    v93 = *(_QWORD *)(a1 + 56);
    if ( (unsigned __int64)(v93 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v92 = v93;
      v92 += 2;
      *((_DWORD *)v92 - 2) = *(_DWORD *)(a1 + 64);
    }
    v94 = *(_QWORD *)(a1 + 72);
    if ( (unsigned __int64)(v94 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v92 = v94;
      v92 += 2;
      *((_DWORD *)v92 - 2) = *(_DWORD *)(a1 + 80);
    }
    v95 = *(_QWORD *)(a1 + 88);
    if ( (unsigned __int64)(v95 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v92 = v95;
      v92 += 2;
      *((_DWORD *)v92 - 2) = *(_DWORD *)(a1 + 96);
    }
    v96 = *(_QWORD *)(a1 + 104);
    if ( (unsigned __int64)(v96 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v92 = v96;
      v92 += 2;
      *((_DWORD *)v92 - 2) = *(_DWORD *)(a1 + 112);
    }
    v97 = *(_QWORD *)(a1 + 120);
    if ( (unsigned __int64)(v97 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v92 = v97;
      v92 += 2;
      *((_DWORD *)v92 - 2) = *(_DWORD *)(a1 + 128);
    }
    v98 = *(_QWORD *)(a1 + 136);
    if ( (unsigned __int64)(v98 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v92 = v98;
      v92 += 2;
      *((_DWORD *)v92 - 2) = *(_DWORD *)(a1 + 144);
    }
    v99 = *(_QWORD *)(a1 + 152);
    if ( (unsigned __int64)(v99 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v92 = v99;
      v92 += 2;
      *((_DWORD *)v92 - 2) = *(_DWORD *)(a1 + 160);
    }
    v100 = *(_QWORD *)(a1 + 32) & 1LL;
    v101 = *(_BYTE *)(a1 + 32) & 1;
    *(_QWORD *)(a1 + 32) = v100;
    v63 = v101 & 1;
    if ( v63 )
    {
      v102 = (_QWORD *)(a1 + 40);
      v103 = 16;
    }
    else
    {
      v102 = *(_QWORD **)(a1 + 40);
      v103 = 2LL * *(unsigned int *)(a1 + 48);
    }
    v104 = &v102[v103];
    if ( v104 != v102 )
    {
      do
      {
        *v102 = 0;
        v102 += 2;
      }
      while ( v104 != v102 );
      LOBYTE(v100) = *(_BYTE *)(a1 + 32);
      LOBYTE(v63) = v100 & 1;
    }
    if ( v92 != &v124 )
    {
      v105 = (unsigned __int64 *)&v124;
      do
      {
        v106 = *v105;
        LOBYTE(v63) = v100 & 1;
        if ( *v105 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
        {
          if ( (_BYTE)v63 )
          {
            v107 = a1 + 40;
            v108 = 7;
          }
          else
          {
            v112 = *(_DWORD *)(a1 + 48);
            v107 = *(_QWORD *)(a1 + 40);
            if ( !v112 )
            {
              *(_QWORD *)&dword_0 = *v105;
              BUG();
            }
            v108 = v112 - 1;
          }
          v109 = v108 & (v106 ^ (v106 >> 9));
          v100 = v107 + 16LL * v109;
          v110 = *(_QWORD *)v100;
          if ( *(_QWORD *)v100 != v106 )
          {
            v118 = 1;
            v119 = 0;
            if ( v110 )
            {
              while ( 1 )
              {
                if ( v110 == -1 && !v119 )
                  v119 = v100;
                v109 = v108 & (v118 + v109);
                v100 = v107 + 16LL * v109;
                v110 = *(_QWORD *)v100;
                if ( v106 == *(_QWORD *)v100 )
                  break;
                if ( !v110 )
                {
                  if ( v119 )
                    v100 = v119;
                  break;
                }
                ++v118;
              }
            }
          }
          *(_QWORD *)v100 = *v105;
          *(_DWORD *)(v100 + 8) = *((_DWORD *)v105 + 2);
          LODWORD(v100) = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1;
          v111 = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_BYTE *)(a1 + 32) & 1;
          *(_DWORD *)(a1 + 32) = v100;
          LOBYTE(v63) = v111 & 1;
        }
        v105 += 2;
      }
      while ( v105 != (unsigned __int64 *)v92 );
    }
LABEL_75:
    if ( (_BYTE)v63 )
    {
      v64 = a1 + 40;
      v65 = 7;
LABEL_77:
      v66 = v65 & (v3 ^ (v3 >> 9));
      v8 = (unsigned __int64 *)(v64 + 16LL * v66);
      v16 = (*(_DWORD *)(a1 + 32) >> 1) + 1;
      v67 = *v8;
      if ( v3 != *v8 )
      {
        v68 = 1;
        v69 = nullptr;
        if ( v67 )
        {
          while ( 1 )
          {
            if ( !v69 && v67 == -1 )
              v69 = v8;
            v66 = v65 & (v68 + v66);
            v8 = (unsigned __int64 *)(v64 + 16LL * v66);
            v67 = *v8;
            if ( v3 == *v8 )
              break;
            if ( !v67 )
            {
              if ( v69 )
                v8 = v69;
              goto LABEL_12;
            }
            ++v68;
          }
        }
      }
      goto LABEL_12;
    }
    v70 = *(_DWORD *)(a1 + 48);
    v64 = *(_QWORD *)(a1 + 40);
    if ( v70 )
    {
      v65 = v70 - 1;
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
