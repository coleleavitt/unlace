void __fastcall sub_2250300(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // r8
  __m128i *v5; // r13
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 i; // rcx
  __int64 v9; // rbx
  const __m128i *v10; // r14
  __int64 v11; // r12
  __int64 v12; // r15
  __m128i *v13; // rax
  __m128i *v14; // rdx
  __int64 v15; // rax
  __m128i v16; // xmm7
  _BYTE *v17; // rsi
  __int64 v18; // rdx
  _BYTE *v19; // rsi
  __int64 v20; // r14
  __int64 v21; // r8
  const __m128i *j; // rbp
  __m128i *v23; // rax
  __int64 v24; // rdx
  __m128i v25; // xmm7
  __m128i v26; // xmm3
  const __m128i *v27; // rbp
  __int64 v28; // rdi
  __int64 v29; // [rsp+0h] [rbp-E8h]
  __int64 v30; // [rsp+0h] [rbp-E8h]
  __int64 v31; // [rsp+0h] [rbp-E8h]
  __int64 v32; // [rsp+0h] [rbp-E8h]
  __int64 v34; // [rsp+20h] [rbp-C8h]
  __int64 v35; // [rsp+28h] [rbp-C0h]
  __int64 v36; // [rsp+28h] [rbp-C0h]
  __m128i v39; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v40; // [rsp+50h] [rbp-98h] BYREF
  __int64 v41; // [rsp+60h] [rbp-88h]
  void *v42[2]; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v43[16]; // [rsp+78h] [rbp-70h] BYREF
  void *v44[2]; // [rsp+88h] [rbp-60h] BYREF
  _BYTE v45[80]; // [rsp+98h] [rbp-50h] BYREF

  v4 = a1;
  v5 = (__m128i *)(a1 + 104 * a2);
  v6 = (__int64)&v5[2].m128i_i64[1];
  v7 = (__int64)&v5[4].m128i_i64[1];
  v34 = (a3 - 1) / 2;
  if ( a2 >= v34 )
  {
    v15 = a3;
    v9 = a2;
    v12 = (__int64)&v5[4].m128i_i64[1];
    v11 = (__int64)&v5[2].m128i_i64[1];
    if ( (a3 & 1) != 0 )
      goto LABEL_10;
    goto LABEL_20;
  }
  for ( i = a2; ; i = v29 )
  {
    while ( 1 )
    {
      v9 = 2 * (i + 1) - 1;
      v29 = 2 * (i + 1);
      v10 = (const __m128i *)(v4 + 208 * (i + 1));
      v5 = (__m128i *)(v4 + 104 * v9);
      if ( *(double *)v5->m128i_i64 <= *(double *)v10->m128i_i64 )
        break;
      v11 = (__int64)&v5[2].m128i_i64[1];
      v30 = v4;
      v12 = (__int64)&v5[4].m128i_i64[1];
      v14 = (__m128i *)(v4 + 104 * i);
      *v14 = _mm_loadu_si128(v5);
      v14[1] = _mm_loadu_si128(v5 + 1);
      v14[2].m128i_i64[0] = v5[2].m128i_i64[0];
      sub_9EE8A0(v6, (__int64)&v5[2].m128i_i64[1]);
      sub_9EE8A0(v7, (__int64)&v5[4].m128i_i64[1]);
      v4 = v30;
      if ( v9 >= v34 )
        goto LABEL_9;
      v7 = (__int64)&v5[4].m128i_i64[1];
      v6 = (__int64)&v5[2].m128i_i64[1];
      i = v9;
    }
    v11 = (__int64)&v10[2].m128i_i64[1];
    v35 = v4;
    v12 = (__int64)&v10[4].m128i_i64[1];
    v13 = (__m128i *)(v4 + 104 * i);
    *v13 = _mm_loadu_si128(v10);
    v13[1] = _mm_loadu_si128(v10 + 1);
    v13[2].m128i_i64[0] = v10[2].m128i_i64[0];
    sub_9EE8A0(v6, (__int64)&v10[2].m128i_i64[1]);
    sub_9EE8A0(v7, (__int64)&v10[4].m128i_i64[1]);
    v4 = v35;
    if ( v29 >= v34 )
      break;
    v7 = (__int64)&v10[4].m128i_i64[1];
    v6 = (__int64)&v10[2].m128i_i64[1];
  }
  v5 = (__m128i *)v10;
  v9 = v29;
LABEL_9:
  v15 = a3;
  if ( (a3 & 1) == 0 )
  {
LABEL_20:
    if ( (v15 - 2) / 2 == v9 )
    {
      v9 = 2 * v9 + 1;
      v32 = v4;
      v27 = (const __m128i *)(v4 + 104 * v9);
      *v5 = _mm_loadu_si128(v27);
      v5[1] = _mm_loadu_si128(v27 + 1);
      v5[2].m128i_i64[0] = v27[2].m128i_i64[0];
      sub_9EE8A0(v11, (__int64)&v27[2].m128i_i64[1]);
      v28 = v12;
      v12 = (__int64)&v27[4].m128i_i64[1];
      sub_9EE8A0(v28, (__int64)&v27[4].m128i_i64[1]);
      v11 = (__int64)&v27[2].m128i_i64[1];
      v4 = v32;
      v5 = (__m128i *)v27;
    }
  }
LABEL_10:
  v36 = v4;
  v16 = _mm_loadu_si128(a4);
  v17 = (_BYTE *)a4[2].m128i_i64[1];
  v41 = a4[2].m128i_i64[0];
  v42[0] = v43;
  v18 = a4[3].m128i_i64[0];
  v39 = v16;
  v40 = _mm_loadu_si128(a4 + 1);
  sub_224DA20(v42, v17, (__int64)&v17[v18]);
  v19 = (_BYTE *)a4[4].m128i_i64[1];
  v44[0] = v45;
  sub_224DA20(v44, v19, (__int64)&v19[a4[5].m128i_i64[0]]);
  v20 = (v9 - 1) / 2;
  if ( v9 > a2 )
  {
    v21 = v36;
    for ( j = (const __m128i *)(v36 + 104 * v20);
          *(double *)v39.m128i_i64 > *(double *)j->m128i_i64;
          j = (const __m128i *)(v31 + 104 * v24) )
    {
      v31 = v21;
      v23 = (__m128i *)(v21 + 104 * v9);
      *v23 = _mm_loadu_si128(j);
      v23[1] = _mm_loadu_si128(j + 1);
      v23[2].m128i_i64[0] = j[2].m128i_i64[0];
      sub_9EE8A0(v11, (__int64)&j[2].m128i_i64[1]);
      sub_9EE8A0(v12, (__int64)&j[4].m128i_i64[1]);
      v21 = v31;
      v24 = (v20 - 1) / 2;
      v5 = (__m128i *)(v31 + 104 * v20);
      v11 = (__int64)&v5[2].m128i_i64[1];
      v12 = (__int64)&v5[4].m128i_i64[1];
      if ( a2 >= v20 )
        break;
      v9 = v20;
      v20 = (v20 - 1) / 2;
    }
  }
  v25 = _mm_load_si128(&v39);
  v26 = _mm_load_si128(&v40);
  v5[2].m128i_i64[0] = v41;
  *v5 = v25;
  v5[1] = v26;
  sub_9EE8A0(v11, (__int64)v42);
  sub_9EE8A0(v12, (__int64)v44);
  if ( v44[0] != v45 )
    operator delete(v44[0]);
  if ( v42[0] != v43 )
    operator delete(v42[0]);
}
