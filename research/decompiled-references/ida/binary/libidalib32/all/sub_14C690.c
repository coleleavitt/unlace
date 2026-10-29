__int64 (__fastcall **__fastcall sub_14C690(__int64 a1))()
{
  __m128i v1; // xmm0

  sub_195A00((TView *)a1);
  sub_F1920(a1 + 2736, a1);
  v1 = _mm_loadl_epi64((const __m128i *)&off_233BB8);
  *(_QWORD *)(a1 + 2792) = 0;
  *(_QWORD *)a1 = &off_2390F8;
  *(_QWORD *)(a1 + 2816) = 0;
  *(_QWORD *)(a1 + 2736) = off_239470;
  *(__m128i *)(a1 + 152) = _mm_unpacklo_epi64(v1, (__m128i)(unsigned __int64)off_239340);
  *(_OWORD *)(a1 + 2800) = 0;
  return off_239470;
}

