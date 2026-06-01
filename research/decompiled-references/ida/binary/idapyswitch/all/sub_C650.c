__int64 __fastcall sub_C650(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        char **a11)
{
  __int64 v11; // rax
  char *v12; // rbx
  double v13; // xmm4_8
  double v14; // xmm5_8

  if ( 24LL * *(_QWORD *)(a10 + 72) )
  {
    v11 = *(_QWORD *)(a10 + 64);
    v12 = (char *)s1;
    if ( *(_QWORD *)(v11 + 8) )
      v12 = *(char **)v11;
    sub_5F00();
    sub_C570("Python3TargetDLL", nullptr, v12, a1, a2, a3, a4, v13, v14, a7, a8);
    return 1;
  }
  else
  {
    sub_7320(a11);
    return 0;
  }
}

