unsigned __int64 __fastcall sub_1AFD40(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  if ( result )
    return sub_1AF8F0(*(_QWORD **)(a1 + 64), a2, a3, a4, a5, a6, a7, a8, a9);
  return result;
}
