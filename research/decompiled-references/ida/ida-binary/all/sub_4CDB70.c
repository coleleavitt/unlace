void __fastcall sub_4CDB70(QT::QWidget *a1, double a2)
{
  const QT::QObject *v2; // rbx
  __int64 v3; // rax
  QT::QWidget *v4; // rax

  v2 = *(const QT::QObject **)(*((_QWORD *)a1 + 1) + 16LL);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, v2);
      if ( v3 )
        break;
      v2 = *(const QT::QObject **)(*((_QWORD *)v2 + 1) + 16LL);
      if ( !v2 )
        return;
    }
    v4 = (QT::QWidget *)sub_4C5EE0(v3);
    sub_4CB2D0(v4, a1, 1u, a2);
  }
}
