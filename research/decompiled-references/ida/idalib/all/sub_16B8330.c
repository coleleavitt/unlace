__int64 __fastcall sub_16B8330(
        __int64 a1,
        const __m128i *a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6,
        __int64 a7)
{
  __int64 v7; // rax
  const __m128i *v8; // r14
  __m128i *v9; // r13
  __int64 v10; // rbp
  const __m128i *v11; // r8
  __int64 v12; // r15
  const __m128i *v13; // r10
  const __m128i *v14; // r11
  __int64 v15; // rcx
  __int64 v16; // rsi
  const __m128i *v17; // r12
  const __m128i *v18; // rbx
  __int64 v19; // rdx
  const __m128i *v20; // rax
  __int64 v21; // r13
  __m128i *v22; // rax
  __int64 v23; // r9
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rsi
  const __m128i *v26; // rax
  const __m128i *v27; // rdx
  __m128i v28; // xmm0
  __int64 v29; // rax
  unsigned __int64 v30; // rdi
  __int64 v31; // rdx
  bool v32; // cc
  const __m128i *v33; // rdx
  __m128i v34; // xmm0
  __int64 v35; // rdx
  __int64 result; // rax
  unsigned __int64 v37; // rsi
  __m128i *v38; // rdx
  const __m128i *v39; // rcx
  __m128i v40; // xmm0
  const __m128i *v41; // rdi
  const __m128i *v42; // rdx
  unsigned __int64 v43; // rsi
  const __m128i *v44; // rax
  __m128i v45; // xmm4
  __int64 v46; // r9
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  const __m128i *v52; // rax
  unsigned __int64 v53; // rsi
  const __m128i *v54; // rcx
  const __m128i *v55; // rdx
  __m128i v56; // xmm4
  __m128i v57; // xmm0
  __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  __int64 v60; // rdx
  __m128i v61; // xmm4
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  __m128i *v64; // [rsp+8h] [rbp-60h]
  const __m128i *v65; // [rsp+8h] [rbp-60h]
  const __m128i *v66; // [rsp+10h] [rbp-58h]
  int v67; // [rsp+10h] [rbp-58h]
  int v69; // [rsp+20h] [rbp-48h]
  const __m128i *v70; // [rsp+28h] [rbp-40h]

  v7 = a5;
  v8 = a6;
  v9 = a3;
  if ( a5 > a7 )
    v7 = a7;
  if ( a4 <= v7 )
  {
    v18 = a2;
    result = a1;
    goto LABEL_61;
  }
  if ( a5 <= a7 )
  {
    v18 = a2;
    result = a1;
LABEL_29:
    v37 = 0xCCCCCCCCCCCCCCCDLL * (v9 - v18);
    if ( (char *)v9 - (char *)v18 > 0 )
    {
      v38 = (__m128i *)v8;
      v39 = v18;
      while ( 1 )
      {
        v40 = _mm_loadu_si128(v39);
        v39 += 5;
        *v38 = v40;
        v38[1] = _mm_loadu_si128(v39 - 4);
        v38[2] = _mm_loadu_si128(v39 - 3);
        v38[3] = _mm_loadu_si128(v39 - 2);
        v38[4].m128i_i64[0] = v39[-1].m128i_i64[0];
        v38[4].m128i_i32[2] = v39[-1].m128i_i32[2];
        v41 = v38 + 5;
        if ( !--v37 )
          break;
        v38 += 5;
      }
      if ( v18 == (const __m128i *)result )
      {
        result = (char *)v41 - (char *)v8;
        v63 = 0xCCCCCCCCCCCCCCCDLL * (v41 - v8);
        if ( (char *)v41 - (char *)v8 > 0 )
        {
          result = -80;
          do
          {
            *(__m128i *)((char *)v9 + result) = _mm_loadu_si128((const __m128i *)((char *)v41 + result));
            *(__m128i *)((char *)v9 + result + 16) = _mm_loadu_si128((const __m128i *)((char *)v41 + result + 16));
            *(__m128i *)((char *)v9 + result + 32) = _mm_loadu_si128((const __m128i *)((char *)v41 + result + 32));
            *(__m128i *)((char *)v9 + result + 48) = _mm_loadu_si128((const __m128i *)((char *)v41 + result + 48));
            *(__int64 *)((char *)v9[4].m128i_i64 + result) = *(__int64 *)((char *)v41[4].m128i_i64 + result);
            *(__int32 *)((char *)&v9[4].m128i_i32[2] + result) = *(__int32 *)((char *)&v41[4].m128i_i32[2] + result);
            result -= 80;
            --v63;
          }
          while ( v63 );
        }
      }
      else if ( v8 != v41 )
      {
        do
        {
          v18 -= 5;
          while ( 1 )
          {
            v9 -= 5;
            if ( (unsigned __int16)(((unsigned __int32)v38[4].m128i_i32[2] >> 4) & 0x3FFF) < (unsigned __int16)(((unsigned __int32)v18[4].m128i_i32[2] >> 4) & 0x3FFF) )
              break;
            *v9 = _mm_loadu_si128(v38);
            v9[1] = _mm_loadu_si128(v38 + 1);
            v9[2] = _mm_loadu_si128(v38 + 2);
            v9[3] = _mm_loadu_si128(v38 + 3);
            v9[4].m128i_i64[0] = v38[4].m128i_i64[0];
            v9[4].m128i_i32[2] = v38[4].m128i_i32[2];
            if ( v8 == v38 )
              return result;
            v38 -= 5;
          }
          *v9 = _mm_loadu_si128(v18);
          v9[1] = _mm_loadu_si128(v18 + 1);
          v9[2] = _mm_loadu_si128(v18 + 2);
          v9[3] = _mm_loadu_si128(v18 + 3);
          v9[4].m128i_i64[0] = v18[4].m128i_i64[0];
          v9[4].m128i_i32[2] = v18[4].m128i_i32[2];
        }
        while ( v18 != (const __m128i *)result );
        result = (char *)&v38[5] - (char *)v8;
        v62 = 0xCCCCCCCCCCCCCCCDLL * (result >> 4);
        if ( result > 0 )
        {
          result = 0;
          do
          {
            *(__m128i *)((char *)v9 + result - 80) = _mm_loadu_si128((__m128i *)((char *)v38 + result));
            *(__m128i *)((char *)v9 + result - 64) = _mm_loadu_si128((__m128i *)((char *)v38 + result + 16));
            *(__m128i *)((char *)v9 + result - 48) = _mm_loadu_si128((__m128i *)((char *)v38 + result + 32));
            *(__m128i *)((char *)v9 + result - 32) = _mm_loadu_si128((__m128i *)((char *)v38 + result + 48));
            *(__int64 *)((char *)v9[-1].m128i_i64 + result) = *(__int64 *)((char *)v38[4].m128i_i64 + result);
            *(__int32 *)((char *)&v9->m128i_i32[-2] + result) = *(__int32 *)((char *)&v38[4].m128i_i32[2] + result);
            result -= 80;
            --v62;
          }
          while ( v62 );
        }
      }
    }
    return result;
  }
  v10 = a5;
  v11 = a2;
  v12 = a4;
  v13 = (const __m128i *)a1;
  v14 = a6;
  while ( 1 )
  {
    if ( v12 <= v10 )
    {
      v21 = v10 / 2;
      v50 = 0xCCCCCCCCCCCCCCCDLL * (v11 - v13);
      v18 = &v11[5 * (v10 / 2)];
      if ( (char *)v11 - (char *)v13 <= 0 )
      {
        v17 = v13;
      }
      else
      {
        v17 = v13;
        do
        {
          while ( 1 )
          {
            v51 = v50 >> 1;
            v52 = &v17[5 * (v50 >> 1)];
            if ( (unsigned __int16)(((unsigned __int32)v18[4].m128i_i32[2] >> 4) & 0x3FFF) < (unsigned __int16)(((unsigned __int32)v52[4].m128i_i32[2] >> 4) & 0x3FFF) )
              break;
            v17 = v52 + 5;
            v50 = v50 - v51 - 1;
            if ( v50 <= 0 )
              goto LABEL_57;
          }
          v50 >>= 1;
        }
        while ( v51 );
      }
LABEL_57:
      v15 = 0xCCCCCCCCCCCCCCCDLL * (v17 - v13);
    }
    else
    {
      v15 = v12 / 2;
      v16 = 0xCCCCCCCCCCCCCCCDLL * (a3 - v11);
      v17 = &v13[5 * (v12 / 2)];
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
            v20 = &v18[5 * (v16 >> 1)];
            if ( (unsigned __int16)(((unsigned __int32)v20[4].m128i_i32[2] >> 4) & 0x3FFF) >= (unsigned __int16)(((unsigned __int32)v17[4].m128i_i32[2] >> 4) & 0x3FFF) )
              break;
            v18 = v20 + 5;
            v16 = v16 - v19 - 1;
            if ( v16 <= 0 )
              goto LABEL_11;
          }
          v16 >>= 1;
        }
        while ( v19 );
      }
LABEL_11:
      v21 = 0xCCCCCCCCCCCCCCCDLL * (v18 - v11);
    }
    v12 -= v15;
    if ( v12 > v21 && v21 <= a7 )
    {
      v22 = (__m128i *)v17;
      if ( !v21 )
        goto LABEL_24;
      v23 = (char *)v11 - (char *)v17;
      v24 = 0xCCCCCCCCCCCCCCCDLL * (v18 - v11);
      v25 = 0xCCCCCCCCCCCCCCCDLL * (v11 - v17);
      if ( (char *)v18 - (char *)v11 <= 0 )
      {
        if ( v23 <= 0 )
        {
          v22 = (__m128i *)v17;
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
          v26 += 5;
          v27 += 5;
          v26[-5] = v28;
          v26[-4] = _mm_loadu_si128(v27 - 4);
          v26[-3] = _mm_loadu_si128(v27 - 3);
          v26[-2] = _mm_loadu_si128(v27 - 2);
          v26[-1].m128i_i64[0] = v27[-1].m128i_i64[0];
          v26[-1].m128i_i32[2] = v27[-1].m128i_i32[2];
          --v24;
        }
        while ( v24 );
        v29 = (char *)v26 - (char *)v14;
        v30 = 0xCCCCCCCCCCCCCCCDLL * (v29 >> 4);
        if ( v23 <= 0 )
        {
LABEL_21:
          v32 = v29 <= 0;
          v22 = (__m128i *)v17;
          if ( !v32 )
          {
            v33 = v14;
            do
            {
              v34 = _mm_loadu_si128(v33);
              v22 += 5;
              v33 += 5;
              v22[-5] = v34;
              v22[-4] = _mm_loadu_si128(v33 - 4);
              v22[-3] = _mm_loadu_si128(v33 - 3);
              v22[-2] = _mm_loadu_si128(v33 - 2);
              v22[-1].m128i_i64[0] = v33[-1].m128i_i64[0];
              v22[-1].m128i_i32[2] = v33[-1].m128i_i32[2];
              --v30;
            }
            while ( v30 );
          }
          goto LABEL_24;
        }
      }
      v31 = 0xFFFFFFFFFFFFFFBLL;
      do
      {
        v18[v31] = _mm_loadu_si128(&v11[v31]);
        v18[v31 + 1] = _mm_loadu_si128(&v11[v31 + 1]);
        v18[v31 + 2] = _mm_loadu_si128(&v11[v31 + 2]);
        v18[v31 + 3] = _mm_loadu_si128(&v11[v31 + 3]);
        v18[v31 + 4].m128i_i64[0] = v11[v31 + 4].m128i_i64[0];
        v18[v31 + 4].m128i_i32[2] = v11[v31 + 4].m128i_i32[2];
        v31 -= 5;
        --v25;
      }
      while ( v25 );
      goto LABEL_21;
    }
    if ( v12 > a7 )
    {
      v70 = v14;
      v69 = (int)v13;
      v67 = v15;
      v65 = v11;
      sub_16B7C80(v17, v11, v18);
      LODWORD(v15) = v67;
      LODWORD(v13) = v69;
      v14 = v70;
      v22 = (__m128i *)((char *)v17 + (char *)v18 - (char *)v65);
      goto LABEL_24;
    }
    v22 = (__m128i *)v18;
    if ( !v12 )
      goto LABEL_24;
    v42 = v14;
    v43 = 0xCCCCCCCCCCCCCCCDLL * (v11 - v17);
    v44 = v17;
    if ( (char *)v11 - (char *)v17 <= 0 )
    {
      v47 = 0xCCCCCCCCCCCCCCCDLL * (v18 - v11);
      if ( (char *)v18 - (char *)v11 <= 0 )
      {
        v22 = (__m128i *)v18;
        goto LABEL_24;
      }
      v46 = 0;
      v48 = 0;
LABEL_48:
      v49 = 0;
      do
      {
        v17[v49] = _mm_loadu_si128(&v11[v49]);
        v17[v49 + 1] = _mm_loadu_si128(&v11[v49 + 1]);
        v17[v49 + 2] = _mm_loadu_si128(&v11[v49 + 2]);
        v17[v49 + 3] = _mm_loadu_si128(&v11[v49 + 3]);
        v17[v49 + 4].m128i_i64[0] = v11[v49 + 4].m128i_i64[0];
        v17[v49 + 4].m128i_i32[2] = v11[v49 + 4].m128i_i32[2];
        v49 += 5;
        --v47;
      }
      while ( v47 );
      goto LABEL_50;
    }
    do
    {
      v45 = _mm_loadu_si128(v44);
      v42 += 5;
      v44 += 5;
      v42[-5] = v45;
      v42[-4] = _mm_loadu_si128(v44 - 4);
      v42[-3] = _mm_loadu_si128(v44 - 3);
      v42[-2] = _mm_loadu_si128(v44 - 2);
      v42[-1].m128i_i64[0] = v44[-1].m128i_i64[0];
      v42[-1].m128i_i32[2] = v44[-1].m128i_i32[2];
      --v43;
    }
    while ( v43 );
    v46 = (char *)v42 - (char *)v14;
    v47 = 0xCCCCCCCCCCCCCCCDLL * (v18 - v11);
    v48 = 0xCCCCCCCCCCCCCCCDLL * (v42 - v14);
    if ( (char *)v18 - (char *)v11 > 0 )
      goto LABEL_48;
LABEL_50:
    v22 = (__m128i *)v18;
    if ( v46 > 0 )
    {
      do
      {
        v42 -= 5;
        v22 -= 5;
        *v22 = _mm_loadu_si128(v42);
        v22[1] = _mm_loadu_si128(v42 + 1);
        v22[2] = _mm_loadu_si128(v42 + 2);
        v22[3] = _mm_loadu_si128(v42 + 3);
        v22[4].m128i_i64[0] = v42[4].m128i_i64[0];
        v22[4].m128i_i32[2] = v42[4].m128i_i32[2];
        --v48;
      }
      while ( v48 );
    }
LABEL_24:
    v10 -= v21;
    v66 = v14;
    v64 = v22;
    sub_16B8330((_DWORD)v13, (_DWORD)v17, (_DWORD)v22, v15, v21, (_DWORD)v14, a7);
    v35 = a7;
    result = (__int64)v64;
    v14 = v66;
    if ( v10 <= a7 )
      v35 = v10;
    if ( v12 <= v35 )
      break;
    v13 = v64;
    v11 = v18;
    if ( v10 <= a7 )
    {
      v9 = a3;
      v8 = v66;
      goto LABEL_29;
    }
  }
  v9 = a3;
  v8 = v66;
LABEL_61:
  v53 = 0xCCCCCCCCCCCCCCCDLL * (((__int64)v18->m128i_i64 - result) >> 4);
  if ( (__int64)v18->m128i_i64 - result > 0 )
  {
    v54 = (const __m128i *)result;
    v55 = v8;
    do
    {
      v56 = _mm_loadu_si128(v54);
      v55 += 5;
      v54 += 5;
      v55[-5] = v56;
      v55[-4] = _mm_loadu_si128(v54 - 4);
      v55[-3] = _mm_loadu_si128(v54 - 3);
      v55[-2] = _mm_loadu_si128(v54 - 2);
      v55[-1].m128i_i64[0] = v54[-1].m128i_i64[0];
      v55[-1].m128i_i32[2] = v54[-1].m128i_i32[2];
      --v53;
    }
    while ( v53 );
    if ( v9 != v18 && v8 != v55 )
    {
      do
      {
        while ( (unsigned __int16)(((unsigned __int32)v18[4].m128i_i32[2] >> 4) & 0x3FFF) < (unsigned __int16)(((unsigned __int32)v8[4].m128i_i32[2] >> 4) & 0x3FFF) )
        {
          v57 = _mm_loadu_si128(v18);
          v18 += 5;
          result += 80;
          *(__m128i *)(result - 80) = v57;
          *(__m128i *)(result - 64) = _mm_loadu_si128(v18 - 4);
          *(__m128i *)(result - 48) = _mm_loadu_si128(v18 - 3);
          *(__m128i *)(result - 32) = _mm_loadu_si128(v18 - 2);
          *(_QWORD *)(result - 16) = v18[-1].m128i_i64[0];
          *(_DWORD *)(result - 8) = v18[-1].m128i_i32[2];
          if ( v9 == v18 || v55 == v8 )
            goto LABEL_69;
        }
        v61 = _mm_loadu_si128(v8);
        v8 += 5;
        result += 80;
        *(__m128i *)(result - 80) = v61;
        *(__m128i *)(result - 64) = _mm_loadu_si128(v8 - 4);
        *(__m128i *)(result - 48) = _mm_loadu_si128(v8 - 3);
        *(__m128i *)(result - 32) = _mm_loadu_si128(v8 - 2);
        *(_QWORD *)(result - 16) = v8[-1].m128i_i64[0];
        *(_DWORD *)(result - 8) = v8[-1].m128i_i32[2];
      }
      while ( v55 != v8 && v9 != v18 );
    }
LABEL_69:
    if ( v55 != v8 )
    {
      v58 = (char *)v55 - (char *)v8;
      v59 = 0xCCCCCCCCCCCCCCCDLL * (v58 >> 4);
      if ( v58 > 0 )
      {
        v60 = 0;
        do
        {
          *(__m128i *)(result + v60 * 16) = _mm_loadu_si128(&v8[v60]);
          *(__m128i *)(result + v60 * 16 + 16) = _mm_loadu_si128(&v8[v60 + 1]);
          *(__m128i *)(result + v60 * 16 + 32) = _mm_loadu_si128(&v8[v60 + 2]);
          *(__m128i *)(result + v60 * 16 + 48) = _mm_loadu_si128(&v8[v60 + 3]);
          *(_QWORD *)(result + v60 * 16 + 64) = v8[v60 + 4].m128i_i64[0];
          *(_DWORD *)(result + v60 * 16 + 72) = v8[v60 + 4].m128i_i32[2];
          v60 += 5;
          --v59;
        }
        while ( v59 );
      }
    }
  }
  return result;
}
