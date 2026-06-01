__int64 *__fastcall sub_A04E00(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  unsigned int v8; // ebp
  __int64 *v9; // r12
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned int v12; // ecx
  __int64 *v13; // rdx
  __int64 v14; // rax
  int v16; // r8d
  __int64 v17; // r8
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 *v24; // rdi
  __int64 *j; // rdx
  __int64 *k; // rax
  __int64 v27; // rdx
  int v28; // ecx
  int v29; // r10d
  unsigned int v30; // r8d
  _QWORD *v31; // rcx
  __int64 v32; // r11
  int v33; // edi
  int v34; // r9d
  unsigned int v35; // r8d
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 *i; // rdx
  __int64 *v42; // rax
  int v43; // ecx
  int v44; // r8d
  unsigned int v45; // r9d
  _QWORD *v46; // rcx
  __int64 v47; // r11
  int v48; // esi
  int v49; // r9d
  unsigned int v50; // r8d
  __int64 v51; // rcx
  __int64 *v52; // rcx
  __int64 *v53; // rdx
  __int64 v54; // rcx
  __int64 *v55; // rcx
  __int64 *v56; // rdx
  int v57; // r14d
  _QWORD *v58; // rbp
  int v59; // r14d
  _QWORD *v60; // rbp
  __int64 *v61; // r11
  int v62; // edi
  __int64 *v63; // r10
  int v64; // r11d

  v8 = *(_DWORD *)(a1 + 16);
  v9 = *(__int64 **)a1;
  if ( !v8 )
    goto LABEL_20;
  v10 = *a2;
  v11 = v8 - 1;
  v12 = v11 & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
  v13 = &v9[2 * v12];
  v14 = *v13;
  if ( v10 != *v13 )
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
        v13 = &v9[2 * v12];
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
      v36 = (((v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2)) >> 4) | (v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2);
      v37 = ((((v36 >> 8) | v36) >> 16) | (v36 >> 8) | v36) + 1;
      if ( (unsigned int)v37 < 0x40 )
        LODWORD(v37) = 64;
      *(_DWORD *)(a1 + 16) = v37;
      v38 = (__int64 *)sub_22300B0(16LL * (unsigned int)v37, 8, 64, a4, v17, a6);
      *(_QWORD *)a1 = v38;
      if ( v9 )
      {
        v39 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v40 = 2LL * v8;
        for ( i = &v38[2 * v39]; i != v38; v38 += 2 )
          *v38 = -4096;
        v42 = v9;
        do
        {
          v27 = *v42;
          if ( *v42 != -4096 && v27 != -8192 )
          {
            v43 = *(_DWORD *)(a1 + 16);
            if ( !v43 )
              goto LABEL_104;
            v44 = v43 - 1;
            v45 = (v43 - 1) & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
            v46 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v45);
            v47 = *v46;
            if ( v27 != *v46 )
            {
              v59 = 1;
              v60 = nullptr;
              if ( v47 != -4096 )
              {
                while ( 1 )
                {
                  if ( v47 == -8192 && !v60 )
                    v60 = v46;
                  v45 = v44 & (v59 + v45);
                  v46 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v45);
                  v47 = *v46;
                  if ( v27 == *v46 )
                    break;
                  if ( v47 == -4096 )
                  {
                    if ( v60 )
                      v46 = v60;
                    break;
                  }
                  ++v59;
                }
              }
            }
            *v46 = v27;
            v46[1] = v42[1];
            ++*(_DWORD *)(a1 + 8);
          }
          v42 += 2;
        }
        while ( &v9[v40] != v42 );
        operator delete(v9, v40 * 8, 8);
        v38 = *(__int64 **)a1;
        v48 = *(_DWORD *)(a1 + 16);
        LODWORD(a4) = *(_DWORD *)(a1 + 8) + 1;
      }
      else
      {
        v54 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v48 = v54;
        v55 = &v38[2 * v54];
        if ( v38 != v55 )
        {
          v56 = v38;
          do
          {
            *v56 = -4096;
            v56 += 2;
          }
          while ( v55 != v56 );
        }
        LODWORD(a4) = 1;
      }
      if ( v48 )
      {
        v49 = v48 - 1;
        v50 = (v48 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
        v13 = &v38[2 * v50];
        v10 = *v13;
        v18 = *v13;
        if ( *a2 != *v13 )
        {
          if ( v10 == -4096 )
          {
            v10 = *a2;
            goto LABEL_36;
          }
          v61 = &v38[2 * (v49 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4)))];
          v62 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v10 == -8192 && !v13 )
              v13 = v61;
            v50 = v49 & (v62 + v50);
            v61 = &v38[2 * v50];
            v10 = *v61;
            if ( *a2 == *v61 )
            {
              v18 = *v61;
              v13 = &v38[2 * v50];
              goto LABEL_8;
            }
            if ( v10 == -4096 )
              break;
            ++v62;
          }
          if ( !v13 )
          {
            v10 = *a2;
            v13 = &v38[2 * v50];
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
    v21 = (__int64 *)sub_22300B0(16LL * (unsigned int)v20, 8, 64, a4, a5, a6);
    *(_QWORD *)a1 = v21;
    if ( v9 )
    {
      v22 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v23 = 2LL * v8;
      v24 = &v9[v23];
      for ( j = &v21[2 * v22]; j != v21; v21 += 2 )
        *v21 = -4096;
      for ( k = v9; v24 != k; k += 2 )
      {
        v27 = *k;
        if ( *k != -8192 && v27 != -4096 )
        {
          v28 = *(_DWORD *)(a1 + 16);
          if ( !v28 )
          {
LABEL_104:
            *(_QWORD *)&dword_0 = v27;
            BUG();
          }
          v29 = v28 - 1;
          v30 = (v28 - 1) & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
          v31 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v30);
          v32 = *v31;
          if ( v27 != *v31 )
          {
            v57 = 1;
            v58 = nullptr;
            if ( v32 != -4096 )
            {
              while ( 1 )
              {
                if ( !v58 && v32 == -8192 )
                  v58 = v31;
                v30 = v29 & (v57 + v30);
                v31 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v30);
                v32 = *v31;
                if ( v27 == *v31 )
                  break;
                if ( v32 == -4096 )
                {
                  if ( v58 )
                    v31 = v58;
                  break;
                }
                ++v57;
              }
            }
          }
          *v31 = v27;
          v31[1] = k[1];
          ++*(_DWORD *)(a1 + 8);
        }
      }
      operator delete(v9, v23 * 8, 8);
      v21 = *(__int64 **)a1;
      v33 = *(_DWORD *)(a1 + 16);
      LODWORD(a4) = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v51 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v33 = v51;
      v52 = &v21[2 * v51];
      if ( v21 != v52 )
      {
        v53 = v21;
        do
        {
          *v53 = -4096;
          v53 += 2;
        }
        while ( v52 != v53 );
      }
      LODWORD(a4) = 1;
    }
    if ( v33 )
    {
      v10 = *a2;
      v34 = v33 - 1;
      v35 = (v33 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
      v13 = &v21[2 * v35];
      v18 = *v13;
      if ( *v13 != *a2 )
      {
        if ( v18 != -4096 )
        {
          v63 = &v21[2 * (v34 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4)))];
          v64 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v18 == -8192 && !v13 )
              v13 = v63;
            v35 = v34 & (v64 + v35);
            v63 = &v21[2 * v35];
            v18 = *v63;
            if ( v10 == *v63 )
            {
              v13 = &v21[2 * v35];
              goto LABEL_8;
            }
            if ( v18 == -4096 )
              break;
            ++v64;
          }
          if ( v13 )
            goto LABEL_7;
          v13 = &v21[2 * v35];
        }
LABEL_36:
        *(_DWORD *)(a1 + 8) = a4;
LABEL_10:
        *v13 = v10;
        v13[1] = 0;
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
