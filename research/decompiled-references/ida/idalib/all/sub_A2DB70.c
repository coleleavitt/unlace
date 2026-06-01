void __fastcall sub_A2DB70(__int64 a1, __m128i *a2)
{
  __m128i *v2; // rbx
  unsigned int *v4; // r15
  __m128i *v5; // r13
  __int64 m128i_i64; // rsi
  __int8 v7; // dl
  const __m128i *v8; // rsi
  __int64 v9; // rbx
  unsigned __int64 v10; // r14
  __m128i *v11; // rbx
  __m128i *v12; // r8
  __m128i *v13; // r15
  __m128i v14; // xmm4
  __int8 *v15; // rbx
  char v16; // cl
  const __m128i *v17; // rsi
  __m128i *v18; // rdi
  __int8 v19; // al
  __m128i *v20; // r14
  __m128i *v21; // [rsp+0h] [rbp-198h]
  __int64 v22; // [rsp+0h] [rbp-198h]
  __m128i v24; // [rsp+10h] [rbp-188h] BYREF
  _BYTE v25[176]; // [rsp+20h] [rbp-178h] BYREF
  char v26; // [rsp+D0h] [rbp-C8h]
  __m128i v27[12]; // [rsp+D8h] [rbp-C0h] BYREF

  if ( (__m128i *)a1 != a2 )
  {
    v2 = (__m128i *)(a1 + 328);
    if ( a2 != (__m128i *)(a1 + 328) )
    {
      do
      {
        v4 = &v2[-21].m128i_u32[2];
        v5 = (__m128i *)((char *)v2 + 328);
        m128i_i64 = (__int64)v2[1].m128i_i64;
        if ( (unsigned __int8)sub_A09E20((unsigned int *)v2, (unsigned int *)a1) )
        {
          v24 = _mm_loadu_si128(v2);
          sub_A0A250((__int64)v25, m128i_i64);
          v7 = v2[12].m128i_i8[0];
          v8 = (__m128i *)((char *)v2 + 200);
          v9 = (__int64)v2->m128i_i64 - a1;
          v26 = v7 & 3 | v26 & 0xFC;
          sub_A20FC0(v27, v8);
          v10 = 0x8F9C18F9C18F9C19LL * (v9 >> 3);
          if ( v9 > 0 )
          {
            v11 = v5;
            do
            {
              v12 = v11 - 41;
              v13 = v11;
              v11 = (__m128i *)((char *)v11 - 328);
              v21 = v12;
              *v11 = _mm_loadu_si128((__m128i *)((char *)v11 - 328));
              sub_A1D050((__int64)&v13[-20].m128i_i64[1], (__int64)&v11[-20].m128i_i64[1]);
              v11[12].m128i_i8[0] = v21[12].m128i_i8[0] & 2 | v21[12].m128i_i8[0] & 1 | v11[12].m128i_i8[0] & 0xFC;
              sub_A2CCC0(v13 - 8, v11 - 8);
              --v10;
            }
            while ( v10 );
          }
          *(__m128i *)a1 = _mm_load_si128(&v24);
          sub_A1D050(a1 + 16, (__int64)v25);
          *(_BYTE *)(a1 + 192) = v26 & 3 | *(_BYTE *)(a1 + 192) & 0xFC;
          sub_A2CCC0((__m128i *)(a1 + 200), v27);
          sub_A1FD80((__int64)v25);
        }
        else
        {
          v14 = _mm_loadu_si128(v2);
          v15 = &v2[-21].m128i_i8[8];
          v24 = v14;
          sub_A21040((__int64)v25, m128i_i64);
          while ( 1 )
          {
            v22 = (__int64)(v15 + 344);
            v20 = (__m128i *)(v15 + 328);
            if ( !(unsigned __int8)sub_A09E20((unsigned int *)&v24, v4) )
              break;
            *(__m128i *)(v15 + 328) = _mm_loadu_si128((const __m128i *)v15);
            sub_A1D050(v22, (__int64)(v15 + 16));
            v16 = v15[192];
            v17 = (const __m128i *)(v15 + 200);
            v18 = (__m128i *)(v15 + 528);
            v15 -= 328;
            v19 = v16 & 1 | v20[12].m128i_i8[0] & 0xFE;
            v20[12].m128i_i8[0] = v19;
            v4 = (unsigned int *)v15;
            v20[12].m128i_i8[0] = v15[520] & 2 | v19 & 0xFD;
            sub_A2CCC0(v18, v17);
          }
          *v20 = _mm_load_si128(&v24);
          sub_A2D550(v22, (__int64)v25);
          sub_A1FD80((__int64)v25);
        }
        v2 = v5;
      }
      while ( a2 != v5 );
    }
  }
}
