void __fastcall sub_2122680(__int64 a1, __int64 a2)
{
  const __m128i *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  __m128i v5; // xmm0
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  const __m128i *v10; // rbp
  __int64 v11; // rbx
  void *v12; // rdi

  v2 = *(const __m128i **)a1;
  v3 = *(_QWORD *)a1 + 72LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v3 )
  {
    do
    {
      v4 = v2->m128i_i64[0];
      *(_QWORD *)(a2 + 16) = 0;
      v2 = (const __m128i *)((char *)v2 + 72);
      a2 += 72;
      *(_QWORD *)(a2 - 48) = 0;
      *(_QWORD *)(a2 - 64) = 0;
      *(_QWORD *)(a2 - 72) = v4;
      v5 = _mm_loadu_si128(v2 - 2);
      *(_QWORD *)(a2 - 64) = v2[-4].m128i_i64[0];
      v6 = v2[-4].m128i_i64[1];
      v2[-4].m128i_i64[0] = 0;
      v7 = *(_QWORD *)(a2 - 56);
      *(_QWORD *)(a2 - 56) = v6;
      v8 = v2[-3].m128i_i64[0];
      v2[-4].m128i_i64[1] = v7;
      v9 = *(_QWORD *)(a2 - 48);
      *(_QWORD *)(a2 - 48) = v8;
      v2[-3].m128i_i64[0] = v9;
      LODWORD(v9) = v2[-3].m128i_i32[2];
      *(__m128i *)(a2 - 32) = v5;
      *(_DWORD *)(a2 - 40) = v9;
      *(_QWORD *)(a2 - 16) = v2[-1].m128i_i64[0];
      *(_QWORD *)(a2 - 8) = v2[-1].m128i_i64[1];
    }
    while ( (const __m128i *)v3 != v2 );
    v10 = *(const __m128i **)a1;
    v11 = *(_QWORD *)a1 + 72LL * *(unsigned int *)(a1 + 8);
    if ( *(_QWORD *)a1 != v11 )
    {
      do
      {
        while ( 1 )
        {
          v11 -= 72;
          v12 = *(void **)(v11 + 8);
          if ( !v12 )
            break;
          operator delete(v12);
          if ( (const __m128i *)v11 == v10 )
            return;
        }
      }
      while ( (const __m128i *)v11 != v10 );
    }
  }
}
