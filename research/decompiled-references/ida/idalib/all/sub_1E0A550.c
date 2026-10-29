void __fastcall sub_1E0A550(__int64 a1, __m128i *a2)
{
  __m128i *v2; // rbp
  __int64 v3; // r12
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __m128i v9; // xmm2
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __m128i *v18; // r13
  __int64 v19; // rbx
  void **v20; // rbp
  unsigned __int64 v21; // r12
  void *v22; // rdi

  v2 = *(__m128i **)a1;
  v3 = *(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v3 )
  {
    do
    {
      a2->m128i_i64[0] = 0;
      a2->m128i_i64[1] = 0;
      a2[1].m128i_i64[0] = 0;
      a2[1].m128i_i64[1] = 0;
      a2[2].m128i_i64[0] = 0;
      a2[2].m128i_i64[1] = 0;
      a2[3].m128i_i64[0] = 0;
      a2[3].m128i_i64[1] = 0;
      a2[4].m128i_i64[0] = 0;
      a2[4].m128i_i64[1] = 0;
      sub_1DFE940(a2);
      if ( v2->m128i_i64[0] )
      {
        v5 = a2[1].m128i_i64[0];
        v6 = a2[1].m128i_i64[1];
        v7 = a2[2].m128i_i64[0];
        a2[1] = _mm_loadu_si128(v2 + 1);
        v8 = a2[2].m128i_i64[1];
        a2[2] = _mm_loadu_si128(v2 + 2);
        v9 = _mm_loadu_si128(v2 + 3);
        v2[1].m128i_i64[0] = v5;
        v2[1].m128i_i64[1] = v6;
        v2[2].m128i_i64[0] = v7;
        v2[2].m128i_i64[1] = v8;
        v10 = a2[4].m128i_i64[0];
        v11 = a2[4].m128i_i64[1];
        v12 = a2[3].m128i_i64[0];
        v13 = a2[3].m128i_i64[1];
        a2[3] = v9;
        a2[4] = _mm_loadu_si128(v2 + 4);
        v2[4].m128i_i64[0] = v10;
        v14 = v2->m128i_i64[0];
        v2[3].m128i_i64[0] = v12;
        v2[3].m128i_i64[1] = v13;
        v2[4].m128i_i64[1] = v11;
        v15 = a2->m128i_i64[0];
        a2->m128i_i64[0] = v14;
        v16 = v2->m128i_i64[1];
        v2->m128i_i64[0] = v15;
        v17 = a2->m128i_i64[1];
        a2->m128i_i64[1] = v16;
        v2->m128i_i64[1] = v17;
      }
      v2 += 5;
      a2 += 5;
    }
    while ( (__m128i *)v3 != v2 );
    v18 = *(__m128i **)a1;
    v19 = *(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 8);
    if ( *(_QWORD *)a1 != v19 )
    {
      do
      {
        v19 -= 80;
        if ( *(_QWORD *)v19 )
        {
          v20 = *(void ***)(v19 + 40);
          v21 = *(_QWORD *)(v19 + 72) + 8LL;
          while ( v21 > (unsigned __int64)v20 )
          {
            v22 = *v20++;
            operator delete(v22);
          }
          operator delete(*(void **)v19);
        }
      }
      while ( (__m128i *)v19 != v18 );
    }
  }
}
