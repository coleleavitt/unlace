__m128i *__fastcall sub_988660(__m128i *a1, __int64 a2, __int64 *a3, const __m128i *a4, __int64 a5, __int64 a6)
{
  unsigned int v9; // r14d
  _QWORD *v10; // r12
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // r8
  __m128i v16; // xmm0
  int v18; // r9d
  _QWORD *v19; // r10
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  __m128i v24; // xmm1
  __m128i si128; // xmm4
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rdx
  _QWORD *v30; // r9
  __int64 v31; // r10
  _QWORD *v32; // rsi
  _QWORD *v33; // rdx
  int i; // r14d
  __int64 v35; // rsi
  unsigned int v36; // r8d
  unsigned __int64 v37; // rdi
  __int64 v38; // r11
  __m128i v39; // xmm5
  __int64 v40; // rsi
  unsigned int v41; // r9d
  unsigned int v42; // r8d
  __int64 v43; // r12
  _QWORD *v44; // rdx
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rdx
  _QWORD *v49; // r9
  __int64 v50; // r10
  _QWORD *v51; // rsi
  _QWORD *v52; // rdx
  int v53; // r14d
  unsigned int v54; // r8d
  unsigned __int64 v55; // rdi
  __int64 v56; // r11
  __m128i v57; // xmm5
  __int64 v58; // rsi
  __int64 v59; // r9
  unsigned int v60; // r10d
  unsigned int v61; // r8d
  __int64 v62; // r12
  _QWORD *v63; // rdx
  _QWORD *v64; // r11
  int v65; // r13d
  int v66; // edi
  unsigned int v67; // r13d
  _QWORD *v68; // r10
  int v69; // r13d
  int v70; // r11d
  unsigned int v71; // r13d
  const __m128i *v72; // [rsp+8h] [rbp-60h]
  const __m128i *v73; // [rsp+8h] [rbp-60h]
  const __m128i *v74; // [rsp+8h] [rbp-60h]
  const __m128i *v75; // [rsp+8h] [rbp-60h]
  unsigned __int64 v76; // [rsp+8h] [rbp-60h]
  unsigned __int64 v77; // [rsp+8h] [rbp-60h]
  int v78; // [rsp+14h] [rbp-54h]
  int v79; // [rsp+14h] [rbp-54h]
  __m128 v80[4]; // [rsp+20h] [rbp-48h] BYREF

  v9 = *(_DWORD *)(a2 + 16);
  v10 = *(_QWORD **)a2;
  if ( !v9 )
    goto LABEL_12;
  v11 = *a3;
  v12 = v9 - 1;
  LODWORD(v13) = v12 & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
  v14 = &v10[8 * (unsigned __int64)(unsigned int)v13];
  v15 = *v14;
  if ( v11 != *v14 )
  {
    v18 = 1;
    v19 = nullptr;
    if ( v15 != -4096 )
    {
      while ( 1 )
      {
        if ( v15 == -8192 && !v19 )
          v19 = v14;
        v13 = (unsigned int)v12 & ((_DWORD)v13 + v18);
        v14 = &v10[8 * v13];
        v15 = *v14;
        if ( v11 == *v14 )
          goto LABEL_3;
        if ( v15 == -4096 )
          break;
        ++v18;
      }
      if ( v19 )
        v14 = v19;
    }
    a5 = 3 * v9;
    v20 = *(_DWORD *)(a2 + 8) + 1;
    a6 = (unsigned int)(4 * v20);
    if ( (unsigned int)a6 < (unsigned int)a5 )
    {
      v21 = v9 - *(_DWORD *)(a2 + 12) - v20;
      v22 = v9 >> 3;
      if ( (unsigned int)v21 > (unsigned int)v22 )
      {
LABEL_8:
        v23 = *v14;
        goto LABEL_9;
      }
      v74 = a4;
      v45 = (((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4) | (v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2);
      v46 = ((((v45 >> 8) | v45) >> 16) | (v45 >> 8) | v45) + 1;
      if ( (unsigned int)v46 < 0x40 )
        LODWORD(v46) = 64;
      *(_DWORD *)(a2 + 16) = v46;
      v47 = sub_220C370((unsigned __int64)(unsigned int)v46 << 6, 8, 64, a4, v21, v22);
      a4 = v74;
      *(_QWORD *)a2 = v47;
      if ( v10 )
      {
        *(_QWORD *)(a2 + 8) = 0;
        v48 = (_QWORD *)v47;
        v49 = &v10[8 * (unsigned __int64)v9];
        v50 = *(unsigned int *)(a2 + 16);
        v51 = (_QWORD *)(v47 + (v50 << 6));
        if ( (_QWORD *)v47 != v51 )
        {
          do
          {
            *v48 = -4096;
            v48 += 8;
          }
          while ( v51 != v48 );
        }
        v52 = v10;
        v53 = v50 - 1;
        do
        {
          v35 = *v52;
          if ( *v52 != -4096 && v35 != -8192 )
          {
            if ( !(_DWORD)v50 )
              goto LABEL_113;
            v54 = v53 & (((unsigned int)v35 >> 9) ^ ((unsigned int)v35 >> 4));
            v55 = v47 + ((unsigned __int64)v54 << 6);
            v56 = *(_QWORD *)v55;
            if ( v35 != *(_QWORD *)v55 && v56 != -4096 )
            {
              v79 = 1;
              v77 = 0;
              while ( 1 )
              {
                if ( v56 == -8192 )
                {
                  if ( v77 )
                    v55 = v77;
                  v77 = v55;
                }
                v54 = v53 & (v79 + v54);
                v55 = v47 + ((unsigned __int64)v54 << 6);
                v56 = *(_QWORD *)v55;
                if ( v35 == *(_QWORD *)v55 )
                  break;
                if ( v56 == -4096 )
                {
                  if ( v77 )
                    v55 = v77;
                  break;
                }
                ++v79;
              }
            }
            v57 = _mm_loadu_si128((const __m128i *)(v52 + 1));
            *(_QWORD *)v55 = v35;
            *(__m128i *)(v55 + 8) = v57;
            *(__m128i *)(v55 + 24) = _mm_loadu_si128((const __m128i *)(v52 + 3));
            *(__m128i *)(v55 + 40) = _mm_loadu_si128((const __m128i *)(v52 + 5));
            v58 = v52[7];
            ++*(_DWORD *)(a2 + 8);
            *(_QWORD *)(v55 + 56) = v58;
          }
          v52 += 8;
        }
        while ( v49 != v52 );
        v75 = a4;
        operator delete();
        v10 = *(_QWORD **)a2;
        v9 = *(_DWORD *)(a2 + 16);
        a4 = v75;
        v20 = *(_DWORD *)(a2 + 8) + 1;
      }
      else
      {
        v62 = *(unsigned int *)(a2 + 16);
        *(_QWORD *)(a2 + 8) = 0;
        v9 = v62;
        v10 = (_QWORD *)(v47 + (v62 << 6));
        if ( (_QWORD *)v47 != v10 )
        {
          v63 = (_QWORD *)v47;
          do
          {
            *v63 = -4096;
            v63 += 8;
          }
          while ( v10 != v63 );
          v10 = (_QWORD *)v47;
        }
        v20 = 1;
      }
      if ( v9 )
      {
        v59 = *a3;
        v60 = v9 - 1;
        v61 = (v9 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
        v14 = &v10[8 * (unsigned __int64)v61];
        v11 = *v14;
        v23 = *v14;
        if ( *a3 != *v14 )
        {
          if ( v11 == -4096 )
          {
            v11 = *a3;
            goto LABEL_28;
          }
          v64 = &v10[8 * (unsigned __int64)(v60 & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4)))];
          v65 = 1;
          v14 = nullptr;
          while ( 1 )
          {
            if ( v11 == -8192 && !v14 )
              v14 = v64;
            v66 = v65 + 1;
            v67 = v61 + v65;
            v61 = v60 & v67;
            v64 = &v10[8 * (unsigned __int64)(v60 & v67)];
            v11 = *v64;
            if ( v59 == *v64 )
            {
              v23 = *v64;
              v14 = &v10[8 * (unsigned __int64)(v60 & v67)];
              goto LABEL_9;
            }
            if ( v11 == -4096 )
              break;
            v65 = v66;
          }
          if ( !v14 )
          {
            v11 = v59;
            v14 = &v10[8 * (unsigned __int64)(v60 & v67)];
            goto LABEL_28;
          }
          v23 = *v14;
          v11 = v59;
        }
        goto LABEL_9;
      }
      goto LABEL_112;
    }
LABEL_12:
    v72 = a4;
    v26 = (((((((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
            | (2 * v9 - 1)
            | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 4)
          | (((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
          | (2 * v9 - 1)
          | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 8)
        | (((((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
          | (2 * v9 - 1)
          | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 4)
        | (((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
        | (2 * v9 - 1)
        | ((unsigned __int64)(2 * v9 - 1) >> 1);
    v27 = ((v26 >> 16) | v26) + 1;
    if ( (unsigned int)v27 < 0x40 )
      LODWORD(v27) = 64;
    *(_DWORD *)(a2 + 16) = v27;
    v28 = sub_220C370((unsigned __int64)(unsigned int)v27 << 6, 8, 64, a4, a5, a6);
    a4 = v72;
    *(_QWORD *)a2 = v28;
    if ( v10 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      v29 = (_QWORD *)v28;
      v30 = &v10[8 * (unsigned __int64)v9];
      v31 = *(unsigned int *)(a2 + 16);
      v32 = (_QWORD *)(v28 + (v31 << 6));
      if ( (_QWORD *)v28 != v32 )
      {
        do
        {
          *v29 = -4096;
          v29 += 8;
        }
        while ( v32 != v29 );
      }
      v33 = v10;
      for ( i = v31 - 1; v30 != v33; v33 += 8 )
      {
        v35 = *v33;
        if ( *v33 != -8192 && v35 != -4096 )
        {
          if ( !(_DWORD)v31 )
          {
LABEL_113:
            *(_QWORD *)&dword_0 = v35;
            BUG();
          }
          v36 = i & (((unsigned int)v35 >> 9) ^ ((unsigned int)v35 >> 4));
          v37 = v28 + ((unsigned __int64)v36 << 6);
          v38 = *(_QWORD *)v37;
          if ( v35 != *(_QWORD *)v37 && v38 != -4096 )
          {
            v78 = 1;
            v76 = 0;
            while ( 1 )
            {
              if ( v38 == -8192 )
              {
                if ( v76 )
                  v37 = v76;
                v76 = v37;
              }
              v36 = i & (v78 + v36);
              v37 = v28 + ((unsigned __int64)v36 << 6);
              v38 = *(_QWORD *)v37;
              if ( v35 == *(_QWORD *)v37 )
                break;
              if ( v38 == -4096 )
              {
                if ( v76 )
                  v37 = v76;
                break;
              }
              ++v78;
            }
          }
          v39 = _mm_loadu_si128((const __m128i *)(v33 + 1));
          *(_QWORD *)v37 = v35;
          *(__m128i *)(v37 + 8) = v39;
          *(__m128i *)(v37 + 24) = _mm_loadu_si128((const __m128i *)(v33 + 3));
          *(__m128i *)(v37 + 40) = _mm_loadu_si128((const __m128i *)(v33 + 5));
          v40 = v33[7];
          ++*(_DWORD *)(a2 + 8);
          *(_QWORD *)(v37 + 56) = v40;
        }
      }
      v73 = a4;
      operator delete();
      v10 = *(_QWORD **)a2;
      v9 = *(_DWORD *)(a2 + 16);
      a4 = v73;
      v20 = *(_DWORD *)(a2 + 8) + 1;
    }
    else
    {
      v43 = *(unsigned int *)(a2 + 16);
      *(_QWORD *)(a2 + 8) = 0;
      v9 = v43;
      v10 = (_QWORD *)(v28 + (v43 << 6));
      if ( (_QWORD *)v28 != v10 )
      {
        v44 = (_QWORD *)v28;
        do
        {
          *v44 = -4096;
          v44 += 8;
        }
        while ( v10 != v44 );
        v10 = (_QWORD *)v28;
      }
      v20 = 1;
    }
    if ( v9 )
    {
      v11 = *a3;
      v41 = v9 - 1;
      v42 = (v9 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
      v14 = &v10[8 * (unsigned __int64)v42];
      v23 = *v14;
      if ( *v14 != *a3 )
      {
        if ( v23 != -4096 )
        {
          v68 = &v10[8 * (unsigned __int64)(v41 & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4)))];
          v69 = 1;
          v14 = nullptr;
          while ( 1 )
          {
            if ( v23 == -8192 && !v14 )
              v14 = v68;
            v70 = v69 + 1;
            v71 = v42 + v69;
            v42 = v41 & v71;
            v68 = &v10[8 * (unsigned __int64)(v41 & v71)];
            v23 = *v68;
            if ( v11 == *v68 )
            {
              v14 = &v10[8 * (unsigned __int64)(v41 & v71)];
              goto LABEL_9;
            }
            if ( v23 == -4096 )
              break;
            v69 = v70;
          }
          if ( v14 )
            goto LABEL_8;
          v14 = &v10[8 * (unsigned __int64)(v41 & v71)];
        }
LABEL_28:
        *(_DWORD *)(a2 + 8) = v20;
LABEL_11:
        v24 = _mm_loadu_si128(a4);
        *v14 = v11;
        *(__m128i *)(v14 + 1) = v24;
        *(__m128i *)(v14 + 3) = _mm_loadu_si128(a4 + 1);
        *(__m128i *)(v14 + 5) = _mm_loadu_si128(a4 + 2);
        v14[7] = a4[3].m128i_i64[0];
        sub_9885F0(v80, v14, &v10[8 * (unsigned __int64)v9], a2, 1);
        si128 = _mm_load_si128((const __m128i *)v80);
        a1[1].m128i_i8[0] = 1;
        *a1 = si128;
        return a1;
      }
LABEL_9:
      *(_DWORD *)(a2 + 8) = v20;
      if ( v23 != -4096 )
        --*(_DWORD *)(a2 + 12);
      goto LABEL_11;
    }
LABEL_112:
    ++*(_DWORD *)(a2 + 8);
    BUG();
  }
LABEL_3:
  sub_9885F0(v80, v14, &v10[8 * (unsigned __int64)v9], a2, 1);
  v16 = _mm_load_si128((const __m128i *)v80);
  a1[1].m128i_i8[0] = 0;
  *a1 = v16;
  return a1;
}

