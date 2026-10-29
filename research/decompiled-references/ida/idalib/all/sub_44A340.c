void __fastcall sub_44A340(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r13
  __m128i *v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rdx
  __m128i v9; // xmm0
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rax

  v3 = qvector_reserve(a1, 0, a2, 40);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0;
  v6 = *(__m128i **)a1;
  v7 = v3;
  v8 = v4 - 1;
  if ( v8 >= 0 )
  {
    do
    {
      v9 = _mm_loadu_si128(v6);
      v3 += 40;
      v6 = (__m128i *)((char *)v6 + 40);
      *(__m128i *)(v3 - 40) = v9;
      *(__m128i *)(v3 - 24) = _mm_loadu_si128((__m128i *)((char *)v6 - 24));
      *(_QWORD *)(v3 - 8) = v6[-1].m128i_i64[1];
    }
    while ( v8-- != 0 );
    v6 = *(__m128i **)a1;
  }
  qfree(v6);
  v11 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 16) = v5;
  if ( v11 < a2 )
  {
    v12 = 5 * v11;
    v13 = v11 + 1;
    v14 = 8 * v12;
    v15 = v14 + v7;
    *(_QWORD *)v15 = 0;
    *(_QWORD *)(v15 + 24) = 0;
    *(_DWORD *)(v15 + 32) = 0;
    *(_OWORD *)(v15 + 8) = 0;
    if ( v13 < a2 )
    {
      v16 = v14 + 40;
      do
      {
        ++v13;
        v17 = v16 + *(_QWORD *)a1;
        v16 += 40;
        *(_QWORD *)v17 = 0;
        *(_QWORD *)(v17 + 24) = 0;
        *(_DWORD *)(v17 + 32) = 0;
        *(_OWORD *)(v17 + 8) = 0;
      }
      while ( a2 != v13 );
    }
  }
  *(_QWORD *)(a1 + 8) = a2;
}
