__int64 __fastcall sub_A5F860(__int64 *a1, __m128i *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 i; // rbp
  __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __int64 v9; // rcx
  __int64 v10; // rdx

  result = 0x7FFFFFFFFFFFFFFLL;
  *a1 = a3;
  a1[1] = 0;
  a1[2] = 0;
  if ( a3 <= 0x7FFFFFFFFFFFFFFLL )
    result = a3;
  if ( a3 > 0 )
  {
    for ( i = result; ; i = (i + 1) >> 1 )
    {
      v5 = 16 * i;
      result = operator new(16 * i, (const std::nothrow_t *)&std::nothrow);
      if ( result )
        break;
      if ( i == 1 )
        return result;
    }
    v6 = result + v5;
    v7 = result + 16;
    *(__m128i *)result = _mm_loadu_si128(a2);
    if ( v5 == 16 )
    {
      v9 = result;
    }
    else
    {
      do
      {
        v8 = _mm_loadu_si128((const __m128i *)(v7 - 16));
        v7 += 16;
        *(__m128i *)(v7 - 16) = v8;
      }
      while ( v6 != v7 );
      v9 = v6 - 16;
    }
    v10 = *(_QWORD *)v9;
    a1[2] = result;
    a1[1] = i;
    a2->m128i_i64[0] = v10;
    a2->m128i_i32[2] = *(_DWORD *)(v9 + 8);
  }
  return result;
}

