unsigned int *__fastcall sub_6B2310(
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
  unsigned int v9; // r12d
  __int64 v10; // rbx
  unsigned int v11; // eax
  unsigned int *result; // rax
  double v13; // xmm4_8
  double v14; // xmm5_8

  v9 = -1;
  v10 = *(_QWORD *)(*a1 + 1480) + 1624LL;
  while ( 1 )
  {
    v11 = sub_4EE8E0(v10, v9);
    result = sub_4EE890(v10, v11);
    if ( !result )
      break;
    v9 = *result;
    if ( *((char *)result + 9) >= 0 )
      sub_6B1E80(a1, (int *)result, a2, a3, a4, a5, v13, v14, a8, a9);
  }
  return result;
}

