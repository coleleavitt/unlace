__int64 __fastcall sub_E2FAD0(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v23; // rsi
  __int64 *v24; // r9
  _QWORD *j; // rdx
  __int64 *k; // rax
  __int64 v27; // rdx
  int v28; // r8d
  int v29; // r8d
  __int64 v30; // r11
  unsigned int v31; // edi
  __int64 *v32; // rcx
  __int64 v33; // r10
  int v34; // edi
  int v35; // r8d
  unsigned int v36; // edi
  int v37; // r10d
  __int64 *v38; // r9
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r15
  _QWORD *i; // rdx
  __int64 *v46; // rax
  __int64 v47; // rdx
  int v48; // edi
  int v49; // edi
  __int64 v50; // r9
  unsigned int v51; // esi
  __int64 *v52; // rcx
  __int64 v53; // r8
  int v54; // edi
  int v55; // edi
  unsigned int v56; // r14d
  int v57; // r9d
  __int64 *v58; // r8
  __int64 v59; // rcx
  _QWORD *v60; // rcx
  _QWORD *v61; // rdx
  __int64 v62; // rcx
  _QWORD *v63; // rcx
  _QWORD *v64; // rdx
  int v65; // r15d
  __int64 *v66; // r14
  __int64 *v67; // r10
  int v68; // [rsp+8h] [rbp-40h]

  result = sub_E2F250(a1, a2);
  if ( !BYTE4(result) )
  {
    v10 = sub_E2CCC0(a1, a2, a3);
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
        v39 = (v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2);
        v40 = (((v39 >> 4) | v39) >> 8) | (v39 >> 4) | v39;
        v41 = ((v40 >> 16) | v40) + 1;
        if ( (unsigned int)v41 < 0x40 )
          LODWORD(v41) = 64;
        *(_DWORD *)(a1 + 264) = v41;
        v42 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v41, 8, 64, v7, v8, v9);
        *(_QWORD *)(a1 + 248) = v42;
        if ( v12 )
        {
          v43 = *(unsigned int *)(a1 + 264);
          *(_QWORD *)(a1 + 256) = 0;
          v44 = 2LL * v11;
          for ( i = &v42[2 * v43]; i != v42; v42 += 2 )
            *v42 = -4096;
          v46 = v12;
          do
          {
            v47 = *v46;
            if ( *v46 != -4096 && v47 != -8192 )
            {
              v48 = *(_DWORD *)(a1 + 264);
              if ( !v48 )
              {
                *(_QWORD *)&dword_0 = *v46;
                BUG();
              }
              v49 = v48 - 1;
              v50 = *(_QWORD *)(a1 + 248);
              v51 = v49 & (((unsigned int)v47 >> 9) ^ ((unsigned int)v47 >> 4));
              v52 = (__int64 *)(v50 + 16LL * v51);
              v53 = *v52;
              if ( *v52 != v47 && v53 != -4096 )
              {
                v68 = 1;
                v67 = nullptr;
                while ( 1 )
                {
                  if ( v53 == -8192 && !v67 )
                    v67 = v52;
                  v51 = v49 & (v68 + v51);
                  v52 = (__int64 *)(v50 + 16LL * v51);
                  v53 = *v52;
                  if ( v47 == *v52 )
                    break;
                  if ( v53 == -4096 )
                  {
                    if ( v67 )
                      v52 = v67;
                    break;
                  }
                  ++v68;
                }
              }
              *v52 = v47;
              *((_DWORD *)v52 + 2) = *((_DWORD *)v46 + 2);
              ++*(_DWORD *)(a1 + 256);
            }
            v46 += 2;
          }
          while ( &v12[v44] != v46 );
          operator delete(v12, v44 * 8, 8);
          v42 = *(_QWORD **)(a1 + 248);
          v54 = *(_DWORD *)(a1 + 264);
          LODWORD(v7) = *(_DWORD *)(a1 + 256) + 1;
        }
        else
        {
          v62 = *(unsigned int *)(a1 + 264);
          *(_QWORD *)(a1 + 256) = 0;
          v54 = v62;
          v63 = &v42[2 * v62];
          if ( v42 != v63 )
          {
            v64 = v42;
            do
            {
              *v64 = -4096;
              v64 += 2;
            }
            while ( v63 != v64 );
          }
          LODWORD(v7) = 1;
        }
        if ( v54 )
        {
          v55 = v54 - 1;
          v56 = v55 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
          v15 = &v42[2 * v56];
          v18 = *v15;
          if ( a2 != *v15 )
          {
            v57 = 1;
            v58 = nullptr;
            if ( v18 != -4096 )
            {
              while ( 1 )
              {
                if ( v18 == -8192 && !v58 )
                  v58 = v15;
                v56 = v55 & (v57 + v56);
                v15 = &v42[2 * v56];
                v18 = *v15;
                if ( a2 == *v15 )
                  goto LABEL_11;
                if ( v18 == -4096 )
                {
                  if ( !v58 )
                    break;
                  v18 = *v58;
                  v15 = v58;
                  goto LABEL_11;
                }
                ++v57;
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
        v21 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v20, 8, 64, v7, v8, v9);
        *(_QWORD *)(a1 + 248) = v21;
        if ( v12 )
        {
          v22 = *(unsigned int *)(a1 + 264);
          *(_QWORD *)(a1 + 256) = 0;
          v23 = 2LL * v11;
          v24 = &v12[v23];
          for ( j = &v21[2 * v22]; j != v21; v21 += 2 )
            *v21 = -4096;
          for ( k = v12; v24 != k; k += 2 )
          {
            v27 = *k;
            if ( *k != -8192 && v27 != -4096 )
            {
              v28 = *(_DWORD *)(a1 + 264);
              if ( !v28 )
              {
                *(_QWORD *)&dword_0 = *k;
                BUG();
              }
              v29 = v28 - 1;
              v30 = *(_QWORD *)(a1 + 248);
              v31 = v29 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
              v32 = (__int64 *)(v30 + 16LL * v31);
              v33 = *v32;
              if ( *v32 != v27 )
              {
                v65 = 1;
                v66 = nullptr;
                if ( v33 != -4096 )
                {
                  while ( 1 )
                  {
                    if ( !v66 && v33 == -8192 )
                      v66 = v32;
                    v31 = v29 & (v65 + v31);
                    v32 = (__int64 *)(v30 + 16LL * v31);
                    v33 = *v32;
                    if ( v27 == *v32 )
                      break;
                    if ( v33 == -4096 )
                    {
                      if ( v66 )
                        v32 = v66;
                      break;
                    }
                    ++v65;
                  }
                }
              }
              *v32 = v27;
              *((_DWORD *)v32 + 2) = *((_DWORD *)k + 2);
              ++*(_DWORD *)(a1 + 256);
            }
          }
          operator delete(v12, v23 * 8, 8);
          v21 = *(_QWORD **)(a1 + 248);
          v34 = *(_DWORD *)(a1 + 264);
          LODWORD(v7) = *(_DWORD *)(a1 + 256) + 1;
        }
        else
        {
          v59 = *(unsigned int *)(a1 + 264);
          *(_QWORD *)(a1 + 256) = 0;
          v34 = v59;
          v60 = &v21[2 * v59];
          if ( v21 != v60 )
          {
            v61 = v21;
            do
            {
              *v61 = -4096;
              v61 += 2;
            }
            while ( v60 != v61 );
          }
          LODWORD(v7) = 1;
        }
        if ( v34 )
        {
          v35 = v34 - 1;
          v36 = (v34 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
          v15 = &v21[2 * v36];
          v18 = *v15;
          if ( a2 != *v15 )
          {
            v37 = 1;
            v38 = nullptr;
            if ( v18 != -4096 )
            {
              while ( 1 )
              {
                if ( v18 == -8192 && !v38 )
                  v38 = v15;
                v36 = v35 & (v37 + v36);
                v15 = &v21[2 * v36];
                v18 = *v15;
                if ( a2 == *v15 )
                  goto LABEL_11;
                if ( v18 == -4096 )
                {
                  if ( !v38 )
                    goto LABEL_30;
                  v18 = *v38;
                  v15 = v38;
                  goto LABEL_11;
                }
                ++v37;
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
