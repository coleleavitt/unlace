__int64 (__fastcall **__fastcall sub_14CE40(__int64 a1))()
{
  __m128i v1; // xmm0

  sub_196600((TView *)a1);
  sub_F2800(a1 + 2736, a1);
  v1 = _mm_loadl_epi64((const __m128i *)&off_234BB8);
  *(_QWORD *)(a1 + 2792) = 0;
  *(_QWORD *)a1 = &off_23A0F8;
  *(_QWORD *)(a1 + 2816) = 0;
  *(_QWORD *)(a1 + 2736) = off_23A470;
  *(__m128i *)(a1 + 152) = _mm_unpacklo_epi64(v1, (__m128i)(unsigned __int64)off_23A340);
  *(_OWORD *)(a1 + 2800) = 0;
  return off_23A470;
}

