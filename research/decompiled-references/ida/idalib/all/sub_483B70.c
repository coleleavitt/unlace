__int64 __fastcall sub_483B70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rcx
  __m128i *v7; // r12
  __int64 v8; // r15
  __m128i v9; // xmm0
  void *v10; // rdi
  __int64 v11; // r15
  __m128i v12; // xmm0
  void *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  unsigned __int64 *v17; // r9
  __int64 v18; // r14
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  __m128 v21; // xmm6
  __m128i v22; // xmm7
  __m128i v23; // xmm1
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbp
  void *v27; // rdi
  __m128i v28; // xmm1
  void *v29; // rdi
  __m128i si128; // xmm7
  __int64 v31; // rax
  __int64 result; // rax
  __m128i *v33; // r13
  __int64 v34; // r15
  __m128i v35; // xmm0
  void *v36; // rdi
  __int64 v37; // r15
  __m128i v38; // xmm0
  void *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // r13
  __int64 v42; // r12
  __int64 v43; // r15
  __m128i v44; // xmm0
  void *v45; // rdi
  __int64 v46; // r15
  __m128i v47; // xmm0
  void *v48; // rdi
  __m128i v49; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v50; // [rsp+20h] [rbp-98h] BYREF
  __m128i v51; // [rsp+30h] [rbp-88h] BYREF
  __m128 v52; // [rsp+40h] [rbp-78h] BYREF
  __int64 v53; // [rsp+50h] [rbp-68h]
  __int64 v54; // [rsp+58h] [rbp-60h]
  __int64 v55; // [rsp+60h] [rbp-58h]
  unsigned __int16 v56; // [rsp+6Eh] [rbp-4Ah]
  __m128i v57[4]; // [rsp+70h] [rbp-48h] BYREF

  v51.m128i_i64[0] = a3;
  v49.m128i_i64[0] = (a3 - 1) / 2;
  if ( a2 >= v49.m128i_i64[0] )
  {
    v15 = a2;
    v18 = a1 + 80 * a2;
  }
  else
  {
    for ( i = a2; ; i = v15 )
    {
      v15 = 2 * (i + 1);
      v16 = 160 * (i + 1);
      v17 = (unsigned __int64 *)(a1 + v16 - 80);
      v18 = a1 + v16;
      v19 = *(_QWORD *)(a1 + v16);
      if ( *v17 >= v19 && (v19 != *v17 || *(_QWORD *)(v18 + 8) < v17[1]) )
      {
        --v15;
        v18 = a1 + 80 * v15;
      }
      v7 = (__m128i *)(a1 + 80 * i);
      *v7 = _mm_loadu_si128((const __m128i *)v18);
      v8 = *(_QWORD *)(v18 + 16);
      v9 = _mm_loadu_si128((const __m128i *)(v18 + 24));
      *(_QWORD *)(v18 + 16) = 0;
      *(_OWORD *)(v18 + 24) = 0;
      v10 = (void *)v7[1].m128i_i64[0];
      if ( v10 )
      {
        v7[1].m128i_i64[1] = 0;
        v50 = v9;
        qfree(v10);
        v9 = _mm_load_si128(&v50);
      }
      v7[1].m128i_i64[0] = v8;
      *(__m128i *)((char *)v7 + 24) = v9;
      v11 = *(_QWORD *)(v18 + 40);
      v12 = _mm_loadu_si128((const __m128i *)(v18 + 48));
      *(_QWORD *)(v18 + 40) = 0;
      *(_OWORD *)(v18 + 48) = 0;
      v13 = (void *)v7[2].m128i_i64[1];
      if ( v13 )
      {
        v7[3].m128i_i64[0] = 0;
        v50 = v12;
        qfree(v13);
        v12 = _mm_load_si128(&v50);
      }
      v7[2].m128i_i64[1] = v11;
      v14 = v49.m128i_i64[0];
      v7[3] = v12;
      v7[4].m128i_i64[0] = *(_QWORD *)(v18 + 64);
      v7[4].m128i_i8[8] = *(_BYTE *)(v18 + 72);
      v7[4].m128i_i8[9] = *(_BYTE *)(v18 + 73);
      if ( v15 >= v14 )
        break;
    }
  }
  if ( (v51.m128i_i8[0] & 1) == 0 && (v51.m128i_i64[0] - 2) / 2 == v15 )
  {
    v40 = v15 + 1;
    v41 = 2 * (v15 + 1);
    v42 = a1 + 16 * (v41 + 8 * v40) - 80;
    *(__m128i *)v18 = _mm_loadu_si128((const __m128i *)v42);
    v43 = *(_QWORD *)(v42 + 16);
    v44 = _mm_loadu_si128((const __m128i *)(v42 + 24));
    *(_QWORD *)(v42 + 16) = 0;
    *(_OWORD *)(v42 + 24) = 0;
    v45 = *(void **)(v18 + 16);
    if ( v45 )
    {
      *(_QWORD *)(v18 + 24) = 0;
      v49 = v44;
      qfree(v45);
      v44 = _mm_load_si128(&v49);
    }
    *(_QWORD *)(v18 + 16) = v43;
    *(__m128i *)(v18 + 24) = v44;
    v46 = *(_QWORD *)(v42 + 40);
    v47 = _mm_loadu_si128((const __m128i *)(v42 + 48));
    *(_QWORD *)(v42 + 40) = 0;
    *(_OWORD *)(v42 + 48) = 0;
    v48 = *(void **)(v18 + 40);
    if ( v48 )
    {
      *(_QWORD *)(v18 + 48) = 0;
      v49 = v47;
      qfree(v48);
      v47 = _mm_load_si128(&v49);
    }
    *(_QWORD *)(v18 + 40) = v46;
    v15 = v41 - 1;
    *(__m128i *)(v18 + 48) = v47;
    *(_QWORD *)(v18 + 64) = *(_QWORD *)(v42 + 64);
    *(_BYTE *)(v18 + 72) = *(_BYTE *)(v42 + 72);
    *(_BYTE *)(v18 + 73) = *(_BYTE *)(v42 + 73);
    v18 = a1 + 80 * v15;
  }
  v20 = *(_QWORD *)(a4 + 16);
  v21 = (__m128)_mm_loadu_si128((const __m128i *)a4);
  v22 = _mm_loadu_si128((const __m128i *)(a4 + 24));
  v23 = _mm_loadu_si128((const __m128i *)(a4 + 48));
  *(_QWORD *)(a4 + 16) = 0;
  v53 = v20;
  v24 = *(_QWORD *)(a4 + 40);
  *(_QWORD *)(a4 + 40) = 0;
  v54 = v24;
  v25 = *(_QWORD *)(a4 + 64);
  *(_OWORD *)(a4 + 24) = 0;
  v55 = v25;
  LOWORD(v25) = *(_WORD *)(a4 + 72);
  *(_OWORD *)(a4 + 48) = 0;
  v26 = (v15 - 1) / 2;
  v56 = v25;
  v52 = v21;
  _mm_storeh_ps((double *)v50.m128i_i64, v21);
  v51 = v22;
  v57[0] = v23;
  if ( v15 > a2 )
  {
    while ( 1 )
    {
      v18 = a1 + 80 * v26;
      if ( v21.m128_u64[0] < *(_QWORD *)v18
        || v21.m128_u64[0] == *(_QWORD *)v18 && *(_QWORD *)(v18 + 8) >= v50.m128i_i64[0] )
      {
        break;
      }
      v33 = (__m128i *)(a1 + 80 * v15);
      *v33 = _mm_loadu_si128((const __m128i *)v18);
      v34 = *(_QWORD *)(v18 + 16);
      v35 = _mm_loadu_si128((const __m128i *)(v18 + 24));
      *(_QWORD *)(v18 + 16) = 0;
      *(_OWORD *)(v18 + 24) = 0;
      v36 = (void *)v33[1].m128i_i64[0];
      if ( v36 )
      {
        v33[1].m128i_i64[1] = 0;
        v49 = v35;
        qfree(v36);
        v35 = _mm_load_si128(&v49);
      }
      v33[1].m128i_i64[0] = v34;
      *(__m128i *)((char *)v33 + 24) = v35;
      v37 = *(_QWORD *)(v18 + 40);
      v38 = _mm_loadu_si128((const __m128i *)(v18 + 48));
      *(_QWORD *)(v18 + 40) = 0;
      *(_OWORD *)(v18 + 48) = 0;
      v39 = (void *)v33[2].m128i_i64[1];
      if ( v39 )
      {
        v33[3].m128i_i64[0] = 0;
        v49 = v38;
        qfree(v39);
        v38 = _mm_load_si128(&v49);
      }
      v33[2].m128i_i64[1] = v37;
      v33[3] = v38;
      v33[4].m128i_i64[0] = *(_QWORD *)(v18 + 64);
      v33[4].m128i_i8[8] = *(_BYTE *)(v18 + 72);
      v33[4].m128i_i8[9] = *(_BYTE *)(v18 + 73);
      v15 = v26;
      if ( a2 >= v26 )
        goto LABEL_21;
      v26 = (v26 - 1) / 2;
    }
    v18 = a1 + 80 * v15;
  }
LABEL_21:
  v27 = *(void **)(v18 + 16);
  *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v52);
  if ( v27 )
  {
    *(_QWORD *)(v18 + 24) = 0;
    qfree(v27);
  }
  v28 = _mm_load_si128(&v51);
  v29 = *(void **)(v18 + 40);
  *(_QWORD *)(v18 + 16) = v53;
  *(__m128i *)(v18 + 24) = v28;
  if ( v29 )
  {
    *(_QWORD *)(v18 + 48) = 0;
    qfree(v29);
  }
  si128 = _mm_load_si128(v57);
  *(_QWORD *)(v18 + 40) = v54;
  v31 = v55;
  *(__m128i *)(v18 + 48) = si128;
  *(_QWORD *)(v18 + 64) = v31;
  result = v56;
  *(_WORD *)(v18 + 72) = v56;
  return result;
}
