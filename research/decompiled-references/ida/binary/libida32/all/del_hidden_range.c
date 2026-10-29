__int64 __fastcall del_hidden_range(unsigned int a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(qword_2CA1698 + 1480);
  *(__m128i *)(v1 + 1532) = _mm_load_si128((const __m128i *)&xmmword_2383860);
  return sub_4EE550(v1 + 1360, a1, 1);
}

