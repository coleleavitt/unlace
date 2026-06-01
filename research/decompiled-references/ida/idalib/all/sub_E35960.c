__int64 __fastcall sub_E35960(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5, __int64 a6)
{
  unsigned int v7; // r14d
  __int64 *v8; // r13
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rsi
  unsigned int v11; // ecx
  unsigned __int64 *v12; // rdx
  unsigned __int64 v13; // rax
  _DWORD *v14; // rcx
  __int64 result; // rax
  int v16; // edi
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // rsi
  int v24; // r10d
  __int64 *v25; // r9
  _QWORD *v26; // rcx
  __int64 *v27; // rdx
  int i; // r12d
  __int64 v29; // rcx
  unsigned int v30; // r8d
  __int64 v31; // rdi
  __int64 v32; // r11
  int v33; // ecx
  int v34; // esi
  int v35; // r8d
  unsigned int v36; // edi
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rdx
  __int64 v42; // rsi
  int v43; // r10d
  _QWORD *v44; // rcx
  __int64 *v45; // rdx
  int v46; // r14d
  __int64 v47; // rcx
  unsigned int v48; // r8d
  __int64 v49; // rdi
  __int64 v50; // r11
  int v51; // ecx
  int v52; // esi
  int v53; // edi
  unsigned int v54; // r12d
  unsigned __int64 *v55; // r8
  int v56; // r9d
  __int64 v57; // rcx
  _QWORD *v58; // rcx
  _QWORD *v59; // rdx
  __int64 v60; // rcx
  _QWORD *v61; // rcx
  _QWORD *v62; // rdx
  int v63; // r15d
  __int64 v64; // r14
  __int64 v65; // r15
  unsigned __int64 *v66; // r9
  int v67; // r10d
  int v68; // [rsp+4h] [rbp-44h]

  v7 = *(_DWORD *)(a1 + 96);
  v8 = *(__int64 **)(a1 + 80);
  v9 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 40) & 7) != 0 )
    v9 = 0;
  if ( !v7 )
    goto LABEL_23;
  v10 = v7 - 1;
  v11 = v10 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
  v12 = (unsigned __int64 *)&v8[2 * v11];
  v13 = *v12;
  if ( v9 != *v12 )
  {
    v16 = 1;
    a5 = nullptr;
    if ( v13 != -4096 )
    {
      while ( 1 )
      {
        if ( !a5 && v13 == -8192 )
          a5 = v12;
        a6 = (unsigned int)(v16 + 1);
        v11 = v10 & (v16 + v11);
        v12 = (unsigned __int64 *)&v8[2 * v11];
        v13 = *v12;
        if ( v9 == *v12 )
          goto LABEL_5;
        if ( v13 == -4096 )
          break;
        ++v16;
      }
      if ( a5 )
        v12 = a5;
    }
    a4 = (unsigned int)(*(_DWORD *)(a1 + 88) + 1);
    if ( 4 * (int)a4 < 3 * v7 )
    {
      if ( v7 - *(_DWORD *)(a1 + 92) - (unsigned int)a4 > v7 >> 3 )
      {
LABEL_10:
        v17 = *v12;
        goto LABEL_11;
      }
      v37 = (((((v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 4) | (v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 8)
          | (((v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 4)
          | (v10 >> 1)
          | v10
          | (((v10 >> 1) | v10) >> 2);
      v38 = ((v37 >> 16) | v37) + 1;
      if ( (unsigned int)v38 < 0x40 )
        LODWORD(v38) = 64;
      *(_DWORD *)(a1 + 96) = v38;
      v39 = sub_22300B0(16LL * (unsigned int)v38, 8, 64, a4, a5, a6);
      *(_QWORD *)(a1 + 80) = v39;
      if ( v8 )
      {
        v40 = *(unsigned int *)(a1 + 96);
        v41 = (_QWORD *)v39;
        v42 = 2LL * v7;
        *(_QWORD *)(a1 + 88) = 0;
        v43 = v40;
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
        v45 = v8;
        v46 = v43 - 1;
        do
        {
          v47 = *v45;
          if ( *v45 != -8192 && v47 != -4096 )
          {
            if ( !v43 )
            {
              *(_QWORD *)&dword_0 = *v45;
              BUG();
            }
            v48 = v46 & (((unsigned int)v47 >> 9) ^ ((unsigned int)v47 >> 4));
            v49 = v39 + 16LL * v48;
            v50 = *(_QWORD *)v49;
            if ( v47 != *(_QWORD *)v49 && v50 != -4096 )
            {
              v68 = 1;
              v65 = 0;
              while ( 1 )
              {
                if ( v50 == -8192 && !v65 )
                  v65 = v49;
                v48 = v46 & (v68 + v48);
                v49 = v39 + 16LL * v48;
                v50 = *(_QWORD *)v49;
                if ( v47 == *(_QWORD *)v49 )
                  break;
                if ( v50 == -4096 )
                {
                  if ( v65 )
                    v49 = v65;
                  break;
                }
                ++v68;
              }
            }
            *(_QWORD *)v49 = v47;
            v51 = *((_DWORD *)v45 + 2);
            ++*(_DWORD *)(a1 + 88);
            *(_DWORD *)(v49 + 8) = v51;
          }
          v45 += 2;
        }
        while ( &v8[v42] != v45 );
        operator delete(v8, v42 * 8, 8);
        v39 = *(_QWORD *)(a1 + 80);
        v52 = *(_DWORD *)(a1 + 96);
        LODWORD(a4) = *(_DWORD *)(a1 + 88) + 1;
      }
      else
      {
        v60 = *(unsigned int *)(a1 + 96);
        *(_QWORD *)(a1 + 88) = 0;
        v52 = v60;
        v61 = (_QWORD *)(v39 + 16 * v60);
        if ( (_QWORD *)v39 != v61 )
        {
          v62 = (_QWORD *)v39;
          do
          {
            *v62 = -4096;
            v62 += 2;
          }
          while ( v61 != v62 );
        }
        LODWORD(a4) = 1;
      }
      if ( v52 )
      {
        v53 = v52 - 1;
        v54 = (v52 - 1) & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
        v12 = (unsigned __int64 *)(v39 + 16LL * v54);
        v17 = *v12;
        if ( v9 != *v12 )
        {
          if ( v17 != -4096 )
          {
            v55 = (unsigned __int64 *)(v39 + 16LL * v54);
            v56 = 1;
            v12 = nullptr;
            while ( 1 )
            {
              if ( v17 == -8192 && !v12 )
                v12 = v55;
              v54 = v53 & (v56 + v54);
              v55 = (unsigned __int64 *)(v39 + 16LL * v54);
              v17 = *v55;
              if ( v9 == *v55 )
              {
                v12 = (unsigned __int64 *)(v39 + 16LL * v54);
                goto LABEL_11;
              }
              if ( v17 == -4096 )
                break;
              ++v56;
            }
            if ( v12 )
              goto LABEL_10;
            v12 = (unsigned __int64 *)(v39 + 16LL * v54);
          }
LABEL_39:
          *(_DWORD *)(a1 + 88) = a4;
LABEL_13:
          *v12 = v9;
          v14 = v12 + 1;
          result = 1;
          *((_DWORD *)v12 + 2) = 0;
          goto LABEL_6;
        }
        goto LABEL_11;
      }
      goto LABEL_108;
    }
LABEL_23:
    v18 = (((((((2 * v7 - 1) | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 2)
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
    v19 = ((v18 >> 16) | v18) + 1;
    if ( (unsigned int)v19 < 0x40 )
      LODWORD(v19) = 64;
    *(_DWORD *)(a1 + 96) = v19;
    v20 = sub_22300B0(16LL * (unsigned int)v19, 8, 64, a4, a5, a6);
    *(_QWORD *)(a1 + 80) = v20;
    if ( v8 )
    {
      v21 = *(unsigned int *)(a1 + 96);
      v22 = (_QWORD *)v20;
      v23 = 2LL * v7;
      *(_QWORD *)(a1 + 88) = 0;
      v24 = v21;
      v25 = &v8[v23];
      v26 = (_QWORD *)(v20 + 16 * v21);
      if ( (_QWORD *)v20 != v26 )
      {
        do
        {
          *v22 = -4096;
          v22 += 2;
        }
        while ( v26 != v22 );
      }
      v27 = v8;
      for ( i = v24 - 1; v25 != v27; v27 += 2 )
      {
        v29 = *v27;
        if ( *v27 != -4096 && v29 != -8192 )
        {
          if ( !v24 )
          {
            *(_QWORD *)&dword_0 = *v27;
            BUG();
          }
          v30 = i & (((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4));
          v31 = v20 + 16LL * v30;
          v32 = *(_QWORD *)v31;
          if ( *(_QWORD *)v31 != v29 )
          {
            v63 = 1;
            v64 = 0;
            if ( v32 != -4096 )
            {
              while ( 1 )
              {
                if ( v32 == -8192 && !v64 )
                  v64 = v31;
                v30 = i & (v63 + v30);
                v31 = v20 + 16LL * v30;
                v32 = *(_QWORD *)v31;
                if ( v29 == *(_QWORD *)v31 )
                  break;
                if ( v32 == -4096 )
                {
                  if ( v64 )
                    v31 = v64;
                  break;
                }
                ++v63;
              }
            }
          }
          *(_QWORD *)v31 = v29;
          v33 = *((_DWORD *)v27 + 2);
          ++*(_DWORD *)(a1 + 88);
          *(_DWORD *)(v31 + 8) = v33;
        }
      }
      operator delete(v8, v23 * 8, 8);
      v20 = *(_QWORD *)(a1 + 80);
      v34 = *(_DWORD *)(a1 + 96);
      LODWORD(a4) = *(_DWORD *)(a1 + 88) + 1;
    }
    else
    {
      v57 = *(unsigned int *)(a1 + 96);
      *(_QWORD *)(a1 + 88) = 0;
      v34 = v57;
      v58 = (_QWORD *)(v20 + 16 * v57);
      if ( (_QWORD *)v20 != v58 )
      {
        v59 = (_QWORD *)v20;
        do
        {
          *v59 = -4096;
          v59 += 2;
        }
        while ( v58 != v59 );
      }
      LODWORD(a4) = 1;
    }
    if ( v34 )
    {
      v35 = v34 - 1;
      v36 = (v34 - 1) & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
      v12 = (unsigned __int64 *)(v20 + 16LL * v36);
      v17 = *v12;
      if ( v9 != *v12 )
      {
        if ( v17 != -4096 )
        {
          v66 = (unsigned __int64 *)(v20 + 16LL * (v35 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4))));
          v67 = 1;
          v12 = nullptr;
          while ( 1 )
          {
            if ( v17 == -8192 && !v12 )
              v12 = v66;
            v36 = v35 & (v67 + v36);
            v66 = (unsigned __int64 *)(v20 + 16LL * v36);
            v17 = *v66;
            if ( v9 == *v66 )
            {
              v12 = (unsigned __int64 *)(v20 + 16LL * v36);
              goto LABEL_11;
            }
            if ( v17 == -4096 )
              break;
            ++v67;
          }
          if ( v12 )
            goto LABEL_10;
          v12 = (unsigned __int64 *)(v20 + 16LL * v36);
        }
        goto LABEL_39;
      }
LABEL_11:
      *(_DWORD *)(a1 + 88) = a4;
      if ( v17 != -4096 )
        --*(_DWORD *)(a1 + 92);
      goto LABEL_13;
    }
LABEL_108:
    ++*(_DWORD *)(a1 + 88);
    BUG();
  }
LABEL_5:
  v14 = v12 + 1;
  result = (unsigned int)(*((_DWORD *)v12 + 2) + 1);
LABEL_6:
  *v14 = result;
  return result;
}
