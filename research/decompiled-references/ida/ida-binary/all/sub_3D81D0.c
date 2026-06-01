void __fastcall windowlist_chooser_t__::vfunc_15(__int64 a1, __int64 a2)
{
  QT::QWidget *v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r12

  if ( a2 >= 0 )
  {
    v2 = *(QT::QWidget **)(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) + 8 * a2);
    sub_4CB2D0(qword_8CD8B8);
    if ( QT::QWidget::window(v2) )
    {
      v3 = QT::QWidget::window(v2);
      v4 = *(_QWORD *)(a1 + 184);
      if ( *(_QWORD *)(v4 + 48) != v3 )
      {
        *(_QWORD *)(v4 + 48) = QT::QWidget::window(v2);
        QT::QWidget::activateWindow(*(QT::QWidget **)(*(_QWORD *)(a1 + 184) + 48LL));
      }
    }
  }
}
