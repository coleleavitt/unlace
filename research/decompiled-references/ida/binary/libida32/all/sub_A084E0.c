void __fastcall sub_A084E0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v5; // r14
  __m128i *v6; // r15
  __int64 m128i_i64; // rbp
  __int64 i; // r12
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rdi
  __m128i *v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // rax
  const __m128i *v17; // rax
  __int64 v19; // [rsp+18h] [rbp-110h]
  __int64 v20; // [rsp+20h] [rbp-108h]
  __m128i si128; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v23[232]; // [rsp+40h] [rbp-E8h] BYREF

  v5 = (a3 - 1) / 2;
  v6 = (__m128i *)(a1 + 192 * a2);
  v20 = a3 & 1;
  m128i_i64 = (__int64)v6[1].m128i_i64;
  v19 = (__int64)a4[1].m128i_i64;
  if ( a2 >= v5 )
  {
    if ( (a3 & 1) != 0 )
    {
      v10 = (__int64)v6[1].m128i_i64;
      si128 = _mm_load_si128(a4);
      sub_9E6510((__int64)v23, v19);
      goto LABEL_14;
    }
    v9 = a2;
    v10 = (__int64)v6[1].m128i_i64;
    goto LABEL_17;
  }
  for ( i = a2; ; i = v9 )
  {
    v9 = 2 * (i + 1);
    v6 = (__m128i *)(a1 + 384 * (i + 1));
    if ( (unsigned __int8)sub_9E60E0((unsigned int *)v6, (unsigned int *)&v6[-12]) )
    {
      --v9;
      v6 = (__m128i *)(a1 + 192 * v9);
    }
    *(__m128i *)(a1 + 192 * i) = _mm_loadu_si128(v6);
    v10 = (__int64)v6[1].m128i_i64;
    sub_9F9310(m128i_i64, (__int64)v6[1].m128i_i64);
    if ( v9 >= v5 )
      break;
    m128i_i64 = (__int64)v6[1].m128i_i64;
  }
  if ( !v20 )
  {
LABEL_17:
    if ( (a3 - 2) / 2 == v9 )
    {
      v14 = v9 + 1;
      v15 = 2 * (v9 + 1);
      v16 = v15 + 4 * v14;
      v9 = v15 - 1;
      v17 = (const __m128i *)(a1 + (v16 << 6) - 192);
      *v6 = _mm_loadu_si128(v17);
      sub_9F9310(v10, (__int64)v17[1].m128i_i64);
      v6 = (__m128i *)(a1 + 192 * v9);
      v10 = (__int64)v6[1].m128i_i64;
    }
  }
  si128 = _mm_load_si128(a4);
  sub_9E6510((__int64)v23, v19);
  v11 = (v9 - 1) / 2;
  if ( v9 > a2 )
  {
    while ( 1 )
    {
      v13 = (__m128i *)(a1 + 192 * v11);
      v6 = (__m128i *)(a1 + 192 * v9);
      if ( !(unsigned __int8)sub_9E60E0((unsigned int *)v13, (unsigned int *)&si128) )
        break;
      v12 = v10;
      v9 = v11;
      *v6 = _mm_loadu_si128(v13);
      v10 = (__int64)v13[1].m128i_i64;
      sub_9F9310(v12, (__int64)v13[1].m128i_i64);
      if ( a2 >= v11 )
      {
        v6 = (__m128i *)(a1 + 192 * v11);
        break;
      }
      v11 = (v11 - 1) / 2;
    }
  }
LABEL_14:
  *v6 = _mm_load_si128(&si128);
  sub_9F9310(v10, (__int64)v23);
  sub_9E5FF0((__int64)v23);
}

