__m128i *__fastcall sub_1252750(__int64 a1, const __m128i *a2, const __m128i *a3)
{
  const __m128i *v6; // rbx
  __m128i *v7; // r12
  __int8 *v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r13
  __m128i *v11; // rax
  __m128i *v12; // r14
  const __m128i *v13; // r13
  const __m128i *v14; // rsi
  __m128i *v15; // rdi
  const __m128i *v16; // r14
  __m128i *v17; // r13
  const __m128i *v18; // rsi
  __m128i *v19; // rdi
  __m128i *i; // rbp
  __int64 v21; // rdi
  __m128i *result; // rax
  __m128 v23; // xmm0
  __int64 m128i_i64; // [rsp+0h] [rbp-58h] BYREF
  __m128i *v25; // [rsp+8h] [rbp-50h]
  __m128i *v26; // [rsp+10h] [rbp-48h]
  __int8 *v27; // [rsp+18h] [rbp-40h]

  v6 = *(const __m128i **)(a1 + 8);
  v7 = *(__m128i **)a1;
  v8 = &a2->m128i_i8[-*(_QWORD *)a1];
  if ( !(0xAAAAAAAAAAAAAAABLL * (((__int64)v6->m128i_i64 - *(_QWORD *)a1) >> 4)) )
  {
    v9 = 1;
    goto LABEL_20;
  }
  v9 = 0x5555555555555556LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4);
  v10 = 0xFFFFFFFFFFFFFFFLL;
  if ( 0xAAAAAAAAAAAAAAABLL * (((__int64)v6->m128i_i64 - *(_QWORD *)a1) >> 4) > 0x5555555555555556LL
                                                                              * (((__int64)v6->m128i_i64 - *(_QWORD *)a1) >> 4)
    || v9 > 0x555555555555555LL )
  {
    goto LABEL_3;
  }
  if ( v9 )
  {
LABEL_20:
    v10 = 3 * v9;
LABEL_3:
    v27 = v8;
    v11 = (__m128i *)operator new(v10 * 16);
    v8 = v27;
    v25 = v11;
    v26 = &v11[v10];
    m128i_i64 = (__int64)v11[3].m128i_i64;
    goto LABEL_4;
  }
  m128i_i64 = 48;
  v26 = nullptr;
  v25 = nullptr;
LABEL_4:
  sub_124FC70((__m128i *)&v8[(_QWORD)v25], a3);
  if ( a2 != v7 )
  {
    v12 = v25;
    v13 = v7;
    do
    {
      v14 = v13;
      v15 = v12;
      v13 += 3;
      v12 += 3;
      sub_12526E0(v15, v14);
    }
    while ( a2 != v13 );
    m128i_i64 = (__int64)v25[3
                           * ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)&a2[-3] - (char *)v7) >> 4))
                            & 0xFFFFFFFFFFFFFFFLL)
                           + 6].m128i_i64;
  }
  v16 = a2;
  v17 = (__m128i *)m128i_i64;
  if ( a2 != v6 )
  {
    do
    {
      v18 = v16;
      v19 = v17;
      v16 += 3;
      v17 += 3;
      sub_12526E0(v19, v18);
    }
    while ( v16 != v6 );
    m128i_i64 += 16
               * (3
                * ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)v6 - (char *)a2 - 48) >> 4)) & 0xFFFFFFFFFFFFFFFLL)
                + 3);
  }
  for ( i = v7; i != v6; i += 3 )
  {
    v21 = (__int64)i;
    sub_124FBE0(v21);
  }
  if ( v7 )
    operator delete(v7);
  result = v26;
  v23 = _mm_loadh_ps((const double *)&m128i_i64);
  *(_QWORD *)(a1 + 16) = v26;
  *(__m128 *)a1 = v23;
  return result;
}
