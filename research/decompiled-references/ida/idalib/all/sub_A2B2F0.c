void __fastcall sub_A2B2F0(__int64 a1, __int64 a2)
{
  __m128i *v2; // r14
  __m128i *v4; // rbp
  unsigned __int64 v5; // r15
  __m128i *v6; // r14
  __m128i *v7; // r13
  __m128i *v8; // rdi
  unsigned __int64 v9; // [rsp+0h] [rbp-D8h]
  __int64 v10; // [rsp+8h] [rbp-D0h]
  __m128i v11; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v12[7]; // [rsp+20h] [rbp-B8h] BYREF
  char v13; // [rsp+90h] [rbp-48h]

  if ( a1 != a2 )
  {
    v2 = (__m128i *)(a1 + 136);
    if ( a2 != a1 + 136 )
    {
      v9 = a1 + 136 * ((0x10F0F0F0F0F0F0F1LL * ((unsigned __int64)(a2 - 272 - a1) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 272;
      v10 = a1 + 16;
      do
      {
        v4 = (__m128i *)((char *)v2 + 136);
        if ( (unsigned __int8)sub_A09E20((unsigned int *)v2, (unsigned int *)a1) )
        {
          v11 = _mm_loadu_si128(v2);
          sub_A0A1C0(v12, v2 + 1);
          v13 = v2[8].m128i_i8[0] & 3 | v13 & 0xFC;
          v5 = 0xF0F0F0F0F0F0F0F1LL * (((__int64)v2->m128i_i64 - a1) >> 3);
          if ( (__int64)v2->m128i_i64 - a1 > 0 )
          {
            v6 = (__m128i *)((char *)v2 + 136);
            do
            {
              v7 = v6 - 17;
              v8 = v6;
              v6 = (__m128i *)((char *)v6 - 136);
              *v6 = _mm_loadu_si128((__m128i *)((char *)v6 - 136));
              sub_A0B090((__int64)&v8[-8].m128i_i64[1], (__int64)&v6[-8].m128i_i64[1]);
              v6[8].m128i_i8[0] = v7[8].m128i_i8[0] & 2 | v7[8].m128i_i8[0] & 1 | v6[8].m128i_i8[0] & 0xFC;
              --v5;
            }
            while ( v5 );
          }
          *(__m128i *)a1 = _mm_load_si128(&v11);
          sub_A0B090(v10, (__int64)v12);
          *(_BYTE *)(a1 + 128) = v13 & 3 | *(_BYTE *)(a1 + 128) & 0xFC;
          sub_A09CE0((__int64)v12);
        }
        else
        {
          sub_A2ACD0(v2);
        }
        v2 = v4;
      }
      while ( v4 != (__m128i *)v9 );
    }
  }
}
