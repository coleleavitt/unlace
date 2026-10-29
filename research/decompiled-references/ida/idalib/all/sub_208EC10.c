__int64 __fastcall sub_208EC10(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  unsigned int v7; // r14d
  __int64 *v8; // r13
  unsigned __int64 v9; // rsi
  unsigned int v10; // r12d
  unsigned int v11; // ecx
  __int64 *v12; // rdx
  __int64 v13; // rax
  int v15; // edi
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r10
  __int64 *v22; // r8
  _QWORD *v23; // rcx
  _QWORD *v24; // rdx
  __int64 *v25; // rdx
  int i; // r12d
  __int64 v27; // rcx
  unsigned int v28; // edi
  __int64 v29; // r9
  __int64 v30; // r11
  __m128i v31; // xmm0
  int v32; // esi
  int v33; // r8d
  unsigned int v34; // edi
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // r10
  _QWORD *v40; // rcx
  _QWORD *v41; // rdx
  __int64 *v42; // rdx
  int v43; // r14d
  __int64 v44; // rcx
  unsigned int v45; // edi
  __int64 v46; // r9
  __int64 v47; // r11
  __m128i v48; // xmm1
  int v49; // esi
  int v50; // edi
  unsigned int v51; // r12d
  __int64 *v52; // r8
  int v53; // r9d
  __int64 v54; // rdx
  _QWORD *v55; // rcx
  _QWORD *v56; // rdx
  __int64 v57; // rdx
  _QWORD *v58; // rcx
  _QWORD *v59; // rdx
  int v60; // r15d
  __int64 v61; // r14
  __int64 v62; // r15
  __int64 *v63; // r9
  int v64; // r10d
  int v65; // [rsp+4h] [rbp-44h]

  v2 = sub_20CB0D0(a1);
  v6 = *(_QWORD *)v2;
  v7 = *(_DWORD *)(*(_QWORD *)v2 + 2776LL);
  v8 = *(__int64 **)(*(_QWORD *)v2 + 2760LL);
  if ( !v7 )
    goto LABEL_20;
  v9 = v7 - 1;
  v10 = ((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4);
  v11 = v9 & v10;
  v12 = &v8[3 * ((unsigned int)v9 & v10)];
  v13 = *v12;
  if ( a1 != *v12 )
  {
    v15 = 1;
    v4 = nullptr;
    if ( v13 != -4096 )
    {
      while ( 1 )
      {
        if ( !v4 && v13 == -8192 )
          v4 = v12;
        v5 = (unsigned int)(v15 + 1);
        v11 = v9 & (v15 + v11);
        v12 = &v8[3 * v11];
        v13 = *v12;
        if ( a1 == *v12 )
          return v12[1];
        if ( v13 == -4096 )
          break;
        ++v15;
      }
      if ( v4 )
        v12 = v4;
    }
    v3 = (unsigned int)(*(_DWORD *)(v6 + 2768) + 1);
    if ( 4 * (int)v3 < 3 * v7 )
    {
      if ( v7 - *(_DWORD *)(v6 + 2772) - (unsigned int)v3 > v7 >> 3 )
      {
LABEL_7:
        v16 = *v12;
        goto LABEL_8;
      }
      v35 = (((((v9 >> 1) | v9 | (((v9 >> 1) | v9) >> 2)) >> 4) | (v9 >> 1) | v9 | (((v9 >> 1) | v9) >> 2)) >> 8)
          | (((v9 >> 1) | v9 | (((v9 >> 1) | v9) >> 2)) >> 4)
          | (v9 >> 1)
          | v9
          | (((v9 >> 1) | v9) >> 2);
      v36 = ((v35 >> 16) | v35) + 1;
      if ( (unsigned int)v36 < 0x40 )
        LODWORD(v36) = 64;
      *(_DWORD *)(v6 + 2776) = v36;
      v37 = sub_22300B0(24LL * (unsigned int)v36, 8, 64, v3, v4, v5);
      *(_QWORD *)(v6 + 2760) = v37;
      if ( v8 )
      {
        *(_QWORD *)(v6 + 2768) = 0;
        v38 = 3LL * v7;
        v39 = *(unsigned int *)(v6 + 2776);
        v40 = (_QWORD *)(v37 + 24 * v39);
        v41 = (_QWORD *)v37;
        if ( (_QWORD *)v37 != v40 )
        {
          do
          {
            *v41 = -4096;
            v41 += 3;
          }
          while ( v40 != v41 );
        }
        v42 = v8;
        v43 = v39 - 1;
        do
        {
          v44 = *v42;
          if ( *v42 != -4096 && v44 != -8192 )
          {
            if ( !(_DWORD)v39 )
            {
              *(_QWORD *)&dword_0 = *v42;
              BUG();
            }
            v45 = v43 & (((unsigned int)v44 >> 9) ^ ((unsigned int)v44 >> 4));
            v46 = v37 + 24LL * v45;
            v47 = *(_QWORD *)v46;
            if ( v44 != *(_QWORD *)v46 && v47 != -4096 )
            {
              v65 = 1;
              v62 = 0;
              while ( 1 )
              {
                if ( v47 == -8192 && !v62 )
                  v62 = v46;
                v45 = v43 & (v65 + v45);
                v46 = v37 + 24LL * v45;
                v47 = *(_QWORD *)v46;
                if ( v44 == *(_QWORD *)v46 )
                  break;
                if ( v47 == -4096 )
                {
                  if ( v62 )
                    v46 = v62;
                  break;
                }
                ++v65;
              }
            }
            v48 = _mm_loadu_si128((const __m128i *)(v42 + 1));
            *(_QWORD *)v46 = v44;
            *(__m128i *)(v46 + 8) = v48;
            ++*(_DWORD *)(v6 + 2768);
          }
          v42 += 3;
        }
        while ( &v8[v38] != v42 );
        operator delete(v8, v38 * 8, 8);
        v37 = *(_QWORD *)(v6 + 2760);
        v49 = *(_DWORD *)(v6 + 2776);
        LODWORD(v3) = *(_DWORD *)(v6 + 2768) + 1;
      }
      else
      {
        v57 = *(unsigned int *)(v6 + 2776);
        *(_QWORD *)(v6 + 2768) = 0;
        v49 = v57;
        v58 = (_QWORD *)(v37 + 24 * v57);
        if ( (_QWORD *)v37 != v58 )
        {
          v59 = (_QWORD *)v37;
          do
          {
            *v59 = -4096;
            v59 += 3;
          }
          while ( v58 != v59 );
        }
        LODWORD(v3) = 1;
      }
      if ( v49 )
      {
        v50 = v49 - 1;
        v51 = (v49 - 1) & v10;
        v12 = (__int64 *)(v37 + 24LL * v51);
        v16 = *v12;
        if ( a1 != *v12 )
        {
          if ( v16 != -4096 )
          {
            v52 = (__int64 *)(v37 + 24LL * v51);
            v53 = 1;
            v12 = nullptr;
            while ( 1 )
            {
              if ( v16 == -8192 && !v12 )
                v12 = v52;
              v51 = v50 & (v53 + v51);
              v52 = (__int64 *)(v37 + 24LL * v51);
              v16 = *v52;
              if ( a1 == *v52 )
              {
                v12 = (__int64 *)(v37 + 24LL * v51);
                goto LABEL_8;
              }
              if ( v16 == -4096 )
                break;
              ++v53;
            }
            if ( v12 )
              goto LABEL_7;
            v12 = (__int64 *)(v37 + 24LL * v51);
          }
LABEL_36:
          *(_DWORD *)(v6 + 2768) = v3;
LABEL_10:
          *v12 = a1;
          v12[1] = 0;
          v12[2] = 0;
          return v12[1];
        }
        goto LABEL_8;
      }
      goto LABEL_105;
    }
LABEL_20:
    v17 = (((((((2 * v7 - 1) | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 2)
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
    v18 = ((v17 >> 16) | v17) + 1;
    if ( (unsigned int)v18 < 0x40 )
      LODWORD(v18) = 64;
    *(_DWORD *)(v6 + 2776) = v18;
    v19 = sub_22300B0(24LL * (unsigned int)v18, 8, 64, v3, v4, v5);
    *(_QWORD *)(v6 + 2760) = v19;
    if ( v8 )
    {
      *(_QWORD *)(v6 + 2768) = 0;
      v20 = 3LL * v7;
      v21 = *(unsigned int *)(v6 + 2776);
      v22 = &v8[v20];
      v23 = (_QWORD *)(v19 + 24 * v21);
      v24 = (_QWORD *)v19;
      if ( (_QWORD *)v19 != v23 )
      {
        do
        {
          *v24 = -4096;
          v24 += 3;
        }
        while ( v23 != v24 );
      }
      v25 = v8;
      for ( i = v21 - 1; v22 != v25; v25 += 3 )
      {
        v27 = *v25;
        if ( *v25 != -8192 && v27 != -4096 )
        {
          if ( !(_DWORD)v21 )
          {
            *(_QWORD *)&dword_0 = *v25;
            BUG();
          }
          v28 = i & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
          v29 = v19 + 24LL * v28;
          v30 = *(_QWORD *)v29;
          if ( *(_QWORD *)v29 != v27 )
          {
            v60 = 1;
            v61 = 0;
            if ( v30 != -4096 )
            {
              while ( 1 )
              {
                if ( v30 == -8192 && !v61 )
                  v61 = v29;
                v28 = i & (v60 + v28);
                v29 = v19 + 24LL * v28;
                v30 = *(_QWORD *)v29;
                if ( v27 == *(_QWORD *)v29 )
                  break;
                if ( v30 == -4096 )
                {
                  if ( v61 )
                    v29 = v61;
                  break;
                }
                ++v60;
              }
            }
          }
          v31 = _mm_loadu_si128((const __m128i *)(v25 + 1));
          *(_QWORD *)v29 = v27;
          *(__m128i *)(v29 + 8) = v31;
          ++*(_DWORD *)(v6 + 2768);
        }
      }
      operator delete(v8, v20 * 8, 8);
      v19 = *(_QWORD *)(v6 + 2760);
      v32 = *(_DWORD *)(v6 + 2776);
      LODWORD(v3) = *(_DWORD *)(v6 + 2768) + 1;
    }
    else
    {
      v54 = *(unsigned int *)(v6 + 2776);
      *(_QWORD *)(v6 + 2768) = 0;
      v32 = v54;
      v55 = (_QWORD *)(v19 + 24 * v54);
      if ( (_QWORD *)v19 != v55 )
      {
        v56 = (_QWORD *)v19;
        do
        {
          *v56 = -4096;
          v56 += 3;
        }
        while ( v55 != v56 );
      }
      LODWORD(v3) = 1;
    }
    if ( v32 )
    {
      v33 = v32 - 1;
      v34 = (v32 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
      v12 = (__int64 *)(v19 + 24LL * v34);
      v16 = *v12;
      if ( a1 != *v12 )
      {
        if ( v16 != -4096 )
        {
          v63 = (__int64 *)(v19 + 24LL * (v33 & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4))));
          v64 = 1;
          v12 = nullptr;
          while ( 1 )
          {
            if ( v16 == -8192 && !v12 )
              v12 = v63;
            v34 = v33 & (v64 + v34);
            v63 = (__int64 *)(v19 + 24LL * v34);
            v16 = *v63;
            if ( a1 == *v63 )
            {
              v12 = (__int64 *)(v19 + 24LL * v34);
              goto LABEL_8;
            }
            if ( v16 == -4096 )
              break;
            ++v64;
          }
          if ( v12 )
            goto LABEL_7;
          v12 = (__int64 *)(v19 + 24LL * v34);
        }
        goto LABEL_36;
      }
LABEL_8:
      *(_DWORD *)(v6 + 2768) = v3;
      if ( v16 != -4096 )
        --*(_DWORD *)(v6 + 2772);
      goto LABEL_10;
    }
LABEL_105:
    ++*(_DWORD *)(v6 + 2768);
    BUG();
  }
  return v12[1];
}
