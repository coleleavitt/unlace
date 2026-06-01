void __fastcall sub_EA1EC0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
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
  int v24; // r11d
  __int64 *v25; // r10
  _QWORD *v26; // rdi
  __int64 *v27; // rdx
  int i; // r13d
  __int64 v29; // rdi
  unsigned int v30; // r9d
  _QWORD *v31; // r8
  __int64 v32; // r12
  unsigned int v33; // r8d
  unsigned int v34; // edi
  __int64 v35; // rbp
  _QWORD *v36; // rdx
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdi
  _QWORD *v41; // rdx
  int v42; // r11d
  _QWORD *v43; // r10
  _QWORD *v44; // rdi
  _QWORD *v45; // rdx
  int v46; // r14d
  __int64 v47; // rdi
  unsigned int v48; // r9d
  _QWORD *v49; // r8
  __int64 v50; // r13
  unsigned int v51; // r12d
  _QWORD *v52; // r8
  int v53; // r9d
  __int64 v54; // rbp
  _QWORD *v55; // rdx
  int v56; // r15d
  _QWORD *v57; // r14
  _QWORD *v58; // r15
  _QWORD *v59; // r9
  int v60; // r10d
  __int64 v61; // [rsp+8h] [rbp-60h] BYREF
  __int64 v62; // [rsp+10h] [rbp-58h]
  _QWORD *v63; // [rsp+18h] [rbp-50h]
  __m128 v64[4]; // [rsp+20h] [rbp-48h] BYREF

  v7 = *a1;
  v61 = a3;
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
      v62 = v7;
      v37 = (((v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 4) | (v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2);
      v38 = ((((v37 >> 8) | v37) >> 16) | (v37 >> 8) | v37) + 1;
      if ( (unsigned int)v38 < 0x40 )
        LODWORD(v38) = 64;
      *(_DWORD *)(v7 + 16) = v38;
      v39 = sub_220C370(16LL * (unsigned int)v38, 8, 64, v7, v17, a6);
      v7 = v62;
      *(_QWORD *)v62 = v39;
      if ( v9 )
      {
        v40 = *(unsigned int *)(v7 + 16);
        v41 = (_QWORD *)v39;
        *(_QWORD *)(v7 + 8) = 0;
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
          v47 = *v45;
          if ( *v45 != -4096 && v47 != -8192 )
          {
            if ( !v42 )
            {
              *(_QWORD *)&dword_0 = *v45;
              BUG();
            }
            v48 = v46 & (((unsigned int)v47 >> 9) ^ ((unsigned int)v47 >> 4));
            v49 = (_QWORD *)(v39 + 16LL * v48);
            v50 = *v49;
            if ( v47 != *v49 && v50 != -4096 )
            {
              LODWORD(v62) = 1;
              v58 = nullptr;
              v63 = v45;
              while ( 1 )
              {
                if ( v50 == -8192 && !v58 )
                  v58 = v49;
                v48 = v46 & (v62 + v48);
                v49 = (_QWORD *)(v39 + 16LL * v48);
                v50 = *v49;
                if ( v47 == *v49 )
                {
                  v45 = v63;
                  goto LABEL_52;
                }
                if ( v50 == -4096 )
                  break;
                LODWORD(v62) = v62 + 1;
              }
              v45 = v63;
              if ( v58 )
                v49 = v58;
            }
LABEL_52:
            *v49 = v47;
            v49[1] = v45[1];
            ++*(_DWORD *)(v7 + 8);
          }
          v45 += 2;
        }
        while ( v43 != v45 );
        v62 = v7;
        operator delete();
        v7 = v62;
        v9 = *(_QWORD **)v62;
        v8 = *(_DWORD *)(v62 + 16);
        v16 = *(_DWORD *)(v62 + 8) + 1;
      }
      else
      {
        v54 = *(unsigned int *)(v7 + 16);
        *(_QWORD *)(v7 + 8) = 0;
        v8 = v54;
        v9 = (_QWORD *)(v39 + 16 * v54);
        if ( (_QWORD *)v39 != v9 )
        {
          v55 = (_QWORD *)v39;
          do
          {
            *v55 = -4096;
            v55 += 2;
          }
          while ( v9 != v55 );
          v9 = (_QWORD *)v39;
        }
        v16 = 1;
      }
      if ( v8 )
      {
        v51 = (v8 - 1) & v11;
        v13 = &v9[2 * v51];
        v18 = *v13;
        if ( a2 != *v13 )
        {
          if ( v18 != -4096 )
          {
            v52 = &v9[2 * v51];
            v53 = 1;
            v13 = nullptr;
            while ( 1 )
            {
              if ( v18 == -8192 && !v13 )
                v13 = v52;
              v51 = (v8 - 1) & (v53 + v51);
              v52 = &v9[2 * v51];
              v18 = *v52;
              if ( a2 == *v52 )
              {
                v13 = &v9[2 * v51];
                goto LABEL_8;
              }
              if ( v18 == -4096 )
                break;
              ++v53;
            }
            if ( v13 )
              goto LABEL_7;
            v13 = &v9[2 * v51];
          }
LABEL_27:
          *(_DWORD *)(v7 + 8) = v16;
LABEL_10:
          v62 = a2;
          *(__m128 *)v13 = _mm_loadh_ps((const double *)&v61);
          goto LABEL_3;
        }
        goto LABEL_8;
      }
      goto LABEL_107;
    }
LABEL_11:
    v62 = v7;
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
    v21 = sub_220C370(16LL * (unsigned int)v20, 8, 64, v7, a5, a6);
    v7 = v62;
    *(_QWORD *)v62 = v21;
    if ( v9 )
    {
      v22 = *(unsigned int *)(v7 + 16);
      v23 = (_QWORD *)v21;
      *(_QWORD *)(v7 + 8) = 0;
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
            *(_QWORD *)&dword_0 = *v27;
            BUG();
          }
          v30 = i & (((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4));
          v31 = (_QWORD *)(v21 + 16LL * v30);
          v32 = *v31;
          if ( v29 != *v31 )
          {
            v56 = 1;
            v57 = nullptr;
            if ( v32 != -4096 )
            {
              while ( 1 )
              {
                if ( v32 == -8192 && !v57 )
                  v57 = v31;
                v30 = i & (v56 + v30);
                LODWORD(v62) = v56 + 1;
                v31 = (_QWORD *)(v21 + 16LL * v30);
                v32 = *v31;
                if ( v29 == *v31 )
                  break;
                if ( v32 == -4096 )
                {
                  if ( v57 )
                    v31 = v57;
                  break;
                }
                v56 = v62;
              }
            }
          }
          *v31 = v29;
          v31[1] = v27[1];
          ++*(_DWORD *)(v7 + 8);
        }
      }
      v62 = v7;
      operator delete();
      v7 = v62;
      v9 = *(_QWORD **)v62;
      v8 = *(_DWORD *)(v62 + 16);
      v16 = *(_DWORD *)(v62 + 8) + 1;
    }
    else
    {
      v35 = *(unsigned int *)(v7 + 16);
      *(_QWORD *)(v7 + 8) = 0;
      v8 = v35;
      v9 = (_QWORD *)(v21 + 16 * v35);
      if ( (_QWORD *)v21 != v9 )
      {
        v36 = (_QWORD *)v21;
        do
        {
          *v36 = -4096;
          v36 += 2;
        }
        while ( v9 != v36 );
        v9 = (_QWORD *)v21;
      }
      v16 = 1;
    }
    if ( v8 )
    {
      v33 = v8 - 1;
      v34 = (v8 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v13 = &v9[2 * v34];
      v18 = *v13;
      if ( a2 != *v13 )
      {
        if ( v18 != -4096 )
        {
          v59 = &v9[2 * (v33 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)))];
          v60 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v18 == -8192 && !v13 )
              v13 = v59;
            v34 = v33 & (v60 + v34);
            v59 = &v9[2 * v34];
            v18 = *v59;
            if ( a2 == *v59 )
            {
              v13 = &v9[2 * v34];
              goto LABEL_8;
            }
            if ( v18 == -4096 )
              break;
            ++v60;
          }
          if ( v13 )
            goto LABEL_7;
          v13 = &v9[2 * v34];
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
  sub_AC6E00(v64, v13, &v9[2 * v8], v7, 1);
}

