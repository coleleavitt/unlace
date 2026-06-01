__int64 __fastcall sub_B6AF40(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 *a6)
{
  unsigned int v8; // r13d
  _QWORD *v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned __int64 *v13; // rsi
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  __m128 *v28; // rdi
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  __int32 v32; // ecx
  __int32 v33; // ecx
  __int64 v34; // rdx
  _QWORD *v35; // r12
  _QWORD *v36; // rbp
  _QWORD *v37; // rdi
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rdx
  __int64 v43; // rsi
  int v44; // r10d
  _QWORD *v45; // r9
  _QWORD *v46; // rcx
  _QWORD *v47; // rdx
  int i; // r13d
  __int64 v49; // rcx
  unsigned int v50; // r8d
  __int64 v51; // rdi
  __int64 v52; // r11
  int v53; // ecx
  int v54; // ecx
  int v55; // r8d
  unsigned int v56; // edi
  __int64 v57; // rbp
  _QWORD *v58; // rdx
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  _QWORD *v63; // rdx
  __int64 v64; // rsi
  int v65; // r10d
  _QWORD *v66; // rcx
  _QWORD *v67; // rdx
  int v68; // r13d
  unsigned int v69; // r8d
  __int64 v70; // rdi
  __int64 v71; // r11
  int v72; // ecx
  int v73; // ecx
  int v74; // r8d
  unsigned int v75; // edi
  unsigned __int64 v76; // rbp
  __int64 v77; // rdi
  __int64 v78; // rbp
  _QWORD *v79; // rdx
  int v80; // r15d
  __int64 v81; // r14
  int v82; // r15d
  __int64 v83; // r14
  unsigned __int64 *v84; // r10
  int v85; // ecx
  unsigned __int64 *v86; // r9
  int v87; // r10d
  int v88; // [rsp+Ch] [rbp-9Ch]
  __int64 v89; // [rsp+10h] [rbp-98h]
  __int64 v90; // [rsp+18h] [rbp-90h]
  int v91; // [rsp+20h] [rbp-88h]
  int v92; // [rsp+24h] [rbp-84h]
  char *v93; // [rsp+28h] [rbp-80h]
  __int64 v94; // [rsp+30h] [rbp-78h]
  char v95; // [rsp+38h] [rbp-70h] BYREF
  __m128 v96; // [rsp+40h] [rbp-68h] BYREF
  __int64 v97; // [rsp+50h] [rbp-58h]
  unsigned int v98; // [rsp+58h] [rbp-50h]
  _BYTE *v99; // [rsp+60h] [rbp-48h]
  __int64 v100; // [rsp+68h] [rbp-40h]
  _BYTE v101[56]; // [rsp+70h] [rbp-38h] BYREF

  v8 = *(_DWORD *)(a1 + 16);
  v9 = *(_QWORD **)a1;
  if ( v8 )
  {
    v10 = *a2;
    v11 = v8 - 1;
    v12 = v11 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
    v13 = &v9[2 * v12];
    v14 = *v13;
    if ( *v13 == v10 )
    {
LABEL_3:
      sub_B69CD0(&v96, v13, &v9[2 * v8], a1, 1);
      v15 = *(unsigned int *)(v96.m128_u64[0] + 8);
      return *(_QWORD *)(a1 + 24) + 48 * v15 + 8;
    }
    v17 = 1;
    a6 = nullptr;
    if ( v14 != -4096 )
    {
      while ( 1 )
      {
        if ( !a6 && v14 == -8192 )
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
      v59 = (((v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2)) >> 4) | (v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2);
      v60 = ((((v59 >> 8) | v59) >> 16) | (v59 >> 8) | v59) + 1;
      if ( (unsigned int)v60 < 0x40 )
        LODWORD(v60) = 64;
      *(_DWORD *)(a1 + 16) = v60;
      v61 = sub_22300B0(16LL * (unsigned int)v60, 8, 64, v19, v20, a6);
      *(_QWORD *)a1 = v61;
      if ( v9 )
      {
        v62 = *(unsigned int *)(a1 + 16);
        v63 = (_QWORD *)v61;
        v64 = 2LL * v8;
        *(_QWORD *)(a1 + 8) = 0;
        v65 = v62;
        v66 = (_QWORD *)(v61 + 16 * v62);
        if ( (_QWORD *)v61 != v66 )
        {
          do
          {
            *v63 = -4096;
            v63 += 2;
          }
          while ( v66 != v63 );
        }
        v67 = v9;
        v68 = v65 - 1;
        do
        {
          v49 = *v67;
          if ( *v67 != -8192 && v49 != -4096 )
          {
            if ( !v65 )
              goto LABEL_123;
            v69 = v68 & (((unsigned int)v49 >> 9) ^ ((unsigned int)v49 >> 4));
            v70 = v61 + 16LL * v69;
            v71 = *(_QWORD *)v70;
            if ( v49 != *(_QWORD *)v70 )
            {
              v82 = 1;
              v83 = 0;
              if ( v71 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v83 && v71 == -8192 )
                    v83 = v70;
                  v69 = v68 & (v82 + v69);
                  v88 = v82 + 1;
                  v70 = v61 + 16LL * v69;
                  v71 = *(_QWORD *)v70;
                  if ( v49 == *(_QWORD *)v70 )
                    break;
                  if ( v71 == -4096 )
                  {
                    if ( v83 )
                      v70 = v83;
                    break;
                  }
                  v82 = v88;
                }
              }
            }
            *(_QWORD *)v70 = v49;
            v72 = *((_DWORD *)v67 + 2);
            ++*(_DWORD *)(a1 + 8);
            *(_DWORD *)(v70 + 8) = v72;
          }
          v67 += 2;
        }
        while ( &v9[v64] != v67 );
        operator delete(v9, v64 * 8, 8);
        v9 = *(_QWORD **)a1;
        v73 = *(_DWORD *)(a1 + 16);
        v18 = *(_DWORD *)(a1 + 8) + 1;
      }
      else
      {
        v78 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v73 = v78;
        v9 = (_QWORD *)(v61 + 16 * v78);
        if ( (_QWORD *)v61 != v9 )
        {
          v79 = (_QWORD *)v61;
          do
          {
            *v79 = -4096;
            v79 += 2;
          }
          while ( v9 != v79 );
          v9 = (_QWORD *)v61;
        }
        v18 = 1;
      }
      if ( v73 )
      {
        v74 = v73 - 1;
        v75 = (v73 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
        v13 = &v9[2 * v75];
        v10 = *v13;
        v21 = *v13;
        if ( *a2 != *v13 )
        {
          if ( v10 == -4096 )
          {
            v10 = *a2;
            goto LABEL_40;
          }
          v84 = &v9[2 * (v74 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4)))];
          v85 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( !v13 && v10 == -8192 )
              v13 = v84;
            v75 = v74 & (v85 + v75);
            v84 = &v9[2 * v75];
            v10 = *v84;
            if ( *a2 == *v84 )
            {
              v21 = *v84;
              v13 = &v9[2 * v75];
              goto LABEL_9;
            }
            if ( v10 == -4096 )
              break;
            ++v85;
          }
          if ( !v13 )
          {
            v10 = *a2;
            v13 = &v9[2 * v75];
            goto LABEL_40;
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
LABEL_122:
      ++*(_DWORD *)(a1 + 8);
      BUG();
    }
  }
  v38 = (((((((2 * v8 - 1) | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 2)
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
  v39 = ((v38 >> 16) | v38) + 1;
  if ( (unsigned int)v39 < 0x40 )
    LODWORD(v39) = 64;
  *(_DWORD *)(a1 + 16) = v39;
  v40 = sub_22300B0(16LL * (unsigned int)v39, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = v40;
  if ( v9 )
  {
    v41 = *(unsigned int *)(a1 + 16);
    v42 = (_QWORD *)v40;
    v43 = 2LL * v8;
    *(_QWORD *)(a1 + 8) = 0;
    v44 = v41;
    v45 = &v9[v43];
    v46 = (_QWORD *)(v40 + 16 * v41);
    if ( (_QWORD *)v40 != v46 )
    {
      do
      {
        *v42 = -4096;
        v42 += 2;
      }
      while ( v46 != v42 );
    }
    v47 = v9;
    for ( i = v44 - 1; v45 != v47; v47 += 2 )
    {
      v49 = *v47;
      if ( *v47 != -4096 && v49 != -8192 )
      {
        if ( !v44 )
        {
LABEL_123:
          *(_QWORD *)&dword_0 = v49;
          BUG();
        }
        v50 = i & (((unsigned int)v49 >> 9) ^ ((unsigned int)v49 >> 4));
        v51 = v40 + 16LL * v50;
        v52 = *(_QWORD *)v51;
        if ( v49 != *(_QWORD *)v51 )
        {
          v80 = 1;
          v81 = 0;
          if ( v52 != -4096 )
          {
            while ( 1 )
            {
              if ( v52 == -8192 && !v81 )
                v81 = v51;
              v50 = i & (v80 + v50);
              v88 = v80 + 1;
              v51 = v40 + 16LL * v50;
              v52 = *(_QWORD *)v51;
              if ( v49 == *(_QWORD *)v51 )
                break;
              if ( v52 == -4096 )
              {
                if ( v81 )
                  v51 = v81;
                break;
              }
              v80 = v88;
            }
          }
        }
        *(_QWORD *)v51 = v49;
        v53 = *((_DWORD *)v47 + 2);
        ++*(_DWORD *)(a1 + 8);
        *(_DWORD *)(v51 + 8) = v53;
      }
    }
    operator delete(v9, v43 * 8, 8);
    v9 = *(_QWORD **)a1;
    v54 = *(_DWORD *)(a1 + 16);
    v18 = *(_DWORD *)(a1 + 8) + 1;
  }
  else
  {
    v57 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v54 = v57;
    v9 = (_QWORD *)(v40 + 16 * v57);
    if ( (_QWORD *)v40 != v9 )
    {
      v58 = (_QWORD *)v40;
      do
      {
        *v58 = -4096;
        v58 += 2;
      }
      while ( v9 != v58 );
      v9 = (_QWORD *)v40;
    }
    v18 = 1;
  }
  if ( !v54 )
    goto LABEL_122;
  v10 = *a2;
  v55 = v54 - 1;
  v56 = (v54 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  v13 = &v9[2 * v56];
  v21 = *v13;
  if ( *v13 == *a2 )
    goto LABEL_9;
  if ( v21 != -4096 )
  {
    v86 = &v9[2 * (v55 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4)))];
    v87 = 1;
    v13 = nullptr;
    while ( 1 )
    {
      if ( v21 == -8192 && !v13 )
        v13 = v86;
      v56 = v55 & (v87 + v56);
      v86 = &v9[2 * v56];
      v21 = *v86;
      if ( v10 == *v86 )
      {
        v13 = &v9[2 * v56];
        goto LABEL_9;
      }
      if ( v21 == -4096 )
        break;
      ++v87;
    }
    if ( v13 )
      goto LABEL_8;
    v13 = &v9[2 * v56];
  }
LABEL_40:
  *(_DWORD *)(a1 + 8) = v18;
LABEL_11:
  *v13 = v10;
  *((_DWORD *)v13 + 2) = 0;
  sub_B69CD0(&v96, v13, &v9[2 * *(unsigned int *)(a1 + 16)], a1, 1);
  v22 = *(unsigned int *)(a1 + 36);
  v23 = v96.m128_u64[0];
  v93 = &v95;
  v24 = *a2;
  v92 = 0;
  v96 = (__m128)v24;
  v99 = v101;
  v25 = *(unsigned int *)(a1 + 32);
  v89 = 0;
  v26 = v25 + 1;
  v90 = 0;
  v91 = 0;
  v94 = 0;
  v97 = 0;
  v98 = 0;
  v100 = 0;
  if ( v25 + 1 > v22 )
  {
    v76 = *(_QWORD *)(a1 + 24);
    v77 = a1 + 24;
    if ( v76 > (unsigned __int64)&v96 || (unsigned __int64)&v96 >= v76 + 48 * v25 )
    {
      sub_B6AD60(v77, v26);
      v27 = *(_QWORD *)(a1 + 24);
      v25 = *(unsigned int *)(a1 + 32);
      v28 = &v96;
    }
    else
    {
      sub_B6AD60(v77, v26);
      v27 = *(_QWORD *)(a1 + 24);
      v25 = *(unsigned int *)(a1 + 32);
      v28 = (__m128 *)((char *)&v96 + v27 - v76);
    }
  }
  else
  {
    v27 = *(_QWORD *)(a1 + 24);
    v28 = &v96;
  }
  v29 = v27 + 48 * v25;
  v30 = v28->m128_u64[0];
  *(_QWORD *)(v29 + 8) = 0;
  *(_QWORD *)v29 = v30;
  v31 = v28->m128_u64[1];
  *(_QWORD *)(v29 + 16) = 0;
  *(_DWORD *)(v29 + 24) = 0;
  *(_QWORD *)(v29 + 8) = v31;
  LODWORD(v31) = v28[1].m128_i32[0];
  v28->m128_u64[1] = 0;
  *(_DWORD *)(v29 + 16) = v31;
  v32 = v28[1].m128_i32[1];
  v28[1].m128_i32[0] = 0;
  LODWORD(v31) = *(_DWORD *)(v29 + 20);
  *(_DWORD *)(v29 + 20) = v32;
  v33 = v28[1].m128_i32[2];
  v28[1].m128_i32[1] = v31;
  LODWORD(v31) = *(_DWORD *)(v29 + 24);
  *(_DWORD *)(v29 + 24) = v33;
  v28[1].m128_i32[2] = v31;
  *(_QWORD *)(v29 + 32) = v29 + 48;
  *(_QWORD *)(v29 + 40) = 0;
  if ( v28[2].m128_i32[2] )
    sub_B6A7F0(v29 + 32, (__int64)&v28[2]);
  v34 = (unsigned int)v100;
  v35 = v99;
  ++*(_DWORD *)(a1 + 32);
  v36 = &v35[15 * v34];
  if ( v35 != v36 )
  {
    do
    {
      while ( 1 )
      {
        v36 -= 15;
        v37 = (_QWORD *)v36[1];
        if ( v37 == v36 + 3 )
          break;
        free(v37);
        if ( v35 == v36 )
          goto LABEL_18;
      }
    }
    while ( v35 != v36 );
LABEL_18:
    v36 = v99;
  }
  if ( v36 != (_QWORD *)v101 )
    free(v36);
  operator delete(v96.m128_u64[1], 8LL * v98, 4);
  operator delete(0, 0, 4);
  v15 = (unsigned int)(*(_DWORD *)(a1 + 32) - 1);
  *(_DWORD *)(v23 + 8) = v15;
  return *(_QWORD *)(a1 + 24) + 48 * v15 + 8;
}
