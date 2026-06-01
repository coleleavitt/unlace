__m128i *__fastcall sub_172F0A0(__m128i *a1, const __m128i *a2)
{
  _QWORD *v2; // r13
  _QWORD *v4; // r14
  __m128i v5; // xmm1
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // r12
  char *v11; // rdi
  __int8 v12; // dl
  __int8 v13; // dl
  __int8 v14; // dl
  __int8 v15; // dl
  __int8 v16; // dl
  __int8 v17; // dl
  __int8 v18; // dl
  __int8 v19; // dl
  __int8 v20; // al

  v2 = (_QWORD *)a1[4].m128i_i64[0];
  a1->m128i_i64[0] = a2->m128i_i64[0];
  v4 = (_QWORD *)a1[4].m128i_i64[1];
  a1->m128i_i64[1] = a2->m128i_i64[1];
  a1[1] = _mm_loadu_si128(a2 + 1);
  a1[2].m128i_i64[0] = a2[2].m128i_i64[0];
  a1[2].m128i_i64[1] = a2[2].m128i_i64[1];
  v5 = _mm_loadu_si128(a2 + 3);
  a1[4].m128i_i64[1] = 0;
  a1[5].m128i_i64[0] = 0;
  a1[4].m128i_i64[0] = 0;
  a1[3] = v5;
  a1[4].m128i_i64[0] = a2[4].m128i_i64[0];
  v6 = a2[4].m128i_i64[1];
  a2[4].m128i_i64[0] = 0;
  v7 = a1[4].m128i_i64[1];
  a1[4].m128i_i64[1] = v6;
  v8 = a2[5].m128i_i64[0];
  a2[4].m128i_i64[1] = v7;
  v9 = a1[5].m128i_i64[0];
  a1[5].m128i_i64[0] = v8;
  a2[5].m128i_i64[0] = v9;
  if ( v2 != v4 )
  {
    v10 = v2;
    do
    {
      while ( 1 )
      {
        v11 = (char *)v10[3];
        if ( v11 == (char *)(v10 + 5) )
          break;
        operator delete(v11);
        v10 += 8;
        if ( v10 == v4 )
          goto LABEL_5;
      }
      v10 += 8;
    }
    while ( v4 != v10 );
  }
LABEL_5:
  if ( v2 )
    operator delete(v2);
  v12 = a1[6].m128i_i8[8];
  a1[5].m128i_i32[2] = a2[5].m128i_i32[2];
  a1[5].m128i_i32[3] = a2[5].m128i_i32[3];
  a1[6].m128i_i64[0] = a2[6].m128i_i64[0];
  v13 = a2[6].m128i_i8[8] & 1 | v12 & 0xFE;
  a1[6].m128i_i8[8] = v13;
  v14 = a2[6].m128i_i8[8] & 2 | v13 & 0xFD;
  a1[6].m128i_i8[8] = v14;
  v15 = a2[6].m128i_i8[8] & 4 | v14 & 0xFB;
  a1[6].m128i_i8[8] = v15;
  v16 = a2[6].m128i_i8[8] & 8 | v15 & 0xF7;
  a1[6].m128i_i8[8] = v16;
  v17 = a2[6].m128i_i8[8] & 0x10 | v16 & 0xEF;
  a1[6].m128i_i8[8] = v17;
  v18 = a2[6].m128i_i8[8] & 0x20 | v17 & 0xDF;
  a1[6].m128i_i8[8] = v18;
  v19 = a2[6].m128i_i8[8] & 0x40 | v18 & 0xBF;
  a1[6].m128i_i8[8] = v19;
  v20 = a1[6].m128i_i8[9];
  a1[6].m128i_i8[8] = a2[6].m128i_i8[8] & 0x80 | v19 & 0x7F;
  a1[6].m128i_i8[9] = a2[6].m128i_i8[9] & 3 | v20 & 0xFC;
  a1[6].m128i_i32[2] = a2[6].m128i_i32[2] & 0x3FC00 | a1[6].m128i_i32[2] & 0xFFFC03FF;
  a1[6].m128i_i32[3] = a2[6].m128i_i32[3];
  a1[7] = _mm_loadu_si128(a2 + 7);
  a1[8] = _mm_loadu_si128(a2 + 8);
  a1[9] = _mm_loadu_si128(a2 + 9);
  a1[10].m128i_i64[0] = a2[10].m128i_i64[0];
  return a1;
}
