__int64 __fastcall sub_E73BE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v21; // rsi
  int v22; // r9d
  __int64 v23; // r8
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  int j; // r11d
  __int64 v27; // rcx
  unsigned int v28; // r10d
  __int64 v29; // rdi
  __int64 v30; // rbp
  int v31; // ecx
  int v32; // edi
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rsi
  _QWORD *v38; // rdx
  int v39; // r9d
  _QWORD *v40; // rcx
  __int64 v41; // rdx
  int v42; // r11d
  __int64 v43; // rcx
  unsigned int v44; // r10d
  __int64 v45; // rdi
  __int64 v46; // rbp
  int v47; // ecx
  int v48; // ecx
  __int64 v49; // rsi
  __int64 v50; // rcx
  _QWORD *v51; // rcx
  _QWORD *v52; // rdx
  int v53; // r14d
  __int64 v54; // r13
  int v55; // esi
  __int64 v56; // r8
  unsigned int i; // ecx
  int v58; // r14d
  __int64 v59; // r13
  int v60; // edi
  __int64 *v61; // rsi
  int v62; // r10d
  __int64 *v63; // r8
  unsigned int v64; // r9d
  int v65; // ecx
  __int64 *v66; // rdi
  int v67; // r10d
  unsigned int v68; // r9d

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
  v55 = 1;
  v56 = 0;
  for ( i = 0; ; a6 = v8 + 16LL * i )
  {
    if ( v56 || v9 != -8192 )
      a6 = v56;
    a5 = (unsigned int)(v55 + 1);
    i = v12 & (v55 + i);
    v13 = v8 + 16LL * i;
    v9 = *(_QWORD *)v13;
    if ( !*(_QWORD *)v13 )
    {
      v8 += 16LL * i;
      goto LABEL_3;
    }
    if ( v9 == -4096 )
      break;
    ++v55;
    v56 = a6;
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
    v13 = sub_22300B0(16LL * (unsigned int)v18, 8, 64, a4, a5, a6);
    *(_QWORD *)(a1 + 16) = v13;
    if ( v8 )
    {
      v19 = *(unsigned int *)(a1 + 32);
      *(_QWORD *)(a1 + 24) = 0;
      v20 = (_QWORD *)v13;
      v21 = 16LL * v7;
      v22 = v19;
      v23 = v8 + v21;
      v24 = (_QWORD *)(v13 + 16 * v19);
      if ( (_QWORD *)v13 != v24 )
      {
        do
        {
          *v20 = -4096;
          v20 += 2;
        }
        while ( v24 != v20 );
      }
      v25 = v8;
      for ( j = v22 - 1; v23 != v25; v25 += 16 )
      {
        v27 = *(_QWORD *)v25;
        if ( *(_QWORD *)v25 != -8192 && v27 != -4096 )
        {
          if ( !v22 )
          {
            *(_QWORD *)&dword_0 = *(_QWORD *)v25;
            BUG();
          }
          v28 = j & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
          v29 = v13 + 16LL * v28;
          v30 = *(_QWORD *)v29;
          if ( *(_QWORD *)v29 != v27 )
          {
            v53 = 1;
            v54 = 0;
            if ( v30 != -4096 )
            {
              while ( 1 )
              {
                if ( !v54 && v30 == -8192 )
                  v54 = v29;
                v28 = j & (v53 + v28);
                v29 = v13 + 16LL * v28;
                v30 = *(_QWORD *)v29;
                if ( v27 == *(_QWORD *)v29 )
                  break;
                if ( v30 == -4096 )
                {
                  if ( v54 )
                    v29 = v54;
                  break;
                }
                ++v53;
              }
            }
          }
          *(_QWORD *)v29 = v27;
          v31 = *(_DWORD *)(v25 + 8);
          ++*(_DWORD *)(a1 + 24);
          *(_DWORD *)(v29 + 8) = v31;
        }
      }
      operator delete(v8, v21, 8);
      v13 = *(_QWORD *)(a1 + 16);
      v32 = *(_DWORD *)(a1 + 32);
      v14 = *(_DWORD *)(a1 + 24) + 1;
    }
    else
    {
      v50 = *(unsigned int *)(a1 + 32);
      *(_QWORD *)(a1 + 24) = 0;
      v32 = v50;
      v51 = (_QWORD *)(v13 + 16 * v50);
      if ( (_QWORD *)v13 != v51 )
      {
        v52 = (_QWORD *)v13;
        do
        {
          *v52 = -4096;
          v52 += 2;
        }
        while ( v51 != v52 );
      }
      v14 = 1;
    }
    if ( v32 )
    {
      v33 = *(_QWORD *)v13;
      if ( *(_QWORD *)v13 )
      {
        if ( v33 != -4096 )
        {
          v60 = v32 - 1;
          v61 = (__int64 *)v13;
          v62 = 1;
          v63 = nullptr;
          v64 = 0;
          while ( 1 )
          {
            if ( v33 == -8192 && !v63 )
              v63 = v61;
            v64 = v60 & (v62 + v64);
            v61 = (__int64 *)(v13 + 16LL * v64);
            v33 = *v61;
            if ( !*v61 )
            {
              v13 += 16LL * v64;
              goto LABEL_27;
            }
            if ( v33 == -4096 )
              break;
            ++v62;
          }
          v13 += 16LL * v64;
          if ( v63 )
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
  v34 = (((((((((v12 | ((unsigned __int64)v12 >> 1)) >> 2) | v12 | ((unsigned __int64)v12 >> 1)) >> 4)
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
  if ( (unsigned int)v34 < 0x40 )
    LODWORD(v34) = 64;
  *(_DWORD *)(a1 + 32) = v34;
  v35 = sub_22300B0(16LL * (unsigned int)v34, 8, 64, v15, a5, a6);
  v36 = *(unsigned int *)(a1 + 32);
  *(_QWORD *)(a1 + 24) = 0;
  v37 = 16LL * v7;
  *(_QWORD *)(a1 + 16) = v35;
  v38 = (_QWORD *)v35;
  v39 = v36;
  v40 = (_QWORD *)(v35 + 16 * v36);
  if ( (_QWORD *)v35 != v40 )
  {
    do
    {
      *v38 = -4096;
      v38 += 2;
    }
    while ( v40 != v38 );
  }
  v41 = v8;
  v42 = v39 - 1;
  do
  {
    v43 = *(_QWORD *)v41;
    if ( *(_QWORD *)v41 != -4096 && v43 != -8192 )
    {
      if ( !v39 )
      {
        *(_QWORD *)&dword_0 = *(_QWORD *)v41;
        BUG();
      }
      v44 = v42 & (((unsigned int)v43 >> 9) ^ ((unsigned int)v43 >> 4));
      v45 = v35 + 16LL * v44;
      v46 = *(_QWORD *)v45;
      if ( v43 != *(_QWORD *)v45 )
      {
        v58 = 1;
        v59 = 0;
        if ( v46 != -4096 )
        {
          while ( 1 )
          {
            if ( v46 == -8192 && !v59 )
              v59 = v45;
            v44 = v42 & (v58 + v44);
            v45 = v35 + 16LL * v44;
            v46 = *(_QWORD *)v45;
            if ( v43 == *(_QWORD *)v45 )
              break;
            if ( v46 == -4096 )
            {
              if ( v59 )
                v45 = v59;
              break;
            }
            ++v58;
          }
        }
      }
      *(_QWORD *)v45 = v43;
      v47 = *(_DWORD *)(v41 + 8);
      ++*(_DWORD *)(a1 + 24);
      *(_DWORD *)(v45 + 8) = v47;
    }
    v41 += 16;
  }
  while ( v8 + v37 != v41 );
  operator delete(v8, v37, 8);
  v48 = *(_DWORD *)(a1 + 32);
  v13 = *(_QWORD *)(a1 + 16);
  v14 = *(_DWORD *)(a1 + 24) + 1;
  if ( !v48 )
    goto LABEL_102;
  v49 = *(_QWORD *)v13;
  if ( !*(_QWORD *)v13 )
    goto LABEL_27;
  if ( v49 == -4096 )
    goto LABEL_42;
  v65 = v48 - 1;
  v66 = *(__int64 **)(a1 + 16);
  v67 = 1;
  v63 = nullptr;
  v68 = 0;
  while ( 1 )
  {
    if ( !v63 && v49 == -8192 )
      v63 = v66;
    v68 = v65 & (v67 + v68);
    v66 = (__int64 *)(v13 + 16LL * v68);
    v49 = *v66;
    if ( !*v66 )
    {
      v13 += 16LL * v68;
      goto LABEL_27;
    }
    if ( v49 == -4096 )
      break;
    ++v67;
  }
  if ( !v63 )
  {
    v13 += 16LL * v68;
    goto LABEL_42;
  }
LABEL_93:
  v16 = *v63;
  v13 = (__int64)v63;
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
