__int64 __fastcall sub_83E5A0(const __m128i *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v5; // r15
  const __m128i *v6; // r12
  __int64 v7; // rbp
  const __m128i *v8; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __m128i v12; // xmm0

  result = 3LL * a2;
  v5 = 24LL * a4;
  v6 = (const __m128i *)((char *)a1 + 24 * a2);
  v7 = a3 + v5;
  if ( a1 != v6 )
  {
    v8 = a1;
    do
    {
      while ( v8->m128i_i32[1] != 2 )
      {
        v8 = (const __m128i *)((char *)v8 + 24);
        if ( v6 == v8 )
          return result;
      }
      v10 = 24LL * (v8->m128i_i32[0] & (a4 - 1));
      v11 = a3 + v10;
      if ( v5 == v10 )
      {
LABEL_11:
        if ( a3 == v11 )
        {
LABEL_16:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        result = a3;
        while ( *(_DWORD *)(result + 4) )
        {
          result += 24;
          if ( v11 == result )
            goto LABEL_16;
        }
      }
      else
      {
        result = a3 + v10;
        while ( *(_DWORD *)(result + 4) )
        {
          result += 24;
          if ( v7 == result )
            goto LABEL_11;
        }
      }
      v12 = _mm_loadu_si128(v8);
      v8 = (const __m128i *)((char *)v8 + 24);
      *(__m128i *)result = v12;
      *(_QWORD *)(result + 16) = v8[-1].m128i_i64[1];
    }
    while ( v6 != v8 );
  }
  return result;
}

