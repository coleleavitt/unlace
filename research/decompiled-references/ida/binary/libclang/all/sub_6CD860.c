_QWORD *__fastcall sub_6CD860(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v5; // r14d
  __int64 *v6; // r13
  unsigned __int64 v7; // rcx
  int v8; // r8d
  __int64 *v9; // rdx
  unsigned int v10; // r12d
  __int64 v11; // rdi
  __int64 *v12; // rax
  __int64 v13; // rsi
  _QWORD *result; // rax
  int v15; // esi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  __int64 *v24; // r9
  __int64 *i; // rax
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // edi
  __int64 v29; // r10
  int v30; // r14d
  _QWORD *v31; // r12
  __int64 v32; // r8
  _QWORD *v33; // rcx
  __int64 v34; // r11
  int v35; // edi
  unsigned int v36; // ecx
  __int64 v37; // r8
  int v38; // r10d
  __int64 *v39; // r9
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rcx
  int v43; // edi
  __int64 v44; // rcx
  _QWORD *v45; // rdx
  __int64 *v46; // r9
  __int64 *v47; // rax
  __int64 v48; // rdx
  int v49; // edi
  int v50; // edi
  __int64 v51; // r11
  int v52; // r15d
  _QWORD *v53; // r14
  __int64 v54; // r8
  _QWORD *v55; // rcx
  __int64 v56; // r10
  int v57; // edi
  int v58; // r9d
  __int64 *v59; // r8
  unsigned int v60; // r12d
  __int64 v61; // rcx
  _QWORD *v62; // rcx
  _QWORD *v63; // rcx

  v2 = 0;
  v5 = *(_DWORD *)(a1 + 1088);
  v6 = *(__int64 **)(a1 + 1072);
  if ( !v5 )
    goto LABEL_18;
  v7 = v5 - 1;
  v8 = 1;
  v9 = nullptr;
  v10 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
  LODWORD(v11) = v7 & v10;
  v12 = &v6[2 * ((unsigned int)v7 & v10)];
  v13 = *v12;
  if ( *v12 == a2 )
  {
LABEL_3:
    result = v12 + 1;
    goto LABEL_4;
  }
  while ( v13 != -4096 )
  {
    if ( v13 == -8192 && !v9 )
      v9 = v12;
    v11 = (unsigned int)v7 & ((_DWORD)v11 + v8);
    v12 = &v6[2 * v11];
    v13 = *v12;
    if ( *v12 == a2 )
      goto LABEL_3;
    ++v8;
  }
  if ( !v9 )
    v9 = v12;
  v15 = *(_DWORD *)(a1 + 1080) + 1;
  v2 = 2 * v5;
  if ( 4 * v15 >= 3 * v5 )
  {
LABEL_18:
    v16 = (unsigned int)(v2 - 1) | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1);
    v17 = (((v16 >> 2) | v16) >> 4) | (v16 >> 2) | v16;
    v18 = ((((v17 >> 8) | v17) >> 16) | (v17 >> 8) | v17) + 1;
    if ( (unsigned int)v18 < 0x40 )
      LODWORD(v18) = 64;
    *(_DWORD *)(a1 + 1088) = v18;
    v19 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v18, 8);
    v20 = *(unsigned int *)(a1 + 1088);
    *(_QWORD *)(a1 + 1072) = v19;
    v21 = v20;
    v22 = 16 * v20;
    v23 = &v19[(unsigned __int64)v22 / 8];
    if ( v6 )
    {
      *(_QWORD *)(a1 + 1080) = 0;
      v24 = &v6[2 * v5];
      if ( v22 )
      {
        if ( (v22 & 0x10) == 0 || (*v19 = -4096, v19 += 2, v19 != v23) )
        {
          do
          {
            *v19 = -4096;
            v19 += 4;
            *(v19 - 2) = -4096;
          }
          while ( v19 != v23 );
        }
      }
      for ( i = v6; v24 != i; i += 2 )
      {
        v26 = *i;
        if ( *i != -4096 && v26 != -8192 )
        {
          v27 = *(_DWORD *)(a1 + 1088);
          if ( !v27 )
          {
            *(_QWORD *)&dword_0 = *i;
            BUG();
          }
          v28 = v27 - 1;
          v29 = *(_QWORD *)(a1 + 1072);
          v30 = 1;
          v31 = nullptr;
          LODWORD(v32) = (v27 - 1) & (((unsigned int)v26 >> 9) ^ ((unsigned int)v26 >> 4));
          v33 = (_QWORD *)(v29 + 16LL * (unsigned int)v32);
          v34 = *v33;
          if ( *v33 != v26 )
          {
            while ( v34 != -4096 )
            {
              if ( v34 == -8192 && !v31 )
                v31 = v33;
              v32 = v28 & (unsigned int)(v32 + v30);
              v33 = (_QWORD *)(v29 + 16 * v32);
              v34 = *v33;
              if ( v26 == *v33 )
                goto LABEL_30;
              ++v30;
            }
            if ( v31 )
              v33 = v31;
          }
LABEL_30:
          *v33 = v26;
          v33[1] = i[1];
          ++*(_DWORD *)(a1 + 1080);
        }
      }
      operator delete();
      v19 = *(_QWORD **)(a1 + 1072);
      v21 = *(_DWORD *)(a1 + 1088);
      v15 = *(_DWORD *)(a1 + 1080) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 1080) = 0;
      if ( v19 != v23 )
      {
        v62 = v19;
        if ( (((_BYTE)v23 - (_BYTE)v19) & 0x10) == 0 || (v62 = v19 + 2, *v19 = -4096, v19 + 2 != v23) )
        {
          do
          {
            *v62 = -4096;
            v62 += 4;
            *(v62 - 2) = -4096;
          }
          while ( v62 != v23 );
        }
      }
      v15 = 1;
    }
    if ( v21 )
    {
      v35 = v21 - 1;
      v36 = v35 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v9 = &v19[2 * v36];
      v37 = *v9;
      if ( *v9 != a2 )
      {
        v38 = 1;
        v39 = nullptr;
        while ( v37 != -4096 )
        {
          if ( v37 == -8192 && !v39 )
            v39 = v9;
          v36 = v35 & (v38 + v36);
          v9 = &v19[2 * v36];
          v37 = *v9;
          if ( *v9 == a2 )
            goto LABEL_15;
          ++v38;
        }
        if ( v39 )
          v9 = v39;
      }
      goto LABEL_15;
    }
    goto LABEL_101;
  }
  if ( v5 >> 3 >= v5 - *(_DWORD *)(a1 + 1084) - v15 )
  {
    v40 = (((((((((v7 | (v7 >> 1)) >> 2) | v7 | (v7 >> 1)) >> 4) | ((v7 | (v7 >> 1)) >> 2) | v7 | (v7 >> 1)) >> 8)
           | ((((v7 | (v7 >> 1)) >> 2) | v7 | (v7 >> 1)) >> 4)
           | ((v7 | (v7 >> 1)) >> 2)
           | v7
           | (v7 >> 1)) >> 16)
         | ((((((v7 | (v7 >> 1)) >> 2) | v7 | (v7 >> 1)) >> 4) | ((v7 | (v7 >> 1)) >> 2) | v7 | (v7 >> 1)) >> 8)
         | ((((v7 | (v7 >> 1)) >> 2) | v7 | (v7 >> 1)) >> 4)
         | ((v7 | (v7 >> 1)) >> 2)
         | v7
         | (v7 >> 1))
        + 1;
    if ( (unsigned int)v40 < 0x40 )
      LODWORD(v40) = 64;
    *(_DWORD *)(a1 + 1088) = v40;
    v41 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v40, 8);
    v42 = *(unsigned int *)(a1 + 1088);
    *(_QWORD *)(a1 + 1072) = v41;
    v43 = v42;
    v44 = 16 * v42;
    v45 = &v41[(unsigned __int64)v44 / 8];
    if ( v6 )
    {
      *(_QWORD *)(a1 + 1080) = 0;
      v46 = &v6[2 * v5];
      if ( v44 )
      {
        if ( (v44 & 0x10) == 0 || (*v41 = -4096, v41 += 2, v41 != v45) )
        {
          do
          {
            *v41 = -4096;
            v41 += 4;
            *(v41 - 2) = -4096;
          }
          while ( v41 != v45 );
        }
      }
      v47 = v6;
      do
      {
        v48 = *v47;
        if ( *v47 != -8192 && v48 != -4096 )
        {
          v49 = *(_DWORD *)(a1 + 1088);
          if ( !v49 )
          {
            *(_QWORD *)&dword_0 = *v47;
            BUG();
          }
          v50 = v49 - 1;
          v51 = *(_QWORD *)(a1 + 1072);
          v52 = 1;
          v53 = nullptr;
          LODWORD(v54) = v50 & (((unsigned int)v48 >> 9) ^ ((unsigned int)v48 >> 4));
          v55 = (_QWORD *)(v51 + 16LL * (unsigned int)v54);
          v56 = *v55;
          if ( *v55 != v48 )
          {
            while ( v56 != -4096 )
            {
              if ( v56 == -8192 && !v53 )
                v53 = v55;
              v54 = v50 & (unsigned int)(v54 + v52);
              v55 = (_QWORD *)(v51 + 16 * v54);
              v56 = *v55;
              if ( v48 == *v55 )
                goto LABEL_61;
              ++v52;
            }
            if ( v53 )
              v55 = v53;
          }
LABEL_61:
          *v55 = v48;
          v55[1] = v47[1];
          ++*(_DWORD *)(a1 + 1080);
        }
        v47 += 2;
      }
      while ( v46 != v47 );
      operator delete();
      v41 = *(_QWORD **)(a1 + 1072);
      v43 = *(_DWORD *)(a1 + 1088);
      v15 = *(_DWORD *)(a1 + 1080) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 1080) = 0;
      if ( v41 != v45 )
      {
        v63 = v41;
        if ( (((_BYTE)v45 - (_BYTE)v41) & 0x10) == 0 || (v63 = v41 + 2, *v41 = -4096, v41 + 2 != v45) )
        {
          do
          {
            *v63 = -4096;
            v63 += 4;
            *(v63 - 2) = -4096;
          }
          while ( v63 != v45 );
        }
      }
      v15 = 1;
    }
    if ( v43 )
    {
      v57 = v43 - 1;
      v58 = 1;
      v59 = nullptr;
      v60 = v57 & v10;
      v9 = &v41[2 * v60];
      v61 = *v9;
      if ( *v9 != a2 )
      {
        while ( v61 != -4096 )
        {
          if ( !v59 && v61 == -8192 )
            v59 = v9;
          v60 = v57 & (v58 + v60);
          v9 = &v41[2 * v60];
          v61 = *v9;
          if ( *v9 == a2 )
            goto LABEL_15;
          ++v58;
        }
        if ( v59 )
          v9 = v59;
      }
      goto LABEL_15;
    }
LABEL_101:
    *(_DWORD *)(a1 + 1080) = v15;
    BUG();
  }
LABEL_15:
  *(_DWORD *)(a1 + 1080) = v15;
  if ( *v9 != -4096 )
    --*(_DWORD *)(a1 + 1084);
  *v9 = a2;
  result = v9 + 1;
  v9[1] = 0;
LABEL_4:
  *result = 0;
  return result;
}

