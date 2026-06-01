char __fastcall sub_B94CA0(__int64 a1, unsigned int *a2, __m128 a3, __m128 a4, __m128 a5)
{
  char result; // al
  __int64 v6; // rdx

  result = *(_BYTE *)(a1 + 952);
  if ( result )
  {
    v6 = *(_QWORD *)(a1 + 16);
    result = 0;
    if ( *(_QWORD *)(v6 + 8984) == qword_1C7ED78 && !*(_BYTE *)(v6 + 2416) )
      return (unsigned int)sub_B94720((_QWORD **)a1, a2, a3, a4, a5) != -1;
  }
  return result;
}

