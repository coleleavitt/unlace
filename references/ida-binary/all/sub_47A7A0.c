__int64 __fastcall sub_47A7A0(QT::QApplication *a1)
{
  const QT::QObject *(__fastcall *v1)(QT::QApplication *); // rax
  const QT::QObject *v2; // rax
  QT::QObject *v3; // rax

  v1 = *(const QT::QObject *(__fastcall **)(QT::QApplication *))(*((_QWORD *)a1 + 2) + 48LL);
  if ( v1 == IDAApplication__::vfunc_6 )
  {
    v2 = (const QT::QObject *)QT::QApplication::focusWidget(a1);
    v3 = sub_479220((__int64)a1 + 16, v2);
  }
  else
  {
    v3 = v1((QT::QApplication *)((char *)a1 + 16));
  }
  return sub_4CF3F0(v3);
}
