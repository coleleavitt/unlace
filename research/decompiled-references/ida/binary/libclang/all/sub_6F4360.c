__int64 *__fastcall sub_6F4360(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // rbp
  int v6; // ecx
  int v7; // eax
  __int64 *v9; // r13
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // rcx
  int v14; // esi
  __int64 v15; // rdx
  __int64 *v16; // rax
  __int64 *v17; // rdi
  __int64 *i; // rax
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // r8d
  int v22; // r14d
  _QWORD *v23; // r11
  __int64 v24; // rsi
  _QWORD *v25; // rcx
  __int64 v26; // r10
  int v27; // esi
  unsigned int v28; // edi
  __int64 v29; // r9
  int v30; // r11d
  __int64 *v31; // r10
  __int64 *v32; // r13
  unsigned __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 *v36; // rcx
  int v37; // esi
  __int64 v38; // rdx
  __int64 *v39; // rax
  __int64 *v40; // r8
  __int64 *j; // rax
  int v42; // ecx
  int v43; // esi
  int v44; // r14d
  _QWORD *v45; // r11
  __int64 v46; // rdi
  _QWORD *v47; // rcx
  __int64 v48; // r10
  int v49; // esi
  int v50; // r11d
  unsigned int v51; // edi
  __int64 v52; // r9
  __int64 *v53; // rdx
  __int64 *v54; // rdx

  v5 = *(unsigned int *)(a1 + 16);
  v7 = *(_DWORD *)(a1 + 8) + 1;
  if ( 4 * v7 >= (unsigned int)(3 * v5) )
  {
    v9 = *(__int64 **)a1;
    v6 = 2 * v5;
    v10 = ((((((((((unsigned int)(v6 - 1) | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 2)
               | (unsigned int)(v6 - 1)
               | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 4)
             | (((unsigned int)(v6 - 1) | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 2)
             | (unsigned int)(v6 - 1)
             | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 8)
           | (((((unsigned int)(v6 - 1) | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 2)
             | (unsigned int)(v6 - 1)
             | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 4)
           | (((unsigned int)(v6 - 1) | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 2)
           | (unsigned int)(v6 - 1)
           | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 16)
         | (((((((unsigned int)(v6 - 1) | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 2)
             | (unsigned int)(v6 - 1)
             | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 4)
           | (((unsigned int)(v6 - 1) | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 2)
           | (unsigned int)(v6 - 1)
           | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 8)
         | (((((unsigned int)(v6 - 1) | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 2)
           | (unsigned int)(v6 - 1)
           | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 4)
         | (((unsigned int)(v6 - 1) | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 2)
         | (unsigned int)(v6 - 1)
         | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1))
        + 1;
    if ( (unsigned int)v10 < 0x40 )
      LODWORD(v10) = 64;
    *(_DWORD *)(a1 + 16) = v10;
    v11 = sub_25CC9C0(16LL * (unsigned int)v10, 8);
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)a1 = v11;
    v13 = (__int64 *)v11;
    v14 = v12;
    v15 = 16 * v12;
    v16 = (__int64 *)(v11 + v15);
    if ( v9 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      v17 = &v9[2 * v5];
      if ( v15 )
      {
        if ( (((_BYTE)v16 - (_BYTE)v13) & 0x10) == 0 || (*v13 = -4096, v13 += 2, v13 != v16) )
        {
          do
          {
            *v13 = -4096;
            v13 += 4;
            *(v13 - 2) = -4096;
          }
          while ( v13 != v16 );
        }
      }
      for ( i = v9; v17 != i; i += 2 )
      {
        v19 = *i;
        if ( *i != -4096 && v19 != -8192 )
        {
          v20 = *(_DWORD *)(a1 + 16);
          if ( !v20 )
          {
LABEL_85:
            *(_QWORD *)&dword_0 = v19;
            BUG();
          }
          v21 = v20 - 1;
          v22 = 1;
          v23 = nullptr;
          LODWORD(v24) = (v20 - 1) & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
          v25 = (_QWORD *)(*(_QWORD *)a1 + 16LL * (unsigned int)v24);
          v26 = *v25;
          if ( v19 != *v25 )
          {
            while ( v26 != -4096 )
            {
              if ( v26 == -8192 && !v23 )
                v23 = v25;
              v24 = v21 & (unsigned int)(v24 + v22);
              v25 = (_QWORD *)(*(_QWORD *)a1 + 16 * v24);
              v26 = *v25;
              if ( v19 == *v25 )
                goto LABEL_18;
              ++v22;
            }
            if ( v23 )
              v25 = v23;
          }
LABEL_18:
          *v25 = v19;
          v25[1] = i[1];
          ++*(_DWORD *)(a1 + 8);
        }
      }
      operator delete();
      v13 = *(__int64 **)a1;
      v14 = *(_DWORD *)(a1 + 16);
      v7 = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
      if ( v13 != v16 )
      {
        v53 = v13;
        if ( (((_BYTE)v16 - (_BYTE)v13) & 0x10) == 0 || (v53 = v13 + 2, *v13 = -4096, v13 + 2 != v16) )
        {
          do
          {
            *v53 = -4096;
            v53 += 4;
            *(v53 - 2) = -4096;
          }
          while ( v53 != v16 );
        }
      }
      v7 = 1;
    }
    if ( v14 )
    {
      v27 = v14 - 1;
      v28 = v27 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
      a3 = &v13[2 * v28];
      v29 = *a3;
      if ( *a2 == *a3 )
        goto LABEL_3;
      v30 = 1;
      v31 = nullptr;
      while ( v29 != -4096 )
      {
        if ( v29 == -8192 && !v31 )
          v31 = a3;
        v28 = v27 & (v30 + v28);
        a3 = &v13[2 * v28];
        v29 = *a3;
        if ( *a2 == *a3 )
          goto LABEL_3;
        ++v30;
      }
      goto LABEL_25;
    }
LABEL_84:
    *(_DWORD *)(a1 + 8) = v7;
    BUG();
  }
  if ( (unsigned int)v5 >> 3 < (int)v5 - *(_DWORD *)(a1 + 12) - v7 )
    goto LABEL_3;
  v32 = *(__int64 **)a1;
  v33 = ((((((((((unsigned int)(v5 - 1) | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 2)
             | (unsigned int)(v5 - 1)
             | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 4)
           | (((unsigned int)(v5 - 1) | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 2)
           | (unsigned int)(v5 - 1)
           | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 8)
         | (((((unsigned int)(v5 - 1) | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 2)
           | (unsigned int)(v5 - 1)
           | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 4)
         | (((unsigned int)(v5 - 1) | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 2)
         | (unsigned int)(v5 - 1)
         | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 16)
       | (((((((unsigned int)(v5 - 1) | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 2)
           | (unsigned int)(v5 - 1)
           | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 4)
         | (((unsigned int)(v5 - 1) | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 2)
         | (unsigned int)(v5 - 1)
         | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 8)
       | (((((unsigned int)(v5 - 1) | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 2)
         | (unsigned int)(v5 - 1)
         | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 4)
       | (((unsigned int)(v5 - 1) | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 2)
       | (unsigned int)(v5 - 1)
       | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1))
      + 1;
  if ( (unsigned int)v33 < 0x40 )
    LODWORD(v33) = 64;
  *(_DWORD *)(a1 + 16) = v33;
  v34 = sub_25CC9C0(16LL * (unsigned int)v33, 8);
  v35 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)a1 = v34;
  v36 = (__int64 *)v34;
  v37 = v35;
  v38 = 16 * v35;
  v39 = (__int64 *)(v34 + v38);
  if ( v32 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v40 = &v32[2 * v5];
    if ( v38 )
    {
      if ( (((_BYTE)v39 - (_BYTE)v36) & 0x10) == 0 || (*v36 = -4096, v36 += 2, v36 != v39) )
      {
        do
        {
          *v36 = -4096;
          v36 += 4;
          *(v36 - 2) = -4096;
        }
        while ( v36 != v39 );
      }
    }
    for ( j = v32; v40 != j; j += 2 )
    {
      v19 = *j;
      if ( *j != -8192 && v19 != -4096 )
      {
        v42 = *(_DWORD *)(a1 + 16);
        if ( !v42 )
          goto LABEL_85;
        v43 = v42 - 1;
        v44 = 1;
        v45 = nullptr;
        LODWORD(v46) = (v42 - 1) & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
        v47 = (_QWORD *)(*(_QWORD *)a1 + 16LL * (unsigned int)v46);
        v48 = *v47;
        if ( *v47 != v19 )
        {
          while ( v48 != -4096 )
          {
            if ( !v45 && v48 == -8192 )
              v45 = v47;
            v46 = v43 & (unsigned int)(v46 + v44);
            v47 = (_QWORD *)(*(_QWORD *)a1 + 16 * v46);
            v48 = *v47;
            if ( v19 == *v47 )
              goto LABEL_40;
            ++v44;
          }
          if ( v45 )
            v47 = v45;
        }
LABEL_40:
        *v47 = v19;
        v47[1] = j[1];
        ++*(_DWORD *)(a1 + 8);
      }
    }
    operator delete();
    v36 = *(__int64 **)a1;
    v37 = *(_DWORD *)(a1 + 16);
    v7 = *(_DWORD *)(a1 + 8) + 1;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    if ( v36 != v39 )
    {
      v54 = v36;
      if ( (((_BYTE)v39 - (_BYTE)v36) & 0x10) == 0 || (v54 = v36 + 2, *v36 = -4096, v36 + 2 != v39) )
      {
        do
        {
          *v54 = -4096;
          v54 += 4;
          *(v54 - 2) = -4096;
        }
        while ( v54 != v39 );
      }
    }
    v7 = 1;
  }
  if ( !v37 )
    goto LABEL_84;
  v49 = v37 - 1;
  v50 = 1;
  v31 = nullptr;
  v51 = v49 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  a3 = &v36[2 * v51];
  v52 = *a3;
  if ( *a2 == *a3 )
    goto LABEL_3;
  while ( v52 != -4096 )
  {
    if ( !v31 && v52 == -8192 )
      v31 = a3;
    v51 = v49 & (v50 + v51);
    a3 = &v36[2 * v51];
    v52 = *a3;
    if ( *a2 == *a3 )
      goto LABEL_3;
    ++v50;
  }
LABEL_25:
  if ( v31 )
    a3 = v31;
LABEL_3:
  *(_DWORD *)(a1 + 8) = v7;
  if ( *a3 != -4096 )
    --*(_DWORD *)(a1 + 12);
  return a3;
}

