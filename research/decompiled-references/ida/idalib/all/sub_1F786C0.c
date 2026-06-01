__int64 __fastcall sub_1F786C0(__int64 a1, __int64 *a2)
{
  char *v3; // rbp
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax
  __m128i v10; // xmm0
  char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r13
  unsigned __int64 v15; // rbp
  __int64 v16; // rax
  const void *v17; // rsi
  __int64 v18; // r15
  __int64 *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rax
  char *v24; // rbp
  size_t v25; // rdx
  __m128i v26[4]; // [rsp+8h] [rbp-40h] BYREF

  v3 = *(char **)(a1 + 72);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 - ((__int64)&v3[-*(_QWORD *)a1] >> 3) <= 1 )
  {
    v11 = *(char **)(a1 + 40);
    v12 = (v3 - v11) >> 3;
    v13 = v12 + 2;
    v14 = v12 + 1;
    if ( v4 > 2 * (v12 + 2) )
    {
      v24 = v3 + 8;
      v21 = v14;
      v19 = (__int64 *)(*(_QWORD *)a1 + 8 * ((v4 - v13) >> 1));
      v25 = v24 - v11;
      if ( v11 <= (char *)v19 )
      {
        if ( v11 != v24 )
          memmove((char *)v19 + v21 * 8 - v25, v11, v25);
      }
      else if ( v11 != v24 )
      {
        memmove(v19, v11, v25);
      }
    }
    else
    {
      if ( v4 )
      {
        v15 = 2 * v4 + 2;
        if ( v15 > 0x1FFFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
      }
      else
      {
        v15 = 3;
      }
      v16 = operator new(8 * v15);
      v17 = *(const void **)(a1 + 40);
      v18 = v16;
      v19 = (__int64 *)(v16 + 8 * ((v15 - v13) >> 1));
      v20 = *(_QWORD *)(a1 + 72) + 8LL;
      if ( (const void *)v20 != v17 )
        memmove(v19, v17, v20 - (_QWORD)v17);
      v21 = v14;
      operator delete(*(void **)a1);
      *(_QWORD *)a1 = v18;
      *(_QWORD *)(a1 + 8) = v15;
    }
    v22 = *v19;
    v3 = (char *)&v19[v21 - 1];
    *(_QWORD *)(a1 + 40) = v19;
    *(_QWORD *)(a1 + 72) = v3;
    v26[0].m128i_i64[0] = v22 + 512;
    *(__m128 *)(a1 + 24) = _mm_loadh_ps((const double *)v26[0].m128i_i64);
    v23 = *(_QWORD *)v3;
    *(_QWORD *)(a1 + 56) = *(_QWORD *)v3;
    *(_QWORD *)(a1 + 64) = v23 + 512;
  }
  v5 = operator new(0x200u);
  v6 = *a2;
  *((_QWORD *)v3 + 1) = v5;
  **(_QWORD **)(a1 + 48) = v6;
  v7 = *(_QWORD *)(a1 + 72);
  v8 = *(_QWORD *)(v7 + 8);
  result = v7 + 8;
  v26[0].m128i_i64[0] = v8;
  v10 = _mm_loadl_epi64(v26);
  *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(v10, v10);
  v26[0].m128i_i64[0] = result;
  *(__m128 *)(a1 + 64) = _mm_loadh_ps((const double *)v26[0].m128i_i64);
  return result;
}
