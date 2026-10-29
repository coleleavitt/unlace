void __fastcall sub_A09090(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __m128i *v4; // r12
  __int64 m128i_i64; // r15
  __m128i *v6; // r13
  __int64 i; // rbp
  __int64 v8; // rbx
  __int64 v9; // r14
  __m128i *v10; // rbp
  __int64 v11; // r15
  __m128i *v12; // rdi
  __m128i *v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  const __m128i *v17; // r13
  __int64 v18; // [rsp+0h] [rbp-1A8h]
  __m128i si128; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v23[176]; // [rsp+40h] [rbp-168h] BYREF
  __m128i v24[11]; // [rsp+F0h] [rbp-B8h] BYREF

  v4 = (__m128i *)(a1 + 320 * a2);
  m128i_i64 = (__int64)v4[1].m128i_i64;
  v6 = v4 + 12;
  v18 = (a3 - 1) / 2;
  if ( a2 >= v18 )
  {
    v8 = a2;
    v10 = v4 + 12;
    v9 = (__int64)v4[1].m128i_i64;
  }
  else
  {
    for ( i = a2; ; i = v8 )
    {
      v8 = 2 * (i + 1);
      v4 = (__m128i *)(a1 + 640 * (i + 1));
      if ( (unsigned __int8)sub_9E60E0((unsigned int *)v4, (unsigned int *)&v4[-20]) )
      {
        --v8;
        v4 = (__m128i *)(a1 + 320 * v8);
      }
      *(__m128i *)(a1 + 320 * i) = _mm_loadu_si128(v4);
      v9 = (__int64)v4[1].m128i_i64;
      v10 = v4 + 12;
      sub_9F9310(m128i_i64, (__int64)v4[1].m128i_i64);
      sub_A08F80(v6, v4 + 12);
      if ( v8 >= v18 )
        break;
      v6 = v4 + 12;
      m128i_i64 = (__int64)v4[1].m128i_i64;
    }
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v8 )
  {
    v14 = v8 + 1;
    v15 = 2 * (v8 + 1);
    v16 = v15 + 8 * v14;
    v8 = v15 - 1;
    v17 = (const __m128i *)(a1 + (v16 << 6) - 320);
    *v4 = _mm_loadu_si128(v17);
    sub_9F9310(v9, (__int64)v17[1].m128i_i64);
    sub_A08F80(v10, v17 + 12);
    v4 = (__m128i *)(a1 + 320 * v8);
    v9 = (__int64)v4[1].m128i_i64;
    v10 = v4 + 12;
  }
  si128 = _mm_load_si128(a4);
  sub_9E6510((__int64)v23, (__int64)a4[1].m128i_i64);
  sub_9FD280(v24, a4 + 12);
  v11 = (v8 - 1) / 2;
  if ( v8 > a2 )
  {
    while ( 1 )
    {
      v13 = (__m128i *)(a1 + 320 * v11);
      v4 = (__m128i *)(320 * v8 + a1);
      if ( !(unsigned __int8)sub_9E60E0((unsigned int *)v13, (unsigned int *)&si128) )
        break;
      v8 = v11;
      *v4 = _mm_loadu_si128(v13);
      sub_9F9310(v9, (__int64)v13[1].m128i_i64);
      v12 = v10;
      v10 = v13 + 12;
      sub_A08F80(v12, v13 + 12);
      v9 = (__int64)v13[1].m128i_i64;
      if ( a2 >= v11 )
      {
        v4 = (__m128i *)(a1 + 320 * v11);
        break;
      }
      v11 = (v11 - 1) / 2;
    }
  }
  *v4 = _mm_load_si128(&si128);
  sub_9F9310(v9, (__int64)v23);
  sub_A08F80(v10, v24);
  sub_9FC080((__int64)v23);
}

