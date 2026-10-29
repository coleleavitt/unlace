_QWORD *__fastcall sub_6BB160(__int64 a1, __int64 a2)
{
  int v2; // edx
  unsigned int v5; // r14d
  __int64 *v6; // r13
  unsigned __int64 v7; // rcx
  int v8; // r8d
  unsigned int v9; // r12d
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 *v12; // rdx
  __int64 v13; // rsi
  _QWORD *result; // rax
  _QWORD *v15; // rbp
  int v16; // esi
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  int v23; // edi
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 *v26; // r9
  __int64 *i; // rax
  __int64 v28; // rdx
  int v29; // ecx
  int v30; // edi
  __int64 v31; // r10
  int v32; // r14d
  _QWORD *v33; // r12
  __int64 v34; // r8
  _QWORD *v35; // rcx
  __int64 v36; // r11
  int v37; // edi
  unsigned int v38; // ecx
  __int64 v39; // r8
  int v40; // r10d
  __int64 *v41; // r9
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rdx
  int v46; // edi
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 *v49; // r9
  __int64 *v50; // rax
  __int64 v51; // rdx
  int v52; // edi
  int v53; // edi
  __int64 v54; // r11
  int v55; // r15d
  _QWORD *v56; // r14
  __int64 v57; // r8
  _QWORD *v58; // rcx
  __int64 v59; // r10
  int v60; // edi
  int v61; // r9d
  __int64 *v62; // r8
  unsigned int v63; // r12d
  __int64 v64; // rcx
  _QWORD *v65; // rcx
  _QWORD *v66; // rcx

  v2 = 0;
  v5 = *(_DWORD *)(a1 + 1640);
  v6 = *(__int64 **)(a1 + 1624);
  if ( !v5 )
    goto LABEL_22;
  v7 = v5 - 1;
  v8 = 1;
  v9 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
  v10 = nullptr;
  LODWORD(v11) = v7 & v9;
  v12 = &v6[2 * ((unsigned int)v7 & v9)];
  v13 = *v12;
  if ( *v12 == a2 )
  {
LABEL_3:
    result = (_QWORD *)v12[1];
    v15 = v12 + 1;
    if ( result )
      return result;
    goto LABEL_18;
  }
  while ( v13 != -4096 )
  {
    if ( v13 == -8192 && !v10 )
      v10 = v12;
    v11 = (unsigned int)v7 & ((_DWORD)v11 + v8);
    v12 = &v6[2 * v11];
    v13 = *v12;
    if ( *v12 == a2 )
      goto LABEL_3;
    ++v8;
  }
  if ( !v10 )
    v10 = v12;
  v2 = 2 * v5;
  v16 = *(_DWORD *)(a1 + 1632) + 1;
  if ( 4 * v16 >= 3 * v5 )
  {
LABEL_22:
    v18 = (((((((((unsigned int)(v2 - 1) | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1)) >> 2)
              | (unsigned int)(v2 - 1)
              | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1)) >> 4)
            | (((unsigned int)(v2 - 1) | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1)) >> 2)
            | (unsigned int)(v2 - 1)
            | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1)) >> 8)
          | (((((unsigned int)(v2 - 1) | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1)) >> 2)
            | (unsigned int)(v2 - 1)
            | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1)) >> 4)
          | (((unsigned int)(v2 - 1) | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1)) >> 2)
          | (unsigned int)(v2 - 1)
          | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1)) >> 16)
        | (((((((unsigned int)(v2 - 1) | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1)) >> 2)
            | (unsigned int)(v2 - 1)
            | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1)) >> 4)
          | (((unsigned int)(v2 - 1) | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1)) >> 2)
          | (unsigned int)(v2 - 1)
          | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1)) >> 8)
        | (((((unsigned int)(v2 - 1) | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1)) >> 2)
          | (unsigned int)(v2 - 1)
          | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1)) >> 4)
        | (((unsigned int)(v2 - 1) | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1)) >> 2)
        | (unsigned int)(v2 - 1)
        | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1);
    v19 = v18 + 1;
    if ( v19 < 0x40 )
      v19 = 64;
    *(_DWORD *)(a1 + 1640) = v19;
    v20 = sub_25CC9C0(16LL * v19, 8);
    v21 = *(unsigned int *)(a1 + 1640);
    *(_QWORD *)(a1 + 1624) = v20;
    v22 = (_QWORD *)v20;
    v23 = v21;
    v24 = 16 * v21;
    v25 = (_QWORD *)(v20 + v24);
    if ( v6 )
    {
      *(_QWORD *)(a1 + 1632) = 0;
      v26 = &v6[2 * v5];
      if ( v24 )
      {
        if ( (((_BYTE)v25 - (_BYTE)v22) & 0x10) == 0 || (*v22 = -4096, v22 += 2, v22 != v25) )
        {
          do
          {
            *v22 = -4096;
            v22 += 4;
            *(v22 - 2) = -4096;
          }
          while ( v22 != v25 );
        }
      }
      for ( i = v6; v26 != i; i += 2 )
      {
        v28 = *i;
        if ( *i != -4096 && v28 != -8192 )
        {
          v29 = *(_DWORD *)(a1 + 1640);
          if ( !v29 )
          {
            *(_QWORD *)&dword_0 = *i;
            BUG();
          }
          v30 = v29 - 1;
          v31 = *(_QWORD *)(a1 + 1624);
          v32 = 1;
          v33 = nullptr;
          LODWORD(v34) = (v29 - 1) & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
          v35 = (_QWORD *)(v31 + 16LL * (unsigned int)v34);
          v36 = *v35;
          if ( v28 != *v35 )
          {
            while ( v36 != -4096 )
            {
              if ( v36 == -8192 && !v33 )
                v33 = v35;
              v34 = v30 & (unsigned int)(v34 + v32);
              v35 = (_QWORD *)(v31 + 16 * v34);
              v36 = *v35;
              if ( v28 == *v35 )
                goto LABEL_34;
              ++v32;
            }
            if ( v33 )
              v35 = v33;
          }
LABEL_34:
          *v35 = v28;
          v35[1] = i[1];
          ++*(_DWORD *)(a1 + 1632);
        }
      }
      operator delete();
      v22 = *(_QWORD **)(a1 + 1624);
      v23 = *(_DWORD *)(a1 + 1640);
      v16 = *(_DWORD *)(a1 + 1632) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 1632) = 0;
      if ( v22 != v25 )
      {
        v65 = v22;
        if ( (((_BYTE)v25 - (_BYTE)v22) & 0x10) == 0 || (v65 = v22 + 2, *v22 = -4096, v22 + 2 != v25) )
        {
          do
          {
            *v65 = -4096;
            v65 += 4;
            *(v65 - 2) = -4096;
          }
          while ( v65 != v25 );
        }
      }
      v16 = 1;
    }
    if ( v23 )
    {
      v37 = v23 - 1;
      v38 = v37 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v10 = &v22[2 * v38];
      v39 = *v10;
      if ( *v10 != a2 )
      {
        v40 = 1;
        v41 = nullptr;
        while ( v39 != -4096 )
        {
          if ( v39 == -8192 && !v41 )
            v41 = v10;
          v38 = v37 & (v40 + v38);
          v10 = &v22[2 * v38];
          v39 = *v10;
          if ( *v10 == a2 )
            goto LABEL_15;
          ++v40;
        }
        if ( v41 )
          v10 = v41;
      }
      goto LABEL_15;
    }
    goto LABEL_104;
  }
  if ( v5 >> 3 >= v5 - *(_DWORD *)(a1 + 1636) - v16 )
  {
    v42 = (((((((((v7 | (v7 >> 1)) >> 2) | v7 | (v7 >> 1)) >> 4) | ((v7 | (v7 >> 1)) >> 2) | v7 | (v7 >> 1)) >> 8)
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
    if ( (unsigned int)v42 < 0x40 )
      LODWORD(v42) = 64;
    *(_DWORD *)(a1 + 1640) = v42;
    v43 = sub_25CC9C0(16LL * (unsigned int)v42, 8);
    v44 = *(unsigned int *)(a1 + 1640);
    *(_QWORD *)(a1 + 1624) = v43;
    v45 = (_QWORD *)v43;
    v46 = v44;
    v47 = 16 * v44;
    v48 = (_QWORD *)(v43 + v47);
    if ( v6 )
    {
      *(_QWORD *)(a1 + 1632) = 0;
      v49 = &v6[2 * v5];
      if ( v47 )
      {
        if ( (((_BYTE)v48 - (_BYTE)v45) & 0x10) == 0 || (*v45 = -4096, v45 += 2, v45 != v48) )
        {
          do
          {
            *v45 = -4096;
            v45 += 4;
            *(v45 - 2) = -4096;
          }
          while ( v45 != v48 );
        }
      }
      v50 = v6;
      do
      {
        v51 = *v50;
        if ( *v50 != -8192 && v51 != -4096 )
        {
          v52 = *(_DWORD *)(a1 + 1640);
          if ( !v52 )
          {
            *(_QWORD *)&dword_0 = *v50;
            BUG();
          }
          v53 = v52 - 1;
          v54 = *(_QWORD *)(a1 + 1624);
          v55 = 1;
          v56 = nullptr;
          LODWORD(v57) = v53 & (((unsigned int)v51 >> 9) ^ ((unsigned int)v51 >> 4));
          v58 = (_QWORD *)(v54 + 16LL * (unsigned int)v57);
          v59 = *v58;
          if ( *v58 != v51 )
          {
            while ( v59 != -4096 )
            {
              if ( v59 == -8192 && !v56 )
                v56 = v58;
              v57 = v53 & (unsigned int)(v57 + v55);
              v58 = (_QWORD *)(v54 + 16 * v57);
              v59 = *v58;
              if ( v51 == *v58 )
                goto LABEL_65;
              ++v55;
            }
            if ( v56 )
              v58 = v56;
          }
LABEL_65:
          *v58 = v51;
          v58[1] = v50[1];
          ++*(_DWORD *)(a1 + 1632);
        }
        v50 += 2;
      }
      while ( v49 != v50 );
      operator delete();
      v45 = *(_QWORD **)(a1 + 1624);
      v46 = *(_DWORD *)(a1 + 1640);
      v16 = *(_DWORD *)(a1 + 1632) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 1632) = 0;
      if ( v45 != v48 )
      {
        v66 = v45;
        if ( (((_BYTE)v48 - (_BYTE)v45) & 0x10) == 0 || (v66 = v45 + 2, *v45 = -4096, v45 + 2 != v48) )
        {
          do
          {
            *v66 = -4096;
            v66 += 4;
            *(v66 - 2) = -4096;
          }
          while ( v66 != v48 );
        }
      }
      v16 = 1;
    }
    if ( v46 )
    {
      v60 = v46 - 1;
      v61 = 1;
      v62 = nullptr;
      v63 = v60 & v9;
      v10 = &v45[2 * v63];
      v64 = *v10;
      if ( *v10 != a2 )
      {
        while ( v64 != -4096 )
        {
          if ( !v62 && v64 == -8192 )
            v62 = v10;
          v63 = v60 & (v61 + v63);
          v10 = &v45[2 * v63];
          v64 = *v10;
          if ( *v10 == a2 )
            goto LABEL_15;
          ++v61;
        }
        if ( v62 )
          v10 = v62;
      }
      goto LABEL_15;
    }
LABEL_104:
    *(_DWORD *)(a1 + 1632) = v16;
    BUG();
  }
LABEL_15:
  *(_DWORD *)(a1 + 1632) = v16;
  if ( *v10 != -4096 )
    --*(_DWORD *)(a1 + 1636);
  v10[1] = 0;
  *v10 = a2;
  v15 = v10 + 1;
LABEL_18:
  v17 = *(_QWORD *)(a1 + 2192);
  *(_QWORD *)(a1 + 2272) += 48LL;
  result = (_QWORD *)((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( *(_QWORD *)(a1 + 2200) >= (unsigned __int64)(result + 6) && v17 )
    *(_QWORD *)(a1 + 2192) = result + 6;
  else
    result = (_QWORD *)sub_6A76A0(a1 + 2192, 48, 3);
  *result = result + 2;
  result[1] = 0x400000000LL;
  *v15 = result;
  return result;
}

