const QT::QObject *__fastcall IDAApplication__::vfunc_6(QT::QApplication *a1)
{
  const QT::QObject *v1; // rax

  v1 = (const QT::QObject *)QT::QApplication::focusWidget(a1);
  return sub_479220((__int64)a1, v1);
}
