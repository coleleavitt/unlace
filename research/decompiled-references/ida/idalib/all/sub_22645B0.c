__int64 __fastcall sub_22645B0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  _BYTE *v5; // rax
  __m128i si128; // xmm0
  __int64 v7; // rdx

  v4 = sub_2259FA0(a2, a3);
  v5 = (_BYTE *)sub_228B1B0(a2, a3, v4);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  *(_QWORD *)a1 = a1 + 24;
  *(__m128i *)(a1 + 8) = si128;
  sub_A1FE50((_QWORD *)a1, v5, &v5[v7]);
  sub_228F0B0(a1, 1, v4);
  return a1;
}
