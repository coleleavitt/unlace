void __fastcall sub_209E910(__int64 a1, const __m128i *a2)
{
  char *v2; // r8
  const __m128i *v3; // rdi
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // r10
  const __m128i *v6; // r9
  unsigned __int64 v7; // rcx
  const __m128i *v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // [rsp+8h] [rbp-20h]

  if ( (const __m128i *)a1 != a2 )
  {
    v2 = (char *)a1;
    v3 = (const __m128i *)(a1 + 24);
    if ( a2 != v3 )
    {
      v4 = 0xAAAAAAAAAAAAAAABLL;
      v5 = (unsigned __int64)&v2[(((char *)&a2[-3] - v2) & 0xFFFFFFFFFFFFFFF8LL) + 48];
      do
      {
        while ( 1 )
        {
          v7 = v3[1].m128i_u64[0];
          v8 = (const __m128i *)((char *)v3 + 24);
          if ( v7 < *((_QWORD *)v2 + 2) )
            break;
          sub_209E8A0(v3);
          v3 = v6;
          if ( v6 == (const __m128i *)v5 )
            return;
        }
        v9 = v3->m128i_i64[0];
        v11 = _mm_loadu_si128(v3).m128i_i64[1];
        v10 = v4 * (((char *)v3 - v2) >> 3);
        if ( (char *)v3 - v2 > 0 )
        {
          do
          {
            v3 = (const __m128i *)((char *)v3 - 24);
            v3[1].m128i_i64[1] = v3->m128i_i64[0];
            v3[2].m128i_i64[0] = v3->m128i_i64[1];
            v3[2].m128i_i64[1] = v3[1].m128i_i64[0];
            --v10;
          }
          while ( v10 );
        }
        *(_QWORD *)v2 = v9;
        v3 = v8;
        *((_QWORD *)v2 + 2) = v7;
        *((_QWORD *)v2 + 1) = v11;
      }
      while ( v8 != (const __m128i *)v5 );
    }
  }
}
