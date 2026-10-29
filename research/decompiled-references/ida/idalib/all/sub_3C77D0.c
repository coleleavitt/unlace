__int64 __fastcall sub_3C77D0(__int64 a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  __int64 v5; // rax

  v5 = *(_QWORD *)(*(_QWORD *)a1 + 1672LL);
  *(__m128i *)(v5 + 1584) = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  *(_OWORD *)(v5 + 1600) = -1;
  return sub_508600(*(_DWORD *)(*(_QWORD *)a1 + 1672LL) + 1400, a2, a3, a4, a5, 0, 0);
}
