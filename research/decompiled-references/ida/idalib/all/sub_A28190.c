void __fastcall sub_A28190(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v5; // r14
  __m128i *v6; // r15
  __int64 v7; // rbp
  __int64 i; // r12
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rdi
  __m128i *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rax
  const __m128i *v17; // rax
  __int64 m128i_i64; // [rsp+18h] [rbp-B0h]
  __int64 v20; // [rsp+20h] [rbp-A8h]
  __m128i si128; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v23[136]; // [rsp+40h] [rbp-88h] BYREF

  v5 = (a3 - 1) / 2;
  m128i_i64 = (__int64)a4[1].m128i_i64;
  v6 = (__m128i *)(a1 + 88 * a2);
  v7 = (__int64)v6[1].m128i_i64;
  v20 = a3 & 1;
  if ( a2 >= v5 )
  {
    if ( (a3 & 1) != 0 )
    {
      v10 = (__int64)v6[1].m128i_i64;
      si128 = _mm_load_si128(a4);
      sub_A09F20((__int64)v23, m128i_i64);
      goto LABEL_14;
    }
    v9 = a2;
    v10 = (__int64)v6[1].m128i_i64;
    goto LABEL_17;
  }
  for ( i = a2; ; i = v9 )
  {
    v9 = 2 * (i + 1);
    v6 = (__m128i *)(a1 + 176 * (i + 1));
    if ( (unsigned __int8)sub_A09E20((unsigned int *)v6, &v6[-6].m128i_u32[2]) )
    {
      --v9;
      v6 = (__m128i *)(a1 + 88 * v9);
    }
    *(__m128i *)(a1 + 88 * i) = _mm_loadu_si128(v6);
    v10 = (__int64)v6[1].m128i_i64;
    sub_A28120(v7, (__int64)v6[1].m128i_i64);
    if ( v9 >= v5 )
      break;
    v7 = (__int64)v6[1].m128i_i64;
  }
  if ( !v20 )
  {
LABEL_17:
    if ( (a3 - 2) / 2 == v9 )
    {
      v14 = v9 + 1;
      v15 = 2 * (v9 + 1);
      v16 = v15 + 2 * (v15 + 8 * v14);
      v9 = v15 - 1;
      v17 = (const __m128i *)(a1 + 8 * v16 - 88);
      *v6 = _mm_loadu_si128(v17);
      sub_A28120(v10, (__int64)v17[1].m128i_i64);
      v6 = (__m128i *)(a1 + 88 * v9);
      v10 = (__int64)v6[1].m128i_i64;
    }
  }
  si128 = _mm_load_si128(a4);
  sub_A09F20((__int64)v23, m128i_i64);
  v11 = (v9 - 1) / 2;
  if ( v9 > a2 )
  {
    while ( 1 )
    {
      v13 = (__m128i *)(a1 + 88 * v11);
      v6 = (__m128i *)(a1 + 88 * v9);
      if ( !(unsigned __int8)sub_A09E20((unsigned int *)v13, (unsigned int *)&si128) )
        break;
      v12 = v10;
      v9 = v11;
      *v6 = _mm_loadu_si128(v13);
      v10 = (__int64)v13[1].m128i_i64;
      sub_A28120(v12, (__int64)v13[1].m128i_i64);
      if ( a2 >= v11 )
      {
        v6 = (__m128i *)(a1 + 88 * v11);
        break;
      }
      v11 = (v11 - 1) / 2;
    }
  }
LABEL_14:
  *v6 = _mm_load_si128(&si128);
  sub_A28120(v10, (__int64)v23);
  sub_A09C30((__int64)v23);
}
