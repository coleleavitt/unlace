__int64 __fastcall sub_1FF5250(__int64 a1, __int64 a2)
{
  signed __int64 v3; // rbx
  __int64 v4; // rax
  __m128i v5; // xmm0
  const __m128i *v6; // rdx
  const __m128i *v7; // rdi
  const __m128i *v8; // rcx
  __int64 v9; // rsi
  __m128i v10; // xmm1
  __m128i v12[2]; // [rsp+0h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a2 + 144) - *(_QWORD *)(a2 + 136);
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( v3 >> 5 )
  {
    if ( (unsigned __int64)(v3 >> 5) > 0x7FFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v4 = operator new(v3);
  }
  else
  {
    v4 = 0;
  }
  v12[0].m128i_i64[0] = v4;
  v5 = _mm_loadl_epi64(v12);
  *(_QWORD *)(a1 + 16) = v4 + v3;
  *(__m128i *)a1 = _mm_unpacklo_epi64(v5, v5);
  v6 = *(const __m128i **)(a2 + 144);
  v7 = *(const __m128i **)(a2 + 136);
  if ( v6 != v7 )
  {
    v8 = *(const __m128i **)(a2 + 136);
    v9 = v4;
    do
    {
      v10 = _mm_loadu_si128(v8);
      v8 += 2;
      v9 += 32;
      *(__m128i *)(v9 - 32) = v10;
      *(__m128i *)(v9 - 16) = _mm_loadu_si128(v8 - 1);
    }
    while ( v6 != v8 );
    v4 += (((char *)&v6[-2] - (char *)v7) & 0xFFFFFFFFFFFFFFE0LL) + 32;
  }
  *(_QWORD *)(a1 + 8) = v4;
  return a1;
}
