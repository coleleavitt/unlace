__int64 __fastcall sub_4EEE00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 result; // rax
  __int64 *v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rsi
  QT::QLayout *v9; // rax

  result = *(_QWORD *)(a2 + 8);
  if ( result )
  {
    v6 = *(__int64 **)a2;
    v7 = *(_QWORD *)a2 + 8 * result;
    if ( v7 != *(_QWORD *)a2 )
    {
      do
      {
        v8 = *v6++;
        sub_4EE930((__int64 *)a1, v8, a3, a4, a5);
      }
      while ( (__int64 *)v7 != v6 );
    }
    v9 = (QT::QLayout *)QT::QWidget::layout(*(QT::QWidget **)(a1 + 24));
    return QT::QLayout::addWidget(v9, *(QT::QWidget **)(a1 + 32));
  }
  return result;
}
