unsigned __int64 *__fastcall sub_6C3120(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  int v4; // eax
  unsigned int v9; // edx
  __int64 *v10; // r15
  unsigned int v11; // r14d
  unsigned int v12; // eax
  unsigned __int64 v13; // rsi
  int v14; // r10d
  __int64 *v15; // rcx
  int v16; // r14d
  __int64 v17; // rdi
  __int64 *v18; // rax
  __int64 v19; // r8
  unsigned __int64 *result; // rax
  int v21; // edi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdi
  int v27; // esi
  __int64 v28; // rdi
  _QWORD *v29; // rcx
  __int64 *v30; // r8
  __int64 *i; // rax
  __int64 v32; // rdx
  int v33; // r9d
  int v34; // r9d
  __int64 v35; // r11
  unsigned int v36; // edi
  _QWORD *v37; // rcx
  __int64 v38; // r10
  int v39; // esi
  unsigned int v40; // edx
  __int64 v41; // r8
  int v42; // r10d
  __int64 *v43; // r9
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rdi
  int v48; // esi
  __int64 v49; // rdi
  _QWORD *v50; // rcx
  __int64 *v51; // r11
  __int64 *v52; // rax
  __int64 v53; // rdx
  int v54; // r8d
  int v55; // r8d
  __int64 v56; // r10
  unsigned int v57; // edi
  _QWORD *v58; // rcx
  __int64 v59; // r9
  int v60; // esi
  int v61; // r9d
  __int64 *v62; // r8
  unsigned int v63; // r14d
  __int64 v64; // rdx
  _QWORD *v65; // rdx
  _QWORD *v66; // rdx
  _QWORD *v67; // r14
  unsigned int v68; // [rsp+0h] [rbp-48h]
  unsigned int v69; // [rsp+0h] [rbp-48h]
  int v70; // [rsp+0h] [rbp-48h]
  _QWORD *v71; // [rsp+0h] [rbp-48h]
  int v72; // [rsp+8h] [rbp-40h]

  v4 = 0;
  v9 = *(_DWORD *)(a1 + 1232);
  v10 = *(__int64 **)(a1 + 1216);
  if ( !v9 )
    goto LABEL_18;
  v11 = a2;
  v12 = a2;
  v13 = v9 - 1;
  v14 = 1;
  v15 = nullptr;
  v16 = (v12 >> 9) ^ (v11 >> 4);
  LODWORD(v17) = v13 & v16;
  v18 = &v10[2 * ((unsigned int)v13 & v16)];
  v19 = *v18;
  if ( *v18 == a2 )
  {
LABEL_3:
    result = (unsigned __int64 *)(v18 + 1);
    goto LABEL_4;
  }
  while ( v19 != -4096 )
  {
    if ( v19 == -8192 && !v15 )
      v15 = v18;
    v17 = (unsigned int)v13 & ((_DWORD)v17 + v14);
    v18 = &v10[2 * v17];
    v19 = *v18;
    if ( *v18 == a2 )
      goto LABEL_3;
    ++v14;
  }
  if ( !v15 )
    v15 = v18;
  v21 = *(_DWORD *)(a1 + 1224) + 1;
  v4 = 2 * v9;
  if ( 4 * v21 >= 3 * v9 )
  {
LABEL_18:
    v68 = v9;
    v22 = (unsigned int)(v4 - 1) | ((unsigned __int64)(unsigned int)(v4 - 1) >> 1);
    v23 = (((v22 >> 2) | v22) >> 4) | (v22 >> 2) | v22;
    v24 = ((((v23 >> 8) | v23) >> 16) | (v23 >> 8) | v23) + 1;
    if ( (unsigned int)v24 < 0x40 )
      LODWORD(v24) = 64;
    *(_DWORD *)(a1 + 1232) = v24;
    v25 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v24, 8);
    v26 = *(unsigned int *)(a1 + 1232);
    *(_QWORD *)(a1 + 1216) = v25;
    v27 = v26;
    v28 = 16 * v26;
    v29 = &v25[(unsigned __int64)v28 / 8];
    if ( v10 )
    {
      *(_QWORD *)(a1 + 1224) = 0;
      v30 = &v10[2 * v68];
      if ( v28 )
      {
        if ( (v28 & 0x10) == 0 || (*v25 = -4096, v25 += 2, v25 != v29) )
        {
          do
          {
            *v25 = -4096;
            v25 += 4;
            *(v25 - 2) = -4096;
          }
          while ( v25 != v29 );
        }
      }
      for ( i = v10; v30 != i; i += 2 )
      {
        v32 = *i;
        if ( *i != -4096 && v32 != -8192 )
        {
          v33 = *(_DWORD *)(a1 + 1232);
          if ( !v33 )
          {
            *(_QWORD *)&dword_0 = *i;
            BUG();
          }
          v34 = v33 - 1;
          v35 = *(_QWORD *)(a1 + 1216);
          v36 = v34 & (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4));
          v37 = (_QWORD *)(v35 + 16LL * v36);
          v38 = *v37;
          if ( *v37 != v32 )
          {
            v70 = 1;
            v67 = nullptr;
            while ( v38 != -4096 )
            {
              if ( v38 == -8192 && !v67 )
                v67 = v37;
              v36 = v34 & (v70 + v36);
              v37 = (_QWORD *)(v35 + 16LL * v36);
              v38 = *v37;
              if ( v32 == *v37 )
                goto LABEL_30;
              ++v70;
            }
            if ( v67 )
              v37 = v67;
          }
LABEL_30:
          *v37 = v32;
          v37[1] = i[1];
          ++*(_DWORD *)(a1 + 1224);
        }
      }
      operator delete();
      v25 = *(_QWORD **)(a1 + 1216);
      v27 = *(_DWORD *)(a1 + 1232);
      v21 = *(_DWORD *)(a1 + 1224) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 1224) = 0;
      if ( v25 != v29 )
      {
        v65 = v25;
        if ( (v28 & 0x10) == 0 || (v65 = v25 + 2, *v25 = -4096, v25 + 2 != v29) )
        {
          do
          {
            *v65 = -4096;
            v65 += 4;
            *(v65 - 2) = -4096;
          }
          while ( v65 != v29 );
        }
      }
      v21 = 1;
    }
    if ( v27 )
    {
      v39 = v27 - 1;
      v40 = v39 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v15 = &v25[2 * v40];
      v41 = *v15;
      if ( *v15 != a2 )
      {
        v42 = 1;
        v43 = nullptr;
        while ( v41 != -4096 )
        {
          if ( v41 == -8192 && !v43 )
            v43 = v15;
          v40 = v39 & (v42 + v40);
          v15 = &v25[2 * v40];
          v41 = *v15;
          if ( *v15 == a2 )
            goto LABEL_15;
          ++v42;
        }
        if ( v43 )
          v15 = v43;
      }
      goto LABEL_15;
    }
    goto LABEL_102;
  }
  if ( v9 >> 3 >= v9 - *(_DWORD *)(a1 + 1228) - v21 )
  {
    v69 = v9;
    v44 = ((((v13 | (v13 >> 1)) >> 2) | v13 | (v13 >> 1)) >> 4) | ((v13 | (v13 >> 1)) >> 2) | v13 | (v13 >> 1);
    v45 = ((((v44 >> 8) | v44) >> 16) | (v44 >> 8) | v44) + 1;
    if ( (unsigned int)v45 < 0x40 )
      LODWORD(v45) = 64;
    *(_DWORD *)(a1 + 1232) = v45;
    v46 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v45, 8);
    v47 = *(unsigned int *)(a1 + 1232);
    *(_QWORD *)(a1 + 1216) = v46;
    v48 = v47;
    v49 = 16 * v47;
    v50 = &v46[(unsigned __int64)v49 / 8];
    if ( v10 )
    {
      *(_QWORD *)(a1 + 1224) = 0;
      v51 = &v10[2 * v69];
      if ( v49 )
      {
        if ( (v49 & 0x10) == 0 || (*v46 = -4096, v46 += 2, v46 != v50) )
        {
          do
          {
            *v46 = -4096;
            v46 += 4;
            *(v46 - 2) = -4096;
          }
          while ( v46 != v50 );
        }
      }
      v52 = v10;
      do
      {
        v53 = *v52;
        if ( *v52 != -8192 && v53 != -4096 )
        {
          v54 = *(_DWORD *)(a1 + 1232);
          if ( !v54 )
          {
            *(_QWORD *)&dword_0 = *v52;
            BUG();
          }
          v55 = v54 - 1;
          v56 = *(_QWORD *)(a1 + 1216);
          v57 = v55 & (((unsigned int)v53 >> 9) ^ ((unsigned int)v53 >> 4));
          v58 = (_QWORD *)(v56 + 16LL * v57);
          v59 = *v58;
          if ( *v58 != v53 )
          {
            v72 = 1;
            v71 = nullptr;
            while ( v59 != -4096 )
            {
              if ( v59 == -8192 )
              {
                if ( v71 )
                  v58 = v71;
                v71 = v58;
              }
              v57 = v55 & (v72 + v57);
              v58 = (_QWORD *)(v56 + 16LL * v57);
              v59 = *v58;
              if ( v53 == *v58 )
                goto LABEL_52;
              ++v72;
            }
            if ( v71 )
              v58 = v71;
          }
LABEL_52:
          *v58 = v53;
          v58[1] = v52[1];
          ++*(_DWORD *)(a1 + 1224);
        }
        v52 += 2;
      }
      while ( v51 != v52 );
      operator delete();
      v46 = *(_QWORD **)(a1 + 1216);
      v48 = *(_DWORD *)(a1 + 1232);
      v21 = *(_DWORD *)(a1 + 1224) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 1224) = 0;
      if ( v46 != v50 )
      {
        v66 = v46;
        if ( (v49 & 0x10) == 0 || (v66 = v46 + 2, *v46 = -4096, v46 + 2 != v50) )
        {
          do
          {
            *v66 = -4096;
            v66 += 4;
            *(v66 - 2) = -4096;
          }
          while ( v66 != v50 );
        }
      }
      v21 = 1;
    }
    if ( v48 )
    {
      v60 = v48 - 1;
      v61 = 1;
      v62 = nullptr;
      v63 = v60 & v16;
      v15 = &v46[2 * v63];
      v64 = *v15;
      if ( *v15 != a2 )
      {
        while ( v64 != -4096 )
        {
          if ( !v62 && v64 == -8192 )
            v62 = v15;
          v63 = v60 & (v61 + v63);
          v15 = &v46[2 * v63];
          v64 = *v15;
          if ( *v15 == a2 )
            goto LABEL_15;
          ++v61;
        }
        if ( v62 )
          v15 = v62;
      }
      goto LABEL_15;
    }
LABEL_102:
    *(_DWORD *)(a1 + 1224) = v21;
    BUG();
  }
LABEL_15:
  *(_DWORD *)(a1 + 1224) = v21;
  if ( *v15 != -4096 )
    --*(_DWORD *)(a1 + 1228);
  *v15 = a2;
  result = (unsigned __int64 *)(v15 + 1);
  v15[1] = 0;
LABEL_4:
  *result = (2LL * a4) | a3 & 0xFFFFFFFFFFFFFFFDLL;
  return result;
}

