__int64 __fastcall sub_E4FEA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // ebp
  __int64 v8; // r12
  __int64 v9; // rdx
  _DWORD *v10; // rdx
  __int64 result; // rax
  unsigned int v12; // edi
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  int v21; // r9d
  __int64 v22; // r8
  _QWORD *v23; // rcx
  __int64 v24; // rdx
  int j; // r11d
  __int64 v26; // rcx
  unsigned int v27; // r10d
  __int64 v28; // rdi
  __int64 v29; // rbp
  int v30; // ecx
  int v31; // edi
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rdx
  int v37; // r9d
  __int64 v38; // r8
  _QWORD *v39; // rcx
  __int64 v40; // rdx
  int v41; // r11d
  __int64 v42; // rcx
  unsigned int v43; // r10d
  __int64 v44; // rdi
  __int64 v45; // rbp
  int v46; // ecx
  int v47; // ecx
  __int64 v48; // rsi
  __int64 v49; // rcx
  _QWORD *v50; // rcx
  _QWORD *v51; // rdx
  int v52; // r14d
  __int64 v53; // r13
  int v54; // esi
  __int64 v55; // r8
  unsigned int i; // ecx
  int v57; // r14d
  __int64 v58; // r13
  int v59; // edi
  __int64 *v60; // rsi
  int v61; // r10d
  __int64 *v62; // r8
  unsigned int v63; // r9d
  int v64; // ecx
  __int64 *v65; // rdi
  int v66; // r10d
  unsigned int v67; // r9d

  v7 = *(_DWORD *)(a1 + 32);
  v8 = *(_QWORD *)(a1 + 16);
  if ( !v7 )
    goto LABEL_12;
  v9 = *(_QWORD *)v8;
  if ( !*(_QWORD *)v8 )
  {
LABEL_3:
    v10 = (_DWORD *)(v8 + 8);
    result = (unsigned int)(*(_DWORD *)(v8 + 8) + 1);
    goto LABEL_4;
  }
  v12 = v7 - 1;
  v13 = v8;
  if ( v9 == -4096 )
    goto LABEL_6;
  a6 = v8;
  v54 = 1;
  v55 = 0;
  for ( i = 0; ; a6 = v8 + 16LL * i )
  {
    if ( v55 || v9 != -8192 )
      a6 = v55;
    a5 = (unsigned int)(v54 + 1);
    i = v12 & (v54 + i);
    v13 = v8 + 16LL * i;
    v9 = *(_QWORD *)v13;
    if ( !*(_QWORD *)v13 )
    {
      v8 += 16LL * i;
      goto LABEL_3;
    }
    if ( v9 == -4096 )
      break;
    ++v54;
    v55 = a6;
  }
  if ( a6 )
    v13 = a6;
LABEL_6:
  a4 = 3 * v7;
  v14 = *(_DWORD *)(a1 + 24) + 1;
  if ( 4 * v14 >= (unsigned int)a4 )
  {
LABEL_12:
    v17 = (((((((2 * v7 - 1) | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 2)
            | (2 * v7 - 1)
            | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 4)
          | (((2 * v7 - 1) | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 2)
          | (2 * v7 - 1)
          | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 8)
        | (((((2 * v7 - 1) | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 2)
          | (2 * v7 - 1)
          | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 4)
        | (((2 * v7 - 1) | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 2)
        | (2 * v7 - 1)
        | ((unsigned __int64)(2 * v7 - 1) >> 1);
    v18 = ((v17 >> 16) | v17) + 1;
    if ( (unsigned int)v18 < 0x40 )
      LODWORD(v18) = 64;
    *(_DWORD *)(a1 + 32) = v18;
    v13 = sub_220C370(16LL * (unsigned int)v18, 8, 64, a4, a5, a6);
    *(_QWORD *)(a1 + 16) = v13;
    if ( v8 )
    {
      v19 = *(unsigned int *)(a1 + 32);
      *(_QWORD *)(a1 + 24) = 0;
      v20 = (_QWORD *)v13;
      v21 = v19;
      v22 = v8 + 16LL * v7;
      v23 = (_QWORD *)(v13 + 16 * v19);
      if ( (_QWORD *)v13 != v23 )
      {
        do
        {
          *v20 = -4096;
          v20 += 2;
        }
        while ( v23 != v20 );
      }
      v24 = v8;
      for ( j = v21 - 1; v22 != v24; v24 += 16 )
      {
        v26 = *(_QWORD *)v24;
        if ( *(_QWORD *)v24 != -8192 && v26 != -4096 )
        {
          if ( !v21 )
          {
            *(_QWORD *)&dword_0 = *(_QWORD *)v24;
            BUG();
          }
          v27 = j & (((unsigned int)v26 >> 9) ^ ((unsigned int)v26 >> 4));
          v28 = v13 + 16LL * v27;
          v29 = *(_QWORD *)v28;
          if ( *(_QWORD *)v28 != v26 )
          {
            v52 = 1;
            v53 = 0;
            if ( v29 != -4096 )
            {
              while ( 1 )
              {
                if ( !v53 && v29 == -8192 )
                  v53 = v28;
                v27 = j & (v52 + v27);
                v28 = v13 + 16LL * v27;
                v29 = *(_QWORD *)v28;
                if ( v26 == *(_QWORD *)v28 )
                  break;
                if ( v29 == -4096 )
                {
                  if ( v53 )
                    v28 = v53;
                  break;
                }
                ++v52;
              }
            }
          }
          *(_QWORD *)v28 = v26;
          v30 = *(_DWORD *)(v24 + 8);
          ++*(_DWORD *)(a1 + 24);
          *(_DWORD *)(v28 + 8) = v30;
        }
      }
      operator delete();
      v13 = *(_QWORD *)(a1 + 16);
      v31 = *(_DWORD *)(a1 + 32);
      v14 = *(_DWORD *)(a1 + 24) + 1;
    }
    else
    {
      v49 = *(unsigned int *)(a1 + 32);
      *(_QWORD *)(a1 + 24) = 0;
      v31 = v49;
      v50 = (_QWORD *)(v13 + 16 * v49);
      if ( (_QWORD *)v13 != v50 )
      {
        v51 = (_QWORD *)v13;
        do
        {
          *v51 = -4096;
          v51 += 2;
        }
        while ( v50 != v51 );
      }
      v14 = 1;
    }
    if ( v31 )
    {
      v32 = *(_QWORD *)v13;
      if ( *(_QWORD *)v13 )
      {
        if ( v32 != -4096 )
        {
          v59 = v31 - 1;
          v60 = (__int64 *)v13;
          v61 = 1;
          v62 = nullptr;
          v63 = 0;
          while ( 1 )
          {
            if ( v32 == -8192 && !v62 )
              v62 = v60;
            v63 = v59 & (v61 + v63);
            v60 = (__int64 *)(v13 + 16LL * v63);
            v32 = *v60;
            if ( !*v60 )
            {
              v13 += 16LL * v63;
              goto LABEL_27;
            }
            if ( v32 == -4096 )
              break;
            ++v61;
          }
          v13 += 16LL * v63;
          if ( v62 )
            goto LABEL_93;
        }
LABEL_42:
        *(_DWORD *)(a1 + 24) = v14;
        goto LABEL_11;
      }
LABEL_27:
      *(_DWORD *)(a1 + 24) = v14;
      goto LABEL_10;
    }
LABEL_102:
    ++*(_DWORD *)(a1 + 24);
    BUG();
  }
  v15 = v7 - *(_DWORD *)(a1 + 28) - v14;
  if ( (unsigned int)v15 > v7 >> 3 )
  {
    v16 = *(_QWORD *)v13;
    goto LABEL_9;
  }
  v33 = (((((((((v12 | ((unsigned __int64)v12 >> 1)) >> 2) | v12 | ((unsigned __int64)v12 >> 1)) >> 4)
           | ((v12 | ((unsigned __int64)v12 >> 1)) >> 2)
           | v12
           | ((unsigned __int64)v12 >> 1)) >> 8)
         | ((((v12 | ((unsigned __int64)v12 >> 1)) >> 2) | v12 | ((unsigned __int64)v12 >> 1)) >> 4)
         | ((v12 | ((unsigned __int64)v12 >> 1)) >> 2)
         | v12
         | ((unsigned __int64)v12 >> 1)) >> 16)
       | ((((((v12 | ((unsigned __int64)v12 >> 1)) >> 2) | v12 | ((unsigned __int64)v12 >> 1)) >> 4)
         | ((v12 | ((unsigned __int64)v12 >> 1)) >> 2)
         | v12
         | ((unsigned __int64)v12 >> 1)) >> 8)
       | ((((v12 | ((unsigned __int64)v12 >> 1)) >> 2) | v12 | ((unsigned __int64)v12 >> 1)) >> 4)
       | ((v12 | ((unsigned __int64)v12 >> 1)) >> 2)
       | v12
       | ((unsigned __int64)v12 >> 1))
      + 1;
  if ( (unsigned int)v33 < 0x40 )
    LODWORD(v33) = 64;
  *(_DWORD *)(a1 + 32) = v33;
  v34 = sub_220C370(16LL * (unsigned int)v33, 8, 64, v15, a5, a6);
  v35 = *(unsigned int *)(a1 + 32);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = v34;
  v36 = (_QWORD *)v34;
  v37 = v35;
  v38 = v8 + 16LL * v7;
  v39 = (_QWORD *)(v34 + 16 * v35);
  if ( (_QWORD *)v34 != v39 )
  {
    do
    {
      *v36 = -4096;
      v36 += 2;
    }
    while ( v39 != v36 );
  }
  v40 = v8;
  v41 = v37 - 1;
  do
  {
    v42 = *(_QWORD *)v40;
    if ( *(_QWORD *)v40 != -4096 && v42 != -8192 )
    {
      if ( !v37 )
      {
        *(_QWORD *)&dword_0 = *(_QWORD *)v40;
        BUG();
      }
      v43 = v41 & (((unsigned int)v42 >> 9) ^ ((unsigned int)v42 >> 4));
      v44 = v34 + 16LL * v43;
      v45 = *(_QWORD *)v44;
      if ( v42 != *(_QWORD *)v44 )
      {
        v57 = 1;
        v58 = 0;
        if ( v45 != -4096 )
        {
          while ( 1 )
          {
            if ( v45 == -8192 && !v58 )
              v58 = v44;
            v43 = v41 & (v57 + v43);
            v44 = v34 + 16LL * v43;
            v45 = *(_QWORD *)v44;
            if ( v42 == *(_QWORD *)v44 )
              break;
            if ( v45 == -4096 )
            {
              if ( v58 )
                v44 = v58;
              break;
            }
            ++v57;
          }
        }
      }
      *(_QWORD *)v44 = v42;
      v46 = *(_DWORD *)(v40 + 8);
      ++*(_DWORD *)(a1 + 24);
      *(_DWORD *)(v44 + 8) = v46;
    }
    v40 += 16;
  }
  while ( v38 != v40 );
  operator delete();
  v47 = *(_DWORD *)(a1 + 32);
  v13 = *(_QWORD *)(a1 + 16);
  v14 = *(_DWORD *)(a1 + 24) + 1;
  if ( !v47 )
    goto LABEL_102;
  v48 = *(_QWORD *)v13;
  if ( !*(_QWORD *)v13 )
    goto LABEL_27;
  if ( v48 == -4096 )
    goto LABEL_42;
  v64 = v47 - 1;
  v65 = *(__int64 **)(a1 + 16);
  v66 = 1;
  v62 = nullptr;
  v67 = 0;
  while ( 1 )
  {
    if ( !v62 && v48 == -8192 )
      v62 = v65;
    v67 = v64 & (v66 + v67);
    v65 = (__int64 *)(v13 + 16LL * v67);
    v48 = *v65;
    if ( !*v65 )
    {
      v13 += 16LL * v67;
      goto LABEL_27;
    }
    if ( v48 == -4096 )
      break;
    ++v66;
  }
  if ( !v62 )
  {
    v13 += 16LL * v67;
    goto LABEL_42;
  }
LABEL_93:
  v16 = *v62;
  v13 = (__int64)v62;
LABEL_9:
  *(_DWORD *)(a1 + 24) = v14;
  if ( v16 != -4096 )
LABEL_10:
    --*(_DWORD *)(a1 + 28);
LABEL_11:
  *(_QWORD *)v13 = 0;
  v10 = (_DWORD *)(v13 + 8);
  *(_DWORD *)(v13 + 8) = 0;
  result = 1;
LABEL_4:
  *v10 = result;
  return result;
}

