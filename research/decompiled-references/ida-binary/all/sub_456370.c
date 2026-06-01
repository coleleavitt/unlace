__int64 __fastcall sub_456370(
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
  bool v9; // dl
  double v10; // xmm4_8
  double v11; // xmm5_8
  __int64 result; // rax

  v9 = sub_435890(a1);
  result = 0;
  if ( v9 && *(_QWORD *)(a1 + 56) <= 1u )
    return (unsigned __int8)sub_456120(
                              *(_QWORD *)(a1 + 40),
                              **(const char ***)(a1 + 48),
                              a2,
                              a3,
                              a4,
                              a5,
                              v10,
                              v11,
                              a8,
                              a9);
  return result;
}
