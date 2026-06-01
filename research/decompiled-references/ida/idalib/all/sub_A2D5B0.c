void __fastcall sub_A2D5B0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rbp
  __m128i *v7; // r14
  __int64 v8; // r12
  __int64 v9; // r15
  __int8 v10; // al
  __m128i *v11; // r9
  __int64 v12; // r14
  char v13; // al
  __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // r12
  __int64 v17; // rax
  const __m128i *v18; // rax
  __int64 v19; // [rsp+8h] [rbp-1C0h]
  __m128i *v20; // [rsp+10h] [rbp-1B8h]
  __int64 m128i_i64; // [rsp+20h] [rbp-1A8h]
  __int64 v23; // [rsp+30h] [rbp-198h]
  __m128i si128; // [rsp+40h] [rbp-188h] BYREF
  _BYTE v26[376]; // [rsp+50h] [rbp-178h] BYREF

  v4 = a2;
  m128i_i64 = (__int64)a4[1].m128i_i64;
  v5 = a1 + 328 * a2;
  v6 = v5 + 16;
  v19 = (a3 - 1) / 2;
  v23 = a3 & 1;
  if ( a2 >= v19 )
  {
    if ( (a3 & 1) != 0 )
    {
      v9 = v5 + 16;
      si128 = _mm_load_si128(a4);
      sub_A21040((__int64)v26, m128i_i64);
      goto LABEL_14;
    }
    v8 = a2;
    v9 = v5 + 16;
    goto LABEL_17;
  }
  v7 = (__m128i *)(v5 + 200);
  while ( 1 )
  {
    v8 = 2 * (v4 + 1);
    v5 = a1 + 656 * (v4 + 1);
    if ( (unsigned __int8)sub_A09E20((unsigned int *)v5, (unsigned int *)(v5 - 328)) )
    {
      --v8;
      v5 = a1 + 328 * v8;
    }
    v11 = (__m128i *)(a1 + 328 * v4);
    *v11 = _mm_loadu_si128((const __m128i *)v5);
    v9 = v5 + 16;
    v20 = v11;
    sub_A1D050(v6, v5 + 16);
    v10 = *(_BYTE *)(v5 + 192) & 1 | v20[12].m128i_i8[0] & 0xFE;
    v20[12].m128i_i8[0] = v10;
    v20[12].m128i_i8[0] = *(_BYTE *)(v5 + 192) & 2 | v10 & 0xFD;
    sub_A2CCC0(v7, (const __m128i *)(v5 + 200));
    if ( v8 >= v19 )
      break;
    v7 = (__m128i *)(v5 + 200);
    v6 = v5 + 16;
    v4 = v8;
  }
  if ( !v23 )
  {
LABEL_17:
    if ( (a3 - 2) / 2 == v8 )
    {
      v15 = v8 + 1;
      v16 = 2 * (v8 + 1);
      v17 = v16 + 8 * (v16 + 8 * v15);
      v8 = v16 - 1;
      v18 = (const __m128i *)(a1 + 8 * v17 - 328);
      *(__m128i *)v5 = _mm_loadu_si128(v18);
      sub_A2D550(v9, (__int64)v18[1].m128i_i64);
      v5 = a1 + 328 * v8;
      v9 = v5 + 16;
    }
  }
  si128 = _mm_load_si128(a4);
  sub_A21040((__int64)v26, m128i_i64);
  v12 = (v8 - 1) / 2;
  if ( v8 > a2 )
  {
    while ( 1 )
    {
      v14 = a1 + 328 * v12;
      v5 = a1 + 328 * v8;
      if ( !(unsigned __int8)sub_A09E20((unsigned int *)v14, (unsigned int *)&si128) )
        break;
      v8 = v12;
      *(__m128i *)v5 = _mm_loadu_si128((const __m128i *)v14);
      sub_A1D050(v9, v14 + 16);
      v13 = *(_BYTE *)(v14 + 192) & 1 | *(_BYTE *)(v5 + 192) & 0xFE;
      *(_BYTE *)(v5 + 192) = v13;
      *(_BYTE *)(v5 + 192) = *(_BYTE *)(v14 + 192) & 2 | v13 & 0xFD;
      sub_A2CCC0((__m128i *)(v5 + 200), (const __m128i *)(v14 + 200));
      v9 = v14 + 16;
      if ( a2 >= v12 )
      {
        v5 = a1 + 328 * v12;
        break;
      }
      v12 = (v12 - 1) / 2;
    }
  }
LABEL_14:
  *(__m128i *)v5 = _mm_load_si128(&si128);
  sub_A2D550(v9, (__int64)v26);
  sub_A1FD80((__int64)v26);
}
