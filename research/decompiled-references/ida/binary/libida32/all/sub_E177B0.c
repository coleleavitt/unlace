_QWORD *__fastcall sub_E177B0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
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
  int v24; // r10d
  __int64 v25; // r9
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  int i; // r13d
  __int64 v29; // rcx
  unsigned int v30; // r8d
  __int64 v31; // rdi
  __int64 v32; // r11
  int v33; // ecx
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rdx
  int v39; // r10d
  __int64 v40; // r9
  _QWORD *v41; // rcx
  __int64 v42; // rdx
  int v43; // r13d
  __int64 v44; // rcx
  unsigned int v45; // r8d
  __int64 v46; // rdi
  __int64 v47; // r11
  int v48; // ecx
  int v49; // esi
  __int64 v50; // r9
  int v51; // r10d
  unsigned int v52; // r8d
  int v53; // esi
  int v54; // r10d
  unsigned int v55; // r8d
  _QWORD *v56; // r11
  int v57; // edi
  __int64 v58; // rcx
  _QWORD *v59; // rcx
  _QWORD *v60; // rdx
  __int64 v61; // rcx
  _QWORD *v62; // rcx
  _QWORD *v63; // rdx
  __int64 v64; // r15
  __int64 v65; // r14
  int v66; // edi
  int v67; // [rsp+4h] [rbp-44h]
  int v68; // [rsp+4h] [rbp-44h]

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
      v34 = (((v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2)) >> 4) | (v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2);
      v35 = ((((v34 >> 8) | v34) >> 16) | (v34 >> 8) | v34) + 1;
      if ( (unsigned int)v35 < 0x40 )
        LODWORD(v35) = 64;
      *(_DWORD *)(a1 + 16) = v35;
      v36 = sub_220C370(16LL * (unsigned int)v35, 8, 64, a4, v17, a6);
      *(_QWORD *)a1 = v36;
      if ( v9 )
      {
        v37 = *(unsigned int *)(a1 + 16);
        v38 = (_QWORD *)v36;
        *(_QWORD *)(a1 + 8) = 0;
        v39 = v37;
        v40 = v9 + 16LL * v8;
        v41 = (_QWORD *)(v36 + 16 * v37);
        if ( (_QWORD *)v36 != v41 )
        {
          do
          {
            *v38 = -1;
            v38 += 2;
          }
          while ( v41 != v38 );
        }
        v42 = v9;
        v43 = v39 - 1;
        do
        {
          v44 = *(_QWORD *)v42;
          if ( (unsigned __int64)(*(_QWORD *)v42 + 2LL) > 1 )
          {
            if ( !v39 )
              goto LABEL_103;
            v45 = v43 & (((0xBF58476D1CE4E5B9LL * v44) >> 31) ^ (484763065 * v44));
            v46 = v36 + 16LL * v45;
            v47 = *(_QWORD *)v46;
            if ( v44 != *(_QWORD *)v46 && v47 != -1 )
            {
              v68 = 1;
              v65 = 0;
              while ( 1 )
              {
                if ( !v65 && v47 == -2 )
                  v65 = v46;
                v45 = v43 & (v68 + v45);
                v46 = v36 + 16LL * v45;
                v47 = *(_QWORD *)v46;
                if ( v44 == *(_QWORD *)v46 )
                  break;
                if ( v47 == -1 )
                {
                  if ( v65 )
                    v46 = v65;
                  break;
                }
                ++v68;
              }
            }
            *(_QWORD *)v46 = v44;
            v48 = *(_DWORD *)(v42 + 8);
            ++*(_DWORD *)(a1 + 8);
            *(_DWORD *)(v46 + 8) = v48;
          }
          v42 += 16;
        }
        while ( v40 != v42 );
        operator delete();
        v36 = *(_QWORD *)a1;
        v53 = *(_DWORD *)(a1 + 16);
        LODWORD(a4) = *(_DWORD *)(a1 + 8) + 1;
      }
      else
      {
        v61 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v53 = v61;
        v62 = (_QWORD *)(v36 + 16 * v61);
        if ( (_QWORD *)v36 != v62 )
        {
          v63 = (_QWORD *)v36;
          do
          {
            *v63 = -1;
            v63 += 2;
          }
          while ( v62 != v63 );
        }
        LODWORD(a4) = 1;
      }
      if ( v53 )
      {
        v50 = *a2;
        v54 = v53 - 1;
        v55 = (v53 - 1) & (((0xBF58476D1CE4E5B9LL * *a2) >> 31) ^ (484763065 * *(_DWORD *)a2));
        v13 = (_QWORD *)(v36 + 16LL * v55);
        v10 = *v13;
        v18 = *v13;
        if ( *a2 == *v13 )
          goto LABEL_8;
        if ( v10 != -1 )
        {
          v56 = (_QWORD *)(v36
                         + 16LL
                         * (v54 & ((unsigned int)((0xBF58476D1CE4E5B9LL * *a2) >> 31) ^ (484763065 * *(_DWORD *)a2))));
          v57 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( !v13 && v10 == -2 )
              v13 = v56;
            v55 = v54 & (v57 + v55);
            v56 = (_QWORD *)(v36 + 16LL * v55);
            v10 = *v56;
            if ( v50 == *v56 )
              break;
            if ( v10 == -1 )
              goto LABEL_86;
            ++v57;
          }
LABEL_57:
          v18 = v10;
          v13 = v56;
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
    v21 = sub_220C370(16LL * (unsigned int)v20, 8, 64, a4, a5, a6);
    *(_QWORD *)a1 = v21;
    if ( v9 )
    {
      v22 = *(unsigned int *)(a1 + 16);
      v23 = (_QWORD *)v21;
      *(_QWORD *)(a1 + 8) = 0;
      v24 = v22;
      v25 = v9 + 16LL * v8;
      v26 = (_QWORD *)(v21 + 16 * v22);
      if ( (_QWORD *)v21 != v26 )
      {
        do
        {
          *v23 = -1;
          v23 += 2;
        }
        while ( v26 != v23 );
      }
      v27 = v9;
      for ( i = v24 - 1; v25 != v27; v27 += 16 )
      {
        v29 = *(_QWORD *)v27;
        if ( (unsigned __int64)(*(_QWORD *)v27 + 2LL) > 1 )
        {
          if ( !v24 )
          {
LABEL_103:
            *(_QWORD *)&dword_0 = 0;
            BUG();
          }
          v30 = i & (((0xBF58476D1CE4E5B9LL * v29) >> 31) ^ (484763065 * v29));
          v31 = v21 + 16LL * v30;
          v32 = *(_QWORD *)v31;
          if ( v29 != *(_QWORD *)v31 && v32 != -1 )
          {
            v67 = 1;
            v64 = 0;
            while ( 1 )
            {
              if ( v32 == -2 && !v64 )
                v64 = v31;
              v30 = i & (v67 + v30);
              v31 = v21 + 16LL * v30;
              v32 = *(_QWORD *)v31;
              if ( v29 == *(_QWORD *)v31 )
                break;
              if ( v32 == -1 )
              {
                if ( v64 )
                  v31 = v64;
                break;
              }
              ++v67;
            }
          }
          *(_QWORD *)v31 = v29;
          v33 = *(_DWORD *)(v27 + 8);
          ++*(_DWORD *)(a1 + 8);
          *(_DWORD *)(v31 + 8) = v33;
        }
      }
      operator delete();
      v21 = *(_QWORD *)a1;
      v49 = *(_DWORD *)(a1 + 16);
      LODWORD(a4) = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v58 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v49 = v58;
      v59 = (_QWORD *)(v21 + 16 * v58);
      if ( (_QWORD *)v21 != v59 )
      {
        v60 = (_QWORD *)v21;
        do
        {
          *v60 = -1;
          v60 += 2;
        }
        while ( v59 != v60 );
      }
      LODWORD(a4) = 1;
    }
    if ( v49 )
    {
      v50 = *a2;
      v51 = v49 - 1;
      v52 = (v49 - 1) & (((0xBF58476D1CE4E5B9LL * *a2) >> 31) ^ (484763065 * *(_DWORD *)a2));
      v13 = (_QWORD *)(v21 + 16LL * v52);
      v10 = *v13;
      v18 = *v13;
      if ( *a2 == *v13 )
        goto LABEL_8;
      if ( v10 != -1 )
      {
        v56 = (_QWORD *)(v21
                       + 16LL
                       * (v51 & ((unsigned int)((0xBF58476D1CE4E5B9LL * *a2) >> 31) ^ (484763065 * *(_DWORD *)a2))));
        v66 = 1;
        v13 = nullptr;
        while ( 1 )
        {
          if ( !v13 && v10 == -2 )
            v13 = v56;
          v52 = v51 & (v66 + v52);
          v56 = (_QWORD *)(v21 + 16LL * v52);
          v10 = *v56;
          if ( v50 == *v56 )
            goto LABEL_57;
          if ( v10 == -1 )
          {
LABEL_86:
            if ( v13 )
            {
              v18 = *v13;
              v10 = v50;
              goto LABEL_8;
            }
            v13 = v56;
            break;
          }
          ++v66;
        }
      }
LABEL_47:
      *(_DWORD *)(a1 + 8) = a4;
      v10 = v50;
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

