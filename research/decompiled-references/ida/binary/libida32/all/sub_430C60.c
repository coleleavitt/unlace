void __fastcall sub_430C60(__int64 *a1, unsigned __int64 a2)
{
  const __m128i *v2; // rbx
  const __m128i *v3; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r15
  char *v10; // rax
  const __m128i *v11; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // rcx
  __m128i *v15; // [rsp+0h] [rbp-48h]
  __int8 *v16; // [rsp+8h] [rbp-40h]

  if ( a2 )
  {
    v2 = (const __m128i *)a1[1];
    if ( 0xAAAAAAAAAAAAAAABLL * ((a1[2] - (__int64)v2) >> 3) < a2 )
    {
      v4 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v2->m128i_i64 - *a1) >> 3);
      v5 = v4;
      if ( 0x555555555555555LL - v4 < a2 )
        std::__throw_length_error("vector::_M_default_append");
      v6 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v2->m128i_i64 - *a1) >> 3);
      v16 = &v2->m128i_i8[-*a1];
      if ( a2 >= v4 )
        v6 = a2;
      v15 = (__m128i *)*a1;
      v7 = v4 + v6;
      if ( v7 > 0x555555555555555LL )
        v7 = 0x555555555555555LL;
      v8 = 24 * v7;
      v9 = operator new(24 * v7);
      v10 = &v16[v9];
      do
      {
        *((_QWORD *)v10 + 2) = 0;
        v10 += 24;
        *(_OWORD *)(v10 - 24) = 0;
      }
      while ( v10 != &v16[24 * a2 + v9] );
      if ( v15 != v2 )
      {
        v11 = v15;
        v12 = v9;
        do
        {
          v13 = _mm_loadu_si128(v11);
          v14 = v11[1].m128i_i64[0];
          v11 = (const __m128i *)((char *)v11 + 24);
          v12 += 24;
          *(__m128i *)(v12 - 24) = v13;
          *(_QWORD *)(v12 - 8) = v14;
        }
        while ( v2 != v11 );
      }
      if ( v15 )
        operator delete(v15, a1[2] - (_QWORD)v15);
      *a1 = v9;
      a1[1] = v9 + 24 * (v5 + a2);
      a1[2] = v8 + v9;
    }
    else
    {
      v3 = (const __m128i *)a1[1];
      do
      {
        v3[1].m128i_i64[0] = 0;
        v3 = (const __m128i *)((char *)v3 + 24);
        *(const __m128i *)((char *)&v3[-2] + 8) = 0;
      }
      while ( v3 != (const __m128i *)((char *)v2 + 24 * a2) );
      a1[1] = (__int64)v3;
    }
  }
}

