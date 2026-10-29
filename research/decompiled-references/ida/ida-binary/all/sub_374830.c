unsigned __int64 __fastcall sub_374830(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const __m128i *func; // rax
  double v11; // xmm4_8
  double v12; // xmm5_8
  __m128i v13; // xmm0

  sub_29C4E0(a1, (__int64)a2);
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)a1 = proxim_graph_t___vtable;
  *(_QWORD *)(a1 + 296) = a2;
  *(_QWORD *)(a1 + 304) = a1;
  *(_QWORD *)(a1 + 312) = 0;
  *(_BYTE *)(a1 + 336) = 0;
  *(_OWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 280) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  func = (const __m128i *)get_func(a2);
  v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)a2);
  if ( func )
    v13 = _mm_loadu_si128(func);
  *(__m128i *)(a1 + 256) = v13;
  if ( !(unsigned __int8)sub_372A30(a1 + 272, a2, *(double *)v13.m128i_i64, a4, a5, a6, v11, v12, a9, a10) )
    sub_370F70(a1 + 272, a2);
  return sub_373640(a1, a2, *(double *)v13.m128i_i64);
}
