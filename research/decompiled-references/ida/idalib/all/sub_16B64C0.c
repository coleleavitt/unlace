__int64 __fastcall sub_16B64C0(const __m128i *a1, const __m128i *a2, const __m128i *a3, const __m128i *a4, __int64 a5)
{
  __m128i v5; // xmm0
  __m128i v6; // xmm4
  __int64 v7; // rsi
  __int64 result; // rax
  unsigned __int64 v9; // r8
  __m128i v10; // xmm0
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  __m128i v13; // xmm4

  while ( a4 != a3 && a2 != a1 )
  {
    while ( (unsigned __int16)(((unsigned __int32)a3[4].m128i_i32[2] >> 4) & 0x3FFF) >= (unsigned __int16)(((unsigned __int32)a1[4].m128i_i32[2] >> 4) & 0x3FFF) )
    {
      v6 = _mm_loadu_si128(a1);
      a1 += 5;
      a5 += 80;
      *(__m128i *)(a5 - 80) = v6;
      *(__m128i *)(a5 - 64) = _mm_loadu_si128(a1 - 4);
      *(__m128i *)(a5 - 48) = _mm_loadu_si128(a1 - 3);
      *(__m128i *)(a5 - 32) = _mm_loadu_si128(a1 - 2);
      *(_QWORD *)(a5 - 16) = a1[-1].m128i_i64[0];
      *(_DWORD *)(a5 - 8) = a1[-1].m128i_i32[2];
      if ( a2 == a1 || a4 == a3 )
        goto LABEL_8;
    }
    v5 = _mm_loadu_si128(a3);
    a5 += 80;
    a3 += 5;
    *(__m128i *)(a5 - 80) = v5;
    *(__m128i *)(a5 - 64) = _mm_loadu_si128(a3 - 4);
    *(__m128i *)(a5 - 48) = _mm_loadu_si128(a3 - 3);
    *(__m128i *)(a5 - 32) = _mm_loadu_si128(a3 - 2);
    *(_QWORD *)(a5 - 16) = a3[-1].m128i_i64[0];
    *(_DWORD *)(a5 - 8) = a3[-1].m128i_i32[2];
  }
LABEL_8:
  v7 = (char *)a2 - (char *)a1;
  result = a5;
  v9 = 0xCCCCCCCCCCCCCCCDLL * (v7 >> 4);
  if ( v7 > 0 )
  {
    do
    {
      v10 = _mm_loadu_si128(a1);
      result += 80;
      a1 += 5;
      *(__m128i *)(result - 80) = v10;
      *(__m128i *)(result - 64) = _mm_loadu_si128(a1 - 4);
      *(__m128i *)(result - 48) = _mm_loadu_si128(a1 - 3);
      *(__m128i *)(result - 32) = _mm_loadu_si128(a1 - 2);
      *(_QWORD *)(result - 16) = a1[-1].m128i_i64[0];
      *(_DWORD *)(result - 8) = a1[-1].m128i_i32[2];
      --v9;
    }
    while ( v9 );
  }
  v11 = (char *)a4 - (char *)a3;
  v12 = 0xCCCCCCCCCCCCCCCDLL * (v11 >> 4);
  if ( v11 > 0 )
  {
    do
    {
      v13 = _mm_loadu_si128(a3);
      result += 80;
      a3 += 5;
      *(__m128i *)(result - 80) = v13;
      *(__m128i *)(result - 64) = _mm_loadu_si128(a3 - 4);
      *(__m128i *)(result - 48) = _mm_loadu_si128(a3 - 3);
      *(__m128i *)(result - 32) = _mm_loadu_si128(a3 - 2);
      *(_QWORD *)(result - 16) = a3[-1].m128i_i64[0];
      *(_DWORD *)(result - 8) = a3[-1].m128i_i32[2];
      --v12;
    }
    while ( v12 );
  }
  return result;
}
