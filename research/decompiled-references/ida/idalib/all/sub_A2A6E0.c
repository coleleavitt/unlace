void __fastcall sub_A2A6E0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // r13
  __m128i *v5; // r12
  __int64 m128i_i64; // rbp
  __int64 i; // r14
  __int64 v8; // r15
  __int64 v9; // r8
  __int8 v10; // al
  __m128i *v11; // r14
  __int64 v12; // r8
  __int64 v13; // r14
  __int8 v14; // al
  __m128i *v15; // r13
  char v16; // al
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rax
  const __m128i *v20; // r13
  __int8 v21; // al
  __int64 v22; // [rsp+0h] [rbp-F8h]
  __int64 v25; // [rsp+28h] [rbp-D0h]
  __m128i si128; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v27[7]; // [rsp+40h] [rbp-B8h] BYREF
  char v28; // [rsp+B0h] [rbp-48h]

  v4 = (a3 - 1) / 2;
  v5 = (__m128i *)(a1 + 136 * a2);
  m128i_i64 = (__int64)v5[1].m128i_i64;
  if ( a2 >= v4 )
  {
    v8 = a2;
    v9 = (__int64)v5[1].m128i_i64;
  }
  else
  {
    for ( i = a2; ; i = v8 )
    {
      v8 = 2 * (i + 1);
      v5 = (__m128i *)(a1 + 272 * (i + 1));
      if ( (unsigned __int8)sub_A09E20((unsigned int *)v5, &v5[-9].m128i_u32[2]) )
      {
        --v8;
        v5 = (__m128i *)(a1 + 136 * v8);
      }
      v11 = (__m128i *)(a1 + 136 * i);
      *v11 = _mm_loadu_si128(v5);
      sub_A0B090(m128i_i64, (__int64)v5[1].m128i_i64);
      v9 = (__int64)v5[1].m128i_i64;
      v10 = v5[8].m128i_i8[0] & 1 | v11[8].m128i_i8[0] & 0xFE;
      v11[8].m128i_i8[0] = v10;
      v11[8].m128i_i8[0] = v5[8].m128i_i8[0] & 2 | v10 & 0xFD;
      if ( v8 >= v4 )
        break;
      m128i_i64 = (__int64)v5[1].m128i_i64;
    }
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v8 )
  {
    v17 = v8 + 1;
    v18 = 2 * (v8 + 1);
    v19 = 32 * v17 + v18;
    v8 = v18 - 1;
    v20 = (const __m128i *)(a1 + 8 * v19 - 136);
    *v5 = _mm_loadu_si128(v20);
    sub_A0B090(v9, (__int64)v20[1].m128i_i64);
    v21 = v20[8].m128i_i8[0] & 1 | v5[8].m128i_i8[0] & 0xFE;
    v5[8].m128i_i8[0] = v21;
    v5[8].m128i_i8[0] = v20[8].m128i_i8[0] & 2 | v21 & 0xFD;
    v5 = (__m128i *)(a1 + 136 * v8);
    v9 = (__int64)v5[1].m128i_i64;
  }
  v25 = v9;
  si128 = _mm_load_si128(a4);
  sub_A0A1C0(v27, a4 + 1);
  v12 = v25;
  v28 = a4[8].m128i_i8[0] & 3 | v28 & 0xFC;
  v13 = (v8 - 1) / 2;
  if ( v8 > a2 )
  {
    while ( 1 )
    {
      v22 = v12;
      v15 = (__m128i *)(a1 + 136 * v13);
      v16 = sub_A09E20((unsigned int *)v15, (unsigned int *)&si128);
      v12 = v22;
      v5 = (__m128i *)(a1 + 136 * v8);
      if ( !v16 )
        break;
      v8 = v13;
      *v5 = _mm_loadu_si128(v15);
      sub_A0B090(v22, (__int64)v15[1].m128i_i64);
      v12 = (__int64)v15[1].m128i_i64;
      v14 = v15[8].m128i_i8[0] & 1 | v5[8].m128i_i8[0] & 0xFE;
      v5[8].m128i_i8[0] = v14;
      v5[8].m128i_i8[0] = v15[8].m128i_i8[0] & 2 | v14 & 0xFD;
      if ( a2 >= v13 )
      {
        v5 = (__m128i *)(a1 + 136 * v13);
        break;
      }
      v13 = (v13 - 1) / 2;
    }
  }
  *v5 = _mm_load_si128(&si128);
  sub_A0B090(v12, (__int64)v27);
  v5[8].m128i_i8[0] = v28 & 3 | v5[8].m128i_i8[0] & 0xFC;
  sub_A09CE0((__int64)v27);
}
