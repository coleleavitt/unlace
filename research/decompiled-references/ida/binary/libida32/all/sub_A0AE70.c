void __fastcall sub_A0AE70(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // rbp
  __m128i v6; // xmm0
  __int64 v7; // rsi
  __m128i v8; // [rsp+8h] [rbp-338h] BYREF
  _BYTE v9[368]; // [rsp+18h] [rbp-328h] BYREF
  __m128i v10; // [rsp+188h] [rbp-1B8h] BYREF
  _BYTE v11[424]; // [rsp+198h] [rbp-1A8h] BYREF

  v2 = a2 - a1;
  if ( v2 > 384 )
  {
    v3 = 0xAAAAAAAAAAAAAAABLL * (v2 >> 7);
    v4 = (v3 - 2) / 2;
    v5 = a1 + 384 * v4 + 16;
    while ( 1 )
    {
      v6 = _mm_loadu_si128((const __m128i *)(v5 - 16));
      v7 = v5;
      v5 -= 384;
      v8 = v6;
      sub_9E6760((__int64)v9, v7);
      v10 = _mm_load_si128(&v8);
      sub_9E6760((__int64)v11, (__int64)v9);
      sub_A0ABD0(a1, v4, v3, &v10);
      sub_9E66A0((__int64)v11);
      if ( !v4 )
        break;
      --v4;
      sub_9E66A0((__int64)v9);
    }
    sub_9E66A0((__int64)v9);
  }
}

