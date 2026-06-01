__int64 *__fastcall sub_9E10C0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
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
  __int64 *v23; // rdi
  __int64 *j; // rdx
  __int64 *k; // rax
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // r10d
  unsigned int v29; // r8d
  _QWORD *v30; // rcx
  __int64 v31; // r11
  int v32; // edi
  int v33; // r9d
  unsigned int v34; // r8d
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 *v37; // rax
  __int64 v38; // rdx
  __int64 *v39; // rdi
  __int64 *i; // rdx
  __int64 *v41; // rax
  int v42; // ecx
  int v43; // r8d
  unsigned int v44; // r9d
  _QWORD *v45; // rcx
  __int64 v46; // r11
  int v47; // esi
  int v48; // r9d
  unsigned int v49; // r8d
  __int64 v50; // rcx
  __int64 *v51; // rcx
  __int64 *v52; // rdx
  __int64 v53; // rcx
  __int64 *v54; // rcx
  __int64 *v55; // rdx
  int v56; // r14d
  _QWORD *v57; // rbp
  int v58; // r14d
  _QWORD *v59; // rbp
  __int64 *v60; // r11
  int v61; // edi
  __int64 *v62; // r10
  int v63; // r11d

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
      v35 = (((v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2)) >> 4) | (v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2);
      v36 = ((((v35 >> 8) | v35) >> 16) | (v35 >> 8) | v35) + 1;
      if ( (unsigned int)v36 < 0x40 )
        LODWORD(v36) = 64;
      *(_DWORD *)(a1 + 16) = v36;
      v37 = (__int64 *)sub_220C370(16LL * (unsigned int)v36, 8, 64, a4, v17, a6);
      *(_QWORD *)a1 = v37;
      if ( v9 )
      {
        v38 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v39 = &v9[2 * v8];
        for ( i = &v37[2 * v38]; i != v37; v37 += 2 )
          *v37 = -4096;
        v41 = v9;
        do
        {
          v26 = *v41;
          if ( *v41 != -4096 && v26 != -8192 )
          {
            v42 = *(_DWORD *)(a1 + 16);
            if ( !v42 )
              goto LABEL_104;
            v43 = v42 - 1;
            v44 = (v42 - 1) & (((unsigned int)v26 >> 9) ^ ((unsigned int)v26 >> 4));
            v45 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v44);
            v46 = *v45;
            if ( v26 != *v45 )
            {
              v58 = 1;
              v59 = nullptr;
              if ( v46 != -4096 )
              {
                while ( 1 )
                {
                  if ( v46 == -8192 && !v59 )
                    v59 = v45;
                  v44 = v43 & (v58 + v44);
                  v45 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v44);
                  v46 = *v45;
                  if ( v26 == *v45 )
                    break;
                  if ( v46 == -4096 )
                  {
                    if ( v59 )
                      v45 = v59;
                    break;
                  }
                  ++v58;
                }
              }
            }
            *v45 = v26;
            v45[1] = v41[1];
            ++*(_DWORD *)(a1 + 8);
          }
          v41 += 2;
        }
        while ( v39 != v41 );
        operator delete();
        v37 = *(__int64 **)a1;
        v47 = *(_DWORD *)(a1 + 16);
        LODWORD(a4) = *(_DWORD *)(a1 + 8) + 1;
      }
      else
      {
        v53 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v47 = v53;
        v54 = &v37[2 * v53];
        if ( v37 != v54 )
        {
          v55 = v37;
          do
          {
            *v55 = -4096;
            v55 += 2;
          }
          while ( v54 != v55 );
        }
        LODWORD(a4) = 1;
      }
      if ( v47 )
      {
        v48 = v47 - 1;
        v49 = (v47 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
        v13 = &v37[2 * v49];
        v10 = *v13;
        v18 = *v13;
        if ( *a2 != *v13 )
        {
          if ( v10 == -4096 )
          {
            v10 = *a2;
            goto LABEL_36;
          }
          v60 = &v37[2 * (v48 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4)))];
          v61 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v10 == -8192 && !v13 )
              v13 = v60;
            v49 = v48 & (v61 + v49);
            v60 = &v37[2 * v49];
            v10 = *v60;
            if ( *a2 == *v60 )
            {
              v18 = *v60;
              v13 = &v37[2 * v49];
              goto LABEL_8;
            }
            if ( v10 == -4096 )
              break;
            ++v61;
          }
          if ( !v13 )
          {
            v10 = *a2;
            v13 = &v37[2 * v49];
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
    v21 = (__int64 *)sub_220C370(16LL * (unsigned int)v20, 8, 64, a4, a5, a6);
    *(_QWORD *)a1 = v21;
    if ( v9 )
    {
      v22 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v23 = &v9[2 * v8];
      for ( j = &v21[2 * v22]; j != v21; v21 += 2 )
        *v21 = -4096;
      for ( k = v9; v23 != k; k += 2 )
      {
        v26 = *k;
        if ( *k != -8192 && v26 != -4096 )
        {
          v27 = *(_DWORD *)(a1 + 16);
          if ( !v27 )
          {
LABEL_104:
            *(_QWORD *)&dword_0 = v26;
            BUG();
          }
          v28 = v27 - 1;
          v29 = (v27 - 1) & (((unsigned int)v26 >> 9) ^ ((unsigned int)v26 >> 4));
          v30 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v29);
          v31 = *v30;
          if ( v26 != *v30 )
          {
            v56 = 1;
            v57 = nullptr;
            if ( v31 != -4096 )
            {
              while ( 1 )
              {
                if ( !v57 && v31 == -8192 )
                  v57 = v30;
                v29 = v28 & (v56 + v29);
                v30 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v29);
                v31 = *v30;
                if ( v26 == *v30 )
                  break;
                if ( v31 == -4096 )
                {
                  if ( v57 )
                    v30 = v57;
                  break;
                }
                ++v56;
              }
            }
          }
          *v30 = v26;
          v30[1] = k[1];
          ++*(_DWORD *)(a1 + 8);
        }
      }
      operator delete();
      v21 = *(__int64 **)a1;
      v32 = *(_DWORD *)(a1 + 16);
      LODWORD(a4) = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v50 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v32 = v50;
      v51 = &v21[2 * v50];
      if ( v21 != v51 )
      {
        v52 = v21;
        do
        {
          *v52 = -4096;
          v52 += 2;
        }
        while ( v51 != v52 );
      }
      LODWORD(a4) = 1;
    }
    if ( v32 )
    {
      v10 = *a2;
      v33 = v32 - 1;
      v34 = (v32 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
      v13 = &v21[2 * v34];
      v18 = *v13;
      if ( *v13 != *a2 )
      {
        if ( v18 != -4096 )
        {
          v62 = &v21[2 * (v33 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4)))];
          v63 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v18 == -8192 && !v13 )
              v13 = v62;
            v34 = v33 & (v63 + v34);
            v62 = &v21[2 * v34];
            v18 = *v62;
            if ( v10 == *v62 )
            {
              v13 = &v21[2 * v34];
              goto LABEL_8;
            }
            if ( v18 == -4096 )
              break;
            ++v63;
          }
          if ( v13 )
            goto LABEL_7;
          v13 = &v21[2 * v34];
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

