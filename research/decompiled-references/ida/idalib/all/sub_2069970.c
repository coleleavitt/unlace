void *__fastcall sub_2069970(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v8; // rbx
  unsigned int v9; // r15d
  __int64 *v10; // r13
  unsigned int v11; // r14d
  unsigned int v12; // eax
  unsigned __int64 v13; // rsi
  int v14; // r14d
  unsigned int v15; // ecx
  __int64 *v16; // rdx
  __int64 v17; // rax
  void *result; // rax
  _QWORD *v19; // rbx
  int v20; // edi
  __int64 *v21; // r8
  __int64 v22; // rsi
  void *v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // esi
  _QWORD *v32; // rcx
  _QWORD *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rcx
  _QWORD *v37; // rdx
  __int64 v38; // rsi
  int v39; // r10d
  __int64 *v40; // r9
  _QWORD *v41; // rcx
  __int64 *v42; // rdx
  int i; // r14d
  __int64 v44; // rcx
  unsigned int v45; // r8d
  _QWORD *v46; // rdi
  __int64 v47; // r11
  int v48; // r8d
  unsigned int v49; // edi
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  _QWORD *v54; // rdx
  int v55; // r9d
  __int64 v56; // r15
  _QWORD *v57; // rcx
  __int64 *v58; // rdx
  int v59; // r11d
  unsigned int v60; // edi
  _QWORD *v61; // rsi
  __int64 v62; // r10
  int v63; // esi
  int v64; // edi
  unsigned int v65; // r14d
  __int64 *v66; // r8
  int v67; // r9d
  __int64 v68; // rcx
  _QWORD *v69; // rcx
  _QWORD *v70; // rdx
  _QWORD *v71; // r15
  __int64 *v72; // r9
  int v73; // r10d
  unsigned __int64 v74; // rax
  void *v75; // [rsp+8h] [rbp-50h]
  int v76; // [rsp+8h] [rbp-50h]
  _QWORD *v77; // [rsp+8h] [rbp-50h]
  int v78; // [rsp+10h] [rbp-48h]

  v8 = *(__int64 **)(a1 + 488);
  if ( !v8 )
  {
    v24 = (__int64 *)operator new(0x18u);
    v24[2] = 0;
    v8 = v24;
    *(_QWORD *)(a1 + 488) = v24;
    *v24 = 0;
    v24[1] = 0;
    *((_DWORD *)v24 + 4) = 64;
    v29 = sub_22300B0(1024, 8, v25, v26, v27, v28);
    *v8 = v29;
    goto LABEL_17;
  }
  v9 = *((_DWORD *)v8 + 4);
  v10 = (__int64 *)*v8;
  if ( !v9 )
  {
    LODWORD(v34) = 64;
    v35 = 1024;
    goto LABEL_22;
  }
  v11 = a2;
  v12 = a2;
  v13 = v9 - 1;
  v14 = (v12 >> 9) ^ (v11 >> 4);
  v15 = v13 & v14;
  v16 = &v10[2 * ((unsigned int)v13 & v14)];
  v17 = *v16;
  if ( a2 == *v16 )
  {
LABEL_4:
    result = (void *)v16[1];
    v19 = v16 + 1;
    if ( result )
      return result;
    goto LABEL_13;
  }
  v20 = 1;
  v21 = nullptr;
  if ( v17 != -4096 )
  {
    while ( 1 )
    {
      if ( !v21 && v17 == -8192 )
        v21 = v16;
      a6 = (unsigned int)(v20 + 1);
      v15 = v13 & (v20 + v15);
      v16 = &v10[2 * v15];
      v17 = *v16;
      if ( a2 == *v16 )
        goto LABEL_4;
      if ( v17 == -4096 )
        break;
      ++v20;
    }
    if ( v21 )
      v16 = v21;
  }
  a4 = (unsigned int)(*((_DWORD *)v8 + 2) + 1);
  a5 = (unsigned int)(4 * a4);
  if ( (unsigned int)a5 >= 3 * v9 )
  {
    v74 = ((unsigned __int64)(2 * v9 - 1) >> 1)
        | (2 * v9 - 1)
        | ((((unsigned __int64)(2 * v9 - 1) >> 1) | (2 * v9 - 1)) >> 2);
    a3 = 64;
    v34 = (((v74 | (v74 >> 4)) >> 8) | v74 | (v74 >> 4) | ((((v74 | (v74 >> 4)) >> 8) | v74 | (v74 >> 4)) >> 16)) + 1;
    if ( (unsigned int)v34 < 0x40 )
      LODWORD(v34) = 64;
    v35 = 16LL * (unsigned int)v34;
LABEL_22:
    *((_DWORD *)v8 + 4) = v34;
    v29 = sub_22300B0(v35, 8, a3, a4, a5, a6);
    *v8 = v29;
    if ( v10 )
    {
      v36 = *((unsigned int *)v8 + 4);
      v37 = (_QWORD *)v29;
      v38 = 2LL * v9;
      v8[1] = 0;
      v39 = v36;
      v40 = &v10[v38];
      v41 = (_QWORD *)(v29 + 16 * v36);
      if ( (_QWORD *)v29 != v41 )
      {
        do
        {
          *v37 = -4096;
          v37 += 2;
        }
        while ( v41 != v37 );
      }
      v42 = v10;
      for ( i = v39 - 1; v40 != v42; v42 += 2 )
      {
        v44 = *v42;
        if ( *v42 != -8192 && v44 != -4096 )
        {
          if ( !v39 )
          {
LABEL_115:
            *(_QWORD *)&dword_0 = v44;
            BUG();
          }
          v45 = i & (((unsigned int)v44 >> 9) ^ ((unsigned int)v44 >> 4));
          v46 = (_QWORD *)(v29 + 16LL * v45);
          v47 = *v46;
          if ( *v46 != v44 && v47 != -4096 )
          {
            v76 = 1;
            v71 = nullptr;
            while ( 1 )
            {
              if ( v47 == -8192 && !v71 )
                v71 = v46;
              v45 = i & (v76 + v45);
              v46 = (_QWORD *)(v29 + 16LL * v45);
              v47 = *v46;
              if ( v44 == *v46 )
                break;
              if ( v47 == -4096 )
              {
                if ( v71 )
                  v46 = v71;
                break;
              }
              ++v76;
            }
          }
          *v46 = v44;
          v46[1] = v42[1];
          ++*((_DWORD *)v8 + 2);
        }
      }
      operator delete(v10, v38 * 8, 8);
      v29 = *v8;
      v31 = *((_DWORD *)v8 + 4);
      LODWORD(a4) = *((_DWORD *)v8 + 2) + 1;
LABEL_33:
      if ( v31 )
      {
        v48 = v31 - 1;
        v49 = (v31 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v16 = (__int64 *)(v29 + 16LL * v49);
        v22 = *v16;
        if ( a2 != *v16 )
        {
          if ( v22 != -4096 )
          {
            v72 = (__int64 *)(v29 + 16LL * (v48 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4))));
            v73 = 1;
            v16 = nullptr;
            while ( 1 )
            {
              if ( v22 == -8192 && !v16 )
                v16 = v72;
              v49 = v48 & (v73 + v49);
              v72 = (__int64 *)(v29 + 16LL * v49);
              v22 = *v72;
              if ( a2 == *v72 )
              {
                v16 = (__int64 *)(v29 + 16LL * v49);
                goto LABEL_10;
              }
              if ( v22 == -4096 )
                break;
              ++v73;
            }
            if ( v16 )
              goto LABEL_9;
            v16 = (__int64 *)(v29 + 16LL * v49);
          }
          goto LABEL_36;
        }
LABEL_10:
        *((_DWORD *)v8 + 2) = a4;
        if ( v22 != -4096 )
          --*((_DWORD *)v8 + 3);
        goto LABEL_12;
      }
LABEL_114:
      ++*((_DWORD *)v8 + 2);
      BUG();
    }
LABEL_17:
    v30 = *((unsigned int *)v8 + 4);
    v8[1] = 0;
    v31 = v30;
    v32 = (_QWORD *)(v29 + 16 * v30);
    if ( v32 != (_QWORD *)v29 )
    {
      v33 = (_QWORD *)v29;
      do
      {
        *v33 = -4096;
        v33 += 2;
      }
      while ( v32 != v33 );
    }
    LODWORD(a4) = 1;
    goto LABEL_33;
  }
  if ( v9 - *((_DWORD *)v8 + 3) - (unsigned int)a4 > v9 >> 3 )
  {
LABEL_9:
    v22 = *v16;
    goto LABEL_10;
  }
  v50 = (((((v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2)) >> 4) | (v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2)) >> 8)
      | (((v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2)) >> 4)
      | (v13 >> 1)
      | v13
      | (((v13 >> 1) | v13) >> 2);
  v51 = ((v50 >> 16) | v50) + 1;
  if ( (unsigned int)v51 < 0x40 )
    LODWORD(v51) = 64;
  *((_DWORD *)v8 + 4) = v51;
  v52 = sub_22300B0(16LL * (unsigned int)v51, 8, 64, a4, a5, a6);
  *v8 = v52;
  if ( v10 )
  {
    v53 = *((unsigned int *)v8 + 4);
    v8[1] = 0;
    v54 = (_QWORD *)v52;
    v55 = v53;
    v56 = 2LL * v9;
    v57 = (_QWORD *)(v52 + 16 * v53);
    if ( (_QWORD *)v52 != v57 )
    {
      do
      {
        *v54 = -4096;
        v54 += 2;
      }
      while ( v57 != v54 );
    }
    v58 = v10;
    v59 = v55 - 1;
    do
    {
      v44 = *v58;
      if ( *v58 != -4096 && v44 != -8192 )
      {
        if ( !v55 )
          goto LABEL_115;
        v60 = v59 & (((unsigned int)v44 >> 9) ^ ((unsigned int)v44 >> 4));
        v61 = (_QWORD *)(v52 + 16LL * v60);
        v62 = *v61;
        if ( *v61 != v44 && v62 != -4096 )
        {
          v78 = 1;
          v77 = nullptr;
          while ( 1 )
          {
            if ( v62 == -8192 )
            {
              if ( v77 )
                v61 = v77;
              v77 = v61;
            }
            v60 = v59 & (v78 + v60);
            v61 = (_QWORD *)(v52 + 16LL * v60);
            v62 = *v61;
            if ( v44 == *v61 )
              break;
            if ( v62 == -4096 )
            {
              if ( v77 )
                v61 = v77;
              break;
            }
            ++v78;
          }
        }
        *v61 = v44;
        v61[1] = v58[1];
        ++*((_DWORD *)v8 + 2);
      }
      v58 += 2;
    }
    while ( &v10[v56] != v58 );
    operator delete(v10, v56 * 8, 8);
    v52 = *v8;
    v63 = *((_DWORD *)v8 + 4);
    LODWORD(a4) = *((_DWORD *)v8 + 2) + 1;
  }
  else
  {
    v68 = *((unsigned int *)v8 + 4);
    v8[1] = 0;
    v63 = v68;
    v69 = (_QWORD *)(v52 + 16 * v68);
    if ( (_QWORD *)v52 != v69 )
    {
      v70 = (_QWORD *)v52;
      do
      {
        *v70 = -4096;
        v70 += 2;
      }
      while ( v69 != v70 );
    }
    LODWORD(a4) = 1;
  }
  if ( !v63 )
    goto LABEL_114;
  v64 = v63 - 1;
  v65 = (v63 - 1) & v14;
  v16 = (__int64 *)(v52 + 16LL * v65);
  v22 = *v16;
  if ( a2 == *v16 )
    goto LABEL_10;
  if ( v22 != -4096 )
  {
    v66 = (__int64 *)(v52 + 16LL * v65);
    v67 = 1;
    v16 = nullptr;
    while ( 1 )
    {
      if ( v22 == -8192 && !v16 )
        v16 = v66;
      v65 = v64 & (v67 + v65);
      v66 = (__int64 *)(v52 + 16LL * v65);
      v22 = *v66;
      if ( a2 == *v66 )
      {
        v16 = (__int64 *)(v52 + 16LL * v65);
        goto LABEL_10;
      }
      if ( v22 == -4096 )
        break;
      ++v67;
    }
    if ( v16 )
      goto LABEL_9;
    v16 = (__int64 *)(v52 + 16LL * v65);
  }
LABEL_36:
  *((_DWORD *)v8 + 2) = a4;
LABEL_12:
  *v16 = a2;
  v19 = v16 + 1;
  v16[1] = 0;
LABEL_13:
  v23 = malloc(16LL * *(unsigned int *)(a2 + 12) + 24);
  if ( !v23 )
    sub_2221CE0("Allocation failed");
  *v19 = v23;
  v75 = v23;
  sub_2068620((__int64)v23, a2, a1);
  return v75;
}
