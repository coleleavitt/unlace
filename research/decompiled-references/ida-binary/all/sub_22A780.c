__int64 __fastcall sub_22A780(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rcx
  __m128i *v7; // r12
  __int64 v8; // r15
  __m128i v9; // xmm0
  __int64 v10; // rdi
  __int64 v11; // r15
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // r14
  const char *v19; // rdi
  __int64 v20; // rax
  __m128 v21; // xmm6
  __m128i v22; // xmm7
  __m128i v23; // xmm1
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rbp
  __int64 v28; // rdi
  __m128i v29; // xmm1
  __int64 v30; // rdi
  __m128i si128; // xmm7
  __int64 v32; // rax
  __int64 result; // rax
  __m128i *v34; // r13
  __int64 v35; // r15
  __m128i v36; // xmm0
  __int64 v37; // rdi
  __int64 v38; // r15
  __m128i v39; // xmm0
  __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // r13
  __int64 v43; // r12
  __int64 v44; // r15
  __m128i v45; // xmm0
  __int64 v46; // rdi
  __int64 v47; // r15
  __m128i v48; // xmm0
  __int64 v49; // rdi
  const char *v50; // [rsp+8h] [rbp-B0h]
  __m128i v51; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v52; // [rsp+20h] [rbp-98h] BYREF
  __m128i v53; // [rsp+30h] [rbp-88h] BYREF
  __m128 v54; // [rsp+40h] [rbp-78h] BYREF
  __int64 v55; // [rsp+50h] [rbp-68h]
  __int64 v56; // [rsp+58h] [rbp-60h]
  __int64 v57; // [rsp+60h] [rbp-58h]
  unsigned __int16 v58; // [rsp+6Eh] [rbp-4Ah]
  __m128i v59[4]; // [rsp+70h] [rbp-48h] BYREF

  v50 = (const char *)a2;
  v53.m128i_i64[0] = a3;
  v51.m128i_i64[0] = (a3 - 1) / 2;
  if ( a2 >= v51.m128i_i64[0] )
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
      v17 = a1 + v16 - 80;
      v18 = a1 + v16;
      v19 = *(const char **)(a1 + v16);
      a2 = *(_QWORD *)v17;
      if ( *(_QWORD *)v17 >= (unsigned __int64)v19
        && (v19 != (const char *)a2 || *(_QWORD *)(v18 + 8) < *(_QWORD *)(v17 + 8)) )
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
      v10 = v7[1].m128i_i64[0];
      if ( v10 )
      {
        v7[1].m128i_i64[1] = 0;
        v52 = v9;
        qfree(v10, (const char *)a2);
        v9 = _mm_load_si128(&v52);
      }
      v7[1].m128i_i64[0] = v8;
      *(__m128i *)((char *)v7 + 24) = v9;
      v11 = *(_QWORD *)(v18 + 40);
      v12 = _mm_loadu_si128((const __m128i *)(v18 + 48));
      *(_QWORD *)(v18 + 40) = 0;
      *(_OWORD *)(v18 + 48) = 0;
      v13 = v7[2].m128i_i64[1];
      if ( v13 )
      {
        v7[3].m128i_i64[0] = 0;
        v52 = v12;
        qfree(v13, (const char *)a2);
        v12 = _mm_load_si128(&v52);
      }
      v7[2].m128i_i64[1] = v11;
      v14 = v51.m128i_i64[0];
      v7[3] = v12;
      v7[4].m128i_i64[0] = *(_QWORD *)(v18 + 64);
      v7[4].m128i_i8[8] = *(_BYTE *)(v18 + 72);
      v7[4].m128i_i8[9] = *(_BYTE *)(v18 + 73);
      if ( v15 >= v14 )
        break;
    }
  }
  if ( (v53.m128i_i8[0] & 1) == 0 && (v53.m128i_i64[0] - 2) / 2 == v15 )
  {
    v41 = v15 + 1;
    v42 = 2 * (v15 + 1);
    v43 = a1 + 16 * (v42 + 8 * v41) - 80;
    *(__m128i *)v18 = _mm_loadu_si128((const __m128i *)v43);
    v44 = *(_QWORD *)(v43 + 16);
    v45 = _mm_loadu_si128((const __m128i *)(v43 + 24));
    *(_QWORD *)(v43 + 16) = 0;
    *(_OWORD *)(v43 + 24) = 0;
    v46 = *(_QWORD *)(v18 + 16);
    if ( v46 )
    {
      *(_QWORD *)(v18 + 24) = 0;
      v51 = v45;
      qfree(v46, (const char *)a2);
      v45 = _mm_load_si128(&v51);
    }
    *(_QWORD *)(v18 + 16) = v44;
    *(__m128i *)(v18 + 24) = v45;
    v47 = *(_QWORD *)(v43 + 40);
    v48 = _mm_loadu_si128((const __m128i *)(v43 + 48));
    *(_QWORD *)(v43 + 40) = 0;
    *(_OWORD *)(v43 + 48) = 0;
    v49 = *(_QWORD *)(v18 + 40);
    if ( v49 )
    {
      *(_QWORD *)(v18 + 48) = 0;
      v51 = v48;
      qfree(v49, (const char *)a2);
      v48 = _mm_load_si128(&v51);
    }
    *(_QWORD *)(v18 + 40) = v47;
    v15 = v42 - 1;
    *(__m128i *)(v18 + 48) = v48;
    *(_QWORD *)(v18 + 64) = *(_QWORD *)(v43 + 64);
    *(_BYTE *)(v18 + 72) = *(_BYTE *)(v43 + 72);
    *(_BYTE *)(v18 + 73) = *(_BYTE *)(v43 + 73);
    v18 = a1 + 80 * v15;
  }
  v20 = *(_QWORD *)(a4 + 16);
  v21 = (__m128)_mm_loadu_si128((const __m128i *)a4);
  v22 = _mm_loadu_si128((const __m128i *)(a4 + 24));
  v23 = _mm_loadu_si128((const __m128i *)(a4 + 48));
  *(_QWORD *)(a4 + 16) = 0;
  v55 = v20;
  v24 = *(_QWORD *)(a4 + 40);
  *(_QWORD *)(a4 + 40) = 0;
  v56 = v24;
  v25 = *(_QWORD *)(a4 + 64);
  v26 = (v15 - 1) / 2;
  *(_OWORD *)(a4 + 24) = 0;
  v57 = v25;
  LOWORD(v25) = *(_WORD *)(a4 + 72);
  *(_OWORD *)(a4 + 48) = 0;
  v27 = v26;
  v58 = v25;
  v54 = v21;
  _mm_storeh_ps((double *)v52.m128i_i64, v21);
  v53 = v22;
  v59[0] = v23;
  if ( v15 > (__int64)v50 )
  {
    while ( 1 )
    {
      v18 = a1 + 80 * v27;
      if ( v21.m128_u64[0] < *(_QWORD *)v18
        || v21.m128_u64[0] == *(_QWORD *)v18 && *(_QWORD *)(v18 + 8) >= v52.m128i_i64[0] )
      {
        break;
      }
      v34 = (__m128i *)(a1 + 80 * v15);
      *v34 = _mm_loadu_si128((const __m128i *)v18);
      v35 = *(_QWORD *)(v18 + 16);
      v36 = _mm_loadu_si128((const __m128i *)(v18 + 24));
      *(_QWORD *)(v18 + 16) = 0;
      *(_OWORD *)(v18 + 24) = 0;
      v37 = v34[1].m128i_i64[0];
      if ( v37 )
      {
        v34[1].m128i_i64[1] = 0;
        v51 = v36;
        qfree(v37, (const char *)v26);
        v36 = _mm_load_si128(&v51);
      }
      v34[1].m128i_i64[0] = v35;
      *(__m128i *)((char *)v34 + 24) = v36;
      v38 = *(_QWORD *)(v18 + 40);
      v39 = _mm_loadu_si128((const __m128i *)(v18 + 48));
      *(_QWORD *)(v18 + 40) = 0;
      *(_OWORD *)(v18 + 48) = 0;
      v40 = v34[2].m128i_i64[1];
      if ( v40 )
      {
        v34[3].m128i_i64[0] = 0;
        v51 = v39;
        qfree(v40, (const char *)v26);
        v39 = _mm_load_si128(&v51);
      }
      v34[2].m128i_i64[1] = v38;
      v34[3] = v39;
      v34[4].m128i_i64[0] = *(_QWORD *)(v18 + 64);
      v34[4].m128i_i8[8] = *(_BYTE *)(v18 + 72);
      v34[4].m128i_i8[9] = *(_BYTE *)(v18 + 73);
      v15 = v27;
      if ( (__int64)v50 >= v27 )
        goto LABEL_21;
      v27 = (v27 - 1) / 2;
    }
    v18 = a1 + 80 * v15;
  }
LABEL_21:
  v28 = *(_QWORD *)(v18 + 16);
  *(__m128i *)v18 = _mm_load_si128((const __m128i *)&v54);
  if ( v28 )
  {
    *(_QWORD *)(v18 + 24) = 0;
    qfree(v28, (const char *)v26);
  }
  v29 = _mm_load_si128(&v53);
  v30 = *(_QWORD *)(v18 + 40);
  *(_QWORD *)(v18 + 16) = v55;
  *(__m128i *)(v18 + 24) = v29;
  if ( v30 )
  {
    *(_QWORD *)(v18 + 48) = 0;
    qfree(v30, (const char *)v26);
  }
  si128 = _mm_load_si128(v59);
  *(_QWORD *)(v18 + 40) = v56;
  v32 = v57;
  *(__m128i *)(v18 + 48) = si128;
  *(_QWORD *)(v18 + 64) = v32;
  result = v58;
  *(_WORD *)(v18 + 72) = v58;
  return result;
}
