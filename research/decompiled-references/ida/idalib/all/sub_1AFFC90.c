__int64 __fastcall sub_1AFFC90(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  unsigned int v8; // r13d
  _QWORD *v9; // rbp
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  unsigned int v12; // eax
  _QWORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rbp
  __int64 v24; // r12
  _QWORD *v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rdx
  __int64 v31; // rsi
  int v32; // r10d
  _QWORD *v33; // r9
  _QWORD *v34; // rcx
  _QWORD *v35; // rdx
  int i; // r13d
  __int64 v37; // rcx
  unsigned int v38; // r8d
  __int64 v39; // rdi
  __int64 v40; // r11
  int v41; // ecx
  int v42; // ecx
  int v43; // r8d
  unsigned int v44; // edi
  __int64 v45; // rbp
  _QWORD *v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // rdx
  __int64 v52; // rsi
  int v53; // r10d
  _QWORD *v54; // rcx
  _QWORD *v55; // rdx
  int v56; // r13d
  unsigned int v57; // r8d
  __int64 v58; // rdi
  __int64 v59; // r11
  int v60; // ecx
  int v61; // ecx
  int v62; // r8d
  unsigned int v63; // edi
  __int64 v64; // rbp
  _QWORD *v65; // rdx
  int v66; // r15d
  __int64 v67; // r14
  int v68; // r15d
  __int64 v69; // r14
  _QWORD *v70; // r10
  int v71; // ecx
  _QWORD *v72; // r9
  int v73; // r10d
  __m128 v74[4]; // [rsp+10h] [rbp-48h] BYREF

  v8 = *(_DWORD *)(a1 + 16);
  v9 = *(_QWORD **)a1;
  if ( v8 )
  {
    v10 = *a2;
    v11 = v8 - 1;
    v12 = v11 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
    v13 = &v9[2 * v12];
    v14 = *v13;
    if ( v10 == *v13 )
    {
LABEL_3:
      sub_1AFF290(v74, v13, &v9[2 * v8], a1, 1);
      v15 = *(unsigned int *)(v74[0].m128_u64[0] + 8);
      return *(_QWORD *)(a1 + 24) + 16 * v15 + 8;
    }
    v17 = 1;
    a6 = nullptr;
    if ( v14 != -4096 )
    {
      while ( 1 )
      {
        if ( v14 == -8192 && !a6 )
          a6 = v13;
        v12 = v11 & (v17 + v12);
        v13 = &v9[2 * v12];
        v14 = *v13;
        if ( v10 == *v13 )
          goto LABEL_3;
        if ( v14 == -4096 )
          break;
        ++v17;
      }
      if ( a6 )
        v13 = a6;
    }
    a4 = 3 * v8;
    v18 = *(_DWORD *)(a1 + 8) + 1;
    a5 = (unsigned int)(4 * v18);
    if ( (unsigned int)a5 < (unsigned int)a4 )
    {
      v19 = v8 - *(_DWORD *)(a1 + 12) - v18;
      v20 = v8 >> 3;
      if ( (unsigned int)v19 > (unsigned int)v20 )
      {
LABEL_8:
        v21 = *v13;
        goto LABEL_9;
      }
      v47 = (((v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2)) >> 4) | (v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2);
      v48 = ((((v47 >> 8) | v47) >> 16) | (v47 >> 8) | v47) + 1;
      if ( (unsigned int)v48 < 0x40 )
        LODWORD(v48) = 64;
      *(_DWORD *)(a1 + 16) = v48;
      v49 = sub_22300B0(16LL * (unsigned int)v48, 8, 64, v19, v20, a6);
      *(_QWORD *)a1 = v49;
      if ( v9 )
      {
        v50 = *(unsigned int *)(a1 + 16);
        v51 = (_QWORD *)v49;
        v52 = 2LL * v8;
        *(_QWORD *)(a1 + 8) = 0;
        v53 = v50;
        v54 = (_QWORD *)(v49 + 16 * v50);
        if ( (_QWORD *)v49 != v54 )
        {
          do
          {
            *v51 = -4096;
            v51 += 2;
          }
          while ( v54 != v51 );
        }
        v55 = v9;
        v56 = v53 - 1;
        do
        {
          v37 = *v55;
          if ( *v55 != -4096 && v37 != -8192 )
          {
            if ( !v53 )
              goto LABEL_109;
            v57 = v56 & (((unsigned int)v37 >> 9) ^ ((unsigned int)v37 >> 4));
            v58 = v49 + 16LL * v57;
            v59 = *(_QWORD *)v58;
            if ( *(_QWORD *)v58 != v37 )
            {
              v68 = 1;
              v69 = 0;
              if ( v59 != -4096 )
              {
                while ( 1 )
                {
                  if ( v59 == -8192 && !v69 )
                    v69 = v58;
                  v57 = v56 & (v68 + v57);
                  v58 = v49 + 16LL * v57;
                  v59 = *(_QWORD *)v58;
                  if ( v37 == *(_QWORD *)v58 )
                    break;
                  if ( v59 == -4096 )
                  {
                    if ( v69 )
                      v58 = v69;
                    break;
                  }
                  ++v68;
                }
              }
            }
            *(_QWORD *)v58 = v37;
            v60 = *((_DWORD *)v55 + 2);
            ++*(_DWORD *)(a1 + 8);
            *(_DWORD *)(v58 + 8) = v60;
          }
          v55 += 2;
        }
        while ( &v9[v52] != v55 );
        operator delete(v9, v52 * 8, 8);
        v9 = *(_QWORD **)a1;
        v61 = *(_DWORD *)(a1 + 16);
        v18 = *(_DWORD *)(a1 + 8) + 1;
      }
      else
      {
        v64 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v61 = v64;
        v9 = (_QWORD *)(v49 + 16 * v64);
        if ( (_QWORD *)v49 != v9 )
        {
          v65 = (_QWORD *)v49;
          do
          {
            *v65 = -4096;
            v65 += 2;
          }
          while ( v9 != v65 );
          v9 = (_QWORD *)v49;
        }
        v18 = 1;
      }
      if ( v61 )
      {
        v62 = v61 - 1;
        v63 = (v61 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
        v13 = &v9[2 * v63];
        v10 = *v13;
        v21 = *v13;
        if ( *a2 != *v13 )
        {
          if ( v10 == -4096 )
          {
            v10 = *a2;
            goto LABEL_30;
          }
          v70 = &v9[2 * (v62 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4)))];
          v71 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v10 == -8192 && !v13 )
              v13 = v70;
            v63 = v62 & (v71 + v63);
            v70 = &v9[2 * v63];
            v10 = *v70;
            if ( *a2 == *v70 )
            {
              v21 = *v70;
              v13 = &v9[2 * v63];
              goto LABEL_9;
            }
            if ( v10 == -4096 )
              break;
            ++v71;
          }
          if ( !v13 )
          {
            v10 = *a2;
            v13 = &v9[2 * v63];
            goto LABEL_30;
          }
          v21 = *v13;
          v10 = *a2;
        }
LABEL_9:
        *(_DWORD *)(a1 + 8) = v18;
        if ( v21 != -4096 )
          --*(_DWORD *)(a1 + 12);
        goto LABEL_11;
      }
LABEL_108:
      ++*(_DWORD *)(a1 + 8);
      BUG();
    }
  }
  v26 = (((((((2 * v8 - 1) | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 2)
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
  v27 = ((v26 >> 16) | v26) + 1;
  if ( (unsigned int)v27 < 0x40 )
    LODWORD(v27) = 64;
  *(_DWORD *)(a1 + 16) = v27;
  v28 = sub_22300B0(16LL * (unsigned int)v27, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = v28;
  if ( v9 )
  {
    v29 = *(unsigned int *)(a1 + 16);
    v30 = (_QWORD *)v28;
    v31 = 2LL * v8;
    *(_QWORD *)(a1 + 8) = 0;
    v32 = v29;
    v33 = &v9[v31];
    v34 = (_QWORD *)(v28 + 16 * v29);
    if ( (_QWORD *)v28 != v34 )
    {
      do
      {
        *v30 = -4096;
        v30 += 2;
      }
      while ( v34 != v30 );
    }
    v35 = v9;
    for ( i = v32 - 1; v33 != v35; v35 += 2 )
    {
      v37 = *v35;
      if ( *v35 != -8192 && v37 != -4096 )
      {
        if ( !v32 )
        {
LABEL_109:
          *(_QWORD *)&dword_0 = v37;
          BUG();
        }
        v38 = i & (((unsigned int)v37 >> 9) ^ ((unsigned int)v37 >> 4));
        v39 = v28 + 16LL * v38;
        v40 = *(_QWORD *)v39;
        if ( v37 != *(_QWORD *)v39 )
        {
          v66 = 1;
          v67 = 0;
          if ( v40 != -4096 )
          {
            while ( 1 )
            {
              if ( !v67 && v40 == -8192 )
                v67 = v39;
              v38 = i & (v66 + v38);
              v39 = v28 + 16LL * v38;
              v40 = *(_QWORD *)v39;
              if ( v37 == *(_QWORD *)v39 )
                break;
              if ( v40 == -4096 )
              {
                if ( v67 )
                  v39 = v67;
                break;
              }
              ++v66;
            }
          }
        }
        *(_QWORD *)v39 = v37;
        v41 = *((_DWORD *)v35 + 2);
        ++*(_DWORD *)(a1 + 8);
        *(_DWORD *)(v39 + 8) = v41;
      }
    }
    operator delete(v9, v31 * 8, 8);
    v9 = *(_QWORD **)a1;
    v42 = *(_DWORD *)(a1 + 16);
    v18 = *(_DWORD *)(a1 + 8) + 1;
  }
  else
  {
    v45 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v42 = v45;
    v9 = (_QWORD *)(v28 + 16 * v45);
    if ( (_QWORD *)v28 != v9 )
    {
      v46 = (_QWORD *)v28;
      do
      {
        *v46 = -4096;
        v46 += 2;
      }
      while ( v9 != v46 );
      v9 = (_QWORD *)v28;
    }
    v18 = 1;
  }
  if ( !v42 )
    goto LABEL_108;
  v10 = *a2;
  v43 = v42 - 1;
  v44 = (v42 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  v13 = &v9[2 * v44];
  v21 = *v13;
  if ( *v13 == *a2 )
    goto LABEL_9;
  if ( v21 != -4096 )
  {
    v72 = &v9[2 * (v43 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4)))];
    v73 = 1;
    v13 = nullptr;
    while ( 1 )
    {
      if ( v21 == -8192 && !v13 )
        v13 = v72;
      v44 = v43 & (v73 + v44);
      v72 = &v9[2 * v44];
      v21 = *v72;
      if ( v10 == *v72 )
      {
        v13 = &v9[2 * v44];
        goto LABEL_9;
      }
      if ( v21 == -4096 )
        break;
      ++v73;
    }
    if ( v13 )
      goto LABEL_8;
    v13 = &v9[2 * v44];
  }
LABEL_30:
  *(_DWORD *)(a1 + 8) = v18;
LABEL_11:
  *v13 = v10;
  *((_DWORD *)v13 + 2) = 0;
  sub_1AFF290(v74, v13, &v9[2 * *(unsigned int *)(a1 + 16)], a1, 1);
  v22 = *(unsigned int *)(a1 + 32);
  v23 = v74[0].m128_u64[0];
  v24 = *a2;
  if ( v22 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
  {
    sub_2237220(a1 + 24, a1 + 40, v22 + 1, 16);
    v22 = *(unsigned int *)(a1 + 32);
  }
  v25 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 16 * v22);
  *v25 = v24;
  v25[1] = 0;
  v15 = *(unsigned int *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = v15 + 1;
  *(_DWORD *)(v23 + 8) = v15;
  return *(_QWORD *)(a1 + 24) + 16 * v15 + 8;
}
