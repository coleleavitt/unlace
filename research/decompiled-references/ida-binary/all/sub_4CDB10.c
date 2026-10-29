void __fastcall sub_4CDB10(__int64 a1, __int64 a2)
{
  const QT::QObject *v2; // rbx
  QT::QCursor *v3; // rax

  v2 = *(const QT::QObject **)(*(_QWORD *)(a1 + 8) + 16LL);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = (QT::QCursor *)QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, v2);
      if ( v3 )
        break;
      v2 = *(const QT::QObject **)(*((_QWORD *)v2 + 1) + 16LL);
      if ( !v2 )
        return;
    }
    sub_4CBBC0(v3, 0, a2);
  }
}
