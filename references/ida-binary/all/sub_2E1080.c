QT::QAbstractScrollArea *__fastcall sub_2E1080(const char *a1, __int64 **a2, double a3)
{
  QT::QAbstractScrollArea *v3; // rbp
  QT::QSplitter *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax

  v3 = nullptr;
  v4 = sub_2E0B40(a1, a2);
  sub_2DE3A0(a3, (__int64)v4, 4194308, nullptr, v5);
  if ( !*((_BYTE *)v4 + 64) )
    v3 = *((QT::QAbstractScrollArea **)v4 + 7);
  v6 = QT::QAbstractScrollArea::viewport(v3);
  QT::QWidget::setFocus(v6, 7);
  return v3;
}
