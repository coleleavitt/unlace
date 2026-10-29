__int64 __fastcall form_widget_t__::vfunc_2(
        __int64 a1,
        int a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        _QWORD **a12)
{
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  char v19; // [rsp+0h] [rbp-28h]
  int v20; // [rsp+Ch] [rbp-1Ch]

  result = QT::QWidget::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 12 )
      {
        v20 = result;
        sub_54CA60(a1, (unsigned int)result, (__int64)a12, v14, v15, v16, a3, a4, a5, a6, v17, v18, a9, a10, v19);
        LODWORD(result) = v20;
      }
      return (unsigned int)(result - 13);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 12 )
        **a12 = 0;
      return (unsigned int)(result - 13);
    }
  }
  return result;
}
