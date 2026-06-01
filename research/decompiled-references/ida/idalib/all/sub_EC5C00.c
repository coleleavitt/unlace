void __fastcall sub_EC5C00(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v7; // rcx
  unsigned int v8; // r13d
  _QWORD *v9; // rbp
  unsigned __int64 v10; // rdi
  unsigned int v11; // r12d
  unsigned int v12; // edx
  _QWORD *v13; // rsi
  __int64 v14; // rax
  int v15; // r8d
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  _QWORD *v23; // rdx
  __int64 v24; // rsi
  int v25; // r11d
  __int64 *v26; // r10
  _QWORD *v27; // rdi
  __int64 *v28; // rdx
  int i; // r13d
  __int64 v30; // rdi
  unsigned int v31; // r9d
  _QWORD *v32; // r8
  __int64 v33; // r12
  unsigned int v34; // r8d
  unsigned int v35; // edi
  __int64 v36; // rbp
  _QWORD *v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdi
  _QWORD *v42; // rdx
  __int64 v43; // rsi
  int v44; // r11d
  _QWORD *v45; // rdi
  _QWORD *v46; // rdx
  int v47; // r14d
  __int64 v48; // rdi
  unsigned int v49; // r9d
  _QWORD *v50; // r8
  __int64 v51; // r13
  unsigned int v52; // r12d
  _QWORD *v53; // r8
  int v54; // r9d
  __int64 v55; // rbp
  _QWORD *v56; // rdx
  int v57; // r15d
  _QWORD *v58; // r14
  _QWORD *v59; // r15
  _QWORD *v60; // r9
  int v61; // r10d
  __int64 v62; // [rsp+8h] [rbp-60h] BYREF
  __int64 v63; // [rsp+10h] [rbp-58h]
  _QWORD *v64; // [rsp+18h] [rbp-50h]
  __m128 v65[4]; // [rsp+20h] [rbp-48h] BYREF

  v7 = *a1;
  v62 = a3;
  v8 = *(_DWORD *)(v7 + 16);
  v9 = *(_QWORD **)v7;
  if ( !v8 )
    goto LABEL_11;
  v10 = v8 - 1;
  v11 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
  v12 = v10 & v11;
  v13 = &v9[2 * ((unsigned int)v10 & v11)];
  v14 = *v13;
  if ( a2 != *v13 )
  {
    v15 = 1;
    a6 = nullptr;
    if ( v14 != -4096 )
    {
      while ( 1 )
      {
        if ( !a6 && v14 == -8192 )
          a6 = v13;
        v12 = v10 & (v15 + v12);
        v13 = &v9[2 * v12];
        v14 = *v13;
        if ( a2 == *v13 )
          goto LABEL_3;
        if ( v14 == -4096 )
          break;
        ++v15;
      }
      if ( a6 )
        v13 = a6;
    }
    v16 = *(_DWORD *)(v7 + 8) + 1;
    a5 = (unsigned int)(4 * v16);
    if ( (unsigned int)a5 < 3 * v8 )
    {
      v17 = v8 >> 3;
      if ( v8 - *(_DWORD *)(v7 + 12) - v16 > (unsigned int)v17 )
      {
LABEL_7:
        v18 = *v13;
        goto LABEL_8;
      }
      v63 = v7;
      v38 = (((v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 4) | (v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2);
      v39 = ((((v38 >> 8) | v38) >> 16) | (v38 >> 8) | v38) + 1;
      if ( (unsigned int)v39 < 0x40 )
        LODWORD(v39) = 64;
      *(_DWORD *)(v7 + 16) = v39;
      v40 = sub_22300B0(16LL * (unsigned int)v39, 8, 64, v7, v17, a6);
      v7 = v63;
      *(_QWORD *)v63 = v40;
      if ( v9 )
      {
        v41 = *(unsigned int *)(v7 + 16);
        v42 = (_QWORD *)v40;
        v43 = 2LL * v8;
        *(_QWORD *)(v7 + 8) = 0;
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
          v48 = *v46;
          if ( *v46 != -4096 && v48 != -8192 )
          {
            if ( !v44 )
            {
              *(_QWORD *)&dword_0 = *v46;
              BUG();
            }
            v49 = v47 & (((unsigned int)v48 >> 9) ^ ((unsigned int)v48 >> 4));
            v50 = (_QWORD *)(v40 + 16LL * v49);
            v51 = *v50;
            if ( v48 != *v50 && v51 != -4096 )
            {
              LODWORD(v63) = 1;
              v59 = nullptr;
              v64 = v46;
              while ( 1 )
              {
                if ( v51 == -8192 && !v59 )
                  v59 = v50;
                v49 = v47 & (v63 + v49);
                v50 = (_QWORD *)(v40 + 16LL * v49);
                v51 = *v50;
                if ( v48 == *v50 )
                {
                  v46 = v64;
                  goto LABEL_52;
                }
                if ( v51 == -4096 )
                  break;
                LODWORD(v63) = v63 + 1;
              }
              v46 = v64;
              if ( v59 )
                v50 = v59;
            }
LABEL_52:
            *v50 = v48;
            v50[1] = v46[1];
            ++*(_DWORD *)(v7 + 8);
          }
          v46 += 2;
        }
        while ( &v9[v43] != v46 );
        v63 = v7;
        operator delete(v9, v43 * 8, 8);
        v7 = v63;
        v9 = *(_QWORD **)v63;
        v8 = *(_DWORD *)(v63 + 16);
        v16 = *(_DWORD *)(v63 + 8) + 1;
      }
      else
      {
        v55 = *(unsigned int *)(v7 + 16);
        *(_QWORD *)(v7 + 8) = 0;
        v8 = v55;
        v9 = (_QWORD *)(v40 + 16 * v55);
        if ( (_QWORD *)v40 != v9 )
        {
          v56 = (_QWORD *)v40;
          do
          {
            *v56 = -4096;
            v56 += 2;
          }
          while ( v9 != v56 );
          v9 = (_QWORD *)v40;
        }
        v16 = 1;
      }
      if ( v8 )
      {
        v52 = (v8 - 1) & v11;
        v13 = &v9[2 * v52];
        v18 = *v13;
        if ( a2 != *v13 )
        {
          if ( v18 != -4096 )
          {
            v53 = &v9[2 * v52];
            v54 = 1;
            v13 = nullptr;
            while ( 1 )
            {
              if ( v18 == -8192 && !v13 )
                v13 = v53;
              v52 = (v8 - 1) & (v54 + v52);
              v53 = &v9[2 * v52];
              v18 = *v53;
              if ( a2 == *v53 )
              {
                v13 = &v9[2 * v52];
                goto LABEL_8;
              }
              if ( v18 == -4096 )
                break;
              ++v54;
            }
            if ( v13 )
              goto LABEL_7;
            v13 = &v9[2 * v52];
          }
LABEL_27:
          *(_DWORD *)(v7 + 8) = v16;
LABEL_10:
          v63 = a2;
          *(__m128 *)v13 = _mm_loadh_ps((const double *)&v62);
          goto LABEL_3;
        }
        goto LABEL_8;
      }
      goto LABEL_107;
    }
LABEL_11:
    v63 = v7;
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
    *(_DWORD *)(v7 + 16) = v20;
    v21 = sub_22300B0(16LL * (unsigned int)v20, 8, 64, v7, a5, a6);
    v7 = v63;
    *(_QWORD *)v63 = v21;
    if ( v9 )
    {
      v22 = *(unsigned int *)(v7 + 16);
      v23 = (_QWORD *)v21;
      v24 = 2LL * v8;
      *(_QWORD *)(v7 + 8) = 0;
      v25 = v22;
      v26 = &v9[v24];
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
      for ( i = v25 - 1; v26 != v28; v28 += 2 )
      {
        v30 = *v28;
        if ( *v28 != -8192 && v30 != -4096 )
        {
          if ( !v25 )
          {
            *(_QWORD *)&dword_0 = *v28;
            BUG();
          }
          v31 = i & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
          v32 = (_QWORD *)(v21 + 16LL * v31);
          v33 = *v32;
          if ( v30 != *v32 )
          {
            v57 = 1;
            v58 = nullptr;
            if ( v33 != -4096 )
            {
              while ( 1 )
              {
                if ( v33 == -8192 && !v58 )
                  v58 = v32;
                v31 = i & (v57 + v31);
                LODWORD(v63) = v57 + 1;
                v32 = (_QWORD *)(v21 + 16LL * v31);
                v33 = *v32;
                if ( v30 == *v32 )
                  break;
                if ( v33 == -4096 )
                {
                  if ( v58 )
                    v32 = v58;
                  break;
                }
                v57 = v63;
              }
            }
          }
          *v32 = v30;
          v32[1] = v28[1];
          ++*(_DWORD *)(v7 + 8);
        }
      }
      v63 = v7;
      operator delete(v9, v24 * 8, 8);
      v7 = v63;
      v9 = *(_QWORD **)v63;
      v8 = *(_DWORD *)(v63 + 16);
      v16 = *(_DWORD *)(v63 + 8) + 1;
    }
    else
    {
      v36 = *(unsigned int *)(v7 + 16);
      *(_QWORD *)(v7 + 8) = 0;
      v8 = v36;
      v9 = (_QWORD *)(v21 + 16 * v36);
      if ( (_QWORD *)v21 != v9 )
      {
        v37 = (_QWORD *)v21;
        do
        {
          *v37 = -4096;
          v37 += 2;
        }
        while ( v9 != v37 );
        v9 = (_QWORD *)v21;
      }
      v16 = 1;
    }
    if ( v8 )
    {
      v34 = v8 - 1;
      v35 = (v8 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v13 = &v9[2 * v35];
      v18 = *v13;
      if ( a2 != *v13 )
      {
        if ( v18 != -4096 )
        {
          v60 = &v9[2 * (v34 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)))];
          v61 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v18 == -8192 && !v13 )
              v13 = v60;
            v35 = v34 & (v61 + v35);
            v60 = &v9[2 * v35];
            v18 = *v60;
            if ( a2 == *v60 )
            {
              v13 = &v9[2 * v35];
              goto LABEL_8;
            }
            if ( v18 == -4096 )
              break;
            ++v61;
          }
          if ( v13 )
            goto LABEL_7;
          v13 = &v9[2 * v35];
        }
        goto LABEL_27;
      }
LABEL_8:
      *(_DWORD *)(v7 + 8) = v16;
      if ( v18 != -4096 )
        --*(_DWORD *)(v7 + 12);
      goto LABEL_10;
    }
LABEL_107:
    ++*(_DWORD *)(v7 + 8);
    BUG();
  }
LABEL_3:
  sub_AEAB40(v65, v13, &v9[2 * v8], v7, 1);
}
