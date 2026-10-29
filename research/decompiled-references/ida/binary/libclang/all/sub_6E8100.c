__int64 __fastcall sub_6E8100(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  int v4; // eax
  unsigned int v5; // r14d
  __int64 *v6; // r13
  unsigned __int64 v7; // rcx
  int v8; // r8d
  __int64 *v9; // rdx
  __int64 v10; // rdi
  __int64 *v11; // rax
  __int64 v12; // rsi
  _QWORD *v13; // rax
  int v15; // esi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  int v21; // edi
  __int64 v22; // rdx
  _QWORD *v23; // rcx
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
  unsigned int v36; // eax
  __int64 v37; // r8
  int v38; // r10d
  __int64 *v39; // r9
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rdx
  int v43; // edi
  __int64 v44; // rdx
  _QWORD *v45; // rcx
  __int64 *v46; // r9
  __int64 *v47; // rax
  int v48; // edi
  int v49; // edi
  __int64 v50; // r11
  int v51; // r15d
  _QWORD *v52; // r14
  __int64 v53; // r8
  _QWORD *v54; // rcx
  __int64 v55; // r10
  int v56; // edi
  int v57; // r9d
  __int64 *v58; // r8
  unsigned int v59; // r12d
  __int64 v60; // rax

  v2 = *(_QWORD *)(a2 + 128);
  if ( v2
    || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104)),
        (v2 = *(_QWORD *)(a2 + 128)) != 0) )
  {
    v2 = *(_QWORD *)(v2 + 88);
  }
  v3 = *(_QWORD *)(a1 + 72);
  v4 = 0;
  v5 = *(_DWORD *)(v3 + 80);
  v6 = *(__int64 **)(v3 + 64);
  if ( !v5 )
    goto LABEL_22;
  v7 = v5 - 1;
  v8 = 1;
  v9 = nullptr;
  LODWORD(v10) = v7 & (((unsigned int)v2 >> 9) ^ ((unsigned int)v2 >> 4));
  v11 = &v6[2 * (unsigned int)v10];
  v12 = *v11;
  if ( v2 == *v11 )
  {
LABEL_5:
    v13 = v11 + 1;
    return *v13;
  }
  while ( v12 != -4096 )
  {
    if ( v12 == -8192 && !v9 )
      v9 = v11;
    v10 = (unsigned int)v7 & ((_DWORD)v10 + v8);
    v11 = &v6[2 * v10];
    v12 = *v11;
    if ( v2 == *v11 )
      goto LABEL_5;
    ++v8;
  }
  if ( !v9 )
    v9 = v11;
  v15 = *(_DWORD *)(v3 + 72) + 1;
  v4 = 2 * v5;
  if ( 4 * v15 >= 3 * v5 )
  {
LABEL_22:
    v16 = (unsigned int)(v4 - 1) | ((unsigned __int64)(unsigned int)(v4 - 1) >> 1);
    v17 = (((v16 >> 2) | v16) >> 4) | (v16 >> 2) | v16;
    v18 = ((((v17 >> 8) | v17) >> 16) | (v17 >> 8) | v17) + 1;
    if ( (unsigned int)v18 < 0x40 )
      LODWORD(v18) = 64;
    *(_DWORD *)(v3 + 80) = v18;
    v19 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v18, 8);
    v20 = *(unsigned int *)(v3 + 80);
    *(_QWORD *)(v3 + 64) = v19;
    v21 = v20;
    v22 = 16 * v20;
    v23 = &v19[(unsigned __int64)v22 / 8];
    if ( v6 )
    {
      *(_QWORD *)(v3 + 72) = 0;
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
          v27 = *(_DWORD *)(v3 + 80);
          if ( !v27 )
          {
LABEL_107:
            *(_QWORD *)&dword_0 = v26;
            BUG();
          }
          v28 = v27 - 1;
          v29 = *(_QWORD *)(v3 + 64);
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
                goto LABEL_34;
              ++v30;
            }
            if ( v31 )
              v33 = v31;
          }
LABEL_34:
          *v33 = v26;
          v33[1] = i[1];
          ++*(_DWORD *)(v3 + 72);
        }
      }
      operator delete();
    }
    else
    {
      *(_QWORD *)(v3 + 72) = 0;
      if ( v19 == v23 )
      {
        v15 = 1;
LABEL_38:
        if ( v21 )
        {
          v35 = v21 - 1;
          v36 = v35 & (((unsigned int)v2 >> 9) ^ ((unsigned int)v2 >> 4));
          v9 = &v23[2 * v36];
          v37 = *v9;
          if ( v2 != *v9 )
          {
            v38 = 1;
            v39 = nullptr;
            while ( v37 != -4096 )
            {
              if ( v37 == -8192 && !v39 )
                v39 = v9;
              v36 = v35 & (v38 + v36);
              v9 = &v23[2 * v36];
              v37 = *v9;
              if ( v2 == *v9 )
                goto LABEL_17;
              ++v38;
            }
            if ( v39 )
              v9 = v39;
          }
          goto LABEL_17;
        }
        goto LABEL_108;
      }
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
    v23 = *(_QWORD **)(v3 + 64);
    v21 = *(_DWORD *)(v3 + 80);
    v15 = *(_DWORD *)(v3 + 72) + 1;
    goto LABEL_38;
  }
  if ( v5 >> 3 >= v5 - *(_DWORD *)(v3 + 76) - v15 )
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
    *(_DWORD *)(v3 + 80) = v40;
    v41 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v40, 8);
    v42 = *(unsigned int *)(v3 + 80);
    *(_QWORD *)(v3 + 64) = v41;
    v43 = v42;
    v44 = 16 * v42;
    v45 = &v41[(unsigned __int64)v44 / 8];
    if ( v6 )
    {
      *(_QWORD *)(v3 + 72) = 0;
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
        v26 = *v47;
        if ( *v47 != -8192 && v26 != -4096 )
        {
          v48 = *(_DWORD *)(v3 + 80);
          if ( !v48 )
            goto LABEL_107;
          v49 = v48 - 1;
          v50 = *(_QWORD *)(v3 + 64);
          v51 = 1;
          v52 = nullptr;
          LODWORD(v53) = v49 & (((unsigned int)v26 >> 9) ^ ((unsigned int)v26 >> 4));
          v54 = (_QWORD *)(v50 + 16LL * (unsigned int)v53);
          v55 = *v54;
          if ( *v54 != v26 )
          {
            while ( v55 != -4096 )
            {
              if ( v55 == -8192 && !v52 )
                v52 = v54;
              v53 = v49 & (unsigned int)(v53 + v51);
              v54 = (_QWORD *)(v50 + 16 * v53);
              v55 = *v54;
              if ( v26 == *v54 )
                goto LABEL_66;
              ++v51;
            }
            if ( v52 )
              v54 = v52;
          }
LABEL_66:
          *v54 = v26;
          v54[1] = v47[1];
          ++*(_DWORD *)(v3 + 72);
        }
        v47 += 2;
      }
      while ( v46 != v47 );
      operator delete();
    }
    else
    {
      *(_QWORD *)(v3 + 72) = 0;
      if ( v41 == v45 )
      {
        v15 = 1;
LABEL_70:
        if ( v43 )
        {
          v56 = v43 - 1;
          v57 = 1;
          v58 = nullptr;
          v59 = v56 & (((unsigned int)v2 >> 9) ^ ((unsigned int)v2 >> 4));
          v9 = &v45[2 * v59];
          v60 = *v9;
          if ( v2 != *v9 )
          {
            while ( v60 != -4096 )
            {
              if ( !v58 && v60 == -8192 )
                v58 = v9;
              v59 = v56 & (v57 + v59);
              v9 = &v45[2 * v59];
              v60 = *v9;
              if ( v2 == *v9 )
                goto LABEL_17;
              ++v57;
            }
            if ( v58 )
              v9 = v58;
          }
          goto LABEL_17;
        }
LABEL_108:
        *(_DWORD *)(v3 + 72) = v15;
        BUG();
      }
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
    v45 = *(_QWORD **)(v3 + 64);
    v43 = *(_DWORD *)(v3 + 80);
    v15 = *(_DWORD *)(v3 + 72) + 1;
    goto LABEL_70;
  }
LABEL_17:
  *(_DWORD *)(v3 + 72) = v15;
  if ( *v9 != -4096 )
    --*(_DWORD *)(v3 + 76);
  *v9 = v2;
  v13 = v9 + 1;
  v9[1] = 0;
  return *v13;
}

