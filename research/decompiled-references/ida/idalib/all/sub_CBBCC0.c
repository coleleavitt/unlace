__m128i *__fastcall sub_CBBCC0(
        __m128i *a1,
        __int64 a2,
        __int64 *a3,
        const __m128i *a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v9; // r14
  _QWORD *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rdi
  __m128i v15; // xmm0
  int v17; // r9d
  _QWORD *v18; // r10
  int v19; // eax
  __int64 v20; // r9
  __int64 v21; // rdi
  __m128i v22; // xmm1
  __m128i si128; // xmm2
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r15
  int v29; // r10d
  _QWORD *v30; // r8
  _QWORD *v31; // rsi
  _QWORD *v32; // rdx
  _QWORD *v33; // rdx
  int i; // r14d
  __int64 v35; // rsi
  unsigned int v36; // edi
  __int64 v37; // r9
  __int64 v38; // r11
  __m128i v39; // xmm3
  int v40; // esi
  int v41; // r9d
  unsigned int v42; // r8d
  __int64 v43; // rdx
  _QWORD *v44; // rdx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r15
  int v51; // r10d
  _QWORD *v52; // r8
  _QWORD *v53; // rsi
  _QWORD *v54; // rdx
  _QWORD *v55; // rdx
  int v56; // r14d
  unsigned int v57; // edi
  __int64 v58; // r9
  __int64 v59; // r11
  __m128i v60; // xmm4
  int v61; // esi
  int v62; // r9d
  unsigned int v63; // r8d
  __int64 v64; // rdx
  _QWORD *v65; // rdx
  _QWORD *v66; // r11
  int v67; // edi
  _QWORD *v68; // r10
  int v69; // r11d
  const __m128i *v70; // [rsp+8h] [rbp-60h]
  const __m128i *v71; // [rsp+8h] [rbp-60h]
  const __m128i *v72; // [rsp+8h] [rbp-60h]
  const __m128i *v73; // [rsp+8h] [rbp-60h]
  __int64 v74; // [rsp+8h] [rbp-60h]
  __int64 v75; // [rsp+8h] [rbp-60h]
  int v76; // [rsp+14h] [rbp-54h]
  int v77; // [rsp+14h] [rbp-54h]
  __m128 v78[4]; // [rsp+20h] [rbp-48h] BYREF

  v9 = *(unsigned int *)(a2 + 16);
  v10 = *(_QWORD **)a2;
  if ( !(_DWORD)v9 )
    goto LABEL_12;
  v11 = *a3;
  a5 = (unsigned int)(v9 - 1);
  LODWORD(v12) = a5 & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
  v13 = &v10[3 * (unsigned int)v12];
  v14 = *v13;
  if ( v11 != *v13 )
  {
    v17 = 1;
    v18 = nullptr;
    if ( v14 != -4096 )
    {
      while ( 1 )
      {
        if ( v14 == -8192 && !v18 )
          v18 = v13;
        v12 = (unsigned int)a5 & ((_DWORD)v12 + v17);
        v13 = &v10[3 * v12];
        v14 = *v13;
        if ( v11 == *v13 )
          goto LABEL_3;
        if ( v14 == -4096 )
          break;
        ++v17;
      }
      if ( v18 )
        v13 = v18;
    }
    v19 = *(_DWORD *)(a2 + 8) + 1;
    a6 = (unsigned int)(4 * v19);
    if ( (unsigned int)a6 < 3 * (int)v9 )
    {
      v20 = (unsigned int)v9 >> 3;
      if ( (int)v9 - *(_DWORD *)(a2 + 12) - v19 > (unsigned int)v20 )
      {
LABEL_8:
        v21 = *v13;
        goto LABEL_9;
      }
      v72 = a4;
      v45 = (((a5 >> 1) | a5 | (((a5 >> 1) | a5) >> 2)) >> 4) | (a5 >> 1) | a5 | (((a5 >> 1) | a5) >> 2);
      v46 = v45 >> 8;
      v47 = (((v46 | v45) >> 16) | v46 | v45) + 1;
      if ( (unsigned int)v47 < 0x40 )
        LODWORD(v47) = 64;
      *(_DWORD *)(a2 + 16) = v47;
      v48 = sub_22300B0(24LL * (unsigned int)v47, 8, 64, a4, v46, v20);
      a4 = v72;
      *(_QWORD *)a2 = v48;
      if ( v10 )
      {
        v49 = *(unsigned int *)(a2 + 16);
        *(_QWORD *)(a2 + 8) = 0;
        v50 = 24 * v9;
        v51 = v49;
        v52 = &v10[3 * v9];
        v53 = (_QWORD *)(v48 + 24 * v49);
        v54 = (_QWORD *)v48;
        if ( (_QWORD *)v48 != v53 )
        {
          do
          {
            *v54 = -4096;
            v54 += 3;
          }
          while ( v53 != v54 );
        }
        v55 = v10;
        v56 = v51 - 1;
        do
        {
          v35 = *v55;
          if ( *v55 != -4096 && v35 != -8192 )
          {
            if ( !v51 )
              goto LABEL_113;
            v57 = v56 & (((unsigned int)v35 >> 9) ^ ((unsigned int)v35 >> 4));
            v58 = v48 + 24LL * v57;
            v59 = *(_QWORD *)v58;
            if ( v35 != *(_QWORD *)v58 && v59 != -4096 )
            {
              v77 = 1;
              v75 = 0;
              while ( 1 )
              {
                if ( v59 == -8192 )
                {
                  if ( v75 )
                    v58 = v75;
                  v75 = v58;
                }
                v57 = v56 & (v77 + v57);
                v58 = v48 + 24LL * v57;
                v59 = *(_QWORD *)v58;
                if ( v35 == *(_QWORD *)v58 )
                  break;
                if ( v59 == -4096 )
                {
                  if ( v75 )
                    v58 = v75;
                  break;
                }
                ++v77;
              }
            }
            v60 = _mm_loadu_si128((const __m128i *)(v55 + 1));
            ++*(_DWORD *)(a2 + 8);
            *(_QWORD *)v58 = v35;
            *(__m128i *)(v58 + 8) = v60;
          }
          v55 += 3;
        }
        while ( v52 != v55 );
        v73 = a4;
        operator delete(v10, v50, 8);
        v10 = *(_QWORD **)a2;
        v61 = *(_DWORD *)(a2 + 16);
        a4 = v73;
        v19 = *(_DWORD *)(a2 + 8) + 1;
      }
      else
      {
        v64 = *(unsigned int *)(a2 + 16);
        *(_QWORD *)(a2 + 8) = 0;
        v61 = v64;
        v10 = (_QWORD *)(v48 + 24 * v64);
        if ( (_QWORD *)v48 != v10 )
        {
          v65 = (_QWORD *)v48;
          do
          {
            *v65 = -4096;
            v65 += 3;
          }
          while ( v10 != v65 );
          v10 = (_QWORD *)v48;
        }
        v19 = 1;
      }
      if ( v61 )
      {
        v62 = v61 - 1;
        v63 = (v61 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
        v13 = &v10[3 * v63];
        v11 = *v13;
        v21 = *v13;
        if ( *a3 != *v13 )
        {
          if ( v11 == -4096 )
          {
            v11 = *a3;
            goto LABEL_28;
          }
          v66 = &v10[3 * (v62 & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4)))];
          v67 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v11 == -8192 && !v13 )
              v13 = v66;
            v63 = v62 & (v67 + v63);
            v66 = &v10[3 * v63];
            v11 = *v66;
            if ( *a3 == *v66 )
            {
              v21 = *v66;
              v13 = &v10[3 * v63];
              goto LABEL_9;
            }
            if ( v11 == -4096 )
              break;
            ++v67;
          }
          if ( !v13 )
          {
            v11 = *a3;
            v13 = &v10[3 * v63];
            goto LABEL_28;
          }
          v21 = *v13;
          v11 = *a3;
        }
        goto LABEL_9;
      }
      goto LABEL_112;
    }
LABEL_12:
    v70 = a4;
    v24 = (((((((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v9 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v9 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v9 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v9 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1);
    v25 = ((v24 >> 16) | v24) + 1;
    if ( (unsigned int)v25 < 0x40 )
      LODWORD(v25) = 64;
    *(_DWORD *)(a2 + 16) = v25;
    v26 = sub_22300B0(24LL * (unsigned int)v25, 8, 64, a4, a5, a6);
    a4 = v70;
    *(_QWORD *)a2 = v26;
    if ( v10 )
    {
      v27 = *(unsigned int *)(a2 + 16);
      *(_QWORD *)(a2 + 8) = 0;
      v28 = 24 * v9;
      v29 = v27;
      v30 = &v10[3 * v9];
      v31 = (_QWORD *)(v26 + 24 * v27);
      v32 = (_QWORD *)v26;
      if ( (_QWORD *)v26 != v31 )
      {
        do
        {
          *v32 = -4096;
          v32 += 3;
        }
        while ( v31 != v32 );
      }
      v33 = v10;
      for ( i = v29 - 1; v30 != v33; v33 += 3 )
      {
        v35 = *v33;
        if ( *v33 != -8192 && v35 != -4096 )
        {
          if ( !v29 )
          {
LABEL_113:
            *(_QWORD *)&dword_0 = v35;
            BUG();
          }
          v36 = i & (((unsigned int)v35 >> 9) ^ ((unsigned int)v35 >> 4));
          v37 = v26 + 24LL * v36;
          v38 = *(_QWORD *)v37;
          if ( v35 != *(_QWORD *)v37 && v38 != -4096 )
          {
            v76 = 1;
            v74 = 0;
            while ( 1 )
            {
              if ( !v74 )
              {
                if ( v38 != -8192 )
                  v37 = 0;
                v74 = v37;
              }
              v36 = i & (v76 + v36);
              v37 = v26 + 24LL * v36;
              v38 = *(_QWORD *)v37;
              if ( v35 == *(_QWORD *)v37 )
                break;
              if ( v38 == -4096 )
              {
                if ( v74 )
                  v37 = v74;
                break;
              }
              ++v76;
            }
          }
          v39 = _mm_loadu_si128((const __m128i *)(v33 + 1));
          ++*(_DWORD *)(a2 + 8);
          *(_QWORD *)v37 = v35;
          *(__m128i *)(v37 + 8) = v39;
        }
      }
      v71 = a4;
      operator delete(v10, v28, 8);
      v10 = *(_QWORD **)a2;
      v40 = *(_DWORD *)(a2 + 16);
      a4 = v71;
      v19 = *(_DWORD *)(a2 + 8) + 1;
    }
    else
    {
      v43 = *(unsigned int *)(a2 + 16);
      *(_QWORD *)(a2 + 8) = 0;
      v40 = v43;
      v10 = (_QWORD *)(v26 + 24 * v43);
      if ( (_QWORD *)v26 != v10 )
      {
        v44 = (_QWORD *)v26;
        do
        {
          *v44 = -4096;
          v44 += 3;
        }
        while ( v10 != v44 );
        v10 = (_QWORD *)v26;
      }
      v19 = 1;
    }
    if ( v40 )
    {
      v11 = *a3;
      v41 = v40 - 1;
      v42 = (v40 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
      v13 = &v10[3 * v42];
      v21 = *v13;
      if ( *v13 != *a3 )
      {
        if ( v21 != -4096 )
        {
          v68 = &v10[3 * (v41 & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4)))];
          v69 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v21 == -8192 && !v13 )
              v13 = v68;
            v42 = v41 & (v69 + v42);
            v68 = &v10[3 * v42];
            v21 = *v68;
            if ( v11 == *v68 )
            {
              v13 = &v10[3 * v42];
              goto LABEL_9;
            }
            if ( v21 == -4096 )
              break;
            ++v69;
          }
          if ( v13 )
            goto LABEL_8;
          v13 = &v10[3 * v42];
        }
LABEL_28:
        *(_DWORD *)(a2 + 8) = v19;
LABEL_11:
        v22 = _mm_loadu_si128(a4);
        *v13 = v11;
        *(__m128i *)(v13 + 1) = v22;
        sub_CBBC50(v78, v13, &v10[3 * *(unsigned int *)(a2 + 16)], a2, 1);
        si128 = _mm_load_si128((const __m128i *)v78);
        a1[1].m128i_i8[0] = 1;
        *a1 = si128;
        return a1;
      }
LABEL_9:
      *(_DWORD *)(a2 + 8) = v19;
      if ( v21 != -4096 )
        --*(_DWORD *)(a2 + 12);
      goto LABEL_11;
    }
LABEL_112:
    ++*(_DWORD *)(a2 + 8);
    BUG();
  }
LABEL_3:
  sub_CBBC50(v78, v13, &v10[3 * v9], a2, 1);
  v15 = _mm_load_si128((const __m128i *)v78);
  a1[1].m128i_i8[0] = 0;
  *a1 = v15;
  return a1;
}
