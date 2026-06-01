__int64 __fastcall sub_8E9960(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r12
  _DWORD *v4; // rbx
  size_t v5; // rdx
  int v6; // eax
  void (__fastcall *v7)(_DWORD *, char *, _QWORD, _QWORD, __int64, _QWORD, __int64); // rax
  char v8; // al
  unsigned int v9; // edx
  unsigned int v10; // r12d
  int *v11; // r14
  int v12; // eax
  unsigned __int64 v13; // rsi
  __int64 v14; // rdi
  int *v15; // rax
  int v16; // r8d
  int v18; // r10d
  unsigned int *v19; // rcx
  int v20; // edi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  _DWORD *v24; // rax
  __int64 v25; // rdi
  _DWORD *v26; // rsi
  int v27; // r8d
  __int64 v28; // rdi
  _DWORD *v29; // rcx
  int *v30; // r11
  int *v31; // r15
  int *v32; // rbx
  int v33; // eax
  int v34; // ecx
  int v35; // ecx
  __int64 v36; // r9
  int *v37; // r8
  int v38; // r11d
  __int64 v39; // rsi
  int *v40; // rdx
  int v41; // edi
  void *v42; // rdi
  int v43; // r8d
  unsigned int v44; // eax
  unsigned int v45; // edx
  int v46; // r10d
  unsigned int *v47; // r9
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  _DWORD *v50; // rax
  __int64 v51; // rdi
  int v52; // esi
  __int64 v53; // rdi
  _DWORD *v54; // rcx
  int *v55; // rbx
  int v56; // eax
  int v57; // ecx
  int v58; // ecx
  int v59; // r11d
  int *v60; // r8
  __int64 v61; // r9
  __int64 v62; // rsi
  int *v63; // rdx
  int v64; // edi
  void *v65; // rdi
  int v66; // esi
  int v67; // r8d
  unsigned int v68; // r15d
  unsigned int v69; // edx
  _DWORD *v70; // rdx
  unsigned int v71; // [rsp+8h] [rbp-50h]
  _DWORD *v72; // [rsp+8h] [rbp-50h]
  unsigned int v73; // [rsp+8h] [rbp-50h]
  _DWORD *v74; // [rsp+10h] [rbp-48h]

  v3 = *(unsigned int *)(a2 + 20) + 40LL;
  v4 = (_DWORD *)operator new[](v3);
  memset(v4, 0, v3);
  v5 = *(unsigned int *)(a2 + 20);
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 368) + 32LL);
  *((_WORD *)v4 + 14) = 0;
  *((_QWORD *)v4 + 1) = 0;
  *v4 = v6;
  v4[4] = -1;
  *((_BYTE *)v4 + 20) = 1;
  v4[6] = 0;
  *((_QWORD *)v4 + 4) = a2;
  memset(v4 + 10, 0, v5);
  v7 = *(void (__fastcall **)(_DWORD *, char *, _QWORD, _QWORD, __int64, _QWORD, __int64))(a2 + 56);
  if ( v7 )
    v7(
      v4,
      (char *)v4 + *(unsigned int *)(a2 + 16) + 40,
      *(unsigned __int8 *)(a2 + 48),
      *(unsigned __int8 *)(a2 + 49),
      1,
      0,
      a2);
  v8 = *((_BYTE *)v4 + 44);
  v9 = *(_DWORD *)(a1 + 784);
  *((_BYTE *)v4 + 27) = 1;
  *((_QWORD *)v4 + 6) = a2;
  v10 = *(_DWORD *)(a1 + 776);
  v4[10] = 16;
  v11 = *(int **)(a1 + 768);
  *((_BYTE *)v4 + 44) = v8 & 0xA8 | 0x10;
  v12 = 0;
  if ( !v9 )
    goto LABEL_16;
  v13 = v9 - 1;
  LODWORD(v14) = v13 & (37 * v10);
  v15 = &v11[4 * (unsigned int)v14];
  v16 = *v15;
  if ( v10 == *v15 )
  {
LABEL_5:
    operator delete[](v4);
    return v10;
  }
  v18 = 1;
  v19 = nullptr;
  while ( v16 != -1 )
  {
    if ( v16 == -2 && !v19 )
      v19 = (unsigned int *)v15;
    v14 = (unsigned int)v13 & ((_DWORD)v14 + v18);
    v15 = &v11[4 * v14];
    v16 = *v15;
    if ( v10 == *v15 )
      goto LABEL_5;
    ++v18;
  }
  v20 = v10 + 1;
  if ( !v19 )
    v19 = (unsigned int *)v15;
  v12 = 2 * v9;
  if ( 4 * v20 >= 3 * v9 )
  {
LABEL_16:
    v71 = v9;
    v21 = (unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1);
    v22 = (((v21 >> 2) | v21) >> 4) | (v21 >> 2) | v21;
    v23 = ((((v22 >> 8) | v22) >> 16) | (v22 >> 8) | v22) + 1;
    if ( (unsigned int)v23 < 0x40 )
      LODWORD(v23) = 64;
    *(_DWORD *)(a1 + 784) = v23;
    v24 = (_DWORD *)sub_25CC9C0(16LL * (unsigned int)v23, 8);
    v25 = *(unsigned int *)(a1 + 784);
    *(_QWORD *)(a1 + 768) = v24;
    v26 = v24;
    v27 = v25;
    v28 = 16 * v25;
    v29 = &v24[(unsigned __int64)v28 / 4];
    if ( v11 )
    {
      *(_QWORD *)(a1 + 776) = 0;
      v30 = &v11[4 * v71];
      if ( v28 )
      {
        if ( (v28 & 0x10) == 0 || (*v24 = -1, v26 = v24 + 4, v24 + 4 != v29) )
        {
          do
          {
            *v26 = -1;
            v26 += 8;
            *(v26 - 4) = -1;
          }
          while ( v26 != v29 );
        }
      }
      v31 = v11;
      if ( v11 != v30 )
      {
        v72 = v4;
        v32 = v30;
        do
        {
          v33 = *v31;
          if ( (unsigned int)*v31 <= 0xFFFFFFFD )
          {
            v34 = *(_DWORD *)(a1 + 784);
            if ( !v34 )
            {
              dword_0 = 0;
              BUG();
            }
            v35 = v34 - 1;
            v36 = *(_QWORD *)(a1 + 768);
            v37 = nullptr;
            v38 = 1;
            LODWORD(v39) = v35 & (37 * v33);
            v40 = (int *)(v36 + 16LL * (unsigned int)v39);
            v41 = *v40;
            if ( *v40 != v33 )
            {
              while ( v41 != -1 )
              {
                if ( v41 == -2 && !v37 )
                  v37 = v40;
                v39 = v35 & (unsigned int)(v39 + v38);
                v40 = (int *)(v36 + 16 * v39);
                v41 = *v40;
                if ( v33 == *v40 )
                  goto LABEL_29;
                ++v38;
              }
              if ( v37 )
                v40 = v37;
            }
LABEL_29:
            *v40 = v33;
            *((_QWORD *)v40 + 1) = *((_QWORD *)v31 + 1);
            *((_QWORD *)v31 + 1) = 0;
            ++*(_DWORD *)(a1 + 776);
            v42 = *((void **)v31 + 1);
            if ( v42 )
              operator delete[](v42);
            *((_QWORD *)v31 + 1) = 0;
          }
          v31 += 4;
        }
        while ( v32 != v31 );
        v4 = v72;
      }
      operator delete();
      v26 = *(_DWORD **)(a1 + 768);
      v27 = *(_DWORD *)(a1 + 784);
      v20 = *(_DWORD *)(a1 + 776) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 776) = 0;
      if ( v24 != v29 )
      {
        if ( (v28 & 0x10) == 0 || (*v24 = -1, v24 += 4, v24 != v29) )
        {
          do
          {
            *v24 = -1;
            v24 += 8;
            *(v24 - 4) = -1;
          }
          while ( v24 != v29 );
        }
      }
      v20 = 1;
    }
    if ( v27 )
    {
      v43 = v27 - 1;
      v44 = v43 & (37 * v10);
      v19 = &v26[4 * v44];
      v45 = *v19;
      if ( v10 == *v19 )
        goto LABEL_13;
      v46 = 1;
      v47 = nullptr;
      while ( v45 != -1 )
      {
        if ( v45 == -2 && !v47 )
          v47 = v19;
        v44 = v43 & (v46 + v44);
        v19 = &v26[4 * v44];
        v45 = *v19;
        if ( v10 == *v19 )
          goto LABEL_13;
        ++v46;
      }
LABEL_41:
      if ( v47 )
        v19 = v47;
      goto LABEL_13;
    }
LABEL_103:
    *(_DWORD *)(a1 + 776) = v20;
    BUG();
  }
  if ( v9 >> 3 >= v9 - *(_DWORD *)(a1 + 780) - v20 )
  {
    v73 = v9;
    v48 = ((((v13 | (v13 >> 1)) >> 2) | v13 | (v13 >> 1)) >> 4) | ((v13 | (v13 >> 1)) >> 2) | v13 | (v13 >> 1);
    v49 = ((((v48 >> 8) | v48) >> 16) | (v48 >> 8) | v48) + 1;
    if ( (unsigned int)v49 < 0x40 )
      LODWORD(v49) = 64;
    *(_DWORD *)(a1 + 784) = v49;
    v50 = (_DWORD *)sub_25CC9C0(16LL * (unsigned int)v49, 8);
    v51 = *(unsigned int *)(a1 + 784);
    *(_QWORD *)(a1 + 768) = v50;
    v52 = v51;
    v53 = 16 * v51;
    v54 = &v50[(unsigned __int64)v53 / 4];
    if ( v11 )
    {
      *(_QWORD *)(a1 + 776) = 0;
      if ( v53 )
      {
        if ( (v53 & 0x10) == 0 || (*v50 = -1, v50 += 4, v50 != v54) )
        {
          do
          {
            *v50 = -1;
            v50 += 8;
            *(v50 - 4) = -1;
          }
          while ( v50 != v54 );
        }
      }
      v74 = v4;
      v55 = v11;
      do
      {
        v56 = *v55;
        if ( (unsigned int)*v55 <= 0xFFFFFFFD )
        {
          v57 = *(_DWORD *)(a1 + 784);
          if ( !v57 )
          {
            dword_0 = 0;
            BUG();
          }
          v58 = v57 - 1;
          v59 = 1;
          v60 = nullptr;
          v61 = *(_QWORD *)(a1 + 768);
          LODWORD(v62) = v58 & (37 * v56);
          v63 = (int *)(v61 + 16LL * (unsigned int)v62);
          v64 = *v63;
          if ( *v63 != v56 )
          {
            while ( v64 != -1 )
            {
              if ( v64 == -2 && !v60 )
                v60 = v63;
              v62 = v58 & (unsigned int)(v62 + v59);
              v63 = (int *)(v61 + 16 * v62);
              v64 = *v63;
              if ( v56 == *v63 )
                goto LABEL_56;
              ++v59;
            }
            if ( v60 )
              v63 = v60;
          }
LABEL_56:
          *v63 = v56;
          *((_QWORD *)v63 + 1) = *((_QWORD *)v55 + 1);
          *((_QWORD *)v55 + 1) = 0;
          ++*(_DWORD *)(a1 + 776);
          v65 = *((void **)v55 + 1);
          if ( v65 )
            operator delete[](v65);
          *((_QWORD *)v55 + 1) = 0;
        }
        v55 += 4;
      }
      while ( &v11[4 * v73] != v55 );
      v4 = v74;
      operator delete();
      v50 = *(_DWORD **)(a1 + 768);
      v52 = *(_DWORD *)(a1 + 784);
      v20 = *(_DWORD *)(a1 + 776) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 776) = 0;
      if ( v50 != v54 )
      {
        v70 = v50;
        if ( (v53 & 0x10) == 0 || (v70 = v50 + 4, *v50 = -1, v50 + 4 != v54) )
        {
          do
          {
            *v70 = -1;
            v70 += 8;
            *(v70 - 4) = -1;
          }
          while ( v70 != v54 );
        }
      }
      v20 = 1;
    }
    if ( v52 )
    {
      v66 = v52 - 1;
      v67 = 1;
      v47 = nullptr;
      v68 = v66 & (37 * v10);
      v19 = &v50[4 * v68];
      v69 = *v19;
      if ( v10 == *v19 )
        goto LABEL_13;
      while ( v69 != -1 )
      {
        if ( v69 == -2 && !v47 )
          v47 = v19;
        v68 = v66 & (v67 + v68);
        v19 = &v50[4 * v68];
        v69 = *v19;
        if ( v10 == *v19 )
          goto LABEL_13;
        ++v67;
      }
      goto LABEL_41;
    }
    goto LABEL_103;
  }
LABEL_13:
  *(_DWORD *)(a1 + 776) = v20;
  if ( *v19 != -1 )
    --*(_DWORD *)(a1 + 780);
  *v19 = v10;
  *((_QWORD *)v19 + 1) = v4;
  return v10;
}

