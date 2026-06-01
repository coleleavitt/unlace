__int64 __fastcall sub_908E30(__m128i *a1, const __m128i *a2, unsigned __int64 a3, const __m128i *a4)
{
  __m128i v4; // xmm2
  __int64 v5; // rax
  const __m128i *v6; // rsi
  __m128i *v7; // r8
  __m128i *v8; // rdi
  __m128i v9; // xmm0
  __int64 result; // rax
  unsigned __int64 v11; // rsi

  if ( a2 > a4 )
  {
    a4 = a2;
    v7 = a1;
    result = 0;
    v11 = a3 - (_QWORD)a2;
    if ( a3 <= (unsigned __int64)a4 )
      return result;
    goto LABEL_5;
  }
  v4 = _mm_loadu_si128(a2);
  v5 = (char *)a4 - (char *)a2;
  v6 = a2 + 1;
  v7 = (__m128i *)((char *)a1 + v5);
  *a1 = v4;
  v8 = a1 + 1;
  if ( v5 > 16 )
  {
    do
    {
      v9 = _mm_loadu_si128(v6);
      v8 += 2;
      v6 += 2;
      v8[-2] = v9;
      v8[-1] = _mm_loadu_si128(v6 - 1);
    }
    while ( v7 > v8 );
  }
  result = 0;
  v11 = a3 - (_QWORD)a4;
  if ( a3 > (unsigned __int64)a4 )
  {
    do
    {
LABEL_5:
      v7->m128i_i8[result] = a4->m128i_i8[result];
      ++result;
    }
    while ( v11 != result );
  }
  return result;
}
