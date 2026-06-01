unsigned __int64 *__fastcall sub_9A1960(__m128i *a1, __int64 a2, __int64 a3, bool a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rsi
  _BYTE v9[4]; // [rsp+0h] [rbp-38h] BYREF
  int v10; // [rsp+4h] [rbp-34h]
  __int128 v11; // [rsp+8h] [rbp-30h]

  v7 = *(_QWORD **)(a2 + 16);
  if ( *(_BYTE *)(a1[20].m128i_i64[1] + 62) )
  {
    v9[0] = 0;
    v10 = 1;
    v11 = 0;
    sub_99B5B0((__int64)a1, (__int64)v7, a4, (__int64)v9);
    a3 = 1;
    v7 = *(_QWORD **)(a2 + 16);
  }
  return sub_9A0FC0(a1, v7, a3, 0, a5, a6);
}
