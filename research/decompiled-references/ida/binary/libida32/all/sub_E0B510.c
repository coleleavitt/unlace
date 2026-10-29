__int64 __fastcall sub_E0B510(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 *v8; // rsi
  __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __int64 *v11; // rsi
  int v13; // esi
  int v14; // r9d
  __int64 v15; // rdi
  __int64 v16; // r14
  unsigned int v17; // eax
  __int64 *v18; // rsi
  __int64 v19; // rdi
  unsigned __int64 v20; // r15
  __int64 *v21; // rsi
  __int64 v22; // rcx
  __int64 *v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // r12d
  unsigned int v28; // r15d
  __int64 *v29; // r13
  unsigned __int64 v30; // rsi
  unsigned int v31; // ecx
  __int64 *v32; // rdx
  __int64 v33; // rax
  int v34; // esi
  int v35; // edi
  int v36; // edi
  __int64 v37; // rsi
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 *v41; // r9
  _QWORD *j; // rdx
  __int64 *k; // rax
  __int64 v44; // rdx
  int v45; // r8d
  int v46; // r8d
  __int64 v47; // r15
  unsigned int v48; // edi
  __int64 *v49; // rcx
  __int64 v50; // r10
  int v51; // esi
  int v52; // r10d
  unsigned int v53; // edi
  int v54; // r9d
  __int64 *v55; // r8
  unsigned __int64 v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  _QWORD *i; // rdx
  __int64 *v60; // rax
  __int64 v61; // rdx
  int v62; // edi
  int v63; // edi
  __int64 v64; // r11
  unsigned int v65; // esi
  __int64 *v66; // rcx
  __int64 v67; // r8
  int v68; // esi
  int v69; // r9d
  unsigned int v70; // r14d
  int v71; // r8d
  __int64 *v72; // rdi
  __int64 v73; // rcx
  _QWORD *v74; // rcx
  _QWORD *v75; // rdx
  __int64 v76; // rcx
  _QWORD *v77; // rcx
  _QWORD *v78; // rdx
  int v79; // r10d
  __int64 *v80; // r9
  int v81; // r14d
  __int64 *v82; // r11
  __m128 v83[4]; // [rsp+10h] [rbp-48h] BYREF

  v2 = a1 + 248;
  v5 = *(unsigned int *)(a1 + 264);
  v6 = *(_QWORD *)(a1 + 248);
  if ( !(_DWORD)v5 )
    goto LABEL_9;
  v7 = (v5 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v8 = (__int64 *)(v6 + 16LL * v7);
  v9 = *v8;
  if ( a2 != *v8 )
  {
    v13 = 1;
    if ( v9 != -4096 )
    {
      do
      {
        v14 = v13 + 1;
        v7 = (v5 - 1) & (v13 + v7);
        v8 = (__int64 *)(v6 + 16LL * v7);
        v15 = *v8;
        if ( a2 == *v8 )
          goto LABEL_3;
        v13 = v14;
      }
      while ( v15 != -4096 );
    }
LABEL_9:
    sub_E09990(v83, (__int64 *)(v6 + 16LL * (unsigned int)v5), (__int64 *)(v6 + 16LL * (unsigned int)v5), v2, 1);
    v10 = v83[0].m128_u64[0];
    goto LABEL_4;
  }
LABEL_3:
  sub_E09990(v83, v8, (__int64 *)(16 * v5 + v6), v2, 1);
  v10 = v83[0].m128_u64[0];
LABEL_4:
  v11 = (__int64 *)(*(_QWORD *)(a1 + 248) + 16LL * *(unsigned int *)(a1 + 264));
  sub_E09990(v83, v11, v11, v2, 1);
  if ( v83[0].m128_u64[0] != v10 )
    return *(unsigned int *)(v10 + 8) | 0x100000000LL;
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
  if ( !v16 )
    return 0;
  while ( 1 )
  {
    v25 = *(unsigned int *)(a1 + 264);
    v26 = *(_QWORD *)(a1 + 248);
    if ( (_DWORD)v25 )
    {
      v17 = (v25 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
      v18 = (__int64 *)(v26 + 16LL * v17);
      v19 = *v18;
      if ( v16 == *v18 )
        goto LABEL_13;
      v34 = 1;
      if ( v19 != -4096 )
      {
        while ( 1 )
        {
          v35 = v34 + 1;
          v17 = (v25 - 1) & (v34 + v17);
          v18 = (__int64 *)(v26 + 16LL * v17);
          if ( v16 == *v18 )
            break;
          if ( *v18 == -4096 )
            goto LABEL_17;
          v34 = v35;
        }
LABEL_13:
        sub_E09990(v83, v18, (__int64 *)(16 * v25 + v26), v2, 1);
        v20 = v83[0].m128_u64[0];
        goto LABEL_14;
      }
    }
LABEL_17:
    sub_E09990(v83, (__int64 *)(v26 + 16LL * (unsigned int)v25), (__int64 *)(v26 + 16LL * (unsigned int)v25), v2, 1);
    v20 = v83[0].m128_u64[0];
LABEL_14:
    v21 = (__int64 *)(*(_QWORD *)(a1 + 248) + 16LL * *(unsigned int *)(a1 + 264));
    sub_E09990(v83, v21, v21, v2, 1);
    if ( v83[0].m128_u64[0] != v20 )
      break;
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 48LL))(v16);
    if ( !v16 )
      return 0;
  }
  v27 = *(_DWORD *)(v20 + 8);
  v28 = *(_DWORD *)(a1 + 264);
  v29 = *(__int64 **)(a1 + 248);
  if ( v28 )
  {
    v30 = v28 - 1;
    v31 = v30 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v32 = &v29[2 * v31];
    v33 = *v32;
    if ( a2 == *v32 )
      goto LABEL_20;
    v36 = 1;
    v23 = nullptr;
    if ( v33 != -4096 )
    {
      while ( 1 )
      {
        if ( v33 == -8192 && !v23 )
          v23 = v32;
        v24 = (unsigned int)(v36 + 1);
        v31 = v30 & (v36 + v31);
        v32 = &v29[2 * v31];
        v33 = *v32;
        if ( a2 == *v32 )
          goto LABEL_20;
        if ( v33 == -4096 )
          break;
        ++v36;
      }
      if ( v23 )
        v32 = v23;
    }
    v22 = (unsigned int)(*(_DWORD *)(a1 + 256) + 1);
    if ( 4 * (int)v22 < 3 * v28 )
    {
      if ( v28 - *(_DWORD *)(a1 + 260) - (unsigned int)v22 > v28 >> 3 )
      {
        v37 = *v32;
        goto LABEL_30;
      }
      v56 = ((((v30 | (v30 >> 1)) >> 2) | v30 | (v30 >> 1)) >> 4) | ((v30 | (v30 >> 1)) >> 2) | v30 | (v30 >> 1);
      v57 = ((((v56 >> 8) | v56) >> 16) | (v56 >> 8) | v56) + 1;
      if ( (unsigned int)v57 < 0x40 )
        LODWORD(v57) = 64;
      *(_DWORD *)(a1 + 264) = v57;
      v58 = (_QWORD *)sub_220C370(16LL * (unsigned int)v57, 8, 64, v22, v23, v24);
      *(_QWORD *)(a1 + 248) = v58;
      if ( v29 )
      {
        *(_QWORD *)(a1 + 256) = 0;
        for ( i = &v58[2 * *(unsigned int *)(a1 + 264)]; i != v58; v58 += 2 )
          *v58 = -4096;
        v60 = v29;
        do
        {
          v61 = *v60;
          if ( *v60 != -8192 && v61 != -4096 )
          {
            v62 = *(_DWORD *)(a1 + 264);
            if ( !v62 )
            {
              *(_QWORD *)&dword_0 = *v60;
              BUG();
            }
            v63 = v62 - 1;
            v64 = *(_QWORD *)(a1 + 248);
            v65 = v63 & (((unsigned int)v61 >> 9) ^ ((unsigned int)v61 >> 4));
            v66 = (__int64 *)(v64 + 16LL * v65);
            v67 = *v66;
            if ( *v66 != v61 )
            {
              v79 = 1;
              v80 = nullptr;
              if ( v67 != -4096 )
              {
                while ( 1 )
                {
                  if ( v67 == -8192 && !v80 )
                    v80 = v66;
                  v65 = v63 & (v79 + v65);
                  v66 = (__int64 *)(v64 + 16LL * v65);
                  v67 = *v66;
                  if ( v61 == *v66 )
                    break;
                  if ( v67 == -4096 )
                  {
                    if ( v80 )
                      v66 = v80;
                    break;
                  }
                  ++v79;
                }
              }
            }
            *v66 = v61;
            *((_DWORD *)v66 + 2) = *((_DWORD *)v60 + 2);
            ++*(_DWORD *)(a1 + 256);
          }
          v60 += 2;
        }
        while ( &v29[2 * v28] != v60 );
        operator delete();
        v58 = *(_QWORD **)(a1 + 248);
        v68 = *(_DWORD *)(a1 + 264);
        LODWORD(v22) = *(_DWORD *)(a1 + 256) + 1;
      }
      else
      {
        v73 = *(unsigned int *)(a1 + 264);
        *(_QWORD *)(a1 + 256) = 0;
        v68 = v73;
        v74 = &v58[2 * v73];
        if ( v58 != v74 )
        {
          v75 = v58;
          do
          {
            *v75 = -4096;
            v75 += 2;
          }
          while ( v74 != v75 );
        }
        LODWORD(v22) = 1;
      }
      if ( v68 )
      {
        v69 = v68 - 1;
        v70 = (v68 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v32 = &v58[2 * v70];
        v37 = *v32;
        if ( a2 == *v32 )
          goto LABEL_30;
        v71 = 1;
        v72 = nullptr;
        if ( v37 != -4096 )
        {
          while ( 1 )
          {
            if ( !v72 && v37 == -8192 )
              v72 = v32;
            v70 = v69 & (v71 + v70);
            v32 = &v58[2 * v70];
            v37 = *v32;
            if ( a2 == *v32 )
              goto LABEL_30;
            if ( v37 == -4096 )
            {
              if ( !v72 )
                break;
              v37 = *v72;
              v32 = v72;
              goto LABEL_30;
            }
            ++v71;
          }
        }
LABEL_49:
        *(_DWORD *)(a1 + 256) = v22;
        goto LABEL_32;
      }
LABEL_121:
      ++*(_DWORD *)(a1 + 256);
      BUG();
    }
  }
  v38 = (((((((2 * v28 - 1) | ((unsigned __int64)(2 * v28 - 1) >> 1)) >> 2)
          | (2 * v28 - 1)
          | ((unsigned __int64)(2 * v28 - 1) >> 1)) >> 4)
        | (((2 * v28 - 1) | ((unsigned __int64)(2 * v28 - 1) >> 1)) >> 2)
        | (2 * v28 - 1)
        | ((unsigned __int64)(2 * v28 - 1) >> 1)) >> 8)
      | (((((2 * v28 - 1) | ((unsigned __int64)(2 * v28 - 1) >> 1)) >> 2)
        | (2 * v28 - 1)
        | ((unsigned __int64)(2 * v28 - 1) >> 1)) >> 4)
      | (((2 * v28 - 1) | ((unsigned __int64)(2 * v28 - 1) >> 1)) >> 2)
      | (2 * v28 - 1)
      | ((unsigned __int64)(2 * v28 - 1) >> 1);
  v39 = ((v38 >> 16) | v38) + 1;
  if ( (unsigned int)v39 < 0x40 )
    LODWORD(v39) = 64;
  *(_DWORD *)(a1 + 264) = v39;
  v40 = (_QWORD *)sub_220C370(16LL * (unsigned int)v39, 8, 64, v22, v23, v24);
  *(_QWORD *)(a1 + 248) = v40;
  if ( v29 )
  {
    *(_QWORD *)(a1 + 256) = 0;
    v41 = &v29[2 * v28];
    for ( j = &v40[2 * *(unsigned int *)(a1 + 264)]; j != v40; v40 += 2 )
      *v40 = -4096;
    for ( k = v29; v41 != k; k += 2 )
    {
      v44 = *k;
      if ( *k != -8192 && v44 != -4096 )
      {
        v45 = *(_DWORD *)(a1 + 264);
        if ( !v45 )
        {
          *(_QWORD *)&dword_0 = *k;
          BUG();
        }
        v46 = v45 - 1;
        v47 = *(_QWORD *)(a1 + 248);
        v48 = v46 & (((unsigned int)v44 >> 9) ^ ((unsigned int)v44 >> 4));
        v49 = (__int64 *)(v47 + 16LL * v48);
        v50 = *v49;
        if ( *v49 != v44 )
        {
          v81 = 1;
          v82 = nullptr;
          if ( v50 != -4096 )
          {
            while ( 1 )
            {
              if ( !v82 && v50 == -8192 )
                v82 = v49;
              v48 = v46 & (v81 + v48);
              v49 = (__int64 *)(v47 + 16LL * v48);
              v50 = *v49;
              if ( v44 == *v49 )
                break;
              if ( v50 == -4096 )
              {
                if ( v82 )
                  v49 = v82;
                break;
              }
              ++v81;
            }
          }
        }
        *v49 = v44;
        *((_DWORD *)v49 + 2) = *((_DWORD *)k + 2);
        ++*(_DWORD *)(a1 + 256);
      }
    }
    operator delete();
    v40 = *(_QWORD **)(a1 + 248);
    v51 = *(_DWORD *)(a1 + 264);
    LODWORD(v22) = *(_DWORD *)(a1 + 256) + 1;
  }
  else
  {
    v76 = *(unsigned int *)(a1 + 264);
    *(_QWORD *)(a1 + 256) = 0;
    v51 = v76;
    v77 = &v40[2 * v76];
    if ( v40 != v77 )
    {
      v78 = v40;
      do
      {
        *v78 = -4096;
        v78 += 2;
      }
      while ( v77 != v78 );
    }
    LODWORD(v22) = 1;
  }
  if ( !v51 )
    goto LABEL_121;
  v52 = v51 - 1;
  v53 = (v51 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v32 = &v40[2 * v53];
  v37 = *v32;
  if ( a2 == *v32 )
    goto LABEL_30;
  v54 = 1;
  v55 = nullptr;
  if ( v37 == -4096 )
    goto LABEL_49;
  while ( 1 )
  {
    if ( !v55 && v37 == -8192 )
      v55 = v32;
    v53 = v52 & (v54 + v53);
    v32 = &v40[2 * v53];
    v37 = *v32;
    if ( a2 == *v32 )
      break;
    if ( v37 == -4096 )
    {
      if ( !v55 )
        goto LABEL_49;
      v37 = *v55;
      v32 = v55;
      break;
    }
    ++v54;
  }
LABEL_30:
  *(_DWORD *)(a1 + 256) = v22;
  if ( v37 != -4096 )
    --*(_DWORD *)(a1 + 260);
LABEL_32:
  *v32 = a2;
  *((_DWORD *)v32 + 2) = 0;
LABEL_20:
  *((_DWORD *)v32 + 2) = v27;
  return 0;
}

