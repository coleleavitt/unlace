void __fastcall sub_A2AA60(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r12
  __int64 v4; // rbx
  const __m128i *v5; // r15
  __m128i v6; // xmm0
  const __m128i *v7; // rsi
  char v8; // dl
  __m128i v9; // [rsp+8h] [rbp-158h] BYREF
  __m128i v10[7]; // [rsp+18h] [rbp-148h] BYREF
  char v11; // [rsp+88h] [rbp-D8h]
  __m128i v12; // [rsp+98h] [rbp-C8h] BYREF
  __m128i v13[7]; // [rsp+A8h] [rbp-B8h] BYREF
  char v14; // [rsp+118h] [rbp-48h]

  v2 = a2 - a1;
  if ( v2 > 136 )
  {
    v3 = 0xF0F0F0F0F0F0F0F1LL * (v2 >> 3);
    v4 = (v3 - 2) / 2;
    v5 = (const __m128i *)(a1 + 136 * v4);
    while ( 1 )
    {
      v6 = _mm_loadu_si128(v5);
      v7 = v5 + 1;
      v5 = (const __m128i *)((char *)v5 - 136);
      v9 = v6;
      sub_A0A1C0(v10, v7);
      v8 = v5[16].m128i_i8[8] & 3;
      v12 = _mm_load_si128(&v9);
      v11 = v8 | v11 & 0xFC;
      sub_A0A1C0(v13, v10);
      v14 = v11 & 3 | v14 & 0xFC;
      sub_A2A6E0(a1, v4, v3, &v12);
      sub_A09CE0((__int64)v13);
      if ( !v4 )
        break;
      --v4;
      sub_A09CE0((__int64)v10);
    }
    sub_A09CE0((__int64)v10);
  }
}
