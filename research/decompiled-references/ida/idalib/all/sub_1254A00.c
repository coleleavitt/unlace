__int64 __fastcall sub_1254A00(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  const __m128i **v5; // r14
  __int64 v6; // r12
  signed __int64 v7; // r13
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __m128i v10; // xmm0
  const __m128i *v11; // r9
  const __m128i *v12; // rsi
  const __m128i *v13; // rdx
  unsigned __int64 v14; // rcx
  __m128i v15; // xmm3
  __int64 *v16; // rbx
  __int64 *v17; // r12
  unsigned int v18; // r14d
  size_t v19; // rdx
  __int64 *v20; // r13
  void *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 *v28; // r13
  void *v29; // rdi
  __int64 *v30; // rbp
  __int64 *v31; // rbx
  void *v32; // rdi
  __int64 *v34; // rbp
  void *v35; // rdi
  char v36; // [rsp+4h] [rbp-54h]
  __m128i v37; // [rsp+8h] [rbp-50h] BYREF
  __int64 v38[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 128);
  v5 = *(const __m128i ***)(a1 + 64);
  v36 = a2;
  v6 = *(_QWORD *)(a1 + 104);
  v38[0] = v4;
  if ( v6 == *(_QWORD *)(a1 + 112) )
  {
    sub_1251800(a1 + 96, (char *)v6, v38, v5);
    v16 = *(__int64 **)(a1 + 104);
  }
  else
  {
    v7 = (char *)v5[1] - (char *)*v5;
    *(_QWORD *)v6 = v4;
    *(_OWORD *)(v6 + 8) = 0;
    v8 = v6;
    *(_QWORD *)(v6 + 24) = 0;
    v9 = 0xAAAAAAAAAAAAAAABLL * (v7 >> 3);
    if ( v9 )
    {
      if ( v9 > 0xAAAAAAAAAAAAAAALL )
        std::__throw_bad_alloc();
      v9 = operator new(v7);
      v8 = *(_QWORD *)(a1 + 104);
    }
    v37.m128i_i64[0] = v9;
    v10 = _mm_loadl_epi64(&v37);
    *(_QWORD *)(v6 + 24) = v9 + v7;
    *(__m128i *)(v6 + 8) = _mm_unpacklo_epi64(v10, v10);
    v11 = v5[1];
    v12 = *v5;
    if ( v11 != *v5 )
    {
      v13 = *v5;
      v14 = v9;
      do
      {
        v15 = _mm_loadu_si128(v13);
        v13 = (const __m128i *)((char *)v13 + 24);
        v14 += 24LL;
        *(__m128i *)(v14 - 24) = v15;
        *(_QWORD *)(v14 - 8) = v13[-1].m128i_i64[1];
      }
      while ( v11 != v13 );
      v9 += 8 * ((unsigned __int64)((char *)&v11[-2].m128i_u64[1] - (char *)v12) >> 3) + 24;
    }
    v16 = (__int64 *)(v8 + 32);
    *(_QWORD *)(v6 + 16) = v9;
    *(_QWORD *)(a1 + 104) = v16;
  }
  v17 = *(__int64 **)(a1 + 96);
  *(_BYTE *)(a1 + 140) = 0;
  if ( v16 != v17 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = 0xAAAAAAAAAAAAAAABLL
          * ((__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 64LL) - *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL)) >> 4);
      if ( v19 )
        memset(*(void **)(a1 + 120), 0, v19);
      *(_QWORD *)(a1 + 112) = 0;
      v20 = v17;
      *(_OWORD *)(a1 + 96) = 0;
      do
      {
        *(_QWORD *)(a1 + 16) = 0;
        v21 = *(void **)a1;
        *(_OWORD *)a1 = 0;
        *(_QWORD *)a1 = v20[1];
        v22 = v20[2];
        v20[1] = 0;
        v23 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = v22;
        v24 = v20[3];
        v20[2] = v23;
        v25 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 16) = v24;
        v20[3] = v25;
        if ( v21 )
          operator delete(v21);
        v26 = *v20;
        v20 += 4;
        sub_12543F0(a1, a2, v26);
      }
      while ( v16 != v20 );
      if ( (_BYTE)a2 == 1 )
        LOBYTE(v18) = *(_BYTE *)(a1 + 140) | v18;
      v27 = *(_QWORD *)(a1 + 24);
      if ( v27 == *(_QWORD *)(a1 + 40) )
        break;
      v28 = v17;
      *(_QWORD *)(a1 + 24) = v27 + 1;
      do
      {
        while ( 1 )
        {
          v29 = (void *)v28[1];
          if ( !v29 )
            break;
          operator delete(v29);
          v28 += 4;
          if ( v16 == v28 )
            goto LABEL_24;
        }
        v28 += 4;
      }
      while ( v16 != v28 );
LABEL_24:
      if ( v17 )
        operator delete(v17);
      v16 = *(__int64 **)(a1 + 104);
      v17 = *(__int64 **)(a1 + 96);
      *(_BYTE *)(a1 + 140) = 0;
      if ( v16 == v17 )
      {
        v30 = v17;
        goto LABEL_28;
      }
    }
    v34 = v17;
    do
    {
      while ( 1 )
      {
        v35 = (void *)v34[1];
        if ( !v35 )
          break;
        operator delete(v35);
        v34 += 4;
        if ( v16 == v34 )
          goto LABEL_43;
      }
      v34 += 4;
    }
    while ( v16 != v34 );
LABEL_43:
    if ( v17 )
      operator delete(v17);
    v17 = *(__int64 **)(a1 + 96);
    v30 = *(__int64 **)(a1 + 104);
    if ( v36 )
      goto LABEL_30;
    goto LABEL_29;
  }
  v30 = v17;
  v18 = 0;
LABEL_28:
  if ( !v36 )
  {
LABEL_29:
    v18 = *(unsigned __int8 *)(a1 + 140);
LABEL_30:
    if ( v17 != v30 )
    {
      v31 = v17;
      do
      {
        while ( 1 )
        {
          v32 = (void *)v31[1];
          if ( !v32 )
            break;
          operator delete(v32);
          v31 += 4;
          if ( v31 == v30 )
            goto LABEL_34;
        }
        v31 += 4;
      }
      while ( v31 != v30 );
LABEL_34:
      *(_QWORD *)(a1 + 104) = v17;
    }
  }
  return v18;
}
