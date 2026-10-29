__m128i *__fastcall sub_A0B690(const __m128i *a1, __int64 a2, __m128i *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  const __m128i *v6; // r12
  __int8 v7; // al
  __int8 v8; // al
  __int8 v9; // al
  __int64 m128i_i64; // rsi

  v3 = a2 - (_QWORD)a1;
  v5 = 0x2E8BA2E8BA2E8BA3LL * (v3 >> 4);
  if ( v3 > 0 )
  {
    v6 = a1;
    do
    {
      *a3 = _mm_loadu_si128(v6);
      sub_9CAB60((__int64)a3[1].m128i_i64, (__int64)v6[1].m128i_i64);
      v7 = v6[3].m128i_i8[0] & 1 | a3[3].m128i_i8[0] & 0xFE;
      a3[3].m128i_i8[0] = v7;
      v8 = v6[3].m128i_i8[0] & 2 | v7 & 0xFD;
      a3[3].m128i_i8[0] = v8;
      v9 = v6[3].m128i_i8[0] & 4 | v8 & 0xFB;
      a3[3].m128i_i8[0] = v9;
      a3[3].m128i_i8[0] = v6[3].m128i_i8[0] & 8 | v9 & 0xF7;
      sub_9CAB60((__int64)&a3[3].m128i_i64[1], (__int64)&v6[3].m128i_i64[1]);
      sub_9FDD90((__int64)&a3[5].m128i_i64[1], (__int64)&v6[5].m128i_i64[1]);
      m128i_i64 = (__int64)v6[8].m128i_i64;
      v6 += 11;
      sub_9FDD90((__int64)a3[8].m128i_i64, m128i_i64);
      a3 += 11;
      a3[-1].m128i_i64[1] = v6[-1].m128i_i64[1];
      --v5;
    }
    while ( v5 );
  }
  return a3;
}

