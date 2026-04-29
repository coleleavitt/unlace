__m128i *__fastcall sub_2CBDD0(__int64 a1, __int64 a2, __m128i *a3, unsigned __int64 a4)
{
  __m128i *v5; // rax
  __m128i *v6; // rbx
  __int64 v7; // rax
  __m128i v9; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v9 = _mm_unpacklo_epi64(_mm_loadl_epi64(a3), (__m128i)a4);
  v5 = (__m128i *)qalloc(16);
  if ( !v5 )
    sub_4E402();
  v5->m128i_i64[0] = 0;
  v6 = v5;
  v5->m128i_i64[1] = 0;
  sub_2CB280(v5, (__int64)&v9);
  v7 = v9.m128i_i64[0];
  if ( v9.m128i_i64[0] < (unsigned __int64)v9.m128i_i64[1] )
  {
    sub_2CB960(a1, v6, (__int64)&v9);
    v7 = v9.m128i_i64[0];
  }
  a3->m128i_i64[0] = v7;
  return v6;
}
