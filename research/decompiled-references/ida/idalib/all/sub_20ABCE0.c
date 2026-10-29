void __fastcall sub_20ABCE0(__int64 a1)
{
  __int64 v1; // r13
  const __m128i *v2; // r14
  __int64 *v3; // rsi
  __int64 v4; // rdx
  const __m128i *v5; // rdx
  const __m128i *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  const __m128i *v10; // r14
  __int64 v11; // rbx
  const __m128i *v12; // r12
  unsigned __int64 v13; // rax
  const __m128i *v14; // rbx
  const __m128i *v15; // rdi
  unsigned __int64 v16; // rbx
  _BYTE *v17; // r12
  __int64 v18; // rax
  _QWORD *v19; // rdi
  __m128 v20; // [rsp+0h] [rbp-F8h] BYREF
  _BYTE v21[232]; // [rsp+10h] [rbp-E8h] BYREF

  v1 = a1 + 16;
  v2 = (const __m128i *)sub_20ABC80(a1 + 16);
  if ( *(_DWORD *)(a1 + 16) >> 1 )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      v3 = (__int64 *)(a1 + 24);
      v4 = 12;
    }
    else
    {
      v3 = *(__int64 **)(a1 + 24);
      v4 = 3LL * *(unsigned int *)(a1 + 32);
    }
    sub_20ABC20(&v20, v3, &v3[v4], v1, 0);
    v5 = (const __m128i *)v20.m128_u64[1];
    v6 = (const __m128i *)v20.m128_u64[0];
  }
  else
  {
    v6 = (const __m128i *)sub_20ABC80(v1);
  }
  v20.m128_u64[0] = (unsigned __int64)v21;
  v20.m128_u64[1] = 0x800000000LL;
  sub_20A1320((__int64)&v20, v6, v5, v2);
  v10 = (const __m128i *)v20.m128_u64[0];
  v11 = 24LL * v20.m128_u32[2];
  v12 = (const __m128i *)(v20.m128_u64[0] + v11);
  if ( v20.m128_u64[0] != v20.m128_u64[0] + v11 )
  {
    _BitScanReverse64(&v13, 0xAAAAAAAAAAAAAAABLL * (v11 >> 3));
    sub_209F320(
      (__int64 *)v20.m128_u64[0],
      (__m128i *)(v20.m128_u64[0] + v11),
      2LL * (int)(63 - (v13 ^ 0x3F)),
      v7,
      v8,
      v9);
    if ( (unsigned __int64)v11 <= 0x180 )
    {
      sub_209E9F0((__int64)v10, v12);
    }
    else
    {
      v14 = v10 + 24;
      sub_209E9F0((__int64)v10, v10 + 24);
      if ( v12 != &v10[24] )
      {
        do
        {
          v15 = v14;
          v14 = (const __m128i *)((char *)v14 + 24);
          sub_209E8A0(v15);
        }
        while ( v12 != v14 );
      }
    }
  }
  sub_20A0EF0(v1);
  v16 = v20.m128_u64[0];
  v17 = (_BYTE *)(v20.m128_u64[0] + 24LL * v20.m128_u32[2]);
  if ( (_BYTE *)v20.m128_u64[0] != v17 )
  {
    do
    {
      v18 = *(_QWORD *)(v16 + 8);
      v19 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v18 & 0xFFFFFFFFFFFFFFFCLL) != 0
        && (v18 & 3) == 1
        && (unsigned int)*(unsigned __int8 *)v19 - 5 <= 0x20
        && ((BYTE1(*v19) & 0x7F) == 2 || *((_DWORD *)v19 - 2)) )
      {
        sub_20ABF20();
      }
      v16 += 24LL;
    }
    while ( v17 != (_BYTE *)v16 );
    v17 = (_BYTE *)v20.m128_u64[0];
  }
  if ( v17 != v21 )
    free(v17);
}
