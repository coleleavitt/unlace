int __fastcall sub_60D880(__int64 a1)
{
  const __m128i *v1; // rbx
  const char *v2; // rbp
  __int64 v3; // r14
  __int8 v4; // r13
  __int64 v5; // r12
  const char *v6; // rsi
  __m128i *v7; // r15
  int result; // eax
  __m128i v9; // xmm3
  __m128i si128; // xmm4
  __m128i v11; // [rsp+0h] [rbp-58h] BYREF
  __m128i v12[4]; // [rsp+10h] [rbp-48h] BYREF

  v1 = (const __m128i *)a1;
  v2 = *(const char **)a1;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_BYTE *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 56);
  v11 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v12[0] = _mm_loadu_si128((const __m128i *)(a1 + 40));
  while ( 1 )
  {
    v6 = (const char *)v1[-4].m128i_i64[0];
    v7 = (__m128i *)v1;
    v1 -= 4;
    result = strcmp(v2, v6);
    if ( result >= 0 )
      break;
    v1[4] = _mm_loadu_si128(v1);
    v1[5] = _mm_loadu_si128(v1 + 1);
    v1[6] = _mm_loadu_si128(v1 + 2);
    v1[7] = _mm_loadu_si128(v1 + 3);
  }
  v9 = _mm_load_si128(&v11);
  si128 = _mm_load_si128(v12);
  v7->m128i_i64[0] = (__int64)v2;
  v7[1].m128i_i64[1] = v3;
  v7[2].m128i_i8[0] = v4;
  v7[3].m128i_i64[1] = v5;
  *(__m128i *)((char *)v7 + 8) = v9;
  *(__m128i *)((char *)v7 + 40) = si128;
  return result;
}

