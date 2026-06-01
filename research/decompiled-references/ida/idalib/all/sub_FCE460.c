unsigned __int64 __fastcall sub_FCE460(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r14
  int *v9; // r12
  int v10; // r13d
  int v11; // edx
  int *v12; // rsi
  int v13; // eax
  unsigned __int64 result; // rax
  int *v15; // rdi
  int v16; // eax
  __int64 v17; // rax
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  _DWORD *v24; // rcx
  int v25; // r10d
  int *v26; // rdi
  _DWORD *v27; // rdx
  int *v28; // rdx
  int i; // r13d
  int v30; // ecx
  unsigned int v31; // r9d
  _DWORD *v32; // r8
  int v33; // r11d
  int v34; // ecx
  __int64 v35; // rdx
  int v36; // ecx
  int *v37; // rdx
  int v38; // ecx
  unsigned int v39; // edx
  int v40; // edi
  int v41; // r9d
  int *v42; // r8
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rsi
  _DWORD *v49; // rcx
  int v50; // r10d
  _DWORD *v51; // rdx
  int *v52; // rdx
  int v53; // r15d
  int v54; // ecx
  unsigned int v55; // r9d
  _DWORD *v56; // r8
  int v57; // r11d
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  unsigned int v61; // r13d
  int v62; // edx
  int v63; // r8d
  int *v64; // rdi
  __int64 v65; // rdx
  int *v66; // rdx
  int v67; // r15d
  _DWORD *v68; // r14
  _DWORD *v69; // r14
  int v70; // [rsp+0h] [rbp-58h]
  __m128 v71[4]; // [rsp+10h] [rbp-48h] BYREF

  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(int **)a1;
  if ( !(_DWORD)v8 )
    goto LABEL_12;
  a4 = (unsigned int)(v8 - 1);
  v10 = 37 * a2;
  v11 = a4 & (37 * a2);
  v12 = &v9[2 * v11];
  v13 = *v12;
  if ( *v12 == a2 )
  {
LABEL_3:
    sub_FCE400(v71, v12, &v9[2 * v8], a1, 1);
    return v71[0].m128_u64[0] + 4;
  }
  a5 = 1;
  v15 = nullptr;
  if ( v13 != -1 )
  {
    while ( 1 )
    {
      if ( v13 == -2 && !v15 )
        v15 = v12;
      a6 = (unsigned int)(a5 + 1);
      v11 = a4 & (a5 + v11);
      v12 = &v9[2 * v11];
      v13 = *v12;
      if ( *v12 == a2 )
        goto LABEL_3;
      if ( v13 == -1 )
        break;
      a5 = (unsigned int)a6;
    }
    if ( v15 )
      v12 = v15;
  }
  v16 = *(_DWORD *)(a1 + 8) + 1;
  if ( 4 * v16 >= (unsigned int)(3 * v8) )
  {
LABEL_12:
    v19 = (((((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v8 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v8 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v8 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v8 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1);
    v20 = ((v19 >> 16) | v19) + 1;
    if ( (unsigned int)v20 < 0x40 )
      LODWORD(v20) = 64;
    *(_DWORD *)(a1 + 16) = v20;
    v21 = sub_22300B0(8LL * (unsigned int)v20, 4, 64, a4, a5, a6);
    *(_QWORD *)a1 = v21;
    if ( v9 )
    {
      v22 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v23 = 2LL * (unsigned int)v8;
      v24 = (_DWORD *)(v21 + 8 * v22);
      v25 = v22;
      v26 = &v9[v23];
      v27 = (_DWORD *)v21;
      if ( (_DWORD *)v21 != v24 )
      {
        do
        {
          *v27 = -1;
          v27 += 2;
        }
        while ( v24 != v27 );
      }
      v28 = v9;
      for ( i = v25 - 1; v26 != v28; v28 += 2 )
      {
        v30 = *v28;
        if ( (unsigned int)(*v28 + 2) > 1 )
        {
          if ( !v25 )
          {
            dword_0 = 0;
            BUG();
          }
          v31 = i & (37 * v30);
          v32 = (_DWORD *)(v21 + 8LL * v31);
          v33 = *v32;
          if ( *v32 != v30 )
          {
            v67 = 1;
            v68 = nullptr;
            if ( v33 != -1 )
            {
              while ( 1 )
              {
                if ( v33 == -2 && !v68 )
                  v68 = v32;
                v31 = i & (v67 + v31);
                v32 = (_DWORD *)(v21 + 8LL * v31);
                v33 = *v32;
                if ( v30 == *v32 )
                  break;
                if ( v33 == -1 )
                {
                  if ( v68 )
                    v32 = v68;
                  break;
                }
                ++v67;
              }
            }
          }
          *v32 = v30;
          v34 = v28[1];
          ++*(_DWORD *)(a1 + 8);
          v32[1] = v34;
        }
      }
      operator delete(v9, v23 * 4, 4);
      v9 = *(int **)a1;
      v36 = *(_DWORD *)(a1 + 16);
      v16 = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v35 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v9 = (int *)(v21 + 8 * v35);
      v36 = v35;
      if ( (int *)v21 != v9 )
      {
        v37 = (int *)v21;
        do
        {
          *v37 = -1;
          v37 += 2;
        }
        while ( v9 != v37 );
        v9 = (int *)v21;
      }
      v16 = 1;
    }
    if ( v36 )
    {
      v38 = v36 - 1;
      v39 = v38 & (37 * a2);
      v12 = &v9[2 * v39];
      v40 = *v12;
      if ( *v12 != a2 )
      {
        v41 = 1;
        v42 = nullptr;
        if ( v40 != -1 )
        {
          while ( 1 )
          {
            if ( !v42 && v40 == -2 )
              v42 = v12;
            v39 = v38 & (v41 + v39);
            v12 = &v9[2 * v39];
            v40 = *v12;
            if ( *v12 == a2 )
              break;
            if ( v40 == -1 )
            {
              if ( v42 )
                v12 = v42;
              goto LABEL_8;
            }
            ++v41;
          }
        }
      }
      goto LABEL_8;
    }
    goto LABEL_103;
  }
  if ( (int)v8 - *(_DWORD *)(a1 + 12) - v16 <= (unsigned int)v8 >> 3 )
  {
    v43 = (((a4 >> 1) | a4 | (((a4 >> 1) | a4) >> 2)) >> 4) | (a4 >> 1) | a4 | (((a4 >> 1) | a4) >> 2);
    v44 = v43 >> 8;
    v45 = (((v44 | v43) >> 16) | v44 | v43) + 1;
    if ( (unsigned int)v45 < 0x40 )
      LODWORD(v45) = 64;
    *(_DWORD *)(a1 + 16) = v45;
    v46 = sub_22300B0(8LL * (unsigned int)v45, 4, 64, v44, a5, a6);
    *(_QWORD *)a1 = v46;
    if ( v9 )
    {
      v47 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v48 = 2LL * (unsigned int)v8;
      v49 = (_DWORD *)(v46 + 8 * v47);
      v50 = v47;
      v51 = (_DWORD *)v46;
      if ( (_DWORD *)v46 != v49 )
      {
        do
        {
          *v51 = -1;
          v51 += 2;
        }
        while ( v49 != v51 );
      }
      v52 = v9;
      v53 = v50 - 1;
      do
      {
        v54 = *v52;
        if ( (unsigned int)(*v52 + 2) > 1 )
        {
          if ( !v50 )
          {
            dword_0 = 0;
            BUG();
          }
          v55 = v53 & (37 * v54);
          v56 = (_DWORD *)(v46 + 8LL * v55);
          v57 = *v56;
          if ( v54 != *v56 && v57 != -1 )
          {
            v70 = 1;
            v69 = nullptr;
            while ( 1 )
            {
              if ( !v69 && v57 == -2 )
                v69 = v56;
              v55 = v53 & (v70 + v55);
              v56 = (_DWORD *)(v46 + 8LL * v55);
              v57 = *v56;
              if ( v54 == *v56 )
                break;
              if ( v57 == -1 )
              {
                if ( v69 )
                  v56 = v69;
                break;
              }
              ++v70;
            }
          }
          *v56 = v54;
          v58 = v52[1];
          ++*(_DWORD *)(a1 + 8);
          v56[1] = v58;
        }
        v52 += 2;
      }
      while ( &v9[v48] != v52 );
      operator delete(v9, v48 * 4, 4);
      v9 = *(int **)a1;
      v59 = *(_DWORD *)(a1 + 16);
      v16 = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v65 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v9 = (int *)(v46 + 8 * v65);
      v59 = v65;
      if ( (int *)v46 != v9 )
      {
        v66 = (int *)v46;
        do
        {
          *v66 = -1;
          v66 += 2;
        }
        while ( v9 != v66 );
        v9 = (int *)v46;
      }
      v16 = 1;
    }
    if ( v59 )
    {
      v60 = v59 - 1;
      v61 = v60 & v10;
      v12 = &v9[2 * v61];
      v62 = *v12;
      if ( *v12 != a2 )
      {
        v63 = 1;
        v64 = nullptr;
        if ( v62 != -1 )
        {
          while ( 1 )
          {
            if ( !v64 && v62 == -2 )
              v64 = v12;
            v61 = v60 & (v63 + v61);
            v12 = &v9[2 * v61];
            v62 = *v12;
            if ( *v12 == a2 )
              break;
            if ( v62 == -1 )
            {
              if ( v64 )
                v12 = v64;
              goto LABEL_8;
            }
            ++v63;
          }
        }
      }
      goto LABEL_8;
    }
LABEL_103:
    ++*(_DWORD *)(a1 + 8);
    BUG();
  }
LABEL_8:
  *(_DWORD *)(a1 + 8) = v16;
  if ( *v12 != -1 )
    --*(_DWORD *)(a1 + 12);
  *v12 = a2;
  v17 = *(unsigned int *)(a1 + 16);
  *((_BYTE *)v12 + 4) = 0;
  sub_FCE400(v71, v12, &v9[2 * v17], a1, 1);
  v18 = v71[0].m128_u64[0];
  *(_BYTE *)(v18 + 4) = sub_FD30D0(*(_QWORD *)(a1 + 32), a2);
  result = v18 + 4;
  if ( a2 > 0x233B )
  {
    sub_FD3150(*(_QWORD *)(a1 + 32), v18 + 4, a2);
    return v18 + 4;
  }
  return result;
}
