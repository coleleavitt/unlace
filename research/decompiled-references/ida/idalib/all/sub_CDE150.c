__int64 __fastcall sub_CDE150(__int64 a1, _WORD *a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
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
  __int64 v29; // rsi
  int v30; // r10d
  __int64 *v31; // r9
  _QWORD *v32; // rcx
  __int64 *v33; // rdx
  int i; // r12d
  __int64 v35; // rcx
  unsigned int v36; // r8d
  __int64 v37; // rdi
  __int64 v38; // r11
  int v39; // ecx
  int v40; // esi
  int v41; // r8d
  unsigned int v42; // edi
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rdx
  __int64 v48; // rsi
  int v49; // r10d
  _QWORD *v50; // rcx
  __int64 *v51; // rdx
  int v52; // r14d
  unsigned int v53; // r8d
  __int64 v54; // rdi
  __int64 v55; // r11
  int v56; // ecx
  int v57; // esi
  int v58; // edi
  unsigned int v59; // r12d
  __int64 *v60; // r8
  int v61; // r9d
  __int64 v62; // rcx
  _QWORD *v63; // rcx
  _QWORD *v64; // rdx
  __int64 v65; // rcx
  _QWORD *v66; // rcx
  _QWORD *v67; // rdx
  int v68; // r15d
  __int64 v69; // r14
  __int64 v70; // r15
  __int64 *v71; // r9
  int v72; // r10d
  int v73; // [rsp+4h] [rbp-44h]

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
      v43 = (((((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4) | (v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 8)
          | (((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4)
          | (v12 >> 1)
          | v12
          | (((v12 >> 1) | v12) >> 2);
      v44 = ((v43 >> 16) | v43) + 1;
      if ( (unsigned int)v44 < 0x40 )
        LODWORD(v44) = 64;
      *(_DWORD *)(a1 + 1472) = v44;
      v45 = sub_22300B0(16LL * (unsigned int)v44, 8, 64, a4, a5, a6);
      *(_QWORD *)(a1 + 1456) = v45;
      if ( v9 )
      {
        v46 = *(unsigned int *)(a1 + 1472);
        v47 = (_QWORD *)v45;
        *(_QWORD *)(a1 + 1464) = 0;
        v48 = 2LL * v8;
        v49 = v46;
        v50 = (_QWORD *)(v45 + 16 * v46);
        if ( (_QWORD *)v45 != v50 )
        {
          do
          {
            *v47 = -4096;
            v47 += 2;
          }
          while ( v50 != v47 );
        }
        v51 = v9;
        v52 = v49 - 1;
        do
        {
          v35 = *v51;
          if ( *v51 != -4096 && v35 != -8192 )
          {
            if ( !v49 )
              goto LABEL_104;
            v53 = v52 & (((unsigned int)v35 >> 9) ^ ((unsigned int)v35 >> 4));
            v54 = v45 + 16LL * v53;
            v55 = *(_QWORD *)v54;
            if ( v35 != *(_QWORD *)v54 && v55 != -4096 )
            {
              v73 = 1;
              v70 = 0;
              while ( 1 )
              {
                if ( v55 == -8192 && !v70 )
                  v70 = v54;
                v53 = v52 & (v73 + v53);
                v54 = v45 + 16LL * v53;
                v55 = *(_QWORD *)v54;
                if ( v35 == *(_QWORD *)v54 )
                  break;
                if ( v55 == -4096 )
                {
                  if ( v70 )
                    v54 = v70;
                  break;
                }
                ++v73;
              }
            }
            *(_QWORD *)v54 = v35;
            v56 = *((_DWORD *)v51 + 2);
            ++*(_DWORD *)(a1 + 1464);
            *(_DWORD *)(v54 + 8) = v56;
          }
          v51 += 2;
        }
        while ( &v9[v48] != v51 );
        operator delete(v9, v48 * 8, 8);
        v45 = *(_QWORD *)(a1 + 1456);
        v57 = *(_DWORD *)(a1 + 1472);
        LODWORD(a4) = *(_DWORD *)(a1 + 1464) + 1;
      }
      else
      {
        v65 = *(unsigned int *)(a1 + 1472);
        *(_QWORD *)(a1 + 1464) = 0;
        v57 = v65;
        v66 = (_QWORD *)(v45 + 16 * v65);
        if ( (_QWORD *)v45 != v66 )
        {
          v67 = (_QWORD *)v45;
          do
          {
            *v67 = -4096;
            v67 += 2;
          }
          while ( v66 != v67 );
        }
        LODWORD(a4) = 1;
      }
      if ( v57 )
      {
        v58 = v57 - 1;
        v59 = (v57 - 1) & v13;
        v15 = (__int64 *)(v45 + 16LL * v59);
        v23 = (_WORD *)*v15;
        if ( a2 != (_WORD *)*v15 )
        {
          if ( v23 != (_WORD *)-4096LL )
          {
            v60 = (__int64 *)(v45 + 16LL * v59);
            v61 = 1;
            v15 = nullptr;
            while ( 1 )
            {
              if ( v23 == (_WORD *)-8192LL && !v15 )
                v15 = v60;
              v59 = v58 & (v61 + v59);
              v60 = (__int64 *)(v45 + 16LL * v59);
              v23 = (_WORD *)*v60;
              if ( a2 == (_WORD *)*v60 )
              {
                v15 = (__int64 *)(v45 + 16LL * v59);
                goto LABEL_9;
              }
              if ( v23 == (_WORD *)-4096LL )
                break;
              ++v61;
            }
            if ( v15 )
              goto LABEL_8;
            v15 = (__int64 *)(v45 + 16LL * v59);
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
    v26 = sub_22300B0(16LL * (unsigned int)v25, 8, 64, a4, a5, a6);
    *(_QWORD *)(a1 + 1456) = v26;
    if ( v9 )
    {
      v27 = *(unsigned int *)(a1 + 1472);
      v28 = (_QWORD *)v26;
      *(_QWORD *)(a1 + 1464) = 0;
      v29 = 2LL * v8;
      v30 = v27;
      v31 = &v9[v29];
      v32 = (_QWORD *)(v26 + 16 * v27);
      if ( (_QWORD *)v26 != v32 )
      {
        do
        {
          *v28 = -4096;
          v28 += 2;
        }
        while ( v32 != v28 );
      }
      v33 = v9;
      for ( i = v30 - 1; v31 != v33; v33 += 2 )
      {
        v35 = *v33;
        if ( *v33 != -8192 && v35 != -4096 )
        {
          if ( !v30 )
          {
LABEL_104:
            *(_QWORD *)&dword_0 = v35;
            BUG();
          }
          v36 = i & (((unsigned int)v35 >> 9) ^ ((unsigned int)v35 >> 4));
          v37 = v26 + 16LL * v36;
          v38 = *(_QWORD *)v37;
          if ( *(_QWORD *)v37 != v35 )
          {
            v68 = 1;
            v69 = 0;
            if ( v38 != -4096 )
            {
              while ( 1 )
              {
                if ( !v69 && v38 == -8192 )
                  v69 = v37;
                v36 = i & (v68 + v36);
                v37 = v26 + 16LL * v36;
                v38 = *(_QWORD *)v37;
                if ( v35 == *(_QWORD *)v37 )
                  break;
                if ( v38 == -4096 )
                {
                  if ( v69 )
                    v37 = v69;
                  break;
                }
                ++v68;
              }
            }
          }
          *(_QWORD *)v37 = v35;
          v39 = *((_DWORD *)v33 + 2);
          ++*(_DWORD *)(a1 + 1464);
          *(_DWORD *)(v37 + 8) = v39;
        }
      }
      operator delete(v9, v29 * 8, 8);
      v26 = *(_QWORD *)(a1 + 1456);
      v40 = *(_DWORD *)(a1 + 1472);
      LODWORD(a4) = *(_DWORD *)(a1 + 1464) + 1;
    }
    else
    {
      v62 = *(unsigned int *)(a1 + 1472);
      *(_QWORD *)(a1 + 1464) = 0;
      v40 = v62;
      v63 = (_QWORD *)(v26 + 16 * v62);
      if ( (_QWORD *)v26 != v63 )
      {
        v64 = (_QWORD *)v26;
        do
        {
          *v64 = -4096;
          v64 += 2;
        }
        while ( v63 != v64 );
      }
      LODWORD(a4) = 1;
    }
    if ( v40 )
    {
      v41 = v40 - 1;
      v42 = (v40 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v15 = (__int64 *)(v26 + 16LL * v42);
      v23 = (_WORD *)*v15;
      if ( a2 != (_WORD *)*v15 )
      {
        if ( v23 != (_WORD *)-4096LL )
        {
          v71 = (__int64 *)(v26 + 16LL * (v41 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4))));
          v72 = 1;
          v15 = nullptr;
          while ( 1 )
          {
            if ( v23 == (_WORD *)-8192LL && !v15 )
              v15 = v71;
            v42 = v41 & (v72 + v42);
            v71 = (__int64 *)(v26 + 16LL * v42);
            v23 = (_WORD *)*v71;
            if ( a2 == (_WORD *)*v71 )
            {
              v15 = (__int64 *)(v26 + 16LL * v42);
              goto LABEL_9;
            }
            if ( v23 == (_WORD *)-4096LL )
              break;
            ++v72;
          }
          if ( v15 )
            goto LABEL_8;
          v15 = (__int64 *)(v26 + 16LL * v42);
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
  sub_CFF2A0(a1, v17);
  return sub_CDCBC0(a1, *(_QWORD *)&a2[4 * ((*a2 & 0x200) != 0) + 16], v18, v19, v20);
}
