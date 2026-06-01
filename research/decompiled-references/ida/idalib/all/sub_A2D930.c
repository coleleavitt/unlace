void __fastcall sub_A2D930(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rsi
  __int64 v4; // rbx
  const __m128i *v5; // r14
  const __m128i *v6; // rsi
  __int8 v7; // cl
  __int64 v8; // [rsp+0h] [rbp-2F0h]
  __m128i v9; // [rsp+18h] [rbp-2D8h] BYREF
  _BYTE v10[176]; // [rsp+28h] [rbp-2C8h] BYREF
  char v11; // [rsp+D8h] [rbp-218h]
  __m128i v12[8]; // [rsp+E0h] [rbp-210h] BYREF
  __m128i v13; // [rsp+168h] [rbp-188h] BYREF
  _BYTE v14[176]; // [rsp+178h] [rbp-178h] BYREF
  char v15; // [rsp+228h] [rbp-C8h]
  __m128i v16[12]; // [rsp+230h] [rbp-C0h] BYREF

  v2 = a2 - a1;
  if ( v2 > 328 )
  {
    v3 = 0x8F9C18F9C18F9C19LL * (v2 >> 3);
    v4 = (__int64)(v3 - 2) / 2;
    v8 = v3;
    v5 = (const __m128i *)(a1 + 328 * v4);
    while ( 1 )
    {
      v9 = _mm_loadu_si128(v5);
      sub_A0A250((__int64)v10, (__int64)v5[1].m128i_i64);
      v6 = (const __m128i *)((char *)v5 + 200);
      v7 = v5[12].m128i_i8[0];
      v5 = (const __m128i *)((char *)v5 - 328);
      v11 = v7 & 3 | v11 & 0xFC;
      sub_A20FC0(v12, v6);
      v13 = _mm_load_si128(&v9);
      sub_A0A250((__int64)v14, (__int64)v10);
      v15 = v11 & 3 | v15 & 0xFC;
      sub_A20FC0(v16, v12);
      sub_A2D5B0(a1, v4, v8, &v13);
      sub_A1FD80((__int64)v14);
      if ( !v4 )
        break;
      --v4;
      sub_A1FD80((__int64)v10);
    }
    sub_A1FD80((__int64)v10);
  }
}
