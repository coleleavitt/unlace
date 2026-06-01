_QWORD *__fastcall sub_1DEC5C0(__int64 a1, __int64 a2, __int64 a3, __m128i *a4, double a5, __m128 a6)
{
  __int64 v7; // rsi

  v7 = *(_QWORD *)a2;
  if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0xB) != 0 )
      return sub_1DD3870((__int64 *)a1, v7, (const __m128i *)(a2 + 8), a3, 0, a4, a5, a6);
    sub_18C4110(*(_QWORD *)a1, *(_DWORD *)(a1 + 40), v7);
  }
  return (_QWORD *)a2;
}
