__int64 __fastcall GraphRenderer__::vfunc_2(
        QT::QMetaObject *a1,
        int a2,
        __int64 a3,
        _QWORD **a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 result; // rax
  void **v14; // r8
  double v15; // xmm4_8
  double v16; // xmm5_8
  int v17; // [rsp+Ch] [rbp-1Ch]

  result = AbstractRenderer__::vfunc_2(a1, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 5 )
      {
        v17 = result;
        sub_4671A0(a1, 0, (unsigned int)result, (__int64)a4, v14, a5, a6, a7, a8, v15, v16, a11, a12);
        LODWORD(result) = v17;
      }
      return (unsigned int)(result - 6);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 5 )
        **a4 = 0;
      return (unsigned int)(result - 6);
    }
  }
  return result;
}
