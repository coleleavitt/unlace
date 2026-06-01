__int64 __fastcall sub_E2F250(__int64 a1, __int64 a2)
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
  __int64 v41; // rsi
  __int64 *v42; // r9
  _QWORD *j; // rdx
  __int64 *k; // rax
  __int64 v45; // rdx
  int v46; // r8d
  int v47; // r8d
  __int64 v48; // r15
  unsigned int v49; // edi
  __int64 *v50; // rcx
  __int64 v51; // r10
  int v52; // esi
  int v53; // r10d
  unsigned int v54; // edi
  int v55; // r9d
  __int64 *v56; // r8
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  _QWORD *i; // rdx
  __int64 *v61; // rax
  __int64 v62; // rdx
  int v63; // edi
  int v64; // edi
  __int64 v65; // r11
  unsigned int v66; // esi
  __int64 *v67; // rcx
  __int64 v68; // r8
  int v69; // esi
  int v70; // r9d
  unsigned int v71; // r14d
  int v72; // r8d
  __int64 *v73; // rdi
  __int64 v74; // rcx
  _QWORD *v75; // rcx
  _QWORD *v76; // rdx
  __int64 v77; // rcx
  _QWORD *v78; // rcx
  _QWORD *v79; // rdx
  int v80; // r10d
  __int64 *v81; // r9
  int v82; // r14d
  __int64 *v83; // r11
  __int64 v84; // [rsp+0h] [rbp-58h]
  __m128 v85[4]; // [rsp+10h] [rbp-48h] BYREF

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
    sub_E2D6D0(v85, (__int64 *)(v6 + 16LL * (unsigned int)v5), (__int64 *)(v6 + 16LL * (unsigned int)v5), v2, 1);
    v10 = v85[0].m128_u64[0];
    goto LABEL_4;
  }
LABEL_3:
  sub_E2D6D0(v85, v8, (__int64 *)(16 * v5 + v6), v2, 1);
  v10 = v85[0].m128_u64[0];
LABEL_4:
  v11 = (__int64 *)(*(_QWORD *)(a1 + 248) + 16LL * *(unsigned int *)(a1 + 264));
  sub_E2D6D0(v85, v11, v11, v2, 1);
  if ( v85[0].m128_u64[0] != v10 )
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
        sub_E2D6D0(v85, v18, (__int64 *)(16 * v25 + v26), v2, 1);
        v20 = v85[0].m128_u64[0];
        goto LABEL_14;
      }
    }
LABEL_17:
    sub_E2D6D0(v85, (__int64 *)(v26 + 16LL * (unsigned int)v25), (__int64 *)(v26 + 16LL * (unsigned int)v25), v2, 1);
    v20 = v85[0].m128_u64[0];
LABEL_14:
    v21 = (__int64 *)(*(_QWORD *)(a1 + 248) + 16LL * *(unsigned int *)(a1 + 264));
    sub_E2D6D0(v85, v21, v21, v2, 1);
    if ( v85[0].m128_u64[0] != v20 )
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
      v57 = ((((v30 | (v30 >> 1)) >> 2) | v30 | (v30 >> 1)) >> 4) | ((v30 | (v30 >> 1)) >> 2) | v30 | (v30 >> 1);
      v58 = ((((v57 >> 8) | v57) >> 16) | (v57 >> 8) | v57) + 1;
      if ( (unsigned int)v58 < 0x40 )
        LODWORD(v58) = 64;
      *(_DWORD *)(a1 + 264) = v58;
      v59 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v58, 8, 64, v22, v23, v24);
      *(_QWORD *)(a1 + 248) = v59;
      if ( v29 )
      {
        *(_QWORD *)(a1 + 256) = 0;
        v84 = 2LL * v28;
        for ( i = &v59[2 * *(unsigned int *)(a1 + 264)]; i != v59; v59 += 2 )
          *v59 = -4096;
        v61 = v29;
        do
        {
          v62 = *v61;
          if ( *v61 != -8192 && v62 != -4096 )
          {
            v63 = *(_DWORD *)(a1 + 264);
            if ( !v63 )
            {
              *(_QWORD *)&dword_0 = *v61;
              BUG();
            }
            v64 = v63 - 1;
            v65 = *(_QWORD *)(a1 + 248);
            v66 = v64 & (((unsigned int)v62 >> 9) ^ ((unsigned int)v62 >> 4));
            v67 = (__int64 *)(v65 + 16LL * v66);
            v68 = *v67;
            if ( *v67 != v62 )
            {
              v80 = 1;
              v81 = nullptr;
              if ( v68 != -4096 )
              {
                while ( 1 )
                {
                  if ( v68 == -8192 && !v81 )
                    v81 = v67;
                  v66 = v64 & (v80 + v66);
                  v67 = (__int64 *)(v65 + 16LL * v66);
                  v68 = *v67;
                  if ( v62 == *v67 )
                    break;
                  if ( v68 == -4096 )
                  {
                    if ( v81 )
                      v67 = v81;
                    break;
                  }
                  ++v80;
                }
              }
            }
            *v67 = v62;
            *((_DWORD *)v67 + 2) = *((_DWORD *)v61 + 2);
            ++*(_DWORD *)(a1 + 256);
          }
          v61 += 2;
        }
        while ( &v29[v84] != v61 );
        operator delete(v29, v84 * 8, 8);
        v59 = *(_QWORD **)(a1 + 248);
        v69 = *(_DWORD *)(a1 + 264);
        LODWORD(v22) = *(_DWORD *)(a1 + 256) + 1;
      }
      else
      {
        v74 = *(unsigned int *)(a1 + 264);
        *(_QWORD *)(a1 + 256) = 0;
        v69 = v74;
        v75 = &v59[2 * v74];
        if ( v59 != v75 )
        {
          v76 = v59;
          do
          {
            *v76 = -4096;
            v76 += 2;
          }
          while ( v75 != v76 );
        }
        LODWORD(v22) = 1;
      }
      if ( v69 )
      {
        v70 = v69 - 1;
        v71 = (v69 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v32 = &v59[2 * v71];
        v37 = *v32;
        if ( a2 == *v32 )
          goto LABEL_30;
        v72 = 1;
        v73 = nullptr;
        if ( v37 != -4096 )
        {
          while ( 1 )
          {
            if ( !v73 && v37 == -8192 )
              v73 = v32;
            v71 = v70 & (v72 + v71);
            v32 = &v59[2 * v71];
            v37 = *v32;
            if ( a2 == *v32 )
              goto LABEL_30;
            if ( v37 == -4096 )
            {
              if ( !v73 )
                break;
              v37 = *v73;
              v32 = v73;
              goto LABEL_30;
            }
            ++v72;
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
  v40 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v39, 8, 64, v22, v23, v24);
  *(_QWORD *)(a1 + 248) = v40;
  if ( v29 )
  {
    *(_QWORD *)(a1 + 256) = 0;
    v41 = 2LL * v28;
    v42 = &v29[v41];
    for ( j = &v40[2 * *(unsigned int *)(a1 + 264)]; j != v40; v40 += 2 )
      *v40 = -4096;
    for ( k = v29; v42 != k; k += 2 )
    {
      v45 = *k;
      if ( *k != -8192 && v45 != -4096 )
      {
        v46 = *(_DWORD *)(a1 + 264);
        if ( !v46 )
        {
          *(_QWORD *)&dword_0 = *k;
          BUG();
        }
        v47 = v46 - 1;
        v48 = *(_QWORD *)(a1 + 248);
        v49 = v47 & (((unsigned int)v45 >> 9) ^ ((unsigned int)v45 >> 4));
        v50 = (__int64 *)(v48 + 16LL * v49);
        v51 = *v50;
        if ( *v50 != v45 )
        {
          v82 = 1;
          v83 = nullptr;
          if ( v51 != -4096 )
          {
            while ( 1 )
            {
              if ( !v83 && v51 == -8192 )
                v83 = v50;
              v49 = v47 & (v82 + v49);
              v50 = (__int64 *)(v48 + 16LL * v49);
              v51 = *v50;
              if ( v45 == *v50 )
                break;
              if ( v51 == -4096 )
              {
                if ( v83 )
                  v50 = v83;
                break;
              }
              ++v82;
            }
          }
        }
        *v50 = v45;
        *((_DWORD *)v50 + 2) = *((_DWORD *)k + 2);
        ++*(_DWORD *)(a1 + 256);
      }
    }
    operator delete(v29, v41 * 8, 8);
    v40 = *(_QWORD **)(a1 + 248);
    v52 = *(_DWORD *)(a1 + 264);
    LODWORD(v22) = *(_DWORD *)(a1 + 256) + 1;
  }
  else
  {
    v77 = *(unsigned int *)(a1 + 264);
    *(_QWORD *)(a1 + 256) = 0;
    v52 = v77;
    v78 = &v40[2 * v77];
    if ( v40 != v78 )
    {
      v79 = v40;
      do
      {
        *v79 = -4096;
        v79 += 2;
      }
      while ( v78 != v79 );
    }
    LODWORD(v22) = 1;
  }
  if ( !v52 )
    goto LABEL_121;
  v53 = v52 - 1;
  v54 = (v52 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v32 = &v40[2 * v54];
  v37 = *v32;
  if ( a2 == *v32 )
    goto LABEL_30;
  v55 = 1;
  v56 = nullptr;
  if ( v37 == -4096 )
    goto LABEL_49;
  while ( 1 )
  {
    if ( !v56 && v37 == -8192 )
      v56 = v32;
    v54 = v53 & (v55 + v54);
    v32 = &v40[2 * v54];
    v37 = *v32;
    if ( a2 == *v32 )
      break;
    if ( v37 == -4096 )
    {
      if ( !v56 )
        goto LABEL_49;
      v37 = *v56;
      v32 = v56;
      break;
    }
    ++v55;
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
