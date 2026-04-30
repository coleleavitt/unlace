__int64 __fastcall diff_fringe_t__::vfunc_2(__int64 a1, unsigned int a2, __int64 a3, __int64 **a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  int v7; // [rsp+Ch] [rbp-1Ch]

  result = QT::QWidget::qt_metacall();
  if ( (int)result >= 0 && a2 <= 8 )
  {
    v6 = 334;
    if ( _bittest64(&v6, a2) )
    {
      v7 = result;
      sub_4638B0(a1, a2, (unsigned int)result, a4);
      return (unsigned int)(v7 - 12);
    }
  }
  return result;
}
