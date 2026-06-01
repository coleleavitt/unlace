_QWORD *__fastcall sub_E3B4F0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  unsigned int v8; // r13d
  __int64 v9; // rbp
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned int v12; // eax
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  int v16; // r8d
  __int64 v17; // r8
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rsi
  int v25; // r10d
  __int64 v26; // r9
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  int i; // r13d
  __int64 v30; // rcx
  unsigned int v31; // r8d
  __int64 v32; // rdi
  __int64 v33; // r11
  int v34; // ecx
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rdx
  __int64 v40; // rsi
  int v41; // r10d
  _QWORD *v42; // rcx
  __int64 v43; // rdx
  int v44; // r13d
  __int64 v45; // rcx
  unsigned int v46; // r8d
  __int64 v47; // rdi
  __int64 v48; // r11
  int v49; // ecx
  int v50; // esi
  __int64 v51; // r9
  int v52; // r10d
  unsigned int v53; // r8d
  int v54; // esi
  int v55; // r10d
  unsigned int v56; // r8d
  _QWORD *v57; // r11
  int v58; // edi
  __int64 v59; // rcx
  _QWORD *v60; // rcx
  _QWORD *v61; // rdx
  __int64 v62; // rcx
  _QWORD *v63; // rcx
  _QWORD *v64; // rdx
  __int64 v65; // r15
  __int64 v66; // r14
  int v67; // edi
  int v68; // [rsp+4h] [rbp-44h]
  int v69; // [rsp+4h] [rbp-44h]

  v8 = *(_DWORD *)(a1 + 16);
  v9 = *(_QWORD *)a1;
  if ( !v8 )
    goto LABEL_20;
  v10 = *a2;
  v11 = v8 - 1;
  v12 = v11 & (((0xBF58476D1CE4E5B9LL * v10) >> 31) ^ (484763065 * v10));
  v13 = (_QWORD *)(v9 + 16LL * v12);
  v14 = *v13;
  if ( v10 != *v13 )
  {
    v16 = 1;
    a6 = nullptr;
    if ( v14 != -1 )
    {
      while ( 1 )
      {
        if ( v14 == -2 && !a6 )
          a6 = v13;
        v12 = v11 & (v16 + v12);
        v13 = (_QWORD *)(v9 + 16LL * v12);
        v14 = *v13;
        if ( v10 == *v13 )
          return v13 + 1;
        if ( v14 == -1 )
          break;
        ++v16;
      }
      if ( a6 )
        v13 = a6;
    }
    a4 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    a5 = (unsigned int)(4 * a4);
    if ( (unsigned int)a5 < 3 * v8 )
    {
      v17 = v8 >> 3;
      if ( v8 - *(_DWORD *)(a1 + 12) - (unsigned int)a4 > (unsigned int)v17 )
      {
        v18 = *v13;
        goto LABEL_8;
      }
      v35 = (((v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2)) >> 4) | (v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2);
      v36 = ((((v35 >> 8) | v35) >> 16) | (v35 >> 8) | v35) + 1;
      if ( (unsigned int)v36 < 0x40 )
        LODWORD(v36) = 64;
      *(_DWORD *)(a1 + 16) = v36;
      v37 = sub_22300B0(16LL * (unsigned int)v36, 8, 64, a4, v17, a6);
      *(_QWORD *)a1 = v37;
      if ( v9 )
      {
        v38 = *(unsigned int *)(a1 + 16);
        v39 = (_QWORD *)v37;
        v40 = 16LL * v8;
        *(_QWORD *)(a1 + 8) = 0;
        v41 = v38;
        v42 = (_QWORD *)(v37 + 16 * v38);
        if ( (_QWORD *)v37 != v42 )
        {
          do
          {
            *v39 = -1;
            v39 += 2;
          }
          while ( v42 != v39 );
        }
        v43 = v9;
        v44 = v41 - 1;
        do
        {
          v45 = *(_QWORD *)v43;
          if ( (unsigned __int64)(*(_QWORD *)v43 + 2LL) > 1 )
          {
            if ( !v41 )
              goto LABEL_103;
            v46 = v44 & (((0xBF58476D1CE4E5B9LL * v45) >> 31) ^ (484763065 * v45));
            v47 = v37 + 16LL * v46;
            v48 = *(_QWORD *)v47;
            if ( v45 != *(_QWORD *)v47 && v48 != -1 )
            {
              v69 = 1;
              v66 = 0;
              while ( 1 )
              {
                if ( !v66 && v48 == -2 )
                  v66 = v47;
                v46 = v44 & (v69 + v46);
                v47 = v37 + 16LL * v46;
                v48 = *(_QWORD *)v47;
                if ( v45 == *(_QWORD *)v47 )
                  break;
                if ( v48 == -1 )
                {
                  if ( v66 )
                    v47 = v66;
                  break;
                }
                ++v69;
              }
            }
            *(_QWORD *)v47 = v45;
            v49 = *(_DWORD *)(v43 + 8);
            ++*(_DWORD *)(a1 + 8);
            *(_DWORD *)(v47 + 8) = v49;
          }
          v43 += 16;
        }
        while ( v9 + v40 != v43 );
        operator delete(v9, v40, 8);
        v37 = *(_QWORD *)a1;
        v54 = *(_DWORD *)(a1 + 16);
        LODWORD(a4) = *(_DWORD *)(a1 + 8) + 1;
      }
      else
      {
        v62 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v54 = v62;
        v63 = (_QWORD *)(v37 + 16 * v62);
        if ( (_QWORD *)v37 != v63 )
        {
          v64 = (_QWORD *)v37;
          do
          {
            *v64 = -1;
            v64 += 2;
          }
          while ( v63 != v64 );
        }
        LODWORD(a4) = 1;
      }
      if ( v54 )
      {
        v51 = *a2;
        v55 = v54 - 1;
        v56 = (v54 - 1) & (((0xBF58476D1CE4E5B9LL * *a2) >> 31) ^ (484763065 * *(_DWORD *)a2));
        v13 = (_QWORD *)(v37 + 16LL * v56);
        v10 = *v13;
        v18 = *v13;
        if ( *a2 == *v13 )
          goto LABEL_8;
        if ( v10 != -1 )
        {
          v57 = (_QWORD *)(v37
                         + 16LL
                         * (v55 & ((unsigned int)((0xBF58476D1CE4E5B9LL * *a2) >> 31) ^ (484763065 * *(_DWORD *)a2))));
          v58 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( !v13 && v10 == -2 )
              v13 = v57;
            v56 = v55 & (v58 + v56);
            v57 = (_QWORD *)(v37 + 16LL * v56);
            v10 = *v57;
            if ( v51 == *v57 )
              break;
            if ( v10 == -1 )
              goto LABEL_86;
            ++v58;
          }
LABEL_57:
          v18 = v10;
          v13 = v57;
LABEL_8:
          *(_DWORD *)(a1 + 8) = a4;
          if ( v18 != -1 )
            --*(_DWORD *)(a1 + 12);
          goto LABEL_10;
        }
        goto LABEL_47;
      }
      goto LABEL_102;
    }
LABEL_20:
    v19 = (((((((2 * v8 - 1) | ((unsigned __int64)(2 * v8 - 1) >> 1)) >> 2)
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
    v20 = ((v19 >> 16) | v19) + 1;
    if ( (unsigned int)v20 < 0x40 )
      LODWORD(v20) = 64;
    *(_DWORD *)(a1 + 16) = v20;
    v21 = sub_22300B0(16LL * (unsigned int)v20, 8, 64, a4, a5, a6);
    *(_QWORD *)a1 = v21;
    if ( v9 )
    {
      v22 = *(unsigned int *)(a1 + 16);
      v23 = (_QWORD *)v21;
      v24 = 16LL * v8;
      *(_QWORD *)(a1 + 8) = 0;
      v25 = v22;
      v26 = v9 + v24;
      v27 = (_QWORD *)(v21 + 16 * v22);
      if ( (_QWORD *)v21 != v27 )
      {
        do
        {
          *v23 = -1;
          v23 += 2;
        }
        while ( v27 != v23 );
      }
      v28 = v9;
      for ( i = v25 - 1; v26 != v28; v28 += 16 )
      {
        v30 = *(_QWORD *)v28;
        if ( (unsigned __int64)(*(_QWORD *)v28 + 2LL) > 1 )
        {
          if ( !v25 )
          {
LABEL_103:
            *(_QWORD *)&dword_0 = 0;
            BUG();
          }
          v31 = i & (((0xBF58476D1CE4E5B9LL * v30) >> 31) ^ (484763065 * v30));
          v32 = v21 + 16LL * v31;
          v33 = *(_QWORD *)v32;
          if ( v30 != *(_QWORD *)v32 && v33 != -1 )
          {
            v68 = 1;
            v65 = 0;
            while ( 1 )
            {
              if ( v33 == -2 && !v65 )
                v65 = v32;
              v31 = i & (v68 + v31);
              v32 = v21 + 16LL * v31;
              v33 = *(_QWORD *)v32;
              if ( v30 == *(_QWORD *)v32 )
                break;
              if ( v33 == -1 )
              {
                if ( v65 )
                  v32 = v65;
                break;
              }
              ++v68;
            }
          }
          *(_QWORD *)v32 = v30;
          v34 = *(_DWORD *)(v28 + 8);
          ++*(_DWORD *)(a1 + 8);
          *(_DWORD *)(v32 + 8) = v34;
        }
      }
      operator delete(v9, v24, 8);
      v21 = *(_QWORD *)a1;
      v50 = *(_DWORD *)(a1 + 16);
      LODWORD(a4) = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v59 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v50 = v59;
      v60 = (_QWORD *)(v21 + 16 * v59);
      if ( (_QWORD *)v21 != v60 )
      {
        v61 = (_QWORD *)v21;
        do
        {
          *v61 = -1;
          v61 += 2;
        }
        while ( v60 != v61 );
      }
      LODWORD(a4) = 1;
    }
    if ( v50 )
    {
      v51 = *a2;
      v52 = v50 - 1;
      v53 = (v50 - 1) & (((0xBF58476D1CE4E5B9LL * *a2) >> 31) ^ (484763065 * *(_DWORD *)a2));
      v13 = (_QWORD *)(v21 + 16LL * v53);
      v10 = *v13;
      v18 = *v13;
      if ( *a2 == *v13 )
        goto LABEL_8;
      if ( v10 != -1 )
      {
        v57 = (_QWORD *)(v21
                       + 16LL
                       * (v52 & ((unsigned int)((0xBF58476D1CE4E5B9LL * *a2) >> 31) ^ (484763065 * *(_DWORD *)a2))));
        v67 = 1;
        v13 = nullptr;
        while ( 1 )
        {
          if ( !v13 && v10 == -2 )
            v13 = v57;
          v53 = v52 & (v67 + v53);
          v57 = (_QWORD *)(v21 + 16LL * v53);
          v10 = *v57;
          if ( v51 == *v57 )
            goto LABEL_57;
          if ( v10 == -1 )
          {
LABEL_86:
            if ( v13 )
            {
              v18 = *v13;
              v10 = v51;
              goto LABEL_8;
            }
            v13 = v57;
            break;
          }
          ++v67;
        }
      }
LABEL_47:
      *(_DWORD *)(a1 + 8) = a4;
      v10 = v51;
LABEL_10:
      *v13 = v10;
      *((_DWORD *)v13 + 2) = 0;
      return v13 + 1;
    }
LABEL_102:
    ++*(_DWORD *)(a1 + 8);
    BUG();
  }
  return v13 + 1;
}
