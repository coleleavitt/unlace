_QWORD *__fastcall sub_21E7A50(_QWORD *a1, __int64 a2)
{
  double v4; // r14
  __int64 v5; // r12
  __int64 v6; // rax
  const __m128i *v7; // rdx
  const __m128i *v8; // rsi
  __int64 v9; // rbx
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rax
  __m128i v12; // xmm0
  const __m128i *v13; // rcx
  unsigned __int64 v14; // rdi
  __m128i v15; // xmm1
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  double v19[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v20; // [rsp+10h] [rbp-48h] BYREF
  __m128i v21[4]; // [rsp+18h] [rbp-40h] BYREF

  sub_21E7670(a2);
  v4 = *(double *)(a2 + 104);
  v5 = *(_QWORD *)(a2 + 120);
  v19[0] = *(double *)(a2 + 96);
  v19[1] = *(double *)(a2 + 128);
  v20 = *(_QWORD *)(a2 + 112);
  v6 = operator new(0x58u);
  v7 = *(const __m128i **)(a2 + 80);
  v8 = *(const __m128i **)(a2 + 72);
  v9 = v6;
  *(_DWORD *)v6 = 0;
  *(_OWORD *)(v6 + 8) = 0;
  v10 = (char *)v7 - (char *)v8;
  *(_QWORD *)(v6 + 24) = 0;
  v11 = 0xAAAAAAAAAAAAAAABLL * (((char *)v7 - (char *)v8) >> 3);
  if ( v11 )
  {
    if ( v11 > 0xAAAAAAAAAAAAAAALL )
      std::__throw_bad_alloc();
    v11 = operator new(v10);
    v7 = *(const __m128i **)(a2 + 80);
    v8 = *(const __m128i **)(a2 + 72);
  }
  v21[0].m128i_i64[0] = v11;
  v12 = _mm_loadl_epi64(v21);
  *(_QWORD *)(v9 + 24) = v11 + v10;
  *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64(v12, v12);
  if ( v8 != v7 )
  {
    v13 = v8;
    v14 = v11;
    do
    {
      v15 = _mm_loadu_si128(v13);
      v13 = (const __m128i *)((char *)v13 + 24);
      v14 += 24LL;
      *(__m128i *)(v14 - 24) = v15;
      *(_QWORD *)(v14 - 8) = v13[-1].m128i_i64[1];
    }
    while ( v7 != v13 );
    v11 += 8 * ((unsigned __int64)((char *)&v7[-2].m128i_u64[1] - (char *)v8) >> 3) + 24;
  }
  v19[0] = v4;
  *(_QWORD *)(v9 + 16) = v11;
  *(_QWORD *)(v9 + 64) = v5;
  v17 = _mm_loadh_ps(v19);
  *a1 = v9;
  *(__m128 *)(v9 + 32) = v17;
  *(_BYTE *)(v9 + 72) = 0;
  v18 = _mm_loadh_ps((const double *)&v20);
  *(_QWORD *)(v9 + 80) = 0;
  *(__m128 *)(v9 + 48) = v18;
  return a1;
}
