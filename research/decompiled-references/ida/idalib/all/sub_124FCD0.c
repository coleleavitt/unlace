void __fastcall sub_124FCD0(const __m128i **a1, unsigned __int64 a2)
{
  const __m128i *v2; // rcx
  unsigned __int64 v3; // rdx
  const __m128i *v4; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  const __m128i *v12; // rax
  unsigned __int64 v13; // rcx
  const __m128i *v14; // r14
  _QWORD *v15; // rdx
  __m128i *v16; // rdi
  const __m128i *v17; // rsi
  const __m128i *v18; // rcx
  const __m128i *i; // rdx
  __m128i v20; // xmm0

  if ( a2 )
  {
    v2 = a1[1];
    if ( a2 > 0xAAAAAAAAAAAAAAABLL * (((char *)a1[2] - (char *)v2) >> 3) )
    {
      v7 = (char *)v2 - (char *)*a1;
      v8 = 0xAAAAAAAAAAAAAAABLL * (v7 >> 3);
      if ( 0xAAAAAAAAAAAAAAALL - v8 < a2 )
        std::__throw_length_error("vector::_M_default_append");
      v9 = 0xAAAAAAAAAAAAAAABLL * (v7 >> 3);
      if ( a2 >= v8 )
        v9 = a2;
      v10 = v8 + v9;
      if ( v10 > 0xAAAAAAAAAAAAAAALL )
        v10 = 0xAAAAAAAAAAAAAAALL;
      v11 = 24 * v10;
      v12 = (const __m128i *)operator new(24 * v10);
      v13 = a2;
      v14 = v12;
      v15 = (__int64 *)((char *)v12->m128i_i64 + v7);
      do
      {
        *v15 = 0;
        v15 += 3;
        *(v15 - 2) = 0;
        *((_BYTE *)v15 - 8) = 0;
        --v13;
      }
      while ( v13 );
      v16 = (__m128i *)*a1;
      v17 = a1[1];
      v18 = v12;
      for ( i = *a1; v17 != i; v18[-1].m128i_i64[1] = i[-1].m128i_i64[1] )
      {
        v20 = _mm_loadu_si128(i);
        i = (const __m128i *)((char *)i + 24);
        v18 = (const __m128i *)((char *)v18 + 24);
        *(__m128i *)((char *)v18 - 24) = v20;
      }
      if ( v16 )
        operator delete(v16);
      *a1 = v14;
      a1[2] = (const __m128i *)((char *)v14 + v11);
      a1[1] = (const __m128i *)((char *)v14 + 24 * (a2 - 0x5555555555555555LL * (v7 >> 3)));
    }
    else
    {
      v3 = a2;
      v4 = a1[1];
      do
      {
        v4->m128i_i64[0] = 0;
        v4 = (const __m128i *)((char *)v4 + 24);
        v4[-1].m128i_i64[0] = 0;
        v4[-1].m128i_i8[8] = 0;
        --v3;
      }
      while ( v3 );
      a1[1] = (const __m128i *)((char *)v2 + 24 * a2);
    }
  }
}
