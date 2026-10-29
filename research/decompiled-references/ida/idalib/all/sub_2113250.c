__int64 __fastcall sub_2113250(__int64 a1, const __m128i *a2, const __m128i *a3)
{
  const __m128i *v5; // r14
  __m128i *v6; // r12
  __int8 *v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // r13
  __m128i v14; // xmm4
  const __m128i *v15; // rax
  __int64 v16; // rdx
  __m128i v17; // xmm1
  void *v18; // rdi
  size_t v19; // rdx
  __int64 result; // rax
  unsigned __int64 v21; // [rsp+8h] [rbp-50h] BYREF
  __int64 v22; // [rsp+10h] [rbp-48h]
  const __m128i *v23; // [rsp+18h] [rbp-40h]

  v5 = *(const __m128i **)(a1 + 8);
  v6 = *(__m128i **)a1;
  v7 = &a2->m128i_i8[-*(_QWORD *)a1];
  v8 = ((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 5;
  if ( !v8 )
  {
    v9 = 1;
    goto LABEL_17;
  }
  v9 = 2 * v8;
  v10 = -32;
  if ( v8 > 2 * v8 || v9 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v9 )
  {
LABEL_17:
    v10 = 32 * v9;
LABEL_3:
    v23 = a3;
    v21 = (unsigned __int64)v7;
    v11 = operator new(v10);
    a3 = v23;
    v12 = v11;
    v22 = v11 + v10;
    v13 = v11 + 32;
    goto LABEL_4;
  }
  v13 = 32;
  v12 = 0;
  v22 = 0;
LABEL_4:
  v14 = _mm_loadu_si128(a3 + 1);
  *(__m128i *)&v7[v12] = _mm_loadu_si128(a3);
  *(__m128i *)&v7[v12 + 16] = v14;
  if ( a2 != v6 )
  {
    v15 = v6;
    v16 = v12;
    do
    {
      v17 = _mm_loadu_si128(v15);
      v15 += 2;
      v16 += 32;
      *(__m128i *)(v16 - 32) = v17;
      *(__m128i *)(v16 - 16) = _mm_loadu_si128(v15 - 1);
    }
    while ( a2 != v15 );
    v13 = v12 + (((char *)&a2[-2] - (char *)v6) & 0xFFFFFFFFFFFFFFE0LL) + 64;
  }
  if ( a2 != v5 )
  {
    v18 = (void *)v13;
    v19 = (((char *)v5 - (char *)a2 - 32) & 0xFFFFFFFFFFFFFFE0LL) + 32;
    v13 += v19;
    memcpy(v18, a2, v19);
  }
  if ( v6 )
    operator delete(v6);
  v21 = v13;
  result = v22;
  *(_QWORD *)(a1 + 16) = v22;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v21);
  return result;
}
