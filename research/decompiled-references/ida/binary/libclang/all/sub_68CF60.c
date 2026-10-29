_DWORD *__fastcall sub_68CF60(__int64 a1, int *a2)
{
  int v2; // eax
  __int64 v5; // r12
  _DWORD *v6; // r13
  int v7; // edx
  unsigned __int64 v8; // rsi
  int v9; // r9d
  _DWORD *v10; // r8
  __int64 v11; // rcx
  _DWORD *v12; // rax
  int v13; // edi
  int v15; // edx
  int v16; // eax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  _DWORD *v20; // rax
  __int64 v21; // rcx
  int v22; // esi
  __int64 v23; // rcx
  _DWORD *v24; // rdx
  _DWORD *v25; // rdi
  _DWORD *i; // rax
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r14d
  __int64 v31; // r11
  __int64 v32; // rsi
  __int64 v33; // rcx
  int v34; // r9d
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  _DWORD *v37; // rax
  __int64 v38; // rcx
  int v39; // esi
  __int64 v40; // rcx
  _DWORD *v41; // rdx
  _DWORD *v42; // r8
  _DWORD *v43; // rax
  int v44; // edx
  int v45; // ecx
  int v46; // edi
  int v47; // r14d
  __int64 v48; // r12
  __int64 v49; // r9
  __int64 v50; // rcx
  int v51; // r10d
  int v52; // esi
  __int64 v53; // rdi
  int v54; // r9d
  int v55; // r11d
  _DWORD *v56; // r10
  int v57; // esi
  int v58; // r11d
  __int64 v59; // rdi
  int v60; // r9d
  _DWORD *v61; // rcx
  _DWORD *v62; // rcx

  v2 = 0;
  v5 = *(unsigned int *)(a1 + 16);
  v6 = *(_DWORD **)a1;
  if ( !(_DWORD)v5 )
    goto LABEL_17;
  v7 = *a2;
  v8 = (unsigned int)(v5 - 1);
  v9 = 1;
  v10 = nullptr;
  LODWORD(v11) = v8 & (37 * v7);
  v12 = &v6[4 * (unsigned int)v11];
  v13 = *v12;
  if ( v7 == *v12 )
    return v12 + 2;
  while ( v13 != -1 )
  {
    if ( v13 == -2 && !v10 )
      v10 = v12;
    v11 = (unsigned int)v8 & ((_DWORD)v11 + v9);
    v12 = &v6[4 * v11];
    v13 = *v12;
    if ( v7 == *v12 )
      return v12 + 2;
    ++v9;
  }
  if ( !v10 )
    v10 = v12;
  v15 = *(_DWORD *)(a1 + 8) + 1;
  v2 = 2 * v5;
  if ( 4 * v15 >= (unsigned int)(3 * v5) )
  {
LABEL_17:
    v17 = (unsigned int)(v2 - 1) | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1);
    v18 = (((v17 >> 2) | v17) >> 4) | (v17 >> 2) | v17;
    v19 = ((((v18 >> 8) | v18) >> 16) | (v18 >> 8) | v18) + 1;
    if ( (unsigned int)v19 < 0x40 )
      LODWORD(v19) = 64;
    *(_DWORD *)(a1 + 16) = v19;
    v20 = (_DWORD *)sub_25CC9C0(16LL * (unsigned int)v19, 8);
    v21 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)a1 = v20;
    v22 = v21;
    v23 = 16 * v21;
    v24 = &v20[(unsigned __int64)v23 / 4];
    if ( v6 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      v25 = &v6[4 * v5];
      if ( v23 )
      {
        if ( (v23 & 0x10) == 0 || (*v20 = -1, v20 += 4, v20 != v24) )
        {
          do
          {
            *v20 = -1;
            v20 += 8;
            *(v20 - 4) = -1;
          }
          while ( v20 != v24 );
        }
      }
      for ( i = v6; v25 != i; i += 4 )
      {
        v27 = *i;
        if ( *i <= 0xFFFFFFFD )
        {
          v28 = *(_DWORD *)(a1 + 16);
          if ( !v28 )
          {
LABEL_94:
            dword_0 = 0;
            BUG();
          }
          v29 = v28 - 1;
          v30 = 1;
          v31 = 0;
          LODWORD(v32) = (v28 - 1) & (37 * v27);
          v33 = *(_QWORD *)a1 + 16LL * (unsigned int)v32;
          v34 = *(_DWORD *)v33;
          if ( v27 != *(_DWORD *)v33 )
          {
            while ( v34 != -1 )
            {
              if ( v34 == -2 && !v31 )
                v31 = v33;
              v32 = v29 & (unsigned int)(v32 + v30);
              v33 = *(_QWORD *)a1 + 16 * v32;
              v34 = *(_DWORD *)v33;
              if ( v27 == *(_DWORD *)v33 )
                goto LABEL_30;
              ++v30;
            }
            if ( v31 )
              v33 = v31;
          }
LABEL_30:
          *(_DWORD *)v33 = v27;
          *(_QWORD *)(v33 + 8) = *((_QWORD *)i + 1);
          ++*(_DWORD *)(a1 + 8);
        }
      }
      operator delete();
      v20 = *(_DWORD **)a1;
      v22 = *(_DWORD *)(a1 + 16);
      v15 = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
      if ( v20 != v24 )
      {
        v61 = v20;
        if ( (((_BYTE)v24 - (_BYTE)v20) & 0x10) == 0 || (v61 = v20 + 4, *v20 = -1, v20 + 4 != v24) )
        {
          do
          {
            *v61 = -1;
            v61 += 8;
            *(v61 - 4) = -1;
          }
          while ( v61 != v24 );
        }
      }
      v15 = 1;
    }
    if ( v22 )
    {
      v52 = v22 - 1;
      LODWORD(v53) = v52 & (37 * *a2);
      v10 = &v20[4 * (unsigned int)v53];
      v54 = *v10;
      if ( *a2 == *v10 )
        goto LABEL_14;
      v55 = 1;
      v56 = nullptr;
      while ( v54 != -1 )
      {
        if ( v54 == -2 && !v56 )
          v56 = v10;
        v53 = v52 & (unsigned int)(v53 + v55);
        v10 = &v20[4 * v53];
        v54 = *v10;
        if ( *a2 == *v10 )
          goto LABEL_14;
        ++v55;
      }
LABEL_67:
      if ( v56 )
        v10 = v56;
      goto LABEL_14;
    }
LABEL_95:
    *(_DWORD *)(a1 + 8) = v15;
    BUG();
  }
  if ( (unsigned int)v5 >> 3 >= (int)v5 - *(_DWORD *)(a1 + 12) - v15 )
  {
    v35 = ((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4) | ((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1);
    v36 = ((((v35 >> 8) | v35) >> 16) | (v35 >> 8) | v35) + 1;
    if ( (unsigned int)v36 < 0x40 )
      LODWORD(v36) = 64;
    *(_DWORD *)(a1 + 16) = v36;
    v37 = (_DWORD *)sub_25CC9C0(16LL * (unsigned int)v36, 8);
    v38 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)a1 = v37;
    v39 = v38;
    v40 = 16 * v38;
    v41 = &v37[(unsigned __int64)v40 / 4];
    if ( v6 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      v42 = &v6[4 * (unsigned int)v5];
      if ( v40 )
      {
        if ( (v40 & 0x10) == 0 || (*v37 = -1, v37 += 4, v37 != v41) )
        {
          do
          {
            *v37 = -1;
            v37 += 8;
            *(v37 - 4) = -1;
          }
          while ( v37 != v41 );
        }
      }
      v43 = v6;
      do
      {
        v44 = *v43;
        if ( *v43 <= 0xFFFFFFFD )
        {
          v45 = *(_DWORD *)(a1 + 16);
          if ( !v45 )
            goto LABEL_94;
          v46 = v45 - 1;
          v47 = 1;
          v48 = 0;
          LODWORD(v49) = (v45 - 1) & (37 * v44);
          v50 = *(_QWORD *)a1 + 16LL * (unsigned int)v49;
          v51 = *(_DWORD *)v50;
          if ( *(_DWORD *)v50 != v44 )
          {
            while ( v51 != -1 )
            {
              if ( v51 == -2 && !v48 )
                v48 = v50;
              v49 = v46 & (unsigned int)(v49 + v47);
              v50 = *(_QWORD *)a1 + 16 * v49;
              v51 = *(_DWORD *)v50;
              if ( v44 == *(_DWORD *)v50 )
                goto LABEL_52;
              ++v47;
            }
            if ( v48 )
              v50 = v48;
          }
LABEL_52:
          *(_DWORD *)v50 = v44;
          *(_QWORD *)(v50 + 8) = *((_QWORD *)v43 + 1);
          ++*(_DWORD *)(a1 + 8);
        }
        v43 += 4;
      }
      while ( v42 != v43 );
      operator delete();
      v37 = *(_DWORD **)a1;
      v39 = *(_DWORD *)(a1 + 16);
      v15 = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
      if ( v37 != v41 )
      {
        v62 = v37;
        if ( (((_BYTE)v41 - (_BYTE)v37) & 0x10) == 0 || (v62 = v37 + 4, *v37 = -1, v37 + 4 != v41) )
        {
          do
          {
            *v62 = -1;
            v62 += 8;
            *(v62 - 4) = -1;
          }
          while ( v62 != v41 );
        }
      }
      v15 = 1;
    }
    if ( v39 )
    {
      v57 = v39 - 1;
      v58 = 1;
      v56 = nullptr;
      LODWORD(v59) = v57 & (37 * *a2);
      v10 = &v37[4 * (unsigned int)v59];
      v60 = *v10;
      if ( *a2 == *v10 )
        goto LABEL_14;
      while ( v60 != -1 )
      {
        if ( !v56 && v60 == -2 )
          v56 = v10;
        v59 = v57 & (unsigned int)(v59 + v58);
        v10 = &v37[4 * v59];
        v60 = *v10;
        if ( *a2 == *v10 )
          goto LABEL_14;
        ++v58;
      }
      goto LABEL_67;
    }
    goto LABEL_95;
  }
LABEL_14:
  *(_DWORD *)(a1 + 8) = v15;
  if ( *v10 != -1 )
    --*(_DWORD *)(a1 + 12);
  v16 = *a2;
  *((_QWORD *)v10 + 1) = 0;
  *v10 = v16;
  return v10 + 2;
}

