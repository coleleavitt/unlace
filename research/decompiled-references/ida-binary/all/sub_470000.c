__int64 __fastcall TextArrows__::vfunc_2(
        char *a1,
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
        _QWORD *a12)
{
  __int64 result; // rax
  double v14; // xmm4_8
  double v15; // xmm5_8
  unsigned int v16; // ebx
  __int64 v17; // rdx
  int v18; // [rsp+Ch] [rbp-1Ch]

  result = QT::QWidget::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      if ( a2 == 7 )
      {
        if ( (int)result <= 5 )
          *(_QWORD *)*a12 = 0;
        return (unsigned int)(result - 6);
      }
      else if ( a2 <= 8 )
      {
        v17 = 334;
        if ( _bittest64(&v17, a2) )
        {
          v18 = result;
          sub_46F210(a1, (const char *)a2, (unsigned int)result, a12, a3, a4, a5, a6, v14, v15, a9, a10);
          return (unsigned int)(v18 - 6);
        }
      }
    }
    else
    {
      v16 = result - 6;
      if ( (int)result <= 5 )
        sub_46F210(a1, nullptr, (unsigned int)result, a12, a3, a4, a5, a6, v14, v15, a9, a10);
      return v16;
    }
  }
  return result;
}
