__int64 __fastcall chooser_widget_t__::vfunc_2(
        QT::QMetaObject *a1,
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
        __int64 a12)
{
  __int64 result; // rax
  void **v14; // r8
  double v15; // xmm4_8
  double v16; // xmm5_8
  unsigned int v17; // ebx
  _QWORD *v18; // rdx
  __int64 v19; // rdx
  int v20; // [rsp+Ch] [rbp-1Ch]

  result = QT::QWidget::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      if ( a2 == 7 )
      {
        if ( (int)result <= 21 )
        {
          v18 = *(_QWORD **)a12;
          if ( (_DWORD)result != 20 || **(_DWORD **)(a12 + 8) )
            *v18 = 0;
          else
            *v18 = &unk_8C33A0;
        }
        return (unsigned int)(result - 22);
      }
      else if ( a2 <= 8 )
      {
        v19 = 334;
        if ( _bittest64(&v19, a2) )
        {
          v20 = result;
          sub_548170(a1, a2, (unsigned int)result, a12, v14, a3, a4, a5, a6, v15, v16, a9, a10);
          return (unsigned int)(v20 - 4);
        }
      }
    }
    else
    {
      v17 = result - 22;
      if ( (int)result <= 21 )
        sub_548170(a1, 0, (unsigned int)result, a12, v14, a3, a4, a5, a6, v15, v16, a9, a10);
      return v17;
    }
  }
  return result;
}
