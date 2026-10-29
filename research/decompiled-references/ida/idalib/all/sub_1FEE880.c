__int64 __fastcall sub_1FEE880(__int64 a1, __m128i *a2)
{
  __m128i *v2; // rax
  __m128i v3; // xmm0
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 *v8; // rdx
  __int64 v9; // rax
  char *v11; // r12
  unsigned __int64 v13; // rdx
  __m128i *v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  char *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r13
  unsigned __int64 v25; // r12
  __int64 v26; // rax
  const void *v27; // rsi
  __int64 v28; // r15
  __int64 *v29; // r14
  __int64 v30; // rdx
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rax
  char *v34; // r12
  size_t v35; // rdx
  double v36[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = *(__m128i **)(a1 + 48);
  if ( v2 == (__m128i *)(*(_QWORD *)(a1 + 64) - 40LL) )
  {
    v11 = *(char **)(a1 + 72);
    v13 = *(_QWORD *)(a1 + 8);
    if ( v13 - ((__int64)&v11[-*(_QWORD *)a1] >> 3) <= 1 )
    {
      v21 = *(char **)(a1 + 40);
      v22 = (v11 - v21) >> 3;
      v23 = v22 + 2;
      v24 = v22 + 1;
      if ( v13 > 2 * (v22 + 2) )
      {
        v34 = v11 + 8;
        v31 = v24;
        v29 = (__int64 *)(*(_QWORD *)a1 + 8 * ((v13 - v23) >> 1));
        v35 = v34 - v21;
        if ( v21 <= (char *)v29 )
        {
          if ( v34 != v21 )
            memmove((char *)v29 + v31 * 8 - v35, v21, v35);
        }
        else if ( v34 != v21 )
        {
          memmove(v29, v21, v35);
        }
      }
      else
      {
        if ( v13 )
        {
          v25 = 2 * v13 + 2;
          if ( v25 > 0x1FFFFFFFFFFFFFFFLL )
            std::__throw_bad_alloc();
        }
        else
        {
          v25 = 3;
        }
        v26 = operator new(8 * v25);
        v27 = *(const void **)(a1 + 40);
        v28 = v26;
        v29 = (__int64 *)(v26 + 8 * ((v25 - v23) >> 1));
        v30 = *(_QWORD *)(a1 + 72) + 8LL;
        if ( (const void *)v30 != v27 )
          memmove(v29, v27, v30 - (_QWORD)v27);
        v31 = v24;
        operator delete(*(void **)a1);
        *(_QWORD *)a1 = v28;
        *(_QWORD *)(a1 + 8) = v25;
      }
      v32 = *v29;
      v11 = (char *)&v29[v31 - 1];
      *(_QWORD *)(a1 + 40) = v29;
      *(_QWORD *)(a1 + 72) = v11;
      *(_QWORD *)&v36[0] = v32 + 480;
      *(__m128 *)(a1 + 24) = _mm_loadh_ps(v36);
      v33 = *(_QWORD *)v11;
      *(_QWORD *)(a1 + 56) = *(_QWORD *)v11;
      *(_QWORD *)(a1 + 64) = v33 + 480;
    }
    *((_QWORD *)v11 + 1) = operator new(0x1E0u);
    v14 = *(__m128i **)(a1 + 48);
    v14[1].m128i_i64[0] = 0;
    v15 = _mm_loadu_si128(a2);
    *a2 = _mm_loadu_si128(v14);
    v16 = v14[1].m128i_i64[0];
    *v14 = v15;
    v17 = a2[1].m128i_i64[0];
    a2[1].m128i_i64[0] = v16;
    v18 = v14[1].m128i_i64[1];
    v14[1].m128i_i64[0] = v17;
    v19 = a2[1].m128i_i64[1];
    a2[1].m128i_i64[1] = v18;
    v14[1].m128i_i64[1] = v19;
    v14[2].m128i_i64[0] = a2[2].m128i_i64[0];
    v8 = (__int64 *)(*(_QWORD *)(a1 + 72) + 8LL);
    v20 = *v8;
    *(_QWORD *)(a1 + 72) = v8;
    *(_QWORD *)(a1 + 56) = v20;
    *(_QWORD *)(a1 + 64) = v20 + 480;
    *(_QWORD *)(a1 + 48) = v20;
    goto LABEL_6;
  }
  v2[1].m128i_i64[0] = 0;
  v3 = _mm_loadu_si128(a2);
  *a2 = _mm_loadu_si128(v2);
  v4 = v2[1].m128i_i64[0];
  *v2 = v3;
  v5 = a2[1].m128i_i64[0];
  a2[1].m128i_i64[0] = v4;
  v6 = v2[1].m128i_i64[1];
  v2[1].m128i_i64[0] = v5;
  v7 = a2[1].m128i_i64[1];
  a2[1].m128i_i64[1] = v6;
  v2[1].m128i_i64[1] = v7;
  v2[2].m128i_i64[0] = a2[2].m128i_i64[0];
  v8 = *(__int64 **)(a1 + 72);
  v9 = *(_QWORD *)(a1 + 48) + 40LL;
  *(_QWORD *)(a1 + 48) = v9;
  if ( v9 == *(_QWORD *)(a1 + 56) )
LABEL_6:
    v9 = *(v8 - 1) + 480;
  return v9 - 40;
}
