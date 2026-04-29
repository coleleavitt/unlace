unsigned __int64 __fastcall sub_3B0E80(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v10; // rax
  unsigned __int64 i; // r12
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 *v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rcx
  unsigned __int64 j; // rdx
  unsigned __int64 v23; // r15
  __int64 v24; // r13
  __int64 v25; // rdx
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  __int64 v28; // r14
  __m128i v29; // xmm1
  __int64 v30; // rdi
  __int64 v31; // rdi
  __m128i v32; // xmm7
  __int64 v33; // r13
  __int64 v34; // r15
  __int64 v35; // rax
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  __int64 v38; // r15
  __m128i v39; // xmm1
  __m128i v40; // xmm2
  __int64 v41; // rbx
  __m128i v42; // xmm3
  __int64 v43; // rdi
  __m128i v45; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v46; // [rsp+10h] [rbp-98h] BYREF
  __m128i v47; // [rsp+20h] [rbp-88h] BYREF
  __int64 v48; // [rsp+38h] [rbp-70h]
  __m128i v49; // [rsp+40h] [rbp-68h] BYREF
  __int64 v50; // [rsp+50h] [rbp-58h]
  __m128i v51; // [rsp+58h] [rbp-50h]
  unsigned __int64 v52; // [rsp+68h] [rbp-40h]

  v48 = a3;
  v52 = __readfsqword(0x28u);
  v10 = a2 - a1;
  if ( (__int64)(a2 - a1) <= 640 )
    return v52 - __readfsqword(0x28u);
  for ( i = a2; ; i = v18 )
  {
    v13 = 0xCCCCCCCCCCCCCCCDLL * (v10 >> 3);
    v14 = v13 >> 1;
    if ( !v48 )
      break;
    v15 = *(_QWORD *)(a1 + 48);
    --v48;
    v16 = (__int64 *)(a1 + 40 * v14);
    v17 = *(_QWORD *)(i - 32);
    v18 = a1 + 40;
    v19 = v16[1];
    if ( v15 >= v19 )
    {
      if ( v15 < v17 )
      {
LABEL_24:
        sub_3B0DC0(a1, (__int64 *)(a1 + 40));
        goto LABEL_8;
      }
      if ( v19 >= v17 )
      {
LABEL_23:
        sub_3B0DC0(a1, v16);
        goto LABEL_8;
      }
    }
    else
    {
      if ( v19 < v17 )
        goto LABEL_23;
      if ( v15 >= v17 )
        goto LABEL_24;
    }
    sub_3B0DC0(a1, (__int64 *)(i - 40));
LABEL_8:
    v20 = i;
    while ( 1 )
    {
      v21 = *(_QWORD *)(v18 + 8);
      for ( j = *(_QWORD *)(a1 + 8); v21 < j; v18 += 40LL )
        v21 = *(_QWORD *)(v18 + 48);
      v23 = v20 - 40;
      if ( j < *(_QWORD *)(v20 - 32) )
      {
        do
          v23 -= 40LL;
        while ( j < *(_QWORD *)(v23 + 8) );
      }
      if ( v18 >= v23 )
        break;
      a10 = (__m128)_mm_loadu_si128((const __m128i *)(v18 + 24));
      v24 = *(_QWORD *)(v18 + 16);
      *(_QWORD *)(v18 + 16) = 0;
      *(_OWORD *)(v18 + 24) = 0;
      v25 = *(_QWORD *)v23;
      v26 = _mm_loadl_epi64((const __m128i *)v18);
      v45 = (__m128i)a10;
      *(_QWORD *)v18 = v25;
      v27 = _mm_unpacklo_epi64(v26, (__m128i)v21);
      *(_QWORD *)(v18 + 8) = *(_QWORD *)(v23 + 8);
      v28 = *(_QWORD *)(v23 + 16);
      v29 = _mm_loadu_si128((const __m128i *)(v23 + 24));
      *(_QWORD *)(v23 + 16) = 0;
      *(_OWORD *)(v23 + 24) = 0;
      v30 = *(_QWORD *)(v18 + 16);
      if ( v30 )
      {
        *(_QWORD *)(v18 + 24) = 0;
        v47 = v27;
        v46 = v29;
        qfree(v30);
        v27 = _mm_load_si128(&v47);
        v29 = _mm_load_si128(&v46);
      }
      *(_QWORD *)(v18 + 16) = v28;
      *(__m128i *)(v18 + 24) = v29;
      v31 = *(_QWORD *)(v23 + 16);
      *(__m128i *)v23 = v27;
      if ( v31 )
      {
        *(_QWORD *)(v23 + 24) = 0;
        qfree(v31);
      }
      v32 = _mm_load_si128(&v45);
      *(_QWORD *)(v23 + 16) = v24;
      v18 += 40LL;
      v20 = v23;
      *(__m128i *)(v23 + 24) = v32;
    }
    sub_3B0E80(v18, i, v48);
    v10 = v18 - a1;
    if ( (__int64)(v18 - a1) <= 640 )
      return v52 - __readfsqword(0x28u);
  }
  v33 = v14 - 1;
  v34 = a1 + 40 * (v14 - 1);
  while ( 1 )
  {
    v35 = *(_QWORD *)(v34 + 16);
    v36 = _mm_loadu_si128((const __m128i *)(v34 + 24));
    v37 = _mm_loadu_si128((const __m128i *)v34);
    *(_QWORD *)(v34 + 16) = 0;
    *(_OWORD *)(v34 + 24) = 0;
    v50 = v35;
    v49 = v37;
    v51 = v36;
    sub_3A2D70(a1, v33, v13, &v49, *(double *)v36.m128i_i64, *(double *)v37.m128i_i64, 0.0, a7, a8, a9, a10);
    if ( v50 )
      qfree(v50);
    v34 -= 40;
    if ( !v33 )
      break;
    --v33;
  }
  while ( (__int64)(i - a1) > 40 )
  {
    v38 = *(_QWORD *)(i - 24);
    i -= 40LL;
    *(_QWORD *)(i + 16) = 0;
    v39 = _mm_loadu_si128((const __m128i *)(i + 24));
    *(_OWORD *)(i + 24) = 0;
    v40 = _mm_loadu_si128((const __m128i *)i);
    *(_QWORD *)i = *(_QWORD *)a1;
    *(_QWORD *)(i + 8) = *(_QWORD *)(a1 + 8);
    v41 = *(_QWORD *)(a1 + 16);
    v42 = _mm_loadu_si128((const __m128i *)(a1 + 24));
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)(a1 + 24) = 0;
    v43 = *(_QWORD *)(i + 16);
    if ( v43 )
    {
      *(_QWORD *)(i + 24) = 0;
      v47 = v39;
      v46 = v40;
      v45 = v42;
      qfree(v43);
      v39 = _mm_load_si128(&v47);
      v40 = _mm_load_si128(&v46);
      v42 = _mm_load_si128(&v45);
    }
    *(_QWORD *)(i + 16) = v41;
    *(__m128i *)(i + 24) = v42;
    v50 = v38;
    v49 = v40;
    v51 = v39;
    sub_3A2D70(
      a1,
      0,
      0xCCCCCCCCCCCCCCCDLL * ((__int64)(i - a1) >> 3),
      &v49,
      0.0,
      *(double *)v39.m128i_i64,
      *(double *)v40.m128i_i64,
      *(double *)v42.m128i_i64,
      a8,
      a9,
      a10);
    if ( v50 )
      qfree(v50);
  }
  return v52 - __readfsqword(0x28u);
}
