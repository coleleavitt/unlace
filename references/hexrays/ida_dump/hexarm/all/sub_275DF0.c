void __fastcall sub_275DF0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  __m128i *v6; // r13
  __int64 v7; // rbx
  __m128i *v8; // r12
  unsigned __int64 v9; // rdx
  const __m128i *v10; // rbx
  const __m128i *v11; // rdi

  v1 = *(_QWORD *)(a1 + 56);
  v2 = v1 + 32LL * *(_QWORD *)(a1 + 64);
  if ( v2 != v1 )
  {
    do
    {
      v3 = v1;
      v1 += 32;
      sub_26C070(a1, v3);
    }
    while ( v2 != v1 );
    v6 = *(__m128i **)(a1 + 56);
    v7 = 2LL * *(_QWORD *)(a1 + 64);
    v8 = &v6[v7];
    if ( v6 != &v6[v7] )
    {
      if ( (v7 * 16) >> 5 )
      {
        _BitScanReverse64(&v9, (v7 * 16) >> 5);
        sub_275AC0(v6, &v6[v7], 2LL * (int)v9, (__int64 (__fastcall *)(__int64, __int64))sub_26A2B0, v4, v5);
        if ( v7 > 32 )
        {
          v10 = v6 + 32;
          sub_275690(v6, v6 + 32, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_26A2B0);
          do
          {
            v11 = v10;
            v10 += 2;
            sub_275600(v11, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_26A2B0);
          }
          while ( v8 != v10 );
          return;
        }
      }
      else
      {
        sub_275AC0(v6, &v6[v7], -2, (__int64 (__fastcall *)(__int64, __int64))sub_26A2B0, v4, v5);
      }
      sub_275690(v6, &v6[v7], (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_26A2B0);
    }
  }
}
