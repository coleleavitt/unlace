unsigned __int64 *__fastcall sub_6D3320(
        __int64 *a1,
        double a2,
        __m128i a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9)
{
  unsigned __int64 v9; // r12
  __int64 v10; // rbx
  unsigned int v11; // eax
  unsigned __int64 *result; // rax
  double v13; // xmm4_8
  double v14; // xmm5_8

  v9 = -1;
  v10 = *(_QWORD *)(*a1 + 1672) + 1704LL;
  while ( 1 )
  {
    v11 = sub_505E30(v10, v9);
    result = sub_505DE0(v10, v11);
    if ( !result )
      break;
    v9 = *result;
    if ( *((char *)result + 17) >= 0 )
      sub_6D2E80(a1, (__int64 *)result, a2, a3, a4, a5, v13, v14, a8, a9);
  }
  return result;
}
