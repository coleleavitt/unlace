_QWORD *__fastcall sub_9ABB30(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  unsigned int v8; // r13d
  __int64 v9; // rbp
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned int v12; // ecx
  _QWORD *v13; // rdx
  __int64 v14; // rax
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
  int v35; // edi
  int v36; // r9d
  unsigned int v37; // r8d
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rdx
  __int64 v43; // rsi
  int v44; // r10d
  _QWORD *v45; // rcx
  __int64 v46; // rdx
  int v47; // r13d
  unsigned int v48; // r8d
  __int64 v49; // rdi
  __int64 v50; // r11
  int v51; // ecx
  int v52; // esi
  int v53; // r9d
  unsigned int v54; // r8d
  __int64 v55; // rcx
  _QWORD *v56; // rcx
  _QWORD *v57; // rdx
  __int64 v58; // rcx
  _QWORD *v59; // rcx
  _QWORD *v60; // rdx
  int v61; // r15d
  __int64 v62; // r14
  int v63; // r15d
  __int64 v64; // r14
  _QWORD *v65; // r11
  int v66; // edi
  _QWORD *v67; // r10
  int v68; // r11d

  v8 = *(_DWORD *)(a1 + 16);
  v9 = *(_QWORD *)a1;
  if ( !v8 )
    goto LABEL_20;
  v10 = *a2;
  v11 = v8 - 1;
  v12 = v11 & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
  v13 = (_QWORD *)(v9 + 16LL * v12);
  v14 = *v13;
  if ( *v13 != v10 )
  {
    v16 = 1;
    a6 = nullptr;
    if ( v14 != -4096 )
    {
      while ( 1 )
      {
        if ( v14 == -8192 && !a6 )
          a6 = v13;
        v12 = v11 & (v16 + v12);
        v13 = (_QWORD *)(v9 + 16LL * v12);
        v14 = *v13;
        if ( v10 == *v13 )
          return v13 + 1;
        if ( v14 == -4096 )
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
LABEL_7:
        v18 = *v13;
        goto LABEL_8;
      }
      v38 = (((v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2)) >> 4) | (v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2);
      v39 = ((((v38 >> 8) | v38) >> 16) | (v38 >> 8) | v38) + 1;
      if ( (unsigned int)v39 < 0x40 )
        LODWORD(v39) = 64;
      *(_DWORD *)(a1 + 16) = v39;
      v40 = sub_22300B0(16LL * (unsigned int)v39, 8, 64, a4, v17, a6);
      *(_QWORD *)a1 = v40;
      if ( v9 )
      {
        v41 = *(unsigned int *)(a1 + 16);
        v42 = (_QWORD *)v40;
        v43 = 16LL * v8;
        *(_QWORD *)(a1 + 8) = 0;
        v44 = v41;
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
        v47 = v44 - 1;
        do
        {
          v30 = *(_QWORD *)v46;
          if ( *(_QWORD *)v46 != -4096 && v30 != -8192 )
          {
            if ( !v44 )
              goto LABEL_104;
            v48 = v47 & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
            v49 = v40 + 16LL * v48;
            v50 = *(_QWORD *)v49;
            if ( v30 != *(_QWORD *)v49 )
            {
              v63 = 1;
              v64 = 0;
              if ( v50 != -4096 )
              {
                while ( 1 )
                {
                  if ( v50 == -8192 && !v64 )
                    v64 = v49;
                  v48 = v47 & (v63 + v48);
                  v49 = v40 + 16LL * v48;
                  v50 = *(_QWORD *)v49;
                  if ( v30 == *(_QWORD *)v49 )
                    break;
                  if ( v50 == -4096 )
                  {
                    if ( v64 )
                      v49 = v64;
                    break;
                  }
                  ++v63;
                }
              }
            }
            *(_QWORD *)v49 = v30;
            v51 = *(_DWORD *)(v46 + 8);
            ++*(_DWORD *)(a1 + 8);
            *(_DWORD *)(v49 + 8) = v51;
          }
          v46 += 16;
        }
        while ( v9 + v43 != v46 );
        operator delete(v9, v43, 8);
        v40 = *(_QWORD *)a1;
        v52 = *(_DWORD *)(a1 + 16);
        LODWORD(a4) = *(_DWORD *)(a1 + 8) + 1;
      }
      else
      {
        v58 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v52 = v58;
        v59 = (_QWORD *)(v40 + 16 * v58);
        if ( (_QWORD *)v40 != v59 )
        {
          v60 = (_QWORD *)v40;
          do
          {
            *v60 = -4096;
            v60 += 2;
          }
          while ( v59 != v60 );
        }
        LODWORD(a4) = 1;
      }
      if ( v52 )
      {
        v53 = v52 - 1;
        v54 = (v52 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
        v13 = (_QWORD *)(v40 + 16LL * v54);
        v10 = *v13;
        v18 = *v13;
        if ( *a2 != *v13 )
        {
          if ( v10 == -4096 )
          {
            v10 = *a2;
            goto LABEL_36;
          }
          v65 = (_QWORD *)(v40 + 16LL * (v53 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4))));
          v66 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v10 == -8192 && !v13 )
              v13 = v65;
            v54 = v53 & (v66 + v54);
            v65 = (_QWORD *)(v40 + 16LL * v54);
            v10 = *v65;
            if ( *a2 == *v65 )
            {
              v18 = *v65;
              v13 = (_QWORD *)(v40 + 16LL * v54);
              goto LABEL_8;
            }
            if ( v10 == -4096 )
              break;
            ++v66;
          }
          if ( !v13 )
          {
            v10 = *a2;
            v13 = (_QWORD *)(v40 + 16LL * v54);
            goto LABEL_36;
          }
          v18 = *v13;
          v10 = *a2;
        }
        goto LABEL_8;
      }
      goto LABEL_103;
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
          *v23 = -4096;
          v23 += 2;
        }
        while ( v27 != v23 );
      }
      v28 = v9;
      for ( i = v25 - 1; v26 != v28; v28 += 16 )
      {
        v30 = *(_QWORD *)v28;
        if ( *(_QWORD *)v28 != -8192 && v30 != -4096 )
        {
          if ( !v25 )
          {
LABEL_104:
            *(_QWORD *)&dword_0 = v30;
            BUG();
          }
          v31 = i & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
          v32 = v21 + 16LL * v31;
          v33 = *(_QWORD *)v32;
          if ( v30 != *(_QWORD *)v32 )
          {
            v61 = 1;
            v62 = 0;
            if ( v33 != -4096 )
            {
              while ( 1 )
              {
                if ( v33 == -8192 && !v62 )
                  v62 = v32;
                v31 = i & (v61 + v31);
                v32 = v21 + 16LL * v31;
                v33 = *(_QWORD *)v32;
                if ( v30 == *(_QWORD *)v32 )
                  break;
                if ( v33 == -4096 )
                {
                  if ( v62 )
                    v32 = v62;
                  break;
                }
                ++v61;
              }
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
      v35 = *(_DWORD *)(a1 + 16);
      LODWORD(a4) = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v55 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v35 = v55;
      v56 = (_QWORD *)(v21 + 16 * v55);
      if ( (_QWORD *)v21 != v56 )
      {
        v57 = (_QWORD *)v21;
        do
        {
          *v57 = -4096;
          v57 += 2;
        }
        while ( v56 != v57 );
      }
      LODWORD(a4) = 1;
    }
    if ( v35 )
    {
      v10 = *a2;
      v36 = v35 - 1;
      v37 = (v35 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
      v13 = (_QWORD *)(v21 + 16LL * v37);
      v18 = *v13;
      if ( *v13 != *a2 )
      {
        if ( v18 != -4096 )
        {
          v67 = (_QWORD *)(v21 + 16LL * (v36 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4))));
          v68 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v18 == -8192 && !v13 )
              v13 = v67;
            v37 = v36 & (v68 + v37);
            v67 = (_QWORD *)(v21 + 16LL * v37);
            v18 = *v67;
            if ( v10 == *v67 )
            {
              v13 = (_QWORD *)(v21 + 16LL * v37);
              goto LABEL_8;
            }
            if ( v18 == -4096 )
              break;
            ++v68;
          }
          if ( v13 )
            goto LABEL_7;
          v13 = (_QWORD *)(v21 + 16LL * v37);
        }
LABEL_36:
        *(_DWORD *)(a1 + 8) = a4;
LABEL_10:
        *v13 = v10;
        *((_DWORD *)v13 + 2) = 0;
        return v13 + 1;
      }
LABEL_8:
      *(_DWORD *)(a1 + 8) = a4;
      if ( v18 != -4096 )
        --*(_DWORD *)(a1 + 12);
      goto LABEL_10;
    }
LABEL_103:
    ++*(_DWORD *)(a1 + 8);
    BUG();
  }
  return v13 + 1;
}
