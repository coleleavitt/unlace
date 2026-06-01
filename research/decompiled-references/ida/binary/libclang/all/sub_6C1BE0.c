_QWORD *__fastcall sub_6C1BE0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v7; // r15
  __int64 *v8; // r14
  unsigned __int64 v9; // rcx
  int v10; // r8d
  __int64 *v11; // rdx
  unsigned int v12; // r13d
  unsigned int v13; // edi
  __int64 *v14; // rax
  __int64 v15; // rsi
  _QWORD *result; // rax
  int v17; // esi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  int v23; // edi
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  __int64 *v26; // r9
  __int64 *i; // rax
  __int64 v28; // rdx
  int v29; // edi
  int v30; // edi
  __int64 v31; // r11
  int v32; // r15d
  _QWORD *v33; // r13
  __int64 v34; // r8
  _QWORD *v35; // rcx
  __int64 v36; // r10
  int v37; // edi
  unsigned int v38; // ecx
  __int64 v39; // r8
  int v40; // r10d
  __int64 *v41; // r9
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rcx
  int v45; // edi
  __int64 v46; // rcx
  _QWORD *v47; // rdx
  __int64 *v48; // r8
  __int64 *v49; // rax
  __int64 v50; // rdx
  int v51; // edi
  int v52; // edi
  __int64 v53; // r11
  unsigned int v54; // r9d
  _QWORD *v55; // rcx
  __int64 v56; // r10
  int v57; // edi
  int v58; // r9d
  __int64 *v59; // r8
  unsigned int v60; // r13d
  __int64 v61; // rcx
  _QWORD *v62; // rcx
  _QWORD *v63; // rcx
  _QWORD *v64; // r15
  int v65; // [rsp+8h] [rbp-40h]

  v3 = 0;
  v7 = *(unsigned int *)(a1 + 1184);
  v8 = *(__int64 **)(a1 + 1168);
  if ( !(_DWORD)v7 )
    goto LABEL_18;
  v9 = (unsigned int)(v7 - 1);
  v10 = 1;
  v11 = nullptr;
  v12 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
  v13 = v9 & v12;
  v14 = &v8[2 * ((unsigned int)v9 & v12)];
  v15 = *v14;
  if ( a2 == *v14 )
  {
LABEL_3:
    result = v14 + 1;
    goto LABEL_4;
  }
  while ( v15 != -4096 )
  {
    if ( v15 == -8192 && !v11 )
      v11 = v14;
    v13 = v9 & (v10 + v13);
    v14 = &v8[2 * v13];
    v15 = *v14;
    if ( a2 == *v14 )
      goto LABEL_3;
    ++v10;
  }
  if ( !v11 )
    v11 = v14;
  v17 = *(_DWORD *)(a1 + 1176) + 1;
  v3 = 2 * v7;
  if ( 4 * v17 >= (unsigned int)(3 * v7) )
  {
LABEL_18:
    v18 = (unsigned int)(v3 - 1) | ((unsigned __int64)(unsigned int)(v3 - 1) >> 1);
    v19 = (((v18 >> 2) | v18) >> 4) | (v18 >> 2) | v18;
    v20 = ((((v19 >> 8) | v19) >> 16) | (v19 >> 8) | v19) + 1;
    if ( (unsigned int)v20 < 0x40 )
      LODWORD(v20) = 64;
    *(_DWORD *)(a1 + 1184) = v20;
    v21 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v20, 8);
    v22 = *(unsigned int *)(a1 + 1184);
    *(_QWORD *)(a1 + 1168) = v21;
    v23 = v22;
    v24 = 16 * v22;
    v25 = &v21[(unsigned __int64)v24 / 8];
    if ( v8 )
    {
      *(_QWORD *)(a1 + 1176) = 0;
      v26 = &v8[2 * (unsigned int)v7];
      if ( v24 )
      {
        if ( (v24 & 0x10) == 0 || (*v21 = -4096, v21 += 2, v21 != v25) )
        {
          do
          {
            *v21 = -4096;
            v21 += 4;
            *(v21 - 2) = -4096;
          }
          while ( v21 != v25 );
        }
      }
      for ( i = v8; v26 != i; i += 2 )
      {
        v28 = *i;
        if ( *i != -4096 && v28 != -8192 )
        {
          v29 = *(_DWORD *)(a1 + 1184);
          if ( !v29 )
          {
            *(_QWORD *)&dword_0 = *i;
            BUG();
          }
          v30 = v29 - 1;
          v31 = *(_QWORD *)(a1 + 1168);
          v32 = 1;
          v33 = nullptr;
          LODWORD(v34) = v30 & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
          v35 = (_QWORD *)(v31 + 16LL * (unsigned int)v34);
          v36 = *v35;
          if ( *v35 != v28 )
          {
            while ( v36 != -4096 )
            {
              if ( v36 == -8192 && !v33 )
                v33 = v35;
              v34 = v30 & (unsigned int)(v34 + v32);
              v35 = (_QWORD *)(v31 + 16 * v34);
              v36 = *v35;
              if ( v28 == *v35 )
                goto LABEL_30;
              ++v32;
            }
            if ( v33 )
              v35 = v33;
          }
LABEL_30:
          *v35 = v28;
          v35[1] = i[1];
          ++*(_DWORD *)(a1 + 1176);
        }
      }
      operator delete();
      v21 = *(_QWORD **)(a1 + 1168);
      v23 = *(_DWORD *)(a1 + 1184);
      v17 = *(_DWORD *)(a1 + 1176) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 1176) = 0;
      if ( v21 != v25 )
      {
        v62 = v21;
        if ( (((_BYTE)v25 - (_BYTE)v21) & 0x10) == 0 || (v62 = v21 + 2, *v21 = -4096, v21 + 2 != v25) )
        {
          do
          {
            *v62 = -4096;
            v62 += 4;
            *(v62 - 2) = -4096;
          }
          while ( v62 != v25 );
        }
      }
      v17 = 1;
    }
    if ( v23 )
    {
      v37 = v23 - 1;
      v38 = v37 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v11 = &v21[2 * v38];
      v39 = *v11;
      if ( a2 != *v11 )
      {
        v40 = 1;
        v41 = nullptr;
        while ( v39 != -4096 )
        {
          if ( v39 == -8192 && !v41 )
            v41 = v11;
          v38 = v37 & (v40 + v38);
          v11 = &v21[2 * v38];
          v39 = *v11;
          if ( a2 == *v11 )
            goto LABEL_15;
          ++v40;
        }
        if ( v41 )
          v11 = v41;
      }
      goto LABEL_15;
    }
    goto LABEL_102;
  }
  if ( (unsigned int)v7 >> 3 >= (int)v7 - *(_DWORD *)(a1 + 1180) - v17 )
  {
    v42 = (((((((((v9 | (v9 >> 1)) >> 2) | v9 | (v9 >> 1)) >> 4) | ((v9 | (v9 >> 1)) >> 2) | v9 | (v9 >> 1)) >> 8)
           | ((((v9 | (v9 >> 1)) >> 2) | v9 | (v9 >> 1)) >> 4)
           | ((v9 | (v9 >> 1)) >> 2)
           | v9
           | (v9 >> 1)) >> 16)
         | ((((((v9 | (v9 >> 1)) >> 2) | v9 | (v9 >> 1)) >> 4) | ((v9 | (v9 >> 1)) >> 2) | v9 | (v9 >> 1)) >> 8)
         | ((((v9 | (v9 >> 1)) >> 2) | v9 | (v9 >> 1)) >> 4)
         | ((v9 | (v9 >> 1)) >> 2)
         | v9
         | (v9 >> 1))
        + 1;
    if ( (unsigned int)v42 < 0x40 )
      LODWORD(v42) = 64;
    *(_DWORD *)(a1 + 1184) = v42;
    v43 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v42, 8);
    v44 = *(unsigned int *)(a1 + 1184);
    *(_QWORD *)(a1 + 1168) = v43;
    v45 = v44;
    v46 = 16 * v44;
    v47 = &v43[(unsigned __int64)v46 / 8];
    if ( v8 )
    {
      *(_QWORD *)(a1 + 1176) = 0;
      v48 = &v8[2 * v7];
      if ( v46 )
      {
        if ( (v46 & 0x10) == 0 || (*v43 = -4096, v43 += 2, v43 != v47) )
        {
          do
          {
            *v43 = -4096;
            v43 += 4;
            *(v43 - 2) = -4096;
          }
          while ( v43 != v47 );
        }
      }
      v49 = v8;
      do
      {
        v50 = *v49;
        if ( *v49 != -8192 && v50 != -4096 )
        {
          v51 = *(_DWORD *)(a1 + 1184);
          if ( !v51 )
          {
            *(_QWORD *)&dword_0 = *v49;
            BUG();
          }
          v52 = v51 - 1;
          v53 = *(_QWORD *)(a1 + 1168);
          v54 = v52 & (((unsigned int)v50 >> 9) ^ ((unsigned int)v50 >> 4));
          v55 = (_QWORD *)(v53 + 16LL * v54);
          v56 = *v55;
          if ( *v55 != v50 )
          {
            v65 = 1;
            v64 = nullptr;
            while ( v56 != -4096 )
            {
              if ( v56 == -8192 && !v64 )
                v64 = v55;
              v54 = v52 & (v65 + v54);
              v55 = (_QWORD *)(v53 + 16LL * v54);
              v56 = *v55;
              if ( v50 == *v55 )
                goto LABEL_61;
              ++v65;
            }
            if ( v64 )
              v55 = v64;
          }
LABEL_61:
          *v55 = v50;
          v55[1] = v49[1];
          ++*(_DWORD *)(a1 + 1176);
        }
        v49 += 2;
      }
      while ( v48 != v49 );
      operator delete();
      v43 = *(_QWORD **)(a1 + 1168);
      v45 = *(_DWORD *)(a1 + 1184);
      v17 = *(_DWORD *)(a1 + 1176) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 1176) = 0;
      if ( v43 != v47 )
      {
        v63 = v43;
        if ( (((_BYTE)v47 - (_BYTE)v43) & 0x10) == 0 || (v63 = v43 + 2, *v43 = -4096, v43 + 2 != v47) )
        {
          do
          {
            *v63 = -4096;
            v63 += 4;
            *(v63 - 2) = -4096;
          }
          while ( v63 != v47 );
        }
      }
      v17 = 1;
    }
    if ( v45 )
    {
      v57 = v45 - 1;
      v58 = 1;
      v59 = nullptr;
      v60 = v57 & v12;
      v11 = &v43[2 * v60];
      v61 = *v11;
      if ( a2 != *v11 )
      {
        while ( v61 != -4096 )
        {
          if ( v61 == -8192 && !v59 )
            v59 = v11;
          v60 = v57 & (v58 + v60);
          v11 = &v43[2 * v60];
          v61 = *v11;
          if ( a2 == *v11 )
            goto LABEL_15;
          ++v58;
        }
        if ( v59 )
          v11 = v59;
      }
      goto LABEL_15;
    }
LABEL_102:
    *(_DWORD *)(a1 + 1176) = v17;
    BUG();
  }
LABEL_15:
  *(_DWORD *)(a1 + 1176) = v17;
  if ( *v11 != -4096 )
    --*(_DWORD *)(a1 + 1180);
  *v11 = a2;
  result = v11 + 1;
  v11[1] = 0;
LABEL_4:
  *result = a3;
  return result;
}

