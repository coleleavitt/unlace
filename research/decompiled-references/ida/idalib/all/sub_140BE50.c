unsigned __int64 __fastcall sub_140BE50(__int64 a1, int *a2)
{
  int v3; // eax
  signed __int64 v4; // rbp
  unsigned __int64 result; // rax
  __m128i v6; // xmm0
  const __m128i *v7; // rdx
  const __m128i *v8; // rdi
  const __m128i *v9; // rcx
  unsigned __int64 v10; // rsi
  __m128i v11; // xmm1
  __m128i v12[2]; // [rsp+8h] [rbp-20h] BYREF

  v3 = *a2;
  v4 = *((_QWORD *)a2 + 2) - *((_QWORD *)a2 + 1);
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = v3;
  *(_QWORD *)(a1 + 16) = 0;
  result = 0xAAAAAAAAAAAAAAABLL * (v4 >> 3);
  *(_QWORD *)(a1 + 24) = 0;
  if ( result )
  {
    if ( result > 0xAAAAAAAAAAAAAAALL )
      std::__throw_bad_alloc();
    result = operator new(v4);
  }
  v12[0].m128i_i64[0] = result;
  v6 = _mm_loadl_epi64(v12);
  *(_QWORD *)(a1 + 24) = result + v4;
  *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(v6, v6);
  v7 = *((const __m128i **)a2 + 2);
  v8 = *((const __m128i **)a2 + 1);
  if ( v7 != v8 )
  {
    v9 = *((const __m128i **)a2 + 1);
    v10 = result;
    do
    {
      v11 = _mm_loadu_si128(v9);
      v9 = (const __m128i *)((char *)v9 + 24);
      v10 += 24LL;
      *(__m128i *)(v10 - 24) = v11;
      *(_QWORD *)(v10 - 8) = v9[-1].m128i_i64[1];
    }
    while ( v7 != v9 );
    result += 8 * ((unsigned __int64)((char *)&v7[-2].m128i_u64[1] - (char *)v8) >> 3) + 24;
  }
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
