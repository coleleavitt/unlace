void __fastcall sub_13C22E0(const __m128i **a1, unsigned __int64 a2)
{
  const __m128i *v2; // rdx
  unsigned __int64 v3; // rcx
  const __m128i *v4; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // r15
  __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbp
  const __m128i *v11; // rax
  unsigned __int64 v12; // rcx
  const __m128i *v13; // r14
  _WORD *v14; // rdx
  __m128i *v15; // rdi
  const __m128i *v16; // r9
  const __m128i *v17; // r8
  const __m128i *i; // rcx
  __m128i v19; // xmm0

  if ( a2 )
  {
    v2 = a1[1];
    if ( a2 > a1[2] - v2 )
    {
      v6 = (char *)v2 - (char *)*a1;
      v7 = v6 >> 4;
      if ( 0xFFFFFFFFFFFFFFFLL - (v6 >> 4) < a2 )
        std::__throw_length_error("vector::_M_default_append");
      v8 = v6 >> 4;
      if ( a2 >= v7 )
        v8 = a2;
      v9 = v7 + v8;
      if ( v9 > 0xFFFFFFFFFFFFFFFLL )
        v9 = 0xFFFFFFFFFFFFFFFLL;
      v10 = v9;
      v11 = (const __m128i *)operator new(v10 * 16);
      v12 = a2;
      v13 = v11;
      v14 = (__int16 *)((char *)v11->m128i_i16 + v6);
      do
      {
        *v14 &= 0xF000u;
        v14 += 8;
        *((_QWORD *)v14 - 1) = 0;
        --v12;
      }
      while ( v12 );
      v15 = (__m128i *)*a1;
      v16 = a1[1];
      v17 = v11;
      for ( i = *a1; v16 != i; v17[-1] = v19 )
      {
        v19 = _mm_loadu_si128(i++);
        ++v17;
      }
      if ( v15 )
        operator delete(v15);
      *a1 = v13;
      a1[2] = &v13[v10];
      a1[1] = &v13[a2 + v7];
    }
    else
    {
      v3 = a2;
      v4 = a1[1];
      do
      {
        v4->m128i_i16[0] &= 0xF000u;
        ++v4;
        v4[-1].m128i_i64[1] = 0;
        --v3;
      }
      while ( v3 );
      a1[1] = &v2[a2];
    }
  }
}
