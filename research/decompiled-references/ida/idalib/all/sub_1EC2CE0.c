__int64 __fastcall sub_1EC2CE0(__int64 a1, __int64 a2)
{
  char **v3; // rsi
  char **v5; // rdi

  v3 = (char **)(a2 + 40);
  v5 = (char **)(a1 + 40);
  *(__m128i *)(v5 - 5) = _mm_loadu_si128((const __m128i *)(v3 - 5));
  *(__m128i *)(v5 - 3) = _mm_loadu_si128((const __m128i *)(v3 - 3));
  *((_DWORD *)v5 - 2) = *((_DWORD *)v3 - 2);
  *((_DWORD *)v5 - 1) = *((_DWORD *)v3 - 1);
  sub_A25240(v5, v3);
  sub_13A7720(a1 + 64, (__int64 *)(a2 + 64));
  *(_QWORD *)(a1 + 336) = *(_QWORD *)(a2 + 336);
  return a1;
}
