void __fastcall sub_443B00(__int64 a1, const __m128i *a2)
{
  const __m128i *v2; // r13
  __m128i *v3; // r12
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  bool v6; // cf
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdx
  const __m128i *v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rcx
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r13
  __int64 v16; // [rsp+8h] [rbp-40h]

  v2 = *(const __m128i **)(a1 + 8);
  v3 = *(__m128i **)a1;
  v4 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v2->m128i_i64 - *(_QWORD *)a1) >> 3);
  if ( v4 == 0x555555555555555LL )
    std::__throw_length_error("vector::_M_realloc_append");
  v5 = 1;
  if ( v4 )
    v5 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v6 = __CFADD__(v5, v4);
  v7 = v5 - 0x5555555555555555LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  if ( v6 )
  {
    v8 = 0x7FFFFFFFFFFFFFF8LL;
  }
  else
  {
    if ( v7 > 0x555555555555555LL )
      v7 = 0x555555555555555LL;
    v8 = 24 * v7;
  }
  v16 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v9 = operator new(v8);
  *(__m128i *)(v9 + v16) = _mm_loadu_si128(a2);
  *(_QWORD *)(v9 + v16 + 16) = a2[1].m128i_i64[0];
  if ( v3 == v2 )
  {
    v14 = v9;
  }
  else
  {
    v10 = v9;
    v11 = v3;
    do
    {
      v12 = _mm_loadu_si128(v11);
      v13 = v11[1].m128i_i64[0];
      v11 = (const __m128i *)((char *)v11 + 24);
      v10 += 24LL;
      *(__m128i *)(v10 - 24) = v12;
      *(_QWORD *)(v10 - 8) = v13;
    }
    while ( v11 != v2 );
    v14 = v9 + 8 * ((unsigned __int64)((char *)&v11[-2].m128i_u64[1] - (char *)v3) >> 3) + 24;
  }
  v15 = v14 + 24;
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v15;
  *(_QWORD *)(a1 + 16) = v8 + v9;
}
