unsigned __int64 __fastcall sub_FAA720(
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
  _DWORD *v23; // rcx
  int v24; // r10d
  int *v25; // rdi
  _DWORD *v26; // rdx
  int *v27; // rdx
  int i; // r13d
  int v29; // ecx
  unsigned int v30; // r9d
  _DWORD *v31; // r8
  int v32; // r11d
  int v33; // ecx
  __int64 v34; // rdx
  int v35; // ecx
  int *v36; // rdx
  int v37; // ecx
  unsigned int v38; // edx
  int v39; // edi
  int v40; // r9d
  int *v41; // r8
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  _DWORD *v47; // rcx
  int v48; // r10d
  int *v49; // rdi
  _DWORD *v50; // rdx
  int *v51; // rdx
  int v52; // r15d
  int v53; // ecx
  unsigned int v54; // r9d
  _DWORD *v55; // r8
  int v56; // r11d
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  unsigned int v60; // r13d
  int v61; // edx
  int v62; // r8d
  int *v63; // rdi
  __int64 v64; // rdx
  int *v65; // rdx
  int v66; // r15d
  _DWORD *v67; // r14
  _DWORD *v68; // r14
  int v69; // [rsp+0h] [rbp-58h]
  __m128 v70[4]; // [rsp+10h] [rbp-48h] BYREF

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
    sub_FAA6C0(v70, v12, &v9[2 * v8], a1, 1);
    return v70[0].m128_u64[0] + 4;
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
    v21 = sub_220C370(8LL * (unsigned int)v20, 4, 64, a4, a5, a6);
    *(_QWORD *)a1 = v21;
    if ( v9 )
    {
      v22 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v23 = (_DWORD *)(v21 + 8 * v22);
      v24 = v22;
      v25 = &v9[2 * (unsigned int)v8];
      v26 = (_DWORD *)v21;
      if ( (_DWORD *)v21 != v23 )
      {
        do
        {
          *v26 = -1;
          v26 += 2;
        }
        while ( v23 != v26 );
      }
      v27 = v9;
      for ( i = v24 - 1; v25 != v27; v27 += 2 )
      {
        v29 = *v27;
        if ( (unsigned int)(*v27 + 2) > 1 )
        {
          if ( !v24 )
          {
            dword_0 = 0;
            BUG();
          }
          v30 = i & (37 * v29);
          v31 = (_DWORD *)(v21 + 8LL * v30);
          v32 = *v31;
          if ( *v31 != v29 )
          {
            v66 = 1;
            v67 = nullptr;
            if ( v32 != -1 )
            {
              while ( 1 )
              {
                if ( v32 == -2 && !v67 )
                  v67 = v31;
                v30 = i & (v66 + v30);
                v31 = (_DWORD *)(v21 + 8LL * v30);
                v32 = *v31;
                if ( v29 == *v31 )
                  break;
                if ( v32 == -1 )
                {
                  if ( v67 )
                    v31 = v67;
                  break;
                }
                ++v66;
              }
            }
          }
          *v31 = v29;
          v33 = v27[1];
          ++*(_DWORD *)(a1 + 8);
          v31[1] = v33;
        }
      }
      operator delete();
      v9 = *(int **)a1;
      v35 = *(_DWORD *)(a1 + 16);
      v16 = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v34 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v9 = (int *)(v21 + 8 * v34);
      v35 = v34;
      if ( (int *)v21 != v9 )
      {
        v36 = (int *)v21;
        do
        {
          *v36 = -1;
          v36 += 2;
        }
        while ( v9 != v36 );
        v9 = (int *)v21;
      }
      v16 = 1;
    }
    if ( v35 )
    {
      v37 = v35 - 1;
      v38 = v37 & (37 * a2);
      v12 = &v9[2 * v38];
      v39 = *v12;
      if ( *v12 != a2 )
      {
        v40 = 1;
        v41 = nullptr;
        if ( v39 != -1 )
        {
          while ( 1 )
          {
            if ( !v41 && v39 == -2 )
              v41 = v12;
            v38 = v37 & (v40 + v38);
            v12 = &v9[2 * v38];
            v39 = *v12;
            if ( *v12 == a2 )
              break;
            if ( v39 == -1 )
            {
              if ( v41 )
                v12 = v41;
              goto LABEL_8;
            }
            ++v40;
          }
        }
      }
      goto LABEL_8;
    }
    goto LABEL_103;
  }
  if ( (int)v8 - *(_DWORD *)(a1 + 12) - v16 <= (unsigned int)v8 >> 3 )
  {
    v42 = (((a4 >> 1) | a4 | (((a4 >> 1) | a4) >> 2)) >> 4) | (a4 >> 1) | a4 | (((a4 >> 1) | a4) >> 2);
    v43 = v42 >> 8;
    v44 = (((v43 | v42) >> 16) | v43 | v42) + 1;
    if ( (unsigned int)v44 < 0x40 )
      LODWORD(v44) = 64;
    *(_DWORD *)(a1 + 16) = v44;
    v45 = sub_220C370(8LL * (unsigned int)v44, 4, 64, v43, a5, a6);
    *(_QWORD *)a1 = v45;
    if ( v9 )
    {
      v46 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v47 = (_DWORD *)(v45 + 8 * v46);
      v48 = v46;
      v49 = &v9[2 * (unsigned int)v8];
      v50 = (_DWORD *)v45;
      if ( (_DWORD *)v45 != v47 )
      {
        do
        {
          *v50 = -1;
          v50 += 2;
        }
        while ( v47 != v50 );
      }
      v51 = v9;
      v52 = v48 - 1;
      do
      {
        v53 = *v51;
        if ( (unsigned int)(*v51 + 2) > 1 )
        {
          if ( !v48 )
          {
            dword_0 = 0;
            BUG();
          }
          v54 = v52 & (37 * v53);
          v55 = (_DWORD *)(v45 + 8LL * v54);
          v56 = *v55;
          if ( v53 != *v55 && v56 != -1 )
          {
            v69 = 1;
            v68 = nullptr;
            while ( 1 )
            {
              if ( !v68 && v56 == -2 )
                v68 = v55;
              v54 = v52 & (v69 + v54);
              v55 = (_DWORD *)(v45 + 8LL * v54);
              v56 = *v55;
              if ( v53 == *v55 )
                break;
              if ( v56 == -1 )
              {
                if ( v68 )
                  v55 = v68;
                break;
              }
              ++v69;
            }
          }
          *v55 = v53;
          v57 = v51[1];
          ++*(_DWORD *)(a1 + 8);
          v55[1] = v57;
        }
        v51 += 2;
      }
      while ( v49 != v51 );
      operator delete();
      v9 = *(int **)a1;
      v58 = *(_DWORD *)(a1 + 16);
      v16 = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v64 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v9 = (int *)(v45 + 8 * v64);
      v58 = v64;
      if ( (int *)v45 != v9 )
      {
        v65 = (int *)v45;
        do
        {
          *v65 = -1;
          v65 += 2;
        }
        while ( v9 != v65 );
        v9 = (int *)v45;
      }
      v16 = 1;
    }
    if ( v58 )
    {
      v59 = v58 - 1;
      v60 = v59 & v10;
      v12 = &v9[2 * v60];
      v61 = *v12;
      if ( *v12 != a2 )
      {
        v62 = 1;
        v63 = nullptr;
        if ( v61 != -1 )
        {
          while ( 1 )
          {
            if ( !v63 && v61 == -2 )
              v63 = v12;
            v60 = v59 & (v62 + v60);
            v12 = &v9[2 * v60];
            v61 = *v12;
            if ( *v12 == a2 )
              break;
            if ( v61 == -1 )
            {
              if ( v63 )
                v12 = v63;
              goto LABEL_8;
            }
            ++v62;
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
  sub_FAA6C0(v70, v12, &v9[2 * v17], a1, 1);
  v18 = v70[0].m128_u64[0];
  *(_BYTE *)(v18 + 4) = sub_FAF390(*(_QWORD *)(a1 + 32), a2);
  result = v18 + 4;
  if ( a2 > 0x233B )
  {
    sub_FAF410(*(_QWORD *)(a1 + 32), v18 + 4, a2);
    return v18 + 4;
  }
  return result;
}

