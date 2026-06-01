__int64 __fastcall sub_21C6ED0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 *v5; // r12
  void **v6; // rbx
  void **v7; // rbp
  __int64 v8; // r15
  unsigned __int64 v9; // r13
  __m128i *v10; // rax
  _BYTE *v11; // rax
  _BYTE *v12; // rsi
  char *v13; // r15
  signed __int64 v14; // r9
  char *v15; // rax
  char *v16; // r10
  size_t v17; // r11
  __m128i v18; // xmm0
  char *v19; // rax
  __m128i *v20; // rdx
  void **v21; // rax
  __int64 v22; // rdi
  void *v23; // rsi
  __int64 v24; // rdi
  void *v25; // rsi
  unsigned __int64 v26; // r15
  __m128i *v27; // r15
  const __m128i *v28; // rax
  unsigned __int64 v29; // rsi
  __m128i *v30; // rdx
  __m128i v31; // xmm1
  __m128i v32; // xmm2
  __m128i v33; // xmm3
  unsigned __int64 v34; // rcx
  __int64 *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdx
  void **i; // r12
  __m128i *v39; // rax
  __int64 result; // rax
  __m128 v41; // xmm0
  __m128i *v42; // [rsp+0h] [rbp-58h] BYREF
  __m128i v43; // [rsp+8h] [rbp-50h] BYREF
  __int64 v44; // [rsp+18h] [rbp-40h]

  v3 = a2;
  v5 = (__int64 *)a2;
  v6 = *(void ***)(a1 + 8);
  v7 = *(void ***)a1;
  v8 = a2 - *(_QWORD *)a1;
  if ( !(0xAAAAAAAAAAAAAAABLL * (((__int64)v6 - *(_QWORD *)a1) >> 3)) )
  {
    v9 = 1;
    goto LABEL_33;
  }
  v9 = 0x5555555555555556LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  if ( 0xAAAAAAAAAAAAAAABLL * (((__int64)v6 - *(_QWORD *)a1) >> 3) > 0x5555555555555556LL
                                                                   * (((__int64)v6 - *(_QWORD *)a1) >> 3)
    || v9 > 0xAAAAAAAAAAAAAAALL )
  {
    v9 = -16;
LABEL_4:
    v43.m128i_i64[1] = a3;
    v43.m128i_i64[0] = a2;
    v10 = (__m128i *)operator new(v9);
    a3 = v43.m128i_i64[1];
    v3 = a2;
    v42 = v10;
    goto LABEL_5;
  }
  v42 = nullptr;
  if ( v9 )
  {
LABEL_33:
    v9 *= 24LL;
    goto LABEL_4;
  }
LABEL_5:
  v11 = *(_BYTE **)(a3 + 8);
  v12 = *(_BYTE **)a3;
  v13 = &v42->m128i_i8[v8];
  *(_OWORD *)v13 = 0;
  v14 = v11 - v12;
  *((_QWORD *)v13 + 2) = 0;
  if ( (v11 - v12) >> 4 )
  {
    if ( (unsigned __int64)(v14 >> 4) > 0xFFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v44 = a3;
    v43.m128i_i64[1] = v3;
    v43.m128i_i64[0] = v11 - v12;
    v15 = (char *)operator new(v14);
    v3 = v43.m128i_i64[1];
    v16 = v15;
    v14 = v43.m128i_i64[0];
    v11 = *(_BYTE **)(v44 + 8);
    v12 = *(_BYTE **)v44;
    v17 = (size_t)&v11[-*(_QWORD *)v44];
  }
  else
  {
    v17 = v11 - v12;
    v16 = nullptr;
  }
  v43.m128i_i64[0] = (__int64)v16;
  v18 = _mm_loadl_epi64(&v43);
  *((_QWORD *)v13 + 2) = &v16[v14];
  *(__m128i *)v13 = _mm_unpacklo_epi64(v18, v18);
  if ( v11 != v12 )
  {
    v43.m128i_i64[1] = v3;
    v43.m128i_i64[0] = v17;
    v19 = (char *)memmove(v16, v12, v17);
    v3 = v43.m128i_i64[1];
    v17 = v43.m128i_i64[0];
    v16 = v19;
  }
  *((_QWORD *)v13 + 1) = &v16[v17];
  if ( (void **)v3 == v7 )
  {
    v26 = (unsigned __int64)v42;
  }
  else
  {
    v20 = v42;
    v21 = v7;
    do
    {
      *v20 = 0;
      v21 += 3;
      v20 = (__m128i *)((char *)v20 + 24);
      v20[-1].m128i_i64[1] = 0;
      v20[-2].m128i_i64[1] = (__int64)*(v21 - 3);
      v22 = (__int64)*(v21 - 2);
      *(v21 - 3) = nullptr;
      v23 = (void *)v20[-1].m128i_i64[0];
      v20[-1].m128i_i64[0] = v22;
      v24 = (__int64)*(v21 - 1);
      *(v21 - 2) = v23;
      v25 = (void *)v20[-1].m128i_i64[1];
      v20[-1].m128i_i64[1] = v24;
      *(v21 - 1) = v25;
    }
    while ( (void **)v3 != v21 );
    v26 = (unsigned __int64)&v42[1].m128i_u64[((unsigned __int64)(v3 - 24 - (_QWORD)v7) >> 3) + 1];
  }
  v27 = (__m128i *)(v26 + 24);
  if ( (void **)v3 != v6 )
  {
    v28 = (const __m128i *)v3;
    v29 = ((0xAAAAAAAAAAAAAABLL * (((unsigned __int64)v6 - v3 - 24) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 1;
    if ( ((0xAAAAAAAAAAAAAABLL * (((unsigned __int64)v6 - v3 - 24) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) != 0 )
    {
      v30 = v27;
      do
      {
        v31 = _mm_loadu_si128(v28);
        v32 = _mm_loadu_si128(v28 + 1);
        *v28 = 0;
        v28 += 3;
        v33 = _mm_loadu_si128(v28 - 1);
        v28[-2] = 0;
        v30 += 3;
        v28[-1] = 0;
        v30[-3] = v31;
        v30[-2] = v32;
        v30[-1] = v33;
      }
      while ( v28 != (const __m128i *)(v3 + 48 * (v29 >> 1)) );
      v34 = 3 * (v29 & 0xFFFFFFFFFFFFFFFELL);
      v35 = &v27->m128i_i64[v34];
      v5 = (__int64 *)(v3 + v34 * 8);
      if ( v29 == (v29 & 0xFFFFFFFFFFFFFFFELL) )
        goto LABEL_20;
    }
    else
    {
      v35 = (__int64 *)v27;
    }
    *v35 = *v5;
    v36 = v5[1];
    *v5 = 0;
    v35[1] = v36;
    v37 = v5[2];
    v5[1] = 0;
    v35[2] = v37;
    v5[2] = 0;
LABEL_20:
    v27 = (__m128i *)((char *)v27 + 24 * v29);
  }
  for ( i = v7; i != v6; i += 3 )
  {
    while ( *i )
    {
      operator delete(*i);
      i += 3;
      if ( v6 == i )
        goto LABEL_24;
    }
  }
LABEL_24:
  if ( v7 )
    operator delete(v7);
  v39 = v42;
  v42 = v27;
  result = (__int64)v39->m128i_i64 + v9;
  v41 = _mm_loadh_ps((const double *)&v42);
  *(_QWORD *)(a1 + 16) = result;
  *(__m128 *)a1 = v41;
  return result;
}
