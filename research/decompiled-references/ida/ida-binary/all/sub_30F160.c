__int64 __fastcall sub_30F160(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 320);
  if ( v1 )
    return QT::QMetaObject::cast((QT::QMetaObject *)&off_887F00, *(const QT::QObject **)(*(_QWORD *)(v1 + 8) + 16LL));
  else
    return 0;
}
