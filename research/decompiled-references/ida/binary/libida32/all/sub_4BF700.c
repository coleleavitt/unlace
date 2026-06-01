void __fastcall sub_4BF700(__int64 a1, __int64 a2)
{
  const __m128i *v2; // r14
  __m128i *v3; // r13
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rdx
  bool v7; // cf
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // rax
  __m128i v12; // xmm1
  __int64 v13; // rdx
  __m128i v14; // xmm1
  __int64 v15; // rdx
  __m128i v16; // xmm1
  __m128i v17; // xmm1
  const __m128i *v18; // rax
  __int64 v19; // rdx
  __m128i v20; // xmm1
  __int64 v21; // rcx
  __m128i v22; // xmm1
  __int64 v23; // rcx
  __m128i v24; // xmm1
  __m128i v25; // xmm1
  __int64 v26; // rbx
  __int64 v27; // [rsp+8h] [rbp-40h]

  v2 = *(const __m128i **)(a1 + 8);
  v3 = *(__m128i **)a1;
  v4 = (__int64)v2->m128i_i64 - *(_QWORD *)a1;
  v5 = 0x2E8BA2E8BA2E8BA3LL * (v4 >> 3);
  if ( v5 == 0x1745D1745D1745DLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v6 = 1;
  if ( v5 )
    v6 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v7 = __CFADD__(v6, v5);
  v8 = v6 + v5;
  if ( v7 )
  {
    v9 = 0x7FFFFFFFFFFFFFF8LL;
  }
  else
  {
    if ( v8 > 0x1745D1745D1745DLL )
      v8 = 0x1745D1745D1745DLL;
    v9 = 88 * v8;
  }
  v10 = operator new(v9);
  v11 = v10 + v4;
  *(_OWORD *)(v11 + 40) = 0;
  *(_OWORD *)(v11 + 64) = 0;
  *(_QWORD *)(v11 + 32) = 0;
  *(_QWORD *)(v11 + 56) = 0;
  v12 = _mm_loadu_si128((const __m128i *)a2);
  v13 = *(_QWORD *)(a2 + 32);
  *(_BYTE *)(v11 + 80) = 1;
  *(__m128i *)v11 = v12;
  v14 = _mm_loadu_si128((const __m128i *)(a2 + 16));
  *(_QWORD *)(v11 + 32) = v13;
  v15 = *(_QWORD *)(a2 + 56);
  *(__m128i *)(v11 + 16) = v14;
  v16 = _mm_loadu_si128((const __m128i *)(a2 + 40));
  *(_OWORD *)(a2 + 40) = 0;
  *(__m128i *)(v11 + 40) = v16;
  v17 = _mm_loadu_si128((const __m128i *)(a2 + 64));
  *(_OWORD *)(a2 + 64) = 0;
  *(_QWORD *)(v11 + 56) = v15;
  *(__m128i *)(v11 + 64) = v17;
  *(_QWORD *)(a2 + 32) = 0;
  *(_QWORD *)(a2 + 56) = 0;
  *(_BYTE *)(a2 + 80) = 0;
  *(_OWORD *)a2 = 0;
  *(_OWORD *)(a2 + 16) = 0;
  if ( v3 == v2 )
  {
    v19 = v10;
  }
  else
  {
    v18 = v3;
    v19 = v10;
    do
    {
      *(_QWORD *)(v19 + 32) = 0;
      v18 = (const __m128i *)((char *)v18 + 88);
      v19 += 88;
      *(_OWORD *)(v19 - 48) = 0;
      *(_QWORD *)(v19 - 32) = 0;
      *(_OWORD *)(v19 - 24) = 0;
      v20 = _mm_loadu_si128((const __m128i *)((char *)v18 - 88));
      v21 = v18[-4].m128i_i64[1];
      *(_BYTE *)(v19 - 8) = 1;
      *(__m128i *)(v19 - 88) = v20;
      v22 = _mm_loadu_si128((const __m128i *)((char *)v18 - 72));
      *(_QWORD *)(v19 - 56) = v21;
      v23 = v18[-2].m128i_i64[0];
      *(__m128i *)(v19 - 72) = v22;
      v24 = _mm_loadu_si128(v18 - 3);
      *(_QWORD *)(v19 - 32) = v23;
      *(__m128i *)(v19 - 48) = v24;
      v25 = _mm_loadu_si128((const __m128i *)((char *)v18 - 24));
      v18[-4].m128i_i64[1] = 0;
      *(__m128i *)(v19 - 24) = v25;
      v18[-3] = 0;
      v18[-2].m128i_i64[0] = 0;
      *(const __m128i *)((char *)&v18[-2] + 8) = 0;
      *(const __m128i *)((char *)&v18[-6] + 8) = 0;
      *(const __m128i *)((char *)&v18[-5] + 8) = 0;
      v18[-1].m128i_i8[8] = 0;
    }
    while ( v2 != v18 );
  }
  v26 = v19 + 88;
  if ( v3 )
  {
    v27 = v10;
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
    v10 = v27;
  }
  *(_QWORD *)a1 = v10;
  *(_QWORD *)(a1 + 8) = v26;
  *(_QWORD *)(a1 + 16) = v9 + v10;
}

