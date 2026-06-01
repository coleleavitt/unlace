void __fastcall sub_18C71E0(__int64 a1, const __m128i *a2, const __m128i *a3)
{
  const __m128i *v4; // rbp
  __m128i *v5; // r13
  __int8 *v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // r12
  unsigned __int64 v13; // r15
  const __m128i *v14; // rdx
  __int64 v15; // rcx
  __m128i v16; // xmm1
  const __m128i *v17; // rdx
  unsigned __int64 v18; // rcx
  __m128i v19; // xmm2
  unsigned __int64 v20; // [rsp+0h] [rbp-48h] BYREF
  const __m128i *v21; // [rsp+8h] [rbp-40h]

  v4 = *(const __m128i **)(a1 + 8);
  v5 = *(__m128i **)a1;
  v6 = &a2->m128i_i8[-*(_QWORD *)a1];
  v7 = ((__int64)v4->m128i_i64 - *(_QWORD *)a1) >> 4;
  if ( !v7 )
  {
    v8 = 1;
    goto LABEL_19;
  }
  v8 = 2 * v7;
  v9 = -16;
  if ( v7 > 2 * v7 || v8 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v8 )
  {
LABEL_19:
    v9 = 16 * v8;
LABEL_3:
    v21 = a3;
    v20 = (unsigned __int64)v6;
    v10 = operator new(v9);
    v6 = (__int8 *)v20;
    a3 = v21;
    v11 = v10 + v9;
    v12 = v10;
    v13 = v10 + 16;
    goto LABEL_4;
  }
  v13 = 16;
  v11 = 0;
  v12 = 0;
LABEL_4:
  *(__m128i *)&v6[v12] = _mm_loadu_si128(a3);
  if ( a2 != v5 )
  {
    v14 = v5;
    v15 = v12;
    do
    {
      v16 = _mm_loadu_si128(v14++);
      v15 += 16;
      *(__m128i *)(v15 - 16) = v16;
    }
    while ( a2 != v14 );
    v13 = v12 + (((char *)&a2[-1] - (char *)v5) & 0xFFFFFFFFFFFFFFF0LL) + 32;
  }
  if ( a2 != v4 )
  {
    v17 = a2;
    v18 = v13;
    do
    {
      v19 = _mm_loadu_si128(v17++);
      v18 += 16LL;
      *(__m128i *)(v18 - 16) = v19;
    }
    while ( v4 != v17 );
    v13 += (((char *)v4 - (char *)a2 - 16) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  if ( v5 )
  {
    v20 = v11;
    operator delete(v5);
  }
  v20 = v13;
  *(_QWORD *)(a1 + 16) = v11;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v20);
}
