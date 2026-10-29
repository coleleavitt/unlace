__m128i *__fastcall sub_204C7F0(__m128i *a1, const __m128i *a2, const __m128i *a3)
{
  __m128i *result; // rax
  __m128i v4; // xmm0
  __int64 v5; // rdi
  __int64 v6; // rcx
  __m128i si128; // xmm6
  __m128i v8; // xmm2
  __m128i v9; // xmm1
  __m128i v10; // xmm3
  __int64 v11; // r8
  __int64 v12; // rdx
  __m128i v13; // xmm5
  __m128i v14; // xmm4
  __m128i v15; // xmm7
  __m128i v16[4]; // [rsp+0h] [rbp-68h] BYREF
  __m128i v17[2]; // [rsp+40h] [rbp-28h] BYREF

  result = a1;
  v4 = _mm_loadu_si128(a3 + 2);
  v5 = a3[3].m128i_i64[0];
  v6 = a3[3].m128i_i64[1];
  si128 = _mm_load_si128(v17);
  a3[3].m128i_i64[0] = 0;
  v8 = _mm_loadu_si128(a3);
  v9 = _mm_loadu_si128(a3 + 1);
  a3[3].m128i_i64[1] = 0;
  a3[2] = si128;
  v10 = _mm_loadu_si128(a2 + 2);
  v11 = a2[3].m128i_i64[0];
  v12 = a2[3].m128i_i64[1];
  v13 = _mm_loadu_si128(a2);
  a2[3].m128i_i64[0] = 0;
  v14 = _mm_loadu_si128(a2 + 1);
  v15 = _mm_load_si128(v16);
  a2[3].m128i_i64[1] = 0;
  a2[2] = v15;
  *result = v13;
  result[1] = v14;
  result[2] = v10;
  result[3].m128i_i64[0] = v11;
  result[3].m128i_i64[1] = v12;
  result[4] = v8;
  result[5] = v9;
  result[6] = v4;
  result[7].m128i_i64[0] = v5;
  result[7].m128i_i64[1] = v6;
  return result;
}
