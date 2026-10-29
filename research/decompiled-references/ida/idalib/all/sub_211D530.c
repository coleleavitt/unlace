__int64 __fastcall sub_211D530(__int64 a1, const __m128i *a2, const __m128i *a3)
{
  const __m128i *v5; // r15
  __m128i *v6; // r13
  __int8 *v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rbp
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  const __m128i *v14; // rax
  __int64 v15; // rdx
  __m128i v16; // xmm1
  void *v17; // rdi
  size_t v18; // rdx
  __int64 result; // rax
  unsigned __int64 v20; // [rsp+8h] [rbp-50h] BYREF
  __int64 v21; // [rsp+10h] [rbp-48h]
  const __m128i *v22; // [rsp+18h] [rbp-40h]

  v5 = *(const __m128i **)(a1 + 8);
  v6 = *(__m128i **)a1;
  v7 = &a2->m128i_i8[-*(_QWORD *)a1];
  if ( !(0xAAAAAAAAAAAAAAABLL * (((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 3)) )
  {
    v8 = 1;
    goto LABEL_17;
  }
  v8 = 0x5555555555555556LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v9 = -16;
  if ( 0xAAAAAAAAAAAAAAABLL * (((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 3) > 0x5555555555555556LL
                                                                              * (((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 3)
    || v8 > 0xAAAAAAAAAAAAAAALL )
  {
    goto LABEL_3;
  }
  if ( v8 )
  {
LABEL_17:
    v9 = 24 * v8;
LABEL_3:
    v22 = a3;
    v20 = (unsigned __int64)v7;
    v10 = operator new(v9);
    a3 = v22;
    v11 = v10;
    v21 = v10 + v9;
    v12 = v10 + 24;
    goto LABEL_4;
  }
  v12 = 24;
  v11 = 0;
  v21 = 0;
LABEL_4:
  v13 = a3[1].m128i_i64[0];
  *(__m128i *)&v7[v11] = _mm_loadu_si128(a3);
  *(_QWORD *)&v7[v11 + 16] = v13;
  if ( a2 != v6 )
  {
    v14 = v6;
    v15 = v11;
    do
    {
      v16 = _mm_loadu_si128(v14);
      v14 = (const __m128i *)((char *)v14 + 24);
      v15 += 24;
      *(__m128i *)(v15 - 24) = v16;
      *(_QWORD *)(v15 - 8) = v14[-1].m128i_i64[1];
    }
    while ( a2 != v14 );
    v12 = v11 + 8 * ((unsigned __int64)((char *)&a2[-2].m128i_u64[1] - (char *)v6) >> 3) + 48;
  }
  if ( a2 != v5 )
  {
    v17 = (void *)v12;
    v18 = 8 * ((unsigned __int64)((char *)v5 - (char *)a2 - 24) >> 3) + 24;
    v12 += v18;
    memcpy(v17, a2, v18);
  }
  if ( v6 )
    operator delete(v6);
  v20 = v12;
  result = v21;
  *(_QWORD *)(a1 + 16) = v21;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v20);
  return result;
}
