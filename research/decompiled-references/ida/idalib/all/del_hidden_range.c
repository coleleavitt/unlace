__int64 __fastcall del_hidden_range(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(qword_2CCB598 + 1672);
  *(__m128i *)(v1 + 1584) = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  *(_OWORD *)(v1 + 1600) = -1;
  return sub_505AA0(v1 + 1400, a1, 1);
}
