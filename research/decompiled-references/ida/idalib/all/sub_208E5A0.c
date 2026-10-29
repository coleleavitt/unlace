__int64 *__fastcall sub_208E5A0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  unsigned int v7; // r14d
  __int64 *v8; // r13
  unsigned __int64 v9; // rsi
  unsigned int v10; // r12d
  unsigned int v11; // ecx
  __int64 *v12; // rdx
  __int64 v13; // rax
  int v15; // edi
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // rsi
  int v23; // r10d
  __int64 *v24; // r9
  _QWORD *v25; // rcx
  __int64 *v26; // rdx
  int i; // r12d
  __int64 v28; // rcx
  unsigned int v29; // r8d
  __int64 v30; // rdi
  __int64 v31; // r11
  int v32; // esi
  int v33; // r8d
  unsigned int v34; // edi
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rdx
  __int64 v40; // rsi
  int v41; // r10d
  _QWORD *v42; // rcx
  __int64 *v43; // rdx
  int v44; // r14d
  __int64 v45; // rcx
  unsigned int v46; // r8d
  __int64 v47; // rdi
  __int64 v48; // r11
  int v49; // esi
  int v50; // edi
  unsigned int v51; // r12d
  __int64 *v52; // r8
  int v53; // r9d
  __int64 v54; // rcx
  _QWORD *v55; // rcx
  _QWORD *v56; // rdx
  __int64 v57; // rcx
  _QWORD *v58; // rcx
  _QWORD *v59; // rdx
  int v60; // r15d
  __int64 v61; // r14
  __int64 v62; // r15
  __int64 *v63; // r9
  int v64; // r10d
  int v65; // [rsp+4h] [rbp-44h]

  v2 = sub_20CB0D0(a1);
  v6 = *(_QWORD *)v2;
  v7 = *(_DWORD *)(*(_QWORD *)v2 + 2824LL);
  v8 = *(__int64 **)(*(_QWORD *)v2 + 2808LL);
  if ( !v7 )
    goto LABEL_20;
  v9 = v7 - 1;
  v10 = ((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4);
  v11 = v9 & v10;
  v12 = &v8[2 * ((unsigned int)v9 & v10)];
  v13 = *v12;
  if ( a1 != *v12 )
  {
    v15 = 1;
    v4 = nullptr;
    if ( v13 != -4096 )
    {
      while ( 1 )
      {
        if ( !v4 && v13 == -8192 )
          v4 = v12;
        v5 = (unsigned int)(v15 + 1);
        v11 = v9 & (v15 + v11);
        v12 = &v8[2 * v11];
        v13 = *v12;
        if ( a1 == *v12 )
          return v12 + 1;
        if ( v13 == -4096 )
          break;
        ++v15;
      }
      if ( v4 )
        v12 = v4;
    }
    v3 = (unsigned int)(*(_DWORD *)(v6 + 2816) + 1);
    if ( 4 * (int)v3 < 3 * v7 )
    {
      if ( v7 - *(_DWORD *)(v6 + 2820) - (unsigned int)v3 > v7 >> 3 )
      {
LABEL_7:
        v16 = *v12;
        goto LABEL_8;
      }
      v35 = (((((v9 >> 1) | v9 | (((v9 >> 1) | v9) >> 2)) >> 4) | (v9 >> 1) | v9 | (((v9 >> 1) | v9) >> 2)) >> 8)
          | (((v9 >> 1) | v9 | (((v9 >> 1) | v9) >> 2)) >> 4)
          | (v9 >> 1)
          | v9
          | (((v9 >> 1) | v9) >> 2);
      v36 = ((v35 >> 16) | v35) + 1;
      if ( (unsigned int)v36 < 0x40 )
        LODWORD(v36) = 64;
      *(_DWORD *)(v6 + 2824) = v36;
      v37 = sub_22300B0(16LL * (unsigned int)v36, 8, 64, v3, v4, v5);
      *(_QWORD *)(v6 + 2808) = v37;
      if ( v8 )
      {
        v38 = *(unsigned int *)(v6 + 2824);
        v39 = (_QWORD *)v37;
        *(_QWORD *)(v6 + 2816) = 0;
        v40 = 2LL * v7;
        v41 = v38;
        v42 = (_QWORD *)(v37 + 16 * v38);
        if ( (_QWORD *)v37 != v42 )
        {
          do
          {
            *v39 = -4096;
            v39 += 2;
          }
          while ( v42 != v39 );
        }
        v43 = v8;
        v44 = v41 - 1;
        do
        {
          v45 = *v43;
          if ( *v43 != -4096 && v45 != -8192 )
          {
            if ( !v41 )
            {
              *(_QWORD *)&dword_0 = *v43;
              BUG();
            }
            v46 = v44 & (((unsigned int)v45 >> 9) ^ ((unsigned int)v45 >> 4));
            v47 = v37 + 16LL * v46;
            v48 = *(_QWORD *)v47;
            if ( v45 != *(_QWORD *)v47 && v48 != -4096 )
            {
              v65 = 1;
              v62 = 0;
              while ( 1 )
              {
                if ( v48 == -8192 && !v62 )
                  v62 = v47;
                v46 = v44 & (v65 + v46);
                v47 = v37 + 16LL * v46;
                v48 = *(_QWORD *)v47;
                if ( v45 == *(_QWORD *)v47 )
                  break;
                if ( v48 == -4096 )
                {
                  if ( v62 )
                    v47 = v62;
                  break;
                }
                ++v65;
              }
            }
            *(_QWORD *)v47 = v45;
            *(_DWORD *)(v47 + 8) = *((_DWORD *)v43 + 2);
            ++*(_DWORD *)(v6 + 2816);
          }
          v43 += 2;
        }
        while ( &v8[v40] != v43 );
        operator delete(v8, v40 * 8, 8);
        v37 = *(_QWORD *)(v6 + 2808);
        v49 = *(_DWORD *)(v6 + 2824);
        LODWORD(v3) = *(_DWORD *)(v6 + 2816) + 1;
      }
      else
      {
        v57 = *(unsigned int *)(v6 + 2824);
        *(_QWORD *)(v6 + 2816) = 0;
        v49 = v57;
        v58 = (_QWORD *)(v37 + 16 * v57);
        if ( (_QWORD *)v37 != v58 )
        {
          v59 = (_QWORD *)v37;
          do
          {
            *v59 = -4096;
            v59 += 2;
          }
          while ( v58 != v59 );
        }
        LODWORD(v3) = 1;
      }
      if ( v49 )
      {
        v50 = v49 - 1;
        v51 = (v49 - 1) & v10;
        v12 = (__int64 *)(v37 + 16LL * v51);
        v16 = *v12;
        if ( a1 != *v12 )
        {
          if ( v16 != -4096 )
          {
            v52 = (__int64 *)(v37 + 16LL * v51);
            v53 = 1;
            v12 = nullptr;
            while ( 1 )
            {
              if ( v16 == -8192 && !v12 )
                v12 = v52;
              v51 = v50 & (v53 + v51);
              v52 = (__int64 *)(v37 + 16LL * v51);
              v16 = *v52;
              if ( a1 == *v52 )
              {
                v12 = (__int64 *)(v37 + 16LL * v51);
                goto LABEL_8;
              }
              if ( v16 == -4096 )
                break;
              ++v53;
            }
            if ( v12 )
              goto LABEL_7;
            v12 = (__int64 *)(v37 + 16LL * v51);
          }
LABEL_36:
          *(_DWORD *)(v6 + 2816) = v3;
LABEL_10:
          *v12 = a1;
          *((_BYTE *)v12 + 8) &= 0xF0u;
          return v12 + 1;
        }
        goto LABEL_8;
      }
      goto LABEL_105;
    }
LABEL_20:
    v17 = (((((((2 * v7 - 1) | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 2)
            | (2 * v7 - 1)
            | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 4)
          | (((2 * v7 - 1) | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 2)
          | (2 * v7 - 1)
          | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 8)
        | (((((2 * v7 - 1) | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 2)
          | (2 * v7 - 1)
          | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 4)
        | (((2 * v7 - 1) | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 2)
        | (2 * v7 - 1)
        | ((unsigned __int64)(2 * v7 - 1) >> 1);
    v18 = ((v17 >> 16) | v17) + 1;
    if ( (unsigned int)v18 < 0x40 )
      LODWORD(v18) = 64;
    *(_DWORD *)(v6 + 2824) = v18;
    v19 = sub_22300B0(16LL * (unsigned int)v18, 8, 64, v3, v4, v5);
    *(_QWORD *)(v6 + 2808) = v19;
    if ( v8 )
    {
      v20 = *(unsigned int *)(v6 + 2824);
      v21 = (_QWORD *)v19;
      *(_QWORD *)(v6 + 2816) = 0;
      v22 = 2LL * v7;
      v23 = v20;
      v24 = &v8[v22];
      v25 = (_QWORD *)(v19 + 16 * v20);
      if ( (_QWORD *)v19 != v25 )
      {
        do
        {
          *v21 = -4096;
          v21 += 2;
        }
        while ( v25 != v21 );
      }
      v26 = v8;
      for ( i = v23 - 1; v24 != v26; v26 += 2 )
      {
        v28 = *v26;
        if ( *v26 != -8192 && v28 != -4096 )
        {
          if ( !v23 )
          {
            *(_QWORD *)&dword_0 = *v26;
            BUG();
          }
          v29 = i & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
          v30 = v19 + 16LL * v29;
          v31 = *(_QWORD *)v30;
          if ( *(_QWORD *)v30 != v28 )
          {
            v60 = 1;
            v61 = 0;
            if ( v31 != -4096 )
            {
              while ( 1 )
              {
                if ( v31 == -8192 && !v61 )
                  v61 = v30;
                v29 = i & (v60 + v29);
                v30 = v19 + 16LL * v29;
                v31 = *(_QWORD *)v30;
                if ( v28 == *(_QWORD *)v30 )
                  break;
                if ( v31 == -4096 )
                {
                  if ( v61 )
                    v30 = v61;
                  break;
                }
                ++v60;
              }
            }
          }
          *(_QWORD *)v30 = v28;
          *(_DWORD *)(v30 + 8) = *((_DWORD *)v26 + 2);
          ++*(_DWORD *)(v6 + 2816);
        }
      }
      operator delete(v8, v22 * 8, 8);
      v19 = *(_QWORD *)(v6 + 2808);
      v32 = *(_DWORD *)(v6 + 2824);
      LODWORD(v3) = *(_DWORD *)(v6 + 2816) + 1;
    }
    else
    {
      v54 = *(unsigned int *)(v6 + 2824);
      *(_QWORD *)(v6 + 2816) = 0;
      v32 = v54;
      v55 = (_QWORD *)(v19 + 16 * v54);
      if ( (_QWORD *)v19 != v55 )
      {
        v56 = (_QWORD *)v19;
        do
        {
          *v56 = -4096;
          v56 += 2;
        }
        while ( v55 != v56 );
      }
      LODWORD(v3) = 1;
    }
    if ( v32 )
    {
      v33 = v32 - 1;
      v34 = (v32 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
      v12 = (__int64 *)(v19 + 16LL * v34);
      v16 = *v12;
      if ( a1 != *v12 )
      {
        if ( v16 != -4096 )
        {
          v63 = (__int64 *)(v19 + 16LL * (v33 & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4))));
          v64 = 1;
          v12 = nullptr;
          while ( 1 )
          {
            if ( v16 == -8192 && !v12 )
              v12 = v63;
            v34 = v33 & (v64 + v34);
            v63 = (__int64 *)(v19 + 16LL * v34);
            v16 = *v63;
            if ( a1 == *v63 )
            {
              v12 = (__int64 *)(v19 + 16LL * v34);
              goto LABEL_8;
            }
            if ( v16 == -4096 )
              break;
            ++v64;
          }
          if ( v12 )
            goto LABEL_7;
          v12 = (__int64 *)(v19 + 16LL * v34);
        }
        goto LABEL_36;
      }
LABEL_8:
      *(_DWORD *)(v6 + 2816) = v3;
      if ( v16 != -4096 )
        --*(_DWORD *)(v6 + 2820);
      goto LABEL_10;
    }
LABEL_105:
    ++*(_DWORD *)(v6 + 2816);
    BUG();
  }
  return v12 + 1;
}
