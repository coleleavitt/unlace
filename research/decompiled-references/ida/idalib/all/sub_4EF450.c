void __fastcall sub_4EF450(const __m128i *a1, __m128i *a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  __m128i *v5; // rbx
  __int64 i; // r12
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r8

  v3 = (char *)a2 - (char *)a1;
  v5 = a2;
  if ( (char *)a2 - (char *)a1 > 16 )
  {
    for ( i = ((v3 >> 4) - 2) / 2; ; --i )
    {
      sub_4E5230((__int64)a1, i, v3 >> 4, a1[i].m128i_u64[0], a1[i].m128i_u64[1]);
      if ( !i )
        break;
    }
  }
  v7 = v3 >> 4;
  if ( (unsigned __int64)a2 < a3 )
  {
    do
    {
      while ( 1 )
      {
        v8 = v5->m128i_i64[0];
        if ( strcmp(*(const char **)(v5->m128i_i64[0] + 24), *(const char **)(a1->m128i_i64[0] + 24)) < 0 )
          break;
        if ( (unsigned __int64)++v5 >= a3 )
          return;
      }
      v9 = v5->m128i_u64[1];
      ++v5;
      v5[-1] = _mm_loadu_si128(a1);
      sub_4E5230((__int64)a1, 0, v7, v8, v9);
    }
    while ( (unsigned __int64)v5 < a3 );
  }
}
