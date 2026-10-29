__int64 __fastcall proxim_graph_t__::vfunc_21(const __m128i *a1)
{
  __int64 v1; // rbx
  __m128i v2; // xmm0
  __int8 v3; // al

  v1 = qalloc_or_throw(344);
  sub_27B8C0(v1, (__int64)a1);
  v2 = _mm_loadu_si128(a1 + 16);
  *(_QWORD *)(v1 + 272) = 0;
  *(_QWORD *)v1 = proxim_graph_t___vtable;
  *(__m128i *)(v1 + 256) = v2;
  *(_OWORD *)(v1 + 280) = 0;
  *(_OWORD *)(v1 + 304) = 0;
  *(_OWORD *)(v1 + 320) = 0;
  sub_371300((__m128i *)(v1 + 272), (const __m128i *)a1[17].m128i_i64);
  v3 = a1[21].m128i_i8[0];
  *(_QWORD *)(v1 + 304) = v1;
  *(_BYTE *)(v1 + 336) = v3;
  return v1;
}
