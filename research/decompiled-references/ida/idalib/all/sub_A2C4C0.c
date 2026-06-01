void __fastcall sub_A2C4C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // rbp
  __m128i v6; // xmm0
  __int64 v7; // rsi
  __m128i v8; // [rsp+8h] [rbp-1B8h] BYREF
  _BYTE v9[176]; // [rsp+18h] [rbp-1A8h] BYREF
  __m128i v10; // [rsp+C8h] [rbp-F8h] BYREF
  _BYTE v11[232]; // [rsp+D8h] [rbp-E8h] BYREF

  v2 = a2 - a1;
  if ( v2 > 192 )
  {
    v3 = 0xAAAAAAAAAAAAAAABLL * (v2 >> 6);
    v4 = (v3 - 2) / 2;
    v5 = a1 + 192 * v4 + 16;
    while ( 1 )
    {
      v6 = _mm_loadu_si128((const __m128i *)(v5 - 16));
      v7 = v5;
      v5 -= 192;
      v8 = v6;
      sub_A0A250((__int64)v9, v7);
      v10 = _mm_load_si128(&v8);
      sub_A0A250((__int64)v11, (__int64)v9);
      sub_A2C220(a1, v4, v3, &v10);
      sub_A09D30((__int64)v11);
      if ( !v4 )
        break;
      --v4;
      sub_A09D30((__int64)v9);
    }
    sub_A09D30((__int64)v9);
  }
}
