void __fastcall sub_16B78C0(__m128i *a1, __m128i *a2, const __m128i *a3)
{
  __int64 v3; // r12
  __int64 v5; // r14
  __int64 v6; // r11
  __int64 v7; // r11
  __int64 v8; // rbx
  __int64 v9; // r8
  const __m128i *v10; // rcx
  const __m128i *v11; // rax
  const __m128i *v12; // rdi
  const __m128i *v13; // rdx
  __m128i v14; // xmm0
  unsigned __int64 v15; // rsi
  __m128i v16; // xmm0
  unsigned __int64 v17; // rax
  __m128i v18; // xmm4
  __int64 v19; // rdx
  __int64 v20; // r10
  __int64 v21; // r11
  __int64 v22; // r11
  const __m128i *v23; // rdi
  __int64 v24; // r8
  const __m128i *v25; // r15
  __int64 v26; // rax
  signed __int64 v27; // r10
  signed __int64 v28; // rdx
  signed __int64 v29; // r11
  __m128i v30; // xmm4
  const __m128i *v31; // [rsp+8h] [rbp-50h]
  __int64 v33; // [rsp+18h] [rbp-40h]

  v3 = 0xCCCCCCCCCCCCCCCDLL * (a2 - a1);
  v31 = (const __m128i *)((char *)a3 + (char *)a2 - (char *)a1);
  if ( (char *)a2 - (char *)a1 <= 480 )
  {
    sub_16B62A0(a1, a2);
    return;
  }
  v5 = (__int64)a1;
  do
  {
    sub_16B62A0(a1, a1 + 35);
    a1 += 35;
  }
  while ( (char *)a2 - (char *)a1 > 480 );
  sub_16B62A0(a1, a2);
  if ( v6 > 560 )
  {
    v7 = 7;
    while ( 1 )
    {
      v8 = 10 * v7;
      if ( v3 >= 2 * v7 )
        break;
      v9 = (__int64)a3;
      v19 = v3;
      v12 = (const __m128i *)v5;
LABEL_17:
      if ( v7 <= v19 )
        v19 = v7;
      sub_16B64C0(v12, &v12[5 * v19], &v12[5 * v19], a2, v9);
      v22 = 4 * v21;
      if ( v3 < v22 )
      {
        if ( v3 <= v20 )
          v20 = v3;
        sub_16B64C0(a3, &a3[5 * v20], &a3[5 * v20], v31, v5);
        return;
      }
      v23 = a3;
      v24 = v5;
      v33 = 5 * v22;
      do
      {
        v25 = &v23[v33];
        v26 = sub_16B64C0(v23, &v23[v8], &v23[v8], &v23[v33], v24);
        v23 = v25;
        v24 = v26;
        v28 = 0xCCCCCCCCCCCCCCCDLL * (v31 - v25);
      }
      while ( v29 <= v28 );
      if ( v28 <= v27 )
        v27 = 0xCCCCCCCCCCCCCCCDLL * (v31 - v25);
      sub_16B64C0(v25, &v25[5 * v27], &v25[5 * v27], v31, v26);
      if ( v3 <= v7 )
        return;
    }
    v9 = (__int64)a3;
    v10 = (const __m128i *)(v5 + 80 * v7);
    v11 = (const __m128i *)v5;
    while ( 1 )
    {
      v12 = &v11[v8];
      v13 = v10;
      if ( &v11[v8] != v10 )
        break;
      v15 = 0xCCCCCCCCCCCCCCCDLL * (v10 - v11);
      if ( (char *)v10 - (char *)v11 > 0 )
      {
        v13 = v10;
        goto LABEL_13;
      }
LABEL_16:
      v10 = (const __m128i *)((char *)v10 + v8 * 16);
      v11 = v12;
      v19 = 0xCCCCCCCCCCCCCCCDLL * (a2 - v12);
      if ( 2 * v7 > v19 )
        goto LABEL_17;
    }
    do
    {
      while ( (unsigned __int16)(((unsigned __int32)v13[4].m128i_i32[2] >> 4) & 0x3FFF) < (unsigned __int16)(((unsigned __int32)v11[4].m128i_i32[2] >> 4) & 0x3FFF) )
      {
        v14 = _mm_loadu_si128(v13);
        v13 += 5;
        v9 += 80;
        *(__m128i *)(v9 - 80) = v14;
        *(__m128i *)(v9 - 64) = _mm_loadu_si128(v13 - 4);
        *(__m128i *)(v9 - 48) = _mm_loadu_si128(v13 - 3);
        *(__m128i *)(v9 - 32) = _mm_loadu_si128(v13 - 2);
        *(_QWORD *)(v9 - 16) = v13[-1].m128i_i64[0];
        *(_DWORD *)(v9 - 8) = v13[-1].m128i_i32[2];
        if ( v12 == v13 || v11 == v10 )
          goto LABEL_12;
      }
      v30 = _mm_loadu_si128(v11);
      v11 += 5;
      v9 += 80;
      *(__m128i *)(v9 - 80) = v30;
      *(__m128i *)(v9 - 64) = _mm_loadu_si128(v11 - 4);
      *(__m128i *)(v9 - 48) = _mm_loadu_si128(v11 - 3);
      *(__m128i *)(v9 - 32) = _mm_loadu_si128(v11 - 2);
      *(_QWORD *)(v9 - 16) = v11[-1].m128i_i64[0];
      *(_DWORD *)(v9 - 8) = v11[-1].m128i_i32[2];
    }
    while ( v11 != v10 && v13 != v12 );
LABEL_12:
    v15 = 0xCCCCCCCCCCCCCCCDLL * (v10 - v11);
    if ( (char *)v10 - (char *)v11 > 0 )
    {
      do
      {
LABEL_13:
        v16 = _mm_loadu_si128(v11);
        v9 += 80;
        v11 += 5;
        *(__m128i *)(v9 - 80) = v16;
        *(__m128i *)(v9 - 64) = _mm_loadu_si128(v11 - 4);
        *(__m128i *)(v9 - 48) = _mm_loadu_si128(v11 - 3);
        *(__m128i *)(v9 - 32) = _mm_loadu_si128(v11 - 2);
        *(_QWORD *)(v9 - 16) = v11[-1].m128i_i64[0];
        *(_DWORD *)(v9 - 8) = v11[-1].m128i_i32[2];
        --v15;
      }
      while ( v15 );
    }
    v17 = 0xCCCCCCCCCCCCCCCDLL * (v12 - v13);
    if ( (char *)v12 - (char *)v13 > 0 )
    {
      do
      {
        v18 = _mm_loadu_si128(v13);
        v9 += 80;
        v13 += 5;
        *(__m128i *)(v9 - 80) = v18;
        *(__m128i *)(v9 - 64) = _mm_loadu_si128(v13 - 4);
        *(__m128i *)(v9 - 48) = _mm_loadu_si128(v13 - 3);
        *(__m128i *)(v9 - 32) = _mm_loadu_si128(v13 - 2);
        *(_QWORD *)(v9 - 16) = v13[-1].m128i_i64[0];
        *(_DWORD *)(v9 - 8) = v13[-1].m128i_i32[2];
        --v17;
      }
      while ( v17 );
    }
    goto LABEL_16;
  }
}
