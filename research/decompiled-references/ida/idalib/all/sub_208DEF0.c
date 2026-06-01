const char *__fastcall sub_208DEF0(__int64 a1)
{
  _QWORD *v3; // rcx
  __int64 v4; // rbp
  _QWORD *v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  __int64 v8; // r13
  unsigned __int64 v9; // rsi
  unsigned int v10; // r12d
  unsigned int v11; // edx
  __int64 v12; // rax
  int v13; // edi
  int v14; // edx
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  int v21; // r10d
  __int64 v22; // r8
  _QWORD *v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // rdx
  int i; // r12d
  __int64 v27; // rcx
  unsigned int v28; // edi
  __int64 v29; // r9
  __int64 v30; // r11
  __m128i v31; // xmm0
  int v32; // esi
  int v33; // r8d
  unsigned int v34; // edi
  int v35; // r10d
  _QWORD *v36; // r9
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rsi
  int v43; // r10d
  __int64 v44; // r8
  _QWORD *v45; // rcx
  _QWORD *v46; // rdx
  __int64 v47; // rdx
  int v48; // r15d
  __int64 v49; // rcx
  __int64 v50; // r9
  __int64 v51; // r11
  __m128i v52; // xmm1
  int v53; // esi
  int v54; // edi
  unsigned int v55; // r12d
  int v56; // r9d
  _QWORD *v57; // r8
  __int64 v58; // rdx
  _QWORD *v59; // rcx
  _QWORD *v60; // rdx
  __int64 v61; // rdx
  _QWORD *v62; // rcx
  _QWORD *v63; // rdx
  int v64; // r15d
  __int64 v65; // r14
  __int64 v66; // r14
  int v67; // [rsp+0h] [rbp-44h]

  if ( *(char *)(a1 + 33) >= 0 )
    return &byte_22F0C30;
  v4 = *(_QWORD *)sub_20CB0D0(a1);
  v7 = *(unsigned int *)(v4 + 2800);
  v8 = *(_QWORD *)(v4 + 2784);
  if ( !(_DWORD)v7 )
    goto LABEL_13;
  v9 = (unsigned int)(v7 - 1);
  v10 = ((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4);
  v11 = v9 & v10;
  v3 = (_QWORD *)(v8 + 24LL * ((unsigned int)v9 & v10));
  v12 = *v3;
  if ( a1 == *v3 )
    return (const char *)v3[1];
  v13 = 1;
  v5 = nullptr;
  if ( v12 != -4096 )
  {
    while ( 1 )
    {
      if ( v12 == -8192 && !v5 )
        v5 = v3;
      v6 = (unsigned int)(v13 + 1);
      v11 = v9 & (v13 + v11);
      v3 = (_QWORD *)(v8 + 24LL * v11);
      v12 = *v3;
      if ( a1 == *v3 )
        return (const char *)v3[1];
      if ( v12 == -4096 )
        break;
      ++v13;
    }
    if ( v5 )
      v3 = v5;
  }
  v14 = *(_DWORD *)(v4 + 2792) + 1;
  if ( 4 * v14 >= (unsigned int)(3 * v7) )
  {
LABEL_13:
    v16 = (((((((unsigned int)(2 * v7 - 1) | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v7 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v7 - 1) | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v7 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v7 - 1) | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v7 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v7 - 1) | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v7 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1);
    v17 = ((v16 >> 16) | v16) + 1;
    if ( (unsigned int)v17 < 0x40 )
      LODWORD(v17) = 64;
    *(_DWORD *)(v4 + 2800) = v17;
    v18 = sub_22300B0(24LL * (unsigned int)v17, 8, 64, v3, v5, v6);
    *(_QWORD *)(v4 + 2784) = v18;
    if ( v8 )
    {
      v19 = *(unsigned int *)(v4 + 2800);
      *(_QWORD *)(v4 + 2792) = 0;
      v20 = 24 * v7;
      v21 = v19;
      v22 = v8 + 24 * v7;
      v23 = (_QWORD *)(v18 + 24 * v19);
      v24 = (_QWORD *)v18;
      if ( (_QWORD *)v18 != v23 )
      {
        do
        {
          *v24 = -4096;
          v24 += 3;
        }
        while ( v23 != v24 );
      }
      v25 = v8;
      for ( i = v21 - 1; v22 != v25; v25 += 24 )
      {
        v27 = *(_QWORD *)v25;
        if ( *(_QWORD *)v25 != -8192 && v27 != -4096 )
        {
          if ( !v21 )
          {
            *(_QWORD *)&dword_0 = *(_QWORD *)v25;
            BUG();
          }
          v28 = i & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
          v29 = v18 + 24LL * v28;
          v30 = *(_QWORD *)v29;
          if ( *(_QWORD *)v29 != v27 )
          {
            v64 = 1;
            v65 = 0;
            if ( v30 != -4096 )
            {
              while ( 1 )
              {
                if ( v30 == -8192 && !v65 )
                  v65 = v29;
                v28 = i & (v64 + v28);
                v29 = v18 + 24LL * v28;
                v30 = *(_QWORD *)v29;
                if ( v27 == *(_QWORD *)v29 )
                  break;
                if ( v30 == -4096 )
                {
                  if ( v65 )
                    v29 = v65;
                  break;
                }
                ++v64;
              }
            }
          }
          v31 = _mm_loadu_si128((const __m128i *)(v25 + 8));
          *(_QWORD *)v29 = v27;
          *(__m128i *)(v29 + 8) = v31;
          ++*(_DWORD *)(v4 + 2792);
        }
      }
      operator delete(v8, v20, 8);
      v18 = *(_QWORD *)(v4 + 2784);
      v32 = *(_DWORD *)(v4 + 2800);
      v14 = *(_DWORD *)(v4 + 2792) + 1;
    }
    else
    {
      v58 = *(unsigned int *)(v4 + 2800);
      *(_QWORD *)(v4 + 2792) = 0;
      v32 = v58;
      v59 = (_QWORD *)(v18 + 24 * v58);
      if ( (_QWORD *)v18 != v59 )
      {
        v60 = (_QWORD *)v18;
        do
        {
          *v60 = -4096;
          v60 += 3;
        }
        while ( v59 != v60 );
      }
      v14 = 1;
    }
    if ( v32 )
    {
      v33 = v32 - 1;
      v34 = (v32 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
      v3 = (_QWORD *)(v18 + 24LL * v34);
      v15 = *v3;
      if ( a1 != *v3 )
      {
        v35 = 1;
        v36 = nullptr;
        if ( v15 != -4096 )
        {
          while ( 1 )
          {
            if ( v15 == -8192 && !v36 )
              v36 = v3;
            v34 = v33 & (v35 + v34);
            v3 = (_QWORD *)(v18 + 24LL * v34);
            v15 = *v3;
            if ( a1 == *v3 )
              goto LABEL_10;
            if ( v15 == -4096 )
            {
              if ( !v36 )
                goto LABEL_29;
              v15 = *v36;
              v3 = v36;
              goto LABEL_10;
            }
            ++v35;
          }
        }
        goto LABEL_29;
      }
LABEL_10:
      *(_DWORD *)(v4 + 2792) = v14;
      if ( v15 != -4096 )
        --*(_DWORD *)(v4 + 2796);
      goto LABEL_12;
    }
LABEL_102:
    ++*(_DWORD *)(v4 + 2792);
    BUG();
  }
  if ( (int)v7 - *(_DWORD *)(v4 + 2796) - v14 > (unsigned int)v7 >> 3 )
  {
    v15 = *v3;
    goto LABEL_10;
  }
  v37 = (((v9 >> 1) | v9 | (((v9 >> 1) | v9) >> 2)) >> 4) | (v9 >> 1) | v9 | (((v9 >> 1) | v9) >> 2);
  v38 = ((((v37 >> 8) | v37) >> 16) | (v37 >> 8) | v37) + 1;
  if ( (unsigned int)v38 < 0x40 )
    LODWORD(v38) = 64;
  *(_DWORD *)(v4 + 2800) = v38;
  v39 = sub_22300B0(24LL * (unsigned int)v38, 8, 64, v3, v5, v6);
  *(_QWORD *)(v4 + 2784) = v39;
  if ( v8 )
  {
    v40 = *(unsigned int *)(v4 + 2800);
    *(_QWORD *)(v4 + 2792) = 0;
    v41 = -4096;
    v42 = 24 * v7;
    v43 = v40;
    v44 = v8 + 24 * v7;
    v45 = (_QWORD *)(v39 + 24 * v40);
    v46 = (_QWORD *)v39;
    if ( (_QWORD *)v39 != v45 )
    {
      do
      {
        *v46 = -4096;
        v46 += 3;
      }
      while ( v45 != v46 );
    }
    v47 = v8;
    v48 = v43 - 1;
    do
    {
      v49 = *(_QWORD *)v47;
      if ( *(_QWORD *)v47 != -4096 && v49 != -8192 )
      {
        if ( !v43 )
          sub_2EB590(v41, v42, v47, v49);
        v41 = v48 & (((unsigned int)v49 >> 9) ^ ((unsigned int)v49 >> 4));
        v50 = v39 + 24 * v41;
        v51 = *(_QWORD *)v50;
        if ( v49 != *(_QWORD *)v50 && v51 != -4096 )
        {
          v67 = 1;
          v66 = 0;
          while ( 1 )
          {
            if ( v51 == -8192 && !v66 )
              v66 = v50;
            v41 = v48 & (unsigned int)(v67 + v41);
            v50 = v39 + 24LL * (unsigned int)v41;
            v51 = *(_QWORD *)v50;
            if ( v49 == *(_QWORD *)v50 )
              break;
            if ( v51 == -4096 )
            {
              if ( v66 )
                v50 = v66;
              break;
            }
            ++v67;
          }
        }
        v52 = _mm_loadu_si128((const __m128i *)(v47 + 8));
        *(_QWORD *)v50 = v49;
        *(__m128i *)(v50 + 8) = v52;
        ++*(_DWORD *)(v4 + 2792);
      }
      v47 += 24;
    }
    while ( v44 != v47 );
    operator delete(v8, v42, 8);
    v39 = *(_QWORD *)(v4 + 2784);
    v53 = *(_DWORD *)(v4 + 2800);
    v14 = *(_DWORD *)(v4 + 2792) + 1;
  }
  else
  {
    v61 = *(unsigned int *)(v4 + 2800);
    *(_QWORD *)(v4 + 2792) = 0;
    v53 = v61;
    v62 = (_QWORD *)(v39 + 24 * v61);
    if ( (_QWORD *)v39 != v62 )
    {
      v63 = (_QWORD *)v39;
      do
      {
        *v63 = -4096;
        v63 += 3;
      }
      while ( v62 != v63 );
    }
    v14 = 1;
  }
  if ( !v53 )
    goto LABEL_102;
  v54 = v53 - 1;
  v55 = (v53 - 1) & v10;
  v3 = (_QWORD *)(v39 + 24LL * v55);
  v15 = *v3;
  if ( a1 == *v3 )
    goto LABEL_10;
  v56 = 1;
  v57 = nullptr;
  if ( v15 != -4096 )
  {
    while ( 1 )
    {
      if ( v15 == -8192 && !v57 )
        v57 = v3;
      v55 = v54 & (v56 + v55);
      v3 = (_QWORD *)(v39 + 24LL * v55);
      v15 = *v3;
      if ( a1 == *v3 )
        goto LABEL_10;
      if ( v15 == -4096 )
      {
        if ( !v57 )
          break;
        v15 = *v57;
        v3 = v57;
        goto LABEL_10;
      }
      ++v56;
    }
  }
LABEL_29:
  *(_DWORD *)(v4 + 2792) = v14;
LABEL_12:
  *v3 = a1;
  v3[1] = 0;
  v3[2] = 0;
  return nullptr;
}
