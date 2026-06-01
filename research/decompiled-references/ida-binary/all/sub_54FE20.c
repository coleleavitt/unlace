__int64 __fastcall text_area_margin_widget_t__::vfunc_2(QT::QWidget *a1, unsigned int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  void **v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // [rsp+Ch] [rbp-1Ch]

  result = QT::QWidget::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      if ( a2 == 7 )
      {
        if ( (int)result <= 1 )
        {
          **a4 = 0;
          return (unsigned int)(result - 2);
        }
        else
        {
          return (unsigned int)(result - 2);
        }
      }
      else if ( a2 <= 8 )
      {
        v8 = 334;
        if ( _bittest64(&v8, a2) )
        {
          v9 = result;
          sub_54EE50(a1, a2, result, (__int64)a4, v6);
          return (unsigned int)(v9 - 1);
        }
      }
    }
    else
    {
      v7 = result - 2;
      if ( (int)result <= 1 )
        sub_54EE50(a1, 0, result, (__int64)a4, v6);
      return v7;
    }
  }
  return result;
}
