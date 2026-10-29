__int64 __fastcall sub_CBA410(__int64 a1, _WORD *a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  unsigned int v8; // r14d
  __int64 *v9; // r13
  unsigned int v10; // r12d
  unsigned int v11; // eax
  unsigned __int64 v12; // rsi
  int v13; // r12d
  unsigned int v14; // ecx
  __int64 *v15; // rdx
  _WORD *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v22; // edi
  _WORD *v23; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rdx
  int v29; // r10d
  __int64 *v30; // r9
  _QWORD *v31; // rcx
  __int64 *v32; // rdx
  int i; // r12d
  __int64 v34; // rcx
  unsigned int v35; // r8d
  __int64 v36; // rdi
  __int64 v37; // r11
  int v38; // ecx
  int v39; // esi
  int v40; // r8d
  unsigned int v41; // edi
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // rdx
  int v47; // r10d
  __int64 *v48; // r9
  _QWORD *v49; // rcx
  __int64 *v50; // rdx
  int v51; // r14d
  unsigned int v52; // r8d
  __int64 v53; // rdi
  __int64 v54; // r11
  int v55; // ecx
  int v56; // esi
  int v57; // edi
  unsigned int v58; // r12d
  __int64 *v59; // r8
  int v60; // r9d
  __int64 v61; // rcx
  _QWORD *v62; // rcx
  _QWORD *v63; // rdx
  __int64 v64; // rcx
  _QWORD *v65; // rcx
  _QWORD *v66; // rdx
  int v67; // r15d
  __int64 v68; // r14
  __int64 v69; // r15
  __int64 *v70; // r9
  int v71; // r10d
  int v72; // [rsp+4h] [rbp-44h]

  v8 = *(_DWORD *)(a1 + 1472);
  v9 = *(__int64 **)(a1 + 1456);
  if ( !v8 )
    goto LABEL_21;
  v10 = (unsigned int)a2;
  v11 = (unsigned int)a2;
  v12 = v8 - 1;
  v13 = (v11 >> 9) ^ (v10 >> 4);
  v14 = v12 & v13;
  v15 = &v9[2 * ((unsigned int)v12 & v13)];
  v16 = (_WORD *)*v15;
  if ( a2 != (_WORD *)*v15 )
  {
    v22 = 1;
    a5 = nullptr;
    if ( v16 != (_WORD *)-4096LL )
    {
      while ( 1 )
      {
        if ( !a5 && v16 == (_WORD *)-8192LL )
          a5 = v15;
        a6 = (unsigned int)(v22 + 1);
        v14 = v12 & (v22 + v14);
        v15 = &v9[2 * v14];
        v16 = (_WORD *)*v15;
        if ( a2 == (_WORD *)*v15 )
          goto LABEL_3;
        if ( v16 == (_WORD *)-4096LL )
          break;
        ++v22;
      }
      if ( a5 )
        v15 = a5;
    }
    a4 = (unsigned int)(*(_DWORD *)(a1 + 1464) + 1);
    if ( 4 * (int)a4 < 3 * v8 )
    {
      if ( v8 - *(_DWORD *)(a1 + 1468) - (unsigned int)a4 > v8 >> 3 )
      {
LABEL_8:
        v23 = (_WORD *)*v15;
        goto LABEL_9;
      }
      v42 = (((((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4) | (v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 8)
          | (((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4)
          | (v12 >> 1)
          | v12
          | (((v12 >> 1) | v12) >> 2);
      v43 = ((v42 >> 16) | v42) + 1;
      if ( (unsigned int)v43 < 0x40 )
        LODWORD(v43) = 64;
      *(_DWORD *)(a1 + 1472) = v43;
      v44 = sub_220C370(16LL * (unsigned int)v43, 8, 64, a4, a5, a6);
      *(_QWORD *)(a1 + 1456) = v44;
      if ( v9 )
      {
        v45 = *(unsigned int *)(a1 + 1472);
        v46 = (_QWORD *)v44;
        *(_QWORD *)(a1 + 1464) = 0;
        v47 = v45;
        v48 = &v9[2 * v8];
        v49 = (_QWORD *)(v44 + 16 * v45);
        if ( (_QWORD *)v44 != v49 )
        {
          do
          {
            *v46 = -4096;
            v46 += 2;
          }
          while ( v49 != v46 );
        }
        v50 = v9;
        v51 = v47 - 1;
        do
        {
          v34 = *v50;
          if ( *v50 != -4096 && v34 != -8192 )
          {
            if ( !v47 )
              goto LABEL_104;
            v52 = v51 & (((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4));
            v53 = v44 + 16LL * v52;
            v54 = *(_QWORD *)v53;
            if ( v34 != *(_QWORD *)v53 && v54 != -4096 )
            {
              v72 = 1;
              v69 = 0;
              while ( 1 )
              {
                if ( v54 == -8192 && !v69 )
                  v69 = v53;
                v52 = v51 & (v72 + v52);
                v53 = v44 + 16LL * v52;
                v54 = *(_QWORD *)v53;
                if ( v34 == *(_QWORD *)v53 )
                  break;
                if ( v54 == -4096 )
                {
                  if ( v69 )
                    v53 = v69;
                  break;
                }
                ++v72;
              }
            }
            *(_QWORD *)v53 = v34;
            v55 = *((_DWORD *)v50 + 2);
            ++*(_DWORD *)(a1 + 1464);
            *(_DWORD *)(v53 + 8) = v55;
          }
          v50 += 2;
        }
        while ( v48 != v50 );
        operator delete();
        v44 = *(_QWORD *)(a1 + 1456);
        v56 = *(_DWORD *)(a1 + 1472);
        LODWORD(a4) = *(_DWORD *)(a1 + 1464) + 1;
      }
      else
      {
        v64 = *(unsigned int *)(a1 + 1472);
        *(_QWORD *)(a1 + 1464) = 0;
        v56 = v64;
        v65 = (_QWORD *)(v44 + 16 * v64);
        if ( (_QWORD *)v44 != v65 )
        {
          v66 = (_QWORD *)v44;
          do
          {
            *v66 = -4096;
            v66 += 2;
          }
          while ( v65 != v66 );
        }
        LODWORD(a4) = 1;
      }
      if ( v56 )
      {
        v57 = v56 - 1;
        v58 = (v56 - 1) & v13;
        v15 = (__int64 *)(v44 + 16LL * v58);
        v23 = (_WORD *)*v15;
        if ( a2 != (_WORD *)*v15 )
        {
          if ( v23 != (_WORD *)-4096LL )
          {
            v59 = (__int64 *)(v44 + 16LL * v58);
            v60 = 1;
            v15 = nullptr;
            while ( 1 )
            {
              if ( v23 == (_WORD *)-8192LL && !v15 )
                v15 = v59;
              v58 = v57 & (v60 + v58);
              v59 = (__int64 *)(v44 + 16LL * v58);
              v23 = (_WORD *)*v59;
              if ( a2 == (_WORD *)*v59 )
              {
                v15 = (__int64 *)(v44 + 16LL * v58);
                goto LABEL_9;
              }
              if ( v23 == (_WORD *)-4096LL )
                break;
              ++v60;
            }
            if ( v15 )
              goto LABEL_8;
            v15 = (__int64 *)(v44 + 16LL * v58);
          }
LABEL_37:
          *(_DWORD *)(a1 + 1464) = a4;
LABEL_11:
          *v15 = (__int64)a2;
          v17 = 0;
          *((_DWORD *)v15 + 2) = 0;
          goto LABEL_4;
        }
        goto LABEL_9;
      }
      goto LABEL_105;
    }
LABEL_21:
    v24 = (((((((2 * v8 - 1) | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 2)
            | (2 * v8 - 1)
            | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 4)
          | (((2 * v8 - 1) | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 2)
          | (2 * v8 - 1)
          | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 8)
        | (((((2 * v8 - 1) | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 2)
          | (2 * v8 - 1)
          | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 4)
        | (((2 * v8 - 1) | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 2)
        | (2 * v8 - 1)
        | ((unsigned __int64)(2 * v8 - 1) >> 1);
    v25 = ((v24 >> 16) | v24) + 1;
    if ( (unsigned int)v25 < 0x40 )
      LODWORD(v25) = 64;
    *(_DWORD *)(a1 + 1472) = v25;
    v26 = sub_220C370(16LL * (unsigned int)v25, 8, 64, a4, a5, a6);
    *(_QWORD *)(a1 + 1456) = v26;
    if ( v9 )
    {
      v27 = *(unsigned int *)(a1 + 1472);
      v28 = (_QWORD *)v26;
      *(_QWORD *)(a1 + 1464) = 0;
      v29 = v27;
      v30 = &v9[2 * v8];
      v31 = (_QWORD *)(v26 + 16 * v27);
      if ( (_QWORD *)v26 != v31 )
      {
        do
        {
          *v28 = -4096;
          v28 += 2;
        }
        while ( v31 != v28 );
      }
      v32 = v9;
      for ( i = v29 - 1; v30 != v32; v32 += 2 )
      {
        v34 = *v32;
        if ( *v32 != -8192 && v34 != -4096 )
        {
          if ( !v29 )
          {
LABEL_104:
            *(_QWORD *)&dword_0 = v34;
            BUG();
          }
          v35 = i & (((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4));
          v36 = v26 + 16LL * v35;
          v37 = *(_QWORD *)v36;
          if ( *(_QWORD *)v36 != v34 )
          {
            v67 = 1;
            v68 = 0;
            if ( v37 != -4096 )
            {
              while ( 1 )
              {
                if ( !v68 && v37 == -8192 )
                  v68 = v36;
                v35 = i & (v67 + v35);
                v36 = v26 + 16LL * v35;
                v37 = *(_QWORD *)v36;
                if ( v34 == *(_QWORD *)v36 )
                  break;
                if ( v37 == -4096 )
                {
                  if ( v68 )
                    v36 = v68;
                  break;
                }
                ++v67;
              }
            }
          }
          *(_QWORD *)v36 = v34;
          v38 = *((_DWORD *)v32 + 2);
          ++*(_DWORD *)(a1 + 1464);
          *(_DWORD *)(v36 + 8) = v38;
        }
      }
      operator delete();
      v26 = *(_QWORD *)(a1 + 1456);
      v39 = *(_DWORD *)(a1 + 1472);
      LODWORD(a4) = *(_DWORD *)(a1 + 1464) + 1;
    }
    else
    {
      v61 = *(unsigned int *)(a1 + 1472);
      *(_QWORD *)(a1 + 1464) = 0;
      v39 = v61;
      v62 = (_QWORD *)(v26 + 16 * v61);
      if ( (_QWORD *)v26 != v62 )
      {
        v63 = (_QWORD *)v26;
        do
        {
          *v63 = -4096;
          v63 += 2;
        }
        while ( v62 != v63 );
      }
      LODWORD(a4) = 1;
    }
    if ( v39 )
    {
      v40 = v39 - 1;
      v41 = (v39 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v15 = (__int64 *)(v26 + 16LL * v41);
      v23 = (_WORD *)*v15;
      if ( a2 != (_WORD *)*v15 )
      {
        if ( v23 != (_WORD *)-4096LL )
        {
          v70 = (__int64 *)(v26 + 16LL * (v40 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4))));
          v71 = 1;
          v15 = nullptr;
          while ( 1 )
          {
            if ( v23 == (_WORD *)-8192LL && !v15 )
              v15 = v70;
            v41 = v40 & (v71 + v41);
            v70 = (__int64 *)(v26 + 16LL * v41);
            v23 = (_WORD *)*v70;
            if ( a2 == (_WORD *)*v70 )
            {
              v15 = (__int64 *)(v26 + 16LL * v41);
              goto LABEL_9;
            }
            if ( v23 == (_WORD *)-4096LL )
              break;
            ++v71;
          }
          if ( v15 )
            goto LABEL_8;
          v15 = (__int64 *)(v26 + 16LL * v41);
        }
        goto LABEL_37;
      }
LABEL_9:
      *(_DWORD *)(a1 + 1464) = a4;
      if ( v23 != (_WORD *)-4096LL )
        --*(_DWORD *)(a1 + 1468);
      goto LABEL_11;
    }
LABEL_105:
    ++*(_DWORD *)(a1 + 1464);
    BUG();
  }
LABEL_3:
  v17 = *((unsigned int *)v15 + 2);
LABEL_4:
  sub_CDB560(a1, v17);
  return sub_CB8E80(a1, *(_QWORD *)&a2[4 * ((*a2 & 0x200) != 0) + 16], v18, v19, v20);
}

