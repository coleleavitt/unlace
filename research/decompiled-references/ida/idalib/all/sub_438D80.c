void __fastcall sub_438D80(__int64 a1, unsigned int *a2, __int8 *a3)
{
  __m128i *v4; // rbp
  __m128i *v5; // r14
  __int64 v6; // r12
  __int64 v7; // rax
  bool v8; // cf
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rax
  const __m128i *v13; // rdx
  __int64 v14; // rbp
  __m128i v15; // xmm0
  __int64 v16; // rbp
  __int8 *v17; // [rsp+8h] [rbp-40h]
  __int64 v18; // [rsp+8h] [rbp-40h]

  v4 = *(__m128i **)(a1 + 8);
  if ( v4 == *(__m128i **)(a1 + 16) )
  {
    v5 = *(__m128i **)a1;
    v6 = ((__int64)v4->m128i_i64 - *(_QWORD *)a1) >> 4;
    if ( v6 == 0x7FFFFFFFFFFFFFFLL )
      std::__throw_length_error("vector::_M_realloc_append");
    v7 = 1;
    if ( v6 )
      v7 = ((__int64)v4->m128i_i64 - *(_QWORD *)a1) >> 4;
    v8 = __CFADD__(v7, v6);
    v9 = v7 + v6;
    if ( v8 )
    {
      v10 = 0x7FFFFFFFFFFFFFF0LL;
    }
    else
    {
      if ( v9 > 0x7FFFFFFFFFFFFFFLL )
        v9 = 0x7FFFFFFFFFFFFFFLL;
      v10 = 16 * v9;
    }
    v17 = &v4->m128i_i8[-*(_QWORD *)a1];
    v11 = operator new(v10);
    *(_QWORD *)&v17[v11] = *a2;
    v17[v11 + 8] = *a3;
    if ( v4 == v5 )
    {
      v12 = v11;
    }
    else
    {
      v12 = v11;
      v13 = v5;
      v14 = v11 + (char *)v4 - (char *)v5;
      do
      {
        v15 = _mm_loadu_si128(v13);
        v12 += 16;
        ++v13;
        *(__m128i *)(v12 - 16) = v15;
      }
      while ( v12 != v14 );
    }
    v16 = v12 + 16;
    if ( v5 )
    {
      v18 = v11;
      operator delete(v5, *(_QWORD *)(a1 + 16) - (_QWORD)v5);
      v11 = v18;
    }
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = v16;
    *(_QWORD *)(a1 + 16) = v10 + v11;
  }
  else
  {
    v4->m128i_i64[0] = *a2;
    v4->m128i_i8[8] = *a3;
    *(_QWORD *)(a1 + 8) += 16LL;
  }
}
