__m128i *__fastcall sub_2D5C90(__int64 a1, double a2, __int64 a3, __m128i *a4, unsigned __int64 a5)
{
  __m128i v5; // xmm1
  __m128i *v7; // rbx
  char v8; // al
  __m128i *v10; // rdi
  __m128i *v11; // rax
  unsigned __int64 v12; // [rsp+0h] [rbp-40h] BYREF
  __m128 v13; // [rsp+8h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+20h] [rbp-20h]

  v5 = (__m128i)a5;
  v14 = __readfsqword(0x28u);
  v7 = *(__m128i **)(a1 + 24);
  if ( !v7 )
  {
    v12 = a5;
    v11 = (__m128i *)qalloc(16);
    v7 = v11;
    if ( !v11 )
      sub_515CC(a2, *(double *)v5.m128i_i64);
    v11->m128i_i64[0] = 0;
    v5 = _mm_loadl_epi64((const __m128i *)&v12);
    v11->m128i_i64[1] = 0;
  }
  v13 = (__m128)_mm_unpacklo_epi64(_mm_loadl_epi64(a4), v5);
  v8 = sub_2D4D80(v7, (char **)&v13, nullptr, v13);
  a4->m128i_i64[0] = v13.m128_u64[0];
  if ( !v8 )
  {
    if ( *(_QWORD *)(a1 + 24) )
    {
      return nullptr;
    }
    else
    {
      sub_2BC920(v7->m128i_i64);
      v10 = v7;
      v7 = nullptr;
      qfree(v10);
    }
  }
  return v7;
}
