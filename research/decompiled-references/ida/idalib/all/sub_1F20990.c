__int64 __fastcall sub_1F20990(__int64 a1, const __m128i *a2)
{
  char *v3; // rbp
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __m128i v6; // xmm1
  __m128i *v7; // rax
  __int64 *v8; // rdx
  __int64 result; // rax
  char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r12
  unsigned __int64 v14; // rbp
  __int64 v15; // rax
  const void *v16; // rsi
  __int64 v17; // r15
  __int64 *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rax
  char *v23; // rbp
  size_t v24; // rdx
  double v25[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = *(char **)(a1 + 72);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 - ((__int64)&v3[-*(_QWORD *)a1] >> 3) <= 1 )
  {
    v10 = *(char **)(a1 + 40);
    v11 = (v3 - v10) >> 3;
    v12 = v11 + 2;
    v13 = v11 + 1;
    if ( v4 > 2 * (v11 + 2) )
    {
      v23 = v3 + 8;
      v20 = v13;
      v18 = (__int64 *)(*(_QWORD *)a1 + 8 * ((v4 - v12) >> 1));
      v24 = v23 - v10;
      if ( v10 <= (char *)v18 )
      {
        if ( v10 != v23 )
          memmove((char *)v18 + v20 * 8 - v24, v10, v24);
      }
      else if ( v10 != v23 )
      {
        memmove(v18, v10, v24);
      }
    }
    else
    {
      if ( v4 )
      {
        v14 = 2 * v4 + 2;
        if ( v14 > 0x1FFFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
      }
      else
      {
        v14 = 3;
      }
      v15 = operator new(8 * v14);
      v16 = *(const void **)(a1 + 40);
      v17 = v15;
      v18 = (__int64 *)(v15 + 8 * ((v14 - v12) >> 1));
      v19 = *(_QWORD *)(a1 + 72) + 8LL;
      if ( (const void *)v19 != v16 )
        memmove(v18, v16, v19 - (_QWORD)v16);
      v20 = v13;
      operator delete(*(void **)a1);
      *(_QWORD *)a1 = v17;
      *(_QWORD *)(a1 + 8) = v14;
    }
    v21 = *v18;
    v3 = (char *)&v18[v20 - 1];
    *(_QWORD *)(a1 + 40) = v18;
    *(_QWORD *)(a1 + 72) = v3;
    *(_QWORD *)&v25[0] = v21 + 504;
    *(__m128 *)(a1 + 24) = _mm_loadh_ps(v25);
    v22 = *(_QWORD *)v3;
    *(_QWORD *)(a1 + 56) = *(_QWORD *)v3;
    *(_QWORD *)(a1 + 64) = v22 + 504;
  }
  v5 = operator new(0x1F8u);
  v6 = _mm_loadu_si128(a2);
  *((_QWORD *)v3 + 1) = v5;
  v7 = *(__m128i **)(a1 + 48);
  *v7 = v6;
  v7[1].m128i_i64[0] = a2[1].m128i_i64[0];
  v8 = (__int64 *)(*(_QWORD *)(a1 + 72) + 8LL);
  result = *v8;
  *(_QWORD *)(a1 + 72) = v8;
  *(_QWORD *)(a1 + 56) = result;
  *(_QWORD *)(a1 + 64) = result + 504;
  *(_QWORD *)(a1 + 48) = result;
  return result;
}
