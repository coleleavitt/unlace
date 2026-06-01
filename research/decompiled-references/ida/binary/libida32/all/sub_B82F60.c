__int64 __fastcall sub_B82F60(
        __int64 a1,
        const __m128i *a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6,
        __int64 a7)
{
  __int64 v7; // rax
  __m128i *v8; // r11
  const __m128i *v9; // r13
  __int64 v10; // r15
  const __m128i *v11; // r8
  __int64 v12; // r12
  __m128i *v13; // r10
  const __m128i *v14; // r11
  __int64 v15; // rcx
  __int64 v16; // rax
  __m128i *v17; // rbp
  const __m128i *v18; // rbx
  __int64 v19; // rsi
  const __m128i *v20; // rdx
  __int64 v21; // r14
  __m128i *v22; // rax
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rsi
  const __m128i *v26; // rax
  const __m128i *v27; // rdi
  __m128i v28; // xmm0
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rax
  const __m128i *v32; // rdx
  __m128i v33; // xmm2
  __int64 v34; // rdx
  __int64 result; // rax
  __int64 v36; // rcx
  __m128i *v37; // rdx
  const __m128i *v38; // rsi
  __m128i v39; // xmm7
  const __m128i *v40; // rdi
  const __m128i *v41; // rdx
  const __m128i *v42; // rax
  __int64 v43; // rsi
  __m128i v44; // xmm3
  __int64 v45; // r9
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __m128i *v51; // rdx
  __m128i v52; // xmm6
  __m128i v53; // xmm3
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  const __m128i *v58; // rdx
  const __m128i *v59; // rsi
  __m128i v60; // xmm6
  __int64 v61; // rcx
  __int64 v62; // rdx
  __m128i *v63; // [rsp+8h] [rbp-60h]
  const __m128i *v64; // [rsp+8h] [rbp-60h]
  const __m128i *v65; // [rsp+10h] [rbp-58h]
  int v66; // [rsp+10h] [rbp-58h]
  int v68; // [rsp+20h] [rbp-48h]
  const __m128i *v69; // [rsp+28h] [rbp-40h]

  v7 = a5;
  v8 = a3;
  v9 = a6;
  if ( a5 > a7 )
    v7 = a7;
  if ( a4 <= v7 )
  {
    result = a1;
    v18 = a2;
    goto LABEL_72;
  }
  v10 = a5;
  if ( a5 <= a7 )
  {
    result = a1;
    v18 = a2;
LABEL_29:
    v36 = v8 - v18;
    if ( (char *)v8 - (char *)v18 > 0 )
    {
      v37 = (__m128i *)v9;
      v38 = v18;
      while ( 1 )
      {
        v39 = _mm_loadu_si128(v38);
        v40 = v37 + 1;
        ++v38;
        *v37 = v39;
        if ( !--v36 )
          break;
        ++v37;
      }
      if ( (const __m128i *)result == v18 )
      {
        result = (char *)v40 - (char *)v9;
        v62 = v40 - v9;
        if ( (char *)v40 - (char *)v9 > 0 )
        {
          result = -16;
          do
          {
            *(__m128i *)((char *)v8 + result) = _mm_loadu_si128((const __m128i *)((char *)v40 + result));
            result -= 16;
            --v62;
          }
          while ( v62 );
        }
      }
      else if ( v40 != v9 )
      {
        do
        {
          --v18;
          while ( 1 )
          {
            --v8;
            if ( v37->m128i_i64[0] < (unsigned __int64)v18->m128i_i64[0] )
              break;
            *v8 = _mm_loadu_si128(v37);
            if ( v9 == v37 )
              return result;
            --v37;
          }
          *v8 = _mm_loadu_si128(v18);
        }
        while ( v18 != (const __m128i *)result );
        result = (char *)&v37[1] - (char *)v9;
        v61 = result >> 4;
        if ( result > 0 )
        {
          result = 0;
          do
          {
            *(__m128i *)((char *)v8 + result - 16) = _mm_loadu_si128((__m128i *)((char *)v37 + result));
            result -= 16;
            --v61;
          }
          while ( v61 );
        }
      }
    }
    return result;
  }
  v11 = a2;
  v12 = a4;
  v13 = (__m128i *)a1;
  v14 = a6;
  while ( 1 )
  {
    if ( v12 <= v10 )
    {
      v21 = v10 / 2;
      v49 = v11 - v13;
      v18 = &v11[v10 / 2];
      if ( (char *)v11 - (char *)v13 <= 0 )
      {
        v17 = v13;
        v15 = 0;
      }
      else
      {
        v17 = v13;
        do
        {
          while ( 1 )
          {
            v50 = v49 >> 1;
            v51 = &v17[v49 >> 1];
            if ( v18->m128i_i64[0] < (unsigned __int64)v51->m128i_i64[0] )
              break;
            v17 = v51 + 1;
            v49 = v49 - v50 - 1;
            if ( v49 <= 0 )
            {
              v15 = v17 - v13;
              goto LABEL_12;
            }
          }
          v49 >>= 1;
        }
        while ( v50 );
        v15 = v17 - v13;
      }
    }
    else
    {
      v15 = v12 / 2;
      v16 = a3 - v11;
      v17 = &v13[v12 / 2];
      if ( (char *)a3 - (char *)v11 <= 0 )
      {
        v18 = v11;
      }
      else
      {
        v18 = v11;
        do
        {
          while ( 1 )
          {
            v19 = v16 >> 1;
            v20 = &v18[v16 >> 1];
            if ( v20->m128i_i64[0] >= (unsigned __int64)v17->m128i_i64[0] )
              break;
            v18 = v20 + 1;
            v16 = v16 - v19 - 1;
            if ( v16 <= 0 )
              goto LABEL_11;
          }
          v16 >>= 1;
        }
        while ( v19 );
      }
LABEL_11:
      v21 = v18 - v11;
    }
LABEL_12:
    v12 -= v15;
    if ( v12 > v21 && v21 <= a7 )
    {
      v22 = v17;
      if ( !v21 )
        goto LABEL_24;
      v23 = (char *)v11 - (char *)v17;
      v24 = v18 - v11;
      v25 = v11 - v17;
      if ( (char *)v18 - (char *)v11 <= 0 )
      {
        if ( v23 <= 0 )
        {
          v22 = v17;
          goto LABEL_24;
        }
        v30 = 0;
        v29 = 0;
      }
      else
      {
        v26 = v14;
        v27 = v11;
        do
        {
          v28 = _mm_loadu_si128(v27);
          ++v26;
          ++v27;
          v26[-1] = v28;
          --v24;
        }
        while ( v24 );
        v29 = (char *)v26 - (char *)v14;
        v30 = v26 - v14;
        if ( v23 <= 0 )
        {
LABEL_21:
          v22 = v17;
          if ( v29 > 0 )
          {
            v32 = v14;
            do
            {
              v33 = _mm_loadu_si128(v32);
              ++v22;
              ++v32;
              v22[-1] = v33;
              --v30;
            }
            while ( v30 );
          }
          goto LABEL_24;
        }
      }
      v31 = 0xFFFFFFFFFFFFFFFLL;
      do
      {
        v18[v31] = _mm_loadu_si128(&v11[v31]);
        --v31;
        --v25;
      }
      while ( v25 );
      goto LABEL_21;
    }
    if ( v12 > a7 )
    {
      v69 = v14;
      v68 = (int)v13;
      v66 = v15;
      v64 = v11;
      sub_B82B40(v17, v11, v18);
      LODWORD(v15) = v66;
      LODWORD(v13) = v68;
      v14 = v69;
      v22 = (__m128i *)((char *)v17 + (char *)v18 - (char *)v64);
      goto LABEL_24;
    }
    v22 = (__m128i *)v18;
    if ( !v12 )
      goto LABEL_24;
    v41 = v14;
    v42 = v17;
    v43 = v11 - v17;
    if ( (char *)v11 - (char *)v17 <= 0 )
    {
      v47 = v18 - v11;
      if ( (char *)v18 - (char *)v11 <= 0 )
      {
        v22 = (__m128i *)v18;
        goto LABEL_24;
      }
      v45 = 0;
      v46 = 0;
LABEL_48:
      v48 = 0;
      do
      {
        v17[v48] = _mm_loadu_si128(&v11[v48]);
        ++v48;
        --v47;
      }
      while ( v47 );
      goto LABEL_50;
    }
    do
    {
      v44 = _mm_loadu_si128(v42);
      ++v41;
      ++v42;
      v41[-1] = v44;
      --v43;
    }
    while ( v43 );
    v45 = (char *)v41 - (char *)v14;
    v46 = v41 - v14;
    v47 = v18 - v11;
    if ( (char *)v18 - (char *)v11 > 0 )
      goto LABEL_48;
LABEL_50:
    v22 = (__m128i *)v18;
    if ( v45 > 0 )
    {
      do
      {
        *--v22 = _mm_loadu_si128(--v41);
        --v46;
      }
      while ( v46 );
    }
LABEL_24:
    v10 -= v21;
    v65 = v14;
    v63 = v22;
    sub_B82F60((_DWORD)v13, (_DWORD)v17, (_DWORD)v22, v15, v21, (_DWORD)v14, a7);
    v34 = a7;
    result = (__int64)v63;
    v14 = v65;
    if ( v10 <= a7 )
      v34 = v10;
    if ( v34 >= v12 )
      break;
    v11 = v18;
    v13 = v63;
    if ( v10 <= a7 )
    {
      v9 = v65;
      v8 = a3;
      goto LABEL_29;
    }
  }
  v9 = v65;
  v8 = a3;
LABEL_72:
  v57 = ((__int64)v18->m128i_i64 - result) >> 4;
  if ( (__int64)v18->m128i_i64 - result > 0 )
  {
    v58 = v9;
    v59 = (const __m128i *)result;
    do
    {
      v60 = _mm_loadu_si128(v59);
      ++v58;
      ++v59;
      v58[-1] = v60;
      --v57;
    }
    while ( v57 );
    while ( v8 != v18 && v58 != v9 )
    {
      while ( v18->m128i_i64[0] >= (unsigned __int64)v9->m128i_i64[0] )
      {
        v53 = _mm_loadu_si128(v9++);
        result += 16;
        *(__m128i *)(result - 16) = v53;
        if ( v58 == v9 || v8 == v18 )
          goto LABEL_66;
      }
      v52 = _mm_loadu_si128(v18);
      result += 16;
      ++v18;
      *(__m128i *)(result - 16) = v52;
    }
LABEL_66:
    if ( v58 != v9 )
    {
      v54 = (char *)v58 - (char *)v9;
      v55 = v54 >> 4;
      if ( v54 > 0 )
      {
        v56 = 0;
        do
        {
          *(__m128i *)(result + v56 * 16) = _mm_loadu_si128(&v9[v56]);
          ++v56;
          --v55;
        }
        while ( v55 );
      }
    }
  }
  return result;
}

