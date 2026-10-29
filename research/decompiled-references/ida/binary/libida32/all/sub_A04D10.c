void __fastcall sub_A04D10(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // r14
  __m128i *v5; // r12
  __int64 v6; // rbp
  __int64 i; // r13
  __int64 v8; // r15
  __int64 v9; // r13
  __m128i *v10; // r9
  __int64 v11; // r14
  __m128i *v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rax
  const __m128i *v16; // rbp
  __m128i *v18; // [rsp+0h] [rbp-128h]
  __int64 m128i_i64; // [rsp+28h] [rbp-100h]
  __int64 v21; // [rsp+30h] [rbp-F8h]
  __m128i si128; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v24[152]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-40h]

  v4 = (a3 - 1) / 2;
  m128i_i64 = (__int64)a4[1].m128i_i64;
  v5 = (__m128i *)(a1 + 176 * a2);
  v21 = a3 & 1;
  v6 = (__int64)v5[1].m128i_i64;
  if ( a2 >= v4 )
  {
    if ( (a3 & 1) != 0 )
    {
      v9 = (__int64)v5[1].m128i_i64;
      si128 = _mm_load_si128(a4);
      sub_9E62C0((__int64)v24, m128i_i64);
      v25 = a4[10].m128i_i64[1];
      goto LABEL_14;
    }
    v8 = a2;
    v9 = (__int64)v5[1].m128i_i64;
    goto LABEL_17;
  }
  for ( i = a2; ; i = v8 )
  {
    v8 = 2 * (i + 1);
    v5 = (__m128i *)(a1 + 352 * (i + 1));
    if ( (unsigned __int8)sub_9E60E0((unsigned int *)v5, (unsigned int *)&v5[-11]) )
    {
      --v8;
      v5 = (__m128i *)(a1 + 176 * v8);
    }
    v10 = (__m128i *)(a1 + 176 * i);
    *v10 = _mm_loadu_si128(v5);
    v9 = (__int64)v5[1].m128i_i64;
    v18 = v10;
    sub_A04CD0(v6, (__int64)v5[1].m128i_i64);
    v18[10].m128i_i64[1] = v5[10].m128i_i64[1];
    if ( v8 >= v4 )
      break;
    v6 = (__int64)v5[1].m128i_i64;
  }
  if ( !v21 )
  {
LABEL_17:
    if ( (a3 - 2) / 2 == v8 )
    {
      v13 = v8 + 1;
      v14 = 2 * (v8 + 1);
      v15 = v14 + 2 * (v14 + 8 * v13);
      v8 = v14 - 1;
      v16 = (const __m128i *)(a1 + 16 * v15 - 176);
      *v5 = _mm_loadu_si128(v16);
      sub_A04CD0(v9, (__int64)v16[1].m128i_i64);
      v5[10].m128i_i64[1] = v16[10].m128i_i64[1];
      v5 = (__m128i *)(a1 + 176 * v8);
      v9 = (__int64)v5[1].m128i_i64;
    }
  }
  si128 = _mm_load_si128(a4);
  sub_9E62C0((__int64)v24, m128i_i64);
  v25 = a4[10].m128i_i64[1];
  v11 = (v8 - 1) / 2;
  if ( v8 > a2 )
  {
    while ( 1 )
    {
      v12 = (__m128i *)(a1 + 176 * v11);
      v5 = (__m128i *)(a1 + 176 * v8);
      if ( !(unsigned __int8)sub_9E60E0((unsigned int *)v12, (unsigned int *)&si128) )
        break;
      v8 = v11;
      *v5 = _mm_loadu_si128(v12);
      sub_A04CD0(v9, (__int64)v12[1].m128i_i64);
      v5[10].m128i_i64[1] = v12[10].m128i_i64[1];
      v9 = (__int64)v12[1].m128i_i64;
      if ( a2 >= v11 )
      {
        v5 = (__m128i *)(a1 + 176 * v11);
        break;
      }
      v11 = (v11 - 1) / 2;
    }
  }
LABEL_14:
  *v5 = _mm_load_si128(&si128);
  sub_A04CD0(v9, (__int64)v24);
  v5[10].m128i_i64[1] = v25;
  sub_9E5F30((__int64)v24);
}

