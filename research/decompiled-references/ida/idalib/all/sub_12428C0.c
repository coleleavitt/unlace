void __fastcall sub_12428C0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 *v5; // rdi
  __m128 v6; // xmm2
  __int64 v7; // rax
  __m128i v8; // xmm2
  __m128i si128; // xmm0
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm3
  __m128i *v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  const char *v17; // rbx
  const char *v18; // r12
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdx
  void **v22; // rbx
  void **v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  const char *v28; // rbx
  __int64 v29; // r14
  __int64 v30; // rbp
  const char *v31; // [rsp+8h] [rbp-250h] BYREF
  __m128 v32; // [rsp+10h] [rbp-248h] BYREF
  __m128i v33; // [rsp+20h] [rbp-238h] BYREF
  __m128 v34; // [rsp+30h] [rbp-228h] BYREF
  __m128i v35; // [rsp+40h] [rbp-218h] BYREF
  __m128i v36[32]; // [rsp+50h] [rbp-208h] BYREF

  v5 = *(__int64 **)(a1 + 2384);
  v31 = "-vectorize-loops=false";
  v6 = _mm_loadh_ps((const double *)&v31);
  v31 = "-vectorize-slp=false";
  v7 = *v5;
  v33 = (__m128i)v6;
  v32 = _mm_loadh_ps((const double *)&v31);
  (*(void (__fastcall **)(__int64 *))(v7 + 568))(v5);
  v8 = _mm_load_si128(&v33);
  v31 = "-fcuda-is-device";
  si128 = _mm_load_si128((const __m128i *)&v32);
  v10 = *((unsigned int *)a3 + 3);
  v31 = "-fcuda-allow-variadic-functions";
  v11 = *((unsigned int *)a3 + 2);
  v35 = v8;
  v36[0] = si128;
  v34 = _mm_loadh_ps((const double *)&v31);
  if ( v11 + 6 > v10 )
  {
    sub_2237220(a3, a3 + 2, v11 + 6, 8);
    v11 = *((unsigned int *)a3 + 2);
  }
  v12 = *a3;
  v13 = _mm_load_si128((const __m128i *)&v34);
  v32.m128_u64[0] = (unsigned __int64)&v34;
  v14 = (__m128i *)(v12 + 8 * v11);
  *v14 = v13;
  v14[1] = _mm_load_si128(&v35);
  v14[2] = _mm_load_si128(v36);
  *((_DWORD *)a3 + 2) += 6;
  v34.m128_u64[0] = 0x79500000797LL;
  v15 = sub_21B6DA0(a2, &v34, 2);
  v16 = a2[1];
  v35.m128i_i64[0] = 0x79500000797LL;
  v17 = (const char *)(v16 + 8LL * (unsigned int)v15);
  v18 = (const char *)(v16 + 8 * HIDWORD(v15));
  v31 = v18;
  v34 = _mm_loadh_ps((const double *)&v31);
  if ( v17 == v18 )
    goto LABEL_8;
  while ( 1 )
  {
    v19 = *(_QWORD *)v17;
    if ( *(_QWORD *)v17 )
    {
      if ( (unsigned __int8)sub_21B9810(*(_QWORD *)v17, 1943) || (unsigned __int8)sub_21B9810(v19, 1941) )
        break;
    }
    v17 += 8;
    v34.m128_u64[0] = (unsigned __int64)v17;
    if ( v18 == v17 )
      goto LABEL_8;
  }
  v31 = v18;
  v35.m128i_i64[0] = 0x79500000797LL;
  v34 = _mm_loadh_ps((const double *)&v31);
  if ( v18 == v17 )
  {
LABEL_8:
    v20 = *((unsigned int *)a3 + 2);
    if ( v20 + 2 > (unsigned __int64)*((unsigned int *)a3 + 3) )
    {
      sub_2237220(a3, a3 + 2, v20 + 2, 8);
      v20 = *((unsigned int *)a3 + 2);
    }
    v21 = *a3;
    v31 = "-fapply-global-visibility-to-externs";
    *(__m128 *)(v21 + 8 * v20) = _mm_loadh_ps((const double *)&v31);
    *((_DWORD *)a3 + 2) += 2;
  }
  else
  {
    do
    {
      v27 = *(_QWORD *)(*(_QWORD *)v17 + 16LL);
      if ( !v27 )
        v27 = *(_QWORD *)v17;
      v28 = v17 + 8;
      *(_BYTE *)(v27 + 44) |= 1u;
      v34.m128_u64[0] = (unsigned __int64)v28;
      if ( v28 == v18 )
        break;
      while ( 1 )
      {
        v29 = *(_QWORD *)v28;
        if ( *(_QWORD *)v28 )
        {
          if ( (unsigned __int8)sub_21B9810(*(_QWORD *)v28, 1943) || (unsigned __int8)sub_21B9810(v29, 1941) )
            break;
        }
        v28 += 8;
        v34.m128_u64[0] = (unsigned __int64)v28;
        if ( v18 == v28 )
          goto LABEL_11;
      }
      v17 = (const char *)v34.m128_u64[0];
    }
    while ( v18 != (const char *)v34.m128_u64[0] );
  }
LABEL_11:
  sub_1240C40(v32.m128_u64[0], a1, (__int64)a2);
  v22 = (void **)(v34.m128_u64[0] + 40LL * v34.m128_u32[2]);
  if ( (void **)v34.m128_u64[0] != v22 )
  {
    v23 = (void **)v34.m128_u64[0];
    do
    {
      v25 = (*(__int64 (__fastcall **)(_QWORD *, void *, void *))(*a2 + 16LL))(a2, *v23, v23[1]);
      v26 = *((unsigned int *)a3 + 2);
      if ( v26 + 2 <= (unsigned __int64)*((unsigned int *)a3 + 3) )
      {
        v24 = *a3;
      }
      else
      {
        v31 = (const char *)v25;
        sub_2237220(a3, a3 + 2, v26 + 2, 8);
        v26 = *((unsigned int *)a3 + 2);
        v24 = *a3;
        v25 = (__int64)v31;
      }
      *(_QWORD *)(*a3 + 8 * v26) = "-mlink-builtin-bitcode";
      v23 += 5;
      *(_QWORD *)(v24 + 8 * v26 + 8) = v25;
      *((_DWORD *)a3 + 2) += 2;
    }
    while ( v22 != v23 );
    v30 = v34.m128_u64[0];
    v22 = (void **)(v34.m128_u64[0] + 40LL * v34.m128_u32[2]);
    if ( (void **)v34.m128_u64[0] != v22 )
    {
      do
      {
        while ( 1 )
        {
          v22 -= 5;
          if ( *v22 == v22 + 2 )
            break;
          operator delete(*v22);
          if ( (void **)v30 == v22 )
          {
            v22 = (void **)v34.m128_u64[0];
            goto LABEL_32;
          }
        }
      }
      while ( (void **)v30 != v22 );
      v22 = (void **)v34.m128_u64[0];
    }
  }
LABEL_32:
  if ( v22 != (void **)(v32.m128_u64[0] + 16) )
    free(v22);
}
