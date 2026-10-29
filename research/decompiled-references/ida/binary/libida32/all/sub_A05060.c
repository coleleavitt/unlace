void __fastcall sub_A05060(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rbx
  __m128i v6; // xmm0
  __int64 v7; // rsi
  __m128i v8; // xmm1
  __m128i v9; // [rsp+8h] [rbp-198h] BYREF
  _BYTE v10[152]; // [rsp+18h] [rbp-188h] BYREF
  __int64 v11; // [rsp+B0h] [rbp-F0h]
  __m128i v12; // [rsp+B8h] [rbp-E8h] BYREF
  _QWORD v13[27]; // [rsp+C8h] [rbp-D8h] BYREF

  v2 = a2 - a1;
  if ( v2 > 176 )
  {
    v3 = 0x2E8BA2E8BA2E8BA3LL * (v2 >> 4);
    v4 = (v3 - 2) / 2;
    v5 = a1 + 176 * v4 + 16;
    while ( 1 )
    {
      v6 = _mm_loadu_si128((const __m128i *)(v5 - 16));
      v7 = v5;
      v5 -= 176;
      v9 = v6;
      sub_9E62C0((__int64)v10, v7);
      v8 = _mm_load_si128(&v9);
      v11 = *(_QWORD *)(v5 + 328);
      v12 = v8;
      sub_9E62C0((__int64)v13, (__int64)v10);
      v13[19] = v11;
      sub_A04D10(a1, v4, v3, &v12);
      sub_9E5F30((__int64)v13);
      if ( !v4 )
        break;
      --v4;
      sub_9E5F30((__int64)v10);
    }
    sub_9E5F30((__int64)v10);
  }
}

