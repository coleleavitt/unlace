unsigned __int64 sub_97D70()
{
  __int64 v0; // rax
  __int64 v1; // rax
  __int64 v2; // rsi
  unsigned __int64 v3; // r8
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v7; // rbx
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  __int64 v10; // rax
  __int64 v11; // rdi
  __m128i v12; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+10h] [rbp-38h] BYREF
  __m128i v14; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v14 = 0;
  v0 = qvector_reserve();
  v13 = v0;
  v14.m128i_i64[0] = 4;
  *(_WORD *)v0 = 17481;
  *(_BYTE *)(v0 + 2) = 67;
  *(_BYTE *)(v13 + 3) = 0;
  v1 = xmmword_251928;
  v2 = qword_251920;
  v3 = xmmword_251928 + 1;
  if ( (unsigned __int64)&v13 >= qword_251920
    && (unsigned __int64)&v13 < qword_251920 + 24LL * *((_QWORD *)&xmmword_251928 + 1) )
  {
    v7 = v13;
    v8 = _mm_loadl_epi64(&v14);
    v13 = 0;
    v9 = _mm_loadl_epi64((const __m128i *)&v14.m128i_u64[1]);
    v14 = 0;
    if ( *((_QWORD *)&xmmword_251928 + 1) < v3 )
    {
      v12.m128i_i64[1] = v9.m128i_i64[0];
      v12.m128i_i64[0] = v8.m128i_i64[0];
      qword_251920 = qvector_reserve();
      v2 = qword_251920;
      v9 = _mm_loadl_epi64((const __m128i *)&v12.m128i_u64[1]);
      v1 = xmmword_251928;
      v8 = _mm_loadl_epi64(&v12);
    }
    v10 = v2 + 24 * v1;
    *(_QWORD *)v10 = v7;
    v11 = v13;
    *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64(v8, v9);
    *(_QWORD *)&xmmword_251928 = xmmword_251928 + 1;
    if ( v11 )
    {
      v14.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    if ( *((_QWORD *)&xmmword_251928 + 1) < v3 )
    {
      qword_251920 = qvector_reserve();
      v2 = qword_251920;
      v1 = xmmword_251928;
    }
    v4 = _mm_loadu_si128(&v14);
    v5 = v2 + 24 * v1;
    *(_QWORD *)v5 = v13;
    *(__m128i *)(v5 + 8) = v4;
    *(_QWORD *)&xmmword_251928 = xmmword_251928 + 1;
  }
  return v15 - __readfsqword(0x28u);
}

