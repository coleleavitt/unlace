__int64 __fastcall sub_1980470(__int64 *a1, unsigned int *a2, double a3, __m128 a4)
{
  unsigned __int16 *v5; // rsi
  unsigned __int64 v6; // rax

  v5 = *((unsigned __int16 **)a2 + 2);
  if ( !v5 )
    return sub_1B20F10(*(_QWORD *)(*a1 + 760), v5, *a2, a2[3], a2[1]);
  v6 = sub_190CCA0(a1, v5, a3, a4);
  if ( v6 != 1 )
  {
    v5 = (unsigned __int16 *)(v6 & 0xFFFFFFFFFFFFFFFELL);
    return sub_1B20F10(*(_QWORD *)(*a1 + 760), v5, *a2, a2[3], a2[1]);
  }
  return 0;
}
