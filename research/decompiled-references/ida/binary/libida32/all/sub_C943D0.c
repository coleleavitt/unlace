__int64 *__fastcall sub_C943D0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  unsigned int v8; // r13d
  __int64 *v9; // rbp
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
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  int v24; // r10d
  __int64 *v25; // r9
  _QWORD *v26; // rcx
  __int64 *v27; // rdx
  int i; // r13d
  __int64 v29; // rcx
  unsigned int v30; // r8d
  _QWORD *v31; // rdi
  __int64 v32; // r11
  __int64 v33; // rcx
  int v34; // edi
  int v35; // r9d
  unsigned int v36; // r8d
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rdx
  int v42; // r10d
  __int64 *v43; // r9
  _QWORD *v44; // rcx
  __int64 *v45; // rdx
  int v46; // r13d
  unsigned int v47; // r8d
  _QWORD *v48; // rdi
  __int64 v49; // r11
  __int64 v50; // rcx
  int v51; // esi
  int v52; // r9d
  unsigned int v53; // r8d
  __int64 v54; // rcx
  _QWORD *v55; // rcx
  _QWORD *v56; // rdx
  __int64 v57; // rcx
  _QWORD *v58; // rcx
  _QWORD *v59; // rdx
  int v60; // r15d
  _QWORD *v61; // r14
  int v62; // r15d
  _QWORD *v63; // r14
  __int64 *v64; // r11
  int v65; // edi
  __int64 *v66; // r10
  int v67; // r11d

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
      v37 = (((v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2)) >> 4) | (v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2);
      v38 = ((((v37 >> 8) | v37) >> 16) | (v37 >> 8) | v37) + 1;
      if ( (unsigned int)v38 < 0x40 )
        LODWORD(v38) = 64;
      *(_DWORD *)(a1 + 16) = v38;
      v39 = sub_220C370(16LL * (unsigned int)v38, 8, 64, a4, v17, a6);
      *(_QWORD *)a1 = v39;
      if ( v9 )
      {
        v40 = *(unsigned int *)(a1 + 16);
        v41 = (_QWORD *)v39;
        *(_QWORD *)(a1 + 8) = 0;
        v42 = v40;
        v43 = &v9[2 * v8];
        v44 = (_QWORD *)(v39 + 16 * v40);
        if ( (_QWORD *)v39 != v44 )
        {
          do
          {
            *v41 = -4096;
            v41 += 2;
          }
          while ( v44 != v41 );
        }
        v45 = v9;
        v46 = v42 - 1;
        do
        {
          v29 = *v45;
          if ( *v45 != -4096 && v29 != -8192 )
          {
            if ( !v42 )
              goto LABEL_104;
            v47 = v46 & (((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4));
            v48 = (_QWORD *)(v39 + 16LL * v47);
            v49 = *v48;
            if ( *v48 != v29 )
            {
              v62 = 1;
              v63 = nullptr;
              if ( v49 != -4096 )
              {
                while ( 1 )
                {
                  if ( v49 == -8192 && !v63 )
                    v63 = v48;
                  v47 = v46 & (v62 + v47);
                  v48 = (_QWORD *)(v39 + 16LL * v47);
                  v49 = *v48;
                  if ( v29 == *v48 )
                    break;
                  if ( v49 == -4096 )
                  {
                    if ( v63 )
                      v48 = v63;
                    break;
                  }
                  ++v62;
                }
              }
            }
            *v48 = v29;
            v50 = v45[1];
            ++*(_DWORD *)(a1 + 8);
            v48[1] = v50;
          }
          v45 += 2;
        }
        while ( v43 != v45 );
        operator delete();
        v39 = *(_QWORD *)a1;
        v51 = *(_DWORD *)(a1 + 16);
        LODWORD(a4) = *(_DWORD *)(a1 + 8) + 1;
      }
      else
      {
        v57 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v51 = v57;
        v58 = (_QWORD *)(v39 + 16 * v57);
        if ( (_QWORD *)v39 != v58 )
        {
          v59 = (_QWORD *)v39;
          do
          {
            *v59 = -4096;
            v59 += 2;
          }
          while ( v58 != v59 );
        }
        LODWORD(a4) = 1;
      }
      if ( v51 )
      {
        v52 = v51 - 1;
        v53 = (v51 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
        v13 = (__int64 *)(v39 + 16LL * v53);
        v10 = *v13;
        v18 = *v13;
        if ( *a2 != *v13 )
        {
          if ( v10 == -4096 )
          {
            v10 = *a2;
            goto LABEL_36;
          }
          v64 = (__int64 *)(v39 + 16LL * (v52 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4))));
          v65 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v10 == -8192 && !v13 )
              v13 = v64;
            v53 = v52 & (v65 + v53);
            v64 = (__int64 *)(v39 + 16LL * v53);
            v10 = *v64;
            if ( *a2 == *v64 )
            {
              v18 = *v64;
              v13 = (__int64 *)(v39 + 16LL * v53);
              goto LABEL_8;
            }
            if ( v10 == -4096 )
              break;
            ++v65;
          }
          if ( !v13 )
          {
            v10 = *a2;
            v13 = (__int64 *)(v39 + 16LL * v53);
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
    v21 = sub_220C370(16LL * (unsigned int)v20, 8, 64, a4, a5, a6);
    *(_QWORD *)a1 = v21;
    if ( v9 )
    {
      v22 = *(unsigned int *)(a1 + 16);
      v23 = (_QWORD *)v21;
      *(_QWORD *)(a1 + 8) = 0;
      v24 = v22;
      v25 = &v9[2 * v8];
      v26 = (_QWORD *)(v21 + 16 * v22);
      if ( (_QWORD *)v21 != v26 )
      {
        do
        {
          *v23 = -4096;
          v23 += 2;
        }
        while ( v26 != v23 );
      }
      v27 = v9;
      for ( i = v24 - 1; v25 != v27; v27 += 2 )
      {
        v29 = *v27;
        if ( *v27 != -8192 && v29 != -4096 )
        {
          if ( !v24 )
          {
LABEL_104:
            *(_QWORD *)&dword_0 = v29;
            BUG();
          }
          v30 = i & (((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4));
          v31 = (_QWORD *)(v21 + 16LL * v30);
          v32 = *v31;
          if ( v29 != *v31 )
          {
            v60 = 1;
            v61 = nullptr;
            if ( v32 != -4096 )
            {
              while ( 1 )
              {
                if ( !v61 && v32 == -8192 )
                  v61 = v31;
                v30 = i & (v60 + v30);
                v31 = (_QWORD *)(v21 + 16LL * v30);
                v32 = *v31;
                if ( v29 == *v31 )
                  break;
                if ( v32 == -4096 )
                {
                  if ( v61 )
                    v31 = v61;
                  break;
                }
                ++v60;
              }
            }
          }
          *v31 = v29;
          v33 = v27[1];
          ++*(_DWORD *)(a1 + 8);
          v31[1] = v33;
        }
      }
      operator delete();
      v21 = *(_QWORD *)a1;
      v34 = *(_DWORD *)(a1 + 16);
      LODWORD(a4) = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v54 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v34 = v54;
      v55 = (_QWORD *)(v21 + 16 * v54);
      if ( (_QWORD *)v21 != v55 )
      {
        v56 = (_QWORD *)v21;
        do
        {
          *v56 = -4096;
          v56 += 2;
        }
        while ( v55 != v56 );
      }
      LODWORD(a4) = 1;
    }
    if ( v34 )
    {
      v10 = *a2;
      v35 = v34 - 1;
      v36 = (v34 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
      v13 = (__int64 *)(v21 + 16LL * v36);
      v18 = *v13;
      if ( *v13 != *a2 )
      {
        if ( v18 != -4096 )
        {
          v66 = (__int64 *)(v21 + 16LL * (v35 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4))));
          v67 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v18 == -8192 && !v13 )
              v13 = v66;
            v36 = v35 & (v67 + v36);
            v66 = (__int64 *)(v21 + 16LL * v36);
            v18 = *v66;
            if ( v10 == *v66 )
            {
              v13 = (__int64 *)(v21 + 16LL * v36);
              goto LABEL_8;
            }
            if ( v18 == -4096 )
              break;
            ++v67;
          }
          if ( v13 )
            goto LABEL_7;
          v13 = (__int64 *)(v21 + 16LL * v36);
        }
LABEL_36:
        *(_DWORD *)(a1 + 8) = a4;
LABEL_10:
        *v13 = v10;
        *((_DWORD *)v13 + 2) = 0;
        *((_BYTE *)v13 + 12) = 0;
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

