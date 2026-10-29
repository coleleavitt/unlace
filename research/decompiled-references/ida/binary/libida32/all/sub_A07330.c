void __fastcall sub_A07330(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v5; // r14
  __m128i *v6; // r15
  __int64 m128i_i64; // rbp
  __int64 i; // r13
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rbp
  __int64 v12; // rdi
  __m128i *v13; // r14
  const __m128i *v14; // rax
  const __m128i *v16; // [rsp+18h] [rbp-D0h]
  __int64 v17; // [rsp+20h] [rbp-C8h]
  __m128i si128; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v20[10]; // [rsp+40h] [rbp-A8h] BYREF

  v5 = (a3 - 1) / 2;
  v6 = (__m128i *)(a1 + (a2 << 7));
  v17 = a3 & 1;
  m128i_i64 = (__int64)v6[1].m128i_i64;
  v16 = a4 + 1;
  if ( a2 >= v5 )
  {
    if ( (a3 & 1) != 0 )
    {
      v10 = (__int64)v6[1].m128i_i64;
      si128 = _mm_load_si128(a4);
      sub_9E6480(v20, v16);
      goto LABEL_14;
    }
    v9 = a2;
    v10 = (__int64)v6[1].m128i_i64;
    goto LABEL_17;
  }
  for ( i = a2; ; i = v9 )
  {
    v9 = 2 * (i + 1);
    v6 = (__m128i *)(a1 + ((i + 1) << 8));
    if ( (unsigned __int8)sub_9E60E0((unsigned int *)v6, (unsigned int *)&v6[-8]) )
      v6 = (__m128i *)(a1 + (--v9 << 7));
    *(__m128i *)(a1 + (i << 7)) = _mm_loadu_si128(v6);
    v10 = (__int64)v6[1].m128i_i64;
    sub_9E7350(m128i_i64, (__int64)v6[1].m128i_i64);
    if ( v9 >= v5 )
      break;
    m128i_i64 = (__int64)v6[1].m128i_i64;
  }
  if ( !v17 )
  {
LABEL_17:
    if ( (a3 - 2) / 2 == v9 )
    {
      v14 = (const __m128i *)(a1 + ((v9 + 1) << 8) - 128);
      v9 = 2 * (v9 + 1) - 1;
      *v6 = _mm_loadu_si128(v14);
      sub_9E7350(v10, (__int64)v14[1].m128i_i64);
      v6 = (__m128i *)(a1 + (v9 << 7));
      v10 = (__int64)v6[1].m128i_i64;
    }
  }
  si128 = _mm_load_si128(a4);
  sub_9E6480(v20, v16);
  v11 = (v9 - 1) / 2;
  if ( v9 > a2 )
  {
    while ( 1 )
    {
      v13 = (__m128i *)(a1 + (v11 << 7));
      v6 = (__m128i *)(a1 + (v9 << 7));
      if ( !(unsigned __int8)sub_9E60E0((unsigned int *)v13, (unsigned int *)&si128) )
        break;
      v12 = v10;
      v9 = v11;
      *v6 = _mm_loadu_si128(v13);
      v10 = (__int64)v13[1].m128i_i64;
      sub_9E7350(v12, (__int64)v13[1].m128i_i64);
      if ( a2 >= v11 )
      {
        v6 = (__m128i *)(a1 + (v11 << 7));
        break;
      }
      v11 = (v11 - 1) / 2;
    }
  }
LABEL_14:
  *v6 = _mm_load_si128(&si128);
  sub_9E7350(v10, (__int64)v20);
  sub_9E5FA0((__int64)v20);
}

