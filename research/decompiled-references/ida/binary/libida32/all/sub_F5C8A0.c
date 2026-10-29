__int64 __fastcall sub_F5C8A0(__int64 *a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v5; // rbp
  __int64 result; // rax
  __int64 v7; // rbx
  __m128i v8; // xmm3
  __m128i *v9; // rdx
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __m128i v12; // xmm2
  __int64 v13; // rsi

  v3 = a3 - (_QWORD)a2;
  v5 = 0x6DB6DB6DB6DB6DB7LL * (v3 >> 3);
  result = 0x7FFFFFFFFFFFFFF8LL;
  a1[1] = 0;
  *a1 = v5;
  a1[2] = 0;
  if ( v3 > 0x7FFFFFFFFFFFFFF8LL )
  {
    v5 = 0x249249249249249LL;
LABEL_5:
    while ( 1 )
    {
      v7 = 56 * v5;
      result = operator new(56 * v5, (const std::nothrow_t *)&std::nothrow);
      if ( result )
        break;
      v5 >>= 1;
      if ( !v5 )
        goto LABEL_3;
    }
    v8 = _mm_loadu_si128(a2);
    a1[2] = result;
    a1[1] = v5;
    *(__m128i *)result = v8;
    *(__m128i *)(result + 16) = _mm_loadu_si128(a2 + 1);
    *(__m128i *)(result + 32) = _mm_loadu_si128(a2 + 2);
    *(_QWORD *)(result + 48) = a2[3].m128i_i64[0];
    v9 = (__m128i *)(result + 56);
    if ( result + v7 != result + 56 )
    {
      do
      {
        v10 = _mm_loadu_si128((__m128i *)((char *)v9 - 56));
        v11 = _mm_loadu_si128((__m128i *)((char *)v9 - 40));
        v9 = (__m128i *)((char *)v9 + 56);
        v12 = _mm_loadu_si128(v9 - 5);
        v13 = v9[-4].m128i_i64[0];
        *(__m128i *)((char *)v9 - 56) = v10;
        *(__m128i *)((char *)v9 - 40) = v11;
        *(__m128i *)((char *)v9 - 24) = v12;
        v9[-1].m128i_i64[1] = v13;
      }
      while ( (__m128i *)(result + v7) != v9 );
      result += 56 * (((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)(v7 - 112) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 1);
    }
    *a2 = _mm_loadu_si128((const __m128i *)result);
    a2[1] = _mm_loadu_si128((const __m128i *)(result + 16));
    a2[2] = _mm_loadu_si128((const __m128i *)(result + 32));
    result = *(_QWORD *)(result + 48);
    a2[3].m128i_i64[0] = result;
  }
  else
  {
    if ( v3 > 0 )
      goto LABEL_5;
LABEL_3:
    a1[2] = 0;
    a1[1] = 0;
  }
  return result;
}

