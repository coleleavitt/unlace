__m128i *__fastcall sub_A066B0(const __m128i *a1, __int64 a2, __m128i *a3)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // rbx
  const __m128i *v6; // r12
  __int8 v7; // cl
  __int8 v8; // cl
  __int8 v9; // cl
  __int8 v10; // dl
  __int8 v11; // al
  __int64 m128i_i64; // rsi
  __int64 v13; // rdi
  __int8 v14; // al
  __int8 v15; // al

  v3 = a2 - (_QWORD)a1;
  v5 = 0xF0F0F0F0F0F0F0F1LL * (v3 >> 3);
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
      v10 = v6[5].m128i_i8[8];
      v11 = a3[5].m128i_i8[8];
      m128i_i64 = (__int64)v6[6].m128i_i64;
      v13 = (__int64)a3[6].m128i_i64;
      v6 = (const __m128i *)((char *)v6 + 136);
      a3 = (__m128i *)((char *)a3 + 136);
      v14 = v10 & 1 | v11 & 0xFE;
      a3[-3].m128i_i8[0] = v14;
      a3[-3].m128i_i8[0] = v6[-3].m128i_i8[0] & 6 | v14 & 0xF9;
      sub_9CAB60(v13, m128i_i64);
      v15 = v6[-1].m128i_i8[8] & 1 | a3[-1].m128i_i8[8] & 0xFE;
      a3[-1].m128i_i8[8] = v15;
      a3[-1].m128i_i8[8] = v6[-1].m128i_i8[8] & 2 | v15 & 0xFD;
      --v5;
    }
    while ( v5 );
  }
  return a3;
}

