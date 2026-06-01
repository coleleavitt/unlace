__int64 __fastcall TEAViewer__::vfunc_2(
        QT::QObject *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
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
  double v14; // xmm4_8
  double v15; // xmm5_8
  int v16; // [rsp+Ch] [rbp-1Ch]

  result = EAView__::vfunc_2(a1, a2, a3, (_QWORD *)a4, a5, a6, a7, a8, a9, a10, a11, a12);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 1 )
      {
        v16 = result;
        if ( (_DWORD)result == 1 )
        {
          sub_3A3A20((__int64)a1);
          LODWORD(result) = 1;
        }
        else
        {
          sub_3A3A40((__int64)a1, **(_QWORD **)(a4 + 8), *(double *)a5.m128_u64, a6, a7, a8, v14, v15, a11, a12);
          LODWORD(result) = v16;
        }
      }
      return (unsigned int)(result - 2);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 1 )
        **(_QWORD **)a4 = 0;
      return (unsigned int)(result - 2);
    }
  }
  return result;
}
