__int64 __fastcall til_dirtree_widget_t__::vfunc_2(
        QT::QAbstractItemView *a1,
        int a2,
        __int64 a3,
        _QWORD **a4,
        double a5,
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

  result = ida_dirtree_widget_t__::vfunc_2(a1, a2, a5, a6, a7, a8, a9, a10, a11, a12, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( !(_DWORD)result )
      {
        sub_3C6400(a1, *a4[1], a5, a6, a7, a8, v14, v15, a11, a12);
        LODWORD(result) = 0;
      }
      return (unsigned int)(result - 1);
    }
    if ( a2 == 7 )
    {
      if ( !(_DWORD)result )
        **a4 = 0;
      return (unsigned int)(result - 1);
    }
  }
  return result;
}
