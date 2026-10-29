__m128i *__fastcall sub_224EB80(__m128i **a1, const __m128i *a2, __int64 a3, __int64 a4)
{
  __m128i *v6; // r14
  __m128i *v7; // r12
  __m128i *v9; // r13
  __int64 v10; // r12
  __int64 v11; // r9
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  __m128i *v14; // rbp
  __int64 v15; // rax
  __m128i *v16; // r12
  __m128i v17; // xmm5
  __m128i v18; // xmm6
  _BYTE *v19; // rsi
  __int64 v20; // rax
  _BYTE *v21; // rsi
  __int64 v22; // rdx
  __int64 *v23; // rdi
  const __m128i *v24; // r15
  __m128i v25; // xmm1
  __int8 *v26; // rax
  __int64 *v27; // rdi
  __m128i *v28; // r15
  unsigned __int64 v29; // rax
  unsigned __int64 *v30; // rdi
  unsigned __int64 *v31; // rdi
  __m128i *v32; // rax
  __int64 v33; // [rsp+0h] [rbp-58h] BYREF
  const __m128i *v34; // [rsp+8h] [rbp-50h]
  __m128i *v35; // [rsp+10h] [rbp-48h]
  __int64 v36; // [rsp+18h] [rbp-40h]

  v6 = a1[1];
  if ( v6 != a1[2] )
  {
    *v6 = _mm_loadu_si128(a2);
    v6[1] = _mm_loadu_si128(a2 + 1);
    v6[2].m128i_i64[0] = a2[2].m128i_i64[0];
    v6[2].m128i_i64[1] = (__int64)&v6[3].m128i_i64[1];
    sub_224DA20(&v6[2].m128i_i64[1], *(_BYTE **)a3, *(_QWORD *)a3 + *(_QWORD *)(a3 + 8));
    v6[4].m128i_i64[1] = (__int64)&v6[5].m128i_i64[1];
    sub_224DA20(&v6[4].m128i_i64[1], *(_BYTE **)a4, *(_QWORD *)a4 + *(_QWORD *)(a4 + 8));
    v7 = a1[1];
    a1[1] = (__m128i *)((char *)v7 + 104);
    return v7;
  }
  v9 = *a1;
  v10 = (char *)v6 - (char *)*a1;
  v11 = v10 >> 3;
  if ( 0x4EC4EC4EC4EC4EC5LL * (v10 >> 3) )
  {
    v12 = 0x9D89D89D89D89D8ALL * v11;
    v13 = -16;
    if ( 0x4EC4EC4EC4EC4EC5LL * v11 <= 0x9D89D89D89D89D8ALL * v11 && v12 <= 0x276276276276276LL )
    {
      if ( !v12 )
      {
        v33 = 104;
        v14 = nullptr;
        v35 = nullptr;
        goto LABEL_7;
      }
      v13 = 16 * v11;
    }
  }
  else
  {
    v13 = 104;
  }
  v36 = a3;
  v34 = a2;
  v33 = v13;
  v14 = (__m128i *)operator new(v13);
  a3 = v36;
  v35 = (__m128i *)((char *)v14 + v33);
  v33 = (__int64)&v14[6].m128i_i64[1];
LABEL_7:
  v15 = a2[2].m128i_i64[0];
  v16 = (__m128i *)((char *)v14 + v10);
  v17 = _mm_loadu_si128(a2);
  v18 = _mm_loadu_si128(a2 + 1);
  v19 = *(_BYTE **)a3;
  v16[2].m128i_i64[0] = v15;
  v16[2].m128i_i64[1] = (__int64)&v16[3].m128i_i64[1];
  v20 = *(_QWORD *)(a3 + 8);
  *v16 = v17;
  v16[1] = v18;
  sub_224DA20(&v16[2].m128i_i64[1], v19, (__int64)&v19[v20]);
  v21 = *(_BYTE **)a4;
  v22 = *(_QWORD *)(a4 + 8);
  v16[4].m128i_i64[1] = (__int64)&v16[5].m128i_i64[1];
  v23 = &v16[4].m128i_i64[1];
  v7 = v14;
  sub_224DA20(v23, v21, (__int64)&v21[v22]);
  if ( v6 != v9 )
  {
    v24 = v9;
    do
    {
      v25 = _mm_loadu_si128(v24);
      v24 = (const __m128i *)((char *)v24 + 104);
      *v7 = v25;
      v7[1] = _mm_loadu_si128((const __m128i *)((char *)v24 - 88));
      v7[2].m128i_i64[0] = v24[-5].m128i_i64[1];
      v7[2].m128i_i64[1] = (__int64)&v7[3].m128i_i64[1];
      sub_224DA20(&v7[2].m128i_i64[1], (_BYTE *)v24[-4].m128i_i64[0], v24[-4].m128i_i64[0] + v24[-4].m128i_i64[1]);
      v26 = &v7[5].m128i_i8[8];
      v27 = &v7[4].m128i_i64[1];
      v7 = (__m128i *)((char *)v7 + 104);
      v7[-2].m128i_i64[0] = (__int64)v26;
      sub_224DA20(v27, (_BYTE *)v24[-2].m128i_i64[0], v24[-2].m128i_i64[0] + v24[-2].m128i_i64[1]);
    }
    while ( v6 != v24 );
    v28 = v9;
    v29 = (0xEC4EC4EC4EC4EC5LL * ((unsigned __int64)((char *)&v6[-7].m128i_u64[1] - (char *)v9) >> 3))
        & 0x1FFFFFFFFFFFFFFFLL;
    v7 = (__m128i *)((char *)v14 + 104 * v29 + 104);
    v33 = (__int64)&v14[13].m128i_i64[13 * v29];
    do
    {
      while ( 1 )
      {
        v30 = (unsigned __int64 *)v28[4].m128i_i64[1];
        if ( v30 != &v28[5].m128i_u64[1] )
          operator delete(v30);
        v31 = (unsigned __int64 *)v28[2].m128i_i64[1];
        if ( v31 == &v28[3].m128i_u64[1] )
          break;
        operator delete(v31);
        v28 = (__m128i *)((char *)v28 + 104);
        if ( v6 == v28 )
          goto LABEL_15;
      }
      v28 = (__m128i *)((char *)v28 + 104);
    }
    while ( v6 != v28 );
  }
LABEL_15:
  if ( v9 )
    operator delete(v9);
  v34 = v14;
  v32 = v35;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v33);
  a1[2] = v32;
  return v7;
}
