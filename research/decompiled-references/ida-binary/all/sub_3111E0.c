__int64 __fastcall sub_3111E0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rdx
  char *v11; // rcx
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 result; // rax

  v10 = (unsigned int)sub_310FB0(a3, a4, a5, a6, a7, a8, a9, a10, a1, a2);
  result = 1;
  if ( (_BYTE)v10 )
    return (unsigned __int8)sub_308340(0, a2, v10, v11, a3, a4, a5, a6, v12, v13, a9, a10);
  return result;
}
