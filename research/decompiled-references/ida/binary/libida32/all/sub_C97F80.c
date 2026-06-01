__m128i *__fastcall sub_C97F80(
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
  int v28; // r10d
  _QWORD *v29; // r8
  _QWORD *v30; // rsi
  _QWORD *v31; // rdx
  _QWORD *v32; // rdx
  int i; // r14d
  __int64 v34; // rsi
  unsigned int v35; // edi
  __int64 v36; // r9
  __int64 v37; // r11
  __m128i v38; // xmm3
  int v39; // esi
  int v40; // r9d
  unsigned int v41; // r8d
  __int64 v42; // rdx
  _QWORD *v43; // rdx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  int v49; // r10d
  _QWORD *v50; // r8
  _QWORD *v51; // rsi
  _QWORD *v52; // rdx
  _QWORD *v53; // rdx
  int v54; // r14d
  unsigned int v55; // edi
  __int64 v56; // r9
  __int64 v57; // r11
  __m128i v58; // xmm4
  int v59; // esi
  int v60; // r9d
  unsigned int v61; // r8d
  __int64 v62; // rdx
  _QWORD *v63; // rdx
  _QWORD *v64; // r11
  int v65; // edi
  _QWORD *v66; // r10
  int v67; // r11d
  const __m128i *v68; // [rsp+8h] [rbp-60h]
  const __m128i *v69; // [rsp+8h] [rbp-60h]
  const __m128i *v70; // [rsp+8h] [rbp-60h]
  const __m128i *v71; // [rsp+8h] [rbp-60h]
  __int64 v72; // [rsp+8h] [rbp-60h]
  __int64 v73; // [rsp+8h] [rbp-60h]
  int v74; // [rsp+14h] [rbp-54h]
  int v75; // [rsp+14h] [rbp-54h]
  __m128 v76[4]; // [rsp+20h] [rbp-48h] BYREF

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
      v70 = a4;
      v44 = (((a5 >> 1) | a5 | (((a5 >> 1) | a5) >> 2)) >> 4) | (a5 >> 1) | a5 | (((a5 >> 1) | a5) >> 2);
      v45 = v44 >> 8;
      v46 = (((v45 | v44) >> 16) | v45 | v44) + 1;
      if ( (unsigned int)v46 < 0x40 )
        LODWORD(v46) = 64;
      *(_DWORD *)(a2 + 16) = v46;
      v47 = sub_220C370(24LL * (unsigned int)v46, 8, 64, a4, v45, v20);
      a4 = v70;
      *(_QWORD *)a2 = v47;
      if ( v10 )
      {
        v48 = *(unsigned int *)(a2 + 16);
        *(_QWORD *)(a2 + 8) = 0;
        v49 = v48;
        v50 = &v10[3 * v9];
        v51 = (_QWORD *)(v47 + 24 * v48);
        v52 = (_QWORD *)v47;
        if ( (_QWORD *)v47 != v51 )
        {
          do
          {
            *v52 = -4096;
            v52 += 3;
          }
          while ( v51 != v52 );
        }
        v53 = v10;
        v54 = v49 - 1;
        do
        {
          v34 = *v53;
          if ( *v53 != -4096 && v34 != -8192 )
          {
            if ( !v49 )
              goto LABEL_113;
            v55 = v54 & (((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4));
            v56 = v47 + 24LL * v55;
            v57 = *(_QWORD *)v56;
            if ( v34 != *(_QWORD *)v56 && v57 != -4096 )
            {
              v75 = 1;
              v73 = 0;
              while ( 1 )
              {
                if ( v57 == -8192 )
                {
                  if ( v73 )
                    v56 = v73;
                  v73 = v56;
                }
                v55 = v54 & (v75 + v55);
                v56 = v47 + 24LL * v55;
                v57 = *(_QWORD *)v56;
                if ( v34 == *(_QWORD *)v56 )
                  break;
                if ( v57 == -4096 )
                {
                  if ( v73 )
                    v56 = v73;
                  break;
                }
                ++v75;
              }
            }
            v58 = _mm_loadu_si128((const __m128i *)(v53 + 1));
            ++*(_DWORD *)(a2 + 8);
            *(_QWORD *)v56 = v34;
            *(__m128i *)(v56 + 8) = v58;
          }
          v53 += 3;
        }
        while ( v50 != v53 );
        v71 = a4;
        operator delete();
        v10 = *(_QWORD **)a2;
        v59 = *(_DWORD *)(a2 + 16);
        a4 = v71;
        v19 = *(_DWORD *)(a2 + 8) + 1;
      }
      else
      {
        v62 = *(unsigned int *)(a2 + 16);
        *(_QWORD *)(a2 + 8) = 0;
        v59 = v62;
        v10 = (_QWORD *)(v47 + 24 * v62);
        if ( (_QWORD *)v47 != v10 )
        {
          v63 = (_QWORD *)v47;
          do
          {
            *v63 = -4096;
            v63 += 3;
          }
          while ( v10 != v63 );
          v10 = (_QWORD *)v47;
        }
        v19 = 1;
      }
      if ( v59 )
      {
        v60 = v59 - 1;
        v61 = (v59 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
        v13 = &v10[3 * v61];
        v11 = *v13;
        v21 = *v13;
        if ( *a3 != *v13 )
        {
          if ( v11 == -4096 )
          {
            v11 = *a3;
            goto LABEL_28;
          }
          v64 = &v10[3 * (v60 & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4)))];
          v65 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v11 == -8192 && !v13 )
              v13 = v64;
            v61 = v60 & (v65 + v61);
            v64 = &v10[3 * v61];
            v11 = *v64;
            if ( *a3 == *v64 )
            {
              v21 = *v64;
              v13 = &v10[3 * v61];
              goto LABEL_9;
            }
            if ( v11 == -4096 )
              break;
            ++v65;
          }
          if ( !v13 )
          {
            v11 = *a3;
            v13 = &v10[3 * v61];
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
    v68 = a4;
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
    v26 = sub_220C370(24LL * (unsigned int)v25, 8, 64, a4, a5, a6);
    a4 = v68;
    *(_QWORD *)a2 = v26;
    if ( v10 )
    {
      v27 = *(unsigned int *)(a2 + 16);
      *(_QWORD *)(a2 + 8) = 0;
      v28 = v27;
      v29 = &v10[3 * v9];
      v30 = (_QWORD *)(v26 + 24 * v27);
      v31 = (_QWORD *)v26;
      if ( (_QWORD *)v26 != v30 )
      {
        do
        {
          *v31 = -4096;
          v31 += 3;
        }
        while ( v30 != v31 );
      }
      v32 = v10;
      for ( i = v28 - 1; v29 != v32; v32 += 3 )
      {
        v34 = *v32;
        if ( *v32 != -8192 && v34 != -4096 )
        {
          if ( !v28 )
          {
LABEL_113:
            *(_QWORD *)&dword_0 = v34;
            BUG();
          }
          v35 = i & (((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4));
          v36 = v26 + 24LL * v35;
          v37 = *(_QWORD *)v36;
          if ( v34 != *(_QWORD *)v36 && v37 != -4096 )
          {
            v74 = 1;
            v72 = 0;
            while ( 1 )
            {
              if ( !v72 )
              {
                if ( v37 != -8192 )
                  v36 = 0;
                v72 = v36;
              }
              v35 = i & (v74 + v35);
              v36 = v26 + 24LL * v35;
              v37 = *(_QWORD *)v36;
              if ( v34 == *(_QWORD *)v36 )
                break;
              if ( v37 == -4096 )
              {
                if ( v72 )
                  v36 = v72;
                break;
              }
              ++v74;
            }
          }
          v38 = _mm_loadu_si128((const __m128i *)(v32 + 1));
          ++*(_DWORD *)(a2 + 8);
          *(_QWORD *)v36 = v34;
          *(__m128i *)(v36 + 8) = v38;
        }
      }
      v69 = a4;
      operator delete();
      v10 = *(_QWORD **)a2;
      v39 = *(_DWORD *)(a2 + 16);
      a4 = v69;
      v19 = *(_DWORD *)(a2 + 8) + 1;
    }
    else
    {
      v42 = *(unsigned int *)(a2 + 16);
      *(_QWORD *)(a2 + 8) = 0;
      v39 = v42;
      v10 = (_QWORD *)(v26 + 24 * v42);
      if ( (_QWORD *)v26 != v10 )
      {
        v43 = (_QWORD *)v26;
        do
        {
          *v43 = -4096;
          v43 += 3;
        }
        while ( v10 != v43 );
        v10 = (_QWORD *)v26;
      }
      v19 = 1;
    }
    if ( v39 )
    {
      v11 = *a3;
      v40 = v39 - 1;
      v41 = (v39 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
      v13 = &v10[3 * v41];
      v21 = *v13;
      if ( *v13 != *a3 )
      {
        if ( v21 != -4096 )
        {
          v66 = &v10[3 * (v40 & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4)))];
          v67 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v21 == -8192 && !v13 )
              v13 = v66;
            v41 = v40 & (v67 + v41);
            v66 = &v10[3 * v41];
            v21 = *v66;
            if ( v11 == *v66 )
            {
              v13 = &v10[3 * v41];
              goto LABEL_9;
            }
            if ( v21 == -4096 )
              break;
            ++v67;
          }
          if ( v13 )
            goto LABEL_8;
          v13 = &v10[3 * v41];
        }
LABEL_28:
        *(_DWORD *)(a2 + 8) = v19;
LABEL_11:
        v22 = _mm_loadu_si128(a4);
        *v13 = v11;
        *(__m128i *)(v13 + 1) = v22;
        sub_C97F10(v76, v13, &v10[3 * *(unsigned int *)(a2 + 16)], a2, 1);
        si128 = _mm_load_si128((const __m128i *)v76);
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
  sub_C97F10(v76, v13, &v10[3 * v9], a2, 1);
  v15 = _mm_load_si128((const __m128i *)v76);
  a1[1].m128i_i8[0] = 0;
  *a1 = v15;
  return a1;
}

