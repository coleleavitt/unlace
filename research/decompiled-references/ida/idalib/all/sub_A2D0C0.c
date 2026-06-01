void __fastcall sub_A2D0C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rbx
  const __m128i *v6; // rsi
  __int64 v7; // [rsp+0h] [rbp-2D0h]
  __m128i v8; // [rsp+18h] [rbp-2B8h] BYREF
  _BYTE v9[176]; // [rsp+28h] [rbp-2A8h] BYREF
  __m128i v10[8]; // [rsp+D8h] [rbp-1F8h] BYREF
  __m128i v11; // [rsp+158h] [rbp-178h] BYREF
  _BYTE v12[176]; // [rsp+168h] [rbp-168h] BYREF
  __m128i v13[11]; // [rsp+218h] [rbp-B8h] BYREF

  v2 = a2 - a1;
  if ( v2 > 320 )
  {
    v3 = 0xCCCCCCCCCCCCCCCDLL * (v2 >> 6);
    v4 = (__int64)(v3 - 2) / 2;
    v7 = v3;
    v5 = a1 + 320 * v4 + 16;
    while ( 1 )
    {
      v8 = _mm_loadu_si128((const __m128i *)(v5 - 16));
      sub_A0A250((__int64)v9, v5);
      v6 = (const __m128i *)(v5 + 176);
      v5 -= 320;
      sub_A20FC0(v10, v6);
      v11 = _mm_load_si128(&v8);
      sub_A0A250((__int64)v12, (__int64)v9);
      sub_A20FC0(v13, v10);
      sub_A2CDD0(a1, v4, v7, &v11);
      sub_A1FDC0((__int64)v12);
      if ( !v4 )
        break;
      --v4;
      sub_A1FDC0((__int64)v9);
    }
    sub_A1FDC0((__int64)v9);
  }
}
