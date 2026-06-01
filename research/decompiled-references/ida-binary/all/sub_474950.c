__int64 __fastcall xref_tree_t__::vfunc_2(
        QT::QApplication *this,
        unsigned int a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 *a12)
{
  __int64 result; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  double v16; // xmm4_8
  double v17; // xmm5_8
  unsigned int v18; // ebx
  __int64 v19; // rdx
  int v20; // [rsp+Ch] [rbp-1Ch]

  result = QT::QWidget::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      if ( a2 == 7 )
      {
        if ( (int)result <= 26 )
          *(_QWORD *)*a12 = 0;
        return (unsigned int)(result - 27);
      }
      else if ( a2 <= 8 )
      {
        v19 = 334;
        if ( _bittest64(&v19, a2) )
        {
          v20 = result;
          sub_473D20(this, a2, (unsigned int)result, a12, v14, v15, a3, a4, a5, a6, v16, v17, a9, a10);
          return (unsigned int)(v20 - 18);
        }
      }
    }
    else
    {
      v18 = result - 27;
      if ( (int)result <= 26 )
        sub_473D20(this, 0, (unsigned int)result, a12, v14, v15, a3, a4, a5, a6, v16, v17, a9, a10);
      return v18;
    }
  }
  return result;
}
