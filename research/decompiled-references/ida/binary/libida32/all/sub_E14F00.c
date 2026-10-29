__int64 __fastcall sub_E14F00(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 result; // rax
  size_t v5; // rdx
  __int64 v6; // rbp
  unsigned __int64 v7; // r13
  size_t v8; // rdx
  __m128i v9; // xmm0

  v2 = a1;
  if ( a1 == a2 )
    return a1;
  v3 = a1 + 16;
  result = a1 + 16;
  if ( a2 != a1 + 16 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(v3 - 8);
      if ( v5 == *(_QWORD *)(v3 + 8) && (!v5 || !memcmp(*(const void **)(v3 - 16), *(const void **)v3, v5)) )
        break;
      v2 = v3;
      v3 += 16;
      result = v3;
      if ( a2 == v3 )
        return result;
    }
    if ( a2 == v2 )
    {
      return a2;
    }
    else
    {
      v6 = v2 + 32;
      if ( a2 != v2 + 32 )
      {
        v7 = v3 + ((a2 - 32 - v3) & 0xFFFFFFFFFFFFFFF0LL) + 32;
        do
        {
          while ( 1 )
          {
            v8 = *(_QWORD *)(v2 + 8);
            if ( v8 != *(_QWORD *)(v6 + 8) || v8 && memcmp(*(const void **)v2, *(const void **)v6, v8) )
              break;
            v6 += 16;
            if ( v6 == v7 )
              return v3;
          }
          v9 = _mm_loadu_si128((const __m128i *)v6);
          v6 += 16;
          *(__m128i *)(v2 + 16) = v9;
          v2 = v3;
          v3 += 16;
        }
        while ( v6 != v7 );
      }
      return v3;
    }
  }
  return result;
}

