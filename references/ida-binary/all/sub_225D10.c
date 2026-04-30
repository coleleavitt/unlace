__int64 __fastcall sub_225D10(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *v10; // rax

  v10 = &s1;
  if ( *(_QWORD *)(a1 + 16) )
    v10 = *(const char **)(a1 + 8);
  *(_QWORD *)(a2 + 8) = (unsigned __int8)sub_225880(v10, a3, a4, a5, a6, a7, a8, a9, a10);
  return 0;
}
