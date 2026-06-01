unsigned __int64 __fastcall sub_1251800(__int64 a1, char *a2, __int64 *a3, const __m128i **a4)
{
  char *v5; // rbp
  char *v6; // rbx
  char *v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rax
  const __m128i *v11; // r8
  const __m128i *v12; // r9
  __int64 v13; // rax
  char *v14; // r14
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __m128i v17; // xmm0
  const __m128i *v18; // rdx
  unsigned __int64 v19; // rcx
  __m128i v20; // xmm1
  unsigned __int64 v21; // rdx
  char *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // r14
  char *v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  char *i; // r15
  void *v36; // rdi
  unsigned __int64 v37; // rax
  unsigned __int64 result; // rax
  __m128 v39; // xmm0
  unsigned __int64 v40; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int128 v41; // [rsp+10h] [rbp-48h] BYREF

  v5 = *(char **)(a1 + 8);
  v6 = *(char **)a1;
  v7 = &a2[-*(_QWORD *)a1];
  v8 = (__int64)&v5[-*(_QWORD *)a1] >> 5;
  if ( !v8 )
  {
    v9 = 1;
    goto LABEL_32;
  }
  v9 = 2 * v8;
  if ( v8 > 2 * v8 || v9 > 0x7FFFFFFFFFFFFFFLL )
  {
    v9 = -32;
LABEL_4:
    v41 = __PAIR128__((unsigned __int64)a4, (unsigned __int64)a3);
    v10 = operator new(v9);
    a4 = *((const __m128i ***)&v41 + 1);
    a3 = (__int64 *)v41;
    v40 = v10;
    goto LABEL_5;
  }
  v40 = 0;
  if ( v9 )
  {
LABEL_32:
    v9 *= 32LL;
    goto LABEL_4;
  }
LABEL_5:
  v11 = a4[1];
  v12 = *a4;
  v13 = *a3;
  v14 = &v7[v40];
  *(_OWORD *)(v14 + 8) = 0;
  v15 = (char *)v11 - (char *)v12;
  *(_QWORD *)v14 = v13;
  *((_QWORD *)v14 + 3) = 0;
  v16 = 0xAAAAAAAAAAAAAAABLL * (((char *)v11 - (char *)v12) >> 3);
  if ( v16 )
  {
    if ( v16 > 0xAAAAAAAAAAAAAAALL )
      std::__throw_bad_alloc();
    *((_QWORD *)&v41 + 1) = a4;
    *(_QWORD *)&v41 = (char *)v11 - (char *)v12;
    v16 = operator new(v15);
    v15 = v41;
    v11 = *(const __m128i **)(*((_QWORD *)&v41 + 1) + 8LL);
    v12 = **((const __m128i ***)&v41 + 1);
  }
  *(_QWORD *)&v41 = v16;
  v17 = _mm_loadl_epi64((const __m128i *)&v41);
  *((_QWORD *)v14 + 3) = v16 + v15;
  *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64(v17, v17);
  if ( v12 != v11 )
  {
    v18 = v12;
    v19 = v16;
    do
    {
      v20 = _mm_loadu_si128(v18);
      v18 = (const __m128i *)((char *)v18 + 24);
      v19 += 24LL;
      *(__m128i *)(v19 - 24) = v20;
      *(_QWORD *)(v19 - 8) = v18[-1].m128i_i64[1];
    }
    while ( v11 != v18 );
    v16 += 8 * ((unsigned __int64)((char *)&v11[-2].m128i_u64[1] - (char *)v12) >> 3) + 24;
  }
  *((_QWORD *)v14 + 2) = v16;
  if ( a2 == v6 )
  {
    v28 = v40;
  }
  else
  {
    v21 = v40;
    v22 = v6;
    do
    {
      v23 = *(_QWORD *)v22;
      *(_OWORD *)(v21 + 8) = 0;
      v22 += 32;
      v21 += 32LL;
      *(_QWORD *)(v21 - 8) = 0;
      *(_QWORD *)(v21 - 32) = v23;
      *(_QWORD *)(v21 - 24) = *((_QWORD *)v22 - 3);
      v24 = *((_QWORD *)v22 - 2);
      *((_QWORD *)v22 - 3) = 0;
      v25 = *(_QWORD *)(v21 - 16);
      *(_QWORD *)(v21 - 16) = v24;
      v26 = *((_QWORD *)v22 - 1);
      *((_QWORD *)v22 - 2) = v25;
      v27 = *(_QWORD *)(v21 - 8);
      *(_QWORD *)(v21 - 8) = v26;
      *((_QWORD *)v22 - 1) = v27;
    }
    while ( a2 != v22 );
    v28 = v40 + ((a2 - 32 - v6) & 0xFFFFFFFFFFFFFFE0LL) + 32;
  }
  v29 = v28 + 32;
  if ( a2 != v5 )
  {
    v30 = a2;
    v31 = v29;
    do
    {
      v32 = *(_QWORD *)v30;
      v30 += 32;
      v31 += 32LL;
      *(_QWORD *)(v31 - 32) = v32;
      *(_QWORD *)(v31 - 24) = *((_QWORD *)v30 - 3);
      v33 = *((_QWORD *)v30 - 2);
      *(_OWORD *)(v30 - 24) = 0;
      *(_QWORD *)(v31 - 16) = v33;
      v34 = *((_QWORD *)v30 - 1);
      *((_QWORD *)v30 - 1) = 0;
      *(_QWORD *)(v31 - 8) = v34;
    }
    while ( v5 != v30 );
    v29 += ((v5 - a2 - 32) & 0xFFFFFFFFFFFFFFE0LL) + 32;
  }
  for ( i = v6; i != v5; i += 32 )
  {
    while ( 1 )
    {
      v36 = *((void **)i + 1);
      if ( !v36 )
        break;
      operator delete(v36);
      i += 32;
      if ( v5 == i )
        goto LABEL_23;
    }
  }
LABEL_23:
  if ( v6 )
    operator delete(v6);
  v37 = v40;
  v40 = v29;
  result = v9 + v37;
  v39 = _mm_loadh_ps((const double *)&v40);
  *(_QWORD *)(a1 + 16) = result;
  *(__m128 *)a1 = v39;
  return result;
}
