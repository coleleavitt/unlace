unsigned __int64 __fastcall sub_ABDE0(__m128i *a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  const __m128i *v9; // r14
  const __m128i *v10; // rbp
  __int64 *v11; // rbx
  __m128i v12; // xmm0
  char *v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  __m128i v17; // xmm2
  unsigned __int64 result; // rax

  v3 = 8;
  v4 = (a2 >> 4) + 1;
  v5 = (a2 >> 4) + 3;
  if ( v5 >= 8 )
    v3 = (a2 >> 4) + 3;
  a1->m128i_i64[1] = v3;
  if ( v5 >> 60 )
    std::__throw_bad_alloc();
  v6 = operator new(8 * v3);
  v7 = a1->m128i_i64[1];
  a1->m128i_i64[0] = v6;
  v8 = (unsigned __int64)(v7 - v4) >> 1;
  v9 = (const __m128i *)(v6 + 8 * v8);
  v10 = (const __m128i *)((char *)v9 + 8 * v4);
  if ( v9 < v10 )
  {
    v11 = (__int64 *)(v6 + 8 * v8);
    do
      *v11++ = operator new(0x200u);
    while ( v11 < (__int64 *)v10 );
  }
  v12 = _mm_loadl_epi64(v9);
  v13 = &v10[-1].m128i_i8[8];
  v14 = *(_QWORD *)v13;
  v15 = v9->m128i_i64[0] + 512;
  a1[1] = _mm_unpacklo_epi64(v12, v12);
  v16 = v14 + 32 * (a2 & 0xF);
  v17 = (__m128i)v14;
  result = v14 + 512;
  a1[2] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v9);
  a1[3] = _mm_unpacklo_epi64((__m128i)v16, v17);
  a1[4] = _mm_unpacklo_epi64((__m128i)result, (__m128i)(unsigned __int64)v13);
  return result;
}

