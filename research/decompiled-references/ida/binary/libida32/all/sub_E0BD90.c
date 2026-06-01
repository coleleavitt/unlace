__int64 __fastcall sub_E0BD90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r12
  unsigned int v11; // r15d
  __int64 *v12; // r13
  unsigned __int64 v13; // rsi
  unsigned int v14; // ecx
  __int64 *v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rdi
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 *v23; // r9
  _QWORD *j; // rdx
  __int64 *k; // rax
  __int64 v26; // rdx
  int v27; // r8d
  int v28; // r8d
  __int64 v29; // r11
  unsigned int v30; // edi
  __int64 *v31; // rcx
  __int64 v32; // r10
  int v33; // edi
  int v34; // r8d
  unsigned int v35; // edi
  int v36; // r10d
  __int64 *v37; // r9
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rdx
  _QWORD *i; // rdx
  __int64 *v44; // rax
  __int64 v45; // rdx
  int v46; // edi
  int v47; // edi
  __int64 v48; // r9
  unsigned int v49; // esi
  __int64 *v50; // rcx
  __int64 v51; // r8
  int v52; // edi
  int v53; // edi
  unsigned int v54; // r14d
  int v55; // r9d
  __int64 *v56; // r8
  __int64 v57; // rcx
  _QWORD *v58; // rcx
  _QWORD *v59; // rdx
  __int64 v60; // rcx
  _QWORD *v61; // rcx
  _QWORD *v62; // rdx
  int v63; // r15d
  __int64 *v64; // r14
  __int64 *v65; // r10
  int v66; // [rsp+8h] [rbp-40h]

  result = sub_E0B510(a1, a2);
  if ( !BYTE4(result) )
  {
    v10 = sub_E08F80(a1, a2, a3);
    result = 0;
    if ( BYTE4(v10) )
    {
      v11 = *(_DWORD *)(a1 + 264);
      v12 = *(__int64 **)(a1 + 248);
      if ( !v11 )
        goto LABEL_14;
      v13 = v11 - 1;
      v14 = v13 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v15 = &v12[2 * v14];
      v16 = *v15;
      if ( a2 == *v15 )
      {
LABEL_6:
        *((_DWORD *)v15 + 2) = v10;
        return v10;
      }
      v8 = 1;
      v17 = nullptr;
      if ( v16 != -4096 )
      {
        while ( 1 )
        {
          if ( !v17 && v16 == -8192 )
            v17 = v15;
          v9 = (unsigned int)(v8 + 1);
          v14 = v13 & (v8 + v14);
          v15 = &v12[2 * v14];
          v16 = *v15;
          if ( a2 == *v15 )
            goto LABEL_6;
          if ( v16 == -4096 )
            break;
          v8 = (unsigned int)v9;
        }
        if ( v17 )
          v15 = v17;
      }
      v7 = (unsigned int)(*(_DWORD *)(a1 + 256) + 1);
      if ( 4 * (int)v7 < 3 * v11 )
      {
        if ( v11 - *(_DWORD *)(a1 + 260) - (unsigned int)v7 > v11 >> 3 )
        {
          v18 = *v15;
          goto LABEL_11;
        }
        v38 = (v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2);
        v39 = (((v38 >> 4) | v38) >> 8) | (v38 >> 4) | v38;
        v40 = ((v39 >> 16) | v39) + 1;
        if ( (unsigned int)v40 < 0x40 )
          LODWORD(v40) = 64;
        *(_DWORD *)(a1 + 264) = v40;
        v41 = (_QWORD *)sub_220C370(16LL * (unsigned int)v40, 8, 64, v7, v8, v9);
        *(_QWORD *)(a1 + 248) = v41;
        if ( v12 )
        {
          v42 = *(unsigned int *)(a1 + 264);
          *(_QWORD *)(a1 + 256) = 0;
          for ( i = &v41[2 * v42]; i != v41; v41 += 2 )
            *v41 = -4096;
          v44 = v12;
          do
          {
            v45 = *v44;
            if ( *v44 != -4096 && v45 != -8192 )
            {
              v46 = *(_DWORD *)(a1 + 264);
              if ( !v46 )
              {
                *(_QWORD *)&dword_0 = *v44;
                BUG();
              }
              v47 = v46 - 1;
              v48 = *(_QWORD *)(a1 + 248);
              v49 = v47 & (((unsigned int)v45 >> 9) ^ ((unsigned int)v45 >> 4));
              v50 = (__int64 *)(v48 + 16LL * v49);
              v51 = *v50;
              if ( *v50 != v45 && v51 != -4096 )
              {
                v66 = 1;
                v65 = nullptr;
                while ( 1 )
                {
                  if ( v51 == -8192 && !v65 )
                    v65 = v50;
                  v49 = v47 & (v66 + v49);
                  v50 = (__int64 *)(v48 + 16LL * v49);
                  v51 = *v50;
                  if ( v45 == *v50 )
                    break;
                  if ( v51 == -4096 )
                  {
                    if ( v65 )
                      v50 = v65;
                    break;
                  }
                  ++v66;
                }
              }
              *v50 = v45;
              *((_DWORD *)v50 + 2) = *((_DWORD *)v44 + 2);
              ++*(_DWORD *)(a1 + 256);
            }
            v44 += 2;
          }
          while ( &v12[2 * v11] != v44 );
          operator delete();
          v41 = *(_QWORD **)(a1 + 248);
          v52 = *(_DWORD *)(a1 + 264);
          LODWORD(v7) = *(_DWORD *)(a1 + 256) + 1;
        }
        else
        {
          v60 = *(unsigned int *)(a1 + 264);
          *(_QWORD *)(a1 + 256) = 0;
          v52 = v60;
          v61 = &v41[2 * v60];
          if ( v41 != v61 )
          {
            v62 = v41;
            do
            {
              *v62 = -4096;
              v62 += 2;
            }
            while ( v61 != v62 );
          }
          LODWORD(v7) = 1;
        }
        if ( v52 )
        {
          v53 = v52 - 1;
          v54 = v53 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
          v15 = &v41[2 * v54];
          v18 = *v15;
          if ( a2 != *v15 )
          {
            v55 = 1;
            v56 = nullptr;
            if ( v18 != -4096 )
            {
              while ( 1 )
              {
                if ( v18 == -8192 && !v56 )
                  v56 = v15;
                v54 = v53 & (v55 + v54);
                v15 = &v41[2 * v54];
                v18 = *v15;
                if ( a2 == *v15 )
                  goto LABEL_11;
                if ( v18 == -4096 )
                {
                  if ( !v56 )
                    break;
                  v18 = *v56;
                  v15 = v56;
                  goto LABEL_11;
                }
                ++v55;
              }
            }
LABEL_30:
            *(_DWORD *)(a1 + 256) = v7;
LABEL_13:
            *v15 = a2;
            *((_DWORD *)v15 + 2) = 0;
            goto LABEL_6;
          }
          goto LABEL_11;
        }
      }
      else
      {
LABEL_14:
        v19 = (((((((2 * v11 - 1) | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 2)
                | (2 * v11 - 1)
                | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 4)
              | (((2 * v11 - 1) | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 2)
              | (2 * v11 - 1)
              | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 8)
            | (((((2 * v11 - 1) | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 2)
              | (2 * v11 - 1)
              | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 4)
            | (((2 * v11 - 1) | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 2)
            | (2 * v11 - 1)
            | ((unsigned __int64)(2 * v11 - 1) >> 1);
        v20 = ((v19 >> 16) | v19) + 1;
        if ( (unsigned int)v20 < 0x40 )
          LODWORD(v20) = 64;
        *(_DWORD *)(a1 + 264) = v20;
        v21 = (_QWORD *)sub_220C370(16LL * (unsigned int)v20, 8, 64, v7, v8, v9);
        *(_QWORD *)(a1 + 248) = v21;
        if ( v12 )
        {
          v22 = *(unsigned int *)(a1 + 264);
          *(_QWORD *)(a1 + 256) = 0;
          v23 = &v12[2 * v11];
          for ( j = &v21[2 * v22]; j != v21; v21 += 2 )
            *v21 = -4096;
          for ( k = v12; v23 != k; k += 2 )
          {
            v26 = *k;
            if ( *k != -8192 && v26 != -4096 )
            {
              v27 = *(_DWORD *)(a1 + 264);
              if ( !v27 )
              {
                *(_QWORD *)&dword_0 = *k;
                BUG();
              }
              v28 = v27 - 1;
              v29 = *(_QWORD *)(a1 + 248);
              v30 = v28 & (((unsigned int)v26 >> 9) ^ ((unsigned int)v26 >> 4));
              v31 = (__int64 *)(v29 + 16LL * v30);
              v32 = *v31;
              if ( *v31 != v26 )
              {
                v63 = 1;
                v64 = nullptr;
                if ( v32 != -4096 )
                {
                  while ( 1 )
                  {
                    if ( !v64 && v32 == -8192 )
                      v64 = v31;
                    v30 = v28 & (v63 + v30);
                    v31 = (__int64 *)(v29 + 16LL * v30);
                    v32 = *v31;
                    if ( v26 == *v31 )
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
              *v31 = v26;
              *((_DWORD *)v31 + 2) = *((_DWORD *)k + 2);
              ++*(_DWORD *)(a1 + 256);
            }
          }
          operator delete();
          v21 = *(_QWORD **)(a1 + 248);
          v33 = *(_DWORD *)(a1 + 264);
          LODWORD(v7) = *(_DWORD *)(a1 + 256) + 1;
        }
        else
        {
          v57 = *(unsigned int *)(a1 + 264);
          *(_QWORD *)(a1 + 256) = 0;
          v33 = v57;
          v58 = &v21[2 * v57];
          if ( v21 != v58 )
          {
            v59 = v21;
            do
            {
              *v59 = -4096;
              v59 += 2;
            }
            while ( v58 != v59 );
          }
          LODWORD(v7) = 1;
        }
        if ( v33 )
        {
          v34 = v33 - 1;
          v35 = (v33 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
          v15 = &v21[2 * v35];
          v18 = *v15;
          if ( a2 != *v15 )
          {
            v36 = 1;
            v37 = nullptr;
            if ( v18 != -4096 )
            {
              while ( 1 )
              {
                if ( v18 == -8192 && !v37 )
                  v37 = v15;
                v35 = v34 & (v36 + v35);
                v15 = &v21[2 * v35];
                v18 = *v15;
                if ( a2 == *v15 )
                  goto LABEL_11;
                if ( v18 == -4096 )
                {
                  if ( !v37 )
                    goto LABEL_30;
                  v18 = *v37;
                  v15 = v37;
                  goto LABEL_11;
                }
                ++v36;
              }
            }
            goto LABEL_30;
          }
LABEL_11:
          *(_DWORD *)(a1 + 256) = v7;
          if ( v18 != -4096 )
            --*(_DWORD *)(a1 + 260);
          goto LABEL_13;
        }
      }
      ++*(_DWORD *)(a1 + 256);
      BUG();
    }
  }
  return result;
}

