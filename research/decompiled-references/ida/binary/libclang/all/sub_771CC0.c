__int64 __fastcall sub_771CC0(__int64 a1, int *a2)
{
  int v2; // eax
  __int64 v5; // r15
  int v6; // r12d
  int *v7; // r13
  unsigned __int64 v8; // rcx
  int v9; // r8d
  int *v10; // rdx
  int v11; // edi
  int *v12; // rax
  int v13; // esi
  __int64 v14; // rax
  int v16; // esi
  char *v17; // r13
  int v18; // ecx
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  __int64 v21; // rsi
  unsigned __int64 v22; // r8
  __int64 v23; // rdi
  _BYTE *v24; // rdi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  int *v28; // rax
  __int64 v29; // rcx
  int v30; // edi
  __int64 v31; // rcx
  int *v32; // rdx
  int *v33; // rdi
  int *i; // rax
  int v35; // edx
  int v36; // ecx
  int v37; // ecx
  int v38; // r15d
  _DWORD *v39; // r14
  __int64 v40; // r9
  _DWORD *v41; // r8
  int v42; // r10d
  int *v43; // rcx
  int v44; // edi
  unsigned int v45; // ecx
  int v46; // r8d
  int v47; // r10d
  int *v48; // r9
  __int64 v49; // rax
  int *v50; // rax
  __int64 v51; // rcx
  int v52; // edi
  __int64 v53; // rcx
  int *v54; // rdx
  int *v55; // rax
  int v56; // edx
  int v57; // ecx
  int v58; // ecx
  unsigned int v59; // r8d
  _DWORD *v60; // rdi
  int v61; // r9d
  __int64 v62; // rdi
  char *v63; // r13
  int v64; // edi
  int v65; // r9d
  int *v66; // r8
  unsigned int v67; // r14d
  int v68; // ecx
  int *v69; // rcx
  _DWORD *v70; // r11
  int *v71; // [rsp+0h] [rbp-138h]
  int *v72; // [rsp+0h] [rbp-138h]
  int *v73; // [rsp+0h] [rbp-138h]
  int v74; // [rsp+0h] [rbp-138h]
  int v75; // [rsp+80h] [rbp-B8h] BYREF
  void *ptr; // [rsp+88h] [rbp-B0h]
  __int64 v77; // [rsp+90h] [rbp-A8h]
  _BYTE v78[160]; // [rsp+98h] [rbp-A0h] BYREF

  v2 = 0;
  v5 = *(unsigned int *)(a1 + 16);
  v6 = *a2;
  v7 = *(int **)a1;
  if ( (_DWORD)v5 )
  {
    v8 = (unsigned int)(v5 - 1);
    v9 = 1;
    v10 = nullptr;
    v11 = v8 & (37 * v6);
    v12 = &v7[2 * v11];
    v13 = *v12;
    if ( v6 == *v12 )
    {
LABEL_3:
      v14 = (unsigned int)v12[1];
      return *(_QWORD *)(a1 + 24) + 120 * v14 + 8;
    }
    while ( v13 != -1 )
    {
      if ( v13 == -2 && !v10 )
        v10 = v12;
      v11 = v8 & (v9 + v11);
      v12 = &v7[2 * v11];
      v13 = *v12;
      if ( v6 == *v12 )
        goto LABEL_3;
      ++v9;
    }
    if ( !v10 )
      v10 = v12;
    v16 = *(_DWORD *)(a1 + 8) + 1;
    v2 = 2 * v5;
    if ( 4 * v16 < (unsigned int)(3 * v5) )
    {
      if ( (unsigned int)v5 >> 3 < (int)v5 - *(_DWORD *)(a1 + 12) - v16 )
        goto LABEL_15;
      v49 = (((((((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4) | ((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 8)
             | ((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4)
             | ((v8 | (v8 >> 1)) >> 2)
             | v8
             | (v8 >> 1)) >> 16)
           | ((((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4) | ((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 8)
           | ((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4)
           | ((v8 | (v8 >> 1)) >> 2)
           | v8
           | (v8 >> 1))
          + 1;
      if ( (unsigned int)v49 < 0x40 )
        LODWORD(v49) = 64;
      *(_DWORD *)(a1 + 16) = v49;
      v50 = (int *)sub_25CC9C0(8LL * (unsigned int)v49, 4);
      v51 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)a1 = v50;
      v52 = v51;
      v53 = 8 * v51;
      v54 = &v50[(unsigned __int64)v53 / 4];
      if ( v7 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        if ( v53 )
        {
          if ( (v53 & 8) == 0 || (*v50 = -1, v50 += 2, v50 != v54) )
          {
            do
            {
              *v50 = -1;
              v50 += 4;
              *(v50 - 2) = -1;
            }
            while ( v50 != v54 );
          }
        }
        v55 = v7;
        do
        {
          v56 = *v55;
          if ( (unsigned int)*v55 <= 0xFFFFFFFD )
          {
            v57 = *(_DWORD *)(a1 + 16);
            if ( !v57 )
              goto LABEL_109;
            v58 = v57 - 1;
            v59 = v58 & (37 * v56);
            v60 = (_DWORD *)(*(_QWORD *)a1 + 8LL * v59);
            v61 = *v60;
            if ( *v60 != v56 )
            {
              v74 = 1;
              v70 = nullptr;
              while ( v61 != -1 )
              {
                if ( v61 == -2 && !v70 )
                  v70 = v60;
                v59 = v58 & (v74 + v59);
                v60 = (_DWORD *)(*(_QWORD *)a1 + 8LL * v59);
                v61 = *v60;
                if ( v56 == *v60 )
                  goto LABEL_70;
                ++v74;
              }
              if ( v70 )
                v60 = v70;
            }
LABEL_70:
            *v60 = v56;
            v60[1] = v55[1];
            ++*(_DWORD *)(a1 + 8);
          }
          v55 += 2;
        }
        while ( &v7[2 * v5] != v55 );
        operator delete();
        v50 = *(int **)a1;
        v52 = *(_DWORD *)(a1 + 16);
        v16 = *(_DWORD *)(a1 + 8) + 1;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 0;
        if ( v50 != v54 )
        {
          v69 = v50;
          if ( (((_BYTE)v54 - (_BYTE)v50) & 8) == 0 || (v69 = v50 + 2, *v50 = -1, v50 + 2 != v54) )
          {
            do
            {
              *v69 = -1;
              v69 += 4;
              *(v69 - 2) = -1;
            }
            while ( v69 != v54 );
          }
        }
        v16 = 1;
      }
      if ( v52 )
      {
        v64 = v52 - 1;
        v65 = 1;
        v66 = nullptr;
        v67 = v64 & (37 * v6);
        v10 = &v50[2 * v67];
        v68 = *v10;
        if ( v6 != *v10 )
        {
          while ( v68 != -1 )
          {
            if ( v68 == -2 && !v66 )
              v66 = v10;
            v67 = v64 & (v65 + v67);
            v10 = &v50[2 * v67];
            v68 = *v10;
            if ( v6 == *v10 )
              goto LABEL_15;
            ++v65;
          }
          if ( v66 )
            v10 = v66;
        }
        goto LABEL_15;
      }
LABEL_110:
      *(_DWORD *)(a1 + 8) = v16;
      BUG();
    }
  }
  v25 = (unsigned int)(v2 - 1) | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1);
  v26 = (((v25 >> 2) | v25) >> 4) | (v25 >> 2) | v25;
  v27 = ((((v26 >> 8) | v26) >> 16) | (v26 >> 8) | v26) + 1;
  if ( (unsigned int)v27 < 0x40 )
    LODWORD(v27) = 64;
  *(_DWORD *)(a1 + 16) = v27;
  v28 = (int *)sub_25CC9C0(8LL * (unsigned int)v27, 4);
  v29 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)a1 = v28;
  v30 = v29;
  v31 = 8 * v29;
  v32 = &v28[(unsigned __int64)v31 / 4];
  if ( v7 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v33 = &v7[2 * (unsigned int)v5];
    if ( v31 )
    {
      if ( (v31 & 8) == 0 || (*v28 = -1, v28 += 2, v28 != v32) )
      {
        do
        {
          *v28 = -1;
          v28 += 4;
          *(v28 - 2) = -1;
        }
        while ( v28 != v32 );
      }
    }
    for ( i = v7; v33 != i; i += 2 )
    {
      v35 = *i;
      if ( (unsigned int)*i <= 0xFFFFFFFD )
      {
        v36 = *(_DWORD *)(a1 + 16);
        if ( !v36 )
        {
LABEL_109:
          dword_0 = 0;
          BUG();
        }
        v37 = v36 - 1;
        v38 = 1;
        v39 = nullptr;
        LODWORD(v40) = v37 & (37 * v35);
        v41 = (_DWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)v40);
        v42 = *v41;
        if ( *v41 != v35 )
        {
          while ( v42 != -1 )
          {
            if ( !v39 && v42 == -2 )
              v39 = v41;
            v40 = v37 & (unsigned int)(v40 + v38);
            v41 = (_DWORD *)(*(_QWORD *)a1 + 8 * v40);
            v42 = *v41;
            if ( v35 == *v41 )
              goto LABEL_36;
            ++v38;
          }
          if ( v39 )
            v41 = v39;
        }
LABEL_36:
        *v41 = v35;
        v41[1] = i[1];
        ++*(_DWORD *)(a1 + 8);
      }
    }
    operator delete();
    v28 = *(int **)a1;
    v30 = *(_DWORD *)(a1 + 16);
    v16 = *(_DWORD *)(a1 + 8) + 1;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    if ( v28 != v32 )
    {
      v43 = v28;
      if ( (((_BYTE)v32 - (_BYTE)v28) & 8) == 0 || (v43 = v28 + 2, *v28 = -1, v28 + 2 != v32) )
      {
        do
        {
          *v43 = -1;
          v43 += 4;
          *(v43 - 2) = -1;
        }
        while ( v43 != v32 );
      }
    }
    v16 = 1;
  }
  if ( !v30 )
    goto LABEL_110;
  v44 = v30 - 1;
  v45 = v44 & (37 * v6);
  v10 = &v28[2 * v45];
  v46 = *v10;
  if ( v6 != *v10 )
  {
    v47 = 1;
    v48 = nullptr;
    while ( v46 != -1 )
    {
      if ( v46 == -2 && !v48 )
        v48 = v10;
      v45 = v44 & (v47 + v45);
      v10 = &v28[2 * v45];
      v46 = *v10;
      if ( v6 == *v10 )
        goto LABEL_15;
      ++v47;
    }
    if ( v48 )
      v10 = v48;
  }
LABEL_15:
  *(_DWORD *)(a1 + 8) = v16;
  if ( *v10 != -1 )
    --*(_DWORD *)(a1 + 12);
  *v10 = v6;
  v17 = (char *)&v75;
  v10[1] = 0;
  v18 = *a2;
  v19 = *(unsigned int *)(a1 + 32);
  v20 = *(unsigned int *)(a1 + 36);
  v21 = v19 + 1;
  v75 = *a2;
  v22 = *(_QWORD *)(a1 + 24);
  ptr = v78;
  v77 = 0x400000000LL;
  if ( v20 >= v19 + 1 )
    goto LABEL_18;
  v62 = a1 + 24;
  if ( (unsigned __int64)&v75 < v22 )
  {
    v73 = v10;
    goto LABEL_83;
  }
  v73 = v10;
  if ( (unsigned __int64)&v75 >= v22 + 120 * v19 )
  {
LABEL_83:
    sub_771B80(v62, v21);
    v22 = *(_QWORD *)(a1 + 24);
    v19 = *(unsigned int *)(a1 + 32);
    v18 = v75;
    v10 = v73;
    goto LABEL_18;
  }
  v63 = (char *)&v75 - v22;
  sub_771B80(v62, v21);
  v22 = *(_QWORD *)(a1 + 24);
  v19 = *(unsigned int *)(a1 + 32);
  v10 = v73;
  v17 = &v63[v22];
  v18 = *(_DWORD *)v17;
LABEL_18:
  v23 = v22 + 120 * v19;
  *(_DWORD *)v23 = v18;
  *(_QWORD *)(v23 + 8) = v23 + 24;
  *(_QWORD *)(v23 + 16) = 0x400000000LL;
  if ( *((_DWORD *)v17 + 4) )
  {
    v72 = v10;
    sub_76D690(v23 + 8, (__int64)(v17 + 8));
    v10 = v72;
  }
  v14 = *(unsigned int *)(a1 + 32);
  v24 = ptr;
  *(_DWORD *)(a1 + 32) = v14 + 1;
  if ( v24 != v78 )
  {
    v71 = v10;
    free(v24);
    v10 = v71;
    v14 = (unsigned int)(*(_DWORD *)(a1 + 32) - 1);
  }
  v10[1] = v14;
  return *(_QWORD *)(a1 + 24) + 120 * v14 + 8;
}

