__int64 __fastcall sub_E11C20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5, __int64 a6)
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
  int v23; // r10d
  __int64 *v24; // r9
  _QWORD *v25; // rcx
  __int64 *v26; // rdx
  int i; // r12d
  __int64 v28; // rcx
  unsigned int v29; // r8d
  __int64 v30; // rdi
  __int64 v31; // r11
  int v32; // ecx
  int v33; // esi
  int v34; // r8d
  unsigned int v35; // edi
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rdx
  int v41; // r10d
  __int64 *v42; // r9
  _QWORD *v43; // rcx
  __int64 *v44; // rdx
  int v45; // r14d
  __int64 v46; // rcx
  unsigned int v47; // r8d
  __int64 v48; // rdi
  __int64 v49; // r11
  int v50; // ecx
  int v51; // esi
  int v52; // edi
  unsigned int v53; // r12d
  unsigned __int64 *v54; // r8
  int v55; // r9d
  __int64 v56; // rcx
  _QWORD *v57; // rcx
  _QWORD *v58; // rdx
  __int64 v59; // rcx
  _QWORD *v60; // rcx
  _QWORD *v61; // rdx
  int v62; // r15d
  __int64 v63; // r14
  __int64 v64; // r15
  unsigned __int64 *v65; // r9
  int v66; // r10d
  int v67; // [rsp+4h] [rbp-44h]

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
      v36 = (((((v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 4) | (v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 8)
          | (((v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 4)
          | (v10 >> 1)
          | v10
          | (((v10 >> 1) | v10) >> 2);
      v37 = ((v36 >> 16) | v36) + 1;
      if ( (unsigned int)v37 < 0x40 )
        LODWORD(v37) = 64;
      *(_DWORD *)(a1 + 96) = v37;
      v38 = sub_220C370(16LL * (unsigned int)v37, 8, 64, a4, a5, a6);
      *(_QWORD *)(a1 + 80) = v38;
      if ( v8 )
      {
        v39 = *(unsigned int *)(a1 + 96);
        v40 = (_QWORD *)v38;
        *(_QWORD *)(a1 + 88) = 0;
        v41 = v39;
        v42 = &v8[2 * v7];
        v43 = (_QWORD *)(v38 + 16 * v39);
        if ( (_QWORD *)v38 != v43 )
        {
          do
          {
            *v40 = -4096;
            v40 += 2;
          }
          while ( v43 != v40 );
        }
        v44 = v8;
        v45 = v41 - 1;
        do
        {
          v46 = *v44;
          if ( *v44 != -8192 && v46 != -4096 )
          {
            if ( !v41 )
            {
              *(_QWORD *)&dword_0 = *v44;
              BUG();
            }
            v47 = v45 & (((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4));
            v48 = v38 + 16LL * v47;
            v49 = *(_QWORD *)v48;
            if ( v46 != *(_QWORD *)v48 && v49 != -4096 )
            {
              v67 = 1;
              v64 = 0;
              while ( 1 )
              {
                if ( v49 == -8192 && !v64 )
                  v64 = v48;
                v47 = v45 & (v67 + v47);
                v48 = v38 + 16LL * v47;
                v49 = *(_QWORD *)v48;
                if ( v46 == *(_QWORD *)v48 )
                  break;
                if ( v49 == -4096 )
                {
                  if ( v64 )
                    v48 = v64;
                  break;
                }
                ++v67;
              }
            }
            *(_QWORD *)v48 = v46;
            v50 = *((_DWORD *)v44 + 2);
            ++*(_DWORD *)(a1 + 88);
            *(_DWORD *)(v48 + 8) = v50;
          }
          v44 += 2;
        }
        while ( v42 != v44 );
        operator delete();
        v38 = *(_QWORD *)(a1 + 80);
        v51 = *(_DWORD *)(a1 + 96);
        LODWORD(a4) = *(_DWORD *)(a1 + 88) + 1;
      }
      else
      {
        v59 = *(unsigned int *)(a1 + 96);
        *(_QWORD *)(a1 + 88) = 0;
        v51 = v59;
        v60 = (_QWORD *)(v38 + 16 * v59);
        if ( (_QWORD *)v38 != v60 )
        {
          v61 = (_QWORD *)v38;
          do
          {
            *v61 = -4096;
            v61 += 2;
          }
          while ( v60 != v61 );
        }
        LODWORD(a4) = 1;
      }
      if ( v51 )
      {
        v52 = v51 - 1;
        v53 = (v51 - 1) & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
        v12 = (unsigned __int64 *)(v38 + 16LL * v53);
        v17 = *v12;
        if ( v9 != *v12 )
        {
          if ( v17 != -4096 )
          {
            v54 = (unsigned __int64 *)(v38 + 16LL * v53);
            v55 = 1;
            v12 = nullptr;
            while ( 1 )
            {
              if ( v17 == -8192 && !v12 )
                v12 = v54;
              v53 = v52 & (v55 + v53);
              v54 = (unsigned __int64 *)(v38 + 16LL * v53);
              v17 = *v54;
              if ( v9 == *v54 )
              {
                v12 = (unsigned __int64 *)(v38 + 16LL * v53);
                goto LABEL_11;
              }
              if ( v17 == -4096 )
                break;
              ++v55;
            }
            if ( v12 )
              goto LABEL_10;
            v12 = (unsigned __int64 *)(v38 + 16LL * v53);
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
    v20 = sub_220C370(16LL * (unsigned int)v19, 8, 64, a4, a5, a6);
    *(_QWORD *)(a1 + 80) = v20;
    if ( v8 )
    {
      v21 = *(unsigned int *)(a1 + 96);
      v22 = (_QWORD *)v20;
      *(_QWORD *)(a1 + 88) = 0;
      v23 = v21;
      v24 = &v8[2 * v7];
      v25 = (_QWORD *)(v20 + 16 * v21);
      if ( (_QWORD *)v20 != v25 )
      {
        do
        {
          *v22 = -4096;
          v22 += 2;
        }
        while ( v25 != v22 );
      }
      v26 = v8;
      for ( i = v23 - 1; v24 != v26; v26 += 2 )
      {
        v28 = *v26;
        if ( *v26 != -4096 && v28 != -8192 )
        {
          if ( !v23 )
          {
            *(_QWORD *)&dword_0 = *v26;
            BUG();
          }
          v29 = i & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
          v30 = v20 + 16LL * v29;
          v31 = *(_QWORD *)v30;
          if ( *(_QWORD *)v30 != v28 )
          {
            v62 = 1;
            v63 = 0;
            if ( v31 != -4096 )
            {
              while ( 1 )
              {
                if ( v31 == -8192 && !v63 )
                  v63 = v30;
                v29 = i & (v62 + v29);
                v30 = v20 + 16LL * v29;
                v31 = *(_QWORD *)v30;
                if ( v28 == *(_QWORD *)v30 )
                  break;
                if ( v31 == -4096 )
                {
                  if ( v63 )
                    v30 = v63;
                  break;
                }
                ++v62;
              }
            }
          }
          *(_QWORD *)v30 = v28;
          v32 = *((_DWORD *)v26 + 2);
          ++*(_DWORD *)(a1 + 88);
          *(_DWORD *)(v30 + 8) = v32;
        }
      }
      operator delete();
      v20 = *(_QWORD *)(a1 + 80);
      v33 = *(_DWORD *)(a1 + 96);
      LODWORD(a4) = *(_DWORD *)(a1 + 88) + 1;
    }
    else
    {
      v56 = *(unsigned int *)(a1 + 96);
      *(_QWORD *)(a1 + 88) = 0;
      v33 = v56;
      v57 = (_QWORD *)(v20 + 16 * v56);
      if ( (_QWORD *)v20 != v57 )
      {
        v58 = (_QWORD *)v20;
        do
        {
          *v58 = -4096;
          v58 += 2;
        }
        while ( v57 != v58 );
      }
      LODWORD(a4) = 1;
    }
    if ( v33 )
    {
      v34 = v33 - 1;
      v35 = (v33 - 1) & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
      v12 = (unsigned __int64 *)(v20 + 16LL * v35);
      v17 = *v12;
      if ( v9 != *v12 )
      {
        if ( v17 != -4096 )
        {
          v65 = (unsigned __int64 *)(v20 + 16LL * (v34 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4))));
          v66 = 1;
          v12 = nullptr;
          while ( 1 )
          {
            if ( v17 == -8192 && !v12 )
              v12 = v65;
            v35 = v34 & (v66 + v35);
            v65 = (unsigned __int64 *)(v20 + 16LL * v35);
            v17 = *v65;
            if ( v9 == *v65 )
            {
              v12 = (unsigned __int64 *)(v20 + 16LL * v35);
              goto LABEL_11;
            }
            if ( v17 == -4096 )
              break;
            ++v66;
          }
          if ( v12 )
            goto LABEL_10;
          v12 = (unsigned __int64 *)(v20 + 16LL * v35);
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

