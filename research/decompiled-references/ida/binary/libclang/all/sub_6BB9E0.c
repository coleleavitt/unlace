__int64 *__fastcall sub_6BB9E0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rbp
  int v14; // eax
  __int64 *v15; // r14
  unsigned __int64 v16; // rcx
  int v17; // r8d
  __int64 *v18; // rdx
  unsigned int v19; // r13d
  unsigned int v20; // edi
  __int64 *v21; // rax
  __int64 v22; // rsi
  __int64 *result; // rax
  int v24; // esi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rcx
  int v30; // edi
  __int64 v31; // rcx
  _QWORD *v32; // rdx
  __int64 *v33; // r9
  __int64 *i; // rax
  __int64 v35; // rdx
  int v36; // edi
  int v37; // edi
  __int64 v38; // r11
  int v39; // r15d
  _QWORD *v40; // r13
  __int64 v41; // r8
  _QWORD *v42; // rcx
  __int64 v43; // r10
  int v44; // edi
  unsigned int v45; // ecx
  __int64 v46; // r8
  int v47; // r10d
  __int64 *v48; // r9
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rcx
  int v52; // edi
  __int64 v53; // rcx
  _QWORD *v54; // rdx
  __int64 *v55; // r8
  __int64 *v56; // rax
  __int64 v57; // rdx
  int v58; // edi
  int v59; // edi
  __int64 v60; // r11
  unsigned int v61; // r9d
  _QWORD *v62; // rcx
  __int64 v63; // r10
  int v64; // edi
  int v65; // r9d
  __int64 *v66; // r8
  unsigned int v67; // r13d
  __int64 v68; // rcx
  _QWORD *v69; // rcx
  _QWORD *v70; // rcx
  _QWORD *v71; // r15
  int v72; // [rsp+8h] [rbp-40h]

  v10 = *(_QWORD *)(a1 + 2192);
  *(_QWORD *)(a1 + 2272) += 16LL;
  v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(a1 + 2200) >= v11 + 16 && v10 )
    *(_QWORD *)(a1 + 2192) = v11 + 16;
  else
    v11 = sub_6A76A0(a1 + 2192, 16, 3);
  *(_DWORD *)(v11 + 8) = a5;
  *(_QWORD *)v11 = a3 & 0xFFFFFFFFFFFFFFF9LL | (2LL * (unsigned int)(a4 - 1));
  v12 = *(unsigned int *)(a1 + 1792);
  v13 = v11 | 4;
  v14 = 0;
  v15 = *(__int64 **)(a1 + 1776);
  if ( !(_DWORD)v12 )
    goto LABEL_22;
  v16 = (unsigned int)(v12 - 1);
  v17 = 1;
  v18 = nullptr;
  v19 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
  v20 = v16 & v19;
  v21 = &v15[2 * ((unsigned int)v16 & v19)];
  v22 = *v21;
  if ( a2 == *v21 )
  {
LABEL_6:
    result = v21 + 1;
    goto LABEL_7;
  }
  while ( v22 != -4096 )
  {
    if ( v22 == -8192 && !v18 )
      v18 = v21;
    v20 = v16 & (v17 + v20);
    v21 = &v15[2 * v20];
    v22 = *v21;
    if ( a2 == *v21 )
      goto LABEL_6;
    ++v17;
  }
  if ( !v18 )
    v18 = v21;
  v24 = *(_DWORD *)(a1 + 1784) + 1;
  v14 = 2 * v12;
  if ( 4 * v24 >= (unsigned int)(3 * v12) )
  {
LABEL_22:
    v25 = (unsigned int)(v14 - 1) | ((unsigned __int64)(unsigned int)(v14 - 1) >> 1);
    v26 = (((v25 >> 2) | v25) >> 4) | (v25 >> 2) | v25;
    v27 = ((((v26 >> 8) | v26) >> 16) | (v26 >> 8) | v26) + 1;
    if ( (unsigned int)v27 < 0x40 )
      LODWORD(v27) = 64;
    *(_DWORD *)(a1 + 1792) = v27;
    v28 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v27, 8);
    v29 = *(unsigned int *)(a1 + 1792);
    *(_QWORD *)(a1 + 1776) = v28;
    v30 = v29;
    v31 = 16 * v29;
    v32 = &v28[(unsigned __int64)v31 / 8];
    if ( v15 )
    {
      *(_QWORD *)(a1 + 1784) = 0;
      v33 = &v15[2 * (unsigned int)v12];
      if ( v31 )
      {
        if ( (v31 & 0x10) == 0 || (*v28 = -4096, v28 += 2, v28 != v32) )
        {
          do
          {
            *v28 = -4096;
            v28 += 4;
            *(v28 - 2) = -4096;
          }
          while ( v28 != v32 );
        }
      }
      for ( i = v15; v33 != i; i += 2 )
      {
        v35 = *i;
        if ( *i != -4096 && v35 != -8192 )
        {
          v36 = *(_DWORD *)(a1 + 1792);
          if ( !v36 )
          {
            *(_QWORD *)&dword_0 = *i;
            BUG();
          }
          v37 = v36 - 1;
          v38 = *(_QWORD *)(a1 + 1776);
          v39 = 1;
          v40 = nullptr;
          LODWORD(v41) = v37 & (((unsigned int)v35 >> 9) ^ ((unsigned int)v35 >> 4));
          v42 = (_QWORD *)(v38 + 16LL * (unsigned int)v41);
          v43 = *v42;
          if ( v35 != *v42 )
          {
            while ( v43 != -4096 )
            {
              if ( v43 == -8192 && !v40 )
                v40 = v42;
              v41 = v37 & (unsigned int)(v41 + v39);
              v42 = (_QWORD *)(v38 + 16 * v41);
              v43 = *v42;
              if ( v35 == *v42 )
                goto LABEL_34;
              ++v39;
            }
            if ( v40 )
              v42 = v40;
          }
LABEL_34:
          *v42 = v35;
          v42[1] = i[1];
          ++*(_DWORD *)(a1 + 1784);
        }
      }
      operator delete();
      v28 = *(_QWORD **)(a1 + 1776);
      v30 = *(_DWORD *)(a1 + 1792);
      v24 = *(_DWORD *)(a1 + 1784) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 1784) = 0;
      if ( v28 != v32 )
      {
        v69 = v28;
        if ( (((_BYTE)v32 - (_BYTE)v28) & 0x10) == 0 || (v69 = v28 + 2, *v28 = -4096, v28 + 2 != v32) )
        {
          do
          {
            *v69 = -4096;
            v69 += 4;
            *(v69 - 2) = -4096;
          }
          while ( v69 != v32 );
        }
      }
      v24 = 1;
    }
    if ( v30 )
    {
      v44 = v30 - 1;
      v45 = v44 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v18 = &v28[2 * v45];
      v46 = *v18;
      if ( a2 != *v18 )
      {
        v47 = 1;
        v48 = nullptr;
        while ( v46 != -4096 )
        {
          if ( !v48 && v46 == -8192 )
            v48 = v18;
          v45 = v44 & (v47 + v45);
          v18 = &v28[2 * v45];
          v46 = *v18;
          if ( a2 == *v18 )
            goto LABEL_18;
          ++v47;
        }
        if ( v48 )
          v18 = v48;
      }
      goto LABEL_18;
    }
    goto LABEL_106;
  }
  if ( (unsigned int)v12 >> 3 >= (int)v12 - *(_DWORD *)(a1 + 1788) - v24 )
  {
    v49 = (((((((((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 4) | ((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 8)
           | ((((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 4)
           | ((v16 | (v16 >> 1)) >> 2)
           | v16
           | (v16 >> 1)) >> 16)
         | ((((((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 4) | ((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 8)
         | ((((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 4)
         | ((v16 | (v16 >> 1)) >> 2)
         | v16
         | (v16 >> 1))
        + 1;
    if ( (unsigned int)v49 < 0x40 )
      LODWORD(v49) = 64;
    *(_DWORD *)(a1 + 1792) = v49;
    v50 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v49, 8);
    v51 = *(unsigned int *)(a1 + 1792);
    *(_QWORD *)(a1 + 1776) = v50;
    v52 = v51;
    v53 = 16 * v51;
    v54 = &v50[(unsigned __int64)v53 / 8];
    if ( v15 )
    {
      *(_QWORD *)(a1 + 1784) = 0;
      v55 = &v15[2 * v12];
      if ( v53 )
      {
        if ( (v53 & 0x10) == 0 || (*v50 = -4096, v50 += 2, v50 != v54) )
        {
          do
          {
            *v50 = -4096;
            v50 += 4;
            *(v50 - 2) = -4096;
          }
          while ( v50 != v54 );
        }
      }
      v56 = v15;
      do
      {
        v57 = *v56;
        if ( *v56 != -4096 && v57 != -8192 )
        {
          v58 = *(_DWORD *)(a1 + 1792);
          if ( !v58 )
          {
            *(_QWORD *)&dword_0 = *v56;
            BUG();
          }
          v59 = v58 - 1;
          v60 = *(_QWORD *)(a1 + 1776);
          v61 = v59 & (((unsigned int)v57 >> 9) ^ ((unsigned int)v57 >> 4));
          v62 = (_QWORD *)(v60 + 16LL * v61);
          v63 = *v62;
          if ( *v62 != v57 )
          {
            v72 = 1;
            v71 = nullptr;
            while ( v63 != -4096 )
            {
              if ( v63 == -8192 && !v71 )
                v71 = v62;
              v61 = v59 & (v72 + v61);
              v62 = (_QWORD *)(v60 + 16LL * v61);
              v63 = *v62;
              if ( v57 == *v62 )
                goto LABEL_65;
              ++v72;
            }
            if ( v71 )
              v62 = v71;
          }
LABEL_65:
          *v62 = v57;
          v62[1] = v56[1];
          ++*(_DWORD *)(a1 + 1784);
        }
        v56 += 2;
      }
      while ( v55 != v56 );
      operator delete();
      v50 = *(_QWORD **)(a1 + 1776);
      v52 = *(_DWORD *)(a1 + 1792);
      v24 = *(_DWORD *)(a1 + 1784) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 1784) = 0;
      if ( v50 != v54 )
      {
        v70 = v50;
        if ( (((_BYTE)v54 - (_BYTE)v50) & 0x10) == 0 || (v70 = v50 + 2, *v50 = -4096, v50 + 2 != v54) )
        {
          do
          {
            *v70 = -4096;
            v70 += 4;
            *(v70 - 2) = -4096;
          }
          while ( v70 != v54 );
        }
      }
      v24 = 1;
    }
    if ( v52 )
    {
      v64 = v52 - 1;
      v65 = 1;
      v66 = nullptr;
      v67 = v64 & v19;
      v18 = &v50[2 * v67];
      v68 = *v18;
      if ( a2 != *v18 )
      {
        while ( v68 != -4096 )
        {
          if ( !v66 && v68 == -8192 )
            v66 = v18;
          v67 = v64 & (v65 + v67);
          v18 = &v50[2 * v67];
          v68 = *v18;
          if ( a2 == *v18 )
            goto LABEL_18;
          ++v65;
        }
        if ( v66 )
          v18 = v66;
      }
      goto LABEL_18;
    }
LABEL_106:
    *(_DWORD *)(a1 + 1784) = v24;
    BUG();
  }
LABEL_18:
  *(_DWORD *)(a1 + 1784) = v24;
  if ( *v18 != -4096 )
    --*(_DWORD *)(a1 + 1788);
  *v18 = a2;
  result = v18 + 1;
  v18[1] = 0;
LABEL_7:
  *result = v13;
  return result;
}

