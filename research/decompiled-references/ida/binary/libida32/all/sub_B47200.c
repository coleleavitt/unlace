__int64 __fastcall sub_B47200(
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
  int v43; // r10d
  _QWORD *v44; // r9
  _QWORD *v45; // rcx
  _QWORD *v46; // rdx
  int i; // r13d
  __int64 v48; // rcx
  unsigned int v49; // r8d
  __int64 v50; // rdi
  __int64 v51; // r11
  int v52; // ecx
  int v53; // ecx
  int v54; // r8d
  unsigned int v55; // edi
  __int64 v56; // rbp
  _QWORD *v57; // rdx
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  _QWORD *v62; // rdx
  int v63; // r10d
  _QWORD *v64; // r9
  _QWORD *v65; // rcx
  _QWORD *v66; // rdx
  int v67; // r13d
  unsigned int v68; // r8d
  __int64 v69; // rdi
  __int64 v70; // r11
  int v71; // ecx
  int v72; // ecx
  int v73; // r8d
  unsigned int v74; // edi
  unsigned __int64 v75; // rbp
  __int64 v76; // rdi
  __int64 v77; // rbp
  _QWORD *v78; // rdx
  int v79; // r15d
  __int64 v80; // r14
  int v81; // r15d
  __int64 v82; // r14
  unsigned __int64 *v83; // r10
  int v84; // ecx
  unsigned __int64 *v85; // r9
  int v86; // r10d
  int v87; // [rsp+Ch] [rbp-9Ch]
  __int64 v88; // [rsp+10h] [rbp-98h]
  __int64 v89; // [rsp+18h] [rbp-90h]
  int v90; // [rsp+20h] [rbp-88h]
  int v91; // [rsp+24h] [rbp-84h]
  char *v92; // [rsp+28h] [rbp-80h]
  __int64 v93; // [rsp+30h] [rbp-78h]
  char v94; // [rsp+38h] [rbp-70h] BYREF
  __m128 v95; // [rsp+40h] [rbp-68h] BYREF
  __int64 v96; // [rsp+50h] [rbp-58h]
  int v97; // [rsp+58h] [rbp-50h]
  _BYTE *v98; // [rsp+60h] [rbp-48h]
  __int64 v99; // [rsp+68h] [rbp-40h]
  _BYTE v100[56]; // [rsp+70h] [rbp-38h] BYREF

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
      sub_B45F90(&v95, v13, &v9[2 * v8], a1, 1);
      v15 = *(unsigned int *)(v95.m128_u64[0] + 8);
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
      v58 = (((v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2)) >> 4) | (v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2);
      v59 = ((((v58 >> 8) | v58) >> 16) | (v58 >> 8) | v58) + 1;
      if ( (unsigned int)v59 < 0x40 )
        LODWORD(v59) = 64;
      *(_DWORD *)(a1 + 16) = v59;
      v60 = sub_220C370(16LL * (unsigned int)v59, 8, 64, v19, v20, a6);
      *(_QWORD *)a1 = v60;
      if ( v9 )
      {
        v61 = *(unsigned int *)(a1 + 16);
        v62 = (_QWORD *)v60;
        *(_QWORD *)(a1 + 8) = 0;
        v63 = v61;
        v64 = &v9[2 * v8];
        v65 = (_QWORD *)(v60 + 16 * v61);
        if ( (_QWORD *)v60 != v65 )
        {
          do
          {
            *v62 = -4096;
            v62 += 2;
          }
          while ( v65 != v62 );
        }
        v66 = v9;
        v67 = v63 - 1;
        do
        {
          v48 = *v66;
          if ( *v66 != -8192 && v48 != -4096 )
          {
            if ( !v63 )
              goto LABEL_123;
            v68 = v67 & (((unsigned int)v48 >> 9) ^ ((unsigned int)v48 >> 4));
            v69 = v60 + 16LL * v68;
            v70 = *(_QWORD *)v69;
            if ( v48 != *(_QWORD *)v69 )
            {
              v81 = 1;
              v82 = 0;
              if ( v70 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v82 && v70 == -8192 )
                    v82 = v69;
                  v68 = v67 & (v81 + v68);
                  v87 = v81 + 1;
                  v69 = v60 + 16LL * v68;
                  v70 = *(_QWORD *)v69;
                  if ( v48 == *(_QWORD *)v69 )
                    break;
                  if ( v70 == -4096 )
                  {
                    if ( v82 )
                      v69 = v82;
                    break;
                  }
                  v81 = v87;
                }
              }
            }
            *(_QWORD *)v69 = v48;
            v71 = *((_DWORD *)v66 + 2);
            ++*(_DWORD *)(a1 + 8);
            *(_DWORD *)(v69 + 8) = v71;
          }
          v66 += 2;
        }
        while ( v64 != v66 );
        operator delete();
        v9 = *(_QWORD **)a1;
        v72 = *(_DWORD *)(a1 + 16);
        v18 = *(_DWORD *)(a1 + 8) + 1;
      }
      else
      {
        v77 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v72 = v77;
        v9 = (_QWORD *)(v60 + 16 * v77);
        if ( (_QWORD *)v60 != v9 )
        {
          v78 = (_QWORD *)v60;
          do
          {
            *v78 = -4096;
            v78 += 2;
          }
          while ( v9 != v78 );
          v9 = (_QWORD *)v60;
        }
        v18 = 1;
      }
      if ( v72 )
      {
        v73 = v72 - 1;
        v74 = (v72 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
        v13 = &v9[2 * v74];
        v10 = *v13;
        v21 = *v13;
        if ( *a2 != *v13 )
        {
          if ( v10 == -4096 )
          {
            v10 = *a2;
            goto LABEL_40;
          }
          v83 = &v9[2 * (v73 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4)))];
          v84 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( !v13 && v10 == -8192 )
              v13 = v83;
            v74 = v73 & (v84 + v74);
            v83 = &v9[2 * v74];
            v10 = *v83;
            if ( *a2 == *v83 )
            {
              v21 = *v83;
              v13 = &v9[2 * v74];
              goto LABEL_9;
            }
            if ( v10 == -4096 )
              break;
            ++v84;
          }
          if ( !v13 )
          {
            v10 = *a2;
            v13 = &v9[2 * v74];
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
  v40 = sub_220C370(16LL * (unsigned int)v39, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = v40;
  if ( v9 )
  {
    v41 = *(unsigned int *)(a1 + 16);
    v42 = (_QWORD *)v40;
    *(_QWORD *)(a1 + 8) = 0;
    v43 = v41;
    v44 = &v9[2 * v8];
    v45 = (_QWORD *)(v40 + 16 * v41);
    if ( (_QWORD *)v40 != v45 )
    {
      do
      {
        *v42 = -4096;
        v42 += 2;
      }
      while ( v45 != v42 );
    }
    v46 = v9;
    for ( i = v43 - 1; v44 != v46; v46 += 2 )
    {
      v48 = *v46;
      if ( *v46 != -4096 && v48 != -8192 )
      {
        if ( !v43 )
        {
LABEL_123:
          *(_QWORD *)&dword_0 = v48;
          BUG();
        }
        v49 = i & (((unsigned int)v48 >> 9) ^ ((unsigned int)v48 >> 4));
        v50 = v40 + 16LL * v49;
        v51 = *(_QWORD *)v50;
        if ( v48 != *(_QWORD *)v50 )
        {
          v79 = 1;
          v80 = 0;
          if ( v51 != -4096 )
          {
            while ( 1 )
            {
              if ( v51 == -8192 && !v80 )
                v80 = v50;
              v49 = i & (v79 + v49);
              v87 = v79 + 1;
              v50 = v40 + 16LL * v49;
              v51 = *(_QWORD *)v50;
              if ( v48 == *(_QWORD *)v50 )
                break;
              if ( v51 == -4096 )
              {
                if ( v80 )
                  v50 = v80;
                break;
              }
              v79 = v87;
            }
          }
        }
        *(_QWORD *)v50 = v48;
        v52 = *((_DWORD *)v46 + 2);
        ++*(_DWORD *)(a1 + 8);
        *(_DWORD *)(v50 + 8) = v52;
      }
    }
    operator delete();
    v9 = *(_QWORD **)a1;
    v53 = *(_DWORD *)(a1 + 16);
    v18 = *(_DWORD *)(a1 + 8) + 1;
  }
  else
  {
    v56 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v53 = v56;
    v9 = (_QWORD *)(v40 + 16 * v56);
    if ( (_QWORD *)v40 != v9 )
    {
      v57 = (_QWORD *)v40;
      do
      {
        *v57 = -4096;
        v57 += 2;
      }
      while ( v9 != v57 );
      v9 = (_QWORD *)v40;
    }
    v18 = 1;
  }
  if ( !v53 )
    goto LABEL_122;
  v10 = *a2;
  v54 = v53 - 1;
  v55 = (v53 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  v13 = &v9[2 * v55];
  v21 = *v13;
  if ( *v13 == *a2 )
    goto LABEL_9;
  if ( v21 != -4096 )
  {
    v85 = &v9[2 * (v54 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4)))];
    v86 = 1;
    v13 = nullptr;
    while ( 1 )
    {
      if ( v21 == -8192 && !v13 )
        v13 = v85;
      v55 = v54 & (v86 + v55);
      v85 = &v9[2 * v55];
      v21 = *v85;
      if ( v10 == *v85 )
      {
        v13 = &v9[2 * v55];
        goto LABEL_9;
      }
      if ( v21 == -4096 )
        break;
      ++v86;
    }
    if ( v13 )
      goto LABEL_8;
    v13 = &v9[2 * v55];
  }
LABEL_40:
  *(_DWORD *)(a1 + 8) = v18;
LABEL_11:
  *v13 = v10;
  *((_DWORD *)v13 + 2) = 0;
  sub_B45F90(&v95, v13, &v9[2 * *(unsigned int *)(a1 + 16)], a1, 1);
  v22 = *(unsigned int *)(a1 + 36);
  v23 = v95.m128_u64[0];
  v92 = &v94;
  v24 = *a2;
  v91 = 0;
  v95 = (__m128)v24;
  v98 = v100;
  v25 = *(unsigned int *)(a1 + 32);
  v88 = 0;
  v26 = v25 + 1;
  v89 = 0;
  v90 = 0;
  v93 = 0;
  v96 = 0;
  v97 = 0;
  v99 = 0;
  if ( v25 + 1 > v22 )
  {
    v75 = *(_QWORD *)(a1 + 24);
    v76 = a1 + 24;
    if ( v75 > (unsigned __int64)&v95 || (unsigned __int64)&v95 >= v75 + 48 * v25 )
    {
      sub_B47020(v76, v26);
      v27 = *(_QWORD *)(a1 + 24);
      v25 = *(unsigned int *)(a1 + 32);
      v28 = &v95;
    }
    else
    {
      sub_B47020(v76, v26);
      v27 = *(_QWORD *)(a1 + 24);
      v25 = *(unsigned int *)(a1 + 32);
      v28 = (__m128 *)((char *)&v95 + v27 - v75);
    }
  }
  else
  {
    v27 = *(_QWORD *)(a1 + 24);
    v28 = &v95;
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
    sub_B46AB0(v29 + 32, (__int64)&v28[2]);
  v34 = (unsigned int)v99;
  v35 = v98;
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
    v36 = v98;
  }
  if ( v36 != (_QWORD *)v100 )
    free(v36);
  operator delete();
  operator delete();
  v15 = (unsigned int)(*(_DWORD *)(a1 + 32) - 1);
  *(_DWORD *)(v23 + 8) = v15;
  return *(_QWORD *)(a1 + 24) + 48 * v15 + 8;
}

