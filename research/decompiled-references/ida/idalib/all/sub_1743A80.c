unsigned __int16 *__fastcall sub_1743A80(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 *a6)
{
  unsigned int v8; // r13d
  __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int16 v11; // si
  unsigned int v12; // ecx
  unsigned __int16 *v13; // rdx
  unsigned __int16 v14; // ax
  int v16; // r8d
  __int64 v17; // r8
  unsigned __int16 v18; // di
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  int v24; // r9d
  __int64 v25; // rdi
  __int64 j; // rdx
  __int64 v27; // rax
  int k; // r13d
  unsigned __int16 v29; // dx
  unsigned int v30; // r8d
  __int64 v31; // rcx
  __int16 v32; // r10
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rsi
  int v38; // r9d
  __int64 i; // rdx
  __int64 v40; // rax
  int v41; // r13d
  unsigned __int16 v42; // dx
  unsigned int v43; // r8d
  __int64 v44; // rcx
  __int16 v45; // r10
  int v46; // esi
  int v47; // r8d
  unsigned __int16 v48; // r9
  unsigned int v49; // r10d
  int v50; // esi
  int v51; // r8d
  unsigned int v52; // r10d
  unsigned __int16 *v53; // r11
  int v54; // edi
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  int v61; // r15d
  __int64 v62; // r14
  int v63; // r15d
  __int64 v64; // r14
  int v65; // edi

  v8 = *(_DWORD *)(a1 + 16);
  v9 = *(_QWORD *)a1;
  if ( !v8 )
    goto LABEL_20;
  v10 = v8 - 1;
  v11 = *a2;
  v12 = v10 & (37 * v11);
  v13 = (unsigned __int16 *)(v9 + 16LL * v12);
  v14 = *v13;
  if ( v11 != *v13 )
  {
    v16 = 1;
    a6 = nullptr;
    if ( v14 != 0xFFFF )
    {
      while ( 1 )
      {
        if ( v14 == 0xFFFE && !a6 )
          a6 = v13;
        v12 = v10 & (v16 + v12);
        v13 = (unsigned __int16 *)(v9 + 16LL * v12);
        v14 = *v13;
        if ( v11 == *v13 )
          return v13 + 4;
        if ( v14 == 0xFFFF )
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
      v33 = (((v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 4) | (v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2);
      v34 = ((((v33 >> 8) | v33) >> 16) | (v33 >> 8) | v33) + 1;
      if ( (unsigned int)v34 < 0x40 )
        LODWORD(v34) = 64;
      *(_DWORD *)(a1 + 16) = v34;
      v35 = sub_22300B0(16LL * (unsigned int)v34, 8, 64, a4, v17, a6);
      *(_QWORD *)a1 = v35;
      if ( v9 )
      {
        v36 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v37 = 16LL * v8;
        v38 = v36;
        for ( i = v35 + 16 * v36; i != v35; *(_WORD *)(v35 - 16) = -1 )
          v35 += 16;
        v40 = v9;
        v41 = v38 - 1;
        do
        {
          v42 = *(_WORD *)v40;
          if ( (unsigned __int16)(*(_WORD *)v40 + 2) > 1u )
          {
            if ( !v38 )
              goto LABEL_98;
            v43 = v41 & (37 * v42);
            v44 = *(_QWORD *)a1 + 16LL * v43;
            v45 = *(_WORD *)v44;
            if ( v42 != *(_WORD *)v44 )
            {
              v63 = 1;
              v64 = 0;
              if ( v45 != -1 )
              {
                while ( 1 )
                {
                  if ( !v64 && v45 == -2 )
                    v64 = v44;
                  v43 = v41 & (v63 + v43);
                  v44 = *(_QWORD *)a1 + 16LL * v43;
                  v45 = *(_WORD *)v44;
                  if ( v42 == *(_WORD *)v44 )
                    break;
                  if ( v45 == -1 )
                  {
                    if ( v64 )
                      v44 = v64;
                    break;
                  }
                  ++v63;
                }
              }
            }
            *(_WORD *)v44 = v42;
            *(_QWORD *)(v44 + 8) = *(_QWORD *)(v40 + 8);
            ++*(_DWORD *)(a1 + 8);
          }
          v40 += 16;
        }
        while ( v9 + v37 != v40 );
        operator delete(v9, v37, 8);
        v35 = *(_QWORD *)a1;
        v50 = *(_DWORD *)(a1 + 16);
        LODWORD(a4) = *(_DWORD *)(a1 + 8) + 1;
      }
      else
      {
        v58 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v50 = v58;
        v59 = v35 + 16 * v58;
        if ( v35 != v59 )
        {
          v60 = v35;
          do
          {
            v60 += 16;
            *(_WORD *)(v60 - 16) = -1;
          }
          while ( v59 != v60 );
        }
        LODWORD(a4) = 1;
      }
      if ( v50 )
      {
        v51 = v50 - 1;
        v48 = *a2;
        v52 = (v50 - 1) & (37 * *a2);
        v13 = (unsigned __int16 *)(v35 + 16LL * v52);
        v11 = *v13;
        v18 = *v13;
        if ( *a2 == *v13 )
          goto LABEL_8;
        if ( v11 != 0xFFFF )
        {
          v53 = (unsigned __int16 *)(v35 + 16LL * (v51 & (37 * (unsigned int)*a2)));
          v54 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( !v13 && v11 == 0xFFFE )
              v13 = v53;
            v52 = v51 & (v54 + v52);
            v53 = (unsigned __int16 *)(v35 + 16LL * v52);
            v11 = *v53;
            if ( v48 == *v53 )
              break;
            if ( v11 == 0xFFFF )
              goto LABEL_90;
            ++v54;
          }
LABEL_57:
          v18 = v11;
          v13 = v53;
LABEL_8:
          *(_DWORD *)(a1 + 8) = a4;
          if ( v18 != 0xFFFF )
            --*(_DWORD *)(a1 + 12);
          goto LABEL_10;
        }
        goto LABEL_47;
      }
      goto LABEL_99;
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
      *(_QWORD *)(a1 + 8) = 0;
      v23 = 16LL * v8;
      v24 = v22;
      v25 = v9 + v23;
      for ( j = v21 + 16 * v22; j != v21; *(_WORD *)(v21 - 16) = -1 )
        v21 += 16;
      v27 = v9;
      for ( k = v24 - 1; v25 != v27; v27 += 16 )
      {
        v29 = *(_WORD *)v27;
        if ( (unsigned __int16)(*(_WORD *)v27 + 2) > 1u )
        {
          if ( !v24 )
          {
LABEL_98:
            LOWORD(dword_0) = 0;
            BUG();
          }
          v30 = k & (37 * v29);
          v31 = *(_QWORD *)a1 + 16LL * v30;
          v32 = *(_WORD *)v31;
          if ( v29 != *(_WORD *)v31 )
          {
            v61 = 1;
            v62 = 0;
            if ( v32 != -1 )
            {
              while ( 1 )
              {
                if ( v32 == -2 && !v62 )
                  v62 = v31;
                v30 = k & (v61 + v30);
                v31 = *(_QWORD *)a1 + 16LL * v30;
                v32 = *(_WORD *)v31;
                if ( v29 == *(_WORD *)v31 )
                  break;
                if ( v32 == -1 )
                {
                  if ( v62 )
                    v31 = v62;
                  break;
                }
                ++v61;
              }
            }
          }
          *(_WORD *)v31 = v29;
          *(_QWORD *)(v31 + 8) = *(_QWORD *)(v27 + 8);
          ++*(_DWORD *)(a1 + 8);
        }
      }
      operator delete(v9, v23, 8);
      v21 = *(_QWORD *)a1;
      v46 = *(_DWORD *)(a1 + 16);
      LODWORD(a4) = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v55 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v46 = v55;
      v56 = v21 + 16 * v55;
      if ( v21 != v56 )
      {
        v57 = v21;
        do
        {
          v57 += 16;
          *(_WORD *)(v57 - 16) = -1;
        }
        while ( v56 != v57 );
      }
      LODWORD(a4) = 1;
    }
    if ( v46 )
    {
      v47 = v46 - 1;
      v48 = *a2;
      v49 = (v46 - 1) & (37 * *a2);
      v13 = (unsigned __int16 *)(v21 + 16LL * v49);
      v11 = *v13;
      v18 = *v13;
      if ( *a2 == *v13 )
        goto LABEL_8;
      if ( v11 != 0xFFFF )
      {
        v53 = (unsigned __int16 *)(v21 + 16LL * (v47 & (37 * (unsigned int)*a2)));
        v65 = 1;
        v13 = nullptr;
        while ( 1 )
        {
          if ( !v13 && v11 == 0xFFFE )
            v13 = v53;
          v49 = v47 & (v65 + v49);
          v53 = (unsigned __int16 *)(v21 + 16LL * v49);
          v11 = *v53;
          if ( v48 == *v53 )
            goto LABEL_57;
          if ( v11 == 0xFFFF )
          {
LABEL_90:
            if ( v13 )
            {
              v18 = *v13;
              v11 = v48;
              goto LABEL_8;
            }
            v13 = v53;
            break;
          }
          ++v65;
        }
      }
LABEL_47:
      *(_DWORD *)(a1 + 8) = a4;
      v11 = v48;
LABEL_10:
      *v13 = v11;
      *((_QWORD *)v13 + 1) = 0;
      return v13 + 4;
    }
LABEL_99:
    ++*(_DWORD *)(a1 + 8);
    BUG();
  }
  return v13 + 4;
}
