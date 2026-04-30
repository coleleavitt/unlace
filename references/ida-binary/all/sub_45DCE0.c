__int64 __fastcall CustomIDAMemo__::vfunc_2(
        QT::QObject *this,
        unsigned int a2,
        __m128 a3,
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
  void **v14; // r8
  double v15; // xmm4_8
  double v16; // xmm5_8
  unsigned int v17; // ebx
  __int64 v18; // rdx
  int v19; // [rsp+Ch] [rbp-1Ch]

  result = QT::QAbstractScrollArea::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      if ( a2 == 7 )
      {
        if ( (int)result <= 22 )
          *(_QWORD *)*a12 = 0;
        return (unsigned int)(result - 23);
      }
      else if ( a2 <= 8 )
      {
        v18 = 334;
        if ( _bittest64(&v18, a2) )
        {
          v19 = result;
          sub_45A1F0(this, a2, (unsigned int)result, a12, v14, a3, a4, a5, a6, v15, v16, a9, a10);
          return (unsigned int)(v19 - 120);
        }
      }
    }
    else
    {
      v17 = result - 23;
      if ( (int)result <= 22 )
        sub_45A1F0(this, 0, (unsigned int)result, a12, v14, a3, a4, a5, a6, v15, v16, a9, a10);
      return v17;
    }
  }
  return result;
}
