void __fastcall sub_2FA7B0(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i v7; // xmm2
  __int64 v8; // r15
  __m128i v9; // xmm3
  __m128i v10; // xmm4
  __m128i v11; // xmm5
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // rax
  __m128i si128; // xmm1
  __int64 v17; // rdi
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rdi
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rdi
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rdi
  __int64 v27; // rdi
  __m128i v28; // xmm6
  __int64 v29; // rdi
  __m128i v30; // xmm7
  __int64 v31; // rdi
  __m128i v32; // xmm2
  __int64 v33; // rdi
  __m128i v34; // xmm3
  __m128i v35; // [rsp+0h] [rbp-98h] BYREF
  __m128i v36; // [rsp+10h] [rbp-88h] BYREF
  __m128i v37; // [rsp+20h] [rbp-78h] BYREF
  __m128i v38; // [rsp+30h] [rbp-68h] BYREF
  __int64 v39; // [rsp+48h] [rbp-50h]
  __m128i v40[4]; // [rsp+50h] [rbp-48h] BYREF

  v7 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  v8 = *a1;
  *(_OWORD *)(a1 + 1) = 0;
  v9 = _mm_loadu_si128((const __m128i *)a1 + 2);
  v10 = _mm_loadu_si128((const __m128i *)(a1 + 7));
  *a1 = 0;
  v11 = _mm_loadu_si128((const __m128i *)a1 + 5);
  v12 = a1[3];
  *((_OWORD *)a1 + 2) = 0;
  v13 = a1[6];
  v14 = a1[9];
  a1[3] = 0;
  a1[6] = 0;
  a1[9] = 0;
  *(_OWORD *)(a1 + 7) = 0;
  v35 = v7;
  v36 = v9;
  v37 = v10;
  v38 = v11;
  *((_OWORD *)a1 + 5) = 0;
  v15 = *a2;
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 1));
  *a2 = 0;
  *(_OWORD *)(a2 + 1) = 0;
  v17 = *a1;
  if ( v17 )
  {
    a1[1] = 0;
    v39 = v15;
    v40[0] = si128;
    qfree(v17, (const char *)a2, a3, a4, a5, a6, *(_OWORD *)&v35, *(_OWORD *)&v36, *(_OWORD *)&v37, *(_OWORD *)&v38);
    si128 = _mm_load_si128(v40);
    v15 = v39;
  }
  *(__m128i *)(a1 + 1) = si128;
  *a1 = v15;
  v18 = a2[3];
  v19 = _mm_loadu_si128((const __m128i *)a2 + 2);
  a2[3] = 0;
  *((_OWORD *)a2 + 2) = 0;
  v20 = a1[3];
  if ( v20 )
  {
    a1[4] = 0;
    v39 = v18;
    v40[0] = v19;
    qfree(v20, (const char *)a2);
    v19 = _mm_load_si128(v40);
    v18 = v39;
  }
  a1[3] = v18;
  *((__m128i *)a1 + 2) = v19;
  v21 = a2[6];
  v22 = _mm_loadu_si128((const __m128i *)(a2 + 7));
  a2[6] = 0;
  *(_OWORD *)(a2 + 7) = 0;
  v23 = a1[6];
  if ( v23 )
  {
    a1[7] = 0;
    v39 = v21;
    v40[0] = v22;
    qfree(v23, (const char *)a2);
    v22 = _mm_load_si128(v40);
    v21 = v39;
  }
  a1[6] = v21;
  *(__m128i *)(a1 + 7) = v22;
  v24 = a2[9];
  v25 = _mm_loadu_si128((const __m128i *)a2 + 5);
  a2[9] = 0;
  *((_OWORD *)a2 + 5) = 0;
  v26 = a1[9];
  if ( v26 )
  {
    a1[10] = 0;
    v39 = v24;
    v40[0] = v25;
    qfree(v26, (const char *)a2);
    v25 = _mm_load_si128(v40);
    v24 = v39;
  }
  a1[9] = v24;
  *((__m128i *)a1 + 5) = v25;
  v27 = *a2;
  if ( *a2 )
  {
    a2[1] = 0;
    *(double *)v25.m128i_i64 = qfree(v27, (const char *)a2);
  }
  v28 = _mm_load_si128(&v35);
  v29 = a2[3];
  *a2 = v8;
  *(__m128i *)(a2 + 1) = v28;
  if ( v29 )
  {
    a2[4] = 0;
    *(double *)v25.m128i_i64 = qfree(v29, (const char *)a2, *(double *)v25.m128i_i64);
  }
  v30 = _mm_load_si128(&v36);
  v31 = a2[6];
  a2[3] = v12;
  *((__m128i *)a2 + 2) = v30;
  if ( v31 )
  {
    a2[7] = 0;
    *(double *)v25.m128i_i64 = qfree(v31, (const char *)a2, *(double *)v25.m128i_i64);
  }
  v32 = _mm_load_si128(&v37);
  v33 = a2[9];
  a2[6] = v13;
  *(__m128i *)(a2 + 7) = v32;
  if ( v33 )
  {
    a2[10] = 0;
    qfree(v33, (const char *)a2, *(double *)v25.m128i_i64);
  }
  v34 = _mm_load_si128(&v38);
  a2[9] = v14;
  *((__m128i *)a2 + 5) = v34;
}
