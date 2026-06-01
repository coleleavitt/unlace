QT::QGuiApplication *__fastcall sub_4CE090(QT::QGuiApplication *this, QT::QSplitter **a2)
{
  __int64 (__fastcall *v2)(__int64); // rax
  int v3; // eax
  __int64 (__fastcall *v4)(__int64, int); // rax
  const QT::QObject *v5; // rax
  _DWORD *v6; // rsi

  v2 = *((__int64 (__fastcall **)(__int64))*a2 + 58);
  if ( v2 == sub_4C46B0 )
    v3 = QT::QSplitter::count(a2[13]);
  else
    v3 = v2((__int64)a2);
  if ( v3 != 1
    || ((v4 = *((__int64 (__fastcall **)(__int64, int))*a2 + 57), v4 != sub_4C46E0)
      ? (v6 = (_DWORD *)v4((__int64)a2, 0))
      : (v5 = (const QT::QObject *)QT::QSplitter::widget(a2[13], 0),
         v6 = (_DWORD *)QT::QMetaObject::cast((QT::QMetaObject *)&off_899980, v5)),
        v6[10]) )
  {
    QT::QGuiApplication::windowIcon(this);
  }
  else
  {
    (*(void (__fastcall **)(QT::QGuiApplication *))(*(_QWORD *)v6 + 424LL))(this);
  }
  return this;
}
