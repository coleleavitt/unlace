void __fastcall sub_19E840(__int64 a1, const __m128i *a2)
{
  __m128i *v2; // rbx
  __m128i *v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rax
  bool v6; // cf
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r14
  const __m128i *v11; // rdx
  __int64 v12; // rcx
  __m128i v13; // xmm0
  __int64 v14; // rbx
  __int64 v15; // [rsp+8h] [rbp-40h]

  v2 = *(__m128i **)(a1 + 8);
  v3 = *(__m128i **)a1;
  v4 = ((__int64)v2->m128i_i64 - *(_QWORD *)a1) >> 4;
  if ( v4 == 0x7FFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v5 = 1;
  if ( v4 )
    v5 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v6 = __CFADD__(v5, v4);
  v7 = v5 + v4;
  if ( v6 )
  {
    v8 = 0x7FFFFFFFFFFFFFF0LL;
  }
  else
  {
    if ( v7 > 0x7FFFFFFFFFFFFFFLL )
      v7 = 0x7FFFFFFFFFFFFFFLL;
    v8 = 16 * v7;
  }
  v15 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v9 = operator new(v8);
  v10 = v9;
  *(__m128i *)(v9 + v15) = _mm_loadu_si128(a2);
  if ( v3 == v2 )
  {
    v12 = v9;
  }
  else
  {
    v11 = v3;
    v12 = v9 + (char *)v2 - (char *)v3;
    do
    {
      v13 = _mm_loadu_si128(v11);
      v9 += 16;
      ++v11;
      *(__m128i *)(v9 - 16) = v13;
    }
    while ( v12 != v9 );
  }
  v14 = v12 + 16;
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
  *(_QWORD *)a1 = v10;
  *(_QWORD *)(a1 + 8) = v14;
  *(_QWORD *)(a1 + 16) = v8 + v10;
}
