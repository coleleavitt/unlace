__int64 __fastcall sub_4CEE70(__int64 a1, int a2, int a3)
{
  int v4; // ebp
  __int64 result; // rax
  int v6; // r12d
  QT::QWidget *v7; // rax
  QT::QWidget *v8; // rbp

  v4 = sub_4CEAC0((QT::QStackedWidget **)a1, a2);
  result = sub_4CEAC0((QT::QStackedWidget **)a1, a3);
  if ( v4 != -1 )
  {
    v6 = result;
    if ( (_DWORD)result != -1 )
    {
      v7 = (QT::QWidget *)QT::QStackedWidget::widget(*(QT::QStackedWidget **)(a1 + 72), v4);
      *(_BYTE *)(a1 + 88) = 1;
      v8 = v7;
      QT::QStackedWidget::removeWidget(*(QT::QStackedWidget **)(a1 + 72), v7);
      *(_BYTE *)(a1 + 88) = 0;
      return QT::QStackedWidget::insertWidget(*(QT::QStackedWidget **)(a1 + 72), v6, v8);
    }
  }
  return result;
}
