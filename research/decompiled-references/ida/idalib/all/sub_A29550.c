void __fastcall sub_A29550(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r12
  __int64 v4; // rbp
  const __m128i *v5; // rbx
  __m128i v6; // xmm0
  __int64 m128i_i64; // rsi
  __m128i v8; // xmm1
  __m128i v9; // [rsp+8h] [rbp-198h] BYREF
  _BYTE v10[152]; // [rsp+18h] [rbp-188h] BYREF
  __int8 v11; // [rsp+B0h] [rbp-F0h]
  __m128i v12; // [rsp+B8h] [rbp-E8h] BYREF
  _BYTE v13[216]; // [rsp+C8h] [rbp-D8h] BYREF

  v2 = a2 - a1;
  if ( v2 > 176 )
  {
    v3 = 0x2E8BA2E8BA2E8BA3LL * (v2 >> 4);
    v4 = (v3 - 2) / 2;
    v5 = (const __m128i *)(a1 + 176 * v4);
    while ( 1 )
    {
      v6 = _mm_loadu_si128(v5);
      m128i_i64 = (__int64)v5[1].m128i_i64;
      v5 -= 11;
      v9 = v6;
      sub_A0A000((__int64)v10, m128i_i64);
      v8 = _mm_load_si128(&v9);
      v11 = v5[21].m128i_i8[8];
      v12 = v8;
      sub_A0A000((__int64)v13, (__int64)v10);
      v13[152] = v11;
      sub_A29330(a1, v4, v3, (__int64)&v12);
      sub_A09C70((__int64)v13);
      if ( !v4 )
        break;
      --v4;
      sub_A09C70((__int64)v10);
    }
    sub_A09C70((__int64)v10);
  }
}
