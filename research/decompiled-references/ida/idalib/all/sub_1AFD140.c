__int64 *__fastcall sub_1AFD140(__int64 a1, _QWORD *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // r13d
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rsi
  __int64 *result; // rax
  __int64 *v13; // r12
  unsigned __int64 v14; // rdi
  unsigned int v15; // edi
  __int64 *v16; // rax
  __int64 *v17; // r9
  __int64 v18; // rcx
  __int64 *v19; // rdx
  __int64 v20; // rsi
  int v21; // r10d
  __int64 *v22; // rax
  __int64 *v23; // rcx
  __int64 *v24; // rdx
  int i; // r13d
  __int64 v26; // rcx
  unsigned int v27; // r8d
  __int64 *v28; // rdi
  __int64 v29; // r11
  __int64 v30; // rcx
  int v31; // esi
  int v32; // r8d
  unsigned int v33; // edi
  __int64 v34; // rdx
  __int64 *v35; // r12
  unsigned __int64 v36; // rdi
  __int64 *v37; // rax
  __int64 *v38; // r9
  __int64 v39; // rcx
  __int64 *v40; // rdx
  __int64 v41; // rsi
  int v42; // r10d
  __int64 *v43; // rax
  __int64 *v44; // rcx
  __int64 *v45; // rdx
  int k; // r13d
  unsigned int v47; // r8d
  __int64 *v48; // rdi
  __int64 v49; // r11
  __int64 v50; // rcx
  int v51; // esi
  int v52; // r8d
  unsigned int v53; // edi
  __int64 *v54; // rdx
  int v55; // r11d
  __int64 v56; // rdx
  __int64 *j; // rdx
  __int64 v58; // rdx
  __int64 *m; // rdx
  int v60; // r15d
  __int64 *v61; // r14
  int v62; // r15d
  __int64 *v63; // r14
  int v64; // r11d

  v8 = *(_DWORD *)(a1 + 16);
  v9 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  if ( 4 * (int)v9 >= 3 * v8 )
  {
    v13 = *(__int64 **)a1;
    v10 = 2 * v8;
    v14 = (((((((((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
              | (unsigned int)(v10 - 1)
              | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 4)
            | (((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
            | (unsigned int)(v10 - 1)
            | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 8)
          | (((((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
            | (unsigned int)(v10 - 1)
            | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 4)
          | (((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
          | (unsigned int)(v10 - 1)
          | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 16)
        | (((((((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
            | (unsigned int)(v10 - 1)
            | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 4)
          | (((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
          | (unsigned int)(v10 - 1)
          | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 8)
        | (((((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
          | (unsigned int)(v10 - 1)
          | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 4)
        | (((unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1)) >> 2)
        | (unsigned int)(v10 - 1)
        | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1);
    v15 = v14 + 1;
    if ( v15 < 0x40 )
      v15 = 64;
    *(_DWORD *)(a1 + 16) = v15;
    v16 = (__int64 *)sub_22300B0(16LL * v15, 8, a3, v9, a5, a6);
    v17 = v16;
    *(_QWORD *)a1 = v16;
    if ( v13 )
    {
      v18 = *(unsigned int *)(a1 + 16);
      v19 = v16;
      v20 = 2LL * v8;
      *(_QWORD *)(a1 + 8) = 0;
      v21 = v18;
      v22 = &v13[v20];
      v23 = &v17[2 * v18];
      if ( v17 != v23 )
      {
        do
        {
          *v19 = -4096;
          v19 += 2;
        }
        while ( v23 != v19 );
      }
      v24 = v13;
      for ( i = v21 - 1; v22 != v24; v24 += 2 )
      {
        v26 = *v24;
        if ( *v24 != -8192 && v26 != -4096 )
        {
          if ( !v21 )
          {
LABEL_84:
            *(_QWORD *)&dword_0 = v26;
            BUG();
          }
          v27 = i & (((unsigned int)v26 >> 9) ^ ((unsigned int)v26 >> 4));
          v28 = &v17[2 * v27];
          v29 = *v28;
          if ( v26 != *v28 )
          {
            v60 = 1;
            v61 = nullptr;
            if ( v29 != -4096 )
            {
              while ( 1 )
              {
                if ( v29 == -8192 && !v61 )
                  v61 = v28;
                v27 = i & (v60 + v27);
                v28 = &v17[2 * v27];
                v29 = *v28;
                if ( v26 == *v28 )
                  break;
                if ( v29 == -4096 )
                {
                  if ( v61 )
                    v28 = v61;
                  break;
                }
                ++v60;
              }
            }
          }
          *v28 = v26;
          v30 = v24[1];
          ++*(_DWORD *)(a1 + 8);
          v28[1] = v30;
        }
      }
      operator delete(v13, v20 * 8, 8);
      v17 = *(__int64 **)a1;
      v31 = *(_DWORD *)(a1 + 16);
      LODWORD(v9) = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v56 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v31 = v56;
      for ( j = &v16[2 * v56]; j != v16; v16 += 2 )
        *v16 = -4096;
      LODWORD(v9) = 1;
    }
    if ( v31 )
    {
      v32 = v31 - 1;
      v33 = (v31 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
      v34 = 2LL * v33;
      result = &v17[v34];
      v11 = v17[v34];
      if ( *a2 == v11 )
        goto LABEL_4;
      if ( v11 != -4096 )
      {
        v54 = &v17[v34];
        v64 = 1;
        result = nullptr;
        while ( 1 )
        {
          if ( !result && v11 == -8192 )
            result = v54;
          v33 = v32 & (v64 + v33);
          v54 = &v17[2 * v33];
          v11 = *v54;
          if ( *a2 == *v54 )
            goto LABEL_45;
          if ( v11 == -4096 )
          {
LABEL_76:
            if ( result )
            {
              v11 = *result;
              goto LABEL_4;
            }
            result = v54;
            break;
          }
          ++v64;
        }
      }
LABEL_23:
      *(_DWORD *)(a1 + 8) = v9;
      return result;
    }
LABEL_85:
    ++*(_DWORD *)(a1 + 8);
    BUG();
  }
  if ( v8 - *(_DWORD *)(a1 + 12) - (unsigned int)v9 > v8 >> 3 )
  {
    v11 = *a3;
    result = a3;
    goto LABEL_4;
  }
  v35 = *(__int64 **)a1;
  v36 = ((((((((((v8 - 1) | ((unsigned __int64)(v8 - 1) >> 1)) >> 2) | (v8 - 1) | ((unsigned __int64)(v8 - 1) >> 1)) >> 4)
           | (((v8 - 1) | ((unsigned __int64)(v8 - 1) >> 1)) >> 2)
           | (v8 - 1)
           | ((unsigned __int64)(v8 - 1) >> 1)) >> 8)
         | (((((v8 - 1) | ((unsigned __int64)(v8 - 1) >> 1)) >> 2) | (v8 - 1) | ((unsigned __int64)(v8 - 1) >> 1)) >> 4)
         | (((v8 - 1) | ((unsigned __int64)(v8 - 1) >> 1)) >> 2)
         | (v8 - 1)
         | ((unsigned __int64)(v8 - 1) >> 1)) >> 16)
       | (((((((v8 - 1) | ((unsigned __int64)(v8 - 1) >> 1)) >> 2) | (v8 - 1) | ((unsigned __int64)(v8 - 1) >> 1)) >> 4)
         | (((v8 - 1) | ((unsigned __int64)(v8 - 1) >> 1)) >> 2)
         | (v8 - 1)
         | ((unsigned __int64)(v8 - 1) >> 1)) >> 8)
       | (((((v8 - 1) | ((unsigned __int64)(v8 - 1) >> 1)) >> 2) | (v8 - 1) | ((unsigned __int64)(v8 - 1) >> 1)) >> 4)
       | (((v8 - 1) | ((unsigned __int64)(v8 - 1) >> 1)) >> 2)
       | (v8 - 1)
       | ((unsigned __int64)(v8 - 1) >> 1))
      + 1;
  if ( (unsigned int)v36 < 0x40 )
    LODWORD(v36) = 64;
  *(_DWORD *)(a1 + 16) = v36;
  v37 = (__int64 *)sub_22300B0(16LL * (unsigned int)v36, 8, a3, v9, a5, a6);
  v38 = v37;
  *(_QWORD *)a1 = v37;
  if ( v35 )
  {
    v39 = *(unsigned int *)(a1 + 16);
    v40 = v37;
    v41 = 2LL * v8;
    *(_QWORD *)(a1 + 8) = 0;
    v42 = v39;
    v43 = &v35[v41];
    v44 = &v38[2 * v39];
    if ( v38 != v44 )
    {
      do
      {
        *v40 = -4096;
        v40 += 2;
      }
      while ( v44 != v40 );
    }
    v45 = v35;
    for ( k = v42 - 1; v43 != v45; v45 += 2 )
    {
      v26 = *v45;
      if ( *v45 != -8192 && v26 != -4096 )
      {
        if ( !v42 )
          goto LABEL_84;
        v47 = k & (((unsigned int)v26 >> 9) ^ ((unsigned int)v26 >> 4));
        v48 = &v38[2 * v47];
        v49 = *v48;
        if ( *v48 != v26 )
        {
          v62 = 1;
          v63 = nullptr;
          if ( v49 != -4096 )
          {
            while ( 1 )
            {
              if ( !v63 && v49 == -8192 )
                v63 = v48;
              v47 = k & (v62 + v47);
              v48 = &v38[2 * v47];
              v49 = *v48;
              if ( v26 == *v48 )
                break;
              if ( v49 == -4096 )
              {
                if ( v63 )
                  v48 = v63;
                break;
              }
              ++v62;
            }
          }
        }
        *v48 = v26;
        v50 = v45[1];
        ++*(_DWORD *)(a1 + 8);
        v48[1] = v50;
      }
    }
    operator delete(v35, v41 * 8, 8);
    v38 = *(__int64 **)a1;
    v51 = *(_DWORD *)(a1 + 16);
    LODWORD(v9) = *(_DWORD *)(a1 + 8) + 1;
  }
  else
  {
    v58 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v51 = v58;
    for ( m = &v37[2 * v58]; m != v37; v37 += 2 )
      *v37 = -4096;
    LODWORD(v9) = 1;
  }
  if ( !v51 )
    goto LABEL_85;
  v52 = v51 - 1;
  v53 = (v51 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  result = &v38[2 * v53];
  v11 = *result;
  if ( *a2 == *result )
    goto LABEL_4;
  if ( v11 == -4096 )
    goto LABEL_23;
  v54 = &v38[2 * (v52 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4)))];
  v55 = 1;
  result = nullptr;
  while ( 1 )
  {
    if ( !result && v11 == -8192 )
      result = v54;
    v53 = v52 & (v55 + v53);
    v54 = &v38[2 * v53];
    v11 = *v54;
    if ( *a2 == *v54 )
      break;
    if ( v11 == -4096 )
      goto LABEL_76;
    ++v55;
  }
LABEL_45:
  result = v54;
LABEL_4:
  *(_DWORD *)(a1 + 8) = v9;
  if ( v11 != -4096 )
    --*(_DWORD *)(a1 + 12);
  return result;
}
