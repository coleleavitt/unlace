__int64 __fastcall sub_210B870(__int64 a1, const __m128i *a2, const __m128i *a3)
{
  const __m128i *v5; // r15
  __m128i *v6; // r13
  __int8 *v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r12
  __m128i v13; // xmm5
  __m128i v14; // xmm6
  const __m128i *v15; // rax
  __int64 v16; // rdx
  __m128i v17; // xmm1
  void *v18; // rdi
  size_t v19; // rdx
  __int64 result; // rax
  __int64 v21; // [rsp+8h] [rbp-50h] BYREF
  __int64 v22; // [rsp+10h] [rbp-48h]
  const __m128i *v23; // [rsp+18h] [rbp-40h]

  v5 = *(const __m128i **)(a1 + 8);
  v6 = *(__m128i **)a1;
  v7 = &a2->m128i_i8[-*(_QWORD *)a1];
  if ( !(0xAAAAAAAAAAAAAAABLL * (((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 4)) )
  {
    v8 = 1;
    goto LABEL_17;
  }
  v8 = 0x5555555555555556LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4);
  v9 = -16;
  if ( 0xAAAAAAAAAAAAAAABLL * (((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 4) > 0x5555555555555556LL
                                                                              * (((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 4)
    || v8 > 0x555555555555555LL )
  {
    goto LABEL_3;
  }
  if ( v8 )
  {
LABEL_17:
    v9 = 48 * v8;
LABEL_3:
    v23 = a3;
    v21 = (__int64)v7;
    v10 = operator new(v9);
    a3 = v23;
    v11 = v10;
    v22 = v10 + v9;
    v12 = v10 + 48;
    goto LABEL_4;
  }
  v12 = 48;
  v11 = 0;
  v22 = 0;
LABEL_4:
  v13 = _mm_loadu_si128(a3 + 1);
  v14 = _mm_loadu_si128(a3 + 2);
  *(__m128i *)&v7[v11] = _mm_loadu_si128(a3);
  *(__m128i *)&v7[v11 + 16] = v13;
  *(__m128i *)&v7[v11 + 32] = v14;
  if ( a2 != v6 )
  {
    v15 = v6;
    v16 = v11;
    do
    {
      v17 = _mm_loadu_si128(v15);
      v15 += 3;
      v16 += 48;
      *(__m128i *)(v16 - 48) = v17;
      *(__m128i *)(v16 - 32) = _mm_loadu_si128(v15 - 2);
      *(__m128i *)(v16 - 16) = _mm_loadu_si128(v15 - 1);
    }
    while ( a2 != v15 );
    v12 = v11
        + 16
        * (3 * ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)&a2[-3] - (char *)v6) >> 4)) & 0xFFFFFFFFFFFFFFFLL)
         + 6);
  }
  if ( a2 != v5 )
  {
    v18 = (void *)v12;
    v19 = 16
        * (3 * ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)v5 - (char *)a2 - 48) >> 4)) & 0xFFFFFFFFFFFFFFFLL)
         + 3);
    v12 += v19;
    memcpy(v18, a2, v19);
  }
  if ( v6 )
    operator delete(v6);
  v21 = v12;
  result = v22;
  *(_QWORD *)(a1 + 16) = v22;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v21);
  return result;
}
