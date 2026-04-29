_QWORD *sub_241330()
{
  _QWORD *v0; // rbx
  __m128i *v1; // rax

  v0 = (_QWORD *)j__qalloc_or_throw(32);
  *v0 = -1;
  v0[1] = -4294967225LL;
  v0[2] = 0xFFFFFFFFLL;
  v0[3] = 0;
  v1 = (__m128i *)qalloc_or_throw(24);
  v1[1].m128i_i64[0] = 0;
  *v1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v1, (__m128i)(unsigned __int64)v1);
  v0[3] = v1;
  return v0;
}
